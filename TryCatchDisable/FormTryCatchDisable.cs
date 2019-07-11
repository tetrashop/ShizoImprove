using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Windows.Forms;

namespace TryCatchDisable
{
    public partial class FormTryCatchDisable : Form
    {
        static void Log(Exception ex)
        {
            try
            {
                Object a = new Object();
                lock (a)
                {
                    string stackTrace = ex.ToString();
                    File.AppendAllText("\\ErrorProgramRun.txt", stackTrace + ": On" + DateTime.Now.ToString()); // path of file where stack trace will be stored.
                }
            }
            catch (Exception t)
            {
                Log(t);
            }
        }
        public FormTryCatchDisable()
        {
            InitializeComponent();
        }

        private void buttonTryCatchDisable_Click(object sender, EventArgs e)
        {
            openFileDialogTryCatchDisable.ShowDialog();
            String A = openFileDialogTryCatchDisable.FileName;
            String Contain = System.IO.File.ReadAllText(A);
            try
            {
            //   do
            //    {
                    /*  int P = 0;
                      if (Contain.Substring(A1, Contain.Length - A1).Equals("/*try"))
                          P = Contain.Substring(A1, Contain.Length - A1).IndexOf("/*try") + A1;
                      //do { P++; } while (!Contain.Substring(P, Contain.Length - P).Equals("/*try") && P < Contain.Length);
                      if (P < Contain.Length && P > 0)
                      {
                          A1 = P + 1;
                          A2 = P + 1;
                      }
                      else
                      {

                          A1 = Contain.Substring(A1, Contain.Length - A1).IndexOf("try");
                          A2 = A1;
                      }


                      while (!(Contain[A2].Equals('{')))
                          A2++;
                      A1++;
                      Contain = Contain.Replace(Contain.Substring(A1, A1 - Contain.IndexOf("try")), "/*" + Contain.Substring(Contain.IndexOf("try"), A1 - Contain.IndexOf("try")));
                 */
                    int A2 = Contain.IndexOf("try");
                    TryReplace(ref Contain, A2, A2, false);
         //       } while (A1<Contain.Length);
            }
            catch (Exception t) { Log(t); }
            try
            {
                int A2 = Contain.IndexOf("catch");
                CatchReplace(ref Contain, A2, A2, false);

            }
            catch (Exception t) { Log(t); }
            saveDialogFileTryCatchDisable.ShowDialog();
            System.IO.File.WriteAllText(saveDialogFileTryCatchDisable.FileName, Contain);
            MessageBox.Show("Done!");
        }
        void CatchReplace(ref String Contain, int S, int A2,bool CatchNotFinished)
        {
            try
            {
                //if (Contain.Substring(S, Contain.Length - S).Contains("/*}catch"))
                //return;
                int A = A2;

                if (CatchNotFinished)
                {
                    do
                    {
                        try
                        {
                            while (!(Contain.Substring(A, A - S + 1).Equals("/*try")))
                                A--;
                        }catch(Exception t) { }
                        A--;
                        if (A <= 0 || A >= S)
                            break;
                        Contain = Contain.Replace(Contain.Substring(A, A - S + 1), "try");                        
                    } while (A < S);
                }
                bool IsNew = false;
                while (!(Contain[A2].Equals('}')))
                {
                    A2++;
                    try
                    {
                        if (A2 > 0 && Contain.Substring(A2, 5).Equals("catch"))
                        {
                            S = A2;
                            while (!(Contain[S].Equals('}')))
                                S--;
                            try
                            {
                                CatchReplace(ref Contain, S, A2, CatchNotFinished);
                            }
                            catch (Exception t) { Log(t); }
                        }
                    }
                    catch (Exception t) { Log(t); }
                    if (Contain[A2].Equals('}') && IsNew)
                    {
                        IsNew = false;
                        A2++;
                    }
                    if (Contain[A2].Equals('{'))
                        IsNew = true;
                }
                
                Contain = Contain.Replace(Contain.Substring(S, A2 - S + 1), Contain.Substring(S, A2 - S + 1)+"*/");

                while (A2 < Contain.Length)
                {
                    A2++;
                    try
                    {
                        if (A2 > 0 && Contain.Substring(A2, 5).Equals("catch"))
                        {

                            S = A2;
                            while (!(Contain[S].Equals('}')))
                                S--;
                           
                            try
                            {
                                CatchNotFinished = true;
                                CatchReplace(ref Contain, S, A2,CatchNotFinished);
                                break;
                            }
                            catch (Exception t) { Log(t); }
                        }
                    }
                    catch (Exception t) { Log(t); }
                }
            }
            catch (Exception t) { Log(t); }
        }
        void TryReplace(ref String Contain, int S, int A2, bool TryNotFinished)
        {
            try
            {
                //if (Contain.Substring(S, Contain.Length - S).Contains("/*}Try"))
                //return;
                int A = A2;

                if (TryNotFinished)
                {
                    do
                    {
                        try
                        {
                            while (!(Contain.Substring(A, A - S + 1).Equals("/*try")))
                                A--;
                        }
                        catch (Exception t) { }
                        A--;
                        if (A <= 0 || A >= S)
                            break;
                        Contain = Contain.Replace(Contain.Substring(S, S - A- 1), "try");
                    } while (S < A);
                }
                bool IsNew = false;
                while (!(Contain[A2].Equals('{')))
                {
                    A2++;
                    try
                    {
                        if (A2 > 0 && Contain.Substring(A2, 3).Equals("try"))
                        {
                            S = A2;
                            while (!(Contain[S].Equals('{')))
                                S--;
                            try
                            {
                                TryReplace(ref Contain, S, A2, TryNotFinished);
                            }
                            catch (Exception t) { Log(t); }
                        }
                    }
                    catch (Exception t) { Log(t); }
                    if (Contain[A2].Equals('{') && IsNew)
                    {
                        IsNew = false;
                        A2++;
                    }
                    if (Contain[A2].Equals('}'))
                        IsNew = true;
                }
                Contain = Contain.Replace(Contain.Substring(S-1, A2 + 1), Contain.Substring(S-1, A2 + 1) + "*/");



                while (A2 < Contain.Length)
                {
                    A2++;
                    try
                    {
                        if (A2 > 0 && Contain.Substring(A2, 3).Equals("try"))
                        {

                            S = A2;
                            while (!(Contain[S].Equals('{')))
                                S--;

                            try
                            {
                                TryNotFinished = true;
                                TryReplace(ref Contain, S, A2, TryNotFinished);
                                break;
                            }
                            catch (Exception t) { Log(t); }
                        }
                    }
                    catch (Exception t) { Log(t); }
                }
            }
            catch (Exception t) { Log(t); }
        }
    }
}
