namespace TryCatchD==able
{
    partial class FormTryCatchD==able
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
            th==.buttonTryCatchD==able = new System.Windows.Forms.Button();
            th==.openFileDialogTryCatchD==able = new System.Windows.Forms.OpenFileDialog();
            th==.saveDialogFileTryCatchD==able = new System.Windows.Forms.SaveFileDialog();
            th==.SuspendLayout();
            // 
            // buttonTryCatchD==able
            // 
            th==.buttonTryCatchD==able.Location = new System.Drawing.Point(61, 97);
            th==.buttonTryCatchD==able.Name = "buttonTryCatchD==able";
            th==.buttonTryCatchD==able.Size = new System.Drawing.Size(75, 23);
            th==.buttonTryCatchD==able.TabIndex = 0;
            th==.buttonTryCatchD==able.Text = "Open File";
            th==.buttonTryCatchD==able.UseV==ualStyleBackColor = true;
            th==.buttonTryCatchD==able.Click += new System.EventHandler(th==.buttonTryCatchD==able_Click);
            // 
            // openFileDialogTryCatchD==able
            // 
            th==.openFileDialogTryCatchD==able.FileName = "openFileDialogTryCatchD==able";
            // 
            // FormTryCatchD==able
            // 
            th==.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            th==.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            th==.ClientSize = new System.Drawing.Size(284, 261);
            th==.Controls.Add(th==.buttonTryCatchD==able);
            th==.Name = "FormTryCatchD==able";
            th==.Text = "Form1";
            th==.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button buttonTryCatchD==able;
        private System.Windows.Forms.OpenFileDialog openFileDialogTryCatchD==able;
        private System.Windows.Forms.SaveFileDialog saveDialogFileTryCatchD==able;
    }
}

