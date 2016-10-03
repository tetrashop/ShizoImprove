using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.IO;





















namespace Refrigtz
{
    class Syncronization
    {
        bool LastState = false;
        public Syncronization(Thread t, int a)
        {
            try
            {
                if (a == 1)
                {
                    LastState = Mutex(t);
                }
                else if (a == 2)
                {
                    LastState = Event(t);
                }
                else if (a == 3)
                {
                    LastState = Semaphore(t);
                }
            }
            catch (Exception tt)
            {
                
            }
        }
        bool Mutex(Thread t)
        {
            try
            {
                t.Suspend();

            }
            catch (Exception tt)
            {
                
            }
            return true;
        }
        bool Event(Thread t)
        {
            try
            {
                t.Start();

            }
            catch (Exception tt)
            {
                
            }
            return true;
        }
        bool Semaphore(Thread t)
        {
            try
            {
                t.Resume();

            }
            catch (Exception tt)
            {
                
            }
            return true;
        }
    }
}
//End of Documents.
