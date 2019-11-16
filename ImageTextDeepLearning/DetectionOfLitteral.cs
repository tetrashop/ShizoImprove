using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;
using ContourAnalysisDemo;
namespace ImageTextDeepLearning
{
    
    class DetectionOfLitteral
    {
        int Width = 3, Heigh = 30;
        AllKeyboardOfWorld t = new AllKeyboardOfWorld();
        ConjunctedShape tt = null;
        //AllKeyLocation
        List<List<String>> Detected = new List<List<String>>();
        
        MainForm dd = null;
        AllKeyboardOfWorld ConjunctedShapeListRequired  = null;
        public DetectionOfLitteral(MainForm d)
        {
            try
            {
                dd = d;
                t.ConvertAllStringToImage(d);
                tt = new ConjunctedShape(d);
                tt.CreateSAhapeFromConjucted(Width, Heigh);
                ConjunctedShapeListRequired = new AllKeyboardOfWorld();
                ConjunctedShapeListRequired.ConvertAllImageToMatrix(tt.AllImage);
                Detection(Width, Heigh);
            }
            catch (Exception te)
            {
                System.Windows.Forms.MessageBox.Show("Fatual Error!" + te.ToString());
            }
            finally
            {
                System.Windows.Forms.MessageBox.Show("Completed Detetcted " + Detected.Count);
            }
        }
        int DifferentBool(bool[,] Key, bool[,] Src, int Wi, int Hei)
        {
            int Dif = 0;
            try
            {
                for (int i = 0; i < Wi; i++)
                {
                    for (int j = 0; j < Hei; j++)
                    {
                        if (Key[i, j] != Src[i, j])
                            Dif++;
                    }
                }
            }
            catch (Exception t) { return Wi*Hei; }
            return Dif;
        }
        public bool Detection(int Wi,int Hei)
        {
            try
            {

                int KeyBoardDif = Wi * Hei;
                Detected.Clear();
                int k = 0;
                do
                {
                    List<String> TempDetected = new List<String>();
                    bool Do = false;
                    for (int i = 0; i < t.KeyboardAllConjunctionMatrix.Count; i++)
                    {
                        int IndecCurrent = -1;

                        for (int j = 0; j < ConjunctedShapeListRequired.KeyboardAllConjunctionMatrix.Count; j++)
                        {
                            int KeyDif = DifferentBool(t.KeyboardAllConjunctionMatrix[i], ConjunctedShapeListRequired.KeyboardAllConjunctionMatrix[j], Wi, Hei);
                            if (KeyDif < KeyBoardDif)
                            {
                                KeyBoardDif = KeyDif;
                                IndecCurrent = i;
                            }

                        }
                        if (t.KeyboardAllConjunctionMatrix.Count == t.KeyboardAllStrings.Count)
                        {
                            Do = true;
                             TempDetected.Add(t.KeyboardAllStrings[IndecCurrent]);
                            //Detected.Add(t.KeyboardAllStrings[IndecCurrent]);


                        }
                        else
                        {
                            Do = true;
                               TempDetected.Add("");
                            //Detected.Add("");

                        }
                    }
                    if (Do)
                        Detected.Add(TempDetected);
                    k++;
                } while (k < ConjunctedShapeListRequired.KeyboardAllConjunctionMatrix.Count);

            }
            catch (Exception t)
            {
                return false;
            }
            return true;
        }
    }
}
