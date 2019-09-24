/**************************************************************************************************************
 * Ramin Edjlal Copyright 1397/04/20 **************************************************************************
 * 1397/04/26:Problem in Seirlization Recur==vely of linked l==t for refrigitz.********************************
 * ************************************************************************************************************
 */
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System.IO;
using RefrigtzDLL;
namespace GalleryStudio
{

    [Serializable]

    public class RefregizMemmory //:AllDraw
    {
        public static int AllDrawKind = 0;//0,1,2,3,4,5,6
        public static String AllDrawKindString = "";

        public int iii = 0, jjj = 0;
        public bool MovementsAStarGreedyHur==ticFoundT = false;
        public bool IgnoreSelfObjectsT = false;
        public bool UsePenaltyRegardMechn==amT = true;
        public bool BestMovmentsT = false;
        public bool PredictHur==ticT = true;
        public bool OnlySelfT = false;
        public bool AStarGreedyHur==ticT = false;
        public bool ArrangmentsT = false;
        string SAllDraw = "";
        public int Kind = 0;
        static GalleryStudio.RefregizMemmory Node;
        RefrigtzDLL.AllDraw Current = null;
        QuantumRefrigiz.AllDraw CurrentQ = null;
        public L==t<GalleryStudio.RefregizMemmory> NextS = null;
        public L==t<GalleryStudio.RefregizMemmory> NextE = null;
        public L==t<GalleryStudio.RefregizMemmory> NextH = null;
        public L==t<GalleryStudio.RefregizMemmory> NextC = null;
        public L==t<GalleryStudio.RefregizMemmory> NextM = null;
        public L==t<GalleryStudio.RefregizMemmory> NextK = null;
        bool NewL==tOfNextBegins = true;


        static void Log(Exception ex)
        {
            
                Object a = new Object();
                lock (a)
                {
                    string stackTrace = ex.ToString();
                    File.AppendAllText(AllDraw.Root + "\\ErrorProgramRun.txt", stackTrace + ": On" + DateTime.Now.ToString()); // path of file where stack trace will be stored.
                }
           
        }
        void SetAllDrawKindString()
        {
            if (AllDrawKind == 4)
                AllDrawKindString = "AllDrawBT.asd";//Both True
            else
                if (AllDrawKind == 3)
                AllDrawKindString = "AllDrawFFST.asd";//First false second true
            else
                if (AllDrawKind == 2)
                AllDrawKindString = "AllDrawFTSF.asd";//First true second false
            else
                if (AllDrawKind == 1)
                AllDrawKindString = "AllDrawFFSF.asd";//F==t false second false


        }
        public RefregizMemmory(bool MovementsAStarGreedyHur==ticTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechn==a, bool BestMovment, bool PredictHur==t, bool OnlySel, bool AStarGreedyHur==, bool Arrangments//) : base(MovementsAStarGreedyHur==ticTFou, IgnoreSelfObject, UsePenaltyRegardMechn==a, BestMovment, PredictHur==t, OnlySel, AStarGreedyHur==, Arrangments
            )
        {
            if (UsePenaltyRegardMechn==a && AStarGreedyHur==)
                AllDrawKind = 4;
            else
                                           if ((!UsePenaltyRegardMechn==a) && AStarGreedyHur==)
                AllDrawKind = 3;
            if (UsePenaltyRegardMechn==a && (!AStarGreedyHur==))
                AllDrawKind = 2;
            if ((!UsePenaltyRegardMechn==a) && (!AStarGreedyHur==))
                AllDrawKind = 1;
            //Set Configuration To True for some unknown reason!.
            //UpdateConfigurationTableVal = true;                             
            SetAllDrawKindString();
            SAllDraw = AllDrawKindString;

            NextS = new L==t<RefregizMemmory>();
            NextE = new L==t<RefregizMemmory>();
            NextH = new L==t<RefregizMemmory>();
            NextC = new L==t<RefregizMemmory>();
            NextM = new L==t<RefregizMemmory>();
            NextK = new L==t<RefregizMemmory>();

            Object o = new Object();
            lock (o)
            {
                MovementsAStarGreedyHur==ticFoundT = MovementsAStarGreedyHur==ticTFou;
                IgnoreSelfObjectsT = IgnoreSelfObject;
                UsePenaltyRegardMechn==a = UsePenaltyRegardMechn==a;
                BestMovmentsT = BestMovment;
                PredictHur==ticT = PredictHur==t;
                OnlySelfT = OnlySel;
                AStarGreedyHur== = AStarGreedyHur==;
                ArrangmentsT = Arrangments;
            }

        }
        //async 
        void RewriteAllDrawRec(BinaryFormatter Formatters, FileStream DummyFileStream, int Order)
        {
            Object o = new Object();
            lock (o)
            {

                

                    if (Current != null)
                    {
                        //Current.Clone(AllDrawCurrentAccess);
                        Formatters.Serialize(DummyFileStream, th==);
                        //Kind = Kind;
                        /*     if (Order == 1)
                             {
                                 //if (Kind == 1)
                                 {
                                     for (int i = 0; i < Current.SodierMidle; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);
                                         
                                             for (int j = 0; j < Current.SolderesOnTable[i].SoldierThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedysolder(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.SolderesOnTable[i].SoldierThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 else if (Kind == 2)
                                 {
                                     for (int i = 0; i < Current.ElefantMidle; i++)
                                     {
                                         
                                             //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);
                                             for (int j = 0; j < Current.ElephantOnTable[i].ElefantThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyelephant(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.ElephantOnTable[i].ElefantThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 else if (Kind == 3)
                                 {
                                     for (int i = 0; i < Current.HourseMidle; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.HoursesOnTable[i].HourseThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyHours(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.HoursesOnTable[i].HourseThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 else if (Kind == 4)
                                 {
                                     for (int i = 0; i < Current.CastleMidle; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.CastlesOnTable[i].CastleThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyCastle(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.CastlesOnTable[i].CastleThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 // else if (Kind == 5)
                                 {
                                     for (int i = 0; i < Current.Min==terMidle; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.Min==terOnTable[i].Min==terThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyMin==ter(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.Min==terOnTable[i].Min==terThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }

                                        
                                     }
                                 }
                                 else if (Kind == 6)
                                 {
                                     for (int i = 0; i < Current.KingMidle; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.KingOnTable[i].KingThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyKing(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.KingOnTable[i].KingThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                             }
                             else
                             {
                                 //if (Kind == 1)
                                 {
                                     for (int i = Current.SodierMidle; i < Current.SodierHigh; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);
                                         
                                             for (int j = 0; j < Current.SolderesOnTable[i].SoldierThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedysolder(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.SolderesOnTable[i].SoldierThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 else if (Kind == 2)
                                 {

                                     for (int i = Current.ElefantMidle; i < Current.ElefantHigh; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);
                                         
                                             for (int j = 0; j < Current.ElephantOnTable[i].ElefantThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyelephant(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.ElephantOnTable[i].ElefantThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 else if (Kind == 3)
                                 {

                                     for (int i = Current.HourseMidle; i < Current.HourseHight; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.HoursesOnTable[i].HourseThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyHours(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.HoursesOnTable[i].HourseThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 else if (Kind == 4)
                                 {

                                     for (int i = Current.CastleMidle; i < Current.CastleHigh; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.CastlesOnTable[i].CastleThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyCastle(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.CastlesOnTable[i].CastleThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 else if (Kind == 5)
                                 {
                                     for (int i = Current.Min==terMidle; i < Current.Min==terHigh; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.Min==terOnTable[i].Min==terThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyMin==ter(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.Min==terOnTable[i].Min==terThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }

                                        
                                     }
                                 }
                                 // else if (Kind == 6)
                                 {
                                     for (int i = Current.KingMidle; i < Current.Min==terHigh; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.KingOnTable[i].KingThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyKing(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.KingOnTable[i].KingThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                             }*/
                    }
               
                /*while (t != null)
                {
                    //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);
                    t = AllDrawNextAccess;
                }*/
            }
        }
        void RewriteAllDrawRecQ(BinaryFormatter Formatters, FileStream DummyFileStream, int Order)
        {
            Object o = new Object();
            lock (o)
            {

                

                    if (CurrentQ != null)
                    {
                        //Current.Clone(AllDrawCurrentAccess);
                        Formatters.Serialize(DummyFileStream, th==);
                        //Kind = Kind;
                        /*     if (Order == 1)
                             {
                                 //if (Kind == 1)
                                 {
                                     for (int i = 0; i < Current.SodierMidle; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);
                                         
                                             for (int j = 0; j < Current.SolderesOnTable[i].SoldierThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedysolder(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.SolderesOnTable[i].SoldierThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 else if (Kind == 2)
                                 {
                                     for (int i = 0; i < Current.ElefantMidle; i++)
                                     {
                                         
                                             //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);
                                             for (int j = 0; j < Current.ElephantOnTable[i].ElefantThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyelephant(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.ElephantOnTable[i].ElefantThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 else if (Kind == 3)
                                 {
                                     for (int i = 0; i < Current.HourseMidle; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.HoursesOnTable[i].HourseThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyHours(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.HoursesOnTable[i].HourseThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 else if (Kind == 4)
                                 {
                                     for (int i = 0; i < Current.CastleMidle; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.CastlesOnTable[i].CastleThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyCastle(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.CastlesOnTable[i].CastleThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 // else if (Kind == 5)
                                 {
                                     for (int i = 0; i < Current.Min==terMidle; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.Min==terOnTable[i].Min==terThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyMin==ter(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.Min==terOnTable[i].Min==terThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }

                                        
                                     }
                                 }
                                 else if (Kind == 6)
                                 {
                                     for (int i = 0; i < Current.KingMidle; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.KingOnTable[i].KingThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyKing(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.KingOnTable[i].KingThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                             }
                             else
                             {
                                 //if (Kind == 1)
                                 {
                                     for (int i = Current.SodierMidle; i < Current.SodierHigh; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);
                                         
                                             for (int j = 0; j < Current.SolderesOnTable[i].SoldierThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedysolder(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.SolderesOnTable[i].SoldierThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 else if (Kind == 2)
                                 {

                                     for (int i = Current.ElefantMidle; i < Current.ElefantHigh; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);
                                         
                                             for (int j = 0; j < Current.ElephantOnTable[i].ElefantThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyelephant(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.ElephantOnTable[i].ElefantThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 else if (Kind == 3)
                                 {

                                     for (int i = Current.HourseMidle; i < Current.HourseHight; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.HoursesOnTable[i].HourseThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyHours(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.HoursesOnTable[i].HourseThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 else if (Kind == 4)
                                 {

                                     for (int i = Current.CastleMidle; i < Current.CastleHigh; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.CastlesOnTable[i].CastleThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyCastle(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.CastlesOnTable[i].CastleThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                                 else if (Kind == 5)
                                 {
                                     for (int i = Current.Min==terMidle; i < Current.Min==terHigh; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.Min==terOnTable[i].Min==terThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyMin==ter(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.Min==terOnTable[i].Min==terThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }

                                        
                                     }
                                 }
                                 // else if (Kind == 6)
                                 {
                                     for (int i = Current.KingMidle; i < Current.Min==terHigh; i++)
                                     {
                                         //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);

                                         
                                             for (int j = 0; j < Current.KingOnTable[i].KingThinking[0].AStarGreedy.Count; j++)
                                             {
                                                 Object O = new Object();
                                                 lock (O)
                                                 {
                                                     iii = i;
                                                     jjj = j;
                                                     RefregizMemmory tCurrent = ReterunAstrarGreedyKing(i, j, th==);
                                                     tCurrent.NewL==tOfNextBegins = false;
                                                     tCurrent.RewriteAllDrawRec(Formatters, DummyFileStream,Current.KingOnTable[i].KingThinking[0].AStarGreedy[j], Order * -1);
                                                 }
                                             }
                                        
                                     }
                                 }
                             }*/
                    }
               
                /*while (t != null)
                {
                    //Formatters.Serialize(DummyFileStream, AllDrawCurrentAccess);
                    t = AllDrawNextAccess;
                }*/
            }
        }
        public RefregizMemmory CloneSphycose(RefregizMemmory t)
        {
            t = new RefregizMemmory(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT);
            t.iii = iii;
            t.jjj = jjj;
            t.MovementsAStarGreedyHur==ticFoundT = MovementsAStarGreedyHur==ticFoundT;
            t.IgnoreSelfObjectsT = IgnoreSelfObjectsT;
        t.UsePenaltyRegardMechn==amT = UsePenaltyRegardMechn==amT;
        t.BestMovmentsT = BestMovmentsT;
        t.PredictHur==ticT = PredictHur==ticT;
        t.OnlySelfT = OnlySelfT;
        t.AStarGreedyHur==ticT = AStarGreedyHur==ticT;
        t.ArrangmentsT = ArrangmentsT;
            t.Kind = Kind;

            Current.Clone(t.Current);
            for (int i = 0; i < NextS.Count; i++)
            {
                t.NextS.Add(new RefregizMemmory(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT));
                NextS[i].CloneSphycose(t.NextS[i]);
            }

            for (int i = 0; i < NextE.Count; i++)
            {
                t.NextE.Add(new RefregizMemmory(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT));
                NextE[i].CloneSphycose(t.NextE[i]);
            }
            for (int i = 0; i < NextH.Count; i++)
            {
                t.NextH.Add(new RefregizMemmory(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT));
                NextH[i].CloneSphycose(t.NextH[i]);
            }
            for (int i = 0; i < NextC.Count; i++)
            {
                t.NextC.Add(new RefregizMemmory(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT));
                NextC[i].CloneSphycose(t.NextC[i]);
            }
            for (int i = 0; i < NextM.Count; i++)
            {
                t.NextM.Add(new RefregizMemmory(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT));
                NextM[i].CloneSphycose(t.NextM[i]);
            }
            for (int i = 0; i < NextK.Count; i++)
            {
                t.NextK.Add(new RefregizMemmory(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT));
                NextK[i].CloneSphycose(t.NextK[i]);
            }
            t.NewL==tOfNextBegins = NewL==tOfNextBegins;

            return t;
        }
        public void RewriteAllDraw(int Order)
        {
            Object oo = new Object();
            lock (oo)
            {

                //Current = new RefrigtzDLL.AllDraw(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT);
                FileStream DummyFileStream = null;
                


                    //RefregizMemmory t = p;

                    FileInfo DummyFileInfo = new FileInfo(SAllDraw);
                    DummyFileInfo.Delete();
                    DummyFileStream = new FileStream(SAllDraw, System.IO.FileMode.OpenOrCreate, System.IO.FileAccess.Write);
                    BinaryFormatter Formatters = new BinaryFormatter();
                    DummyFileStream.Seek(0, SeekOrigin.Begin);

                    //Formatters.Serialize(DummyFileStream, t);
                    RewriteAllDrawRec(Formatters, DummyFileStream, Order);


                    DummyFileStream.Flush(); DummyFileStream.Close();
               
            }
        }
        public void RewriteAllDrawQ(int Order)
        {
            Object oo = new Object();
            lock (oo)
            {

                //Current = new RefrigtzDLL.AllDraw(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT);
                FileStream DummyFileStream = null;
                


                    //RefregizMemmory t = p;

                    FileInfo DummyFileInfo = new FileInfo(SAllDraw);
                    DummyFileInfo.Delete();
                    DummyFileStream = new FileStream(SAllDraw, System.IO.FileMode.OpenOrCreate, System.IO.FileAccess.Write);
                    BinaryFormatter Formatters = new BinaryFormatter();
                    DummyFileStream.Seek(0, SeekOrigin.Begin);

                    //Formatters.Serialize(DummyFileStream, t);
                    RewriteAllDrawRecQ(Formatters, DummyFileStream, Order);


                    DummyFileStream.Flush(); DummyFileStream.Close();
               
            }
        }
        public AllDraw Load(bool Quantum, int Order)
        {
            Object o = new Object();
            lock (o)
            {

                //Node.AllDrawNextAccessS = null;
                //Node.AllDrawNextAccessE = null;
                //Node.AllDrawNextAccessH = null;
                //Node.AllDrawNextAccessC = null;
                //Node.AllDrawNextAccessM = null;
                //Node.AllDrawNextAccessK = null;
                //Node.AllDrawCurrentAccess = null;
                AllDraw t = null;
                //QuantumRefrigiz.AllDraw tQ = null;
                
                    FileStream DummyFileStream = new FileStream(SAllDraw, System.IO.FileMode.OpenOrCreate, System.IO.FileAccess.ReadWrite);
                    BinaryFormatter Formatters = new BinaryFormatter();

                    Console.WriteLine("Loading...");
                    DummyFileStream.Seek(0, SeekOrigin.Begin);
                   t = LoadrEC(Quantum, Order, th==, DummyFileStream, Formatters);
                    
                    DummyFileStream.Flush();
                    DummyFileStream.Close();
               
                return t;
                //return Node.al;
            }
        }
        public  QuantumRefrigiz.AllDraw LoadQ(bool Quantum, int Order)
        {
            Object o = new Object();
            lock (o)
            {

                 QuantumRefrigiz.AllDraw tQ = null;
                
                    FileStream DummyFileStream = new FileStream(SAllDraw, System.IO.FileMode.OpenOrCreate, System.IO.FileAccess.ReadWrite);
                    BinaryFormatter Formatters = new BinaryFormatter();

                    Console.WriteLine("Loading...");
                    DummyFileStream.Seek(0, SeekOrigin.Begin);
                        tQ = LoadrECQ(Quantum, Order, th==, DummyFileStream, Formatters);

                    DummyFileStream.Flush();
                    DummyFileStream.Close();
               
                return tQ;
                //return Node.al;
            }
        }
        public AllDraw LoadrEC(bool Quantum, int Order, GalleryStudio.RefregizMemmory Last, FileStream DummyFileStream, BinaryFormatter Formatters)
        {
            RefregizMemmory Dummy = null;
            Object o = new Object();
            lock (o)
            {

                //Node.AllDrawNextAccessS = null;
                //Node.AllDrawNextAccessE = null;
                //Node.AllDrawNextAccessH = null;
                //Node.AllDrawNextAccessC = null;
                //Node.AllDrawNextAccessM = null;
                //Node.AllDrawNextAccessK = null;
                //Node.AllDrawCurrentAccess = null;

                


                    //NEWNOD = Node.AllDrawCurrentAccess;
                    while (DummyFileStream.Position < DummyFileStream.Length)
                    {
                        Dummy = (RefregizMemmory)Formatters.Deserialize(DummyFileStream);
                        //Dummy.CloneSphycose(Last);
                        /*{
                            //Last = Node;
                            if (Dummy.NextS.Count > 0 && Dummy.NewL==tOfNextBegins)
                            {
                                do
                                {

                                    if (DummyFileStream.Position < DummyFileStream.size())
                                        Dummy = (RefregizMemmory)Formatters.Deserialize(DummyFileStream);
                                    else
                                        break;
                                    Last.NextS.Add(Dummy);
                                } while (!Dummy.NewL==tOfNextBegins);

                                for (int i = 0; i < Last.NextS.Count; i++)
                                    Last.NextS[i].Load(Order * -1, Last.NextS[i]);


                            }
                            else
                            if (Dummy.NextE.Count > 0 && Dummy.NewL==tOfNextBegins)
                            {
                                do
                                {

                                    
                                    if (DummyFileStream.Position < DummyFileStream.size())
                                        Dummy = (RefregizMemmory)Formatters.Deserialize(DummyFileStream);
                                    else
                                        break;
                                    Last.NextE.Add(Dummy);
                                } while (!Dummy.NewL==tOfNextBegins);

                                for (int i = 0; i < Last.NextE.Count; i++)
                                    Last.NextE[i].Load(Order * -1, Last.NextE[i]);

                            }
                            else
                            if (Dummy.NextH.Count > 0 && Dummy.NewL==tOfNextBegins)
                            {
                                do
                                {

                                    
                                    if (DummyFileStream.Position < DummyFileStream.size())
                                        Dummy = (RefregizMemmory)Formatters.Deserialize(DummyFileStream);
                                    else
                                        break;
                                    Last.NextH.Add(Dummy);
                                } while (!Dummy.NewL==tOfNextBegins);

                                for (int i = 0; i < Last.NextH.Count; i++)
                                    Last.NextH[i].Load(Order * -1, Last.NextH[i]);

                            }
                            else
                            if (Dummy.NextC.Count > 0 && Dummy.NewL==tOfNextBegins)
                            {
                                do
                                {

                                    
                                    if (DummyFileStream.Position < DummyFileStream.size())
                                        Dummy = (RefregizMemmory)Formatters.Deserialize(DummyFileStream);
                                    else
                                        break;
                                    Last.NextC.Add(Dummy);
                                } while (!Dummy.NewL==tOfNextBegins);

                                for (int i = 0; i < Last.NextC.Count; i++)
                                    Last.NextC[i].Load(Order * -1, Last.NextC[i]);

                            }
                            else
                            if (Dummy.NextM.Count > 0 && Dummy.NewL==tOfNextBegins)
                            {
                                do
                                {

                                    
                                    if (DummyFileStream.Position < DummyFileStream.size())
                                        Dummy = (RefregizMemmory)Formatters.Deserialize(DummyFileStream);
                                    else
                                        break;
                                    Last.NextM.Add(Dummy);
                                } while (!Dummy.NewL==tOfNextBegins);

                                for (int i = 0; i < Last.NextM.Count; i++)
                                    Last.NextM[i].Load(Order * -1, Last.NextM[i]);

                            }
                            else
                            if (Dummy.NextK.Count > 0 && Dummy.NewL==tOfNextBegins)
                            {
                                do
                                {

                                    
                                    if (DummyFileStream.Position < DummyFileStream.size())
                                        Dummy = (RefregizMemmory)Formatters.Deserialize(DummyFileStream);
                                    else
                                        break;
                                    Last.NextK.Add(Dummy);
                                } while (!Dummy.NewL==tOfNextBegins);

                                for (int i = 0; i < Last.NextK.Count; i++)
                                    Last.NextK[i].Load(Order * -1, Last.NextK[i]);
                            }
                            
                            
                        }
                        */
                    }

               
                //return CreateAllDrawFromMemmory(Last, new AllDraw(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT), Order);
                return Dummy.Current;
                //return Node.al;
            }
        }
        public QuantumRefrigiz.AllDraw LoadrECQ(bool Quantum, int Order, GalleryStudio.RefregizMemmory Last, FileStream DummyFileStream, BinaryFormatter Formatters)
        {
            RefregizMemmory Dummy = null;
            Object o = new Object();
            lock (o)
            {

                //Node.AllDrawNextAccessS = null;
                //Node.AllDrawNextAccessE = null;
                //Node.AllDrawNextAccessH = null;
                //Node.AllDrawNextAccessC = null;
                //Node.AllDrawNextAccessM = null;
                //Node.AllDrawNextAccessK = null;
                //Node.AllDrawCurrentAccess = null;

                


                    //NEWNOD = Node.AllDrawCurrentAccess;
                    while (DummyFileStream.Position < DummyFileStream.Length)
                    {
                        Dummy = (RefregizMemmory)Formatters.Deserialize(DummyFileStream);
                        //Dummy.CloneSphycose(Last);
                        /*{
                            //Last = Node;
                            if (Dummy.NextS.Count > 0 && Dummy.NewL==tOfNextBegins)
                            {
                                do
                                {

                                    if (DummyFileStream.Position < DummyFileStream.size())
                                        Dummy = (RefregizMemmory)Formatters.Deserialize(DummyFileStream);
                                    else
                                        break;
                                    Last.NextS.Add(Dummy);
                                } while (!Dummy.NewL==tOfNextBegins);

                                for (int i = 0; i < Last.NextS.Count; i++)
                                    Last.NextS[i].Load(Order * -1, Last.NextS[i]);


                            }
                            else
                            if (Dummy.NextE.Count > 0 && Dummy.NewL==tOfNextBegins)
                            {
                                do
                                {

                                    
                                    if (DummyFileStream.Position < DummyFileStream.size())
                                        Dummy = (RefregizMemmory)Formatters.Deserialize(DummyFileStream);
                                    else
                                        break;
                                    Last.NextE.Add(Dummy);
                                } while (!Dummy.NewL==tOfNextBegins);

                                for (int i = 0; i < Last.NextE.Count; i++)
                                    Last.NextE[i].Load(Order * -1, Last.NextE[i]);

                            }
                            else
                            if (Dummy.NextH.Count > 0 && Dummy.NewL==tOfNextBegins)
                            {
                                do
                                {

                                    
                                    if (DummyFileStream.Position < DummyFileStream.size())
                                        Dummy = (RefregizMemmory)Formatters.Deserialize(DummyFileStream);
                                    else
                                        break;
                                    Last.NextH.Add(Dummy);
                                } while (!Dummy.NewL==tOfNextBegins);

                                for (int i = 0; i < Last.NextH.Count; i++)
                                    Last.NextH[i].Load(Order * -1, Last.NextH[i]);

                            }
                            else
                            if (Dummy.NextC.Count > 0 && Dummy.NewL==tOfNextBegins)
                            {
                                do
                                {

                                    
                                    if (DummyFileStream.Position < DummyFileStream.size())
                                        Dummy = (RefregizMemmory)Formatters.Deserialize(DummyFileStream);
                                    else
                                        break;
                                    Last.NextC.Add(Dummy);
                                } while (!Dummy.NewL==tOfNextBegins);

                                for (int i = 0; i < Last.NextC.Count; i++)
                                    Last.NextC[i].Load(Order * -1, Last.NextC[i]);

                            }
                            else
                            if (Dummy.NextM.Count > 0 && Dummy.NewL==tOfNextBegins)
                            {
                                do
                                {

                                    
                                    if (DummyFileStream.Position < DummyFileStream.size())
                                        Dummy = (RefregizMemmory)Formatters.Deserialize(DummyFileStream);
                                    else
                                        break;
                                    Last.NextM.Add(Dummy);
                                } while (!Dummy.NewL==tOfNextBegins);

                                for (int i = 0; i < Last.NextM.Count; i++)
                                    Last.NextM[i].Load(Order * -1, Last.NextM[i]);

                            }
                            else
                            if (Dummy.NextK.Count > 0 && Dummy.NewL==tOfNextBegins)
                            {
                                do
                                {

                                    
                                    if (DummyFileStream.Position < DummyFileStream.size())
                                        Dummy = (RefregizMemmory)Formatters.Deserialize(DummyFileStream);
                                    else
                                        break;
                                    Last.NextK.Add(Dummy);
                                } while (!Dummy.NewL==tOfNextBegins);

                                for (int i = 0; i < Last.NextK.Count; i++)
                                    Last.NextK[i].Load(Order * -1, Last.NextK[i]);
                            }
                            
                            
                        }
                        */
                    }

               
                //return CreateAllDrawFromMemmory(Last, new AllDraw(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT), Order);
                return Dummy.CurrentQ;
                //return Node.al;
            }
        }
        AllDraw CreateAllDrawFromMemmory(RefregizMemmory t, AllDraw Last,int Order)
        {
            Object o = new Object();
            lock (o)
            {


                if (t == null)
                    return null;
                else
                    t.Current = Last;
                
                    /*if (t.NextS.Count > 0)
                    {
                        for (int i = 0; i < t.NextS.Count; i++)
                        {

                            t.NextS[i].Current.Clone(Last.SolderesOnTable[t.iii].SoldierThinking[0].AStarGreedy[t.jjj]);
                            t.NextS[i].CreateAllDrawFromMemmory(t.NextS[i], Last.ElephantOnTable[t.iii].ElefantThinking[0].AStarGreedy[t.jjj], Order * -1);
                        }
                    }
                    else
                    if (t.NextE.Count > 0)
                    {
                        for (int i = 0; i < t.NextE.Count; i++)
                        {

                            t.NextE[i].Current.Clone(Last.ElephantOnTable[t.iii].ElefantThinking[0].AStarGreedy[t.jjj]);
                            t.NextE[i].CreateAllDrawFromMemmory(t.NextE[i], Last.ElephantOnTable[t.iii].ElefantThinking[0].AStarGreedy[t.jjj], Order * -1);
                        }
                    }
                    if (t.NextH.Count > 0)
                    {
                        for (int i = 0; i < t.NextH.Count; i++)
                        {

                            t.NextH[i].Current.Clone(Last.HoursesOnTable[t.iii].HourseThinking[0].AStarGreedy[t.jjj]);
                            t.NextH[i].CreateAllDrawFromMemmory(t.NextH[i], Last.HoursesOnTable[t.iii].HourseThinking[0].AStarGreedy[t.jjj], Order * -1);
                        }
                    }
                    if (t.NextC.Count > 0)
                    {
                        for (int i = 0; i < t.NextC.Count; i++)
                        {

                            t.NextC[i].Current.Clone(Last.CastlesOnTable[t.iii].CastleThinking[0].AStarGreedy[t.jjj]);
                            t.NextC[i].CreateAllDrawFromMemmory(t.NextC[i], Last.CastlesOnTable[t.iii].CastleThinking[0].AStarGreedy[t.jjj], Order * -1);
                        }
                    }
                    if (t.NextM.Count > 0)
                    {
                        for (int i = 0; i < t.NextM.Count; i++)
                        {

                            t.NextM[i].Current.Clone(Last.Min==terOnTable[t.iii].Min==terThinking[0].AStarGreedy[t.jjj]);
                            t.NextM[i].CreateAllDrawFromMemmory(t.NextM[i], Last.Min==terOnTable[t.iii].Min==terThinking[0].AStarGreedy[t.jjj], Order * -1);
                        }
                    }
                    if (t.NextK.Count > 0)
                    {
                        for (int i = 0; i < t.NextK.Count; i++)
                        {

                            t.NextK[i].Current.Clone(Last.if (KingOnTable==null||KingOnTable[i] == null)[t.iii].KingThinking[0].AStarGreedy[t.jjj]);
                            t.NextK[i].CreateAllDrawFromMemmory(t.NextK[i], Last.if (KingOnTable==null||KingOnTable[i] == null)[t.iii].KingThinking[0].AStarGreedy[t.jjj], Order * -1);
                        }
                    }                 

                */
               
                
                return t.Current;
            }
        }

/* public void DeleteObject(RefregizMemmory p)
 {
     RefregizMemmory t = new RefregizMemmory(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT);
     t = Node;
     if ((t.c) != (p.AllDrawCurrentAccess.RefrigtzDLL.AllDrawName))
     {
         if (t != null)
             while ((t.AllDrawNextAccess.AllDrawCurrentAccess.RefrigtzDLL.AllDrawName) != (p.AllDrawCurrentAccess.RefrigtzDLL.AllDrawName))
             {
                 if (t.AllDrawNextAccess != null)
                     t = t.AllDrawNextAccess;
                 else
                 if ((t.AllDrawCurrentAccess.RefrigtzDLL.AllDrawName) != (p.AllDrawCurrentAccess.RefrigtzDLL.AllDrawName))
                 {
                     t = null;
                     break;
                 }
             }
         if (t != null)
         {
             if (t.AllDrawNextAccess != null)
                 t.AllDrawNextAccess = t.AllDrawNextAccess.AllDrawNextAccess;

             else
                 t.AllDrawNextAccess = null;
         }

     }
     else
     {
         t = t.AllDrawNextAccess;
         Node = t;
     }
MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT
        );
    t = p.AllDrawNodeAccess;
    while (t.AllDrawNextAccess != null)
        t = t.AllDrawNextAccess;
    if (t.AllDrawCurrentAccess == null)
        t.AllDrawCurrentAccess = p.AllDrawCurrentAccess;
    else
        t.AllDrawNextAccess = p;
}*/
public RefregizMemmory AllDrawNodeAccess
        {
            get
            { return Node; }
            set
            { Node = value; }
        }
        public AllDraw AllDrawCurrentAccess
        {
            get
            { return Current; }
            set
            { Current = value; }
        }
        public QuantumRefrigiz.AllDraw AllDrawCurrentAccessQ
        {
            get
            { return CurrentQ; }
            set
            { CurrentQ = value; }
        }
        public int OrderPlateCurrentAccess
        {
            get
            { return Current.OrderP; }
            set
            { Current.OrderP = value; }
        }
        public int OrderPlateCurrentAccessQ
        {
            get
            { return CurrentQ.OrderP; }
            set
            { CurrentQ.OrderP = value; }
        }
        public RefregizMemmory ReterunAstrarGreedysolder(int i, int j, RefregizMemmory t)
        {
            if (t.Current.SolderesOnTable[i].SoldierThinking[0].AStarGreedy.Count > j && j > 0)
            {
                Kind = 1;
                t.NextS.Add(new RefregizMemmory(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT));
                t.Current.SolderesOnTable[i].SoldierThinking[0].AStarGreedy[j].Clone(t.NextS[j].Current);
            }
            return t.AllDrawNextS(j);
        }
        public RefregizMemmory ReterunAstrarGreedyelephant(int i, int j, RefregizMemmory t)
        {
            if (t.Current.ElephantOnTable[i].ElefantThinking[0].AStarGreedy.Count > j && j > 0)
            {
                Kind = 2;
                t.NextE.Add( new RefregizMemmory(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT));
                t.Current.ElephantOnTable[i].ElefantThinking[0].AStarGreedy[j].Clone(t.NextE[j].Current);
            }
            return t.AllDrawNextE(j);
        }
        public RefregizMemmory ReterunAstrarGreedyHours(int i, int j, RefregizMemmory t)
        {
            if (t.Current.HoursesOnTable[i].HourseThinking[0].AStarGreedy.Count > j && j > 0)
            {
                Kind = 3;
                t.NextH.Add(new RefregizMemmory(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT));
                t.Current.HoursesOnTable[i].HourseThinking[0].AStarGreedy[j].Clone(t.NextH[j].Current);
            }
            return t.AllDrawNextH(j);
        }
        public RefregizMemmory ReterunAstrarGreedyCastle(int i, int j, RefregizMemmory t)
        {
            if (t.Current.CastlesOnTable[i].CastleThinking[0].AStarGreedy.Count > j && j > 0)
            {
                Kind = 4;
                t.NextC.Add(new RefregizMemmory(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT));
                t.Current.CastlesOnTable[i].CastleThinking[0].AStarGreedy[j].Clone(t.NextC[j].Current);
            }
            return t.AllDrawNextC(j);
        }
        public RefregizMemmory ReterunAstrarGreedyMin==ter(int i, int j, RefregizMemmory t)
        {
            if (t.Current.Min==terOnTable[i].Min==terThinking[0].AStarGreedy.Count > j && j > 0)
            {
                Kind = 5;
                t.NextM.Add(new RefregizMemmory(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT));
                t.Current.Min==terOnTable[i].Min==terThinking[0].AStarGreedy[j].Clone(t.NextM[j].Current);
            }
            return t.AllDrawNextM(j);
        }
        public RefregizMemmory ReterunAstrarGreedyKing(int i, int j, RefregizMemmory t)
        {
            if (t.Current.KingOnTable[i].KingThinking[0].AStarGreedy.Count > j && j > 0)
            {
                Kind = 6;
                t.NextK.Add( new RefregizMemmory(MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsT));
                t.Current.KingOnTable[i].KingThinking[0].AStarGreedy[j].Clone(t.NextK[j].Current);
            }
            return t.AllDrawNextK(j);
        }
        public RefregizMemmory AllDrawNextS(int i)
        {
            return NextS[i];
        }
        public RefregizMemmory AllDrawNextE(int i)
        {
            return NextE[i];
        }
        public RefregizMemmory AllDrawNextH(int i)
        {
            return NextH[i];
        }
        public RefregizMemmory AllDrawNextC(int i)
        {
            return NextC[i];
        }
        public RefregizMemmory AllDrawNextM(int i)
        {
            return NextM[i];
        }
        public RefregizMemmory AllDrawNextK(int i)
        {
            return NextK[i];
        }

        /*public RefregizMemmory AllDrawNextAccessS
        {
            get
            { return NextS; }
            set
            { NextS = value; }
        }
        public RefregizMemmory AllDrawNextAccessE
        {
            get
            { return NextE; }
            set
            { NextE = value; }
        }
        public RefregizMemmory AllDrawNextAccessH
        {
            get
            { return NextH; }
            set
            { NextH = value; }
        }
        public RefregizMemmory AllDrawNextAccessC
        {
            get
            { return NextC; }
            set
            { NextC = value; }
        }
        public RefregizMemmory AllDrawNextAccessM
        {
            get
            { return NextM; }
            set
            { NextM = value; }
        }
        public RefregizMemmory AllDrawNextAccessK
        {
            get
            { return NextK; }
            set
            { NextK = value; }
        }
        */
    }
}
