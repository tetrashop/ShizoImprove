using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;
using System.IO;
namespace QuantumRefrigiz
{
    [Serializable]
    public class DrawMinister//:DrawKing
    {
        //A quantum move cannot be used to take a piece.
        public bool IsQuntumMove = false;
        //Pieces have rings around them, filled in with colour. These rings show the probability that the piece is in that square.
        public bool RingHalf = false;
        public int WinOcuuredatChiled = 0;
        private readonly object balanceLock = new object();
        private readonly object balanceLockS = new object();
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
        public static double MaxHuristicxM = -20000000000000000;
        public float Row, Column;
        public Color color;
        public int[,] Table = null;
        public int Current = 0;
        public int Order;
        public ThinkingQuantumChess[] MinisterThinkingQuantum = new ThinkingQuantumChess[AllDraw.MinisterMovments];
        int CurrentAStarGredyMax = -1;
        static void Log(Exception ex)
        {
            try
            {
                Object a = new Object();
                lock (a)
                {
                    string stackTrace = ex.ToString();
                    File.AppendAllText(AllDraw.Root + "\\ErrorProgramRun.txt", stackTrace + ": On" + DateTime.Now.ToString()); // path of file where stack trace will be stored.
                }
            }
            catch (Exception t) { Log(t); }
        }
        public void Dispose()
        {
            ValuableSelfSupported = null;
            M = null;
        }

        public bool MaxFound(ref bool MaxNotFound)
        {
            try
            {
                double a = ReturnHuristic();
                if (MaxHuristicxM < a)
                {
                    Object O2 = new Object();
                    lock (O2)
                    {
                        MaxNotFound = false;
                        if (ThinkingQuantumChess.MaxHuristicx < MaxHuristicxM)
                            ThinkingQuantumChess.MaxHuristicx = a;
                        MaxHuristicxM = a;
                    }
                    return true;
                }
            }
            catch (Exception t)
            {
                Log(t);

            }
            MaxNotFound = true;
            return false;
        }
        public double ReturnHuristic()
        {
            double a = 0;
            for (int ii = 0; ii < AllDraw.MinisterMovments; ii++)
                try
                {
                    a += MinisterThinkingQuantum[ii].ReturnHuristic(-1, -1, Order,false);
                }
                catch (Exception t)
                {
                    Log(t);
                }
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

            lock (balanceLock)
            {
                if (M[0] == null && M[1] == null)
                {
                    M[0] = Image.FromFile(AllDraw.ImagesSubRoot + "MG.png");
                    M[1] = Image.FromFile(AllDraw.ImagesSubRoot + "MB.png");
                }

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
                for (int ii = 0; ii < 8; ii++)
                    for (int jj = 0; jj < 8; jj++)
                        Table[ii, jj] = Tab[ii, jj];
                for (int ii = 0; ii < AllDraw.MinisterMovments; ii++)
                    MinisterThinkingQuantum[ii] = new ThinkingQuantumChess(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, (int)i, (int)j, a, Tab, 32, Ord, TB, Cur, 2, 5);

                Row = i;
                Column = j;
                color = a;
                Current = Cur;
                Order = Ord;
            }
        }
        //Clone a Copy.
        public void Clone(ref DrawMinister AA//, ref AllDraw. THIS
            )
        {
            int[,] Tab = new int[8, 8];
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                    Tab[i, j] = this.Table[i, j];
            //Initiate an Object and Clone a Construction Objectve.
            AA = new DrawMinister( CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, Row, Column, this.color, this.Table, this.Order, false, this.Current);
            AA.ArrangmentsChanged = ArrangmentsChanged;
            for (int i = 0; i < AllDraw.MinisterMovments; i++)
            {
                try
                {
                    AA.MinisterThinkingQuantum[i] = new ThinkingQuantumChess(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, (int)this.Row, (int)this.Column);
                    this.MinisterThinkingQuantum[i].Clone(ref AA.MinisterThinkingQuantum[i]);
                }
                catch (Exception t)
                {
                    Log(t);
                    AA.MinisterThinkingQuantum[i] = null;
                }

            }
            AA.Table = new int[8, 8];
            for (int ii = 0; ii < 8; ii++)
                for (int jj = 0; jj < 8; jj++)
                    AA.Table[ii, jj] = Tab[ii, jj];
            AA.Row = Row;
            AA.Column = Column;
            AA.Order = Order;
            AA.Current = Current;
            AA.color = color;

        }
        //Draw an Mnister on the Table.
        public void DrawMinisterOnTable(ref Graphics g, int CellW, int CellH)
        {
            try
            {
                if (AllDraw.LastRow == Row && AllDraw.LastColumn == Column)
                    if (AllDraw.LastRow != AllDraw.NextRow || AllDraw.LastColumn != AllDraw.NextColumn)
                    {
                        AllDraw.LastRow = -1;
                        AllDraw.LastColumn = -1;
                        AllDraw.NextRowQ = AllDraw.NextRow;
                        AllDraw.NextColumnQ = AllDraw.NextColumn;
                        AllDraw.NextRow = -1;
                        AllDraw.NextColumn = -1;
                        IsQuntumMove = true;
                    }

                if (IsQuntumMove || (AllDraw.QuntumTable[0,(int)Row, (int)Column] != -1 && AllDraw.QuntumTable[1,(int)Row, (int)Column] != -1))
                    RingHalf = true;
                lock (balanceLockS)
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
                                if (RingHalf)
                                {
                                    g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((Row * (float)CellW)), (int)(Column * (float)CellH), CellW, CellH), -45, 180);
                                    if (AllDraw.NextRowQ != -1 && AllDraw.NextColumnQ != -1)
                                    {
                                        g.DrawImage(M[0], new Rectangle(AllDraw.NextRowQ * CellW, AllDraw.NextColumnQ * CellH, CellW, CellH));
                                        g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((AllDraw.NextRowQ * CellW)), (int)(AllDraw.NextColumnQ * (float)CellH), CellW, CellH), -45, 180);
                                        if( AllDraw.QuntumTable[0,AllDraw.NextRowQ, AllDraw.NextColumnQ] == -1 && AllDraw.QuntumTable[1,AllDraw.NextRowQ, AllDraw.NextColumnQ] == -1)
                                        {
                                            AllDraw.QuntumTable[0,(int)Row, (int)Column] = AllDraw.NextRowQ;
                                            AllDraw.QuntumTable[1,(int)Row, (int)Column] = AllDraw.NextColumnQ;
                                        }
                                    }
                                    else
                                    if (AllDraw.QuntumTable[0,(int)Row, (int)Column] != -1 && AllDraw.QuntumTable[0,(int)Row, (int)Column] != -1)
                                    {
                                        AllDraw.NextRowQ = AllDraw.QuntumTable[0,(int)Row, (int)Column];
                                        AllDraw.NextColumnQ = AllDraw.QuntumTable[1,(int)Row, (int)Column];
                                        g.DrawImage(M[0], new Rectangle(AllDraw.NextRowQ * CellW, AllDraw.NextColumnQ * CellH, CellW, CellH));
                                        g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((AllDraw.NextRowQ * CellW)), (int)(AllDraw.NextColumnQ * (float)CellH), CellW, CellH), -45, 180);

                                    }
                                    AllDraw.QuntumTable[0,AllDraw.QuntumTable[0,(int)Row, (int)Column], AllDraw.QuntumTable[1,(int)Row, (int)Column]] = -1;
                                    AllDraw.QuntumTable[1,AllDraw.QuntumTable[0,(int)Row, (int)Column], AllDraw.QuntumTable[1,(int)Row, (int)Column]] = -1;

                                }
                                else
                                    g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((Row * (float)CellW)), (int)(Column * (float)CellH), CellW, CellH), -45, 360);
                            }
                        }
                        else
                        {
                            Object O1 = new Object();
                            lock (O1)
                            {

                                g.DrawImage(M[1], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                                if (RingHalf)
                                {
                                    g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((Row * (float)CellW)), (int)(Column * (float)CellH), CellW, CellH), -45, 180);
                                    if (AllDraw.NextRowQ != -1 && AllDraw.NextColumnQ != -1)
                                    {
                                        g.DrawImage(M[1], new Rectangle(AllDraw.NextRowQ * CellW, AllDraw.NextColumnQ * CellH, CellW, CellH));
                                        g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((AllDraw.NextRowQ * CellW)), (int)(AllDraw.NextColumnQ * (float)CellH), CellW, CellH), -45, 180);
                                        if( AllDraw.QuntumTable[0,AllDraw.NextRowQ, AllDraw.NextColumnQ] == -1 && AllDraw.QuntumTable[1,AllDraw.NextRowQ, AllDraw.NextColumnQ] == -1)
                                        {
                                            AllDraw.QuntumTable[0,(int)Row, (int)Column] = AllDraw.NextRowQ;
                                            AllDraw.QuntumTable[1,(int)Row, (int)Column] = AllDraw.NextColumnQ;
                                        }
                                    }
                                    else
                                    if (AllDraw.QuntumTable[0,(int)Row, (int)Column] != -1 && AllDraw.QuntumTable[0,(int)Row, (int)Column] != -1)
                                    {
                                        AllDraw.NextRowQ = AllDraw.QuntumTable[0,(int)Row, (int)Column];
                                        AllDraw.NextColumnQ = AllDraw.QuntumTable[1,(int)Row, (int)Column];
                                        g.DrawImage(M[0], new Rectangle(AllDraw.NextRowQ * CellW, AllDraw.NextColumnQ * CellH, CellW, CellH));
                                        g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((AllDraw.NextRowQ * CellW)), (int)(AllDraw.NextColumnQ * (float)CellH), CellW, CellH), -45, 180);

                                    }
                                    AllDraw.QuntumTable[0,AllDraw.QuntumTable[0,(int)Row, (int)Column], AllDraw.QuntumTable[1,(int)Row, (int)Column]] = -1;
                                    AllDraw.QuntumTable[1,AllDraw.QuntumTable[0,(int)Row, (int)Column], AllDraw.QuntumTable[1,(int)Row, (int)Column]] = -1;

                                }
                                else
                                    g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((Row * (float)CellW)), (int)(Column * (float)CellH), CellW, CellH), -45, 360);
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