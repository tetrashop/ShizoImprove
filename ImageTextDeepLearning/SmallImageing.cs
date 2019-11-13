using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;
using System.Threading.Tasks;
namespace ImageTextDeepLearning
{
    class SmallImageing
    {
        public int i = 0, j = 0;
        public Image Root = null;
        public Image RootConjuction = null;
        public int index = -1, RootWidth = -1, RootHeight = -1, PiceX = -1, PiceY = -1;
        public List<Image> imgarray = null;
        public List<int[]> imgarrayindex = new List<int[]>();
        public bool Splited = false, Conjucted = false;
        public bool SplitedBegin = false, ConjuctedBegin = false;
        public SmallImageing(Image Roo, int PicX = 1, int PicY = 1)
        {
            Root = Roo;
            RootWidth = Root.Width;
            RootHeight = Root.Height;
            PiceX = PicX;
            PiceY = PicY;
            //Splitation(PiceX, PiceY);
        }

        public bool Splitation(System.Windows.Forms.PictureBox d)
        {
            try
            {
                if (Root != null)
                {
                    SplitedBegin = true;
                    ConjuctedBegin = false;
                    imgarray = new List<Image>();
                    index = 0;
                    //Parallel.For(0, Root.Width, i =>
                    for (i = 0; i < Root.Width; i += PiceX)
                    {
                        //Parallel.For(0, Root.Height, j =>
                        for (j = 0; j < Root.Height; j += PiceY)
                        {
                            Object O = new Object();
                            lock (O)
                            {
                                imgarray.Add(new Bitmap(PiceX, PiceY));
                                index++;
                                var graphics = Graphics.FromImage(imgarray[imgarray.Count - 1]);
                                graphics.DrawImage(Root, new Rectangle(0, 0, PiceX, PiceY), new Rectangle(i, j, PiceX, PiceY), GraphicsUnit.Pixel);
                                graphics.Dispose();

                                d.BackgroundImage = imgarray[imgarray.Count - 1];
                                d.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
                                d.Refresh();
                                d.Update();

                                int[] a = new int[2];
                                a[0] = i;
                                a[1] = j;
                                imgarrayindex.Add(a);
                            }
                        }//);
                    }//);

                    Splited = true;
                    Conjucted = false;
                }
                else
                    return false;
            }
            catch (Exception t)
            {
                return false;
            }
            return true;
        }
        public bool Conjunction(System.Windows.Forms.PictureBox d, System.Windows.Forms.PictureBox b)
        {
            try
            {
                if (Splited)
                {
                    ConjuctedBegin = true;
                    SplitedBegin = false;
                    RootConjuction = new Bitmap(RootWidth, RootHeight);
                    index = imgarray.Count;

                    //Parallel.For(0, index, i =>
                    for (i = 0; i < index; i++)
                    {
                        Object O = new Object();
                        lock (O)
                        {
                            var graphics = Graphics.FromImage(RootConjuction);
                            int k = imgarrayindex[i][0];
                            int p = imgarrayindex[i][1];
                            graphics.DrawImage(imgarray[i], new Rectangle(k, p, PiceX, PiceY), new Rectangle(0, 0, RootWidth, RootHeight), GraphicsUnit.Pixel);
                            d.BackgroundImage = imgarray[i];
                            d.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
                            d.Refresh();
                            d.Update();
                            b.BackgroundImage = RootConjuction;
                            b.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
                            b.Refresh();
                            b.Update();
                            graphics.Dispose();
                        }
                    }//);

                    Conjucted = true;
                    Splited = false;
                    imgarray.Clear();
                }
                else
                    return false;
            }
            catch (Exception t)
            { return false; }
            return true;
        }
    }
}  