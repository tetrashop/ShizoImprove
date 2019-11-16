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
        int Width = 30, Heigh = 30;
        AllKeyboardOfWorld t = new AllKeyboardOfWorld();
        ConjunctedShape tt = null;
        //AllKeyLocation
        List<List<String>> Detected = new List<List<String>>();

        MainForm dd = null;
        AllKeyboardOfWorld ConjunctedShapeListRequired = null;
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
            catch (Exception t) { return Wi * Hei; }
            return Dif;
        }
        public bool Detection(int Wi, int Hei)
        {
            try
            {

                Detected.Clear();

                List<String> TempDetected = new List<String>();
                bool Do = false;
                for (int i = 0; i < ConjunctedShapeListRequired.KeyboardAllConjunctionMatrixList.Count; i++)
                {

                    TempDetected = new List<String>();
                    for (int j = 0; j < ConjunctedShapeListRequired.KeyboardAllConjunctionMatrixList[j].Count; j++)
                    {
                        int IndecCurrent = -1;
                        int KeyBoardDif = Wi * Hei;
                        for (int k = 0; k < t.KeyboardAllConjunctionMatrix.Count; k++)
                        {
                            int KeyDif = DifferentBool(ConjunctedShapeListRequired.KeyboardAllConjunctionMatrixList[i][j], t.KeyboardAllConjunctionMatrix[k], Wi, Hei);
                            if (KeyDif < KeyBoardDif)
                            {
                                KeyBoardDif = KeyDif;
                                IndecCurrent = k;
                            }
                        }
                        if (IndecCurrent > -1)
                        {
                            Do = true;
                            TempDetected.Add(t.KeyboardAllStrings[IndecCurrent].ToString());
                        }
                        else
                            return false;
                    }
                    Detected.Add(TempDetected);
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
