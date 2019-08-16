#include "stdafx.h"
#include "DrawMinister.h"


namespace RefrigtzDLL
{

double DrawMinister::MaxHuristicxM = -20000000000000000;

	
	DrawMinister::~DrawMinister()
	{
		InitializeInstanceFields();
		ValuableSelfSupported.clear();
		//M = nullptr;
	}

	bool DrawMinister::MaxFound(bool &MaxNotFound)
	{

		double a = ReturnHuristic();
		if (MaxHuristicxM < a)
		{
			////auto O2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			//lock (O2)
			{
				MaxNotFound = false;
				if (ThinkingChess::MaxHuristicx < MaxHuristicxM)
				{
					ThinkingChess::MaxHuristicx = a;
				}
				MaxHuristicxM = a;
			}
			return true;
		}

		MaxNotFound = true;
		return false;
	}

	double DrawMinister::ReturnHuristic()
	{
		double a = 0;
		for (int ii = 0; ii < AllDraw::MinisterMovments; ii++)

		{
			a += MinisterThinking[ii].ReturnHuristic(-1, -1, Order, false);
		}

		return a;
	}

	DrawMinister::DrawMinister(int CurrentAStarGredy, bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, float i, float j, int a, int **Tab, int Ord, bool TB, int Cur)
	{
		InitializeInstanceFields();
		//to balancelock = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		//lock (balancelock)
		{

			CurrentAStarGredyMax = CurrentAStarGredy;
			MovementsAStarGreedyHuristicFoundT = MovementsAStarGreedyHuristicTFou;
			IgnoreSelfObjectsT = IgnoreSelfObject;
			UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
			BestMovmentsT = BestMovment;
			PredictHuristicT = PredictHurist;
			OnlySelfT = OnlySel;
			AStarGreedyHuristicT = AStarGreedyHuris;
			ArrangmentsChanged = Arrangments;
			//Initiate Global Variables.
			Table = new int*[8]; for (int g = 0; g < 8; g++)Table[g] = new int[8];
			for (int ii = 0; ii < 8; ii++)
			{
				for (int jj = 0; jj < 8; jj++)
				{
					Table[ii][jj] = Tab[ii][jj];
				}
			}
			MinisterThinking = std::vector<ThinkingChess>();
			MinisterThinking.push_back(ThinkingChess(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, static_cast<int>(i), static_cast<int>(j), a, Tab, 32, Ord, TB, Cur, 2, 5));

			Row = i;
			Column = j;
			color = a;
			Current = Cur;
			Order = Ord;
		}
	}
	DrawMinister::DrawMinister(int CurrentAStarGredy, bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments)
	{
		CurrentAStarGredyMax = CurrentAStarGredy;
		MovementsAStarGreedyHuristicFoundT = MovementsAStarGreedyHuristicTFou;
		IgnoreSelfObjectsT = IgnoreSelfObject;
		UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
		BestMovmentsT = BestMovment;
		PredictHuristicT = PredictHurist;
		OnlySelfT = OnlySel;
		AStarGreedyHuristicT = AStarGreedyHuris;
		ArrangmentsChanged = Arrangments;
	}
	void DrawMinister::Clone(DrawMinister AA)
	{
		int **Tab = new int*[8]; for (int g = 0; g < 8; g++)Tab[g] = new int[8];
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				Tab[i][j] = Table[i][j];
			}
		}
		//Initiate an Object and Clone a Construction Objectve.
		AA = DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, color, Table, Order, false, Current);
		AA.ArrangmentsChanged = ArrangmentsChanged;
		for (int i = 0; i < AllDraw::MinisterMovments; i++)
		{

			AA.MinisterThinking.push_back(ThinkingChess(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, static_cast<int>(Row), static_cast<int>(Column)));
			MinisterThinking[i].Clone(AA.MinisterThinking[i]);


		}
		AA.Table = new int*[8]; for (int g = 0; g < 8; g++)AA.Table[g] = new int[8];
		for (int ii = 0; ii < 8; ii++)
		{
			for (int jj = 0; jj < 8; jj++)
			{
				AA.Table[ii][jj] = Tab[ii][jj];
			}
		}
		AA.Row = Row;
		AA.Column = Column;
		AA.Order = Order;
		AA.Current = Current;
		AA.color = color;

	}

	
	void DrawMinister::InitializeInstanceFields()
	{
		WinOcuuredatChiled = 0;
		LoseOcuuredatChiled = 0;
		ValuableSelfSupported = std::vector<int*>();
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
