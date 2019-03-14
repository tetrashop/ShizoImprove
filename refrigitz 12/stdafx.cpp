// stdafx.cpp : source file that includes just the standard includes
// refrigitz 12.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
#include "AllDraw.h"


// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
int main()
{
	// IncreasingThreadPerformance();
	//Intiate  Program Load and Calling.
	//Application.EnableVisualStyles();
	////try
	//{

	//Application.SetCompatibleTextRenderingDefault(false);

	//Application.Run(new Load());
	//}
	////catch(Exception t)
	//{
		//
	//}
	int** Table = {
		{ -4, -1, 0, 0, 0, 0, 1, 4 },
		{ -3, -1, 0, 0, 0, 0, 1, 3 },
		{ -2, -1, 0, 0, 0, 0, 1, 2 },
		{ -5, -1, 0, 0, 0, 0, 1, 5 },
		{ -6, -1, 0, 0, 0, 0, 1, 6 },
		{ -2, -1, 0, 0, 0, 0, 1, 2 },
		{ -3, -1, 0, 0, 0, 0, 1, 3 },
		{ -4, -1, 0, 0, 0, 0, 1, 4 }
	};
	AllDraw *t =new AllDraw(0, false, true, false, false, false, false, 0, 1, 0, 0, 1, Table, 1, false, 0);
	t->Initiate(0, 0, 1, Table, 1, false, false, 0, false);
	return 0;
}