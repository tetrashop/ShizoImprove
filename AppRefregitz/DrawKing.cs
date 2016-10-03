using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;
using System.IO;






















namespace AppRefregitz
{
    public class DrawKing
    {
        //Initiate Global Variables.
        public static double MaxHuristicxK = -20000000000000000;
        public float Row, Column;
        public Color color;
        public int[,] Table = null;
        public ThinkingChess[] KingThinking = new ThinkingChess[AllDraw.KingMovments];
        public int Current = 0;
        public int Order;

           public double ReturnHuristic()
        {
            double a = 0;
            for (int ii = 0; ii < AllDraw.KingMovments; ii++)
                try
                {
                    a += KingThinking[ii].ReturnHuristic(-1,-1,Order);
                }
                catch (Exception t)
                {
                    
                }

            return a;
        }
        public bool MaxFound(ref bool MaxNotFound)
        {
            try
            {
                double a = ReturnHuristic();
                if (MaxHuristicxK < a)
                {
                    MaxNotFound = false;
                    if (ThinkingChess.MaxHuristicx < MaxHuristicxK)
                        ThinkingChess.MaxHuristicx = a;
                    MaxHuristicxK = a;
                    return true;
                }
            }
            catch (Exception t)
            {
                

            }
            MaxNotFound = true;
            return false;
        }
        //Constructor 1.
        public DrawKing() { }
        //Constructor 2.
        public DrawKing(float i, float j, Color a, int[,] Tab, int Ord, bool TB, int Cur//, ref FormRefrigtz THIS
            )
        {
            //Iniatite Global Variables.
            Table = new int[8, 8];
            for (int ii = 0; ii < 8; ii++)
                for (int jj = 0; jj < 8; jj++)
                    Table[ii, jj] = Tab[ii, jj];
            for (int ii = 0; ii < AllDraw.KingMovments; ii++)
                KingThinking[ii] = new ThinkingChess((int)i, (int)j, a, Tab, 8, Ord, TB, Cur, 2,6);

            Row = i;
            Column = j;
            color = a;
            Order = Ord;
            Current = Cur;

        }
        //Clone a Copy.
        public void Clone(ref DrawKing AA//, ref FormRefrigtz THIS
            )
        {
            int[,] Tab = new int[8, 8];
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                    Tab[i, j] = this.Table[i, j];
            //Initiate a Construction Object and Clone a Copy.
            AA = new DrawKing(this.Row, this.Column, this.color, this.Table, this.Order, false, this.Current);
            for (int i = 0; i < AllDraw.KingMovments; i++)
            {
                try
                {
                    AA.KingThinking[i] = new ThinkingChess((int)this.Row, (int)this.Column);
                    this.KingThinking[i].Clone(ref AA.KingThinking[i]);
                }
                catch (Exception t)
                {
                    
                    AA.KingThinking[i] = null;
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
        //Draw an Instatnt King on the Table Method.
        public void DrawKingOnTable( int CellW, int CellH)
        {

            try
            {
                //Gray Order.
                if (color == Color.Gray)
                {
                    //Draw an Instatnt Gray King Image On the Table.
                    //g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "KG.png"), new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));

                }
                else
                {
                    //Draw an Instatnt Brown King Image On the Table.
                    //g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "KB.png"), new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                }
            }
            catch (Exception t) {  }

        }
    }
}
//End of Documentation.