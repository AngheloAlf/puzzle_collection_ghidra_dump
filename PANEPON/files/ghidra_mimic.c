

void LoadMimic1(int param_1,int param_2,int param_3,int param_4)

{
    undefined4 uVar1;
    int iVar2;
    
    gCounter = 0x0;
    gMax = 0x6;
    InitGameStateVar();
    uVar1 = Pon_Image_Heap;
    Pon_DVDRead_misc(gTheGame._120328_4_);
    gTheGame._120072_2_ = 0x0;
    gTheGame._120074_2_ = 0x200;
    gTheGame._120076_2_ = 0x60;
    gTheGame._120078_2_ = 0x1b0;
    gTheGame._120080_2_ = 0x0;
    gTheGame._120082_2_ = 0x374;
    gTheGame._120084_2_ = 0x37c;
    gTheGame._120086_2_ = 0x374;
    gTheGame._120088_4_ = gc_misc + 0x3d10;
    gTheGame._120092_2_ = 0xfff4;
    gTheGame[120094] = 0x2;
    gTheGame[120095] = 0x1;
    gTheGame._120096_2_ = 0x0;
    gTheGame._120098_2_ = 0x0;
    Pon_Image_Heap = uVar1;
    pon_guS2DInitBg(0x2be350);
    gTheGame._120232_4_ = 0x30;
    gTheGame._120236_4_ = gc_misc + 0x11a10;
    gTheGame._120240_2_ = 0x100;
    gTheGame._120242_2_ = 0x6f;
    gTheGame._120244_2_ = 0x0;
    gTheGame._120246_2_ = 0x0;
    gTheGame._120248_4_ = 0xffffffff;
    gTheGame._120252_4_ = 0x0;
    gTheGame._120256_4_ = 0x30;
    gTheGame._120264_2_ = 0x100;
    gTheGame._120266_2_ = 0x6f;
    gTheGame._120268_2_ = 0x0;
    gTheGame._120270_2_ = 0x0;
    gTheGame._120272_4_ = 0xffffffff;
    gTheGame._120276_4_ = 0x0;
    gTheGame._120064_4_ = 0x0;
    chain_check._0_4_ = 0x0;
    chain_check._4_4_ = 0x0;
    anim_bg = 0x0;
    anim_sp = 0x0;
    gTheGame._19088_4_ = 0x0;
    gTheGame._19080_4_ = 0x0;
    gTheGame._19076_4_ = 0x0;
    gTheGame._19092_4_ = 0x0;
    gTheGame._19096_4_ = 0x0;
    gTheGame._19100_4_ = 0x0;
    gTheGame._19104_4_ = 0x0;
    gTheGame._19108_4_ = 0x0;
    gTheGame._19156_4_ = 0x0;
    gTheGame._19196_4_ = 0xdf;
    gTheGame._19160_4_ = 0x0;
    gTheGame._19164_4_ = 0x0;
    gTheGame._120328_4_ = 0x2;
    gTheGame._120260_4_ = gTheGame._120236_4_;
    InitCursor(0x2b6d48);
    Init2DCursor(0x2b6d48,0x0);
    Init2DTetrisBlocks(gTheGame,0x0);
    Init2DNewRow(gTheGame);
    Init2DIcons(gTheGame);
    Init2DAttackBlocks(gTheGame);
    pon_Init2DAttackBlocks4p(gTheGame);
    pon_InitAttackOtherData(gTheGame,0x0);
    Init2DExplosion(gTheGame);
    if (param_2 == 0x1) {
        iVar2 = 0x0;
    }
    else if (param_2 == 0x2) {
        iVar2 = 0x5;
    }
    else if (param_2 == 0x3) {
        iVar2 = 0xa;
    }
    else {
        iVar2 = 0xe;
    }
    iVar2 += param_3;
    if (param_4 == 0x0) {
        if (param_1 == 0x3) {
            Init2DPuzzle(gTheGame,0x2b6d48,demo_data_schain,iVar2);
        }
        else if (param_1 < 0x3) {
            if (param_1 == 0x1) {
                Init2DPuzzle(gTheGame,0x2b6d48,demo_data_combo,iVar2);
            }
            else if (0x0 < param_1) {
                Init2DPuzzle(gTheGame,0x2b6d48,demo_data_chain,iVar2);
            }
        }
        else if (param_1 < 0x5) {
            Init2DPuzzle(gTheGame,0x2b6d48,demo_data_timelag,iVar2);
        }
    }
    else if (param_1 == 0x3) {
        Init2DPuzzle(gTheGame,0x2b6d48,play_data_schain,iVar2);
    }
    else if (param_1 < 0x3) {
        if (param_1 == 0x1) {
            Init2DPuzzle(gTheGame,0x2b6d48,play_data_combo,iVar2);
        }
        else if (0x0 < param_1) {
            Init2DPuzzle(gTheGame,0x2b6d48,play_data_chain,iVar2);
        }
    }
    else if (param_1 < 0x5) {
        Init2DPuzzle(gTheGame,0x2b6d48,play_data_timelag,iVar2);
    }
    gTheGame._120328_4_ = 0x1;
    brainbrain._12_4_ = 0xa;
    InitAI(gTheGame,0x2b6d48,brainbrain);
    brainbrain._56_4_ = param_1;
    if (param_4 != 0x0) {
        brainbrain._56_4_ = param_1 + 0x4;
    }
    brainbrain._60_4_ = iVar2 + -0x1;
    brainbrain._64_4_ = 0x0;
    gTheGame._89904_4_ = gTheGame._89896_4_;
    gTheGame._89896_4_ = 0x0;
    gTheGame._89900_4_ = 0x0;
    return;
}



void MTMove(int param_1,byte *param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    
    iVar2 = 0x0;
    iVar3 = *(int *)(param_1 + 0x3c);
    if (0x0 < iVar3) {
        if ((0x8 < iVar3) && (uVar4 = iVar3 - 0x1U >> 0x3, 0x0 < iVar3 + -0x8)) {
            do {
                iVar2 += 0x8;
                param_2 = param_2 + (uint)*param_2 * 0x3 + 0x1;
                param_2 = param_2 + (uint)*param_2 * 0x3 + 0x1;
                param_2 = param_2 + (uint)*param_2 * 0x3 + 0x1;
                param_2 = param_2 + (uint)*param_2 * 0x3 + 0x1;
                param_2 = param_2 + (uint)*param_2 * 0x3 + 0x1;
                param_2 = param_2 + (uint)*param_2 * 0x3 + 0x1;
                param_2 = param_2 + (uint)*param_2 * 0x3 + 0x1 +
                          (uint)param_2[(uint)*param_2 * 0x3 + 0x1] * 0x3 + 0x1;
                uVar4 -= 0x1;
            } while (uVar4 != 0x0);
        }
        iVar1 = iVar3 - iVar2;
        if (iVar2 < iVar3) {
            do {
                param_2 = param_2 + (uint)*param_2 * 0x3 + 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    if (*(int *)(param_1 + 0x40) < (int)(uint)*param_2) {
        param_2 = param_2 + *(int *)(param_1 + 0x40) * 0x3;
        while( true ) {
            AIAddCommand(param_1,param_2[0x1],param_2[0x2],param_2[0x3]);
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x1;
            if (param_2[0x1] != 0x14) break;
            param_2 = param_2 + 0x3;
        }
    }
    else {
        AIAddCommand(param_1,0x1f,0x0,0x0);
    }
    return;
}



// WARNING: Restarted to delay deadcode elimination for space: ram

void UpdateMT(int param_1,int *param_2,int param_3)

{
    ushort uVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    undefined4 *puVar5;
    int iVar6;
    
    if (param_2[0x1] == 0x0) {
        iVar2 = *(int *)(param_1 + 0x4a90);
        if (iVar2 < 0x1) {
            if (iVar2 < 0x0) {
                *(int *)(param_1 + 0x4a90) = iVar2 + 0x1;
            }
            AISetCursor(param_1,param_2,param_3);
            if ((*(int *)(param_3 + 0x120) == *(int *)(param_3 + 0x124)) &&
               (*(int *)(param_3 + 0x100) == 0x0)) {
                AIClearCommand(param_3);
                if (gSelection == 0x6e) {
                    iVar2 = *(int *)(param_3 + 0x38);
                    if (iVar2 == 0x1) {
                        MTMove(param_3,demo_mimic_combo);
                    }
                    else if (iVar2 == 0x2) {
                        MTMove(param_3,demo_mimic_chain);
                    }
                    else if (iVar2 == 0x3) {
                        MTMove(param_3,demo_mimic_schain);
                    }
                    else if (iVar2 == 0x4) {
                        MTMove(param_3,demo_mimic_timelag);
                    }
                    else if (iVar2 == 0x5) {
                        MTMove(param_3,play_mimic_combo);
                    }
                    else if (iVar2 == 0x6) {
                        MTMove(param_3,play_mimic_chain);
                    }
                    else if (iVar2 == 0x7) {
                        MTMove(param_3,play_mimic_schain);
                    }
                    else if (iVar2 == 0x8) {
                        MTMove(param_3,play_mimic_timelag);
                    }
                }
                else {
                    iVar2 = *(int *)(param_3 + 0x38);
                    if (iVar2 == 0x1) {
                        MTMove(param_3,tutorial_move1);
                    }
                    else if (iVar2 == 0x2) {
                        MTMove(param_3,tutorial_move2);
                    }
                    else if (iVar2 == 0x5) {
                        MTMove(param_3,tutorial_move3);
                    }
                    else if (iVar2 == 0x3) {
                        MTMove(param_3,tutorial_move4);
                    }
                    else if (iVar2 == 0x4) {
                        MTMove(param_3,tutorial_move5);
                    }
                    else if (iVar2 == 0x6) {
                        MTMove(param_3,tutorial_move6);
                    }
                }
            }
            if (0x0 < *(int *)(param_3 + 0x100)) {
                AIFinishMove(param_3);
                do {
                    puVar5 = (undefined4 *)(param_3 + *(int *)(param_3 + 0xf8) * 0xc + 0x44);
                    if (true) {
                        switch(*puVar5) {
                        case 0x1:
                            AIVertMove(param_3,puVar5[0x1]);
                            break;
                        case 0x2:
                            AIHoriMove(param_3,puVar5[0x1]);
                            break;
                        case 0x3:
                            AIHoriMoveBlock(param_3,puVar5[0x1],puVar5[0x2]);
                            break;
                        case 0x5:
                            AIHoriMoveBlock(param_3,puVar5[0x1],puVar5[0x2]);
                            if (*(int *)(param_3 + 0x124) != 0x0) {
                                if (*(int *)(param_3 + 0x124) < 0x0) {
                                    gc_assert(0x0,_345,0x7c6,_346,0x0,0x0,0x0);
                                }
                                *(undefined *)(param_3 + *(int *)(param_3 + 0x124) + 0x103) = 0x6;
                            }
                            break;
                        case 0x9:
                            AISetMove(param_3,0x5);
                            break;
                        case 0xc:
                            AISetMove(param_3,0x7);
                            break;
                        case 0x14:
                            *(undefined4 *)(param_3 + 0x10) = puVar5[0x1] * puVar5[0x2];
                            break;
                        case 0x15:
                            iVar2 = screenTextDone(*(undefined4 *)(param_3 + 0x24),
                                                   *(undefined4 *)(param_3 + 0x34));
                            if (iVar2 == 0x0) {
                                *(undefined4 *)(param_3 + 0x10) = 0x1;
                                return;
                            }
                            if ((gGameStatus & 0x80) == 0x0) {
                                if ((((gTheGame._90948_2_ & 0x8000) == 0x0) ||
                                    ((*param_2 != 0x34c && (*param_2 != 0x0)))) ||
                                   ((anim_bg != 0x34c &&
                                    (iVar2 = CheckFieldActive(param_1), iVar2 != 0x0)))) {
                                    *(undefined4 *)(param_3 + 0x10) = 0x1;
                                    if (*param_2 != 0x34c) {
                                        return;
                                    }
                                    if ((anim_bg != 0x34c) &&
                                       (iVar2 = CheckFieldActive(param_1), iVar2 != 0x0)) {
                                        return;
                                    }
                                    *(undefined4 *)(param_3 + 0x20) = 0xffffffff;
                                    return;
                                }
                                *param_2 = 0x0;
                                *(undefined4 *)(param_3 + 0x20) = 0x0;
                                PlaySE(SFX_INIT_TABLE,0x33);
                            }
                            else {
                                gWhatever += 0x1;
                                if (((gWhatever != (gWhatever / 0x64) * 0x64) ||
                                    ((*param_2 != 0x34c && (*param_2 != 0x0)))) ||
                                   ((anim_bg != 0x34c &&
                                    (iVar2 = CheckFieldActive(param_1), iVar2 != 0x0)))) {
                                    *(undefined4 *)(param_3 + 0x10) = 0x1;
                                    return;
                                }
                                *param_2 = 0x0;
                            }
                            break;
                        case 0x16:
                            if (gTheGame._120360_4_ == 0x6) {
                                gTheGame._120328_4_ = 0x4;
                            }
                            else {
                                gTheGame._120328_4_ = 0x2;
                            }
                            if (gTheGame._120332_4_ == 0x1) {
                                InitCursor(param_2);
                                Init2DCursor(param_2,0x0);
                                iVar2 = *(int *)(param_3 + 0x38);
                                if (iVar2 == 0x4) {
                                    Init2DPuzzle(param_1,param_2,tutorial5,puVar5[0x1]);
                                }
                                else if (iVar2 < 0x4) {
                                    if (iVar2 == 0x2) {
                                        Init2DPuzzle(param_1,param_2,tutorial2,puVar5[0x1]);
                                    }
                                    else if (iVar2 < 0x2) {
                                        if (0x0 < iVar2) {
                                            Init2DPuzzle(param_1,param_2,tutorial1,puVar5[0x1]);
                                        }
                                    }
                                    else {
                                        Init2DPuzzle(param_1,param_2,tutorial4,puVar5[0x1]);
                                    }
                                }
                                else if (iVar2 == 0x6) {
                                    Init2DPuzzle(param_1,param_2,tutorial6,puVar5[0x1]);
                                }
                                Init2DTetrisBlocksTMEM(param_1,0xffffffff);
                                Init2DNewRow(param_1);
                                Init2DIcons(param_1);
                                Init2DAttackBlocks(param_1);
                                pon_Init2DAttackBlocks4p(param_1);
                                pon_InitAttackOtherData(param_1,0x0);
                                Init2DExplosion(param_1);
                                if (gTheGame._120360_4_ == 0x3) {
                                    Init2DTetrisBlocks(0x2a6608,0x1);
                                    Init2DAttackBlocks(0x2a6608);
                                    pon_Init2DAttackBlocks4p(0x2a6608);
                                    pon_InitAttackOtherData(0x2a6608,0x1);
                                    gTheGame._41660_4_ = 0xdf;
                                    gTheGame._41624_4_ = 0x0;
                                    gTheGame._41628_4_ = 0x0;
                                }
                                else if (gTheGame._120360_4_ == 0x6) {
                                    iVar2 = 0x1;
                                    iVar4 = 0x2a6608;
                                    do {
                                        Init2DTetrisBlocks(iVar4,iVar2);
                                        Init2DAttackBlocks(iVar4);
                                        pon_Init2DAttackBlocks4p(iVar4);
                                        pon_InitAttackOtherData(iVar4,iVar2);
                                        *(undefined4 *)(iVar4 + 0x4afc) = 0xd5;
                                        iVar2 += 0x1;
                                        *(undefined4 *)(iVar4 + 0x4ad8) = 0x0;
                                        *(undefined4 *)(iVar4 + 0x4adc) = 0x0;
                                        iVar4 += 0x57c0;
                                    } while (iVar2 < 0x4);
                                }
                                gTheGame._120086_2_ = 0x78;
                                gTheGame._120126_2_ = 0x78;
                                if (gTheGame._120360_4_ != 0x3) {
                                    gTheGame._120126_2_ = 0x0;
                                }
                            }
                            else {
                                InitCursor(param_2);
                                Init3DCursor(param_2,0x0);
                                Init3DPuzzle(param_1,param_2,tutorial3,puVar5[0x1]);
                                Init3DNewRow(param_1);
                                uVar3 = puVar5[0x1];
                                if (uVar3 + (((int)uVar3 >> 0x1) +
                                            (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0)) * -0x2
                                    == 0x1) {
                                    *(undefined4 *)(param_1 + 0x477c) = 0x0;
                                }
                                Init3DIcons(param_1);
                                Init3DAttackBlocks(param_1);
                                Init3DExplosion(param_1);
                            }
                            if (gTheGame._120360_4_ == 0x6) {
                                *(undefined4 *)(param_1 + 0x4afc) = 0xd5;
                                *(undefined4 *)(param_1 + 0x4ad8) = 0x0;
                                *(undefined4 *)(param_1 + 0x4adc) = 0x0;
                            }
                            else {
                                *(undefined4 *)(param_1 + 0x4afc) = 0xdf;
                                *(undefined4 *)(param_1 + 0x4ad8) = 0x0;
                                *(undefined4 *)(param_1 + 0x4adc) = 0x0;
                            }
                            chain_check._0_4_ = 0x0;
                            chain_check._4_4_ = 0x0;
                            chain_check._8_4_ = 0x0;
                            chain_check._12_4_ = 0x0;
                            anim_bg = 0x0;
                            anim_sp = 0x0;
                            *(undefined4 *)(param_3 + 0x20) = 0x0;
                            if (gTheGame._120360_4_ != 0x6) {
                                gTheGame._120328_4_ = 0x1;
                            }
                            break;
                        case 0x17:
                            *param_2 = 0x34c;
                            break;
                        case 0x18:
                            iVar2 = *(int *)(param_3 + 0x10) + -0x1;
                            *(int *)(param_3 + 0x10) = iVar2;
                            if (0x0 < iVar2) {
                                return;
                            }
                            *(int *)(param_1 + 0x4adc) = puVar5[0x1] * gTheGame._120332_4_;
                            *(int *)(param_1 + 0x4ad8) =
                                 *(int *)(param_1 + 0x4ad8) + *(int *)(param_1 + 0x4adc);
                            break;
                        case 0x19:
                            iVar6 = 0x28;
                            iVar4 = 0x0;
                            iVar2 = 0x0;
                            do {
                                if (*(int *)(gTheGame + iVar2 + 0x2520 + puVar5[0x2] * 0x57c0) ==
                                    0x0) {
                                    iVar4 *= 0x50;
                                    Init2DAttackPosition
                                              (gTheGame + iVar4 + 0x2520 + puVar5[0x2] * 0x57c0,
                                               puVar5[0x1]);
                                    Init2DAttackFace(puVar5[0x2] * 0x57c0 + iVar4 + 0x2a3368);
                                    *(undefined4 *)
                                     (gTheGame + puVar5[0x2] * 0x57c0 + iVar4 + 0x2520) = 0x4;
                                    *(undefined4 *)
                                     (gTheGame + puVar5[0x2] * 0x57c0 + iVar4 + 0x252c) = 0xffffffff
                                    ;
                                    break;
                                }
                                iVar2 += 0x50;
                                iVar4 += 0x1;
                                iVar6 += -0x1;
                            } while (iVar6 != 0x0);
                            break;
                        case 0x1a:
                            *(undefined4 *)(param_3 + 0x2c) = puVar5[0x1];
                            *(undefined4 *)(param_3 + 0x30) = 0x1;
                            break;
                        case 0x1b:
                            screenHideText(*(undefined4 *)(param_3 + 0x24),puVar5[0x1] + -0x1);
                            screenShowText(*(undefined4 *)(param_3 + 0x24),puVar5[0x1]);
                            *(undefined4 *)(param_3 + 0x34) = puVar5[0x1];
                            *(undefined4 *)(param_3 + 0x20) = 0x0;
                            break;
                        case 0x1c:
                            *(undefined4 *)(param_3 + 0x28) = puVar5[0x1];
                            break;
                        case 0x1d:
                            anim_bg = 0x34c;
                            gTheGame._117082_2_ = 0x4;
                            gTheGame._117068_2_ = 0x200;
                            gTheGame._117064_2_ = (undefined2)(puVar5[0x1] << 0x2);
                            gTheGame._117072_2_ = (undefined2)(puVar5[0x2] << 0x2);
                            break;
                        case 0x1e:
                            anim_bg = 0x0;
                            break;
                        case 0x1f:
                            *(undefined4 *)(param_3 + 0x100) = 0x0;
                            uVar1 = (ushort)((uint)gGameStatus >> 0x8);
                            if ((gGameStatus & 0x80) != 0x0) {
                                gMain = 0x1f4;
                                gReset = 0xffffffff;
                                gDemo = 0x21;
                                gGameStatus = uVar1;
                                FadeOutSong(last_song_handle,0x3c);
                                return;
                            }
                            if (gSelection == 0x64) {
                                gReset = 0xffffffff;
                                gMain = 0x2bc;
                                gGameStatus = uVar1;
                                return;
                            }
                            break;
                        case 0x20:
                            iVar2 = *(int *)(param_3 + 0x10) + -0x1;
                            *(int *)(param_3 + 0x10) = iVar2;
                            if (0x0 < iVar2) {
                                return;
                            }
                        }
                    }
                    *(int *)(param_3 + 0x100) = *(int *)(param_3 + 0x100) + -0x1;
                    *(int *)(param_3 + 0xf8) = *(int *)(param_3 + 0xf8) + 0x1;
                } while ((0x0 < *(int *)(param_3 + 0x100)) &&
                        (*(int *)(param_3 + 0x120) == *(int *)(param_3 + 0x124)));
            }
            iVar2 = *(int *)(param_3 + 0x10) + -0x1;
            *(int *)(param_3 + 0x10) = iVar2;
            if ((iVar2 < 0x1) && (*(int *)(param_3 + 0x120) != *(int *)(param_3 + 0x124))) {
                *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_3 + 0xc);
                if (gTheGame._120332_4_ == 0x1) {
                    AI2DMove(param_1,param_2,param_3,0x0);
                }
                else {
                    AI3DMove(param_1,param_2,param_3,0x0);
                }
            }
        }
        else {
            RaiseBlocks(param_1,param_2);
        }
    }
    return;
}



void UpdateMTController(undefined4 param_1,int param_2,int param_3)

{
    ushort uVar1;
    ushort uVar2;
    int iVar3;
    int iVar4;
    
    iVar3 = param_3 * 0x10;
    iVar4 = 0x0;
    uVar1 = *(ushort *)(gTheGame + iVar3 + 0x16344);
    uVar2 = *(ushort *)(gTheGame + iVar3 + 0x16346);
    if (gTheGame._120332_4_ == 0x1) {
        if (*(int *)(brainbrain + param_3 * 0x128 + 0xc) == -0x1) {
            if ((uVar2 & 0x800) == 0x0) {
                if ((uVar2 & 0x400) == 0x0) {
                    if ((uVar2 & 0x200) == 0x0) {
                        if ((uVar2 & 0x100) != 0x0) {
                            iVar4 = Move2DCursorRight(param_2,*(undefined4 *)
                                                               (gTheGame + iVar3 + 0x16348));
                        }
                    }
                    else {
                        iVar4 = Move2DCursorLeft(param_2,*(undefined4 *)(gTheGame + iVar3 + 0x16348)
                                                );
                    }
                }
                else {
                    iVar4 = Move2DCursorDown(param_2,*(undefined4 *)(gTheGame + iVar3 + 0x16348));
                }
            }
            else {
                iVar4 = Move2DCursorUp(param_1,param_2,*(undefined4 *)(gTheGame + iVar3 + 0x16348));
            }
            if (((uVar1 & 0x8000) != 0x0) || ((uVar1 & 0x4000) != 0x0)) {
                Switch2DBlocks(param_1,param_2,param_3);
            }
        }
        else {
            UpdateMT(param_1,param_2);
        }
        Update2DSwitching(param_1,param_2);
    }
    else {
        if (*(int *)(brainbrain + param_3 * 0x128 + 0xc) == -0x1) {
            if ((uVar2 & 0x800) == 0x0) {
                if ((uVar2 & 0x400) == 0x0) {
                    if ((uVar2 & 0x200) == 0x0) {
                        if ((uVar2 & 0x100) != 0x0) {
                            iVar4 = Move3DCursorRight(param_2,*(undefined4 *)
                                                               (gTheGame + iVar3 + 0x16348));
                        }
                    }
                    else {
                        iVar4 = Move3DCursorLeft(param_2,*(undefined4 *)(gTheGame + iVar3 + 0x16348)
                                                );
                    }
                }
                else {
                    iVar4 = Move3DCursorDown(param_2,*(undefined4 *)(gTheGame + iVar3 + 0x16348));
                }
            }
            else {
                iVar4 = Move3DCursorUp(param_1,param_2,*(undefined4 *)(gTheGame + iVar3 + 0x16348));
            }
            if (((uVar1 & 0x8000) != 0x0) || ((uVar1 & 0x4000) != 0x0)) {
                Switch3DBlocks(param_1,param_2,param_3);
            }
        }
        else {
            UpdateMT(param_1,param_2);
        }
        Update3DSwitching(param_1,param_2);
    }
    if (iVar4 != 0x0) {
        PlaySE(SFX_INIT_TABLE,0x33);
    }
    iVar3 = *(int *)(param_2 + 0x24) + -0x1;
    *(int *)(param_2 + 0x24) = iVar3;
    if (iVar3 == 0x0) {
        *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) ^ 0x1;
        *(undefined4 *)(param_2 + 0x24) = 0xf;
    }
    return;
}



void DoMT(void)

{
    int iVar1;
    undefined4 uVar2;
    undefined1 *puVar3;
    int iVar4;
    int iVar5;
    int *piVar6;
    undefined1 *puVar7;
    
    iVar5 = 0x1;
    if (gSelection == 0x6e) {
        MimicCheckState(gTheGame,0x2b6d48);
    }
    else {
        TutorialCheckState(gTheGame,0x2b6d48);
    }
    if (gMain != 0x2bc) {
        if ((gSelection == 0x64) && (gTheGame._120360_4_ == 0x3)) {
            iVar5 = 0x2;
        }
        else if ((gSelection == 0x64) && (gTheGame._120360_4_ == 0x6)) {
            iVar5 = 0x4;
        }
        puVar3 = gTheGame;
        puVar7 = puVar3;
        for (iVar4 = 0x0; iVar4 < iVar5; iVar4 += 0x1) {
            piVar6 = (int *)(puVar3 + 0x15f00);
            if (*(int *)(puVar3 + 0x15f00) != 0x34c) {
                CompactWell(puVar7,iVar4);
            }
            if (iVar4 == 0x0) {
                UpdateMTController(puVar7,piVar6,0x0);
            }
            if (*piVar6 != 0x34c) {
                if (*(int *)(puVar7 + 0x4aa4) != 0x0) {
                    CheckCollision(puVar7);
                }
                *(undefined4 *)(puVar7 + 0x4aa4) = 0x0;
                if (((((gSelection == 0x64) &&
                      (*(int *)(brainbrain + brainbrain._248_4_ * 0xc + 0x44) == 0x15)) &&
                     (iVar1 = screenTextDone(brainbrain._36_4_,brainbrain._52_4_), iVar1 != 0x0)) &&
                    (((gGameStatus & 0x80) == 0x0 && (*piVar6 == 0x0)))) &&
                   (iVar1 = CheckFieldActive(puVar7), iVar1 == 0x0)) {
                    brainbrain._32_4_ = 0xffffffff;
                }
                CheckChainCounter(puVar7,piVar6);
                uVar2 = ComboCount(puVar7,piVar6);
                *(undefined4 *)(puVar7 + 0x4a9c) = 0x0;
                if (gSelection == 0x64) {
                    CheckShake(puVar7,piVar6);
                }
                CheckIcon(puVar7,uVar2,iVar4);
                if (gTheGame._120360_4_ == 0x6) {
                    pon_StartAttack4p(puVar7,iVar4);
                }
                else {
                    StartAttack(puVar7,iVar4);
                }
                UpdateWell(puVar7,piVar6,iVar4,uVar2);
                if (gSelection == 0x64) {
                    ChangeAttack(puVar7,piVar6,iVar4,uVar2);
                }
                UpdateCursor(puVar7,piVar6);
                UpdateIcon(puVar7,piVar6,iVar4);
                if (gSelection == 0x64) {
                    UpdateAttack(puVar7,piVar6,iVar4);
                }
                UpdateExplosion(puVar7);
                UpdateDistance(puVar7,piVar6);
                UpdateAnimation(puVar7,iVar4,0x0);
                UpdateMiscStuff(puVar7,piVar6,iVar4);
                if ((*piVar6 < 0x1) && (gTheGame._120332_4_ << 0x4 <= *(int *)(puVar7 + 0x4ad8))) {
                    *(undefined4 *)(puVar7 + 0x4aa4) = 0xffffffff;
                    AddNewRow(puVar7,piVar6,iVar4);
                    *(undefined4 *)(puVar7 + 0x4ad8) = 0x0;
                }
                if (gTheGame._120332_4_ == 0x2) {
                    Check3DVisibleBlocks(puVar7,piVar6);
                }
                *(undefined4 *)(puVar7 + 0x4adc) = 0x0;
                *(undefined4 *)(puVar7 + 0x4a84) = 0x0;
            }
            puVar7 = puVar7 + 0x57c0;
            puVar3 = puVar3 + 0x110;
        }
    }
    return;
}



void MimicCheckState(int param_1,undefined4 *param_2)

{
    int iVar1;
    
    if (*(int *)(param_1 + 0x4a88) < (int)param_2[0xa]) {
        param_2[0xa] = *(int *)(param_1 + 0x4a88);
    }
    iVar1 = CheckFieldActive(param_1);
    if (iVar1 == 0x0) {
        if ((brainbrain._12_4_ == -0x1) && (*(int *)(param_1 + 0x4a88) == 0x0)) {
            if (brainbrain._56_4_ == 0x5) {
                if (param_2[0xb] == 0x0) {
                    return;
                }
                if (param_2[0xb] == param_2[0xc]) {
                    iVar1 = -0x1;
                }
                else {
                    iVar1 = 0x0;
                }
            }
            else if (param_2[0xa] == 0x0) {
                if (param_2[0xb] == 0x0) {
                    return;
                }
                iVar1 = 0x0;
            }
            else if ((int)-param_2[0xc] < (int)param_2[0xa]) {
                iVar1 = 0x0;
            }
            else {
                iVar1 = -0x1;
            }
            if (iVar1 == 0x0) {
                *param_2 = 0x8;
                PlaySE(SFX_INIT_TABLE,0x3d);
            }
            else {
                *param_2 = 0x7;
                PlaySE(SFX_INIT_TABLE,0xc9);
            }
            gMain = 0x2bc;
        }
        else if (brainbrain._256_4_ < 0x0) {
            brainbrain._12_4_ = -0x1;
            brainbrain._256_4_ = 0x0;
            iVar1 = *(int *)(param_1 + 0x4a88);
            if (iVar1 == -0x3) {
                PlaySE(SFX_INIT_TABLE,0xc9);
            }
            else if (iVar1 == -0x4) {
                PlaySE(SFX_INIT_TABLE,0xca);
            }
            else if (iVar1 < -0x4) {
                PlaySE(SFX_INIT_TABLE,0xcb);
            }
            gMain = 0x2bc;
        }
    }
    if (gMain == 0x2bc) {
        Init2DIcons(param_1);
        Init2DExplosion(param_1);
    }
    return;
}



void Draw2DMT(int param_1)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined1 *puVar3;
    undefined4 *puVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    undefined4 local_44 [0x5];
    
    puVar4 = glistp;
    iVar13 = 0x1;
    if (gSelection == 0x64) {
        puVar1 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar1;
        puVar4[0x1] = 0x0;
        puVar4 = glistp;
        puVar1 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar1;
        puVar4[0x1] = 0x8000;
        pon_gSPObjLoadTxtr(&glistp,&numberLUT);
        pon_gSPObjLoadTxtr(&glistp,&transTexture);
        puVar4 = glistp;
        puVar1 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar1;
        puVar4[0x1] = 0x504240;
        puVar4 = glistp;
        puVar1 = glistp + 0x2;
        *glistp = 0xfc119623;
        glistp = puVar1;
        puVar4[0x1] = 0xff2fffff;
        puVar4 = glistp;
        puVar1 = glistp + 0x2;
        *glistp = 0xfa000000;
        glistp = puVar1;
        puVar4[0x1] = 0xffffff8c;
        if (gTheGame._120360_4_ == 0x3) {
            pon_gSPObjRectangle(&glistp,0x2be0b0);
            pon_gSPObjRectangle(&glistp,0x2be0c8);
        }
        else if (gTheGame._120360_4_ == 0x6) {
            pon_gSPObjRectangle(&glistp,0x2be0b0);
            pon_gSPObjRectangle(&glistp,0x2be0c8);
            pon_gSPObjRectangle(&glistp,0x2be0e0);
            pon_gSPObjRectangle(&glistp,0x2be0f8);
        }
        else {
            pon_gSPObjRectangle(&glistp,0x2be0b0);
        }
    }
    puVar4 = glistp;
    puVar1 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar1;
    puVar4[0x1] = 0x8000;
    pon_gSPObjLoadTxtr(&glistp,colorLUT);
    puVar4 = glistp;
    puVar1 = glistp + 0x2;
    *glistp = 0xe2001e01;
    glistp = puVar1;
    puVar4[0x1] = 0x1;
    puVar4 = glistp;
    puVar1 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar1;
    puVar4[0x1] = 0xf0a4000;
    puVar4 = glistp;
    puVar1 = glistp + 0x2;
    *glistp = 0xfcffffff;
    glistp = puVar1;
    puVar4[0x1] = 0xfffcf279;
    puVar4 = glistp;
    puVar1 = glistp + 0x2;
    *glistp = 0xfa000000;
    glistp = puVar1;
    puVar4[0x1] = 0xffffffff;
    if (anim_bg != 0x0) {
        gMain = 0x38e;
    }
    if ((gSelection == 0x64) && (gTheGame._120360_4_ == 0x3)) {
        iVar13 = 0x2;
        bcopy(gTheGame + 0x57c0,(void *)(param_1 + 0x1e984),0x2520);
        bcopy(gTheGame + 0x96d0,(void *)(param_1 + 0x2cba8),0x6c0);
        bcopy(gTheGame + 0x9d90,(void *)(param_1 + 0x2e078),0x90);
        bcopy(gTheGame + 0x7ce0,(void *)(param_1 + 0x26568),0xc80);
        if (gCounter < 0x1e) {
            bzero((void *)(param_1 + 0x1c41a),0x4);
            bcopy(gTheGame + 0x8960,(void *)(param_1 + 0x28ef8),0x410);
            bcopy(gTheGame + 0x8d70,(void *)(param_1 + 0x2a488),0x960);
        }
    }
    else if ((gSelection == 0x64) && (gTheGame._120360_4_ == 0x6)) {
        iVar12 = 0x1;
        puVar3 = gTheGame;
        iVar11 = param_1 + 0x2520;
        iVar10 = param_1 + 0x6c0;
        iVar9 = param_1 + 0x90;
        iVar8 = param_1 + 0xc80;
        iVar6 = param_1 + 0xa;
        iVar5 = param_1 + 0x410;
        iVar7 = param_1 + 0x960;
        iVar13 = 0x4;
        do {
            puVar3 = puVar3 + 0x57c0;
            bcopy(puVar3,(void *)(iVar11 + 0x1c464),0x2520);
            bcopy(puVar3 + 0x3f10,(void *)(iVar10 + 0x2c4e8),0x6c0);
            bcopy(puVar3 + 0x45d0,(void *)(iVar9 + 0x2dfe8),0x90);
            bcopy(puVar3 + 0x2520,(void *)(iVar8 + 0x258e8),0xc80);
            if (gCounter < 0x1e) {
                bzero((void *)(iVar6 + 0x1c410),0x4);
                bcopy(puVar3 + 0x31a0,(void *)(iVar5 + 0x28ae8),0x410);
                bcopy(puVar3 + 0x35b0,(void *)(iVar7 + 0x29b28),0x960);
            }
            iVar12 += 0x1;
            iVar11 += 0x2520;
            iVar10 += 0x6c0;
            iVar9 += 0x90;
            iVar8 += 0xc80;
            iVar6 += 0xa;
            iVar5 += 0x410;
            iVar7 += 0x960;
        } while (iVar12 < 0x4);
    }
    puVar3 = gTheGame;
    puVar4 = local_44;
    for (iVar7 = 0x0; puVar1 = glistp, iVar7 < iVar13; iVar7 += 0x1) {
        Draw2DTetrisWell(param_1,puVar3,iVar7);
        uVar2 = Draw2DAttackBlock(param_1,iVar7);
        *puVar4 = uVar2;
        puVar3 = puVar3 + 0x57c0;
        puVar4 = puVar4 + 0x1;
    }
    if (gSelection == 0x6e) {
        gMain = 0x341;
    }
    else {
        gMain = 0x34c;
    }
    puVar4 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar4;
    puVar1[0x1] = 0x0;
    puVar4 = glistp;
    puVar1 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar1;
    puVar4[0x1] = 0x8000;
    puVar4 = glistp;
    puVar1 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar1;
    puVar4[0x1] = 0x0;
    puVar4 = glistp;
    puVar1 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar1;
    puVar4[0x1] = 0x200000;
    pon_gSPObjLoadTxtr(&glistp,0x2be3f0);
    pon_gSPBgRectCopy(&glistp,0x2be350);
    if (iVar13 == 0x2) {
        pon_gSPObjLoadTxtr(&glistp,0x2be408);
        pon_gSPBgRectCopy(&glistp,0x2be378);
    }
    else if (iVar13 == 0x4) {
        pon_gSPObjLoadTxtr(&glistp,0x2be408);
        pon_gSPBgRectCopy(&glistp,0x2be378);
        pon_gSPObjLoadTxtr(&glistp,0x2be420);
        pon_gSPBgRectCopy(&glistp,0x2be3a0);
        pon_gSPObjLoadTxtr(&glistp,0x2be438);
        pon_gSPBgRectCopy(&glistp,0x2be3c8);
    }
    puVar4 = glistp;
    puVar1 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar1;
    puVar4[0x1] = 0x0;
    puVar4 = glistp;
    puVar1 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar1;
    puVar4[0x1] = 0xf0a4000;
    puVar4 = glistp;
    puVar1 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar1;
    puVar4[0x1] = 0x0;
    puVar4 = glistp;
    puVar1 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar1;
    puVar4[0x1] = 0x8000;
    pon_gSPObjLoadTxtr(&glistp,colorLUT);
    puVar4 = local_44;
    for (iVar7 = 0x0; iVar7 < iVar13; iVar7 += 0x1) {
        Draw2DAttackBrick(param_1,iVar7,*puVar4);
        Draw2DExplosion(param_1,iVar7);
        Draw2DIcon(param_1,iVar7);
        puVar4 = puVar4 + 0x1;
    }
    if (*(int *)(param_1 + 0x2c0a8) != 0x34c) {
        Draw2DCursor(param_1);
    }
    if (((gSelection == 0x64) && (anim_bg == 0x34c)) &&
       (iVar13 = DoFlashDrawAlways(), puVar4 = glistp, iVar13 != 0x0)) {
        puVar1 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar1;
        puVar4[0x1] = 0x0;
        puVar4 = glistp;
        puVar1 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar1;
        puVar4[0x1] = 0x8000;
        pon_gSPObjLoadTxtr(&glistp,&numberLUT);
        puVar4 = glistp;
        puVar1 = glistp + 0x2;
        *glistp = 0xe3000a01;
        glistp = puVar1;
        puVar4[0x1] = 0x0;
        puVar4 = glistp;
        puVar1 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar1;
        puVar4[0x1] = 0xf0a4000;
        puVar4 = glistp;
        puVar1 = glistp + 0x2;
        *glistp = 0xfcffffff;
        glistp = puVar1;
        puVar4[0x1] = 0xfffcf279;
        pon_gSPObjLoadTxtr(&glistp,&arrowTexture);
        pon_gSPObjRectangle(&glistp,0x2bd790);
    }
    if ((gSelection == 0x64) && (gTheGame._120360_4_ == 0x1)) {
        Draw2DSmoke(param_1,0x0);
    }
    return;
}



void Draw3DMT(int param_1)

{
    uint *puVar1;
    uint *puVar2;
    int iVar3;
    undefined1 *puVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    ushort local_34 [0x2];
    
    puVar1 = glistp;
    if (gSelection == 0x64) {
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar4 = shade3d;
        iVar9 = 0x6;
        puVar2 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe3000c00;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        iVar7 = 0x0;
        puVar2 = glistp + 0x2;
        *glistp = 0xe3000a01;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar2;
        puVar1[0x1] = 0x404240;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfc11fe23;
        glistp = puVar2;
        puVar1[0x1] = 0xfffff3f9;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfa000000;
        glistp = puVar2;
        puVar1[0x1] = 0x323232ff;
        do {
            puVar1 = glistp;
            iVar3 = 0xbd - iVar7;
            if (0x20 < iVar3) {
                iVar3 = 0x20;
            }
            uVar5 = (iVar3 * 0x80 + 0x1 >> 0x1) - 0x1;
            puVar2 = glistp + 0x2;
            *glistp = 0xfd900000;
            glistp = puVar2;
            puVar1[0x1] = (uint)puVar4;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf5900000;
            glistp = puVar2;
            puVar1[0x1] = 0x7000000;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf3000000;
            glistp = puVar2;
            if (0x7fe < (int)uVar5) {
                uVar5 = 0x7ff;
            }
            puVar1[0x1] = (uVar5 & 0xfff) << 0xc | 0x7000080;
            puVar1 = glistp;
            iVar8 = iVar7 + iVar3 + 0x20;
            iVar6 = iVar7 + 0x20;
            puVar2 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar4 = puVar4 + iVar3 * 0x80;
            puVar2 = glistp + 0x2;
            *glistp = 0xf5882000;
            glistp = puVar2;
            iVar7 += 0x20;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar2;
            puVar1[0x1] = (iVar3 + -0x1) * 0x4 & 0xffcU | 0x1fc000;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = iVar8 * 0x4 & 0xffcU | 0xe425c000;
            glistp = puVar2;
            puVar1[0x1] = iVar6 * 0x4 & 0xffcU | 0x5c000;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe1000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf1000000;
            glistp = puVar2;
            puVar1[0x1] = 0x4000400;
            iVar9 += -0x1;
        } while (iVar9 != 0x0);
    }
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe2001e01;
    glistp = puVar2;
    puVar1[0x1] = 0x1;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3001201;
    glistp = puVar2;
    puVar1[0x1] = 0x2000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar2;
    puVar1[0x1] = 0x8000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfd100000;
    glistp = puVar2;
    puVar1[0x1] = (uint)colorTable;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe8000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5000100;
    glistp = puVar2;
    puVar1[0x1] = 0x7000000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe6000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf0000000;
    glistp = puVar2;
    puVar1[0x1] = 0x73fc000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    gTransMtx._48_4_ = 0xbf028f5c;
    gTransMtx._52_4_ = gTheGame._18280_4_ + 0.01;
    guMtxF2L(gTransMtx,param_1 + 0x1c200);
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xda380007;
    glistp = puVar2;
    puVar1[0x1] = param_1 + 0x1c200;
    guPerspective(0x4040800000000000,0x3fec28f5c0000000,0x4024000000000000,0x40a7700000000000,
                  0x3ff0000000000000,param_1 + 0x1c000,local_34);
    guLookAt(0x0,0x0,0x408c200000000000,0x0,0x0,0x0,0x0,0x3ff0000000000000,param_1 + 0x1c100);
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xdb0e0000;
    glistp = puVar2;
    puVar1[0x1] = (uint)local_34[0];
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xda380005;
    glistp = puVar2;
    puVar1[0x1] = param_1 + 0x1c000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xda380005;
    glistp = puVar2;
    puVar1[0x1] = param_1 + 0x1c100;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xed000083;
    glistp = puVar2;
    puVar1[0x1] = 0x50037b;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfc121824;
    glistp = puVar2;
    puVar1[0x1] = 0xff33ffff;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar2;
    puVar1[0x1] = 0x552008;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xda380003;
    glistp = puVar2;
    puVar1[0x1] = (uint)gIdent;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xda380005;
    glistp = puVar2;
    puVar1[0x1] = param_1 + 0x1c300;
    Draw3DTetrisNewBlock(param_1,gTheGame);
    if (anim_bg != 0x0) {
        gMain = 0x38e;
    }
    Draw3DBackTetrisWell(param_1,0x0);
    Draw3DFrontTetrisWell(param_1,0x0);
    if (gSelection == 0x6e) {
        gMain = 0x341;
    }
    else {
        gMain = 0x34c;
    }
    Draw3DIcon(param_1,0x0);
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xed000023;
    glistp = puVar2;
    puVar1[0x1] = 0x5003c3;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3000c00;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfcffffff;
    glistp = puVar2;
    puVar1[0x1] = 0xfffcf279;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar2;
    puVar1[0x1] = 0xf0a7008;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe2001e01;
    glistp = puVar2;
    puVar1[0x1] = 0x1;
    Draw3DExplosion(param_1,0x0);
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    if (*(int *)(param_1 + 0x2c0a8) != 0x34c) {
        Draw3DCursor(param_1);
    }
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xd7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    return;
}



void mimicTickText(int param_1)

{
    int iVar1;
    undefined auStack_c [0x4];
    
    if ((gnTagTextMimic != -0x1) && (0x0 < gnTagTextMimic)) {
        iVar1 = screenTextDone(giScreenMimic);
        if (iVar1 == 0x0) {
            if (param_1 != 0x0) {
                screenShowTextFull(giScreenMimic,gnTagTextMimic);
            }
            gnTickTextMimic = 0x0;
        }
        else {
            if (geModeMimic == 0x1) {
                if ((gTheGame._90948_2_ & 0x8000) == 0x0) {
                    iVar1 = 0x0;
                }
                else {
                    iVar1 = -0x1;
                }
            }
            else {
                gnTickTextMimic += 0x1;
                if (gnTickTextMimic < 0x3d) {
                    iVar1 = 0x0;
                }
                else {
                    iVar1 = -0x1;
                }
            }
            if (iVar1 != 0x0) {
                iVar1 = screenGetTextType(giScreenMimic,gnTagTextMimic + 0x1,auStack_c);
                if (iVar1 == 0x0) {
                    gnTagTextMimic = -gnTagTextMimic;
                }
                else {
                    screenHideText(giScreenMimic,gnTagTextMimic);
                    gnTickTextMimic = 0x0;
                    gnTagTextMimic += 0x1;
                    screenShowText(giScreenMimic);
                }
            }
        }
    }
    return;
}



void DrawMT(undefined4 param_1)

{
    int iVar1;
    
    tut_dynamicp = param_1;
    screenDraw(&glistp,DrawTUT);
    iVar1 = screenFlushing();
    if (((iVar1 == 0x0) && (gMain == 0x341)) && (0x2 < geModeMimic)) {
        if (gTheGame._120332_4_ == 0x1) {
            Draw2DMT(param_1);
        }
        else {
            Draw3DMT(param_1);
        }
    }
    return;
}



void DoMimic(void)

{
    bool bVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    int iVar8;
    uint uVar9;
    int iVar10;
    undefined auStack_98 [0x4];
    undefined auStack_94 [0x4];
    undefined auStack_90 [0x4];
    undefined4 local_8c;
    int local_88;
    int local_84;
    undefined auStack_80 [0x4];
    undefined auStack_7c [0x4];
    undefined auStack_78 [0x4];
    undefined4 local_74;
    int local_70;
    int local_6c;
    undefined auStack_68 [0x4];
    undefined auStack_64 [0x8];
    undefined auStack_5c [0x4];
    int local_58;
    undefined auStack_54 [0x4];
    undefined auStack_50 [0x4];
    undefined auStack_4c [0x4];
    undefined auStack_48 [0x4];
    uint local_44;
    undefined4 local_40;
    int local_34;
    int local_30 [0x3];
    
    iVar4 = screenFlushing();
    if (iVar4 == 0x0) {
        peelTick();
    }
    uVar6 = giScreenMimic;
    iVar8 = 0x0;
    iVar10 = 0x0;
    gnTickMimic += 0x1;
    iVar4 = gnTagTextMimic;
    if ((gnTagTextMimic != -0x1) && (gnTagTextMimic < 0x0)) {
        iVar4 = -gnTagTextMimic;
    }
    if (geModeMimic == 0x1) {
        uVar7 = 0xffffffff;
    }
    else {
        uVar7 = 0x0;
    }
    menuTickFairy(giScreenMimic,gnTickMimic,iVar4,0x2fffc,0xffd80000,0x4,uVar7);
    local_40 = 0x0;
    local_44 = (uint)((gTheGame._90950_2_ & 0x800) != 0x0);
    if ((gTheGame._90950_2_ & 0x400) != 0x0) {
        local_44 = 0x2;
    }
    if ((gTheGame._90950_2_ & 0x200) != 0x0) {
        local_44 = 0x3;
    }
    if ((gTheGame._90950_2_ & 0x100) != 0x0) {
        local_44 = 0x4;
    }
    screenTick(&local_44);
    if (local_44 == 0x0) {
        if ((gTheGame._90948_2_ & 0x8000) != 0x0) {
            local_44 = 0x20;
        }
        if ((gTheGame._90948_2_ & 0x4000) != 0x0) {
            local_44 = 0x21;
        }
        if ((gTheGame._90948_2_ & 0x1000) != 0x0) {
            local_44 = 0x22;
        }
    }
    else {
        PlaySE(SFX_INIT_TABLE,0x1);
    }
    screenGetCursor(uVar6,0x64,local_30,&local_34);
    gTheGame._120364_4_ = local_34 + 0x1;
    if (local_44 - 0x1 < 0x2) {
        screenSetCursor(uVar6,0x65,(&giScreenMimic)[gTheGame._120364_4_],0x0);
    }
    screenGetCursor(uVar6,0x65,local_30,&local_34);
    gTheGame._120372_4_ = local_30[0] + 0x1;
    if (gTheGame._120364_4_ < 0x1) {
        gc_assert(0x0,_345,0xe74,_1044,0x0,0x0,0x0);
    }
    iVar5 = gTheGame._120364_4_;
    uVar9 = 0x0;
    (&giScreenMimic)[gTheGame._120364_4_] = local_30[0];
    iVar4 = gnTagTextMimic;
    switch(geModeMimic) {
    case 0x0:
        uVar9 = 0x1;
        break;
    case 0x1:
        if (local_44 == 0x21) {
            iVar10 = -0x1;
        }
        bVar1 = true;
        if ((gnTagTextMimic != -0x1) && (-0x1 < gnTagTextMimic)) {
            bVar1 = false;
        }
        if (bVar1) {
            iVar5 = -0x1;
        }
        else {
            iVar5 = 0x0;
        }
        if ((iVar5 != 0x0) || (local_44 == 0x22)) {
            uVar9 = 0x2;
        }
        break;
    case 0x2:
        if (local_44 - 0x1 < 0x2) {
            if (geModeMimic == 0x0) {
                gnTagTextMimic = 0x1f4;
            }
            else {
                gnTagTextMimic = gTheGame._120368_4_ * 0x2710 + iVar5 * 0x3e8;
            }
            gnTickTextMimic = 0x0;
            iVar5 = screenGetTextType(giScreenMimic,gnTagTextMimic,auStack_48);
            if (iVar5 != 0x0) {
                screenHideText(giScreenMimic,0xc00001f4);
                screenShowText(giScreenMimic,gnTagTextMimic);
                iVar4 = gnTagTextMimic;
            }
        }
        gnTagTextMimic = iVar4;
        if (local_44 == 0x21) {
            iVar10 = -0x1;
        }
        iVar4 = gnTagTextMimic;
        if (local_44 == 0x20) {
            uVar9 = 0x3;
        }
        break;
    case 0x3:
        if (local_44 - 0x3 < 0x2) {
            if (geModeMimic == 0x0) {
                gnTagTextMimic = 0x1fe;
            }
            else {
                gnTagTextMimic =
                     gTheGame._120372_4_ * 0x64 + gTheGame._120368_4_ * 0x2710 + iVar5 * 0x3e8 + 0xa
                ;
            }
            gnTickTextMimic = 0x0;
            iVar5 = screenGetTextType(giScreenMimic,gnTagTextMimic,auStack_4c);
            if (iVar5 != 0x0) {
                screenHideText(giScreenMimic,0xc00001f4);
                screenShowText(giScreenMimic,gnTagTextMimic);
                iVar4 = gnTagTextMimic;
            }
        }
        gnTagTextMimic = iVar4;
        iVar4 = gnTagTextMimic;
        if ((local_44 != 0x0) && (local_44 != 0x22)) {
            iVar8 = 0x1;
        }
        if (local_44 == 0x21) {
            uVar9 = 0x2;
        }
        if (local_44 == 0x20) {
            if (geModeMimic == 0x0) {
                gnTagTextMimic = 0x208;
            }
            else {
                gnTagTextMimic =
                     gTheGame._120372_4_ * 0x64 +
                     gTheGame._120368_4_ * 0x2710 + gTheGame._120364_4_ * 0x3e8 + 0x14;
            }
            gnTickTextMimic = 0x0;
            iVar5 = screenGetTextType(giScreenMimic,gnTagTextMimic,auStack_50);
            if (iVar5 != 0x0) {
                screenHideText(giScreenMimic,0xc00001f4);
                screenShowText(giScreenMimic,gnTagTextMimic);
                iVar4 = gnTagTextMimic;
            }
            gnTagTextMimic = iVar4;
            uVar9 = 0x4;
            iVar4 = gnTagTextMimic;
        }
        break;
    case 0x4:
        bVar1 = true;
        if ((gnTagTextMimic != -0x1) && (-0x1 < gnTagTextMimic)) {
            bVar1 = false;
        }
        if (bVar1) {
            iVar5 = -0x1;
        }
        else {
            iVar5 = 0x0;
        }
        if (iVar5 == 0x0) {
            if (local_44 == 0x21) {
                uVar9 = 0x3;
            }
        }
        else {
            uVar9 = 0x5;
        }
        break;
    case 0x5:
        if ((gTheGame._90948_2_ & 0x4000) == 0x0) {
            DoMT();
            if (gMain == 0x2bc) {
                gMain = 0x341;
                iVar4 = -0x1;
            }
            else {
                iVar4 = 0x0;
            }
        }
        else {
            PlaySE(SFX_INIT_TABLE,0x6);
            iVar4 = -0x1;
        }
        iVar5 = gnTagTextMimic;
        if (iVar4 != 0x0) {
            if ((gTheGame._120360_4_ == 0x3) || (0x2 < gTheGame._120372_4_)) {
                if (geModeMimic == 0x0) {
                    gnTagTextMimic = 0x212;
                }
                else {
                    gnTagTextMimic =
                         gTheGame._120372_4_ * 0x64 +
                         gTheGame._120368_4_ * 0x2710 + gTheGame._120364_4_ * 0x3e8 + 0x1e;
                }
                gnTickTextMimic = 0x0;
                iVar4 = screenGetTextType(giScreenMimic,gnTagTextMimic,auStack_5c);
                if (iVar4 != 0x0) {
                    screenHideText(giScreenMimic,0xc00001f4);
                    screenShowText(giScreenMimic,gnTagTextMimic);
                    iVar5 = gnTagTextMimic;
                }
                gnTagTextMimic = iVar5;
                uVar9 = 0x6;
            }
            else {
                screenGetCursor(giScreenMimic,0x65,&local_58,auStack_54);
                if (gTheGame._120368_4_ == 0x4) {
                    if (local_58 < 0x5) {
                        local_58 += 0x1;
                    }
                }
                else if (gTheGame._120364_4_ < 0x3) {
                    if (local_58 < 0x4) {
                        local_58 += 0x1;
                    }
                }
                else if (local_58 < 0x3) {
                    local_58 += 0x1;
                }
                screenSetCursor(giScreenMimic,0x65,local_58,0x0);
                gTheGame._120372_4_ = local_58 + 0x1;
                uVar9 = 0x3;
            }
        }
        iVar4 = gnTagTextMimic;
        if (local_44 == 0x21) {
            uVar9 = 0x3;
        }
        break;
    case 0x6:
        bVar1 = true;
        if ((gnTagTextMimic != -0x1) && (-0x1 < gnTagTextMimic)) {
            bVar1 = false;
        }
        if (bVar1) {
            iVar3 = -0x1;
        }
        else {
            iVar3 = 0x0;
        }
        if (iVar3 != 0x0) {
            if (gTheGame._120360_4_ == 0x3) {
                if (geModeMimic == 0x0) {
                    gnTagTextMimic = 0x21c;
                }
                else {
                    gnTagTextMimic =
                         gTheGame._120372_4_ * 0x64 + gTheGame._120368_4_ * 0x2710 + iVar5 * 0x3e8 +
                         0x28;
                }
                gnTickTextMimic = 0x0;
                iVar5 = screenGetTextType(giScreenMimic,gnTagTextMimic,auStack_64);
                if (iVar5 != 0x0) {
                    screenHideText(giScreenMimic,0xc00001f4);
                    screenShowText(giScreenMimic,gnTagTextMimic);
                    iVar4 = gnTagTextMimic;
                }
                gnTagTextMimic = iVar4;
                uVar9 = 0x7;
                iVar4 = gnTagTextMimic;
            }
            else {
                screenGetCursor(giScreenMimic,0x65,&local_6c,auStack_68);
                iVar4 = local_6c;
                if (gTheGame._120368_4_ == 0x4) {
                    if (local_6c < 0x5) {
                        local_6c += 0x1;
                    }
                }
                else if (gTheGame._120364_4_ < 0x3) {
                    if (local_6c < 0x4) {
                        local_6c += 0x1;
                    }
                }
                else if (local_6c < 0x3) {
                    local_6c += 0x1;
                }
                screenSetCursor(giScreenMimic,0x65,local_6c,0x0);
                gTheGame._120372_4_ = local_6c + 0x1;
                if (iVar4 == local_6c) {
                    iVar4 = 0x0;
                }
                else {
                    iVar4 = -0x1;
                }
                if (iVar4 == 0x0) {
                    screenGetCursor(giScreenMimic,0x64,&local_74,&local_70);
                    if (gTheGame._120368_4_ != 0x4) {
                        if (local_70 < 0x3) {
                            local_70 += 0x1;
                        }
                        else {
                            local_70 = 0x0;
                        }
                    }
                    screenSetCursor(giScreenMimic,0x64,local_74,local_70);
                    gTheGame._120364_4_ = local_70 + 0x1;
                    screenSetCursor(giScreenMimic,0x65,0x0,0x0);
                    gTheGame._120372_4_ = 0x1;
                    uVar9 = 0x2;
                    iVar4 = gnTagTextMimic;
                }
                else {
                    uVar9 = 0x3;
                    iVar4 = gnTagTextMimic;
                }
            }
        }
        break;
    case 0x7:
        uVar9 = 0x8;
        break;
    case 0x8:
        iVar5 = 0xabcd;
        if ((gTheGame._90948_2_ & 0x4000) == 0x0) {
            DoMT();
            if (gMain == 0x2bc) {
                if (gTheGame._89856_4_ == 0x7) {
                    iVar5 = -0x1;
                }
                else if (gTheGame._89856_4_ == 0x8) {
                    iVar5 = 0x0;
                }
                gMain = 0x341;
                iVar3 = -0x1;
            }
            else {
                iVar3 = 0x0;
            }
        }
        else {
            PlaySE(SFX_INIT_TABLE,0x6);
            iVar3 = -0x1;
        }
        iVar4 = gnTagTextMimic;
        if (iVar3 != 0x0) {
            if (iVar5 == 0xabcd) {
                iVar8 = 0x1;
                if (geModeMimic == 0x0) {
                    gnTagTextMimic = 0x208;
                }
                else {
                    gnTagTextMimic =
                         gTheGame._120372_4_ * 0x64 +
                         gTheGame._120368_4_ * 0x2710 + gTheGame._120364_4_ * 0x3e8 + 0x14;
                }
                gnTickTextMimic = 0x0;
                iVar5 = screenGetTextType(giScreenMimic,gnTagTextMimic,auStack_78);
                if (iVar5 != 0x0) {
                    screenHideText(giScreenMimic,0xc00001f4);
                    screenShowText(giScreenMimic,gnTagTextMimic);
                    iVar4 = gnTagTextMimic;
                }
                gnTagTextMimic = iVar4;
                uVar9 = 0x4;
                iVar4 = gnTagTextMimic;
            }
            else {
                uVar9 = 0x9;
                if (iVar5 == 0x0) {
                    if (geModeMimic == 0x0) {
                        gnTagTextMimic = 0x230;
                    }
                    else {
                        gnTagTextMimic =
                             gTheGame._120372_4_ * 0x64 +
                             gTheGame._120368_4_ * 0x2710 + gTheGame._120364_4_ * 0x3e8 + 0x3c;
                    }
                    gnTickTextMimic = 0x0;
                    iVar5 = screenGetTextType(giScreenMimic,gnTagTextMimic,auStack_90);
                    if (iVar5 != 0x0) {
                        screenHideText(giScreenMimic,0xc00001f4);
                        screenShowText(giScreenMimic,gnTagTextMimic);
                        iVar4 = gnTagTextMimic;
                    }
                }
                else {
                    if (geModeMimic == 0x0) {
                        gnTagTextMimic = 0x226;
                    }
                    else {
                        gnTagTextMimic =
                             gTheGame._120372_4_ * 0x64 +
                             gTheGame._120368_4_ * 0x2710 + gTheGame._120364_4_ * 0x3e8 + 0x32;
                    }
                    gnTickTextMimic = 0x0;
                    iVar5 = screenGetTextType(giScreenMimic,gnTagTextMimic,auStack_7c);
                    if (iVar5 != 0x0) {
                        screenHideText(giScreenMimic,0xc00001f4);
                        screenShowText(giScreenMimic,gnTagTextMimic);
                        iVar4 = gnTagTextMimic;
                    }
                    gnTagTextMimic = iVar4;
                    screenGetCursor(giScreenMimic,0x65,&local_84,auStack_80);
                    iVar4 = local_84;
                    if (gTheGame._120368_4_ == 0x4) {
                        if (local_84 < 0x5) {
                            local_84 += 0x1;
                        }
                    }
                    else if (gTheGame._120364_4_ < 0x3) {
                        if (local_84 < 0x4) {
                            local_84 += 0x1;
                        }
                    }
                    else if (local_84 < 0x3) {
                        local_84 += 0x1;
                    }
                    screenSetCursor(giScreenMimic,0x65,local_84,0x0);
                    gTheGame._120372_4_ = local_84 + 0x1;
                    if (iVar4 == local_84) {
                        iVar5 = 0x0;
                    }
                    else {
                        iVar5 = -0x1;
                    }
                    iVar4 = gnTagTextMimic;
                    if (iVar5 == 0x0) {
                        screenGetCursor(giScreenMimic,0x64,&local_8c,&local_88);
                        if (gTheGame._120368_4_ != 0x4) {
                            if (local_88 < 0x3) {
                                local_88 += 0x1;
                            }
                            else {
                                local_88 = 0x0;
                            }
                        }
                        screenSetCursor(giScreenMimic,0x64,local_8c,local_88);
                        gTheGame._120364_4_ = local_88 + 0x1;
                        screenSetCursor(giScreenMimic,0x65,0x0,0x0);
                        gTheGame._120372_4_ = 0x1;
                        uVar9 = 0xa;
                        iVar4 = gnTagTextMimic;
                    }
                }
            }
        }
        break;
    case 0x9:
        bVar1 = true;
        if ((gnTagTextMimic != -0x1) && (-0x1 < gnTagTextMimic)) {
            bVar1 = false;
        }
        if (bVar1) {
            iVar5 = -0x1;
        }
        else {
            iVar5 = 0x0;
        }
        if (iVar5 != 0x0) {
            uVar9 = 0x3;
        }
        break;
    case 0xa:
        bVar1 = true;
        if ((gnTagTextMimic != -0x1) && (-0x1 < gnTagTextMimic)) {
            bVar1 = false;
        }
        if (bVar1) {
            iVar5 = -0x1;
        }
        else {
            iVar5 = 0x0;
        }
        if (iVar5 != 0x0) {
            uVar9 = 0x2;
        }
    }
    gnTagTextMimic = iVar4;
    uVar2 = geModeMimic;
    if (uVar9 != 0x0) {
        if (geModeMimic == 0x4) {
            PlaySE(SFX_INIT_TABLE,0x4);
        }
        else if ((geModeMimic != 0x0) && (geModeMimic != 0x1)) {
            if (local_44 == 0x21) {
                uVar7 = 0x6;
            }
            else {
                uVar7 = 0x2;
            }
            PlaySE(SFX_INIT_TABLE,uVar7);
        }
        screenHideArea(uVar6,0x64);
        screenHideArea(uVar6,0x65);
        screenHideImage(uVar6,0x64);
        screenHideImage(uVar6,0x65);
        screenHideText(uVar6,0x80778064);
        iVar4 = gnTagTextMimic;
        if ((gTheGame._120368_4_ == 0x4) && (uVar9 == 0x2)) {
            if (geModeMimic == 0x3) {
                iVar10 = -0x1;
            }
            else {
                gTheGame._120364_4_ = 0x1;
                uVar9 = 0x3;
            }
        }
        if (uVar9 == 0x3) {
            iVar8 = 0x1;
        }
        if (uVar9 == 0x8) {
            iVar8 = 0x2;
        }
        uVar2 = uVar9;
        if (uVar9 == 0x3) {
            if (geModeMimic == 0x0) {
                gnTagTextMimic = 0x1fe;
            }
            else {
                gnTagTextMimic =
                     gTheGame._120372_4_ * 0x64 +
                     gTheGame._120368_4_ * 0x2710 + gTheGame._120364_4_ * 0x3e8 + 0xa;
            }
            gnTickTextMimic = 0x0;
            iVar5 = screenGetTextType(giScreenMimic,gnTagTextMimic,auStack_98);
            if (iVar5 != 0x0) {
                screenHideText(giScreenMimic,0xc00001f4);
                screenShowText(giScreenMimic,gnTagTextMimic);
                iVar4 = gnTagTextMimic;
            }
            gnTagTextMimic = iVar4;
            screenHideImage(uVar6,0x64);
            screenShowImage(uVar6,0x65);
            screenShowSlot(uVar6,0x65,0x0,0x0);
            screenShowSlot(uVar6,0x65,0x1,0x0);
            screenShowSlot(uVar6,0x65,0x2,0x0);
            screenShowSlot(uVar6,0x65,0x3,0x0);
            screenShowSlot(uVar6,0x65,0x4,0x0);
            screenShowSlot(uVar6,0x65,0x5,0x0);
            screenGetCursor(giScreenMimic,0x65,local_30,&local_34);
            if (gTheGame._120368_4_ == 0x4) {
                screenShowText(uVar6,0x70);
            }
            else {
                screenHideSlot(uVar6,0x65,0x5,0x0);
                if (gTheGame._120364_4_ < 0x3) {
                    if (0x4 < local_30[0]) {
                        local_30[0] = 0x4;
                    }
                    screenShowText(uVar6,0x6f);
                }
                else {
                    if (0x3 < local_30[0]) {
                        local_30[0] = 0x3;
                    }
                    screenHideSlot(uVar6,0x65,0x4,0x0);
                    screenShowText(uVar6,0x6e);
                }
            }
            screenSetCursor(giScreenMimic,0x65,local_30[0],0x0);
            screenShowArea(uVar6,0x65);
            screenSetArea(uVar6,0x65,0x0);
        }
        else if ((uVar9 < 0x3) && (0x1 < uVar9)) {
            if (geModeMimic == 0x0) {
                gnTagTextMimic = 0x1f4;
            }
            else {
                gnTagTextMimic = gTheGame._120368_4_ * 0x2710 + gTheGame._120364_4_ * 0x3e8;
            }
            gnTickTextMimic = 0x0;
            iVar5 = screenGetTextType(giScreenMimic,gnTagTextMimic,auStack_94);
            if (iVar5 != 0x0) {
                screenHideText(giScreenMimic,0xc00001f4);
                screenShowText(giScreenMimic,gnTagTextMimic);
                iVar4 = gnTagTextMimic;
            }
            gnTagTextMimic = iVar4;
            screenShowImage(uVar6,0x64);
            screenHideImage(uVar6,0x65);
            if (gTheGame._120368_4_ == 0x2) {
                screenShowText(uVar6,0x806d8069);
            }
            else {
                screenShowText(uVar6,0x80688064);
            }
            screenShowArea(uVar6,0x64);
            screenSetArea(uVar6,0x64,0x0);
        }
    }
    geModeMimic = uVar2;
    if (iVar8 != 0x0) {
        screenGetCursor(uVar6,0x64,local_30,&local_34);
        gTheGame._120364_4_ = local_34 + 0x1;
        screenGetCursor(uVar6,0x65,local_30,&local_34);
        gTheGame._120372_4_ = local_30[0] + 0x1;
        if (iVar8 == 0x1) {
            if (gTheGame._120360_4_ == 0x3) {
                uVar6 = 0xffffffff;
            }
            else {
                uVar6 = 0x0;
            }
            LoadMimic1(gTheGame._120368_4_,gTheGame._120364_4_,gTheGame._120372_4_,uVar6);
        }
        else {
            if (gTheGame._120360_4_ == 0x3) {
                uVar6 = 0xffffffff;
            }
            else {
                uVar6 = 0x0;
            }
            LoadMimic1(gTheGame._120368_4_,gTheGame._120364_4_,gTheGame._120372_4_,uVar6);
            PlaySE(SFX_INIT_TABLE,0x2c);
            brainbrain._12_4_ = 0xffffffff;
            brainbrain._256_4_ = 0x0;
        }
    }
    if (iVar10 != 0x0) {
        gMain = 0x2bc;
        gReset = 0xffffffff;
        gGameStatus = (ushort)((uint)gGameStatus >> 0x8);
        PlaySE(SFX_INIT_TABLE,0x6);
    }
    bVar1 = false;
    if ((uVar9 == 0x0) && (local_44 == 0x20)) {
        bVar1 = true;
    }
    if (bVar1) {
        uVar6 = 0xffffffff;
    }
    else {
        uVar6 = 0x0;
    }
    mimicTickText(uVar6);
    return;
}



void InitMimic(void)

{
    int iVar1;
    int iVar2;
    undefined auStack_20 [0x4];
    undefined4 local_1c;
    
    gnTickMimic = 0x0;
    gnTagTextMimic = -0x1;
    gaiCursorX._12_4_ = 0x0;
    gaiCursorX._8_4_ = 0x0;
    gaiCursorX._4_4_ = 0x0;
    gaiCursorX._0_4_ = 0x0;
    pon_ClearHeap();
    nextSegment = Pon_Image_Heap;
    n642Dolphin_AllchangeTexture();
    gGameStatus <<= 0x8;
    InitCharacter(0x0,0xffffffff);
    LoadFairySoundData(0x0,0x0,0xffffffff);
    nextSegment = Pon_Image_Heap;
    local_1c = Pon_Image_Heap;
    _1060[5] = (char)gTheGame._120368_4_ + '0';
    iVar2 = screenLoad(_1060,&local_1c);
    iVar1 = gnTagTextMimic;
    if (iVar2 != 0x0) {
        giScreenMimic = screenSet(_1061,0x1);
        iVar1 = gnTagTextMimic;
        geModeMimic = 0x0;
        iVar2 = (gTheGame._120368_4_ + -0x1) * 0xa;
        if (false) {
            gnTagTextMimic = gTheGame._120368_4_ * 0x2710 + gTheGame._120364_4_ * 0x3e8;
            if (0x0 < iVar2) {
                gnTagTextMimic = iVar2 + gTheGame._120372_4_ * 0x64 + gnTagTextMimic;
            }
        }
        else {
            gnTagTextMimic = iVar2 + 0x1f4;
        }
        gnTickTextMimic = 0x0;
        iVar2 = screenGetTextType(giScreenMimic,gnTagTextMimic,auStack_20);
        if (iVar2 != 0x0) {
            screenHideText(giScreenMimic,0xc00001f4);
            screenShowText(giScreenMimic,gnTagTextMimic);
            iVar1 = gnTagTextMimic;
        }
    }
    gnTagTextMimic = iVar1;
    ForceLoadSong(0x30,0x0);
    PlaySong(0x0);
    return;
}

