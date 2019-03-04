#pragma once
#include "stdafx.h"

namespace RefrigtzDLL
{
	
//C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
//ORIGINAL LINE: [Serializable] class DrawKing
	class DrawKing
	{



	public:
		//void* operator*(std::size_t idx);

		static bool KingGrayNotCheckedByQuantumMove;
		static bool KingBrownNotCheckedByQuantumMove;

		int WinOcuuredatChiled;
		int LoseOcuuredatChiled;
		//private readonly object balance//lock = new object();
		//private readonly object balance//lockS = new object();
		//atic Image K[2];
		//Initiate Global Variables.
	private:
		std::vector<int> ValuableSelfSupported;

	public:
		bool MovementsAStarGreedyHuristicFoundT;
		bool IgnoreSelfObjectsT;
		bool UsePenaltyRegardMechnisamT;
		bool BestMovmentsT;
		bool PredictHuristicT;
		bool OnlySelfT;
		bool AStarGreedyHuristicT;

		bool ArrangmentsChanged;
		static double MaxHuristicxK;
		float Row, Column;
		int color;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: public int[,] Table = nullptr;
		int **Table;
		
		ThinkingChess KingThinking;
		int Current;
		int Order;
	private:
		int CurrentAStarGredyMax;

		//static void Log(std::exception &ex);
	public:
		~DrawKing();

		double ReturnHuristic();
		bool MaxFound(bool MaxNotFound);
		bool MaxFound(bool &MaxNotFound);
		//Constructor 1.
		/*DrawKing(int CurrentAStarGredy, bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments)
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
		*/
		//Constructor 2.
		DrawKing(int CurrentAStarGredy, bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, float i, float j, int a, int **Tab, int Ord, bool TB, int Cur); //, ref AllDraw:: THIS
		//Clone a Copy.
	
		//void Clone(DrawKing *&AA); //, ref AllDraw:: THIS
		//Draw an Instatnt King on the Table Method.
		void DrawKingOnTable( int CellW, int CellH);

	private:
		void InitializeInstanceFields();
	};
}
//End of Documentation.
