using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Forms;
using System.IO;
using System.Diagnostics;
using System.Threading;
using System.Threading.Tasks;
namespace RefrigtzChessPortable
{
    
    
    static class Program
    {
        //Main Programm.
        [STAThread]
        static void Main()
        {
            Application.Run(new RefrigtzChessPortableForm());
        }
    }
}
//End of Documents.