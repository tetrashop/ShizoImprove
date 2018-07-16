using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System.IO;
using RefrigtzDLL;
namespace GalleryStudio
{
    
    [Serializable]
    
    public class RefregizMemmory //:AllDraw
    {
        
        public bool MovementsAStarGreedyHuristicFoundT = false;
        public bool IgnoreSelfObjectsT = false;
        public bool UsePenaltyRegardMechnisamT = true;
        public bool BestMovmentsT = false;
        public bool PredictHuristicT = true;
        public bool OnlySelfT = false;
        public bool AStarGreedyHuristicT = false;
        public bool ArrangmentsT = false;
        const string SAllDraw = "AllDraw.asd";
        public int Kind = 0;
        static GalleryStudio.RefregizMemmory Node;
        RefrigtzDLL.AllDraw Current = null;
        public GalleryStudio.RefregizMemmory NextS = null;
        public GalleryStudio.RefregizMemmory NextE = null;
        public GalleryStudio.RefregizMemmory NextH = null;
        public GalleryStudio.RefregizMemmory NextC = null;
        public GalleryStudio.RefregizMemmory NextM = null;
        public GalleryStudio.RefregizMemmory NextK = null;
        public RefregizMemmory(//bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments) //: base(MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments
            )
        {
            //Node = new RefregizMemmory(MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT);
            //MovementsAStarGreedyHuristicFoundT = MovementsAStarGreedyHuristicTFou;
         //IgnoreSelfObjectsT = IgnoreSelfObject;
         //UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
         //BestMovmentsT = BestMovment;
        //PredictHuristicT = PredictHurist;
         //OnlySelfT = OnlySel;
         //AStarGreedyHuristicT = AStarGreedyHuris;
         //ArrangmentsT = Arrangments;

    }
        public //AllDraw 
            void Load()
        {
            if (Node == null) Node = new RefregizMemmory(//MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT
                );             
            Node.AllDrawNextAccessS = null;
            Node.AllDrawNextAccessE = null;
            Node.AllDrawNextAccessH = null;
            Node.AllDrawNextAccessC = null;
            Node.AllDrawNextAccessM = null;
            Node.AllDrawNextAccessK = null;            
            Node.AllDrawCurrentAccess = null;
            try
            {
                FileStream DummyFileStream = new FileStream(SAllDraw, System.IO.FileMode.OpenOrCreate, System.IO.FileAccess.ReadWrite);
                BinaryFormatter Formatters = new BinaryFormatter();
                RefrigtzDLL.AllDraw Dummy = new RefrigtzDLL.AllDraw(MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT); ;
                GalleryStudio.RefregizMemmory Last = null;
                Console.WriteLine("Loading...");
                DummyFileStream.Seek(0, SeekOrigin.Begin);
                //NEWNOD = Node.AllDrawCurrentAccess;
                while (DummyFileStream.Position < DummyFileStream.Length)
                {
                    Dummy = (RefrigtzDLL.AllDraw)Formatters.Deserialize(DummyFileStream);
                    if (Node.Current == null)
                        Node.Current = Dummy;
                    else
                    {
                        Last = Node;
                        if (Last.NextS != null)
                        {
                            while (Last.NextS != null)
                                Last = Last.NextS;
                            RefregizMemmory New = new RefregizMemmory(//MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT
                                );
                            New.Current = Dummy;
                            Last.AllDrawNextAccessS = New;
                            if (New.Current != null)
                            {

                            }
                        }
                        else
                            if (Last.NextE != null)
                        {
                            while (Last.NextE != null)
                                Last = Last.NextE;
                            RefregizMemmory New = new RefregizMemmory(//MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT
                                );
                            New.Current = Dummy;
                            Last.AllDrawNextAccessE = New;
                        }
                        else
                            if (Last.NextH != null)
                        {
                            while (Last.NextH != null)
                                Last = Last.NextH;
                            RefregizMemmory New = new RefregizMemmory(//MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT
                                );
                            New.Current = Dummy;
                            Last.AllDrawNextAccessH = New;
                        }
                        else
                            if (Last.NextC != null)
                        {
                            while (Last.NextC != null)
                                Last = Last.NextC;
                            RefregizMemmory New = new RefregizMemmory(//MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT
                                );
                            New.Current = Dummy;
                            Last.AllDrawNextAccessC = New;
                        }
                        else
                            if (Last.NextM != null)
                        {
                            while (Last.NextM != null)
                                Last = Last.NextM;
                            RefregizMemmory New = new RefregizMemmory(//MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT
                                );
                            New.Current = Dummy;
                            Last.AllDrawNextAccessM = New;
                        }
                        else
                            if (Last.NextK != null)
                        {
                            while (Last.NextK != null)
                                Last = Last.NextK;
                            RefregizMemmory New = new RefregizMemmory(//MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT
                                );
                            New.Current = Dummy;
                            Last.AllDrawNextAccessK = New;
                        }
                        
                    }
                }
                DummyFileStream.Flush();
                DummyFileStream.Close();
            }
            catch (IOException t) { Console.WriteLine(t.Message.ToString()); }
            //return Node.al;
        }
       /* public void DeleteObject(RefregizMemmory p)
        {
            RefregizMemmory t = new RefregizMemmory(MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT);
            t = Node;
            if ((t.c) != (p.AllDrawCurrentAccess.RefrigtzDLL.AllDrawName))
            {
                if (t != null)
                    while ((t.AllDrawNextAccess.AllDrawCurrentAccess.RefrigtzDLL.AllDrawName) != (p.AllDrawCurrentAccess.RefrigtzDLL.AllDrawName))
                    {
                        if (t.AllDrawNextAccess != null)
                            t = t.AllDrawNextAccess;
                        else
                        if ((t.AllDrawCurrentAccess.RefrigtzDLL.AllDrawName) != (p.AllDrawCurrentAccess.RefrigtzDLL.AllDrawName))
                        {
                            t = null;
                            break;
                        }
                    }
                if (t != null)
                {
                    if (t.AllDrawNextAccess != null)
                        t.AllDrawNextAccess = t.AllDrawNextAccess.AllDrawNextAccess;

                    else
                        t.AllDrawNextAccess = null;
                }

            }
            else
            {
                t = t.AllDrawNextAccess;
                Node = t;
            }
        }
        */
        /*public void AddObject(RefregizMemmory p)
        {
            RefregizMemmory t = new RefregizMemmory(//MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT
                );
            t = p.AllDrawNodeAccess;
            while (t.AllDrawNextAccess != null)
                t = t.AllDrawNextAccess;
            if (t.AllDrawCurrentAccess == null)
                t.AllDrawCurrentAccess = p.AllDrawCurrentAccess;
            else
                t.AllDrawNextAccess = p;
        }*/
        public RefregizMemmory AllDrawNodeAccess
        {
            get
            { return Node; }
            set
            { Node = value; }
        }
        public AllDraw AllDrawCurrentAccess
        {
            get
            { return Current; }
            set
            { Current = value; }
        }
        public int OrderPlateCurrentAccess
        {
            get
            { return Current.OrderP; }
            set
            { Current.OrderP = value; }
        }
        public RefregizMemmory ReterunAstrarGreedysolder(int i, int j, RefregizMemmory t)
        {
            if (t.Current.SolderesOnTable[i].SoldierThinking[0].AStarGreedy.Count != 0)
            {
                Kind = 1;
                t.NextS.Current = t.Current.SolderesOnTable[i].SoldierThinking[0].AStarGreedy[j];
            }
            return AllDrawNextS(t.Current);
        }
        public RefregizMemmory ReterunAstrarGreedyelephant(int i, int j, RefregizMemmory t)
        {
            if (t.Current.ElephantOnTable[i].ElefantThinking[0].AStarGreedy.Count != 0)
            {
                Kind = 2;
                t.NextE.Current = t.Current.ElephantOnTable[i].ElefantThinking[0].AStarGreedy[j];
            }
            return AllDrawNextE(t.Current);
        }
        public RefregizMemmory ReterunAstrarGreedyHours(int i, int j, RefregizMemmory t)
        {
            if (t.Current.HoursesOnTable[i].HourseThinking[0].AStarGreedy.Count != 0)
            {
                Kind = 3;
                t.NextH.Current = t.Current.HoursesOnTable[i].HourseThinking[0].AStarGreedy[j];
            }
            return AllDrawNextH(t.Current);
        }
        public RefregizMemmory ReterunAstrarGreedyCastle(int i, int j, RefregizMemmory t)
        {
            if (t.Current.CastlesOnTable[i].CastleThinking[0].AStarGreedy.Count != 0)
            {
                Kind = 4;
                t.NextC.Current = t.Current.CastlesOnTable[i].CastleThinking[0].AStarGreedy[j];
            }
            return AllDrawNextC(t.Current);
        }
        public RefregizMemmory ReterunAstrarGreedyMinister(int i, int j, RefregizMemmory t)
        {
            if (t.Current.MinisterOnTable[i].MinisterThinking[0].AStarGreedy.Count != 0)
            {
                Kind = 5;
                t.NextM.Current = t.Current.MinisterOnTable[i].MinisterThinking[0].AStarGreedy[j];
            }
            return AllDrawNextM(t.Current);
        }
        public RefregizMemmory ReterunAstrarGreedyKing(int i, int j, RefregizMemmory t)
        {
            if (t.Current.KingOnTable[i].KingThinking[0].AStarGreedy.Count != 0)
            {
                Kind = 6;
                t.NextK.Current = t.Current.KingOnTable[i].KingThinking[0].AStarGreedy[j];
            }
            return AllDrawNextK(t.Current);
        }
        public RefregizMemmory AllDrawNextS(AllDraw Cur)
        {
            return NextS;
        }
        public RefregizMemmory AllDrawNextE(AllDraw Cur)
        {
            return NextE;
        }
        public RefregizMemmory AllDrawNextH(AllDraw Cur)
        {
            return NextH;
        }
        public RefregizMemmory AllDrawNextC(AllDraw Cur)
        {
            return NextC;
        }
        public RefregizMemmory AllDrawNextM(AllDraw Cur)
        {
            return NextM;
        }
        public RefregizMemmory AllDrawNextK(AllDraw Cur)
        {
            return NextK;
        }

        public RefregizMemmory AllDrawNextAccessS
        {
            get
            { return NextS; }
            set
            { NextS = value; }
        }
        public RefregizMemmory AllDrawNextAccessE
        {
            get
            { return NextE; }
            set
            { NextE = value; }
        }
        public RefregizMemmory AllDrawNextAccessH
        {
            get
            { return NextH; }
            set
            { NextH = value; }
        }
        public RefregizMemmory AllDrawNextAccessC
        {
            get
            { return NextC; }
            set
            { NextC = value; }
        }
        public RefregizMemmory AllDrawNextAccessM
        {
            get
            { return NextM; }
            set
            { NextM = value; }
        }
        public RefregizMemmory AllDrawNextAccessK
        {
            get
            { return NextK; }
            set
            { NextK = value; }
        }

    }
}
