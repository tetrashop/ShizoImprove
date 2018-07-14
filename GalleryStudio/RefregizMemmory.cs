using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System.IO;
using RefrigtzDLL;
namespace GalleryStudio
{
    class RefregizMemmory : AllDraw
    {
        public bool MovementsAStarGreedyHuristicFoundT = false;
        public bool IgnoreSelfObjectsT = false;
        public bool UsePenaltyRegardMechnisamT = true;
        public bool BestMovmentsT = false;
        public bool PredictHuristicT = true;
        public bool OnlySelfT = false;
        public bool AStarGreedyHuristicT = false;
        public bool ArrangmentsT = false;

        const string SAllDraw = "RefrigtzDLL.AllDraw.asd";
        static GalleryStudio.RefregizMemmory Node;
        RefrigtzDLL.AllDraw Current = null;
        GalleryStudio.RefregizMemmory Next = null;
        public RefregizMemmory(bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments) : base(MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments)
        {
            Node = new RefregizMemmory(MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT);
 MovementsAStarGreedyHuristicFoundT = MovementsAStarGreedyHuristicTFou;
         IgnoreSelfObjectsT = IgnoreSelfObject;
         UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
         BestMovmentsT = BestMovment;
        PredictHuristicT = PredictHurist;
         OnlySelfT = OnlySel;
         AStarGreedyHuristicT = AStarGreedyHuris;
         ArrangmentsT = Arrangments;

    }
    public void Load()
        {
            if (Node == null) Node = new RefregizMemmory(MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT); ;
            Node.AllDrawNextAccess = null;
            Node.AllDrawCurrentAccess = null;
            try
            {
                FileStream DummyFileStream = new FileStream(SAllDraw, System.IO.FileMode.OpenOrCreate, System.IO.FileAccess.ReadWrite);
                BinaryFormatter Formatters = new BinaryFormatter();
                RefrigtzDLL.AllDraw Dummy = new RefrigtzDLL.AllDraw(MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT); ;
                GalleryStudio.RefregizMemmory Last = null;
                Console.WriteLine("Loading...");
                DummyFileStream.Seek(0, SeekOrigin.Begin);
                while (DummyFileStream.Position < DummyFileStream.Length)
                {
                    Dummy = (RefrigtzDLL.AllDraw)Formatters.Deserialize(DummyFileStream);
                    if (Node.Current == null)
                        Node.Current = Dummy;
                    else
                    {
                        Last = Node;
                        while (Last.Next != null)
                            Last = Last.Next;
                        RefregizMemmory New = new RefregizMemmory(MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT);
                        New.Current = Dummy;
                        Last.AllDrawNextAccess = New;
                    }
                }
                DummyFileStream.Flush();
                DummyFileStream.Close();
            }
            catch (IOException t) { Console.WriteLine(t.Message.ToString()); }
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
        public void AddObject(RefregizMemmory p)
        {
            RefregizMemmory t = new RefregizMemmory(MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT);
            t = p.AllDrawNodeAccess;
            while (t.AllDrawNextAccess != null)
                t = t.AllDrawNextAccess;
            if (t.AllDrawCurrentAccess == null)
                t.AllDrawCurrentAccess = p.AllDrawCurrentAccess;
            else
                t.AllDrawNextAccess = p;
        }
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
        public RefregizMemmory AllDrawNextAccess
        {
            get
            { return Next; }
            set
            { Next = value; }
        }
    }
}
