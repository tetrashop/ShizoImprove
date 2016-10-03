using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;
using System.IO;






















namespace AppRefregitz
{
    public class DrawHourse
    {
        //Iniatite Global Variables.
        public static double MaxHuristicxH = -20000000000000000;
        public float Row, Column;
        public Color color;
        public int[,] Table = null;
        public ThinkingChess[] HourseThinking = new ThinkingChess[AllDraw.HourseMovments];
        public int Current = 0;
        public int Order;
        Refrigtz.Timer timer = null;
        Refrigtz.Timer TimerColor = null;

        public bool MaxFound(ref bool MaxNotFound)
        {
            try
            {
                double a = ReturnHuristic();
                if (MaxHuristicxH < a)
                {
                    MaxNotFound = false;
                    if (ThinkingChess.MaxHuristicx < MaxHuristicxH)
                        ThinkingChess.MaxHuristicx = a;
                    MaxHuristicxH = a;
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
            for (int ii = 0; ii < AllDraw.HourseMovments; ii++)
                try
                {
                    a += HourseThinking[ii].ReturnHuristic(-1,-1,Order);
                }
                catch (Exception t)
                {
                    
                }
            return a;
        }
        //Constructor 1.
        public DrawHourse() { }
        //Constructpor 2.
        public DrawHourse(float i, float j, Color a, int[,] Tab, int Ord, bool TB, int Cur//,ref FormRefrigtz THIS
            )
        {
            //Initiate Global Variable By Local Paramenters.
            Table = new int[8, 8];
            for (int ii = 0; ii < 8; ii++)
                for (int jj = 0; jj < 8; jj++)
                    Table[ii, jj] = Tab[ii, jj];
            for (int ii = 0; ii < AllDraw.HourseMovments; ii++)
                HourseThinking[ii] = new ThinkingChess((int)i, (int)j, a, Tab, 8, Ord, TB, Cur, 4,3);

            Row = i;
            Column = j;
            color = a;
            Order = Ord;
            Current = Cur;

        }
        //Cloen a Copy.
        public void Clone(ref DrawHourse AA//, ref FormRefrigtz THIS
            )
        {
            int[,] Tab = new int[8, 8];
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                    Tab[i, j] = this.Table[i, j];
            //Create a Construction Ojects and Initiate a Clone Copy.
            AA = new DrawHourse(this.Row, this.Column, this.color, this.Table, this.Order, false, this.Current);
            for (int i = 0; i < AllDraw.HourseMovments; i++)
            {
                try
                {
                    AA.HourseThinking[i] = new ThinkingChess((int)this.Row, (int)this.Column);
                    this.HourseThinking[i].Clone(ref AA.HourseThinking[i]);
                }
                catch (Exception t)
                {
                    
                    AA.HourseThinking[i] = null;
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
        public void DrawHourseOnTable( int CellW, int CellH)
        {
            try
            {
                //Gray Order.
                if (color == Color.Gray)
                {
                    //Draw an Instatnt Gray Hourse on the Table.
                    //g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "HG.png"), new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                }
                else
                {
                    //Draw an Instatnt Brown Hourse on the Table.
                    //g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "HB.png"), new Rectangle((int)(Row * (float)CellW), (int)(Column * (float)CellH), CellW, CellH));
                }
            }
            catch (Exception t) {  }
        }
    }
}
//End of Documentation.