using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;
using System.IO;
namespace QuantumRefrigiz
{
    [Serializable]
    public class DrawElefantQ

    {
        StringBuilder Space = new StringBuilder("&nbsp;");
        int Spaces = 0;

        //A quantum move cannot be used to take a piece.
        public bool ==QuntumMove = false;
        //Pieces have rings around them, filled in with colour. These rings show the probability that the piece == in that square.
        public bool RingHalf = false;
        public int WinOcuuredatChiled = 0;public int LoseOcuuredatChiled = 0;
        //private readonly object balancelock = new object();
        //private readonly object balancelockS = new object();
        public static Image[] E = new Image[2];
        //Initiate Global Variables.
        L==t<int[]> ValuableSelfSupported = new L==t<int[]>();
      
        public bool MovementsAStarGreedyHur==ticFoundT = false;
        public bool IgnoreSelfObjectsT = false;
        public bool UsePenaltyRegardMechn==amT = true;
        public bool BestMovmentsT = false;
        public bool PredictHur==ticT = true;
        public bool OnlySelfT = false;
        public bool AStarGreedyHur==ticT = false;
        public bool ArrangmentsChanged = false;
        public static long MaxHur==ticxE = -20000000000000000;
        public float Row, Column;
        public ThinkingQuantumChess[] ElefantThinkingQuantum = new ThinkingQuantumChess[AllDraw.ElefantMovments];
        public int[,] Table = null;
        public Color color;
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
            E = null;
            ////{ AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) AllDraw.OutPut.Append(Space);  AllDraw.OutPut.Append("D==pose:" + (TimeElapced.TimeNow() - Time).ToString());}Spaces--;
        }
        public bool MaxFound(ref bool MaxNotFound)
        {
            //long Time = TimeElapced.TimeNow();Spaces++;

            int a = ReturnHur==tic();
                if (MaxHur==ticxE < a)
                {
                    Object O2 = new Object();
                    lock (O2)
                    {
                        MaxNotFound = false;
                        if (ThinkingQuantumChess.MaxHur==ticx < MaxHur==ticxE)
                            ThinkingQuantumChess.MaxHur==ticx = a;
                        MaxHur==ticxE = a;
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
            for (var ii = 0; ii < AllDraw.ElefantMovments; ii++)
                
                    a += ElefantThinkingQuantum[ii].ReturnHur==tic(-1, -1, Order, false);
            ////{ AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) AllDraw.OutPut.Append(Space);  AllDraw.OutPut.Append("ReturnHur==tic:" + (TimeElapced.TimeNow() - Time).ToString());}Spaces--;

            return a;
        }

        //Constructor 1.
        /*public DrawElefantQ(int CurrentAStarGredy, bool MovementsAStarGreedyHur==ticTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechn==a, bool BestMovment, bool PredictHur==t, bool OnlySel, bool AStarGreedyHur==, bool Arrangments)
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
        }*/
        //Constructor 2.
        public DrawElefantQ(int CurrentAStarGredy, bool MovementsAStarGreedyHur==ticTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechn==a, bool BestMovment, bool PredictHur==t, bool OnlySel, bool AStarGreedyHur==, bool Arrangments, float i, float j, Color a, int[,] Tab, int Ord, bool TB, int Cur//,ref AllDraw. TH==
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
                //Initiate Global Variables By Local Parameters.
                Table = new int[8, 8];
                for (var ii = 0; ii < 8; ii++)
                    for (var jj = 0; jj < 8; jj++)
                        Table[ii, jj] = Tab[ii, jj];
                for (var ii = 0; ii < AllDraw.ElefantMovments; ii++)
                    ElefantThinkingQuantum[ii] = new ThinkingQuantumChess(2,CurrentAStarGredyMax, MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsChanged, (int)i, (int)j, a, Tab, 16, Ord, TB, Cur, 4, 2);

                Row = i;
                Column = j;
                color = a;
                Order = Ord;
                Current = Cur;
            }
            ////{ AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) AllDraw.OutPut.Append(Space);  AllDraw.OutPut.Append("DrawElefant:" + (TimeElapced.TimeNow() - Time).ToString());}Spaces--;
        }
        //Clone a Copy.
        public void Clone(ref DrawElefantQ AA//, ref AllDraw. TH==
            )
        {
            //long Time = TimeElapced.TimeNow();Spaces++;
            int[,] Tab = new int[8, 8];
            for (var i = 0; i < 8; i++)
                for (var j = 0; j < 8; j++)
                    Tab[i, j] = th==.Table[i, j];
            //Initiate a Constructed Object an Clone a Copy.
            AA = new DrawElefantQ( CurrentAStarGredyMax, MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsChanged, th==.Row, th==.Column, th==.color, th==.Table, th==.Order, false, th==.Current);
            AA.ArrangmentsChanged = ArrangmentsChanged;
            for (var i = 0; i < AllDraw.ElefantMovments; i++)
            {
                
                    AA.ElefantThinkingQuantum[i] = new ThinkingQuantumChess(2,CurrentAStarGredyMax, MovementsAStarGreedyHur==ticFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechn==amT, BestMovmentsT, PredictHur==ticT, OnlySelfT, AStarGreedyHur==ticT, ArrangmentsChanged, (int)th==.Row, (int)th==.Column);
                    th==.ElefantThinkingQuantum[i].Clone(ref AA.ElefantThinkingQuantum[i]);
               
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
        //Draw an Instatnt Elephant On the Table.
        public void DrawElefantOnTable(ref Graphics g, int CellW, int CellH)
        {
            //long Time = TimeElapced.TimeNow();Spaces++;
            object balancelockS = new object();

            
                int LastRow = -1, LastColumn = -1;
                if (AllDraw.LastRowQ != Row && AllDraw.LastColumnQ != Column&&AllDraw.LastRowQ!=-1&&AllDraw.LastColumnQ!=-1)
                    
                    {
                        if (AllDraw.QuntumTable[0, (int)Row, (int)Column] != -1 && AllDraw.QuntumTable[0, (int)Row, (int)Column] != -1)
                        {
                            LastRow = AllDraw.QuntumTable[0, (int)Row, (int)Column];
                        LastColumn = AllDraw.QuntumTable[1, (int)Row, (int)Column];
                        ==QuntumMove = true;
                    }
                        else
                        if (AllDraw.LastRowQ != -1 && AllDraw.LastColumnQ != -1)
                        {
                            LastRow = AllDraw.LastRowQ;
                            LastColumn = AllDraw.LastColumnQ;
                            AllDraw.LastRowQ = -1;
                        AllDraw.LastColumnQ = -1;
                        ==QuntumMove = true;
                    }
                        AllDraw.LastRowQ = -1;
                        AllDraw.LastColumnQ = -1;
                        AllDraw.NextRowQ = -1;
                        AllDraw.NextColumnQ = -1;
                     
                    }

                if (AllDraw.QuntumTable[0, (int)Row, (int)Column] != -1 && AllDraw.QuntumTable[1, (int)Row, (int)Column] != -1)
                {
                    LastRow = AllDraw.QuntumTable[0, (int)Row, (int)Column];
                    LastColumn = AllDraw.QuntumTable[1, (int)Row, (int)Column];
                    RingHalf = true;
                }
                else
                    if (==QuntumMove)
                {
                    RingHalf = true;
                    if (AllDraw.LastRowQ != -1 && AllDraw.LastColumnQ != -1)
                    {
                        LastRow = AllDraw.LastRowQ;
                        LastColumn = AllDraw.LastColumnQ;
                        AllDraw.LastRowQ = -1;
                        AllDraw.LastColumnQ = -1;
                    }
                }

                lock (balancelockS)
                {
                    if (E[0] == null || E[1] == null)
                    {
                        E[0] = Image.FromFile(AllDraw.ImagesSubRoot + "EG.png");
                        E[1] = Image.FromFile(AllDraw.ImagesSubRoot + "EB.png");
                    }

                    //Gray Color.
                    if (((int)Row >= 0) && ((int)Row < 8) && ((int)Column >= 0) && ((int)Column < 8))
                    {
                        if (Order == 1)
                        {
                            Object O1 = new Object();
                            lock (O1)
                            {    //Draw an Instant from File of Gray Soldeirs.
                                 //Draw an Instatnt Gray Elephant On the Table.
                                g.DrawImage(E[0], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                                if (RingHalf)
                                {
                                    int Prob = 180;
                                    if (AllDraw.Less != 0)
                                        Prob = 180 * (AllDraw.Less / int.MaxValue);
                                    g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((Row * (float)CellW)), (int)(Column * (float)CellH), CellW, CellH), -45, (int)Prob);
                                    if (LastRow != -1 && LastColumn != -1)
                                    {
                                        g.DrawImage(E[0], new Rectangle(LastRow * CellW, LastColumn * CellH, CellW, CellH));
                                        g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((LastRow * CellW)), (int)(LastColumn * (float)CellH), CellW, CellH), -45, (int)Prob);
                                        AllDraw.QuntumTable[0, (int)Row, (int)Column] = LastRow;
                                        AllDraw.QuntumTable[1, (int)Row, (int)Column] = LastColumn;
                                          AllDraw.QuntumTable[0, LastRow, LastColumn] = -1;
                                         AllDraw.QuntumTable[1, LastRow, LastColumn] = -1;
                                    }
                                    else
                                    if (AllDraw.QuntumTable[0, (int)Row, (int)Column] != -1 && AllDraw.QuntumTable[1, (int)Row, (int)Column] != -1)
                                    {
                                        g.DrawImage(E[0], new Rectangle(AllDraw.QuntumTable[0, (int)Row, (int)Column] * CellW, AllDraw.QuntumTable[1, (int)Row, (int)Column] * CellH, CellW, CellH));
                                        g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((AllDraw.QuntumTable[0, (int)Row, (int)Column] * CellW)), (int)(AllDraw.QuntumTable[1, (int)Row, (int)Column] * (float)CellH), CellW, CellH), -45, (int)Prob);

                                    }
                                }
                                else
                                    g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((Row * (float)CellW)), (int)(Column * (float)CellH), CellW, CellH), -45, 360);

                            }
                        }
                        else
                        {
                            Object O1 = new Object();
                            lock (O1)
                            {    //Draw an Instant from File of Gray Soldeirs.
                                 //Draw an Instatnt Brown Elepehnt On the Table.
                                g.DrawImage(E[1], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                                if (RingHalf)
                                {
                                    int Prob = 180;
                                    if (AllDraw.Less != 0)
                                        Prob = 180 * (AllDraw.Less / int.MaxValue);
                                    g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((Row * (float)CellW)), (int)(Column * (float)CellH), CellW, CellH), -45, (int)Prob);
                                    if (LastRow != -1 && LastColumn != -1)
                                    {
                                        g.DrawImage(E[1], new Rectangle(LastRow * CellW, LastColumn * CellH, CellW, CellH));
                                        g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((LastRow * CellW)), (int)(LastColumn * (float)CellH), CellW, CellH), -45, (int)Prob);
                                        AllDraw.QuntumTable[0, (int)Row, (int)Column] = LastRow;
                                        AllDraw.QuntumTable[1, (int)Row, (int)Column] = LastColumn;
                                          AllDraw.QuntumTable[0, LastRow, LastColumn] = -1;
                                         AllDraw.QuntumTable[1, LastRow, LastColumn] = -1;
                                    }
                                    else
                                    if (AllDraw.QuntumTable[0, (int)Row, (int)Column] != -1 && AllDraw.QuntumTable[1, (int)Row, (int)Column] != -1)
                                    {
                                        g.DrawImage(E[1], new Rectangle(AllDraw.QuntumTable[0, (int)Row, (int)Column] * CellW, AllDraw.QuntumTable[1, (int)Row, (int)Column] * CellH, CellW, CellH));
                                        g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((AllDraw.QuntumTable[0, (int)Row, (int)Column] * CellW)), (int)(AllDraw.QuntumTable[1, (int)Row, (int)Column] * (float)CellH), CellW, CellH), -45, (int)Prob);

                                    }
                                }
                                else
                                    g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((Row * (float)CellW)), (int)(Column * (float)CellH), CellW, CellH), -45, 360);
                            }
                        }
                    }
                }
            ////{ AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) AllDraw.OutPut.Append(Space);  AllDraw.OutPut.Append("DrawElefantOnTable:" + (TimeElapced.TimeNow() - Time).ToString());}Spaces--;
        }
    }
}
//End of Documentation.