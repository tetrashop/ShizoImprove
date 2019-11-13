using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using ContourAnalysisDemo;

namespace ImageTextDeepLearning
{
    public partial class FormImageTextDeepLearning : Form
    {
        SmallImageing t = null;
        MainForm d = null;
        public FormImageTextDeepLearning()
        {
            InitializeComponent();
        }

        private void FormImageTextDeepLearning_Load(object sender, EventArgs e)
        {
            System.Threading.Thread t = new System.Threading.Thread(new System.Threading.ThreadStart(Progress));
            t.Start();
    }

        private void buttonOpen_Click(object sender, EventArgs e)
        {
            openFileDialogImageTextDeepLearning.ShowDialog();
            PictureBoxImageTextDeepLearning.BackgroundImage = Image.FromFile(openFileDialogImageTextDeepLearning.FileName);
            //PictureBoxImageTextDeepLearning.Size = new Size(PictureBoxImageTextDeepLearning.BackgroundImage.Width, PictureBoxImageTextDeepLearning.BackgroundImage.Height);

            PictureBoxImageTextDeepLearning.BackgroundImageLayout = ImageLayout.Stretch;

            PictureBoxImageTextDeepLearning.Refresh();
            PictureBoxImageTextDeepLearning.Update();

        
        }

        private void openFileDialogImageTextDeepLearning_FileOk(object sender, CancelEventArgs e)
        {

        }

        private void buttonSplitationConjunction_Click(object sender, EventArgs e)
        {
            if (buttonSplitationConjunction.Text == "Splitation")
            {
                t = new SmallImageing(PictureBoxImageTextDeepLearning.BackgroundImage);
           
                bool Do = t.Splitation(pictureBoxTest);

                if (Do)
                {
                    buttonSplitationConjunction.Text = "Conjunction";
                    MessageBox.Show("Splited!");
                }
            }
            else
if (buttonSplitationConjunction.Text == "Conjunction")
            {
                bool Do = t.Conjunction(pictureBoxTest,PictureBoxImageTextDeepLearning);
                if (Do)
                {
                    PictureBoxImageTextDeepLearning.BackgroundImage = t.RootConjuction;
                    PictureBoxImageTextDeepLearning.Refresh();
                    PictureBoxImageTextDeepLearning.Update();
                    buttonSplitationConjunction.Text = "Splitation";
                    MessageBox.Show("Conjuncted!");
                }
            }


        }

        private void progressBarCompleted_Click(object sender, EventArgs e)
        {
          /*  if (t.SplitedBegin)
            {
                int Total = t.RootWidth * t.RootWidth;
                int Cuurent = t.i * t.j;
                progressBarCompleted.Maximum = Total;
                progressBarCompleted.Minimum = 0;
                progressBarCompleted.Value = Cuurent;
            }
            else
if (t.ConjuctedBegin)
            {
                int Total = t.imgarray.Count;
                int Cuurent = t.i;
                progressBarCompleted.Maximum = Total;
                progressBarCompleted.Minimum = 0;
                progressBarCompleted.Value = Cuurent;
            }*/
        }

        private void backgroundWorkerProgress_DoWork(object sender, DoWorkEventArgs e)
        {
            
        }
        void Progress()
        {
          /*  bool init = false;
            do
            {
                if (t != null)
                {
                    if (t.SplitedBegin)
                    {
                        int Cuurent = t.i * t.j;
                        int Total = t.RootWidth * t.RootHeight;

                        this.Invoke((MethodInvoker)delegate ()
                        {
                             progressBarCompleted.Maximum = Total;
                            progressBarCompleted.Minimum = 0;

                            progressBarCompleted.Value = Cuurent;
                            progressBarCompleted.Update();
                        });
                    }
                    else
    if (t.ConjuctedBegin)
                    {
                        int Total = t.imgarray.Count;
                        int Cuurent = t.i;


                        this.Invoke((MethodInvoker)delegate ()
                        {
                            progressBarCompleted.Maximum = Total;
                            progressBarCompleted.Minimum = 0;

                            progressBarCompleted.Value = Cuurent;
                            progressBarCompleted.Update();
                        });
                    }
                }
            } while (true);*/
        }
        private void buttonTxtDetect_Click(object sender, EventArgs e)
        {
            d = new MainForm();
            d.ShowDialog();
            d.Dispose();
        }
    }
}
