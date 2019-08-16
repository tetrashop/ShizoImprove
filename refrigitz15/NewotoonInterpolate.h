﻿#pragma once

/******************************
 * Ramin Edjlal CopyRigth 2015
 * Newotoon Interpolate 
 * Implementation recursivley.
 */

namespace RefrigtzDLL
{
//C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
//ORIGINAL LINE: [Serializable] class NewotoonInterpolate
	class NewotoonInterpolate
	{
	private:
		static double fx0untinxn(double x[], double f[], int n, int i, int j);

	public:
		static double *px(double x[], double f[], int n);
	private:
		static double *Simplify(double s[], double x[], int i, int j);
		/*public static bool test(double* x, double* f, int n,Double x0)
		{

		    if (((0.5) * System.Math.Pow(x0, 3) - (7 / 2) * System.Math.Pow(x0, 2) + 9 * x0 - 2) == (px(x, f, n, x0)))
		        return true;
		    return false;
		}
		 */
	};
}
