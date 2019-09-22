using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;
using System.IO;
namespace RefrigtzDLL
{
    [Serializable]
    public class DrawMinister//:DrawKing
    {




        public int WinOcuuredatChiled = 0; public int LoseOcuuredatChiled = 0;
        //private readonly object balancelock = new object();
        //private readonly object balancelockS = new object();
        public static Image[] M = new Image[2];
        //Initiate Global Variable.
        List<int[]> ValuableSelfSupported = new List<int[]>();

        public bool MovementsAStarGreedyHuristicFoundT = false;
        public bool IgnoreSelfObjectsT = false;
        public bool UsePenaltyRegardMechnisamT = true;
        public bool BestMovmentsT = false;
        public bool PredictHuristicT = true;
        public bool OnlySelfT = false;
        public bool AStarGreedyHuristicT = false;

        public bool ArrangmentsChanged = false;
        public static long MaxHuristicxM = -20000000000000000;
        public float Row, Column;
        public Color color;
        public int[,] Table = null;
        public int Current = 0;
        public int Order;
        public ThinkingChess[] MinisterThinking = new ThinkingChess[AllDraw.MinisterMovments];
        int CurrentAStarGredyMax = -1;
        static void Log(Exception ex)
        {

            Object a = new Object();
            lock (a)
            {
                string stackTrace = ex.ToString();
                File.AppendAllText(AllDraw.Root + "\\ErrorProgramRun.txt", stackTrace + ": On" + DateTime.Now.ToString()); // path of file where stack trace will be stored.
            }

        }
        public void Dispose()
        {
            long Time = TimeElapced.TimeNow();
            ValuableSelfSupported = null;
            M = null;
            AllDraw.OutPut.Append("\r\nDispose:" + (TimeElapced.TimeNow() - Time).ToString());
        }

        public bool MaxFound(ref bool MaxNotFound)
        {
            long Time = TimeElapced.TimeNow();
            int a = ReturnHuristic();
            if (MaxHuristicxM < a)
            {
                Object O2 = new Object();
                lock (O2)
                {
                    MaxNotFound = false;
                    if (ThinkingChess.MaxHuristicx < MaxHuristicxM)
                        ThinkingChess.MaxHuristicx = a;
                    MaxHuristicxM = a;
                }
                AllDraw.OutPut.Append("\r\nMaxFound:" + (TimeElapced.TimeNow() - Time).ToString());
                return true;
            }

            MaxNotFound = true;
            AllDraw.OutPut.Append("\r\nMaxFound:" + (TimeElapced.TimeNow() - Time).ToString());
            return false;
        }
        public int ReturnHuristic()
        {
            long Time = TimeElapced.TimeNow();
            int a = 0;
            for (var ii = 0; ii < AllDraw.MinisterMovments; ii++)

                a += MinisterThinking[ii].ReturnHuristic(-1, -1, Order, false);
            AllDraw.OutPut.Append("\r\nReturnHuristic:" + (TimeElapced.TimeNow() - Time).ToString());
            return a;
        }
        //constructor 1.
        /*public DrawMinister(int CurrentAStarGredy, bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments)
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
        public DrawMinister(int CurrentAStarGredy, bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, float i, float j, Color a, int[,] Tab, int Ord, bool TB, int Cur//, ref AllDraw. THIS
            )
        {
            long Time = TimeElapced.TimeNow();
            object balancelock = new object();
            lock (balancelock)
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
                Table = new int[8, 8];
                for (var ii = 0; ii < 8; ii++)
                    for (var jj = 0; jj < 8; jj++)
                        Table[ii, jj] = Tab[ii, jj];
                for (var ii = 0; ii < AllDraw.MinisterMovments; ii++)
                    MinisterThinking[ii] = new ThinkingChess(5,CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, (int)i, (int)j, a, Tab, 32, Ord, TB, Cur, 2, 5);

                Row = i;
                Column = j;
                color = a;
                Current = Cur;
                Order = Ord;
            }
            AllDraw.OutPut.Append("\r\nDrawMinister:" + (TimeElapced.TimeNow() - Time).ToString());
        }
        //Clone a Copy.
        public void Clone(ref DrawMinister AA//, ref AllDraw. THIS
            )
        {
            long Time = TimeElapced.TimeNow();
            int[,] Tab = new int[8, 8];
            for (var i = 0; i < 8; i++)
                for (var j = 0; j < 8; j++)
                    Tab[i, j] = this.Table[i, j];
            //Initiate an Object and Clone a Construction Objectve.
            AA = new DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, this.color, this.Table, this.Order, false, this.Current);
            AA.ArrangmentsChanged = ArrangmentsChanged;
            for (var i = 0; i < AllDraw.MinisterMovments; i++)
            {

                AA.MinisterThinking[i] = new ThinkingChess(5,CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, (int)this.Row, (int)this.Column);
                this.MinisterThinking[i].Clone(ref AA.MinisterThinking[i]);


            }
            AA.Table = new int[8, 8];
            for (var ii = 0; ii < 8; ii++)
                for (var jj = 0; jj < 8; jj++)
                    AA.Table[ii, jj] = Tab[ii, jj];
            AA.Row = Row;
            AA.Column = Column;
            AA.Order = Order;
            AA.Current = Current;
            AA.color = color;
            AllDraw.OutPut.Append("\r\nClone:" + (TimeElapced.TimeNow() - Time).ToString());
        }
        //Draw an Mnister on the Table.
        public void DrawMinisterOnTable(ref Graphics g, int CellW, int CellH)
        {
            long Time = TimeElapced.TimeNow();
            try
            {
                object balancelockS = new object();

                lock (balancelockS)
                {
                    if (M[0] == null || M[1] == null)
                    {
                        M[0] = Image.FromFile(AllDraw.ImagesSubRoot + "MG.png");
                        M[1] = Image.FromFile(AllDraw.ImagesSubRoot + "MB.png");
                    }     //Gray Color.
                    if (((int)Row >= 0) && ((int)Row < 8) && ((int)Column >= 0) && ((int)Column < 8))
                    {
                        //Gray Order.
                        if (Order == 1)
                        {
                            Object O1 = new Object();
                            lock (O1)
                            {    //Draw an Instant from File of Gray Soldeirs.
                                 //Draw a Gray Instatnt Minister Image on the Table.
                                g.DrawImage(M[0], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                            }
                        }
                        else
                        {
                            Object O1 = new Object();
                            lock (O1)
                            {    //Draw an Instant from File of Gray Soldeirs.
                                 //Draw a Brown Instatnt Minister Image on the Table.
                                g.DrawImage(M[1], new Rectangle((int)(Row * CellW), (int)(Column * (float)CellH), CellW, CellH));
                            }
                        }
                    }
                }
            }
            catch (Exception t)
            {
                Log(t);
            }
            AllDraw.OutPut.Append("\r\nDrawMinisterOnTable:" + (TimeElapced.TimeNow() - Time).ToString());
        }
    }
}

//End of Documentation.