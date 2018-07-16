using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System.IO;
namespace GalleryStudio
{
    public class RefregitzOperator//:RefregizMemmory
    {


        public bool MovementsAStarGreedyHuristicFoundT = false;
        public bool IgnoreSelfObjectsT = false;
        public bool UsePenaltyRegardMechnisamT = true;
        public bool BestMovmentsT = false;
        public bool PredictHuristicT = true;
        public bool OnlySelfT = false;
        public bool AStarGreedyHuristicT = false;
        public bool ArrangmentsT = false;
        public static String Root = System.IO.Path.GetDirectoryName(Environment.GetCommandLineArgs()[0]);

        const string SAllDraw = "AllDraw.asd";
        static GalleryStudio.RefregizMemmory Node;
        RefrigtzDLL.AllDraw Current = null;
        GalleryStudio.RefregizMemmory Next = null;
        int Kind = -1;
        static void Log(Exception ex)
        {
            try
            {
                Object a = new Object();
                lock (a)
                {
                    string stackTrace = ex.ToString();
                    File.AppendAllText(Root + "\\ErrorProgramRun.txt", stackTrace + ": On" + DateTime.Now.ToString()); // path of file where stack trace will be stored.
                }
            }
            catch (Exception t) { Log(t); }
        }
        public RefregitzOperator(bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments//) : base(MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments
            )
        {
            //MovementsAStarGreedyHuristicFoundT = MovementsAStarGreedyHuristicTFou;
            IgnoreSelfObjectsT = IgnoreSelfObject;
            UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
            BestMovmentsT = BestMovment;
            PredictHuristicT = PredictHurist;
            OnlySelfT = OnlySel;
            AStarGreedyHuristicT = AStarGreedyHuris;
            ArrangmentsT = Arrangments;
            RefrigtzDLL.AllDraw Current = new RefrigtzDLL.AllDraw(MovementsAStarGreedyHuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHuristicT, OnlySelfT, AStarGreedyHuristicT, ArrangmentsT);

        }
        async void RewriteAllDrawRec(RefregizMemmory t)
        {
            try
            {
                if (t.AllDrawCurrentAccess != null)
                {

                    //Kind = t.Kind;
                    if (t.OrderPlateCurrentAccess == 1)
                    {
                        //if (Kind == 1)
                        {
                            for (int i = 0; i < Current.SodierMidle; i++)
                            {
                                //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);
                                for (int j = 0; j < Current.SolderesOnTable[i].SoldierThinking[0].AStarGreedy.Count; j++)
                                {
                                    t.iii = i;
                                    t.jjj=j;
                                    RewriteAllDrawRec(t.ReterunAstrarGreedysolder(i, j, t));
                                }
                            }
                        }
                        //else if (Kind == 2)
                        {
                            for (int i = 0; i < Current.ElefantMidle; i++)
                            {
                                //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);
                                for (int j = 0; j < Current.ElephantOnTable[i].ElefantThinking[0].AStarGreedy.Count; j++)
                                {
                                    t.iii = i;
                                    t.jjj=j;
                                    RewriteAllDrawRec(t.ReterunAstrarGreedyelephant(i, j, t));
                                }
                            }
                        }
                        //else if (Kind == 3)
                        {
                            for (int i = 0; i < Current.HourseMidle; i++)
                            {
                                //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                                for (int j = 0; j < Current.HoursesOnTable[i].HourseThinking[0].AStarGreedy.Count; j++)
                                {
                                    t.iii = i;
                                    t.jjj=j;
                                    RewriteAllDrawRec(t.ReterunAstrarGreedyHours(i, j, t));
                                }
                            }
                        }
                        //else if (Kind == 4)
                        {
                            for (int i = 0; i < Current.CastleMidle; i++)
                            {
                                //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                                for (int j = 0; j < Current.CastlesOnTable[i].CastleThinking[0].AStarGreedy.Count; j++)
                                {
                                    t.iii = i;
                                    t.jjj=j;
                                    RewriteAllDrawRec(t.ReterunAstrarGreedyCastle(i, j, t));
                                }
                            }
                        }
                        // else if (Kind == 5)
                        {
                            for (int i = 0; i < Current.MinisterMidle; i++)
                            {
                                //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                                for (int j = 0; j < Current.MinisterOnTable[i].MinisterThinking[0].AStarGreedy.Count; j++)
                                {
                                    t.iii = i;
                                    t.jjj=j;
                                    RewriteAllDrawRec(t.ReterunAstrarGreedyMinister(i, j, t));
                                }

                            }
                        }
                        //else if (Kind == 6)
                        {
                            for (int i = 0; i < Current.KingMidle; i++)
                            {
                                //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                                for (int j = 0; j < Current.KingOnTable[i].KingThinking[0].AStarGreedy.Count; j++)
                                {
                                    t.iii = i;
                                    t.jjj=j;
                                    RewriteAllDrawRec(t.ReterunAstrarGreedyKing(i, j, t));
                                }
                            }
                        }
                    }
                    else
                    {
                        //if (Kind == 1)
                        {
                            for (int i = Current.SodierMidle; i < Current.SodierHigh; i++)
                            {
                                //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);
                                for (int j = 0; j < Current.SolderesOnTable[i].SoldierThinking[0].AStarGreedy.Count; j++)
                                {
                                    t.iii = i;
                                    t.jjj=j;
                                    RewriteAllDrawRec(t.ReterunAstrarGreedysolder(i, j, t));
                                }
                            }
                        }
                        //else if (Kind == 2)
                        {

                            for (int i = Current.ElefantMidle; i < Current.ElefantHigh; i++)
                            {
                                //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);
                                for (int j = 0; j < Current.ElephantOnTable[i].ElefantThinking[0].AStarGreedy.Count; j++)
                                {
                                    t.iii = i;
                                    t.jjj=j;
                                    RewriteAllDrawRec(t.ReterunAstrarGreedyelephant(i, j, t));
                                }
                            }
                        }
                        //else if (Kind == 3)
                        {

                            for (int i = Current.HourseMidle; i < Current.HourseHight; i++)
                            {
                                //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                                for (int j = 0; j < Current.HoursesOnTable[i].HourseThinking[0].AStarGreedy.Count; j++)
                                {
                                    t.iii = i;
                                    t.jjj=j;
                                    RewriteAllDrawRec(t.ReterunAstrarGreedyHours(i, j, t));
                                }
                            }
                        }
                        //else if (Kind == 4)
                        {

                            for (int i = Current.CastleMidle; i < Current.CastleHigh; i++)
                            {
                                //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                                for (int j = 0; j < Current.CastlesOnTable[i].CastleThinking[0].AStarGreedy.Count; j++)
                                {
                                    t.iii = i;
                                    t.jjj=j;
                                    RewriteAllDrawRec(t.ReterunAstrarGreedyCastle(i, j, t));
                                }
                            }
                        }
                        //else if (Kind == 5)
                        {
                            for (int i = Current.MinisterMidle; i < Current.MinisterHigh; i++)
                            {
                                //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                                for (int j = 0; j < Current.MinisterOnTable[i].MinisterThinking[0].AStarGreedy.Count; j++)
                                {
                                    t.iii = i;
                                    t.jjj=j;
                                    RewriteAllDrawRec(t.ReterunAstrarGreedyMinister(i, j, t));
                                }

                            }
                        }
                        // else if (Kind == 6)
                        {
                            for (int i = Current.KingMidle; i < Current.MinisterHigh; i++)
                            {
                                //Formatters.Serialize(DummyFileStream, t.AllDrawCurrentAccess);

                                for (int j = 0; j < Current.KingOnTable[i].KingThinking[0].AStarGreedy.Count; j++)
                                {
                                    t.iii = i;
                                    t.jjj = j;
                                    RewriteAllDrawRec(t.ReterunAstrarGreedyKing(i, j, t));
                                }
                            }
                        }
                    }
                }
            }
            catch (Exception tt)
            {
                Log(tt);
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
                RewriteAllDrawRec(t);

                FileInfo DummyFileInfo = new FileInfo(SAllDraw);
                DummyFileInfo.Delete();
                DummyFileStream = new FileStream(SAllDraw, System.IO.FileMode.OpenOrCreate, System.IO.FileAccess.Write);
                BinaryFormatter Formatters = new BinaryFormatter();
                DummyFileStream.Seek(0, SeekOrigin.Begin);

                Formatters.Serialize(DummyFileStream, t);


                DummyFileStream.Flush(); DummyFileStream.Close();
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
