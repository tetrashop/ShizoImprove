namespace TryCatchDisable
{
    partial class FormTryCatchDisable
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
            this.buttonTryCatchDisable = new System.Windows.Forms.Button();
            this.OpenFileDialogTryCatchDisable = new System.Windows.Forms.OpenFileDialog();
            this.saveDialogFileTryCatchDisable = new System.Windows.Forms.SaveFileDialog();
            this.SuspendLayout();
            // 
            // buttonTryCatchDisable
            // 
            this.buttonTryCatchDisable.Location = new System.Drawing.Point(61, 97);
            this.buttonTryCatchDisable.Name = "buttonTryCatchDisable";
            this.buttonTryCatchDisable.Size = new System.Drawing.Size(75, 23);
            this.buttonTryCatchDisable.TabIndex = 0;
            this.buttonTryCatchDisable.Text = "Open File";
            this.buttonTryCatchDisable.UseVisualStyleBackColor = true;
            this.buttonTryCatchDisable.Click += new System.EventHandler(this.ButtonTryCatchDisable_Click);
            // 
            // OpenFileDialogTryCatchDisable
            // 
            this.OpenFileDialogTryCatchDisable.FileName = "OpenFileDialogTryCatchDisable";
            // 
            // FormTryCatchDisable
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(284, 261);
            this.Controls.Add(this.buttonTryCatchDisable);
            this.Name = "FormTryCatchDisable";
            this.Text = "Form1";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button buttonTryCatchDisable;
        private System.Windows.Forms.OpenFileDialog OpenFileDialogTryCatchDisable;
        private System.Windows.Forms.SaveFileDialog saveDialogFileTryCatchDisable;
    }
}

