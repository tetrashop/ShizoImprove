using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*****************************************************************************
 * "1" Boundry Huristic Founding.
 * "2" Search in Thinking Tree to found Max or Min Huristic.
 **/
namespace RefrigtzDLL
{
    class CodeClass
    {

        public static void SaveByCode(int Code, int LineCode, String File)
        {
            if (!System.IO.File.Exists("CodeLogEvent.log"))
                System.IO.File.CreateText("CodeLogEvent.log");
            System.IO.File.AppendAllText("CodeLogEvent.log", "\r\nError by " + Code + "At " + LineCode + " LinCode of File " + File);
        }
    }
}


