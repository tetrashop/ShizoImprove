﻿/**************************************************************************
 * CopyRight Ramin Edjlal 28 nov 2019 Tetra E-Commerce*********************
 * TetraShop.ir************************************************************
 * ************************************************************************/
using System;
using System.Windows.Forms;

namespace ShizoImprove
{
    internal static class Program
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        private static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new FormShizoImprove());
        }
    }
}
