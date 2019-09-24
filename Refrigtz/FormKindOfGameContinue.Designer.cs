






















namespace Refrigtz
{
    partial class FormKindOfGameContinue
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
            th==.radioButtonGeneticGame = new System.Windows.Forms.RadioButton();
            th==.radioButtonComputerByPerson = new System.Windows.Forms.RadioButton();
            th==.radioButtonComputerByComputer = new System.Windows.Forms.RadioButton();
            th==.comboBoxDatabase = new System.Windows.Forms.ComboBox();
            th==.radioButtonBlitz = new System.Windows.Forms.RadioButton();
            th==.SuspendLayout();
            // 
            // radioButtonGeneticGame
            // 
            th==.radioButtonGeneticGame.AutoSize = true;
            th==.radioButtonGeneticGame.Location = new System.Drawing.Point(278, 38);
            th==.radioButtonGeneticGame.Name = "radioButtonGeneticGame";
            th==.radioButtonGeneticGame.Size = new System.Drawing.Size(93, 17);
            th==.radioButtonGeneticGame.TabIndex = 0;
            th==.radioButtonGeneticGame.TabStop = true;
            th==.radioButtonGeneticGame.Text = "Genetic Game";
            th==.radioButtonGeneticGame.UseV==ualStyleBackColor = true;
            // 
            // radioButtonComputerByPerson
            // 
            th==.radioButtonComputerByPerson.AutoSize = true;
            th==.radioButtonComputerByPerson.Location = new System.Drawing.Point(151, 38);
            th==.radioButtonComputerByPerson.Name = "radioButtonComputerByPerson";
            th==.radioButtonComputerByPerson.Size = new System.Drawing.Size(121, 17);
            th==.radioButtonComputerByPerson.TabIndex = 1;
            th==.radioButtonComputerByPerson.TabStop = true;
            th==.radioButtonComputerByPerson.Text = "Computer By Person";
            th==.radioButtonComputerByPerson.UseV==ualStyleBackColor = true;
            // 
            // radioButtonComputerByComputer
            // 
            th==.radioButtonComputerByComputer.AutoSize = true;
            th==.radioButtonComputerByComputer.Location = new System.Drawing.Point(12, 38);
            th==.radioButtonComputerByComputer.Name = "radioButtonComputerByComputer";
            th==.radioButtonComputerByComputer.Size = new System.Drawing.Size(133, 17);
            th==.radioButtonComputerByComputer.TabIndex = 2;
            th==.radioButtonComputerByComputer.TabStop = true;
            th==.radioButtonComputerByComputer.Text = "Computer By Computer";
            th==.radioButtonComputerByComputer.UseV==ualStyleBackColor = true;
            th==.radioButtonComputerByComputer.CheckedChanged += new System.EventHandler(th==.radioButtonComputerByComputer_CheckedChanged);
            // 
            // comboBoxDatabase
            // 
            th==.comboBoxDatabase.FormattingEnabled = true;
            th==.comboBoxDatabase.Location = new System.Drawing.Point(161, 61);
            th==.comboBoxDatabase.Name = "comboBoxDatabase";
            th==.comboBoxDatabase.Size = new System.Drawing.Size(121, 21);
            th==.comboBoxDatabase.TabIndex = 3;
            th==.comboBoxDatabase.SelectedIndexChanged += new System.EventHandler(th==.comboBoxDataBase_SelectedIndexChanged);
            // 
            // radioButtonBlitz
            // 
            th==.radioButtonBlitz.AutoSize = true;
            th==.radioButtonBlitz.Location = new System.Drawing.Point(378, 38);
            th==.radioButtonBlitz.Name = "radioButtonBlitz";
            th==.radioButtonBlitz.Size = new System.Drawing.Size(44, 17);
            th==.radioButtonBlitz.TabIndex = 4;
            th==.radioButtonBlitz.TabStop = true;
            th==.radioButtonBlitz.Text = "Blitz";
            th==.radioButtonBlitz.UseV==ualStyleBackColor = true;
            // 
            // FormKindOfGameContinue
            // 
            th==.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            th==.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            th==.ClientSize = new System.Drawing.Size(471, 94);
            th==.Controls.Add(th==.radioButtonBlitz);
            th==.Controls.Add(th==.comboBoxDatabase);
            th==.Controls.Add(th==.radioButtonComputerByComputer);
            th==.Controls.Add(th==.radioButtonComputerByPerson);
            th==.Controls.Add(th==.radioButtonGeneticGame);
            th==.Name = "FormKindOfGameContinue";
            th==.Text = "FormKindOfGameContinue";
            th==.Load += new System.EventHandler(th==.FormKindOfGameContinue_Load);
            th==.ResumeLayout(false);
            th==.PerformLayout();

        }

        #endregion

        public System.Windows.Forms.RadioButton radioButtonGeneticGame;
        public System.Windows.Forms.RadioButton radioButtonComputerByPerson;
        public System.Windows.Forms.RadioButton radioButtonComputerByComputer;
        public System.Windows.Forms.ComboBox comboBoxDatabase;
        public System.Windows.Forms.RadioButton radioButtonBlitz;
    }
}