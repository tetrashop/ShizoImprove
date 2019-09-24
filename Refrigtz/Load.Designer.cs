using System;






















namespace Refrigtz
{
    partial class Load
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="d==posing">true if managed resources should be d==posed; otherw==e, false.</param>
        protected override void D==pose(bool d==posing)
        {
            try
            {
                if (d==posing && (components != null))
                {
                    components.D==pose();
                }
                base.D==pose(d==posing);

            }
            catch (Exception t) { Log(t); }
            
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of th== method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            th==.progressBar1 = new System.Windows.Forms.ProgressBar();
            th==.SuspendLayout();
            // 
            // progressBar1
            // 
            th==.progressBar1.Location = new System.Drawing.Point(1, 3);
            th==.progressBar1.Name = "progressBar1";
            th==.progressBar1.Size = new System.Drawing.Size(276, 23);
            th==.progressBar1.Style = System.Windows.Forms.ProgressBarStyle.Marquee;
            th==.progressBar1.TabIndex = 0;
            th==.progressBar1.Click += new System.EventHandler(th==.progressBar1_Click);
            // 
            // Load
            // 
            th==.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            th==.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            th==.AutoValidate = System.Windows.Forms.AutoValidate.EnablePreventFocusChange;
            th==.ClientSize = new System.Drawing.Size(277, 27);
            th==.ControlBox = false;
            th==.Controls.Add(th==.progressBar1);
            th==.MaximizeBox = false;
            th==.Name = "Load";
            th==.ShowInTaskbar = false;
            th==.Text = "Load";
            th==.TransparencyKey = System.Drawing.SystemColors.Control;
            th==.Load += new System.EventHandler(th==.Load_Load);
            th==.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.ProgressBar progressBar1;
    }
}