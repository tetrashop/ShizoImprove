namespace ShizoImprove
{
    partial class FormShizoImprove
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
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
            this.buttonSearchAndTree = new System.Windows.Forms.Button();
            this.treeView1 = new System.Windows.Forms.TreeView();
            this.textBoxWorkingProject = new System.Windows.Forms.TextBox();
            this.buttonImproveCollection = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // buttonSearchAndTree
            // 
            this.buttonSearchAndTree.Location = new System.Drawing.Point(695, 12);
            this.buttonSearchAndTree.Name = "buttonSearchAndTree";
            this.buttonSearchAndTree.Size = new System.Drawing.Size(93, 23);
            this.buttonSearchAndTree.TabIndex = 0;
            this.buttonSearchAndTree.Text = "SearchAndTree";
            this.buttonSearchAndTree.UseVisualStyleBackColor = true;
            this.buttonSearchAndTree.Click += new System.EventHandler(this.buttonSearchAndTree_Click);
            // 
            // treeView1
            // 
            this.treeView1.Location = new System.Drawing.Point(12, 12);
            this.treeView1.Name = "treeView1";
            this.treeView1.Size = new System.Drawing.Size(657, 588);
            this.treeView1.TabIndex = 1;
            // 
            // textBoxWorkingProject
            // 
            this.textBoxWorkingProject.Location = new System.Drawing.Point(675, 82);
            this.textBoxWorkingProject.Name = "textBoxWorkingProject";
            this.textBoxWorkingProject.Size = new System.Drawing.Size(113, 20);
            this.textBoxWorkingProject.TabIndex = 2;
            this.textBoxWorkingProject.Text = "ExcellManagement";
            // 
            // buttonImproveCollection
            // 
            this.buttonImproveCollection.Location = new System.Drawing.Point(675, 41);
            this.buttonImproveCollection.Name = "buttonImproveCollection";
            this.buttonImproveCollection.Size = new System.Drawing.Size(113, 23);
            this.buttonImproveCollection.TabIndex = 3;
            this.buttonImproveCollection.Text = "ImproveCollection";
            this.buttonImproveCollection.UseVisualStyleBackColor = true;
            this.buttonImproveCollection.Click += new System.EventHandler(this.buttonImproveCollection_Click);
            // 
            // FormShizoImprove
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.buttonImproveCollection);
            this.Controls.Add(this.textBoxWorkingProject);
            this.Controls.Add(this.treeView1);
            this.Controls.Add(this.buttonSearchAndTree);
            this.Name = "FormShizoImprove";
            this.Text = "FormShizoImprove";
            this.Load += new System.EventHandler(this.FormShizoImprove_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button buttonSearchAndTree;
        private System.Windows.Forms.TreeView treeView1;
        private System.Windows.Forms.TextBox textBoxWorkingProject;
        private System.Windows.Forms.Button buttonImproveCollection;
    }
}