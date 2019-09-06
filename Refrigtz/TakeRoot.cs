using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.IO;

namespace Refrigtz
{
    [Serializable]
    public class TakeRoot
    {
        public RefrigtzDLL.AllDraw t = null;
        public QuantumRefrigiz.AllDraw tt = null;
        static void Log(Exception ex)
        {
            try
            {
                Object a = new Object();
                lock (a)
                {
                    string stackTrace = ex.ToString();
                    File.AppendAllText(FormRefrigtz.Root + "\\ErrorProgramRun.txt", stackTrace + ": On" + DateTime.Now.ToString()); // path of file where stack trace will be stored.
                }
            }
            catch (Exception t) { Log(t); }
        }

        public bool Load(bool Quantum,FormRefrigtz Curent, ref bool LoadTree, bool MovementsAStarGreedyHuristicFound, bool IInoreSelfObjects, bool UsePenaltyRegardMechnisam, bool BestMovments, bool PredictHuristic, bool OnlySelf, bool AStarGreedyHuristic, bool ArrangmentsChanged)
        {
            bool DrawDrawen = false;
            //Load Middle Targets.
            try
            {
                if (File.Exists("AllDraw.asd"))
                {
                    if (FormRefrigtz.MovmentsNumber >= 0)
                    {
                        if (!Quantum)
                        {
                            GalleryStudio.RefregizMemmory tr = new GalleryStudio.RefregizMemmory(MovementsAStarGreedyHuristicFound, IInoreSelfObjects, UsePenaltyRegardMechnisam, BestMovments, PredictHuristic, OnlySelf, AStarGreedyHuristic, ArrangmentsChanged);
                            t = tr.Load(Quantum, FormRefrigtz.OrderPlate);
                            if (t != null)
                            {
                                Curent.Draw = t;

                                LoadTree = true;
                                bool FOUND = false;

                                Curent.Draw = Curent.RootFound();

                                RefrigtzDLL.AllDraw THIS = null;

                               // Curent.SetDrawFounding(ref FOUND, ref THIS, true);
                                DrawDrawen = true;

                                System.Windows.Forms.MessageBox.Show("Load Completed.");
                            }
                        }
                        else
                        {
                            GalleryStudio.RefregizMemmory tr = new GalleryStudio.RefregizMemmory(MovementsAStarGreedyHuristicFound, IInoreSelfObjects, UsePenaltyRegardMechnisam, BestMovments, PredictHuristic, OnlySelf, AStarGreedyHuristic, ArrangmentsChanged);
                            tt = tr.LoadQ(Quantum, FormRefrigtz.OrderPlate);
                            if (t != null)
                            {
                               
                                Curent.DrawQ = tt;

                                LoadTree = true;
                                bool FOUND = false;

                                Curent.DrawQ = Curent.RootFoundQ();

                                QuantumRefrigiz.AllDraw THISQ = null;
                               // Curent.SetDrawFounding(ref FOUND, ref THISQ, true);
                                DrawDrawen = true;

                                System.Windows.Forms.MessageBox.Show("Load Completed.");
                            }
                        }
                    }
                    File.Delete("AllDraw.asd");
                }
            }
            catch (Exception t) { Log(t); }
            return DrawDrawen;
        }
        public bool Save(bool Quantum, FormRefrigtz Curent, ref bool LoadTree, bool MovementsAStarGreedyHuristicFound, bool IInoreSelfObjects, bool UsePenaltyRegardMechnisam, bool BestMovments, bool PredictHuristic, bool OnlySelf, bool AStarGreedyHuristic, bool ArrangmentsChanged)
        {
            try
            {
                if (!File.Exists("AllDraw.asd"))
                {
                    GalleryStudio.RefregizMemmory rt = new GalleryStudio.RefregizMemmory(MovementsAStarGreedyHuristicFound, IInoreSelfObjects, UsePenaltyRegardMechnisam, BestMovments, PredictHuristic, OnlySelf, AStarGreedyHuristic, ArrangmentsChanged
                        );
                    if (!Quantum)
                    {
                        if (Curent.Draw != null)
                        {
                            Curent.Draw = Curent.RootFound();
                            rt.AllDrawCurrentAccess = Curent.Draw;
                            rt.RewriteAllDraw(FormRefrigtz.OrderPlate);
                            RefrigtzDLL.AllDraw.DrawTable = false;
                            Curent.SetBoxText("\r\nSaved Completed.");
                            Curent.RefreshBoxText();
                            //pictureBoxRefrigtz.SendToBack();
                            //pictureBoxTimerGray.SendToBack();
                            //pictureBoxTimerBrown.SendToBack();
                            //MessageBox.Show("Saved Completed.");
                        }
                    }
                    else {
                        if (Curent.DrawQ != null)
                        {
                            Curent.DrawQ = Curent.RootFoundQ();
                            rt.AllDrawCurrentAccessQ = Curent.DrawQ;
                            rt.RewriteAllDrawQ(FormRefrigtz.OrderPlate);
                            QuantumRefrigiz.AllDraw.DrawTable = false;
                            Curent.SetBoxText("\r\nSaved Completed.");
                            Curent.RefreshBoxText();
                            //pictureBoxRefrigtz.SendToBack();
                            //pictureBoxTimerGray.SendToBack();
                            //pictureBoxTimerBrown.SendToBack();
                            //MessageBox.Show("Saved Completed.");
                        }
                    }
                }
                else
                      if (File.Exists("AllDraw.asd"))
                {
                    File.Delete("AllDraw.asd");
                    GalleryStudio.RefregizMemmory rt = new GalleryStudio.RefregizMemmory(MovementsAStarGreedyHuristicFound, IInoreSelfObjects, UsePenaltyRegardMechnisam, BestMovments, PredictHuristic, OnlySelf, AStarGreedyHuristic, ArrangmentsChanged
                        );
                    //"Universal Root Founding";
                    if (Curent.Draw != null)
                    {
                        Curent.Draw = Curent.RootFound();
                        rt.AllDrawCurrentAccess = Curent.Draw;
                        rt.RewriteAllDraw(FormRefrigtz.OrderPlate);
                        RefrigtzDLL.AllDraw.DrawTable = false;
                        Curent.SetBoxText("\r\nSaved Completed.");
                        Curent.RefreshBoxText();
                        //pictureBoxRefrigtz.SendToBack();
                        //pictureBoxTimerGray.SendToBack();
                        //pictureBoxTimerBrown.SendToBack();
                        //MessageBox.Show("Saved Completed.");
                    }
                }
                return true;
            }
            catch (Exception t)
            {
                Log(t);
                return false;
            }
        }
    }
}

