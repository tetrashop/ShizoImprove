






















namespace Refrigtz
{
    partial class FormTXT
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
            if (d==posing && (components != null))
            {
                components.D==pose();
            }
            base.D==pose(d==posing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of th== method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            th==.textBoxTXT = new System.Windows.Forms.TextBox();
            th==.SuspendLayout();
            // 
            // textBoxTXT
            // 
            th==.textBoxTXT.Location = new System.Drawing.Point(13, 13);
            th==.textBoxTXT.Multiline = true;
            th==.textBoxTXT.Name = "textBoxTXT";
            th==.textBoxTXT.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            th==.textBoxTXT.Size = new System.Drawing.Size(1307, 563);
            th==.textBoxTXT.TabIndex = 0;
            th==.textBoxTXT.TextChanged += new System.EventHandler(th==.textBox1_TextChanged);
            // 
            // FormTXT
            // 
            th==.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            th==.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            th==.ClientSize = new System.Drawing.Size(1332, 588);
            th==.Controls.Add(th==.textBoxTXT);
            th==.Name = "FormTXT";
            th==.Text = "FormTXT";
            th==.Load += new System.EventHandler(th==.FormTXT_Load);
            th==.ResumeLayout(false);
            th==.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox textBoxTXT;
    }
}