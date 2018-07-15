using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System.IO;

namespace GalleryStudio
{
    public class RefregitzOperator:RefregizMemmory
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
        RefrigtzDLL.AllDraw Current = null;
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
            //RefrigtzDLL.AllDraw Current = new RefrigtzDLL.AllDraw(MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT);

        }
        public void RewriteAllDrawRec(ref FileStream DummyFileStream,ref BinaryFormatter Formatters, RefregizMemmory t)
        {
            if (t.AllDrawCurrentAccess != null)
            {
                Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);
                if (OrderPlateCurrentAccess == 1)
                {
                    for (int i = 0; i < SodierMidle; i++)
                    {
                        //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);
                        for (int j = 0; j < SolderesOnTable[i].SoldierThinking[0].AStarGreedy.Count; j++)
                        {
                            RewriteAllDrawRec(ref DummyFileStream,  ref Formatters, t.ReterunAstrarGreedysolder(i, j, t));
                        }
                    }
                    for (int i = 0; i < ElefantMidle; i++)
                    {
                        //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);
                        for (int j = 0; j < ElephantOnTable[i].ElefantThinking[0].AStarGreedy.Count; j++)
                        {
                            RewriteAllDrawRec(ref DummyFileStream,  ref Formatters, t.ReterunAstrarGreedyelephant(i, j, t));
                        }
                    }
                    for (int i = 0; i < HourseMidle; i++)
                    {
                        //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                        for (int j = 0; j < HoursesOnTable[i].HourseThinking[0].AStarGreedy.Count; j++)
                        {
                            RewriteAllDrawRec(ref DummyFileStream,  ref Formatters, t.ReterunAstrarGreedyHours(i, j, t));
                        }
                    }
                    for (int i = 0; i < CastleMidle; i++)
                    {
                        //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                        for (int j = 0; j < CastlesOnTable[i].CastleThinking[0].AStarGreedy.Count; j++)
                        {
                            RewriteAllDrawRec(ref DummyFileStream,  ref Formatters, t.ReterunAstrarGreedyCastle(i, j, t));
                        }
                    }
                    for (int i = 0; i < MinisterMidle; i++)
                    {
                        //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                        for (int j = 0; j < MinisterOnTable[i].MinisterThinking[0].AStarGreedy.Count; j++)
                        {
                            RewriteAllDrawRec(ref DummyFileStream,  ref Formatters, t.ReterunAstrarGreedyMinister(i, j, t));
                        }

                    }
                    for (int i = 0; i < KingMidle; i++)
                    {
                        //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                        for (int j = 0; j < KingOnTable[i].KingThinking[0].AStarGreedy.Count; j++)
                        {
                            RewriteAllDrawRec(ref DummyFileStream,  ref Formatters, t.ReterunAstrarGreedyKing(i, j, t));
                        }
                    }
                }
                else
                {
                    for (int i = SodierMidle; i < SodierHigh; i++)
                    {
                        //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);
                        for (int j = 0; j < SolderesOnTable[i].SoldierThinking[0].AStarGreedy.Count; j++)
                        {
                            RewriteAllDrawRec(ref DummyFileStream,  ref Formatters, t.ReterunAstrarGreedysolder(i, j, t));
                        }
                    }
                    for (int i = ElefantMidle; i < ElefantHigh; i++)
                    {
                        //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);
                        for (int j = 0; j < ElephantOnTable[i].ElefantThinking[0].AStarGreedy.Count; j++)
                        {
                            RewriteAllDrawRec(ref DummyFileStream,  ref Formatters, t.ReterunAstrarGreedyelephant(i, j, t));
                        }
                    }
                    for (int i = HourseMidle; i < HourseHight; i++)
                    {
                        //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                        for (int j = 0; j < HoursesOnTable[i].HourseThinking[0].AStarGreedy.Count; j++)
                        {
                            RewriteAllDrawRec(ref DummyFileStream,  ref Formatters, t.ReterunAstrarGreedyHours(i, j, t));
                        }
                    }
                    for (int i = CastleMidle; i < CastleHigh; i++)
                    {
                        //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                        for (int j = 0; j < CastlesOnTable[i].CastleThinking[0].AStarGreedy.Count; j++)
                        {
                            RewriteAllDrawRec(ref DummyFileStream,  ref Formatters, t.ReterunAstrarGreedyCastle(i, j, t));
                        }
                    }
                    for (int i = MinisterMidle; i < MinisterHigh; i++)
                    {
                        //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                        for (int j = 0; j < MinisterOnTable[i].MinisterThinking[0].AStarGreedy.Count; j++)
                        {
                            RewriteAllDrawRec(ref DummyFileStream,  ref Formatters, t.ReterunAstrarGreedyMinister(i, j, t));
                        }

                    }
                    for (int i = KingMidle; i < KingHigh; i++)
                    {
                        //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                        for (int j = 0; j < KingOnTable[i].KingThinking[0].AStarGreedy.Count; j++)
                        {
                            RewriteAllDrawRec(ref DummyFileStream,  ref Formatters, t.ReterunAstrarGreedyKing(i, j, t));
                        }
                    }
                }
            }
            /*while (t != null)
            {
                //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);
                t = t.AllDrawNextAccess;
            }*/
        }
        public void RewriteAllDraw(RefregizMemmory p)
        {
            Current = new RefrigtzDLL.AllDraw(MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT);
            FileStream DummyFileStream = null;
            try
            {
                RefregizMemmory t = p.AllDrawNodeAccess;
                FileInfo DummyFileInfo = new FileInfo(SAllDraw);
                DummyFileInfo.Delete();
                DummyFileStream = new FileStream(SAllDraw, System.IO.FileMode.OpenOrCreate, System.IO.FileAccess.Write);
                BinaryFormatter Formatters = new BinaryFormatter();
                DummyFileStream.Seek(0, SeekOrigin.Begin);

                RewriteAllDrawRec(ref DummyFileStream,  ref Formatters,t);
                
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
        public RefrigtzDLL.AllDraw GetRefregiz(int No)
        {
            FileStream DummyFileStream = null;
            DummyFileStream = new FileStream(SAllDraw, System.IO.FileMode.OpenOrCreate, System.IO.FileAccess.Read);
            int p = 0;
            RefrigtzDLL.AllDraw Dummy = null;
            BinaryFormatter Formatters = new BinaryFormatter();
            DummyFileStream.Seek(0, SeekOrigin.Begin);
            try
            {
                while (p <= No)
                {
                    if (DummyFileStream.Length >= DummyFileStream.Position)
                        Dummy = (RefrigtzDLL.AllDraw)Formatters.Deserialize(DummyFileStream);
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
