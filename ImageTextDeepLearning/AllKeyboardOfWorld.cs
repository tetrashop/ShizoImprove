using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Drawing;
namespace ImageTextDeepLearning
{
    class AllKeyboardOfWorld
    {
        int Width = 30, Height = 30;
        List<String> KeyboardAllStrings = new List<String>();
        List<Image> KeyboardAllImage = new List<Image>();
        List<bool[,]> KeyboardAllConjunctionMatrix = new List<bool[,]>();

        public bool CreateString()
        {
            KeyboardAllStrings.Clear();
            try
            {
                for (int i = 0; i < Int64.MaxValue; i++)
                {

                    if (i.ToString().GetType().IsArray)
                    {
                        KeyboardAllStrings.Add(i.ToString());

                    }

                }

            }
            catch (Exception t) { return false; }
            return true;
        }
        bool SaveAll()
        {
            try
            {
                if (!File.Exists("KeyboardAllStrings.asd"))
                {
                    Byte[] Written = new byte[KeyboardAllStrings.Count];
                    for (int i = 0; i < KeyboardAllStrings.Count; i++)
                    {
                        Written[i] = System.Convert.ToByte(KeyboardAllStrings[i]);
                    }
                    File.WriteAllBytes("KeyboardAllStrings.asd", Written);
                }
            }
            catch (Exception t) { return false; }
            return true;
        }
        bool ReadAll()
        {
            try
            {
                if (File.Exists("KeyboardAllStrings.asd"))
                {
                    KeyboardAllStrings.Clear();

                    Byte[] Written = File.ReadAllBytes("KeyboardAllStrings.asd");
                    int i = 0;
                    do
                    {
                        KeyboardAllStrings[i] = System.Convert.ToString(Written[i]);
                        i++;
                    } while (Written[i] != 0);
                }
            }
            catch (Exception t) { return false; }
            return true;
        }
        public bool ConvertAllStringToImage()
        {
            try
            {
                bool Do = false;
                if (!ReadAll())
                {
                    Do = CreateString();
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
                        e.DrawString(KeyboardAllStrings[i], new Font(Font.FromHdc(IntPtr.Zero), FontStyle.Regular), new SolidBrush(Color.Black), new Rectangle(0, 0, Width, Height));
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
                }
            }
            catch (Exception t) { return false; }

            return true;
        }
        public bool ConvertAllShapesToImage(List<Bitmap> Temp)
        {
            try
            {
                
                    for (int i = 0; i < KeyboardAllStrings.Count; i++)
                    {

                        bool[,] Tem = new bool[Width, Height];
                        for (int k = 0; k < Width; k++)
                            for (int p = 0; p < Height; p++)
                            {
                                if (Temp[i].GetPixel(k, p) != Color.White)
                                    Tem[k, p] = true;

                            }
                        KeyboardAllConjunctionMatrix.Add(Tem);
                    }
                
            }
            catch (Exception t) { return false; }

            return true;
        }
    }
}
