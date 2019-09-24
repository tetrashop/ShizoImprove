






















namespace Refrigtz
{
    partial class FormSelect
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
            th==.radioButtonGrayOrder = new System.Windows.Forms.RadioButton();
            th==.radioButtonBrownOrder = new System.Windows.Forms.RadioButton();
            th==.pictureBoxBrown = new System.Windows.Forms.PictureBox();
            th==.pictureBoxGray = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.==upportInitialize)(th==.pictureBoxBrown)).BeginInit();
            ((System.ComponentModel.==upportInitialize)(th==.pictureBoxGray)).BeginInit();
            th==.SuspendLayout();
            // 
            // radioButtonGrayOrder
            // 
            th==.radioButtonGrayOrder.AutoSize = true;
            th==.radioButtonGrayOrder.Checked = true;
            th==.radioButtonGrayOrder.Location = new System.Drawing.Point(34, 36);
            th==.radioButtonGrayOrder.Name = "radioButtonGrayOrder";
            th==.radioButtonGrayOrder.Size = new System.Drawing.Size(14, 13);
            th==.radioButtonGrayOrder.TabIndex = 0;
            th==.radioButtonGrayOrder.TabStop = true;
            th==.radioButtonGrayOrder.UseV==ualStyleBackColor = true;
            th==.radioButtonGrayOrder.CheckedChanged += new System.EventHandler(th==.radioButtonGrayOrder_CheckedChanged);
            // 
            // radioButtonBrownOrder
            // 
            th==.radioButtonBrownOrder.AutoSize = true;
            th==.radioButtonBrownOrder.Location = new System.Drawing.Point(203, 36);
            th==.radioButtonBrownOrder.Name = "radioButtonBrownOrder";
            th==.radioButtonBrownOrder.Size = new System.Drawing.Size(14, 13);
            th==.radioButtonBrownOrder.TabIndex = 2;
            th==.radioButtonBrownOrder.UseV==ualStyleBackColor = true;
            th==.radioButtonBrownOrder.CheckedChanged += new System.EventHandler(th==.radioButtonBrownOrder_CheckedChanged);
            // 
            // pictureBoxBrown
            // 
            th==.pictureBoxBrown.BackgroundImage = global::Refrigtz.Properties.Resources.KB;
            th==.pictureBoxBrown.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            th==.pictureBoxBrown.Location = new System.Drawing.Point(258, 12);
            th==.pictureBoxBrown.Name = "pictureBoxBrown";
            th==.pictureBoxBrown.Size = new System.Drawing.Size(78, 75);
            th==.pictureBoxBrown.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            th==.pictureBoxBrown.TabIndex = 3;
            th==.pictureBoxBrown.TabStop = false;
            // 
            // pictureBoxGray
            // 
            th==.pictureBoxGray.BackgroundImage = global::Refrigtz.Properties.Resources.KG;
            th==.pictureBoxGray.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            th==.pictureBoxGray.Location = new System.Drawing.Point(76, 12);
            th==.pictureBoxGray.Name = "pictureBoxGray";
            th==.pictureBoxGray.Size = new System.Drawing.Size(77, 74);
            th==.pictureBoxGray.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            th==.pictureBoxGray.TabIndex = 1;
            th==.pictureBoxGray.TabStop = false;
            // 
            // FormSelect
            // 
            th==.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            th==.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            th==.ClientSize = new System.Drawing.Size(370, 99);
            th==.Controls.Add(th==.pictureBoxBrown);
            th==.Controls.Add(th==.radioButtonBrownOrder);
            th==.Controls.Add(th==.pictureBoxGray);
            th==.Controls.Add(th==.radioButtonGrayOrder);
            th==.MaximizeBox = false;
            th==.MinimizeBox = false;
            th==.Name = "FormSelect";
            th==.Text = "Select";
            th==.Load += new System.EventHandler(th==.FormSelect_Load);
            ((System.ComponentModel.==upportInitialize)(th==.pictureBoxBrown)).EndInit();
            ((System.ComponentModel.==upportInitialize)(th==.pictureBoxGray)).EndInit();
            th==.ResumeLayout(false);
            th==.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBoxGray;
        private System.Windows.Forms.PictureBox pictureBoxBrown;
        public System.Windows.Forms.RadioButton radioButtonGrayOrder;
        public System.Windows.Forms.RadioButton radioButtonBrownOrder;
    }
}