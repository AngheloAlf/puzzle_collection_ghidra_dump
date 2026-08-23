

void pon_InitStartPanel(void *param_1,int param_2)

{
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;
    undefined2 local_10;
    
    local_20 = 0x0;
    local_1c = 0x0;
    local_18 = 0x0;
    local_14 = 0x0;
    local_10 = 0x0;
    if (*(int *)(gTheGame + param_2 * 0x110 + 0x16000) == 0x4) {
        InitBlockPattern(param_1,&local_20,0x6,0x0);
        InitStartingBlocks(param_1,&local_20,0x6);
    }
    else if (param_2 == 0x0) {
        InitBlockPattern(param_1,&local_20,0x6,0x0);
        InitStartingBlocks(param_1,&local_20,0x6);
    }
    else if (gTheGame._19140_4_ == *(int *)((int)param_1 + 0x4ac4)) {
        bcopy(gTheGame,param_1,0x2520);
    }
    else {
        InitBlockPattern(param_1,&local_20,0x6,0x0);
        InitStartingBlocks(param_1,&local_20,0x6);
    }
    return;
}



void pon_InitgTheGame(void)

{
    bzero(gTheGame,0x21c08);
    return;
}



int RandomBlock(int param_1)

{
    uint uVar1;
    
    if (*(int *)(param_1 + 0x4ac4) == 0x0) {
        uVar1 = 0x6;
    }
    else {
        uVar1 = 0x5;
    }
    gTheGame._120336_4_ = gTheGame._120336_4_ * 0x31ef69 + 0x29a74e;
    return (int)(((float)((double)CONCAT44(0x43300000,gTheGame._120336_4_ & 0x7fffffff ^ 0x80000000)
                         - 4503601774854144.0) / 2.147484e+09) *
                 (float)((double)CONCAT44(0x43300000,uVar1 ^ 0x80000000) - 4503601774854144.0) + 1.0
                );
}



void InitBlockPattern(int param_1,void *param_2,int param_3,int param_4)

{
    int iVar1;
    char *pcVar2;
    int iVar3;
    char *pcVar4;
    char *pcVar5;
    
    bzero(param_2,0x12);
    if (param_4 == 0x0) {
        iVar3 = AnimationRandom(0xe);
        pcVar4 = panel_data + iVar3 * 0x6;
    }
    else {
        if (*(int *)(param_1 + 0x4b00) == 0x5) {
            iVar1 = 0x11;
        }
        else {
            iVar3 = *(int *)(param_1 + 0x4b08) + (*(int *)(param_1 + 0x4b04) + -0x1) * 0x5;
            iVar1 = iVar3 + -0x1;
            if (0x13 < iVar1) {
                iVar1 = iVar3 + -0xb;
            }
        }
        pcVar4 = clearpanel_data + iVar1 * 0x6;
    }
    pcVar5 = pcVar4;
    for (iVar3 = 0x0; iVar3 < param_3; iVar3 += 0x1) {
        do {
            iVar1 = AnimationRandom(param_3);
            pcVar2 = (char *)((int)param_2 + iVar1);
        } while (*pcVar2 != '\0');
        if (iVar3 < 0xc) {
            if (iVar3 < 0x6) {
                *pcVar2 = *pcVar5;
            }
            else {
                *pcVar2 = pcVar4[iVar3 + -0x6];
            }
        }
        else {
            *pcVar2 = pcVar4[iVar3 + -0xc];
        }
        pcVar5 = pcVar5 + 0x1;
    }
    return;
}



void InitStartingBlocks(int param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    
    iVar8 = 0x0;
    iVar5 = 0x0;
    iVar4 = param_1;
    if (0x0 < param_3) {
        do {
            iVar2 = param_1;
            iVar3 = iVar4;
            for (iVar6 = 0x0; iVar6 < *(char *)(param_2 + iVar8); iVar6 += 0x1) {
                do {
                    if (*(int *)(param_1 + 0x4ac4) == 0x0) {
                        uVar7 = 0x6;
                    }
                    else {
                        uVar7 = 0x5;
                    }
                    gTheGame._120336_4_ = gTheGame._120336_4_ * 0x31ef69 + 0x29a74e;
                    iVar1 = (int)(((float)((double)CONCAT44(0x43300000,
                                                            gTheGame._120336_4_ & 0x7fffffff ^
                                                            0x80000000) - 4503601774854144.0) /
                                  2.147484e+09) *
                                  (float)((double)CONCAT44(0x43300000,uVar7 ^ 0x80000000) -
                                         4503601774854144.0) + 1.0);
                } while ((iVar1 == *(int *)(iVar2 + iVar5 + -0x1c)) ||
                        (iVar1 == *(int *)(iVar2 + iVar5 + -0x308)));
                *(int *)(iVar3 + 0x10) = iVar1;
                iVar2 += 0x318;
                iVar3 += 0x318;
            }
            iVar4 += 0x2c;
            iVar5 += 0x2c;
            iVar8 += 0x1;
            param_3 += -0x1;
        } while (param_3 != 0x0);
    }
    return;
}



undefined4 DemoCheck(int *param_1)

{
    undefined4 uVar1;
    
    pon_ClearController(0x1);
    pon_ClearController(0x2);
    pon_ClearController(0x3);
    if ((gTheGame._90948_2_ == 0x0) && (gDemo != 0x16)) {
        if ((*param_1 < 0x709) || (gMain != 0x387)) {
            uVar1 = 0x0;
            *param_1 = *param_1 + 0x1;
            gDemo = 0xb;
        }
        else {
            gDemo = 0x21;
            gTheGame._120348_4_ = 0x0;
            gTheGame._120344_4_ = 0x0;
            gTheGame._120340_4_ = 0x0;
            gGameStatus = (ushort)((uint)gGameStatus >> 0x8);
            FadeOutSong(last_song_handle,0x3c);
            uVar1 = 0xffffffff;
        }
    }
    else {
        gDemo = 0x16;
        gTheGame._120348_4_ = 0x0;
        gTheGame._120344_4_ = 0x0;
        gTheGame._120340_4_ = 0x0;
        gGameStatus = (ushort)((uint)gGameStatus >> 0x8);
        FadeOutSong(last_song_handle,0x3c);
        uVar1 = 0xffffffff;
    }
    return uVar1;
}



void DemoCPU(int param_1,undefined4 param_2)

{
    if ((gGameStatus & 0x80) == 0x0) {
        gGameStatus <<= 0x8;
    }
    else {
        gGameStatus = gGameStatus << 0x8 | 0x80;
    }
    if (false) {
switchD_000af76c_caseD_0:
        AISetLevel(brainbrain + param_1 * 0x128,0x5,0xf);
    }
    else {
        switch(param_2) {
        default:
            goto switchD_000af76c_caseD_0;
        case 0x1:
            AISetLevel(brainbrain + param_1 * 0x128,0x1,0x1);
            break;
        case 0x2:
            AISetLevel(brainbrain + param_1 * 0x128,0x1,0x9);
            break;
        case 0x3:
            AISetLevel(brainbrain + param_1 * 0x128,0x2,0x3);
            break;
        case 0x4:
            AISetLevel(brainbrain + param_1 * 0x128,0x2,0xc);
            break;
        case 0x5:
            AISetLevel(brainbrain + param_1 * 0x128,0x3,0x6);
            break;
        case 0x6:
            AISetLevel(brainbrain + param_1 * 0x128,0x3,0xe);
            break;
        case 0x7:
            AISetLevel(brainbrain + param_1 * 0x128,0x4,0x3);
            break;
        case 0x8:
            AISetLevel(brainbrain + param_1 * 0x128,0x4,0xf);
            break;
        case 0x9:
            AISetLevel(brainbrain + param_1 * 0x128,0x5,0xa);
        }
    }
    *(undefined4 *)(gTheGame + param_1 * 0x110 + 0x16000) = 0x3;
    InitAI(gTheGame + param_1 * 0x57c0,param_1 * 0x110 + 0x2b6d48,brainbrain + param_1 * 0x128);
    return;
}



void InitTetrisWell(void)

{
    int iVar1;
    undefined4 extraout_r4;
    undefined1 *puVar2;
    undefined1 *puVar3;
    undefined1 *puVar4;
    int iVar5;
    undefined1 *puVar6;
    int iVar7;
    int iVar8;
    char *pcVar9;
    int iVar10;
    undefined1 *puVar11;
    undefined1 *puVar12;
    undefined1 *puVar13;
    undefined1 *__dest;
    undefined4 local_c0;
    undefined4 local_bc;
    undefined4 local_b8;
    undefined4 local_b4;
    undefined2 local_b0;
    undefined4 local_ac;
    undefined4 local_a8;
    undefined4 local_a4;
    undefined4 local_a0;
    undefined2 local_9c;
    undefined4 local_98;
    undefined4 local_94;
    undefined4 local_90;
    undefined4 local_8c;
    undefined2 local_88;
    undefined4 local_84;
    undefined4 local_80;
    undefined4 local_7c;
    undefined4 local_78;
    undefined2 local_74;
    char local_70 [0x14];
    undefined1 *local_5c;
    int *local_58;
    undefined4 local_54;
    undefined4 *local_50;
    undefined1 *local_4c;
    
    gShit = 0x0;
    FRAME = 0x0;
    DEBUGDEBUG = 0x0;
    pon_osGetTime();
    gCounter = 0x0;
    gOverflow = 0x0;
    local_58 = (int *)(gTheGame + 0x1d60c);
    gFrameColor = 0x10001;
    if (gTheGame._120332_4_ == 0x1) {
        gMax = 0x6;
    }
    else {
        gMax = 0x12;
    }
    gTheGame._120336_4_ = extraout_r4;
    pon_ClearHeap();
    nextSegment = Pon_Image_Heap;
    n642Dolphin_AllchangeTexture();
    InitGameStateVar();
    InitWorld();
    if (gTheGame._120328_4_ < 0x3) {
        InitMiscStuff();
    }
    else {
        pon_InitMiscStuff4p();
    }
    InitPause();
    InitGameOver();
    InitGameFade();
    iVar5 = 0x0;
    puVar13 = gTheGame;
    local_54 = 0x2c2b78;
    local_50 = &_397;
    local_4c = puzzle3D;
    puVar2 = brainbrain;
    puVar3 = puVar13;
    __dest = puVar13;
    do {
        if (gTheGame._120328_4_ <= iVar5) {
            return;
        }
        puVar4 = puVar3 + 0x15f00;
        bzero(local_70,0x4);
        *(undefined4 *)(__dest + 0x4a90) = 0x0;
        *(undefined4 *)(__dest + 0x4a88) = 0x0;
        *(undefined4 *)(__dest + 0x4a84) = 0x0;
        *(undefined4 *)(__dest + 0x4a94) = 0x0;
        *(undefined4 *)(__dest + 0x4a98) = 0x0;
        *(undefined4 *)(__dest + 0x4a9c) = 0x0;
        *(undefined4 *)(__dest + 0x4aa0) = 0x0;
        *(undefined4 *)(__dest + 0x4aa4) = 0x0;
        *(undefined4 *)(__dest + 0x4ad4) = 0x0;
        if (gTheGame._120328_4_ < 0x3) {
            *(undefined4 *)(__dest + 0x4afc) = 0xdf;
        }
        else {
            *(undefined4 *)(__dest + 0x4afc) = 0xd5;
        }
        iVar7 = 0x0;
        *(undefined4 *)(__dest + 0x4ad8) = 0x0;
        *(undefined4 *)(__dest + 0x4adc) = 0x0;
        InitCursor(puVar4);
        InitGamePad(iVar5);
        if (*local_58 == 0x1) {
            Init2DCursor(puVar4,iVar5);
            Init2DTetrisBlocks(__dest,iVar5);
            if (gSelection == 0xb4) {
LAB_000afd7c:
                local_98 = 0x0;
                local_94 = 0x0;
                local_90 = 0x0;
                local_8c = 0x0;
                local_88 = 0x0;
                if (*(int *)(puVar3 + 0x16000) == 0x4) {
                    InitBlockPattern(__dest,&local_98,0x6,0x0);
                    InitStartingBlocks(__dest,&local_98,0x6);
                }
                else if (iVar5 == 0x0) {
                    InitBlockPattern(__dest,&local_98,0x6,0x0);
                    InitStartingBlocks(__dest,&local_98,0x6);
                }
                else if (gTheGame._19140_4_ == *(int *)(__dest + 0x4ac4)) {
                    bcopy(gTheGame,__dest,0x2520);
                }
                else {
                    InitBlockPattern(__dest,&local_98,0x6,0x0);
                    InitStartingBlocks(__dest,&local_98,0x6);
                }
            }
            else if (gSelection < 0xb4) {
                if (gSelection == 0x96) {
                    if (iVar5 == 0x1) {
                        AISetLevel(local_54,gTheGame._120360_4_,gTheGame._120364_4_);
                        InitAI(__dest,puVar4,local_54);
                    }
                    local_84 = 0x0;
                    local_80 = 0x0;
                    local_7c = 0x0;
                    local_78 = 0x0;
                    local_74 = 0x0;
                    if (*(int *)(puVar3 + 0x16000) == 0x4) {
                        InitBlockPattern(__dest,&local_84,0x6,0x0);
                        InitStartingBlocks(__dest,&local_84,0x6);
                    }
                    else if (iVar5 == 0x0) {
                        InitBlockPattern(__dest,&local_84,0x6,0x0);
                        InitStartingBlocks(__dest,&local_84,0x6);
                    }
                    else if (gTheGame._19140_4_ == *(int *)(__dest + 0x4ac4)) {
                        bcopy(gTheGame,__dest,0x2520);
                    }
                    else {
                        InitBlockPattern(__dest,&local_84,0x6,0x0);
                        InitStartingBlocks(__dest,&local_84,0x6);
                    }
                }
                else if (gSelection < 0x96) {
                    if (gSelection == 0x82) {
                        if (*(int *)(__dest + 0x4b00) == 0x0) {
                            local_5c = (undefined1 *)
                                       (gPlayer._0_4_ +
                                       (*(int *)(__dest + 0x4b04) + -0x1) * 0x6e + 0x1f4);
                            iVar7 = Init2DPuzzle(__dest,puVar4,local_5c,0x1);
                            if (iVar7 == 0x0) {
                                gReset = 0xffffffff;
                                gMain = 0x2bc;
                                return;
                            }
                        }
                        else {
                            Match2DPuzzle(&local_5c,*(undefined4 *)(__dest + 0x4b00));
                            Init2DPuzzle(__dest,puVar4,local_5c,*(undefined4 *)(__dest + 0x4b04));
                        }
                    }
                    else {
                        if ((0x81 < gSelection) || (gSelection != 0x78)) goto LAB_000aff60;
                        local_5c = (undefined1 *)
                                   (gPlayer._0_4_ +
                                   (*(int *)(__dest + 0x4b04) + -0x1) * 0x6e + 0x1f4);
                        Init2DPuzzle(__dest,puVar4,local_5c,0x1);
                    }
                }
                else {
                    if (gSelection != 0xaa) {
                        if ((gSelection < 0xaa) && (gSelection == 0xa0)) goto LAB_000afd7c;
                        goto LAB_000aff60;
                    }
                    InitBlockPattern(__dest,local_70,0x6,0xffffffff);
                    iVar8 = 0x0;
                    pcVar9 = local_70;
                    puVar6 = __dest;
                    do {
                        puVar11 = __dest;
                        puVar12 = puVar6;
                        for (iVar10 = 0x0; iVar10 < *pcVar9; iVar10 += 0x1) {
                            do {
                                do {
                                    iVar1 = RandomBlock(__dest);
                                } while (iVar1 == *(int *)(puVar11 + iVar8 + -0x1c));
                            } while (iVar1 == *(int *)(puVar11 + iVar8 + -0x308));
                            *(int *)(puVar12 + 0x10) = iVar1;
                            puVar11 = puVar11 + 0x318;
                            puVar12 = puVar12 + 0x318;
                        }
                        iVar7 += 0x1;
                        puVar6 = puVar6 + 0x2c;
                        iVar8 += 0x2c;
                        pcVar9 = pcVar9 + 0x1;
                    } while (iVar7 < 0x6);
                }
            }
            else if (gSelection == 0xdc) {
LAB_000afe58:
                if (*(int *)(puVar13 + 0x1d638) != -0x1) {
                    AISetLevel(puVar2,*(int *)(puVar13 + 0x1d638),*(undefined4 *)(puVar13 + 0x1d62c)
                              );
                    InitAI(__dest,puVar4,puVar2);
                }
                local_ac = 0x0;
                local_a8 = 0x0;
                local_a4 = 0x0;
                local_a0 = 0x0;
                local_9c = 0x0;
                if (*(int *)(puVar3 + 0x16000) == 0x4) {
                    InitBlockPattern(__dest,&local_ac,0x6,0x0);
                    InitStartingBlocks(__dest,&local_ac,0x6);
                }
                else if (iVar5 == 0x0) {
                    InitBlockPattern(__dest,&local_ac,0x6,0x0);
                    InitStartingBlocks(__dest,&local_ac,0x6);
                }
                else if (gTheGame._19140_4_ == *(int *)(__dest + 0x4ac4)) {
                    bcopy(gTheGame,__dest,0x2520);
                }
                else {
                    InitBlockPattern(__dest,&local_ac,0x6,0x0);
                    InitStartingBlocks(__dest,&local_ac,0x6);
                }
            }
            else {
                if (gSelection < 0xdc) {
                    if (gSelection == 0xd2) goto LAB_000afe58;
                    if ((gSelection < 0xd2) && (gSelection == 0xc8)) goto LAB_000afd7c;
                }
                else if (gSelection == 0xe6) goto LAB_000afe58;
LAB_000aff60:
                local_c0 = 0x0;
                local_bc = 0x0;
                local_b8 = 0x0;
                local_b4 = 0x0;
                local_b0 = 0x0;
                if (*(int *)(puVar3 + 0x16000) == 0x4) {
                    InitBlockPattern(__dest,&local_c0,0x6,0x0);
                    InitStartingBlocks(__dest,&local_c0,0x6);
                }
                else if (iVar5 == 0x0) {
                    InitBlockPattern(__dest,&local_c0,0x6,0x0);
                    InitStartingBlocks(__dest,&local_c0,0x6);
                }
                else if (gTheGame._19140_4_ == *(int *)(__dest + 0x4ac4)) {
                    bcopy(gTheGame,__dest,0x2520);
                }
                else {
                    InitBlockPattern(__dest,&local_c0,0x6,0x0);
                    InitStartingBlocks(__dest,&local_c0,0x6);
                }
            }
            Init2DNewRow(__dest);
            Init2DIcons(__dest);
            Init2DAttackBlocks(__dest);
            pon_Init2DAttackBlocks4p(__dest);
            pon_InitAttackOtherData(__dest,iVar5);
            Init2DExplosion(__dest);
            Init2DText();
            if (((gSelection == 0xaa) || (gSelection == 0xb4)) || (gSelection == 0xdc)) {
                Init2DClearLine(__dest,puVar4,iVar5);
            }
            Init2DTetrisBlocksTMEM(__dest,0x0);
        }
        else {
            Init3DCursor(puVar4,iVar5);
            Init3DTetrisBlocks(__dest,iVar5);
            *(undefined4 *)(__dest + 0x4768) = *local_50;
            if (gSelection == 0xaa) {
                InitBlockPattern(__dest,local_70,0x12,0xffffffff);
                iVar8 = 0x0;
                pcVar9 = local_70;
                puVar6 = __dest;
                do {
                    puVar11 = __dest;
                    puVar12 = puVar6;
                    for (iVar10 = 0x0; iVar10 < *pcVar9; iVar10 += 0x1) {
                        do {
                            do {
                                iVar1 = RandomBlock(__dest);
                            } while (iVar1 == *(int *)(puVar11 + iVar8 + -0x1c));
                        } while (iVar1 == *(int *)(puVar11 + iVar8 + -0x308));
                        *(int *)(puVar12 + 0x10) = iVar1;
                        puVar11 = puVar11 + 0x318;
                        puVar12 = puVar12 + 0x318;
                    }
                    iVar7 += 0x1;
                    puVar6 = puVar6 + 0x2c;
                    iVar8 += 0x2c;
                    pcVar9 = pcVar9 + 0x1;
                } while (iVar7 < 0x12);
            }
            else if ((gSelection < 0xaa) && (gSelection == 0x82)) {
                local_5c = local_4c;
                *(int *)(__dest + 0x4b04) = *(int *)(__dest + 0x4b04) + -0x2d;
                Init3DPuzzle(__dest,puVar4,local_4c,*(undefined4 *)(__dest + 0x4b04));
            }
            else if (iVar5 == 0x0) {
                InitBlockPattern(__dest,local_70,0x12,0x0);
                iVar7 = 0x0;
                iVar8 = 0x0;
                pcVar9 = local_70;
                puVar6 = __dest;
                do {
                    puVar11 = __dest;
                    puVar12 = puVar6;
                    for (iVar10 = 0x0; iVar10 < *pcVar9; iVar10 += 0x1) {
                        do {
                            do {
                                iVar1 = RandomBlock(__dest);
                            } while (iVar1 == *(int *)(puVar11 + iVar8 + -0x1c));
                        } while (iVar1 == *(int *)(puVar11 + iVar8 + -0x308));
                        *(int *)(puVar12 + 0x10) = iVar1;
                        puVar11 = puVar11 + 0x318;
                        puVar12 = puVar12 + 0x318;
                    }
                    iVar7 += 0x1;
                    puVar6 = puVar6 + 0x2c;
                    iVar8 += 0x2c;
                    pcVar9 = pcVar9 + 0x1;
                } while (iVar7 < 0x12);
            }
            else if (gTheGame._19140_4_ == *(int *)(__dest + 0x4ac4)) {
                bcopy(gTheGame,__dest,0x2520);
            }
            else {
                InitBlockPattern(__dest,local_70,0x12,0x0);
                iVar7 = 0x0;
                iVar8 = 0x0;
                pcVar9 = local_70;
                puVar6 = __dest;
                do {
                    puVar11 = __dest;
                    puVar12 = puVar6;
                    for (iVar10 = 0x0; iVar10 < *pcVar9; iVar10 += 0x1) {
                        do {
                            do {
                                iVar1 = RandomBlock(__dest);
                            } while (iVar1 == *(int *)(puVar11 + iVar8 + -0x1c));
                        } while (iVar1 == *(int *)(puVar11 + iVar8 + -0x308));
                        *(int *)(puVar12 + 0x10) = iVar1;
                        puVar11 = puVar11 + 0x318;
                        puVar12 = puVar12 + 0x318;
                    }
                    iVar7 += 0x1;
                    puVar6 = puVar6 + 0x2c;
                    iVar8 += 0x2c;
                    pcVar9 = pcVar9 + 0x1;
                } while (iVar7 < 0x12);
            }
            Init3DNewRow(__dest);
            Init3DIcons(__dest);
            Init3DAttackBlocks(__dest);
            Init3DExplosion(__dest);
            Init3DText();
            if (((gSelection == 0xaa) || (gSelection == 0xb4)) || (gSelection == 0xdc)) {
                Init3DClearLine(__dest,puVar4,iVar5);
            }
        }
        __dest = __dest + 0x57c0;
        puVar3 = puVar3 + 0x110;
        puVar13 = puVar13 + 0x18;
        puVar2 = puVar2 + 0x128;
        iVar5 += 0x1;
    } while( true );
}



void DoTetris(void)

{
    int iVar1;
    int extraout_r4;
    int iVar2;
    uint uVar3;
    int *piVar4;
    undefined4 uVar5;
    undefined1 *puVar6;
    undefined1 *puVar7;
    undefined1 *puVar8;
    int iVar9;
    undefined8 uVar10;
    undefined8 uVar11;
    
    if (gTheGame._120328_4_ < 0x3) {
        iVar9 = 0x10;
    }
    else {
        iVar9 = 0xa;
    }
    gTheGame._117088_4_ = 0x5;
    gTheGame._117280_4_ = 0xffffffff;
    gTheGame._117312_4_ = 0xffffffff;
    gTheGame._117344_4_ = 0xffffffff;
    gTheGame._117376_4_ = 0xffffffff;
    gTheGame._117408_4_ = 0xffffffff;
    gTheGame._117440_4_ = 0xffffffff;
    gTheGame._117472_4_ = 0xffffffff;
    gTheGame._117504_4_ = 0xffffffff;
    gTheGame._117536_4_ = 0xffffffff;
    gTheGame._117568_4_ = 0xffffffff;
    gTheGame._117600_4_ = 0xffffffff;
    gTheGame._117632_4_ = 0xffffffff;
    gTheGame._117664_4_ = 0xffffffff;
    gTheGame._117696_4_ = 0xffffffff;
    gTheGame._117728_4_ = 0xffffffff;
    gTheGame._117760_4_ = 0xffffffff;
    gTheGame._117792_4_ = 0xffffffff;
    gTheGame._117824_4_ = 0xffffffff;
    gTheGame._117856_4_ = 0xffffffff;
    gTheGame._117888_4_ = 0xffffffff;
    gTheGame._117920_4_ = 0xffffffff;
    gTheGame._117952_4_ = 0xffffffff;
    gTheGame._117984_4_ = 0xffffffff;
    gTheGame._118016_4_ = 0xffffffff;
    gTheGame._118048_4_ = 0xffffffff;
    gTheGame._118080_4_ = 0xffffffff;
    gTheGame._118112_4_ = 0xffffffff;
    gTheGame._118144_4_ = 0xffffffff;
    gTheGame._118176_4_ = 0xffffffff;
    gTheGame._118208_4_ = 0xffffffff;
    gTheGame._118240_4_ = 0xffffffff;
    gTheGame._118272_4_ = 0xffffffff;
    gTheGame._118304_4_ = 0xffffffff;
    gTheGame._118336_4_ = 0xffffffff;
    gTheGame._118368_4_ = 0xffffffff;
    gTheGame._118400_4_ = 0xffffffff;
    gTheGame._118432_4_ = 0xffffffff;
    gTheGame._118464_4_ = 0xffffffff;
    gTheGame._118496_4_ = 0xffffffff;
    gTheGame._118528_4_ = 0xffffffff;
    gTheGame._118560_4_ = 0xffffffff;
    gTheGame._118592_4_ = 0xffffffff;
    gTheGame._118624_4_ = 0xffffffff;
    gTheGame._118656_4_ = 0xffffffff;
    gTheGame._118688_4_ = 0xffffffff;
    gTheGame._118720_4_ = 0xffffffff;
    gTheGame._118752_4_ = 0xffffffff;
    gTheGame._118784_4_ = 0xffffffff;
    gTheGame._118816_4_ = 0xffffffff;
    gTheGame._118848_4_ = 0xffffffff;
    gTheGame._118880_4_ = 0xffffffff;
    gTheGame._118912_4_ = 0xffffffff;
    gTheGame._118944_4_ = 0xffffffff;
    gTheGame._118976_4_ = 0xffffffff;
    gTheGame._119008_4_ = 0xffffffff;
    gTheGame._119040_4_ = 0xffffffff;
    gTheGame._119072_4_ = 0xffffffff;
    gTheGame._119104_4_ = 0xffffffff;
    gTheGame._119136_4_ = 0xffffffff;
    gTheGame._119168_4_ = 0xffffffff;
    gTheGame._119200_4_ = 0xffffffff;
    gTheGame._119232_4_ = 0xffffffff;
    gTheGame._119264_4_ = 0xffffffff;
    gTheGame._119296_4_ = 0xffffffff;
    iVar2 = 0x2a16e8;
    iVar1 = 0x1;
    if (true) {
        do {
            *(undefined4 *)(iVar2 + 0x1c980) = 0xffffffff;
            iVar2 += 0x20;
            iVar1 += -0x1;
        } while (iVar1 != 0x0);
    }
    uVar10 = pon_osGetTime();
    uVar3 = (uint)uVar10 - gTime._4_4_;
    uVar11 = __div2u(((int)((ulonglong)uVar10 >> 0x20) -
                     ((uint)((uint)uVar10 < gTime._4_4_) + gTime._0_4_)) * 0x40 +
                     (int)((ulonglong)uVar3 * 0x40 >> 0x20),uVar3 * 0x40,0x0,0xbb8);
    __div2u((int)((ulonglong)uVar11 >> 0x20),(int)uVar11,0x0,0xf4240);
    gTime = CONCAT44(gTime._0_4_,gTime._4_4_);
    if (extraout_r4 == 0x1) {
        gTime = uVar10;
    }
    DoGameFade(0x5);
    UpdateMainState();
    if (gMain < 0x38e) {
        puVar6 = gTheGame;
        gOverflow = 0x0;
        puVar7 = brainbrain;
        puVar8 = puVar6;
        for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
            if (*(int *)(puVar6 + 0x16000) != 0x1) {
                piVar4 = (int *)(puVar6 + 0x15f00);
                if ((((gGameStatus & 0x20) == 0x0) ||
                    (gCounter !=
                     (((int)gCounter >> 0x1) +
                     (uint)((int)gCounter < 0x0 && (gCounter & 0x1) != 0x0)) * 0x2)) &&
                   (gMain == 0x387)) {
                    if (((((*(int *)(puVar6 + 0x15f04) == 0x0) &&
                          (*(int *)(puVar6 + 0x15f0c) == 0x0)) &&
                         ((*(int *)(puVar8 + 0x4ad4) == 0x0 &&
                          ((*(int *)(puVar8 + 0x4a90) == 0x0 && (0x82 < gSelection)))))) &&
                        (gShit == 0x0)) &&
                       (((*piVar4 < 0x1 && (*(int *)(puVar6 + 0x15f08) == 0x0)) &&
                        (0x2 < *(int *)(puVar6 + 0x16000))))) {
                        *(int *)(puVar8 + 0x4acc) =
                             *(int *)(puVar8 + 0x4acc) + *(int *)(puVar8 + 0x4ad0);
                        uVar3 = *(uint *)(puVar8 + 0x4acc);
                        if (0xfff < uVar3) {
                            *(uint *)(puVar8 + 0x4acc) = uVar3 & 0xffff;
                            *(int *)(puVar8 + 0x4adc) = ((int)uVar3 >> 0x10) * gTheGame._120332_4_;
                            *(int *)(puVar8 + 0x4ad8) =
                                 *(int *)(puVar8 + 0x4ad8) + *(int *)(puVar8 + 0x4adc);
                            if (iVar9 * gTheGame._120332_4_ < *(int *)(puVar8 + 0x4ad8)) {
                                *(int *)(puVar8 + 0x4adc) =
                                     iVar9 * gTheGame._120332_4_ -
                                     (*(int *)(puVar8 + 0x4ad8) - *(int *)(puVar8 + 0x4adc));
                                *(int *)(puVar8 + 0x4ad8) = iVar9 * gTheGame._120332_4_;
                            }
                        }
                    }
                    CompactWell(puVar8,iVar1);
                }
                CheckGameInput(puVar8,piVar4,iVar1);
                uVar5 = 0x0;
                if (gMain == 0x387) {
                    if (((gGameStatus & 0x20) == 0x0) ||
                       (gCounter !=
                        (((int)gCounter >> 0x1) +
                        (uint)((int)gCounter < 0x0 && (gCounter & 0x1) != 0x0)) * 0x2)) {
                        if (*(int *)(puVar8 + 0x4aa4) != 0x0) {
                            CheckCollision(puVar8);
                        }
                        *(undefined4 *)(puVar8 + 0x4aa4) = 0x0;
                        CheckChainCounter(puVar8,piVar4);
                        uVar5 = ComboCount(puVar8,piVar4);
                        if (*(int *)(puVar8 + 0x4a9c) != 0x0) {
                            *(undefined4 *)(puVar8 + 0x4aa0) = 0x0;
                            *(undefined4 *)(puVar8 + 0x4a9c) = 0x0;
                        }
                        CheckShake(puVar8,piVar4);
                        CheckIcon(puVar8,uVar5,iVar1);
                        if (gTheGame._120328_4_ < 0x3) {
                            StartAttack(puVar8,iVar1);
                        }
                        else {
                            pon_StartAttack4p(puVar8,iVar1);
                        }
                        if (*(int *)(puVar7 + 0xc) != -0x1) {
                            UpdateAI(puVar8,piVar4,puVar7,iVar1);
                        }
                        UpdateWell(puVar8,piVar4,iVar1,uVar5);
                        if (((gSelection == 0x96) || (gSelection == 0xa0)) || (gSelection == 0xd2))
                        {
                            ChangeAttack(puVar8,piVar4,iVar1,uVar5);
                        }
                        UpdateCursor(puVar8,piVar4);
                        UpdateIcon(puVar8,piVar4,iVar1);
                        if (((gSelection == 0x96) || (gSelection == 0xa0)) || (gSelection == 0xd2))
                        {
                            UpdateAttack(puVar8,piVar4,iVar1);
                        }
                        UpdateExplosion(puVar8);
                    }
                    else if (gTheGame._120332_4_ == 0x2) {
                        Update3DCursor(puVar8,piVar4);
                    }
                    UpdateNextLevel(puVar8);
                    UpdateDistance(puVar8,piVar4);
                    UpdateAnimation(puVar8,iVar1,uVar5);
                    UpdateMiscStuff(puVar8,piVar4,iVar1);
                    if ((*piVar4 < 0x1) &&
                       (iVar9 * gTheGame._120332_4_ <= *(int *)(puVar8 + 0x4ad8))) {
                        *(undefined4 *)(puVar8 + 0x4aa4) = 0xffffffff;
                        AddNewRow(puVar8,piVar4,iVar1);
                        *(undefined4 *)(puVar8 + 0x4ad8) = 0x0;
                        if ((gSelection == 0xaa) || ((gSelection == 0xb4 || (gSelection == 0xdc))))
                        {
                            *(int *)(puVar6 + 0x15f28) = *(int *)(puVar6 + 0x15f28) + -0x1;
                        }
                    }
                    if (gTheGame._120332_4_ == 0x2) {
                        Check3DVisibleBlocks(puVar8,piVar4);
                    }
                    HackGame(puVar8);
                    *(undefined4 *)(puVar8 + 0x4adc) = 0x0;
                    *(undefined4 *)(puVar8 + 0x4a84) = 0x0;
                }
            }
            puVar6 = puVar6 + 0x110;
            puVar8 = puVar8 + 0x57c0;
            puVar7 = puVar7 + 0x128;
        }
        if (gMain == 0x387) {
            UpdateTime(extraout_r4);
        }
        if (gTheGame._120328_4_ < 0x3) {
            UpdateText();
        }
        else {
            pon_UpdateText4p();
        }
        peelTick();
    }
    gTime._0_4_ = (int)((ulonglong)gTime >> 0x20);
    return;
}



void HackGame(int param_1)

{
    int iVar1;
    
    if (gTheGame._120328_4_ == 0x1) {
        return;
    }
    iVar1 = 0x8;
    do {
        if ((0x4 < *(int *)(param_1 + 0x2524)) && (*(int *)(param_1 + 0x2524) < 0x9)) {
            *(undefined4 *)(param_1 + 0x2520) = 0x0;
            *(undefined4 *)(param_1 + 0x2524) = 0x0;
            *(undefined4 *)(param_1 + 0x2528) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x252c) = 0x0;
            *(undefined4 *)(param_1 + 0x2530) = 0x0;
            *(undefined4 *)(param_1 + 0x2544) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x2548) = 0xffffffff;
        }
        if ((0x4 < *(int *)(param_1 + 0x2574)) && (*(int *)(param_1 + 0x2574) < 0x9)) {
            *(undefined4 *)(param_1 + 0x2570) = 0x0;
            *(undefined4 *)(param_1 + 0x2574) = 0x0;
            *(undefined4 *)(param_1 + 0x2578) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x257c) = 0x0;
            *(undefined4 *)(param_1 + 0x2580) = 0x0;
            *(undefined4 *)(param_1 + 0x2594) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x2598) = 0xffffffff;
        }
        if ((0x4 < *(int *)(param_1 + 0x25c4)) && (*(int *)(param_1 + 0x25c4) < 0x9)) {
            *(undefined4 *)(param_1 + 0x25c0) = 0x0;
            *(undefined4 *)(param_1 + 0x25c4) = 0x0;
            *(undefined4 *)(param_1 + 0x25c8) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x25cc) = 0x0;
            *(undefined4 *)(param_1 + 0x25d0) = 0x0;
            *(undefined4 *)(param_1 + 0x25e4) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x25e8) = 0xffffffff;
        }
        if ((0x4 < *(int *)(param_1 + 0x2614)) && (*(int *)(param_1 + 0x2614) < 0x9)) {
            *(undefined4 *)(param_1 + 0x2610) = 0x0;
            *(undefined4 *)(param_1 + 0x2614) = 0x0;
            *(undefined4 *)(param_1 + 0x2618) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x261c) = 0x0;
            *(undefined4 *)(param_1 + 0x2620) = 0x0;
            *(undefined4 *)(param_1 + 0x2634) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x2638) = 0xffffffff;
        }
        if ((0x4 < *(int *)(param_1 + 0x2664)) && (*(int *)(param_1 + 0x2664) < 0x9)) {
            *(undefined4 *)(param_1 + 0x2660) = 0x0;
            *(undefined4 *)(param_1 + 0x2664) = 0x0;
            *(undefined4 *)(param_1 + 0x2668) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x266c) = 0x0;
            *(undefined4 *)(param_1 + 0x2670) = 0x0;
            *(undefined4 *)(param_1 + 0x2684) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x2688) = 0xffffffff;
        }
        param_1 += 0x190;
        iVar1 += -0x1;
    } while (iVar1 != 0x0);
    return;
}

