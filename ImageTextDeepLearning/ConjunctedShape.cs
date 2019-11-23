/***********************************************************************************
 * Ramin Edjlal*********************************************************************
 CopyRighted 1398/0802**************************************************************
 TetraShop.Ir***********************************************************************
 ***********************************************************************************/
using System;
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
    //Class for create conjuncted shape
    [Serializable]
    class ConjunctedShape
    {
        //initiate global vars
        int Width = 30, Height = 30;
        MainForm d = null;
        int Threashold = 5;
        public List<Point> Collection = new List<Point>();

        public List<List<Point>> All = new List<List<Point>>();
        public List<Bitmap> AllImage = new List<Bitmap>();
        //Constructor
        public ConjunctedShape(MainForm dd)
        {

            d = dd;
        }

        //Max of list
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
        //Max of list
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
        //Min of list
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
        //Min of list
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
        //max of to object
        int MaxMax(int maxx, int maxy)
        {
            if (maxx < maxy)
                return maxy;
            return maxx;

        }
        //min of tor object
        int MinMin(int minx, int miny)
        {
            if (minx < miny)
                return minx;
            return miny;

        }
        //Create shape of conjuncted countor poins
        public bool CreateSAhapeFromConjucted(int Wi, int Hei)
        {
            //create shapes at list
            bool Do = ConjunctedShapeCreate(d);

            try
            {
                //when is true
                if (Do)
                {
                    //clear list
                    AllImage.Clear();
                    //for all items
                    for (int i = 0; i < All.Count; i++)
                    {
                        //initate constructor object and initate...
                        List<Bitmap> TempAllImage = new List<Bitmap>();


                        Bitmap Temp = null;
                        List<Point> Tem = new List<Point>();
                        //retrive current item
                        Tem = All[i];
                        //retrive min and max of tow X and Y
                        int MiX = MinX(Tem), MiY = MinY(Tem), MaX = MaxX(Tem), MaY = MaxY(Tem);                     
                  
                        //Map to left up corner
                        for (int k = 0; k < Tem.Count; k++)
                            Tem[k] = new Point(Tem[k].X - MiX, Tem[k].Y - MiY);
                        //again
                        MiX = MinX(Tem);
                        MiY = MinY(Tem);
                        MaX = MaxX(Tem);
                        MaY = MaxY(Tem);

                        //centeralized
                        int Mx = (MaX + MiX) / 2;
                        int My = (MiY + MaY) / 2;
                        Mx *= 2;
                        My *= 2;
                        //initate new root image empty
                        Temp = new Bitmap(Mx, My);

                        //Draw fill white image
                        Graphics e = Graphics.FromImage(Temp);
                        e.FillRectangle(Brushes.White, new Rectangle(((int)(((double)Mx) * 0.01)), ((int)(((double)My) * 0.01)), Mx - ((int)(((double)Mx) * 0.01)), My - ((int)(((double)My) * 0.01))));



                        //draw all points
                        e.DrawLines(Pens.Black, Tem.ToArray());



                   
                       /* Do = ColorizedCountreImageConjunction(ref Temp);
                        if (!Do)
                        {
                            MessageBox.Show("Coloriezed Fatal Error");
                            return false;
                        }
                        */
                        //resized to proper space
                        Temp = new Bitmap(Temp, new Size(Wi, Hei));

                        //add image
                        AllImage.Add(Temp);
                        e.Dispose();

                    }


                }
                else
                {
                    //when is not ready return unsuccessfull
                    return false;
                }
            }
            catch (Exception t)
            {
                //when existence of exeption return unsuccessfull
                //System.Windows.Forms.MessageBox.Show("Fatual Error!" + t.ToString());

                return false;
            }
            //clear unneed and free memmory
            All.Clear();
            Collection.Clear();
            return true;
        }
        //Colorized list of image
        bool ColorizedCountreImageCommon(List<Bitmap> Im)
        {
            try
            {
                //for all list items
                for (int i = 0; i < Im.Count; i++)
                {
                    //create graphics for current image
                    Graphics e = Graphics.FromImage(Im[i]);
                    //for all image width
                    for (int j = 0; j < Im[i].Width; j++)
                    {
                        //found of tow orthogonal detinated points
                        PointF[] Po = new PointF[2];
                        int nu = 0;
                        for (int k = 0; k < Im[i].Height; k++)
                        {
                            //first
                            if (nu == 0)
                            {
                                if (!(Im[i].GetPixel(j, k).A == 255 && Im[i].GetPixel(j, k).R == 255 && Im[i].GetPixel(j, k).B == 255 && Im[i].GetPixel(j, k).G == 255))
                                {
                                    Po[0] = new PointF(j, k);
                                    nu++;
                                }
                            }
                            else//second
                            if (nu == 1)
                            {
                                if (!(Im[i].GetPixel(j, k).A == 255 && Im[i].GetPixel(j, k).R == 255 && Im[i].GetPixel(j, k).B == 255 && Im[i].GetPixel(j, k).G == 255))
                                {
                                    Po[1] = new PointF(j, k);
                                    nu++;
                                    //draw linnes and free var to coninue
                                    e.DrawLines(Pens.Black, Po);
                                    nu = 0;
                                }
                            }
                        }
                    }
                    //Dispose
                    e.Dispose();

                }


            }
            catch (Exception t)
            {
                MessageBox.Show(t.ToString());
                //return unsuccessfull
                return false;
            }
            //return successfull
            return true;
        }
        //Colorized an image
        bool ColorizedCountreImageCommmon(Bitmap Im)
        {
            try
            {

                //create graphics for current image
                Graphics e = Graphics.FromImage(Im);
                //for all image width
                for (int j = 0; j < Im.Width; j++)
                {
                    //found of tow orthogonal detinated points
                    Point[] Po = new Point[2];
                    int nu = 0;
                    for (int k = 0; k < Im.Height; k++)
                    {
                        //first
                        if (nu == 0)
                        {
                            if (!(Im.GetPixel(j, k).A == 255 && Im.GetPixel(j, k).R == 255 && Im.GetPixel(j, k).B == 255 && Im.GetPixel(j, k).G == 255))
                            {
                                Po[0] = new Point(j, k);
                                nu++;
                            }
                        }
                        else//second
                        if (nu == 1)
                        {
                            if (!(Im.GetPixel(j, k).A == 255 && Im.GetPixel(j, k).R == 255 && Im.GetPixel(j, k).B == 255 && Im.GetPixel(j, k).G == 255))
                            {
                                Po[1] = new Point(j, k);
                                nu++;
                                //draw linnes and free var to coninue
                                e.DrawLines(Pens.Black, Po);
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
        //Create Conjuncted image
        bool ConjunctedShapeCreate(MainForm d)
        {
            try
            {
                //get counter points of foreign
                bool flag = true;
                using (List<Contour<Point>>.Enumerator enumerator1 = d.processor.contours.GetEnumerator())
                {
                    //do
                    do
                    {
                        //when is finished break
                        if (!flag)
                        {
                            break;
                        }
                        else
                            flag = false;

                        bool flag1 = false, flag2 = false;
                        //while
                        while (true)
                        {
                            //when there is not and is not empty at list
                            if (!All.Contains(Collection) && Collection.Count > 1)
                            {
                                //add collection
                                All.Add(Collection);
                                Collection = new List<Point>();

                            }
                            //next enumerator
                            flag1 = enumerator1.MoveNext();
                            //when is finished break 
                            if (!flag1)
                            {



                                break;
                            }
                            //current target
                            Contour<Point> current1 = enumerator1.Current;

                            //current points
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
