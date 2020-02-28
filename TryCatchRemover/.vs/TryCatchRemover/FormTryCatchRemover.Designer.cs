namespace TryCatchRemover
{
    partial class FormTryCatchRemover
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="d==posing">true if managed resources should be d==posed; otherw==e, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.OpenFileDialogTryCatchRemover = new System.Windows.Forms.OpenFileDialog();
            this.ButtonTryCatchRemover = new System.Windows.Forms.Button();
            this.saveFileDialogTryCatchRemover = new System.Windows.Forms.SaveFileDialog();
            this.CheckBoxVarConvertOnly = new System.Windows.Forms.CheckBox();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.aboutToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.aboutToolStripMenuItem1 = new System.Windows.Forms.ToolStripMenuItem();
            this.toolStripMenuItem1 = new System.Windows.Forms.ToolStripMenuItem();
            this.openToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.buttonRewmoveStarComment = new System.Windows.Forms.Button();
            this.buttonComment = new System.Windows.Forms.Button();
            this.buttonCodeComment = new System.Windows.Forms.Button();
            this.buttonSpaceLine = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // OpenFileDialogTryCatchRemover
            // 
            this.OpenFileDialogTryCatchRemover.FileName = "OpenFileDialogTryCatchRemover";
            this.OpenFileDialogTryCatchRemover.FileOk += new System.ComponentModel.CancelEventHandler(this.OpenFileDialogTryCatchRemover_FileOk_1);
            // 
            // ButtonTryCatchRemover
            // 
            this.ButtonTryCatchRemover.Location = new System.Drawing.Point(103, 55);
            this.ButtonTryCatchRemover.Name = "ButtonTryCatchRemover";
            this.ButtonTryCatchRemover.Size = new System.Drawing.Size(75, 23);
            this.ButtonTryCatchRemover.TabIndex = 0;
            this.ButtonTryCatchRemover.Text = "Open";
            this.ButtonTryCatchRemover.UseVisualStyleBackColor = true;
            this.ButtonTryCatchRemover.Click += new System.EventHandler(this.Button1_Click);
            // 
            // CheckBoxVarConvertOnly
            // 
            this.CheckBoxVarConvertOnly.AutoSize = true;
            this.CheckBoxVarConvertOnly.Location = new System.Drawing.Point(98, 102);
            this.CheckBoxVarConvertOnly.Name = "CheckBoxVarConvertOnly";
            this.CheckBoxVarConvertOnly.Size = new System.Drawing.Size(100, 17);
            this.CheckBoxVarConvertOnly.TabIndex = 1;
            this.CheckBoxVarConvertOnly.Text = "VarConvertOnly";
            this.CheckBoxVarConvertOnly.UseVisualStyleBackColor = true;
            this.CheckBoxVarConvertOnly.CheckedChanged += new System.EventHandler(this.CheckBoxVarConvertOnly_CheckedChanged);
            // 
            // menuStrip1
            // 
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(284, 24);
            this.menuStrip1.TabIndex = 2;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // aboutToolStripMenuItem
            // 
            this.aboutToolStripMenuItem.Name = "aboutToolStripMenuItem";
            this.aboutToolStripMenuItem.Size = new System.Drawing.Size(44, 20);
            this.aboutToolStripMenuItem.Text = "Help";
            // 
            // aboutToolStripMenuItem1
            // 
            this.aboutToolStripMenuItem1.Name = "aboutToolStripMenuItem1";
            this.aboutToolStripMenuItem1.Size = new System.Drawing.Size(180, 22);
            this.aboutToolStripMenuItem1.Text = "About";
            this.aboutToolStripMenuItem1.Click += new System.EventHandler(this.aboutToolStripMenuItem1_Click);
            // 
            // toolStripMenuItem1
            // 
            this.toolStripMenuItem1.Name = "toolStripMenuItem1";
            this.toolStripMenuItem1.Size = new System.Drawing.Size(37, 20);
            this.toolStripMenuItem1.Text = "File";
            // 
            // openToolStripMenuItem
            // 
            this.openToolStripMenuItem.Name = "openToolStripMenuItem";
            this.openToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.openToolStripMenuItem.Text = "Open";
            this.openToolStripMenuItem.Click += new System.EventHandler(this.openToolStripMenuItem_Click);
            // 
            // buttonRewmoveStarComment
            // 
            this.buttonRewmoveStarComment.Location = new System.Drawing.Point(46, 125);
            this.buttonRewmoveStarComment.Name = "buttonRewmoveStarComment";
            this.buttonRewmoveStarComment.Size = new System.Drawing.Size(169, 23);
            this.buttonRewmoveStarComment.TabIndex = 3;
            this.buttonRewmoveStarComment.Text = "Remove Star Comment";
            this.buttonRewmoveStarComment.UseVisualStyleBackColor = true;
            this.buttonRewmoveStarComment.Click += new System.EventHandler(this.buttonComment_Click);
            // 
            // buttonComment
            // 
            this.buttonComment.Location = new System.Drawing.Point(103, 159);
            this.buttonComment.Name = "buttonComment";
            this.buttonComment.Size = new System.Drawing.Size(116, 23);
            this.buttonComment.TabIndex = 3;
            this.buttonComment.Text = "Remove Star Comment";
            this.buttonComment.UseVisualStyleBackColor = true;
            this.buttonComment.Click += new System.EventHandler(this.buttonComment_Click);
            // 
            // buttonCodeComment
            // 
            this.buttonCodeComment.Location = new System.Drawing.Point(46, 167);
            this.buttonCodeComment.Name = "buttonCodeComment";
            this.buttonCodeComment.Size = new System.Drawing.Size(169, 23);
            this.buttonCodeComment.TabIndex = 4;
            this.buttonCodeComment.Text = "Code Comment";
            this.buttonCodeComment.UseVisualStyleBackColor = true;
            this.buttonCodeComment.Click += new System.EventHandler(this.buttonCodeComment_Click);
            // 
            // buttonSpaceLine
            // 
            this.buttonSpaceLine.Location = new System.Drawing.Point(46, 207);
            this.buttonSpaceLine.Name = "buttonSpaceLine";
            this.buttonSpaceLine.Size = new System.Drawing.Size(169, 23);
            this.buttonSpaceLine.TabIndex = 5;
            this.buttonSpaceLine.Text = "Space Line";
            this.buttonSpaceLine.UseVisualStyleBackColor = true;
            this.buttonSpaceLine.Click += new System.EventHandler(this.buttonSpaceLine_Click);
            // 
            // FormTryCatchRemover
            // 
            this.ClientSize = new System.Drawing.Size(284, 261);
            this.Controls.Add(this.buttonSpaceLine);
            this.Controls.Add(this.buttonCodeComment);
            this.Controls.Add(this.buttonRewmoveStarComment);
            this.Controls.Add(this.CheckBoxVarConvertOnly);
            this.Controls.Add(this.ButtonTryCatchRemover);
            this.Controls.Add(this.menuStrip1);
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "FormTryCatchRemover";
            this.Load += new System.EventHandler(this.FormTryCatchRemover_Load_1);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.OpenFileDialog OpenFileDialogTryCatchRemover;
        private System.Windows.Forms.Button ButtonTryCatchRemover;
        private System.Windows.Forms.SaveFileDialog saveFileDialogTryCatchRemover;
        private System.Windows.Forms.CheckBox CheckBoxVarConvertOnly;
        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem aboutToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem aboutToolStripMenuItem1;
        private System.Windows.Forms.ToolStripMenuItem toolStripMenuItem1;
        private System.Windows.Forms.ToolStripMenuItem openToolStripMenuItem;
        private System.Windows.Forms.Button buttonRewmoveStarComment;
        private System.Windows.Forms.Button buttonComment;
        private System.Windows.Forms.Button buttonCodeComment;
        private System.Windows.Forms.Button buttonSpaceLine;
    }
}

