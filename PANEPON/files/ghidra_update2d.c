

void Update2DDistance(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = *(int *)(param_1 + 0x4adc);
    if (iVar1 != 0x0) {
        iVar3 = 0x6;
        iVar2 = param_1;
        do {
            *(short *)(iVar2 + 0x3f18) =
                 (short)(((int)*(short *)(iVar2 + 0x3f18) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3f30) =
                 (short)(((int)*(short *)(iVar2 + 0x3f30) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3f48) =
                 (short)(((int)*(short *)(iVar2 + 0x3f48) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3f60) =
                 (short)(((int)*(short *)(iVar2 + 0x3f60) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3f78) =
                 (short)(((int)*(short *)(iVar2 + 0x3f78) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3f90) =
                 (short)(((int)*(short *)(iVar2 + 0x3f90) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3fa8) =
                 (short)(((int)*(short *)(iVar2 + 0x3fa8) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3fc0) =
                 (short)(((int)*(short *)(iVar2 + 0x3fc0) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3fd8) =
                 (short)(((int)*(short *)(iVar2 + 0x3fd8) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3ff0) =
                 (short)(((int)*(short *)(iVar2 + 0x3ff0) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x4008) =
                 (short)(((int)*(short *)(iVar2 + 0x4008) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x4020) =
                 (short)(((int)*(short *)(iVar2 + 0x4020) >> 0x2) - iVar1) * 0x4;
            iVar2 += 0x120;
            iVar3 += -0x1;
        } while (iVar3 != 0x0);
        iVar3 = 0xa;
        *(short *)(param_1 + 0x45d8) =
             (short)(((int)*(short *)(param_1 + 0x45d8) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x45f0) =
             (short)(((int)*(short *)(param_1 + 0x45f0) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4608) =
             (short)(((int)*(short *)(param_1 + 0x4608) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4620) =
             (short)(((int)*(short *)(param_1 + 0x4620) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4638) =
             (short)(((int)*(short *)(param_1 + 0x4638) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4650) =
             (short)(((int)*(short *)(param_1 + 0x4650) >> 0x2) - iVar1) * 0x4;
        iVar2 = param_1;
        do {
            if (*(int *)(iVar2 + 0x2520) == 0x0) break;
            if (((0x6 < *(int *)(iVar2 + 0x2520)) && (*(int *)(iVar2 + 0x2540) != 0x0)) &&
               (*(int *)(iVar2 + 0x2528) == -0x1)) {
                *(short *)(iVar2 + 0x2558) =
                     (short)(((int)*(short *)(iVar2 + 0x2558) >> 0x2) - iVar1) * 0x4;
            }
            if (*(int *)(iVar2 + 0x2570) == 0x0) break;
            if (((0x6 < *(int *)(iVar2 + 0x2570)) && (*(int *)(iVar2 + 0x2590) != 0x0)) &&
               (*(int *)(iVar2 + 0x2578) == -0x1)) {
                *(short *)(iVar2 + 0x25a8) =
                     (short)(((int)*(short *)(iVar2 + 0x25a8) >> 0x2) - iVar1) * 0x4;
            }
            if (*(int *)(iVar2 + 0x25c0) == 0x0) break;
            if (((0x6 < *(int *)(iVar2 + 0x25c0)) && (*(int *)(iVar2 + 0x25e0) != 0x0)) &&
               (*(int *)(iVar2 + 0x25c8) == -0x1)) {
                *(short *)(iVar2 + 0x25f8) =
                     (short)(((int)*(short *)(iVar2 + 0x25f8) >> 0x2) - iVar1) * 0x4;
            }
            if (*(int *)(iVar2 + 0x2610) == 0x0) break;
            if (((0x6 < *(int *)(iVar2 + 0x2610)) && (*(int *)(iVar2 + 0x2630) != 0x0)) &&
               (*(int *)(iVar2 + 0x2618) == -0x1)) {
                *(short *)(iVar2 + 0x2648) =
                     (short)(((int)*(short *)(iVar2 + 0x2648) >> 0x2) - iVar1) * 0x4;
            }
            iVar2 += 0x140;
            iVar3 += -0x1;
        } while (iVar3 != 0x0);
        *(short *)(param_1 + 0x4668) =
             (short)(((int)*(short *)(param_1 + 0x4668) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4680) =
             (short)(((int)*(short *)(param_1 + 0x4680) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_2 + 0xf0) = (short)(((int)*(short *)(param_2 + 0xf0) >> 0x2) - iVar1) * 0x4
        ;
        if (((gSelection == 0xaa) || (gSelection == 0xb4)) || (gSelection == 0xdc)) {
            Update2DClearLine();
        }
    }
    return;
}



void Update2DClearLine(int param_1,int param_2,int param_3)

{
    if (0x0 < *(int *)(param_2 + 0x28)) {
        return;
    }
    *(short *)(param_1 + 0x2558) =
         (short)(((int)*(short *)(param_1 + 0x2558) >> 0x2) - param_3) * 0x4;
    *(short *)(param_1 + 0x25a8) =
         (short)(((int)*(short *)(param_1 + 0x25a8) >> 0x2) - param_3) * 0x4;
    *(short *)(param_1 + 0x25f8) =
         (short)(((int)*(short *)(param_1 + 0x25f8) >> 0x2) - param_3) * 0x4;
    *(short *)(param_1 + 0x2648) =
         (short)(((int)*(short *)(param_1 + 0x2648) >> 0x2) - param_3) * 0x4;
    *(short *)(param_1 + 0x2698) =
         (short)(((int)*(short *)(param_1 + 0x2698) >> 0x2) - param_3) * 0x4;
    *(short *)(param_1 + 0x26e8) =
         (short)(((int)*(short *)(param_1 + 0x26e8) >> 0x2) - param_3) * 0x4;
    *(short *)(param_1 + 0x2738) =
         (short)(((int)*(short *)(param_1 + 0x2738) >> 0x2) - param_3) * 0x4;
    return;
}



void Update2DIcon(int param_1,undefined4 param_2,int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    undefined4 *puVar11;
    int iVar12;

    iVar3 = 0x0;
    iVar5 = 0x0;
    iVar2 = 0x0;
    if (gTheGame._120328_4_ < 0x3) {
        iVar9 = 0x12;
        iVar10 = 0x10;
    }
    else {
        iVar9 = 0xa;
        iVar10 = 0xa;
    }
    iVar12 = 0x2;
    iVar8 = (int)*(short *)(param_1 + 0x3f10) >> 0x2;
    iVar6 = (int)*(short *)(param_1 + 0x3f18) >> 0x2;
    iVar7 = param_1;
    do {
        if (((*(int *)(iVar7 + 0x31a0) == -0x1) && (*(int *)(iVar7 + 0x31bc) < 0x0)) &&
           (0xb < *(int *)(iVar7 + 0x31a4))) {
            iVar3 = -0x1;
            break;
        }
        if (((*(int *)(iVar7 + 0x3208) == -0x1) && (*(int *)(iVar7 + 0x3224) < 0x0)) &&
           (0xb < *(int *)(iVar7 + 0x320c))) {
            iVar3 = -0x1;
            break;
        }
        if (((*(int *)(iVar7 + 0x3270) == -0x1) && (*(int *)(iVar7 + 0x328c) < 0x0)) &&
           (0xb < *(int *)(iVar7 + 0x3274))) {
            iVar3 = -0x1;
            break;
        }
        if (((*(int *)(iVar7 + 0x32d8) == -0x1) && (*(int *)(iVar7 + 0x32f4) < 0x0)) &&
           (0xb < *(int *)(iVar7 + 0x32dc))) {
            iVar3 = -0x1;
            break;
        }
        if (((*(int *)(iVar7 + 0x3340) == -0x1) && (*(int *)(iVar7 + 0x335c) < 0x0)) &&
           (0xb < *(int *)(iVar7 + 0x3344))) {
            iVar3 = -0x1;
            break;
        }
        iVar7 += 0x208;
        iVar12 += -0x1;
    } while (iVar12 != 0x0);
    iVar4 = iVar6 + -0x6;
    iVar12 = 0x0;
    iVar7 = param_1;
    do {
        if (*(int *)(iVar7 + 0x31a0) == -0x1) {
            puVar11 = (undefined4 *)(iVar7 + 0x31a0);
            if (*(int *)(iVar7 + 0x31bc) < 0x0) {
                *(int *)(iVar7 + 0x31a8) = -*(int *)(iVar7 + 0x31bc);
                iVar1 = *(int *)(iVar7 + 0x31a4);
                if (iVar1 == 0xc) {
                    if (iVar5 == 0x0) {
                        iVar5 = 0x1;
                    }
                    UpdateComboScore(param_1,param_2,*(undefined4 *)(iVar7 + 0x31a8));
                    if ((gGameStatus & 0x4) != 0x0) {
                        *puVar11 = 0x0;
                        goto LAB_000be544;
                    }
                    Start2DIconSplash(param_1,iVar8 + *(int *)(iVar7 + 0x31ac) * iVar9 + 0x5,
                                      iVar4 - *(int *)(iVar7 + 0x31b8) * iVar10);
                    Init2DComboTMEM(puVar11);
                    *(short *)(iVar7 + 0x31c8) =
                         (short)(iVar8 + *(int *)(iVar7 + 0x31ac) * iVar9) * 0x4;
                    *(int *)(iVar7 + 0x31c0) = iVar6 - *(int *)(iVar7 + 0x31b8) * iVar10;
                    *(short *)(iVar7 + 0x31d0) = (short)(*(int *)(iVar7 + 0x31c0) << 0x2);
                    *(undefined2 *)(iVar7 + 0x31cc) = 0x200;
                }
                else if (iVar1 == 0xa) {
                    iVar5 = 0x2;
                    UpdateChainScore(param_1,param_2,*(undefined4 *)(iVar7 + 0x31a8));
                    if ((gGameStatus & 0x4) != 0x0) {
                        *puVar11 = 0x0;
                        goto LAB_000be544;
                    }
                    Init2DChainTMEM(puVar11);
                    *(short *)(iVar7 + 0x31c8) =
                         (short)(iVar8 + *(int *)(iVar7 + 0x31ac) * iVar9) * 0x4;
                    *(undefined2 *)(iVar7 + 0x31cc) = 0x200;
                    if (iVar3 == 0x0) {
                        *(int *)(iVar7 + 0x31c0) = iVar6 - *(int *)(iVar7 + 0x31b8) * iVar10;
                        *(short *)(iVar7 + 0x31d0) = (short)(*(int *)(iVar7 + 0x31c0) << 0x2);
                        Start2DIconSplash(param_1,iVar8 + *(int *)(iVar7 + 0x31ac) * iVar9 + 0x5,
                                          iVar4 - *(int *)(iVar7 + 0x31b8) * iVar10);
                    }
                    else {
                        *(int *)(iVar7 + 0x31c0) =
                             (iVar6 - iVar10) - *(int *)(iVar7 + 0x31b8) * iVar10;
                        *(short *)(iVar7 + 0x31d0) = (short)(*(int *)(iVar7 + 0x31c0) << 0x2);
                        Start2DIconSplash(param_1,iVar8 + *(int *)(iVar7 + 0x31ac) * iVar9 + 0x5,
                                          ((iVar6 - iVar10) + -0x6) -
                                          *(int *)(iVar7 + 0x31b8) * iVar10);
                    }
                }
                else if (iVar1 == 0xd) {
                    if (iVar5 == 0x0) {
                        iVar5 = 0x1;
                    }
                    UpdateComboScore(param_1,param_2,*(undefined4 *)(iVar7 + 0x31a8));
                    if ((gGameStatus & 0x4) != 0x0) {
                        *puVar11 = 0x0;
                        goto LAB_000be544;
                    }
                    Start2DIconSplash(param_1,iVar8 + *(int *)(iVar7 + 0x31ac) * iVar9 + 0xd,
                                      iVar4 - *(int *)(iVar7 + 0x31b8) * iVar10);
                    *(undefined2 *)(iVar7 + 0x31da) = 0x80;
                    *(short *)(iVar7 + 0x31c8) =
                         (short)(iVar8 + *(int *)(iVar7 + 0x31ac) * iVar9) * 0x4;
                    *(int *)(iVar7 + 0x31c0) = iVar6 - *(int *)(iVar7 + 0x31b8) * iVar10;
                    *(short *)(iVar7 + 0x31d0) = (short)(*(int *)(iVar7 + 0x31c0) << 0x2);
                    *(undefined2 *)(iVar7 + 0x31cc) = 0x400;
                }
                else {
                    *(undefined2 *)(iVar7 + 0x31da) = 0x84;
                    iVar2 = -0x1;
                    *(short *)(iVar7 + 0x31c8) =
                         (short)(iVar8 + *(int *)(iVar7 + 0x31ac) * iVar9 + 0x15) * 0x4;
                    *(int *)(iVar7 + 0x31c0) = iVar6 - *(int *)(iVar7 + 0x31b8) * iVar10;
                    *(short *)(iVar7 + 0x31d0) = (short)(*(int *)(iVar7 + 0x31c0) << 0x2);
                    *(undefined2 *)(iVar7 + 0x31cc) = 0x400;
                }
                *(undefined4 *)(iVar7 + 0x31bc) = 0x28;
            }
            else {
                iVar1 = *(int *)(iVar7 + 0x31bc) + -0x1;
                *(int *)(iVar7 + 0x31bc) = iVar1;
                if (iVar1 == 0x0) {
                    *puVar11 = 0x0;
                }
                else {
                    if (true) {
                        switch(*(undefined4 *)(iVar7 + 0x31bc)) {
                        case 0x5:
                        case 0x13:
                        case 0x18:
                        case 0x1b:
                        case 0x1d:
                        case 0x20:
                        case 0x22:
                        case 0x24:
                        case 0x25:
                        case 0x26:
                        case 0x27:
                            *(int *)(iVar7 + 0x31c0) = *(int *)(iVar7 + 0x31c0) + -0x1;
                        }
                    }
                    *(short *)(iVar7 + 0x31d0) = (short)(*(int *)(iVar7 + 0x31c0) << 0x2);
                }
            }
        }
LAB_000be544:
        iVar12 += 0x1;
        iVar7 += 0x68;
        if (0x9 < iVar12) {
            if (iVar2 == 0x0) {
                if ((iVar5 != 0x0) && (*(int *)(param_1 + 0x4a84) == 0x0)) {
                    if (gTheGame._120328_4_ == 0x1) {
                        if (iVar5 == 0x1) {
                            PlaySE(SFX_INIT_TABLE,0xef);
                        }
                        else {
                            PlaySE(SFX_INIT_TABLE,0xf0);
                        }
                    }
                    else if (gTheGame._120328_4_ == 0x2) {
                        if (param_3 == 0x0) {
                            if (iVar5 == 0x1) {
                                PlaySE(SFX_INIT_TABLE,0xf1);
                            }
                            else {
                                PlaySE(SFX_INIT_TABLE,0xf2);
                            }
                        }
                        else if (iVar5 == 0x1) {
                            if (gWorld == 0x10) {
                                PlaySE(SFX_INIT_TABLE,0x1e3);
                            }
                            else {
                                PlaySE(SFX_INIT_TABLE,0xf7);
                            }
                        }
                        else if (gWorld == 0x10) {
                            PlaySE(SFX_INIT_TABLE,0x1f6);
                        }
                        else {
                            PlaySE(SFX_INIT_TABLE,0xf8);
                        }
                    }
                }
            }
            else if (gTheGame._120328_4_ == 0x1) {
                PlaySE(SFX_INIT_TABLE,0x2d);
            }
            else if (gTheGame._120328_4_ == 0x2) {
                if (param_3 == 0x0) {
                    PlaySE(SFX_INIT_TABLE,0x2e);
                }
                else {
                    PlaySE(SFX_INIT_TABLE,0x2f);
                }
            }
            return;
        }
    } while( true );
}
