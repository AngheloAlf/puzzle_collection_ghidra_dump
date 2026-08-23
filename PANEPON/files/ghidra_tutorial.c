

byte TutorialPattern(void)

{
    byte *pbVar1;
    byte bVar2;
    undefined1 *puVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    
    puVar3 = garbage_rebreak;
    iVar5 = 0x1;
    if (0x1 < brainbrain._44_4_) {
        pbVar1 = puVar3;
        if ((0x8 < brainbrain._44_4_ + -0x1) &&
           (uVar6 = brainbrain._44_4_ - 0x2U >> 0x3, pbVar1 = garbage_rebreak,
           0x1 < brainbrain._44_4_ + -0x8)) {
            do {
                iVar5 += 0x8;
                pbVar1 = puVar3 + ((int)(uint)(byte)*puVar3 >> 0x1) + 0x1;
                pbVar1 = pbVar1 + ((int)(uint)*pbVar1 >> 0x1) + 0x1;
                pbVar1 = pbVar1 + ((int)(uint)*pbVar1 >> 0x1) + 0x1;
                pbVar1 = pbVar1 + ((int)(uint)*pbVar1 >> 0x1) + 0x1;
                pbVar1 = pbVar1 + ((int)(uint)*pbVar1 >> 0x1) + 0x1;
                pbVar1 = pbVar1 + ((int)(uint)*pbVar1 >> 0x1) + 0x1;
                puVar3 = pbVar1 + ((int)(uint)*pbVar1 >> 0x1) + 0x1 +
                         ((int)(uint)pbVar1[((int)(uint)*pbVar1 >> 0x1) + 0x1] >> 0x1) + 0x1;
                uVar6 -= 0x1;
                pbVar1 = puVar3;
            } while (uVar6 != 0x0);
        }
        puVar3 = pbVar1;
        iVar4 = brainbrain._44_4_ - iVar5;
        if (iVar5 < brainbrain._44_4_) {
            do {
                puVar3 = puVar3 + ((int)(uint)(byte)*puVar3 >> 0x1) + 0x1;
                iVar4 += -0x1;
            } while (iVar4 != 0x0);
        }
    }
    uVar6 = brainbrain._48_4_ - 0x1;
    if (brainbrain._48_4_ ==
        (((int)brainbrain._48_4_ >> 0x1) +
        (uint)((int)brainbrain._48_4_ < 0x0 && (brainbrain._48_4_ & 0x1) != 0x0)) * 0x2) {
        bVar2 = puVar3[((int)uVar6 >> 0x1) + (uint)((int)uVar6 < 0x0 && (uVar6 & 0x1) != 0x0) + 0x1]
        ;
    }
    else {
        bVar2 = (byte)puVar3[((int)uVar6 >> 0x1) + (uint)((int)uVar6 < 0x0 && (uVar6 & 0x1) != 0x0)
                             + 0x1] >> 0x4;
    }
    brainbrain._48_4_ = brainbrain._48_4_ + 0x1;
    return bVar2 & 0xf;
}



void InitTutorial(void)

{
    int iVar1;
    undefined4 uVar2;
    undefined1 *puVar3;
    undefined1 *puVar4;
    
    uVar2 = 0x0;
    pon_ClearHeap();
    nextSegment = Pon_Image_Heap;
    n642Dolphin_AllchangeTexture();
    gCounter = 0x0;
    gTheGame._120332_4_ = 0x1;
    if ((gGameStatus & 0x80) == 0x0) {
        gGameStatus <<= 0x8;
    }
    else {
        gGameStatus = gGameStatus << 0x8 | 0x80;
    }
    if (gTheGame._120360_4_ == 0x3) {
        gTheGame._120328_4_ = 0x2;
        gTheGame._90384_4_ = 0x3;
    }
    else if (gTheGame._120360_4_ == 0x6) {
        gTheGame._120328_4_ = 0x4;
        gTheGame._90384_4_ = 0x3;
        gTheGame._90656_4_ = 0x3;
        gTheGame._90928_4_ = 0x3;
    }
    else {
        gTheGame._120328_4_ = 0x1;
    }
    gTheGame._90112_4_ = 0x3;
    InitGameStateVar();
    if (gTheGame._120360_4_ == 0x6) {
        pon_InitCharacter4p(0x0,0x1,0x6,0x7);
    }
    else {
        InitCharacter(0x0,0xffffffff);
    }
    bcopy(attackB,attackA,0x90);
    bcopy(faceB,faceA,0x18);
    LoadFairySoundData(0x0,0x0,0xffffffff);
    if (gTheGame._120360_4_ == 0x5) {
        Init3DMatrixBlocks();
    }
    if (gTheGame._120328_4_ < 0x3) {
        InitMiscStuff();
    }
    else {
        pon_InitMiscStuff4p();
    }
    chain_check._0_4_ = 0x0;
    chain_check._4_4_ = 0x0;
    chain_check._8_4_ = 0x0;
    chain_check._12_4_ = 0x0;
    anim_bg = 0x0;
    anim_sp = 0x0;
    gWhatever = 0x0;
    nextSegment = Pon_Image_Heap;
    screenLoad(_206,&nextSegment);
    if (gTheGame._120360_4_ == 0x4) {
        uVar2 = screenSet(_211,0x1);
    }
    else if (gTheGame._120360_4_ < 0x4) {
        if (gTheGame._120360_4_ == 0x2) {
            uVar2 = screenSet(_208,0x1);
        }
        else if (gTheGame._120360_4_ < 0x2) {
            if (0x0 < gTheGame._120360_4_) {
                uVar2 = screenSet(_207,0x1);
            }
        }
        else {
            uVar2 = screenSet(_210,0x1);
        }
    }
    else if (gTheGame._120360_4_ == 0x6) {
        uVar2 = screenSet(_212,0x1);
    }
    else if (gTheGame._120360_4_ < 0x6) {
        gTheGame._120332_4_ = 0x2;
        uVar2 = screenSet(_209,0x1);
    }
    menuInitFairy(0x4);
    puVar3 = gTheGame;
    gTheGame._120086_2_ = 0x78;
    gTheGame._120126_2_ = 0x78;
    gTheGame._120166_2_ = 0x78;
    gTheGame._120206_2_ = 0x78;
    gTheGame._119404_2_ = 0x100;
    gTheGame._119412_2_ = 0x100;
    gTheGame._119406_2_ = 0x0;
    gTheGame._119414_2_ = 0x0;
    gTheGame._119416_2_ = 0x8;
    gTheGame._119418_2_ = 0x0;
    gTheGame[119420] = 0x2;
    gTheGame[119421] = 0x1;
    gTheGame[119422] = 0x0;
    gTheGame[119423] = 0x0;
    gTheGame._119428_2_ = 0x100;
    gTheGame._119436_2_ = 0x100;
    gTheGame._119430_2_ = 0x0;
    gTheGame._119438_2_ = 0x0;
    gTheGame._119440_2_ = 0x8;
    gTheGame._119442_2_ = 0x0;
    gTheGame[119444] = 0x2;
    gTheGame[119445] = 0x1;
    gTheGame[119446] = 0x0;
    gTheGame[119447] = 0x0;
    gTheGame._119452_2_ = 0x100;
    gTheGame._119460_2_ = 0x100;
    gTheGame._119454_2_ = 0x0;
    gTheGame._119462_2_ = 0x0;
    gTheGame._119464_2_ = 0x8;
    gTheGame._119466_2_ = 0x0;
    gTheGame[119468] = 0x2;
    gTheGame[119469] = 0x1;
    gTheGame[119470] = 0x0;
    gTheGame[119471] = 0x0;
    gTheGame._119476_2_ = 0x100;
    gTheGame._119484_2_ = 0x100;
    gTheGame._119478_2_ = 0x0;
    gTheGame._119486_2_ = 0x0;
    gTheGame._119488_2_ = 0x8;
    gTheGame._119490_2_ = 0x0;
    gTheGame[119492] = 0x2;
    gTheGame[119493] = 0x1;
    gTheGame[119494] = 0x0;
    gTheGame[119495] = 0x0;
    if (gTheGame._120360_4_ == 0x6) {
        gTheGame._119400_2_ = 0x70;
        gTheGame._119402_2_ = 0x8a;
        gTheGame._119408_2_ = 0x158;
        gTheGame._119410_2_ = 0x3d;
        gTheGame._119424_2_ = 0x180;
        gTheGame._119426_2_ = 0x8a;
        gTheGame._119432_2_ = 0x158;
        gTheGame._119434_2_ = 0x3d;
        gTheGame._119448_2_ = 0x290;
        gTheGame._119450_2_ = 0x8a;
        gTheGame._119456_2_ = 0x158;
        gTheGame._119458_2_ = 0x3d;
        gTheGame._119472_2_ = 0x3a0;
        gTheGame._119474_2_ = 0x8a;
        gTheGame._119480_2_ = 0x158;
        gTheGame._119482_2_ = 0x3d;
    }
    else {
        gTheGame._119400_2_ = 0x60;
        gTheGame._119402_2_ = 0x4b;
        gTheGame._119408_2_ = 0x7c;
        gTheGame._119410_2_ = 0x2a;
        gTheGame._119424_2_ = 0x2f0;
        gTheGame._119426_2_ = 0x4b;
        gTheGame._119432_2_ = 0x7c;
        gTheGame._119434_2_ = 0x2a;
    }
    st_AttackPosition._0_1_ = 0x25;
    st_AttackPosition._1_1_ = 0x25;
    st_AttackPosition._2_1_ = 0x25;
    st_AttackPosition._3_1_ = 0x25;
    st_Attack2DTopPosition._0_4_ = 0x1;
    st_Attack2DTopPosition._24_4_ = 0x1;
    st_Attack2DTopPosition._48_4_ = 0x1;
    st_Attack2DTopPosition._72_4_ = 0x1;
    st_Attack3DTopPosition._0_4_ = 0x1;
    st_Attack3DTopPosition._24_4_ = 0x1;
    st_Attack3DTopPosition._48_4_ = 0x1;
    st_Attack3DTopPosition._72_4_ = 0x1;
    attack_chain2._0_4_ = 0x0;
    attack_chain2._4_4_ = 0x0;
    attack_chain2._8_4_ = 0x0;
    attack_chain2._12_4_ = 0x0;
    attack_chain2C._0_4_ = 0x0;
    attack_chain2C._4_4_ = 0x0;
    attack_chain2C._8_4_ = 0x0;
    attack_chain2C._12_4_ = 0x0;
    if (gTheGame._120360_4_ == 0x6) {
        gTheGame._120328_4_ = 0x4;
    }
    else {
        gTheGame._120328_4_ = 0x2;
    }
    puVar4 = puVar3;
    for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
        *(undefined4 *)(puVar4 + 0x4a90) = 0x0;
        *(undefined4 *)(puVar4 + 0x4a88) = 0x0;
        *(undefined4 *)(puVar4 + 0x4a84) = 0x0;
        *(undefined4 *)(puVar4 + 0x4a94) = 0x0;
        *(undefined4 *)(puVar4 + 0x4a98) = 0x0;
        *(undefined4 *)(puVar4 + 0x4a9c) = 0x0;
        *(undefined4 *)(puVar4 + 0x4aa0) = 0x0;
        *(undefined4 *)(puVar4 + 0x4aa4) = 0x0;
        *(undefined4 *)(puVar4 + 0x4ad4) = 0x0;
        if (gTheGame._120360_4_ == 0x6) {
            *(undefined4 *)(puVar4 + 0x4afc) = 0xd5;
        }
        else {
            *(undefined4 *)(puVar4 + 0x4afc) = 0xdf;
        }
        *(undefined4 *)(puVar4 + 0x4ad8) = 0x0;
        *(undefined4 *)(puVar4 + 0x4adc) = 0x0;
        if (gTheGame._120332_4_ == 0x1) {
            InitCursor(puVar3 + 0x15f00);
            Init2DCursor(puVar3 + 0x15f00,iVar1);
            Init2DIcons(puVar4);
            Init2DAttackBlocks(puVar4);
            pon_Init2DAttackBlocks4p(puVar4);
            pon_InitAttackOtherData(puVar4,iVar1);
            Init2DExplosion(puVar4);
        }
        if (iVar1 != 0x0) {
            Init2DTetrisBlocks(puVar4,iVar1);
        }
        puVar4 = puVar4 + 0x57c0;
        puVar3 = puVar3 + 0x110;
    }
    if (gTheGame._120360_4_ == 0x4) {
        Init2DPuzzle(gTheGame,0x2b6d48,tutorial5,0x1);
        brainbrain._56_4_ = 0x4;
    }
    else if (gTheGame._120360_4_ < 0x4) {
        if (gTheGame._120360_4_ == 0x2) {
            Init2DPuzzle(gTheGame,0x2b6d48,tutorial2,0x1);
            brainbrain._56_4_ = 0x2;
            gTheGame._117066_2_ = 0x400;
            gTheGame._117070_2_ = 0x0;
            gTheGame._117076_2_ = 0x100;
            gTheGame._117074_2_ = 0x400;
            gTheGame._117078_2_ = 0x0;
            gTheGame._117080_2_ = 0x8;
            gTheGame[117084] = 0x2;
            gTheGame[117085] = 0x1;
            gTheGame[117086] = 0x0;
            gTheGame[117087] = 0x0;
        }
        else if (gTheGame._120360_4_ < 0x2) {
            if (0x0 < gTheGame._120360_4_) {
                Init2DPuzzle(gTheGame,0x2b6d48,tutorial1,0x1);
                brainbrain._56_4_ = 0x1;
            }
        }
        else {
            Init2DPuzzle(gTheGame,0x2b6d48,tutorial4,0x1);
            brainbrain._56_4_ = 0x3;
        }
    }
    else if (gTheGame._120360_4_ == 0x6) {
        Init2DPuzzle(gTheGame,0x2b6d48,tutorial6,0x1);
        brainbrain._56_4_ = 0x6;
    }
    else if (gTheGame._120360_4_ < 0x6) {
        InitCursor(0x2b6d48);
        Init3DCursor(0x2b6d48,0x0);
        Init3DPuzzle(gTheGame,0x2b6d48,tutorial3,0x1);
        brainbrain._56_4_ = 0x5;
        gTheGame._18280_4_ = 0x0;
        Init3DIcons(gTheGame);
        Init3DAttackBlocks(gTheGame);
        Init3DExplosion(gTheGame);
    }
    gTheGame._89896_4_ = 0x0;
    gTheGame._89900_4_ = 0x0;
    if (gTheGame._120332_4_ == 0x1) {
        Init2DNewRow(gTheGame);
        Init2DNewRow(0x2a6608);
        gMax = 0x6;
    }
    else {
        Init3DNewRow(gTheGame);
        Init3DNewRow(0x2a6608);
        gTheGame._18300_4_ = 0x0;
        gMax = 0x12;
    }
    if (gTheGame._120360_4_ != 0x6) {
        gTheGame._120328_4_ = 0x1;
    }
    brainbrain._12_4_ = 0xa;
    InitAI(gTheGame,0x2b6d48,brainbrain);
    brainbrain._60_4_ = 0x0;
    brainbrain._64_4_ = 0x0;
    brainbrain._40_4_ = 0x4;
    brainbrain._52_4_ = 0x64;
    brainbrain._32_4_ = 0x0;
    if ((gGameStatus & 0x80) == 0x0) {
        if (gTheGame._120360_4_ == 0x4) {
            tutorial_move5[0] = 0x9b;
        }
    }
    else if (gTheGame._120360_4_ == 0x4) {
        tutorial_move5[0] = 0x99;
    }
    brainbrain._36_4_ = uVar2;
    ForceLoadSong(0x30,0x0);
    PlaySong(0x0);
    return;
}



void TutorialCheckState(int param_1,undefined4 *param_2)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    iVar4 = 0x0;
    if ((gTheGame._90948_2_ & 0x4000) == 0x0) {
        if ((gTheGame._120360_4_ == 0x1) || (gTheGame._120360_4_ == 0x5)) {
            iVar3 = 0x0;
            iVar2 = param_1;
            iVar5 = gMax;
            if (0x0 < gMax) {
                do {
                    if (*(int *)(iVar2 + 0x2218) != 0x0) break;
                    iVar2 += 0x2c;
                    iVar3 += 0x1;
                    iVar5 += -0x1;
                } while (iVar5 != 0x0);
            }
            if (iVar3 != gMax) {
                iVar4 = -0x1;
            }
        }
        if (iVar4 != 0x0) {
            if (gTheGame._120332_4_ == 0x1) {
                if ((anim_bg == 0x0) && (anim_sp == 0x0)) {
                    Init2DExplosion(param_1);
                    if (gTheGame._120360_4_ != 0x6) {
                        gTheGame._120328_4_ = 0x2;
                    }
                    Init2DGameOverSmoke(param_1,0x0);
                    if (gTheGame._120360_4_ != 0x6) {
                        gTheGame._120328_4_ = 0x1;
                    }
                    anim_bg = 0x25;
                    anim_sp = 0x0;
                    *param_2 = 0x34c;
                    PlaySE(SFX_INIT_TABLE,0x3d);
                    PlaySE(SFX_INIT_TABLE,0x118);
                }
                else if (anim_bg != -0x34c) {
                    *(int *)(param_1 + 0x4adc) = anim_bg;
                    *(int *)(param_1 + 0x4acc) = anim_sp;
                    GameOverSmoke(param_1);
                    DeadBlocksShakeOne2D(param_1);
                    AllDeadBlocks(param_1);
                    anim_bg = *(int *)(param_1 + 0x4adc);
                    anim_sp = *(int *)(param_1 + 0x4acc);
                    *(undefined4 *)(param_1 + 0x4adc) = 0x0;
                    *(undefined4 *)(param_1 + 0x4acc) = 0x0;
                    if (gMain == 0x390) {
                        anim_bg = -0x34c;
                        anim_sp = -0x34c;
                    }
                }
            }
            else if ((anim_bg == 0x0) && (anim_sp == 0x0)) {
                anim_bg = 0x25;
                anim_sp = 0x0;
                *param_2 = 0x34c;
                PlaySE(SFX_INIT_TABLE,0x3d);
                PlaySE(SFX_INIT_TABLE,0x118);
            }
            else if (anim_bg != -0x34c) {
                *(int *)(param_1 + 0x4adc) = anim_bg;
                *(int *)(param_1 + 0x4acc) = anim_sp;
                iVar4 = *(int *)(param_1 + 0x4adc);
                if (-0x1 < iVar4) {
                    cVar1 = dead1Shake[iVar4];
                    *(int *)(param_1 + 0x4adc) = iVar4 + -0x1;
                    *(float *)(param_1 + 0x4768) =
                         *(float *)(param_1 + 0x4768) +
                         (float)((double)CONCAT44(0x43300000,(int)cVar1 ^ 0x80000000) -
                                4503601774854144.0) / 250.0;
                }
                AllDeadBlocks(param_1);
                anim_bg = *(int *)(param_1 + 0x4adc);
                anim_sp = *(int *)(param_1 + 0x4acc);
                *(undefined4 *)(param_1 + 0x4adc) = 0x0;
                *(undefined4 *)(param_1 + 0x4acc) = 0x0;
                if (gMain == 0x390) {
                    anim_bg = -0x34c;
                    anim_sp = -0x34c;
                }
            }
            gMain = 0x34c;
        }
    }
    else {
        gMain = 0x2bc;
        gReset = 0xffffffff;
        PlaySE(SFX_INIT_TABLE,0x6);
        gGameStatus = (ushort)((uint)gGameStatus >> 0x8);
    }
    return;
}



void DoTutorial(void)

{
    int iVar1;
    undefined4 local_10;
    undefined4 local_c;
    undefined4 local_8;
    undefined4 local_4;
    
    local_10 = 0x0;
    local_c = 0x0;
    local_8 = 0x0;
    local_4 = 0x0;
    iVar1 = screenFlushing();
    if (iVar1 == 0x0) {
        peelTick();
    }
    screenSetBackLayers(0x0);
    menuTickFairy(brainbrain._36_4_,gCounter,brainbrain._52_4_,0x5fff9,0xfff00000,brainbrain._40_4_,
                  brainbrain._32_4_);
    DoMT();
    screenTick(&local_10);
    return;
}



void DrawTUT(undefined4 *param_1,undefined4 param_2,int param_3)

{
    glistp = *param_1;
    if (param_3 == 0x64) {
        Draw2DMT(tut_dynamicp);
    }
    else if (param_3 == 0x6e) {
        Draw3DMT(tut_dynamicp);
    }
    *param_1 = glistp;
    return;
}

