using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;
using System.IO;





















namespace AppRefregitz
{
    public class DrawElefant
    {
        //Initiate Global Variables.
        public static double MaxHuristicxE = -20000000000000000;
        public float Row, Column;
        public ThinkingChess[] ElefantThinking = new ThinkingChess[AllDraw.ElefantMovments];
        public int[,] Table = null;
        public Color color;
        public int Current = 0;
        public int Order;
           public bool MaxFound(ref bool MaxNotFound)
        {
            try
            {
                double a = ReturnHuristic();
                if (MaxHuristicxE < a)
                {
                    MaxNotFound = false;
                    if (ThinkingChess.MaxHuristicx < MaxHuristicxE)
                        ThinkingChess.MaxHuristicx = a;
                    MaxHuristicxE = a;
                    return true;
                }
            }
            catch (Exception t)
            {
                

            }
            MaxNotFound = true;
            return false;
        }
        public double ReturnHuristic()
        {
            double a = 0;
            for (int ii = 0; ii < AllDraw.ElefantMovments; ii++)
                try
                {
                    a += ElefantThinking[ii].ReturnHuristic(-1,-1,Order);
                }
                catch (Exception t)
                {
                    
                }

            return a;
        }

        //Constructor 1.
        public DrawElefant() { }
        //Constructor 2.
        public DrawElefant(float i, float j, Color a, int[,] Tab, int Ord, bool TB, int Cur//,ref FormRefrigtz THIS
            )
        {
            //Initiate Global Variables By Local Parameters.
            Table = new int[8, 8];
            for (int ii = 0; ii < 8; ii++)
                for (int jj = 0; jj < 8; jj++)
                    Table[ii, jj] = Tab[ii, jj];
            for (int ii = 0; ii < AllDraw.ElefantMovments; ii++)
                ElefantThinking[ii] = new ThinkingChess((int)i, (int)j, a, Tab, 16, Ord, TB, Cur, 4,2);

            Row = i;
            Column = j;
            color = a;
            Order = Ord;
            Current = Cur;

        }
        //Clone a Copy.
        public void Clone(ref DrawElefant AA//, ref FormRefrigtz THIS
            )
        {
            int[,] Tab = new int[8, 8];
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                    Tab[i, j] = this.Table[i, j];
            //Initiate a Constructed Object an Clone a Copy.
            AA = new DrawElefant(this.Row, this.Column, this.color, this.Table, this.Order, false, this.Current);
            for (int i = 0; i < AllDraw.ElefantMovments; i++)
            {
                try
                {
                    AA.ElefantThinking[i] = new ThinkingChess((int)this.Row, (int)this.Column);
                    this.ElefantThinking[i].Clone(ref AA.ElefantThinking[i]);
                }
                catch (Exception t)
                {
                    
                    AA.ElefantThinking[i] = null;
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
        //Draw an Instatnt Elephant On the Table.
        public void DrawElefantOnTable( int CellW, int CellH)
        {
            try
            {
                //Gray Color.
                if (color == Color.Gray)
                {
                    //Draw an Instatnt Gray Elephant On the Table.
                    //g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "EG.png"), new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                }
                else
                {
                    //Draw an Instatnt Brown Elepehnt On the Table.
                    //g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "EB.png"), new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                }
            }
            catch (Exception t)
            {
                
            }
        }

    }
}
//End of Documentation.