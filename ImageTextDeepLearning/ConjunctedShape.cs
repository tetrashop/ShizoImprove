using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;
using ContourAnalysisNS;
using Emgu.CV;
using ContourAnalysisDemo;

namespace ImageTextDeepLearning
{
    [Serializable]
    class ConjunctedShape
    {

        MainForm d = null;
        int Threashold = 5;
        public List<Point> Collection = new List<Point>();
      
        public static List<List<Point>> All = new List<List<Point>>();
        public ConjunctedShape(MainForm dd)
        {

            d = dd;
        }


        public bool ConjunctedShapeCreate(MainForm d)
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
                                Collection.Clear();
                                Collection = new List<Point>();

                            }

                            flag1 = enumerator1.MoveNext();
                            if (!flag1)
                            {



                                break;
                            }
                            Contour<Point> current1 = enumerator1.Current;


                            Point[] PointP1 = current1.ToArray();
                            /* while (true)
                             {
                                 flag2 = enumerator2.MoveNext();
                                 if (!flag2)
                                 {
                                     break;
                                 }
                                 Contour<Point> current2 = enumerator2.Current;

                                 Point[] PointP2 = current2.ToArray();
                                 */
                            //Do Target
                            for (int i = 0; i < PointP1.Length; i++)
                            {
                                for (int j = 0; j < PointP1.Length; j++)
                                {
                                    if (PointP1[i] == PointP1[j])
                                        continue;
                                    if ((System.Math.Abs(PointP1[i].X - PointP1[j].X) < Threashold) && (System.Math.Abs(PointP1[i].Y - PointP1[j].Y) < Threashold))
                                    {
                                        if (!Collection.Contains(PointP1[i]))
                                        {
                                            flag = true;
                                            Collection.Add(PointP1[i]);
                                        }
                                         if (!Collection.Contains(PointP1[j]))
                                         {
                                             flag = true;
                                             Collection.Add(PointP1[j]);
                                         }
                                         

                                    }
                                    // }
                                    //}
                                }
                            }
                        }
                    }while (true);
                }




                System.Windows.Forms.MessageBox.Show("Completed " + All.Count + " .");
            }
            catch (Exception t)
            {
                System.Windows.Forms.MessageBox.Show("Fatual Error!" + t.ToString());
                return false;
            }
            return true;
        }


    }
}
