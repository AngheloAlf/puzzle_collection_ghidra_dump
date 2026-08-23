

void Input3D(int param_1,int *param_2,int param_3)

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
            return;
        }
    }
    else if (gMain == 0x388) {
        DoPauseGame(iVar5 + 0x2b7188,param_3,0xffffffff);
        return;
    }
    if ((*(int *)(param_1 + 0x4ad8) != 0x0) && (param_2[0x5] == 0xb)) {
        iVar4 = Move3DCursorDown(param_2,0x0);
    }
    if ((uVar1 & 0x800) == 0x0) {
        if ((uVar1 & 0x400) == 0x0) {
            if (((uVar1 & 0x200) == 0x0) || (*param_2 == 0x3)) {
                if (((uVar1 & 0x100) != 0x0) && (*param_2 != 0x3)) {
                    iVar4 = Move3DCursorRight(param_2,*(undefined4 *)(gTheGame + iVar5 + 0x16348));
                }
            }
            else {
                iVar4 = Move3DCursorLeft(param_2,*(undefined4 *)(gTheGame + iVar5 + 0x16348));
            }
        }
        else {
            iVar4 = Move3DCursorDown(param_2,*(undefined4 *)(gTheGame + iVar5 + 0x16348));
        }
    }
    else {
        iVar4 = Move3DCursorUp(param_1,param_2,*(undefined4 *)(gTheGame + iVar5 + 0x16348));
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
    }
    if (gSelection < 0x83) {
        iVar5 = 0x0;
        if (0x0 < *(int *)(param_1 + 0x4a90)) {
            Init3DIcons(param_1);
            Init3DExplosion(param_1);
            *(undefined4 *)(param_1 + 0x4aa4) = 0xffffffff;
            *(int *)(param_1 + 0x4a90) = *(int *)(param_1 + 0x4a90) + -0x1;
            if (*(int *)(param_1 + 0x4a90) != 0x1) {
                return;
            }
            *(undefined4 *)(param_1 + 0x4a90) = 0x0;
            iVar5 = CheckFieldActive(param_1);
        }
        if (((uVar2 & 0x8000) != 0x0) && (param_2[0xb] != 0x0)) {
            EncodeWell(param_1,0x2a6608);
            iVar5 = Switch3DBlocks(param_1,param_2,param_3);
            if (iVar5 == 0x0) {
                return;
            }
            if (param_2[0xb] == 0x0) {
                return;
            }
            param_2[0xb] = param_2[0xb] + -0x1;
            gTheGame._120064_4_ = 0xf;
            return;
        }
        if (((uVar2 & 0x4000) != 0x0) || (iVar5 != 0x0)) {
            if (param_2[0xb] < param_2[0xa]) {
                param_2[0xb] = param_2[0xb] + 0x1;
                DecodeWell(param_1,0x2a6608,param_2[0xb]);
                Init3DTetrisBlocksState(param_1);
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
            Switch3DBlocks(param_1,param_2,param_3);
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



undefined4 Move3DCursorUp(int param_1,int param_2,int param_3)

{
    if (*(int *)(param_1 + 0x4ad8) == 0x0) {
        if (*(int *)(param_2 + 0x14) < 0xb) {
            *(short *)(param_2 + 0xf0) = *(short *)(param_2 + 0xf0) + -0x10;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 0x1;
            if ((param_3 == 0xa) || (param_3 == 0x0)) {
                return 0xffffffff;
            }
        }
    }
    else if (*(int *)(param_2 + 0x14) < 0xa) {
        *(short *)(param_2 + 0xf0) = *(short *)(param_2 + 0xf0) + -0x10;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 0x1;
        if ((param_3 == 0xa) || (param_3 == 0x0)) {
            return 0xffffffff;
        }
    }
    return 0x0;
}



undefined4 Move3DCursorDown(int param_1,int param_2)

{
    if (0x0 < *(int *)(param_1 + 0x14)) {
        *(short *)(param_1 + 0xf0) = *(short *)(param_1 + 0xf0) + 0x10;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -0x1;
        if ((param_2 == 0xa) || (param_2 == 0x0)) {
            return 0xffffffff;
        }
    }
    return 0x0;
}



undefined4 Move3DCursorLeft(int param_1)

{
    if (*(int *)(param_1 + 0x18) == 0x0) {
        *(undefined4 *)(param_1 + 0x18) = 0x4;
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 Move3DCursorRight(int param_1)

{
    if (*(int *)(param_1 + 0x18) == 0x0) {
        *(undefined4 *)(param_1 + 0x18) = 0xfffffffc;
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 Switch3DBlocks(int param_1,int param_2,int param_3)

{
    int iVar1;
    int *piVar2;
    undefined4 uVar3;
    int iVar4;
    int *piVar5;
    int iVar6;
    int iVar7;
    
    iVar7 = 0x5;
    iVar1 = 0x4;
    if (*(int *)(param_2 + 0x18) < 0x0) {
        iVar1 = 0x5;
        iVar7 = 0x6;
    }
    else if (0x0 < *(int *)(param_2 + 0x18)) {
        iVar1 = 0x3;
        iVar7 = 0x4;
    }
    iVar6 = *(int *)(param_2 + 0x14);
    iVar4 = param_1 + iVar6 * 0x318;
    piVar2 = (int *)(iVar4 + iVar1 * 0x2c);
    piVar5 = (int *)(iVar4 + iVar7 * 0x2c);
    if ((piVar2[0x4] == 0x0) && (piVar5[0x4] == 0x0)) {
        uVar3 = 0x0;
    }
    else if (piVar2[0x1] == 0x0) {
        if (piVar5[0x1] == 0x0) {
            if (piVar2[0x4] == 0x9) {
                uVar3 = 0x0;
            }
            else if (piVar5[0x4] == 0x9) {
                uVar3 = 0x0;
            }
            else {
                if (iVar6 < 0xb) {
                    iVar4 = param_1 + (iVar6 + 0x1) * 0x318;
                    iVar1 = *(int *)(iVar4 + iVar1 * 0x2c);
                    if ((iVar1 == 0x4) || (iVar1 == 0x5)) {
                        return 0x0;
                    }
                    iVar1 = *(int *)(iVar4 + iVar7 * 0x2c);
                    if ((iVar1 == 0x4) || (iVar1 == 0x5)) {
                        return 0x0;
                    }
                }
                if ((*piVar2 < 0x3) && (*piVar5 < 0x3)) {
                    if (*(int *)(param_2 + 0x1c) != -0x1) {
                        iVar1 = param_1 + *(int *)(param_2 + 0x1c) * 0x318;
                        AfterSwitch(param_1,param_2,iVar1 + 0xb0,iVar1 + 0xdc,0x2);
                        iVar7 = *(int *)(param_2 + 0x14);
                        iVar1 = param_1 + iVar7 * 0x318;
                        piVar2 = (int *)(iVar1 + 0xb0);
                        piVar5 = (int *)(iVar1 + 0xdc);
                        if (*(int *)(iVar1 + 0xb4) != 0x0) {
                            return 0x0;
                        }
                        if (*(int *)(iVar1 + 0xe0) != 0x0) {
                            return 0x0;
                        }
                        if (*(int *)(iVar1 + 0xc0) == 0x9) {
                            return 0x0;
                        }
                        if (*(int *)(iVar1 + 0xec) == 0x9) {
                            return 0x0;
                        }
                        if (iVar7 < 0xb) {
                            iVar7 = param_1 + (iVar7 + 0x1) * 0x318;
                            iVar1 = *(int *)(iVar7 + 0xb0);
                            if ((iVar1 == 0x4) || (iVar1 == 0x5)) {
                                return 0x0;
                            }
                            iVar1 = *(int *)(iVar7 + 0xdc);
                            if ((iVar1 == 0x4) || (iVar1 == 0x5)) {
                                return 0x0;
                            }
                        }
                    }
                    if (*(int *)(param_2 + 0x18) != 0x0) {
                        if (*(int *)(param_2 + 0x18) < 0x0) {
                            Update3DPosition(param_1,param_2,0xffffffff);
                        }
                        else {
                            Update3DPosition(param_1,param_2,0x0);
                        }
                        *(undefined4 *)(param_2 + 0x18) = 0x0;
                        iVar1 = param_1 + *(int *)(param_2 + 0x14) * 0x318;
                        piVar2 = (int *)(iVar1 + 0xb0);
                        piVar5 = (int *)(iVar1 + 0xdc);
                    }
                    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
                    iVar1 = piVar2[0x4];
                    piVar2[0x4] = piVar5[0x4];
                    piVar5[0x4] = iVar1;
                    if ((*piVar2 == 0x1) && (piVar2[0x8] != 0x0)) {
                        piVar2[0x8] = 0x0;
                        piVar5[0x8] = -0x1;
                    }
                    if ((*piVar5 == 0x1) && (piVar5[0x8] != 0x0)) {
                        piVar2[0x8] = -0x1;
                        piVar5[0x8] = 0x0;
                    }
                    if (*(int *)(param_2 + 0x14) < 0x1) {
                        *piVar2 = 0x2;
                        *piVar5 = 0x2;
                    }
                    else {
                        if (*(int *)(param_1 + *(int *)(param_2 + 0x14) * 0x318 + -0x258) == 0x0) {
                            *piVar2 = 0x3;
                        }
                        else {
                            *piVar2 = 0x2;
                        }
                        if (*(int *)(param_1 + *(int *)(param_2 + 0x14) * 0x318 + -0x22c) == 0x0) {
                            *piVar5 = 0x3;
                        }
                        else {
                            *piVar5 = 0x2;
                        }
                    }
                    if (piVar2[0x4] == 0x0) {
                        iVar4 = *(int *)(param_2 + 0x14) + 0x1;
                        iVar1 = 0xc - iVar4;
                        iVar7 = param_1 + iVar4 * 0x318;
                        if (iVar4 < 0xc) {
                            do {
                                if ((*(int *)(iVar7 + 0xc0) == 0x0) ||
                                   (*(int *)(iVar7 + 0xc0) == 0x9)) break;
                                if (*(int *)(iVar7 + 0xb0) == 0x0) {
                                    *(int *)(iVar7 + 0xb0) = 0x4;
                                }
                                iVar7 += 0x318;
                                iVar1 += -0x1;
                            } while (iVar1 != 0x0);
                        }
                    }
                    if (piVar5[0x4] == 0x0) {
                        iVar7 = *(int *)(param_2 + 0x14) + 0x1;
                        iVar1 = 0xc - iVar7;
                        param_1 += iVar7 * 0x318;
                        if (iVar7 < 0xc) {
                            do {
                                if ((*(int *)(param_1 + 0xec) == 0x0) ||
                                   (*(int *)(param_1 + 0xec) == 0x9)) break;
                                if (*(int *)(param_1 + 0xdc) == 0x0) {
                                    *(int *)(param_1 + 0xdc) = 0x4;
                                }
                                param_1 += 0x318;
                                iVar1 += -0x1;
                            } while (iVar1 != 0x0);
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
                    uVar3 = 0xffffffff;
                }
                else {
                    uVar3 = 0x0;
                }
            }
        }
        else {
            uVar3 = 0x0;
        }
    }
    else {
        uVar3 = 0x0;
    }
    return uVar3;
}



void Update3DSwitching(int param_1,int param_2)

{
    int iVar1;
    
    if (*(int *)(param_2 + 0x1c) != -0x1) {
        iVar1 = *(int *)(param_2 + 0x4) + -0x1;
        *(int *)(param_2 + 0x4) = iVar1;
        if ((iVar1 == 0x0) || (*(int *)(param_2 + 0x18) != 0x0)) {
            iVar1 = param_1 + *(int *)(param_2 + 0x1c) * 0x318;
            AfterSwitch(param_1,param_2,iVar1 + 0xb0,iVar1 + 0xdc,0x2);
        }
    }
    return;
}



void Add3DNewRow(void *param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    void *pvVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    
    iVar1 = 0x0;
    iVar3 = 0x0;
    iVar7 = 0x0;
    pvVar4 = param_1;
    do {
        iVar2 = 0xb;
        iVar6 = (int)param_1 + 0x2208;
        iVar5 = (int)pvVar4 + 0x2208;
        do {
            bcopy((void *)((int)param_1 + (iVar2 + -0x1) * 0x318 + iVar3),(void *)(iVar6 + iVar3),
                  0x2c);
            *(int *)(iVar5 + 0x1c) = iVar2;
            iVar2 += -0x1;
            iVar6 += -0x318;
            iVar5 += -0x318;
        } while (0x0 < iVar2);
        bcopy((void *)((int)pvVar4 + 0x476c),pvVar4,0x2c);
        iVar1 += 0x1;
        pvVar4 = (void *)((int)pvVar4 + 0x2c);
        iVar3 += 0x2c;
    } while (iVar1 < 0x12);
    iVar3 = 0x4;
    *(undefined4 *)((int)param_1 + 0x4768) = 0x0;
    iVar1 = 0x0;
    pvVar4 = param_1;
    do {
        if (0x6 < *(int *)((int)pvVar4 + 0x2520)) {
            *(int *)((int)pvVar4 + 0x2544) = *(int *)((int)pvVar4 + 0x2544) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar4 + 0x2570)) {
            *(int *)((int)pvVar4 + 0x2594) = *(int *)((int)pvVar4 + 0x2594) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar4 + 0x25c0)) {
            *(int *)((int)pvVar4 + 0x25e4) = *(int *)((int)pvVar4 + 0x25e4) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar4 + 0x2610)) {
            *(int *)((int)pvVar4 + 0x2634) = *(int *)((int)pvVar4 + 0x2634) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar4 + 0x2660)) {
            *(int *)((int)pvVar4 + 0x2684) = *(int *)((int)pvVar4 + 0x2684) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar4 + 0x26b0)) {
            *(int *)((int)pvVar4 + 0x26d4) = *(int *)((int)pvVar4 + 0x26d4) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar4 + 0x2700)) {
            *(int *)((int)pvVar4 + 0x2724) = *(int *)((int)pvVar4 + 0x2724) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar4 + 0x2750)) {
            *(int *)((int)pvVar4 + 0x2774) = *(int *)((int)pvVar4 + 0x2774) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar4 + 0x27a0)) {
            *(int *)((int)pvVar4 + 0x27c4) = *(int *)((int)pvVar4 + 0x27c4) + 0x1;
        }
        if (0x6 < *(int *)((int)pvVar4 + 0x27f0)) {
            *(int *)((int)pvVar4 + 0x2814) = *(int *)((int)pvVar4 + 0x2814) + 0x1;
        }
        pvVar4 = (void *)((int)pvVar4 + 0x320);
        iVar1 += 0x9;
        iVar3 += -0x1;
    } while (iVar3 != 0x0);
    Init3DNewRow(param_1,pvVar4,iVar1);
    iVar1 = *(int *)(param_2 + 0x1c);
    if ((iVar1 != -0x1) && (iVar1 < 0xb)) {
        *(int *)(param_2 + 0x1c) = iVar1 + 0x1;
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 < 0xa) {
        *(int *)(param_2 + 0x14) = iVar1 + 0x1;
    }
    else {
        if (iVar1 < 0x1) {
            iVar7 = 0x0;
        }
        else {
            iVar7 = -0x1;
            *(short *)(param_2 + 0xf0) = *(short *)(param_2 + 0xf0) + 0x10;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -0x1;
        }
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 0x1;
    }
    if (iVar7 != 0x0) {
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
    }
    return;
}

