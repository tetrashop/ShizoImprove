#include "stdafx.h"


namespace RefrigtzDLL
{

double DrawHourse::MaxHuristicxH = -20000000000000000;

	/*void DrawHourse::Log(std::exception ex)
	{
		//try
		{
			//autoa = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			//lock (a)
			{
				std::wstring stackTrace = ex.what();
//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
				File::AppendAllText(AllDraw::Root + std::wstring(L"\\ErrorProgramRun.txt"), stackTrace + std::wstring(L": On") + DateTime::Now.ToString()); // path of file where stack trace will be stored.
			}
		}
		//catch(std::exception t)
		{
			
		}
	}
	
*/
DrawHourse::~DrawHourse()
	{
		InitializeInstanceFields();
		ValuableSelfSupported.clear();
//		H = nullptr;
	}
	void* DrawHourse::operator*(std::size_t idx) { return malloc(idx * sizeof(this)); }
	bool DrawHourse::MaxFound(bool MaxNotFound)
	{
		//try
		{
			double a = ReturnHuristic();
			if (MaxHuristicxH < a)
			{
				//autoO2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				//lock (O2)
				{
					MaxNotFound = false;
					if (ThinkingChess::MaxHuristicx < MaxHuristicxH)
					{
						ThinkingChess::MaxHuristicx = a;
					}
					MaxHuristicxH = a;
				}
				return true;
			}
		}
		//catch(std::exception t)
		{
			

		}
		MaxNotFound = true;
		return false;
	}

	double DrawHourse::ReturnHuristic()
	{
		double a = 0;
		for (int ii = 0; ii < AllDraw::HourseMovments; ii++)
		{
			//try
			{
				a += HourseThinking.ReturnHuristic(-1, -1, Order,false);
			}
			//catch(std::exception t)
			{
				
			}
		}
		return a;
	}

	DrawHourse::DrawHourse(int CurrentAStarGredy, bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, float i, float j, int a, int **Tab, int Ord, bool TB, int Cur)
	{

		InitializeInstanceFields();
		CurrentAStarGredyMax = CurrentAStarGredy;
		MovementsAStarGreedyHuristicFoundT = MovementsAStarGreedyHuristicTFou;
		IgnoreSelfObjectsT = IgnoreSelfObject;
		UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
		BestMovmentsT = BestMovment;
		PredictHuristicT = PredictHurist;
		OnlySelfT = OnlySel;
		AStarGreedyHuristicT = AStarGreedyHuris;
		ArrangmentsChanged = Arrangments;
		//Initiate Global Variable By Local Paramenters.
		Table = new int*[8]; for (int ii = 0; ii < 8; ii++)Table[ii] = new int[8];
		for (int ii = 0; ii < 8; ii++)
		{
			for (int jj = 0; jj < 8; jj++)
			{
				Table[ii][jj] = Tab[ii][jj];
			}
		}
		HourseThinking = ThinkingChess(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, static_cast<int>(i), static_cast<int>(j), a, Tab, 8, Ord, TB, Cur, 4, 3);

		Row = i;
		Column = j;
		color = a;
		Order = Ord;
		Current = Cur;

	}

	/*void DrawHourse::Clone(DrawHourse *AA)
	{
		int **Tab;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				Tab[i][j] = Table[i][j];
			}
		}
		//Create a Construction Ojects and Initiate a Clone Copy.
		AA = new DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, color, Table, Order, false, Current);
		AA->ArrangmentsChanged = ArrangmentsChanged;
		for (int i = 0; i < AllDraw::HourseMovments; i++)
		{
			//try
			{
				AA->HourseThinking = ThinkingChess(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, static_cast<int>(Row), static_cast<int>(Column));
				HourseThinking.Clone(AA->HourseThinking);
			}
			//catch(std::exception t)
			{
				
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
				delete AA->HourseThinking;
			}
		}
		AA->Table = new int*[8]; for (int ii = 0; ii < 8; ii++)Table[ii]-new int[8];
		for (int ii = 0; ii < 8; ii++)
		{
			for (int jj = 0; jj < 8; jj++)
			{
				AA->Table[ii][jj] = Tab[ii][jj];
			}
		}
		AA->Row = Row;
		AA->Column = Column;
		AA->Order = Order;
		AA->Current = Current;
		AA->color = color;

	}
	*/
	void DrawHourse::DrawHourseOnTable( int CellW, int CellH)
	{
	/*	//try
		{

			//autobalance//lockS = new Object();

//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			//lock (balance//lockS)
			{
				if (H == nullptr || H[1] == nullptr)
				{
					H = Image::FromFile(AllDraw::ImagesSubRoot + std::wstring(L"HG.png"));
					H[1] = Image::FromFile(AllDraw::ImagesSubRoot + std::wstring(L"HB.png"));
				}
				if ((static_cast<int>(Row) >= 0) static_cast<int>(Row) < 8) static_cast<int>(Column) >= 0) static_cast<int>(Column) < 8))
				{ //Gray Order.
					if (Order == 1)
					{
						//autoO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						//lock (O1)
						{ //Draw an Instant from File of Gray Soldeirs.
							 //Draw an Instatnt Gray Hourse on the Table.
							g.DrawImage(H, Rectangle(static_cast<int>(Row * static_cast<float>(CellW)), static_cast<int>(Column * static_cast<float>(CellH)), CellW, CellH));
						}
					}
					else
					{
						//autoO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						//lock (O1)
						{ //Draw an Instant from File of Gray Soldeirs.
							 //Draw an Instatnt Brown Hourse on the Table.
							g.DrawImage(H[1], Rectangle(static_cast<int>(Row * static_cast<float>(CellW)), static_cast<int>(Column * static_cast<float>(CellH)), CellW, CellH));
						}
					}
				}
			}
		}
		//catch(std::exception t)
		{
			
		}
		*/
	}

	void DrawHourse::InitializeInstanceFields()
	{
		WinOcuuredatChiled = 0;
		LoseOcuuredatChiled = 0;
		ValuableSelfSupported = std::vector<int>();
		MovementsAStarGreedyHuristicFoundT = false;
		IgnoreSelfObjectsT = false;
		UsePenaltyRegardMechnisamT = true;
		BestMovmentsT = false;
		PredictHuristicT = true;
		OnlySelfT = false;
		AStarGreedyHuristicT = false;
		ArrangmentsChanged = false;
		Row = 0;
		Column = 0;
		Table = 0;
		Current = 0;
		Order = 0;
		CurrentAStarGredyMax = -1;
	}
}
