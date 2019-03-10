
#include "AllDraw.h"



namespace RefrigtzDLL
{
	
	inline bool operator==(const AllDraw& lhs, const std::nullptr_t& rhs) { return (lhs == rhs); }
	inline bool operator!=(const AllDraw& lhs, const std::nullptr_t& rhs) { return !(lhs == rhs); }
	inline bool operator==(const DrawSoldier& lhs, const std::nullptr_t& rhs) { return (lhs == rhs); }
	inline bool operator!=(const DrawSoldier& lhs, const std::nullptr_t& rhs) { return !(lhs == rhs); }
	inline bool operator==(const DrawCastle& lhs, const std::nullptr_t& rhs) { return (lhs == rhs); }
	inline bool operator!=(const DrawCastle& lhs, const std::nullptr_t& rhs) { return !(lhs == rhs); }
	inline bool operator==(const DrawElefant& lhs, const std::nullptr_t& rhs) { return (lhs == rhs); }
	inline bool operator!=(const DrawElefant& lhs, const std::nullptr_t& rhs) { return !(lhs == rhs); }
	inline bool operator==(const DrawHourse& lhs, const std::nullptr_t& rhs) { return (lhs == rhs); }
	inline bool operator!=(const DrawHourse& lhs, const std::nullptr_t& rhs) { return !(lhs == rhs); }
	inline bool operator==(const DrawMinister& lhs, const std::nullptr_t& rhs) { return (lhs == rhs); }
	inline bool operator!=(const DrawMinister& lhs, const std::nullptr_t& rhs) { return !(lhs == rhs); }
	inline bool operator==(const DrawKing& lhs, const std::nullptr_t& rhs) { return (lhs == rhs); }
	inline bool operator!=(const DrawKing& lhs, const std::nullptr_t& rhs) { return !(lhs == rhs); }

//template<typename T>
int  AllDraw::DepthIterative = 0;
std::wstring AllDraw::OutPut = L"";
std::wstring AllDraw::ActionString = L"";
bool AllDraw::ActionStringReady = false;
bool AllDraw::RegardOccurred = false;
int  AllDraw::SuppportCountStaticGray = 0;
int  AllDraw::SuppportCountStaticBrown = 0;
int  AllDraw::TaskBegin = 0;
int  AllDraw::TaskEnd = 0;
int  AllDraw::OrderPlate = 1;
bool AllDraw::Blitz = false;
int  AllDraw::ConvertedKind = -2;
bool AllDraw::ConvertWait = true;
bool AllDraw::Stockfish = false;
bool AllDraw::Person = true;
bool AllDraw::THISSecradioButtonGrayOrderChecked = false;
bool AllDraw::THISSecradioButtonBrownOrderChecked = false;
std::wstring AllDraw::THIScomboBoxMaxLevelText = L"";
bool AllDraw::StateCP = false;
int  AllDraw::LastRow = -1;
int  AllDraw::LastColumn = -1;
int  AllDraw::NextRow =-1;
int  AllDraw::NextColumn = -1;
int  AllDraw::MovmentsNumber = 0;
int  AllDraw::MaxAStarGreedyHuristicProgress = 0;
bool AllDraw::EndOfGame = false;
int  AllDraw::MinThinkingTreeDepth = DBL_MAX;
int  AllDraw::MaxDuringLevelThinkingCreation = 0;
double AllDraw::AStarGreedytMaxCount = 0;
bool AllDraw::FoundATable = false;
double AllDraw::Less = -DBL_MAX;
int  AllDraw::increasedProgress = 0;
double AllDraw::CurrentHuristic = -DBL_MAX;
double AllDraw::SignAttack = 1;
double AllDraw::SignObjectDangour = 1;
double AllDraw::SignReducedAttacked = -1;
double AllDraw::SignSupport = 1;
double AllDraw::SignKiller = 1;
double AllDraw::SignMovments = 1;
double AllDraw::SignDistance = -1;
double AllDraw::SignKingSafe = -1;
double AllDraw::SignKingDangour = -1;
bool AllDraw::DrawTable = true;
int  AllDraw::MaxAStarGreedy = 1;
std::vector<int**> AllDraw::TableCurrent = std::vector<int**>();
bool AllDraw::NoTableFound = false;
bool AllDraw::DynamicAStarGreedytPrograming = false;
//std::vector<AllDraw> AllDraw::StoreADraw = std::vector<AllDraw>();
std::vector<int> AllDraw::StoreADrawAStarGreedy = std::vector<int>();
bool AllDraw::UseDoubleTime = false;
int  AllDraw::AStarGreedyiLevelMax = 0;
bool AllDraw::AStarGreadyFirstSearch = true;
bool AllDraw::RedrawTable = true;
std::wstring AllDraw::SyntaxToWrite = L"";
bool AllDraw::SodierConversionOcuured = false;
int  AllDraw::SodierMovments = 1;
int  AllDraw::ElefantMovments = 1;
int  AllDraw::HourseMovments = 1;
int  AllDraw::CastleMovments = 1;
int  AllDraw::MinisterMovments = 1;
int  AllDraw::KingMovments = 1;
int  AllDraw::LoopHuristicIndex = 0;
std::vector<int> AllDraw::RWList = std::vector<int>();
std::vector<int> AllDraw::ClList = std::vector<int>();
std::vector<int> AllDraw::KiList = std::vector<int>();
std::vector<int**> AllDraw::TableListAction = std::vector<int**>();
int  AllDraw::MouseClick = 0;

	/*void AllDraw::Log(std::exception &ex)
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
		//catch(std::exception &t)
		{
			
		}
	}*/


AllDraw::AllDraw(int CurrentAStarGredy, bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, float i, float j, int a, int** Tab, int Ord, bool TB, int Cur)
{
	InitializeInstanceFields();

	OrderP = Ord;
	MaxHuristicxT = -DBL_MAX;
	MovementsAStarGreedyHuristicFoundT = MovementsAStarGreedyHuristicTFou;
	IgnoreSelfObjectsT = IgnoreSelfObject;
	UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
	BestMovmentsT = BestMovment;
	PredictHuristicT = PredictHurist;
	OnlySelfT = OnlySel;
	AStarGreedyHuristicT = AStarGreedyHuris;
	if (!Arrangments)
	{
		ArrangmentsChanged = Arrangments;
	}
	else
	{
		ArrangmentsChanged = Arrangments;
	}
	AStarGreedytMaxCount = 0;
	FoundATable = false;

	CastlesKing = false;
	increasedProgress = 0;
	CurrentHuristic = -DBL_MAX;

	DrawTable = false;

	//TableVeryfy = new int**;

	//TableVeryfy = new int**;

	TableCurrent.clear();

	NoTableFound = false;

	DynamicAStarGreedytPrograming = false;
	UseDoubleTime = false;
	AStarGreadyFirstSearch = true;
	//ImageRoot = AllDraw::Root + std::wstring(L"\\Images");
	//ImagesSubRoot = AllDraw::ImageRoot + std::wstring(L"\\Fit\\Small\\");
	RedrawTable = true;
	SodierConversionOcuured = false;
	SodierMovments = 1;
	ElefantMovments = 1;
	HourseMovments = 1;
	CastleMovments = 1;
	MinisterMovments = 1;
	KingMovments = 1;
	SodierMidle = 8;
	SodierHigh = 16;
	ElefantMidle = 2;
	ElefantHigh = 4;
	HourseMidle = 2;
	HourseHight = 4;
	CastleMidle = 2;
	CastleHigh = 4;
	MinisterMidle = 1;
	MinisterHigh = 2;
	KingMidle = 1;
	KingHigh = 2;

	//APredict = null;
	RW = 0;
	CL = 0;
	Ki = 0;
	RW1 = 0;
	CL1 = 0;
	Ki1 = 0;
	MaxLess1 = 0;
	RW2 = 0;
	CL2 = 0;
	Ki2 = 0;
	MaxLess2 = 0;
	RW3 = 0;
	CL3 = 0;
	Ki3 = 0;
	MaxLess3 = 0;
	RW4 = 0;
	CL4 = 0;
	Ki4 = 0;
	MaxLess4 = 0;
	RW5 = 0;
	CL5 = 0;
	Ki5 = 0;
	MaxLess5 = 0;
	RW6 = 0;
	CL6 = 0;
	Ki6 = 0;
	MaxLess6 = 0;
	LoopHuristicIndex = 0;
	Move = 0;
	MouseClick = 0;
	//AStarGreedyIndex = new int[20];
	AStarGreedyInt = 0;
	MaxDuringLevelThinkingCreation = StringConverterHelper::fromString<int>(AllDraw::THIScomboBoxMaxLevelText);
	/*SolderesOnTable = new DrawSoldier[SodierHigh];
	ElephantOnTable =new DrawElefant[ElefantHigh];
	HoursesOnTable = new DrawHourse[HourseHight];
	CastlesOnTable = new DrawCastle[CastleHigh];
	MinisterOnTable = new DrawMinister[MinisterHigh];
	KingOnTable = new DrawKing[KingHigh];
	*/
	SolderesOnTable = new DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
	ElephantOnTable= new DrawElefant(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
	HoursesOnTable= new DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
	CastlesOnTable= new DrawCastle(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
	MinisterOnTable= new DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
	KingOnTable = new DrawKing(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);

	for (int i = 0; i < SodierHigh; i++)
		SolderesOnTable[i] = DrawSoldier(CurrentAStarGredy, MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments, i, j, a, Tab, Ord, TB, Cur);
	for (int i = 0; i < ElefantHigh; i++)
		ElephantOnTable[i] = DrawElefant(CurrentAStarGredy, MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments, i, j, a, Tab, Ord, TB, Cur);
	for (int i = 0; i < HourseHight; i++)
		HoursesOnTable[i] = DrawHourse(CurrentAStarGredy, MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments, i, j, a, Tab, Ord, TB, Cur);
	for (int i = 0; i < CastleMidle; i++)
		CastlesOnTable[i] = DrawCastle(CurrentAStarGredy, MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments, i, j, a, Tab, Ord, TB, Cur);
	for (int i = 0; i <MinisterHigh; i++)
		MinisterOnTable[i] = DrawMinister(CurrentAStarGredy, MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments, i, j, a, Tab, Ord, TB, Cur);
	for (int i = 0; i < KingHigh; i++)
		KingOnTable[i] = DrawKing(CurrentAStarGredy, MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments, i, j, a, Tab, Ord, TB, Cur);

}




bool AllDraw::IsAQuantumeMoveOccured(bool IsQuantumMove)
{
	bool Is = false;
	if (!IsQuantumMove)
	{
		int IsInt = (rand() % 33);
		Is = static_cast<bool>(IsInt % 2);
	}
	return Is;
}

	/*void AllDraw::TimeEnd()
	{

		Now = DateTime::Now.Hour * (60000 * 24) + DateTime::Now.Minute * 60000 + DateTime::Now.Second * 1000 + DateTime::Now.Millisecond;
		long long Later = Now;
		do
		{
			Later = DateTime::Now.Hour * (60000 * 24) + DateTime::Now.Minute * 60000 + DateTime::Now.Second * 1000 + DateTime::Now.Millisecond;

		} while (Later - Now < 3 * 60000);


	}*/

void AllDraw::SetObjectNumbers(int **TabS)
{


	SodierMidle = 0;
	SodierHigh = 0;
	ElefantMidle = 0;
	ElefantHigh = 0;
	HourseMidle = 0;
	HourseHight = 0;
	CastleMidle = 0;
	CastleHigh = 0;
	MinisterMidle = 0;
	MinisterHigh = 0;
	KingMidle = 0;
	KingHigh = 0;
	for (int h = 0; h < 8; h++)
	{
		for (int s = 0; s < 8; s++)
		{
			if (TabS[h][s] == 1)
			{
				SodierMidle++;
				SodierHigh++;
			}
			else if (TabS[h][s] == 2)
			{
				ElefantMidle++;
				ElefantHigh++;
			}
			else if (TabS[h][s] == 3)
			{
				HourseMidle++;
				HourseHight++;
			}
			else if (TabS[h][s] == 4)
			{
				CastleMidle++;
				CastleHigh++;
			}
			else if (TabS[h][s] == 5)
			{
				MinisterMidle++;
				MinisterHigh++;
			}
			else if (TabS[h][s] == 6)
			{
				KingMidle++;
				KingHigh++;
			}
			else
			{
				if (TabS[h][s] == -1)
				{
					SodierHigh++;
				}
				else if (TabS[h][s] == -2)
				{
					ElefantHigh++;
				}
				else if (TabS[h][s] == -3)
				{
					HourseHight++;
				}
				else if (TabS[h][s] == -4)
				{
					CastleHigh++;
				}
				else if (TabS[h][s] == -5)
				{

					MinisterHigh++;
				}
				else if (TabS[h][s] == -6)
				{
					KingHigh++;
				}
			}
		}
	}

}


float *AllDraw::FoundLocationOfObject(int **Tabl, int Kind, bool IsGray)
{
	float Location[2] = { -1, -1 };
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (IsGray)
			{
				if (Tabl[i][j] == Kind)
				{
					Location[0] = i;
					Location[1] = j;
					Tabl[i][j] = 0;

				}
			}
			else
			{
				if (Tabl[i][j] * -1 == Kind)
				{
					Location[0] = i;
					Location[1] = j;
					Tabl[i][j] = 0;

				}
			}

		}
	}
	return Location;


}

AllDraw::AllDraw(int CurrentAStarGredy, bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, float i, float j, int a, int** Tab, int Ord, bool TB, int Cur)
{
	InitializeInstanceFields();


	MaxHuristicxT = -DBL_MAX;
	MovementsAStarGreedyHuristicFoundT = MovementsAStarGreedyHuristicTFou;
	IgnoreSelfObjectsT = IgnoreSelfObject;
	UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
	BestMovmentsT = BestMovment;
	PredictHuristicT = PredictHurist;
	OnlySelfT = OnlySel;
	AStarGreedyHuristicT = AStarGreedyHuris;
	ArrangmentsChanged = Arrangments;

	FoundATable = false;

	CastlesKing = false;
	increasedProgress = 0;

	CurrentHuristic = -DBL_MAX;

	DrawTable = false;

	//TableVeryfy = new int**;

	//TableVeryfy = new int**;

	TableCurrent.clear();

	NoTableFound = false;

	DynamicAStarGreedytPrograming = false;

	UseDoubleTime = false;
	AStarGreadyFirstSearch = true;
	ImageRoot = AllDraw::Root + std::wstring(L"\\Images");
	ImagesSubRoot = AllDraw::ImageRoot + std::wstring(L"\\Fit\\Small\\");

	RedrawTable = true;
	SodierConversionOcuured = false;
	SodierMovments = 1;
	ElefantMovments = 1;
	HourseMovments = 1;
	CastleMovments = 1;
	MinisterMovments = 1;
	KingMovments = 1;
	SodierMidle = 8;
	SodierHigh = 16;
	ElefantMidle = 2;
	ElefantHigh = 4;
	HourseMidle = 2;
	HourseHight = 4;
	CastleMidle = 2;
	CastleHigh = 4;
	MinisterMidle = 1;
	MinisterHigh = 2;
	KingMidle = 1;
	KingHigh = 2;
	//APredict = null;
	RW = 0;
	CL = 0;
	Ki = 0;
	RW1 = 0;
	CL1 = 0;
	Ki1 = 0;
	MaxLess1 = 0;
	RW2 = 0;
	CL2 = 0;
	Ki2 = 0;
	MaxLess2 = 0;
	RW3 = 0;
	CL3 = 0;
	Ki3 = 0;
	MaxLess3 = 0;
	RW4 = 0;
	CL4 = 0;
	Ki4 = 0;
	MaxLess4 = 0;
	RW5 = 0;
	CL5 = 0;
	Ki5 = 0;
	MaxLess5 = 0;
	RW6 = 0;
	CL6 = 0;
	Ki6 = 0;
	MaxLess6 = 0;
	LoopHuristicIndex = 0;
	Move = 0;
	MouseClick = 0;
	//AStarGreedyIndex = new int[20];		
	AStarGreedyInt = 0;
	//SolderesOnTable = nullptr;
	//ElephantOnTable = nullptr;
	//HoursesOnTable = nullptr;
	//CastlesOnTable = nullptr;
	//MinisterOnTable = nullptr;

	//KingOnTable = nullptr;
	MaxHuristicAStarGreedytBackWard.clear();
	SolderesOnTable = new DrawSoldier[16];
	ElephantOnTable = new DrawElefant[4];
		HoursesOnTable = new DrawHourse[4];
		CastlesOnTable = new DrawCastle[4];
	MinisterOnTable = new DrawMinister[2]
		KingOnTable = new DrawKing[2];

	for (int i = 0; i < SodierHigh; i++)
		SolderesOnTable[i] = DrawSoldier(CurrentAStarGredy, MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments, i, j, a, Tab, Ord, TB, Cur);
	for (int i = 0; i < ElefantHigh; i++)
		ElephantOnTable[i] = DrawElefant(CurrentAStarGredy, MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments, i, j, a, Tab, Ord, TB, Cur);
	for (int i = 0; i < HourseHight; i++)
		HoursesOnTable[i] = DrawHourse(CurrentAStarGredy, MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments, i, j, a, Tab, Ord, TB, Cur);
	for (int i = 0; i < CastleMidle; i++)
		CastlesOnTable[i] = DrawCastle(CurrentAStarGredy, MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments, i, j, a, Tab, Ord, TB, Cur);
	for (int i = 0; i <MinisterHigh; i++)
		MinisterOnTable[i] = DrawMinister(CurrentAStarGredy, MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments, i, j, a, Tab, Ord, TB, Cur);
	for (int i = 0; i < KingHigh; i++)
		KingOnTable[i] = DrawKing(CurrentAStarGredy, MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments, i, j, a, Tab, Ord, TB, Cur);
		//Initiayte Locally Variables.
	TableList = std::vector<int**>();

	//APredict = new ChessPerdict(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged//, ref th
	//    );
	OrderP = Ord;

}

	
	void AllDraw::Clone(AllDraw* AA)
	{
		



			if (AA == nullptr)
			{
				AA = new AllDraw(OrderP, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
				AA->TableList.push_back(TableList[0]);
			}
			//AA->Tabl = new int**;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					AA->Tabl[i] = Tabl[i];
				}
			}
			AA->OrderP = OrderP;

			AA->PerceptionCount = PerceptionCount;
			AA->OutPutAction = OutPutAction;
			//static variable to be Initiate
			AA->ValuableSelfSupported = std::vector<int>();
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					AA->ValuableSelfSupported.push_back(ValuableSelfSupported[i]);
				}
			}
			AA->CurrentAStarGredyMax = CurrentAStarGredyMax;
			for (int i = 0; i < 6; i++)
			{
				AA->Index[i] = Index[i];
			}
			for (int i = 0; i < 6; i++)
			{
				AA->jindex[i] = jindex[i];
			}
			for (int i = 0; i < 6; i++)
			{
				AA->Kind[i] = Kind[i];
			}
			if (AStarGreedyString != nullptr)
			{
				AStarGreedyString->Clone(AA->AStarGreedyString);
			}
			if (TableList.size() == 1)
			{
				SetObjectNumbers(TableList[0]);
			}
			MaxHuristicxT = -DBL_MAX;
			AA->MovementsAStarGreedyHuristicFoundT = MovementsAStarGreedyHuristicFoundT;
			AA->IgnoreSelfObjectsT = IgnoreSelfObjectsT;
			AA->UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisamT;
			AA->BestMovmentsT = BestMovmentsT;
			AA->PredictHuristicT = PredictHuristicT;
			AA->OnlySelfT = OnlySelfT;
			AA->AStarGreedyHuristicT = AStarGreedyHuristicT;
			AA->ArrangmentsChanged = ArrangmentsChanged;
			AA->CastlesKing = CastlesKing;


			AA->SodierMidle = SodierMidle;
			AA->SodierHigh = SodierHigh;
			AA->ElefantMidle = ElefantMidle;
			AA->ElefantHigh = ElefantHigh;
			AA->HourseMidle = HourseMidle;
			AA->HourseHight = HourseHight;
			AA->CastleMidle = CastleMidle;
			AA->CastleHigh = CastleHigh;
			AA->MinisterMidle = MinisterMidle;
			AA->MinisterHigh = MinisterHigh;
			AA->KingMidle = KingMidle;
			AA->KingHigh = KingHigh;
			//Initiate a new class object and clone a copy.

			AA->SolderesOnTable = new DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
			AA->ArrangmentsChanged = ArrangmentsChanged;
			for (int i = 0; i < SodierHigh; i++)
			{
				//try
				{
					SolderesOnTable[i].Clone(AA->SolderesOnTable[i]);
				}
				//catch(std::exception &t)
				{
					
				}
			}
			AA->ElephantOnTable = new  DrawElefant(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
			for (int i = 0; i < ElefantHigh; i++)
			{
				//try
				{
					ElephantOnTable[i].Clone(AA->ElephantOnTable[i]);

				}
				//catch(std::exception &t)
				{
					
				}
			}
			AA->HoursesOnTable = new  DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
			for (int i = 0; i < HourseHight; i++)
			{
				//try
				{
					HoursesOnTable[i].Clone(AA->HoursesOnTable[i]);

				}
				//catch(std::exception &t)
				{
					
				}
			}
			AA->CastlesOnTable = new  DrawCastle(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
			for (int i = 0; i < CastleHigh; i++)
			{
				//try
				{
					CastlesOnTable[i].Clone(AA->CastlesOnTable[i]);

				}
				//catch(std::exception &t)
				{
					
				}
			}
			AA->MinisterOnTable = new  DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
			for (int i = 0; i < MinisterHigh; i++)
			{
				//try
				{
					MinisterOnTable[i].Clone(AA->MinisterOnTable[i]);

				}
				//catch(std::exception &t)
				{
					
				}
			}
			AA->KingOnTable = new  DrawKing(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
			for (int i = 0; i < KingHigh; i++)
			{
				//try
				{
					KingOnTable[i].Clone(AA->KingOnTable[i]);

				}
				//catch(std::exception &t)
				{
					
				}
			}
			//AA->AStarGreedy = AStarGreedy;

			if (AA->TableList.size() > 0)
			{
				AA->TableList.clear();
			}
			for (int i = 0; i < TableList.size();i++)
			{
				AA->TableList.push_back(TableList[i]);
			}
			if (AA->TableList.size() > 0)
			{
				AA->SetObjectNumbers(AA->TableList[0]);
			}
			//AA->AStarGreedy = AStarGreedy;
		
	}
	
bool AllDraw::AllCurrentAStarGreedyThinkingFinished(AllDraw Dum, int i, int j, int Kind)
{
	//For All kind of Current Thinking depend of current type consider finshing state thinking.
	bool Finished = false;
	//For Soldier
	if (Kind == 1)
	{

		if (Dum.SolderesOnTable[i].SoldierThinking.ThinkingFinished)
		{
			return true;
		}
	}
	//For Elephant
	else if (Kind == 2)
	{
		if (Dum.ElephantOnTable[i].ElefantThinking.ThinkingFinished)
		{
			return true;
		}
	}
	//For Hourse.
	else if (Kind == 3)
	{
		if (Dum.HoursesOnTable[i].HourseThinking.ThinkingFinished)
		{
			return true;
		}
	}
	//For Castles.
	else if (Kind == 4)
	{
		if (Dum.CastlesOnTable[i].CastleThinking.ThinkingFinished)
		{
			return true;
		}
	}
	//For Minsters.
	else if (Kind == 5)
	{
		if (Dum.MinisterOnTable[i].MinisterThinking.ThinkingFinished)
		{
			return true;
		}
	}
	//For Kings.
	else if (Kind == 6)
	{
		if (Dum.KingOnTable[i].KingThinking.ThinkingFinished)
		{
			return true;
		}
	}
	return Finished;
}
	
	//void* AllDraw::operator*(std::size_t idx) { return malloc(idx * sizeof(this)); }

void AllDraw::SetRowColumn(int index)
{


	SetObjectNumbers(TableList[0]);

	int So1 = 0;
	int So2 = SodierMidle;
	int El1 = 0;
	int El2 = ElefantMidle;
	int Ho1 = 0;
	int Ho2 = HourseMidle;
	int Br1 = 0;
	int Br2 = CastleMidle;
	int Mi1 = 0;
	int Mi2 = MinisterMidle;
	int Ki1 = 0;
	int Ki2 = KingMidle;


	SetRowColumnFinished = false;

	Move = 0;
	//Intiate Dummy Variables.
	//When Conversion Occured.
	//SolderesOnTable =   DrawSoldier[16];
	//ElephantOnTable = DrawElefant[4];
	//HoursesOnTable =    DrawHourse[4];
	//CastlesOnTable =    DrawCastle[4];
	//MinisterOnTable =   DrawMinister[2];
	//KingOnTable =    DrawKing[2];
	/*
	for (int i = 0; i < SodierHigh; i++)
		SolderesOnTable[i] =  DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
	for (int i = 0; i < ElefantHigh; i++)
		ElephantOnTable[i] =  DrawElefant(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
	for (int i = 0; i < HourseHight; i++)
		HoursesOnTable[i] =  DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
	for (int i = 0; i < CastleMidle; i++)
		CastlesOnTable[i] =  DrawCastle(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
	for (int i = 0; i <MinisterHigh; i++)
		MinisterOnTable[i] =  DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
	for (int i = 0; i < KingHigh; i++)
		KingOnTable[i] =  DrawKing(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
		*/
	AllDraw::SodierConversionOcuured = false;

	//When Table Exist.
	if (TableList.size() > 0)
	{
		//For Every Table Things.
		for (int Column = 0; Column < 8; Column++)
		{
			for (int Row = 0; Row < 8; Row++)
			{
				if (TableList[index][Row][Column] == 0)
				{
					continue;
				}
				//When Things are Soldiers.
				if (abs(TableList[index][Row][Column]) == 1)
				{
					//Determine int
					int a;

					if (TableList[index][Row][Column] > 0)
					{
						a = 1;
					}
					else
					{
						a = -1;
					}
					//When int is Gray. 
					if (a == 1)
					{
						//try
						{
							//if (SolderesOnTable[So1] != null)
							//SolderesOnTable[So1].Dispose();
							//Construct Soder Gray.
							SolderesOnTable[So1] =  DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, a, TableList[index], 1, false, So1);
							//Increase So1.
							So1++;
							if (So1 > SodierMidle)
							{
								SodierMidle++;
								SodierHigh++;
							}


						}
						//catch(std::exception &t)
						{


						}
					}
					//When int is Brown
					else
					{
						//try
						{
							//if (SolderesOnTable[So2] != null)
							// SolderesOnTable[So2].Dispose();
							//Construct Soldeir Brown.
							SolderesOnTable[So2] =  DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, a, TableList[index], -1, false, So2);
							//Increase So2.
							So2++;
							if (So2 > SodierHigh)
							{
								SodierHigh++;
							}

						}
						//catch(std::exception &t)
						{


						}
					}
				}
				else //For Elephant Objects.
				{
					if (abs(TableList[index][Row][Column]) == 2)
					{
						//Initiate Local Variables.
						int a;
						if (TableList[index][Row][Column] > 0)
						{
							a = 1;
						}
						else
						{
							a = -1;
						}
						//If Gray Elepahnt
						if (a == 1)
						{
							//try
							{
								//if (ElephantOnTable[El1] != null)
								// ElephantOnTable[El1].Dispose();

								//Construction of Draw Object.
								ElephantOnTable[El1] =  DrawElefant(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, a, TableList[index], 1, false, El1);
								//Increament of Gray Index.
								El1++;
								//If  Object Increament Gray Objects.
								if (El1 > ElefantMidle)
								{
									ElefantMidle++;
									ElefantHigh++;
								}
							}
							//catch(std::exception &t)
							{

							}
						}
						else //For Brown Elephant .Objects
						{
							//try
							{
								//if (ElephantOnTable[El2] != null)
								// ElephantOnTable[El2].Dispose();

								//Construction of Draw Brown Elephant Object. 
								ElephantOnTable[El2] =  DrawElefant(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, a, TableList[index], -1, false, El2);
								//Increament of Index.
								El2++;
								//When  Brown Elephant Object Increament of Index.
								if (El2 > ElefantHigh)
								{
									ElefantHigh++;
								}
							}
							//catch(std::exception &t)
							{

							}

						}
					}
					else //For Hourse Objects.
					{
						if (abs(TableList[index][Row][Column]) == 3)
						{
							//Initiate Local Varibale and int.
							int a;
							if (TableList[index][Row][Column] > 0)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}
							//If Gray Hourse.
							if (a == 1)
							{

								//try
								{
									// if (HoursesOnTable[Ho1] != null)
									// HoursesOnTable[Ho1].Dispose();

									//Construction of Draw Brown Hourse.
									HoursesOnTable[Ho1] =  DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, a, TableList[index], 1, false, Ho1);
									//Increament of Index.
									Ho1++;
									//when There is  Gray Hourse Increase.
									if (Ho1 > HourseMidle)
									{
										HourseMidle++;
										HourseHight++;
									}
								}
								//catch(std::exception &t)
								{

								}
							} //For Brown Hourses.
							else
							{
								//try
								{
									//if (HoursesOnTable[Ho2] != null)
									//  HoursesOnTable[Ho2].Dispose();

									//Construction of Draw Brown Hourse.
									HoursesOnTable[Ho2] =  DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, a, TableList[index], -1, false, Ho2);
									//Increament of Index.
									Ho2++;
									//When  Brown Hourse Exist Exist Index.
									if (Ho2 > HourseHight)
									{
										HourseHight++;
									}
								}
								//catch(std::exception &t)
								{

								}
							}
						}
						else //For Castles Objects.
						{
							if (abs(TableList[index][Row][Column]) == 4)
							{
								//Initiate of Local Variables.
								int a;
								if (TableList[index][Row][Column] > 0)
								{
									a = 1;
								}
								else
								{
									a = -1;
								}
								//For Gray int.
								if (a == 1)
								{

									//try
									{
										//if (CastlesOnTable[Br1] != null)
										//CastlesOnTable[Br1].Dispose();

										//Construction of  Draw Gray Castles.
										CastlesOnTable[Br1] =  DrawCastle(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, a, TableList[index], 1, false, Br1);
										//Increamnt of Index.
										Br1++;
										//When  Gray Briges Increamnt Max Index.
										if (Br1 > CastleMidle)
										{
											CastleMidle++;
											CastleHigh++;
										}
									}
									//catch(std::exception &t)
									{

									}
								} //For Brown Castles.
								else
								{
									//try
									{
										//if (CastlesOnTable[Br2] != null)
										//CastlesOnTable[Br2].Dispose();

										//Construction Draw of  Brown Castles.
										CastlesOnTable[Br2] =  DrawCastle(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, a, TableList[index], -1, false, Br2);
										//Increament of Index.
										Br2++;
										//wehn Brown  Castles Detected Increament Max Index.
										if (Br2 > CastleHigh)
										{
											CastleHigh++;
										}
									}
									//catch(std::exception &t)
									{

									}
								}
							}
							else //For Minister Objects.
							{
								if (abs(TableList[index][Row][Column]) == 5)
								{
									//Initiate Local int Varibales.
									int a;
									if (TableList[index][Row][Column] > 0)
									{
										a = 1;
									}
									else
									{
										a = -1;
									}
									//For Gray ints.
									if (a == 1)
									{


										//try
										{
											//if (MinisterOnTable[Mi1] != null)
											// MinisterOnTable[Mi1].Dispose();

											//construction of  draw Gray Minster.
											MinisterOnTable[Mi1] =  DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, a, TableList[index], 1, false, Mi1);
											//Increament of Index.
											Mi1++;
											//Wehn  Gray Minster Detected Increament Max Indexes.
											if (Mi1 > MinisterMidle)
											{
												MinisterMidle++;
												MinisterHigh++;
											}
										}
										//catch(std::exception &t)
										{

										}

									} //For Brown  ints.
									else
									{
										//try
										{
											//if (MinisterOnTable[Mi2] != null)
											// MinisterOnTable[Mi2].Dispose();

											//Construction of  Draw Brown Minster.
											MinisterOnTable[Mi2] =  DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, a, TableList[index], -1, false, Mi2);
											//Increament Index.
											Mi2++;
											//When  Brown Minister Detected Increament Max Index.
											if (Mi2 > MinisterHigh)
											{
												MinisterHigh++;
											}
										}
										//catch(std::exception &t)
										{

										}
									}
								}
								else //for King Objects.
								{
									if (abs(TableList[index][Row][Column]) == 6)
									{
										//Initiate Of int.
										int a;
										if (TableList[index][Row][Column] > 0)
										{
											a = 1;
										}
										else
										{
											a = -1;
										}
										//int consideration.
										if (a == 1)
										{

											//try
											{
												//if (KingOnTable[Ki1] != null)
												//KingOnTable[Ki1].Dispose();

												//Construction of  Draw Gray King.
												KingOnTable[Ki1] =  DrawKing(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, a, TableList[index], 1, false, Ki1);
												//Increament of Index.
												Ki1++;
												//when  Draw  Object Detected Increament Max Index.
												if (Ki1 > KingMidle)
												{
													KingMidle++;
													KingHigh++;

												}
											}
											//catch(std::exception &t)
											{

											}
										} //For Brown King int
										else
										{
											//try
											{
												//if (KingOnTable[Ki2] != null)
												// KingOnTable[Ki2].Dispose();

												//Construction of  Draw King Brown Object.
												KingOnTable[Ki2] =  DrawKing(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, a, TableList[index], -1, false, Ki2);
												//Increament of Index.
												Ki2++;
												//When  Object Detected Increament Of Brown King Max Index.
												if (Ki2 > KingHigh)
												{
													KingHigh++;
												}
											}
											//catch(std::exception &t)
											{


											}
										}

									}
								}
							}
						}
					}
				}
			}
		}
	}

	SetObjectNumbers(TableList[0]);
	for (int i = So1; i < SodierMidle; i++)
	{
		//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
		delete &SolderesOnTable[i];
	}

	for (int i = So2; i < SodierHigh; i++)
	{
		//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
		delete &SolderesOnTable[i];
	}

	for (int i = El1; i < ElefantMidle; i++)
	{
		//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
		delete &ElephantOnTable[i];
	}

	for (int i = El2; i < ElefantHigh; i++)
	{
		//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
		delete &ElephantOnTable[i];
	}

	for (int i = Ho1; i < HourseMidle; i++)
	{
		//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
		delete &HoursesOnTable[i];
	}

	for (int i = Ho2; i < HourseHight; i++)
	{
		//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
		delete &HoursesOnTable[i];
	}

	for (int i = Br1; i < CastleMidle; i++)
	{
		//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
		delete &CastlesOnTable[i];
	}

	for (int i = Br2; i < CastleHigh; i++)
	{
		//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
		delete &CastlesOnTable[i];
	}

	for (int i = Mi1; i < MinisterMidle; i++)
	{
		//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
		delete &MinisterOnTable[i];
	}

	for (int i = Mi2; i < MinisterHigh; i++)
	{
		//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
		delete &MinisterOnTable[i];
	}

	for (int i = Ki1; i < KingMidle; i++)
	{
		//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
		delete &KingOnTable[i];
	}

	for (int i = Ki2; i < KingHigh; i++)
	{
		//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
		delete &KingOnTable[i];
	}
	SetRowColumnFinished = true;

}


void AllDraw::SetRowColumnFinishedWait()
{

	do
	{

		////delay(1);
	} while (!SetRowColumnFinished);




}

void AllDraw::BeginIndexFoundingMaxLessofMaxList(int ListIndex, std::vector<double> Founded, double LessB)
{
	bool Added = false;
	//When There is Maximum Huristsic AStar Gredy Back Ward in Blitz Games.
	if (MaxHuristicAStarGreedytBackWard.size() > 0)
	{
		//When List Index is LessB than Founded.
		if (ListIndex < MaxHuristicAStarGreedytBackWard.size())
		{
			return;
		}
		//Initiate Variable.

		//Recursive Method.
		BeginIndexFoundingMaxLessofMaxList(ListIndex++, Founded, LessB);
		//When Greater LessB of First index Object Found.
		if (LessB < (MaxHuristicAStarGreedytBackWard[ListIndex][1]))
		{
			LessB = (MaxHuristicAStarGreedytBackWard[ListIndex][1]);
			Added = true;

			Founded.push_back(2);
		}
		//When Greater LessB of Second index Object Found.
		if (LessB < (MaxHuristicAStarGreedytBackWard[ListIndex][5]))
		{
			LessB = (MaxHuristicAStarGreedytBackWard[ListIndex][5]);
			if (Added)
			{
				Founded.pop_back();
			}
			Added = true;
			Founded.push_back(6);
		}
		//When Greater LessB of Third index Object Found.
		if (LessB < (MaxHuristicAStarGreedytBackWard[ListIndex][9]))
		{
			LessB = (MaxHuristicAStarGreedytBackWard[ListIndex][9]);
			if (Added)
			{
				Founded.pop_back();
			}
			Added = true;
			Founded.push_back(10);
		}
		//When Greater LessB of Foutrh index Object Found.
		if (LessB < (MaxHuristicAStarGreedytBackWard[ListIndex][13]))
		{
			LessB = (MaxHuristicAStarGreedytBackWard[ListIndex][13]);
			if (Added)
			{
				Founded.pop_back();
			}
			Added = true;
			Founded.push_back(14);
		}
		//When Greater LessB of Fifth index Object Found.
		if (LessB < (MaxHuristicAStarGreedytBackWard[ListIndex][18]))
		{
			LessB = (MaxHuristicAStarGreedytBackWard[ListIndex][18]);
			if (Added)
			{
				Founded.pop_back();
			}
			Added = true;
			Founded.push_back(19);
		}
		//When Greater LessB of Sith index Object Found.
		if (LessB < (MaxHuristicAStarGreedytBackWard[ListIndex][22]))
		{
			LessB = (MaxHuristicAStarGreedytBackWard[ListIndex][22]);
			if (Added)
			{
				Founded.pop_back();
			}
			Added = true;
			Founded.push_back(23);
		}
	}

}


bool AllDraw::IsToCheckMateHasLessDeeperThanForCheckMate(int Order, int ToCheckMate, int ForCheckMate, int AStarGreedyInt)
{


	//Initiate variables.
	bool AA = false;
	int CDummy = Order;
	//For Gray One.
	if (Order == 1)
	{

		//For Solderis.
		for (int i = 0; i < SodierMidle; i++)
		{
			for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{

				//When there is Brown checked mate.
				if (SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy == -1)
				{
					//Set.
					ForCheckMate = AStarGreedyInt;
					if (ToCheckMate >= 0)
					{
						if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
						{
							AA = true;
						}
					}
				}
				else
				{
					//When there is Gray Checked mate.
					if (SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy == 1)
					{
						ForCheckMate = AStarGreedyInt;
						if (ForCheckMate >= 0)
						{
							if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
							{
								AA = true;
							}
						}
					}
				}
				Order *= -1;
				for (int ii = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); ii++)
				{
					AA = AA || SolderesOnTable[i].SoldierThinking.AStarGreedy[ii].IsToCheckMateHasLessDeeperThanForCheckMate(Order, ToCheckMate, ForCheckMate, AStarGreedyInt++);
				}
				Order = CDummy;
			}
		}
		for (int i = 0; i < ElefantMidle; i++)
		{
			for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{

				//When there is Brown checked mate.
				if (ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy == -1)
				{
					ForCheckMate = AStarGreedyInt;
					if (ToCheckMate >= 0)
					{
						if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
						{
							AA = true;
						}
					}



				}
				else
				{
					//When there is Gray Checked mate.
					if (ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy == 1)
					{
						ForCheckMate = AStarGreedyInt;
						if (ForCheckMate >= 0)
						{
							if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
							{
								AA = true;
							}
						}
					}
				}
				Order *= -1;
				for (int ii = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size();ii++)
				{
					AA = AA || ElephantOnTable[i].ElefantThinking.AStarGreedy[ii].IsToCheckMateHasLessDeeperThanForCheckMate(Order, ToCheckMate, ForCheckMate, AStarGreedyInt++);
				}
				Order = CDummy;
			}
		}
		for (int i = 0; i < HourseMidle; i++)
		{
			for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{

				//When there is Brown checked mate.
				if (HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy == -1)
				{
					ForCheckMate = AStarGreedyInt;
					if (ToCheckMate >= 0)
					{
						if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
						{
							AA = true;
						}
					}
				}
				else
				{
					//When there is Gray Checked mate.
					if (HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy == 1)
					{
						ForCheckMate = AStarGreedyInt;
						if (ForCheckMate >= 0)
						{
							if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
							{
								AA = true;
							}
						}
					}
				}
				Order *= -1;
				for (int ii = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size();ii++)
				{
					AA = AA || HoursesOnTable[i].HourseThinking.AStarGreedy[ii].IsToCheckMateHasLessDeeperThanForCheckMate(Order, ToCheckMate, ForCheckMate, AStarGreedyInt++);
				}
				Order = CDummy;
			}
		}
		for (int i = 0; i < CastleMidle; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{

				{
					//When there is Brown checked mate.
					if (CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy == -1)
					{
						ForCheckMate = AStarGreedyInt;
						if (ToCheckMate >= 0)
						{
							if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
							{
								AA = true;
							}
						}
					}
					else
					{
						//When there is Gray Checked mate.
						if (CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy == 1)
						{
							ForCheckMate = AStarGreedyInt;
							if (ForCheckMate >= 0)
							{
								if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
								{
									AA = true;
								}
							}
						}
					}
				}
				Order *= -1;
				for (int ii = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && ii <CastlesOnTable[i].CastleThinking.AStarGreedy.size();ii++)
				{
					AA = AA || CastlesOnTable[i].CastleThinking.AStarGreedy[ii].IsToCheckMateHasLessDeeperThanForCheckMate(Order, ToCheckMate, ForCheckMate, AStarGreedyInt++);
				}
				Order = CDummy;
			}
		}
		for (int i = 0; i < MinisterMidle; i++)
		{
			for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j <MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{

				//When there is Brown checked mate.
				if (MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy == -1)
				{
					ForCheckMate = AStarGreedyInt;
					if (ToCheckMate >= 0)
					{
						if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
						{
							AA = true;
						}
					}
				}
				else
				{
					//When there is Gray Checked mate.
					if (MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy == 1)
					{
						ForCheckMate = AStarGreedyInt;
						if (ForCheckMate >= 0)
						{
							if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
							{
								AA = true;
							}
						}


					}
				}
				Order *= -1;
				for (int ii = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && ii <MinisterOnTable[i].MinisterThinking.AStarGreedy.size();ii++)
				{
					AA = AA || MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].IsToCheckMateHasLessDeeperThanForCheckMate(Order, ToCheckMate, ForCheckMate, AStarGreedyInt++);
				}
				Order = CDummy;
			}
		}	
		for (int i = 0; i < KingMidle; i++)
		{
			for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{

				//When there is Brown checked mate.
				if (KingOnTable[i].KingThinking.CheckMateAStarGreedy == -1)
				{
					ForCheckMate = AStarGreedyInt;
					if (ToCheckMate >= 0)
					{
						if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
						{
							AA = true;
						}
					}
				}
				else
				{
					//When there is Gray Checked mate.
					if (KingOnTable[i].KingThinking.CheckMateAStarGreedy == 1)
					{
						ForCheckMate = AStarGreedyInt;
						if (ForCheckMate >= 0)
						{
							if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
							{
								AA = true;
							}
						}
					}
				}
				Order *= -1;
				for (int ii = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && ii < KingOnTable[i].KingThinking.AStarGreedy.size();ii++)
				{
					AA = AA || KingOnTable[i].KingThinking.AStarGreedy[ii].IsToCheckMateHasLessDeeperThanForCheckMate(Order, ToCheckMate, ForCheckMate, AStarGreedyInt++);
				}
				Order = CDummy;
			}
		}
	}
	else
	{
		//ChessRules::CurrentOrder = -1;
		for (int i = SodierMidle; i < SodierHigh; i++)
		{
			for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j< SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{

				{
					//When there is Brown checked mate.
					if (SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy == -1)
					{
						ForCheckMate = AStarGreedyInt;
						if (ToCheckMate >= 0)
						{
							if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
							{
								AA = true;
							}
						}
					}
					else
					{
						//When there is Gray Checked mate.
						if (SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy == 1)
						{
							ForCheckMate = AStarGreedyInt;
							if (ForCheckMate >= 0)
							{
								if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
								{
									AA = true;
								}
							}
						}
					}
				}
				Order *= -1;
				for (int ii = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); ii++)
				{
					AA = AA || SolderesOnTable[i].SoldierThinking.AStarGreedy[ii].IsToCheckMateHasLessDeeperThanForCheckMate(Order, ToCheckMate, ForCheckMate, AStarGreedyInt++);
				}
				Order = CDummy;
			}
		}
		for (int i = ElefantMidle; i < ElefantHigh; i++)
		{
			for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{

				//When there is Brown checked mate.
				if (ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy == -1)
				{
					ForCheckMate = AStarGreedyInt;
					if (ToCheckMate >= 0)
					{
						if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
						{
							AA = true;
						}
					}
				}
				else
				{
					//When there is Gray Checked mate.
					if (ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy == 1)
					{
						ForCheckMate = AStarGreedyInt;
						if (ForCheckMate >= 0)
						{
							if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
							{
								AA = true;
							}
						}
					}
				}
				Order *= -1;
				for (int ii = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size();ii++)
				{
					AA = AA || ElephantOnTable[i].ElefantThinking.AStarGreedy[ii].IsToCheckMateHasLessDeeperThanForCheckMate(Order, ToCheckMate, ForCheckMate, AStarGreedyInt++);
				}
				Order = CDummy;
			}
		}
		for (int i = HourseMidle; i < HourseHight; i++)
		{
			for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{

				if (HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy == -1)
				{
					ForCheckMate = AStarGreedyInt;
					if (ToCheckMate >= 0)
					{
						if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
						{
							AA = true;
						}
					}
				}
				else
				{
					//When there is Gray Checked mate.
					if (HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy == 1)
					{
						ForCheckMate = AStarGreedyInt;
						if (ForCheckMate >= 0)
						{
							if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
							{
								AA = true;
							}
						}
					}
				}
				Order *= -1;
				for (int ii = 0; (KingOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size(); ii++)
				{
					AA = AA || HoursesOnTable[i].HourseThinking.AStarGreedy[ii].IsToCheckMateHasLessDeeperThanForCheckMate(Order, ToCheckMate, ForCheckMate, AStarGreedyInt++);
				}
				Order = CDummy;
			}
		}
		for (int i = CastleMidle; i < CastleHigh; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) &&j<CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{

				//When there is Brown checked mate.
				if (CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy == -1)
				{
					ForCheckMate = AStarGreedyInt;
					if (ToCheckMate >= 0)
					{
						if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
						{
							AA = true;
						}
					}
				}
				else
				{
					//When there is Gray Checked mate.
					if (CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy == 1)
					{
						ForCheckMate = AStarGreedyInt;
						if (ForCheckMate >= 0)
						{
							if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
							{
								AA = true;
							}
						}
					}
				}
				Order *= -1;
				for (int ii = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size();ii++)
				{
					AA = AA || CastlesOnTable[i].CastleThinking.AStarGreedy[ii].IsToCheckMateHasLessDeeperThanForCheckMate(Order, ToCheckMate, ForCheckMate, AStarGreedyInt++);
				}
				Order = CDummy;
			}
		}
		for (int i = MinisterMidle; i < MinisterHigh; i++)
		{
			for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) &&j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{

				//When there is Brown checked mate.
				if (MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy == -1)
				{
					ForCheckMate = AStarGreedyInt;
					if (ToCheckMate >= 0)
					{
						if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
						{
							AA = true;
						}
					}
				}
				else
				{
					//When there is Gray Checked mate.
					if (MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy == 1)
					{
						ForCheckMate = AStarGreedyInt;
						if (ForCheckMate >= 0)
						{
							if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
							{
								AA = true;
							}
						}
					}
				}

				Order *= -1;
				for (int ii = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size();ii++)
				{
					AA = AA || MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].IsToCheckMateHasLessDeeperThanForCheckMate(Order, ToCheckMate, ForCheckMate, AStarGreedyInt++);
				}
				Order = CDummy;
			}
		}
		for (int i = KingMidle; i < KingHigh; i++)
		{
			for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{

				{
					//When there is Brown checked mate.
					if (KingOnTable[i].KingThinking.CheckMateAStarGreedy == -1)
					{
						ForCheckMate = AStarGreedyInt;
						if (ToCheckMate >= 0)
						{
							if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
							{
								AA = true;
							}
						}
					}
					else
					{
						//When there is Gray Checked mate.
						if (KingOnTable[i].KingThinking.CheckMateAStarGreedy == 1)
						{
							ForCheckMate = AStarGreedyInt;
							if (ForCheckMate >= 0)
							{
								if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
								{
									AA = true;
								}
							}
						}
					}

				}
				Order *= -1;
				for (int ii = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && ii < KingOnTable[i].KingThinking.AStarGreedy.size();ii++)
				{
					AA = AA || KingOnTable[i].KingThinking.AStarGreedy[ii].IsToCheckMateHasLessDeeperThanForCheckMate(Order, ToCheckMate, ForCheckMate, AStarGreedyInt++);
				}
				Order = CDummy;
			}
		}

	}
	ChessRules::CurrentOrder = CDummy;
	return AA;

}


void AllDraw::IsPenaltyRegardCheckMateAtBranch(int Order, int Do, AllDraw Base)
{

	int CDummy = ChessRules::CurrentOrder;
	int COrder = Order;
	//For Gray Order.
	if (Order == 1)
	{
		ChessRules *AA;

		//ChessRules::CurrentOrder = 1;
		//For  Soldeirs.
		for (int i = 0; i < SodierMidle; i++)
		{
			for (int j = 0; ((&SolderesOnTable) != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{
		
					//Create Rules Objects For Soldiers.
					AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, SolderesOnTable[i].SoldierThinking.TableListSolder[j][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]], SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order, SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]);
					//When CheckMate Occured for Current Sodiers
					if (AA->CheckMate(SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order))
					{
						//When Self CheckMate
						if (AllDraw::OrderPlate == 1 && AA->CheckMateGray)
						{
							//Return Ignore
							(Do) = -1;
							//Set Superposition.
							SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy = -1;
							//Penalty Subbranchs.
							MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);
						}
						else
						{
							//When Enemy CheckMate
							if (AllDraw::OrderPlate == -1 && AA->CheckMateBrown)
							{
								//Set Regard and Set Movements.
								(Do) = 1;
								//Regard Subbranchs.
								MakeRegardAllCheckMateBranches(Base, AllDraw::OrderPlate);
								//Set Superpostion.
								SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy = 1;
							}
						}
					}
				if ((Do) != -1)
				{
					Order *= -1;
					ChessRules::CurrentOrder *= -1;
					//For Subbranchs.
					for (int ii = 0; ((&SolderesOnTable) != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size();ii++)
					{
						SolderesOnTable[i].SoldierThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, Do, Base);
					}
					Order = COrder;
					ChessRules::CurrentOrder = CDummy;
				}

			}
		}
		//For Elephant.
		for (int i = 0; i < ElefantMidle; i++)
		{
			for (int j = 0; ((&ElephantOnTable) != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j <ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{

					//Create Elephant Rules.
					AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ElephantOnTable[i].ElefantThinking.TableListElefant[j][ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0]][ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1]], ElephantOnTable[i].ElefantThinking.TableListElefant[j], Order, ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0], ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1]);
					//When CheckMate Occured for Current Elephant.
					if (AA->CheckMate(ElephantOnTable[i].ElefantThinking.TableListElefant[j], Order))
					{
						//For Self Order CheckMate.
						if (AllDraw::OrderPlate == 1 && AA->CheckMateGray)
						{
							//Set Penalty Ignore.
							(Do) = -1;
							//Set Superposition.
							ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy = -1;
							//Penalty Subbranchs.
							MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);
						}
						else
						{
							//For Enemy Order CheckMate.
							if (AllDraw::OrderPlate == -1 && AA->CheckMateBrown)
							{
								//Set Regard Continue.
								(Do) = 1;
								//Regard Subolders.
								MakeRegardAllCheckMateBranches(Base, AllDraw::OrderPlate);
								//Set Superposition.
								ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy = 1;
							}
						}
					}
				
				if ((Do) != -1)
				{
					Order *= -1;
					ChessRules::CurrentOrder *= -1;
					//For Subbranchs.
					for (int ii = 0; ((&ElephantOnTable) != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size();ii++)
					{
						ElephantOnTable[i].ElefantThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, Do, Base);
					}
					Order = COrder;
					ChessRules::CurrentOrder = CDummy;
				}
			}
		}
		//For Hourse.
		for (int i = 0; i < HourseMidle; i++)
		{
			for (int j = 0; (HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{

				
					//Set Hourse Rules Objects.
					AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, HoursesOnTable[i].HourseThinking.TableListHourse[j][HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0]][HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1]], HoursesOnTable[i].HourseThinking.TableListHourse[j], Order, HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0], HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1]);
					//When CheckMate Occured.
					if (AA->CheckMate(HoursesOnTable[i].HourseThinking.TableListSolder[j], Order))
					{
						//For Self CheckMate.
						if (AllDraw::OrderPlate == 1 && AA->CheckMateGray)
						{
							//Set Ignore.
							(Do) = -1;
							//Set Superposition.
							HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy = -1;
							//Penalty Subbranchs.
							MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);
						}
						else
						{
							//For Enemy CheckMate.
							if (AllDraw::OrderPlate == -1 && AA->CheckMateBrown)
							{
								//Set Regard.
								(Do) = 1;
								//Superposition.
								HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy = 1;
								//Set Regard For Sub Branches.
								MakeRegardAllCheckMateBranches(Base, AllDraw::OrderPlate);
							}
						}
					}
				
				if ((Do) != -1)
				{
					Order *= -1;
					ChessRules::CurrentOrder *= -1;
					//Sub branchs For Hourse.
					for (int ii = 0; (HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size();ii++)
					{
						HoursesOnTable[i].HourseThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, Do, Base);
					}
					Order = COrder;
					ChessRules::CurrentOrder = CDummy;
				}
			}
		}
		//For Gray Briges.
		for (int i = 0; i < CastleMidle; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{

				
					//Castles Gray Rules.
					AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, CastlesOnTable[i].CastleThinking.TableListCastle[j][CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0]][CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1]], CastlesOnTable[i].CastleThinking.TableListCastle[j], Order, CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0], CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1]);
					//When Current Gray Castles CheckMate.
					if (AA->CheckMate(CastlesOnTable[i].CastleThinking.TableListCastle[j], Order))
					{
						//For Self CheckMate
						if (AllDraw::OrderPlate == 1 && AA->CheckMateGray)
						{
							//Set Penalty Ignore.
							(Do) = -1;
							//Set Superposition.
							CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy = -1;
							//Penalty Sub branchs.
							MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);
						}
						else
						{
							//For Enemy CheckMate.
							if (AllDraw::OrderPlate == -1 && AA->CheckMateBrown)
							{
								//Set Regard.
								(Do) = 1;
								//Superpoistion.
								CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy = 1;
								//Set Regard Subbranchs.
								MakeRegardAllCheckMateBranches(Base, AllDraw::OrderPlate);
							}
						}
					}
				
				if ((Do) != -1)
				{
					Order *= -1;
					ChessRules::CurrentOrder *= -1;
					//For Castles Gray Subbranchs.
					//try
					{
						for (int ii = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size();ii++)
						{
							CastlesOnTable[i].CastleThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, Do, Base);
						}
					}
					//catch(std::exception &t)
					{

					}
					Order = COrder;
					ChessRules::CurrentOrder = CDummy;
				}
			}
		}
		//For Ministers Gray.
		for (int i = 0; i < MinisterMidle; i++)
		{
			for (int j = 0; ((MinisterOnTable != nullptr)) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{

				
					//Minister Gray Rules.
					AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, MinisterOnTable[i].MinisterThinking.TableListMinister[j][MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0]][MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1]], MinisterOnTable[i].MinisterThinking.TableListMinister[j], Order, MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0], MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1]);
					//When M ate Occured in Minister Gray.
					if (AA->CheckMate(MinisterOnTable[i].MinisterThinking.TableListMinister[j], Order))
					{
						//Self CheckMate.
						if (AllDraw::OrderPlate == 1 && AA->CheckMateGray)
						{
							//Penalty Ignore.
							(Do) = -1;
							//Superpostion.
							MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy = -1;
							//Penalty Subbranchs.
							MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);
						}
						else
						{
							//For Enemy CheckMate.
							if (AllDraw::OrderPlate == -1 && AA->CheckMateBrown)
							{
								//Regard Setting.
								(Do) = 1;
								//Superpoistion.
								MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy = 1;
								//Set Subbranchs Regard.
								MakeRegardAllCheckMateBranches(Base, AllDraw::OrderPlate);
							}
						}
					}
				
				if ((Do) != -1)
				{
					Order *= -1;
					ChessRules::CurrentOrder *= -1;
					//For Gray Ministers Subbranchs.
					//try
					{
						for (int ii = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size();ii++)
						{
							MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, Do, Base);
						}
					}
					//catch(std::exception &t)
					{

					}
					Order = COrder;
					ChessRules::CurrentOrder = CDummy;
				}
			}
		}
		//For Gray King.
		for (int i = 0; i < KingMidle; i++)
		{
			for (int j = 0; (KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{

				
					//Gray King Rules.
					AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, KingOnTable[i].KingThinking.TableListKing[j][KingOnTable[i].KingThinking.RowColumnKing[j][0]][KingOnTable[i].KingThinking.RowColumnKing[j][1]], KingOnTable[i].KingThinking.TableListKing[j], Order, KingOnTable[i].KingThinking.RowColumnKing[j][0], KingOnTable[i].KingThinking.RowColumnKing[j][1]);
					//When CheckMate Occured in King Gray.
					if (AA->CheckMate(KingOnTable[i].KingThinking.TableListKing[j], Order))
					{
						//Self CheckMate.
						if (AllDraw::OrderPlate == 1 && AA->CheckMateGray)
						{
							//Penalty Ignore.
							(Do) = -1;
							//Superposition.
							KingOnTable[i].KingThinking.CheckMateAStarGreedy = -1;
							//Penalty Subbranchs.
							MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);
						}
						else
						{
							//Self CheckMate.
							if (AllDraw::OrderPlate == -1 && AA->CheckMateBrown)
							{
								//Regard Setting.
								(Do) = 1;
								//Superpoistion.
								KingOnTable[i].KingThinking.CheckMateAStarGreedy = 1;
								//Regard Subbranchs.
								MakeRegardAllCheckMateBranches(Base, AllDraw::OrderPlate);
							}
						}
					}
				
				if ((Do) != -1)
				{
					Order *= -1;
					ChessRules::CurrentOrder *= -1;
					//For King Gray Subbranchs.
					//try
					{
						for (int ii = 0; (KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && ii < KingOnTable[i].KingThinking.AStarGreedy.size();ii++)
						{
							KingOnTable[i].KingThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, Do, Base);
						}
					}
					//catch(std::exception &t)
					{

					}
					Order = COrder;
					ChessRules::CurrentOrder = CDummy;
				}
			}
		}
	}
	//For Brown Order.
	else
	{
		ChessRules *AA = nullptr;
		//ChessRules::CurrentOrder = -1;
		//For Solders Brown.
		for (int i = SodierMidle; i < SodierHigh; i++)
		{
			for (int j = 0; ((&SolderesOnTable) != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{

				
					//Solders Brown Rules.
					AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, SolderesOnTable[i].SoldierThinking.TableListSolder[j][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]], SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order, SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]);
					//When Solders Brown CheckMate Occured.
					if (AA->CheckMate(SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order))
					{
						//Self CheckMate.
						if (AllDraw::OrderPlate == -1 && AA->CheckMateBrown)
						{
							//Ignore Penalty.
							(Do) = -1;
							//Supperpoistion.
							SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy = -1;
							//Penalty Subbranchs Soders Brown.
							MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);
						}
						else
						{
							//Self CheckMate.
							if (AllDraw::OrderPlate == 1 && AA->CheckMateGray)
							{
								//Set Regard.
								(Do) = 1;
								//Superpoition.
								SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy = 1;
								//Penalty Subbranchs.
								MakeRegardAllCheckMateBranches(Base, AllDraw::OrderPlate);
							}
						}
					}
				
				if ((Do) != -1)
				{
					Order *= -1;
					ChessRules::CurrentOrder *= -1;
					//Solders Brown Subbranchs Calling.
					//try
					{
						for (int ii = 0; ((&SolderesOnTable) != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size();ii++)
						{
							SolderesOnTable[i].SoldierThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, Do, Base);
						}
					}
					//catch(std::exception &t)
					{

					}
					Order = COrder;
					ChessRules::CurrentOrder = CDummy;
				}
			}
		}
		//Elephant Brown 
		for (int i = ElefantMidle; i < ElefantHigh; i++)
		{
			for (int j = 0; ((&ElephantOnTable) != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{

				
					//Elephant Brown Rules.
					AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ElephantOnTable[i].ElefantThinking.TableListElefant[j][ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0]][ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1]], ElephantOnTable[i].ElefantThinking.TableListElefant[j], Order, ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0], ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1]);
					//CheckMate Occured in Elephenat Brown.
					if (AA->CheckMate(ElephantOnTable[i].ElefantThinking.TableListElefant[j], Order))
					{
						//Self CheckMate.
						if (AllDraw::OrderPlate == -1 && AA->CheckMateBrown)
						{
							//Ignore Penalty.
							(Do) = -1;
							//Superpoistion.
							ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy = -1;
							//Penalty Subbranchs.
							MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);
						}
						else
						{
							//CheckMate Enemy.
							if (AllDraw::OrderPlate == 1 && AA->CheckMateGray)
							{
								//Set Regrading.
								(Do) = 1;
								//Superposition.
								ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy = 1;
								//Regrad Subbranchs.
								MakeRegardAllCheckMateBranches(Base, AllDraw::OrderPlate);
							}
						}
					}
				
				if ((Do) != -1)
				{
					Order *= -1;
					ChessRules::CurrentOrder *= -1;
					//Subbranchs Elephenat Brown Calling.
					//try
					{
						for (int ii = 0; ((&ElephantOnTable) != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size();ii++)
						{
							ElephantOnTable[i].ElefantThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, Do, Base);
						}
					}
					//catch(std::exception &t)
					{

					}
					Order = COrder;
					ChessRules::CurrentOrder = CDummy;
				}
			}
		}
		//Hourse Brown 
		for (int i = HourseMidle; i < HourseHight; i++)
		{
			for (int j = 0; (HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{

					//Hourse Brown Rules.
					AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, HoursesOnTable[i].HourseThinking.TableListHourse[j][HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0]][HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1]], HoursesOnTable[i].HourseThinking.TableListHourse[j], Order, HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0], HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1]);
					//When Hourse Broin CheckMate Ocuucred.
					if (AA->CheckMate(HoursesOnTable[i].HourseThinking.TableListSolder[j], Order))
					{
						//Self CheckMate.
						if (AllDraw::OrderPlate == -1 && AA->CheckMateBrown)
						{
							//Ignore Penalty.
							(Do) = -1;
							//Superposition.
							HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy = -1;
							//Penalty Subbranchs.
							MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);
						}
						else
						{
							//CheckMate Enemy.
							if (AllDraw::OrderPlate == 1 && AA->CheckMateGray)
							{
								//Set Regrad.
								(Do) = 1;
								//Superposition.
								HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy = 1;
								//Regrad Subbranchs.
								MakeRegardAllCheckMateBranches(Base, AllDraw::OrderPlate);
							}
						}
					}
				
				if ((Do) != -1)
				{
					Order *= -1;
					ChessRules::CurrentOrder *= -1;
					//Hourse Brown Calling Subbranchs.
					//try
					{
						for (int ii = 0; (HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size();ii++)
						{
							HoursesOnTable[i].HourseThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, Do, Base);
						}
					}
					//catch(std::exception &t)
					{

					}
					Order = COrder;
					ChessRules::CurrentOrder = CDummy;
				}
			}
		}
		//Castles Brown 
		for (int i = CastleMidle; i < CastleHigh; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{

				
					//Castles Brown Rules.
					AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, CastlesOnTable[i].CastleThinking.TableListCastle[j][CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0]][CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1]], CastlesOnTable[i].CastleThinking.TableListCastle[j], Order, CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0], CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1]);
					//When Brown Castles CheckMate Occured.
					if (AA->CheckMate(CastlesOnTable[i].CastleThinking.TableListCastle[j], Order))
					{
						//Self CheckMate.
						if (AllDraw::OrderPlate == -1 && AA->CheckMateBrown)
						{
							//Ignore CheckMate.
							(Do) = -1;
							//Superpoistion.
							CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy = -1;
							//Subbranchs Penalty.
							MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);
						}
						else
						{
							//CheckMate Enemy.
							if (AllDraw::OrderPlate == 1 && AA->CheckMateGray)
							{
								//Set Regard.
								(Do) = 1;
								//Superpoistion.
								CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy = 1;
								//Regard Subbranchs.
								MakeRegardAllCheckMateBranches(Base, AllDraw::OrderPlate);
							}
						}
					}
				
				if ((Do) != -1)
				{
					Order *= -1;
					ChessRules::CurrentOrder *= -1;
					//Brown Castles Calling Subbranches.
					//try
					{
						for (int ii = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size();ii++)
						{
							CastlesOnTable[i].CastleThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, Do, Base);
						}
					}
					//catch(std::exception &t)
					{

					}
					Order = COrder;
					ChessRules::CurrentOrder = CDummy;
				}
			}
		}
		//Minister Brown 
		for (int i = MinisterMidle; i < MinisterHigh; i++)
		{
			for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{

				
					//Minister Brown Rules.
					AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, MinisterOnTable[i].MinisterThinking.TableListMinister[j][MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0]][MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1]], MinisterOnTable[i].MinisterThinking.TableListMinister[j], Order, MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0], MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1]);
					//When Minister Borwn CheckMate Occcured.
					if (AA->CheckMate(MinisterOnTable[i].MinisterThinking.TableListMinister[j], Order))
					{
						//Self CheckMate.
						if (AllDraw::OrderPlate == -1 && AA->CheckMateBrown)
						{
							//Set Ignore.
							(Do) = -1;
							//Superpoistion.
							MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy = -1;
							//Penalty Subbranches.
							MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);
						}
						else
						{
							//CheckMate Enemy.
							if (AllDraw::OrderPlate == 1 && AA->CheckMateGray)
							{
								//Set Regard.
								(Do) = 1;
								//Superposition.
								MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy = 1;
								//Regard SubBranches.
								MakeRegardAllCheckMateBranches(Base, AllDraw::OrderPlate);
							}
						}
					}
				
				if ((Do) != -1)
				{
					Order *= -1;
					ChessRules::CurrentOrder *= -1;
					//Minister Brown SubBranches Calling.
					//try
					{
						for (int ii = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size();ii++)
						{
							MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, Do, Base);
						}
					}
					//catch(std::exception &t)
					{

					}
					Order = COrder;
					ChessRules::CurrentOrder = CDummy;
				}
			}
		}
		//King Brown
		for (int i = KingMidle; i < KingHigh; i++)
		{
			for (int j = 0; (KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{

				
					//King Brown Rules.
					AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, KingOnTable[i].KingThinking.TableListKing[j][KingOnTable[i].KingThinking.RowColumnKing[j][0]][KingOnTable[i].KingThinking.RowColumnKing[j][1]], KingOnTable[i].KingThinking.TableListKing[j], Order, KingOnTable[i].KingThinking.RowColumnKing[j][0], KingOnTable[i].KingThinking.RowColumnKing[j][1]);
					//When King Brown Rules CheckMate Occcured.
					if (AA->CheckMate(KingOnTable[i].KingThinking.TableListKing[j], Order))
					{
						//Self CheckMate.
						if (AllDraw::OrderPlate == -1 && AA->CheckMateBrown)
						{
							//Set Ignore.
							(Do) = -1;
							//Superposition.
							KingOnTable[i].KingThinking.CheckMateAStarGreedy = -1;
							//Penalty SubBranches.
							MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);
						}
						else
						{
							//CheckMate Enemy.
							if (AllDraw::OrderPlate == 1 && AA->CheckMateGray)
							{
								//Set Regard.
								(Do) = 1;
								//Superposition.
								KingOnTable[i].KingThinking.CheckMateAStarGreedy = 1;
								//Regard Subbranches.
								MakeRegardAllCheckMateBranches(Base, AllDraw::OrderPlate);
							}
						}
					}

				
				if ((Do) != -1)
				{
					Order *= -1;
					ChessRules::CurrentOrder *= -1;
					//King Brown Subbranches Calling.
					//try
					{
						for (int ii = 0; (KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && ii < KingOnTable[i].KingThinking.AStarGreedy.size();ii++)
						{
							KingOnTable[i].KingThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, Do, Base);
						}
					}
					//catch(std::exception &t)
					{

					}
					Order = COrder;
					ChessRules::CurrentOrder = CDummy;
				}
			}
		}

		ChessRules::CurrentOrder = CDummy;

	}
}
void AllDraw::MakePenaltyAllCheckMateBranches(AllDraw A, int Order)
{
	int COrder = Order;
	int CDummy = ChessRules::CurrentOrder;
	if (Order == 1)
	{

		for (int i = 0; i < SodierMidle; i++)
		{
			for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{
				//try
				//{
					SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[i].LearningAlgorithmPenalty();
				//}
				//catch(std::exception &t)
				///{

				//}
				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				for (int ii = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size();ii++)
				{
					MakePenaltyAllCheckMateBranches(SolderesOnTable[i].SoldierThinking.AStarGreedy[ii], Order);
				}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = 0; i < ElefantMidle; i++)
		{
			for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{

				//try
				//{
					ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].LearningAlgorithmPenalty();
				//}
				//catch(std::exception &t)
				//{

				//}

				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				//{
					for (int ii = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size();ii++)
					{
						MakePenaltyAllCheckMateBranches(ElephantOnTable[i].ElefantThinking.AStarGreedy[ii], Order);
					}
				//}
				//catch(std::exception &t)
				//{

				//}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = 0; i < HourseMidle; i++)
		{
			for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{
				//try
				//{
					HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].LearningAlgorithmPenalty();

				//}
				//catch(std::exception &t)
				//{

				//}

				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				//{
					for (int ii = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size();ii++)
					{
						MakePenaltyAllCheckMateBranches(HoursesOnTable[i].HourseThinking.AStarGreedy[ii], Order);
					}
				//}
				//catch(std::exception &t)
				//{

				//}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = 0; i < CastleMidle; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{
				//try
				//{
					CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].LearningAlgorithmPenalty();
				//}
				//catch(std::exception &t)
				//{

				//}

				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				//{
					for (int ii = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size();ii++)
					{
						MakePenaltyAllCheckMateBranches(CastlesOnTable[i].CastleThinking.AStarGreedy[ii], Order);
					}
				//}
				//catch(std::exception &t)
				//{

				//}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = 0; i < MinisterMidle; i++)
		{
			for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{
				//try
				//{
					MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].LearningAlgorithmPenalty();
				//}
				//catch(std::exception &t)
				//{

				//}

				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				//{
					for (int ii = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size();ii++)
					{
						MakePenaltyAllCheckMateBranches(MinisterOnTable[i].MinisterThinking.AStarGreedy[ii], Order);
					}
				//}
				//catch(std::exception &t)
				//{

				//}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = 0; i < KingMidle; i++)
		{
			for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{
				//try
				//{
					KingOnTable[i].KingThinking.PenaltyRegardListKing[j].LearningAlgorithmPenalty();
				//}
				//catch(std::exception &t)
				//{

				//}

				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				//{
					for (int ii = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && ii <KingOnTable[i].KingThinking.AStarGreedy.size(); ii++)
					{
						MakePenaltyAllCheckMateBranches(KingOnTable[i].KingThinking.AStarGreedy[ii], Order);
					}
				//}
				//catch(std::exception &t)
				//{

				//}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
	}
	else
	{
		for (int i = SodierMidle; i < SodierHigh; i++)
		{
			for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{
				//try
				{
					SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[i].LearningAlgorithmPenalty();
				}
				//catch(std::exception &t)
				{

				}
				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				//{
					for (int ii = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size();ii++)
					{
						MakePenaltyAllCheckMateBranches(SolderesOnTable[i].SoldierThinking.AStarGreedy[ii], Order);
					}
				//}
				//catch(std::exception &t)
				//{

				//}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = ElefantMidle; i < ElefantHigh; i++)
		{
			for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{
				//try
				//{
					ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].LearningAlgorithmPenalty();
				//}
				//catch(std::exception &t)
				//{

				//}

				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				//{
					for (int ii = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size();ii++)
					{
						MakePenaltyAllCheckMateBranches(ElephantOnTable[i].ElefantThinking.AStarGreedy[ii], Order);
					}
				//}
				//catch(std::exception &t)
				//{

				//}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = HourseMidle; i < HourseHight; i++)
		{
			for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{
				//try
				{
					HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].LearningAlgorithmPenalty();

				}
				//catch(std::exception &t)
				{

				}

				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				//{
					for (int ii = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size();ii++)
					{
						MakePenaltyAllCheckMateBranches(HoursesOnTable[i].HourseThinking.AStarGreedy[ii], Order);
					}
				//}
				////catch(std::exception &t)
				//{

				//}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = CastleMidle; i < CastleHigh; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{
				//try
				//{
					CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].LearningAlgorithmPenalty();
				//}
				//catch(std::exception &t)
				//{

				//}

				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				//{
					for (int ii = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && (ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size());ii++)
					{
						MakePenaltyAllCheckMateBranches(CastlesOnTable[i].CastleThinking.AStarGreedy[ii], Order);
					}
				//}
				//catch(std::exception &t)
				//{

				//}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = MinisterMidle; i < MinisterHigh; i++)
		{
			for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{
				//try
				//{
					MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].LearningAlgorithmPenalty();
				//}
				//catch(std::exception &t)
				//{

				//}

				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				//{
					for (int ii = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size();ii++)
					{
						MakePenaltyAllCheckMateBranches(MinisterOnTable[i].MinisterThinking.AStarGreedy[ii], Order);
					}
				//}
				//catch(std::exception &t)
				//{

				//}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = KingMidle; i < MinisterHigh; i++)
		{
			for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{
				//try
				//{
					KingOnTable[i].KingThinking.PenaltyRegardListKing[j].LearningAlgorithmPenalty();
				//}
				//catch(std::exception &t)
				//{

				//}

				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				//{
					for (int ii = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && ii < KingOnTable[i].KingThinking.AStarGreedy.size();ii++)
					{
						MakePenaltyAllCheckMateBranches(KingOnTable[i].KingThinking.AStarGreedy[ii], Order);
					}
				//}
				//catch(std::exception &t)
				//{

				//}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
	}

}

AllDraw AllDraw::RemovePenalltyFromFirstBranches(int Order)
{


	if (Order == 1)
	{

		for (int i = 0; i < SodierMidle; i++)
		{
			for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{
				UsePenaltyRegardMechnisamT = false;
				//try
				{
					SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].Initiate();
					for (int k = 0; k < SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); k++)
					{
						SolderesOnTable[i].SoldierThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);
					}
				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = 0; i < ElefantMidle; i++)
		{
			for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{
				UsePenaltyRegardMechnisamT = false;
				//try
				{

					ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].Initiate();
					for (int k = 0; k < ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); k++)
					{
						ElephantOnTable[i].ElefantThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);
					}

				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = 0; i < HourseMidle; i++)
		{
			for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{
				UsePenaltyRegardMechnisamT = false;
				//try
				{
					HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].Initiate();
					for (int k = 0; k < HoursesOnTable[i].HourseThinking.AStarGreedy.size(); k++)
					{
						HoursesOnTable[i].HourseThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);
					}
				}
				//catch(std::exception &t)
				{

				}


			}
		}
		for (int i = 0; i < CastleMidle; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{
				UsePenaltyRegardMechnisamT = false;
				//try
				{

					CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].Initiate();
					for (int k = 0; k < CastlesOnTable[i].CastleThinking.AStarGreedy.size(); k++)
					{
						CastlesOnTable[i].CastleThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);
					}
				}
				//catch(std::exception &t)
				{

				}

			}
		}
		for (int i = 0; i < MinisterMidle; i++)
		{
			for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{
				UsePenaltyRegardMechnisamT = false;
				//try
				{

					MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].Initiate();
					for (int k = 0; k < MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); k++)
					{
						MinisterOnTable[i].MinisterThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);
					}
				}
				//catch(std::exception &t)
				{

				}

			}
		}
		for (int i = 0; i < KingMidle; i++)
		{
			for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{
				UsePenaltyRegardMechnisamT = false;
				//try
				{

					KingOnTable[i].KingThinking.PenaltyRegardListKing[j].Initiate();
					for (int k = 0; k < KingOnTable[i].KingThinking.AStarGreedy.size(); k++)
					{
						KingOnTable[i].KingThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);
					}
				}
				//catch(std::exception &t)
				{

				}

			}
		}
	}
	else
	{
		for (int i = SodierMidle; i < SodierHigh; i++)
		{
			for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{
				UsePenaltyRegardMechnisamT = false;
				//try
				{

					SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].Initiate();
					for (int k = 0; k < SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); k++)
					{
						SolderesOnTable[i].SoldierThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);
					}
				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = ElefantMidle; i < ElefantHigh; i++)
		{
			for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{
				UsePenaltyRegardMechnisamT = false;
				//try
				{

					ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j];
					for (int k = 0; k < ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); k++)
					{
						ElephantOnTable[i].ElefantThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);
					}

				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = HourseMidle; i < HourseHight; i++)
		{
			for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{
				UsePenaltyRegardMechnisamT = false;
				//try
				{

					HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].Initiate();
					for (int k = 0; k < HoursesOnTable[i].HourseThinking.AStarGreedy.size(); k++)
					{
						HoursesOnTable[i].HourseThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);
					}


				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = CastleMidle; i < CastleHigh; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{
				UsePenaltyRegardMechnisamT = false;
				//try
				{

					CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].Initiate();
					for (int k = 0; k < CastlesOnTable[i].CastleThinking.AStarGreedy.size(); k++)
					{
						CastlesOnTable[i].CastleThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);
					}

				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = MinisterMidle; i < MinisterHigh; i++)
		{
			for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{
				UsePenaltyRegardMechnisamT = false;
				//try
				{

					MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].Initiate();
					for (int k = 0; k < MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); k++)
					{
						MinisterOnTable[i].MinisterThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);
					}

				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = KingMidle; i < KingHigh; i++)
		{
			for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{
				UsePenaltyRegardMechnisamT = false;
				//try
				{
					KingOnTable[i].KingThinking.PenaltyRegardListKing[j].Initiate();
					for (int k = 0; k < KingOnTable[i].KingThinking.AStarGreedy.size(); k++)
					{
						KingOnTable[i].KingThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);
					}

				}
				//catch(std::exception &t)
				{

				}
			}
		}
	}
	//return *(this); 

}

AllDraw AllDraw::FoundOfCurrentTableNode(int **Tab, int Order, AllDraw&THIS, bool &Found)
{


	ThinkingChess::NumbersOfAllNode++;
	if (TableList.size() > 0 && ThinkingChess::TableEqual(TableList[0], Tab))
	{
		THIS = this;
		Found = true;
		return THIS;
	}
	else

		if (Order == 1)
		{

			for (int i = 0; i < SodierMidle; i++)
			{
				for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
				{

					//try
					{
						if (ThinkingChess::TableEqual(SolderesOnTable[i].SoldierThinking.TableListSolder[j], Tab))
						{
							if (SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > j && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0)
							{
								THIS = SolderesOnTable[i].SoldierThinking.AStarGreedy[j];
								Found = true;
								return THIS;
							}
						}
						else
						{
							for (int ii = 0; ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size();ii++)
							{
								SolderesOnTable[i].SoldierThinking.AStarGreedy[ii].FoundOfCurrentTableNode(Tab, Order * -1, THIS, Found);
							}
						}

					}

					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = 0; i < ElefantMidle; i++)
			{
				for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
				{
					//try
					{

						if (ThinkingChess::TableEqual(ElephantOnTable[i].ElefantThinking.TableListElefant[j], Tab))
						{
							if (ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > j && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0)
							{
								THIS = ElephantOnTable[i].ElefantThinking.AStarGreedy[j];
								Found = true;
								return THIS;
							}
						}
						else
						{
							for (int ii = 0; ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size();ii++)
							{
								ElephantOnTable[i].ElefantThinking.AStarGreedy[ii].FoundOfCurrentTableNode(Tab, Order * -1, THIS, Found);
							}
						}


					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = 0; i < HourseMidle; i++)
			{
				for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
				{
					//try
					{
						if (ThinkingChess::TableEqual(HoursesOnTable[i].HourseThinking.TableListHourse[j], Tab))
						{
							if (HoursesOnTable[i].HourseThinking.AStarGreedy.size() > j && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0)
							{
								THIS = HoursesOnTable[i].HourseThinking.AStarGreedy[j];
								Found = true;
								return THIS;
							}
						}
						else
						{
							for (int ii = 0; ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size();ii++)
							{
								HoursesOnTable[i].HourseThinking.AStarGreedy[ii].FoundOfCurrentTableNode(Tab, Order * -1, THIS, Found);
							}
						}

					}
					//catch(std::exception &t)
					{

					}


				}
			}
			for (int i = 0; i < CastleMidle; i++)
			{
				for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
				{
					//try
					{
						if (ThinkingChess::TableEqual(CastlesOnTable[i].CastleThinking.TableListCastle[j], Tab))
						{
							if (CastlesOnTable[i].CastleThinking.AStarGreedy.size() > j && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0)
							{
								THIS = CastlesOnTable[i].CastleThinking.AStarGreedy[j];
								Found = true;
								return THIS;
							}
						}
						else
						{
							for (int ii = 0; ii < CastlesOnTable[ii].CastleThinking.AStarGreedy.size();ii++)
							{
								CastlesOnTable[i].CastleThinking.AStarGreedy[ii].FoundOfCurrentTableNode(Tab, Order * -1, THIS, Found);
							}
						}
					}
					//catch(std::exception &t)
					{

					}

				}
			}
			for (int i = 0; i < MinisterMidle; i++)
			{
				for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
				{
					//try
					{
						if (ThinkingChess::TableEqual(MinisterOnTable[i].MinisterThinking.TableListMinister[j], Tab))
						{
							if (MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > j && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0)
							{
								THIS = MinisterOnTable[i].MinisterThinking.AStarGreedy[j];
								Found = true;
								return THIS;
							}
						}
						else
						{
							for (int ii = 0; ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size();ii++)
							{
								MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].FoundOfCurrentTableNode(Tab, Order * -1, THIS, Found);
							}
						}

					}
					//catch(std::exception &t)
					{

					}

				}
			}
			for (int i = 0; i < KingMidle; i++)
			{
				for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
				{
					//try
					{
						if (ThinkingChess::TableEqual(KingOnTable[i].KingThinking.TableListKing[j], Tab))
						{
							if (KingOnTable[i].KingThinking.AStarGreedy.size() > j && KingOnTable[i].KingThinking.AStarGreedy.size() > 0)
							{
								THIS = KingOnTable[i].KingThinking.AStarGreedy[j];
								Found = true;
								return THIS;
							}
						}
						else
						{
							for (int ii = 0; ii < KingOnTable[i].KingThinking.AStarGreedy.size();ii++)
							{
								KingOnTable[i].KingThinking.AStarGreedy[ii].FoundOfCurrentTableNode(Tab, Order * -1, THIS, Found);
							}
						}

					}
					//catch(std::exception &t)
					{

					}

				}
			}
		}
		else
		{
			for (int i = SodierMidle; i < SodierHigh; i++)
			{
				for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
				{
					//try
					{

						if (ThinkingChess::TableEqual(SolderesOnTable[i].SoldierThinking.TableListSolder[j], Tab))
						{
							if (SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > j && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0)
							{
								THIS = SolderesOnTable[i].SoldierThinking.AStarGreedy[j];
								Found = true;
								return THIS;
							}
						}
						else
						{
							for (int ii = 0; ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size();ii++)
							{
								SolderesOnTable[i].SoldierThinking.AStarGreedy[ii].FoundOfCurrentTableNode(Tab, Order * -1, THIS, Found);
							}
						}

					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = ElefantMidle; i < ElefantHigh; i++)
			{
				for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
				{
					//try
					{

						if (ThinkingChess::TableEqual(ElephantOnTable[i].ElefantThinking.TableListElefant[j], Tab))
						{
							if (ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > j && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0)
							{
								THIS = ElephantOnTable[i].ElefantThinking.AStarGreedy[j];
								Found = true;
								return THIS;
							}
						}
						else
						{
							for (int ii = 0; ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size();ii++)
							{
								ElephantOnTable[i].ElefantThinking.AStarGreedy[ii].FoundOfCurrentTableNode(Tab, Order * -1, THIS, Found);
							}
						}

					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = HourseMidle; i < HourseHight; i++)
			{
				for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
				{
					//try
					{

						if (ThinkingChess::TableEqual(HoursesOnTable[i].HourseThinking.TableListHourse[j], Tab))
						{
							if (HoursesOnTable[i].HourseThinking.AStarGreedy.size() > j && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0)
							{
								THIS = HoursesOnTable[i].HourseThinking.AStarGreedy[j];
								Found = true;
								return THIS;
							}
						}
						else
						{
							for (int ii = 0; ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size();ii++)
							{
								HoursesOnTable[i].HourseThinking.AStarGreedy[ii].FoundOfCurrentTableNode(Tab, Order * -1, THIS, Found);
							}
						}


					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = CastleMidle; i < CastleHigh; i++)
			{
				for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
				{
					//try
					{

						if (ThinkingChess::TableEqual(CastlesOnTable[i].CastleThinking.TableListCastle[j], Tab))
						{
							if (CastlesOnTable[i].CastleThinking.AStarGreedy.size() > j && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0)
							{
								THIS = CastlesOnTable[i].CastleThinking.AStarGreedy[j];
								Found = true;
								return THIS;
							}
						}
						else
						{
							for (int ii = 0; ii < CastlesOnTable[ii].CastleThinking.AStarGreedy.size();ii++)
							{
								CastlesOnTable[ii].CastleThinking.AStarGreedy[ii].FoundOfCurrentTableNode(Tab, Order * -1, THIS, Found);
							}
						}

					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = MinisterMidle; i < MinisterHigh; i++)
			{
				for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
				{
					//try
					{
						if (ThinkingChess::TableEqual(MinisterOnTable[i].MinisterThinking.TableListMinister[j], Tab))
						{
							if (MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > j && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0)
							{
								THIS = MinisterOnTable[i].MinisterThinking.AStarGreedy[j];
								Found = true;
								return THIS;
							}
						}
						else
						{
							for (int ii = 0; ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size();ii++)
							{
								MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].FoundOfCurrentTableNode(Tab, Order * -1, THIS, Found);
							}
						}

					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = KingMidle; i < KingHigh; i++)
			{
				for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
				{
					//try
					{
						if (ThinkingChess::TableEqual(KingOnTable[i].KingThinking.TableListKing[j], Tab))
						{
							if (KingOnTable[i].KingThinking.AStarGreedy.size() > j && KingOnTable[i].KingThinking.AStarGreedy.size() > 0)
							{
								THIS = KingOnTable[i].KingThinking.AStarGreedy[j];
								Found = true;
								return THIS;
							}
						}
						else
						{
							for (int ii = 0; ii < KingOnTable[i].KingThinking.AStarGreedy.size();ii++)
							{
								KingOnTable[i].KingThinking.AStarGreedy[ii].FoundOfCurrentTableNode(Tab, Order * -1, THIS, Found);
							}
						}

					}
					//catch(std::exception &t)
					{

					}
				}
			}
		}
	return THIS;

}

AllDraw AllDraw::FoundOfLeafDepenOfKind(int Kind, AllDraw&Leaf, bool &Found, int Order, int OrderLeaf)
{


	if (Found)
	{
		return Leaf;
	}
	if (Order == 1)
	{

		for (int i = 0; i < SodierMidle; i++)
		{
			for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{

				//try
				{
					if (SolderesOnTable[i].SoldierThinking.IsThereMateOfEnemy || SolderesOnTable[i].SoldierThinking.AStarGreedy.empty() && Kind == 1)
					{
						Found = true;
						this->Clone(Leaf);
						return Leaf;

					}
					else
					{
						for (int ii = 0; ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size()- 1; ii++)
						{
							SolderesOnTable[i].SoldierThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Kind, Leaf, Found, Order * -1, OrderLeaf);
						}
					}

				}

				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = 0; i < ElefantMidle; i++)
		{
			for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{
				//try
				{
					if (ElephantOnTable[i].ElefantThinking.AStarGreedy.empty() && Kind == 2)
					{
						Found = true;
						this->Clone(Leaf);
						return Leaf;
					}
					else
					{
						for (int ii = 0; ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size()- 1; ii++)
						{
							ElephantOnTable[i].ElefantThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Kind, Leaf, Found, Order * -1, OrderLeaf);
						}
					}


				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = 0; i < HourseMidle; i++)
		{
			for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{
				//try
				{
					if (HoursesOnTable[i].HourseThinking.AStarGreedy.empty() && Kind == 3)
					{
						Found = true;
						this->Clone(Leaf);
						return Leaf;
					}
					else
					{
						for (int ii = 0; ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size()- 1; ii++)
						{
							HoursesOnTable[i].HourseThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Kind, Leaf, Found, Order * -1, OrderLeaf);
						}
					}

				}
				//catch(std::exception &t)
				{

				}


			}
		}
		for (int i = 0; i < CastleMidle; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{
				//try
				{
					if (CastlesOnTable[i].CastleThinking.AStarGreedy.empty() && Kind == 4)
					{
						Found = true;
						this->Clone(Leaf);
						return Leaf;
					}
					else
					{
						for (int ii = 0; ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size()- 1; ii++)
						{
							CastlesOnTable[i].CastleThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Kind, Leaf, Found, Order * -1, OrderLeaf);
						}
					}
				}
				//catch(std::exception &t)
				{

				}

			}
		}
		for (int i = 0; i < MinisterMidle; i++)
		{
			for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{
				//try
				{
					if (MinisterOnTable[i].MinisterThinking.AStarGreedy.empty() && Kind == 5)
					{
						Found = true;
						this->Clone(Leaf);
						return Leaf;
					}
					else
					{
						for (int ii = 0; ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size()- 1; ii++)
						{
							MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Kind, Leaf, Found, Order * -1, OrderLeaf);
						}
					}

				}
				//catch(std::exception &t)
				{

				}

			}
		}
		for (int i = 0; i < KingMidle; i++)
		{
			for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{
				//try
				{
					if (KingOnTable[i].KingThinking.AStarGreedy.empty() && Kind == 6)
					{
						Found = true;
						this->Clone(Leaf);
						return Leaf;
					}
					else
					{
						for (int ii = 0; ii < KingOnTable[i].KingThinking.AStarGreedy.size()- 1; ii++)
						{
							KingOnTable[i].KingThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Kind, Leaf, Found, Order * -1, OrderLeaf);
						}
					}

				}
				//catch(std::exception &t)
				{

				}

			}
		}
	}
	else
	{
		for (int i = SodierMidle; i < SodierHigh; i++)
		{
			for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{
				//try
				{

					if (SolderesOnTable[i].SoldierThinking.AStarGreedy.empty() && Kind == 1)
					{
						Found = true;
						this->Clone(Leaf);
						return Leaf;
					}
					else
					{
						for (int ii = 0; ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size()- 1; ii++)
						{
							SolderesOnTable[i].SoldierThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Kind, Leaf, Found, Order * -1, OrderLeaf);
						}
					}
				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = ElefantMidle; i < ElefantHigh; i++)
		{
			for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{
				//try
				{

					if (ElephantOnTable[i].ElefantThinking.AStarGreedy.empty() && Kind == 2)
					{
						Found = true;
						this->Clone(Leaf);
						return Leaf;
					}
					else
					{
						for (int ii = 0; ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size()- 1; ii++)
						{
							ElephantOnTable[i].ElefantThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Kind, Leaf, Found, Order * -1, OrderLeaf);
						}
					}
				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = HourseMidle; i < HourseHight; i++)
		{
			for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{
				//try
				{

					if (HoursesOnTable[i].HourseThinking.AStarGreedy.empty() && Kind == 3)
					{
						Found = true;
						this->Clone(Leaf);
						return Leaf;
					}
					else
					{
						for (int ii = 0; ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size()- 1; ii++)
						{
							HoursesOnTable[i].HourseThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Kind, Leaf, Found, Order * -1, OrderLeaf);
						}
					}
				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = CastleMidle; i < CastleHigh; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{
				//try
				{

					if (CastlesOnTable[i].CastleThinking.AStarGreedy.empty() && Kind == 4)
					{
						Found = true;
						this->Clone(Leaf);
						return Leaf;
					}
					else
					{
						for (int ii = 0; ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size()- 1; ii++)
						{
							CastlesOnTable[i].CastleThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Kind, Leaf, Found, Order * -1, OrderLeaf);
						}
					}

				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = MinisterMidle; i < MinisterHigh; i++)
		{
			for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{
				//try
				{
					if (MinisterOnTable[i].MinisterThinking.AStarGreedy.empty() && Kind == 5)
					{
						Found = true;
						this->Clone(Leaf);
						return Leaf;
					}
					else
					{
						for (int ii = 0; ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size()- 1; ii++)
						{
							MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Kind, Leaf, Found, Order * -1, OrderLeaf);
						}
					}

				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = KingMidle; i < KingHigh; i++)
		{
			for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{
				//try
				{
					if (KingOnTable[i].KingThinking.AStarGreedy.empty() && Kind == 6)
					{
						Found = true;
						this->Clone(Leaf);
						return Leaf;

					}
					else
					{
						for (int ii = 0; ii < KingOnTable[i].KingThinking.AStarGreedy.size()- 1; ii++)
						{
							KingOnTable[i].KingThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Kind, Leaf, Found, Order * -1, OrderLeaf);
						}
					}


				}
				//catch(std::exception &t)
				{

				}
			}
		}
	}
	return Leaf;

}

bool AllDraw::IsFoundOfLeafDepenOfKindhaveVictory(int Kind, bool &Found, int Order)
{


	if (Found)
	{
		return true;
	}
	if (Order == 1)
	{

		for (int i = 0; i < SodierMidle; i++)
		{
			for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{

				//try
				{
					if (SolderesOnTable[i].SoldierThinking.IsThereMateOfEnemy && Kind == 1) // && SolderesOnTable[i] .SoldierThinking.AStarGreedy.size() == 0
					{
						Found = true;
						return true;
					}
					else
					{
						for (int ii = 0; ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size();ii++)
						{
							SolderesOnTable[i].SoldierThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, Found, Order * -1);
						}
					}

				}

				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = 0; i < ElefantMidle; i++)
		{
			for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{
				//try
				{
					if (ElephantOnTable[i].ElefantThinking.IsThereMateOfEnemy && Kind == 2) //&& ElephantOnTable[i].ElefantThinking.AStarGreedy.size() == 0
					{
						Found = true;
						return true;
					}
					else
					{
						for (int ii = 0; ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size();ii++)
						{
							ElephantOnTable[i].ElefantThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, Found, Order * -1);
						}
					}


				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = 0; i < HourseMidle; i++)
		{
			for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{
				//try
				{
					if (HoursesOnTable[i].HourseThinking.IsThereMateOfEnemy && Kind == 3) //&& HoursesOnTable[i].HourseThinking.AStarGreedy.size() == 0
					{
						Found = true;
						return true;
					}
					else
					{
						for (int ii = 0; ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size();ii++)
						{
							HoursesOnTable[i].HourseThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, Found, Order * -1);
						}
					}

				}
				//catch(std::exception &t)
				{

				}


			}
		}
		for (int i = 0; i < CastleMidle; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{
				//try
				{
					if (CastlesOnTable[i].CastleThinking.IsThereMateOfEnemy && Kind == 4) //&& CastlesOnTable[ii].CastleThinking.AStarGreedy.size() == 0
					{
						Found = true;
						return true;
					}
					else
					{
						for (int ii = 0; ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size();ii++)
						{
							CastlesOnTable[i].CastleThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, Found, Order * -1);
						}
					}
				}
				//catch(std::exception &t)
				{

				}

			}
		}
		for (int i = 0; i < MinisterMidle; i++)
		{
			for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{
				//try
				{
					if (MinisterOnTable[i].MinisterThinking.IsThereMateOfEnemy && Kind == 5) //&& MinisterOnTable[i].MinisterThinking.AStarGreedy.size() == 0
					{
						Found = true;
						return true;
					}
					else
					{
						for (int ii = 0; ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size();ii++)
						{
							MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, Found, Order * -1);
						}
					}

				}
				//catch(std::exception &t)
				{

				}

			}
		}
		for (int i = 0; i < KingMidle; i++)
		{
			for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{
				//try
				{
					if (KingOnTable[i].KingThinking.IsThereMateOfEnemy && Kind == 6) //&& KingOnTable[i].KingThinking.AStarGreedy.size() == 0
					{
						Found = true;
						return true;
					}
					else
					{
						for (int ii = 0; ii < KingOnTable[i].KingThinking.AStarGreedy.size();ii++)
						{
							KingOnTable[i].KingThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, Found, Order * -1);
						}
					}

				}
				//catch(std::exception &t)
				{

				}

			}
		}
	}
	else
	{
		for (int i = SodierMidle; i < SodierHigh; i++)
		{
			for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{
				//try
				{

					if (SolderesOnTable[i].SoldierThinking.IsThereMateOfEnemy && Kind == 1) //&& SolderesOnTable[i] .SoldierThinking.AStarGreedy.size() == 0
					{
						Found = true;
						return true;
					}
					else
					{
						for (int ii = 0; ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size();ii++)
						{
							SolderesOnTable[i].SoldierThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, Found, Order * -1);
						}
					}
				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = ElefantMidle; i < ElefantHigh; i++)
		{
			for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{
				//try
				{

					if (ElephantOnTable[i].ElefantThinking.IsThereMateOfEnemy && Kind == 2) //&& ElephantOnTable[i].ElefantThinking.AStarGreedy.size() == 0
					{
						Found = true;
						return true;
					}
					else
					{
						for (int ii = 0; ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size();ii++)
						{
							ElephantOnTable[i].ElefantThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, Found, Order * -1);
						}
					}
				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = HourseMidle; i < HourseHight; i++)
		{
			for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{
				//try
				{

					if (HoursesOnTable[i].HourseThinking.IsThereMateOfEnemy && Kind == 3) //&& HoursesOnTable[i].HourseThinking.AStarGreedy.size() == 0
					{
						Found = true;
						return true;
					}
					else
					{
						for (int ii = 0; ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size();ii++)
						{
							HoursesOnTable[i].HourseThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, Found, Order * -1);
						}
					}
				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = CastleMidle; i < CastleHigh; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{
				//try
				{

					if (CastlesOnTable[i].CastleThinking.IsThereMateOfEnemy && Kind == 4) //&& CastlesOnTable[ii].CastleThinking.AStarGreedy.size() == 0
					{
						Found = true;
						return true;
					}
					else
					{
						for (int ii = 0; ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size();ii++)
						{
							CastlesOnTable[i].CastleThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, Found, Order * -1);
						}
					}

				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = MinisterMidle; i < MinisterHigh; i++)
		{
			for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{
				//try
				{
					if (MinisterOnTable[i].MinisterThinking.IsThereMateOfEnemy && Kind == 5) //&& MinisterOnTable[i].MinisterThinking.AStarGreedy.size() == 0
					{
						Found = true;
						return true;
					}
					else
					{
						for (int ii = 0; ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size();ii++)
						{
							MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, Found, Order * -1);
						}
					}

				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = KingMidle; i < KingHigh; i++)
		{
			for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{
				//try
				{
					if (KingOnTable[i].KingThinking.IsThereMateOfEnemy && Kind == 6) //&& KingOnTable[i].KingThinking.AStarGreedy.size() == 0
					{
						Found = true;
						return true;

					}
					else
					{
						for (int ii = 0; ii < KingOnTable[i].KingThinking.AStarGreedy.size();ii++)
						{
							KingOnTable[i].KingThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, Found, Order * -1);
						}
					}


				}
				//catch(std::exception &t)
				{

				}
			}
		}
	}
	return Found;

}

void AllDraw::FoundOfLeafDepenOfKind(int **Table, int Order, int iAStarGreedy, int ii, int jj, int ik, int jjj, bool FOUND, int LeafAStarGreedy)
{

	//if()
	bool FullGameFound = false;

	int **table = CloneATable(table);
	OutPut = std::wstring(L"\r\nLeaf Tree Creation is ") + StringConverterHelper::toString(LeafAStarGreedy) + std::wstring(L"at AStarGreedy ") + StringConverterHelper::toString(iAStarGreedy);
	if (Order == 1)
	{

		for (int i = 0; i < SodierMidle; i++)
		{
			for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{

				//try
				{
					if (SolderesOnTable[i].SoldierThinking.AStarGreedy.empty())
					{
						FullGameFound = true;
						FullGameThinkingTree(Order, iAStarGreedy, ii, jj, ik, jjj, false, LeafAStarGreedy);

					}
					else
					{
						for (int iii = 0; iii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size();iii++)
						{
							ThinkingChess::NumbersOfAllNode++;
							SolderesOnTable[i].SoldierThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindAllDraw(SolderesOnTable[i].SoldierThinking.TableT, Order * -1, iAStarGreedy, ii, jj, ik, jjj, FOUND, LeafAStarGreedy++);
						}
					}

				}

				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = 0; i < ElefantMidle; i++)
		{
			for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{
				//try
				{
					if (ElephantOnTable[i].ElefantThinking.AStarGreedy.empty())
					{
						FullGameFound = true;
						FullGameThinkingTree(Order, iAStarGreedy, ii, jj, ik, jjj, false, LeafAStarGreedy);
					}
					else
					{
						for (int iii = 0; iii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size();iii++)
						{
							ThinkingChess::NumbersOfAllNode++;
							ElephantOnTable[i].ElefantThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindAllDraw(ElephantOnTable[i].ElefantThinking.TableT, Order * -1, iAStarGreedy, ii, jj, ik, jjj, FOUND, LeafAStarGreedy++);
						}
					}


				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = 0; i < HourseMidle; i++)
		{
			for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{
				//try
				{
					if (HoursesOnTable[i].HourseThinking.AStarGreedy.empty())
					{
						FullGameFound = true;
						FullGameThinkingTree(Order, iAStarGreedy, ii, jj, ik, jjj, false, LeafAStarGreedy);
					}
					else
					{
						for (int iii = 0; iii < HoursesOnTable[i].HourseThinking.AStarGreedy.size();iii++)
						{
							ThinkingChess::NumbersOfAllNode++;
							HoursesOnTable[i].HourseThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindAllDraw(HoursesOnTable[i].HourseThinking.TableT, Order * -1, iAStarGreedy, ii, jj, ik, jjj, FOUND, LeafAStarGreedy++);
						}
					}

				}
				//catch(std::exception &t)
				{

				}


			}
		}
		for (int i = 0; i < CastleMidle; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{
				//try
				{
					if (CastlesOnTable[i].CastleThinking.AStarGreedy.empty())
					{
						FullGameFound = true;
						FullGameThinkingTree(Order, iAStarGreedy, ii, jj, ik, jjj, false, LeafAStarGreedy);
					}
					else
					{
						for (int iii = 0; iii < CastlesOnTable[i].CastleThinking.AStarGreedy.size();iii++)
						{
							ThinkingChess::NumbersOfAllNode++;
							CastlesOnTable[i].CastleThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindAllDraw(CastlesOnTable[i].CastleThinking.TableT, Order * -1, iAStarGreedy, ii, jj, ik, jjj, FOUND, LeafAStarGreedy++);
						}
					}
				}
				//catch(std::exception &t)
				{

				}

			}
		}
		for (int i = 0; i < MinisterMidle; i++)
		{
			for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{
				//try
				{
					if (MinisterOnTable[i].MinisterThinking.AStarGreedy.empty())
					{
						FullGameFound = true;
						FullGameThinkingTree(Order, iAStarGreedy, ii, jj, ik, jjj, false, LeafAStarGreedy);
					}
					else
					{
						for (int iii = 0; iii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size();iii++)
						{
							ThinkingChess::NumbersOfAllNode++;
							MinisterOnTable[i].MinisterThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindAllDraw(MinisterOnTable[i].MinisterThinking.TableT, Order * -1, iAStarGreedy, ii, jj, ik, jjj, FOUND, LeafAStarGreedy++);
						}
					}


				}
				//catch(std::exception &t)
				{

				}

			}
		}
		for (int i = 0; i < KingMidle; i++)
		{
			for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{
				//try
				{
					if (KingOnTable[i].KingThinking.AStarGreedy.empty())
					{
						FullGameFound = true;
						FullGameThinkingTree(Order, iAStarGreedy, ii, jj, ik, jjj, false, LeafAStarGreedy);
					}
					else
					{
						for (int iii = 0; iii < KingOnTable[i].KingThinking.AStarGreedy.size();iii++)
						{
							ThinkingChess::NumbersOfAllNode++;
							KingOnTable[i].KingThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindAllDraw(KingOnTable[i].KingThinking.TableT, Order * -1, iAStarGreedy, ii, jj, ik, jjj, FOUND, LeafAStarGreedy++);
						}
					}

				}
				//catch(std::exception &t)
				{

				}

			}
		}
	}
	else
	{
		for (int i = SodierMidle; i < SodierHigh; i++)
		{
			for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{
				//try
				{

					if (SolderesOnTable[i].SoldierThinking.AStarGreedy.empty())
					{
						FullGameFound = true;
						FullGameThinkingTree(Order, iAStarGreedy, ii, jj, ik, jjj, false, LeafAStarGreedy);
					}
					else
					{
						for (int iii = 0; ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size();iii++)
						{
							ThinkingChess::NumbersOfAllNode++;
							SolderesOnTable[i].SoldierThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindAllDraw(SolderesOnTable[i].SoldierThinking.TableT, Order * -1, iAStarGreedy, ii, jj, ik, jjj, FOUND, LeafAStarGreedy++);
						}
					}
				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = ElefantMidle; i < ElefantHigh; i++)
		{
			for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{
				//try
				{

					if (ElephantOnTable[i].ElefantThinking.AStarGreedy.empty())
					{
						FullGameFound = true;
						FullGameThinkingTree(Order, iAStarGreedy, ii, jj, ik, jjj, false, LeafAStarGreedy);
					}
					else
					{
						for (int iii = 0; iii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size();iii++)
						{
							ThinkingChess::NumbersOfAllNode++;
							ElephantOnTable[i].ElefantThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindAllDraw(ElephantOnTable[i].ElefantThinking.TableT, Order * -1, iAStarGreedy, ii, jj, ik, jjj, FOUND, LeafAStarGreedy++);
						}
					}
				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = HourseMidle; i < HourseHight; i++)
		{
			for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{
				//try
				{

					if (HoursesOnTable[i].HourseThinking.AStarGreedy.empty())
					{
						FullGameFound = true;
						FullGameThinkingTree(Order, iAStarGreedy, ii, jj, ik, jjj, false, LeafAStarGreedy);
					}
					else
					{
						for (int iii = 0; iii < HoursesOnTable[i].HourseThinking.AStarGreedy.size();iii++)
						{
							ThinkingChess::NumbersOfAllNode++;
							HoursesOnTable[i].HourseThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindAllDraw(HoursesOnTable[i].HourseThinking.TableT, Order * -1, iAStarGreedy, ii, jj, ik, jjj, FOUND, LeafAStarGreedy++);
						}
					}
				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = CastleMidle; i < CastleHigh; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{
				//try
				{

					if (CastlesOnTable[i].CastleThinking.AStarGreedy.empty())
					{
						FullGameFound = true;
						FullGameThinkingTree(Order, iAStarGreedy, ii, jj, ik, jjj, false, LeafAStarGreedy);
					}
					else
					{
						for (int iii = 0; iii < CastlesOnTable[i].CastleThinking.AStarGreedy.size();iii++)
						{
							ThinkingChess::NumbersOfAllNode++;
							CastlesOnTable[i].CastleThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindAllDraw(CastlesOnTable[i].CastleThinking.TableT, Order * -1, iAStarGreedy, ii, jj, ik, jjj, FOUND, LeafAStarGreedy++);
						}
					}

				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = MinisterMidle; i < MinisterHigh; i++)
		{
			for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{
				//try
				{
					if (MinisterOnTable[i].MinisterThinking.AStarGreedy.empty())
					{

						FullGameFound = true;
						FullGameThinkingTree(Order, iAStarGreedy, ii, jj, ik, jjj, false, LeafAStarGreedy);
					}
					else
					{
						for (int iii = 0; iii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size();iii++)
						{
							ThinkingChess::NumbersOfAllNode++;
							MinisterOnTable[i].MinisterThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindAllDraw(MinisterOnTable[i].MinisterThinking.TableT, Order * -1, iAStarGreedy, ii, jj, ik, jjj, FOUND, LeafAStarGreedy++);
						}
					}

				}
				//catch(std::exception &t)
				{

				}
			}
		}
		for (int i = KingMidle; i < KingHigh; i++)
		{
			for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{
				//try
				{
					if (KingOnTable[i].KingThinking.AStarGreedy.empty())
					{
						FullGameFound = true;
						FullGameThinkingTree(Order, iAStarGreedy, ii, jj, ik, jjj, false, LeafAStarGreedy);
					}
					else
					{
						for (int iii = 0; iii < KingOnTable[i].KingThinking.AStarGreedy.size();iii++)
						{
							ThinkingChess::NumbersOfAllNode++;
							KingOnTable[i].KingThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindAllDraw(KingOnTable[i].KingThinking.TableT, Order * -1, iAStarGreedy, ii, jj, ik, jjj, FOUND, LeafAStarGreedy++);
						}
					}


				}
				//catch(std::exception &t)
				{

				}
			}
		}
	}

	if (!FullGameFound)
	{
		//autoO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				//lock (O1)
		{
			iAStarGreedy++;
			int a = 1;
			if (Order == -1)
			{
				a = -1;
			}
			InitiateAStarGreedyt(MaxAStarGreedy, ii, jj, a, table, Order, false, false, LeafAStarGreedy);
			//Initiate(ii, jj, a, table, Order, false, false,LeafAStarGreedy);
		}
	}
	return;
}


	

void AllDraw::MakeRegardAllCheckMateBranches(AllDraw A, int Order)
{

	int COrder = Order;
	int CDummy = ChessRules::CurrentOrder;

	if (Order == 1)
	{

		for (int i = 0; i < SodierMidle; i++)
		{
			for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{

				//try
				{
					SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[i].LearningAlgorithmRegard();
				}
				//catch(std::exception &t)
				{

				}
				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				{
					for (int ii = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size();ii++)
					{
						MakeRegardAllCheckMateBranches(SolderesOnTable[i].SoldierThinking.AStarGreedy[ii], Order);
					}

				}
				//catch(std::exception &t)
				{

				}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = 0; i < ElefantMidle; i++)
		{
			for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{

				//try
				{
					ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].LearningAlgorithmRegard();

				}
				//catch(std::exception &t)
				{

				}
				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				{
					for (int ii = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size();ii++)
					{
						MakeRegardAllCheckMateBranches(ElephantOnTable[i].ElefantThinking.AStarGreedy[ii], Order);
					}
				}
				//catch(std::exception &t)
				{

				}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = 0; i < HourseMidle; i++)
		{
			for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{
				//try
				{
					HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].LearningAlgorithmRegard();

				}
				//catch(std::exception &t)
				{

				}
				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				{
					for (int ii = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size();ii++)
					{
						MakeRegardAllCheckMateBranches(HoursesOnTable[i].HourseThinking.AStarGreedy[ii], Order);
					}
				}
				//catch(std::exception &t)
				{

				}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = 0; i < CastleMidle; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{
				//try
				{
					CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].LearningAlgorithmRegard();
				}
				//catch(std::exception &t)
				{

				}
				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				{
					for (int ii = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size();ii++)
					{
						MakeRegardAllCheckMateBranches(CastlesOnTable[i].CastleThinking.AStarGreedy[ii], Order);
					}
				}
				//catch(std::exception &t)
				{

				}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = 0; i < MinisterMidle; i++)
		{
			for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{
				//try
				{
					MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].LearningAlgorithmRegard();
				}
				//catch(std::exception &t)
				{

				}

				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				{
					for (int ii = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size();ii++)
					{
						MakeRegardAllCheckMateBranches(MinisterOnTable[i].MinisterThinking.AStarGreedy[ii], Order);
					}
				}
				//catch(std::exception &t)
				{

				}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = 0; i < KingMidle; i++)
		{
			for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{
				//try
				{
					KingOnTable[i].KingThinking.PenaltyRegardListKing[j].LearningAlgorithmRegard();
				}
				//catch(std::exception &t)
				{

				}
				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				{
					for (int ii = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && ii < KingOnTable[i].KingThinking.AStarGreedy.size();ii++)
					{
						MakeRegardAllCheckMateBranches(KingOnTable[i].KingThinking.AStarGreedy[ii], Order);
					}
				}
				//catch(std::exception &t)
				{

				}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
	}
	else
	{
		for (int i = SodierMidle; i < SodierHigh; i++)
		{
			for (int j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{
				//try
				{
					SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[i].LearningAlgorithmRegard();
				}
				//catch(std::exception &t)
				{

				}
				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				{
					for (int ii = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size();ii++)
					{
						MakeRegardAllCheckMateBranches(SolderesOnTable[i].SoldierThinking.AStarGreedy[ii], Order);
					}
				}
				//catch(std::exception &t)
				{

				}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = ElefantMidle; i < ElefantHigh; i++)
		{
			for (int j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{
				//try
				{
					ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].LearningAlgorithmRegard();

				}
				//catch(std::exception &t)
				{

				}
				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				{
					for (int ii = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size();ii++)
					{
						MakeRegardAllCheckMateBranches(ElephantOnTable[i].ElefantThinking.AStarGreedy[ii], Order);
					}
				}
				//catch(std::exception &t)
				{

				}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = HourseMidle; i < HourseHight; i++)
		{
			for (int j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{
				//try
				{
					HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].LearningAlgorithmRegard();

				}
				//catch(std::exception &t)
				{

				}
				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				{
					for (int ii = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size();ii++)
					{
						MakeRegardAllCheckMateBranches(HoursesOnTable[i].HourseThinking.AStarGreedy[ii], Order);
					}
				}
				//catch(std::exception &t)
				{

				}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = CastleMidle; i < CastleHigh; i++)
		{
			for (int j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{
				//try
				{
					CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].LearningAlgorithmRegard();
				}
				//catch(std::exception &t)
				{

				}
				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				{
					for (int ii = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size();ii++)
					{
						MakeRegardAllCheckMateBranches(CastlesOnTable[i].CastleThinking.AStarGreedy[ii], Order);
					}
				}
				//catch(std::exception &t)
				{

				}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = MinisterMidle; i < MinisterHigh; i++)
		{
			for (int j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{
				//try
				{
					MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].LearningAlgorithmRegard();
				}
				//catch(std::exception &t)
				{

				}
				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				{
					for (int ii = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size();ii++)
					{
						MakeRegardAllCheckMateBranches(MinisterOnTable[i].MinisterThinking.AStarGreedy[ii], Order);
					}
				}
				//catch(std::exception &t)
				{

				}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
		for (int i = KingMidle; i < MinisterHigh; i++)
		{
			for (int j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{
				//try
				{
					KingOnTable[i].KingThinking.PenaltyRegardListKing[j].LearningAlgorithmRegard();
				}
				//catch(std::exception &t)
				{

				}
				Order *= -1;
				ChessRules::CurrentOrder *= -1;
				//try
				{
					for (int ii = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && ii < KingOnTable[i].KingThinking.AStarGreedy.size();ii++)
					{
						MakeRegardAllCheckMateBranches(KingOnTable[i].KingThinking.AStarGreedy[ii], Order);
					}
				}
				//catch(std::exception &t)
				{

				}
				Order = COrder;
				ChessRules::CurrentOrder = CDummy;
			}
		}
	}

}

void AllDraw::StringHuristics(int Obj, int Sec, bool AA, int Do, int WinOcuuredatChiled, int LoseOcuuredatChiled)
{
	std::wstring SOut = L"";
	if (Obj == 1)
	{
		SOut = L"Soldier ";
	}
	else
		if (Obj == 2)
		{
			SOut = L"Elephant ";
		}
		else
			if (Obj == 3)
			{
				SOut = L"Hourse ";
			}
			else
				if (Obj == 4)
				{
					SOut = L"Castle ";
				}
				else
					if (Obj == 5)
					{
						SOut = L"Minister ";
					}
					else
						if (Obj == 6)
						{
							SOut = L"King ";
						}
	SOut += std::wstring(L"AStar Huristics ");
	if (Sec == 1)
		SOut += std::wstring(L" -Initiatetion- ");
	if (Sec == 2)
		SOut += std::wstring(L" -Regard- ");
	if (Sec == 3)
		SOut += std::wstring(L" -Foundation Greatest- ");

	if (WinOcuuredatChiled >= 1)
	{
		SOut += std::wstring(L" At -WinKing Checked Mate is active For Eneter Regard- ");
	}
	if (LoseOcuuredatChiled <= -1)
	{
		SOut += std::wstring(L" At -LoseKing Checked Mate is active For Eneter Penelty- ");
	}
	if (AA)
	{
		SOut += std::wstring(L" -'AA' is Active due to Regard Enter- ");
	}
	if (Do == 1)
	{
		SOut += std::wstring(L" -'Do' is Active due to Regard Enter- ");
	}
	SOut += std::wstring(L" With Huristic Count ") + StringConverterHelper::toString<int>(AllDraw::Less);

	OutPut = SOut;

	//delay(10);
}

int ** AllDraw::HuristicAStarGreadySearchSoldier(int **TableHuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
{



	ChessRules *AB = nullptr;

	int j;
	std::vector<double> Founded = std::vector<double>();
	int DummyOrder = Order;
	int DummyCurrentOrder = ChessRules::CurrentOrder;
	bool AA = false;
	int Do = 0;



	//For Every Soldier Movments AStarGreedy.
	for (int k = 0; k < AllDraw::SodierMovments; k++)
	{
		//When There is an Movment in such situation.

		for (j = 0; (SolderesOnTable != nullptr) && ((&(SolderesOnTable[i])) != nullptr) && SolderesOnTable != nullptr && ((&(SolderesOnTable[i])) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
		{
			{
				//System.Threading.Thread.Sleep(1);
					//try
				{
					//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
					//if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
					//)
					if (SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() == 0)
					{
						continue;
					}
					int CDummy = ChessRules::CurrentOrder;
					int COrder = Order;
					//try
					{
						if (SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > j)
						{
							SolderesOnTable[i].SoldierThinking.AStarGreedy[j].IsFoundOfLeafDepenOfKindhaveVictory(1, AA, Order * -1);
						}
						ChessRules::CurrentOrder *= -1;
						Order *= -1;
						Do = 0;

					}
					//catch(std::exception &tt)
					{

					}
					StringHuristics(1, 1, AA, Do, SolderesOnTable[i].WinOcuuredatChiled, SolderesOnTable[i].LoseOcuuredatChiled);

					if (SolderesOnTable[i].LoseOcuuredatChiled <= -1 || SolderesOnTable[i].LoseOcuuredatChiled <= -2 || SolderesOnTable[i].LoseOcuuredatChiled <= -3)
					{
						continue;
					}
					Order = COrder;
					ChessRules::CurrentOrder = CDummy;
					//if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
					//)


					if ((SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() != 0 && SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].IsRewardAction() == 1 && AStarGreedyi == 1) || Do == 1 || AA || SolderesOnTable[i].WinOcuuredatChiled >= 1 || SolderesOnTable[i].WinOcuuredatChiled >= 2 || SolderesOnTable[i].WinOcuuredatChiled >= 3)
					{
						//Set Table and Huristic Value and Syntax.
						(Act) = true;
						//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (On)
						{

							AllDraw::LastRow = SolderesOnTable[i].SoldierThinking.Row;
							AllDraw::LastColumn = SolderesOnTable[i].SoldierThinking.Column;
							AllDraw::NextRow = (SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]);
							AllDraw::NextColumn = (SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]);


							Less = SolderesOnTable[i].SoldierThinking.NumberOfPenalties;
						}


						TableHuristic = SolderesOnTable[i].SoldierThinking.TableListSolder[j];


						//autoO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (O)
						{
							ThingsConverter::ActOfClickEqualTow = true;
						}
						SolderesOnTable[i].ConvertOperation(SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], a, SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order, false, i);
						int Sign = 1;
						if (a == -1)
						{
							Sign = -1;
						}


						//If there is Soldier Convert.
						if (SolderesOnTable[i].Convert)
						{

							if (SolderesOnTable[i].ConvertedToMinister)
							{
								TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 5 * Sign;
							}
							else if (SolderesOnTable[i].ConvertedToCastle)
							{
								TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 4 * Sign;
							}
							else if (SolderesOnTable[i].ConvertedToHourse)
							{
								TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 3 * Sign;
							}
							else if (SolderesOnTable[i].ConvertedToElefant)
							{
								TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 2 * Sign;
							}




						}
						RegardOccurred = true;
						StringHuristics(1, 2, AA, Do, SolderesOnTable[i].WinOcuuredatChiled, SolderesOnTable[i].LoseOcuuredatChiled);
						if (SolderesOnTable[i].WinOcuuredatChiled >= 1 || SolderesOnTable[i].WinOcuuredatChiled >= 2 || SolderesOnTable[i].WinOcuuredatChiled >= 3)
						{
							Less = DBL_MAX;
						}

						//if (Do == 1 || AA)
						//return TableHuristic;
						continue;
					}
					//When There is No Movments in Such Order Enemy continue.
					//autool = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								//lock (ol)
					{
						if (Order != AllDraw::OrderPlate)
						{
							if (SolderesOnTable[i].SoldierThinking.ReturnHuristic(i, j, Order, AA) > Less)
							{
								continue;
							}
						}
						//When There is greater Huristic Movments.
						if (SolderesOnTable[i].SoldierThinking.ReturnHuristic(i, j, Order, AA) > Less)
						{

							//autoO11 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										//lock (O11)
							{
								//autoO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (O)
								{
									//ActionString = ThinkingChess.ActionsString; AllDraw::ActionStringReady = true;
								}
								//retrive table of current huristic.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = SolderesOnTable[i].SoldierThinking.TableListSolder[j];
								int **TableS = SolderesOnTable[i].SoldierThinking.TableListSolder[j];
								//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
								//ORIGINAL LINE: int[,] TableSS = SolderesOnTable[i].SoldierThinking.TableListSolder[j];
								int **TableSS = SolderesOnTable[i].SoldierThinking.TableListSolder[j];

								//checked for Legal Movments ArgumentOutOfRangeException curnt game.
								if (DynamicAStarGreedytPrograming && !CurrentTableHuristic && AStarGreedyi == 1)
								{
									//try
									{
										if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
										{
											continue;
										}
									}
									//catch(std::exception &t)
									{

										if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
										{
											continue;
										}

									}

								}
								//When there is not Penalty regard mechanism.
								//if (!UsePenaltyRegardMechnisamT)
								{
									AB = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, 1, TableS, Order, SolderesOnTable[i].SoldierThinking.Row, SolderesOnTable[i].SoldierThinking.Column);
									//If there is kish or kshachamaz Order.
									if (AB->Check(TableS, Order))
									{
										//When Order is Gray.
										if (Order == 1)
										{
											//Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
											if (AB->CheckGray)
											{
												continue;
											}
										}
										else
										{
											//Continue when CheckBrown and AStarGreadyFirstSearch. 
											if (AB->CheckBrown)
											{
												continue;
											}
										}
									}
									// }
									else
									{

									}
								}
								//Sodleirs Initiate.
								RW1 = i;
								CL1 = k;
								Ki1 = j;
								RW2 = -1;
								CL2 = -1;
								Ki2 = -1;
								RW3 = -1;
								CL3 = -1;
								Ki3 = -1;
								RW4 = -1;
								CL4 = -1;
								Ki4 = -1;
								RW5 = -1;
								CL5 = -1;
								Ki5 = -1;
								RW6 = -1;
								CL6 = -1;
								Ki6 = -1;
								//Set Max of Soldier.
								MaxLess1 = SolderesOnTable[RW1].SoldierThinking.ReturnHuristic(i, j, Order, AA);
								//When Soldeirs is Greater than Others these Set Max.
								if (MaxLess1 > MaxLess2)
								{
									MaxLess2 = -1;
								}
								if (MaxLess1 > MaxLess3)
								{
									MaxLess3 = -1;
								}
								if (MaxLess1 > MaxLess4)
								{
									MaxLess4 = -1;
								}
								if (MaxLess1 > MaxLess5)
								{
									MaxLess5 = -1;
								}
								if (MaxLess1 > MaxLess6)
								{
									MaxLess6 = -1;
								}

								if (AStarGreedyi == 1)
								{
									//autoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
												//lock (OO)
									{
										if (Order == 1)
										{
											OutPut = L"\r\nChess Huristic Sodier By Bob!";
											//THIS.RefreshBoxText();
										}
										else //If Order is Brown.
										{
											OutPut = L"\r\nChess Huristic Sodier By Alice!";
											//THIS.RefreshBoxText();
										}
									}
									//Set Table and Huristic Value and Syntax.
									(Act) = true;
									//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
												//lock (On)
									{
										AllDraw::LastRow = SolderesOnTable[i].SoldierThinking.Row;
										AllDraw::LastColumn = SolderesOnTable[i].SoldierThinking.Column;
										AllDraw::NextRow = (SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]);
										AllDraw::NextColumn = (SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]);
									}

									Less = SolderesOnTable[i].SoldierThinking.ReturnHuristic(i, j, Order, AA);

									StringHuristics(1, 3, AA, Do, SolderesOnTable[i].WinOcuuredatChiled, SolderesOnTable[i].LoseOcuuredatChiled);

									TableHuristic = SolderesOnTable[i].SoldierThinking.TableListSolder[j];


									//autoO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
												//lock (O1)
									{
										ThingsConverter::ActOfClickEqualTow = true;
									}
									SolderesOnTable[i].ConvertOperation(SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], a, SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order, false, i);
									int Sign = 1;
									if (a == -1)
									{
										Sign = -1;
									}
									//If there is Soldier Convert.
									if (SolderesOnTable[i].Convert)
									{

										if (SolderesOnTable[i].ConvertedToMinister)
										{
											TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 5 * Sign;
										}
										else if (SolderesOnTable[i].ConvertedToCastle)
										{
											TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 4 * Sign;
										}
										else if (SolderesOnTable[i].ConvertedToHourse)
										{
											TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 3 * Sign;
										}
										else if (SolderesOnTable[i].ConvertedToElefant)
										{
											TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 2 * Sign;
										}





									}
								}
							}
						}
						else
						{
						}
					}
				}
				//catch(std::exception &t)
				{

				}
			}
		}


	}
	Order = DummyOrder;
	ChessRules::CurrentOrder = DummyCurrentOrder;


	Order = DummyOrder;
	ChessRules::CurrentOrder = DummyCurrentOrder;
	return TableHuristic;

}

int ** AllDraw::HuristicAStarGreadySearchSoldierGray(int **TableHuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
{


	if (SodierMidle != 0)
	{
		for (int i = 0; i < SodierMidle; i++)
		{
			TableHuristic = HuristicAStarGreadySearchSoldier(TableHuristic, i, AStarGreedyi, a, Order, CurrentTableHuristic, Act);
		}
	}
	else
	{
		//CodeClass::SaveByCode(1, callStack.GetFileLineNumber(), callStack.GetFileName());
	}
	return TableHuristic;

}

int ** AllDraw::HuristicAStarGreadySearchSoldierBrown(int **TableHuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
{

	if (SodierMidle != SodierHigh)
	{

		for (int i = SodierMidle; i < SodierHigh; i++)
		{
			TableHuristic = HuristicAStarGreadySearchSoldier(TableHuristic, i, AStarGreedyi, a, Order, CurrentTableHuristic, Act);
		}
	}
	else
	{
		//CodeClass::SaveByCode(1, callStack.GetFileLineNumber(), callStack.GetFileName());
	}

	return TableHuristic;

}

int ** AllDraw::HuristicAStarGreadySearchElephantGray(int **TableHuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
{


	if (0 != ElefantMidle)
	{
		//Do For Remaining Objects same as Soldeir Documentation.
		for (int i = 0; i < ElefantMidle; i++)
		{
			TableHuristic = HuristicAStarGreadySearchElephant(TableHuristic, i, AStarGreedyi, a, Order, CurrentTableHuristic, Act);
		}
	}
	else
	{
		//CodeClass::SaveByCode(1, callStack.GetFileLineNumber(), callStack.GetFileName());
	}
	return TableHuristic;

}

int ** AllDraw::HuristicAStarGreadySearchElephantBrown(int **TableHuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
{


	if (ElefantHigh != ElefantMidle)
	{
		//Do For Remaining Objects same as Soldeir Documentation.
		for (int i = ElefantMidle; i < ElefantHigh; i++)
		{
			TableHuristic = HuristicAStarGreadySearchElephant(TableHuristic, i, AStarGreedyi, a, Order, CurrentTableHuristic, Act);
		}
	}

	return TableHuristic;

}

int ** AllDraw::HuristicAStarGreadySearchElephant(int **TableHuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
{
	ChessRules *AB = nullptr;

	int j;
	std::vector<double> Founded = std::vector<double>();
	int DummyOrder = Order;
	int DummyCurrentOrder = ChessRules::CurrentOrder;
	bool AA = false;
	int Do = 0;

	for (int k = 0; k < AllDraw::ElefantMovments; k++)
	{
		for (j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && ElephantOnTable != nullptr && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
		{	//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
				//if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
				//)
			if (ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() == 0)
			{
				continue;
			}
			int CDummy = ChessRules::CurrentOrder;
			int COrder = Order;
			if (ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > j)
			{
				ElephantOnTable[i].ElefantThinking.AStarGreedy[j].IsFoundOfLeafDepenOfKindhaveVictory(2, AA, Order * -1);
			}
			ChessRules::CurrentOrder *= -1;
			Order *= -1;
			Do = 0;


			StringHuristics(2, 1, AA, Do, ElephantOnTable[i].WinOcuuredatChiled, ElephantOnTable[i].LoseOcuuredatChiled);
			if (ElephantOnTable[i].LoseOcuuredatChiled <= -1 || ElephantOnTable[i].LoseOcuuredatChiled <= -2 || ElephantOnTable[i].LoseOcuuredatChiled <= -3)
			{
				continue;
			}
			Order = COrder;
			ChessRules::CurrentOrder = CDummy;

			if ((ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() != 0 && ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsRewardAction() == 1 && AStarGreedyi == 1) || Do == 1 || AA || ElephantOnTable[i].WinOcuuredatChiled >= 1 || ElephantOnTable[i].WinOcuuredatChiled >= 2 || ElephantOnTable[i].WinOcuuredatChiled >= 3)
			{


				AllDraw::LastRow = ElephantOnTable[i].ElefantThinking.Row;
				AllDraw::LastColumn = ElephantOnTable[i].ElefantThinking.Column;
				AllDraw::NextRow = (ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0]);
				AllDraw::NextColumn = (ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1]);


				(Act) = true;
				Less = ElephantOnTable[i].ElefantThinking.NumberOfPenalties;

			}
			TableHuristic = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
			StringHuristics(2, 2, AA, Do, ElephantOnTable[i].WinOcuuredatChiled, ElephantOnTable[i].LoseOcuuredatChiled);
			if (ElephantOnTable[i].WinOcuuredatChiled >= 1 || ElephantOnTable[i].WinOcuuredatChiled >= 2 || ElephantOnTable[i].WinOcuuredatChiled >= 3)
			{
				Less = DBL_MAX;
			}
			RegardOccurred = true;



			//if (Do == 1 || AA)
			//return TableHuristic;
			continue;

		}

		//When There is No Movments in Such Order Enemy continue.
		if (Order != AllDraw::OrderPlate)
		{
			if (ElephantOnTable[i].ElefantThinking.ReturnHuristic(i, j, Order, AA) > Less)
			{
				continue;
			}
		}
		//When There is greater Huristic Movments.

		if (ElephantOnTable[i].ElefantThinking.ReturnHuristic(i, j, Order, AA) > Less)
		{

			int **TableS = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
			int **TableSS = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
			//checked for Legal Movments ArgumentOutOfRangeException curnt game.
			if (DynamicAStarGreedytPrograming && !CurrentTableHuristic && AStarGreedyi == 1)
			{
				if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
				{
					continue;
				}
				if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
				{
					continue;
				}




			}
			//When there is not Penalty regard mechanism.
			//if (!UsePenaltyRegardMechnisamT)
			AB = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, 2, TableS, Order, -1, -1);
			//If there is kish or kshachamaz Order.
			if (AB->Check(TableS, Order))
			{
				//When Order is Gray.
				if (Order == 1)
				{
					//Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
					if (AB->CheckGray)
					{
						continue;
					}
				}
				else
				{
					//Continue when CheckBrown and AStarGreadyFirstSearch. 
					if (AB->CheckBrown)
					{
						continue;
					}
				}
			}

		}
		RW2 = i;
		CL2 = k;
		Ki2 = j;
		RW1 = -1;
		CL1 = -1;
		Ki1 = -1;
		RW3 = -1;
		CL3 = -1;
		Ki3 = -1;
		RW4 = -1;
		CL4 = -1;
		Ki4 = -1;
		RW5 = -1;
		CL5 = -1;
		Ki5 = -1;
		RW6 = -1;
		CL6 = -1;
		Ki6 = -1;
		MaxLess2 = ElephantOnTable[RW2].ElefantThinking.ReturnHuristic(RW2, Ki2, Order, false);
		if (MaxLess2 > MaxLess1)
		{
			MaxLess1 = -1;
		}
		if (MaxLess2 > MaxLess3)
		{
			MaxLess3 = -1;
		}
		if (MaxLess2 > MaxLess4)
		{
			MaxLess4 = -1;
		}
		if (MaxLess2 > MaxLess5)
		{
			MaxLess5 = -1;
		}
		if (MaxLess2 > MaxLess6)
		{
			MaxLess6 = -1;
		}

		if (AStarGreedyi == 1)
		{
			//autoO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (O1)
			{
				if (Order == 1)
				{
					OutPut = L"\r\nChess Huristic Elephant By Bob!";
					//THIS.RefreshBoxText();
				}
				else //If Order is Brown.
				{
					OutPut = L"\r\nChess Huristic Elephant By Alice!";
					//THIS.RefreshBoxText();
				}
			}
			//Set Table and Huristic Value and Syntax.

			//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (On)
			{
				AllDraw::LastRow = ElephantOnTable[i].ElefantThinking.Row;
				AllDraw::LastColumn = ElephantOnTable[i].ElefantThinking.Column;
				AllDraw::NextRow = (ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0]);
				AllDraw::NextColumn = (ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1]);
			}
			(Act) = true;
			Less = ElephantOnTable[i].ElefantThinking.ReturnHuristic(i, j, Order, AA);

			StringHuristics(2, 3, AA, Do, ElephantOnTable[i].WinOcuuredatChiled, ElephantOnTable[i].LoseOcuuredatChiled);

			TableHuristic = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
		}
	}



	Order = DummyOrder;
	ChessRules::CurrentOrder = DummyCurrentOrder;


	Order = DummyOrder;
	ChessRules::CurrentOrder = DummyCurrentOrder;
	return TableHuristic;



}

int ** AllDraw::HuristicAStarGreadySearchHourseGray(int **TableHuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
{


	if (0 != HourseMidle)
	{
		//For Every Soldeir
		for (int i = 0; i < HourseMidle; i++)
		{
			TableHuristic = HuristicAStarGreadySearchHourse(TableHuristic, i, AStarGreedyi, a, Order, CurrentTableHuristic, Act);
		}
	}


	return TableHuristic;

}

int ** AllDraw::HuristicAStarGreadySearchHourseBrown(int **TableHuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
{


	if (HourseHight != HourseMidle)
	{
		//For Every Soldeir
		for (int i = HourseMidle; i < HourseHight; i++)
		{
			TableHuristic = HuristicAStarGreadySearchHourse(TableHuristic, i, AStarGreedyi, a, Order, CurrentTableHuristic, Act);
		}
	}
	return TableHuristic;

}

int ** AllDraw::HuristicAStarGreadySearchHourse(int **TableHuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
{


	ChessRules *AB = nullptr;

	int j;
	std::vector<double> Founded = std::vector<double>();
	int DummyOrder = Order;
	int DummyCurrentOrder = ChessRules::CurrentOrder;
	bool AA = false;
	int Do = 0;


	for (int k = 0; k < AllDraw::HourseMovments; k++)
	{
		//try
		{
			for (j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && HoursesOnTable != nullptr && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{
				{
					//System.Threading.Thread.Sleep(1);
						//try
					{
						//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
						//if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)
						if (HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() == 0)
						{
							continue;
						}
						int CDummy = ChessRules::CurrentOrder;
						int COrder = Order;
						//try
						{
							if (HoursesOnTable[i].HourseThinking.AStarGreedy.size() > j)
							{
								HoursesOnTable[i].HourseThinking.AStarGreedy[j].IsFoundOfLeafDepenOfKindhaveVictory(3, AA, Order * -1);
							}
							ChessRules::CurrentOrder *= -1;
							Order *= -1;
							Do = 0;
						}
						//catch(std::exception &tt)
						{

						}
						StringHuristics(3, 1, AA, Do, HoursesOnTable[i].WinOcuuredatChiled, HoursesOnTable[i].LoseOcuuredatChiled);

						if (HoursesOnTable[i].LoseOcuuredatChiled <= -1 || HoursesOnTable[i].LoseOcuuredatChiled <= -2 || HoursesOnTable[i].LoseOcuuredatChiled <= -3)
						{
							continue;
						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
						//if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)


						if ((HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() != 0 && HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].IsRewardAction() == 1 && AStarGreedyi == 1) || Do == 1 || AA || HoursesOnTable[i].WinOcuuredatChiled >= 1 || HoursesOnTable[i].WinOcuuredatChiled >= 2 || HoursesOnTable[i].WinOcuuredatChiled >= 3)
						{
							//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (On)
							{
								AllDraw::LastRow = HoursesOnTable[i].HourseThinking.Row;
								AllDraw::LastColumn = HoursesOnTable[i].HourseThinking.Column;
								AllDraw::NextRow = (HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0]);
								AllDraw::NextColumn = (HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1]);

								(Act) = true;
								Less = HoursesOnTable[i].HourseThinking.NumberOfPenalties;
							}
							TableHuristic = HoursesOnTable[i].HourseThinking.TableListHourse[j];
							RegardOccurred = true;
							//if (Do == 1 || AA)
							//return TableHuristic;
							StringHuristics(3, 2, AA, Do, HoursesOnTable[i].WinOcuuredatChiled, HoursesOnTable[i].LoseOcuuredatChiled);
							if (HoursesOnTable[i].WinOcuuredatChiled >= 1 || HoursesOnTable[i].WinOcuuredatChiled >= 2 || HoursesOnTable[i].WinOcuuredatChiled >= 3)
							{
								Less = DBL_MAX;
							}



							continue;

						}
						//autool = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								//lock (ol)
						{

							//When There is No Movments in Such Order Enemy continue.
							if (Order != AllDraw::OrderPlate)
							{
								if (HoursesOnTable[i].HourseThinking.ReturnHuristic(i, j, Order, AA) > Less)
								{
									continue;
								}
							}
							//When There is greater Huristic Movments.
							if (HoursesOnTable[i].HourseThinking.ReturnHuristic(i, j, Order, AA) > Less)
							{
								//autoO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										//lock (O)
								{
									//ActionString = ThinkingChess.ActionsString; AllDraw::ActionStringReady = true;
								}
								//retrive table of current huristic.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = HoursesOnTable[i].HourseThinking.TableListHourse[j];
								int **TableS = HoursesOnTable[i].HourseThinking.TableListHourse[j];
								//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
								//ORIGINAL LINE: int[,] TableSS = HoursesOnTable[i].HourseThinking.TableListHourse[j];
								int **TableSS = HoursesOnTable[i].HourseThinking.TableListHourse[j];
								{
									//checked for Legal Movments ArgumentOutOfRangeException curnt game.
									if (DynamicAStarGreedytPrograming && !CurrentTableHuristic && AStarGreedyi == 1)
									{
										//try
										{
											if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
											{
												continue;
											}
										}
										//catch(std::exception &t)
										{

											if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
											{
												continue;
											}

										}

									}
									//When there is not Penalty regard mechanism.
									//if (!UsePenaltyRegardMechnisamT)
									{
										AB = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, 3, TableS, Order, HoursesOnTable[i].HourseThinking.Row, HoursesOnTable[i].HourseThinking.Column);
										//If there is kish or kshachamaz Order.
										if (AB->Check(TableS, Order))
										{
											//When Order is Gray.
											if (Order == 1)
											{
												//Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
												if (AB->CheckGray)
												{
													continue;
												}
											}
											else
											{
												//Continue when CheckBrown and AStarGreadyFirstSearch. 
												if (AB->CheckBrown)
												{
													continue;
												}
											}
										}
										else
										{

										}
									}


								}
								RW3 = i;
								CL3 = k;
								Ki3 = j;
								RW1 = -1;
								CL1 = -1;
								Ki1 = -1;
								RW2 = -1;
								CL2 = -1;
								Ki2 = -1;
								RW4 = -1;
								CL4 = -1;
								Ki4 = -1;
								RW5 = -1;
								CL5 = -1;
								Ki5 = -1;
								RW6 = -1;
								CL6 = -1;
								Ki6 = -1;
								MaxLess3 = HoursesOnTable[RW3].HourseThinking.ReturnHuristic(RW3, Ki3, Order, false);
								if (MaxLess3 > MaxLess1)
								{
									MaxLess1 = -1;
								}
								if (MaxLess3 > MaxLess2)
								{
									MaxLess2 = -1;
								}
								if (MaxLess3 > MaxLess4)
								{
									MaxLess4 = -1;
								}
								if (MaxLess3 > MaxLess5)
								{
									MaxLess5 = -1;
								}
								if (MaxLess3 > MaxLess6)
								{
									MaxLess6 = -1;
								}

								if (AStarGreedyi == 1)
								{
									//autoO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (O1)
									{
										if (Order == 1)
										{
											OutPut = L"\r\nChess Huristic Hourse By Bob!";
											//THIS.RefreshBoxText();
										}
										else //If Order is Brown.
										{
											OutPut = L"\r\nChess Huristic Hourse By Alice!";
											//THIS.RefreshBoxText();
										}
									} //Set Table and Huristic Value and Syntax.

									//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (On)
									{
										AllDraw::LastRow = HoursesOnTable[i].HourseThinking.Row;
										AllDraw::LastColumn = HoursesOnTable[i].HourseThinking.Column;
										AllDraw::NextRow = (HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0]);
										AllDraw::NextColumn = (HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1]);
									}

									(Act) = true;
									Less = HoursesOnTable[i].HourseThinking.ReturnHuristic(i, j, Order, AA);
									TableHuristic = HoursesOnTable[i].HourseThinking.TableListHourse[j];

									StringHuristics(3, 3, AA, Do, HoursesOnTable[i].WinOcuuredatChiled, HoursesOnTable[i].LoseOcuuredatChiled);
								}

							}
							else
							{
								//Set Table and Huristic Value and Syntax.
							}
						}
					}
					//catch(std::exception &t)
					{

					}
				}
				{
					// else
				}


			}
		}
		//catch(std::exception &t)
		{

		}
	}
	return TableHuristic;

}

int ** AllDraw::HuristicAStarGreadySearchCastleGray(int **TableHuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
{


	if (0 != HourseMidle)
	{
		for (int i = 0; i < CastleMidle; i++)
		{
			TableHuristic = HuristicAStarGreadySearchCastle(TableHuristic, i, AStarGreedyi, a, Order, CurrentTableHuristic, Act);
		}
	}
	else
	{
		//CodeClass::SaveByCode(1, callStack.GetFileLineNumber(), callStack.GetFileName());
	}
	return TableHuristic;

}

	int ** AllDraw::HuristicAStarGreadySearchCastleBrown(int **TableHuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
	{

		


			if (CastleMidle != CastleHigh)
			{
				for (int i = CastleMidle; i < CastleHigh; i++)
				{
					TableHuristic = HuristicAStarGreadySearchCastle(TableHuristic, i, AStarGreedyi, a, Order, CurrentTableHuristic, Act);
				}

			}
			else
			{
				//CodeClass::SaveByCode(1, callStack.GetFileLineNumber(), callStack.GetFileName());
			}
			return TableHuristic;
		
	}

	int ** AllDraw::HuristicAStarGreadySearchCastle(int **TableHuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
	{
		


			ChessRules *AB = nullptr;

			int j;
			std::vector<double> Founded = std::vector<double>();
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			bool AA = false;
			int Do = 0;

			for (int k = 0; k < AllDraw::CastleMovments; k++)
			{
				//try
				{
					for (j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{
						{
						//System.Threading.Thread.Sleep(1);
							//try
							{
								//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
								//if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
								//)
								if (CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() == 0)
								{
									continue;
								}
								int CDummy = ChessRules::CurrentOrder;
								int COrder = Order;
								//try
								{
									if (CastlesOnTable[i].CastleThinking.AStarGreedy.size() > j)
									{
										CastlesOnTable[i].CastleThinking.AStarGreedy[j].IsFoundOfLeafDepenOfKindhaveVictory(4, AA, Order * -1);
									}
									ChessRules::CurrentOrder *= -1;
									Order *= -1;
								}
								//catch(std::exception &tt)
								{
									
								}
								Order = COrder;
								StringHuristics(4, 1, AA, Do, CastlesOnTable[i].WinOcuuredatChiled, CastlesOnTable[i].LoseOcuuredatChiled);

								if (CastlesOnTable[i].LoseOcuuredatChiled <= -1 || CastlesOnTable[i].LoseOcuuredatChiled <= -2 || CastlesOnTable[i].LoseOcuuredatChiled <= -3)
								{
									continue;
								}
								ChessRules::CurrentOrder = CDummy;
								//if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
								//)


								if ((CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() != 0 && CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].IsRewardAction() == 1 && AStarGreedyi == 1) || Do == 1 || AA || CastlesOnTable[i].WinOcuuredatChiled >= 1 || CastlesOnTable[i].WinOcuuredatChiled >= 2 || CastlesOnTable[i].WinOcuuredatChiled >= 3)
								{

									//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (On)
									{
										AllDraw::LastRow = CastlesOnTable[i].CastleThinking.Row;
										AllDraw::LastColumn = CastlesOnTable[i].CastleThinking.Column;
										AllDraw::NextRow = (CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0]);
										AllDraw::NextColumn =( CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1]);

										(Act) = true;
										Less = CastlesOnTable[i].CastleThinking.NumberOfPenalties;
									}
									TableHuristic = CastlesOnTable[i].CastleThinking.TableListCastle[j];
									RegardOccurred = true;
									StringHuristics(4, 2, AA, Do, CastlesOnTable[i].WinOcuuredatChiled, CastlesOnTable[i].LoseOcuuredatChiled);
									if (CastlesOnTable[i].WinOcuuredatChiled >= 1 || CastlesOnTable[i].WinOcuuredatChiled >= 2 || CastlesOnTable[i].WinOcuuredatChiled >= 3)
									{
										Less = DBL_MAX;
									}



									//if (Do == 1 || AA)
									//return TableHuristic;
									continue;
								}
								//autool = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								//lock (ol)
								{
									//When There is No Movments in Such Order Enemy continue.
									if (Order != AllDraw::OrderPlate)
									{
										if (CastlesOnTable[i].CastleThinking.ReturnHuristic(i, j, Order, AA) > Less)
										{
											continue;
										}
									}
									//When There is greater Huristic Movments.
									if (CastlesOnTable[i].CastleThinking.ReturnHuristic(i, j, Order, AA) > Less)
									{
										//autoO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										//lock (O)
										{
											//ActionString = ThinkingChess.ActionsString; AllDraw::ActionStringReady = true;
										}
										//retrive table of current huristic.

										//retrive table of current huristic.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CastlesOnTable[i].CastleThinking.TableListCastle[j];
										int **TableS = CastlesOnTable[i].CastleThinking.TableListCastle[j];
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableSS = CastlesOnTable[i].CastleThinking.TableListCastle[j];
										int **TableSS = CastlesOnTable[i].CastleThinking.TableListCastle[j];
										//checked for Legal Movments ArgumentOutOfRangeException curnt game.
										if (DynamicAStarGreedytPrograming && !CurrentTableHuristic && AStarGreedyi == 1)
										{
											//try
											{
												if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
												{
													continue;
												}
											}
											//catch(std::exception &t)
											{
												
												if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
												{
													continue;
												}

											}


										}
										//When there is not Penalty regard mechanism.
										//if (!UsePenaltyRegardMechnisamT)
										{
											AB = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, 4, TableS, Order, CastlesOnTable[i].CastleThinking.Row, CastlesOnTable[i].CastleThinking.Column);
											//If there is kish or kshachamaz Order.
											if (AB->Check(TableS, Order))
											{
												//When Order is Gray.
												if (Order == 1)
												{
													//Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
													if (AB->CheckGray)
													{
														continue;
													}
												}
												else
												{
													//Continue when CheckBrown and AStarGreadyFirstSearch. 
													if (AB->CheckBrown)
													{
														continue;
													}
												}
											}
											else
											{

											}
										}
										RW4 = i;
										CL4 = k;
										Ki4 = j;
										RW1 = -1;
										CL1 = -1;
										Ki1 = -1;
										RW2 = -1;
										CL2 = -1;
										Ki2 = -1;
										RW3 = -1;
										CL3 = -1;
										Ki3 = -1;
										RW5 = -1;
										CL5 = -1;
										Ki5 = -1;
										RW6 = -1;
										CL6 = -1;
										Ki6 = -1;
										MaxLess4 = CastlesOnTable[RW4].CastleThinking.ReturnHuristic(RW4, Ki4, Order, false);
										if (MaxLess4 > MaxLess1)
										{
											MaxLess1 = -1;
										}
										if (MaxLess4 > MaxLess2)
										{
											MaxLess2 = -1;
										}
										if (MaxLess4 > MaxLess3)
										{
											MaxLess3 = -1;
										}
										if (MaxLess4 > MaxLess5)
										{
											MaxLess5 = -1;
										}
										if (MaxLess4 > MaxLess6)
										{
											MaxLess6 = -1;
										}


										if (AStarGreedyi == 1)
										{
											//autoOO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (OO1)
											{
												if (Order == 1)
												{
													OutPut = L"\r\nChess Huristic Castles By Bob!";
													//THIS.RefreshBoxText();
												}
												else //If Order is Brown.
												{
													OutPut = L"\r\nChess Huristic Castles By Alice!";
													//THIS.RefreshBoxText();
												}
											}
											//Set Table and Huristic Value and Syntax.

											//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (On)
											{
												AllDraw::LastRow = CastlesOnTable[i].CastleThinking.Row;
												AllDraw::LastColumn = CastlesOnTable[i].CastleThinking.Column;
												AllDraw::NextRow = (CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0]);
												AllDraw::NextColumn =( CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1]);
											}

											(Act) = true;
											Less = CastlesOnTable[i].CastleThinking.ReturnHuristic(i, j, Order, AA);
											TableHuristic = CastlesOnTable[i].CastleThinking.TableListCastle[j];

											StringHuristics(4, 3, AA, Do, CastlesOnTable[i].WinOcuuredatChiled, CastlesOnTable[i].LoseOcuuredatChiled);
										}
									}
									else //Set Table and Huristic Value and Syntax.
									{
									}
								}
							}
							//catch(std::exception &t)
							{
								
							}
						}
					}
				}
				//catch(std::exception &t)
				{
					
				}
			}
			
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
			
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			return TableHuristic;
		
	}

	int ** AllDraw::HuristicAStarGreadySearchMinsisterGray(int **TableHuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
	{
		
			if (0 != MinisterMidle)
			{
				for (int i = 0; i < MinisterMidle; i++)
				{
					TableHuristic = HuristicAStarGreadySearchMinsister(TableHuristic, i, AStarGreedyi, a, Order, CurrentTableHuristic, Act);
				}

			}
			else
			{
				//CodeClass::SaveByCode(1, callStack.GetFileLineNumber(), callStack.GetFileName());
			}
			return TableHuristic;
		

	}

	int ** AllDraw::HuristicAStarGreadySearchMinsisterBrown(int **TableHuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
	{
		
			if (MinisterHigh != MinisterMidle)
			{
				for (int i = MinisterMidle; i < MinisterHigh; i++)
				{
					TableHuristic = HuristicAStarGreadySearchMinsister(TableHuristic, i, AStarGreedyi, a, Order, CurrentTableHuristic, Act);
				}

			}
			else
			{
				//CodeClass::SaveByCode(1, callStack.GetFileLineNumber(), callStack.GetFileName());
			}
			return TableHuristic;
		
	}

	int ** AllDraw::HuristicAStarGreadySearchMinsister(int **TableHuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
	{

		ChessRules *AB = nullptr;

		int j;
		std::vector<double> Founded = std::vector<double>();
		int DummyOrder = Order;
		int DummyCurrentOrder = ChessRules::CurrentOrder;
		bool AA = false;
		int Do = 0;

		for (int k = 0; k < AllDraw::MinisterMovments; k++)
		{
			for (j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{
				{
					if (MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() == 0)
					{
						continue;
					}
					int CDummy = ChessRules::CurrentOrder;
					int COrder = Order;
					//try
					{
						if (MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > j)
						{
							MinisterOnTable[i].MinisterThinking.AStarGreedy[j].IsFoundOfLeafDepenOfKindhaveVictory(5, AA, Order * -1);
						}
						ChessRules::CurrentOrder *= -1;
						Order *= -1;
						Do = 0;
					}
					//catch(std::exception &tt)
					{

					}
					StringHuristics(5, 1, AA, Do, MinisterOnTable[i].WinOcuuredatChiled, MinisterOnTable[i].LoseOcuuredatChiled);

					if (MinisterOnTable[i].LoseOcuuredatChiled <= -1 || MinisterOnTable[i].LoseOcuuredatChiled <= -2 || MinisterOnTable[i].LoseOcuuredatChiled <= -3)
					{
						continue;
					}
					Order = COrder;
					ChessRules::CurrentOrder = CDummy;



					if ((MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() != 0 && MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].IsRewardAction() == 1 && AStarGreedyi == 1) || Do == 1 || AA || MinisterOnTable[i].WinOcuuredatChiled >= 1 || MinisterOnTable[i].WinOcuuredatChiled >= 2 || MinisterOnTable[i].WinOcuuredatChiled >= 3)
							{

							AllDraw::LastRow = MinisterOnTable[i].MinisterThinking.Row;
							AllDraw::LastColumn = MinisterOnTable[i].MinisterThinking.Column;
							AllDraw::NextRow = (MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0]);
							AllDraw::NextColumn =( MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1]);

							(Act) = true;
							Less = MinisterOnTable[i].MinisterThinking.NumberOfPenalties;

							TableHuristic = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
							RegardOccurred = true;
							StringHuristics(5, 2, AA, Do, MinisterOnTable[i].WinOcuuredatChiled, MinisterOnTable[i].LoseOcuuredatChiled);
							if (MinisterOnTable[i].WinOcuuredatChiled >= 1 || MinisterOnTable[i].WinOcuuredatChiled >= 2 || MinisterOnTable[i].WinOcuuredatChiled >= 3)
							{
								Less = DBL_MAX;
							}



							continue;
							}

					if (Order != AllDraw::OrderPlate)
					{
						if (MinisterOnTable[i].MinisterThinking.ReturnHuristic(i, j, Order, AA) > Less)
						{
							continue;
						}
					}
					if (MinisterOnTable[i].MinisterThinking.ReturnHuristic(i, j, Order, AA) > Less)
					{

						int **TableS = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
						int **TableSS = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
						if (DynamicAStarGreedytPrograming && !CurrentTableHuristic && AStarGreedyi == 1)
						{
							//try
							{
								if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
								{
									continue;
								}
							}
							//catch(std::exception &t)
							{

								if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
								{
									continue;
								}

							}

						}
						ChessRules AB =  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, 5, TableS, Order, MinisterOnTable[i].MinisterThinking.Row, MinisterOnTable[i].MinisterThinking.Column);
						//If there is kish or kshachamaz Order.
						if (AB.Check(TableS, Order))
						{
							//When Order is Gray.
							if (Order == 1)
							{
								//Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
								if (AB.CheckGray)
								{
									continue;
								}
							}
							else
							{
								//Continue when CheckBrown and AStarGreadyFirstSearch. 
								if (AB.CheckBrown)
								{
									continue;
								}
							}
						}
						else
						{

						}
						RW5 = i;
						CL5 = k;
						Ki5 = j;
						RW1 = -1;
						CL1 = -1;
						Ki1 = -1;
						RW2 = -1;
						CL2 = -1;
						Ki2 = -1;
						RW3 = -1;
						CL3 = -1;
						Ki3 = -1;
						RW4 = -1;
						CL4 = -1;
						Ki4 = -1;
						RW6 = -1;
						CL6 = -1;
						Ki6 = -1;
						MaxLess5 = MinisterOnTable[RW5].MinisterThinking.ReturnHuristic(RW5, Ki5, Order, false);
						if (MaxLess5 > MaxLess1)
						{
							MaxLess1 = -1;
						}
						if (MaxLess5 > MaxLess2)
						{
							MaxLess2 = -1;
						}
						if (MaxLess5 > MaxLess3)
						{
							MaxLess3 = -1;
						}
						if (MaxLess5 > MaxLess4)
						{
							MaxLess4 = -1;
						}
						if (MaxLess5 > MaxLess6)
						{
							MaxLess6 = -1;
						}


						if (AStarGreedyi == 1)
						{

							if (Order == 1)
							{
								OutPut = L"\r\nChess Huristic Minister By Bob!";
								//THIS.RefreshBoxText();
							}
							else //If Order is Brown.
							{
								OutPut = L"\r\nChess Huristic Minister By Alice!";
								//THIS.RefreshBoxText();
							}


							AllDraw::LastRow = MinisterOnTable[i].MinisterThinking.Row;
							AllDraw::LastColumn = MinisterOnTable[i].MinisterThinking.Column;
							AllDraw::NextRow = (MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0]);
							AllDraw::NextColumn =( MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1]);


							(Act) = true;
							Less = MinisterOnTable[i].MinisterThinking.ReturnHuristic(i, j, Order, AA);
							TableHuristic = MinisterOnTable[i].MinisterThinking.TableListMinister[j];

							StringHuristics(5, 3, AA, Do, MinisterOnTable[i].WinOcuuredatChiled, MinisterOnTable[i].LoseOcuuredatChiled);
						}
					}

				}



			}
			//try
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
			}
			//catch(std::exception &t)
			{

			}

			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			

		}
		return TableHuristic;
	}

	int ** AllDraw::HuristicAStarGreadySearchKingGray(int **TableHuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
	{
		
			if (0 != KingMidle)
			{
				for (int i = 0; i < KingMidle; i++)
				{
					TableHuristic = HuristicAStarGreadySearchKing(TableHuristic, i, AStarGreedyi, a, Order, CurrentTableHuristic, Act);
				}
			}
			else
			{
				//CodeClass::SaveByCode(1, callStack.GetFileLineNumber(), callStack.GetFileName());
			}
			return TableHuristic;
		
	}

	int ** AllDraw::HuristicAStarGreadySearchKingBrown(int **TableHuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
	{
		

			if (KingHigh != KingMidle)
			{
				for (int i = KingMidle; i < KingHigh; i++)
				{
					TableHuristic = HuristicAStarGreadySearchKing(TableHuristic, i, AStarGreedyi, a, Order, CurrentTableHuristic, Act);
				}
			}
			else
			{
				//CodeClass::SaveByCode(1, callStack.GetFileLineNumber(), callStack.GetFileName());
			}
			return TableHuristic;
		
	}

	int ** AllDraw::HuristicAStarGreadySearchKing(int **TableHuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
	{

		ChessRules *AB = nullptr;

		int j;
		std::vector<double> Founded = std::vector<double>();
		int DummyOrder = Order;
		int DummyCurrentOrder = ChessRules::CurrentOrder;
		bool AA = false;
		int Do = 0;

		for (int k = 0; k < AllDraw::KingMovments; k++)
		{
			for (j = 0;(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) &&(KingOnTable != nullptr) && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{
				{
					//System.Threading.Thread.Sleep(1);
						//try
					{
						//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
						//if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)
						if (KingOnTable[i].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() == 0)
						{
							continue;
						}
						int CDummy = ChessRules::CurrentOrder;
						int COrder = Order;
						//try
						{
							if (KingOnTable[i].KingThinking.AStarGreedy.size() > j)
							{
								KingOnTable[i].KingThinking.AStarGreedy[j].IsFoundOfLeafDepenOfKindhaveVictory(6, AA, Order * -1);
							}
							ChessRules::CurrentOrder *= -1;
							Order *= -1;
							Do = 0;
						}
						//catch(std::exception &tt)
						{

						}
						StringHuristics(6, 1, AA, Do, KingOnTable[i].WinOcuuredatChiled, KingOnTable[i].LoseOcuuredatChiled);

						if (KingOnTable[i].LoseOcuuredatChiled <= -1 || KingOnTable[i].LoseOcuuredatChiled <= -2 || KingOnTable[i].LoseOcuuredatChiled <= -3)
						{
							continue;
						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
						//if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)



						if ((KingOnTable[i].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() != 0 && KingOnTable[i].KingThinking.PenaltyRegardListKing[j].IsRewardAction() == 1 && AStarGreedyi == 1) || Do == 1 || AA || KingOnTable[i].WinOcuuredatChiled >= 1 || KingOnTable[i].WinOcuuredatChiled >= 2 || KingOnTable[i].WinOcuuredatChiled >= 3)
						{
							//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (On)
							{
								AllDraw::LastRow = KingOnTable[i].KingThinking.Row;
								AllDraw::LastColumn = KingOnTable[i].KingThinking.Column;
								AllDraw::NextRow = (KingOnTable[i].KingThinking.RowColumnKing[j][0]);
								AllDraw::NextColumn = (KingOnTable[i].KingThinking.RowColumnKing[j][1]);

								(Act) = true;
								Less = KingOnTable[i].KingThinking.NumberOfPenalties;
							}
							TableHuristic = KingOnTable[i].KingThinking.TableListKing[j];
							RegardOccurred = true;
							StringHuristics(6, 2, AA, Do, KingOnTable[i].WinOcuuredatChiled, KingOnTable[i].LoseOcuuredatChiled);

							if (KingOnTable[i].WinOcuuredatChiled >= 1 || KingOnTable[i].WinOcuuredatChiled >= 2 || KingOnTable[i].WinOcuuredatChiled >= 3)
							{
								Less = DBL_MAX;
							}



							//if (Do == 1 || AA)
							//return TableHuristic;
							continue;
						}
						//autool = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								//lock (ol)
						{
							//When There is No Movments in Such Order Enemy continue.
							if (Order != AllDraw::OrderPlate)
							{
								if (KingOnTable[i].KingThinking.ReturnHuristic(i, j, Order, AA) > Less)
								{
									continue;
								}
							}
							//When There is greater Huristic Movments.
							if (KingOnTable[i].KingThinking.ReturnHuristic(i, j, Order, AA) > Less)
							{
								//autoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										//lock (OO)
								{
									//ActionString = ThinkingChess.ActionsString; AllDraw::ActionStringReady = true;
								}
								//retrive table of current huristic.

								//retrive table of current huristic.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = KingOnTable[i].KingThinking.TableListKing[j];
								int **TableS = KingOnTable[i].KingThinking.TableListKing[j];
								//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
								//ORIGINAL LINE: int[,] TableSS = KingOnTable[i].KingThinking.TableListKing[j];
								int **TableSS = KingOnTable[i].KingThinking.TableListKing[j];
								//checked for Legal Movments ArgumentOutOfRangeException curnt game.
								if (DynamicAStarGreedytPrograming && !CurrentTableHuristic && AStarGreedyi == 1)
								{
									//try
									{
										if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
										{
											continue;
										}
									}
									//catch(std::exception &t)
									{

										if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
										{
											continue;
										}

									}
								}
								//When there is not Penalty regard mechanism.
								//if (!UsePenaltyRegardMechnisamT)
								{
									AB = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, 6, TableS, Order, KingOnTable[i].KingThinking.Row, KingOnTable[i].KingThinking.Column);
									//If there is kish or kshachamaz Order.
									if (AB->Check(TableS, Order))
									{
										//When Order is Gray.
										if (Order == 1)
										{
											//Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
											if (AB->CheckGray)
											{
												continue;
											}
										}
										else
										{
											//Continue when CheckBrown and AStarGreadyFirstSearch. 
											if (AB->CheckBrown)
											{
												continue;
											}
										}
									}
									else
									{

									}

								}


								RW6 = i;
								CL6 = k;
								Ki6 = j;
								RW1 = -1;
								CL1 = -1;
								Ki1 = -1;
								RW2 = -1;
								CL2 = -1;
								Ki2 = -1;
								RW3 = -1;
								CL3 = -1;
								Ki3 = -1;
								RW4 = -1;
								CL4 = -1;
								Ki4 = -1;
								RW5 = -1;
								CL5 = -1;
								Ki5 = -1;
								MaxLess6 = KingOnTable[RW6].KingThinking.ReturnHuristic(RW6, Ki6, Order, false);
								if (MaxLess6 > MaxLess1)
								{
									MaxLess1 = -1;
								}
								if (MaxLess6 > MaxLess2)
								{
									MaxLess2 = -1;
								}
								if (MaxLess6 > MaxLess3)
								{
									MaxLess3 = -1;
								}
								if (MaxLess6 > MaxLess4)
								{
									MaxLess4 = -1;
								}
								if (MaxLess6 > MaxLess5)
								{
									MaxLess5 = -1;
								}


								if (AStarGreedyi == 1)
								{
									if (Order == 1)
									{
										OutPut = L"\r\nChess Huristic King By Bob!";
										//THIS.RefreshBoxText();
									}
									else //If Order is Brown.
									{
										OutPut = L"\r\nChess Huristic King By Alice!";
										//THIS.RefreshBoxText();
									}
									//Set Table and Huristic Value and Syntax.

									AllDraw::LastRow = KingOnTable[i].KingThinking.Row;
									AllDraw::LastColumn = KingOnTable[i].KingThinking.Column;
									AllDraw::NextRow = (KingOnTable[i].KingThinking.RowColumnKing[j][0]);
									AllDraw::NextColumn = (KingOnTable[i].KingThinking.RowColumnKing[j][1]);

									(Act) = true;
									Less = KingOnTable[i].KingThinking.ReturnHuristic(i, j, Order, AA);
									TableHuristic = KingOnTable[i].KingThinking.TableListKing[j];

									StringHuristics(6, 3, AA, Do, KingOnTable[i].WinOcuuredatChiled, KingOnTable[i].LoseOcuuredatChiled);
								}


							}
						}
					}
				}
			}
		}
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
		return TableHuristic;

	}

	int ** AllDraw::HuristicAStarGreadySearchGray(int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
	{
		
			int **TableHuristic;

			TableHuristic = HuristicAStarGreadySearchSoldierGray(TableHuristic, AStarGreedyi, a, Order, CurrentTableHuristic, Act);

			TableHuristic = HuristicAStarGreadySearchElephantGray(TableHuristic, AStarGreedyi, a, Order, CurrentTableHuristic, Act);


			TableHuristic = HuristicAStarGreadySearchHourseGray(TableHuristic, AStarGreedyi, a, Order, CurrentTableHuristic, Act);


			TableHuristic = HuristicAStarGreadySearchCastleGray(TableHuristic, AStarGreedyi, a, Order, CurrentTableHuristic, Act);

			TableHuristic = HuristicAStarGreadySearchMinsisterGray(TableHuristic, AStarGreedyi, a, Order, CurrentTableHuristic, Act);

			TableHuristic = HuristicAStarGreadySearchKingGray(TableHuristic, AStarGreedyi, a, Order, CurrentTableHuristic, Act);

			return TableHuristic;
		
	}

	int ** AllDraw::HuristicAStarGreadySearchBrown(int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
	{

			int **TableHuristic;

			TableHuristic = HuristicAStarGreadySearchSoldierBrown(TableHuristic, AStarGreedyi, a, Order, CurrentTableHuristic, Act);

			TableHuristic = HuristicAStarGreadySearchElephantBrown(TableHuristic, AStarGreedyi, a, Order, CurrentTableHuristic, Act);


			TableHuristic = HuristicAStarGreadySearchHourseBrown(TableHuristic, AStarGreedyi, a, Order, CurrentTableHuristic, Act);


			TableHuristic = HuristicAStarGreadySearchCastleBrown(TableHuristic, AStarGreedyi, a, Order, CurrentTableHuristic, Act);

			TableHuristic = HuristicAStarGreadySearchMinsisterBrown(TableHuristic, AStarGreedyi, a, Order, CurrentTableHuristic, Act);

			TableHuristic = HuristicAStarGreadySearchKingBrown(TableHuristic, AStarGreedyi, a, Order, CurrentTableHuristic, Act);

			return TableHuristic;
		
	}
	
/*
	int ** AllDraw::BrownHuristicAStarGreaedySearchPenalites(int AStarGreedyi, int a, int Order, bool CurrentTableHuristic, bool Act)
	{
		//autoO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		//lock (O)
		{

			ChessRules *AB = nullptr;

			int ToCheckMate = -1, ForCheckMate = -1, j, i;
			std::vector<double> Founded = std::vector<double>();
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			bool AA = false;
			int Do = 0;
			int **TableHuristic;
			//For Every Soldeir
			for (i = SodierMidle; i < SodierHigh; i++)
			{

				//For Every Soldier Movments AStarGreedy.
				for (int k = 0; k < AllDraw::SodierMovments; k++)
				{
					//When There is an Movment in such situation.
					//try
					{
						for (j = 0; (SolderesOnTable != nullptr) && SolderesOnTable[i]  != nullptr && SolderesOnTable != nullptr && SolderesOnTable[i]  != nullptr && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && (&(SolderesOnTable[i].SoldierThinking) != nullptr) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
						{
							//try
							{
								//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
								////if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT)
								//  if (SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() == 0)
								//      continue;
								int CDummy = ChessRules::CurrentOrder;
								int COrder = Order;
								//try
								{
									ChessRules::CurrentOrder *= -1;
									Order *= -1;
									Do = 0;
									if (UsePenaltyRegardMechnisamT)
									{
										for (int ij = 0; ij < SolderesOnTable[i].SoldierThinking.AStarGreedy.size() - 1; ij++)
										{
											SolderesOnTable[i].SoldierThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, Do, SolderesOnTable[i].SoldierThinking.AStarGreedy[ij]);
										}
										Order = COrder;
										ChessRules::CurrentOrder = CDummy;
										ToCheckMate = -1;
										ForCheckMate = -1;
										AA = IsToCheckMateHasLessDeeperThanForCheckMate( Order, ToCheckMate, ForCheckMate, 0);
										if (Do == -1)
										{
											continue;
										}
									}

								}
								//catch(std::exception &tt)
								{
									
								}
								Order = COrder;
								ChessRules::CurrentOrder = CDummy;

								//if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
								//)
								if ((SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() != 0 && SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].IsRewardAction() == 1 && AStarGreedyi == 1) || Do == 1 || AA)
								{
									//Set Table and Huristic Value and Syntax.
									(Act) = true;
									//autoo1l = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (o1l)
									{

										AllDraw::LastRow = SolderesOnTable[i].SoldierThinking.Row;
										AllDraw::LastColumn = SolderesOnTable[i].SoldierThinking.Column;
										AllDraw::NextRow = (SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]);
										AllDraw::NextColumn =( SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]);

										Less = SolderesOnTable[i].SoldierThinking.NumberOfPenalties;
									}


									TableHuristic = SolderesOnTable[i].SoldierThinking.TableListSolder[j];


									//autoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (OO)
									{
										ThingsConverter::ActOfClickEqualTow = true;
									}
									SolderesOnTable[i].ConvertOperation(SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1], a, SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order, false, i);
									int Sign = 1;
									if (a == -1)
									{
										Sign = -1;
									}
									//If there is Soldier Convert.
									if (SolderesOnTable[i].Convert)
									{

										if (SolderesOnTable[i].ConvertedToMinister)
										{
											TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 5 * Sign;
										}
										else if (SolderesOnTable[i].ConvertedToCastle)
										{
											TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 4 * Sign;
										}
										else if (SolderesOnTable[i].ConvertedToHourse)
										{
											TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 3 * Sign;
										}
										else if (SolderesOnTable[i].ConvertedToElefant)
										{
											TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 2 * Sign;
										}




										RegardOccurred = true;
										//if (Do == 1 || AA)
										//return TableHuristic;
										continue;
									}

								}
								//autool = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								//lock (ol)
								{
									//When There is No Movments in Such Order Enemy continue.
									if (Order != AllDraw::OrderPlate)
									{
										if (SolderesOnTable[i].SoldierThinking.NumberOfPenalties < Less)
										{
											continue;
										}
									}
									//When There is greater Huristic Movments.
									if (SolderesOnTable[i].SoldierThinking.NumberOfPenalties < Less)
									{

										//retrive table of current huristic.

										//if (CheckG || CheckB)
										//{
										//retrive table of current huristic.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = SolderesOnTable[i].SoldierThinkingPenaltyRegardListSolder[j].
										int **TableS = SolderesOnTable[i].SoldierThinking.TableListSolder[j];

										//checked for Legal Movments ArgumentOutOfRangeException curnt game.
										if (DynamicAStarGreedytPrograming && !CurrentTableHuristic && AStarGreedyi == 1)
										{
											//try
											{
												if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
												{
													continue;
												}
											}
											//catch(std::exception &t)
											{
												
												if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
												{
													continue;
												}

											}
										}
										//When there is not Penalty regard mechanism.
										//if (!UsePenaltyRegardMechnisamT)
										{
											AB = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, 1, TableS, Order, SolderesOnTable[i].SoldierThinking.Row, SolderesOnTable[i].SoldierThinking.Column);
											//If there is kish or kshachamaz Order.
											if (AB->Check(TableS, Order))
											{
												//When Order is Gray.
												if (Order == 1)
												{
													//Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
													if (AB->CheckGray)
													{
														continue;
													}
												}
												else
												{
													//Continue when CheckBrown and AStarGreadyFirstSearch. 
													if (AB->CheckBrown)
													{
														continue;
													}
												}
											}
											// }
											else
											{

											}
										}
										RW1 = i;
										CL1 = k;
										Ki1 = j;
										RW2 = -1;
										CL2 = -1;
										Ki2 = -1;
										RW3 = -1;
										CL3 = -1;
										Ki3 = -1;
										RW4 = -1;
										CL4 = -1;
										Ki4 = -1;
										RW5 = -1;
										CL5 = -1;
										Ki5 = -1;
										RW6 = -1;
										CL6 = -1;
										Ki6 = -1;
										MaxLess1 = SolderesOnTable[RW1].SoldierThinking.NumberOfPenalties;
										if (MaxLess1 > MaxLess2)
										{
											MaxLess2 = -1;
										}
										if (MaxLess1 > MaxLess3)
										{
											MaxLess3 = -1;
										}
										if (MaxLess1 > MaxLess4)
										{
											MaxLess4 = -1;
										}
										if (MaxLess1 > MaxLess5)
										{
											MaxLess5 = -1;
										}
										if (MaxLess1 > MaxLess6)
										{
											MaxLess6 = -1;
										}

										//Set Table and Huristic Value and Syntax.
										if (AStarGreedyi == 1)
										{
											//autoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (OO)
											{
												if (Order == 1)
												{
													OutPut = L"\r\nChess Huristic Sodier By Bob!";
													//THIS.RefreshBoxText();
												}
												else //If Order is Brown.
												{
													OutPut = L"\r\nChess Huristic Sodier By Alice!";
													//THIS.RefreshBoxText();
												}
											}
											//Set Table and Huristic Value and Syntax.
											(Act) = true;
											//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (On)
											{
												AllDraw::LastRow = SolderesOnTable[i].SoldierThinking.Row;
												AllDraw::LastColumn = SolderesOnTable[i].SoldierThinking.Column;
												AllDraw::NextRow = (SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]);
												AllDraw::NextColumn =( SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]);
											}

											Less = SolderesOnTable[i].SoldierThinking.NumberOfPenalties;


											TableHuristic = SolderesOnTable[i].SoldierThinking.TableListSolder[j];


											//autoO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (O1)
											{
												ThingsConverter::ActOfClickEqualTow = true;
											}
											SolderesOnTable[i].ConvertOperation(SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1], a, SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order, false, i);
											int Sign = 1;
											if (a == -1)
											{
												Sign = -1;
											}
											//If there is Soldier Convert.
											if (SolderesOnTable[i].Convert)
											{

												if (SolderesOnTable[i].ConvertedToMinister)
												{
													TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 5 * Sign;
												}
												else if (SolderesOnTable[i].ConvertedToCastle)
												{
													TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 4 * Sign;
												}
												else if (SolderesOnTable[i].ConvertedToHourse)
												{
													TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 3 * Sign;
												}
												else if (SolderesOnTable[i].ConvertedToElefant)
												{
													TableHuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 2 * Sign;
												}





											}

										}
										else
										{ //Set Table and Huristic Value and Syntax.
											//try
											{
												if (AStarGreedyi == 1)
												{
													//TakeRoot.Pointer = this;
													//Found of Max Non Probable Movments.
													Founded.clear();
													double LessB = -DBL_MAX;
													;
													BeginIndexFoundingMaxLessofMaxList(0, Founded, LessB);
													RW1 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0])]);
													CL1 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0]) + 1]);
													Ki1 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0]) + 2]);
													if (Founded[0] != MaxSoldeirFounded)
													{
														continue;
													}
													(Act) = true;
													//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
													//lock (On)
													{
														AllDraw::LastRow = SolderesOnTable[RW1].SoldierThinking.Row;
														AllDraw::LastColumn = SolderesOnTable[RW1].SoldierThinking.Column;
														AllDraw::NextRow = (SolderesOnTable[RW1].SoldierThinking.RowColumnSoldier[j][0]);
														AllDraw::NextColumn =( SolderesOnTable[RW1].SoldierThinking.RowColumnSoldier[j][1]);
													}
													Less = SolderesOnTable[RW1].SoldierThinking.ReturnHuristic(RW1, Ki1, Order, false);


													TableHuristic = SolderesOnTable[RW1].SoldierThinking.TableListSolder[j][Ki1];


													//autoO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
													//lock (O1)
													{
														ThingsConverter::ActOfClickEqualTow = true;
													}
													SolderesOnTable[RW1].ConvertOperation(SolderesOnTable[RW1].SoldierThinking.RowColumnSoldier[Ki1][0], SolderesOnTable[RW1].SoldierThinking.RowColumnSoldier[Ki1][1], a, SolderesOnTable[RW1].SoldierThinking.TableListSolder[j][Ki1], Order, false, i);
													int Sign = 1;
													if (a == -1)
													{
														Sign = -1;
													}
													//If there is Soldier Convert.
													if (SolderesOnTable[RW1].Convert)
													{

														if (SolderesOnTable[RW1].ConvertedToMinister)
														{
															TableHuristic[SolderesOnTable[RW1].SoldierThinking.RowColumnSoldier[Ki1][0]][SolderesOnTable[RW1].SoldierThinking.RowColumnSoldier[Ki1][1]] = 5 * Sign;
														}
														else if (SolderesOnTable[RW1].ConvertedToCastle)
														{
															TableHuristic[SolderesOnTable[RW1].SoldierThinking.RowColumnSoldier[Ki1][0]][SolderesOnTable[RW1].SoldierThinking.RowColumnSoldier[Ki1][1]] = 4 * Sign;
														}
														else if (SolderesOnTable[RW1].ConvertedToHourse)
														{
															TableHuristic[SolderesOnTable[RW1].SoldierThinking.RowColumnSoldier[Ki1][0]][SolderesOnTable[RW1].SoldierThinking.RowColumnSoldier[Ki1][1]] = 3 * Sign;
														}
														else if (SolderesOnTable[RW1].ConvertedToElefant)
														{
															TableHuristic[SolderesOnTable[RW1].SoldierThinking.RowColumnSoldier[Ki1][0]][SolderesOnTable[RW1].SoldierThinking.RowColumnSoldier[Ki1][1]] = 2 * Sign;
														}



													}
													//autoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
													//lock (OO)
													{
														if (Order == 1)
														{
															OutPut = L"\r\nChess Huristic Sodier By Bob!";
															//THIS.RefreshBoxText();
														}
														else //If Order is Brown.
														{
															OutPut = L"\r\nChess Huristic Sodier By Alice!";
															//THIS.RefreshBoxText();
														}
													}
												}
											}
											//catch(std::exception &t)
											{
												
											}

										}
									}
								}
							}
							//catch(std::exception &t)
							{
								
							}
						}
					}
					//catch(std::exception &t)
					{
						
					}
				}
				//try

				{
						Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
				}
				//catch(std::exception &t)
				{
					
				}

				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
			}
			//Do For Remaining Objects same as Soldeir Documentation.
			for (i = ElefantMidle; i < ElefantHigh; i++)
			{
				for (int k = 0; k < AllDraw::ElefantMovments; k++)
				{
					//try
					{
						for (j = 0; (ElephantOnTable != nullptr) && (&(ElephantOnTable[i]) != nullptr) && ElephantOnTable != nullptr && (&(ElephantOnTable[i]) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && (&(ElephantOnTable[i].ElefantThinking) != nullptr) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
						{
							//try
							{
								//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
								////if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT)
								//   if (ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() == 0)
								//       continue;
								int CDummy = ChessRules::CurrentOrder;
								int COrder = Order;
								//try
								{
									ChessRules::CurrentOrder *= -1;
									Order *= -1;
									Do = 0;
									if (UsePenaltyRegardMechnisamT)
									{
										for (int ij = 0; ij < ElephantOnTable[i].ElefantThinking.AStarGreedy.size() - 1; ij++)
										{
											ElephantOnTable[i].ElefantThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, Do, ElephantOnTable[i].ElefantThinking.AStarGreedy[ij]);
										}
										Order = COrder;
										ChessRules::CurrentOrder = CDummy;
										ToCheckMate = -1;
										ForCheckMate = -1;
										AA = MaxHuristicAStarGreedytBackWard Order, ToCheckMate, ForCheckMate, 0);
										if (Do == -1)
										{
											continue;
										}
									}

								}
								//catch(std::exception &tt)
								{
									
								}
								Order = COrder;
								ChessRules::CurrentOrder = CDummy;
								//if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
								//)
								if ((ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() != 0 && ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsRewardAction() == 1 && AStarGreedyi == 1) || Do == 1 || AA)
								{
									//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (On)
									{
										AllDraw::LastRow = ElephantOnTable[i].ElefantThinking.Row;
										AllDraw::LastColumn = ElephantOnTable[i].ElefantThinking.Column;
										AllDraw::NextRow = (ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0]);
										AllDraw::NextColumn =( ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1]);


										(Act) = true;
										Less = ElephantOnTable[i].ElefantThinking.NumberOfPenalties;
									}
									TableHuristic = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
									RegardOccurred = true;
									//if (Do == 1 || AA)
									//return TableHuristic;
									continue;
								}
								//When There is No Movments in Such Order Enemy continue.
								if (ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() == 0)
								{
									continue;
								}
								//autool = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								//lock (ol)
								{
									//When There is No Movments in Such Order Enemy continue.
									if (Order != AllDraw::OrderPlate)
									{
										if (ElephantOnTable[i].ElefantThinking.NumberOfPenalties < Less)
										{
											continue;
										}
									}
									//When There is greater Huristic Movments.
									if (ElephantOnTable[i].ElefantThinking.NumberOfPenalties < Less)
									{

										//retrive table of current huristic.

										//if (CheckG || CheckB)
										//{
										//retrive table of current huristic.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
										int **TableS = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
										//checked for Legal Movments ArgumentOutOfRangeException curnt game.
										if (DynamicAStarGreedytPrograming && !CurrentTableHuristic && AStarGreedyi == 1)
										{
											//try
											{
												if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
												{
													continue;
												}
											}
											//catch(std::exception &t)
											{
												
												if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
												{
													continue;
												}

											}
										}
										//When there is not Penalty regard mechanism.
										//if (!UsePenaltyRegardMechnisamT)
										{
											AB = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, 2, TableS, Order, ElephantOnTable[i].ElefantThinking.Row, ElephantOnTable[i].ElefantThinking.Column);
											//If there is kish or kshachamaz Order.
											if (AB->Check(TableS, Order))
											{
												//When Order is Gray.
												if (Order == 1)
												{
													//Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
													if (AB->CheckGray)
													{
														continue;
													}
												}
												else
												{
													//Continue when CheckBrown and AStarGreadyFirstSearch. 
													if (AB->CheckBrown)
													{
														continue;
													}
												}
											}
											else
											{

											}


										}
										RW2 = i;
										CL2 = k;
										Ki2 = j;
										RW1 = -1;
										CL1 = -1;
										Ki1 = -1;
										RW3 = -1;
										CL3 = -1;
										Ki3 = -1;
										RW4 = -1;
										CL4 = -1;
										Ki4 = -1;
										RW5 = -1;
										CL5 = -1;
										Ki5 = -1;
										RW6 = -1;
										CL6 = -1;
										Ki6 = -1;
										MaxLess2 = ElephantOnTable[RW2].ElefantThinking.NumberOfPenalties;
										MaxLess1 = -1;
										if (MaxLess2 > MaxLess3)
										{
											MaxLess3 = -1;
										}
										if (MaxLess2 > MaxLess4)
										{
											MaxLess4 = -1;
										}
										if (MaxLess2 > MaxLess5)
										{
											MaxLess5 = -1;
										}
										if (MaxLess2 > MaxLess6)
										{
											MaxLess6 = -1;
										}
										if (AStarGreedyi == 1)
										{
											//autoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (OO)
											{
												if (Order == 1)
												{
													OutPut = L"\r\nChess Huristic Elephant By Bob!";
													//THIS.RefreshBoxText();
												}
												else //If Order is Brown.
												{
													OutPut = L"\r\nChess Huristic Elephant By Alice!";
													//THIS.RefreshBoxText();
												}
											}
											//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (On)
											{
												AllDraw::LastRow = ElephantOnTable[i].ElefantThinking.Row;
												AllDraw::LastColumn = ElephantOnTable[i].ElefantThinking.Column;
												AllDraw::NextRow = (ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0]);
												AllDraw::NextColumn =( ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1]);
											}

											(Act) = true;
											Less = ElephantOnTable[i].ElefantThinking.NumberOfPenalties;
											TableHuristic = ElephantOnTable[i].ElefantThinking.TableListElefant[j];

										}
									}
									else //Set Table and Huristic Value and Syntax.
									{
										//try
										{
											if (AStarGreedyi == 1)
											{
												//TakeRoot.Pointer = this;
												//Found of Max Non Probable Movments.
												Founded.clear();
												double LessB = -DBL_MAX;
												;
												BeginIndexFoundingMaxLessofMaxList(0, Founded, LessB);
												RW2 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0])]);
												CL2 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0]) + 1]);
												Ki2 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0]) + 2]);
												if (Founded[0] != MaxElephntFounded)
												{
													continue;
												}

												//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
												//lock (On)
												{
													AllDraw::LastRow = ElephantOnTable[RW2].ElefantThinking.Row;
													AllDraw::LastColumn = ElephantOnTable[RW2].ElefantThinking.Column;
													AllDraw::NextRow = (ElephantOnTable[RW2].ElefantThinking.RowColumnElefant[j][0]);
													AllDraw::NextColumn =( ElephantOnTable[RW2].ElefantThinking.RowColumnElefant[j][1]);
												}

												(Act) = true;
												Less = ElephantOnTable[RW2].ElefantThinking.ReturnHuristic(RW2, Ki2, Order, false);
												TableHuristic = ElephantOnTable[RW2].ElefantThinking.TableListElefant[Ki2];
												//autoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
												//lock (OO)
												{
													if (Order == 1)
													{
														OutPut = L"\r\nChess Huristic Sodier By Bob!";
														//THIS.RefreshBoxText();
													}
													else //If Order is Brown.
													{
														OutPut = L"\r\nChess Huristic Sodier By Alice!";
														//THIS.RefreshBoxText();
													}
												}
											}
										}
										//catch(std::exception &t)
										{
											
										}

									}
								}
							}
							//catch(std::exception &t)
							{
								
							}
						}
					}
					//catch(std::exception &t)
					{
						
					}
				}
				//try
				{
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
				}
				//catch(std::exception &t)
				{
					
				}

				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
			}

			for (i = HourseMidle; i < HourseHight; i++)
			{
				for (int k = 0; k < AllDraw::HourseMovments; k++)
				{
					//try
					{
						for (j = 0;( HoursesOnTable != nullptr) && (&(HoursesOnTable[i]) != nullptr) && HoursesOnTable != nullptr && (&(HoursesOnTable[i]) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
						{
							//try
							{
								//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
								////if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT)
								//    if (HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() == 0)
								//        continue;
								int CDummy = ChessRules::CurrentOrder;
								int COrder = Order;
								//try
								{
									ChessRules::CurrentOrder *= -1;
									Order *= -1;
									Do = 0;
									if (UsePenaltyRegardMechnisamT)
									{
										for (int ij = 0; ij < HoursesOnTable[i].HourseThinking.AStarGreedy.size() - 1; ij++)
										{
											HoursesOnTable[i].HourseThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, Do, HoursesOnTable[i].HourseThinking.AStarGreedy[ij]);
										}
										Order = COrder;
										ChessRules::CurrentOrder = CDummy;
										ToCheckMate = -1;
										ForCheckMate = -1;
										AA = IsToCheckMateHasLessDeeperThanForCheckMate( Order, ToCheckMate, ForCheckMate, 0);
										if (Do == -1)
										{
											continue;
										}
									}

								}
								//catch(std::exception &tt)
								{
									
								}
								Order = COrder;
								ChessRules::CurrentOrder = CDummy;
								//if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
								//)
								if ((HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() != 0 && HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].IsRewardAction() == 1 && AStarGreedyi == 1) || Do == 1 || AA)
								{
									//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (On)
									{
										AllDraw::LastRow = HoursesOnTable[i].HourseThinking.Row;
										AllDraw::LastColumn = HoursesOnTable[i].HourseThinking.Column;
										AllDraw::NextRow = (HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0]);
										AllDraw::NextColumn =( HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1]);


										(Act) = true;
										Less = HoursesOnTable[i].HourseThinking.NumberOfPenalties;
									}
									TableHuristic = HoursesOnTable[i].HourseThinking.TableListHourse[j];
									RegardOccurred = true;
									//if (Do == 1 || AA)
									//return TableHuristic;
									continue;
								}

								//autool = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								//lock (ol)
								{
									//When There is No Movments in Such Order Enemy continue.
									if (Order != AllDraw::OrderPlate)
									{
										if (HoursesOnTable[i].HourseThinking.NumberOfPenalties < Less)

										{
											continue;
										}
									}
									//When There is greater Huristic Movments.
									if (HoursesOnTable[i].HourseThinking.NumberOfPenalties < Less)
									{

										//retrive table of current huristic.

										//retrive table of current huristic.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = HoursesOnTable[i].HourseThinking.TableListHourse[j];
										int **TableS = HoursesOnTable[i].HourseThinking.TableListHourse[j];
										{
											//checked for Legal Movments ArgumentOutOfRangeException curnt game.
											if (DynamicAStarGreedytPrograming && !CurrentTableHuristic && AStarGreedyi == 1)
											{
												//try
												{
													if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
													{
														continue;
													}
												}
												//catch(std::exception &t)
												{
													
													if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
													{
														continue;
													}

												}

											}
											//When there is not Penalty regard mechanism.
											//if (!UsePenaltyRegardMechnisamT)
											{
												AB = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, 3, TableS, Order, HoursesOnTable[i].HourseThinking.Row, HoursesOnTable[i].HourseThinking.Column);
												//If there is kish or kshachamaz Order.
												if (AB->Check(TableS, Order))
												{
													//When Order is Gray.
													if (Order == 1)
													{
														//Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
														if (AB->CheckGray)
														{
															continue;
														}
													}
													else
													{
														//Continue when CheckBrown and AStarGreadyFirstSearch. 
														if (AB->CheckBrown)
														{
															continue;
														}
													}
												}
												else
												{

												}
											}


										}
										RW1 = -1;
										CL1 = -1;
										Ki1 = -1;
										RW2 = -1;
										CL2 = -1;
										Ki2 = -1;
										RW3 = i;
										CL3 = k;
										Ki3 = j;
										RW4 = -1;
										CL4 = -1;
										Ki4 = -1;
										RW5 = -1;
										CL5 = -1;
										Ki5 = -1;
										RW6 = -1;
										CL6 = -1;
										Ki6 = -1;
										MaxLess3 = HoursesOnTable[RW3].HourseThinking.NumberOfPenalties;
										if (MaxLess3 > MaxLess1)
										{
											MaxLess1 = -1;
										}
										if (MaxLess3 > MaxLess2)
										{
											MaxLess2 = -1;
										}
										if (MaxLess3 > MaxLess4)
										{
											MaxLess4 = -1;
										}
										if (MaxLess3 > MaxLess5)
										{
											MaxLess5 = -1;
										}
										if (MaxLess3 > MaxLess6)
										{
											MaxLess6 = -1;
										}

										if (AStarGreedyi == 1)
										{
											//autoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (OO)
											{
												if (Order == 1)
												{
													OutPut = L"\r\nChess Huristic Hourse By Bob!";
													//THIS.RefreshBoxText();
												}
												else //If Order is Brown.
												{
													OutPut = L"\r\nChess Huristic Hourse By Alice!";
													//THIS.RefreshBoxText();
												}
											}
											//Set Table and Huristic Value and Syntax.

											//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (On)
											{
												AllDraw::LastRow = HoursesOnTable[i].HourseThinking.Row;
												AllDraw::LastColumn = HoursesOnTable[i].HourseThinking.Column;
												AllDraw::NextRow = (HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0]);
												AllDraw::NextColumn =( HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1]);
											}

											(Act) = true;
											Less = HoursesOnTable[i].HourseThinking.NumberOfPenalties;
											TableHuristic = HoursesOnTable[i].HourseThinking.TableListHourse[j];

										}
									}
									else //Set Table and Huristic Value and Syntax.
									{
										//try
										{
											if (AStarGreedyi == 1)
											{
												//TakeRoot.Pointer = this;
												//Found of Max Non Probable Movments.
												Founded.clear();
												double LessB = -DBL_MAX;
												;
												BeginIndexFoundingMaxLessofMaxList(0, Founded, LessB);
												RW3 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0])]);
												CL3 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0]) + 1]);
												Ki3 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0]) + 2]);
												if (Founded != MaxHourseFounded)
												{
													continue;
												}

												//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
												//lock (On)
												{
													AllDraw::LastRow = HoursesOnTable[RW3].HourseThinking.Row;
													AllDraw::LastColumn = HoursesOnTable[RW3].HourseThinking.Column;
													AllDraw::NextRow = (HoursesOnTable[RW3].HourseThinking.RowColumnHourse[j][0]);
													AllDraw::NextColumn =( HoursesOnTable[RW3].HourseThinking.RowColumnHourse[j][1]);
												}

												(Act) = true;
												Less = HoursesOnTable[RW3].HourseThinking.ReturnHuristic(RW3, Ki3, Order, false);
												TableHuristic = HoursesOnTable[RW3].HourseThinking.TableListHourse[Ki3];
												//autoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
												//lock (OO)
												{
													if (Order == 1)
													{
														OutPut = L"\r\nChess Huristic Sodier By Bob!";
														//THIS.RefreshBoxText();
													}
													else //If Order is Brown.
													{
														OutPut = L"\r\nChess Huristic Sodier By Alice!";
														//THIS.RefreshBoxText();
													}
												}
											}
										}
										//catch(std::exception &t)
										{
											
										}


									}
								}
							}
							//catch(std::exception &t)
							{
								
							}
						}
					}
					//catch(std::exception &t)
					{
						
					}
				}
				//try
				{
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
				}
				//catch(std::exception &t)
				{
					
				}

				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
			}

			for (i = CastleMidle; i < CastleHigh; i++)
			{
				for (int k = 0; k < AllDraw::CastleMovments; k++)
				{
					//try
					{
						for (j = 0; (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr) && (&(CastlesOnTable[i].CastleThinking) != nullptr) && (&(HoursesOnTable[i].HourseThinking) != nullptr) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
						{
							//try
							{
								//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
								////if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT)
								///   if (CastlesOnTable[ii].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() == 0)
								//       continue;

								int CDummy = ChessRules::CurrentOrder;
								int COrder = Order;
								//try
								{
									ChessRules::CurrentOrder *= -1;
									Order *= -1;
									Do = 0;
									if (UsePenaltyRegardMechnisamT)
									{
										for (int ij = 0; ij < CastlesOnTable[ii].CastleThinking.AStarGreedy.size() - 1; ij++)
										{
											CastlesOnTable[ii].CastleThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, Do, CastlesOnTable[ii].CastleThinking.AStarGreedy[ij]);
										}
										Order = COrder;
										ChessRules::CurrentOrder = CDummy;
										ToCheckMate = -1;
										ForCheckMate = -1;
										AA = IsToCheckMateHasLessDeeperThanForCheckMate( Order, ToCheckMate, ForCheckMate, 0);
										if (Do == -1)
										{
											continue;
										}
									}

								}
								//catch(std::exception &tt)
								{
									
								}
								Order = COrder;
								ChessRules::CurrentOrder = CDummy;
								//if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
								//)
								if ((CastlesOnTable[ii].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() != 0 && CastlesOnTable[ii].CastleThinking.PenaltyRegardListCastle[j].IsRewardAction() == 1 && AStarGreedyi == 1) || Do == 1 || AA)
								{

									//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (On)
									{
										AllDraw::LastRow = CastlesOnTable[ii].CastleThinking.Row;
										AllDraw::LastColumn = CastlesOnTable[ii].CastleThinking.Column;
										AllDraw::NextRow = (CastlesOnTable[ii].CastleThinking.RowColumnCastle[j][0]);
										AllDraw::NextColumn =( CastlesOnTable[ii].CastleThinking.RowColumnCastle[j][1]);
										(Act) = true;
										Less = CastlesOnTable[ii].CastleThinking.NumberOfPenalties;
									}
									TableHuristic = CastlesOnTable[ii].CastleThinking.TableListCastle[j];
									RegardOccurred = true;
									//if (Do == 1 || AA)
									//return TableHuristic;
									continue;
								}
								//autool = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								//lock (ol)
								{
									if (Order != AllDraw::OrderPlate)
									{
										if (CastlesOnTable[ii].CastleThinking.NumberOfPenalties < Less)
										{
											continue;
										}
									}
									//When There is greater Huristic Movments.
									if (CastlesOnTable[ii].CastleThinking.NumberOfPenalties < Less)
									{

										//retrive table of current huristic.
										//retrive table of current huristic.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CastlesOnTable[ii].CastleThinking.TableListCastle[j];
										int **TableS = CastlesOnTable[ii].CastleThinking.TableListCastle[j];
										//checked for Legal Movments ArgumentOutOfRangeException curnt game.
										if (DynamicAStarGreedytPrograming && !CurrentTableHuristic && AStarGreedyi == 1)
										{
											//try
											{
												if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
												{
													continue;
												}
											}
											//catch(std::exception &t)
											{
												
												if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
												{
													continue;
												}

											}

										}
										//When there is not Penalty regard mechanism.
										//if (!UsePenaltyRegardMechnisamT)
										{
											AB = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, 4, TableS, Order, CastlesOnTable[ii].CastleThinking.Row, CastlesOnTable[ii].CastleThinking.Column);
											//If there is kish or kshachamaz Order.
											if (AB->Check(TableS, Order))
											{
												//When Order is Gray.
												if (Order == 1)
												{
													//Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
													if (AB->CheckGray)
													{
														continue;
													}
												}
												else
												{
													//Continue when CheckBrown and AStarGreadyFirstSearch. 
													if (AB->CheckBrown)
													{
														continue;
													}
												}
											}
											else
											{

											}

										}
										RW4 = i;
										CL4 = k;
										Ki4 = j;
										RW1 = -1;
										CL1 = -1;
										Ki1 = -1;
										RW2 = -1;
										CL2 = -1;
										Ki2 = -1;
										RW3 = -1;
										CL3 = -1;
										Ki3 = -1;
										RW5 = -1;
										CL5 = -1;
										Ki5 = -1;
										RW6 = -1;
										CL6 = -1;
										Ki6 = -1;
										MaxLess4 = (CastlesOnTable[RW4].CastleThinking.NumberOfPenalties);
										if (MaxLess4 > MaxLess1)
										{
											MaxLess1 = -1;
										}
										if (MaxLess4 > MaxLess2)
										{
											MaxLess2 = -1;
										}
										if (MaxLess4 > MaxLess3)
										{
											MaxLess3 = -1;
										}
										if (MaxLess4 > MaxLess5)
										{
											MaxLess5 = -1;
										}
										if (MaxLess4 > MaxLess6)
										{
											MaxLess6 = -1;
										}

										if (AStarGreedyi == 1)
										{
											//autoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (OO)
											{
												if (Order == 1)
												{
													OutPut = L"\r\nChess Huristic Castles By Bob!";
													//THIS.RefreshBoxText();
												}
												else //If Order is Brown.
												{
													OutPut = L"\r\nChess Huristic Castles By Alice!";
													//THIS.RefreshBoxText();
												}
											}
											//Set Table and Huristic Value and Syntax.

											//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (On)
											{
												AllDraw::LastRow = CastlesOnTable[ii].CastleThinking.Row;
												AllDraw::LastColumn = CastlesOnTable[ii].CastleThinking.Column;
												AllDraw::NextRow = (CastlesOnTable[ii].CastleThinking.RowColumnCastle[j][0]);
												AllDraw::NextColumn =( CastlesOnTable[ii].CastleThinking.RowColumnCastle[j][1]);
											}

											(Act) = true;
											Less = CastlesOnTable[ii].CastleThinking.NumberOfPenalties;
											TableHuristic = CastlesOnTable[ii].CastleThinking.TableListCastle[j];

										}
									}
									else //Set Table and Huristic Value and Syntax.
									{
										//try
										{
											if (AStarGreedyi == 1)
											{
												//TakeRoot.Pointer = this;
												//Found of Max Non Probable Movments.
												Founded.clear();
												double LessB = -DBL_MAX;
												;
												BeginIndexFoundingMaxLessofMaxList(0, Founded, LessB);
												RW4 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0])]);
												CL4 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0]) + 1]);
												Ki4 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0]) + 2]);
												if (Founded[0] != MaxCastlesFounded)
												{
													continue;
												}

												//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
												//lock (On)
												{
													AllDraw::LastRow = CastlesOnTable[RW4].CastleThinking.Row;
													AllDraw::LastColumn = CastlesOnTable[RW4].CastleThinking.Column;
													AllDraw::NextRow = (CastlesOnTable[RW4].CastleThinking.RowColumnCastle[j][0]);
													AllDraw::NextColumn =( CastlesOnTable[RW4].CastleThinking.RowColumnCastle[j][1]);
												}

												(Act) = true;
												Less = CastlesOnTable[RW4].CastleThinking.ReturnHuristic(RW4, Ki4, Order, false);
												TableHuristic = CastlesOnTable[RW4].CastleThinking.TableListCastle[Ki4];
												//autoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
												//lock (OO)
												{
													if (Order == 1)
													{
														OutPut = L"\r\nChess Huristic Sodier By Bob!";
														//THIS.RefreshBoxText();
													}
													else //If Order is Brown.
													{
														OutPut = L"\r\nChess Huristic Sodier By Alice!";
														//THIS.RefreshBoxText();
													}
												}
											}
										}
										//catch(std::exception &t)
										{
											
										}

									}
								}
							}
							//catch(std::exception &t)
							{
								
							}
						}
					}
					//catch(std::exception &t)
					{
						
					}
				}
				//try
				{
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
				}
				//catch(std::exception &t)
				{
					
				}
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
			}


			for (i = MinisterMidle; i < MinisterHigh; i++)
			{
				for (int k = 0; k < AllDraw::MinisterMovments; k++)
				{
					//try
					{
						for (j = 0; (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && (&(MinisterOnTable[i].MinisterThinking) != nullptr) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
						{
							//try
							{
								//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
								////if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT)
								////    if(MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() == 0)
								//     continue;
								int CDummy = ChessRules::CurrentOrder;
								int COrder = Order;
								//try
								{
									ChessRules::CurrentOrder *= -1;
									Order *= -1;
									Do = 0;
									if (UsePenaltyRegardMechnisamT)
									{
										for (int ij = 0; ij < MinisterOnTable[i].MinisterThinking.AStarGreedy.size() - 1; ij++)
										{
											MinisterOnTable[i].MinisterThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, Do, MinisterOnTable[i].MinisterThinking.AStarGreedy[ij]);
										}
										Order = COrder;
										ChessRules::CurrentOrder = CDummy;
										ToCheckMate = -1;
										ForCheckMate = -1;
										AA = IsToCheckMateHasLessDeeperThanForCheckMate( Order, ToCheckMate, ForCheckMate, 0);
										if (Do == -1)
										{
											continue;
										}
									}

								}
								//catch(std::exception &tt)
								{
									
								}
								Order = COrder;
								ChessRules::CurrentOrder = CDummy;
								//if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
								//)
								if ((MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() != 0 && MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].IsRewardAction() == 1 && AStarGreedyi == 1) || Do == 1 || AA)
								{

									//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (On)
									{
										AllDraw::LastRow = MinisterOnTable[i].MinisterThinking.Row;
										AllDraw::LastColumn = MinisterOnTable[i].MinisterThinking.Column;
										AllDraw::NextRow = (MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0]);
										AllDraw::NextColumn =( MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1]);


										(Act) = true;
										Less = MinisterOnTable[i].MinisterThinking.NumberOfPenalties;
									}
									TableHuristic = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
									RegardOccurred = true;
									//if (Do == 1 || AA)
									//return TableHuristic;
									continue;
								}
								//autool = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								//lock (ol)
								{
									//When There is No Movments in Such Order Enemy continue.
									if (Order != AllDraw::OrderPlate)
									{
										if(MinisterOnTable[i].MinisterThinking.NumberOfPenalties < Less)
										{
											continue;
										}
									}


									//When There is greater Huristic Movments.
									if(MinisterOnTable[i].MinisterThinking.NumberOfPenalties < Less)

									{
									//retrive table of current huristic.

										//retrive table of current huristic.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
										int **TableS = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
										//checked for Legal Movments ArgumentOutOfRangeException curnt game.
										if (DynamicAStarGreedytPrograming && !CurrentTableHuristic && AStarGreedyi == 1)
										{
											//try
											{
												if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
												{
													continue;
												}
											}
											//catch(std::exception &t)
											{
												
												if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
												{
													continue;
												}

											}
										}
										
											
												AB = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, 5, TableS, Order, MinisterOnTable[i].MinisterThinking.Row, MinisterOnTable[i].MinisterThinking.Column);
												//If there is kish or kshachamaz Order.
												if (AB->Check(TableS, Order))
												{
													//When Order is Gray.
													if (Order == 1)
													{
														//Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
														if (AB->CheckGray)
														{
															continue;
														}
													}
													else
													{
														//Continue when CheckBrown and AStarGreadyFirstSearch. 
														if (AB->CheckBrown)
														{
															continue;
														}
													}
												
												

										
										RW5 = i;
										CL5 = k;
										Ki5 = j;
										RW1 = -1;
										CL1 = -1;
										Ki1 = -1;
										RW2 = -1;
										CL2 = -1;
										Ki2 = -1;
										RW3 = -1;
										CL3 = -1;
										Ki3 = -1;
										RW4 = -1;
										CL4 = -1;
										Ki4 = -1;
										RW6 = -1;
										CL6 = -1;
										Ki6 = -1;
										MaxLess5 = MinisterOnTable[RW5].MinisterThinking.NumberOfPenalties;
										if (MaxLess5 > MaxLess1)
										{
											MaxLess1 = -1;
										}
										if (MaxLess5 > MaxLess2)
										{
											MaxLess2 = -1;
										}
										if (MaxLess5 > MaxLess3)
										{
											MaxLess3 = -1;
										}
										if (MaxLess5 > MaxLess4)
										{
											MaxLess4 = -1;
										}
										if (MaxLess5 > MaxLess6)
										{
											MaxLess6 = -1;
										}
										if (AStarGreedyi == 1)
										{
											//autoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (OO)
											{
												if (Order == 1)
												{
													OutPut = L"\r\nChess Huristic Minister By Bob!";
													//THIS.RefreshBoxText();
												}
												else //If Order is Brown.
												{
													OutPut = L"\r\nChess Huristic Minister By Alice!";
													//THIS.RefreshBoxText();
												}
											}
											//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (On)
											{
												AllDraw::LastRow = MinisterOnTable[i].MinisterThinking.Row;
												AllDraw::LastColumn = MinisterOnTable[i].MinisterThinking.Column;
												AllDraw::NextRow = (MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0]);
												AllDraw::NextColumn =( MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1]);
											}

											(Act) = true;
											Less = MinisterOnTable[i].MinisterThinking.NumberOfPenalties;
											TableHuristic = MinisterOnTable[i].MinisterThinking.TableListMinister[j];

										}
									}
									else //Set Table and Huristic Value and Syntax.
									{
										//try
										{
											if (AStarGreedyi == 1)
											{
												//TakeRoot.Pointer = this;
												//Found of Max Non Probable Movments.
												Founded.clear();
												double LessB = -DBL_MAX;
												;
												BeginIndexFoundingMaxLessofMaxList(0, Founded, LessB);
												RW5 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0])]);
												CL5 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0]) + 1]);
												Ki5 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0]) + 2]);
												if (Founded != MaxMinisterFounded)
												{
													continue;
												}

												//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
												//lock (On)
												{
													AllDraw::LastRow = MinisterOnTable[RW5].MinisterThinking.Row;
													AllDraw::LastColumn = MinisterOnTable[RW5].MinisterThinking.Column;
													AllDraw::NextRow = (MinisterOnTable[RW5].MinisterThinking.RowColumnMinister[j][0]);
													AllDraw::NextColumn =( MinisterOnTable[RW5].MinisterThinking.RowColumnMinister[j][1]);
												}
												(Act) = true;
												Less = MinisterOnTable[RW5].MinisterThinking.ReturnHuristic(RW5, Ki5, Order, false);
												TableHuristic = MinisterOnTable[RW5].MinisterThinking.TableListMinister[Ki5];
												//autoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
												//lock (OO)
												{
													if (Order == 1)
													{
														OutPut = L"\r\nChess Huristic Sodier By Bob!";
														//THIS.RefreshBoxText();
													}
													else //If Order is Brown.
													{
														OutPut = L"\r\nChess Huristic Sodier By Alice!";
														//THIS.RefreshBoxText();
													}
												}
											}
										}
										//catch(std::exception &t)
										{
											
										}
									}
								}
							}
							//catch(std::exception &t)
							{
								
							}
						}
					}
					//catch(std::exception &t)
					{
						
					}
				}
				//try
				{
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
				}
				//catch(std::exception &t)
				{
					
				}

				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
			}
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;

			for (i = KingMidle; i < KingHigh; i++)
			{
				for (int k = 0; k < AllDraw::KingMovments; k++)
				{
					//try
					{
						for (j = 0;(KingOnTable != nullptr)  && (&(KingOnTable[i]) != nullptr) &&(KingOnTable != nullptr)  && (&(KingOnTable[i]) != nullptr) && (&(KingOnTable[i].KingThinking) != nullptr) && ((&(KingOnTable[i].KingThinking) != nullptr)) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
						{
							//try
							{
								//////if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT)
								//    if (KingOnTable[i].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() == 0)
								//        continue;
								int CDummy = ChessRules::CurrentOrder;
								int COrder = Order;
								//try
								{
									ChessRules::CurrentOrder *= -1;
									Order *= -1;
									Do = 0;
									if (UsePenaltyRegardMechnisamT)
									{
										for (int ij = 0; ij < KingOnTable[i].KingThinking.AStarGreedy.size() - 1; ij++)
										{
											KingOnTable[i].KingThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, Do, KingOnTable[i].KingThinking.AStarGreedy[ij]);
										}
										Order = COrder;
										ChessRules::CurrentOrder = CDummy;
										ToCheckMate = -1;
										ForCheckMate = -1;
										AA = IsToCheckMateHasLessDeeperThanForCheckMate( Order, ToCheckMate, ForCheckMate, 0);
										if (Do == -1)
										{
											continue;
										}
									}

								}
								//catch(std::exception &tt)
								{
									
								}
								Order = COrder;
								ChessRules::CurrentOrder = CDummy;
								//if (AllDraw::OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
								//)
								if ((KingOnTable[i].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() != 0 && KingOnTable[i].KingThinking.PenaltyRegardListKing[j].IsRewardAction() == 1 && AStarGreedyi == 1) || Do == 1 || AA)
								{

									//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (On)
									{
										AllDraw::LastRow = KingOnTable[i].KingThinking.Row;
										AllDraw::LastColumn = KingOnTable[i].KingThinking.Column;
										AllDraw::NextRow = (KingOnTable[i].KingThinking.RowColumnKing[j][0]);
										AllDraw::NextColumn =( KingOnTable[i].KingThinking.RowColumnKing[j][1]);


										(Act) = true;
										Less = KingOnTable[i].KingThinking.NumberOfPenalties;
									}
									TableHuristic = KingOnTable[i].KingThinking.TableListKing[j];
									RegardOccurred = true;
									//if (Do == 1 || AA)
									//return TableHuristic;
									continue;
								}
								//autool = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								//lock (ol)
								{

									//When There is No Movments in Such Order Enemy continue.
									if (Order != AllDraw::OrderPlate)
									{
										if (KingOnTable[i].KingThinking.NumberOfPenalties < Less)
										{
											continue;
										}
									}


									//When There is greater Huristic Movments.
									if (KingOnTable[i].KingThinking.NumberOfPenalties < Less)
									{
									//retrive table of current huristic.


										//retrive table of current huristic.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = KingOnTable[i].KingThinking.TableListKing[j];
										int **TableS = KingOnTable[i].KingThinking.TableListKing[j];
										//checked for Legal Movments ArgumentOutOfRangeException curnt game.
										if (DynamicAStarGreedytPrograming && !CurrentTableHuristic && AStarGreedyi == 1)
										{
											//try
											{
												if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
												{
													continue;
												}
											}
											//catch(std::exception &t)
											{
												
												if (!IsEnemyThingsinStable(TableS, AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
												{
													continue;
												}

											}

										}
										//When there is not Penalty regard mechanism.
										//if (!UsePenaltyRegardMechnisamT)
										{
											AB = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, 6, TableS, Order, KingOnTable[i].KingThinking.Row, KingOnTable[i].KingThinking.Column);
											//If there is kish or kshachamaz Order.
											if (AB->Check(TableS, Order))
											{
												//When Order is Gray.
												if (Order == 1)
												{
													//Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
													if (AB->CheckGray)
													{
														continue;
													}
												}
												else
												{
													//Continue when CheckBrown and AStarGreadyFirstSearch. 
													if (AB->CheckBrown)
													{
														continue;
													}
												}
											}
											else
											{

											}


										}
										RW6 = i;
										CL6 = k;
										Ki6 = j;
										RW1 = -1;
										CL1 = -1;
										Ki1 = -1;
										RW2 = -1;
										CL2 = -1;
										Ki2 = -1;
										RW3 = -1;
										CL3 = -1;
										Ki3 = -1;
										RW4 = -1;
										CL4 = -1;
										Ki4 = -1;
										RW5 = -1;
										CL5 = -1;
										Ki5 = -1;
										MaxLess6 = (KingOnTable[RW6].KingThinking.NumberOfPenalties);
										if (MaxLess6 > MaxLess1)
										{
											MaxLess1 = -1;
										}
										if (MaxLess6 > MaxLess2)
										{
											MaxLess2 = -1;
										}
										if (MaxLess6 > MaxLess3)
										{
											MaxLess3 = -1;
										}
										if (MaxLess6 > MaxLess4)
										{
											MaxLess4 = -1;
										}
										if (MaxLess6 > MaxLess5)
										{
											MaxLess5 = -1;
										}
										if (AStarGreedyi == 1)
										{
											//autoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (OO)
											{
												if (Order == 1)
												{
													OutPut = L"\r\nChess Huristic King By Bob!";
													//THIS.RefreshBoxText();
												}
												else //If Order is Brown.
												{
													OutPut = L"\r\nChess Huristic King By Alice!";
													//THIS.RefreshBoxText();
												}
											}
											//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											//lock (On)
											{
												AllDraw::LastRow = KingOnTable[i].KingThinking.Row;
												AllDraw::LastColumn = KingOnTable[i].KingThinking.Column;
												AllDraw::NextRow = (KingOnTable[i].KingThinking.RowColumnKing[j][0]);
												AllDraw::NextColumn =( KingOnTable[i].KingThinking.RowColumnKing[j][1]);
											}

											(Act) = true;
											Less = KingOnTable[i].KingThinking.NumberOfPenalties;
											TableHuristic = KingOnTable[i].KingThinking.TableListKing[j];

										}
									}
									else //Set Table and Huristic Value and Syntax.
									{
										//try
										{
											if (AStarGreedyi == 1)
											{
												//TakeRoot.Pointer = this;
												//Found of Max Non Probable Movments.
												Founded.clear();
												double LessB = -DBL_MAX;
												;
												BeginIndexFoundingMaxLessofMaxList(0, Founded, LessB);
												if (Founded[0] != 1)
												{
													continue;
												}
												RW6 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0])]);
												CL6 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0]) + 1]);
												Ki6 = static_cast<int>(MaxHuristicAStarGreedytBackWard[static_cast<int>(Founded[0]) + 2]);
												if (Founded[0] != MaxKingFounded)
												{
													continue;
												}

												//autoOn = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
												//lock (On)
												{
													AllDraw::LastRow = KingOnTable[RW6].KingThinking.Row;
													AllDraw::LastColumn = KingOnTable[RW6].KingThinking.Column;
													AllDraw::NextRow = (KingOnTable[RW6].KingThinking.RowColumnKing[j][0]);
													AllDraw::NextColumn =( KingOnTable[RW6].KingThinking.RowColumnKing[j][1]);
												}

												(Act) = true;
												Less = KingOnTable[RW6].KingThinking.ReturnHuristic(RW6, Ki6, Order, false);
												TableHuristic = KingOnTable[RW6].KingThinking.TableListKing[Ki6];
												//autoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
												//lock (OO)
												{
													if (Order == 1)
													{
														OutPut = L"\r\nChess Huristic Sodier By Bob!";
														//THIS.RefreshBoxText();
													}
													else //If Order is Brown.
													{
														OutPut = L"\r\nChess Huristic Sodier By Alice!";
														//THIS.RefreshBoxText();
													}
												}
											}
										}
										//catch(std::exception &t)
										{
											
										}

									}

									{
									//else
									}
								}
							}
							//catch(std::exception &t)
							{
								
							}
						}
					}
					//catch(std::exception &t)
					{
						
					}
				}
				//try
				{
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
				}
				//catch(std::exception &t)
				{
					
				}

				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
			}
			return TableHuristic;
		}
	}
	}
	*/
int ** AllDraw::HuristicAStarGreedySearch(int AStarGreedyi, int a, int Order, bool CurrentTableHuristic)
{

	int **TableHuristic;

	AStarGreedyi++;
	int DummyOrder = Order;
	int DummyCurrentOrder = ChessRules::CurrentOrder;
	//Initiate For Dynamic Backward Current AStarGreedyi Non Minus Founded Max Movments Detection Global Variables.
	std::vector<double> Founded = std::vector<double>();
	//Initiateing Indicating Huristic Multiple Same Value Best Found of Movments.
	MaxLess1 = -1;
	MaxLess2 = -1;
	MaxLess3 = -1;
	MaxLess4 = -1;
	MaxLess5 = -1;
	MaxLess6 = -1;
	RW1 = -1;
	CL1 = -1;
	Ki1 = -1;
	RW2 = -1;
	CL2 = -1;
	Ki2 = -1;
	RW3 = -1;
	CL3 = -1;
	Ki3 = -1;
	RW4 = -1;
	CL4 = -1;
	Ki4 = -1;
	RW5 = -1;
	CL5 = -1;
	Ki5 = -1;
	RW6 = -1;
	CL6 = -1;
	Ki6 = -1;

	double *BacWard = new double[25];


	if (AStarGreedyi > MaxAStarGreedy)
		return TableHuristic;


	bool Act = false;

	if (Order == 1)
		TableHuristic = HuristicAStarGreadySearchGray(AStarGreedyi, a, Order, CurrentTableHuristic, Act);
	else
		TableHuristic = HuristicAStarGreadySearchBrown(AStarGreedyi, a, Order, CurrentTableHuristic, Act);

	Order = DummyOrder;
	ChessRules::CurrentOrder = DummyCurrentOrder;
	//Store In Local Variable and Dynamic Purpose Proccessing.
	//Every Non Minuse Non Idept in List Has Gretest Max Order.
	//Is Desired of Idept Oner Best Movments.
	BacWard[0] = AStarGreedyi;
	BacWard[1] = MaxLess1;
	BacWard[2] = RW1;
	BacWard[3] = RW1;
	BacWard[4] = Ki1;


	BacWard[5] = MaxLess2;
	BacWard[6] = RW2;
	BacWard[7] = RW2;
	BacWard[8] = Ki2;

	BacWard[9] = MaxLess3;
	BacWard[10] = RW3;
	BacWard[11] = RW3;
	BacWard[12] = Ki3;

	BacWard[13] = MaxLess4;
	BacWard[14] = RW4;
	BacWard[15] = RW4;
	BacWard[16] = Ki4;

	BacWard[17] = MaxLess5;
	BacWard[18] = RW5;
	BacWard[19] = RW5;
	BacWard[20] = Ki5;

	BacWard[21] = MaxLess6;
	BacWard[22] = RW6;
	BacWard[23] = RW6;
	BacWard[24] = Ki6;

	//We Have Information of Maximum of Huristic in Each Level and Table.
	MaxHuristicAStarGreedytBackWard.push_back(BacWard);
	MaxHuristicAStarGreedytBackWardTable.push_back(TableHuristic);

	Founded.clear();
	//If Found retrun table.
	if (Act)
	{
		return TableHuristic;
	}
	//Return what found table.
	return TableHuristic;

}

	/*int ** AllDraw::HuristicAStarGreedySearchPenalties(int AStarGreedyi, int a, int Order, bool CurrentTableHuristic)
	{
		//autoO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		//lock (O)
		{
			int **TableHuristic;

			AStarGreedyi++;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			//Initiate For Dynamic Backward Current AStarGreedyi Non Minus Founded Max Movments Detection Global Variables.
			std::vector<double> Founded = std::vector<double>();
			//Initiateing Indicating Huristic Multiple Same Value Best Found of Movments.
			MaxLess1 = -1;
			MaxLess2 = -1;
			MaxLess3 = -1;
			MaxLess4 = -1;
			MaxLess5 = -1;
			MaxLess6 = -1;
			RW1 = -1;
			CL1 = -1;
			Ki1 = -1;
			RW2 = -1;
			CL2 = -1;
			Ki2 = -1;
			RW3 = -1;
			CL3 = -1;
			Ki3 = -1;
			RW4 = -1;
			CL4 = -1;
			Ki4 = -1;
			RW5 = -1;
			CL5 = -1;
			Ki5 = -1;
			RW6 = -1;
			CL6 = -1;
			Ki6 = -1;

			double BacWard[25];
			//autoOmm = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			//lock (Omm)
			{
				if (AStarGreedyi > MaxAStarGreedy)
				{
					return TableHuristic;
				}
			}
			bool Act = false;
			if (Order == 1)
			{
				TableHuristic = HuristicAStarGreadySearchPenalties(AStarGreedyi, a, Order, CurrentTableHuristic, Act);
			}
			else
			{
				TableHuristic = BrownHuristicAStarGreaedySearchPenalites(AStarGreedyi, a, Order, CurrentTableHuristic, Act);
			}

			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			//Store In Local Variable and Dynamic Purpose Proccessing.
			//Every Non Minuse Non Idept in List Has Gretest Max Order.
			//Is Desired of Idept Oner Best Movments.
			BacWard = AStarGreedyi;

			BacWard[1] = MaxLess1;
			BacWard[2] = RW1;
			BacWard[3] = RW1;
			BacWard[4] = Ki1;


			BacWard[5] = MaxLess2;
			BacWard[6] = RW2;
			BacWard[7] = RW2;
			BacWard[8] = Ki2;

			BacWard[9] = MaxLess3;
			BacWard[10] = RW3;
			BacWard[11] = RW3;
			BacWard[12] = Ki3;

			BacWard[13] = MaxLess4;
			BacWard[14] = RW4;
			BacWard[15] = RW4;
			BacWard[16] = Ki4;

			BacWard[17] = MaxLess5;
			BacWard[18] = RW5;
			BacWard[19] = RW5;
			BacWard[20] = Ki5;

			BacWard[21] = MaxLess6;
			BacWard[22] = RW6;
			BacWard[23] = RW6;
			BacWard[24] = Ki6;

			//We Have Information of Maximum of Huristic in Each Level and Table.
			MaxHuristicAStarGreedytBackWard.push_back(BacWard);
			MaxHuristicAStarGreedytBackWardTable.push_back(TableHuristic);

			Founded.clear();
			//If Found retrun table.
			if (Act)
			{
				return TableHuristic;
			}
			//Return what found table.
			return TableHuristic;
		}
	}
	*/
/*
void AllDraw::InitiateGenetic(int ii, int jj, int a, int **Table, int Order, bool TB)
{
	//Initiate Local and Global Variables.
	int Current = ChessRules::CurrentOrder;
	int DummyOrder = Order;

	TableList.push_back(Table);


	ThinkingChess::NotSolvedKingDanger = false;
	LoopHuristicIndex = 0;
	//For One time.
	for (int i = 0; i < 1; i++)
	{
		//If Order is Gray.
		if (Order == 1)
		{
			OutPut = L"\r\nChess Genetic By Bob!";
			//THIS.RefreshBoxText();
		}
		else //If Order is Brown.
		{
			OutPut = L"\r\nChess Genetic By Alice!";
			//THIS.RefreshBoxText();

		}

		//Initiate Local Variables.
		int TablInit[8][8];
		if (Order == 1)
		{
			a = 1;
		}
		else
		{
			a = -1;
		}
		int In = 0;
		//Found Of Random Movments.
		do
		{
			if (Order == 1)
			{
				In = (rand() % 9);
			}
			else
			{
				In = (rand() % 9) + 8;
			}
		} while (SolderesOnTable[In] == nullptr);


		if (Order == 1)
		{
			OutPut = std::wstring(L"\r\nGenetic Algorithm Begin AStarGreedy ") + StringConverterHelper::toString(i) + std::wstring(L" By Bob!");
			//THIS.RefreshBoxText();
		}
		else //If Order is Brown.
		{
			OutPut = std::wstring(L"\r\nGenetic Algirithm Begin AStarGreedy ") + StringConverterHelper::toString(i) + std::wstring(L" By Alice!");
			//THIS.RefreshBoxText();

		}

		//Found Of Genetic Algorithm Movments By GeneticAlgorithm Call Objectsand Method.
		ChessGeneticAlgorithm *R = new ChessGeneticAlgorithm(MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
		//Found Table.
		int **Tab = R->GenerateTable(TableListAction, 0, Order);
		if (Order == 1)
		{
			OutPut = std::wstring(L"\r\nGenetic Algorithm Finsished AStarGreedy ") + StringConverterHelper::toString(i) + std::wstring(L" By Bob!");
			//THIS.RefreshBoxText();
		}
		else //If Order is Brown.
		{
			OutPut = std::wstring(L"\r\nGenetic Algirithm Finished AStarGreedy ") + StringConverterHelper::toString(i) + std::wstring(L" By Alice!");
			//THIS.RefreshBoxText();

		}
		//If Table Found.
		if (Tab != nullptr)
		{
			//Construct a Clone Copy of Table.
			for (int iii = 0; iii < 8; iii++)
			{
				for (int jjj = 0; jjj < 8; jjj++)
				{
					TablInit[iii][jjj] = Tab[iii][jjj];
				}
			}
			//Initiate a Table.
			Table = new int*[8]; for (int ii = 0; ii < 8; ii++)Table[ii] - new int[8];
			//Construct a Clone Copy of Table.
			for (int iii = 0; iii < 8; iii++)
			{
				for (int jjj = 0; jjj < 8; jjj++)
				{
					Table[iii][jjj] = TablInit[iii][jjj];
				}
			}
			//Initiate Local and Global Varibales.
			//TableList.push_back(TablInit);
			ClList.push_back(CL);
			RWList.push_back(RW);
			KiList.push_back(Ki);
			// Order = Order * -1;
			// ChessRules::CurrentOrder = Order;
			AStarGreedyInt++;
			//return;

		}
	}
	//Determination of CheckMate Consideration.
	(new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, 1, Table, Order, -1, -1))->CheckMate(Table, Order);

	//Reconstruction of Order Global Varibales.
	Order = DummyOrder;
	ChessRules::CurrentOrder = Current;



}
*/
void AllDraw::InitiateAStarGreedytOneNode(int iAStarGreedy, int ii, int jj, int a, int **Tab, int Order, int iIndex, int KindIndex, int LeafAStarGreedy)
{

	SetObjectNumbers(Tab);
	//List<Task> tHA = new List<Task>();
	int **Table = new int*[8];;
	for (int iii = 0; iii < 8; iii++)
		Table[iii] = new int[8];
	for (int iii = 0; iii < 8; iii++)
	{
		for (int jjj = 0; jjj < 8; jjj++)
		{
			Table[iii][jjj] = Tab[iii][jjj];
		}
	}

	ThinkingChess::BeginThread = 0;
	ThinkingChess::EndThread = 0;
	//Initiate of global Variables Byte Local Variables.
	int DummyOrder = int();
	DummyOrder = Order;
	int DummyCurrentOrder = 0;
	DummyCurrentOrder = ChessRules::CurrentOrder;

	int TablInit[8][8];
	if (Order == 1)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}
	int j = 0;
	if (iAStarGreedy >= MaxAStarGreedy)
	{
		return;
	}

	iAStarGreedy++;

	//Initiate Of Local Variables.

//If Order is Gray.
	if (Order == 1)
	{
		//For Gray Soldeirs Objects. 
		//                    for (i = 0; i < SodierMidle; i++)
		if (KindIndex == 1)
		{
			//try
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//If Solders Not Exist Continue and Traversal Back.
				//If There is no Thinking Movments on Current Object  


				bool ASS = false;
				//autoOOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (OOOAAA)
				{
					ASS = AllDraw::Blitz;
				}
				if (!ASS)
				{
					//Thinking of Gray Solder Operation.
					SolderesOnTable[iIndex].SoldierThinking.ThinkingBegin = true;
					SolderesOnTable[iIndex].SoldierThinking.ThinkingFinished = false;
					SolderesOnTable[iIndex].SoldierThinking.Thinking(SolderesOnTable[iIndex].LoseOcuuredatChiled, SolderesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(SolderesOnTable[iIndex].SoldierThinking.Thinking));
							SolderesOnTable[iIndex].SoldierThinking.t.Start();
							if (SolderesOnTable[iIndex].SoldierThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(SolderesOnTable[iIndex].SoldierThinking.t); } }*/
				}
				else if (ASS)
				{
					//If There is A Soldeir Movments.                                   

						//Thinking of Gray Soldeir Operations.
					SolderesOnTable[iIndex].SoldierThinking.ThinkingBegin = true;
					SolderesOnTable[iIndex].SoldierThinking.ThinkingFinished = false;
					SolderesOnTable[iIndex].SoldierThinking.Thinking(SolderesOnTable[iIndex].LoseOcuuredatChiled, SolderesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(SolderesOnTable[iIndex].SoldierThinking.Thinking));
							SolderesOnTable[iIndex].SoldierThinking.t.Start();
							if (SolderesOnTable[iIndex].SoldierThinking.t != null) { Object tttt = new Object(); //lock (tttt)
									{ tH.push_back(SolderesOnTable[iIndex].SoldierThinking.t); } }*/
				}
			}
			//catch(std::exception &t)
			{
				//SolderesOnTable[iIndex] = null;

			}
		}
		//Progressing.
		//For All Gray Elephant Objects.

		if (KindIndex == 2)
		{
			//try
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//Ignore of Non Exist Current Elephant Gray Objects.
				bool ASS = false;
				//autoOOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (OOOAAA)
				{
					ASS = AllDraw::Blitz;
				}
				if (!ASS)
				{
					//Operational Thinking Gray Elephant. 
					ElephantOnTable[iIndex].ElefantThinking.ThinkingBegin = true;
					ElephantOnTable[iIndex].ElefantThinking.ThinkingFinished = false;
					ElephantOnTable[iIndex].ElefantThinking.Thinking(ElephantOnTable[iIndex].LoseOcuuredatChiled, ElephantOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(ElephantOnTable[iIndex].ElefantThinking.Thinking));
							ElephantOnTable[iIndex].ElefantThinking.t.Start();
							if (ElephantOnTable[iIndex].ElefantThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(ElephantOnTable[iIndex].ElefantThinking.t); } }*/
				} //If There is Movment Thinking Gary Elphant Object List.
				else if (ASS)
				{
					//For Every Gray Elephant Thinking Movments.
					//Gray Elephant Object Thinking Operations.
					ElephantOnTable[iIndex].ElefantThinking.ThinkingBegin = true;
					ElephantOnTable[iIndex].ElefantThinking.ThinkingFinished = false;
					ElephantOnTable[iIndex].ElefantThinking.Thinking(ElephantOnTable[iIndex].LoseOcuuredatChiled, ElephantOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(ElephantOnTable[iIndex].ElefantThinking.Thinking));
							ElephantOnTable[iIndex].ElefantThinking.t.Start();
							if (ElephantOnTable[iIndex].ElefantThinking.t != null) { Object tttt = new Object(); //lock (tttt)
									{ tH.push_back(ElephantOnTable[iIndex].ElefantThinking.t); } }*/
				}
			}
			//catch(std::exception &t)
			{

			}
		}
		//Progressing.

		//For All Gray Hourse Objects.
		if (KindIndex == 3)
		{
			//try
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;

				bool ASS = false;
				//autoOOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (OOOAAA)
				{
					ASS = AllDraw::Blitz;
				}
				if (!ASS)
				{
					//Thinking of Gray Hourse Oprational.
					HoursesOnTable[iIndex].HourseThinking.ThinkingBegin = true;
					HoursesOnTable[iIndex].HourseThinking.ThinkingFinished = false;
					HoursesOnTable[iIndex].HourseThinking.Thinking(HoursesOnTable[iIndex].LoseOcuuredatChiled, HoursesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(HoursesOnTable[iIndex].HourseThinking.Thinking));
							HoursesOnTable[iIndex].HourseThinking.t.Start();
							if (HoursesOnTable[iIndex].HourseThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(HoursesOnTable[iIndex].HourseThinking.t); } }*/
				}
				else if (ASS) //If Table List Exist int The Thinking.
				{

					//Thinking Operation of Gray Hourse.
					HoursesOnTable[iIndex].HourseThinking.TableT = HoursesOnTable[iIndex].HourseThinking.TableListHourse[j];
					HoursesOnTable[iIndex].HourseThinking.ThinkingBegin = true;
					HoursesOnTable[iIndex].HourseThinking.ThinkingFinished = false;
					HoursesOnTable[iIndex].HourseThinking.Thinking(HoursesOnTable[iIndex].LoseOcuuredatChiled, HoursesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(HoursesOnTable[iIndex].HourseThinking.Thinking));
							HoursesOnTable[iIndex].HourseThinking.t.Start();
							if (HoursesOnTable[iIndex].HourseThinking.t != null) { Object tttt = new Object(); //lock (tttt)
									{ tH.push_back(HoursesOnTable[iIndex].HourseThinking.t); } }*/
				}
			}
			//catch(std::exception &t)
			{

			}
		}
		//Progressing.


		if (KindIndex == 4)
		{
			//try
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				bool ASS = false;
				//autoOOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (OOOAAA)
				{
					ASS = AllDraw::Blitz;
				}
				if (!ASS)
				{
					//When There is Possible Thinking Castle of Gray Table
					//Thinking of Gray Castles Operational.
					CastlesOnTable[iIndex].CastleThinking.ThinkingBegin = true;
					CastlesOnTable[iIndex].CastleThinking.ThinkingFinished = false;
					CastlesOnTable[iIndex].CastleThinking.Thinking(CastlesOnTable[iIndex].LoseOcuuredatChiled, CastlesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(CastlesOnTable[iIndex].CastleThinking.Thinking));
							CastlesOnTable[iIndex].CastleThinking.t.Start();
							if (CastlesOnTable[iIndex].CastleThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(CastlesOnTable[iIndex].CastleThinking.t); } }*/

				}
				else if (ASS)
				{
					//When There is Possible Thinking Castle of Gray Table
					//Thinking of Gray Castles  Objective Movments.
					CastlesOnTable[iIndex].CastleThinking.TableT = CastlesOnTable[iIndex].CastleThinking.TableListCastle[j];
					CastlesOnTable[iIndex].CastleThinking.ThinkingBegin = true;
					CastlesOnTable[iIndex].CastleThinking.ThinkingFinished = false;
					CastlesOnTable[iIndex].CastleThinking.Thinking(CastlesOnTable[iIndex].LoseOcuuredatChiled, CastlesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(CastlesOnTable[iIndex].CastleThinking.Thinking));
							CastlesOnTable[iIndex].CastleThinking.t.Start();
							if (CastlesOnTable[iIndex].CastleThinking.t != null) { Object tttt = new Object(); //lock (tttt)
									{ tH.push_back(CastlesOnTable[iIndex].CastleThinking.t); } }*/
				}
			}
			//catch(std::exception &t)
			{

			}
		}
		if (KindIndex == 5)
		{
			//try
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				bool ASS = false;
				//autoOOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (OOOAAA)
				{
					ASS = AllDraw::Blitz;
				}
				if (!ASS)
				{ //When There is Table Gray Minister Count of Thinking.
				 //Thinking of Gray Minister Operational.
					MinisterOnTable[iIndex].MinisterThinking.ThinkingBegin = true;
					MinisterOnTable[iIndex].MinisterThinking.ThinkingFinished = false;
					MinisterOnTable[iIndex].MinisterThinking.Thinking(HoursesOnTable[iIndex].LoseOcuuredatChiled, HoursesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(MinisterOnTable[iIndex].MinisterThinking.Thinking));
							MinisterOnTable[iIndex].MinisterThinking.t.Start();
							if (MinisterOnTable[iIndex].MinisterThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(MinisterOnTable[iIndex].MinisterThinking.t); } }*/
				}
				else if (ASS) //When There is Table Gray Minister Count of Thinking.
				{
					//Thinking.
					MinisterOnTable[iIndex].Table = MinisterOnTable[iIndex].MinisterThinking.TableListMinister[j];
					MinisterOnTable[iIndex].MinisterThinking.ThinkingBegin = true;
					MinisterOnTable[iIndex].MinisterThinking.ThinkingFinished = false;
					MinisterOnTable[iIndex].MinisterThinking.Thinking(HoursesOnTable[iIndex].LoseOcuuredatChiled, HoursesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(MinisterOnTable[iIndex].MinisterThinking.Thinking));
							MinisterOnTable[iIndex].MinisterThinking.t.Start();
							if (MinisterOnTable[iIndex].MinisterThinking.t != null) { Object tttt = new Object(); //lock (tttt)
									{ tH.push_back(MinisterOnTable[iIndex].MinisterThinking.t); } }*/
				}
			}
			//catch(std::exception &t)
			{

			}
		}

		if (KindIndex == 6)
		{

			//try
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				bool ASS = false;
				//autoOOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (OOOAAA)
				{
					ASS = AllDraw::Blitz;
				}
				if (!ASS)
				{ //When Thinking Gray King Count of Existing Operations.
				 //Thinking Of Gray King Operatins.
					KingOnTable[iIndex].KingThinking.ThinkingBegin = true;
					KingOnTable[iIndex].KingThinking.ThinkingFinished = false;
					KingOnTable[iIndex].KingThinking.Thinking(HoursesOnTable[iIndex].LoseOcuuredatChiled, HoursesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(KingOnTable[iIndex].KingThinking.Thinking));
							KingOnTable[iIndex].KingThinking.t.Start();
							if (KingOnTable[iIndex].KingThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(KingOnTable[iIndex].KingThinking.t); } }*/
				}
				else if (ASS) //When Thinking Gray King Count of Existing Operations.
				{
					//Gray King Thinking Operations.                                        
					KingOnTable[iIndex].KingThinking.ThinkingBegin = true;
					KingOnTable[iIndex].KingThinking.ThinkingFinished = false;
					KingOnTable[iIndex].KingThinking.Thinking(HoursesOnTable[iIndex].LoseOcuuredatChiled, HoursesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(KingOnTable[iIndex].KingThinking.Thinking));
							KingOnTable[iIndex].KingThinking.t.Start();
							if (KingOnTable[iIndex].KingThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(KingOnTable[iIndex].KingThinking.t); } }*/
				}
			}
			//catch(std::exception &t)
			{
				// KingOnTable[iIndex] = null;

			}
		}
	}
	else //Brown Order Considarations.
	{

		if (KindIndex == -1)
		{
			//try
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				bool ASS = false;
				//autoOOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (OOOAAA)
				{
					ASS = AllDraw::Blitz;
				}
				if (!ASS) //When There is Current Brown Existing Objective Thinking Movments.
				{
					//Wheen Brown King Object There is Not Continue Traversal Back.
					//Thinking Operations of Brown Current Objects.
					SolderesOnTable[iIndex].SoldierThinking.ThinkingBegin = true;
					SolderesOnTable[iIndex].SoldierThinking.ThinkingFinished = false;
					SolderesOnTable[iIndex].SoldierThinking.Thinking(SolderesOnTable[iIndex].LoseOcuuredatChiled, SolderesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(SolderesOnTable[iIndex].SoldierThinking.Thinking));
							SolderesOnTable[iIndex].SoldierThinking.t.Start();
							if (SolderesOnTable[iIndex].SoldierThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(SolderesOnTable[iIndex].SoldierThinking.t); } }*/

				}

				else if (ASS) //When There is Current Brown Existing Objective Thinking Movments.
				{
					//Thinking of Thinking Brown CurrentTable Objective Operations.
					SolderesOnTable[iIndex].SoldierThinking.ThinkingBegin = true;
					SolderesOnTable[iIndex].SoldierThinking.ThinkingFinished = false;
					SolderesOnTable[iIndex].SoldierThinking.Thinking(SolderesOnTable[iIndex].LoseOcuuredatChiled, SolderesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(SolderesOnTable[iIndex].SoldierThinking.Thinking));
							SolderesOnTable[iIndex].SoldierThinking.t.Start();
							if (SolderesOnTable[iIndex].SoldierThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(SolderesOnTable[iIndex].SoldierThinking.t); } }*/

				}
			}
			//catch(std::exception &t)
			{

			}
		}
		if (KindIndex == -2)
		{
			//try
			{
				bool ASS = false;
				//autoOOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (OOOAAA)
				{
					ASS = AllDraw::Blitz;
				}
				if (!ASS)
				{ //When There is Current Brown Existing Objective Thinking Movments.
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					//Thinking Operations of Brown Current Objects.
					ElephantOnTable[iIndex].ElefantThinking.ThinkingBegin = true;
					ElephantOnTable[iIndex].ElefantThinking.ThinkingFinished = false;
					ElephantOnTable[iIndex].ElefantThinking.Thinking(ElephantOnTable[iIndex].LoseOcuuredatChiled, ElephantOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(ElephantOnTable[iIndex].ElefantThinking.Thinking));
							ElephantOnTable[iIndex].ElefantThinking.t.Start();
							if (ElephantOnTable[iIndex].ElefantThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(ElephantOnTable[iIndex].ElefantThinking.t); } }*/
				}
				else if (ASS) //When There is Current Brown Existing Objective Thinking Movments.
				{
					//Inititae Local Varibale By Global Gray Elephant Objects Varibales.
					//Thinking of Thinking Brown CurrentTable Objective Operations.                                                   
					ElephantOnTable[iIndex].ElefantThinking.ThinkingBegin = true;
					ElephantOnTable[iIndex].ElefantThinking.ThinkingFinished = false;
					ElephantOnTable[iIndex].ElefantThinking.Thinking(ElephantOnTable[iIndex].LoseOcuuredatChiled, ElephantOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(ElephantOnTable[iIndex].ElefantThinking.Thinking));
							ElephantOnTable[iIndex].ElefantThinking.t.Start();
							if (ElephantOnTable[iIndex].ElefantThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(ElephantOnTable[iIndex].ElefantThinking.t); } }*/
				}
			}
			//catch(std::exception &t)
			{

			}
		}


		if (KindIndex == -3)
		{
			//try
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				bool ASS = false;
				//autoOOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (OOOAAA)
				{
					ASS = AllDraw::Blitz;
				}
				if (!ASS)
				{ //When There is Current Brown Existing Objective Thinking Movments.
				 //Thinking Operations of Brown Current Objects.
				 //HoursesOnTable[iIndex].HourseThinking.TableT = HoursesOnTable[iIndex].HourseThinking.TableT;
					HoursesOnTable[iIndex].HourseThinking.ThinkingBegin = true;
					HoursesOnTable[iIndex].HourseThinking.ThinkingFinished = false;
					HoursesOnTable[iIndex].HourseThinking.Thinking(HoursesOnTable[iIndex].LoseOcuuredatChiled, HoursesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(HoursesOnTable[iIndex].HourseThinking.Thinking));
							HoursesOnTable[iIndex].HourseThinking.t.Start();
							if (HoursesOnTable[iIndex].HourseThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(HoursesOnTable[iIndex].HourseThinking.t); } }*/

				}
				else if (ASS) //When There is Current Brown Existing Objective Thinking Movments.
				{
					//Thinking of Thinking Brown CurrentTable Objective Operations.                                          SolderesOnTable[iIndex].SoldierThinking.Table = SolderesOnTable[iIndex].SoldierThinking.TableListSolder[j];
					HoursesOnTable[iIndex].HourseThinking.ThinkingBegin = true;
					HoursesOnTable[iIndex].HourseThinking.ThinkingFinished = false;
					HoursesOnTable[iIndex].HourseThinking.Thinking(HoursesOnTable[iIndex].LoseOcuuredatChiled, HoursesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(HoursesOnTable[iIndex].HourseThinking.Thinking));
							HoursesOnTable[iIndex].HourseThinking.t.Start();
							if (HoursesOnTable[iIndex].HourseThinking.t != null) { Object tttt = new Object(); //lock (tttt)
									{ tH.push_back(HoursesOnTable[iIndex].HourseThinking.t); } }*/


				}
			}
			//catch(std::exception &t)
			{

			}
		}
		//Progressing.




		if (KindIndex == -4)
		{
			//try
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				bool ASS = false;
				//autoOOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (OOOAAA)
				{
					ASS = AllDraw::Blitz;
				}
				if (!ASS)
				{ //When There is Current Brown Existing Objective Thinking Movments.
				 //Thinking Operations of Brown Current Objects.
					CastlesOnTable[iIndex].CastleThinking.ThinkingBegin = true;
					CastlesOnTable[iIndex].CastleThinking.ThinkingFinished = false;
					CastlesOnTable[iIndex].CastleThinking.Thinking(CastlesOnTable[iIndex].LoseOcuuredatChiled, CastlesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(CastlesOnTable[iIndex].CastleThinking.Thinking));
							CastlesOnTable[iIndex].CastleThinking.t.Start();
							if (CastlesOnTable[iIndex].CastleThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(CastlesOnTable[iIndex].CastleThinking.t); } }*/
				}
				else if (ASS) //When There is Current Brown Existing Objective Thinking Movments.
				{
					//Thinking of Thinking Brown CurrentTable Objective Operations.        
					CastlesOnTable[iIndex].CastleThinking.ThinkingBegin = true;
					CastlesOnTable[iIndex].CastleThinking.ThinkingFinished = false;
					CastlesOnTable[iIndex].CastleThinking.Thinking(CastlesOnTable[iIndex].LoseOcuuredatChiled, CastlesOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(CastlesOnTable[iIndex].CastleThinking.Thinking));
							CastlesOnTable[iIndex].CastleThinking.t.Start();
							if (CastlesOnTable[iIndex].CastleThinking.t != null) { Object tttt = new Object(); //lock (tttt)
									{ tH.push_back(CastlesOnTable[iIndex].CastleThinking.t); } }*/
				}
			}
			//catch(std::exception &t)
			{

			}
		}

		if (KindIndex == -5)
		{
			//try
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				bool ASS = false;
				//autoOOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (OOOAAA)
				{
					ASS = AllDraw::Blitz;
				}
				if (!ASS)
				{ //When There is Current Brown Existing Objective Thinking Movments.
				 //Thinking Operations of Brown Current Objects.
					MinisterOnTable[iIndex].MinisterThinking.ThinkingBegin = true;
					MinisterOnTable[iIndex].MinisterThinking.ThinkingFinished = false;
					MinisterOnTable[iIndex].MinisterThinking.Thinking(MinisterOnTable[iIndex].LoseOcuuredatChiled, MinisterOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(MinisterOnTable[iIndex].MinisterThinking.Thinking));
							MinisterOnTable[iIndex].MinisterThinking.t.Start();
							if (MinisterOnTable[iIndex].MinisterThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(MinisterOnTable[iIndex].MinisterThinking.t); } }*/
				}
				else if (ASS) //When There is Current Brown Existing Objective Thinking Movments.
				{
					//Thinking of Thinking Brown CurrentTable Objective Operations.                                          SolderesOnTable[iIndex].SoldierThinking.Table = SolderesOnTable[iIndex].SoldierThinking.TableListSolder[j];
					MinisterOnTable[iIndex].MinisterThinking.ThinkingBegin = true;
					MinisterOnTable[iIndex].MinisterThinking.ThinkingFinished = false;
					MinisterOnTable[iIndex].MinisterThinking.Thinking(MinisterOnTable[iIndex].LoseOcuuredatChiled, MinisterOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(MinisterOnTable[iIndex].MinisterThinking.Thinking));
							MinisterOnTable[iIndex].MinisterThinking.t.Start();
							if (MinisterOnTable[iIndex].MinisterThinking.t != null) { Object tttt = new Object(); //lock (tttt)
									{ tH.push_back(MinisterOnTable[iIndex].MinisterThinking.t); } }*/

				}
			}
			//catch(std::exception &t)
			{

			}
		}
		//Progressing.

		if (KindIndex == -6)
		{
			//try
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				bool ASS = false;
				//autoOOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									//lock (OOOAAA)
				{
					ASS = AllDraw::Blitz;
				}
				if (!ASS)
				{ //When There is Current Brown Existing Objective Thinking Movments.
				 //Thinking Operations of Brown Current Objects.
					KingOnTable[iIndex].KingThinking.ThinkingBegin = true;
					KingOnTable[iIndex].KingThinking.ThinkingFinished = false;
					KingOnTable[iIndex].KingThinking.Thinking(KingOnTable[iIndex].LoseOcuuredatChiled, KingOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(KingOnTable[iIndex].KingThinking.Thinking));
							KingOnTable[iIndex].KingThinking.t.Start();
							if (KingOnTable[iIndex].KingThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(KingOnTable[iIndex].KingThinking.t); } }*/

				}
				else if (ASS) //When There is Current Brown Existing Objective Thinking Movments.
				{
					//Thinking of Thinking Brown CurrentTable Objective Operations.       
					KingOnTable[iIndex].KingThinking.TableT = KingOnTable[iIndex].KingThinking.TableListKing[j];
					KingOnTable[iIndex].KingThinking.ThinkingBegin = true;
					KingOnTable[iIndex].KingThinking.ThinkingFinished = false;
					KingOnTable[iIndex].KingThinking.Thinking(KingOnTable[iIndex].LoseOcuuredatChiled, KingOnTable[iIndex].WinOcuuredatChiled); /*.t = new Task(new Action(KingOnTable[iIndex].KingThinking.Thinking));
							KingOnTable[iIndex].KingThinking.t.Start();
							if (KingOnTable[iIndex].KingThinking.t != null) { Object tttt = new Object(); //lock (tttt)
								{ tH.push_back(KingOnTable[iIndex].KingThinking.t); } }*/


				}

			}
			//catch(std::exception &t)
			{
				//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
				delete &KingOnTable[iIndex];

			}
		}

	}


	bool FOUND = false;
	if (KindIndex == 1 || KindIndex == -1)
	{
		SolderesOnTable[iIndex].SoldierThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
		SolderesOnTable[iIndex].SoldierThinking.AStarGreedy[SolderesOnTable[iIndex].SoldierThinking.AStarGreedy.size() - 1].TableList.clear();
		SolderesOnTable[iIndex].SoldierThinking.AStarGreedy[SolderesOnTable[iIndex].SoldierThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(Tab));
		SolderesOnTable[iIndex].SoldierThinking.AStarGreedy[SolderesOnTable[iIndex].SoldierThinking.AStarGreedy.size() - 1].SetRowColumn(0);
		SolderesOnTable[iIndex].SoldierThinking.AStarGreedy[SolderesOnTable[iIndex].SoldierThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, Tab, Order * -1, false, FOUND, LeafAStarGreedy);
	}
	else
	{
		if (KindIndex == 2 || KindIndex == -2)
		{
			ElephantOnTable[iIndex].ElefantThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
			ElephantOnTable[iIndex].ElefantThinking.AStarGreedy[ElephantOnTable[iIndex].ElefantThinking.AStarGreedy.size() - 1].TableList.clear();
			ElephantOnTable[iIndex].ElefantThinking.AStarGreedy[ElephantOnTable[iIndex].ElefantThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(Tab));
			ElephantOnTable[iIndex].ElefantThinking.AStarGreedy[ElephantOnTable[iIndex].ElefantThinking.AStarGreedy.size() - 1].SetRowColumn(0);
			ElephantOnTable[iIndex].ElefantThinking.AStarGreedy[ElephantOnTable[iIndex].ElefantThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, Tab, Order * -1, false, FOUND, LeafAStarGreedy);
		}
		else
		{
			if (KindIndex == 3 || KindIndex == -3)
			{
				HoursesOnTable[iIndex].HourseThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
				HoursesOnTable[iIndex].HourseThinking.AStarGreedy[HoursesOnTable[iIndex].HourseThinking.AStarGreedy.size() - 1].TableList.clear();
				HoursesOnTable[iIndex].HourseThinking.AStarGreedy[HoursesOnTable[iIndex].HourseThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(Tab));
				HoursesOnTable[iIndex].HourseThinking.AStarGreedy[HoursesOnTable[iIndex].HourseThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				HoursesOnTable[iIndex].HourseThinking.AStarGreedy[HoursesOnTable[iIndex].HourseThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, Tab, Order * -1, false, FOUND, LeafAStarGreedy);
			}
			else
			{
				if (KindIndex == 4 || KindIndex == -4)
				{
					CastlesOnTable[iIndex].CastleThinking.AStarGreedy.push_back[new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged)];
					CastlesOnTable[iIndex].CastleThinking.AStarGreedy[CastlesOnTable[iIndex].CastleThinking.AStarGreedy.size() - 1].TableList.clear();
					CastlesOnTable[iIndex].CastleThinking.AStarGreedy[CastlesOnTable[iIndex].CastleThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(Tab));
					CastlesOnTable[iIndex].CastleThinking.AStarGreedy[CastlesOnTable[iIndex].CastleThinking.AStarGreedy.size() - 1].SetRowColumn(0);
					CastlesOnTable[iIndex].CastleThinking.AStarGreedy[CastlesOnTable[iIndex].CastleThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, Tab, Order * -1, false, FOUND, LeafAStarGreedy);
				}
				else
				{
					if (KindIndex == 5 || KindIndex == -5)
					{
						MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
						MinisterOnTable[iIndex].MinisterThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].TableList.clear();
						MinisterOnTable[iIndex].MinisterThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(Tab));
						MinisterOnTable[iIndex].MinisterThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].SetRowColumn(0);
						MinisterOnTable[iIndex].MinisterThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, Tab, Order * -1, false, FOUND, LeafAStarGreedy);
					}
					else
					{
						if (KindIndex == 6 || KindIndex == -6)
						{
							KingOnTable[iIndex].KingThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
							KingOnTable[iIndex].KingThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].TableList.clear();
							KingOnTable[iIndex].KingThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(Tab));
							KingOnTable[iIndex].KingThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].SetRowColumn(0);
							KingOnTable[iIndex].KingThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, Tab, Order * -1, false, FOUND, LeafAStarGreedy);
						}
					}
				}
			}
		}
	}
	//                } 
	Order = DummyOrder;
	ChessRules::CurrentOrder = DummyCurrentOrder;



	Order = DummyOrder;
	ChessRules::CurrentOrder = DummyCurrentOrder;
	
}

int  AllDraw::MaxGrayMidle()
{

	int Tab[6];
	Tab[0] = SodierMidle;
	Tab[1] = ElefantMidle;
	Tab[2] = HourseMidle;
	Tab[3] = CastleMidle;
	Tab[4] = MinisterMidle;
	Tab[5] = KingMidle;
	int Max = 0;
	for (int i = 0; i < 6; i++)
	{
		if (Tab[i] > Max)
		{
			Max = Tab[i];
		}
	}
	return Max;

}


int  AllDraw::MaxBrownHigh()
{

	int Tab[6];
	Tab[0] = SodierHigh;
	Tab[1] = ElefantHigh;
	Tab[2] = HourseHight;
	Tab[3] = CastleHigh;
	Tab[4] = MinisterHigh;
	Tab[5] = KingHigh;
	int Max = 0;
	for (int i = 0; i < 6; i++)
	{
		if (Tab[i] > Max)
		{
			Max = Tab[i];
		}
	}
	return Max;

}


int  AllDraw::MinBrownMidle()
{


	int Tab[6];
	Tab[0] = SodierHigh;
	Tab[1] = ElefantHigh;
	Tab[2] = HourseHight;
	Tab[3] = CastleHigh;
	Tab[4] = MinisterHigh;
	Tab[5] = KingHigh;
	int Min = MaxBrownHigh();
	for (int i = 0; i < 6; i++)
	{
		if (Tab[i] < Min)
		{
			Min = Tab[i];
		}
	}
	return Min;

}



	/*void AllDraw::InitiateAStarGreedytObjectGray(int iii, int jjj, int **Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int **Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{
		for (int i = 0; i < MaxGrayMidle(); i++)
		{
			if (SodierMidle > i)
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//If Solders Not Exist Continue and Traversal Back.
				if (SolderesOnTable != nullptr && ((&(SolderesOnTable[i])) != nullptr))
				{
					//Initiate of Local Variables By Global Objective Gray Current Solder.
					ii = static_cast<int>(SolderesOnTable[i].Row);
					jj = static_cast<int>(SolderesOnTable[i].Column);
					//Construction of Thinking Gray Soldier By Local Variables.
					//if ([i].SoldierThinking.TableListSolder.size() == 0)
					//[i] = DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
					//If There is no Thinking Movments on Current Object  

					if (SolderesOnTable[i].SoldierThinking.TableListSolder.empty())
					{
						//For All Movable Gray Solders.
						for (int j = 0; j < AllDraw::SodierMovments; j++)
						{
							SolderesOnTable[i].SoldierThinking.ThinkingBegin = true;
							SolderesOnTable[i].SoldierThinking.ThinkingFinished = false;
							SolderesOnTable[i].SoldierThinking.Kind = 1;
							SolderesOnTable[i].SoldierThinking.Thinking(SolderesOnTable[i].LoseOcuuredatChiled, SolderesOnTable[i].WinOcuuredatChiled);
						}
					}
				}
			}
			if (ElefantMidle > i)
			{

				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//Ignore of Non Exist Current Elephant Gray Objects.
				if (ElephantOnTable != null && ElephantOnTable[i] != null)
				{
					//Inititae Local Varibale By Global Gray Elephant Objects Varibales.
					ii = ((int)ElephantOnTable[i].Row);
					jj = ((int)ElephantOnTable[i].Column);
					//Construction of Thinking Objects By Local Varibales.
					//if (ElephantOnTable[i].ElefantThinking.TableListElefant.size() == 0)
						//ElephantOnTable[i] = DrawElefant(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
					//If There is Not Thinking Objetive List Elephant Gray. 
					if (ElephantOnTable[i].ElefantThinking.TableListElefant.size() == 0)
					{
						//For All Possible Movments.
						////Parallel.For(0, AllDraw::ElefantMovments, j =>
						for (int j = 0; j < AllDraw::ElefantMovments; j++)
						{
							//Operational Thinking Gray Elephant. 
							ElephantOnTable[i].ElefantThinking.ThinkingBegin = true;
							ElephantOnTable[i].ElefantThinking.ThinkingFinished = false;
							ElephantOnTable[i].ElefantThinking.Kind = 2;
							ElephantOnTable[i].ElefantThinking.t = new Task(new Action(ElephantOnTable[i].ElefantThinking.Thinking));
							ElephantOnTable[i].ElefantThinking.t.Start();



						}//);
					}
				}
			}




			if (HourseMidle > i)
			{

				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//Ignore of Non Exist Current Gray Hourse Objects.
				if (HoursesOnTable != null && HoursesOnTable[i] != null)
				{
					//Initiate of Local Variables By Global Gray Hourse Objectives.
					ii = ((int)HoursesOnTable[i].Row);
					jj = ((int)HoursesOnTable[i].Column);
					//Construction of Gray Hourse Thinking Objects..
					//if (HoursesOnTable[i].HourseThinking.TableListHourse.size() == 0)
						//HoursesOnTable[i] = DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
					//When There is Not HourseList Count. 
					if (HoursesOnTable[i].HourseThinking.TableListHourse.size() == 0)
					{
						//For All Possible Movments.
						for (int j = 0; j < AllDraw::HourseMovments; j++)
							HoursesOnTable[i].HourseThinking.ThinkingBegin = true;
						HoursesOnTable[i].HourseThinking.ThinkingFinished = false;
						HoursesOnTable[i].HourseThinking.Kind = 3;
						HoursesOnTable[i].HourseThinking.t = new Task(new Action(HoursesOnTable[i].HourseThinking.Thinking));
						HoursesOnTable[i].HourseThinking.t.Start();


					}

				}
			}


			if (CastleMidle > i)
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//When Current Castles Gray Not Exist Continue Traversal Back.
				if (CastlesOnTable != null && CastlesOnTable[ii] != null)
				{
					//Initaiate of Local Varibales By Global Varoiables.
					ii = ((int)CastlesOnTable[ii].Row);
					jj = ((int)CastlesOnTable[ii].Column);
					//Construction of Thinking Variables By Local Variables.
					//if (CastlesOnTable[ii].CastleThinking.TableListCastle.size() == 0)
						//CastlesOnTable[ii] = DrawCastle(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
					//When Count of Table Castles of Thinking Not Exist Do Operational.
					if (CastlesOnTable[ii].CastleThinking.TableListCastle.size() == 0)
					{
						//For All Possible Movments.
						////Parallel.For(0, AllDraw::CastleMovments, j =>
						for (int j = 0; j < AllDraw::CastleMovments; j++)
						{

							//Thinking of Gray Castles Operational.
							CastlesOnTable[ii].CastleThinking.ThinkingBegin = true;
							CastlesOnTable[ii].CastleThinking.ThinkingFinished = false;
							CastlesOnTable[ii].CastleThinking.Kind = 4;
							CastlesOnTable[ii].CastleThinking.Thinking(ref CastlesOnTable[ii].LoseOcuuredatChiled, ref CastlesOnTable[ii].WinOcuuredatChiled);
							



						}
					}
				}





				if (MinisterMidle > i)
				{


					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					//For Each Non Exist Gray Minister Objectives.
					if ((MinisterOnTable != nullptr) && MinisterOnTable[i])
					{
						//Inititate Local Variables By Global Varibales.
						ii = static_cast<int>(MinisterOnTable[i].Row);
						jj = static_cast<int>(MinisterOnTable[i].Column);
						//Construction of Thinking Objects Gray Minister.
						//MinisterOnTable[i] = DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
						//If There is Not Minister Of Gray In The Thinking Table List.   
						if (MinisterOnTable[i].MinisterThinking.TableListMinister.empty())
						{
							//For All Possible Movments.
							for (int j = 0; j < AllDraw::MinisterMovments; j++)
							{

								MinisterOnTable[i].MinisterThinking.ThinkingBegin = true;
								MinisterOnTable[i].MinisterThinking.ThinkingFinished = false;
								MinisterOnTable[i].MinisterThinking.Kind = 5;
								MinisterOnTable[i].MinisterThinking.Thinking(MinisterOnTable[i].LoseOcuuredatChiled, MinisterOnTable[i].WinOcuuredatChiled);




							}

						}
					}
				}





				if (KingMidle > i)
				{


					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					//If There is Not Current Object Continue Traversal Back.
					if (KingOnTable != nullptr && (&(KingOnTable[i]) != nullptr))
					{
						//Initiate Local varibale By Global Objective Varibales.
						ii = static_cast<int>(KingOnTable[i].Row));
						jj = static_cast<int>(KingOnTable[i].Column);
						//Construction of Gray King Thinking Objects.
						//if (KingOnTable[i].KingThinking.TableListKing.size() == 0)
						//KingOnTable[i] = DrawKing(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
						//When There is Not Thinking Table Gray King Movments.
						if (KingOnTable[i].KingThinking.TableListKing.empty())
						{
							//For All Possible Gray King Movments.
							////Parallel.For(0, AllDraw::KingMovments, j =>
							for (int j = 0; j < AllDraw::KingMovments; j++)
							{
								KingOnTable[i].KingThinking.ThinkingBegin = true;
								KingOnTable[i].KingThinking.ThinkingFinished = false;
								KingOnTable[i].KingThinking.Kind = 6;
								KingOnTable[i].KingThinking.Thinking(MinisterOnTable[i].LoseOcuuredatChiled, MinisterOnTable[i].WinOcuuredatChiled);
							}
						}
					}

				}
			}

		}
	}*/
	

	/*AllDraw AllDraw::InitiateAStarGreedytObjectBrown(int iii, int jjj, int **Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int **Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{

		////Parallel.For(MinBrownMidle(), MaxBrownHigh(), i =>
		for (int i = MinBrownMidle(); i < MaxBrownHigh(); i++)
		{


			if (SodierMidle <= i && SodierHigh > i)
			{

				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//If Solders Not Exist Continue and Traversal Back.
				if (SolderesOnTable != nullptr && ((&(SolderesOnTable[i])) != nullptr))
				{
					//Initiate of Local Variables By Global Objective Gray Current Solder.
					ii = static_cast<int>(SolderesOnTable[i].Row);
					jj = static_cast<int>(SolderesOnTable[i].Column);
					//Construction of Thinking Gray Soldier By Local Variables.
					//if ([i].SoldierThinking.TableListSolder.size() == 0)
					//[i] = DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
					//If There is no Thinking Movments on Current Object  

					if (SolderesOnTable[i].SoldierThinking.TableListSolder.empty())
					{
						//For All Movable Gray Solders.
						for (int j = 0; j < AllDraw::SodierMovments; j++)
						{
							SolderesOnTable[i].SoldierThinking.ThinkingBegin = true;
							SolderesOnTable[i].SoldierThinking.ThinkingFinished = false;
							SolderesOnTable[i].SoldierThinking.Kind = 1;
							SolderesOnTable[i].SoldierThinking.Thinking(SolderesOnTable[i].LoseOcuuredatChiled, SolderesOnTable[i].WinOcuuredatChiled);

						}
					}
				}


			}

			if (ElefantMidle <= i && ElefantHigh > i)
			{

				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//Ignore of Non Exist Current Elephant Gray Objects.
				if (ElephantOnTable != nullptr && (&(ElephantOnTable[i]) != nullptr))
				{
					//Inititae Local Varibale By Global Gray Elephant Objects Varibales.
					ii = static_cast<int>(ElephantOnTable[i].Row);
					jj = static_cast<int>(ElephantOnTable[i].Column);
					if (ElephantOnTable[i].ElefantThinking.TableListElefant.empty())
					{
						//For All Possible Movments.
						for (int j = 0; j < AllDraw::ElefantMovments; j++)
						{

							ElephantOnTable[i].ElefantThinking.ThinkingBegin = true;
							ElephantOnTable[i].ElefantThinking.ThinkingFinished = false;
							ElephantOnTable[i].ElefantThinking.Kind = 2;
							ElephantOnTable[i].ElefantThinking.Thinking(ElephantOnTable[i].LoseOcuuredatChiled, ElephantOnTable[i].WinOcuuredatChiled);

						};
					}
				}

			}


			if (HourseMidle <= i && HourseHight > i)
			{


				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//Ignore of Non Exist Current Gray Hourse Objects.
				if (HoursesOnTable != nullptr && (&(HoursesOnTable[i]) != nullptr))
				{
					//Initiate of Local Variables By Global Gray Hourse Objectives.
					ii = static_cast<int>(HoursesOnTable[i].Row);
					jj = static_cast<int>(HoursesOnTable[i].Column);
					//Construction of Gray Hourse Thinking Objects..
					//When There is Not HourseList Count. 
					if (HoursesOnTable[i].HourseThinking.TableListHourse.empty())
					{
						//For All Possible Movments.
						for (int j = 0; j < AllDraw::HourseMovments; j++)
						{

							HoursesOnTable[i].HourseThinking.ThinkingBegin = true;
							HoursesOnTable[i].HourseThinking.ThinkingFinished = false;
							HoursesOnTable[i].HourseThinking.Kind = 3;
							HoursesOnTable[i].HourseThinking.Thinking(HoursesOnTable[i].LoseOcuuredatChiled, HoursesOnTable[i].WinOcuuredatChiled); 

						}
					}
				}

			}



			if (CastleMidle <= i && CastleHigh < i)
			{

				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//When Current Castles Gray Not Exist Continue Traversal Back.
				if ((CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr))
				{
					//Initaiate of Local Varibales By Global Varoiables.
					ii = static_cast<int>(CastlesOnTable[ii].Row);
					jj = static_cast<int>(CastlesOnTable[ii].Column);
					//Construction of Thinking Variables By Local Variables.
					//if (CastlesOnTable[ii].CastleThinking.TableListCastle.size() == 0)
					//CastlesOnTable[ii] = DrawCastle(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
					//When Count of Table Castles of Thinking Not Exist Do Operational.
					if (CastlesOnTable[ii].CastleThinking.TableListCastle.empty())
					{
						//For All Possible Movments.
						////Parallel.For(0, AllDraw::CastleMovments, j =>
						for (int j = 0; j < AllDraw::CastleMovments; j++)
						{

							//Thinking of Gray Castles Operational.
							CastlesOnTable[ii].CastleThinking.ThinkingBegin = true;
							CastlesOnTable[ii].CastleThinking.ThinkingFinished = false;
							CastlesOnTable[ii].CastleThinking.Kind = 4;
							CastlesOnTable[ii].CastleThinking.Thinking(CastlesOnTable[ii].LoseOcuuredatChiled, CastlesOnTable[ii].WinOcuuredatChiled);
						}
					}

				}
			}





			if (MinisterMidle <= i && MinisterHigh > i)
			{

				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//For Each Non Exist Gray Minister Objectives.
				if ((MinisterOnTable != nullptr) && MinisterOnTable[i])
				{
					//Inititate Local Variables By Global Varibales.
					ii = static_cast<int>(MinisterOnTable[i].Row);
					jj = static_cast<int>(MinisterOnTable[i].Column);
					//Construction of Thinking Objects Gray Minister.
					if (MinisterOnTable[i].MinisterThinking.TableListMinister.empty())
					{
						//For All Possible Movments.
						////Parallel.For(0, AllDraw::MinisterMovments, j =>
						for (int j = 0; j < AllDraw::MinisterMovments; j++)
						{

							MinisterOnTable[i].MinisterThinking.ThinkingBegin = true;
							MinisterOnTable[i].MinisterThinking.ThinkingFinished = false;
							MinisterOnTable[i].MinisterThinking.Kind = 5;
							MinisterOnTable[i].MinisterThinking.Thinking(CastlesOnTable[ii].LoseOcuuredatChiled, CastlesOnTable[ii].WinOcuuredatChiled);
							;
						}
					}
				}
			}



			if (KingMidle <= i && KingHigh > i)
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//If There is Not Current Object Continue Traversal Back.
				if (KingOnTable != nullptr && (&(KingOnTable[i]) != nullptr))
				{
					//Initiate Local varibale By Global Objective Varibales.
					ii = static_cast<int>(KingOnTable[i].Row));
					jj = static_cast<int>(KingOnTable[i].Column);
					//Construction of Gray King Thinking Objects.
					//if (KingOnTable[i].KingThinking.TableListKing.size() == 0)
					//KingOnTable[i] = DrawKing(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
					//When There is Not Thinking Table Gray King Movments.
					if (KingOnTable[i].KingThinking.TableListKing.empty())
					{
						//For All Possible Gray King Movments.
						for (int j = 0; j < AllDraw::KingMovments; j++)
						{

							KingOnTable[i].KingThinking.ThinkingBegin = true;
							KingOnTable[i].KingThinking.ThinkingFinished = false;
							KingOnTable[i].KingThinking.Kind = 6;
							KingOnTable[i].KingThinking.Thinking(CastlesOnTable[ii].LoseOcuuredatChiled, CastlesOnTable[ii].WinOcuuredatChiled);

						}
					}
				}

			}
		}


	}

	*/
int  AllDraw::FoundTableIndex(std::vector<int**> T, int **TAab)
{
	int C = -1;
	for (int i = 0; i < T.size();i++)
	{
		if (TableEqual(T[i], TAab))
		{
			C = i;
		}
	}
	return C;
}

bool AllDraw::TableEqual(int **t1, int **t2)
{
	bool Is = true;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (t1[i][j] != t2[i][j])
			{
				Is = false;
			}
		}
	}
	return Is;
}

void AllDraw::Serve(int Order)
{
	if (Order == 1)
	{
		for (int i = 0; i < SodierMidle; i++)
		{
			ServeISSup(Order, 1, i);
		}
		for (int i = 0; i < ElefantMidle; i++)
		{
			ServeISSup(Order, 2, i);
		}
		for (int i = 0; i < HourseMidle; i++)
		{
			ServeISSup(Order, 3, i);
		}
		for (int i = 0; i < CastleMidle; i++)
		{
			ServeISSup(Order, 4, i);
		}
		for (int i = 0; i < MinisterMidle; i++)
		{
			ServeISSup(Order, 5, i);
		}
		for (int i = 0; i < KingMidle; i++)
		{
			ServeISSup(Order, 6, i);
		}

	}
	else
	{
		for (int i = SodierMidle; i < SodierHigh; i++)
		{
			ServeISSup(Order, 1, i);
		}
		for (int i = ElefantMidle; i < ElefantHigh; i++)
		{
			ServeISSup(Order, 2, i);
		}
		for (int i = HourseMidle; i < HourseHight; i++)
		{
			ServeISSup(Order, 3, i);
		}
		for (int i = CastleMidle; i < CastleHigh; i++)
		{
			ServeISSup(Order, 4, i);
		}
		for (int i = MinisterMidle; i < MinisterHigh; i++)
		{
			ServeISSup(Order, 5, i);
		}
		for (int i = KingMidle; i < KingHigh; i++)
		{
			ServeISSup(Order, 6, i);
		}
	}
}

void AllDraw::ServeISSup(int Order, int Kind, int ii)
{
	if (Kind == 1)
	{
		if (Order == 1)
		{
			if (SolderesOnTable[ii].SoldierThinking.IsSup)
			{

				for (int i = 0; i < SodierMidle; i++)
				{
					if ((&(SolderesOnTable[ii]) == nullptr))
					{
						continue;
					}
					//int j = FoundTableIndex(this[ii].SoldierThinking.TableListSolder, SolderesOnTable[ii].SoldierThinking.TableConst);
					for (int j = 0; j < SolderesOnTable[ii].SoldierThinking.HuristicListSolder.size(); j++)
					{

						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][0] += SolderesOnTable[ii].SoldierThinking.HuristicAttackValueSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][1] += SolderesOnTable[ii].SoldierThinking.HuristicMovementValueSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][2] += SolderesOnTable[ii].SoldierThinking.HuristicSelfSupportedValueSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][3] += SolderesOnTable[ii].SoldierThinking.HuristicObjectDangourCheckMateValueSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][4] += SolderesOnTable[ii].SoldierThinking.HuristicKillerValueSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][5] += SolderesOnTable[ii].SoldierThinking.HuristicReducedAttackValueSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][6] += SolderesOnTable[ii].SoldierThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][7] += SolderesOnTable[ii].SoldierThinking.HeuristicKingSafeSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][8] += SolderesOnTable[ii].SoldierThinking.HeuristicFromCenterSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][9] += SolderesOnTable[ii].SoldierThinking.HeuristicKingDangourSup;

						AllDraw::OutPut = L"\r\nServed Soldeir!";
					}
				}
				SolderesOnTable[ii].SoldierThinking.HuristicAttackValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HuristicMovementValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HuristicSelfSupportedValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HuristicObjectDangourCheckMateValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HuristicKillerValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HuristicReducedAttackValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicKingSafeSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicFromCenterSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicKingDangourSup = 0;
				SolderesOnTable[ii].SoldierThinking.IsSup = false;
			}
		}
		else
		{
			if (SolderesOnTable[ii].SoldierThinking.IsSup)
			{

				for (int i = SodierMidle; i < SodierHigh; i++)
				{
					if ((&(SolderesOnTable[ii]) == nullptr))
					{
						continue;
					}
					//int j = FoundTableIndex(this[ii].SoldierThinking.TableListSolder, SolderesOnTable[ii].SoldierThinking.TableConst);
					for (int j = 0; j < SolderesOnTable[ii].SoldierThinking.HuristicListSolder.size(); j++)
					{

						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][0] += SolderesOnTable[ii].SoldierThinking.HuristicAttackValueSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][1] += SolderesOnTable[ii].SoldierThinking.HuristicMovementValueSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][2] += SolderesOnTable[ii].SoldierThinking.HuristicSelfSupportedValueSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][3] += SolderesOnTable[ii].SoldierThinking.HuristicObjectDangourCheckMateValueSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][4] += SolderesOnTable[ii].SoldierThinking.HuristicKillerValueSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][5] += SolderesOnTable[ii].SoldierThinking.HuristicReducedAttackValueSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][6] += SolderesOnTable[ii].SoldierThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][7] += SolderesOnTable[ii].SoldierThinking.HeuristicKingSafeSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][8] += SolderesOnTable[ii].SoldierThinking.HeuristicFromCenterSup;
						SolderesOnTable[ii].SoldierThinking.HuristicListSolder[j][9] += SolderesOnTable[ii].SoldierThinking.HeuristicKingDangourSup;

						AllDraw::OutPut = L"\r\nServed Soldeir!";
					}
				}
				SolderesOnTable[ii].SoldierThinking.HuristicAttackValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HuristicMovementValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HuristicSelfSupportedValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HuristicObjectDangourCheckMateValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HuristicKillerValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HuristicReducedAttackValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicKingSafeSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicFromCenterSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicKingDangourSup = 0;
				SolderesOnTable[ii].SoldierThinking.IsSup = false;
			}
		}
	}
	else if (Kind == 2)
	{
		if (Order == 1)
		{
			if (ElephantOnTable[ii].ElefantThinking.IsSup)
			{
				for (int i = 0; i < ElefantMidle; i++)
				{
					if ((&(ElephantOnTable[ii]) == nullptr))
					{
						continue;
					}
					{
						//if (this != null && this != null)
							//int j = FoundTableIndex(this.ElephantOnTable[ii].ElefantThinking.TableListElefant, ElephantOnTable[ii].ElefantThinking.TableConst);
						for (int j = 0; j < ElephantOnTable[ii].ElefantThinking.HuristicListElefant.size(); j++)
						{

							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][0] += ElephantOnTable[ii].ElefantThinking.HuristicAttackValueSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][1] += ElephantOnTable[ii].ElefantThinking.HuristicMovementValueSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][2] += ElephantOnTable[ii].ElefantThinking.HuristicSelfSupportedValueSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][3] += ElephantOnTable[ii].ElefantThinking.HuristicObjectDangourCheckMateValueSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][4] += ElephantOnTable[ii].ElefantThinking.HuristicKillerValueSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][5] += ElephantOnTable[ii].ElefantThinking.HuristicReducedAttackValueSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][6] += ElephantOnTable[ii].ElefantThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][7] += ElephantOnTable[ii].ElefantThinking.HeuristicKingSafeSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][8] += ElephantOnTable[ii].ElefantThinking.HeuristicFromCenterSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][9] += ElephantOnTable[ii].ElefantThinking.HeuristicKingDangourSup;

							AllDraw::OutPut = L"\r\nServed Elephant!";
						}
					}
				}
				ElephantOnTable[ii].ElefantThinking.HuristicAttackValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HuristicMovementValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HuristicSelfSupportedValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HuristicObjectDangourCheckMateValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HuristicKillerValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HuristicReducedAttackValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicKingSafeSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicFromCenterSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicKingDangourSup = 0;
				ElephantOnTable[ii].ElefantThinking.IsSup = false;
			}
		}
		else
		{

			if (ElephantOnTable[ii].ElefantThinking.IsSup)
			{
				for (int i = ElefantMidle; i < ElefantHigh; i++)
				{
					if ((&(ElephantOnTable[ii]) == nullptr))
					{
						continue;
					}
					{
						//if (this != null && this != null)
							//int j = FoundTableIndex(this.ElephantOnTable[ii].ElefantThinking.TableListElefant, ElephantOnTable[ii].ElefantThinking.TableConst);
						for (int j = 0; j < ElephantOnTable[ii].ElefantThinking.HuristicListElefant.size(); j++)
						{

							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][0] += ElephantOnTable[ii].ElefantThinking.HuristicAttackValueSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][1] += ElephantOnTable[ii].ElefantThinking.HuristicMovementValueSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][2] += ElephantOnTable[ii].ElefantThinking.HuristicSelfSupportedValueSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][3] += ElephantOnTable[ii].ElefantThinking.HuristicObjectDangourCheckMateValueSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][4] += ElephantOnTable[ii].ElefantThinking.HuristicKillerValueSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][5] += ElephantOnTable[ii].ElefantThinking.HuristicReducedAttackValueSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][6] += ElephantOnTable[ii].ElefantThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][7] += ElephantOnTable[ii].ElefantThinking.HeuristicKingSafeSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][8] += ElephantOnTable[ii].ElefantThinking.HeuristicFromCenterSup;
							ElephantOnTable[ii].ElefantThinking.HuristicListElefant[j][9] += ElephantOnTable[ii].ElefantThinking.HeuristicKingDangourSup;

							AllDraw::OutPut = L"\r\nServed Elephant!";
						}
					}
				}
				ElephantOnTable[ii].ElefantThinking.HuristicAttackValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HuristicMovementValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HuristicSelfSupportedValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HuristicObjectDangourCheckMateValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HuristicKillerValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HuristicReducedAttackValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicKingSafeSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicFromCenterSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicKingDangourSup = 0;
				ElephantOnTable[ii].ElefantThinking.IsSup = false;
			}
		}
	}
	else if (Kind == 3)
	{
		if (Order == 1)
		{
			if (HoursesOnTable[ii].HourseThinking.IsSup)
			{
				for (int i = 0; i < HourseMidle; i++)
				{
					if ((&(HoursesOnTable[ii]) == nullptr))
					{
						continue;
					}
					//int j = FoundTableIndex(this.HoursesOnTable[ii].HourseThinking.TableListHourse, HoursesOnTable[ii].HourseThinking.TableConst);
					for (int j = 0; j < HoursesOnTable[ii].HourseThinking.HuristicListHourse.size(); j++)
					{

						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][0] += HoursesOnTable[ii].HourseThinking.HuristicAttackValueSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][1] += HoursesOnTable[ii].HourseThinking.HuristicMovementValueSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][2] += HoursesOnTable[ii].HourseThinking.HuristicSelfSupportedValueSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][3] += HoursesOnTable[ii].HourseThinking.HuristicObjectDangourCheckMateValueSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][4] += HoursesOnTable[ii].HourseThinking.HuristicKillerValueSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][5] += HoursesOnTable[ii].HourseThinking.HuristicReducedAttackValueSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][6] += HoursesOnTable[ii].HourseThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][7] += HoursesOnTable[ii].HourseThinking.HeuristicKingSafeSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][8] += HoursesOnTable[ii].HourseThinking.HeuristicFromCenterSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][9] += HoursesOnTable[ii].HourseThinking.HeuristicKingDangourSup;

						AllDraw::OutPut = L"\r\nServed Hourse!";
					}
				}
				HoursesOnTable[ii].HourseThinking.HuristicAttackValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HuristicMovementValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HuristicSelfSupportedValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HuristicObjectDangourCheckMateValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HuristicKillerValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HuristicReducedAttackValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicKingSafeSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicFromCenterSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicKingDangourSup = 0;
				HoursesOnTable[ii].HourseThinking.IsSup = false;
			}

		}
		else
		{
			if (HoursesOnTable[ii].HourseThinking.IsSup)
			{
				for (int i = HourseMidle; i < HourseHight; i++)
				{
					if ((&(HoursesOnTable[ii]) == nullptr))
					{
						continue;
					}
					//int j = FoundTableIndex(this.HoursesOnTable[ii].HourseThinking.TableListHourse, HoursesOnTable[ii].HourseThinking.TableConst);
					for (int j = 0; j < HoursesOnTable[ii].HourseThinking.HuristicListHourse.size(); j++)
					{

						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][0] += HoursesOnTable[ii].HourseThinking.HuristicAttackValueSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][1] += HoursesOnTable[ii].HourseThinking.HuristicMovementValueSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][2] += HoursesOnTable[ii].HourseThinking.HuristicSelfSupportedValueSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][3] += HoursesOnTable[ii].HourseThinking.HuristicObjectDangourCheckMateValueSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][4] += HoursesOnTable[ii].HourseThinking.HuristicKillerValueSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][5] += HoursesOnTable[ii].HourseThinking.HuristicReducedAttackValueSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][6] += HoursesOnTable[ii].HourseThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][7] += HoursesOnTable[ii].HourseThinking.HeuristicKingSafeSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][8] += HoursesOnTable[ii].HourseThinking.HeuristicFromCenterSup;
						HoursesOnTable[ii].HourseThinking.HuristicListHourse[j][9] += HoursesOnTable[ii].HourseThinking.HeuristicKingDangourSup;

						AllDraw::OutPut = L"\r\nServed Hourse!";
					}
				}
				HoursesOnTable[ii].HourseThinking.HuristicAttackValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HuristicMovementValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HuristicSelfSupportedValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HuristicObjectDangourCheckMateValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HuristicKillerValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HuristicReducedAttackValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicKingSafeSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicFromCenterSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicKingDangourSup = 0;
				HoursesOnTable[ii].HourseThinking.IsSup = false;
			}
		}
	}
	else if (Kind == 4)
	{
		if (Order == 1)
		{
			if (CastlesOnTable[ii].CastleThinking.IsSup)
			{
				for (int i = 0; i < CastleMidle; i++)
				{
					if ((&(CastlesOnTable[ii]) == nullptr))
					{
						continue;
					}
					//int j = FoundTableIndex(this.CastlesOnTable[ii].CastleThinking.TableListCastle, CastlesOnTable[ii].CastleThinking.TableConst);
					for (int j = 0; j < CastlesOnTable[ii].CastleThinking.HuristicListCastle.size(); j++)
					{

						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][0] += CastlesOnTable[ii].CastleThinking.HuristicAttackValueSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][1] += CastlesOnTable[ii].CastleThinking.HuristicMovementValueSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][2] += CastlesOnTable[ii].CastleThinking.HuristicSelfSupportedValueSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][3] += CastlesOnTable[ii].CastleThinking.HuristicObjectDangourCheckMateValueSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][4] += CastlesOnTable[ii].CastleThinking.HuristicKillerValueSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][5] += CastlesOnTable[ii].CastleThinking.HuristicReducedAttackValueSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][6] += CastlesOnTable[ii].CastleThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][7] += CastlesOnTable[ii].CastleThinking.HeuristicKingSafeSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][8] += CastlesOnTable[ii].CastleThinking.HeuristicFromCenterSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][9] += CastlesOnTable[ii].CastleThinking.HeuristicKingDangourSup;

						AllDraw::OutPut = L"\r\nServed Castle!";
					}
				}
				CastlesOnTable[ii].CastleThinking.HuristicAttackValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HuristicMovementValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HuristicSelfSupportedValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HuristicObjectDangourCheckMateValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HuristicKillerValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HuristicReducedAttackValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicKingSafeSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicFromCenterSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicKingDangourSup = 0;
				CastlesOnTable[ii].CastleThinking.IsSup = false;
			}
		}
		else
		{
			if (CastlesOnTable[ii].CastleThinking.IsSup)
			{
				for (int i = CastleMidle; i < CastleHigh; i++)
				{
					if ((&(CastlesOnTable[ii]) == nullptr))
					{
						continue;
					}
					//int j = FoundTableIndex(this.CastlesOnTable[ii].CastleThinking.TableListCastle, CastlesOnTable[ii].CastleThinking.TableConst);
					for (int j = 0; j < CastlesOnTable[ii].CastleThinking.HuristicListCastle.size(); j++)
					{

						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][0] += CastlesOnTable[ii].CastleThinking.HuristicAttackValueSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][1] += CastlesOnTable[ii].CastleThinking.HuristicMovementValueSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][2] += CastlesOnTable[ii].CastleThinking.HuristicSelfSupportedValueSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][3] += CastlesOnTable[ii].CastleThinking.HuristicObjectDangourCheckMateValueSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][4] += CastlesOnTable[ii].CastleThinking.HuristicKillerValueSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][5] += CastlesOnTable[ii].CastleThinking.HuristicReducedAttackValueSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][6] += CastlesOnTable[ii].CastleThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][7] += CastlesOnTable[ii].CastleThinking.HeuristicKingSafeSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][8] += CastlesOnTable[ii].CastleThinking.HeuristicFromCenterSup;
						CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][9] += CastlesOnTable[ii].CastleThinking.HeuristicKingDangourSup;

						AllDraw::OutPut = L"\r\nServed Castle!";
					}
				}
				CastlesOnTable[ii].CastleThinking.HuristicAttackValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HuristicMovementValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HuristicSelfSupportedValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HuristicObjectDangourCheckMateValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HuristicKillerValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HuristicReducedAttackValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicKingSafeSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicFromCenterSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicKingDangourSup = 0;
				CastlesOnTable[ii].CastleThinking.IsSup = false;
			}
		}
	}
	else
	{
		if (Kind == 5)
		{
			if (Order == 1)
			{
				if (MinisterOnTable[ii].MinisterThinking.IsSup)
				{
					for (int i = 0; i < MinisterMidle; i++)
					{
						if ((&(MinisterOnTable[ii]) == nullptr))
						{
							continue;
						}
						//int j = FoundTableIndex(this.MinisterOnTable[ii].MinisterThinking.TableListMinister, MinisterOnTable[ii].MinisterThinking.TableConst);
						for (int j = 0; j < MinisterOnTable[ii].MinisterThinking.HuristicListMinister.size(); j++)
						{

							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][0] += MinisterOnTable[ii].MinisterThinking.HuristicAttackValueSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][1] += MinisterOnTable[ii].MinisterThinking.HuristicMovementValueSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][2] += MinisterOnTable[ii].MinisterThinking.HuristicSelfSupportedValueSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][3] += MinisterOnTable[ii].MinisterThinking.HuristicObjectDangourCheckMateValueSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][4] += MinisterOnTable[ii].MinisterThinking.HuristicKillerValueSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][5] += MinisterOnTable[ii].MinisterThinking.HuristicReducedAttackValueSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][6] += MinisterOnTable[ii].MinisterThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][7] += MinisterOnTable[ii].MinisterThinking.HeuristicKingSafeSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][8] += MinisterOnTable[ii].MinisterThinking.HeuristicFromCenterSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][9] += MinisterOnTable[ii].MinisterThinking.HeuristicKingDangourSup;

							AllDraw::OutPut = L"\r\nServed Minister!";
						}
					}
					MinisterOnTable[ii].MinisterThinking.HuristicAttackValueSup = 0;
					MinisterOnTable[ii].MinisterThinking.HuristicMovementValueSup = 0;
					MinisterOnTable[ii].MinisterThinking.HuristicSelfSupportedValueSup = 0;
					MinisterOnTable[ii].MinisterThinking.HuristicObjectDangourCheckMateValueSup = 0;
					MinisterOnTable[ii].MinisterThinking.HuristicKillerValueSup = 0;
					MinisterOnTable[ii].MinisterThinking.HuristicReducedAttackValueSup = 0;
					MinisterOnTable[ii].MinisterThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup = 0;
					MinisterOnTable[ii].MinisterThinking.HeuristicKingSafeSup = 0;
					MinisterOnTable[ii].MinisterThinking.HeuristicFromCenterSup = 0;
					MinisterOnTable[ii].MinisterThinking.HeuristicKingDangourSup = 0;
					MinisterOnTable[ii].MinisterThinking.IsSup = false;
				}
			}
			else
			{
				if (MinisterOnTable[ii].MinisterThinking.IsSup)
				{
					for (int i = MinisterMidle; i < MinisterHigh; i++)
					{
						if ((&(MinisterOnTable[ii]) == nullptr))
						{
							continue;
						}
						//int j = FoundTableIndex(this.MinisterOnTable[ii].MinisterThinking.TableListMinister, MinisterOnTable[ii].MinisterThinking.TableConst);
						for (int j = 0; j < MinisterOnTable[ii].MinisterThinking.HuristicListMinister.size(); j++)
						{

							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][0] += MinisterOnTable[ii].MinisterThinking.HuristicAttackValueSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][1] += MinisterOnTable[ii].MinisterThinking.HuristicMovementValueSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][2] += MinisterOnTable[ii].MinisterThinking.HuristicSelfSupportedValueSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][3] += MinisterOnTable[ii].MinisterThinking.HuristicObjectDangourCheckMateValueSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][4] += MinisterOnTable[ii].MinisterThinking.HuristicKillerValueSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][5] += MinisterOnTable[ii].MinisterThinking.HuristicReducedAttackValueSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][6] += MinisterOnTable[ii].MinisterThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][7] += MinisterOnTable[ii].MinisterThinking.HeuristicKingSafeSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][8] += MinisterOnTable[ii].MinisterThinking.HeuristicFromCenterSup;
							MinisterOnTable[ii].MinisterThinking.HuristicListMinister[j][9] += MinisterOnTable[ii].MinisterThinking.HeuristicKingDangourSup;

							AllDraw::OutPut = L"\r\nServed Minister!";
						}
					}
					MinisterOnTable[ii].MinisterThinking.HuristicAttackValueSup = 0;
					MinisterOnTable[ii].MinisterThinking.HuristicMovementValueSup = 0;
					MinisterOnTable[ii].MinisterThinking.HuristicSelfSupportedValueSup = 0;
					MinisterOnTable[ii].MinisterThinking.HuristicObjectDangourCheckMateValueSup = 0;
					MinisterOnTable[ii].MinisterThinking.HuristicKillerValueSup = 0;
					MinisterOnTable[ii].MinisterThinking.HuristicReducedAttackValueSup = 0;
					MinisterOnTable[ii].MinisterThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup = 0;
					MinisterOnTable[ii].MinisterThinking.HeuristicKingSafeSup = 0;
					MinisterOnTable[ii].MinisterThinking.HeuristicFromCenterSup = 0;
					MinisterOnTable[ii].MinisterThinking.HeuristicKingDangourSup = 0;
					MinisterOnTable[ii].MinisterThinking.IsSup = false;
				}
			}
		}
		else
		{
			if (Kind == 6)
			{
				if (Order == 1)
				{
					if (KingOnTable[ii].KingThinking.IsSup)
					{
						for (int i = 0; i < KingMidle; i++)
						{
							if ((&(KingOnTable[ii]) == nullptr))
							{
								continue;
							}
							//int j = FoundTableIndex(this.KingOnTable[ii].KingThinking.TableListKing, KingOnTable[ii].KingThinking.TableConst);
							for (int j = 0; j < KingOnTable[ii].KingThinking.HuristicListKing.size(); j++)
							{

								KingOnTable[ii].KingThinking.HuristicListKing[j][0] += KingOnTable[ii].KingThinking.HuristicAttackValueSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][1] += KingOnTable[ii].KingThinking.HuristicMovementValueSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][2] += KingOnTable[ii].KingThinking.HuristicSelfSupportedValueSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][3] += KingOnTable[ii].KingThinking.HuristicObjectDangourCheckMateValueSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][4] += KingOnTable[ii].KingThinking.HuristicKillerValueSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][5] += KingOnTable[ii].KingThinking.HuristicReducedAttackValueSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][6] += KingOnTable[ii].KingThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][7] += KingOnTable[ii].KingThinking.HeuristicKingSafeSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][8] += KingOnTable[ii].KingThinking.HeuristicFromCenterSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][9] += KingOnTable[ii].KingThinking.HeuristicKingDangourSup;

								AllDraw::OutPut = L"\r\nServed King!";
							}
						}
						KingOnTable[ii].KingThinking.HuristicAttackValueSup = 0;
						KingOnTable[ii].KingThinking.HuristicMovementValueSup = 0;
						KingOnTable[ii].KingThinking.HuristicSelfSupportedValueSup = 0;
						KingOnTable[ii].KingThinking.HuristicObjectDangourCheckMateValueSup = 0;
						KingOnTable[ii].KingThinking.HuristicKillerValueSup = 0;
						KingOnTable[ii].KingThinking.HuristicReducedAttackValueSup = 0;
						KingOnTable[ii].KingThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup = 0;
						KingOnTable[ii].KingThinking.HeuristicKingSafeSup = 0;
						KingOnTable[ii].KingThinking.HeuristicFromCenterSup = 0;
						KingOnTable[ii].KingThinking.HeuristicKingDangourSup = 0;

						KingOnTable[ii].KingThinking.IsSup = false;
					}
				}
				else
				{
					if (KingOnTable[ii].KingThinking.IsSup)
					{
						for (int i = KingMidle; i < KingHigh; i++)
						{
							if ((&(KingOnTable[ii]) == nullptr))
							{
								continue;
							}
							//int j = FoundTableIndex(this.KingOnTable[ii].KingThinking.TableListKing, KingOnTable[ii].KingThinking.TableConst);
							for (int j = 0; j < KingOnTable[ii].KingThinking.HuristicListKing.size(); j++)
							{

								KingOnTable[ii].KingThinking.HuristicListKing[j][0] += KingOnTable[ii].KingThinking.HuristicAttackValueSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][1] += KingOnTable[ii].KingThinking.HuristicMovementValueSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][2] += KingOnTable[ii].KingThinking.HuristicSelfSupportedValueSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][3] += KingOnTable[ii].KingThinking.HuristicObjectDangourCheckMateValueSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][4] += KingOnTable[ii].KingThinking.HuristicKillerValueSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][5] += KingOnTable[ii].KingThinking.HuristicReducedAttackValueSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][6] += KingOnTable[ii].KingThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][7] += KingOnTable[ii].KingThinking.HeuristicKingSafeSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][8] += KingOnTable[ii].KingThinking.HeuristicFromCenterSup;
								KingOnTable[ii].KingThinking.HuristicListKing[j][9] += KingOnTable[ii].KingThinking.HeuristicKingDangourSup;

								AllDraw::OutPut = L"\r\nServed King!";
							}
						}
						KingOnTable[ii].KingThinking.HuristicAttackValueSup = 0;
						KingOnTable[ii].KingThinking.HuristicMovementValueSup = 0;
						KingOnTable[ii].KingThinking.HuristicSelfSupportedValueSup = 0;
						KingOnTable[ii].KingThinking.HuristicObjectDangourCheckMateValueSup = 0;
						KingOnTable[ii].KingThinking.HuristicKillerValueSup = 0;
						KingOnTable[ii].KingThinking.HuristicReducedAttackValueSup = 0;
						KingOnTable[ii].KingThinking.HeuristicDistabceOfCurrentMoveFromEnemyKingValueSup = 0;
						KingOnTable[ii].KingThinking.HeuristicKingSafeSup = 0;
						KingOnTable[ii].KingThinking.HeuristicFromCenterSup = 0;
						KingOnTable[ii].KingThinking.HeuristicKingDangourSup = 0;

						KingOnTable[ii].KingThinking.IsSup = false;
					}
				}
			}
		}
	}
}

void AllDraw::InitiateAStarGreedytSodlerGray(int iii, int jjj, int **Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int **Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
{


	//For Gray Soldeirs Objects. 
	for (int i = 0; i < SodierMidle; i++)
	{

		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
		//If Solders Not Exist Continue and Traversal Back.
		if (SolderesOnTable != nullptr && &(SolderesOnTable[i]) != nullptr)
		{
			//Initiate of Local Variables By Global Objective Gray Current Solder.
			ii = static_cast<int>(SolderesOnTable[i].Row);
			jj = static_cast<int>(SolderesOnTable[i].Column);
			//Construction of Thinking Gray Soldier By Local Variables.
			if (SolderesOnTable[i].SoldierThinking.TableListSolder.empty())
			{
				SolderesOnTable[i] = DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
			}
			//If There is no Thinking Movments on Current Object  

			if (SolderesOnTable[i].SoldierThinking.TableListSolder.empty())
			{
				SolderesOnTable[i].SoldierThinking.ThinkingBegin = true;
				SolderesOnTable[i].SoldierThinking.ThinkingFinished = false;
				SolderesOnTable[i].SoldierThinking.Thinking(SolderesOnTable[i].LoseOcuuredatChiled, SolderesOnTable[i].WinOcuuredatChiled);
				//ServeISSup(Order,1, i);
			}
		}

	}



}

void AllDraw::InitiateAStarGreedytElephantGray(int iii, int jjj, int **Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int **Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
{
	for (int i = 0; i < ElefantMidle; i++)
	{
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
		//Ignore of Non Exist Current Elephant Gray Objects.
		if (ElephantOnTable != nullptr && (&(ElephantOnTable[i]) != nullptr))
		{
			//Inititae Local Varibale By Global Gray Elephant Objects Varibales.
			ii = static_cast<int>(ElephantOnTable[i].Row);
			jj = static_cast<int>(ElephantOnTable[i].Column);
			//Construction of Thinking Objects By Local Varibales.
			if (ElephantOnTable[i].ElefantThinking.TableListElefant.empty())
			{
				ElephantOnTable[i] = DrawElefant(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
			}
			//If There is Not Thinking Objetive List Elephant Gray. 
			if (ElephantOnTable[i].ElefantThinking.TableListElefant.empty())
			{
				ElephantOnTable[i].ElefantThinking.ThinkingBegin = true;
				ElephantOnTable[i].ElefantThinking.ThinkingFinished = false;
				ElephantOnTable[i].ElefantThinking.Thinking(ElephantOnTable[i].LoseOcuuredatChiled, ElephantOnTable[i].WinOcuuredatChiled);
				//ServeISSup(Order,2, i);

			}
		}

	}


}

void AllDraw::InitiateAStarGreedythHourseGray(int iii, int jjj, int **Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int **Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
{

	//For All Gray Hourse Objects.
	for (int i = 0; i < HourseMidle; i++)

	{
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
		//Ignore of Non Exist Current Gray Hourse Objects.
		if (HoursesOnTable != nullptr && (&(HoursesOnTable[i]) != nullptr))
		{
			//Initiate of Local Variables By Global Gray Hourse Objectives.
			ii = static_cast<int>(HoursesOnTable[i].Row);
			jj = static_cast<int>(HoursesOnTable[i].Column);
			//Construction of Gray Hourse Thinking Objects..
			if (HoursesOnTable[i].HourseThinking.TableListHourse.empty())
			{
				HoursesOnTable[i] = DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
			}
			//When There is Not HourseList Count. 
			if (HoursesOnTable[i].HourseThinking.TableListHourse.empty())
			{
				HoursesOnTable[i].HourseThinking.ThinkingBegin = true;
				HoursesOnTable[i].HourseThinking.ThinkingFinished = false;
				HoursesOnTable[i].HourseThinking.Thinking(HoursesOnTable[i].LoseOcuuredatChiled, HoursesOnTable[i].WinOcuuredatChiled);


			}
		}
	}


}

void AllDraw::InitiateAStarGreedythCastleGray(int iii, int jjj, int **Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int **Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
{

	//For All Possible Gray Castles Objects.
	for (int i = 0; i < CastleMidle; i++)
	{
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
		//When Current Castles Gray Not Exist Continue Traversal Back.
		if ((CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr))
		{
			//Initaiate of Local Varibales By Global Varoiables.
			ii = static_cast<int>(CastlesOnTable[ii].Row);
			jj = static_cast<int>(CastlesOnTable[ii].Column);
			//Construction of Thinking Variables By Local Variables.
			if (CastlesOnTable[ii].CastleThinking.TableListCastle.empty())
			{
				CastlesOnTable[ii] = DrawCastle(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
			}
			//When Count of Table Castles of Thinking Not Exist Do Operational.
			if (CastlesOnTable[ii].CastleThinking.TableListCastle.empty())
			{
				//Thinking of Gray Castles Operational.
				CastlesOnTable[ii].CastleThinking.ThinkingBegin = true;
				CastlesOnTable[ii].CastleThinking.ThinkingFinished = false;
				CastlesOnTable[ii].CastleThinking.Thinking(CastlesOnTable[ii].LoseOcuuredatChiled, CastlesOnTable[ii].WinOcuuredatChiled);
				//ServeISSup(Order,4, i);


			}
		}

	}
}

void AllDraw::InitiateAStarGreedythMinisterGray(int iii, int jjj, int **Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int **Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
{
	//For All Possible Gray Minister Movments.
	for (int i = 0; i < MinisterMidle; i++)
	{
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
		//For Each Non Exist Gray Minister Objectives.
		if ((&(MinisterOnTable) != nullptr) && (&(MinisterOnTable[i]) != nullptr))
		{
			//Inititate Local Variables By Global Varibales.
			ii = static_cast<int>(MinisterOnTable[i].Row);
			jj = static_cast<int>(MinisterOnTable[i].Column);
			//Construction of Thinking Objects Gray Minister.
			if (MinisterOnTable[i].MinisterThinking.TableListMinister.empty())
			{
				MinisterOnTable[i] = DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
			}
			//If There is Not Minister Of Gray In The Thinking Table List.   
			if (MinisterOnTable[i].MinisterThinking.TableListMinister.empty())
			{
				MinisterOnTable[i].MinisterThinking.ThinkingBegin = true;
				MinisterOnTable[i].MinisterThinking.ThinkingFinished = false;
				MinisterOnTable[i].MinisterThinking.Thinking(MinisterOnTable[i].LoseOcuuredatChiled, MinisterOnTable[i].WinOcuuredatChiled);

			}

		}
	}
}

void AllDraw::InitiateAStarGreedythKingGray(int iii, int jjjj, int **Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int **Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
{

	//For All Possible Gray King Objects.
	for (int i = 0; i < KingMidle; i++)
	{
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
		//If There is Not Current Object Continue Traversal Back.
		if (KingOnTable != nullptr && (&(KingOnTable[i]) != nullptr))
		{
			//Initiate Local varibale By Global Objective Varibales.
			ii = static_cast<int>(KingOnTable[i].Row);
			jj = static_cast<int>(KingOnTable[i].Column);
			//Construction of Gray King Thinking Objects.
			if (KingOnTable[i].KingThinking.TableListKing.empty())
			{
				KingOnTable[i] = DrawKing(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
			}
			//When There is Not Thinking Table Gray King Movments.
			if (KingOnTable[i].KingThinking.TableListKing.empty())
			{
				//For All Possible Gray King Movments.
				KingOnTable[i].KingThinking.ThinkingBegin = true;
				KingOnTable[i].KingThinking.ThinkingFinished = false;
				KingOnTable[i].KingThinking.Thinking(KingOnTable[i].LoseOcuuredatChiled, KingOnTable[i].WinOcuuredatChiled);
				//ServeISSup(Order,6, i);
			}
		}

	}

}

void AllDraw::InitiateAStarGreedythSoldierBrown(int iii, int jjj, int **Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int **Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
{
	//For Each Objects of Brown Sodiers.
	for (int i = SodierMidle; i < SodierHigh; i++)
	{
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
		//Wheen Brown King Object There is Not Continue Traversal Back.
		if (SolderesOnTable != nullptr && &(SolderesOnTable[i]) != nullptr)
		{
			//Initiate Local varibale By Global Objective Varibales.
			ii = static_cast<int>(SolderesOnTable[i].Row);
			jj = static_cast<int>(SolderesOnTable[i].Column);
			//Construction of Thinking Brown Current Objects.
			if (SolderesOnTable[i].SoldierThinking.TableListSolder.empty())
			{
				SolderesOnTable[i] = DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
			}
			//When There is Current Brown Object Table List Thinking Objective Movments.
			if (SolderesOnTable[i].SoldierThinking.TableListSolder.empty())
			{
				//For Each Brown Possible Movments. 
				SolderesOnTable[i].SoldierThinking.ThinkingBegin = true;
				SolderesOnTable[i].SoldierThinking.ThinkingFinished = false;
				SolderesOnTable[i].SoldierThinking.Thinking(SolderesOnTable[i].LoseOcuuredatChiled, SolderesOnTable[i].WinOcuuredatChiled);
				//ServeISSup(Order,1, i);
			}

		}
	}

}

void AllDraw::InitiateAStarGreedythElephantBrown(int iii, int jjj, int **Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int **Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
{
	for (int i = ElefantMidle; i < ElefantHigh; i++)
	{
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
		if (ElephantOnTable != nullptr && (&(ElephantOnTable[i]) != nullptr))
		{
			//Initiate Local varibale By Global Objective Varibales.
			ii = static_cast<int>(ElephantOnTable[i].Row);
			jj = static_cast<int>(ElephantOnTable[i].Column);
			//Construction of Thinking Brown Current Objects.
			if (ElephantOnTable[i].ElefantThinking.TableListElefant.empty())
			{
				ElephantOnTable[i] = DrawElefant(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
			}
			//When There is Current Brown Object Table List Thinking Objective Movments.
			if (ElephantOnTable[i].ElefantThinking.TableListElefant.empty())
			{
				//For Each Brown Possible Movments. 
						//Thinking Operations of Brown Current Objects.
				ElephantOnTable[i].ElefantThinking.ThinkingBegin = true;
				ElephantOnTable[i].ElefantThinking.ThinkingFinished = false;
				ElephantOnTable[i].ElefantThinking.Thinking(ElephantOnTable[i].LoseOcuuredatChiled, ElephantOnTable[i].WinOcuuredatChiled);
			}

		}
	}

}

void AllDraw::InitiateAStarGreedythHourseBrown(int iii, int jjj, int **Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int **Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
{
	for (int i = HourseMidle; i < HourseHight; i++)
	{
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
		if (HoursesOnTable != nullptr && (&(HoursesOnTable[i]) != nullptr))
		{
			//Initiate Local varibale By Global Objective Varibales.
			ii = static_cast<int>(HoursesOnTable[i].Row);
			jj = static_cast<int>(HoursesOnTable[i].Column);
			//Construction of Thinking Brown Current Objects.
			if (HoursesOnTable[i].HourseThinking.TableListHourse.empty())
			{
				HoursesOnTable[i] = DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
			}
			//When There is Current Brown Object Table List Thinking Objective Movments.
			if (HoursesOnTable[i].HourseThinking.TableListHourse.empty())
			{
				//For Each Brown Possible Movments. 
						//Thinking Operations of Brown Current Objects.
				HoursesOnTable[i].HourseThinking.ThinkingBegin = true;
				HoursesOnTable[i].HourseThinking.ThinkingFinished = false;
				HoursesOnTable[i].HourseThinking.Thinking(HoursesOnTable[i].LoseOcuuredatChiled, HoursesOnTable[i].WinOcuuredatChiled);

			}
		}
	}
}

void AllDraw::InitiateAStarGreedythCastleBrown(int iii, int jjj, int **Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int **Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
{
	for (int i = CastleMidle; i < CastleHigh; i++)
	{
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
		if ((CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr))

		{
			//Initiate Local varibale By Global Objective Varibales.
			ii = static_cast<int>(CastlesOnTable[ii].Row);
			jj = static_cast<int>(CastlesOnTable[ii].Column);
			//Construction of Thinking Brown Current Objects.
			if (CastlesOnTable[ii].CastleThinking.TableListCastle.empty())
			{
				CastlesOnTable[ii] = DrawCastle(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
			}
			//When There is Current Brown Object Table List Thinking Objective Movments.
			if (CastlesOnTable[ii].CastleThinking.TableListCastle.empty())
			{
				//Thinking Operations of Brown Current Objects.
				CastlesOnTable[ii].CastleThinking.ThinkingBegin = true;
				CastlesOnTable[ii].CastleThinking.ThinkingFinished = false;
				CastlesOnTable[ii].CastleThinking.Thinking(CastlesOnTable[ii].LoseOcuuredatChiled, CastlesOnTable[ii].WinOcuuredatChiled);

			}
		}
	}

}


void AllDraw::InitiateAStarGreedythMinisterBrown(int iii, int jjj, int **Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int **Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
{
	for (int i = MinisterMidle; i < MinisterHigh; i++)
	{
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
		if ((MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr))
		{
			//Initiate Local varibale By Global Objective Varibales.
			ii = static_cast<int>(MinisterOnTable[i].Row);
			jj = static_cast<int>(MinisterOnTable[i].Column);
			//Construction of Thinking Brown Current Objects.
			if (MinisterOnTable[i].MinisterThinking.TableListMinister.empty())
			{
				MinisterOnTable[i] = DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
			}
			//When There is Current Brown Object Table List Thinking Objective Movments.
			if (MinisterOnTable[i].MinisterThinking.TableListMinister.empty())
			{
				//For Each Brown Possible Movments. 
				//Thinking Operations of Brown Current Objects.
				MinisterOnTable[i].MinisterThinking.ThinkingBegin = true;
				MinisterOnTable[i].MinisterThinking.ThinkingFinished = false;
				MinisterOnTable[i].MinisterThinking.Thinking(MinisterOnTable[i].LoseOcuuredatChiled, MinisterOnTable[i].WinOcuuredatChiled);
			}
		}
	}

}

void AllDraw::InitiateAStarGreedythKingBrown(int iii, int jjj, int **Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int **Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
{
	for (int i = KingMidle; i < KingHigh; i++)
	{
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
		if (KingOnTable != nullptr && (&(KingOnTable[i]) != nullptr))
		{
			//Initiate Local varibale By Global Objective Varibales.
			ii = static_cast<int>(KingOnTable[i].Row);
			jj = static_cast<int>(KingOnTable[i].Column);
			//Construction of Thinking Brown Current Objects.
			if (KingOnTable[i].KingThinking.TableListKing.empty())
			{
				KingOnTable[i] = DrawKing(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ii, jj, a, Table, Order, false, i);
			}


			//When There is Current Brown Object Table List Thinking Objective Movments.
			if (KingOnTable[i].KingThinking.TableListKing.empty())
			{
				//For Each Brown Possible Movments. 
				//Thinking Operations of Brown Current Objects.
				KingOnTable[i].KingThinking.ThinkingBegin = true;
				KingOnTable[i].KingThinking.ThinkingFinished = false;
				KingOnTable[i].KingThinking.Thinking(KingOnTable[i].LoseOcuuredatChiled, KingOnTable[i].WinOcuuredatChiled);

			}
		}
	}

}

bool AllDraw::FullBoundryConditions(int Current, int Order, int iAStarGreedy)
{
	//if (TimerEnded)
	//return true;

	bool IS = false;
	//if (iAStarGreedy < 0)
	//    IS = true;
	if (Order == 1)
	{
		for (int ikk = 0; ikk < SodierMidle; ikk++)
		{
			if ((&(SolderesOnTable[ikk]) == nullptr))
			{
				continue;
			}
			if (SolderesOnTable[ikk].LoseOcuuredatChiled < -1)
			{
				OutPut = std::wstring(L"\r\nCheckedMate SELF Boundry Conditon in Leafs found at  ") + StringConverterHelper::toString(ThinkingChess::FoundFirstSelfMating);
				IS = true;
			}
		}
		for (int ikk = 0; ikk < ElefantMidle; ikk++)
		{
			if ((&(ElephantOnTable[ikk]) == nullptr))
			{
				continue;
			}
			if (ElephantOnTable[ikk].LoseOcuuredatChiled < -1)
			{
				OutPut = std::wstring(L"\r\nCheckedMate SELF Boundry Conditon in Leafs found at  ") + StringConverterHelper::toString(ThinkingChess::FoundFirstSelfMating);
				IS = true;
			}
		}
		for (int ikk = 0; ikk < HourseMidle; ikk++)
		{
			if ((&(HoursesOnTable[ikk]) == nullptr))
			{
				continue;
			}
			if (HoursesOnTable[ikk].LoseOcuuredatChiled < -1)
			{
				OutPut = std::wstring(L"\r\nCheckedMate SELF Boundry Conditon in Leafs found at  ") + StringConverterHelper::toString(ThinkingChess::FoundFirstSelfMating);
				IS = true;
			}
		}
		for (int ikk = 0; ikk < CastleMidle; ikk++)
		{
			if ((&(CastlesOnTable[ikk]) == nullptr))
			{
				continue;
			}
			if (CastlesOnTable[ikk].LoseOcuuredatChiled < -1)
			{
				OutPut = std::wstring(L"\r\nCheckedMate SELF Boundry Conditon in Leafs found at  ") + StringConverterHelper::toString(ThinkingChess::FoundFirstSelfMating);
				IS = true;
			}
		}
		for (int ikk = 0; ikk < MinisterMidle; ikk++)
		{
			if ((&(MinisterOnTable[ikk]) == nullptr))
			{
				continue;
			}
			if (MinisterOnTable[ikk].LoseOcuuredatChiled < -1)
			{
				OutPut = std::wstring(L"\r\nCheckedMate SELF Boundry Conditon in Leafs found at  ") + StringConverterHelper::toString(ThinkingChess::FoundFirstSelfMating);
				IS = true;
			}
		}
		for (int ikk = 0; ikk < KingMidle; ikk++)
		{
			if ((&(KingOnTable[ikk]) == nullptr))
			{
				continue;
			}
			if (KingOnTable[ikk].LoseOcuuredatChiled < -1)
			{
				OutPut = std::wstring(L"\r\nCheckedMate SELF Boundry Conditon in Leafs found at  ") + StringConverterHelper::toString(ThinkingChess::FoundFirstSelfMating);
				IS = true;
			}
		}
		if ((ThinkingChess::FoundFirstMating >= MaxAStarGreedy) || (SetDeptIgnore))
		{
			OutPut = std::wstring(L"\r\nCheckedMate Boundry Conditon in Leafs found at  ") + StringConverterHelper::toString(ThinkingChess::FoundFirstMating);
			IS = true;
		}
		else
		{
			if (iAStarGreedy < 0)
			{
				iAStarGreedy = MaxAStarGreedy;
				OutPut = std::wstring(L"\r\nLevel Boundry Conditon for iAStarGreedy is Set To ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L"MaxAStarGreedy");
			}
		}
	}
	else
	{
		for (int ikk = SodierMidle; ikk < SodierHigh; ikk++)
		{
			if ((&(SolderesOnTable[ikk]) == nullptr))
			{
				continue;
			}
			if (SolderesOnTable[ikk].LoseOcuuredatChiled < -1)
			{
				OutPut = std::wstring(L"\r\nCheckedMate SELF Boundry Conditon in Leafs found at  ") + StringConverterHelper::toString(ThinkingChess::FoundFirstSelfMating);
				IS = true;
			}
		}
		for (int ikk = ElefantMidle; ikk < ElefantHigh; ikk++)
		{
			if ((&(ElephantOnTable[ikk]) == nullptr))
			{
				continue;
			}
			if (ElephantOnTable[ikk].LoseOcuuredatChiled < -1)
			{
				OutPut = std::wstring(L"\r\nCheckedMate SELF Boundry Conditon in Leafs found at  ") + StringConverterHelper::toString(ThinkingChess::FoundFirstSelfMating);
				IS = true;
			}
		}
		for (int ikk = HourseMidle; ikk < HourseHight; ikk++)
		{
			if ((&(HoursesOnTable[ikk]) == nullptr))
			{
				continue;
			}
			if (HoursesOnTable[ikk].LoseOcuuredatChiled < -1)
			{
				OutPut = std::wstring(L"\r\nCheckedMate SELF Boundry Conditon in Leafs found at  ") + StringConverterHelper::toString(ThinkingChess::FoundFirstSelfMating);
				IS = true;
			}
		}
		for (int ikk = CastleMidle; ikk < CastleHigh; ikk++)
		{
			if ((&(CastlesOnTable[ikk]) == nullptr))
			{
				continue;
			}
			if (CastlesOnTable[ikk].LoseOcuuredatChiled < -1)
			{
				OutPut = std::wstring(L"\r\nCheckedMate SELF Boundry Conditon in Leafs found at  ") + StringConverterHelper::toString(ThinkingChess::FoundFirstSelfMating);
				IS = true;
			}
		}
		for (int ikk = MinisterMidle; ikk < MinisterHigh; ikk++)
		{
			if ((&(MinisterOnTable[ikk]) == nullptr))
			{
				continue;
			}
			if (MinisterOnTable[ikk].LoseOcuuredatChiled < -1)
			{
				OutPut = std::wstring(L"\r\nCheckedMate SELF Boundry Conditon in Leafs found at  ") + StringConverterHelper::toString(ThinkingChess::FoundFirstSelfMating);
				IS = true;
			}
		}
		for (int ikk = KingMidle; ikk < KingHigh; ikk++)
		{
			if ((&(KingOnTable[ikk]) == nullptr))
			{
				continue;
			}
			if (KingOnTable[ikk].LoseOcuuredatChiled < -1)
			{
				OutPut = std::wstring(L"\r\nCheckedMate SELF Boundry Conditon in Leafs found at  ") + StringConverterHelper::toString(ThinkingChess::FoundFirstSelfMating);
				IS = true;
			}
		}
		if ((ThinkingChess::FoundFirstMating >= MaxAStarGreedy) || (SetDeptIgnore))
		{
			OutPut = std::wstring(L"\r\nCheckedMate Boundry Conditon in Leafs found at  ") + StringConverterHelper::toString(ThinkingChess::FoundFirstMating);
			IS = true;
		}
		else
		{
			if (iAStarGreedy < 0)
			{
				iAStarGreedy = MaxAStarGreedy;
				OutPut = std::wstring(L"\r\nLevel Boundry Conditon for iAStarGreedy is Set To ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L"MaxAStarGreedy");
			}
		}
	}
	return IS;
}
	//AStarGreedy First Initiat Thinking Main Method.
	
void AllDraw::InitiateAStarGreedyt(int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, int FOUND, int LeafAStarGreedy)
{
	OrderP = Order;
	SetObjectNumbers(Tab);

	int** Table = new int*[8];
	for (int iii = 0; iii < 8; iii++)
		Table[iii] = new int[8];
	for (int iii = 0; iii < 8; iii++)
		for (int jjj = 0; jjj < 8; jjj++)
			Table[iii, jjj] = Tab[iii, jjj];

	//Object oo = new Object();
	//lock(oo)
	//{
	ThinkingChess::BeginThread = 0;
	ThinkingChess::EndThread = 0;
	//}
	//Initiate of global Variables Byte Local Variables.
	int DummyOrder = 0;
	DummyOrder = Order;
	int DummyCurrentOrder = 0;
	DummyCurrentOrder = ChessRules::CurrentOrder;


	int i = 0, ik = 0;
	int** TablInit = new int*[8];
	for (int i = 0; i < 8; i++)
		TablInit[i] = new int[8];
	if (Order == 1)
		a = 1;
	else
		a = -1;
	int j = 0;
	if (iAStarGreedy < 0)
	{
		if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
			return;
	}

	CurrentAStarGredyMax = AStarGreedyiLevelMax - iAStarGreedy;
	//CurrentAStarGredyMax++;
	iAStarGreedy--;

	bool Do = false;
	if (iAStarGreedy >= 0 && iAStarGreedy < MaxDuringLevelThinkingCreation)
	{
		MaxDuringLevelThinkingCreation = iAStarGreedy;
		DepthIterative++;

		OutPut = L"\r\nMinimum Level During Thinking Tree Creation is " + StringConverterHelper::toString<int>(MaxDuringLevelThinkingCreation) + L"at Iterative " + StringConverterHelper::toString<int>(DepthIterative);

	}
	//If Order is Gray.
	if (Order == 1)
	{
		int i1 = i;
		int j1 = j;

		int **Tabl = CloneATable(Table);
		int DummyOrder1 = DummyOrder, DummyCurrentOrder1 = DummyCurrentOrder, iAStarGreedy1 = iAStarGreedy, ii1 = ii, jj1 = jj, Ord1 = Order;
		bool TB1 = TB;
		int aa = a;


		InitiateAStarGreedytSodlerGray(i1, j1, Tabl, DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, Tab, Ord1, TB1, FOUND, LeafAStarGreedy);


		InitiateAStarGreedytElephantGray(i1, j1, Tabl, DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, Tab, Ord1, TB1, FOUND, LeafAStarGreedy);

		InitiateAStarGreedythHourseGray(i1, j1, Tabl, DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, Tab, Ord1, TB1, FOUND, LeafAStarGreedy);

		InitiateAStarGreedythCastleGray(i1, j1, Tabl, DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, Tab, Ord1, TB1, FOUND, LeafAStarGreedy);

		InitiateAStarGreedythMinisterGray(i1, j1, Tabl, DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, Tab, Ord1, TB1, FOUND, LeafAStarGreedy);

		InitiateAStarGreedythKingGray(i1, j1, Tabl, DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, Tab, Ord1, TB1, FOUND, LeafAStarGreedy);

	}
	else //Brown Order Considarations.
	{
		int i1 = i;
		int j1 = j;
		int **Tabl = CloneATable(Table);
		int DummyOrder1 = DummyOrder, DummyCurrentOrder1 = DummyCurrentOrder, iAStarGreedy1 = iAStarGreedy, ii1 = ii, jj1 = jj, Ord1 = Order;
		bool TB1 = TB;
		int aa = a;
		//If Order is Gray.


		InitiateAStarGreedythSoldierBrown(i1, j1, Tabl, DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, Tab, Ord1, TB1, FOUND, LeafAStarGreedy);


		InitiateAStarGreedythElephantBrown(i1, j1, Tabl, DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, Tab, Ord1, TB1, FOUND, LeafAStarGreedy);

		InitiateAStarGreedythHourseBrown(i1, j1, Tabl, DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, Tab, Ord1, TB1, FOUND, LeafAStarGreedy);

		InitiateAStarGreedythCastleBrown(i1, j1, Tabl, DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, Tab, Ord1, TB1, FOUND, LeafAStarGreedy);
		InitiateAStarGreedythMinisterBrown(i1, j1, Tabl, DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, Tab, Ord1, TB1, FOUND, LeafAStarGreedy);
		InitiateAStarGreedytKingBrown(i1, j1, Tabl, DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, Tab, Ord1, TB1, FOUND, LeafAStarGreedy);



	}










	Order = DummyOrder;
	ChessRules::CurrentOrder = DummyCurrentOrder;

	Serve(Order);

	if (FOUND)
	{

		Tabl = CloneATable(Table);
		FoundOfLeafDepenOfKindAllDraw(Tabl, Order, iAStarGreedy, ii, jj, ik, j, FOUND, LeafAStarGreedy);

	}
	else
	{

		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
		int Ord = Order, iAStarGreedy1 = iAStarGreedy, ii1 = ii, jj1 = jj, ik1 = ik, j1 = j;

		Do = FullGameThinkingTree(Ord, iAStarGreedy1, ii1, jj1, ik1, j1, false, LeafAStarGreedy);




		if (!Do)
		{
			if (iAStarGreedy < MinThinkingTreeDepth)
			{
				MinThinkingTreeDepth = iAStarGreedy;
			}
		}


	}


	//return *(this); 

}


	
bool AllDraw::KingDan(int** Tab, int Order)
{
	bool IsDang = false;
	ChessRules A = ChessRules(0, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Order);
	IsDang = A.ObjectDangourKingMove(Order, Tab);
	if (Order == 1 && (IsDang))
	{
		if (A.CheckBrownObjectDangour && (!(A.CheckGrayObjectDangour)))
		{
			IsDang = false;
		}
	}
	if (Order == -1 && (IsDang))
	{
		if (A.CheckGrayObjectDangour && (!(A.CheckBrownObjectDangour)))
		{
			IsDang = false;
		}
	}
	return IsDang;

}
void AllDraw::BlitzGameThinkingTreeSolderGray(double PreviousLessS, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{ //Soldeir
	for (ik = 0; ik < SodierMidle; ik++)
	{
		if (SolderesOnTable == nullptr || (&(SolderesOnTable[ik]) == nullptr) || (&(SolderesOnTable[ik].SoldierThinking) == nullptr) || (&(SolderesOnTable[ik].SoldierThinking) == nullptr) || SolderesOnTable[ik].SoldierThinking.IsSup)
		{
			continue;
		}
		for (j = 0; j < SolderesOnTable[ik].SoldierThinking.HuristicListSolder.size(); j++)
		{
			if (AllDraw::OrderPlate == Order)
			{
				if (SolderesOnTable[ik].SoldierThinking.ReturnHuristic(-1, j, Order, false) < PreviousLessS || (SolderesOnTable[ik].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
				{

				}
				else
				{
					if (KingDan(SolderesOnTable[ik].SoldierThinking.TableListSolder[j], Order))
					{

					}
					else
					{
						PreviousLessS = SolderesOnTable[ik].SoldierThinking.ReturnHuristic(-1, j, Order, false);
						*(Index) = ik;
						*(jIndex) = j;
					}
				}
			}
			else
			{
				if (SolderesOnTable[ik].SoldierThinking.ReturnHuristic(-1, j, Order, false) > PreviousLessS || (SolderesOnTable[ik].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
				{

				}
				else
				{
					if (KingDan(SolderesOnTable[ik].SoldierThinking.TableListSolder[j], Order))
					{

					}
					else
					{
						PreviousLessS = SolderesOnTable[ik].SoldierThinking.ReturnHuristic(-1, j, Order, false);
						*(Index) = ik;
						*(jIndex) = j;
					}
				}
			}

		}
	}
}

void AllDraw::BlitzGameThinkingTreeElephantGray(double PreviousLessE, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{ //Elephant
	for (ik = 0; ik < ElefantMidle; ik++)
	{
		if (ElephantOnTable == nullptr || (&(ElephantOnTable[ik]) == nullptr) || (&(ElephantOnTable[ik].ElefantThinking) == nullptr) || (&(ElephantOnTable[ik].ElefantThinking) == nullptr) || ElephantOnTable[ik].ElefantThinking.IsSup)
		{
			continue;
		}
		for (j = 0; j < ElephantOnTable[ik].ElefantThinking.HuristicListElefant.size(); j++)
		{
			if (AllDraw::OrderPlate == Order)
			{
				if (ElephantOnTable[ik].ElefantThinking.ReturnHuristic(-1, j, Order, false) < PreviousLessE || (ElephantOnTable[ik].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
				{
					//ElephantOnTable[ik].ElefantThinking.AStarGreedy = null;
					//ElephantOnTable[ik] = null;
					continue;
				}
				else
				{
					if (KingDan(ElephantOnTable[ik].ElefantThinking.TableListElefant[j], Order))
					{
						//ElephantOnTable[ik].ElefantThinking.AStarGreedy = null;
						//ElephantOnTable[ik] = null;
						continue;
					}
					else
					{
						PreviousLessE = ElephantOnTable[ik].ElefantThinking.ReturnHuristic(-1, j, Order, false);
						Index[1] = ik;
						jIndex[1] = j;
					}
				}
			}
			else
			{
				if (ElephantOnTable[ik].ElefantThinking.ReturnHuristic(-1, j, Order, false) > PreviousLessE || (ElephantOnTable[ik].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
				{
					//ElephantOnTable[ik].ElefantThinking.AStarGreedy = null;
					//ElephantOnTable[ik] = null;
					continue;
				}
				else
				{
					if (KingDan(ElephantOnTable[ik].ElefantThinking.TableListElefant[j], Order))
					{
						//ElephantOnTable[ik].ElefantThinking.AStarGreedy = null;
						//ElephantOnTable[ik] = null;
						continue;
					}
					else
					{
						PreviousLessE = ElephantOnTable[ik].ElefantThinking.ReturnHuristic(-1, j, Order, false);
						Index[1] = ik;
						jIndex[1] = j;
					}
				}
			}

		}
	}



}

void AllDraw::BlitzGameThinkingTreeHourseGray(double PreviousLessH, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{ //Hourse.
	for (ik = 0; ik < HourseMidle; ik++)
	{
		//try
		{
			if (HoursesOnTable == nullptr || (&(HoursesOnTable[ik]) == nullptr) || (&(HoursesOnTable[ik].HourseThinking) == nullptr) || (&(HoursesOnTable[ik].HourseThinking) == nullptr) || HoursesOnTable[ik].HourseThinking.IsSup)
			{
				continue;
			}
			for (j = 0; j < HoursesOnTable[ik].HourseThinking.HuristicListHourse.size(); j++)
			{
				//autoO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					//lock (O)
				{

					if (AllDraw::OrderPlate == Order)
					{
						if (HoursesOnTable[ik].HourseThinking.ReturnHuristic(-1, j, Order, false) < PreviousLessH || (HoursesOnTable[ik].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
							//HoursesOnTable[ik].HourseThinking.AStarGreedy = null;
							continue;
						}
						else
						{
							if (KingDan(HoursesOnTable[ik].HourseThinking.TableListHourse[j], Order))
							{
								//HoursesOnTable[ik].HourseThinking.AStarGreedy = null;
								continue;
							}
							else
							{
								PreviousLessH = HoursesOnTable[ik].HourseThinking.ReturnHuristic(-1, j, Order, false);
								Index[2] = ik;
								jIndex[2] = j;
							}
						}
					}
					else
					{

						if (HoursesOnTable[ik].HourseThinking.ReturnHuristic(-1, j, Order, false) > PreviousLessH || (HoursesOnTable[ik].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
							//HoursesOnTable[ik].HourseThinking.AStarGreedy = null;
							continue;
						}
						else
						{
							if (KingDan(HoursesOnTable[ik].HourseThinking.TableListHourse[j], Order))
							{
								//HoursesOnTable[ik].HourseThinking.AStarGreedy = null;
								continue;
							}
							else
							{
								PreviousLessH = HoursesOnTable[ik].HourseThinking.ReturnHuristic(-1, j, Order, false);
								Index[2] = ik;
								jIndex[2] = j;
							}
						}
					}

				}
			}
		}
		//catch(std::exception &t)
		{

		}
	}
}
void AllDraw::BlitzGameThinkingTreeCastleGray(double PreviousLessB, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{
	//Castle.
	for (ik = 0; ik < CastleMidle; ik++)
	{
		//try
		{
			if (CastlesOnTable == nullptr || (&(CastlesOnTable[ik]) == nullptr) || (&(CastlesOnTable[ik].CastleThinking) == nullptr) || (&(CastlesOnTable[ik].CastleThinking) == nullptr) || CastlesOnTable[ik].CastleThinking.IsSup)
			{
				continue;
			}
			for (j = 0; j < CastlesOnTable[ik].CastleThinking.HuristicListCastle.size(); j++)
			{
				//autoO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					//lock (O)
				{
					if (AllDraw::OrderPlate == Order)
					{
						if (CastlesOnTable[ik].CastleThinking.ReturnHuristic(-1, j, Order, false) < PreviousLessB || (CastlesOnTable[ik].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{

							//CastlesOnTable[ik].CastleThinking.AStarGreedy = null;
							//CastlesOnTable[ik] = null;
							continue;
						}
						else
						{
							if (KingDan(CastlesOnTable[ik].CastleThinking.TableListCastle[j], Order))
							{

								//CastlesOnTable[ik].CastleThinking.AStarGreedy = null;
								//CastlesOnTable[ik] = null;
								continue;
							}
							else
							{
								PreviousLessB = CastlesOnTable[ik].CastleThinking.ReturnHuristic(-1, j, Order, false);
								Index[3] = ik;
								jIndex[3] = j;
							}
						}
					}
					else
					{
						if (CastlesOnTable[ik].CastleThinking.ReturnHuristic(-1, j, Order, false) > PreviousLessB || (CastlesOnTable[ik].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{

							//CastlesOnTable[ik].CastleThinking.AStarGreedy = null;
							//CastlesOnTable[ik] = null;
							continue;
						}
						else
						{
							if (KingDan(CastlesOnTable[ik].CastleThinking.TableListCastle[j], Order))
							{

								//CastlesOnTable[ik].CastleThinking.AStarGreedy = null;
								//CastlesOnTable[ik] = null;
								continue;
							}
							else
							{
								PreviousLessB = CastlesOnTable[ik].CastleThinking.ReturnHuristic(-1, j, Order, false);
								Index[3] = ik;
								jIndex[3] = j;
							}
						}
					}
				}
			}
		}
		//catch(std::exception &t)
		{

		}
	}

}
void AllDraw::BlitzGameThinkingTreeMinisterGray(double PreviousLessM, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{ //Minister.
	for (ik = 0; ik < MinisterMidle; ik++)
	{
		//try
		{
			if (MinisterOnTable == nullptr || (&(MinisterOnTable[ik]) == nullptr) || (&(MinisterOnTable[ik].MinisterThinking) == nullptr) || (&(MinisterOnTable[ik].MinisterThinking) == nullptr) || MinisterOnTable[ik].MinisterThinking.IsSup)
			{
				continue;
			}
			for (j = 0; j < MinisterOnTable[ik].MinisterThinking.HuristicListMinister.size(); j++)
			{

				//autoO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					//lock (O)
				{
					if (AllDraw::OrderPlate == Order)
					{
						if (MinisterOnTable[ik].MinisterThinking.ReturnHuristic(-1, j, Order, false) < PreviousLessM || (MinisterOnTable[ik].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
							// MinisterOnTable[ik].MinisterThinking.AStarGreedy = null;
							// MinisterOnTable[ik] = null;

							// continue;
						}
						else
						{
							if (KingDan(MinisterOnTable[ik].MinisterThinking.TableListMinister[j], Order))
							{
								// MinisterOnTable[ik].MinisterThinking.AStarGreedy = null;
								// MinisterOnTable[ik] = null;

								// continue;
							}
							else
							{
								Index[4] = ik;
								jIndex[4] = j;
								PreviousLessM = MinisterOnTable[ik].MinisterThinking.ReturnHuristic(-1, j, Order, false);
							}
						}
					}
					else
					{
						if (MinisterOnTable[ik].MinisterThinking.ReturnHuristic(-1, j, Order, false) > PreviousLessM || (MinisterOnTable[ik].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
							// MinisterOnTable[ik].MinisterThinking.AStarGreedy = null;
							// MinisterOnTable[ik] = null;

							// continue;
						}
						else
						{
							if (KingDan(MinisterOnTable[ik].MinisterThinking.TableListMinister[j], Order))
							{
								// MinisterOnTable[ik].MinisterThinking.AStarGreedy = null;
								// MinisterOnTable[ik] = null;

								// continue;
							}
							else
							{
								Index[4] = ik;
								jIndex[4] = j;
								PreviousLessM = MinisterOnTable[ik].MinisterThinking.ReturnHuristic(-1, j, Order, false);
							}
						}
					}

				}
			}
		}
		//catch(std::exception &t)
		{

		}
	}
}
void AllDraw::BlitzGameThinkingTreeKingGray(double PreviousLessK, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{ //King.
	for (ik = 0; ik < KingMidle; ik++)
	{
		//try
		{
			if (KingOnTable == nullptr || (&(KingOnTable[ik]) == nullptr) || (&(KingOnTable[ik].KingThinking) == nullptr) || (&(KingOnTable[ik].KingThinking) == nullptr) || KingOnTable[ik].KingThinking.IsSup)
			{
				continue;
			}
			for (j = 0; j < KingOnTable[ik].KingThinking.HuristicListKing.size(); j++)
			{
				//autoO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					//lock (O)
				{
					if (AllDraw::OrderPlate == Order)
					{
						if (KingOnTable[ik].KingThinking.ReturnHuristic(-1, j, Order, false) < PreviousLessK || (KingOnTable[ik].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
							//KingOnTable[ik].KingThinking.AStarGreedy = null;
							//KingOnTable[ik] = null;
							continue;
						}
						else
						{
							if (KingDan(KingOnTable[ik].KingThinking.TableListKing[j], Order))
							{
								//KingOnTable[ik].KingThinking.AStarGreedy = null;
								//KingOnTable[ik] = null;
								continue;
							}
							else
							{
								Index[5] = ik;
								jIndex[5] = j;
								PreviousLessK = KingOnTable[ik].KingThinking.ReturnHuristic(-1, j, Order, false);
							}
						}
					}
					else
					{
						if (KingOnTable[ik].KingThinking.ReturnHuristic(-1, j, Order, false) > PreviousLessK || (KingOnTable[ik].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
							//KingOnTable[ik].KingThinking.AStarGreedy = null;
							//KingOnTable[ik] = null;
							continue;
						}
						else
						{
							if (KingDan(KingOnTable[ik].KingThinking.TableListKing[j], Order))
							{
								//KingOnTable[ik].KingThinking.AStarGreedy = null;
								//KingOnTable[ik] = null;
								continue;
							}
							else
							{
								Index[5] = ik;
								jIndex[5] = j;
								PreviousLessK = KingOnTable[ik].KingThinking.ReturnHuristic(-1, j, Order, false);
							}
						}
					}

				}
			}
		}
		//catch(std::exception &t)
		{

		}
	}
}
void AllDraw::BlitzGameTreeCreationThinkingTreeSolder(int a, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{

	//autoO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		//lock (O1)
	{

		if (Index[0] != -1)
		{
			if (SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy.empty())
			{
				SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
			}
			SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy[SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy.size() - 1].TableList.clear();
			SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy[SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy.size() - 1].TableList.push_back(SolderesOnTable[Index[0]].SoldierThinking.TableListSolder[j][jIndex[0]]);
			SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy[SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy.size() - 1].SetRowColumn(0);
			//SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy[SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, SolderesOnTable[Index[0]].SoldierThinking.TableListSolder[j][jIndex[0]], Order, false);
			//ParameterizedThreadStart start = new ParameterizedThreadStart(SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy[SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt);
			//Task *array_Renamed = Task::Factory.StartNew([&] ()
			//{
			SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy[SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, SolderesOnTable[Index[0]].SoldierThinking.RowColumnSoldier[jIndex[0]][0], SolderesOnTable[Index[0]].SoldierThinking.RowColumnSoldier[jIndex[0]][1], a, SolderesOnTable[Index[0]].SoldierThinking.TableListSolder[j][jIndex[0]], Order, false, FOUND, LeafAStarGreedy);
			//});
			//autottttt = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				//lock (ttttt)
				//{
					//tHA->push_back(array_Renamed);
				//}
				//array_Renamed.Wait();
				//array.Name = "S" + i.ToString();
				//array.Start();

		}
	}
	//Parallel.ForEach(tHA, items => Task.WaitAny(items));


}
void AllDraw::BlitzGameTreeCreationThinkingTreeElephant(int a, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{

	//autoO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		//lock (O1)
	{
		if (Index[1] != -1)
		{
			if (ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy.empty())
			{
				ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
			}
			ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy[ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy.size() - 1].TableList.clear();
			ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy[ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy.size() - 1].TableList.push_back(ElephantOnTable[Index[1]].ElefantThinking.TableListElefant[jIndex[1]]);
			ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy[ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy.size() - 1].SetRowColumn(0);
			//ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy[ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, ElephantOnTable[Index[1]].ElefantThinking.TableListElefant[jIndex[1]], Order, false);
			//ParameterizedThreadStart start = new ParameterizedThreadStart(ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy[ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt);
			ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy[ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ElephantOnTable[Index[1]].ElefantThinking.RowColumnElefant[jIndex[1]][0], ElephantOnTable[Index[1]].ElefantThinking.RowColumnElefant[jIndex[1]][1], a, ElephantOnTable[Index[1]].ElefantThinking.TableListElefant[jIndex[1]], Order, false, FOUND, LeafAStarGreedy);

		}
	}
	//Parallel.ForEach(tHA, items => Task.WaitAny(items));
}
void AllDraw::BlitzGameTreeCreationThinkingTreeHourse(int a, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{

	//autoO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		//lock (O1)
	{
		if (Index[2] != -1)
		{
			if (HoursesOnTable[Index[2]].HourseThinking.AStarGreedy.empty())
			{
				HoursesOnTable[Index[2]].HourseThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
			}
			HoursesOnTable[Index[2]].HourseThinking.AStarGreedy[HoursesOnTable[Index[2]].HourseThinking.AStarGreedy.size() - 1].TableList.clear();

			HoursesOnTable[Index[2]].HourseThinking.AStarGreedy[HoursesOnTable[Index[2]].HourseThinking.AStarGreedy.size() - 1].TableList.push_back(HoursesOnTable[Index[2]].HourseThinking.TableListHourse[jIndex[2]]);
			HoursesOnTable[Index[2]].HourseThinking.AStarGreedy[HoursesOnTable[Index[2]].HourseThinking.AStarGreedy.size() - 1].SetRowColumn(0);
			HoursesOnTable[Index[2]].HourseThinking.AStarGreedy[HoursesOnTable[Index[2]].HourseThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, HoursesOnTable[Index[2]].HourseThinking.RowColumnHourse[jIndex[2]][0], HoursesOnTable[Index[2]].HourseThinking.RowColumnHourse[jIndex[2]][1], a, HoursesOnTable[Index[2]].HourseThinking.TableListHourse[jIndex[2]], Order, false, FOUND, LeafAStarGreedy);

		}
	}
	//Parallel.ForEach(tHA, items => Task.WaitAny(items));
}
void AllDraw::BlitzGameTreeCreationThinkingTreeCastle(int a, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{

	//autoO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		//lock (O1)
	{
		if (Index[3] != -1)
		{
			if (CastlesOnTable[Index[3]].CastleThinking.AStarGreedy.empty())
			{
				CastlesOnTable[Index[3]].CastleThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
			}
			CastlesOnTable[Index[3]].CastleThinking.AStarGreedy[CastlesOnTable[Index[3]].CastleThinking.AStarGreedy.size() - 1].TableList.clear();
			CastlesOnTable[Index[3]].CastleThinking.AStarGreedy[CastlesOnTable[Index[3]].CastleThinking.AStarGreedy.size() - 1].TableList.push_back(CastlesOnTable[Index[3]].CastleThinking.TableListCastle[jIndex[3]]);
			CastlesOnTable[Index[3]].CastleThinking.AStarGreedy[CastlesOnTable[Index[3]].CastleThinking.AStarGreedy.size() - 1].SetRowColumn(0);

			CastlesOnTable[Index[3]].CastleThinking.AStarGreedy[CastlesOnTable[Index[3]].CastleThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, CastlesOnTable[Index[3]].CastleThinking.RowColumnCastle[jIndex[3]][0], CastlesOnTable[Index[3]].CastleThinking.RowColumnCastle[jIndex[3]][1], a, CastlesOnTable[Index[3]].CastleThinking.TableListCastle[jIndex[3]], Order, false, FOUND, LeafAStarGreedy);
		}
	}
}
void AllDraw::BlitzGameTreeCreationThinkingTreeMinister(int a, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{

	//autoO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		//lock (O1)
	{
		if (Index[4] != -1)
		{
			if (MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy.empty())
			{
				MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
			}
			MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy[MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy.size() - 1].TableList.clear();
			MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy[MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy.size() - 1].TableList.push_back(MinisterOnTable[Index[4]].MinisterThinking.TableListMinister[jIndex[4]]);
			MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy[MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy.size() - 1].SetRowColumn(0);
			MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy[MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, MinisterOnTable[Index[4]].MinisterThinking.RowColumnMinister[jIndex[4]][0], MinisterOnTable[Index[4]].MinisterThinking.RowColumnMinister[jIndex[4]][1], a, MinisterOnTable[Index[4]].MinisterThinking.TableListMinister[jIndex[4]], Order, false, FOUND, LeafAStarGreedy);

		}
		//Parallel.ForEach(tHA, items => Task.WaitAny(items));
	}
}
void AllDraw::BlitzGameTreeCreationThinkingTreeKing(int a, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{

	//autoO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		//lock (O1)
	{
		if (Index[5] != -1)
		{
			if (KingOnTable[Index[5]].KingThinking.AStarGreedy.empty())
			{
				KingOnTable[Index[5]].KingThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
			}
			KingOnTable[Index[5]].KingThinking.AStarGreedy[KingOnTable[Index[5]].KingThinking.AStarGreedy.size() - 1].TableList.clear();
			KingOnTable[Index[5]].KingThinking.AStarGreedy[KingOnTable[Index[5]].KingThinking.AStarGreedy.size() - 1].TableList.push_back(KingOnTable[Index[5]].KingThinking.TableListKing[jIndex[5]]);
			KingOnTable[Index[5]].KingThinking.AStarGreedy[KingOnTable[Index[5]].KingThinking.AStarGreedy.size() - 1].SetRowColumn(0);
			KingOnTable[Index[5]].KingThinking.AStarGreedy[KingOnTable[Index[5]].KingThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, KingOnTable[Index[5]].KingThinking.RowColumnKing[jIndex[5]][0], KingOnTable[Index[5]].KingThinking.RowColumnKing[jIndex[5]][1], a, KingOnTable[Index[5]].KingThinking.TableListKing[jIndex[5]], Order, false, FOUND, LeafAStarGreedy);

		}
		//Parallel.ForEach(tHA, items => Task.WaitAny(items));
	}
}
void AllDraw::BlitzGameThinkingTreeSolderBrown(double PreviousLessS, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{
	for (ik = SodierMidle; ik < SodierHigh; ik++)
	{
		if (SolderesOnTable == nullptr || (&(SolderesOnTable[ik]) == nullptr) || (&(SolderesOnTable[ik].SoldierThinking) == nullptr) || (&(SolderesOnTable[ik].SoldierThinking) == nullptr) || SolderesOnTable[ik].SoldierThinking.IsSup)
		{
			continue;
		}
		//Soldier.
		for (j = 0; j < SolderesOnTable[ik].SoldierThinking.HuristicListSolder.size(); j++)
		{
			if (AllDraw::OrderPlate == Order)
			{
				if (SolderesOnTable[ik].SoldierThinking.ReturnHuristic(-1, j, Order, false) < PreviousLessS || (SolderesOnTable[ik].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
				{
					//SolderesOnTable[ik].SoldierThinking.AStarGreedy = null;
					//SolderesOnTable[ik] = null;
					continue;
				}
				else
				{
					if (KingDan(SolderesOnTable[ik].SoldierThinking.TableListSolder[j], Order))
					{
						//SolderesOnTable[ik].SoldierThinking.AStarGreedy = null;
						//SolderesOnTable[ik] = null;
						continue;
					}
					else
					{
						Index[0] = ik;
						jIndex[0] = j;
						PreviousLessS = SolderesOnTable[ik].SoldierThinking.ReturnHuristic(-1, j, Order, false);

					}
				}
			}
			else
			{
				if (SolderesOnTable[ik].SoldierThinking.ReturnHuristic(-1, j, Order, false) > PreviousLessS || (SolderesOnTable[ik].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
				{
					//SolderesOnTable[ik].SoldierThinking.AStarGreedy = null;
					//SolderesOnTable[ik] = null;
					continue;
				}
				else
				{
					if (KingDan(SolderesOnTable[ik].SoldierThinking.TableListSolder[j], Order))
					{
						//SolderesOnTable[ik].SoldierThinking.AStarGreedy = null;
						//SolderesOnTable[ik] = null;
						continue;
					}
					else
					{
						Index[0] = ik;
						jIndex[0] = j;
						PreviousLessS = SolderesOnTable[ik].SoldierThinking.ReturnHuristic(-1, j, Order, false);

					}
				}
			}
		}
	}
}
void AllDraw::BlitzGameThinkingTreeElephantBrown(double PreviousLessE, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{ //Elephant
	for (ik = ElefantMidle; ik < ElefantHigh; ik++)
	{
		//try
		{
			if (ElephantOnTable == nullptr || (&(ElephantOnTable[ik]) == nullptr) || (&(ElephantOnTable[ik].ElefantThinking) == nullptr) || (&(ElephantOnTable[ik].ElefantThinking) == nullptr) || ElephantOnTable[ik].ElefantThinking.IsSup)
			{
				continue;
			}
			for (j = 0; j < ElephantOnTable[ik].ElefantThinking.HuristicListElefant.size(); j++)
			{
				if (AllDraw::OrderPlate == Order)
				{
					if (ElephantOnTable[ik].ElefantThinking.ReturnHuristic(-1, j, Order, false) < PreviousLessE || (ElephantOnTable[ik].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))

					{
						//ElephantOnTable[ik].ElefantThinking.AStarGreedy = null;
						//ElephantOnTable[ik] = null;
						continue;
					}
					else
					{
						if (KingDan(ElephantOnTable[ik].ElefantThinking.TableListElefant[j], Order))
						{
							//ElephantOnTable[ik].ElefantThinking.AStarGreedy = null;
							//ElephantOnTable[ik] = null;
							continue;
						}
						else
						{
							Index[1] = ik;
							jIndex[1] = j;
							PreviousLessE = ElephantOnTable[ik].ElefantThinking.ReturnHuristic(-1, j, Order, false);
						}
					}
				}
				else
				{
					if (ElephantOnTable[ik].ElefantThinking.ReturnHuristic(-1, j, Order, false) > PreviousLessE || (ElephantOnTable[ik].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))

					{
						//ElephantOnTable[ik].ElefantThinking.AStarGreedy = null;
						//ElephantOnTable[ik] = null;
						continue;
					}
					else
					{
						if (KingDan(ElephantOnTable[ik].ElefantThinking.TableListElefant[j], Order))
						{
							//ElephantOnTable[ik].ElefantThinking.AStarGreedy = null;
							//ElephantOnTable[ik] = null;
							continue;
						}
						else
						{
							Index[1] = ik;
							jIndex[1] = j;
							PreviousLessE = ElephantOnTable[ik].ElefantThinking.ReturnHuristic(-1, j, Order, false);
						}
					}
				}


			}
		}
		//catch(std::exception &t)
		{

		}
	}


}
void AllDraw::BlitzGameThinkingTreeHourseBrown(double PreviousLessH, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{ //Hourse.
	for (ik = HourseMidle; ik < HourseHight; ik++)
	{
		//try
		{
			if (HoursesOnTable == nullptr || (&(HoursesOnTable[ik]) == nullptr) || (&(HoursesOnTable[ik].HourseThinking) == nullptr) || (&(HoursesOnTable[ik].HourseThinking) == nullptr) || HoursesOnTable[ik].HourseThinking.IsSup)
			{
				continue;
			}
			for (j = 0; j < HoursesOnTable[ik].HourseThinking.HuristicListHourse.size(); j++)
			{
				if (AllDraw::OrderPlate == Order)
				{
					if (HoursesOnTable[ik].HourseThinking.ReturnHuristic(-1, j, Order, false) < PreviousLessH || (HoursesOnTable[ik].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))

					{
						//HoursesOnTable[ik].HourseThinking.AStarGreedy = null;
						//HoursesOnTable[ik] = null;
						continue;
					}
					else
					{
						if (KingDan(HoursesOnTable[ik].HourseThinking.TableListHourse[j], Order))
						{
							//HoursesOnTable[ik].HourseThinking.AStarGreedy = null;
							//HoursesOnTable[ik] = null;
							continue;
						}
						else
						{
							Index[2] = ik;
							jIndex[2] = j;
							PreviousLessH = HoursesOnTable[ik].HourseThinking.ReturnHuristic(-1, j, Order, false);
							;
						}
					}

				}
				else
				{
					if (HoursesOnTable[ik].HourseThinking.ReturnHuristic(-1, j, Order, false) > PreviousLessH || (HoursesOnTable[ik].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))

					{
						//HoursesOnTable[ik].HourseThinking.AStarGreedy = null;
						//HoursesOnTable[ik] = null;
						continue;
					}
					else
					{
						if (KingDan(HoursesOnTable[ik].HourseThinking.TableListHourse[j], Order))
						{
							//HoursesOnTable[ik].HourseThinking.AStarGreedy = null;
							//HoursesOnTable[ik] = null;
							continue;
						}
						else
						{
							Index[2] = ik;
							jIndex[2] = j;
							PreviousLessH = HoursesOnTable[ik].HourseThinking.ReturnHuristic(-1, j, Order, false);
							;
						}
					}
				}

			}
		}
		//catch(std::exception &t)
		{

		}
	}

}
int  AllDraw::FullGameMakimgBlitz(int* Index, int* jIndex, int Order, int LeafAStarGreedy)
{
	int Kind = -1;
	double PS = -DBL_MAX, PE = -DBL_MAX, PH = -DBL_MAX, PB = -DBL_MAX, PM = -DBL_MAX, PK = -DBL_MAX;
	if (Order != AllDraw::OrderPlate)
	{
		PS = DBL_MAX;
		PE = DBL_MAX;
		PH = DBL_MAX;
		PB = DBL_MAX;
		PM = DBL_MAX;
		PK = DBL_MAX;

	}

	int index[6] = { -1, -1, -1, -1, -1, -1 };
	int jindex[6] = { -1, -1, -1, -1, -1, -1 };
	if (Order == 1)
	{
		BlitzGameThinkingTreeSolderGray(PS, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
		BlitzGameThinkingTreeElephantGray(PE, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
		BlitzGameThinkingTreeHourseGray(PH, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
		BlitzGameThinkingTreeCastleGray(PB, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
		BlitzGameThinkingTreeMinisterGray(PM, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
		BlitzGameThinkingTreeKingGray(PK, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);

	}
	else
	{
		BlitzGameThinkingTreeSolderBrown(PS, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
		BlitzGameThinkingTreeElephantBrown(PE, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
		BlitzGameThinkingTreeHourseBrown(PH, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
		BlitzGameThinkingTreeCastleBrown(PB, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
		BlitzGameThinkingTreeMinisterBrown(PM, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
		BlitzGameThinkingTreeKingBrown(PK, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);

	}
	int JI = -1;

	if (Order == OrderPlate)
	{
		JI = MaxOfSixHuristic(PS, PE, PH, PB, PM, PK);
	}
	else
	{
		JI = MinOfSixHuristic(PS, PE, PH, PB, PM, PK);
	}

	if (JI != -1)
	{
		Kind = JI;
		for (int i = 0; i < 6; i++)
		{
			Index[i] = index[i];
			jIndex[i] = jindex[i];
		}
	}
	return abs(Kind);
}
void AllDraw::BlitzGameThinkingTreeCastleBrown(double PreviousLessB, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{ //Castles.
	for (ik = CastleMidle; ik < CastleHigh; ik++)
	{
		//try
		{
			if (CastlesOnTable == nullptr || (&(CastlesOnTable[ik]) == nullptr) || (&(CastlesOnTable[ik].CastleThinking) == nullptr) || (&(CastlesOnTable[ik].CastleThinking) == nullptr) || CastlesOnTable[ik].CastleThinking.IsSup)
			{
				continue;
			}
			for (j = 0; j < CastlesOnTable[ik].CastleThinking.HuristicListCastle.size(); j++)
			{

				if (AllDraw::OrderPlate == Order)
				{
					if (CastlesOnTable[ik].CastleThinking.ReturnHuristic(-1, j, Order, false) < PreviousLessB || (CastlesOnTable[ik].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))

					{
						//CastlesOnTable[ik].CastleThinking.AStarGreedy = null;
						//CastlesOnTable[ik] = null;
						continue;
					}
					else
					{
						if (KingDan(CastlesOnTable[ik].CastleThinking.TableListCastle[j], Order))
						{

							//CastlesOnTable[ik].CastleThinking.AStarGreedy = null;
							//CastlesOnTable[ik] = null;
							continue;
						}

						else
						{
							Index[3] = ik;
							jIndex[3] = j;
							PreviousLessB = CastlesOnTable[ik].CastleThinking.ReturnHuristic(-1, j, Order, false);
							;
						}
					}

				}
				else
				{
					if (CastlesOnTable[ik].CastleThinking.ReturnHuristic(-1, j, Order, false) > PreviousLessB || (CastlesOnTable[ik].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))

					{
						//CastlesOnTable[ik].CastleThinking.AStarGreedy = null;
						//CastlesOnTable[ik] = null;
						continue;
					}
					else
					{
						if (KingDan(CastlesOnTable[ik].CastleThinking.TableListCastle[j], Order))
						{

							//CastlesOnTable[ik].CastleThinking.AStarGreedy = null;
							//CastlesOnTable[ik] = null;
							continue;
						}

						else
						{
							Index[3] = ik;
							jIndex[3] = j;
							PreviousLessB = CastlesOnTable[ik].CastleThinking.ReturnHuristic(-1, j, Order, false);
							;
						}
					}
				}

			}
		}
		//catch(std::exception &t)
		{

		}
	}

}
void AllDraw::BlitzGameThinkingTreeMinisterBrown(double PreviousLessM, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{ //Minister.
	for (ik = MinisterMidle; ik < MinisterHigh; ik++)
	{
		//try
		{
			if (MinisterOnTable == nullptr || (&(MinisterOnTable[ik]) == nullptr) || (&(MinisterOnTable[ik].MinisterThinking) == nullptr) || (&(MinisterOnTable[ik].MinisterThinking) == nullptr) || MinisterOnTable[ik].MinisterThinking.IsSup)
			{
				continue;
			}
			for (j = 0; j < MinisterOnTable[ik].MinisterThinking.HuristicListMinister.size(); j++)
			{
				if (AllDraw::OrderPlate == Order)
				{
					if (MinisterOnTable[ik].MinisterThinking.ReturnHuristic(-1, j, Order, false) < PreviousLessM || (MinisterOnTable[ik].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))

					{
						// MinisterOnTable[ik].MinisterThinking.AStarGreedy = null;
						//MinisterOnTable[ik] = null;
						continue;
					}
					else
					{
						if (KingDan(MinisterOnTable[ik].MinisterThinking.TableListMinister[j], Order))
						{
							Index[4] = ik;
							jIndex[4] = j;
							PreviousLessM = MinisterOnTable[ik].MinisterThinking.ReturnHuristic(-1, j, Order, false);
							;
						}
					}
				}
				else
				{
					if (MinisterOnTable[ik].MinisterThinking.ReturnHuristic(-1, j, Order, false) > PreviousLessM || (MinisterOnTable[ik].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
					{
						// MinisterOnTable[ik].MinisterThinking.AStarGreedy = null;
						//MinisterOnTable[ik] = null;
						continue;
					}
					else
					{
						if (KingDan(MinisterOnTable[ik].MinisterThinking.TableListMinister[j], Order))
						{
							Index[4] = ik;
							jIndex[4] = j;
							PreviousLessM = MinisterOnTable[ik].MinisterThinking.ReturnHuristic(-1, j, Order, false);
							;
						}
					}
				}
			}

		}
		//catch(std::exception &t)
		{

		}
	}

}
void AllDraw::BlitzGameThinkingTreeKingBrown(double PreviousLessK, int* Index, int* jIndex, int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{ //King.
	for (ik = KingMidle; ik < KingHigh; ik++)
	{
		//try
		{
			if (KingOnTable == nullptr || (&(KingOnTable[ik]) == nullptr) || (&(KingOnTable[ik].KingThinking) == nullptr) || (&(KingOnTable[ik].KingThinking) == nullptr) || KingOnTable[ik].KingThinking.IsSup)
			{
				continue;
			}
			for (j = 0; j < KingOnTable[ik].KingThinking.HuristicListKing.size(); j++)
			{
				if (AllDraw::OrderPlate == Order)
				{
					if (KingOnTable[ik].KingThinking.ReturnHuristic(-1, j, Order, false) < PreviousLessK || (KingOnTable[ik].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
					{
						//KingOnTable[ik].KingThinking.AStarGreedy = null;
						//KingOnTable[ik] = null;
						continue;
					}
					else
					{
						if (KingDan(KingOnTable[ik].KingThinking.TableListKing[j], Order))
						{
							//KingOnTable[ik].KingThinking.AStarGreedy = null;
							//KingOnTable[ik] = null;
							continue;
						}
						else
						{
							Index[5] = ik;
							jIndex[5] = j;
							PreviousLessK = KingOnTable[ik].KingThinking.ReturnHuristic(-1, j, Order, false);
							;
						}
					}
				}
				else
				{
					if (KingOnTable[ik].KingThinking.ReturnHuristic(-1, j, Order, false) > PreviousLessK || (KingOnTable[ik].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
					{
						//KingOnTable[ik].KingThinking.AStarGreedy = null;
						//KingOnTable[ik] = null;
						continue;
					}
					else
					{
						if (KingDan(KingOnTable[ik].KingThinking.TableListKing[j], Order))
						{
							//KingOnTable[ik].KingThinking.AStarGreedy = null;
							//KingOnTable[ik] = null;
							continue;
						}
						else
						{
							Index[5] = ik;
							jIndex[5] = j;
							PreviousLessK = KingOnTable[ik].KingThinking.ReturnHuristic(-1, j, Order, false);
							;
						}
					}
				}


			}
		}
		//catch(std::exception &t)
		{

		}
	}
}

void AllDraw::BlitzGameThinkingTree(int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
{ //Initiatye Variables.
	int DummyOrder = Order;
	int DummyCurrentOrder = ChessRules::CurrentOrder;

	int a;
	if (Order == 1)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}
	//Order *= -1;
	//ChessRules::CurrentOrder *= -1;
	int Index[6];

	int jIndex[6];
	double PreviousLessS = -DBL_MAX, PreviousLessE = -DBL_MAX, PreviousLessH = -DBL_MAX, PreviousLessB = -DBL_MAX, PreviousLessM = -DBL_MAX, PreviousLessK = -DBL_MAX;
	if (Order != OrderPlate)
	{
		PreviousLessS = DBL_MAX;
		PreviousLessE = DBL_MAX;
		PreviousLessH = DBL_MAX;
		PreviousLessB = DBL_MAX;
		PreviousLessM = DBL_MAX;
		PreviousLessK = DBL_MAX;

	}
	//For Gray Order calculating foreach Objects Maximum total Huristic Count Incl;usively.
	if (Order == 1)
	{

		Index[0] = -1;
		AllDraw::BlitzGameThinkingTreeSolderGray(PreviousLessS, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		Index[1] = -1;
		AllDraw::BlitzGameThinkingTreeElephantGray(PreviousLessE, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		Index[2] = -1;
		AllDraw::BlitzGameThinkingTreeHourseGray(PreviousLessH, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		Index[3] = -1;
		AllDraw::BlitzGameThinkingTreeCastleGray(PreviousLessB, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		Index[4] = -1;
		AllDraw::BlitzGameThinkingTreeMinisterGray(PreviousLessM, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		Index[5] = -1;
		AllDraw::BlitzGameThinkingTreeKingGray(PreviousLessK, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
	}
	else {
		Index[0] = -1;
		AllDraw::BlitzGameThinkingTreeSolderBrown(PreviousLessS, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		Index[1] = -1;
		AllDraw::BlitzGameThinkingTreeElephantBrown(PreviousLessE, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		Index[2] = -1;
		AllDraw::BlitzGameThinkingTreeHourseBrown(PreviousLessH, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		Index[3] = -1;
		AllDraw::BlitzGameThinkingTreeCastleGray(PreviousLessB, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		Index[4] = -1;
		AllDraw::BlitzGameThinkingTreeMinisterBrown(PreviousLessM, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		Index[5] = -1;
		AllDraw::BlitzGameThinkingTreeKingBrown(PreviousLessK, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
	}


	int JI = -1;

	JI = MaxOfSixHuristic(PreviousLessS, PreviousLessE, PreviousLessH, PreviousLessB, PreviousLessM, PreviousLessK);

	if (JI != -1)
	{
		if (JI == 0)
		{
			AllDraw::BlitzGameTreeCreationThinkingTreeSolder(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		}

		//Initiatye Variables.
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;


		if (Order == 1)
		{
			a = 1;
		}
		else
		{
			a = -1;
		}
		//Order *= -1;
		//ChessRules::CurrentOrder *= -1;
		if (JI == 1)

		{
			AllDraw::BlitzGameTreeCreationThinkingTreeElephant(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		}

		//Initiatye Variables.
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;


		if (Order == 1)
		{
			a = 1;
		}
		else
		{
			a = -1;
		}
		//Order *= -1;
		//ChessRules::CurrentOrder *= -1;
		if (JI == 2)

		{
			AllDraw::BlitzGameTreeCreationThinkingTreeHourse(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		}

		//Initiatye Variables.
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;


		if (Order == 1)
		{
			a = 1;
		}
		else
		{
			a = -1;
		}
		//Order *= -1;
		//ChessRules::CurrentOrder *= -1;
		if (JI == 3)
		{
			AllDraw::BlitzGameTreeCreationThinkingTreeCastle(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		}

		//Initiatye Variables.
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;


		if (Order == 1)
		{
			a = 1;
		}
		else
		{
			a = -1;
		}
		//Order *= -1;
		//ChessRules::CurrentOrder *= -1;
		if (JI == 4)
		{
			AllDraw::BlitzGameTreeCreationThinkingTreeMinister(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		}

		//Initiatye Variables.
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;


		if (Order == 1)
		{
			a = 1;
		}
		else
		{
			a = -1;
		}
		//Order *= -1;
		//ChessRules::CurrentOrder *= -1;
		if (JI == 5)
		{
			AllDraw::BlitzGameTreeCreationThinkingTreeKing(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		}

	}


	//For Brown Order Blitz Game Calculate Maximum Huristic Inclusive AStarGreedy First Game Search.
	else
	{
		//autoO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			//lock (O1)
		{
			Index[0] = -1;
			AllDraw::BlitzGameThinkingTreeSolderBrown(PreviousLessS, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
			Index[1] = -1;
			AllDraw::BlitzGameThinkingTreeElephantBrown(PreviousLessE, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
			Index[2] = -1;
			AllDraw::BlitzGameThinkingTreeHourseBrown(PreviousLessH, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
			Index[3] = -1;
			AllDraw::BlitzGameThinkingTreeCastleBrown(PreviousLessB, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
			Index[4] = -1;
			AllDraw::BlitzGameThinkingTreeMinisterBrown(PreviousLessM, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
			Index[5] = -1;
			AllDraw::BlitzGameThinkingTreeKingBrown(PreviousLessK, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
		}
		int JI = -1;
		//autoO2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			//lock (O2)
		{
			JI = MaxOfSixHuristic(PreviousLessS, PreviousLessE, PreviousLessH, PreviousLessB, PreviousLessM, PreviousLessK);
		}
		//autoO3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			//lock (O3)
		{
			if (JI != -1)
			{
				AllDraw::BlitzGameTreeCreationThinkingTreeSolder(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);

				//Initiatye Variables.
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;


				if (Order == 1)
				{
					a = 1;
				}
				else
				{
					a = -1;
				}
				//Order *= -1;
				//ChessRules::CurrentOrder *= -1;
				//if (JI == 1)

				AllDraw::BlitzGameTreeCreationThinkingTreeElephant(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);

				//Initiatye Variables.
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;


				if (Order == 1)
				{
					a = 1;
				}
				else
				{
					a = -1;
				}
				//Order *= -1;
				//ChessRules::CurrentOrder *= -1;
				if (JI == 2)

				{
					AllDraw::BlitzGameTreeCreationThinkingTreeHourse(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
				}

				//Initiatye Variables.
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;


				if (Order == 1)
				{
					a = 1;
				}
				else
				{
					a = -1;
				}
				//Order *= -1;
				//ChessRules::CurrentOrder *= -1;
				if (JI == 3)
				{
					AllDraw::BlitzGameTreeCreationThinkingTreeCastle(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
				}

				//Initiatye Variables.
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;


				if (Order == 1)
				{
					a = 1;
				}
				else
				{
					a = -1;
				}
				//Order *= -1;
				//ChessRules::CurrentOrder *= -1;
				if (JI == 4)
				{
					AllDraw::BlitzGameTreeCreationThinkingTreeMinister(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
				}

				//Initiatye Variables.
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;


				if (Order == 1)
				{
					a = 1;
				}
				else
				{
					a = -1;
				}
				//Order *= -1;
				//ChessRules::CurrentOrder *= -1;
				if (JI == 5)
				{
					AllDraw::BlitzGameTreeCreationThinkingTreeKing(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
				}


			}
		}
	}
}
	
std::wstring AllDraw::Alphabet(int RowRealesed)
{
	std::wstring A = L"";
	if (RowRealesed == 0)

		A = L"a";

	else

		if (RowRealesed == 1)

			A = L"b";

		else

			if (RowRealesed == 2)

				A = L"c";

			else

				if (RowRealesed == 3)

					A = L"d";

				else

					if (RowRealesed == 4)

						A = L"e";

					else

						if (RowRealesed == 5)

							A = L"f";

						else

							if (RowRealesed == 6)

								A = L"g";

							else

								if (RowRealesed == 7)

									A = L"h";


	return A;
}

std::wstring AllDraw::Number(int ColumnRealeased)
{
	std::wstring A = L"";
	if (ColumnRealeased == 7)
		A = L"0";
	else
		if (ColumnRealeased == 6)
			A = L"1";
		else
			if (ColumnRealeased == 5)
				A = L"2";
			else
				if (ColumnRealeased == 4)
					A = L"3";
				else
					if (ColumnRealeased == 3)
						A = L"4";
					else
						if (ColumnRealeased == 2)
							A = L"5";
						else
							if (ColumnRealeased == 1)
								A = L"6";
							else
								if (ColumnRealeased == 0)
									A = L"7";
	return A;

}

int  AllDraw::SumOfObjects(AllDraw A, int Order)
{
	int Sum = 0;
	if (&A == nullptr)
	{
		return Sum;
	}
	if (Order == 1)
	{
		for (int i = 0; i < A.SodierMidle; i++)
		{
			if ((&(A.SolderesOnTable[i]) != nullptr))
			{
				Sum += A.SolderesOnTable[i].WinOcuuredatChiled;
			}
		}
		for (int i = 0; i < A.ElefantMidle; i++)
		{
			if ((&(A.ElephantOnTable[i]) != nullptr))
			{
				Sum += A.ElephantOnTable[i].WinOcuuredatChiled;
			}
		}
		for (int i = 0; i < A.HourseMidle; i++)
		{
			if ((&(A.HoursesOnTable[i]) != nullptr))
			{
				Sum += A.HoursesOnTable[i].WinOcuuredatChiled;
			}
		}
		for (int i = 0; i < A.CastleMidle; i++)
		{
			if ((&(A.CastlesOnTable[i]) != nullptr))
			{
				Sum += A.CastlesOnTable[i].WinOcuuredatChiled;
			}
		}
		for (int i = 0; i < A.MinisterMidle; i++)
		{
			if ((&(A.MinisterOnTable[i]) != nullptr))
			{
				Sum += A.MinisterOnTable[i].WinOcuuredatChiled;
			}
		}
		for (int i = 0; i < A.KingMidle; i++)
		{
			if ((&(A.KingOnTable[i]) != nullptr))
			{
				Sum += A.KingOnTable[i].WinOcuuredatChiled;
			}
		}

	}
	else
	{
		for (int i = A.SodierMidle; i < A.SodierHigh; i++)
		{
			if ((&(A.SolderesOnTable[i]) != nullptr))
			{
				Sum += A.SolderesOnTable[i].WinOcuuredatChiled;
			}
		}
		for (int i = A.ElefantMidle; i < A.ElefantHigh; i++)
		{
			if ((&(A.ElephantOnTable[i]) != nullptr))
			{
				Sum += A.ElephantOnTable[i].WinOcuuredatChiled;
			}
		}
		for (int i = A.HourseMidle; i < A.HourseHight; i++)
		{
			if ((&(A.HoursesOnTable[i]) != nullptr))
			{
				Sum += A.HoursesOnTable[i].WinOcuuredatChiled;
			}
		}
		for (int i = A.CastleMidle; i < A.CastleHigh; i++)
		{
			if ((&(A.CastlesOnTable[i]) != nullptr))
			{
				Sum += A.CastlesOnTable[i].WinOcuuredatChiled;
			}
		}
		for (int i = A.MinisterMidle; i < A.MinisterHigh; i++)
		{
			if ((&(A.MinisterOnTable[i]) != nullptr))
			{
				Sum += A.MinisterOnTable[i].WinOcuuredatChiled;
			}
		}
		for (int i = A.KingMidle; i < A.KingHigh; i++)
		{
			if ((&(A.KingOnTable[i]) != nullptr))
			{
				Sum += A.KingOnTable[i].WinOcuuredatChiled;
			}
		}
	}
	return Sum;
}
int  AllDraw::SumMinusOfObjects(AllDraw A, int Order)
{
	int Sum = 0;
	if ((&A) == nullptr)
	{
		return Sum;
	}
	if (Order == 1)
	{
		for (int i = 0; i < A.SodierMidle; i++)
		{
			if ((&(A.SolderesOnTable[i])) != nullptr)
			{
				Sum += A.SolderesOnTable[i].LoseOcuuredatChiled;
			}
		}
		for (int i = 0; i < A.ElefantMidle; i++)
		{
			if ((&(A.ElephantOnTable[i])) != nullptr)
			{
				Sum += A.ElephantOnTable[i].LoseOcuuredatChiled;
			}
		}
		for (int i = 0; i < A.HourseMidle; i++)
		{
			if ((&(A.HoursesOnTable[i])) != nullptr)
			{
				Sum += A.HoursesOnTable[i].LoseOcuuredatChiled;
			}
		}
		for (int i = 0; i < A.CastleMidle; i++)
		{
			if ((&(A.CastlesOnTable[i])) != nullptr)
			{
				Sum += A.CastlesOnTable[i].LoseOcuuredatChiled;
			}
		}
		for (int i = 0; i < A.MinisterMidle; i++)
		{
			if ((&(A.MinisterOnTable[i])) != nullptr)
			{
				Sum += A.MinisterOnTable[i].LoseOcuuredatChiled;
			}
		}
		for (int i = 0; i < A.KingMidle; i++)
		{
			if ((&(A.KingOnTable[i])) != nullptr)
			{
				Sum += A.KingOnTable[i].LoseOcuuredatChiled;
			}
		}

	}
	else
	{
		for (int i = A.SodierMidle; i < A.SodierHigh; i++)
		{
			if ((&(A.SolderesOnTable[i])) != nullptr)
			{
				Sum += A.SolderesOnTable[i].LoseOcuuredatChiled;
			}
		}
		for (int i = A.ElefantMidle; i < A.ElefantHigh; i++)
		{
			if ((&(A.ElephantOnTable[i])) != nullptr)
			{
				Sum += A.ElephantOnTable[i].LoseOcuuredatChiled;
			}
		}
		for (int i = A.HourseMidle; i < A.HourseHight; i++)
		{
			if ((&(A.HoursesOnTable[i])) != nullptr)
			{
				Sum += A.HoursesOnTable[i].LoseOcuuredatChiled;
			}
		}
		for (int i = A.CastleMidle; i < A.CastleHigh; i++)
		{
			if ((&(A.CastlesOnTable[i])) != nullptr)
			{
				Sum += A.CastlesOnTable[i].LoseOcuuredatChiled;
			}
		}
		for (int i = A.MinisterMidle; i < A.MinisterHigh; i++)
		{
			if ((&(A.MinisterOnTable[i])) != nullptr)
			{
				Sum += A.MinisterOnTable[i].LoseOcuuredatChiled;
			}
		}
		for (int i = A.KingMidle; i < A.KingHigh; i++)
		{
			if ((&(A.KingOnTable[i])) != nullptr)
			{
				Sum += A.KingOnTable[i].LoseOcuuredatChiled;
			}
		}
	}
	return Sum;
}
bool  AllDraw::FullGameThinkingSoldier(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;
	TaskBegin++;
	int S = 0;
	while (SolderesOnTable[ik].SoldierThinking.ThinkingBegin && (!SolderesOnTable[ik].SoldierThinking.ThinkingFinished))
	{

	}
	if (iAStarGreedy < 0)
	{

		if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
		{
			return false;
		}

	}

	for (int j = 0; j < SolderesOnTable[ik].SoldierThinking.TableListSolder.size(); j++)
	{
		if (AllDraw::OrderPlate == Order)
		{
			if (SolderesOnTable[ik].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() != 0 || (!UsePenaltyRegardMechnisamT)) //&& SolderesOnTable[ik].SoldierThinking.PenaltyRegardListSolder[j].IsRewardAction() != 1 ||(!UsePenaltyRegardMechnisamT)
			{
				if (Blitz)
				{
					if (Index[0] != -1)
					{
						if (ik != Index[0])
						{
							if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.empty())
							{
								SolderesOnTable[ik].SoldierThinking.AStarGreedy = std::vector<AllDraw>();
							}
							SolderesOnTable[ik].SoldierThinking.AStarGreedy.push_back(new AllDraw(Order * -1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
							SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
							continue;
							;
						}
						else

						{
							if (j != jindex[0])
							{
								if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.empty())
								{
									SolderesOnTable[ik].SoldierThinking.AStarGreedy = std::vector<AllDraw>();
								}
								SolderesOnTable[ik].SoldierThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
								SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
								continue;

							}
						}
					}
					else
					{
						if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.empty())
						{
							SolderesOnTable[ik].SoldierThinking.AStarGreedy = std::vector<AllDraw>();
						}
						SolderesOnTable[ik].SoldierThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
						SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
						continue;
						;
					}

				}
				if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.empty())
				{
					SolderesOnTable[ik].SoldierThinking.AStarGreedy = std::vector<AllDraw>();
				}
				SolderesOnTable[ik].SoldierThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].TableList.clear();
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(SolderesOnTable[ik].SoldierThinking.TableListSolder[j]));
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].SetRowColumnFinishedWait();
			}
			if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() > 0)
			{
				OutPutAction = std::wstring(L" ") + Alphabet(SolderesOnTable[ik].SoldierThinking.Row) + Number(SolderesOnTable[ik].SoldierThinking.Column) + Alphabet(SolderesOnTable[ik].SoldierThinking.RowColumnSoldier[j][0]) + Number(SolderesOnTable[ik].SoldierThinking.RowColumnSoldier[j][1]);
				if (Order == 1)
				{
					OutPut = std::wstring(L"\r\nPerception Soldier AstarGreedy By Bob at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
				}
				else
				{
					OutPut = std::wstring(L"\r\nPerception Soldier AstarGreedy By Alice at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
				}

				PerceptionCount++;
				Do = true;
				int iii = (SolderesOnTable[ik].SoldierThinking.RowColumnSoldier[j][0]);
				int jjj = (SolderesOnTable[ik].SoldierThinking.RowColumnSoldier[j][1]);
				int aa = a;
				int **Tab = CloneATable(SolderesOnTable[ik].SoldierThinking.TableListSolder[j]);
				int Ord = Order * -1;
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, CloneATable(SolderesOnTable[ik].SoldierThinking.TableListSolder[j]), Order*-1, false, FOUND, LeafAStarGreedy);

				Do = true;
			}
		}

		else
		{
			if (SolderesOnTable[ik].SoldierThinking.PenaltyRegardListSolder[j].IsRewardAction() != 1 || (!UsePenaltyRegardMechnisamT)) //SolderesOnTable[ik].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() != 0 &&
			{
				if (Blitz)
				{
					if (Index[0] != -1)
					{
						if (ik != Index[0])
						{
							if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.empty())
							{
								SolderesOnTable[ik].SoldierThinking.AStarGreedy = std::vector<AllDraw>();
							}
							SolderesOnTable[ik].SoldierThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
							SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
							continue;
							;
						}
						else

						{
							if (j != jindex[0])
							{
								if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.empty())
								{
									SolderesOnTable[ik].SoldierThinking.AStarGreedy = std::vector<AllDraw>();
								}
								SolderesOnTable[ik].SoldierThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
								SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
								continue;

							}
						}
					}
					else
					{
						if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.empty())
						{
							SolderesOnTable[ik].SoldierThinking.AStarGreedy = std::vector<AllDraw>();
						}
						SolderesOnTable[ik].SoldierThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
						SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
						continue;
						;
					}
				}
				if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.empty())
				{
					SolderesOnTable[ik].SoldierThinking.AStarGreedy = std::vector<AllDraw>();
				}
				SolderesOnTable[ik].SoldierThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].TableList.clear();
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(SolderesOnTable[ik].SoldierThinking.TableListSolder[j]));
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].SetRowColumn(0);
			}
			SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].SetRowColumnFinishedWait();
			if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() > 0)
			{
				OutPutAction = std::wstring(L" ") + Alphabet(SolderesOnTable[ik].SoldierThinking.Row) + Number(SolderesOnTable[ik].SoldierThinking.Column) + Alphabet(SolderesOnTable[ik].SoldierThinking.RowColumnSoldier[j][0]) + Number(SolderesOnTable[ik].SoldierThinking.RowColumnSoldier[j][1]);
				if (Order == 1)
				{
					OutPut = std::wstring(L"\r\nPerception Soldier AstarGreedy By Bob at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
				}
				else
				{
					OutPut = std::wstring(L"\r\nPerception Soldier AstarGreedy By Alice at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
				}

				PerceptionCount++;
				Do = true;
				int iii = (SolderesOnTable[ik].SoldierThinking.RowColumnSoldier[j][0]);
				int jjj = (SolderesOnTable[ik].SoldierThinking.RowColumnSoldier[j][1]);
				int aa = a;
				int **Tab = CloneATable(SolderesOnTable[ik].SoldierThinking.TableListSolder[j]);
				int Ord = Order * -1;
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].AStarGreedyString = this;

				SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, CloneATable(SolderesOnTable[ik].SoldierThinking.TableListSolder[j]), Order*-1, false, FOUND, LeafAStarGreedy);

				Do = true;
			}
		}
	}
	TaskEnd++;


	for (int h = 0; h < SolderesOnTable[ik].SoldierThinking.AStarGreedy.size(); h++)
	{
		SolderesOnTable[ik].WinOcuuredatChiled += SumOfObjects(SolderesOnTable[ik].SoldierThinking.AStarGreedy[h], Order);
	}
	for (int h = 0; h < SolderesOnTable[ik].SoldierThinking.AStarGreedy.size(); h++)
	{
		SolderesOnTable[ik].LoseOcuuredatChiled += SumMinusOfObjects(SolderesOnTable[ik].SoldierThinking.AStarGreedy[h], Order);
	}

	return Do;
	//Elephant
}

bool  AllDraw::FullGameThinkingSoldierGray(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;
	for (int ik = 0; ik < SodierMidle; ik++)
	{
		if (SolderesOnTable != nullptr && (&(SolderesOnTable[ik]) != nullptr) && (&(SolderesOnTable[ik].SoldierThinking) != nullptr) && (&(SolderesOnTable[ik].SoldierThinking) != nullptr) && (!SolderesOnTable[ik].SoldierThinking.IsSupHu))
		{
			Do = FullGameThinkingTreeSoldier(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);
		} //);


	}
	return Do;
}
bool  AllDraw::FullGameThinkingSoldierBrowm(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;
	for (int ik = SodierMidle;ik<SodierHigh ik++)
	{
		if (SolderesOnTable != nullptr && (&(SolderesOnTable[ik]) != nullptr) && (&(SolderesOnTable[ik].SoldierThinking) != nullptr) && (&(SolderesOnTable[ik].SoldierThinking) != nullptr) && (!SolderesOnTable[ik].SoldierThinking.IsSupHu))
		{
			Do = FullGameThinkingTreeSoldier(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);
		} //);


	}
	return Do;
}
bool  AllDraw::FullGameThinkingElephant(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;
	TaskBegin++;
	int S = 0;
	while (ElephantOnTable[ik].ElefantThinking.ThinkingBegin && (!ElephantOnTable[ik].ElefantThinking.ThinkingFinished))
	{
	}
	if (iAStarGreedy < 0)
	{

		if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
		{
			return false;
		}

	}
	for (int j = 0; j < ElephantOnTable[ik].ElefantThinking.TableListElefant.size(); j++)
	{
		if (ElephantOnTable[ik].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() != 0 || (!UsePenaltyRegardMechnisamT)) //&& ElephantOnTable[ik].ElefantThinking.PenaltyRegardListElefant[j].IsRewardAction() != 1 ||(!UsePenaltyRegardMechnisamT)
		{
			if (Blitz)
			{
				if (Index[1] != -1)
				{

					if (ik != Index[1])
					{
						if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.empty())
						{
							ElephantOnTable[ik].ElefantThinking.AStarGreedy = std::vector<AllDraw>();
						}
						ElephantOnTable[ik].ElefantThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
						ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
						continue;
						;
					}
					else
					{
						if (j != jindex[1])
						{
							if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.empty())
							{
								ElephantOnTable[ik].ElefantThinking.AStarGreedy = std::vector<AllDraw>();
							}
							ElephantOnTable[ik].ElefantThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
							ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
							continue;

						}
					}
				}
				else
				{
					if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.empty())
					{
						ElephantOnTable[ik].ElefantThinking.AStarGreedy = std::vector<AllDraw>();
					}
					ElephantOnTable[ik].ElefantThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
					ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
					continue;

				}

				if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.empty())
				{
					ElephantOnTable[ik].ElefantThinking.AStarGreedy = std::vector<AllDraw>();
				}

				ElephantOnTable[ik].ElefantThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
				ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].TableList.clear();
				ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(ElephantOnTable[ik].ElefantThinking.TableListElefant[j]));
				ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].SetRowColumnFinishedWait();
				//ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, ElephantOnTable[ik].ElefantThinking.TableListElefant[j], Order, false);
				//ParameterizedThreadStart start = new ParameterizedThreadStart(ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt);
				if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() > 0)
				{
					OutPutAction = std::wstring(L" ") + Alphabet(ElephantOnTable[ik].ElefantThinking.Row) + Number(ElephantOnTable[ik].ElefantThinking.Column) + Alphabet(ElephantOnTable[ik].ElefantThinking.RowColumnElefant[j][0]) + Number(ElephantOnTable[ik].ElefantThinking.RowColumnElefant[j][1]);
					if (Order == 1)
					{
						OutPut = std::wstring(L"\r\nPerception Elephant AstarGreedy By Bob at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
					}
					else
					{
						OutPut = std::wstring(L"\r\nPerception Elephant AstarGreedy By Alice at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
					}

					PerceptionCount++;
					int iii = (ElephantOnTable[ik].ElefantThinking.RowColumnElefant[j][0]);
					int jjj = (ElephantOnTable[ik].ElefantThinking.RowColumnElefant[j][1]);
					int aa = a;
					int **Tab = CloneATable(ElephantOnTable[ik].ElefantThinking.TableListElefant[j]);
					int Ord = Order * -1;
					ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
					//Task array = Task.Factory.StartNew(() => ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, CloneATable(ElephantOnTable[ik].ElefantThinking.TableListElefant[j]), Order, false, FOUND, LeafAStarGreedy));
					ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, iii, jjj, aa, Tab, Ord*-1, false, FOUND, LeafAStarGreedy);
					Do = true;
				}
				else
				{
					if (ElephantOnTable[ik].ElefantThinking.PenaltyRegardListElefant[j].IsRewardAction() != 1 || (!UsePenaltyRegardMechnisamT)) //ElephantOnTable[ik].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() != 0 &&
					{
						{
							if (Blitz)
							{
								if (Index[1] != -1)
								{

									if (ik != Index[1])
									{
										if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.empty())
										{
											ElephantOnTable[ik].ElefantThinking.AStarGreedy = std::vector<AllDraw>();
										}
										ElephantOnTable[ik].ElefantThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
										ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
										continue;
										;
									}
									else
									{
										if (j != jindex[1])
										{
											if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.empty())
											{
												ElephantOnTable[ik].ElefantThinking.AStarGreedy = std::vector<AllDraw>();
											}
											ElephantOnTable[ik].ElefantThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
											ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
											continue;
										}
									}
								}
								else
								{
									if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.empty())
									{
										ElephantOnTable[ik].ElefantThinking.AStarGreedy = std::vector<AllDraw>();
									}
									ElephantOnTable[ik].ElefantThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
									ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
									continue;
									;
								}
							}
							if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.empty())
							{
								ElephantOnTable[ik].ElefantThinking.AStarGreedy = std::vector<AllDraw>();
							}
							ElephantOnTable[ik].ElefantThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
							ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].TableList.clear();
							ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(ElephantOnTable[ik].ElefantThinking.TableListElefant[j]));
							ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].SetRowColumn(0);
							ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].SetRowColumnFinishedWait();
							if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() > 0)
							{
								OutPutAction = std::wstring(L" ") + Alphabet(ElephantOnTable[ik].ElefantThinking.Row) + Number(ElephantOnTable[ik].ElefantThinking.Column) + Alphabet(ElephantOnTable[ik].ElefantThinking.RowColumnElefant[j][0]) + Number(ElephantOnTable[ik].ElefantThinking.RowColumnElefant[j][1]);
								if (Order == 1)
								{
									OutPut = std::wstring(L"\r\nPerception Elephant AstarGreedy By Bob at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
								}
								else
								{
									OutPut = std::wstring(L"\r\nPerception Elephant AstarGreedy By Alice at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
								}

								PerceptionCount++;
								int iii = (ElephantOnTable[ik].ElefantThinking.RowColumnElefant[j][0]);
								int jjj = (ElephantOnTable[ik].ElefantThinking.RowColumnElefant[j][1]);
								int aa = a;
								int **Tab = CloneATable(ElephantOnTable[ik].ElefantThinking.TableListElefant[j]);
								int Ord = Order * -1;
								ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].AStarGreedyString = this;

								ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, iii, jjj, aa, Tab, Ord*-1, false, FOUND, LeafAStarGreedy);
							}
						}
					}

				}
			}
		}
	}

	TaskEnd++;


	for (int h = 0; h < ElephantOnTable[ik].ElefantThinking.AStarGreedy.size(); h++)
	{
		ElephantOnTable[ik].WinOcuuredatChiled += SumOfObjects(ElephantOnTable[ik].ElefantThinking.AStarGreedy[h], Order);
	}
	for (int h = 0; h < ElephantOnTable[ik].ElefantThinking.AStarGreedy.size(); h++)
	{
		ElephantOnTable[ik].LoseOcuuredatChiled += SumMinusOfObjects(ElephantOnTable[ik].ElefantThinking.AStarGreedy[h], Order);
	}

	return Do;
}
bool  AllDraw::FullGameThinkingElephantGray(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;
	////Parallel.For(0, ElefantMidle, ik =>
	for (int ik = 0; ik < ElefantMidle; ik++)
	{
		if (ElephantOnTable != nullptr && ((&ElephantOnTable[ik]) != nullptr) && ((&(ElephantOnTable[ik].ElefantThinking)) != nullptr) && ((&(ElephantOnTable[ik].ElefantThinking)) != nullptr) && (!ElephantOnTable[ik].ElefantThinking.IsSupHu))
		{
			Do = FullGameThinkingTreeElephant(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);
		}
	}

	return Do;
}

bool  AllDraw::FullGameThinkingElephantBrown(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;
	////Parallel.For(0, ElefantMidle, ik =>
	for (int ik = ElefantMidle;ik<ElefantHigh ik++)
	{
		if (ElephantOnTable != nullptr && ((&ElephantOnTable[ik]) != nullptr) && ((&(ElephantOnTable[ik].ElefantThinking)) != nullptr) && ((&(ElephantOnTable[ik].ElefantThinking)) != nullptr) && (!ElephantOnTable[ik].ElefantThinking.IsSupHu))
		{
			Do = FullGameThinkingTreeElephant(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);
		}
	}

	return Do;
}

bool  AllDraw::FullGameThinkingHourse(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{

	bool Do = false;
	TaskBegin++;
	int S = 0;
	while (HoursesOnTable[ik].HourseThinking.ThinkingBegin && (!HoursesOnTable[ik].HourseThinking.ThinkingFinished))
	{
	}


	if (iAStarGreedy < 0)
	{

		if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
		{
			return false;
		}

	}
	for (int j = 0; j < HoursesOnTable[ik].HourseThinking.TableListHourse.size(); j++)
	{
		if (AllDraw::OrderPlate == Order)
		{
			if (HoursesOnTable[ik].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() != 0 || (!UsePenaltyRegardMechnisamT)) //&& HoursesOnTable[ik].HourseThinking.PenaltyRegardListHourse[j].IsRewardAction() != 1 ||(!UsePenaltyRegardMechnisamT)
			{
				{
					if (Blitz)
					{
						if (Index[2] != -1)
						{

							if (ik != Index[2])
							{
								if (HoursesOnTable[ik].HourseThinking.AStarGreedy.empty())
								{
									HoursesOnTable[ik].HourseThinking.AStarGreedy = std::vector<AllDraw>();
								}
								HoursesOnTable[ik].HourseThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
								HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
								continue;
							}
							else
							{
								if (j != jindex[2])
								{
									if (HoursesOnTable[ik].HourseThinking.AStarGreedy.empty())
									{
										HoursesOnTable[ik].HourseThinking.AStarGreedy = std::vector<AllDraw>();
									}
									HoursesOnTable[ik].HourseThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
									HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
									continue;
								}
							}
						}
						else
						{
							if (HoursesOnTable[ik].HourseThinking.AStarGreedy.empty())
							{
								HoursesOnTable[ik].HourseThinking.AStarGreedy = std::vector<AllDraw>();
							}
							HoursesOnTable[ik].HourseThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
							HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
							continue;
						}


						if (HoursesOnTable[ik].HourseThinking.AStarGreedy.empty())
						{
							HoursesOnTable[ik].HourseThinking.AStarGreedy = std::vector<AllDraw>();
						}
						HoursesOnTable[ik].HourseThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
						HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].TableList.clear();
						;
						HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(HoursesOnTable[ik].HourseThinking.TableListHourse[j]));
						HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].SetRowColumn(0);
						HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].SetRowColumnFinishedWait();
					}
					if (HoursesOnTable[ik].HourseThinking.AStarGreedy.size() > 0)
					{
						OutPutAction = std::wstring(L" ") + Alphabet(HoursesOnTable[ik].HourseThinking.Row) + Number(HoursesOnTable[ik].HourseThinking.Column) + Alphabet(HoursesOnTable[ik].HourseThinking.RowColumnHourse[j][0]) + Number(HoursesOnTable[ik].HourseThinking.RowColumnHourse[j][1]);
						if (Order == 1)
						{
							OutPut = std::wstring(L"\r\nPerception Hourse AstarGreedy By Bob at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
						}
						else
						{
							OutPut = std::wstring(L"\r\nPerception Hourse AstarGreedy By Alice at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
						}

						PerceptionCount++;
						int iii = (HoursesOnTable[ik].HourseThinking.RowColumnHourse[j][0]);
						int jjj = (HoursesOnTable[ik].HourseThinking.RowColumnHourse[j][1]);
						int aa = a;
						int **Tab = CloneATable(HoursesOnTable[ik].HourseThinking.TableListHourse[j]);
						int Ord = Order * -1;
						HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
						HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, iii, jjj, aa, Tab, Ord*-1, false, FOUND, LeafAStarGreedy);

						Do = true;
					}

				}
			}
		}
		else
		{
			if (HoursesOnTable[ik].HourseThinking.PenaltyRegardListHourse[j].IsRewardAction() != 1 || (!UsePenaltyRegardMechnisamT)) //HoursesOnTable[ik].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() != 0 ||(!UsePenaltyRegardMechnisamT)//&&
			{
				if (Blitz)
				{
					if (Index[2] != -1)
					{

						if (ik != Index[2])
						{
							if (HoursesOnTable[ik].HourseThinking.AStarGreedy.empty())
							{
								HoursesOnTable[ik].HourseThinking.AStarGreedy = std::vector<AllDraw>();
							}
							HoursesOnTable[ik].HourseThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
							HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
							continue;
						}
						else
						{
							if (j != jindex[2])
							{
								if (HoursesOnTable[ik].HourseThinking.AStarGreedy.empty())
								{
									HoursesOnTable[ik].HourseThinking.AStarGreedy = std::vector<AllDraw>();
								}
								HoursesOnTable[ik].HourseThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
								HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
								continue;
							}
						}
					}
					else
					{
						if (HoursesOnTable[ik].HourseThinking.AStarGreedy.empty())
						{
							HoursesOnTable[ik].HourseThinking.AStarGreedy = std::vector<AllDraw>();
						}
						HoursesOnTable[ik].HourseThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
						HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
						continue;
					}

				}

			}
			if (HoursesOnTable[ik].HourseThinking.AStarGreedy.empty())
			{
				HoursesOnTable[ik].HourseThinking.AStarGreedy = std::vector<AllDraw>();
			}
			HoursesOnTable[ik].HourseThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
			HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].TableList.clear();
			HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(HoursesOnTable[ik].HourseThinking.TableListHourse[j]));
			HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].SetRowColumn(0);
			HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].SetRowColumnFinishedWait();
			if (HoursesOnTable[ik].HourseThinking.AStarGreedy.size() > 0)
			{
				OutPutAction = std::wstring(L" ") + Alphabet(HoursesOnTable[ik].HourseThinking.Row) + Number(HoursesOnTable[ik].HourseThinking.Column) + Alphabet(HoursesOnTable[ik].HourseThinking.RowColumnHourse[j][0]) + Number(HoursesOnTable[ik].HourseThinking.RowColumnHourse[j][1]);
				if (Order == 1)
				{
					OutPut = std::wstring(L"\r\nPerception Hourse AstarGreedy By Bob at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
				}
				else
				{
					OutPut = std::wstring(L"\r\nPerception Hourse AstarGreedy By Alice at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
				}

				PerceptionCount++;
				int iii = (HoursesOnTable[ik].HourseThinking.RowColumnHourse[j][0]);
				int jjj = (HoursesOnTable[ik].HourseThinking.RowColumnHourse[j][1]);
				int aa = a;
				int **Tab = CloneATable(HoursesOnTable[ik].HourseThinking.TableListHourse[j]);
				int Ord = Order * -1;
				HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].AStarGreedyString = this;

				//Task array = Task.Factory.StartNew(() => HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, CloneATable(HoursesOnTable[ik].HourseThinking.TableListHourse[j]), Order, false, FOUND, LeafAStarGreedy));
				HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, iii, jjj, aa, Tab, Ord*-1, false, FOUND, LeafAStarGreedy);
				for (int h = 0; h < HoursesOnTable[ik].HourseThinking.AStarGreedy.size(); h++)
				{
					HoursesOnTable[ik].WinOcuuredatChiled += SumOfObjects(HoursesOnTable[ik].HourseThinking.AStarGreedy[h], Order);
				}

				for (int h = 0; h < HoursesOnTable[ik].HourseThinking.AStarGreedy.size(); h++)
				{
					HoursesOnTable[ik].LoseOcuuredatChiled += SumMinusOfObjects(HoursesOnTable[ik].HourseThinking.AStarGreedy[h], Order);
				}
			}
			Do = true;

		}

	}
	TaskEnd++;


	for (int h = 0; h < HoursesOnTable[ik].HourseThinking.AStarGreedy.size(); h++)
	{
		HoursesOnTable[ik].WinOcuuredatChiled += SumOfObjects(HoursesOnTable[ik].HourseThinking.AStarGreedy[h], Order);
	}
	for (int h = 0; h < HoursesOnTable[ik].HourseThinking.AStarGreedy.size(); h++)
	{
		HoursesOnTable[ik].LoseOcuuredatChiled += SumMinusOfObjects(HoursesOnTable[ik].HourseThinking.AStarGreedy[h], Order);
	}

	return Do;
}
bool  AllDraw::FullGameThinkingHourseGray(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;
	for (int ik = 0; ik < HourseMidle; ik++)
	{
		if (HoursesOnTable != nullptr && (&(HoursesOnTable[ik]) != nullptr) && (&(HoursesOnTable[ik].HourseThinking) != nullptr) && (&(HoursesOnTable[ik].HourseThinking) != nullptr) && (!HoursesOnTable[ik].HourseThinking.IsSupHu))
		{
			Do = FullGameThinkingTreeHourse(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);
		}
	}


	return Do;
}
bool  AllDraw::FullGameThinkingHourseBrown(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;
	for (int ik = HourseMidle;ik<HourseHight; ik++)
	{
		if (HoursesOnTable != nullptr && (&(HoursesOnTable[ik]) != nullptr) && (&(HoursesOnTable[ik].HourseThinking) != nullptr) && (&(HoursesOnTable[ik].HourseThinking) != nullptr) && (!HoursesOnTable[ik].HourseThinking.IsSupHu))
		{
			Do = FullGameThinkingTreeHourse(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);
		}
	}


	return Do;
}
bool  AllDraw::FullGameThinkingCastle(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{

	bool Do = false;

	TaskBegin++;
	int S = 0;
	while (CastlesOnTable[ik].CastleThinking.ThinkingBegin && (!CastlesOnTable[ik].CastleThinking.ThinkingFinished))
	{
	}
	if (iAStarGreedy < 0)
	{

		if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
		{
			return false;
		}

	}

	for (int j = 0; j < CastlesOnTable[ik].CastleThinking.TableListCastle.size(); j++)
	{
		if (AllDraw::OrderPlate == Order)
		{
			if (CastlesOnTable[ik].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() != 0 || (!UsePenaltyRegardMechnisamT)) //&& CastlesOnTable[ik].CastleThinking.PenaltyRegardListCastle[j].IsRewardAction() != 1 ||(!UsePenaltyRegardMechnisamT)
			{

				if (Blitz)
				{
					if (Index[3] != -1)
					{
						if (ik != Index[3])
						{
							if (CastlesOnTable[ik].CastleThinking.AStarGreedy.empty())
							{
								CastlesOnTable[ik].CastleThinking.AStarGreedy = std::vector<AllDraw>();
							}
							CastlesOnTable[ik].CastleThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
							CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
							continue;
						}
						else
						{
							if (j != jindex[3])
							{
								if (CastlesOnTable[ik].CastleThinking.AStarGreedy.empty())
								{
									CastlesOnTable[ik].CastleThinking.AStarGreedy = std::vector<AllDraw>();
								}
								CastlesOnTable[ik].CastleThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
								CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
								continue;
							}
						}
					}
					else
					{
						if (CastlesOnTable[ik].CastleThinking.AStarGreedy.empty())
						{
							CastlesOnTable[ik].CastleThinking.AStarGreedy = std::vector<AllDraw>();
						}
						CastlesOnTable[ik].CastleThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
						CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
						continue;
					}
				}
				if (CastlesOnTable[ik].CastleThinking.AStarGreedy.empty())
				{
					CastlesOnTable[ik].CastleThinking.AStarGreedy = std::vector<AllDraw>();
				}
				CastlesOnTable[ik].CastleThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
				CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].TableList.clear();
				CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(CastlesOnTable[ik].CastleThinking.TableListCastle[j]));
				CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].SetRowColumnFinishedWait();
				if (CastlesOnTable[ik].CastleThinking.AStarGreedy.size() > 0)
				{
					OutPutAction = std::wstring(L" ") + Alphabet(CastlesOnTable[ik].CastleThinking.Row) + Number(CastlesOnTable[ik].CastleThinking.Column) + Alphabet(CastlesOnTable[ik].CastleThinking.RowColumnCastle[j][0]) + Number(CastlesOnTable[ik].CastleThinking.RowColumnCastle[j][1]);
					if (Order == 1)
					{
						OutPut = std::wstring(L"\r\nPerception Castle AstarGreedy By Bob at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
					}
					else
					{
						OutPut = std::wstring(L"\r\nPerception Castle AstarGreedy By Alice at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
					}

					PerceptionCount++;
					int iii = (CastlesOnTable[ik].CastleThinking.RowColumnCastle[j][0]);
					int jjj = (CastlesOnTable[ik].CastleThinking.RowColumnCastle[j][1]);
					int aa = a;
					int **Tab = CloneATable(CastlesOnTable[ik].CastleThinking.TableListCastle[j]);
					int Ord = Order * -1;
					CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
					CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, iii, jjj, aa, Tab, Ord*-1, false, FOUND, LeafAStarGreedy);
					Do = true;
				}
			}



		}
		else
		{
			if (CastlesOnTable[ik].CastleThinking.PenaltyRegardListCastle[j].IsRewardAction() != 1 || (!UsePenaltyRegardMechnisamT)) //CastlesOnTable[ik].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() != 0 &&
			{

				if (Blitz)
				{

					if (Index[3] != -1)
					{
						if (ik != Index[3])
						{
							if (CastlesOnTable[ik].CastleThinking.AStarGreedy.empty())
							{
								CastlesOnTable[ik].CastleThinking.AStarGreedy = std::vector<AllDraw>();
							}
							CastlesOnTable[ik].CastleThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
							CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
							continue;
						}
						else
						{
							if (j != jindex[3])
							{
								if (CastlesOnTable[ik].CastleThinking.AStarGreedy.empty())
								{
									CastlesOnTable[ik].CastleThinking.AStarGreedy = std::vector<AllDraw>();
								}
								CastlesOnTable[ik].CastleThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
								CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
								continue;
							}
						}
					}
					else
					{
						if (CastlesOnTable[ik].CastleThinking.AStarGreedy.empty())
						{
							CastlesOnTable[ik].CastleThinking.AStarGreedy = std::vector<AllDraw>();
						}
						CastlesOnTable[ik].CastleThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
						CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
						continue;
					}
				}
				if (CastlesOnTable[ik].CastleThinking.AStarGreedy.empty())
				{
					CastlesOnTable[ik].CastleThinking.AStarGreedy = std::vector<AllDraw>();
				}
				CastlesOnTable[ik].CastleThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
				CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].TableList.clear();
				CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(CastlesOnTable[ik].CastleThinking.TableListCastle[j]));
				CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].SetRowColumnFinishedWait();
			}
			if (CastlesOnTable[ik].CastleThinking.AStarGreedy.size() > 0)
			{
				OutPutAction = std::wstring(L" ") + Alphabet(CastlesOnTable[ik].CastleThinking.Row) + Number(CastlesOnTable[ik].CastleThinking.Column) + Alphabet(CastlesOnTable[ik].CastleThinking.RowColumnCastle[j][0]) + Number(CastlesOnTable[ik].CastleThinking.RowColumnCastle[j][1]);
				if (Order == 1)
				{
					OutPut = std::wstring(L"\r\nPerception Castle AstarGreedy By Bob at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
				}
				else
				{
					OutPut = std::wstring(L"\r\nPerception Castle AstarGreedy By Alice at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
				}

				PerceptionCount++;
				int iii = (CastlesOnTable[ik].CastleThinking.RowColumnCastle[j][0]);
				int jjj = (CastlesOnTable[ik].CastleThinking.RowColumnCastle[j][1]);
				int aa = a;
				int **Tab = CloneATable(CastlesOnTable[ik].CastleThinking.TableListCastle[j]);
				int Ord = Order * -1;
				CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].AStarGreedyString = this;

				CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, iii, jjj, aa, Tab, Ord*-1, false, FOUND, LeafAStarGreedy);
				Do = true;
			}
		}


	}
	TaskEnd++;

	for (int h = 0; h < CastlesOnTable[ik].CastleThinking.AStarGreedy.size(); h++)
	{
		CastlesOnTable[ik].WinOcuuredatChiled += SumOfObjects(CastlesOnTable[ik].CastleThinking.AStarGreedy[h], Order);
	}
	for (int h = 0; h < CastlesOnTable[ik].CastleThinking.AStarGreedy.size(); h++)
	{
		CastlesOnTable[ik].LoseOcuuredatChiled += SumMinusOfObjects(CastlesOnTable[ik].CastleThinking.AStarGreedy[h], Order);
	}

	return Do;
}


bool  AllDraw::FullGameThinkingCastleGray(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;


	for (int ik = 0; ik < CastleMidle; ik++)
	{
		if ((CastlesOnTable != nullptr) && (&(CastlesOnTable[ik]) != nullptr) && (&(CastlesOnTable[ik].CastleThinking) != nullptr) && (&(CastlesOnTable[ik].CastleThinking) != nullptr) && (!CastlesOnTable[ik].CastleThinking.IsSupHu))
		{

			Do = FullGameThinkingTreeCastle(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

		}
	}


	return Do;
}
bool  AllDraw::FullGameThinkingMinister(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;
	TaskBegin++;
	int S = 0;
	while (MinisterOnTable[ik].MinisterThinking.ThinkingBegin && (!MinisterOnTable[ik].MinisterThinking.ThinkingFinished))
	{
		//delay(1);

	}

	if (iAStarGreedy < 0)
	{

		if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
		{
			return false;
		}


	}
	for (int j = 0; j < MinisterOnTable[ik].MinisterThinking.TableListMinister.size(); j++)
	{




		if (AllDraw::OrderPlate == Order)
		{
			if (MinisterOnTable[ik].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() != 0 || (!UsePenaltyRegardMechnisamT)) //&& MinisterOnTable[ik].MinisterThinking.PenaltyRegardListMinister[j].IsRewardAction() != 1 ||(!UsePenaltyRegardMechnisamT)
			{

				if (Blitz)
				{
					if (Index[4] != -1)
					{
						if (ik != Index[4])
						{
							if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.empty())
							{
								MinisterOnTable[ik].MinisterThinking.AStarGreedy = std::vector<AllDraw>();
							}
							MinisterOnTable[ik].MinisterThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
							MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
							continue;
						}
						else
						{
							if (j != jindex[4])
							{
								if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.empty())
								{
									MinisterOnTable[ik].MinisterThinking.AStarGreedy = std::vector<AllDraw>();
								}
								MinisterOnTable[ik].MinisterThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
								MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
								continue;
							}
						}
					}
					else
					{
						if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.empty())
						{
							MinisterOnTable[ik].MinisterThinking.AStarGreedy = std::vector<AllDraw>();
						}
						MinisterOnTable[ik].MinisterThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
						MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
						continue;
					}

				}

				if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.empty())
				{
					MinisterOnTable[ik].MinisterThinking.AStarGreedy = std::vector<AllDraw>();
				}
				MinisterOnTable[ik].MinisterThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
				MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].TableList.clear();
				MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(MinisterOnTable[ik].MinisterThinking.TableListMinister[j]));
				MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].SetRowColumnFinishedWait();
				//MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, MinisterOnTable[ik].MinisterThinking.TableListMinister[j], Order, false);
			//ParameterizedThreadStart start = new ParameterizedThreadStart(MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt);
				if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() > 0)
				{

					OutPutAction = std::wstring(L" ") + Alphabet(MinisterOnTable[ik].MinisterThinking.Row) + Number(MinisterOnTable[ik].MinisterThinking.Column) + Alphabet(MinisterOnTable[ik].MinisterThinking.RowColumnMinister[j][0]) + Number(MinisterOnTable[ik].MinisterThinking.RowColumnMinister[j][1]);
					if (Order == 1)
					{
						OutPut = std::wstring(L"\r\nPerception Minister AstarGreedy By Bob at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
					}
					else
					{
						OutPut = std::wstring(L"\r\nPerception Minister AstarGreedy By Alice at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
					}

					PerceptionCount++;
					Do = true;
					int iii = (MinisterOnTable[ik].MinisterThinking.RowColumnMinister[j][0]);
					int jjj = (MinisterOnTable[ik].MinisterThinking.RowColumnMinister[j][1]);
					int aa = a;
					int **Tab = CloneATable(MinisterOnTable[ik].MinisterThinking.TableListMinister[j]);
					int Ord = Order * -1;
					MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
					//Task array = Task.Factory.StartNew(() => MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, CloneATable(MinisterOnTable[ik].MinisterThinking.TableListMinister[j]), Order, false, FOUND, LeafAStarGreedy));
					MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, iii, jjj, aa, Tab, Ord*-1, false, FOUND, LeafAStarGreedy);

					Do = true;


				}
			}
		}
		else
		{
			if (MinisterOnTable[ik].MinisterThinking.PenaltyRegardListMinister[j].IsRewardAction() != 1 || (!UsePenaltyRegardMechnisamT)) //MinisterOnTable[ik].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() != 0 &&
			{
				if (Blitz)
				{
					if (Index[4] != -1)
					{
						if (ik != Index[4])
						{
							if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.empty())
							{
								MinisterOnTable[ik].MinisterThinking.AStarGreedy = std::vector<AllDraw>();
							}
							MinisterOnTable[ik].MinisterThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
							MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
						}
						else
						{
							if (j != jindex[4])
							{
								if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.empty())
								{
									MinisterOnTable[ik].MinisterThinking.AStarGreedy = std::vector<AllDraw>();
								}
								MinisterOnTable[ik].MinisterThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
								MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
								continue;
							}

						}
					}
					else
					{
						if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.empty())
						{
							MinisterOnTable[ik].MinisterThinking.AStarGreedy = std::vector<AllDraw>();
						}
						MinisterOnTable[ik].MinisterThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
						MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
					}


					if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.empty())
					{
						MinisterOnTable[ik].MinisterThinking.AStarGreedy = std::vector<AllDraw>();
					}
					MinisterOnTable[ik].MinisterThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
					MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].TableList.clear();
					MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(MinisterOnTable[ik].MinisterThinking.TableListMinister[j]));
					MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].SetRowColumn(0);
					MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].SetRowColumnFinishedWait();

					if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() > 0)
					{

						OutPutAction = std::wstring(L" ") + Alphabet(MinisterOnTable[ik].MinisterThinking.Row) + Number(MinisterOnTable[ik].MinisterThinking.Column) + Alphabet(MinisterOnTable[ik].MinisterThinking.RowColumnMinister[j][0]) + Number(MinisterOnTable[ik].MinisterThinking.RowColumnMinister[j][1]);
						if (Order == 1)
						{
							OutPut = std::wstring(L"\r\nPerception Minister AstarGreedy By Bob at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
						}
						else
						{
							OutPut = std::wstring(L"\r\nPerception Minister AstarGreedy By Alice at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
						}

						PerceptionCount++;
						int iii = (MinisterOnTable[ik].MinisterThinking.RowColumnMinister[j][0]);
						int jjj = (MinisterOnTable[ik].MinisterThinking.RowColumnMinister[j][1]);
						int aa = a;
						int **Tab = CloneATable(MinisterOnTable[ik].MinisterThinking.TableListMinister[j]);
						int Ord = Order * -1;
						MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].AStarGreedyString = this;

						//Task array = Task.Factory.StartNew(() => MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, CloneATable(MinisterOnTable[ik].MinisterThinking.TableListMinister[j]), Order, false, FOUND, LeafAStarGreedy));
						MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, iii, jjj, aa, Tab, Ord*-1, false, FOUND, LeafAStarGreedy);
						//array.Start();
						/*bool ASS = false; Object OOOAAA = new Object(); //lock (OOOAAA) { ASS = AllDraw::Blitz; }  if (!ASS)
						{
							Object ttttt = new Object(); //lock (ttttt) { tHA->push_back(array); }
						}
						else
						{
							Object ttttt = new Object(); //lock (ttttt) { array.Wait(); }
						}*/
						//array.Name = "M" + i.ToString();
						Do = true;

					}
				}
			}
		}
	}
	TaskEnd++;


	for (int h = 0; h < MinisterOnTable[ik].MinisterThinking.AStarGreedy.size(); h++)
	{
		MinisterOnTable[ik].WinOcuuredatChiled += SumOfObjects(MinisterOnTable[ik].MinisterThinking.AStarGreedy[h], Order);
	}
	for (int h = 0; h < MinisterOnTable[ik].MinisterThinking.AStarGreedy.size(); h++)
	{
		MinisterOnTable[ik].LoseOcuuredatChiled += SumMinusOfObjects(MinisterOnTable[ik].MinisterThinking.AStarGreedy[h], Order);
	}

	return Do;
}


bool  AllDraw::FullGameThinkingMinisterGray(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;


	//Minister.
		////Parallel.For(0, MinisterMidle, ik =>
	for (int ik = 0; ik < MinisterMidle; ik++)
	{
		if ((MinisterOnTable != nullptr) && (&(MinisterOnTable[ik]) != nullptr) && (&(MinisterOnTable[ik].MinisterThinking) != nullptr) && (&(MinisterOnTable[ik].MinisterThinking) != nullptr) && (!MinisterOnTable[ik].MinisterThinking.IsSupHu))
		{
			Do = FullGameThinkingTreeMinister(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

		}
	}



	return Do;
}
bool  AllDraw::FullGameThinkingKing(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;

	TaskBegin++;
	int S = 0;
	while (KingOnTable[ik].KingThinking.ThinkingBegin && (!KingOnTable[ik].KingThinking.ThinkingFinished))
	{
		//delay(1);
		//S += 1;//if (AllDraw::Blitz) { if (S > ThresholdBlitz)break; } else { if (S > ThresholdAllDraw::FullGame)break; } 
		//SemaphoreExxedTime(S, 5);
	} // S += 100; if (AllDraw::Blitz) { if (S > ThresholdBlitz)break; } else { if (S > ThresholdAllDraw::FullGame)break; } }


	if (iAStarGreedy < 0)
	{

		if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
		{
			return false;
		}


	}


	//List<Task> tHA = new List<Task>();

	if (KingOnTable[ik].KingThinking.TableListKing.empty())
	{
		return Do;
	}
	// //Parallel.For(0, KingOnTable[ik].KingThinking.TableListKing.size(), j =>
	for (int j = 0; j < KingOnTable[ik].KingThinking.TableListKing.size(); j++)
	{


		if (AllDraw::OrderPlate == Order)
		{
			if (KingOnTable[ik].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() != 0 || (!UsePenaltyRegardMechnisamT)) //&& KingOnTable[ik].KingThinking.PenaltyRegardListKing[j].IsRewardAction() != 1 ||(!UsePenaltyRegardMechnisamT)
			{
				if (Blitz)
				{

					if (Index[5] != -1)
					{
						if (ik != Index[5])
						{
							if (KingOnTable[ik].KingThinking.AStarGreedy.empty())
							{
								KingOnTable[ik].KingThinking.AStarGreedy = std::vector<AllDraw>();
							}
							KingOnTable[ik].KingThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
							KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
							continue;
						}
						else
						{
							if (j != jindex[5])
							{
								if (KingOnTable[ik].KingThinking.AStarGreedy.empty())
								{
									KingOnTable[ik].KingThinking.AStarGreedy = std::vector<AllDraw>();
								}
								KingOnTable[ik].KingThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
								KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
								continue;
							}
						}
					}
					else
					{
						if (KingOnTable[ik].KingThinking.AStarGreedy.empty())
						{
							KingOnTable[ik].KingThinking.AStarGreedy = std::vector<AllDraw>();
						}
						KingOnTable[ik].KingThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
						KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
						continue;
					}

				}

				if (KingOnTable[ik].KingThinking.AStarGreedy.empty())
				{
					KingOnTable[ik].KingThinking.AStarGreedy = std::vector<AllDraw>();
				}
				KingOnTable[ik].KingThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
				KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].TableList.clear();
				KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(KingOnTable[ik].KingThinking.TableListKing[j]));
				KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].SetRowColumnFinishedWait();

				if (KingOnTable[ik].KingThinking.AStarGreedy.size() > 0)
				{

					OutPutAction = std::wstring(L" ") + Alphabet(KingOnTable[ik].KingThinking.Row) + Number(KingOnTable[ik].KingThinking.Column) + Alphabet(KingOnTable[ik].KingThinking.RowColumnKing[j][0]) + Number(KingOnTable[ik].KingThinking.RowColumnKing[j][1]);
					if (Order == 1)
					{
						OutPut = std::wstring(L"\r\nPerception King AstarGreedy By Bob at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
					}
					else
					{
						OutPut = std::wstring(L"\r\nPerception King AstarGreedy By Alice at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
					}

					PerceptionCount++;

					int iii = (KingOnTable[ik].KingThinking.RowColumnKing[j][0]);
					int jjj = (KingOnTable[ik].KingThinking.RowColumnKing[j][1]);
					int aa = a;
					int **Tab = CloneATable(KingOnTable[ik].KingThinking.TableListKing[j]);
					int Ord = Order * -1;
					KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].AStarGreedyString = this;

					//Task array = Task.Factory.StartNew(() => KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, CloneATable(KingOnTable[ik].KingThinking.TableListKing[j]), Order, false, FOUND, LeafAStarGreedy));
					KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, iii, jjj, aa, Tab, Ord*-1, false, FOUND, LeafAStarGreedy);



					Do = true;

				}
			}
		}
		else
		{
			if (KingOnTable[ik].KingThinking.PenaltyRegardListKing[j].IsRewardAction() != 1 || (!UsePenaltyRegardMechnisamT)) //KingOnTable[ik].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() != 0 &&
			{
				if (Blitz)
				{

					if (ik != Index[5])
					{
						if (KingOnTable[ik].KingThinking.AStarGreedy.empty())
						{
							KingOnTable[ik].KingThinking.AStarGreedy = std::vector<AllDraw>();
						}
						KingOnTable[ik].KingThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
						KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
						continue;
					}
					else

					{
						if (j != jindex[5])
						{
							if (KingOnTable[ik].KingThinking.AStarGreedy.empty())
							{
								KingOnTable[ik].KingThinking.AStarGreedy = std::vector<AllDraw>();
							}
							KingOnTable[ik].KingThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
							KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
							continue;
						}
					}
				}
				else
				{
					if (KingOnTable[ik].KingThinking.AStarGreedy.empty())
					{
						KingOnTable[ik].KingThinking.AStarGreedy = std::vector<AllDraw>();
					}
					KingOnTable[ik].KingThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
					KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
					continue;
				}


				if (KingOnTable[ik].KingThinking.AStarGreedy.empty())
				{
					KingOnTable[ik].KingThinking.AStarGreedy = std::vector<AllDraw>();
				}
				KingOnTable[ik].KingThinking.AStarGreedy.push_back(new AllDraw(Order*-1, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged));
				KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].TableList.clear();
				KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(KingOnTable[ik].KingThinking.TableListKing[j]));
				KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].SetRowColumnFinishedWait();
				//KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, KingOnTable[ik].KingThinking.TableListKing[j], Order, false);
				//ParameterizedThreadStart start = new ParameterizedThreadStart(KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt);
				if (KingOnTable[ik].KingThinking.AStarGreedy.size() > 0)
				{

					OutPutAction = std::wstring(L" ") + Alphabet(KingOnTable[ik].KingThinking.Row) + Number(KingOnTable[ik].KingThinking.Column) + Alphabet(KingOnTable[ik].KingThinking.RowColumnKing[j][0]) + Number(KingOnTable[ik].KingThinking.RowColumnKing[j][1]);
					if (Order == 1)
					{
						OutPut = std::wstring(L"\r\nPerception King AstarGreedy By Bob at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
					}
					else
					{
						OutPut = std::wstring(L"\r\nPerception King AstarGreedy By Alice at Level ") + StringConverterHelper::toString(iAStarGreedy) + std::wstring(L" By ") + StringConverterHelper::toString(PerceptionCount) + std::wstring(L"th Perception String ") + OutPutAction;
					}

					PerceptionCount++;
					int iii = (KingOnTable[ik].KingThinking.RowColumnKing[j][0]);
					int jjj = (KingOnTable[ik].KingThinking.RowColumnKing[j][1]);
					int aa = a;
					int **Tab = CloneATable(KingOnTable[ik].KingThinking.TableListKing[j]);
					int Ord = Order * -1;
					KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].AStarGreedyString = this;
					//Task array = Task.Factory.StartNew(() => KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, CloneATable(KingOnTable[ik].KingThinking.TableListKing[j]), Order, false, FOUND, LeafAStarGreedy));
					KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, iii, jjj, aa, Tab, Ord*-1, false, FOUND, LeafAStarGreedy);
					for (int h = 0; h < KingOnTable[ik].KingThinking.AStarGreedy.size(); h++)
					{
						KingOnTable[ik].WinOcuuredatChiled += SumOfObjects(KingOnTable[ik].KingThinking.AStarGreedy[h], Order);
					}

					{
						for (int h = 0; h < KingOnTable[ik].KingThinking.AStarGreedy.size(); h++)
						{
							KingOnTable[ik].LoseOcuuredatChiled += SumMinusOfObjects(KingOnTable[ik].KingThinking.AStarGreedy[h], Order);
						}
					}

					Do = true;


				}
			}

		}


	}

	TaskEnd++;


	for (int h = 0; h < KingOnTable[ik].KingThinking.AStarGreedy.size(); h++)
	{
		KingOnTable[ik].WinOcuuredatChiled += SumOfObjects(KingOnTable[ik].KingThinking.AStarGreedy[h], Order);
	}
	for (int h = 0; h < KingOnTable[ik].KingThinking.AStarGreedy.size(); h++)
	{
		KingOnTable[ik].LoseOcuuredatChiled += SumMinusOfObjects(KingOnTable[ik].KingThinking.AStarGreedy[h], Order);
	}

	return Do;
}
bool  AllDraw::FullGameThinkingKingGray(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;

	//int ik;
	//King.
		////Parallel.For(0, KingMidle, ik =>
	for (int ik = 0; ik < KingMidle; ik++)
	{
		if (KingOnTable != nullptr && (&(KingOnTable[ik]) != nullptr) && (&(KingOnTable[ik].KingThinking)  != nullptr) && (&(KingOnTable[ik].KingThinking)  != nullptr) && (!KingOnTable[ik].KingThinking.IsSupHu))
		{

			Do = FullGameThinkingTreeKing(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

		}
	}
	return Do;
}
bool  AllDraw::FullGameThinkingSoldierBrown(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;


	for (int ik = SodierMidle; ik < SodierHigh; ik++)
	{
		if (SolderesOnTable != nullptr && (&(SolderesOnTable[ik]) != nullptr) && (&(SolderesOnTable[ik].SoldierThinking) != nullptr) && (&(SolderesOnTable[ik].SoldierThinking) != nullptr) && (!SolderesOnTable[ik].SoldierThinking.IsSupHu))
		{
			//Soldier.

			Do = FullGameThinkingTreeSoldier(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

		}
	}
	return Do;
}

bool  AllDraw::FullGameThinkingElephantBrown(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;


	//Elephant
	for (int ik = ElefantMidle; ik < ElefantHigh; ik++)
	{
		if (ElephantOnTable != nullptr && ((&ElephantOnTable[ik]) != nullptr) && ((&(ElephantOnTable[ik].ElefantThinking)) != nullptr) && ((&(ElephantOnTable[ik].ElefantThinking)) != nullptr) && (!ElephantOnTable[ik].ElefantThinking.IsSupHu))
		{

			Do = FullGameThinkingTreeElephant(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

		}
	}
	return Do;
}
bool  AllDraw::FullGameThinkingHourseBrown(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;

	//Hourse.

		////Parallel.For(HourseMidle, HourseHight, ik =>
	for (int ik = HourseMidle; ik < HourseHight; ik++)
	{
		if (HoursesOnTable != nullptr && (&(HoursesOnTable[ik]) != nullptr) && (&(HoursesOnTable[ik].HourseThinking) != nullptr) && (&(HoursesOnTable[ik].HourseThinking) != nullptr) && (!HoursesOnTable[ik].HourseThinking.IsSupHu))
		{

			Do = FullGameThinkingTreeHourse(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

		}
	}

	return Do;
}
bool  AllDraw::FullGameThinkingCastleBrown(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;

	//Castles.
	for (int ik = CastleMidle; ik < CastleHigh; ik++)
	{
		if ((CastlesOnTable != nullptr) && (&(CastlesOnTable[ik]) != nullptr) && (&(CastlesOnTable[ik].CastleThinking) != nullptr) && (&(CastlesOnTable[ik].CastleThinking) != nullptr) && (!CastlesOnTable[ik].CastleThinking.IsSupHu))
		{

			Do = FullGameThinkingTreeCastle(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

		}
	}

	return Do;
}
bool  AllDraw::FullGameThinkingMinisterBrown(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;


	//Minister.

	for (int ik = MinisterMidle; ik < MinisterHigh; ik++)
	{
		if ((MinisterOnTable != nullptr) && (&(MinisterOnTable[ik]) != nullptr) && (&(MinisterOnTable[ik].MinisterThinking) != nullptr) && (&(MinisterOnTable[ik].MinisterThinking) != nullptr) && (!MinisterOnTable[ik].MinisterThinking.IsSupHu))
		{

			Do = FullGameThinkingTreeMinister(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

		}
	}

	return Do;
}
bool AllDraw::FullGameThinkingTreeKingBrown(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	bool Do = false;

	//King.

		////Parallel.For(KingMidle, KingHigh, ik =>
	for (int ik = KingMidle; ik < KingHigh; ik++)
	{

		if (KingOnTable != nullptr && (&(KingOnTable[ik]) != nullptr) && (&(KingOnTable[ik].KingThinking)  != nullptr) && (&(KingOnTable[ik].KingThinking)  != nullptr) && (!KingOnTable[ik].KingThinking.IsSupHu))
		{
			{
				Do = FullGameThinkingTreeKing(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);
			}

		} //);


	}
	return Do;

}

bool AllDraw::FullGameThinkingTree(int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
{
	//List<Task> tH = new List<Task>();
	bool Do = false;
	//Initiatye Variables.
	int DummyOrder = Order;
	int DummyCurrentOrder = ChessRules::CurrentOrder;

	int a;
	if (Order == 1)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}
	if (Blitz)
	{
		AllDraw::FullGameMakimgBlitz(Index, jindex, Order, LeafAStarGreedy);
	}
	if (Order == 1)
	{

		//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					
		if (Order == 1) a = 1; else a = -1; int ii1 = ii, jj1 = jj, ik11 = ik1, j11 = j1; int Ord1 = Order; int a1 = a; int iAStarGreedy1 = iAStarGreedy;
		Do |= FullGameThinkingTreeSoldierGray(a1, Ord1, iAStarGreedy1, ii1, jj1, ik11, j11, FOUND, LeafAStarGreedy);
		Order = DummyOrder; ChessRules::CurrentOrder = DummyCurrentOrder;


		if (Order == 1) a = 1; else a = -1; int ii1 = ii, jj1 = jj, ik11 = ik1, j11 = j1; int Ord1 = Order; int a1 = a; int iAStarGreedy1 = iAStarGreedy;
		Do |= FullGameThinkingElephantGray(a1, Ord1, iAStarGreedy1, ii1, jj1, ik11, j11, FOUND, LeafAStarGreedy); Order = DummyOrder; ChessRules::CurrentOrder = DummyCurrentOrder;




		if (Order == 1)
			a = 1;
		else
			a = -1;
		int ii3 = ii, jj3 = jj, ik13 = ik1, j13 = j1;
		int Ord3 = Order;
		int a3 = a;
		int iAStarGreedy3 = iAStarGreedy;
		Do |= FullGameThinkingTreeHourseGray(a3, Ord3, iAStarGreedy3, ii3, jj3, ik13, j13, FOUND, LeafAStarGreedy);
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;

		if (Order == 1)
			a = 1;

		else
			a = -1;
		int ii4 = ii, jj4 = jj, ik14 = ik1, j14 = j1;
		int Ord4 = Order;
		int a4 = a;
		int iAStarGreedy4 = iAStarGreedy;
		Do |= FullGameThinkingTreeCastleGray(a4, Ord4, iAStarGreedy4, ii4, jj4, ik14, j14, FOUND, LeafAStarGreedy);
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;

		if (Order == 1)
			a = 1;
		else
			a = -1;
		int ii5 = ii, jj5 = jj, ik15 = ik1, j15 = j1;
		int Ord5 = Order;
		int a5 = a;
		int iAStarGreedy5 = iAStarGreedy;
		Do |= FullGameThinkingTreeMinisterGray(a5, Ord5, iAStarGreedy5, ii5, jj5, ik15, j15, FOUND, LeafAStarGreedy);
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;

		if (Order == 1)
			a = 1;
		else
			a = -1;
		int ii6 = ii, jj6 = jj, ik16 = ik1, j16 = j1;
		int Ord6 = Order;
		int a6 = a;
		int iAStarGreedy6 = iAStarGreedy;
		Do |= FullGameThinkingTreeKingGray(a6, Ord6, iAStarGreedy6, ii6, jj6, ik16, j16, FOUND, LeafAStarGreedy);
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;


	}
	//For Brown Order Blitz Game Calculate Maximum Table Inclusive AStarGreedy First Game Search.
	else
	{

		if (Order == 1)
			a = 1;
		else a = -1;
		int ii1 = ii, jj1 = jj, ik11 = ik1, j11 = j1; int Ord1 = Order; int a1 = a; int iAStarGreedy1 = iAStarGreedy;
		Do |= FullGameThinkingTreeSoldierBrown(a1, Ord1, iAStarGreedy1, ii1, jj1, ik11, j11, FOUND, LeafAStarGreedy);
		Order = DummyOrder; ChessRules::CurrentOrder = DummyCurrentOrder;

		if (Order == 1)
			a = 1;
		else a = -1;
		int ii1 = ii, jj1 = jj, ik11 = ik1, j11 = j1; int Ord1 = Order; int a1 = a; int iAStarGreedy1 = iAStarGreedy;
		Do |= FullGameThinkingElephantBrown(a1, Ord1, iAStarGreedy1, ii1, jj1, ik11, j11, FOUND, LeafAStarGreedy);
		Order = DummyOrder; ChessRules::CurrentOrder = DummyCurrentOrder;



		if (Order == 1)
			a = 1;
		else
			a = -1;
		int ii3 = ii, jj3 = jj, ik13 = ik1, j13 = j1;
		int Ord3 = Order;
		int a3 = a;
		int iAStarGreedy3 = iAStarGreedy;
		Do |= FullGameThinkingTreeHourseBrown(a3, Ord3, iAStarGreedy3, ii3, jj3, ik13, j13, FOUND, LeafAStarGreedy);
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;

		if (Order == 1)
			a = 1;
		else
			a = -1;
		int ii4 = ii, jj4 = jj, ik14 = ik1, j14 = j1;
		int Ord4 = Order;
		int a4 = a;
		int iAStarGreedy4 = iAStarGreedy;
		Do |= FullGameThinkingTreeCastleBrown(a4, Ord4, iAStarGreedy4, ii4, jj4, ik14, j14, FOUND, LeafAStarGreedy);
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;

		if (Order == 1)
			a = 1;
		else
			a = -1;
		int ii5 = ii, jj5 = jj, ik15 = ik1, j15 = j1;
		int Ord5 = Order;
		int a5 = a;
		int iAStarGreedy5 = iAStarGreedy;
		Do |= FullGameThinkingTreeMinisterBrown(a5, Ord5, iAStarGreedy5, ii5, jj5, ik15, j15, FOUND, LeafAStarGreedy);
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;

		if (Order == 1)
			a = 1;
		else
			a = -1;
		int ii5 = ii, jj5 = jj, ik15 = ik1, j15 = j1;
		int Ord5 = Order;
		int a5 = a;
		int iAStarGreedy5 = iAStarGreedy;
		Do |= FullGameThinkingTreeKingBrown(a5, Ord5, iAStarGreedy5, ii5, jj5, ik15, j15, FOUND, LeafAStarGreedy);
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
	}




	return Do;
}


	/*bool FullGameThinkingTreeObject(int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{
		//List<Task> tH = new List<Task>();
		bool Do = false;
		//Initiatye Variables.
		int DummyOrder = Order;
		int DummyCurrentOrder = ChessRules::CurrentOrder;

		int a;
		if (Order == 1)
		{
			a = 1;
		}
		else
		{
			a = -1;
		}
		////Order *= -1;
		//Index = -1;
		//jindex = -1;
		//Kind =
		//autoO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		//lock (O)
		{
			if (Blitz)
			{
				AllDraw::FullGameMakimgBlitz(Index, jindex, Order, LeafAStarGreedy);
			}
		}
		if (Order == 1)
		{
			
				if (i < SodierMidle)
				{
					Object O1 = new Object(); //lock(O1) {
					if (Order == 1) 
						a = 1; 
					else 
						a = -1;
					int ii1 = ii, jj1 = jj, ik11 = ik1, j11 = j1; int Ord1 = Order; int a1 = a; int iAStarGreedy1 = iAStarGreedy; int i1 = i;
					Do |= FullGameThinkingTreeSoldier(i1, a1, Ord1, iAStarGreedy1, ii1, jj1, ik11, j11, FOUND, LeafAStarGreedy); Order = DummyOrder; ChessRules::CurrentOrder = DummyCurrentOrder;}
				}
			}
			},
			[&] ()
			{
					//autoO = new Object();
					//lock(O)
					{
						InitiateAStarGreedythCastleGray(i1, j1, Tabl, DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, Tab, Ord1, TB1, FOUND, LeafAStarGreedy);
					}
			}
				1, [&] ()
				{
				//autoooo = new Object();
				//lock(ooo)
				{
					if (i < HourseMidle)
					{
						//autoO1 = new Object();
						//lock(O1)
						{
							if (Order == 1)
								a = 1;
								{
							else
								a = -1;
							int ii3 = ii, jj3 = jj, ik13 = ik1, j13 = j1;
							int Ord3 = Order;
							int a3 = a;
							int iAStarGreedy3 = iAStarGreedy;
							int i3 = i;
							Do |= FullGameThinkingTreeHourse(i3, a3, Ord3, iAStarGreedy3, ii3, jj3, ik13, j13, FOUND, LeafAStarGreedy);
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
								}
						}
					}
				}
				}
			, [&] ()
			{
				//autoooo = new Object();
				//lock(ooo)
				{
					if (i < CastleMidle)
					{
						//autoO1 = new Object();
						//lock(O1)
						{
							if (Order == 1)
								a = 1;
								{
							else
								a = -1;
							int ii4 = ii, jj4 = jj, ik14 = ik1, j14 = j1;
							int Ord4 = Order;
							int a4 = a;
							int iAStarGreedy4 = iAStarGreedy;
							int i4 = i;
							Do |= FullGameThinkingTreeCastle(i4, a4, Ord4, iAStarGreedy4, ii4, jj4, ik14, j14, FOUND, LeafAStarGreedy);
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
								}
						}
					}
				}
			}
			, [&] ()
			{
				//autoooo = new Object();
				//lock(ooo)
				{
					if (i < MinisterMidle)
					{
						//autoO1 = new Object();
						//lock(O1)
						{
							if (Order == 1)
								a = 1;
								{
							else
								a = -1;
							int ii5 = ii, jj5 = jj, ik15 = ik1, j15 = j1;
							int Ord5 = Order;
							int a5 = a;
							int iAStarGreedy5 = iAStarGreedy;
							int i5 = i;
							Do |= FullGameThinkingTreeMinister(i5, a5, Ord5, iAStarGreedy5, ii5, jj5, ik15, j15, FOUND, LeafAStarGreedy);
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
								}
						}
					}
				}
			}
			, [&] ()
			{
				//autoooo = new Object();
				//lock(ooo)
				{
					if (i < KingMidle)
					{
						//autoO1 = new Object();
						//lock(O1)
						{
							if (Order == 1)
								a = 1;
								{
							else
								a = -1;
							int ii6 = ii, jj6 = jj, ik16 = ik1, j16 = j1;
							int Ord6 = Order;
							int a6 = a;
							int iAStarGreedy6 = iAStarGreedy;
							int i6 = i;
							Do |= FullGameThinkingTreeKing(i6, a6, Ord6, iAStarGreedy6, ii6, jj6, ik16, j16, FOUND, LeafAStarGreedy);
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
								}
						}
					}
				}
			}
			); }));
								  //Task array1 = Task.Factory.StartNew(() => Do |= this.FullGameThinkingTreeSoldierGray(a1, Ord1, iAStarGreedy1, ii1, jj1, ik11, j11, FOUND));
								  //array1.Start();
								  //Object tttt1 = new Object(); //lock (tttt1) { TH.push_back(array1); }
								  //Order *= -1;
								  //ChessRules::CurrentOrder *= -1;
								  //Initiatye Variables.
								  //Order *= -1;
								  //ChessRules::CurrentOrder *= -1;
								  //Initiatye Variables.
								  //Order *= -1;
								  //ChessRules::CurrentOrder *= -1;
								  //Initiatye Variables.
								  //Order *= -1;
								  //ChessRules::CurrentOrder *= -1;
								  //Initiatye Variables.
								  //Order *= -1;
								  //ChessRules::CurrentOrder *= -1;
			{
			output::Wait();
			}

		}
		//For Brown Order Blitz Game Calculate Maximum Table Inclusive AStarGreedy First Game Search.
		else
		{
			Task *output = Task::Factory.StartNew([&] ()
			{
//C# TO C++ CONVERTER TODO TASK: Lambda expressions and anonymous methods are not converted to native C++ unless the option to convert to C++11 lambdas is selected:
				Parallel::For(MinBrownMidle(), MaxGrayMidle(), i =>() { Parallel::Invoke(() => { Object ooo = new Object();
			}
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			//lock(ooo)
			{
				if (i >= SodierMidle && i < SodierHigh)
				{
					Object O1 = new Object(); //lock(O1) {if (Order == 1) a = 1; else a = -1; int ii1 = ii, jj1 = jj, ik11 = ik1, j11 = j1; int Ord1 = Order; int a1 = a; int iAStarGreedy1 = iAStarGreedy; int i1 = i; Do |= FullGameThinkingTreeSoldier(i1, a1, Ord1, iAStarGreedy1, ii1, jj1, ik11, j11, FOUND, LeafAStarGreedy); Order = DummyOrder; ChessRules::CurrentOrder = DummyCurrentOrder;}
				}
			}
			},
			[&] ()
			{
					//autoO = new Object();
					//lock(O)
					{
						InitiateAStarGreedythCastleGray(i1, j1, Tabl, DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, Tab, Ord1, TB1, FOUND, LeafAStarGreedy);
					}
			}
				6, [&] ()
				{
				if (i >= HourseMidle && i < HourseHight)
				{
					//autoO1 = new Object();
					//lock(O1)
					{
						if (Order == 1)
							a = 1;
							{
						else
							a = -1;
						int ii3 = ii, jj3 = jj, ik13 = ik1, j13 = j1;
						int Ord3 = Order;
						int a3 = a;
						int iAStarGreedy3 = iAStarGreedy;
						int i3 = i;
						Do |= FullGameThinkingTreeHourse(i3, a3, Ord3, iAStarGreedy3, ii3, jj3, ik13, j13, FOUND, LeafAStarGreedy);
						Order = DummyOrder;
						ChessRules::CurrentOrder = DummyCurrentOrder;
							}
					}
				}
				}
			, [&] ()
			{
				if (i >= CastleMidle && i < CastleHigh)
				{
					//autoooo = new Object();
					//lock(ooo)
					{
						if (Order == 1)
							a = 1;
							{
						else
							a = -1;
						int ii4 = ii, jj4 = jj, ik14 = ik1, j14 = j1;
						int Ord4 = Order;
						int a4 = a;
						int iAStarGreedy4 = iAStarGreedy;
						int i4 = i;
						Do |= FullGameThinkingTreeCastle(i4, a4, Ord4, iAStarGreedy4, ii4, jj4, ik14, j14, FOUND, LeafAStarGreedy);
						Order = DummyOrder;
						ChessRules::CurrentOrder = DummyCurrentOrder;
							}
					}
				}
			}
			, [&] ()
			{
				if (i >= MinisterMidle && i < MinisterHigh)
				{
					//autoooo = new Object();
					//lock(ooo)
					{
						if (Order == 1)
							a = 1;
							{
						else
							a = -1;
						int ii5 = ii, jj5 = jj, ik15 = ik1, j15 = j1;
						int Ord5 = Order;
						int a5 = a;
						int iAStarGreedy5 = iAStarGreedy;
						int i5 = i;
						Do |= FullGameThinkingTreeMinister(i5, a5, Ord5, iAStarGreedy5, ii5, jj5, ik15, j15, FOUND, LeafAStarGreedy);
						Order = DummyOrder;
						ChessRules::CurrentOrder = DummyCurrentOrder;
							}
					}
				}
			}
			, [&] ()
			{
					//autoO = new Object();
					//lock(O)
					{
						InitiateAStarGreedythMinisterGray(i1, j1, Tabl, DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, Tab, Ord1, TB1, FOUND, LeafAStarGreedy);
					}
			}
				0); }));
						//Initiatye Variables.
						//Initiatye Variables.
						//Initiatye Variables.
						//Initiatye Variables.
				{
			output::Wait();
				}
		}

		return Do;
	}*/
int** AllDraw::CloneATable(int** Tab)
{
	int **Table = new int*[8];
	for (int i = 0; i < 8; i++)
		Table[i] = new int[8];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			Table[i][j] = Tab[i][j];
		}
	}
	return Table;
}
int  AllDraw::MaxOfSixHuristic(double _1, double _2, double _3, double _4, double _5, double _6)
{
	double LessB[6];
	LessB[0] = _1;
	LessB[1] = _2;
	LessB[2] = _3;
	LessB[3] = _4;
	LessB[4] = _5;
	LessB[5] = _6;

	int Value = -1;
	double Les = -DBL_MAX;
	for (int i = 0; i < 6; i++)
	{
		if (LessB[i] > Les)
		{
			Les = LessB[i];
			Value = i;
		}
	}
	return Value;
}
int  AllDraw::MinOfSixHuristic(double _1, double _2, double _3, double _4, double _5, double _6)
{
	double LessB[6];
	LessB[0] = _1;
	LessB[1] = _2;
	LessB[2] = _3;
	LessB[3] = _4;
	LessB[4] = _5;
	LessB[5] = _6;

	int Value = -1;
	double Les = DBL_MAX;
	for (int i = 0; i < 6; i++)
	{
		if (LessB[i] < Les)
		{
			Les = LessB[i];
			Value = i;
		}
	}
	return Value;
}
	//best movement indexes founder method.
std::vector<std::vector<double>> AllDraw::FoundOfBestMovments(int AStarGreedyInt, std::vector<double> i, std::vector<double> j, std::vector<double> k, AllDraw Dummy, int a, int Order)
{
	//initiate local variables.
	std::vector<std::vector<double>> p = std::vector<std::vector<double>>();

	for (int ii = 0; ii <6; ii++)
	{
		std::vector<double> pl = std::vector<double>();
		p.push_back(pl);
		Less = -DBL_MAX;
	}
	std::vector<AllDraw> DummyList = std::vector<AllDraw>();
	DummyList.push_back(Dummy);
	MaxHuristicAStarGreedytBackWard.clear();
	//found best movment depend of max huristic.
	Dummy.HuristicAStarGreedySearch(0, a, Order, false);
	//proccess from a stored global variable decicion making.
	if ((MaxHuristicAStarGreedytBackWard[0][1]) != -1) //soldier.
	{
		i.push_back(MaxHuristicAStarGreedytBackWard[0][2]);
		j.push_back(MaxHuristicAStarGreedytBackWard[0][3]);
		k.push_back(MaxHuristicAStarGreedytBackWard[0][4]);
		p[0].push_back(MaxHuristicAStarGreedytBackWard[0][2]);
	}
	else if ((MaxHuristicAStarGreedytBackWard[0][5]) != -1) //Elephant
	{
		i.push_back(MaxHuristicAStarGreedytBackWard[0][6]);
		j.push_back(MaxHuristicAStarGreedytBackWard[0][7]);
		k.push_back(MaxHuristicAStarGreedytBackWard[0][8]);
		p[1].push_back(MaxHuristicAStarGreedytBackWard[0][6]);
	}
	else if ((MaxHuristicAStarGreedytBackWard[0][9]) != -1) //Hourse
	{
		i.push_back(MaxHuristicAStarGreedytBackWard[0][10]);
		j.push_back(MaxHuristicAStarGreedytBackWard[0][11]);
		k.push_back(MaxHuristicAStarGreedytBackWard[0][12]);
		p[2].push_back(MaxHuristicAStarGreedytBackWard[0][10]);
	}
	else if ((MaxHuristicAStarGreedytBackWard[0][13]) != -1) //Castles.
	{
		i.push_back(MaxHuristicAStarGreedytBackWard[0][14]);
		j.push_back(MaxHuristicAStarGreedytBackWard[0][15]);
		k.push_back(MaxHuristicAStarGreedytBackWard[0][16]);
		p[3].push_back(MaxHuristicAStarGreedytBackWard[0][14]);
	}
	else if ((MaxHuristicAStarGreedytBackWard[0][17]) != -1) //Minister
	{
		i.push_back(MaxHuristicAStarGreedytBackWard[0][18]);
		j.push_back(MaxHuristicAStarGreedytBackWard[0][19]);
		k.push_back(MaxHuristicAStarGreedytBackWard[0][20]);
		p[4].push_back(MaxHuristicAStarGreedytBackWard[0][18]);
	}
	else if ((MaxHuristicAStarGreedytBackWard[0][21]) != -1) //King.
	{
		i.push_back(MaxHuristicAStarGreedytBackWard[0][22]);
		j.push_back(MaxHuristicAStarGreedytBackWard[0][23]);
		k.push_back(MaxHuristicAStarGreedytBackWard[0][24]);
		p[5].push_back(MaxHuristicAStarGreedytBackWard[0][22]);
	}
	//not found
	return p;
}

	//Copying of Items of Enemy Non Move and Current Moved.
	/*AllDraw AllDraw::CopyRemeiningItems(AllDraw ADummy, int Order)
	{
		//Initiate Local Variables.
		AllDraw Dummy = AllDraw(OrderPlate, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
		Dummy.SolderesOnTable =  DrawSoldier[16];
		Dummy.ElephantOnTable =  DrawElefant[4];
		Dummy.HoursesOnTable =  DrawHourse[4];
		Dummy.CastlesOnTable =  DrawCastle[4];
		Dummy.MinisterOnTable =  DrawMinister[2];
		Dummy.KingOnTable = DrawKing[4];
		for (int i = 0; i < SodierHigh; i++)
			Dummy.SolderesOnTable[i] = DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
		for (int i = 0; i < ElefantHigh; i++)
			Dummy.ElephantOnTable[i] =  DrawElefant(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
		for (int i = 0; i < HourseHight; i++)
			Dummy.HoursesOnTable[i] =  DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
		for (int i = 0; i < CastleMidle; i++)
			Dummy.CastlesOnTable[i] =  DrawCastle(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
		for (int i = 0; i <MinisterHigh; i++)
			Dummy.MinisterOnTable[i] = DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
		for (int i = 0; i < KingHigh; i++)
			Dummy.KingOnTable[i] =  DrawKing(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged);
		/For All Sodiers Movments.
		for (int i = 0; i < SodierHigh; i++)
		{
			//try
			{
				//Construction of Current Solders. 
				Dummy.SolderesOnTable[i] =  DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, [i].Row, [i].Column, [i].color, [i].Table, [i].Order, false, [i].Current);
			}
			//catch(std::exception &t)
			{
				
			}
		}
		//For All Elephant Objects.
		for (int i = 0; i < ElefantHigh; i++)
		{
			//try
			{
				//Construction of Curren Elephant.
				Dummy.ElephantOnTable[i] =  DrawElefant(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, ElephantOnTable[i].Row, ElephantOnTable[i].Column, ElephantOnTable[i].color, ElephantOnTable[i].Table, ElephantOnTable[i].Order, false, ElephantOnTable[i].Current);
			}
			//catch(std::exception &t)
			{
				
			}
		}
		//for All Hourse Objects.
		for (int i = 0; i < HourseHight; i++)
		{
			//try
			{
				//Construction of Hourse Objects.
				Dummy.HoursesOnTable[i] = DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, HoursesOnTable[i].Row, HoursesOnTable[i].Column, HoursesOnTable[i].color, HoursesOnTable[i].Table, HoursesOnTable[i].Order, false, HoursesOnTable[i].Current);
			}
			//catch(std::exception &t)
			{
				
			}
		}
		//For All Castles Objects.
		for (int i = 0; i < CastleHigh; i++)
		{
			//try
			{
				//Construction of Castles Objects.
				Dummy.CastlesOnTable[ii] = DrawCastle(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, CastlesOnTable[ii].Row, CastlesOnTable[ii].Column, CastlesOnTable[ii].color, CastlesOnTable[ii].Table, CastlesOnTable[ii].Order, false, CastlesOnTable[ii].Current);
			}
			//catch(std::exception &t)
			{
				
			}
		}
		//For All Minister Objects.
		for (int i = 0; i < MinisterHigh; i++)
		{
			//try
			{
				//Construction of Current Minister.
				Dummy.MinisterOnTable[i] = DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, MinisterOnTable[i].Row, MinisterOnTable[i].Column, MinisterOnTable[i].color, MinisterOnTable[i].Table, MinisterOnTable[i].Order, false, MinisterOnTable[i].Current);
			}
			//catch(std::exception &t)
			{
				
			}
		}
		//For All King Objects.
		for (int i = 0; i < KingHigh; i++)
		{
			//try
			{
				//Construction of Kings Objects.
				Dummy.KingOnTable[i] =  DrawKing(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, KingOnTable[i].Row, KingOnTable[i].Column, KingOnTable[i].color, KingOnTable[i].Table, KingOnTable[i].Order, false, KingOnTable[i].Current);
			}
			//catch(std::exception &t)
			{
				
			}
		}
		//Gray Order.
		if (Order == 1)
		{
			//For Gray Soders Objects.
			for (int i = 0; i < SodierMidle; i++)
			{
				//try
				{
					//Clone a Movments.
					ADummy::SolderesOnTable[i].Clone(Dummy.SolderesOnTable[i]);
				}
				//catch(std::exception &t)
				{
					
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete Dummy.SolderesOnTable[i];
				}
			}
			//For Gray Elephant.
			for (int i = 0; i < ElefantMidle; i++)
			{
				//try
				{
					//Clone a  Movments.
					ADummy::ElephantOnTable[i].Clone(Dummy.ElephantOnTable[i]);
				}
				//catch(std::exception &t)
				{
					
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete Dummy.ElephantOnTable[i];
				}
			}
			//For Gray Hourses.
			for (int i = 0; i < HourseMidle; i++)
			{
				//try
				{
					//Clone a Movments.
					ADummy::HoursesOnTable[i].Clone(Dummy.HoursesOnTable[i]);
				}
				//catch(std::exception &t)
				{
					
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete Dummy.HoursesOnTable[i];
				}
			}
			//For Gray Castles.
			for (int i = 0; i < CastleMidle; i++)
			{
				//try
				{
					//Clone a Movments.
					ADummy::CastlesOnTable[ii].Clone(Dummy.CastlesOnTable[ii]);
				}
				//catch(std::exception &t)
				{
					
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete Dummy.CastlesOnTable[ii];
				}
			}
			//For Gray Ministers.
			for (int i = 0; i < MinisterMidle; i++)
			{
				//try
				{
					//Clone a Movments.
					ADummy::MinisterOnTable[i].Clone(Dummy.MinisterOnTable[i]);
				}
				//catch(std::exception &t)
				{
					
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete Dummy.MinisterOnTable[i];
				}
			}
			//For Gray King.
			for (int i = 0; i < KingMidle; i++)
			{
				//try
				{
					//Clone a Movments.
					ADummy::KingOnTable[i].Clone(Dummy.KingOnTable[i]);
				}
				//catch(std::exception &t)
				{
					
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete Dummy.KingOnTable[i];
				}
			}
			//For All Solders.
		}
		else //For Order Brown.
		{
			{
				//For Brown Solders.
				for (int i = SodierMidle; i < SodierHigh; i++)
				{
					//try
					{
						//Clone a Movments.
						ADummy::SolderesOnTable[i].Clone(Dummy.SolderesOnTable[i]);
					}
					//catch(std::exception &t)
					{
						
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
						delete Dummy[i];
					}
				}
				//For All Brown Elephants.
				for (int i = ElefantMidle; i < ElefantHigh; i++)
				{
					//try
					{
						//Clone a Enemy.
						ADummy::ElephantOnTable[i].Clone(Dummy.ElephantOnTable[i]);
					}
					//catch(std::exception &t)
					{
						
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
						delete Dummy.ElephantOnTable[i];
					}
				}
				//For All Brown Hourses.
				for (int i = HourseMidle; i < HourseHight; i++)
				{
					//try
					{
						//Clone a Enemy.
						ADummy::HoursesOnTable[i].Clone(Dummy.HoursesOnTable[i]);
					}
					//catch(std::exception &t)
					{
						
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
						delete Dummy.HoursesOnTable[i];
					}
				}
				//For Brown Castles. 
				for (int i = CastleMidle; i < CastleHigh; i++)
				{
					//try
					{
						//Clone a Movments.
						ADummy::CastlesOnTable[ii].Clone(Dummy.CastlesOnTable[ii]);
					}
					//catch(std::exception &t)
					{
						
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
						delete Dummy.CastlesOnTable[ii];
					}
				}
				//For Gray Minsters.
				for (int i = MinisterMidle; i < MinisterHigh; i++)
				{
					//try
					{
						//Clone a Enemy.
						ADummy::MinisterOnTable[i].Clone(Dummy.MinisterOnTable[i]);
					}
					//catch(std::exception &t)
					{
						
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
						delete Dummy.MinisterOnTable[i];
					}
				}
				//For Brown Kings.
				for (int i = KingMidle; i < KingHigh; i++)
				{
					//try
					{
						//Clone a Enemy.
						ADummy::KingOnTable[i].Clone(Dummy.KingOnTable[i]);
					}
					//catch(std::exception &t)
					{
						
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
						delete Dummy.KingOnTable[i];
					}
				}
			}

		}

		//Return Constructed Tables.
		return Dummy;


	}
	*/
bool AllDraw::TableZero(int** Ta)
{
	bool Zerro = true;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (Ta[i][j] != 0)
			{
				Zerro = false;
			}
		}
	}
	return Zerro;
}
void AllDraw::CheckedMateConfiguratiionSoldier(int Order, int i, bool Regrad)
{
	for (int j = 0; j < SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder.size(); j++)
	{
		if (SolderesOnTable[i].SoldierThinking.LearningVarsObject.size() == SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder.size())
		{
			if (SolderesOnTable[i].SoldierThinking.LearningVarsObject[j][1] && (!SolderesOnTable[i].SoldierThinking.LearningVarsObject[j][4]))
			{
				SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].Initiate();
				if (!Regrad)
				{
					SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].LearningAlgorithmPenalty();
				}
				SolderesOnTable[i].SoldierThinking.HuristicPenaltyValuePerform(SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j], Order, SolderesOnTable[i].SoldierThinking.HuristicListSolder[j][0], true);
			}
		}
	}

}
void AllDraw::CheckedMateConfiguratiionElephant(int Order, int i, bool Regrad)
{
	for (int j = 0; j < ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant.size(); j++)
	{
		if (ElephantOnTable[i].ElefantThinking.LearningVarsObject.size() == ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant.size())
		{
			if (ElephantOnTable[i].ElefantThinking.LearningVarsObject[j][1] && !ElephantOnTable[i].ElefantThinking.LearningVarsObject[j][4])
			{
				ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].Initiate();
				if (!Regrad)
				{
					ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].LearningAlgorithmPenalty();
				}
				ElephantOnTable[i].ElefantThinking.HuristicPenaltyValuePerform(ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j], Order, ElephantOnTable[i].ElefantThinking.HuristicListElefant[j][0], true);
			}
		}

	}
}
void AllDraw::CheckedMateConfiguratiionHourse(int Order, int i, bool Regrad)
{
	for (int j = 0; j < HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse.size(); j++)
	{
		if (HoursesOnTable[i].HourseThinking.LearningVarsObject.size() == HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse.size())
		{
			if (HoursesOnTable[i].HourseThinking.LearningVarsObject[j][1] && !HoursesOnTable[i].HourseThinking.LearningVarsObject[j][4])
			{
				HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].Initiate();
				//if(Regrad)
				//HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].LearningAlgorithmRegard();
				//else
				if (!Regrad)
				{
					HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].LearningAlgorithmPenalty();
				}
				HoursesOnTable[i].HourseThinking.HuristicPenaltyValuePerform(HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j], Order, HoursesOnTable[i].HourseThinking.HuristicListHourse[j][0], true);
			}
		}
	}
}

void AllDraw::CheckedMateConfiguratiionCastle(int Order, int ii, bool Regrad)
{
	for (int j = 0; j < CastlesOnTable[ii].CastleThinking.PenaltyRegardListCastle.size(); j++)
	{
		if (CastlesOnTable[ii].CastleThinking.LearningVarsObject.size() == CastlesOnTable[ii].CastleThinking.PenaltyRegardListCastle.size())
		{
			if (CastlesOnTable[ii].CastleThinking.LearningVarsObject[j][1] && !CastlesOnTable[ii].CastleThinking.LearningVarsObject[j][4])
			{
				CastlesOnTable[ii].CastleThinking.PenaltyRegardListCastle[j].Initiate();
				if (!Regrad)
				{
					CastlesOnTable[ii].CastleThinking.PenaltyRegardListCastle[j].LearningAlgorithmPenalty();
				}
				CastlesOnTable[ii].CastleThinking.HuristicPenaltyValuePerform(CastlesOnTable[ii].CastleThinking.PenaltyRegardListCastle[j], Order, CastlesOnTable[ii].CastleThinking.HuristicListCastle[j][0], true);
			}
		}
	}
}


void AllDraw::CheckedMateConfiguratiionMinister(int Order, int i, bool Regrad)
{
	for (int j = 0; j < MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister.size(); j++)
	{
		if (MinisterOnTable[i].MinisterThinking.LearningVarsObject.size() == MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister.size())
		{
			if (MinisterOnTable[i].MinisterThinking.LearningVarsObject[j][1] && !MinisterOnTable[i].MinisterThinking.LearningVarsObject[j][4])
			{
				MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].Initiate();
				//if(Regrad)
				//MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].LearningAlgorithmRegard();
				//else
				if (!Regrad)
				{
					MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].LearningAlgorithmPenalty();
				}
				MinisterOnTable[i].MinisterThinking.HuristicPenaltyValuePerform(MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j], Order, MinisterOnTable[i].MinisterThinking.HuristicListMinister[j][0], true);
			}
		}
	}
}
void AllDraw::CheckedMateConfiguratiionking(int Order, int i, bool Regrad)
{
	for (int j = 0; j < KingOnTable[i].KingThinking.PenaltyRegardListKing.size(); j++)
	{
		if (KingOnTable[i].KingThinking.LearningVarsObject.size() == KingOnTable[i].KingThinking.PenaltyRegardListKing.size())
		{
			if (KingOnTable[i].KingThinking.LearningVarsObject[j][1] && (!KingOnTable[i].KingThinking.LearningVarsObject[j][4]))
			{
				KingOnTable[i].KingThinking.PenaltyRegardListKing[j].Initiate();
				//if(Regrad)
				//KingOnTable[i].KingThinking.PenaltyRegardListKing[j].LearningAlgorithmRegard();
				//else
				if (!Regrad)
				{
					KingOnTable[i].KingThinking.PenaltyRegardListKing[j].LearningAlgorithmPenalty();
				}
				KingOnTable[i].KingThinking.HuristicPenaltyValuePerform(KingOnTable[i].KingThinking.PenaltyRegardListKing[j], Order, KingOnTable[i].KingThinking.HuristicListKing[j][0], true);
			}

		}
	}
}

void AllDraw::CheckedMateConfiguratiion(int Order)
{

	if (ThinkingChess::LearningVarsCheckedMateOccured && ThinkingChess::LearningVarsCheckedMateOccuredOneCheckedMate)
	{
		if (Order == 1)
		{
			for (int i = 0; i < SodierMidle; i++)
			{
				if (SolderesOnTable != nullptr && ((&(SolderesOnTable[i])) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionSoldier(Order, i, true);
					}
					//catch(std::exception &t)
					{

					}
				}
			}

			for (int i = 0; i < ElefantMidle; i++)
			{
				if (ElephantOnTable != nullptr && (&(ElephantOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionElephant(Order, i, true);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = 0; i < HourseMidle; i++)
			{
				if (HoursesOnTable != nullptr && (&(HoursesOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionHourse(Order, i, true);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = 0; i < CastleMidle; i++)
			{
				if ((CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr))
				{
					CheckedMateConfiguratiionCastle(Order, i, true);
				}
			}
			for (int i = 0; i < MinisterMidle; i++)
			{
				if ((MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionMinister(Order, i, true);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = 0; i < KingMidle; i++)
			{
				if (KingOnTable != nullptr && (&(KingOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionking(Order, i, true);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
		}
		else
		{
			for (int i = SodierMidle; i < SodierHigh; i++)
			{
				if (SolderesOnTable != nullptr && ((&(SolderesOnTable[i])) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionSoldier(Order, i, true);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = ElefantMidle; i < ElefantHigh; i++)
			{
				if (ElephantOnTable != nullptr && (&(ElephantOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionElephant(Order, i, true);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = HourseMidle; i < HourseHight; i++)
			{
				if (HoursesOnTable != nullptr && (&(HoursesOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionHourse(Order, i, true);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = CastleMidle; i < CastleHigh; i++)
			{
				if ((CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionCastle(Order, i, true);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = MinisterMidle; i < MinisterHigh; i++)
			{
				if ((MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionMinister(Order, i, true);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = KingMidle; i < KingHigh; i++)
			{
				if (KingOnTable != nullptr && (&(KingOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionking(Order, i, true);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
		}


	}
	else
	{
		if (Order == 1)
		{
			for (int i = 0; i < SodierMidle; i++)
			{
				if (SolderesOnTable != nullptr && ((&(SolderesOnTable[i])) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionSoldier(Order, i, false);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = 0; i < ElefantMidle; i++)
			{
				if (ElephantOnTable != nullptr && (&(ElephantOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionElephant(Order, i, false);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = 0; i < HourseMidle; i++)
			{
				if (HoursesOnTable != nullptr && (&(HoursesOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionHourse(Order, i, false);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = 0; i < CastleMidle; i++)
			{
				if ((CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionCastle(Order, i, false);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = 0; i < MinisterMidle; i++)
			{
				if ((MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionMinister(Order, i, false);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = 0; i < KingMidle; i++)
			{
				if (KingOnTable != nullptr && (&(KingOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionking(Order, i, false);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
		}
		else
		{
			for (int i = SodierMidle; i < SodierHigh; i++)
			{
				if (SolderesOnTable != nullptr && ((&(SolderesOnTable[i])) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionSoldier(Order, i, false);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = ElefantMidle; i < ElefantHigh; i++)
			{
				if (ElephantOnTable != nullptr && (&(ElephantOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionElephant(Order, i, false);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = HourseMidle; i < HourseHight; i++)
			{
				if (HoursesOnTable != nullptr && (&(HoursesOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionHourse(Order, i, false);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = CastleMidle; i < CastleHigh; i++)
			{
				if ((CastlesOnTable != nullptr) && (&(CastlesOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionCastle(Order, i, false);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = MinisterMidle; i < MinisterHigh; i++)
			{
				if ((MinisterOnTable != nullptr) && (&(MinisterOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionMinister(Order, i, false);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
			for (int i = KingMidle; i < KingHigh; i++)
			{
				if (KingOnTable != nullptr && (&(KingOnTable[i]) != nullptr))
				{
					//try
					{
						CheckedMateConfiguratiionking(Order, i, false);
					}
					//catch(std::exception &t)
					{

					}
				}
			}
		}

	}
}
void AllDraw::SemaphoreExxedTime(int time, int Kind)
{

	if (time > 10000)
	{
		if (Kind == 1)
			OutPut = L"Solder Semaphre Full Game Exeede time";
		else
			if (Kind == 2)
				OutPut = L"elephant Semaphre Full Game Exeede time";
			else
				if (Kind == 3)
					OutPut = L"Hourse Semaphre Full Game Exeede time";
				else
					if (Kind == 4)
						OutPut = L"Castle Semaphre Full Game Exeede time";
					else
						if (Kind == 5)
							OutPut = L"Minister Semaphre Full Game Exeede time";
						else
							if (Kind == 6)
								OutPut = L"King Semaphre Full Game Exeede time";


	}
}
	//Main Initiate Thinking Method.
int** AllDraw::Initiate(int ii, int jj, int a, int** Table, int Order, bool TB, bool FOUND, int LeafAStarGreedy, bool SetDept)
{
	int **TableHuristic;
	int Current = ChessRules::CurrentOrder;
	int DummyOrder = Order;

	///autoparallelOptions = new ParallelOptions();
	SetDeptIgnore = SetDept;

	AllDraw::ActionStringReady = false;
	//SignKiller = Double.MaxValue / (System.Math.Pow(6 * 32, AllDraw::MaxAStarGreedy) * 64 * 32);
	SignKiller = 1;
	ThinkingChess::LearningVarsCheckedMateOccured = false;
	ThinkingChess::LearningVarsCheckedMateOccuredOneCheckedMate = false;
	RegardOccurred = false;
	TaskBegin = 0;
	TaskEnd = 0;

	MaxDuringLevelThinkingCreation = StringConverterHelper::fromString<int>(AllDraw::THIScomboBoxMaxLevelText);
	MinThinkingTreeDepth = 0;
	//ThinkingChess.NumbersOfAllNode = 0;

	ThinkingChess::FoundFirstMating = 0;
	ThinkingChess::FoundFirstSelfMating = 0;
	//Monitor Log File Appending ZFirst Line.
	std::wstring state1 = L"\n\t=====================================================================================================================================================================<br/>";
	std::wstring state2 = std::wstring(L"\n\tMovment Number:") + StringConverterHelper::toString(AllDraw::MovmentsNumber) + std::wstring(L"<br/>");


	//String R = File.ReadAllText(Root + "\\Database\\Monitor.html");
	//R = R.Replace("</body>", "");
	//File.WriteAllText(Root + "\\Database\\Monitor.html", R);
	////File.AppendAllText(Root + "\\Database\\Monitor.html", "\n\t" + state1 + "<br/>");
	//File.AppendAllText(AllDraw::Root + "\\Database\\Monitor.html", state2 + "<br/>");
	//File.AppendAllText(Root + "\\Database\\Monitor.html", "\n\t" + "</body>");
	OutPut += state1;
	OutPut += state2;

	CurrentHuristic = -DBL_MAX;


	//SetprogressBarRefregitzValue(THIS.progressBarVerify, 0);
	//THIS.progressBarVerify.Invalidate();
	//SetprogressBarUpdate(THIS.progressBarVerify);
	MaxHuristicxT = -DBL_MAX;
	DrawCastle::MaxHuristicxB = -DBL_MAX;
	DrawElefant::MaxHuristicxE = -DBL_MAX;
	DrawHourse::MaxHuristicxH = -DBL_MAX;
	DrawKing::MaxHuristicxK = -DBL_MAX;
	DrawMinister::MaxHuristicxM = -DBL_MAX;
	DrawSoldier::MaxHuristicxS = -DBL_MAX;
	MovementsAStarGreedyHuristicFoundT = false;
	DrawTable = false;

	ChessRules::CheckBrownObjectDangourFirstTimesOcured = false;
	ChessRules::CheckGrayObjectDangourFirstTimesOcured = false;


	//Initiate Local Varibales.
	TableHuristic = nullptr;
	RW1 = -1;
	CL1 = -1;
	Ki1 = -1;
	RW2 = -1;
	CL2 = -1;
	Ki2 = -1;
	RW3 = -1;
	CL3 = -1;
	Ki3 = -1;
	RW4 = -1;
	CL4 = -1;
	Ki4 = -1;
	RW5 = -1;
	CL5 = -1;
	Ki5 = -1;
	RW6 = -1;
	CL6 = -1;
	Ki6 = -1;
	MaxHuristicAStarGreedytBackWard.clear();

	//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
	//ORIGINAL LINE: int[,] Tab = nullptr;
	int **Tab = nullptr;

	if (!FOUND)
	{
		ThinkingChess::NotSolvedKingDanger = false;


		LoopHuristicIndex = 0;

		Less = -DBL_MAX;
		;


	}

	if (!SetDept)
	{
		MaxAStarGreedy = StringConverterHelper::fromString<int>(AllDraw::THIScomboBoxMaxLevelText);
	}
	AllDraw::AStarGreedyiLevelMax = MaxAStarGreedy;
	AStarGreedyiLevelMax = StringConverterHelper::fromString<int>(AllDraw::THIScomboBoxMaxLevelText);
	AllDraw::MaxAStarGreedyHuristicProgress = 6;
	for (int i = 0; i <= MaxAStarGreedy; i++)
	{
		AllDraw::MaxAStarGreedyHuristicProgress += AllDraw::MaxAStarGreedyHuristicProgress * 6;
	}
	//THIS.progressBarVerify.Maximum = 999999999;
	increasedProgress = static_cast<int>(static_cast<double>(999999999) / static_cast<double>(AllDraw::MaxAStarGreedyHuristicProgress));
	AStarGreedytMaxCount = static_cast<double>(MaxAStarGreedy);

	ChessRules::CurrentOrder = Current;
	Order = DummyOrder;

	int iiii = ii, jjjj = jj, Ord = Order;
	int MaxAStarGreedy1 = 0;

	int MaxAStarGreedy1 = MaxAStarGreedy;
	int **Tabl = CloneATable(Table);
	int aaa = a;
	//InitiateAStarGreedytObject(MaxAStarGreedy1, iiii, jjjj, aaa, Tabl, Ord, false, FOUND, LeafAStarGreedy);
	InitiateAStarGreedyt(MaxAStarGreedy1, iiii, jjjj, aaa, Tabl, Ord, false, FOUND, LeafAStarGreedy);

	MinThinkingTreeDepth = MaxAStarGreedy - MinThinkingTreeDepth;

	//Initaite Local Varibales.
	Tab = new int*[8];
	for (int h = 0; h < 8; h++)
		Tab[h] = new int[8];
	Less = -DBL_MAX;
	ChessRules::CurrentOrder = Current;
	Order = DummyOrder;
	OutPut = std::wstring(L"\r\nMinimum Thinking Tree Depth:") + StringConverterHelper::toString(MinThinkingTreeDepth) + std::wstring(L"!");

	TableHuristic = HuristicAStarGreedySearch(0, a, Order, false);
	if (TableHuristic == nullptr || ((TableZero(TableHuristic))))
	{

		//try
		{
			OutPut = L"\r\nTable Zero.Possibly Full Penalty!";


			//THIS.RefreshBoxText();
			bool aa = UsePenaltyRegardMechnisamT;
			UsePenaltyRegardMechnisamT = false;
			//THISDummy = THISDummy.RemovePenalltyFromFirstBranches(Order);
			RemovePenalltyFromFirstBranches(Order);
			MaxAStarGreedy = 1;
			AStarGreedyiLevelMax = 1;
			Less = -DBL_MAX;
			//TableHuristic = THISDummy.HuristicAStarGreedySearchPenalties(0, a, Order, false);
			//TableHuristic = THISDummy.HuristicAStarGreedySearch(0, a, Order, false);
			TableHuristic = HuristicAStarGreedySearch(0, a, Order, false);
			//THISDummy.UsePenaltyRegardMechnisamT = aa;
			UsePenaltyRegardMechnisamT = aa;

		}
		//catch(std::exception &t)
		{

		}
	}

	//If Table Found.

	if (TableHuristic != nullptr)
	{
		if (Order == 1)
		{
			OutPut = std::wstring(L"\r\nHuristic Find Best Movements AStarGreedy ") + StringConverterHelper::toString(AStarGreedyInt) + std::wstring(L" By Bob!");
			//THIS.RefreshBoxText();
		}
		else
		{
			OutPut = std::wstring(L"\r\nHuristic Find Best Movements AStarGreedy ") + StringConverterHelper::toString(AStarGreedyInt) + std::wstring(L" By Alice!");
			//THIS.RefreshBoxText();

		}

		Order = DummyOrder;
		ChessRules::CurrentOrder = Current;
	}
	else
	{
		//Clear AStarGreedy Varibales.
		AllDraw::StoreADraw.clear();
		TableCurrent.clear();
		AStarGreedyInt = 0;
	}

	Order = DummyOrder;
	ChessRules::CurrentOrder = Current;
	DrawTable = true;
	FoundATable = true;


	return TableHuristic;
}

	//Identification of Illegal AStarGreedy First and Common Hurist Movments.
bool AllDraw::IsEnemyThingsinStable(int** TableHuristic, int**  TableAction, int Order)
{
	//Iniatiet Local Variables.
	int **Cromosom1 = TableHuristic;
	int **Cromosom2 = TableAction;
	bool and = true;

	bool Find = false;
	//bool Hit = false;
	int FindNumber = 0;
	int CromosomRowFirst = -1, CromosomColumnFirst = -1, CromosomRow = -1, CromosomColumn = -1;
	//Initiate Local Variables.

	//For All Table Home
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			//Gray Order.
			if (Order == 1)
			{
				//Situation 11.
				if (and)
				{
					//All The Brown Object Ignored.
					if (Cromosom1[i][j] < 0 && Cromosom2[i][j] < 0)
					{
						continue;
					}
				}
				else ///Situation 2.
				{
					//All The Brown Ojects Ignored.
					if (Cromosom1[i][j] < 0 || Cromosom2[i][j] < 0)
					{
						continue;
					}
				}
			}
			else //Brown Order.
			{
				//Situation 1.
				if (and)
				{
					//All The Gray Objects Ignored.
					if (Cromosom1[i][j] > 0 && Cromosom2[i][j] > 0)
					{
						continue;
					}

				}
				else
				{
					//All The Gray Objects Ignored.
					if (Cromosom1[i][j] > 0 || Cromosom2[i][j] > 0)
					{
						continue;
					}
				}
			}
			if (!(ArrangmentsChanged))
			{

				if (Order == 1 && j == 6 && i > 0 && i < 7)
				{
					if (((Cromosom2[i][j + 1] > 0) || (Cromosom2[i + 1][j + 1] > 0 && Cromosom1[i + 1][j + 1] < 0) || (Cromosom2[i - 1][j + 1] > 0 && Cromosom1[i - 1][j + 1] < 0) && Cromosom1[i][j] == 1))
					{
						CromosomRowFirst = i;
						CromosomColumnFirst = j;
						if (Cromosom2[i][j + 1] > 0)
						{
							CromosomRow = i;
							CromosomColumn = j + 1;
						}
						else if (Cromosom2[i + 1][j + 1] > 0 && Cromosom1[i + 1][j + 1] < 0)
						{
							CromosomRow = i + 1;
							CromosomColumn = j + 1;
						}
						else if (Cromosom2[i - 1][j + 1] > 0 && Cromosom1[i - 1][j + 1] < 0)
						{
							CromosomRow = i - 1;
							CromosomColumn = j + 1;
						}
						Find = true;
						FindNumber++;
						AllDraw::SodierConversionOcuured = true;

					}

				}
				else
				{
					if (Order == -1 && j == 1 && i > 0 && i < 7)
					{
						if (((Cromosom2[i][j - 1] < 0) || (Cromosom2[i + 1][j - 1] < 0 && Cromosom1[i + 1][j - 1] > 0) || (Cromosom2[i - 1][j - 1] < 0 && Cromosom1[i - 1][j - 1] < 0) && Cromosom1[i][j] == -1))
						{
							CromosomRowFirst = i;
							CromosomColumnFirst = j;
							if (Cromosom2[i][j - 1] > 0)
							{
								CromosomRow = i;
								CromosomColumn = j - 1;
							}
							else if (Cromosom2[i + 1][j - 1] > 0 && Cromosom1[i + 1][j - 1] < 0)
							{
								CromosomRow = i + 1;
								CromosomColumn = j - 1;
							}
							else if (Cromosom2[i - 1][j - 1] > 0 && Cromosom1[i - 1][j - 1] < 0)
							{
								CromosomRow = i - 1;
								CromosomColumn = j - 1;
							}
							FindNumber++;
							AllDraw::SodierConversionOcuured = true;
						}
					}
				}

				//Castles King Validity Condition.
				if (Order == 1 && j == 0)
				{
					//Small Gray Castles King.
					if (i == 6 && Cromosom2[i][j] == 6 && Cromosom2[i - 1][j] == 4 && Cromosom1[i][j] != 6 && Cromosom1[i - 1][j] != 4)
					{
						CromosomRowFirst = i - 3;
						CromosomColumnFirst = j;
						CromosomRow = i;
						CromosomColumn = j;
						Find = true;
						FindNumber++;
						ChessRules::SmallKingCastleGray = true;
						CastlesKing = true;
					}
					else //Big Briges King Gray.
					{
						if (i == 2 && Cromosom2[i][j] == 6 && Cromosom2[i + 1][j] == 4 && Cromosom1[i][j] != 6 && Cromosom1[i + 1][j] != 4)
						{
							CromosomRowFirst = i + 3;
							CromosomColumnFirst = j;
							CromosomRow = i;
							CromosomColumn = j;
							Find = true;
							FindNumber++;
							ChessRules::BigKingCastleGray = true;
							CastlesKing = true;
						}
					}

				}
				else if (j == 7)
				{
					//Small Castles King Brown.
					if (i == 6 && Cromosom2[i][j] == -6 && Cromosom2[i - 1][j] == -4 && Cromosom1[i][j] != -6 && Cromosom1[i - 1][j] != -4)
					{
						CromosomRowFirst = i - 3;
						CromosomColumnFirst = j;
						CromosomRow = i;
						CromosomColumn = j;
						Find = true;
						FindNumber++;
						ChessRules::SmallKingCastleBrown = true;
						CastlesKing = true;
					}
					else //Big Castles King Brown.
					{
						if (i == 2 && Cromosom2[i][j] == -6 && Cromosom2[i + 1][j] == -4 && Cromosom1[i][j] != -6 && Cromosom1[i + 1][j] != -4)
						{
							CromosomRowFirst = i + 3;
							CromosomColumnFirst = j;
							CromosomRow = i;
							CromosomColumn = j;
							Find = true;
							FindNumber++;
							ChessRules::BigKingCastleBrown = true;
							CastlesKing = true;
						}
					}

				}


			}
			else
			{
				{
					if (Order == 1 && j == 1 && i > 0 && i < 7)
					{
						if (((Cromosom2[i][j - 1] > 0) || (Cromosom2[i + 1][j - 1] > 0 && Cromosom1[i + 1][j - 1] < 0) || (Cromosom2[i - 1][j - 1] > 0 && Cromosom1[i - 1][j - 1] < 0) && Cromosom1[i][j] == 1))
						{
							CromosomRowFirst = i;
							CromosomColumnFirst = j;
							if (Cromosom2[i][j - 1] > 0)
							{
								CromosomRow = i;
								CromosomColumn = j - 1;
							}
							else if (Cromosom2[i + 1][j - 1] > 0 && Cromosom1[i + 1][j - 1] < 0)
							{
								CromosomRow = i + 1;
								CromosomColumn = j - 1;
							}
							else if (Cromosom2[i - 1][j - 1] > 0 && Cromosom1[i - 1][j - 1] < 0)
							{
								CromosomRow = i - 1;
								CromosomColumn = j - 1;
							}
							FindNumber++;
							AllDraw::SodierConversionOcuured = true;

						}

					}
					else
					{
						if (Order == -1 && j == 6 && i > 0 && i < 7)
						{
							if (((Cromosom2[i][j + 1] < 0) || (Cromosom2[i + 1][j + 1] < 0 && Cromosom1[i + 1][j + 1] > 0) || (Cromosom2[i - 1][j + 1] < 0 && Cromosom1[i - 1][j + 1] < 0) && Cromosom1[i][j] == -1))
							{
								CromosomRowFirst = i;
								CromosomColumnFirst = j;
								if (Cromosom2[i][j + 1] > 0)
								{
									CromosomRow = i;
									CromosomColumn = j + 1;
								}
								else if (Cromosom2[i + 1][j + 1] > 0 && Cromosom1[i + 1][j + 1] < 0)
								{
									CromosomRow = i + 1;
									CromosomColumn = j + 1;
								}
								else if (Cromosom2[i - 1][j + 1] > 0 && Cromosom1[i - 1][j + 1] < 0)
								{
									CromosomRow = i - 1;
									CromosomColumn = j + 1;
								}
								Find = true;
								FindNumber++;
								AllDraw::SodierConversionOcuured = true;
							}
						}
					}


					//Castles King Validity Condition.
					if (Order == 1 && j == 7)
					{
						//Small Gray Castles King.
						if (i == 6 && Cromosom2[i][j] == 6 && Cromosom2[i - 1][j] == 4 && Cromosom1[i][j] != 6 && Cromosom1[i - 1][j] != 4)
						{
							CromosomRowFirst = i - 3;
							CromosomColumnFirst = j;
							CromosomRow = i;
							CromosomColumn = j;
							Find = true;
							FindNumber++;
							ChessRules::SmallKingCastleGray = true;
							CastlesKing = true;
						}
						else //Big Briges King Gray.
						{
							if (i == 2 && Cromosom2[i][j] == 6 && Cromosom2[i + 1][j] == 4 && Cromosom1[i][j] != 6 && Cromosom1[i + 1][j] != 4)
							{
								CromosomRowFirst = i + 3;
								CromosomColumnFirst = j;
								CromosomRow = i;
								CromosomColumn = j;
								Find = true;
								FindNumber++;
								ChessRules::BigKingCastleGray = true;
								CastlesKing = true;
							}
						}

					}
					else
						if (j == 0)
						{
							//Small Castles King Brown.
							if (i == 6 && Cromosom2[i][j] == -6 && Cromosom2[i - 1][j] == -4 && Cromosom1[i][j] != -6 && Cromosom1[i - 1][j] != -4)
							{
								CromosomRowFirst = i - 3;
								CromosomColumnFirst = j;
								CromosomRow = i;
								CromosomColumn = j;
								Find = true;
								FindNumber++;
								ChessRules::SmallKingCastleBrown = true;
								CastlesKing = true;
							}
							else //Big Castles King Brown.
							{
								if (i == 2 && Cromosom2[i][j] == -6 && Cromosom2[i + 1][j] == -4 && Cromosom1[i][j] != -6 && Cromosom1[i + 1][j] != -4)
								{
									CromosomRowFirst = i + 3;
									CromosomColumnFirst = j;
									CromosomRow = i;
									CromosomColumn = j;
									Find = true;
									FindNumber++;
									ChessRules::BigKingCastleBrown = true;
									CastlesKing = true;
								}
							}

						}

				}
			}

			//When To Same Location Tbles are Different in Gen.
			if (Cromosom1[i][j] != Cromosom2[i][j])
			{
				//When Cromosom 2 is Empty.
				if (Cromosom2[i][j] == 0)
				{
					//Initiate Location of Table.
					continue;
				}
				else
				{
					//Situation 1.0
					if (and)
					{
						//When Cromosom1 Current Location is Empty.
						if (Cromosom1[i][j] == 0)
						{
							//Initiate Location of Gen.
							CromosomRow = i;
							CromosomColumn = j;
							Find = true;
							FindNumber++;
							continue;
						}
					}
				}
				//Store Location of Gen and Calculate Gen Numbers.
				CromosomRow = i;
				CromosomColumn = j;
				Find = true;
				FindNumber++;
			}
		}
	}
	//If Gen Foundation is Valid. 
	if (((FindNumber == 1 || FindNumber == 2) && Find) || CastlesKing || AllDraw::SodierConversionOcuured)
	{
		return Find;
	}
	//Gen Not Found.
	return false;
}

std::vector<int*> AllDraw::WhereNumbers(std::wstring Tag)
{


	std::vector<int*> TagList = std::vector<int*>();
	for (int i = 0; i < Tag.size();i++)
	{
		if (i + 1 < Tag.size())
		{
			for (int j = i + 1; j < i + StringConverterHelper::toString<int>(AllDraw::MaxAStarGreedy).size() + 1; j++)
			{
				int A = StringConverterHelper::fromString<int>(Tag.substr(i, j - i));
				if (A >= 0 && A <= AllDraw::MaxAStarGreedy)
				{
					int *Loc = new int[2];
					Loc[0] = i;
					Loc[1] = j - i;
					TagList.push_back(Loc);
				}
			}
		}
	}
	return TagList;
}

std::wstring AllDraw::CreateHtmlTag(std::wstring Tag)
{

	if (Tag.find(L"Thinking"))
	{
		//C# TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to this .NET String method:
		Tag.replace(Tag.find(L"Thinking"), 8, std::wstring(L"<font int=\"Green\">") + std::wstring(L"Thinking") + std::wstring(L"</font>"));
	}
	if (Tag.find(L"Perception"))
	{
		//C# TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to this .NET String method:
		Tag.replace(Tag.find(L"Perception"), 10, std::wstring(L"<font int=\"Green\">") + std::wstring(L"Perception") + std::wstring(L"</font>"));
	}
	if (Tag.find(L"Bob"))
	{
		//C# TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to this .NET String method:
		Tag.replace(Tag.find(L"Bob"), 3, std::wstring(L"<font int=\"Gray\">") + std::wstring(L"Bob") + std::wstring(L"</font>"));
	}
	if (Tag.find(L"Alice"))
	{
		//C# TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to this .NET String method:
		Tag.replace(Tag.find(L"Alice"), 4, std::wstring(L"<font int=\"Brown\">") + std::wstring(L"Brown") + std::wstring(L"</font>"));
	}
	if (Tag.find(L"AstarGreedy "))
	{
		//C# TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to this .NET String method:
		Tag.replace(Tag.find(L"AstarGreedy "), 11, std::wstring(L"<font int=\"Yellow\">") + std::wstring(L"AstarGreedy ") + std::wstring(L"</font>"));
	}
	if (Tag.find(L"Level"))
	{
		//C# TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to this .NET String method:
		Tag.replace(Tag.find(L"Level"), 5, std::wstring(L"<font int=\"Blue\">") + std::wstring(L"Level") + std::wstring(L"</Font>"));
	}

	std::wstring R = std::wstring(L"<font int=\"Red\">") + Tag + std::wstring(L"</font>");

	return R;

}


void AllDraw::InitializeInstanceFields()
{
	SetDeptIgnore = false;
	//Now = DateTime::Now.Hour * (36000000 * 24) + DateTime::Now.Minute * 36000000 + DateTime::Now.Second * 600000 + DateTime::Now.Millisecond;
	//Later = DateTime::Now.Hour * (36000000 * 24) + DateTime::Now.Minute * 36000000 + DateTime::Now.Second * 600000 + DateTime::Now.Millisecond;
	//callStack = new StackFrame(1, true);
	OrderP = 0;
	PerceptionCount = 0;
	OutPutAction = L"";
	ValuableSelfSupported = std::vector<int>();
	CurrentAStarGredyMax = 0;
	SetRowColumnFinished = false;
	MaxHuristicxT = -DBL_MAX;
	MovementsAStarGreedyHuristicFoundT = false;
	IgnoreSelfObjectsT = false;
	UsePenaltyRegardMechnisamT = true;
	BestMovmentsT = false;
	PredictHuristicT = true;
	OnlySelfT = false;
	AStarGreedyHuristicT = false;
	int temp_Index[6] = { -1, -1, -1, -1, -1, -1 };
	for (int element = 0; element < sizeof(temp_Index) / sizeof(temp_Index); element++)
		Index[element] = temp_Index[element];
	int temp_jindex[6] = { -1, -1, -1, -1, -1, -1 };
	for (int element = 0; element < sizeof(temp_jindex) / sizeof(temp_jindex); element++)
		jindex[element] = temp_jindex[element];
	int temp_Kind[6] = { -1, -1, -1, -1, -1, -1 };
	for (int element = 0; element < sizeof(temp_Kind) / sizeof(temp_Kind); element++)
		Kind[element] = temp_Kind[element];
	ArrangmentsChanged = false;
	CastlesKing = false;
	MaxHuristicAStarGreedytBackWardTable = std::vector<int**>();
	SodierMidle = 0;
	SodierHigh = 0;
	ElefantMidle = 0;
	ElefantHigh = 0;
	HourseMidle = 0;
	HourseHight = 0;
	CastleMidle = 0;
	CastleHigh = 0;
	MinisterMidle = 0;
	MinisterHigh = 0;
	KingMidle = 0;
	KingHigh = 0;
	RW = 0;
	CL = 0;
	Ki = 0;
	RW1 = 0;
	CL1 = 0;
	Ki1 = 0;
	MaxLess1 = 0;
	RW2 = 0;
	CL2 = 0;
	Ki2 = 0;
	MaxLess2 = 0;
	RW3 = 0;
	CL3 = 0;
	Ki3 = 0;
	MaxLess3 = 0;
	RW4 = 0;
	CL4 = 0;
	Ki4 = 0;
	MaxLess4 = 0;
	RW5 = 0;
	CL5 = 0;
	Ki5 = 0;
	MaxLess5 = 0;
	RW6 = 0;
	CL6 = 0;
	Ki6 = 0;
	MaxLess6 = 0;
	Move = 0;
	TableList = std::vector<int**>();
	AStarGreedyInt = 0;
	MaxHuristicAStarGreedytBackWard = std::vector<double*>();
	AStarGreedyString = 0;

}
	}



	
