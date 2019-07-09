using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TryCatchDisable
{
    public partial class FormTryCatchDisable : Form
    {
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
                Contain = Contain.Replace("try", "/*try");

                do
                {
                    int A1 = Contain.IndexOf("try");
                    if (Contain.Substring(A1, 4).Equals("/*try"))
                        continue;
                    while (!(Contain[A1].Equals('{')))
                        A1++;
                    Contain = Contain.Replace(Contain.Substring(A1, 1), Contain.Substring(A1, 1) + "*/");
                } while (true);
                int Sub = 0;
                do
                {

                    int A2 = Sub + Contain.IndexOf("catch");
                    if (Contain.Substring(A2, 4).Equals("/*catch"))
                    {
                        Sub = A2 - Sub;
                        continue;
                    }
                    bool IsNew = false;
                    while (!(Contain[A2].Equals('}')))
                    {
                        A2++;
                        if (Contain[A2].Equals('}') && IsNew)
                        {
                            IsNew = false;
                            A2++;
                        }
                        if (Contain[A2].Equals('{'))
                        {
                            IsNew = true;
                        }
                    }
                    A2++;
                    Contain = Contain.Replace(Contain.Substring(Contain.IndexOf("catch"), A2 - Contain.IndexOf("catch")), Contain.Substring(Contain.IndexOf("catch"), A2 - Contain.IndexOf("catch")) + "*/");
                } while (true);
            }
            catch (Exception t) { } saveDialogFileTryCatchDisable.ShowDialog();
            System.IO.File.WriteAllText(saveDialogFileTryCatchDisable.FileName, Contain);

        }
    }
}
