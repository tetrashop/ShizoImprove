namespace ImageTextDeepLearning
{
    partial class FormImageTextDeepLearning
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
            this.PictureBoxImageTextDeepLearning = new System.Windows.Forms.PictureBox();
            this.textBoxImageTextDeepLearning = new System.Windows.Forms.TextBox();
            this.buttonOpen = new System.Windows.Forms.Button();
            this.openFileDialogImageTextDeepLearning = new System.Windows.Forms.OpenFileDialog();
            this.buttonSplitationConjunction = new System.Windows.Forms.Button();
            this.pictureBoxTest = new System.Windows.Forms.PictureBox();
            this.progressBarCompleted = new System.Windows.Forms.ProgressBar();
            this.buttonTxtDetect = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.PictureBoxImageTextDeepLearning)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBoxTest)).BeginInit();
            this.SuspendLayout();
            // 
            // PictureBoxImageTextDeepLearning
            // 
            this.PictureBoxImageTextDeepLearning.Location = new System.Drawing.Point(13, 13);
            this.PictureBoxImageTextDeepLearning.Name = "PictureBoxImageTextDeepLearning";
            this.PictureBoxImageTextDeepLearning.Size = new System.Drawing.Size(545, 383);
            this.PictureBoxImageTextDeepLearning.TabIndex = 0;
            this.PictureBoxImageTextDeepLearning.TabStop = false;
            // 
            // textBoxImageTextDeepLearning
            // 
            this.textBoxImageTextDeepLearning.Location = new System.Drawing.Point(564, -6);
            this.textBoxImageTextDeepLearning.Multiline = true;
            this.textBoxImageTextDeepLearning.Name = "textBoxImageTextDeepLearning";
            this.textBoxImageTextDeepLearning.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.textBoxImageTextDeepLearning.Size = new System.Drawing.Size(224, 402);
            this.textBoxImageTextDeepLearning.TabIndex = 1;
            // 
            // buttonOpen
            // 
            this.buttonOpen.Location = new System.Drawing.Point(51, 415);
            this.buttonOpen.Name = "buttonOpen";
            this.buttonOpen.Size = new System.Drawing.Size(75, 23);
            this.buttonOpen.TabIndex = 2;
            this.buttonOpen.Text = "Open";
            this.buttonOpen.UseVisualStyleBackColor = true;
            this.buttonOpen.Click += new System.EventHandler(this.buttonOpen_Click);
            // 
            // openFileDialogImageTextDeepLearning
            // 
            this.openFileDialogImageTextDeepLearning.FileOk += new System.ComponentModel.CancelEventHandler(this.openFileDialogImageTextDeepLearning_FileOk);
            // 
            // buttonSplitationConjunction
            // 
            this.buttonSplitationConjunction.Location = new System.Drawing.Point(176, 415);
            this.buttonSplitationConjunction.Name = "buttonSplitationConjunction";
            this.buttonSplitationConjunction.Size = new System.Drawing.Size(75, 23);
            this.buttonSplitationConjunction.TabIndex = 3;
            this.buttonSplitationConjunction.Text = "Splitation";
            this.buttonSplitationConjunction.UseVisualStyleBackColor = true;
            this.buttonSplitationConjunction.Click += new System.EventHandler(this.buttonSplitationConjunction_Click);
            // 
            // pictureBoxTest
            // 
            this.pictureBoxTest.Location = new System.Drawing.Point(292, 407);
            this.pictureBoxTest.Name = "pictureBoxTest";
            this.pictureBoxTest.Size = new System.Drawing.Size(31, 31);
            this.pictureBoxTest.TabIndex = 4;
            this.pictureBoxTest.TabStop = false;
            // 
            // progressBarCompleted
            // 
            this.progressBarCompleted.Location = new System.Drawing.Point(412, 415);
            this.progressBarCompleted.Name = "progressBarCompleted";
            this.progressBarCompleted.Size = new System.Drawing.Size(376, 23);
            this.progressBarCompleted.TabIndex = 5;
            this.progressBarCompleted.Click += new System.EventHandler(this.progressBarCompleted_Click);
            // 
            // buttonTxtDetect
            // 
            this.buttonTxtDetect.Location = new System.Drawing.Point(331, 415);
            this.buttonTxtDetect.Name = "buttonTxtDetect";
            this.buttonTxtDetect.Size = new System.Drawing.Size(75, 23);
            this.buttonTxtDetect.TabIndex = 6;
            this.buttonTxtDetect.Text = "TxtDetect";
            this.buttonTxtDetect.UseVisualStyleBackColor = true;
            this.buttonTxtDetect.Click += new System.EventHandler(this.buttonTxtDetect_Click);
            // 
            // FormImageTextDeepLearning
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.buttonTxtDetect);
            this.Controls.Add(this.progressBarCompleted);
            this.Controls.Add(this.pictureBoxTest);
            this.Controls.Add(this.buttonSplitationConjunction);
            this.Controls.Add(this.buttonOpen);
            this.Controls.Add(this.textBoxImageTextDeepLearning);
            this.Controls.Add(this.PictureBoxImageTextDeepLearning);
            this.Name = "FormImageTextDeepLearning";
            this.Text = "FormImageTextDeepLearning";
            this.Load += new System.EventHandler(this.FormImageTextDeepLearning_Load);
            ((System.ComponentModel.ISupportInitialize)(this.PictureBoxImageTextDeepLearning)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBoxTest)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox PictureBoxImageTextDeepLearning;
        private System.Windows.Forms.TextBox textBoxImageTextDeepLearning;
        private System.Windows.Forms.Button buttonOpen;
        private System.Windows.Forms.OpenFileDialog openFileDialogImageTextDeepLearning;
        private System.Windows.Forms.Button buttonSplitationConjunction;
        private System.Windows.Forms.PictureBox pictureBoxTest;
        private System.Windows.Forms.ProgressBar progressBarCompleted;
        private System.Windows.Forms.Button buttonTxtDetect;
    }
}

