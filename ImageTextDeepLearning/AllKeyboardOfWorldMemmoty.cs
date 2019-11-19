/**************************************************************************************************************
 * Ramin Edjlal Copyright 1397/04/20 **************************************************************************
 * 1397/04/26:Problem in Seirlization Recurisvely of linked list for refrigitz.********************************
 * ************************************************************************************************************
 */
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System.IO;
using ContourAnalysisDemo;
using ContourAnalysisNS;
using ImageTextDeepLearning;
namespace GalleryStudio
{

    [Serializable]

    class AllKeyboardOfWorldMemmoty
    {
        

       public  AllKeyboardOfWorld Current = null;


        public AllKeyboardOfWorldMemmoty()
        {

        }


        //async 

        void RewriteAllDrawRec(BinaryFormatter Formatters, FileStream DummyFileStream)
        {
            Object o = new Object();
            lock (o)
            {
                if (Current != null)
                {
                    //Current.Clone(AllDrawCurrentAccess);
                    Formatters.Serialize(DummyFileStream, this);

                }
            }
        }


        public void RewriteAllKeyboardOfWorld(String SAllKeyboardOfWorld)
        {
            Object oo = new Object();
            lock (oo)
            {

                FileStream DummyFileStream = null;
                FileInfo DummyFileInfo = new FileInfo(SAllKeyboardOfWorld);
                DummyFileInfo.Delete();
                DummyFileStream = new FileStream(SAllKeyboardOfWorld, System.IO.FileMode.OpenOrCreate, System.IO.FileAccess.Write);
                BinaryFormatter Formatters = new BinaryFormatter();
                DummyFileStream.Seek(0, SeekOrigin.Begin);
                RewriteAllDrawRec(Formatters, DummyFileStream);
                DummyFileStream.Flush(); DummyFileStream.Close();
            }
        }
    

        public AllKeyboardOfWorld Load(String SAllKeyboardOfWorld)
        {
            Object o = new Object();
            lock (o)
            {
                FileStream DummyFileStream = new FileStream(SAllKeyboardOfWorld, System.IO.FileMode.OpenOrCreate, System.IO.FileAccess.ReadWrite);
                BinaryFormatter Formatters = new BinaryFormatter();

                Current = LoadrEC(DummyFileStream, Formatters);

                DummyFileStream.Flush();
                DummyFileStream.Close();

                return Current;                
            }
        }
        public AllKeyboardOfWorld LoadrEC(FileStream DummyFileStream, BinaryFormatter Formatters)
        {
            AllKeyboardOfWorld Dummy = null;
            Object o = new Object();
            lock (o)
            {
                DummyFileStream.Seek(0, SeekOrigin.Begin);

                while (DummyFileStream.Position < DummyFileStream.Length)
                {

                    Dummy = (AllKeyboardOfWorld)Formatters.Deserialize(DummyFileStream);
                }

                return Dummy;

            }
        }
    }
}
