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

using ImageTextDeepLearning;
using ContourAnalysisNS;
using Emgu.CV;
using Emgu.CV.CvEnum;
using Emgu.CV.UI;
using Emgu.CV.Structure;

namespace ImageTextDeepLearning
{
    public partial class FormImageTextDeepLearning : Form
    {
        DetectionOfLitteral On = null;
        int Width = 30, Height = 30;
        List<ConjunctedShape> conShapes = new List<ConjunctedShape>();
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
            if (PictureBoxImageTextDeepLearning.BackgroundImage == null)
            {
                PictureBoxImageTextDeepLearning.BackgroundImage = PictureBoxImageTextDeepLearning.Image;
                PictureBoxImageTextDeepLearning.Image = null;
            }
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

                        d.Invoke((MethodInvoker)delegate ()
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


                        d.Invoke((MethodInvoker)delegate ()
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


           
            //textBoxImageTextDeepLearning.Refresh();
           //textBoxImageTextDeepLearning.Update();
            //d.Dispose();
            PictureBoxImageTextDeepLearning.Update();
            PictureBoxImageTextDeepLearning.Refresh();

        }

        private void PictureBoxImageTextDeepLearning_Paint(object sender, PaintEventArgs e)
        {
            if (d != null)
            {
                Font font;
                Brush brush;
                Brush brush2;
                Pen pen;
                bool flag2;
                if (!ReferenceEquals(d.frame, null))
                {
                    font = new Font(d.Font.FontFamily, 24f);
                    e.Graphics.DrawString(d.lbFPS.Text, new Font(d.Font.FontFamily, 16f), Brushes.Yellow, new PointF(1f, 1f));
                    brush = new SolidBrush(Color.FromArgb(0xff, 0, 0, 0));
                    brush2 = new SolidBrush(Color.FromArgb(0xff, 0xff, 0xff, 0xff));
                    pen = new Pen(Color.FromArgb(150, 0, 0xff, 0));
                    flag2 = false;
                    if (!flag2)
                    {
                        using (List<Contour<Point>>.Enumerator enumerator = d.processor.contours.GetEnumerator())
                        {
                            while (true)
                            {
                                flag2 = enumerator.MoveNext();
                                if (!flag2)
                                {
                                    break;
                                }
                                Contour<Point> current = enumerator.Current;
                                if (current.Total > 1)
                                {
                                    e.Graphics.DrawLines(Pens.Red, current.ToArray());
                                }
                            }

                        }
                    }
                }
                else
                {
                    return;
                }
                lock (d.processor.foundTemplates)
                {
                    using (List<FoundTemplateDesc>.Enumerator enumerator2 = d.processor.foundTemplates.GetEnumerator())
                    {
                        while (true)
                        {
                            flag2 = enumerator2.MoveNext();
                            if (!flag2)
                            {
                                break;
                            }
                            FoundTemplateDesc current = enumerator2.Current;
                            if (current.template.name.EndsWith(".png") || current.template.name.EndsWith(".jpg"))
                            {
                                d.DrawAugmentedReality(current, e.Graphics);
                                continue;
                            }
                            Rectangle sourceBoundingRect = current.sample.contour.SourceBoundingRect;
                            Point point = new Point((sourceBoundingRect.Left + sourceBoundingRect.Right) / 2, sourceBoundingRect.Top);
                            string name = current.template.name;
                            if (d.showAngle)
                            {
                                name = name + $"angle={((180.0 * current.angle) / 3.1415926535897931):000}°scale={current.scale:0.0}";

                            }

                            e.Graphics.DrawRectangle(pen, sourceBoundingRect);
                            e.Graphics.DrawString(name, font, brush, new PointF((float)((point.X + 1) - (font.Height / 3)), (float)((point.Y + 1) - font.Height)));
                            e.Graphics.DrawString(name, font, brush2, new PointF((float)(point.X - (font.Height / 3)), (float)(point.Y - font.Height)));
                        }
                    }
                }
                
            }
            PictureBoxImageTextDeepLearning.Update();
            PictureBoxImageTextDeepLearning.Refresh();
        }

        private void PictureBoxImageTextDeepLearning_Click(object sender, EventArgs e)
        {

        }

        private void checkBoxDisablePaintOnAligns_CheckedChanged(object sender, EventArgs e)
        {
            if (d != null)
            {
                if (checkBoxDisablePaintOnAligns.Checked)
                    d.DisablePaintOnAligns = true;
                else
                    d.DisablePaintOnAligns = false;
            }
        }
        void CreateOneConShape()
        {
            if (!ReferenceEquals(d.frame, null))
            {
                lock (d.processor.foundTemplates)
                {
                    /* ConjunctedShape One = new ConjunctedShape(d);
                     One.CreateSAhapeFromConjucted(Width, Height);
                     AllKeyboardOfWorld Tow = new AllKeyboardOfWorld();
                     Tow.ConvertAllImageToMatrix(One.AllImage);
                     AllKeyboardOfWorld Three = new AllKeyboardOfWorld();
                     Three.ConvertAllStringToImage(d);

                 */
                     On = new DetectionOfLitteral(d);
                }
            }

        }
        private void CreateConSha_Click(object sender, EventArgs e)
        {
            System.Threading.Thread t = new System.Threading.Thread(new System.Threading.ThreadStart(CreateOneConShape));
            t.Start();
        }
    }
}
