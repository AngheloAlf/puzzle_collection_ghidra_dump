

void Input2D(int param_1,int param_2,int param_3)

{
    ushort uVar1;
    ushort uVar2;
    ushort uVar3;
    int iVar4;
    int iVar5;
    
    iVar5 = param_3 * 0x10;
    iVar4 = 0x0;
    uVar1 = *(ushort *)(gTheGame + iVar5 + 0x16346);
    uVar2 = *(ushort *)(gTheGame + iVar5 + 0x16344);
    uVar3 = *(ushort *)(gTheGame + iVar5 + 0x1634e);
    if (gMain == 0x387) {
        if ((uVar2 & 0x1000) != 0x0) {
            gTheGame._89888_4_ = 0x0;
            gMain = 0x388;
            if (gSelection == 0xaa) {
                UpdatePlayerStageClear(param_2,0xffffffff,0xffffffff);
            }
            else if (gSelection == 0x82) {
                UpdatePlayerPuzzle(param_2,0xffffffff,0xffffffff);
            }
            gTheGame._120356_4_ = 0x0;
            gTheGame._120352_4_ = param_3;
            FadeOutAllSFXs(0xf);
            FadeSong(last_song_handle,0x28,0xa,0x0);
            PlaySE(SFX_INIT_TABLE,0x42);
            UpdateAnimation(param_1,param_3,0x0);
            return;
        }
    }
    else if (gMain == 0x388) {
        DoPauseGame(iVar5 + 0x2b7188,param_3,0xffffffff);
        if (gMain != 0x388) {
            return;
        }
        UpdateAnimation(param_1,param_3,0x0);
        return;
    }
    if (*(int *)(param_2 + 0x100) < 0x3) {
        return;
    }
    if ((*(int *)(param_1 + 0x4ad8) == 0x0) || (*(int *)(param_2 + 0x14) != 0xb)) {
        if ((uVar1 & 0x800) == 0x0) {
            if ((uVar1 & 0x400) == 0x0) {
                if ((uVar1 & 0x200) == 0x0) {
                    if ((uVar1 & 0x100) != 0x0) {
                        iVar4 = Move2DCursorRight(param_2,*(undefined4 *)
                                                           (gTheGame + iVar5 + 0x16348));
                    }
                }
                else {
                    iVar4 = Move2DCursorLeft(param_2,*(undefined4 *)(gTheGame + iVar5 + 0x16348));
                }
            }
            else {
                iVar4 = Move2DCursorDown(param_2,*(undefined4 *)(gTheGame + iVar5 + 0x16348));
            }
        }
        else {
            iVar4 = Move2DCursorUp(param_1,param_2,*(undefined4 *)(gTheGame + iVar5 + 0x16348));
        }
    }
    else {
        iVar4 = Move2DCursorDown(param_2,0x0);
    }
    if (iVar4 != 0x0) {
        if (gTheGame._120328_4_ == 0x1) {
            PlaySE(SFX_INIT_TABLE,0x33);
        }
        else if (gTheGame._120328_4_ == 0x2) {
            if (param_3 == 0x0) {
                PlaySE(SFX_INIT_TABLE,0x34);
            }
            else {
                PlaySE(SFX_INIT_TABLE,0x35);
            }
        }
        else {
            PlaySE(SFX_INIT_TABLE,0x33);
        }
    }
    if (gSelection < 0x83) {
        iVar5 = 0x0;
        if (0x0 < *(int *)(param_1 + 0x4a90)) {
            Init2DIcons(param_1);
            Init2DExplosion(param_1);
            *(undefined4 *)(param_1 + 0x4aa4) = 0xffffffff;
            *(int *)(param_1 + 0x4a90) = *(int *)(param_1 + 0x4a90) + -0x1;
            if (*(int *)(param_1 + 0x4a90) != 0x1) {
                return;
            }
            *(undefined4 *)(param_1 + 0x4a90) = 0x0;
            iVar5 = CheckFieldActive(param_1);
        }
        if (((uVar2 & 0x8000) != 0x0) && (*(int *)(param_2 + 0x2c) != 0x0)) {
            EncodeWell(param_1,0x2a6608);
            iVar5 = Switch2DBlocks(param_1,param_2,param_3);
            if (iVar5 == 0x0) {
                return;
            }
            if (*(int *)(param_2 + 0x2c) == 0x0) {
                return;
            }
            *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + -0x1;
            gTheGame._120064_4_ = 0xf;
            return;
        }
        if (((uVar2 & 0x4000) != 0x0) || (iVar5 != 0x0)) {
            if (*(int *)(param_2 + 0x2c) < *(int *)(param_2 + 0x28)) {
                *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 0x1;
                DecodeWell(param_1,0x2a6608,*(undefined4 *)(param_2 + 0x2c));
                if (gTheGame._120332_4_ == 0x1) {
                    Init2DTetrisBlocksTMEM(param_1,0xffffffff);
                }
                *(undefined4 *)(param_1 + 0x4a90) = 0x5;
                *(undefined4 *)(param_1 + 0x4a88) = 0x0;
                chain_check._0_4_ = 0x0;
                StopAllSFXs();
                PlaySE(SFX_INIT_TABLE,0x6);
            }
            else {
                PlaySE(SFX_INIT_TABLE,0x7);
            }
        }
    }
    else {
        if (((uVar2 & 0x8000) != 0x0) || ((uVar2 & 0x4000) != 0x0)) {
            Switch2DBlocks(param_1,param_2,param_3);
        }
        if (*(int *)(param_1 + 0x4a90) < 0x0) {
            *(int *)(param_1 + 0x4a90) = *(int *)(param_1 + 0x4a90) + 0x1;
        }
        if ((((uVar3 & 0x10) != 0x0) || ((uVar3 & 0x20) != 0x0)) &&
           (*(int *)(param_1 + 0x4a90) == 0x0)) {
            *(undefined4 *)(param_1 + 0x4a90) = 0x1;
        }
        if (0x0 < *(int *)(param_1 + 0x4a90)) {
            RaiseBlocks(param_1,param_2);
        }
    }
    return;
}



undefined4 Move2DCursorUp(int param_1,int param_2,int param_3)

{
    int iVar1;
    
    if (*(int *)(param_1 + 0x4ad8) == 0x0) {
        if (*(int *)(param_2 + 0x14) < 0xb) {
            iVar1 = (int)*(short *)(param_2 + 0xf0) >> 0x2;
            if (gTheGame._120328_4_ < 0x3) {
                *(short *)(param_2 + 0xf0) = (short)(iVar1 + -0x10) * 0x4;
            }
            else {
                *(short *)(param_2 + 0xf0) = (short)(iVar1 + -0xa) * 0x4;
            }
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 0x1;
            if ((param_3 == 0xa) || (param_3 == 0x0)) {
                return 0xffffffff;
            }
        }
    }
    else if (*(int *)(param_2 + 0x14) < 0xa) {
        iVar1 = (int)*(short *)(param_2 + 0xf0) >> 0x2;
        if (gTheGame._120328_4_ < 0x3) {
            *(short *)(param_2 + 0xf0) = (short)(iVar1 + -0x10) * 0x4;
        }
        else {
            *(short *)(param_2 + 0xf0) = (short)(iVar1 + -0xa) * 0x4;
        }
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 0x1;
        if ((param_3 == 0xa) || (param_3 == 0x0)) {
            return 0xffffffff;
        }
    }
    return 0x0;
}



undefined4 Move2DCursorDown(int param_1,int param_2)

{
    int iVar1;
    
    if (0x0 < *(int *)(param_1 + 0x14)) {
        iVar1 = (int)*(short *)(param_1 + 0xf0) >> 0x2;
        if (gTheGame._120328_4_ < 0x3) {
            *(short *)(param_1 + 0xf0) = (short)(iVar1 + 0x10) * 0x4;
        }
        else {
            *(short *)(param_1 + 0xf0) = (short)(iVar1 + 0xa) * 0x4;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -0x1;
        if ((param_2 == 0xa) || (param_2 == 0x0)) {
            return 0xffffffff;
        }
    }
    return 0x0;
}



undefined4 Move2DCursorLeft(int param_1,int param_2)

{
    int iVar1;
    
    if (0x0 < *(int *)(param_1 + 0x10)) {
        iVar1 = (int)*(short *)(param_1 + 0xe8) >> 0x2;
        if (gTheGame._120328_4_ < 0x3) {
            *(short *)(param_1 + 0xe8) = (short)(iVar1 + -0x12) * 0x4;
        }
        else {
            *(short *)(param_1 + 0xe8) = (short)(iVar1 + -0xa) * 0x4;
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -0x1;
        if ((param_2 == 0xa) || (param_2 == 0x0)) {
            return 0xffffffff;
        }
    }
    return 0x0;
}



undefined4 Move2DCursorRight(int param_1,int param_2)

{
    int iVar1;
    
    if (*(int *)(param_1 + 0x10) < 0x4) {
        iVar1 = (int)*(short *)(param_1 + 0xe8) >> 0x2;
        if (gTheGame._120328_4_ < 0x3) {
            *(short *)(param_1 + 0xe8) = (short)(iVar1 + 0x12) * 0x4;
        }
        else {
            *(short *)(param_1 + 0xe8) = (short)(iVar1 + 0xa) * 0x4;
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x1;
        if ((param_2 == 0xa) || (param_2 == 0x0)) {
            return 0xffffffff;
        }
    }
    return 0x0;
}



undefined4 Switch2DBlocks(int param_1,int param_2,int param_3)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int *piVar6;
    int *piVar7;
    
    iVar4 = *(int *)(param_2 + 0x14);
    iVar3 = *(int *)(param_2 + 0x10) * 0x2c;
    iVar2 = param_1 + iVar4 * 0x318;
    piVar7 = (int *)(iVar2 + iVar3);
    iVar5 = (*(int *)(param_2 + 0x10) + 0x1) * 0x2c;
    piVar6 = (int *)(iVar2 + iVar5);
    if ((piVar7[0x4] == 0x0) && (piVar6[0x4] == 0x0)) {
        uVar1 = 0x0;
    }
    else if (piVar7[0x1] == 0x0) {
        if (piVar6[0x1] == 0x0) {
            if (piVar7[0x4] == 0x9) {
                uVar1 = 0x0;
            }
            else if (piVar6[0x4] == 0x9) {
                uVar1 = 0x0;
            }
            else {
                if (iVar4 < 0xb) {
                    iVar4 = param_1 + (iVar4 + 0x1) * 0x318;
                    iVar2 = *(int *)(iVar4 + iVar3);
                    if ((iVar2 == 0x4) || (iVar2 == 0x5)) {
                        return 0x0;
                    }
                    iVar2 = *(int *)(iVar4 + iVar5);
                    if ((iVar2 == 0x4) || (iVar2 == 0x5)) {
                        return 0x0;
                    }
                }
                if ((*piVar7 < 0x3) && (*piVar6 < 0x3)) {
                    iVar2 = *(int *)(param_2 + 0x1c);
                    if (iVar2 != -0x1) {
                        iVar3 = *(int *)(param_2 + 0x18);
                        iVar4 = param_1 + iVar2 * 0x318;
                        iVar5 = iVar4 + iVar3 * 0x2c;
                        iVar4 += (iVar3 + 0x1) * 0x2c;
                        if (*(int *)(iVar5 + 0x10) != 0x0) {
                            Init2DTetrisTMEM(iVar5,param_1 + iVar2 * 0x90 + iVar3 * 0x18 + 0x3f10);
                        }
                        if (*(int *)(iVar4 + 0x10) != 0x0) {
                            Init2DTetrisTMEM(iVar4,param_1 + *(int *)(param_2 + 0x1c) * 0x90 +
                                                             (*(int *)(param_2 + 0x18) + 0x1) * 0x18
                                                             + 0x3f10);
                        }
                        AfterSwitch(param_1,param_2,iVar5,iVar4,0x1);
                        iVar3 = *(int *)(param_2 + 0x14);
                        iVar4 = *(int *)(param_2 + 0x10) * 0x2c;
                        iVar2 = param_1 + iVar3 * 0x318;
                        piVar7 = (int *)(iVar2 + iVar4);
                        iVar5 = (*(int *)(param_2 + 0x10) + 0x1) * 0x2c;
                        piVar6 = (int *)(iVar2 + iVar5);
                        if (piVar7[0x1] != 0x0) {
                            return 0x0;
                        }
                        if (piVar6[0x1] != 0x0) {
                            return 0x0;
                        }
                        if (piVar7[0x4] == 0x9) {
                            return 0x0;
                        }
                        if (piVar6[0x4] == 0x9) {
                            return 0x0;
                        }
                        if (iVar3 < 0xb) {
                            iVar3 = param_1 + (iVar3 + 0x1) * 0x318;
                            iVar2 = *(int *)(iVar3 + iVar4);
                            if ((iVar2 == 0x4) || (iVar2 == 0x5)) {
                                return 0x0;
                            }
                            iVar2 = *(int *)(iVar3 + iVar5);
                            if ((iVar2 == 0x4) || (iVar2 == 0x5)) {
                                return 0x0;
                            }
                        }
                    }
                    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x10);
                    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
                    bcopy((void *)(param_1 +
                                  *(int *)(param_2 + 0x1c) * 0x90 + *(int *)(param_2 + 0x18) * 0x18
                                  + 0x3f10),(void *)(param_1 + 0x4660),0x18);
                    bcopy((void *)(param_1 +
                                  *(int *)(param_2 + 0x1c) * 0x90 +
                                  (*(int *)(param_2 + 0x18) + 0x1) * 0x18 + 0x3f10),
                          (void *)(param_1 + 0x4678),0x18);
                    if (piVar7[0x4] != 0x0) {
                        Init2DTetrisTMEM(piVar7,param_1 + 0x4660);
                    }
                    if (piVar6[0x4] != 0x0) {
                        Init2DTetrisTMEM(piVar6,param_1 + 0x4678);
                    }
                    iVar2 = piVar7[0x4];
                    piVar7[0x4] = piVar6[0x4];
                    piVar6[0x4] = iVar2;
                    if ((*piVar7 == 0x1) && (piVar7[0x8] != 0x0)) {
                        piVar7[0x8] = 0x0;
                        piVar6[0x8] = -0x1;
                    }
                    if ((*piVar6 == 0x1) && (piVar6[0x8] != 0x0)) {
                        piVar7[0x8] = -0x1;
                        piVar6[0x8] = 0x0;
                    }
                    if (*(int *)(param_2 + 0x14) < 0x1) {
                        *piVar7 = 0x2;
                        *piVar6 = 0x2;
                    }
                    else {
                        if (*(int *)(param_1 + *(int *)(param_2 + 0x14) * 0x318 +
                                     *(int *)(param_2 + 0x10) * 0x2c + -0x308) == 0x0) {
                            *piVar7 = 0x3;
                        }
                        else {
                            *piVar7 = 0x2;
                        }
                        if (*(int *)(param_1 + *(int *)(param_2 + 0x14) * 0x318 +
                                     *(int *)(param_2 + 0x10) * 0x2c + -0x2dc) == 0x0) {
                            *piVar6 = 0x3;
                        }
                        else {
                            *piVar6 = 0x2;
                        }
                    }
                    if (piVar7[0x4] == 0x0) {
                        iVar4 = *(int *)(param_2 + 0x14) + 0x1;
                        iVar2 = 0xc - iVar4;
                        iVar3 = param_1 + iVar4 * 0x318;
                        if (iVar4 < 0xc) {
                            do {
                                piVar7 = (int *)(iVar3 + *(int *)(param_2 + 0x10) * 0x2c);
                                if ((piVar7[0x4] == 0x0) || (piVar7[0x4] == 0x9)) break;
                                if (*piVar7 == 0x0) {
                                    *piVar7 = 0x4;
                                }
                                iVar3 += 0x318;
                                iVar2 += -0x1;
                            } while (iVar2 != 0x0);
                        }
                    }
                    if (piVar6[0x4] == 0x0) {
                        iVar3 = *(int *)(param_2 + 0x14) + 0x1;
                        iVar2 = 0xc - iVar3;
                        param_1 += iVar3 * 0x318;
                        if (iVar3 < 0xc) {
                            do {
                                piVar6 = (int *)(param_1 + (*(int *)(param_2 + 0x10) + 0x1) * 0x2c);
                                if ((piVar6[0x4] == 0x0) || (piVar6[0x4] == 0x9)) break;
                                if (*piVar6 == 0x0) {
                                    *piVar6 = 0x4;
                                }
                                param_1 += 0x318;
                                iVar2 += -0x1;
                            } while (iVar2 != 0x0);
                        }
                    }
                    *(undefined4 *)(param_2 + 0x4) = 0x4;
                    if (gTheGame._120328_4_ == 0x1) {
                        PlaySE(SFX_INIT_TABLE,0x43);
                    }
                    else if (gTheGame._120328_4_ == 0x2) {
                        if (param_3 == 0x0) {
                            PlaySE(SFX_INIT_TABLE,0x44);
                        }
                        else {
                            PlaySE(SFX_INIT_TABLE,0x45);
                        }
                    }
                    else {
                        PlaySE(SFX_INIT_TABLE,0x43);
                    }
                    uVar1 = 0xffffffff;
                }
                else {
                    uVar1 = 0x0;
                }
            }
        }
        else {
            uVar1 = 0x0;
        }
    }
    else {
        uVar1 = 0x0;
    }
    return uVar1;
}



void Update2DSwitching(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    
    if (*(int *)(param_2 + 0x1c) != -0x1) {
        if (gTheGame._120328_4_ < 0x3) {
            if ((*(int *)(param_2 + 0x4) == 0x3) || (*(int *)(param_2 + 0x4) == 0x2)) {
                *(short *)(param_1 + 0x4678) = *(short *)(param_1 + 0x4678) + -0x14;
                *(short *)(param_1 + 0x4660) = *(short *)(param_1 + 0x4660) + 0x14;
            }
            else {
                *(short *)(param_1 + 0x4678) = *(short *)(param_1 + 0x4678) + -0x10;
                *(short *)(param_1 + 0x4660) = *(short *)(param_1 + 0x4660) + 0x10;
            }
        }
        else if ((*(int *)(param_2 + 0x4) == 0x3) || (*(int *)(param_2 + 0x4) == 0x2)) {
            *(short *)(param_1 + 0x4678) = *(short *)(param_1 + 0x4678) + -0xc;
            *(short *)(param_1 + 0x4660) = *(short *)(param_1 + 0x4660) + 0xc;
        }
        else {
            *(short *)(param_1 + 0x4678) = *(short *)(param_1 + 0x4678) + -0x8;
            *(short *)(param_1 + 0x4660) = *(short *)(param_1 + 0x4660) + 0x8;
        }
        iVar1 = *(int *)(param_2 + 0x4) + -0x1;
        *(int *)(param_2 + 0x4) = iVar1;
        if (iVar1 == 0x0) {
            iVar1 = *(int *)(param_2 + 0x18);
            iVar2 = param_1 + *(int *)(param_2 + 0x1c) * 0x318;
            iVar3 = iVar2 + iVar1 * 0x2c;
            iVar2 += (iVar1 + 0x1) * 0x2c;
            if (*(int *)(iVar3 + 0x10) != 0x0) {
                Init2DTetrisTMEM(iVar3,param_1 + *(int *)(param_2 + 0x1c) * 0x90 + iVar1 * 0x18 +
                                                 0x3f10);
            }
            if (*(int *)(iVar2 + 0x10) != 0x0) {
                Init2DTetrisTMEM(iVar2,param_1 + *(int *)(param_2 + 0x1c) * 0x90 +
                                                 (*(int *)(param_2 + 0x18) + 0x1) * 0x18 + 0x3f10);
            }
            AfterSwitch(param_1,param_2,iVar3,iVar2,0x1);
        }
    }
    return;
}



void Add2DNewRow(void *param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    void *pvVar8;
    int iVar9;
    void *__dest;
    
    iVar5 = 0x0;
    iVar7 = 0x0;
    iVar9 = 0x0;
    iVar4 = 0x0;
    pvVar8 = param_1;
    __dest = param_1;
    do {
        iVar6 = 0xb;
        iVar3 = (int)param_1 + 0x2208;
        iVar2 = (int)__dest + 0x2208;
        iVar1 = (int)param_1 + 0x630;
        do {
            bcopy((void *)((int)param_1 + (iVar6 + -0x1) * 0x318 + iVar9),(void *)(iVar3 + iVar9),
                  0x2c);
            *(int *)(iVar2 + 0x1c) = iVar6;
            bcopy((void *)((int)param_1 + (iVar6 + -0x1) * 0x90 + iVar7 + 0x3f10),
                  (void *)(iVar1 + iVar7 + 0x3f10),0x18);
            iVar6 += -0x1;
            iVar3 += -0x318;
            iVar2 += -0x318;
            iVar1 += -0x90;
        } while (0x0 < iVar6);
        bcopy((void *)((int)__dest + 0x476c),__dest,0x2c);
        bcopy((void *)((int)pvVar8 + 0x45d0),(void *)((int)pvVar8 + 0x3f10),0x18);
        iVar5 += 0x1;
        __dest = (void *)((int)__dest + 0x2c);
        iVar9 += 0x2c;
        iVar7 += 0x18;
        pvVar8 = (void *)((int)pvVar8 + 0x18);
    } while (iVar5 < 0x6);
    iVar7 = 0x4;
    iVar5 = 0x0;
    pvVar8 = param_1;
    do {
        if (0x6 < *(int *)((int)pvVar8 + 0x2520)) {
            *(int *)((int)pvVar8 + 0x2544) = *(int *)((int)pvVar8 + 0x2544) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar8 + 0x2570)) {
            *(int *)((int)pvVar8 + 0x2594) = *(int *)((int)pvVar8 + 0x2594) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar8 + 0x25c0)) {
            *(int *)((int)pvVar8 + 0x25e4) = *(int *)((int)pvVar8 + 0x25e4) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar8 + 0x2610)) {
            *(int *)((int)pvVar8 + 0x2634) = *(int *)((int)pvVar8 + 0x2634) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar8 + 0x2660)) {
            *(int *)((int)pvVar8 + 0x2684) = *(int *)((int)pvVar8 + 0x2684) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar8 + 0x26b0)) {
            *(int *)((int)pvVar8 + 0x26d4) = *(int *)((int)pvVar8 + 0x26d4) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar8 + 0x2700)) {
            *(int *)((int)pvVar8 + 0x2724) = *(int *)((int)pvVar8 + 0x2724) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar8 + 0x2750)) {
            *(int *)((int)pvVar8 + 0x2774) = *(int *)((int)pvVar8 + 0x2774) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar8 + 0x27a0)) {
            *(int *)((int)pvVar8 + 0x27c4) = *(int *)((int)pvVar8 + 0x27c4) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar8 + 0x27f0)) {
            *(int *)((int)pvVar8 + 0x2814) = *(int *)((int)pvVar8 + 0x2814) + 0x1;
        }
        pvVar8 = (void *)((int)pvVar8 + 0x320);
        iVar5 += 0x9;
        iVar7 += -0x1;
    } while (iVar7 != 0x0);
    Init2DNewRow(param_1,pvVar8,iVar5);
    iVar5 = *(int *)(param_2 + 0x1c);
    if ((iVar5 != -0x1) && (iVar5 < 0xb)) {
        *(int *)(param_2 + 0x1c) = iVar5 + 0x1;
    }
    iVar5 = *(int *)(param_2 + 0x14);
    if (iVar5 < 0xa) {
        *(int *)(param_2 + 0x14) = iVar5 + 0x1;
    }
    else {
        if (iVar5 < 0x1) {
            iVar4 = 0x0;
        }
        else {
            iVar4 = (int)*(short *)(param_2 + 0xf0) >> 0x2;
            if (gTheGame._120328_4_ < 0x3) {
                *(short *)(param_2 + 0xf0) = (short)(iVar4 + 0x10) * 0x4;
            }
            else {
                *(short *)(param_2 + 0xf0) = (short)(iVar4 + 0xa) * 0x4;
            }
            iVar4 = -0x1;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -0x1;
        }
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 0x1;
    }
    if (iVar4 != 0x0) {
        if (gTheGame._120328_4_ == 0x1) {
            PlaySE(SFX_INIT_TABLE,0x33);
        }
        else if (gTheGame._120328_4_ == 0x2) {
            if (param_3 == 0x0) {
                PlaySE(SFX_INIT_TABLE,0x34);
            }
            else {
                PlaySE(SFX_INIT_TABLE,0x35);
            }
        }
        else {
            PlaySE(SFX_INIT_TABLE,0x33);
        }
    }
    return;
}


