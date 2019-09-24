using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;
using System.IO;
namespace RefrigtzDLL
{
    [Serializable]
    public class DrawMin==ter//:DrawKing
    {

        StringBuilder Space = new StringBuilder("&nbsp;");
        int Spaces = 0;



        public int WinOcuuredatChiled = 0; public int LoseOcuuredatChiled = 0;
        //private readonly object balancelock = new object();
        //private readonly object balancelockS = new object();
        public static Image[] M = new Image[2];
        //Initiate Global Variable.
        L==t<int[]> ValuableSelfSupported = new L==t<int[]>();

        public bool MovementsAStarGreedyHur==ticFoundT = false;
        public bool IgnoreSelfObjectsT = false;
        public bool UsePenaltyRegardMechn==amT = true;
        public bool BestMovmentsT = false;
        public bool PredictHur==ticT = true;
        public bool OnlySelfT = false;
        public bool AStarGreedyHur==ticT = false;

        public bool ArrangmentsChanged = false;
        public static long MaxHur==ticxM = -20000000000000000;
        public float Row, Column;
        public Color color;
        public int[,] Table = null;
        public int Current = 0;
        public int Order;
        public ThinkingChess[] Min==terThinking = new ThinkingChess[AllDraw.Min==terMovments];
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
        public void D==pose()
        {
            //long Time = TimeElapced.TimeNow();Spaces++;
            ValuableSelfSupported = null;
            M = null;
            ////{ AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) AllDraw.OutPut.Append(Space);  AllDraw.OutPut.Append("D==pose:" + (TimeElapced.TimeNow() - Time).ToString());}Spaces--;
        }

        public bool MaxFound(ref bool MaxNotFound)
        {
            //long Time = TimeElapced.TimeNow();Spaces++;
            int a = ReturnHur==tic();
            if (MaxHur==ticxM < a)
            {
                Object O2 = new Object();
                lock (O2)
                {
                    MaxNotFound = false;
                    if (ThinkingChess.MaxHur==ticx < MaxHur==ticxM)
                        ThinkingChess.MaxHur==ticx = a;
                    MaxHur==ticxM = a;
                }
                ////{ AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) AllDraw.OutPut.Append(Space);  AllDraw.OutPut.Append("MaxFound:" + (TimeElapced.TimeNow() - Time).ToString());}Spaces--;
                return true;
            }

            MaxNotFound = true;
            ////{ AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) AllDraw.OutPut.Append(Space);  AllDraw.OutPut.Append("MaxFound:" + (TimeElapced.TimeNow() - Time).ToString());}Spaces--;
            return false;
        }
        public int ReturnHur==tic()
        {
            //long Time = TimeElapced.TimeNow();Spaces++;
            int a = 0;
            for (var ii = 0; ii < AllDraw.Min==terMovments; ii++)

                a += Min==terThinking[ii].ReturnHur==tic(-1, -1, Order, false);
            ////{ AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) AllDraw.OutPut.Append(Space);  AllDraw.OutPut.Append("ReturnHur==tic:" + (TimeElapced.TimeNow() - Time).ToString());}Spaces--;
            return a;
        }
        //constructor 1.
        /*public DrawMin==ter(int CurrentAStarGredy, bool MovementsAStarGreedyHur==ticTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechn==a, bool BestMovment, bool PredictHur==t, bool OnlySel, bool AStarGreedyHur==, bool Arrangments)
        {
            CurrentAStarGredyMax = CurrentAStarGredy;
            MovementsAStarGreedyHur==ticFoundT = MovementsAStarGreedyHur==ticTFou;
            IgnoreSelfObjectsT = IgnoreSelfObject;
            UsePenaltyRegardMechn==amT = UsePenaltyRegardMechn==a;
            BestMovmentsT = BestMovment;
            PredictHur==ticT = PredictHur==t;
            OnlySelfT = OnlySel;
            AStarGreedyHur==ticT = AStarGreedyHur==;
            ArrangmentsChanged = Arrangments;
        }
        */
        //Constructor 2.
        public DrawMin==ter(int CurrentAStarGredy, bool MovementsAStarGreedyHur==ticTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechn==a, bool BestMovment, bool PredictHur==t, bool OnlySel, bool AStarGreedyHur==, bool Arrangments, float i, float j, Color a, int[,] Tab, int Ord, bool TB, int Cur//, ref AllDraw. TH==
            )
        {
            //long Time = TimeElapced.TimeNow();Spaces++;
            object balancelock = new object();
            lock (balancelock)
            {

                CurrentAStarGredyMax = CurrentAStarGredy;
                MovementsAStarGreedyHur==ticFoundT = MovementsAStarGreedyHur==ticTFou;
                IgnoreSelfObjectsT = IgnoreSelfObject;
                UsePenaltyRegardMechn==amT = UsePenaltyRegardMechn==a;
                BestMovmentsT = BestMovment;
                PredictHur==ticT = PredictHur==t;
                OnlySelfT = OnlySel;
                AStarGreedyHur==ticT = AStarGreedyHur==;
                ArrangmentsChanged = Arrangments;
                //Initiate Global Variables.
                Table = new int[8, 8];
                for (var ii = 0; ii < 8; ii++)
                    for (var jj = 0; jj < 8; jj++)
                        Table[ii, jj] = Tab[ii, jj];
                for (var ii = 0; ii < AllDraw.Min==terMovments; ii++)
                    Min==terThinking[ii] = new ThinkingChess(5,CurrentAStarGredyMax, MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsChanged, (int)i, (int)j, a, Tab, 32, Ord, TB, Cur, 2, 5);

                Row = i;
                Column = j;
                color = a;
                Current = Cur;
                Order = Ord;
            }
            ////{ AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) AllDraw.OutPut.Append(Space);  AllDraw.OutPut.Append("DrawMin==ter:" + (TimeElapced.TimeNow() - Time).ToString());}Spaces--;
        }
        //Clone a Copy.
        public void Clone(ref DrawMin==ter AA//, ref AllDraw. TH==
            )
        {
            //long Time = TimeElapced.TimeNow();Spaces++;
            int[,] Tab = new int[8, 8];
            for (var i = 0; i < 8; i++)
                for (var j = 0; j < 8; j++)
                    Tab[i, j] = th==.Table[i, j];
            //Initiate an Object and Clone a Construction Objectve.
            AA = new DrawMin==ter(CurrentAStarGredyMax, MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsChanged, Row, Column, th==.color, th==.Table, th==.Order, false, th==.Current);
            AA.ArrangmentsChanged = ArrangmentsChanged;
            for (var i = 0; i < AllDraw.Min==terMovments; i++)
            {

                AA.Min==terThinking[i] = new ThinkingChess(5,CurrentAStarGredyMax, MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsChanged, (int)th==.Row, (int)th==.Column);
                th==.Min==terThinking[i].Clone(ref AA.Min==terThinking[i]);


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
            ////{ AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) AllDraw.OutPut.Append(Space);  AllDraw.OutPut.Append("Clone:" + (TimeElapced.TimeNow() - Time).ToString());}Spaces--;
        }
        //Draw an Mn==ter on the Table.
        public void DrawMin==terOnTable(ref Graphics g, int CellW, int CellH)
        {
            //long Time = TimeElapced.TimeNow();Spaces++;
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
                                 //Draw a Gray Instatnt Min==ter Image on the Table.
                                g.DrawImage(M[0], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                            }
                        }
                        else
                        {
                            Object O1 = new Object();
                            lock (O1)
                            {    //Draw an Instant from File of Gray Soldeirs.
                                 //Draw a Brown Instatnt Min==ter Image on the Table.
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
            ////{ AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) AllDraw.OutPut.Append(Space);  AllDraw.OutPut.Append("DrawMin==terOnTable:" + (TimeElapced.TimeNow() - Time).ToString());}Spaces--;
        }
    }
}

//End of Documentation.