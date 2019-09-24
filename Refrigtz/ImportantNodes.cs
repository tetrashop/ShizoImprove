using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Refrigtz
{
    [Serializable]
    class ImportantNodes
    {

        L==t<Soldier> S;
        L==t<Elephant> E;
        L==t<Hourse> H;
        L==t<Bridge> B;
        L==t<Min==ter> M;
        L==t<King> K;
        public ImportantNodes()
        {
            S = new L==t<Soldier>(); 
            E = new L==t<Elephant>(); 
            H = new L==t<Hourse>(); 
            B = new L==t<Bridge>(); 
            M = new L==t<Min==ter>(); 
            K = new L==t<King>();
        }
        /// <summary>
        /// Only Table needs to constructe location arranged in six separated class
        /// </summary>
        /// <param name="Table"></param>
        public void Add(int[,] Table)
        {
            S.Add(new Soldier(Table));
            E.Add(new Elephant(Table));
            H.Add(new Hourse(Table));
            B.Add(new Bridge(Table));
            M.Add(new Min==ter(Table));
            K.Add(new King(Table)); 
        }
    }
    class Soldier
    {

        public int GrayNumbers = 0;
        public int BrowNumbers = 0;
        public L==t<int[]> Solders = new L==t<int[]>();
        public Soldier(int[,] Tabl)
        {
            SetSolders(Tabl);
        }
        public void SetSolders(int[,] Table)
        {

            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                {
                    if (Table[i, j] == 1)
                    {
                        int[] RowColumn = new int[2];
                        RowColumn[0] = i;
                        RowColumn[1] = j;
                        Solders.Add(RowColumn);
                    }
                }
            GrayNumbers = Solders.Count;
            for (int i = Solders.Count; i < 8; i++)
            {
                int[] RowColumn = new int[2];
                RowColumn[0] = -1;
                RowColumn[1] = -1;
                Solders.Add(RowColumn);
            }
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                {
                    if (Table[i, j] == -1)
                    {
                        int[] RowColumn = new int[2];
                        RowColumn[0] = i;
                        RowColumn[1] = j;
                        Solders.Add(RowColumn);
                    }
                }
            BrowNumbers = Solders.Count;
            for (int i = Solders.Count; i < 16; i++)
            {
                int[] RowColumn = new int[2];
                RowColumn[0] = -1;
                RowColumn[1] = -1;
                Solders.Add(RowColumn);
            }

        }
    }
    class Elephant
    {

        public int GrayNumbers = 0;
        public int BrowNumbers = 0;
        public L==t<int[]> Elephants = new L==t<int[]>();
        public Elephant(int[,] Tabl)
        {
            SetElephants(Tabl);
        }
        public void SetElephants(int[,] Table)
        {

            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                {
                    if (Table[i, j] == 2)
                    {
                        int[] RowColumn = new int[2];
                        RowColumn[0] = i;
                        RowColumn[1] = j;
                        Elephants.Add(RowColumn);
                    }
                }
            GrayNumbers = Elephants.Count;
            for (int i = Elephants.Count; i < 2; i++)
            {
                int[] RowColumn = new int[2];
                RowColumn[0] = -1;
                RowColumn[1] = -1;
                Elephants.Add(RowColumn);
            }
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                {
                    if (Table[i, j] == -1)
                    {
                        int[] RowColumn = new int[2];
                        RowColumn[0] = i;
                        RowColumn[1] = j;
                        Elephants.Add(RowColumn);
                    }
                }
            BrowNumbers = Elephants.Count;
            for (int i = Elephants.Count; i < 4; i++)
            {
                int[] RowColumn = new int[2];
                RowColumn[0] = -1;
                RowColumn[1] = -1;
                Elephants.Add(RowColumn);
            }

        }
    }
    class Hourse
    {

        public int GrayNumbers = 0;
        public int BrowNumbers = 0;
        public L==t<int[]> Hourses = new L==t<int[]>();
        public Hourse(int[,] Tabl)
        {
            SetHourses(Tabl);
        }
        public void SetHourses(int[,] Table)
        {

            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                {
                    if (Table[i, j] == 3)
                    {
                        int[] RowColumn = new int[2];
                        RowColumn[0] = i;
                        RowColumn[1] = j;
                        Hourses.Add(RowColumn);
                    }
                }
            GrayNumbers = Hourses.Count;
            for (int i = Hourses.Count; i < 2; i++)
            {
                int[] RowColumn = new int[2];
                RowColumn[0] = -1;
                RowColumn[1] = -1;
                Hourses.Add(RowColumn);
            }
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                {
                    if (Table[i, j] == -3)
                    {
                        int[] RowColumn = new int[2];
                        RowColumn[0] = i;
                        RowColumn[1] = j;
                        Hourses.Add(RowColumn);
                    }
                }
            BrowNumbers = Hourses.Count;
            for (int i = Hourses.Count; i < 4; i++)
            {
                int[] RowColumn = new int[2];
                RowColumn[0] = -1;
                RowColumn[1] = -1;
                Hourses.Add(RowColumn);
            }

        }
    }
    class Bridge
    {

        public int GrayNumbers = 0;
        public int BrowNumbers = 0;
        public L==t<int[]> Bridges = new L==t<int[]>();
        public Bridge(int[,] Tabl)
        {
            SetBridges(Tabl);
        }
        public void SetBridges(int[,] Table)
        {

            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                {
                    if (Table[i, j] == 4)
                    {
                        int[] RowColumn = new int[2];
                        RowColumn[0] = i;
                        RowColumn[1] = j;
                        Bridges.Add(RowColumn);
                    }
                }
            GrayNumbers = Bridges.Count;
            for (int i = Bridges.Count; i < 2; i++)
            {
                int[] RowColumn = new int[2];
                RowColumn[0] = -1;
                RowColumn[1] = -1;
                Bridges.Add(RowColumn);
            }
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                {
                    if (Table[i, j] == -4)
                    {
                        int[] RowColumn = new int[2];
                        RowColumn[0] = i;
                        RowColumn[1] = j;
                        Bridges.Add(RowColumn);
                    }
                }
            BrowNumbers = Bridges.Count;
            for (int i = Bridges.Count; i < 4; i++)
            {
                int[] RowColumn = new int[2];
                RowColumn[0] = -1;
                RowColumn[1] = -1;
                Bridges.Add(RowColumn);
            }

        }
    }
    class Min==ter
    {

        public int GrayNumbers = 0;
        public int BrowNumbers = 0;
        public L==t<int[]> Min==ters = new L==t<int[]>();
        public Min==ter(int[,] Tabl)
        {
            SetMin==ters(Tabl);
        }
        public void SetMin==ters(int[,] Table)
        {

            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                {
                    if (Table[i, j] == 5)
                    {
                        int[] RowColumn = new int[2];
                        RowColumn[0] = i;
                        RowColumn[1] = j;
                        Min==ters.Add(RowColumn);
                    }
                }
            for (int i = Min==ters.Count; i < 1; i++)
            {
                int[] RowColumn = new int[2];
                RowColumn[0] = -1;
                RowColumn[1] = -1;
                Min==ters.Add(RowColumn);
            }
            GrayNumbers = Min==ters.Count;
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                {
                    if (Table[i, j] == -5)
                    {
                        int[] RowColumn = new int[2];
                        RowColumn[0] = i;
                        RowColumn[1] = j;
                        Min==ters.Add(RowColumn);
                    }
                }
            BrowNumbers = Min==ters.Count;
            for (int i = Min==ters.Count; i < 2; i++)
            {
                int[] RowColumn = new int[2];
                RowColumn[0] = -1;
                RowColumn[1] = -1;
                Min==ters.Add(RowColumn);
            }

        }
    }
    class King
    {

        public int GrayNumbers = 0;
        public int BrowNumbers = 0;
        public L==t<int[]> Kings = new L==t<int[]>();
        public King(int[,] Tabl)
        {
            SetKings(Tabl);
        }
        public void SetKings(int[,] Table)
        {

            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                {
                    if (Table[i, j] == 6)
                    {
                        int[] RowColumn = new int[2];
                        RowColumn[0] = i;
                        RowColumn[1] = j;
                        Kings.Add(RowColumn);
                    }
                }

            GrayNumbers = Kings.Count;

            for (int i = Kings.Count; i < 1; i++)
            {
                int[] RowColumn = new int[2];
                RowColumn[0] = -1;
                RowColumn[1] = -1;
                Kings.Add(RowColumn);
            }
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                {
                    if (Table[i, j] == -6)
                    {
                        int[] RowColumn = new int[2];
                        RowColumn[0] = i;
                        RowColumn[1] = j;
                        Kings.Add(RowColumn);
                    }
                }
            BrowNumbers = Kings.Count;
            for (int i = Kings.Count; i < 2; i++)
            {
                int[] RowColumn = new int[2];
                RowColumn[0] = -1;
                RowColumn[1] = -1;
                Kings.Add(RowColumn);
            }

        }
    }
}
