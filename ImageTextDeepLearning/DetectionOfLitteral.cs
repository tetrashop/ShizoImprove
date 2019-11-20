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
        int Width = 10, Heigh = 10;
        AllKeyboardOfWorld t = new AllKeyboardOfWorld();
        public ConjunctedShape tt = null;
        //AllKeyLocation
        public List<String> Detected = new List<String>();

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
                ConjunctedShapeListRequired.ConvertAllImageToMatrixConjucted(tt.AllImage);
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
        bool DifferentBool(bool[,] Key, bool[,] Src, int Wi, int Hei)
        {
            bool Dif = false;
            if (Wi != Hei)
                Dif = false;
            try
            {
                Dif = LearningMachine.Interpolate.Similarity(Key, Src, Wi);
            }
            catch (Exception t) { return false; }
            return Dif;
        }
        public bool Detection(int Wi, int Hei)
        {
            try
            {

                Detected.Clear();

                String TempDetected = "";
                bool Do = false;
                for (int i = 0; i < ConjunctedShapeListRequired.KeyboardAllConjunctionMatrixList.Count; i++)
                {

                  
                    int IndecCurrent = -1;
                    bool KeyBoardDif = false;
                    for (int k = 0; k < t.KeyboardAllConjunctionMatrix.Count; k++)
                    {
                        bool KeyDif = DifferentBool(ConjunctedShapeListRequired.KeyboardAllConjunctionMatrixList[i], t.KeyboardAllConjunctionMatrix[k], Wi, Hei);
                        if (KeyDif || KeyBoardDif)
                        {
                            KeyBoardDif = KeyDif;
                            IndecCurrent = k;
                            break;
                        }
                    }
                    if (IndecCurrent > -1)
                    {
                        Do = true;
                        TempDetected = t.KeyboardAllStrings[IndecCurrent].ToString();
                    }
                    else
                        return false;
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
