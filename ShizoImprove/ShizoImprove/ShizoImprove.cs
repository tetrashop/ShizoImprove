using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace ShizoImprove
{

    public class ShizoImprove
    {
        //Initiate All Files var
        public static List<string> AllFiles = new List<string>();
        //Al File Information
        FileInfo fi = null;
        DateTime created;
        DateTime lastmodified;
         //for evry statistic files create info
        List<ShizoImprove> All = new List<ShizoImprove>();
        //retrive files and directories Constructor
        public ShizoImprove(String Root)
        {
            bool Do = false;
            if (AllFiles.Count == 0)
                Do = ParsePath(Root);
            if (Do && AllFiles.Count > 0)
            {
                for (int i = 0; i < AllFiles.Count; i++)
                {
                    All.Add((new ShizoImprove(AllFiles[i])));
                    Do = All[i].FilesInfo(Root);
                    if (!Do)
                        return;
                }
            }
        }
        //retrive all files and sub directories in a list
        static bool ParsePath(string path)
        {
            try
            {
               
                    //all subdirectories
                    string[] SubDirs = Directory.GetDirectories(path);
                    AllFiles.AddRange(SubDirs);
                    //Allfiles in path
                    AllFiles.AddRange(Directory.GetFiles(path));
                    //for each sub directory parse sub of subdirectories(recursive)
                    foreach (string subdir in SubDirs)
                        ParsePath(subdir);
                    return true;
                
            }
            catch (Exception t) { return false; }
            return true;
        }
        //retrive file information
        bool FilesInfo(String path)
        {
            try
            {
                fi = new FileInfo(path);
                created = fi.CreationTime;
                lastmodified = fi.LastWriteTime;
            }
            catch (Exception t) { return false; }
            return true;
        }
        bool IsFile(String Des)
        {
            if (Des.Contains("."))
            {
                int A = Des.IndexOf(".");
                if (A < Des.Length)
                {
                    string D = Des.Substring(A, Des.Length - A);
                    if (D.Length > 0)
                        return true;
                }
            }
            return false;

        }
        public bool FormShizoImprove(String Pro)
        {
            try
            {
                for (int i = 0; i < AllFiles.Count; i++)
                {
                    if (AllFiles[i].Contains(Pro))
                    {
                        String Des = AllFiles[i].Substring(AllFiles[i].IndexOf(Pro));
                        Des = "C:\\" + Pro + "\\" + All[i].lastmodified.ToLongDateString() + "\\" + Des;
                        if (!IsFile(Des))
                        {
                            if (!Directory.Exists(Des))
                                Directory.CreateDirectory(Des);
                        }
                        else
                        {
                            try
                            {
                                File.Copy(AllFiles[i], Des);
                            }
                            catch (Exception t) { }
                        }
                    }


                }

            } catch (Exception y) { return false; }
            return true;



        }
    }
}
