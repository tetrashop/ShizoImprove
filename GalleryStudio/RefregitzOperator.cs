using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System.IO;
using RefrigtzDLL;
namespace GalleryStudio
{
    class RefregitzOperator:RefregizMemmory
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
        static GalleryStudio.RefregizMemmory Node;
        AllDraw Current = null;
        GalleryStudio.RefregizMemmory Next = null;
        public RefregitzOperator(bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments) : base(MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments)
        {
            MovementsAStarGreedyHuristicFoundT = MovementsAStarGreedyHuristicTFou;
            IgnoreSelfObjectsT = IgnoreSelfObject;
            UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
            BestMovmentsT = BestMovment;
            PredictHuristicT = PredictHurist;
            OnlySelfT = OnlySel;
            AStarGreedyHuristicT = AStarGreedyHuris;
            ArrangmentsT = Arrangments;

        }
        public void RewriteCusomers(RefregizMemmory p)
        {
            FileStream DummyFileStream = null;
            try
            {
                RefregizMemmory t = p.AllDrawNodeAccess;
                FileInfo DummyFileInfo = new FileInfo(SAllDraw);
                DummyFileInfo.Delete();
                DummyFileStream = new FileStream(SAllDraw, System.IO.FileMode.OpenOrCreate, System.IO.FileAccess.Write);
                BinaryFormatter Formatters = new BinaryFormatter();
                DummyFileStream.Seek(0, SeekOrigin.Begin);
                while (t != null)
                {
                    Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);
                    t = t.AllDrawNextAccess;
                }
                DummyFileStream.Close();
            }
            catch (NullReferenceException o)
            {
                Console.WriteLine(o.Message.ToString());
            }
            catch (IOException o)
            {
                Console.WriteLine(o.Message.ToString());
            }

        }
        public AllDraw GetRefregiz(int No)
        {
            FileStream DummyFileStream = null;
            DummyFileStream = new FileStream(SAllDraw, System.IO.FileMode.OpenOrCreate, System.IO.FileAccess.Read);
            int p = 0;
            AllDraw Dummy = null;
            BinaryFormatter Formatters = new BinaryFormatter();
            DummyFileStream.Seek(0, SeekOrigin.Begin);
            try
            {
                while (p <= No)
                {
                    if (DummyFileStream.Length >= DummyFileStream.Position)
                        Dummy = (AllDraw)Formatters.Deserialize(DummyFileStream);
                    else
                        Dummy = null;
                    p++;
                }
                DummyFileStream.Flush(); DummyFileStream.Close();
            }
            catch (SerializationException t)
            {
                Console.WriteLine(t.Message.ToString());
                Dummy = null;
            }
            return Dummy;
        }
        
    }
}
