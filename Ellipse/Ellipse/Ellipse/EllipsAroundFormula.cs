using System;
using System.Collections.Generic;
using System.Text;

namespace Ellipse
{
    class EllipsAroundFormula
    {
        double around = 0;
        double aroundP2 = 0;
        double Laround = 0;
        double Paround = 0;
        double Paround0 = 0;
        double Paround1 = 0;
        double Laround0 = 0;
        double Laround1 = 0;
        public EllipsAroundFormula(double a,double b,double c)
        {
            Params rr = new Params(a, b);
            //Initiate Parameters of Ellipse.
            double p = rr.pp; //Math.Pow(b, 2) / a;
            double e = rr.ee;// (double)System.Math.Sqrt(1 - (p / a));
            c = rr.cc;// e * a;
            double u = Math.PI - Math.Atan((b / c) * (Math.PI / 180)//b / c)// * (Math.PI / 180)
                );
            double teta = u;// * (180 / Math.PI);
            double r = (p) / (1 + e * Math.Cos(u));

            //Second Integral priciple first parameters 
            Laround1 = Math.Sqrt((2 * p) * (-1 * Math.Log(1 + e * Math.Cos(u), Math.E) *u - e *u * Math.Cos(u) - 0.5 * Math.Sin(u) + (e / 2) * Math.Pow(Math.Log(1 + e * Math.Cos(u), Math.E),2 )) +Math.Pow(r, 2) + teta);
            /*  Laround1 = (2 * p) * (teta * Math.Log(1 + e * Math.Cos(u), Math.E) + (2 / Math.Sqrt(1 - Math.Pow(e, 2))) *u * Math.Sin(u) * Math.Atan(Math.Sqrt((1 - e) / (1 + e)) * Math.Tan(teta / 2)) + ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * Math.Cos(u) * Math.Atan(Math.Sqrt((1 - e) / (1 + e)) * Math.Tan(teta / 2)) - (2 / (1 - ((1 - e) / (1 + e)))) * ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) *u + Math.Sqrt((1 - e) / (1 + e)) * ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * ((2 * (1 + ((1 - e) / (1 + e)))) / (1 - ((1 - e) / (1 + e)))) * Math.Atan(Math.Sqrt((1 - e) / (1 + e)) * Math.Tan(teta / 2)) - ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * ((Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 5) - 5 * Math.Sqrt((1 - e) / (1 + e))) / ((1 - (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 4))) * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2) + 1))) * Math.Pow(teta, 2) * Math.Sin(u) - (((2 * e) / (Math.Sin(1 - Math.Pow(e, 2)))) * ((10 * (Math.Sqrt((1 - e) / (1 + e))) - (2 * Math.Pow((Math.Sqrt((1 - e) / (1 + e))), 5))) / ((1 - (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 4))) * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2) + 1)))) * Math.Cos(u) - ((2 * e) / Math.Sqrt(1 - Math.Pow(e, 2))) * (((4 * (Math.Sqrt((1 - e) / (1 + e))) - 4 * Math.Pow((Math.Sqrt((1 - e) / (1 + e))), 3))) / (Math.Pow(1 - (Math.Pow((Math.Sqrt((1 - e) / (1 + e))), 2)), 2) * Math.Pow(1 + (Math.Pow((Math.Sqrt((1 - e) / (1 + e))), 2)), 2))) * Math.Pow(teta, 2) * Math.Atan(Math.Sqrt((1 - e) / (1 + e)) * Math.Tan(teta / 2)) + ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)) * ((8 - (12 * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2)))) / (3 * (Math.Pow(1 - (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2)), 2)) * ((1 + (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2)))))))) * Math.Pow(teta, 3) + teta) + Math.Pow(p / (1 + e * Math.Cos(u)), 2) + p / (1 + e * Math.Cos(u));
                      Paround1 = 2 * p * (u * Math.Log(1 + e * Math.Cos(u), Math.E)
                          + (2 / Math.Sqrt(1 - Math.Pow(e, 2))) * b *u * Math.Sin(u) * Math.Atan(Math.Sqrt((1 - e) / (1 + e)) * Math.Tan(u / 2))
                          + ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * Math.Cos(u) * Math.Atan(Math.Sqrt((1 - e) / (1 + e)) * Math.Tan(u / 2))
                          - (2 / (1 - ((1 - e) / (1 + e)))) * ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) *u
                          + Math.Sqrt((1 - e) / (1 + e)) * ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * ((2 * (1 + ((1 - e) / (1 + e)))) / (1 - ((1 - e) / (1 + e)))) * Math.Atan(Math.Sqrt((1 - e) / (1 + e)) * Math.Tan(u / 2))
                          - ((2 * e) / Math.Sqrt(1 - Math.Pow(e, 2))) * ((Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 5) - 5 * Math.Sqrt((1 - e) / (1 + e))) / ((1 - Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 4)) * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2) + 1))) * Math.Pow(u, 2) * Math.Sin(u)
                          - ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * ((10 * (Math.Sqrt((1 - e) / (1 + e))) - 2 * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 5))) / (((1 - Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 4)) * ((Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2)) + 1)))) * Math.Cos(u)
                          - ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * ((3 - 2 * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2)) - (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 4))) / ((1 - (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 4))) * ((Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2)) + 1))) * Math.Pow(u, 2) * Math.Cos(u) * Math.Atan(0.5 * Math.Tan(u / 2))
                          - ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * ((4 * Math.Sqrt((1 - e) / (1 + e)) - 4 * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 3))) / (Math.Pow(1 - Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2), 2)) * (1 + Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2))) * Math.Pow(u, 2) * Math.Atan(0.5 * Math.Tan(u / 2))
                          + ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * ((8 - 12 * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2))) / (3 * (Math.Pow(1 - Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2), 2) * (1 + Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2))))) * Math.Pow(u, 3)
                          + 0.5 * Math.Pow(r, 2))
                          + r + teta;
                          */
            //Second Integral priciple second parameters 
            u = Math.PI / 2;
            teta = u;// * (180 / Math.PI);
            r = (p) / (1 + e * Math.Cos(u));
            /*around0 = (2 * p) * (teta * Math.Log(1 + e * Math.Cos(u), Math.E) + (2 / Math.Sqrt(1 - Math.Pow(e, 2))) *u * Math.Sin(u) * Math.Atan(Math.Sqrt((1 - e) / (1 + e)) * Math.Tan(teta / 2)) + ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * Math.Cos(u) * Math.Atan(Math.Sqrt((1 - e) / (1 + e)) * Math.Tan(teta / 2)) - (2 / (1 - ((1 - e) / (1 + e)))) * ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) *u + Math.Sqrt((1 - e) / (1 + e)) * ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * ((2 * (1 + ((1 - e) / (1 + e)))) / (1 - ((1 - e) / (1 + e)))) * Math.Atan(Math.Sqrt((1 - e) / (1 + e)) * Math.Tan(teta / 2)) - ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * ((Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 5) - 5 * Math.Sqrt((1 - e) / (1 + e))) / ((1 - (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 4))) * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2) + 1))) * Math.Pow(teta, 2) * Math.Sin(u) - (((2 * e) / (Math.Sin(1 - Math.Pow(e, 2)))) * ((10 * (Math.Sqrt((1 - e) / (1 + e))) - (2 * Math.Pow((Math.Sqrt((1 - e) / (1 + e))), 5))) / ((1 - (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 4))) * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2) + 1)))) * Math.Cos(u) - ((2 * e) / Math.Sqrt(1 - Math.Pow(e, 2))) * (((4 * (Math.Sqrt((1 - e) / (1 + e))) - 4 * Math.Pow((Math.Sqrt((1 - e) / (1 + e))), 3))) / (Math.Pow(1 - (Math.Pow((Math.Sqrt((1 - e) / (1 + e))), 2)), 2) * Math.Pow(1 + (Math.Pow((Math.Sqrt((1 - e) / (1 + e))), 2)), 2))) * Math.Pow(teta, 2) * Math.Atan(Math.Sqrt((1 - e) / (1 + e)) * Math.Tan(teta / 2)) + ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)) * ((8 - (12 * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2)))) / (3 * (Math.Pow(1 - (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2)), 2)) * ((1 + (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2)))))))) * Math.Pow(teta, 3) + teta) + Math.Pow(p / (1 + e * Math.Cos(u)), 2) + p / (1 + e * Math.Cos(u));
                   Laround0 = 2 * p * (u * Math.Log(1 + e * Math.Cos(u), Math.E)
                         + (2 / Math.Sqrt(1 - Math.Pow(e, 2))) * b *u * Math.Sin(u) * Math.Atan(Math.Sqrt((1 - e) / (1 + e)) * Math.Tan(u / 2))
                         + ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * Math.Cos(u) * Math.Atan(Math.Sqrt((1 - e) / (1 + e)) * Math.Tan(u / 2))
                         - (2 / (1 - ((1 - e) / (1 + e)))) * ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) *u
                         + Math.Sqrt((1 - e) / (1 + e)) * ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * ((2 * (1 + ((1 - e) / (1 + e)))) / (1 - ((1 - e) / (1 + e)))) * Math.Atan(Math.Sqrt((1 - e) / (1 + e)) * Math.Tan(u / 2))
                         - ((2 * e) / Math.Sqrt(1 - Math.Pow(e, 2))) * ((Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 5) - 5 * Math.Sqrt((1 - e) / (1 + e))) / ((1 - Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 4)) * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2) + 1))) * Math.Pow(u, 2) * Math.Sin(u)
                         - ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * ((10 * (Math.Sqrt((1 - e) / (1 + e))) - 2 * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 5))) / (((1 - Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 4)) * ((Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2)) + 1)))) * Math.Cos(u)
                         - ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * ((3 - 2 * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2)) - (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 4))) / ((1 - (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 4))) * ((Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2)) + 1))) * Math.Pow(u, 2) * Math.Cos(u) * Math.Atan(0.5 * Math.Tan(u / 2))
                         - ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * ((4 * Math.Sqrt((1 - e) / (1 + e)) - 4 * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 3))) / (Math.Pow(1 - Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2), 2)) * (1 + Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2))) * Math.Pow(u, 2) * Math.Atan(0.5 * Math.Tan(u / 2))
                         + ((2 * e) / (Math.Sqrt(1 - Math.Pow(e, 2)))) * ((8 - 12 * (Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2))) / (3 * (Math.Pow(1 - Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2), 2) * (1 + Math.Pow(Math.Sqrt((1 - e) / (1 + e)), 2))))) * Math.Pow(u, 3)
                         + 0.5 * Math.Pow(r, 2))
                         + r + teta;*/
            Laround0 = Math.Sqrt((2 * p) * (-1 * Math.Log(1 + e * Math.Cos(u), Math.E) *u - e *u * Math.Cos(u) - 0.5 * Math.Sin(u) + (e / 2) * Math.Pow(Math.Log(1 + e * Math.Cos(u), Math.E),2 )) +Math.Pow(r, 2) + teta);


            //Orthogonality of multiply at 4
            //  around = 4 * (Math.Sqrt(Math.Abs(around1) - Math.Abs(around0)));
            Laround = 4 * (Math.Abs(Laround1) - Math.Abs(Laround0));
           // Laround = 4 * (Math.Sqrt(Math.Abs(Laround1 - Laround0)));
            /* Paround = 4 * (Math.Sqrt(Math.Abs(around1)) - Math.Sqrt(Math.Abs(around0)));
             aroundT = 4 * (Math.Sqrt(Math.Abs(around1 - around0)));
             aroundS = 4 * (Math.Sqrt(Math.Abs(Paround1) - Math.Abs(Paround0)));
             ParoundS = 4 * (Math.Sqrt(Math.Abs(Paround1)) - Math.Sqrt(Math.Abs(Paround0)));
             ParoundT = 4 * (Math.Sqrt(Math.Abs(Paround1 - Paround0)));
 */
            u = Math.PI / 2;
            teta = u;// * (180 / Math.PI);
            r = (p) / (1 + e * Math.Cos(u));

            //Second Integral priciple first parameters 
            Paround1 = Math.Sqrt((2 * p) * (-1 * Math.Log(1 + e * Math.Cos(u), Math.E) *u - e *u * Math.Cos(u) - 0.5 * Math.Sin(u) + (e / 2) * Math.Pow(Math.Log(1 + e * Math.Cos(u), Math.E),2 )) +Math.Pow(r, 2) + teta);

            u =0;
            teta = u;// * (180 / Math.PI);
            r = (p) / (1 + e * Math.Cos(u));
            //Second Integral priciple first parameters 
            Paround0 = Math.Sqrt((2 * p) * (-1 * Math.Log(1 + e * Math.Cos(u), Math.E) *u - e *u * Math.Cos(u) - 0.5 * Math.Sin(u) + (e / 2) * Math.Pow(Math.Log(1 + e * Math.Cos(u), Math.E),2 )) +Math.Pow(r, 2) + teta);

            Paround = 4 * (Math.Abs(Paround1) - Math.Abs(Paround0));
            around = Paround + Laround;
            aroundP2 = 4 * (Math.Abs(Laround1) - Math.Abs(Paround0));
            ;
            //around = Laround + 4 * (Math.Sqrt(Math.Abs(Paround1 - Paround0)));

        }
        public double aroundAccess
        {
            get { return around; }
            set { around = value; }
        }
        public double aroundP2Access
        {
            get { return aroundP2; }
            set { aroundP2 = value; }
        }

    }
}
