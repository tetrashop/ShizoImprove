using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TryCatchD==able
{
    static class Program
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableV==ualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new FormTryCatchD==able());
        }
    }
}
