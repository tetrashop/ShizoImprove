using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Drawing;
using ContourAnalysisDemo;
namespace ImageTextDeepLearning
{
    [Serializable]
    class AllKeyboardOfWorld
    {
        int Width = 10, Height = 10;
        public List<String> KeyboardAllStrings = new List<String>();
        List<Image> KeyboardAllImage = new List<Image>();
        public List<bool[,]> KeyboardAllConjunctionMatrix = new List<bool[,]>();
        public List<bool[,]> KeyboardAllConjunctionMatrixList = new List<bool[,]>();

        public bool CreateString()
        {
            if (KeyboardAllStrings.Count == 0)
            {
                KeyboardAllStrings.Clear();
                try
                {
                    for (int i = 0; i < char.MaxValue; i++)
                    {
                        Type t = ((char)i).GetType();
                        if (t.Equals(typeof(char)) && t.IsVisible && t.IsSerializable)
                        {
                            //if (((char)i).ToString().Contains("\\u"))
                            //continue;
                            int ch = i;
                            if ((ch >= 0x0020 && ch <= 0xD7FF) ||
                                    (ch >= 0xE000 && ch <= 0xFFFD) ||
                                    ch == 0x0009 ||
                                    ch == 0x000A ||
                                    ch == 0x000D)
                            {
                                if (!KeyboardAllStrings.Contains(((char)i).ToString()))
                                    KeyboardAllStrings.Add(((char)i).ToString());
                            }
                        }

                    }

                }
                catch (Exception t)
                {
                    return false;
                }
            }
            return true;
        }
        bool SaveAll()
        {
            try
            {
                if (!File.Exists("KeyboardAllStrings.asd"))
                {

                    /*   lock (KeyboardAllStrings)
                       {
                           for (int i = 0; i < KeyboardAllStrings.Count; i++)
                           {
                               File.AppendAllText("KeyboardAllStrings.asd", KeyboardAllStrings[i]);
                           }
                       }*/

                    if (this.KeyboardAllImage.Count > 0)
                    {
                        Refrigtz.TakeRoot t = new Refrigtz.TakeRoot();
                        t.Save(this, "KeyboardAllStrings.asd");

                    }
                }
                else {
                    File.Delete("KeyboardAllStrings.asd");
                    if (this.KeyboardAllImage.Count > 0)
                    {
                        Refrigtz.TakeRoot t = new Refrigtz.TakeRoot();
                        t.Save(this, "KeyboardAllStrings.asd");

                    }
                }

            }

            catch (Exception t)
            {
                //System.Windows.Forms.MessageBox.Show("Fatual Error!" + t.ToString()); return false;
            }
            return true;
        }
        bool ReadAll()
        {
            try
            {
                if (File.Exists("KeyboardAllStrings.asd"))
                {
                    KeyboardAllStrings.Clear();
                    KeyboardAllImage.Clear();
                    KeyboardAllConjunctionMatrix.Clear();


                    /* String Tem = File.ReadAllText("KeyboardAllStrings.asd");
                     if (Tem.Length > 0)
                     {
                         for (int i = 0; i < Tem.Length; i++)
                         {
                             KeyboardAllStrings.Add(Tem[i].ToString());
                         }
                     }
                     else
                     {
                         bool Do = CreateString();
                         if (!Do)
                             return false;
                     }*/
                    Refrigtz.TakeRoot tr = new Refrigtz.TakeRoot();
                    AllKeyboardOfWorld t = tr.Load("KeyboardAllStrings.asd");
                    this.KeyboardAllConjunctionMatrix = t.KeyboardAllConjunctionMatrix;
                    this.KeyboardAllConjunctionMatrixList = t.KeyboardAllConjunctionMatrixList;
                    this.KeyboardAllImage = t.KeyboardAllImage;
                    this.KeyboardAllStrings = t.KeyboardAllStrings;

                }
                else
                    return false;
            }
            catch (Exception t) { return false; }
            return true;
        }
        public bool ConvertAllStringToImage(MainForm d)
        {
            try
            {
                bool Do = false;
                if (!ReadAll())
                {
                    Do = CreateString();
                    if (Do)
                        Do = SaveAll();
                    if (!Do)
                    {
                        //System.Windows.Forms.MessageBox.Show("Fatual Error!");
                        return false;
                    }
                }
                else
                {
                    Do = true;
                    
                }
                if (Do && KeyboardAllImage.Count == 0)
                {
                    KeyboardAllImage.Clear();
                    for (int i = 0; i < KeyboardAllStrings.Count; i++)
                    {
                        Bitmap Temp = new Bitmap(Width, Height);
                        Graphics e = Graphics.FromImage(Temp);
                        e.DrawString(KeyboardAllStrings[i], new Font(d.Font.FontFamily, 1F * ((Width + Height) / 2)), Brushes.Black, new Rectangle(0, 0, Width, Height));
                        e.Dispose();
                        KeyboardAllImage.Add(Temp);
                        bool[,] Tem = new bool[Width, Height];
                        for (int k = 0; k < Width; k++)
                            for (int p = 0; p < Height; p++)
                            {
                                if (!(Temp.GetPixel(k,p).A == 255 && Temp.GetPixel(k,p).R == 255 && Temp.GetPixel(k,p).B == 255 && Temp.GetPixel(k,p).G == 255))
                                    Tem[k, p] = true;
                                else
                                    Tem[k, p] = false;

                            }
                        KeyboardAllConjunctionMatrix.Add(Tem);
                    }
                    Do = SaveAll();
                    //if (!Do)
                    //System.Windows.Forms.MessageBox.Show("Fatual Error!");
                    //else
                    //System.Windows.Forms.MessageBox.Show("Completed " + KeyboardAllConjunctionMatrix.Count + " .");
                }
                //else
                //System.Windows.Forms.MessageBox.Show("Fatual Error!");

            }
            catch (Exception t)
            {
                //System.Windows.Forms.MessageBox.Show("Fatual Error!");
                return false;
            }
            //KeyboardAllImage.Clear();
            return true;
        }
        public bool ConvertAllTempageToMatrix(List<Bitmap> Temp)
        {
            try
            {
                if (KeyboardAllConjunctionMatrixList.Count == 0)
                {
                    KeyboardAllConjunctionMatrixList.Clear();

                    for (int i = 0; i < Temp.Count; i++)
                    {
                        List<bool[,]> Te = new List<bool[,]>();


                        bool[,] Tem = new bool[Width, Height];
                        for (int k = 0; k < Width; k++)
                        {
                            for (int p = 0; p < Height; p++)
                            {
                                if (!(Temp[i].GetPixel(k,p).A == 255 && Temp[i].GetPixel(k,p).R == 255 && Temp[i].GetPixel(k,p).B == 255 && Temp[i].GetPixel(k,p).G == 255))

                                    Tem[k, p] = true;
                                else
                                    Tem[k, p] = false;

                            }
                        }
                        KeyboardAllConjunctionMatrixList.Add(Tem);

                    }
                }
                else
                    return true;
            }
            catch (Exception t)
            {
                return false;
            }
            if (!SaveAll())
            {
                return false;
            }
            return true;
        }
    }
}
