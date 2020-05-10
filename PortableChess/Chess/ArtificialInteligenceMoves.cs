using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading;
using System.Threading.Tasks;
using System;
using RefrigtzChessPortable;

public class ArtificialInteligenceMove
{	public static bool UpdateIsRunning=false; 
	public static ArtificialInteligenceMove tta;
	int LevelMul=1;
	int Order=1;
	public int x,y,x1,y1;
	public RefrigtzChessPortable.RefrigtzChessPortableForm t=null;

	bool Idle = false;
	public static bool IdleProgress=true;
	public  ArtificialInteligenceMove(){
		//Awake ();

		var ttt = new Thread (new ThreadStart (ThinkingIdle));
		ttt.Start ();
		
			//ttt.Join ();
			
	}

	
	
	public void ThinkingIdle()
	{
		object O=new object();
		lock(O){
			bool ReadyZero = true;
			do {
				if(ArtificialInteligenceMove.tta.t!=null)
				{
					if(ArtificialInteligenceMove.tta.t.LoadP||Idle){
						if(RefrigtzChessPortable.AllDraw.CalIdle==0&&ReadyZero)
						{
							ReadyZero=false;

						}
						if(RefrigtzChessPortable.AllDraw.CalIdle==0&&(!ArtificialInteligenceMove.UpdateIsRunning)
						)
										{

								bool Blit=RefrigtzChessPortable.AllDraw.Blitz;
							RefrigtzChessPortable.AllDraw.Blitz=false;
															Idle=true;
                            RefrigtzChessPortable.AllDraw.TimeInitiation = (DateTime.Now.Hour * 60 * 60 * 1000 + DateTime.Now.Minute * 60 * 1000 + DateTime.Now.Second * 1000);
                            RefrigtzChessPortable.AllDraw.MaxAStarGreedy = RefrigtzChessPortable.AllDraw.PlatformHelperProcessorCount * LevelMul;
                            var arrayA =Task.Factory.StartNew(() =>	t.Draw.InitiateAStarGreedyt(RefrigtzChessPortable.AllDraw.MaxAStarGreedy,1, 4, t.Draw.OrderP, CloneATable(t.brd.GetTable()), t.Draw.OrderP, false, false, 0));
							//var arrayA =Task.Factory.StartNew(() =>	t.Play(-1,-1));
                            arrayA.Wait();
							object i=new object();

							lock(i)
							{
								bool LoadTree=false;
								(new RefrigtzChessPortable.TakeRoot()).Save(false, false, ArtificialInteligenceMove.Ret().t, ref LoadTree, false, false, false, false, false, false, false, true);
							}
							RefrigtzChessPortable.AllDraw.Blitz=Blit;
//							Thread.Sleep(50);
							//LevelMul++;
							IdleProgress=false;
							ArtificialInteligenceMove.UpdateIsRunning=true;

							RefrigtzChessPortable.AllDraw.CalIdle=1;
						}
						if(RefrigtzChessPortable.AllDraw.CalIdle==2)
						{
					
							RefrigtzChessPortable.AllDraw.CalIdle=5;
						}
//						if(RefrigtzChessPortable.AllDraw.CalIdle==2)
//						{
//							Debug.Log("Ready to 5 base");
//
//							RefrigtzChessPortable.AllDraw.CalIdle=5;
//						}
//						Debug.Log("Ready to 0 base");

						if(RefrigtzChessPortable.AllDraw.CalIdle==5)
						{		RefrigtzChessPortable.AllDraw.CalIdle=1;
//						        RefrigtzChessPortable.AllDraw.IdleInWork=false;

							Debug.Log("Ready to 1 base");
							ReadyZero=true;
						}
						while(RefrigtzChessPortable.AllDraw.CalIdle==1)
						{	

							//Thread.Sleep(1);
						}
						while(ArtificialInteligenceMove.UpdateIsRunning)
						{	
							//Thread.Sleep(1);
						}

						RefrigtzChessPortable.AllDraw.IdleInWork=true;
						RefrigtzChessPortable.AllDraw.CalIdle=0;
						IdleProgress=true;
//				
					}
				}
				} while(RefrigtzChessPortable.AllDraw.CalIdle!=3);
		
		}
	}
	int[,] CloneATable(int[,] Tab)
	{
		object O = new object();
		lock (O)
		{          
			int[,] Tabl = new int[8, 8];
			for (var i = 0; i < 8; i++)
				for (var j = 0; j < 8; j++)
					Tabl[i, j] = Tab[i, j];

			return Tabl;
		}
	}
	public bool MoveSelector(int i,int j,int i1,int j1)
	{
		object O=new object();
		lock (O) {
			if (Order == 1) {
				object OO = new object ();
				lock (OO) {
					t.Play (i, j);
					t.Play (i1, j1);
					Order = -1;
				}




			} else if (Order == -1) {
				object OO = new object ();
				lock (OO) {
					t.Play (-1, -1);
					x = t.R.CromosomRowFirst;
					y = t.R.CromosomColumnFirst;
					x1 = t.R.CromosomRow;
					y1 = t.R.CromosomColumn;

					Order = -1;
				}
			}
		}
		return true;
	}
}


