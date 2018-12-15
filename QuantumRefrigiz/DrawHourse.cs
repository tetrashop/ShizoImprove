using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;
using System.IO;
namespace QuantumRefrigiz
{
    [Serializable]
    public class DrawHourse
    {
        //A quantum move cannot be used to take a piece.
        public bool IsQuntumMove = false;
        //Pieces have rings around them, filled in with colour. These rings show the probability that the piece is in that square.
        public bool RingHalf = false;
        public int WinOcuuredatChiled = 0;
        private readonly object balanceLock = new object();
        private readonly object balanceLockS = new object();
        public static Image[] H = new Image[2];
        //Iniatite Global Variables.
        List<int[]> ValuableSelfSupported = new List<int[]>();
      
        public bool MovementsAStarGreedyHuristicFoundT = false;
        public bool IgnoreSelfObjectsT = false;
        public bool UsePenaltyRegardMechnisamT = true;
        public bool BestMovmentsT = false;
        public bool PredictHuristicT = true;
        public bool OnlySelfT = false;
        public bool AStarGreedyHuristicT = false;
        public bool ArrangmentsChanged = false;
        public static double MaxHuristicxH = -20000000000000000;
        public float Row, Column;
        public Color color;
        public int[,] Table = null;
        public ThinkingQuantumChess[] HourseThinkingQuantum = new ThinkingQuantumChess[AllDraw.HourseMovments];
        public int Current = 0;
        public int Order;
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
            H = null;
        }
        public bool MaxFound(ref bool MaxNotFound)
        {
            try
            {
                double a = ReturnHuristic();
                if (MaxHuristicxH < a)
                {
                    Object O2 = new Object();
                    lock (O2)
                    {
                        MaxNotFound = false;
                        if (ThinkingQuantumChess.MaxHuristicx < MaxHuristicxH)
                            ThinkingQuantumChess.MaxHuristicx = a;
                        MaxHuristicxH = a;
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
            for (int ii = 0; ii < AllDraw.HourseMovments; ii++)
                try
                {
                    a += HourseThinkingQuantum[ii].ReturnHuristic(-1, -1, Order,false);
                }
                catch (Exception t)
                {
                    Log(t);
                }
            return a;
        }
        //Constructor 1.
       /* public DrawHourse(int CurrentAStarGredy, bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments)
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
        //Constructpor 2.
        public DrawHourse(int CurrentAStarGredy, bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, float i, float j, Color a, int[,] Tab, int Ord, bool TB, int Cur//,ref AllDraw. THIS
            )
        {

            {
                if (H[0] == null && H[1] == null)
                {
                    H[0] = Image.FromFile(AllDraw.ImagesSubRoot + "HG.png");
                    H[1] = Image.FromFile(AllDraw.ImagesSubRoot + "HB.png");
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
                //Initiate Global Variable By Local Paramenters.
                Table = new int[8, 8];
                for (int ii = 0; ii < 8; ii++)
                    for (int jj = 0; jj < 8; jj++)
                        Table[ii, jj] = Tab[ii, jj];
                for (int ii = 0; ii < AllDraw.HourseMovments; ii++)
                    HourseThinkingQuantum[ii] = new ThinkingQuantumChess(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, (int)i, (int)j, a, Tab, 8, Ord, TB, Cur, 4, 3);

                Row = i;
                Column = j;
                color = a;
                Order = Ord;
                Current = Cur;
            }
        }
        //Cloen a Copy.
        public void Clone(ref DrawHourse AA//, ref AllDraw. THIS
            )
        {
            int[,] Tab = new int[8, 8];
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                    Tab[i, j] = this.Table[i, j];
            //Create a Construction Ojects and Initiate a Clone Copy.
            AA = new DrawHourse( CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, this.Row, this.Column, this.color, this.Table, this.Order, false, this.Current);
            AA.ArrangmentsChanged = ArrangmentsChanged;
            for (int i = 0; i < AllDraw.HourseMovments; i++)
            {
                try
                {
                    AA.HourseThinkingQuantum[i] = new ThinkingQuantumChess(CurrentAStarGredyMax, MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsChanged, (int)this.Row, (int)this.Column);
                    this.HourseThinkingQuantum[i].Clone(ref AA.HourseThinkingQuantum[i]);
                }
                catch (Exception t)
                {
                    Log(t);
                    AA.HourseThinkingQuantum[i] = null;
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
        //Draw a Instatnt Hourse on the Table Method.
        public void DrawHourseOnTable(ref Graphics g, int CellW, int CellH)
        {
            try
            {

                if (AllDraw.LastRow == Row && AllDraw.LastColumn == Column)
                    if (AllDraw.LastRow != AllDraw.NextRow || AllDraw.LastColumn == AllDraw.NextColumn)
                    {
                        AllDraw.LastRow = -1;
                        AllDraw.LastColumn = -1;
                        AllDraw.NextRow = -1;
                        AllDraw.NextColumn = -1;
                        IsQuntumMove = true;
                    }
                if (IsQuntumMove)
                    RingHalf = true;
                lock (balanceLockS)
                {
                    if (H[0] == null || H[1] == null)
                    {
                        H[0] = Image.FromFile(AllDraw.ImagesSubRoot + "HG.png");
                        H[1] = Image.FromFile(AllDraw.ImagesSubRoot + "HB.png");
                    }
                    if (((int)Row >= 0) && ((int)Row < 8) && ((int)Column >= 0) && ((int)Column < 8))
                    { //Gray Order.
                        if(Order==1)
                        {
                            Object O1 = new Object();
                            lock (O1)
                            {    //Draw an Instant from File of Gray Soldeirs.
                                 //Draw an Instatnt Gray Hourse on the Table.
                                g.DrawImage(H[0], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                                if (RingHalf)
                                {
                                    g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((Row * (float)CellW)), (int)(Column * (float)CellH), CellW, CellH), -45, 180);
                                    if (AllDraw.NextRowQ != -1 && AllDraw.NextColumnQ != -1)
                                        g.DrawImage(H[0], new Rectangle(AllDraw.NextRowQ * CellW, AllDraw.NextColumnQ * CellH, CellW, CellH));
                                    if (Row != this.HourseThinkingQuantum[0].Row || Column != this.HourseThinkingQuantum[0].Column)
                                        g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((this.HourseThinkingQuantum[0].Row * (float)CellW)), (int)(this.HourseThinkingQuantum[0].Column * (float)CellH), CellW, CellH), -45, 180);
                                    else
                                        if (AllDraw.NextRowQ != -1 && AllDraw.NextColumnQ != -1)
                                        g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((AllDraw.NextRowQ * CellW)), (int)(AllDraw.NextColumnQ * (float)CellH), CellW, CellH), -45, 180);

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
                                 //Draw an Instatnt Brown Hourse on the Table.
                                g.DrawImage(H[1], new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                                if (RingHalf)
                                {
                                    g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((Row * (float)CellW)), (int)(Column * (float)CellH), CellW, CellH), -45, 180);
                                    if (AllDraw.NextRowQ != -1 && AllDraw.NextColumnQ != -1)
                                        g.DrawImage(H[1], new Rectangle(AllDraw.NextRowQ * CellW, AllDraw.NextColumnQ * CellH, CellW, CellH));
                                    if (Row != this.HourseThinkingQuantum[0].Row || Column != this.HourseThinkingQuantum[0].Column)
                                        g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((this.HourseThinkingQuantum[0].Row * (float)CellW)), (int)(this.HourseThinkingQuantum[0].Column * (float)CellH), CellW, CellH), -45, 180);
                                    else
                                        if (AllDraw.NextRowQ != -1 && AllDraw.NextColumnQ != -1)
                                        g.DrawArc(new Pen(new SolidBrush(Color.Red)), new Rectangle((int)((AllDraw.NextRowQ * CellW)), (int)(AllDraw.NextColumnQ * (float)CellH), CellW, CellH), -45, 180);


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