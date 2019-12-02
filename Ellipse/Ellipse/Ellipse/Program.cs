using System;
using System.Collections.Generic;
using System.Text;

namespace Ellipse
{
    class Program
    {
        static void Main(string[] args)
        {
            //I/O of Parameters.
            double a, b, c;
            Console.WriteLine("Enter a:");
            a = (double)System.Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter b:");
            b = (double)System.Convert.ToDouble(Console.ReadLine());
            if (b > a)
            {
                double d = b;
                b = a;
                a = d;
            }
            //Intiate Ellipse Three Paramenters.
            double e = (double)System.Math.Sqrt(1 - Math.Pow(b / a, 2));
            double p = a * (1 - Math.Pow(e, 2));
            c = e * a;//Math.Sqrt(Math.Pow(a, 2) - Math.Pow(b, 2));

            //Found of Diferentiation of Ellipse.
            EllipseDifferentialAroundCalculating AEDAC = new EllipseDifferentialAroundCalculating(a, b, c);
            //Found of paper menthod new startegy.
            EllipsAroundFormula AEAF = new EllipsAroundFormula(a, b, c);
            //I/O Paramenters of output.
            Console.WriteLine("The Differential is :");
            //Should be of minuse to zero boundry
            Console.WriteLine(AEDAC.aroundAccess-AEAF.aroundAccess);
            //Wait.
            Console.ReadLine();




        }
    }
}
