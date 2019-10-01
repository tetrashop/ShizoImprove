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
            CreateTree(D);
            treeViewRefregitzDraw.Update();
        }

        private void treeViewRefregitzDraw_BindingContextChanged(object sender, EventArgs e)
        {

        }

        private void treeViewRefregitzDraw_AfterSelect(object sender, TreeViewEventArgs e)
        {

        }

        private void treeViewRefregitzDraw_ContextMenuStripChanged(object sender, EventArgs e)
        {

        }
        public void CreateTree(RefrigtzDLL.AllDraw Draw)
        {
            while (Draw.AStarGreedyString != null)
                Draw = Draw.AStarGreedyString;
            PopulateTreeViewS(0, null, Draw);
            PopulateTreeViewE(0, null, Draw);
            PopulateTreeViewH(0, null, Draw);
            PopulateTreeViewC(0, null, Draw);
            PopulateTreeViewM(0, null, Draw);
            PopulateTreeViewK(0, null, Draw);
        }
        private void PopulateTreeViewS(int parentId, TreeNode parentNode, RefrigtzDLL.AllDraw Draw)
        {
            TreeNode childNode = new TreeNode();
            for (int i = 0; i < Draw.SodierHigh; i++)
            {
                if (Draw.SolderesOnTable == null)
                {
                    TreeNode t = new TreeNode();
                    t.Text = "NULL" + i.ToString();
                    t.Name = "NULL" + i.ToString();
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
                        t.Text = "NULL" + i.ToString();
                        t.Name = "NULL" + i.ToString();
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
                        t.Text = "SoldierOnTable" + i.ToString();
                        t.Name = "SoldierOnTable" + i.ToString();
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
                        TreeNode AstarGreedy = new TreeNode();
                        for (int j = 0; Draw.SolderesOnTable[i].SoldierThinking != null && Draw.SolderesOnTable[i].SoldierThinking[0] != null && Draw.SolderesOnTable[i].SoldierThinking[0].AStarGreedy != null && j < Draw.SolderesOnTable[i].SoldierThinking[0].AStarGreedy.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "AstarGreedy" + j.ToString();
                            tt.Name = "AstarGreedy" + j.ToString();
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
                    t.Text = "NULL" + i.ToString();
                    t.Name = "NULL" + i.ToString();
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
                        t.Text = "NULL" + i.ToString();
                        t.Name = "NULL" + i.ToString();
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
                        t.Text = "ElephantOnTable" + i.ToString();
                        t.Name = "ElephantOnTable" + i.ToString();
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
                        TreeNode AstarGreedy = new TreeNode();
                        for (int j = 0; Draw.ElephantOnTable[i].ElefantThinking != null && Draw.ElephantOnTable[i].ElefantThinking[0] != null && Draw.ElephantOnTable[i].ElefantThinking[0].AStarGreedy != null && j < Draw.ElephantOnTable[i].ElefantThinking[0].AStarGreedy.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "AstarGreedy" + j.ToString();
                            tt.Name = "AstarGreedy" + j.ToString();
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
                             PopulateTreeViewE(j, AstarGreedy, Draw.ElephantOnTable[i].ElefantThinking[0].AStarGreedy[j]);
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
                if (Draw.HourseHight == null)
                {
                    TreeNode t = new TreeNode();
                    t.Text = "NULL" + i.ToString();
                    t.Name = "NULL" + i.ToString();
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
                        t.Text = "NULL" + i.ToString();
                        t.Name = "NULL" + i.ToString();
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
                        t.Text = "HoursesOnTable" + i.ToString();
                        t.Name = "HoursesOnTable" + i.ToString();
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
                        TreeNode AstarGreedy = new TreeNode();
                        for (int j = 0; Draw.HoursesOnTable[i].HourseThinking != null && Draw.HoursesOnTable[i].HourseThinking[0] != null && Draw.HoursesOnTable[i].HourseThinking[0].AStarGreedy != null && j < Draw.HoursesOnTable[i].HourseThinking[0].AStarGreedy.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "AstarGreedy" + j.ToString();
                            tt.Name = "AstarGreedy" + j.ToString();
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
                            PopulateTreeViewH(j, AstarGreedy, Draw.HoursesOnTable[i].HourseThinking[0].AStarGreedy[j]);
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
                    t.Text = "NULL" + i.ToString();
                    t.Name = "NULL" + i.ToString();
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
                        t.Text = "NULL" + i.ToString();
                        t.Name = "NULL" + i.ToString();
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
                        t.Text = "CastlesOnTable" + i.ToString();
                        t.Name = "CastlesOnTable" + i.ToString();
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
                        TreeNode AstarGreedy = new TreeNode();
                        for (int j = 0; Draw.CastlesOnTable[i].CastleThinking != null && Draw.CastlesOnTable[i].CastleThinking[0] != null && Draw.CastlesOnTable[i].CastleThinking[0].AStarGreedy != null && j < Draw.CastlesOnTable[i].CastleThinking[0].AStarGreedy.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "AstarGreedy" + j.ToString();
                            tt.Name = "AstarGreedy" + j.ToString();
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
                             PopulateTreeViewH(j, AstarGreedy, Draw.CastlesOnTable[i].CastleThinking[0].AStarGreedy[j]);
                        }
                    }
                }
            }
        }
        private void PopulateTreeViewM(int parentId, TreeNode parentNode, RefrigtzDLL.AllDraw Draw)
        {
            TreeNode childNode = new TreeNode();
            for (int i = 0; i < Draw.MinisterHigh; i++)
            {
                if (Draw.MinisterOnTable == null)
                {
                    TreeNode t = new TreeNode();
                    t.Text = "NULL" + i.ToString();
                    t.Name = "NULL" + i.ToString();
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
                        t.Text = "NULL" + i.ToString();
                        t.Name = "NULL" + i.ToString();
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
                        t.Text = "MinisterOnTable" + i.ToString();
                        t.Name = "MinisterOnTable" + i.ToString();
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
                        TreeNode AstarGreedy = new TreeNode();
                        for (int j = 0; Draw.MinisterOnTable[i].MinisterThinking != null && Draw.MinisterOnTable[i].MinisterThinking[0] != null && Draw.MinisterOnTable[i].MinisterThinking[0].AStarGreedy != null && j < Draw.MinisterOnTable[i].MinisterThinking[0].AStarGreedy.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "AstarGreedy" + j.ToString();
                            tt.Name = "AstarGreedy" + j.ToString();
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
                            PopulateTreeViewM(j, AstarGreedy, Draw.MinisterOnTable[i].MinisterThinking[0].AStarGreedy[j]);
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
                    t.Text = "NULL" + i.ToString();
                    t.Name = "NULL" + i.ToString();
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
                        t.Text = "NULL" + i.ToString();
                        t.Name = "NULL" + i.ToString();
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
                        t.Text = "KingOnTable" + i.ToString();
                        t.Name = "KingOnTable" + i.ToString();
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
                        TreeNode AstarGreedy = new TreeNode();
                        for (int j = 0; Draw.KingOnTable[i].KingThinking != null && Draw.KingOnTable[i].KingThinking[0] != null && Draw.KingOnTable[i].KingThinking[0].AStarGreedy != null && j < Draw.KingOnTable[i].KingThinking[0].AStarGreedy.Count; j++)
                        {
                            TreeNode tt = new TreeNode();
                            tt.Text = "AstarGreedy" + j.ToString();
                            tt.Name = "AstarGreedy" + j.ToString();
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
                            PopulateTreeViewK(j, AstarGreedy, Draw.KingOnTable[i].KingThinking[0].AStarGreedy[j]);
                        }
                    }
                }
            }
        }
    }
}
