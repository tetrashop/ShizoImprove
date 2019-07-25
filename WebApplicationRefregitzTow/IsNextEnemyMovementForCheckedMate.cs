﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;
using System.Threading.Tasks;

namespace RefrigtzDLL
{
    class IsNextEnemyMovementForCheckedMate:AllDraw
    {
        int[,] TableIsNextEnemyMovementForCheckedMate = new int[8, 8];
        public IsNextEnemyMovementForCheckedMate(int Order, bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments,int[,] Tab)
            : base(Order, MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments)
        {
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                    TableIsNextEnemyMovementForCheckedMate[i, j] = Tab[i, j];

        }
        public IsNextEnemyMovementForCheckedMate(int Order, bool MovementsAStarGreedyHuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, AllDraw THi,int[,] Tab)
            : base(Order, MovementsAStarGreedyHuristicTFou, IgnoreSelfObject, UsePenaltyRegardMechnisa, BestMovment, PredictHurist, OnlySel, AStarGreedyHuris, Arrangments, THi)
        {
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                    TableIsNextEnemyMovementForCheckedMate[i, j] = Tab[i, j];
        }
        public bool Is()
        {
            bool IS= false;
            Color a = Color.Gray;
            if (OrderP == -1)
                a = Color.Brown;
            String A1 = AllDraw.ActionString;
            bool A2 = AllDraw.ActionStringReady;
            bool A3 = AllDraw.AStarGreadyFirstSearch;
            int A4 = AllDraw.AStarGreedyiLevelMax;
            double A5 = AllDraw.AStarGreedytMaxCount;
            bool A6 = AllDraw.Blitz;
            int A7 = AllDraw.CastleMovments;
            int A8 = AllDraw.ConvertedKind;
            bool A9 = AllDraw.ConvertWait;
            double A10 = AllDraw.CurrentHuristic;
            int A11 = AllDraw.DepthIterative;
            bool A12 = AllDraw.DrawTable;
            bool A13 = AllDraw.DynamicAStarGreedytPrograming;
            int A14 = AllDraw.ElefantMovments;
            bool A15 = AllDraw.EndOfGame;
            bool A16 = AllDraw.FoundATable;
            int A17 = AllDraw.HourseMovments;
            String A18 = AllDraw.ImageRoot;
            String A19 = AllDraw.ImagesSubRoot;
            int A20 = AllDraw.increasedProgress;
            int A21 = AllDraw.KingMovments;
            int A22 = AllDraw.LastColumn;
            int A23 = AllDraw.LastRow;
            double A24 = AllDraw.Less;
            int A25 = AllDraw.LoopHuristicIndex;
            int A26 = AllDraw.MaxAStarGreedy;
            int A27 = AllDraw.MaxAStarGreedyHuristicProgress;
            int A28 = AllDraw.MinisterMovments;
            int A29 = AllDraw.MinThinkingTreeDepth;
            int A30 = AllDraw.MouseClick;
            int A31 = AllDraw.MovmentsNumber;
            int A32 = AllDraw.NextColumn;
            int A33 = AllDraw.NextRow;
            bool A34 = AllDraw.NoTableFound;
            int A35 = AllDraw.OrderPlate;
            String A36 = AllDraw.OutPut;
            bool A37 = AllDraw.Person;
            bool A38 = AllDraw.RedrawTable;
            bool A39 = AllDraw.RegardOccurred;
            String A40 = AllDraw.Root;
            double A41 = AllDraw.SignAttack;
            double A42 = AllDraw.SignDistance;
            double A43 = AllDraw.SignKiller;
            double A44 = AllDraw.SignKingDangour;
            double A45 = AllDraw.SignKingSafe;
            double A46 = AllDraw.SignMovments;
            double A47 = AllDraw.SignObjectDangour;
            double A48 = AllDraw.SignReducedAttacked;
            double A49 = AllDraw.SignSupport;
            bool A50 = AllDraw.SodierConversionOcuured;
            int A51 = AllDraw.SodierMovments;
            bool A52 = AllDraw.StateCP;
            bool A53 = AllDraw.Stockfish;
            List<AllDraw> A54 = new List<AllDraw>();
            for (int i = 0; i < AllDraw.StoreADraw.Count; i++)
                A54.Add(AllDraw.StoreADraw[i]);
            List<int> A55 = new List<int>();
            for (int i = 0; i < AllDraw.StoreADrawAStarGreedy.Count; i++)
                A55.Add(AllDraw.StoreADrawAStarGreedy[i]);
            int A56 = AllDraw.SuppportCountStaticBrown;
            int A57 = AllDraw.SuppportCountStaticGray;
            String A58 = AllDraw.SyntaxToWrite;
            List<int[,]> A59 = new List<int[,]>();
            for (int i = 0; i < AllDraw.TableCurrent.Count; i++)
                A59.Add(AllDraw.TableCurrent[i]);
            List<int[,]> A60 = new List<int[,]>();
            for (int i = 0; i < AllDraw.TableListAction.Count; i++)
                A60.Add(AllDraw.TableListAction[i]);
            int[,] A61 = new int[8, 8];
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                    A61[i, j] = AllDraw.TableVeryfy[i, j];
            int[,] A62 = new int[8, 8];
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                    A62[i, j] = AllDraw.TableVeryfyConst[i, j];
            int A63 = AllDraw.TaskBegin;
            int A64 = AllDraw.TaskEnd;
            String A65 = AllDraw.THIScomboBoxMaxLevelText;
            AllDraw A66 = null;
            if (AllDraw.THISDummy != null)
                AllDraw.THISDummy.Clone(A66);
            bool A67 = AllDraw.THISSecradioButtonBrownOrderChecked;
            bool A68 = AllDraw.THISSecradioButtonGrayOrderChecked;
            bool A69 = AllDraw.UseDoubleTime;
            String B1 = ThinkingChess.ActionsString;
            int B2 = ThinkingChess.BeginThread;
            int B3 = ThinkingChess.EndThread;
            int B4 = ThinkingChess.FoundFirstMating;
            int B5 = ThinkingChess.FoundFirstSelfMating;
            bool B6 = ThinkingChess.KingMaovableBrown;
            bool B7 = ThinkingChess.KingMaovableGray;
            bool B8 = ThinkingChess.LearningVarsCheckedMateOccured;
            bool B9 = ThinkingChess.LearningVarsCheckedMateOccuredOneCheckedMate;
            double B10 = ThinkingChess.MaxHuristicx;
            bool B11 = ThinkingChess.NotSolvedKingDanger;
            int B12 = ThinkingChess.NumbersOfAllNode;
            bool B13 = ThinkingChess.ThinkingRun;





            AllDraw.Blitz = false;

            MaxAStarGreedy = 1;
            int[,] tab = Initiate(0, 0, a, TableIsNextEnemyMovementForCheckedMate, OrderP, false, false, 0, true);
            if (ThinkingChess.FoundFirstSelfMating > 0)
                IS = true;

            AllDraw.ActionString = A1;
            AllDraw.ActionStringReady= A2;
             AllDraw.AStarGreadyFirstSearch= A3 ;
            AllDraw.AStarGreedyiLevelMax = A4;
            AllDraw.AStarGreedytMaxCount = A5;
            AllDraw.Blitz = A6;
            AllDraw.CastleMovments = A7;
             AllDraw.ConvertedKind= A8 ;
             AllDraw.ConvertWait = A9 ;
             AllDraw.CurrentHuristic= A10 ;
             AllDraw.DepthIterative = A11 ;
             AllDraw.DrawTable = A12 ;
             AllDraw.DynamicAStarGreedytPrograming =A13 ;
             AllDraw.ElefantMovments = A14 ;
             AllDraw.EndOfGame= A15 ;
             AllDraw.FoundATable = A16 ;
            AllDraw.HourseMovments = A17 ;
             AllDraw.ImageRoot = A18 ;
             AllDraw.ImagesSubRoot= A19 ;
             AllDraw.increasedProgress = A20;
             AllDraw.KingMovments= A21;
             AllDraw.LastColumn = A22;
             AllDraw.LastRow = A23;
             AllDraw.Less = A24;
             AllDraw.LoopHuristicIndex = A25;
             AllDraw.MaxAStarGreedy = A26;
             AllDraw.MaxAStarGreedyHuristicProgress = A27;
             AllDraw.MinisterMovments = A28;
             AllDraw.MinThinkingTreeDepth = A29;
             AllDraw.MouseClick = A30;
             AllDraw.MovmentsNumber = A31;
             AllDraw.NextColumn = A32;
             AllDraw.NextRow = A33;
             AllDraw.NoTableFound = A34;
             AllDraw.OrderPlate = A35;
             AllDraw.OutPut += A36;
             AllDraw.Person = A37;
             AllDraw.RedrawTable = A38;
             AllDraw.RegardOccurred = A39;
             AllDraw.Root = A40;
            AllDraw.SignAttack = A41;
             AllDraw.SignDistance =A42;
             AllDraw.SignKiller = A43;
             AllDraw.SignKingDangour = A44;
             AllDraw.SignKingSafe= A45;
             AllDraw.SignMovments = A46;
             AllDraw.SignObjectDangour = A47;
            AllDraw.SignReducedAttacked = A48;
             AllDraw.SignSupport= A49;
            AllDraw.SodierConversionOcuured = A50;
             AllDraw.SodierMovments = A51;
             AllDraw.StateCP = A52;
            AllDraw.Stockfish = A53;
            AllDraw.StoreADraw.Clear();
            for (int i = 0; i < AllDraw.StoreADraw.Count; i++)
                AllDraw.StoreADraw.Add(A54[i]);
            AllDraw.StoreADrawAStarGreedy.Clear();
            for (int i = 0; i < AllDraw.StoreADrawAStarGreedy.Count; i++)
                AllDraw.StoreADrawAStarGreedy.Add(A55[i]);
             AllDraw.SuppportCountStaticBrown= A56;
             AllDraw.SuppportCountStaticGray= A57;
            AllDraw.SyntaxToWrite = A58;
            AllDraw.TableCurrent.Clear();
            for (int i = 0; i < AllDraw.TableCurrent.Count; i++)
                AllDraw.TableCurrent.Add(A59[i]);
            AllDraw.TableListAction.Clear();
            for (int i = 0; i < AllDraw.TableListAction.Count; i++)
                AllDraw.TableListAction.Add(A60[i]);
            
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                    AllDraw.TableVeryfy[i, j] = A61[i, j];
            
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                    AllDraw.TableVeryfyConst[i, j] = A62[i, j];
             AllDraw.TaskBegin= A63;
             AllDraw.TaskEnd= A64;
             AllDraw.THIScomboBoxMaxLevelText= A65;
            if (A66 != null)
                A66.Clone(AllDraw.THISDummy);
             AllDraw.THISSecradioButtonBrownOrderChecked= A67;
             AllDraw.THISSecradioButtonGrayOrderChecked= A68;
             AllDraw.UseDoubleTime= A69;
             ThinkingChess.ActionsString= B1;
             ThinkingChess.BeginThread = B2;
             ThinkingChess.EndThread = B3;
             ThinkingChess.FoundFirstMating = B4;
             ThinkingChess.FoundFirstSelfMating = B5;
             ThinkingChess.KingMaovableBrown = B6;
             ThinkingChess.KingMaovableGray = B7;
             ThinkingChess.LearningVarsCheckedMateOccured = B8;
             ThinkingChess.LearningVarsCheckedMateOccuredOneCheckedMate = B9;
             ThinkingChess.MaxHuristicx = B10;
             ThinkingChess.NotSolvedKingDanger =B11;
             ThinkingChess.NumbersOfAllNode = B12;
             ThinkingChess.ThinkingRun = B13;
            return IS;
        }
    }
}
