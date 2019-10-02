using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO;
namespace Refrigtz
{
    [Serializable]
    public partial class FormTXT : Form
    {
        RefrigtzDLL.AllDraw D = null;
        public FormTXT(RefrigtzDLL.AllDraw TG)
        {
            InitializeComponent();
            D = TG;
        }

        private void TextBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void FormTXT_Load(object sender, EventArgs e)
        {
            /*TextBoxTXT.Text = "";
            if (FormRefrigtz.ErrorTrueMonitorFalse)
            {
                // TextBoxTXT.Text = File.ReadAllText(FormRefrigtz.Root + "\\ErrorProgramRun.txt");
            }
            else
            {
                TextBoxTXT.Text = File.ReadAllText(FormRefrigtz.Root + "\\Database\\Monitor.html");
            }*/
            //backgroundWorkertreeView.RunWorkerAsync();
            CreateTree(D);
            treeViewRefregitzDraw.Update();
        }

        private void treeViewRefregitzDraw_BindingContextChanged(object sender, EventArgs e)
        {
            //CreateTree(D);
            //treeViewRefregitzDraw.Update();

        }

        private void treeViewRefregitzDraw_AfterSelect(object sender, TreeViewEventArgs e)
        {

        }

        private void treeViewRefregitzDraw_ContextMenuStripChanged(object sender, EventArgs e)
        {

        }
        public void CreateTree(RefrigtzDLL.AllDraw Draw)
        {
            Object O = new Object();
            lock (O)
            {
                while (Draw.AStarGreedyString != null)
                    Draw = Draw.AStarGreedyString;
                treeViewRefregitzDraw.BeginUpdate();
                PopulateTreeViewS(0, null, Draw);
                PopulateTreeViewE(0, null, Draw);
                PopulateTreeViewH(0, null, Draw);
                PopulateTreeViewC(0, null, Draw);
                PopulateTreeViewM(0, null, Draw);
                PopulateTreeViewK(0, null, Draw);

                treeViewRefregitzDraw.EndUpdate();
                treeViewRefregitzDraw.ExpandAll();
            }

        }
        private void PopulateTreeViewS(int parentId, TreeNode parentNode, RefrigtzDLL.AllDraw Draw)
        {
            TreeNode childNode = new TreeNode();
            for (int i = 0; i < Draw.SodierHigh; i++)
            {
                if (Draw.SolderesOnTable == null)
                {
                    TreeNode t = new TreeNode();
                    t.Text = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                    t.Name = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                    t.Tag = parentId;
                    if (parentNode == null)
                    {
                        treeViewRefregitzDraw.Nodes.Add(t);
                        childNode = t;
                    }
                    else
                    {
                        parentNode.Nodes.Add(t);
                        childNode = t;
                    }
                    break;
                }
                else
                {
                    if (Draw.SolderesOnTable[i] == null)
                    {
                        TreeNode t = new TreeNode();
                        t.Text = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Name = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Tag = parentId;
                        if (parentNode == null)
                        {
                            treeViewRefregitzDraw.Nodes.Add(t);
                            childNode = t;
                        }
                        else
                        {
                            parentNode.Nodes.Add(t);
                            childNode = t;
                        }

                        PopulateTreeViewS(i, childNode, null);
                    }
                    else
                    {
                        TreeNode t = new TreeNode();
                        t.Text = "SoldierOnTable" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Name = "SoldierOnTable" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Tag = parentId;
                        if (parentNode == null)
                        {
                            treeViewRefregitzDraw.Nodes.Add(t);
                            childNode = t;
                        }
                        else
                        {
                            parentNode.Nodes.Add(t);
                            childNode = t;
                        }
                        TreeNode HuristicSoldier = new TreeNode();
                        for (int j = 0; Draw.SolderesOnTable[i].SoldierThinking != null && Draw.SolderesOnTable[i].SoldierThinking[0] != null && Draw.SolderesOnTable[i].SoldierThinking[0].HuristicListSolder != null && j < Draw.SolderesOnTable[i].SoldierThinking[0].HuristicListSolder.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "HuristicSoldier" + j.ToString() + "_CountHurSo:" + ReturnbCal(Draw.SolderesOnTable[i].SoldierThinking[0], 1, j).ToString();
                            tt.Name = "HuristicSoldier" + j.ToString() + "_CountHurSo:" + ReturnbCal(Draw.SolderesOnTable[i].SoldierThinking[0], 1, j).ToString();
                            tt.Tag = j;
                            if (childNode == null)
                            {
                                treeViewRefregitzDraw.Nodes.Add(tt);
                                HuristicSoldier = tt;
                            }
                            else
                            {
                                childNode.Nodes.Add(tt);
                                HuristicSoldier = tt;
                            }
                        }
                        TreeNode AstarGreedy = new TreeNode();
                        for (int j = 0; Draw.SolderesOnTable[i].SoldierThinking != null && Draw.SolderesOnTable[i].SoldierThinking[0] != null && Draw.SolderesOnTable[i].SoldierThinking[0].AStarGreedy != null && j < Draw.SolderesOnTable[i].SoldierThinking[0].AStarGreedy.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "AstarGreedy" + j.ToString() + "_Order:" + Draw.SolderesOnTable[i].SoldierThinking[0].AStarGreedy[j].OrderP.ToString();
                            tt.Name = "AstarGreedy" + j.ToString() + "_Order:" + Draw.SolderesOnTable[i].SoldierThinking[0].AStarGreedy[j].OrderP.ToString();
                            tt.Tag = j;
                            if (childNode == null)
                            {
                                treeViewRefregitzDraw.Nodes.Add(tt);
                                AstarGreedy = tt;
                            }
                            else
                            {
                                childNode.Nodes.Add(tt);
                                AstarGreedy = tt;
                            }
                            PopulateTreeViewS(j, AstarGreedy, Draw.SolderesOnTable[i].SoldierThinking[0].AStarGreedy[j]);
                            PopulateTreeViewE(j, AstarGreedy, Draw.SolderesOnTable[i].SoldierThinking[0].AStarGreedy[j]);
                            PopulateTreeViewH(j, AstarGreedy, Draw.SolderesOnTable[i].SoldierThinking[0].AStarGreedy[j]);
                            PopulateTreeViewC(j, AstarGreedy, Draw.SolderesOnTable[i].SoldierThinking[0].AStarGreedy[j]);
                            PopulateTreeViewM(j, AstarGreedy, Draw.SolderesOnTable[i].SoldierThinking[0].AStarGreedy[j]);
                            PopulateTreeViewK(j, AstarGreedy, Draw.SolderesOnTable[i].SoldierThinking[0].AStarGreedy[j]);
                        }
                    }
                }
            }
        }
        private void PopulateTreeViewE(int parentId, TreeNode parentNode, RefrigtzDLL.AllDraw Draw)
        {
            TreeNode childNode = new TreeNode();
            for (int i = 0; i < Draw.ElefantHigh; i++)
            {
                if (Draw.SolderesOnTable == null)
                {
                    TreeNode t = new TreeNode();
                    t.Text = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                    t.Name = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                    t.Tag = parentId;
                    if (parentNode == null)
                    {
                        treeViewRefregitzDraw.Nodes.Add(t);
                        childNode = t;
                    }
                    else
                    {
                        parentNode.Nodes.Add(t);
                        childNode = t;
                    }
                    break;
                }
                else
                {
                    if (Draw.ElephantOnTable[i] == null)
                    {
                        TreeNode t = new TreeNode();
                        t.Text = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Name = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Tag = parentId;
                        if (parentNode == null)
                        {
                            treeViewRefregitzDraw.Nodes.Add(t);
                            childNode = t;
                        }
                        else
                        {
                            parentNode.Nodes.Add(t);
                            childNode = t;
                        }

                        PopulateTreeViewE(i, childNode, null);
                    }
                    else
                    {
                        TreeNode t = new TreeNode();
                        t.Text = "ElephantOnTable" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Name = "ElephantOnTable" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Tag = parentId;
                        if (parentNode == null)
                        {
                            treeViewRefregitzDraw.Nodes.Add(t);
                            childNode = t;
                        }
                        else
                        {
                            parentNode.Nodes.Add(t);
                            childNode = t;
                        }
                        TreeNode HuristicElephant = new TreeNode();
                        for (int j = 0; Draw.ElephantOnTable[i].ElefantThinking != null && Draw.ElephantOnTable[i].ElefantThinking[0] != null && Draw.ElephantOnTable[i].ElefantThinking[0].HuristicListElefant != null && j < Draw.ElephantOnTable[i].ElefantThinking[0].HuristicListElefant.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "HuristicElephant" + j.ToString() + "_CountHurEl:" + ReturnbCal(Draw.ElephantOnTable[i].ElefantThinking[0], 2, j).ToString();
                            tt.Name = "HuristicElephant" + j.ToString() + "_CountHurEl:" + ReturnbCal(Draw.ElephantOnTable[i].ElefantThinking[0], 2, j).ToString();
                            tt.Tag = j;
                            if (childNode == null)
                            {
                                treeViewRefregitzDraw.Nodes.Add(tt);
                                HuristicElephant = tt;
                            }
                            else
                            {
                                childNode.Nodes.Add(tt);
                                HuristicElephant = tt;
                            }
                        }
                        TreeNode AstarGreedy = new TreeNode();
                        for (int j = 0; Draw.ElephantOnTable[i].ElefantThinking != null && Draw.ElephantOnTable[i].ElefantThinking[0] != null && Draw.ElephantOnTable[i].ElefantThinking[0].AStarGreedy != null && j < Draw.ElephantOnTable[i].ElefantThinking[0].AStarGreedy.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "AstarGreedy" + j.ToString() + "_Order:" + Draw.ElephantOnTable[i].ElefantThinking[0].AStarGreedy[j].OrderP.ToString();
                            tt.Name = "AstarGreedy" + j.ToString() + "_Order:" + Draw.ElephantOnTable[i].ElefantThinking[0].AStarGreedy[j].OrderP.ToString();
                            tt.Tag = j;

                            if (childNode == null)
                            {
                                treeViewRefregitzDraw.Nodes.Add(tt);
                                AstarGreedy = tt;
                            }
                            else
                            {
                                childNode.Nodes.Add(tt);
                                AstarGreedy = tt;
                            }
                            PopulateTreeViewS(j, AstarGreedy, Draw.ElephantOnTable[i].ElefantThinking[0].AStarGreedy[j]);
                            PopulateTreeViewE(j, AstarGreedy, Draw.ElephantOnTable[i].ElefantThinking[0].AStarGreedy[j]);
                            PopulateTreeViewH(j, AstarGreedy, Draw.ElephantOnTable[i].ElefantThinking[0].AStarGreedy[j]);
                            PopulateTreeViewC(j, AstarGreedy, Draw.ElephantOnTable[i].ElefantThinking[0].AStarGreedy[j]);
                            PopulateTreeViewM(j, AstarGreedy, Draw.ElephantOnTable[i].ElefantThinking[0].AStarGreedy[j]);
                            PopulateTreeViewK(j, AstarGreedy, Draw.ElephantOnTable[i].ElefantThinking[0].AStarGreedy[j]);
                        }

                    }
                }
            }
        }
        private void PopulateTreeViewH(int parentId, TreeNode parentNode, RefrigtzDLL.AllDraw Draw)
        {
            TreeNode childNode = new TreeNode();
            for (int i = 0; i < Draw.HourseHight; i++)
            {
                if (Draw.HoursesOnTable == null)
                {
                    TreeNode t = new TreeNode();
                    t.Text = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                    t.Name = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                    t.Tag = parentId;
                    if (parentNode == null)
                    {
                        treeViewRefregitzDraw.Nodes.Add(t);
                        childNode = t;
                    }
                    else
                    {
                        parentNode.Nodes.Add(t);
                        childNode = t;
                    }
                    break;
                }
                else
                {
                    if (Draw.HoursesOnTable[i] == null)
                    {
                        TreeNode t = new TreeNode();
                        t.Text = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Name = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Tag = parentId;
                        if (parentNode == null)
                        {
                            treeViewRefregitzDraw.Nodes.Add(t);
                            childNode = t;
                        }
                        else
                        {
                            parentNode.Nodes.Add(t);
                            childNode = t;
                        }


                    }
                    else
                    {
                        TreeNode t = new TreeNode();
                        t.Text = "HoursesOnTable" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Name = "HoursesOnTable" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Tag = parentId;
                        if (parentNode == null)
                        {
                            treeViewRefregitzDraw.Nodes.Add(t);
                            childNode = t;
                        }
                        else
                        {
                            parentNode.Nodes.Add(t);
                            childNode = t;
                        }
                        TreeNode HuristicHourse = new TreeNode();
                        for (int j = 0; Draw.HoursesOnTable[i].HourseThinking != null && Draw.HoursesOnTable[i].HourseThinking[0] != null && Draw.HoursesOnTable[i].HourseThinking[0].HuristicListHourse != null && j < Draw.HoursesOnTable[i].HourseThinking[0].HuristicListHourse.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "HuristicHourse" + j.ToString() + "_CountHurHo:" + ReturnbCal(Draw.HoursesOnTable[i].HourseThinking[0], 3, j).ToString();
                            tt.Name = "HuristicHourse" + j.ToString() + "_CountHurHo:" + ReturnbCal(Draw.HoursesOnTable[i].HourseThinking[0], 3, j).ToString();
                            tt.Tag = j;

                            if (childNode == null)
                            {
                                treeViewRefregitzDraw.Nodes.Add(tt);
                                HuristicHourse = tt;
                            }
                            else
                            {
                                childNode.Nodes.Add(tt);
                                HuristicHourse = tt;
                            }
                        }
                        TreeNode AstarGreedy = new TreeNode();
                        for (int j = 0; Draw.HoursesOnTable[i].HourseThinking != null && Draw.HoursesOnTable[i].HourseThinking[0] != null && Draw.HoursesOnTable[i].HourseThinking[0].AStarGreedy != null && j < Draw.HoursesOnTable[i].HourseThinking[0].AStarGreedy.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "AstarGreedy" + j.ToString() + "_Order:" + Draw.HoursesOnTable[i].HourseThinking[0].AStarGreedy[j].OrderP.ToString();
                            tt.Name = "AstarGreedy" + j.ToString() + "_Order:" + Draw.HoursesOnTable[i].HourseThinking[0].AStarGreedy[j].OrderP.ToString();
                            tt.Tag = j;

                            if (childNode == null)
                            {
                                treeViewRefregitzDraw.Nodes.Add(tt);
                                AstarGreedy = tt;
                            }
                            else
                            {
                                childNode.Nodes.Add(tt);
                                AstarGreedy = tt;
                            }


                            PopulateTreeViewS(j, AstarGreedy, Draw.HoursesOnTable[i].HourseThinking[0].AStarGreedy[j]);
                            PopulateTreeViewE(j, AstarGreedy, Draw.HoursesOnTable[i].HourseThinking[0].AStarGreedy[j]);
                            PopulateTreeViewH(j, AstarGreedy, Draw.HoursesOnTable[i].HourseThinking[0].AStarGreedy[j]);
                            PopulateTreeViewC(j, AstarGreedy, Draw.HoursesOnTable[i].HourseThinking[0].AStarGreedy[j]);
                            PopulateTreeViewM(j, AstarGreedy, Draw.HoursesOnTable[i].HourseThinking[0].AStarGreedy[j]);
                            PopulateTreeViewK(j, AstarGreedy, Draw.HoursesOnTable[i].HourseThinking[0].AStarGreedy[j]);
                        }
                    }
                }
            }
        }
        private void PopulateTreeViewC(int parentId, TreeNode parentNode, RefrigtzDLL.AllDraw Draw)
        {
            TreeNode childNode = new TreeNode();
            for (int i = 0; i < Draw.CastleHigh; i++)
            {
                if (Draw.CastlesOnTable == null)
                {
                    TreeNode t = new TreeNode();
                    t.Text = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                    t.Name = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                    t.Tag = parentId;
                    if (parentNode == null)
                    {
                        treeViewRefregitzDraw.Nodes.Add(t);
                        childNode = t;
                    }
                    else
                    {
                        parentNode.Nodes.Add(t);
                        childNode = t;
                    }
                    break;
                }
                else
                {
                    if (Draw.CastlesOnTable[i] == null)
                    {
                        TreeNode t = new TreeNode();
                        t.Text = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Name = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Tag = parentId;
                        if (parentNode == null)
                        {
                            treeViewRefregitzDraw.Nodes.Add(t);
                            childNode = t;
                        }
                        else
                        {
                            parentNode.Nodes.Add(t);
                            childNode = t;
                        }

                    }
                    else
                    {
                        TreeNode t = new TreeNode();
                        t.Text = "CastlesOnTable" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Name = "CastlesOnTable" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Tag = parentId;
                        if (parentNode == null)
                        {
                            treeViewRefregitzDraw.Nodes.Add(t);
                            childNode = t;
                        }
                        else
                        {
                            parentNode.Nodes.Add(t);
                            childNode = t;
                        }
                        TreeNode HuristicCastle = new TreeNode();
                        for (int j = 0; Draw.CastlesOnTable[i].CastleThinking != null && Draw.CastlesOnTable[i].CastleThinking[0] != null && Draw.CastlesOnTable[i].CastleThinking[0].HuristicListCastle != null && j < Draw.CastlesOnTable[i].CastleThinking[0].HuristicListCastle.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "HuristicCastle" + j.ToString() + "_CountHurCa:" + ReturnbCal(Draw.CastlesOnTable[i].CastleThinking[0], 4, j).ToString();
                            tt.Name = "HuristicCastle" + j.ToString() + "_CountHurCa:" + ReturnbCal(Draw.CastlesOnTable[i].CastleThinking[0], 4, j).ToString();
                            tt.Tag = j;

                            if (childNode == null)
                            {
                                treeViewRefregitzDraw.Nodes.Add(tt);
                                HuristicCastle = tt;
                            }
                            else
                            {
                                childNode.Nodes.Add(tt);
                                HuristicCastle = tt;
                            }
                        }
                        TreeNode AstarGreedy = new TreeNode();
                        for (int j = 0; Draw.CastlesOnTable[i].CastleThinking != null && Draw.CastlesOnTable[i].CastleThinking[0] != null && Draw.CastlesOnTable[i].CastleThinking[0].AStarGreedy != null && j < Draw.CastlesOnTable[i].CastleThinking[0].AStarGreedy.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "AstarGreedy" + j.ToString() + "_Order:" + Draw.CastlesOnTable[i].CastleThinking[0].AStarGreedy[j].OrderP.ToString();
                            tt.Name = "AstarGreedy" + j.ToString() + "_Order:" + Draw.CastlesOnTable[i].CastleThinking[0].AStarGreedy[j].OrderP.ToString();
                            tt.Tag = j;

                            if (childNode == null)
                            {
                                treeViewRefregitzDraw.Nodes.Add(tt);
                                AstarGreedy = tt;
                            }
                            else
                            {
                                childNode.Nodes.Add(tt);
                                AstarGreedy = tt;
                            }
                            PopulateTreeViewS(j, AstarGreedy, Draw.CastlesOnTable[i].CastleThinking[0].AStarGreedy[j]);
                            PopulateTreeViewE(j, AstarGreedy, Draw.CastlesOnTable[i].CastleThinking[0].AStarGreedy[j]);
                            PopulateTreeViewH(j, AstarGreedy, Draw.CastlesOnTable[i].CastleThinking[0].AStarGreedy[j]);
                            PopulateTreeViewC(j, AstarGreedy, Draw.CastlesOnTable[i].CastleThinking[0].AStarGreedy[j]);
                            PopulateTreeViewM(j, AstarGreedy, Draw.CastlesOnTable[i].CastleThinking[0].AStarGreedy[j]);
                            PopulateTreeViewK(j, AstarGreedy, Draw.CastlesOnTable[i].CastleThinking[0].AStarGreedy[j]);
                        }
                    }
                }
            }
        }
        int ReturnbCal(RefrigtzDLL.ThinkingChess t, int Kind, int j)
        {
            if (Kind == 1)
            {
                return
                                t.HuristicListSolder[j][0] +
                                    t.HuristicListSolder[j][1] +
                                    t.HuristicListSolder[j][2] +
                                    t.HuristicListSolder[j][3] +
                                    t.HuristicListSolder[j][4] +
                                    t.HuristicListSolder[j][5] +
                                    t.HuristicListSolder[j][6] +
                                t.HuristicListSolder[j][7] +
                                t.HuristicListSolder[j][8] +
                                t.HuristicListSolder[j][9];
            }

            else
                if (Kind == 2)
            {
                return t.HuristicListElefant[j][0] +
                t.HuristicListElefant[j][1] +
                t.HuristicListElefant[j][2] +
                t.HuristicListElefant[j][3] +
                t.HuristicListElefant[j][4] +
                t.HuristicListElefant[j][5] +
                t.HuristicListElefant[j][6] +
                t.HuristicListElefant[j][7] +
                t.HuristicListElefant[j][8] +
                t.HuristicListElefant[j][9];
            }
            else if (Kind == 3)
            {
                return t.HuristicListHourse[j][0] +
                               t.HuristicListHourse[j][1] +
                               t.HuristicListHourse[j][2] +
                               t.HuristicListHourse[j][3] +
                               t.HuristicListHourse[j][4] +
                               t.HuristicListHourse[j][5] +
                               t.HuristicListHourse[j][6] +
                               t.HuristicListHourse[j][7] +
                               t.HuristicListHourse[j][8] +
                               t.HuristicListHourse[j][9];
            }
            else if (Kind == 4)
            {
                return t.HuristicListCastle[j][0] +
      t.HuristicListCastle[j][1] +
      t.HuristicListCastle[j][2] +
      t.HuristicListCastle[j][3] +
      t.HuristicListCastle[j][4] +
      t.HuristicListCastle[j][5] +
      t.HuristicListCastle[j][6] +
      t.HuristicListCastle[j][7] +
      t.HuristicListCastle[j][8] +
      t.HuristicListCastle[j][9];
            }
            else if (Kind == 5)
            {
                return t.HuristicListMinister[j][0] +
   t.HuristicListMinister[j][1] +
   t.HuristicListMinister[j][2] +
   t.HuristicListMinister[j][3] +
   t.HuristicListMinister[j][4] +
   t.HuristicListMinister[j][5] +
   t.HuristicListMinister[j][6] +
   t.HuristicListMinister[j][7] +
   t.HuristicListMinister[j][8] +
   t.HuristicListMinister[j][9];
            }
            else
                if (Kind == 6)
            {
                return t.HuristicListKing[j][0] +
    t.HuristicListKing[j][1] +
    t.HuristicListKing[j][2] +
    t.HuristicListKing[j][3] +
    t.HuristicListKing[j][4] +
    t.HuristicListKing[j][5] +
    t.HuristicListKing[j][6] +
    t.HuristicListKing[j][7] +
    t.HuristicListKing[j][8] +
    t.HuristicListKing[j][9];
            }
            return int.MinValue;
        }
        private void PopulateTreeViewM(int parentId, TreeNode parentNode, RefrigtzDLL.AllDraw Draw)
        {
            TreeNode childNode = new TreeNode();
            for (int i = 0; i < Draw.MinisterHigh; i++)
            {
                if (Draw.MinisterOnTable == null)
                {
                    TreeNode t = new TreeNode();
                    t.Text = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                    t.Name = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                    t.Tag = parentId;
                    if (parentNode == null)
                    {
                        treeViewRefregitzDraw.Nodes.Add(t);
                        childNode = t;
                    }
                    else
                    {
                        parentNode.Nodes.Add(t);
                        childNode = t;
                    }
                    break;
                }
                else
                {
                    if (Draw.MinisterOnTable[i] == null)
                    {
                        TreeNode t = new TreeNode();
                        t.Text = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Name = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Tag = parentId;
                        if (parentNode == null)
                        {
                            treeViewRefregitzDraw.Nodes.Add(t);
                            childNode = t;
                        }
                        else
                        {
                            parentNode.Nodes.Add(t);
                            childNode = t;
                        }


                    }
                    else
                    {
                        TreeNode t = new TreeNode();
                        t.Text = "MinisterOnTable" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Name = "MinisterOnTable" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Tag = parentId;
                        if (parentNode == null)
                        {
                            treeViewRefregitzDraw.Nodes.Add(t);
                            childNode = t;
                        }
                        else
                        {
                            parentNode.Nodes.Add(t);
                            childNode = t;
                        }
                        TreeNode HuristicMinister = new TreeNode();
                        for (int j = 0; Draw.MinisterOnTable[i].MinisterThinking != null && Draw.MinisterOnTable[i].MinisterThinking[0] != null && Draw.MinisterOnTable[i].MinisterThinking[0].HuristicListMinister != null && j < Draw.MinisterOnTable[i].MinisterThinking[0].HuristicListMinister.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "HuristicMinister" + j.ToString() + "_CountHurMi:" + ReturnbCal(Draw.MinisterOnTable[i].MinisterThinking[0], 5, j).ToString();
                            tt.Name = "HuristicMinister" + j.ToString() + "_CountHurMi:" + ReturnbCal(Draw.MinisterOnTable[i].MinisterThinking[0], 5, j).ToString();
                            tt.Tag = j;

                            if (childNode == null)
                            {
                                treeViewRefregitzDraw.Nodes.Add(tt);
                                HuristicMinister = tt;
                            }
                            else
                            {
                                childNode.Nodes.Add(tt);
                                HuristicMinister = tt;
                            }
                        }
                        TreeNode AstarGreedy = new TreeNode();
                        for (int j = 0; Draw.MinisterOnTable[i].MinisterThinking != null && Draw.MinisterOnTable[i].MinisterThinking[0] != null && Draw.MinisterOnTable[i].MinisterThinking[0].AStarGreedy != null && j < Draw.MinisterOnTable[i].MinisterThinking[0].AStarGreedy.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "AstarGreedy" + j.ToString() + "_Order:" + Draw.MinisterOnTable[i].MinisterThinking[0].AStarGreedy[j].OrderP.ToString();
                            tt.Name = "AstarGreedy" + j.ToString() + "_Order:" + Draw.MinisterOnTable[i].MinisterThinking[0].AStarGreedy[j].OrderP.ToString();
                            tt.Tag = j;

                            if (childNode == null)
                            {
                                treeViewRefregitzDraw.Nodes.Add(tt);
                                AstarGreedy = tt;
                            }
                            else
                            {
                                childNode.Nodes.Add(tt);
                                AstarGreedy = tt;
                            }
                            PopulateTreeViewS(j, AstarGreedy, Draw.MinisterOnTable[i].MinisterThinking[0].AStarGreedy[j]);
                            PopulateTreeViewE(j, AstarGreedy, Draw.MinisterOnTable[i].MinisterThinking[0].AStarGreedy[j]);
                            PopulateTreeViewH(j, AstarGreedy, Draw.MinisterOnTable[i].MinisterThinking[0].AStarGreedy[j]);
                            PopulateTreeViewC(j, AstarGreedy, Draw.MinisterOnTable[i].MinisterThinking[0].AStarGreedy[j]);
                            PopulateTreeViewM(j, AstarGreedy, Draw.MinisterOnTable[i].MinisterThinking[0].AStarGreedy[j]);
                            PopulateTreeViewK(j, AstarGreedy, Draw.MinisterOnTable[i].MinisterThinking[0].AStarGreedy[j]);
                        }
                    }
                }
            }
        }
        private void PopulateTreeViewK(int parentId, TreeNode parentNode, RefrigtzDLL.AllDraw Draw)
        {
            TreeNode childNode = new TreeNode();
            for (int i = 0; i < Draw.KingHigh; i++)
            {
                if (Draw.KingOnTable == null)
                {
                    TreeNode t = new TreeNode();
                    t.Text = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                    t.Name = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                    t.Tag = parentId;
                    if (parentNode == null)
                    {
                        treeViewRefregitzDraw.Nodes.Add(t);
                        childNode = t;
                    }
                    else
                    {
                        parentNode.Nodes.Add(t);
                        childNode = t;
                    }
                    break;
                }
                else
                {
                    if (Draw.KingOnTable[i] == null)
                    {
                        TreeNode t = new TreeNode();
                        t.Text = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Name = "NULL" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Tag = parentId;
                        if (parentNode == null)
                        {
                            treeViewRefregitzDraw.Nodes.Add(t);
                            childNode = t;
                        }
                        else
                        {
                            parentNode.Nodes.Add(t);
                            childNode = t;
                        }

                    }
                    else
                    {
                        TreeNode t = new TreeNode();
                        t.Text = "KingOnTable" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Name = "KingOnTable" + i.ToString() + ":Order=" + Draw.OrderP.ToString();
                        t.Tag = parentId;
                        if (parentNode == null)
                        {
                            treeViewRefregitzDraw.Nodes.Add(t);
                            childNode = t;
                        }
                        else
                        {
                            parentNode.Nodes.Add(t);
                            childNode = t;
                        }
                        TreeNode HuristicKing = new TreeNode();
                        for (int j = 0; Draw.KingOnTable[i].KingThinking != null && Draw.KingOnTable[i].KingThinking[0] != null && Draw.KingOnTable[i].KingThinking[0].HuristicListKing != null && j < Draw.KingOnTable[i].KingThinking[0].HuristicListKing.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "HuristicKing" + j.ToString() + "_Order:" + ReturnbCal(Draw.KingOnTable[i].KingThinking[0], 6, j).ToString();
                            tt.Name = "HuristicKing" + j.ToString() + "_Order:" + ReturnbCal(Draw.KingOnTable[i].KingThinking[0], 6, j).ToString();
                            tt.Tag = j;

                            if (childNode == null)
                            {
                                treeViewRefregitzDraw.Nodes.Add(tt);
                                HuristicKing = tt;
                            }
                            else
                            {
                                childNode.Nodes.Add(tt);
                                HuristicKing = tt;
                            }
                        }
                        TreeNode AstarGreedy = new TreeNode();
                        for (int j = 0; Draw.KingOnTable[i].KingThinking != null && Draw.KingOnTable[i].KingThinking[0] != null && Draw.KingOnTable[i].KingThinking[0].AStarGreedy != null && j < Draw.KingOnTable[i].KingThinking[0].AStarGreedy.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "AstarGreedy" + j.ToString() + "_Order:" + Draw.KingOnTable[i].KingThinking[0].AStarGreedy[j].OrderP.ToString();
                            tt.Name = "AstarGreedy" + j.ToString() + "_Order:" + Draw.KingOnTable[i].KingThinking[0].AStarGreedy[j].OrderP.ToString();
                            tt.Tag = j;

                            if (childNode == null)
                            {
                                treeViewRefregitzDraw.Nodes.Add(tt);
                                AstarGreedy = tt;
                            }
                            else
                            {
                                childNode.Nodes.Add(tt);
                                AstarGreedy = tt;
                            }
                            PopulateTreeViewS(j, AstarGreedy, Draw.KingOnTable[i].KingThinking[0].AStarGreedy[j]);
                            PopulateTreeViewE(j, AstarGreedy, Draw.KingOnTable[i].KingThinking[0].AStarGreedy[j]);
                            PopulateTreeViewH(j, AstarGreedy, Draw.KingOnTable[i].KingThinking[0].AStarGreedy[j]);
                            PopulateTreeViewC(j, AstarGreedy, Draw.KingOnTable[i].KingThinking[0].AStarGreedy[j]);
                            PopulateTreeViewM(j, AstarGreedy, Draw.KingOnTable[i].KingThinking[0].AStarGreedy[j]);
                            PopulateTreeViewK(j, AstarGreedy, Draw.KingOnTable[i].KingThinking[0].AStarGreedy[j]);
                        }
                    }
                }
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {


        }

        private void backgroundWorkertreeView_DoWork(object sender, DoWorkEventArgs e)
        {
            do
            {
                treeViewRefregitzDraw.Nodes.Clear();
                CreateTree(D);
                treeViewRefregitzDraw.Update();
                //System.Threading.Thread.Sleep(2000);
            } while (true);
        }

        private void treeViewRefregitzDraw_ControlAdded(object sender, ControlEventArgs e)
        {

        }

        private void treeViewRefregitzDraw_MouseClick(object sender, MouseEventArgs e)
        {
            treeViewRefregitzDraw.Nodes.Clear();
            CreateTree(D);
            //treeViewRefregitzDraw.Update();

        }
    }
}
