using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.IO;
using ImageTextDeepLearning;
using GalleryStudio;
using ContourAnalysisNS;
using ContourAnalysisDemo;

namespace Refrigtz
{
    [Serializable]
    class TakeRoot
    {
        public TakeRoot() { }
        public AllKeyboardOfWorld Load(String AllKeyboardOfWorldKindString)
        {

            AllKeyboardOfWorldMemmoty tr = new AllKeyboardOfWorldMemmoty();

            bool DrawDrawen = false;
            //Load Middle Targets.
            try
            {
                if (File.Exists(AllKeyboardOfWorldKindString))
                {


                    tr.Load(AllKeyboardOfWorldKindString);
                    if (tr.Current != null)
                    {
                        DrawDrawen = true;
                        System.Windows.Forms.MessageBox.Show("Load Completed.");
                    }
                    File.Delete(AllKeyboardOfWorldKindString);
                }
            }
            catch (Exception t) { }
            return tr.Current;
        }

        public bool Save(AllKeyboardOfWorld Curent, String AllKeyboardOfWorldKindString
            )
        {

            try
            {
                if (!File.Exists(AllKeyboardOfWorldKindString))
                {
                    AllKeyboardOfWorldMemmoty rt = new AllKeyboardOfWorldMemmoty();
                    rt.Current = Curent;
                    rt.RewriteAllKeyboardOfWorld(AllKeyboardOfWorldKindString);
                }
                else
                      if (File.Exists(AllKeyboardOfWorldKindString))
                {
                    File.Delete(AllKeyboardOfWorldKindString);
                    AllKeyboardOfWorldMemmoty rt = new AllKeyboardOfWorldMemmoty();
                    rt.Current = Curent;
                    rt.RewriteAllKeyboardOfWorld(AllKeyboardOfWorldKindString);
                }
                return true;
            }
            catch (Exception t)
            {

                return false;
            }
        }
    }
}
