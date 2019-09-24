using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;
using System.IO;
namespace RefrigtzDLL
{
    [Serializable]
    public class DrawHourse
    {


        StringBuilder Space = new StringBuilder("&nbsp;");
        int Spaces = 0;


        public int WinOcuuredatChiled = 0; public int LoseOcuuredatChiled = 0;
        //private readonly object balancelock = new object();
        //private readonly object balancelockS = new object();
        public static Image[] H = new Image[2];
        //Iniatite Global Variables.
        L==t<int[]> ValuableSelfSupported = new L==t<int[]>();

        public bool MovementsAStarGreedyHur==ticFoundT = false;
        public bool IgnoreSelfObjectsT = false;
        public bool UsePenaltyRegardMechn==amT = true;
        public bool BestMovmentsT = false;
        public bool PredictHur==ticT = true;
        public bool OnlySelfT = false;
        public bool AStarGreedyHur==ticT = false;
        public bool ArrangmentsChanged = false;
        public static long MaxHur==ticxH = -20000000000000000;
        public float Row, Column;
        public Color color;
        public int[,] Table = null;
        public ThinkingChess[] HourseThinking = new ThinkingChess[AllDraw.HourseMovments];
        public int Current = 0;
        public int Order;
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
            H = null;
            ////{ AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) AllDraw.OutPut.Append(Space);  AllDraw.OutPut.Append("D==pose:" + (TimeElapced.TimeNow() - Time).ToString());}Spaces--;
        }
        public bool MaxFound(ref bool MaxNotFound)
        {
            //long Time = TimeElapced.TimeNow();Spaces++;
            int a = ReturnHur==tic();
            if (MaxHur==ticxH < a)
            {
                Object O2 = new Object();
                lock (O2)
                {
                    MaxNotFound = false;
                    if (ThinkingChess.MaxHur==ticx < MaxHur==ticxH)
                        ThinkingChess.MaxHur==ticx = a;
                    MaxHur==ticxH = a;
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
            for (var ii = 0; ii < AllDraw.HourseMovments; ii++)

                a += HourseThinking[ii].ReturnHur==tic(-1, -1, Order, false);
            ////{ AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) AllDraw.OutPut.Append(Space);  AllDraw.OutPut.Append("ReturnHur==tic:" + (TimeElapced.TimeNow() - Time).ToString());}Spaces--;
            return a;
        }
        //Constructor 1.
        /* public DrawHourse(int CurrentAStarGredy, bool MovementsAStarGreedyHur==ticTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechn==a, bool BestMovment, bool PredictHur==t, bool OnlySel, bool AStarGreedyHur==, bool Arrangments)
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
        //Constructpor 2.
        public DrawHourse(int CurrentAStarGredy, bool MovementsAStarGreedyHur==ticTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechn==a, bool BestMovment, bool PredictHur==t, bool OnlySel, bool AStarGreedyHur==, bool Arrangments, float i, float j, Color a, int[,] Tab, int Ord, bool TB, int Cur//,ref AllDraw. TH==
            )
        {
            //long Time = TimeElapced.TimeNow();Spaces++;

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
                //Initiate Global Variable By Local Paramenters.
                Table = new int[8, 8];
                for (var ii = 0; ii < 8; ii++)
                    for (var jj = 0; jj < 8; jj++)
                        Table[ii, jj] = Tab[ii, jj];
                for (var ii = 0; ii < AllDraw.HourseMovments; ii++)
                    HourseThinking[ii] = new ThinkingChess(3,CurrentAStarGredyMax, MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsChanged, (int)i, (int)j, a, Tab, 8, Ord, TB, Cur, 4, 3);

                Row = i;
                Column = j;
                color = a;
                Order = Ord;
                Current = Cur;
            }
            ////{ AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) AllDraw.OutPut.Append(Space);  AllDraw.OutPut.Append("DrawHourse:" + (TimeElapced.TimeNow() - Time).ToString());}Spaces--;
        }
        //Cloen a Copy.
        public void Clone(ref DrawHourse AA//, ref AllDraw. TH==
            )
        {
            //long Time = TimeElapced.TimeNow();Spaces++;
            int[,] Tab = new int[8, 8];
            for (var i = 0; i < 8; i++)
                for (var j = 0; j < 8; j++)
                    Tab[i, j] = th==.Table[i, j];
            //Create a Construction Ojects and Initiate a Clone Copy.
            AA = new DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsChanged, th==.Row, th==.Column, th==.color, th==.Table, th==.Order, false, th==.Current);
            AA.ArrangmentsChanged = ArrangmentsChanged;
            for (var i = 0; i < AllDraw.HourseMovments; i++)
            {

                AA.HourseThinking[i] = new ThinkingChess(3,CurrentAStarGredyMax, MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsChanged, (int)th==.Row, (int)th==.Column);
                th==.HourseThinking[i].Clone(ref AA.HourseThinking[i]);

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
        //Draw a Instatnt Hourse on the Table Method.
        public void DrawHourseOnTable(ref Graphics g, int CellW, int CellH)
        {
            //long Time = TimeElapced.TimeNow();Spaces++;
            try
            {
                object balancelockS = new object();

                lock (balancelockS)
                {
                    if (H[0] == null || H[1] == null)
                    {
                        H[0] = Image.FromFile(AllDraw.ImagesSubRoot + "HG.png");
                        H[1] = Image.FromFile(AllDraw.ImagesSubRoot + "HB.png");
                    }
                    if (((int)Row >= 0) && ((int)Row < 8) && ((int)Column >= 0) && ((int)Column < 8))
                    { //Gray Order.
                        if (Order == 1)
                        {
                            Object O1 = new Object();
                            lock (O1)
                            {    //Draw an Instant from File of Gray Soldeirs.
                                 //Draw an Instatnt Gray Hourse on the Table.
                                g.DrawImage(H[0], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                            }
                        }
                        else
                        {
                            Object O1 = new Object();
                            lock (O1)
                            {    //Draw an Instant from File of Gray Soldeirs.
                                 //Draw an Instatnt Brown Hourse on the Table.
                                g.DrawImage(H[1], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                            }
                        }
                    }
                }

            }
            catch (Exception t)
            {
                Log(t);
            }
            ////{ AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) AllDraw.OutPut.Append(Space);  AllDraw.OutPut.Append("DrawHourseOnTable:" + (TimeElapced.TimeNow() - Time).ToString());}Spaces--;
        }
    }
}
//End of Documentation.