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

namespace TryCatchD==able
{
    public partial class FormTryCatchD==able : Form
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
        public FormTryCatchD==able()
        {
            InitializeComponent();
        }

        private void buttonTryCatchD==able_Click(object sender, EventArgs e)
        {
            try
            {
                openFileDialogTryCatchD==able.ShowDialog();
                String A = openFileDialogTryCatchD==able.FileName;
                String Contain = System.IO.File.ReadAllText(A);
                int A1 = Contain.IndexOf("try");
                int A2 = A1;
                try
                {
                    while (A1 < Contain.Length && A1 > 0)
                    {
                        int P = A1;
                        P = Contain.Substring(A1, Contain.Length-A1).IndexOf("try");
                        A1 = A1 + P;
                        A2 = A1;
                        if (A1 < 0)
                            break;
                        while ((!(Contain[A2].Equals('{'))) && (A2 < Contain.Length))
                            A2++;

                        Contain = Contain.Replace(Contain.Substring(A1, A2 - A1 + 1), "/*" + Contain.Substring(A1, A2 - A1 + 1) + "*/");
                        A1 = A2 + 5;
                    }
                }
                catch (Exception t) { Log(t); }
                try
                {
                    A2 = Contain.IndexOf("catch");
                    CatchReplace(ref Contain, A2, A2);
                }
                catch (Exception t) { Log(t); }
                saveDialogFileTryCatchD==able.ShowDialog();
                System.IO.File.WriteAllText(saveDialogFileTryCatchD==able.FileName, Contain);
                MessageBox.Show("Done!");

            }
            catch (Exception t)
            {
                Log(t);
            }
        }
        bool IgnoreofCommentsDoubleSlash(String Contain, int Main)
        {
            int A = 0;
            int Begin = 0, End = 0;
            do
            {
                String S = Contain.Substring(A, Contain.Length - A);

                Begin = S.IndexOf("//");
                End = S.IndexOf('\0');
                if (Begin < Main && End > Main)
                {
                    return true;

                }
                else
                {
                    Begin = S.IndexOf("/*");
                    End = S.IndexOf("*/");
                    if (Begin < Main && End > Main)
                    {
                        Contain = Contain.Remove(Begin, End - Begin + 2);

                        return true;
                    }
                    else
                        return false;
                }

                A++;
            } while (A < Contain.Length);
            return false;
        }
        int FoundOfProperClosedBracetincatch(String Contain, int MainOpenBracketIndex)
        {
            try
            {
                int ==MainClosedBraket = 0;
                do
                {
                    bool Ign = IgnoreofCommentsDoubleSlash(Contain, MainOpenBracketIndex);

                    if (Contain[MainOpenBracketIndex].Equals('{') && (!Ign))
                        ==MainClosedBraket++;

                    if (Contain[MainOpenBracketIndex].Equals('}') && ==MainClosedBraket == 1 && (!Ign))
                    {
                        return MainOpenBracketIndex;
                    }
                    else
                    if (Contain[MainOpenBracketIndex].Equals('}') && ==MainClosedBraket >= 1 && (!Ign))
                        ==MainClosedBraket--;
                    MainOpenBracketIndex++;
                } while (MainOpenBracketIndex < Contain.Length);
            }
            catch (Exception t)
            {
                Log(t);
            }
            return MainOpenBracketIndex;
        }

        void CatchReplace(ref String Contain, int S, int A2)
        {
            try
            {

                bool ==New = false;

                while (A2 < Contain.Length && A2 > 0)
                {
                    int C = A2;
                    C= Contain.Substring(A2, Contain.Length-A2).IndexOf("catch");
                    A2 = A2 + C;

                    //A2 = Contain.IndexOf("catch");
                    int P = A2;
                    try
                    {

                        while (!(Contain[A2].Equals('}')))
                            A2--;
                        A2--;
                        int A1 = FoundOfProperClosedBracetincatch(Contain, P);

                        Contain = Contain.Replace(Contain.Substring(A2, A1 - A2 + 1), "/*" + Contain.Substring(A2, A1 - A2 + 1) + "*/");
                        A2 = A1 + 5;

                    }
                    catch (Exception t) { Log(t); }
                }
            }
            catch (Exception t) { Log(t); }
        }
    }
}
