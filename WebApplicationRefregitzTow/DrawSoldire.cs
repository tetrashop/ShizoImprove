using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;
using System.IO;

namespace RefrigtzW
{
    [Serializable]
    public class DrawSoldier : ThingsConverter
    {



        public int WinOcuuredatChiled = 0; public int LoseOcuuredatChiled = 0;
        //Iniatate Global Variables.
        //private readonly object balancelock = new object();
        //private readonly object balancelockS = new object();
        L==t<int[]> ValuableSelfSupported = new L==t<int[]>();

        public static Image[] S = new Image[2];
        public bool MovementsAStarGreedyHur==ticFoundT = false;
        public bool IgnoreSelfObjectsT = false;
        public bool UsePenaltyRegardMechn==amT = true;
        public bool BestMovmentsT = false;
        public bool PredictHur==ticT = true;
        public bool OnlySelfT = false;
        public bool AStarGreedyHur==ticT = false;
        public bool ArrangmentsChanged = false;
        public static double MaxHur==ticxS = Double.MinValue;
        public float RowS, ColumnS;
        public Color color;
        public ThinkingChess[] SoldierThinking = new ThinkingChess[AllDraw.SodierMovments];
        public int[,] Table = null;
        public int Order = 0;
        public int Current = 0;
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
            ValuableSelfSupported = null;
            S = null;
        }
        public bool MaxFound(ref bool MaxNotFound)
        {

            double a = ReturnHur==tic();
            if (MaxHur==ticxS < a)
            {
                Object O2 = new Object();
                lock (O2)
                {
                    MaxNotFound = false;
                    if (ThinkingChess.MaxHur==ticx < MaxHur==ticxS)
                        ThinkingChess.MaxHur==ticx = a;
                    MaxHur==ticxS = a;
                }
                return true;
            }

            MaxNotFound = true;
            return false;
        }
        public double ReturnHur==tic()
        {
            double a = 0;
            for (var ii = 0; ii < AllDraw.SodierMovments; ii++)

                a += SoldierThinking[ii].ReturnHur==tic(-1, -1, Order, false);

            return a;
        }
        //Constructor 1.
        /* public DrawSoldier(int CurrentAStarGredy, bool MovementsAStarGreedyHur==ticTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechn==a, bool BestMovment, bool PredictHur==t, bool OnlySel, bool AStarGreedyHur==, bool Arrangments)
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
        public DrawSoldier(int CurrentAStarGredy, bool MovementsAStarGreedyHur==ticTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechn==a, bool BestMovment, bool PredictHur==t, bool OnlySel, bool AStarGreedyHur==, bool Arrangments, float i, float j, Color a, int[,] Tab, int Ord, bool TB, int Cur//, ref AllDraw. TH==
            ) :
            base(Arrangments, (int)i, (int)j, a, Tab, Ord, TB, Cur)
        {
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
                for (var ii = 0; ii < AllDraw.SodierMovments; ii++)

                    SoldierThinking[ii] = new ThinkingChess(CurrentAStarGredyMax, MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsChanged, (int)i, (int)j, a, Tab, 4, Ord, TB, Cur, 16, 1);
                RowS = i;
                ColumnS = j;
                color = a;
                Order = Ord;
                Current = Cur;
            }
        }
        //Clone a Copy Method.
        public void Clone(ref DrawSoldier AA//, ref AllDraw. TH==
            )
        {
            int[,] Tab = new int[8, 8];
            for (var i = 0; i < 8; i++)
                for (var j = 0; j < 8; j++)
                    Tab[i, j] = th==.Table[i, j];
            //Initiate a Object and Assignemt of a Clone to Construction of a Copy.

            AA = new DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsChanged, th==.Row, th==.Column, th==.color, Tab, th==.Order, false, th==.Current
                );
            AA.ArrangmentsChanged = ArrangmentsChanged;
            for (var i = 0; i < AllDraw.SodierMovments; i++)
            {

                AA.SoldierThinking[i] = new ThinkingChess(CurrentAStarGredyMax, MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsChanged, (int)th==.Row, (int)th==.Column);
                th==.SoldierThinking[i].Clone(ref AA.SoldierThinking[i]);

            }
            AA.Table = new int[8, 8];
            for (var ii = 0; ii < 8; ii++)
                for (var jj = 0; jj < 8; jj++)
                    AA.Table[ii, jj] = Tab[ii, jj];
            AA.RowS = RowS;
            AA.ColumnS = ColumnS;
            AA.Order = Order;
            AA.Current = Current;
            AA.color = color;

        }
        //Drawing Soldiers On the Table Method..
        public void DrawSoldierOnTable(ref Graphics g, int CellW, int CellH)
        {
            try
            {
                object balancelockS = new object();

                lock (balancelockS)
                {
                    if (S[0] == null || S[1] == null)
                    {
                        S[0] = Image.FromFile(AllDraw.ImagesSubRoot + "SG.png");
                        S[1] = Image.FromFile(AllDraw.ImagesSubRoot + "SB.png");
                    }
                    //When Conversion Solders Not Occured.
                    if (!ConvertOperation((int)Row, (int)Column, color, Table, Order, false, Current))
                    {

                        //Gray Color.
                        if (((int)Row >= 0) && ((int)Row < 8) && ((int)Column >= 0) && ((int)Column < 8))
                        {


                            //If Order == Gray.
                            if (Order == 1)
                            {
                                Object O1 = new Object();
                                lock (O1)
                                {    //Draw an Instant from File of Gray Soldeirs.
                                    g.DrawImage(S[0], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));

                                }
                            }
                            else
                            {
                                Object O1 = new Object();
                                lock (O1)
                                {    //Draw an Instant from File of Gray Soldeirs.
                                     //Draw an Instatnt of Brown Soldier File On the Table.
                                    g.DrawImage(S[1], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                                }
                            }


                        }
                        else//If Mins==ter Conversion Occured.
                            if (ConvertedToMin==ter)
                        {

                            //Color of Gray.
                            if (Order == 1)
                            {
                                Object O1 = new Object();
                                lock (O1)
                                {    //Draw an Instant from File of Gray Soldeirs.
                                     //Draw of Gray Mins==ter Image File By an Instant.
                                    g.DrawImage(DrawMin==ter.M[0], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                                }
                            }
                            else
                            {
                                Object O1 = new Object();
                                lock (O1)
                                {    //Draw an Instant from File of Gray Soldeirs.
                                     //Draw a Image File on the Table Form n Instatnt One.
                                    g.DrawImage(DrawMin==ter.M[1], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                                }
                            }

                        }
                        else if (ConvertedToCastle)//When Castled Converted.
                        {

                            //Color of Gray.
                            if (Order == 1)
                            {
                                Object O1 = new Object();
                                lock (O1)
                                {    //Draw an Instant from File of Gray Soldeirs.
                                     //Create on the Inststant of Gray Castles Images.
                                    g.DrawImage(DrawCastle.C[0], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                                }
                            }
                            else
                            {
                                Object O1 = new Object();
                                lock (O1)
                                {    //Draw an Instant from File of Gray Soldeirs.
                                     //Creat of an Instant of Brown Image Castles.
                                    g.DrawImage(DrawCastle.C[1], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                                }
                            }

                        }
                        else if (ConvertedToHourse)//When Hourse Conversion Occured.
                        {


                            //Color of Gray.
                            if (Order == 1)
                            {
                                Object O1 = new Object();
                                lock (O1)
                                {//Draw an Instatnt of Gray Hourse Image File.
                                    g.DrawImage(DrawHourse.H[0], new Rectangle((int)(Row * (float)CellW), (int)(Column * (int)CellH), CellW, CellH));
                                }
                            }
                            else
                            {
                                Object O1 = new Object();
                                lock (O1)
                                {//Creat of an Instatnt Hourse Image File.
                                    g.DrawImage(DrawHourse.H[1], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                                }
                            }


                        }
                        else if (ConvertedToElefant)//When Elephant Conversion.
                        {

                            //Color of Gray.
                            if (Order == 1)
                            {
                                Object O1 = new Object();
                                lock (O1)
                                {//Draw an Instatnt Image of Gray Elephant.
                                    g.DrawImage(DrawElefant.E[0], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                                }
                            }
                            else
                            {
                                Object O1 = new Object();
                                lock (O1)
                                {//Draw of Instant Image of Brown Elephant.
                                    g.DrawImage(DrawElefant.E[1], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                                }
                            }


                        }
                    }
                }
            }
            catch (Exception t)
            {
                Log(t);
            }
        }
    }
}
//End of Documentation.