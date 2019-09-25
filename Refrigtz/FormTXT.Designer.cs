using System;
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
            this.TextBoxTXT = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // TextBoxTXT
            // 
            this.TextBoxTXT.Location = new System.Drawing.Point(13, 13);
            this.TextBoxTXT.Multiline = true;
            this.TextBoxTXT.Name = "TextBoxTXT";
            this.TextBoxTXT.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.TextBoxTXT.Size = new System.Drawing.Size(1307, 563);
            this.TextBoxTXT.TabIndex = 0;
            this.TextBoxTXT.TextChanged += new System.EventHandler(this.TextBox1_TextChanged);
            // 
            // FormTXT
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1332, 588);
            this.Controls.Add(this.TextBoxTXT);
            this.Name = "FormTXT";
            this.Text = "FormTXT";
            this.Load += new System.EventHandler(this.FormTXT_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        [field: NonSerialized]
        private System.Windows.Forms.TextBox TextBoxTXT;
    }
}