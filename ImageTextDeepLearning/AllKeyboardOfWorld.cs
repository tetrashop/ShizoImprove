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
    class AllKeyboardOfWorld
    {
        int Width = 30, Height = 30;
        public List<String> KeyboardAllStrings = new List<String>();
        List<Image> KeyboardAllImage = new List<Image>();
        public List<bool[,]> KeyboardAllConjunctionMatrix = new List<bool[,]>();
        public List<List<bool[,]>> KeyboardAllConjunctionMatrixList = new List<List<bool[,]>>();

        public bool CreateString()
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
            return true;
        }
        bool SaveAll()
        {
            try
            {
                if (!File.Exists("KeyboardAllStrings.asd"))
                {
                    /*  byte[] Written = new byte[KeyboardAllStrings.Count];
                      for (int i = 0; i < KeyboardAllStrings.Count; i++)
                      {
                          Written[i] = System.Convert.ToByte(KeyboardAllStrings[i]);
                      }
                      File.WriteAllBytes("KeyboardAllStrings.asd", Written);
                 */
                    lock (KeyboardAllStrings)
                    {
                        for (int i = 0; i < KeyboardAllStrings.Count; i++)
                        {
                            File.AppendAllText("KeyboardAllStrings.asd", KeyboardAllStrings[i]);
                        }
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

                    /* Byte[] Written = File.ReadAllBytes("KeyboardAllStrings.asd");
                     int i = 0;
                     do
                     {
                         KeyboardAllStrings[i] = System.Convert.ToString(Written[i]);
                         i++;
                     } while (Written[i] != 0);                   

               */

                    String Tem = File.ReadAllText("KeyboardAllStrings.asd");
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
                    }
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
                    Do = true;
                if (Do)
                {
                    KeyboardAllImage.Clear();
                    for (int i = 0; i < KeyboardAllStrings.Count; i++)
                    {
                        Bitmap Temp = new Bitmap(Width, Height);
                        Graphics e = Graphics.FromImage(Temp);
                        e.DrawString(KeyboardAllStrings[i], new Font(d.Font.FontFamily, 16F), Brushes.Black, new Rectangle(0, 0, Width, Height));
                        KeyboardAllImage.Add(Temp);
                        bool[,] Tem = new bool[Width, Height];
                        for (int k = 0; k < Width; k++)
                            for (int p = 0; p < Height; p++)
                            {
                                if (Temp.GetPixel(k, p) == Color.Black)
                                    Tem[k, p] = true;

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
            KeyboardAllImage.Clear();
            return true;
        }
        public bool ConvertAllImageToMatrix(List<List<Bitmap>> Temp)
        {
            try
            {
                KeyboardAllConjunctionMatrixList.Clear();

                for (int i = 0; i < Temp.Count; i++)
                {
                    List<bool[,]> Te = new List<bool[,]>();
                    for (int j = 0; j < Temp[i].Count; j++)
                    {

                        bool[,] Tem = new bool[Width, Height];
                        for (int k = 0; k < Width; k++)
                            for (int p = 0; p < Height; p++)
                            {
                                if (Temp[i][j].GetPixel(k, p).ToArgb() == 0)
                                    Tem[k, p] = true;

                            }
                        Te.Add(Tem);
                    }
                    KeyboardAllConjunctionMatrixList.Add(Te);

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
