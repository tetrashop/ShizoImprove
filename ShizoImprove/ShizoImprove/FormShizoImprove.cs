using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ShizoImprove
{
    public partial class FormShizoImprove : Form
    {
        public String path = "D:\\";//'DVD'\\";
        ShizoImprove t = null;
        public FormShizoImprove()
        {
            InitializeComponent();
        }
   
        private void buttonSearchAndTree_Click(object sender, EventArgs e)
        {
            t = new ShizoImprove(path);
        }

        private void FormShizoImprove_Load(object sender, EventArgs e)
        {

        }

        private void buttonImproveCollection_Click(object sender, EventArgs e)
        {
            if (ShizoImprove.AllFiles.Count == 0)
                t = new ShizoImprove(path);
            t.FormShizoImprove(textBoxWorkingProject.Text);

        }

        private void textBoxInput_TextChanged(object sender, EventArgs e)
        {
            path = textBoxInput.Text;
        }
    }
}
