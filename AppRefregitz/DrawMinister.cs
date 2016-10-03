using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;
using System.IO;






















namespace AppRefregitz
{
    public class DrawMinister//:DrawKing
    {
        //Initiate Global Variable.
        public static double MaxHuristicxM = -20000000000000000;
        public float Row, Column;
        public Color color;
        public int[,] Table = null;
        public int Current = 0;
        public int Order;
        public ThinkingChess[] MinisterThinking = new ThinkingChess[AllDraw.MinisterMovments];
         public bool MaxFound(ref bool MaxNotFound)
        {
            try
            {
                double a = ReturnHuristic();
                if (MaxHuristicxM < a)
                {
                    MaxNotFound = false;
                    if (ThinkingChess.MaxHuristicx < MaxHuristicxM)
                        ThinkingChess.MaxHuristicx = a;
                    MaxHuristicxM = a;
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
            for (int ii = 0; ii < AllDraw.MinisterMovments; ii++)
                try
                {
                    a += MinisterThinking[ii].ReturnHuristic(-1,-1,Order);
                }
                catch (Exception t)
                {
                    
                }
            return a;
        }
        //constructor 1.
        public DrawMinister() { }
        //Constructor 2.
        public DrawMinister(float i, float j, Color a, int[,] Tab, int Ord, bool TB, int Cur//, ref FormRefrigtz THIS
            )
        {
            //Initiate Global Variables.
            Table = new int[8, 8];
            for (int ii = 0; ii < 8; ii++)
                for (int jj = 0; jj < 8; jj++)
                    Table[ii, jj] = Tab[ii, jj];
            for (int ii = 0; ii < AllDraw.MinisterMovments; ii++)
                MinisterThinking[ii] = new ThinkingChess((int)i, (int)j, a, Tab, 32, Ord, TB, Cur, 2, 5);

            Row = i;
            Column = j;
            color = a;
            Current = Cur;
            Order = Ord;

        }
        //Clone a Copy.
        public void Clone(ref DrawMinister AA//, ref FormRefrigtz THIS
            )
        {
            int[,] Tab = new int[8, 8];
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                    Tab[i, j] = this.Table[i, j];
            //Initiate an Object and Clone a Construction Objectve.
            AA = new DrawMinister(this.Row, this.Column, this.color, this.Table, this.Order, false, this.Current);
            for (int i = 0; i < AllDraw.MinisterMovments; i++)
            {
                try
                {
                    AA.MinisterThinking[i] = new ThinkingChess((int)this.Row, (int)this.Column);
                    this.MinisterThinking[i].Clone(ref AA.MinisterThinking[i]);
                }
                catch (Exception t)
                {
                    
                    AA.MinisterThinking[i] = null;
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
        public void DrawMinisterOnTable( int CellW, int CellH)
        {
            try
            {
                //Gray Order.
                if (color == Color.Gray)
                {
                    //Draw a Gray Instatnt Minister Image on the Table.
                    //g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "MG.png"), new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                }
                else
                {
                    //Draw a Brown Instatnt Minister Image on the Table.
                    //g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "MB.png"), new Rectangle((int)(Row * CellW), (int)(Column * (float)CellH), CellW, CellH));
                }

            }
            catch (Exception t) {  }
        }
    }
}
//End of Documentation.