﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;
using ContourAnalysisNS;
using Emgu.CV;
using ContourAnalysisDemo;
using System.Windows.Forms;

namespace ImageTextDeepLearning
{
    [Serializable]
    class ConjunctedShape
    {
        int Width = 30, Height = 30;
        MainForm d = null;
        int Threashold = 5;
        public List<Point> Collection = new List<Point>();

        public List<List<Point>> All = new List<List<Point>>();
        public List<Bitmap> AllImage = new List<Bitmap>();
        public ConjunctedShape(MainForm dd)
        {

            d = dd;
        }


        int MaxX(List<Point> Tem)
        {
            int te = 0;
            for (int i = 0; i < Tem.Count; i++)
            {
                if (te < Tem[i].X)
                    te = Tem[i].X;
            }
            return te;
        }
        int MaxY(List<Point> Tem)
        {
            int te = 0;
            for (int i = 0; i < Tem.Count; i++)
            {
                if (te < Tem[i].Y)
                    te = Tem[i].Y;

            }
            return te;
        }
        int MinX(List<Point> Tem)
        {
            int te = Int32.MaxValue;
            for (int i = 0; i < Tem.Count; i++)
            {
                if (te > Tem[i].X)
                    te = Tem[i].X;

            }
            return te;
        }
        int MinY(List<Point> Tem)
        {
            int te = Int32.MaxValue;
            for (int i = 0; i < Tem.Count; i++)
            {
                if (te > Tem[i].Y)
                    te = Tem[i].Y;
            }
            return te;
        }
        public bool CreateSAhapeFromConjucted(int Wi, int Hei)
        {
            bool Do = ConjunctedShapeCreate(d);

            try
            {
                if (Do)
                {
                    AllImage.Clear();
                    for (int i = 0; i < All.Count; i++)
                    {
                        List<Bitmap> TempAllImage = new List<Bitmap>();


                        Bitmap Temp = null;
                        List<Point> Tem = new List<Point>();
                        Tem = All[i];
                        int MiX = MinX(Tem), MiY = MinY(Tem), MaX = MaxX(Tem), MaY = MaxY(Tem);
                        for (int k = 0; k < Tem.Count; k++)
                            Tem[k] = new Point(Tem[k].X - MiX, Tem[k].Y - MiY);

                        MiX = MinX(Tem);
                        MiY = MinY(Tem);
                        MaX = MaxX(Tem);
                        MaY = MaxY(Tem);


                        Temp = new Bitmap(MaX, MaY);

                        for (int k = 0; k < Tem.Count; k++)
                        {
                            Graphics e = Graphics.FromImage(Temp);
                            e.DrawString(".", new Font(d.Font.FontFamily, 1F), Brushes.Black, new PointF(Tem[k].X, Tem[k].Y));
                            e.Dispose();

                        }
                        Do = ColorizedCountreImage(Temp);
                        if (!Do)
                        {
                            MessageBox.Show("Coloriezed Fatal Error");
                            return false;
                        }
                        Temp = new Bitmap(Temp, new Size(Wi, Hei));

                        AllImage.Add(Temp);

                    }


                }
                else
                {

                    return false;
                }
            }
            catch (Exception t)
            {
                //System.Windows.Forms.MessageBox.Show("Fatual Error!" + t.ToString());

                return false;
            }
            All.Clear();
            Collection.Clear();
            return true;
        }
        bool ColorizedCountreImage(List<Bitmap> Im)
        {
            try
            {
                for (int i = 0; i < Im.Count; i++)
                {
                    Graphics e = Graphics.FromImage(Im[i]);
                    for (int j = 0; j < Im[i].Width; j++)
                    {
                        Point[] Po = new Point[2];
                        int nu = 0;
                        for (int k = 0; k < Im[i].Height; k++)
                        {
                            if (nu == 0)
                            {
                                if (Im[i].GetPixel(j, k).ToArgb() == 0)
                                {
                                    Po[0] = new Point(j, k);
                                    nu++;
                                }
                            }
                            else
                            if (nu == 1)
                            {
                                if (Im[i].GetPixel(j, k).ToArgb() == 0)
                                {
                                    Po[1] = new Point(j, k);
                                    nu++;
                                    e.DrawLine(new Pen(Brushes.Black), Po[0], Po[1]);
                                    nu = 0;
                                }
                            }
                        }
                    }


                }


            }
            catch (Exception t)
            {
                MessageBox.Show(t.ToString());

                return false;
            }
            return true;
        }
        bool ColorizedCountreImage(Bitmap Im)
        {
            try
            {

                Graphics e = Graphics.FromImage(Im);
                for (int j = 0; j < Im.Width; j++)
                {
                    Point[] Po = new Point[2];
                    int nu = 0;
                    for (int k = 0; k < Im.Height; k++)
                    {
                        if (nu == 0)
                        {
                            if (Im.GetPixel(j, k).ToArgb() == 0)
                            {
                                Po[0] = new Point(j, k);
                                nu++;
                            }
                        }
                        else 
                        if (nu == 1)
                        {
                            if (Im.GetPixel(j, k).ToArgb() == 0)
                            {
                                Po[1] = new Point(j, k);
                                nu++;
                                e.DrawLine(new Pen(Brushes.Black), Po[0], Po[1]);
                                nu = 0;
                            }
                        }
                    }
                }





            }
            catch (Exception t)
            {
                MessageBox.Show(t.ToString());

                return false;
             }
            return true;
        }

        bool ConjunctedShapeCreate(MainForm d)
        {
            try
            {
                bool flag = true;
                using (List<Contour<Point>>.Enumerator enumerator1 = d.processor.contours.GetEnumerator())
                {

                    do
                    {
                        if (!flag)
                        {
                            break;
                        }
                        else
                            flag = false;

                        bool flag1 = false, flag2 = false;
                        while (true)
                        {

                            if (!All.Contains(Collection) && Collection.Count > 1)
                            {
                                All.Add(Collection);
                                Collection = new List<Point>();

                            }

                            flag1 = enumerator1.MoveNext();
                            if (!flag1)
                            {



                                break;
                            }
                            Contour<Point> current1 = enumerator1.Current;


                            Point[] PointP1 = current1.ToArray();

                            //Do Target
                            for (int i = 0; i < PointP1.Length; i++)
                            {
                                if (!Collection.Contains(PointP1[i]))
                                {
                                    flag = true;
                                    Collection.Add(PointP1[i]);
                                }

                            }
                        }
                    } while (true);
                }
            }
            catch (Exception t)
            {
                return false;
            }
            return true;
        }


    }
}
