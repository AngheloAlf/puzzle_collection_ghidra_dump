

void CheckGameInput(undefined4 param_1,int param_2,int param_3)

{
    int iVar1;
    
    if (gTheGame._120332_4_ == 0x1) {
        if (*(int *)(brainbrain + param_3 * 0x128 + 0xc) == -0x1) {
            Input2D(param_1,param_2,param_3);
        }
        else if (0x2 < *(int *)(param_2 + 0x100)) {
            AIMove(param_1,param_2);
        }
        Update2DSwitching(param_1,param_2);
    }
    else {
        if (*(int *)(brainbrain + param_3 * 0x128 + 0xc) == -0x1) {
            Input3D(param_1,param_2,param_3);
        }
        else {
            AIMove(param_1,param_2);
        }
        Update3DSwitching(param_1,param_2);
    }
    iVar1 = *(int *)(param_2 + 0x24) + -0x1;
    *(int *)(param_2 + 0x24) = iVar1;
    if (iVar1 == 0x0) {
        *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) ^ 0x1;
        *(undefined4 *)(param_2 + 0x24) = 0xf;
    }
    return;
}



void AddNewRow(void)

{
    if (gTheGame._120332_4_ == 0x1) {
        Add2DNewRow();
    }
    else {
        Add3DNewRow();
    }
    return;
}



void RaiseBlocks(int param_1,int *param_2)

{
    int iVar1;
    
    iVar1 = gTheGame._120332_4_;
    if (((*param_2 != 0x0) || (0x0 < param_2[0x2])) || (param_2[0x1] != 0x0)) {
        *(undefined4 *)(param_1 + 0x4a90) = 0x0;
        return;
    }
    if (*(int *)(param_1 + 0x4ad4) != 0x0) {
        param_2[0x3] = 0x0;
        return;
    }
    if ((*(int *)(param_1 + 0x4a90) == 0x1) && (0x0 < param_2[0x3])) {
        *(undefined4 *)(param_1 + 0x4a90) = 0x2;
    }
    param_2[0x3] = 0x0;
    if (0x10000 < *(uint *)(param_1 + 0x4ad0)) {
        iVar1 <<= 0x1;
    }
    *(int *)(param_1 + 0x4adc) = *(int *)(param_1 + 0x4adc) + iVar1;
    *(int *)(param_1 + 0x4ad8) = *(int *)(param_1 + 0x4ad8) + iVar1;
    if (gTheGame._120328_4_ < 0x3) {
        iVar1 = 0x10;
    }
    else {
        iVar1 = 0xa;
    }
    if (*(int *)(param_1 + 0x4ad8) == iVar1 * gTheGame._120332_4_) {
        if (*(int *)(param_1 + 0x4a90) == 0x1) {
            *(int *)(param_1 + 0x4a8c) = *(int *)(param_1 + 0x4a8c) + 0x1;
        }
        *(undefined4 *)(param_1 + 0x4a90) = 0xfffffffc;
        return;
    }
    if (*(int *)(param_1 + 0x4ad8) <= iVar1 * gTheGame._120332_4_) {
        return;
    }
    if (*(int *)(param_1 + 0x4a90) == 0x1) {
        *(int *)(param_1 + 0x4a8c) = *(int *)(param_1 + 0x4a8c) + 0x1;
    }
    *(undefined4 *)(param_1 + 0x4a90) = 0xfffffffc;
    *(int *)(param_1 + 0x4adc) =
         iVar1 * gTheGame._120332_4_ - (*(int *)(param_1 + 0x4ad8) - *(int *)(param_1 + 0x4adc));
    *(int *)(param_1 + 0x4ad8) = iVar1 * gTheGame._120332_4_;
    return;
}



void AfterSwitch(int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    
    iVar2 = *(int *)(param_1 + 0x4ab4);
    if (param_3[0x4] == 0x0) {
        *param_3 = 0x0;
    }
    else {
        if (param_5 == 0x1) {
            iVar6 = *(int *)(param_2 + 0x18);
        }
        else {
            iVar6 = 0x4;
        }
        iVar4 = *(int *)(param_2 + 0x1c);
        if (*param_3 < 0x7) {
            if (iVar4 == 0x0) {
                *param_3 = 0x0;
            }
            else {
                piVar3 = (int *)(param_1 + (iVar4 + -0x1) * 0x318 + iVar6 * 0x2c);
                if ((piVar3[0x4] == 0x0) || (iVar1 = *piVar3, iVar1 == 0x5)) {
                    *param_3 = 0x5;
                    iVar1 = 0x1;
                    param_3[0x1] = iVar2;
                    while (iVar4 += -0x1, -0x1 < iVar4) {
                        if (*(int *)(param_1 + iVar6 * 0x2c + iVar4 * 0x318 + 0x10) == 0x0) {
                            iVar1 += 0x1;
                        }
                        else {
                            iVar4 = 0x0;
                        }
                    }
                    if (*(int *)(param_2 + 0x8) < iVar2 + iVar1) {
                        *(int *)(param_2 + 0x8) = iVar2 + iVar1;
                    }
                }
                else if (iVar1 == 0x6) {
                    *param_3 = 0x5;
                    param_3[0x8] = -0x1;
                }
                else {
                    *param_3 = 0x0;
                }
            }
        }
        if (param_4[0x4] == 0x0) {
            iVar7 = (iVar6 + 0x1) * 0x2c;
            iVar4 = *(int *)(param_2 + 0x1c) + 0x1;
            iVar6 = 0xc - iVar4;
            iVar1 = param_1 + iVar4 * 0x318;
            iVar5 = param_1 + iVar7 + iVar4 * 0x318;
            iVar8 = -0x1;
            if (iVar4 < 0xc) {
                do {
                    piVar3 = (int *)(iVar1 + iVar7);
                    if (*(int *)(iVar5 + 0x10) == 0x0) break;
                    if (piVar3[0x4] == 0x9) {
                        if ((piVar3[0x4] == 0x9) && (iVar8 != 0x0)) {
                            piVar3[0x1] = iVar2 + -0x1;
                            break;
                        }
                    }
                    else {
                        if (*piVar3 < 0x6) {
                            piVar3[0x1] = iVar2;
                            *piVar3 = 0x5;
                        }
                        iVar8 = 0x0;
                    }
                    iVar1 += 0x318;
                    iVar5 += 0x318;
                    iVar6 += -0x1;
                } while (iVar6 != 0x0);
            }
        }
    }
    if (param_4[0x4] == 0x0) {
        *param_4 = 0x0;
    }
    else {
        if (param_5 == 0x1) {
            iVar6 = *(int *)(param_2 + 0x18) + 0x1;
        }
        else {
            iVar6 = 0x5;
        }
        iVar4 = *(int *)(param_2 + 0x1c);
        if (*param_4 < 0x7) {
            if (iVar4 == 0x0) {
                *param_4 = 0x0;
            }
            else {
                piVar3 = (int *)(param_1 + (iVar4 + -0x1) * 0x318 + iVar6 * 0x2c);
                if ((piVar3[0x4] == 0x0) || (iVar1 = *piVar3, iVar1 == 0x5)) {
                    *param_4 = 0x5;
                    iVar1 = 0x1;
                    param_4[0x1] = iVar2;
                    while (iVar4 += -0x1, -0x1 < iVar4) {
                        if (*(int *)(param_1 + iVar6 * 0x2c + iVar4 * 0x318 + 0x10) == 0x0) {
                            iVar1 += 0x1;
                        }
                        else {
                            iVar4 = 0x0;
                        }
                    }
                    if (*(int *)(param_2 + 0x8) < iVar2 + iVar1) {
                        *(int *)(param_2 + 0x8) = iVar2 + iVar1;
                    }
                }
                else if (iVar1 == 0x6) {
                    *param_4 = 0x5;
                    param_4[0x8] = -0x1;
                }
                else {
                    *param_4 = 0x0;
                }
            }
        }
        if (param_3[0x4] == 0x0) {
            iVar7 = (iVar6 + -0x1) * 0x2c;
            iVar4 = *(int *)(param_2 + 0x1c) + 0x1;
            iVar6 = 0xc - iVar4;
            iVar1 = param_1 + iVar4 * 0x318;
            iVar5 = param_1 + iVar7 + iVar4 * 0x318;
            iVar8 = -0x1;
            if (iVar4 < 0xc) {
                do {
                    piVar3 = (int *)(iVar1 + iVar7);
                    if (*(int *)(iVar5 + 0x10) == 0x0) break;
                    if (piVar3[0x4] == 0x9) {
                        if ((piVar3[0x4] == 0x9) && (iVar8 != 0x0)) {
                            piVar3[0x1] = iVar2 + -0x1;
                            break;
                        }
                    }
                    else {
                        if (*piVar3 < 0x6) {
                            piVar3[0x1] = iVar2;
                            *piVar3 = 0x5;
                        }
                        iVar8 = 0x0;
                    }
                    iVar1 += 0x318;
                    iVar5 += 0x318;
                    iVar6 += -0x1;
                } while (iVar6 != 0x0);
            }
        }
    }
    *(undefined4 *)(param_1 + 0x4aa4) = 0xffffffff;
    gOverflow += 0xf0;
    *(undefined4 *)(param_2 + 0x4) = 0x0;
    *(undefined4 *)(param_2 + 0x1c) = 0xffffffff;
    return;
}



void CheckShake(int param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int *piVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    
    iVar4 = 0x0;
    if ((gSelection < 0x6e) || (0x82 < gSelection)) {
        *(undefined4 *)(param_1 + 0x4a94) = 0x0;
        *(undefined4 *)(param_1 + 0x4a98) = 0x0;
        if ((gSelection == 0x96) || ((gSelection == 0xa0 || (gSelection == 0xd2)))) {
            iVar11 = 0x8;
            iVar2 = param_1;
            do {
                if (0x5 < *(int *)(iVar2 + 0x2520)) {
                    if (0x9 < *(int *)(iVar2 + 0x2544) + *(int *)(iVar2 + 0x2534)) {
                        *(undefined4 *)(param_1 + 0x4a98) = 0xffffffff;
                    }
                    if (0xa < *(int *)(iVar2 + 0x2544) + *(int *)(iVar2 + 0x2534)) {
                        *(undefined4 *)(param_1 + 0x4a94) = 0xffffffff;
                    }
                }
                if (0x5 < *(int *)(iVar2 + 0x2570)) {
                    if (0x9 < *(int *)(iVar2 + 0x2594) + *(int *)(iVar2 + 0x2584)) {
                        *(undefined4 *)(param_1 + 0x4a98) = 0xffffffff;
                    }
                    if (0xa < *(int *)(iVar2 + 0x2594) + *(int *)(iVar2 + 0x2584)) {
                        *(undefined4 *)(param_1 + 0x4a94) = 0xffffffff;
                    }
                }
                if (0x5 < *(int *)(iVar2 + 0x25c0)) {
                    if (0x9 < *(int *)(iVar2 + 0x25e4) + *(int *)(iVar2 + 0x25d4)) {
                        *(undefined4 *)(param_1 + 0x4a98) = 0xffffffff;
                    }
                    if (0xa < *(int *)(iVar2 + 0x25e4) + *(int *)(iVar2 + 0x25d4)) {
                        *(undefined4 *)(param_1 + 0x4a94) = 0xffffffff;
                    }
                }
                if (0x5 < *(int *)(iVar2 + 0x2610)) {
                    if (0x9 < *(int *)(iVar2 + 0x2634) + *(int *)(iVar2 + 0x2624)) {
                        *(undefined4 *)(param_1 + 0x4a98) = 0xffffffff;
                    }
                    if (0xa < *(int *)(iVar2 + 0x2634) + *(int *)(iVar2 + 0x2624)) {
                        *(undefined4 *)(param_1 + 0x4a94) = 0xffffffff;
                    }
                }
                if (0x5 < *(int *)(iVar2 + 0x2660)) {
                    if (0x9 < *(int *)(iVar2 + 0x2684) + *(int *)(iVar2 + 0x2674)) {
                        *(undefined4 *)(param_1 + 0x4a98) = 0xffffffff;
                    }
                    if (0xa < *(int *)(iVar2 + 0x2684) + *(int *)(iVar2 + 0x2674)) {
                        *(undefined4 *)(param_1 + 0x4a94) = 0xffffffff;
                    }
                }
                iVar2 += 0x190;
                iVar11 += -0x1;
            } while (iVar11 != 0x0);
        }
        if (*(int *)(param_1 + 0x4a94) == 0x0) {
            iVar2 = param_1;
            for (iVar11 = 0x0; iVar11 < gMax; iVar11 += 0x1) {
                if ((*(int *)(iVar2 + 0x1be8) != 0x0) && (*(int *)(iVar2 + 0x1be8) != 0x9)) {
                    *(undefined4 *)(param_1 + 0x4a98) = 0xffffffff;
                }
                if (*(int *)(iVar2 + 0x2218) == 0x0) {
                    if ((*(int *)(iVar2 + 0x1f00) != 0x0) && (*(int *)(iVar2 + 0x1f00) != 0x9)) {
                        *(undefined4 *)(param_1 + 0x4a94) = 0xffffffff;
                    }
                }
                else if (*(int *)(iVar2 + 0x2218) != 0x9) {
                    *(undefined4 *)(param_1 + 0x4a94) = 0xffffffff;
                    iVar4 = -0x1;
                    break;
                }
                iVar2 += 0x2c;
            }
        }
        if ((*(int *)(param_1 + 0x4a98) != 0x0) || (*(int *)(param_1 + 0x4a94) != 0x0)) {
            if ((*(int *)(param_1 + 0x4a98) == 0x0) && (*(int *)(param_1 + 0x4a94) != 0x0)) {
                *(undefined4 *)(param_1 + 0x4a98) = 0xffffffff;
            }
            iVar11 = 0x0;
            iVar5 = 0x0;
            iVar6 = 0x0;
            iVar2 = param_1;
            for (iVar3 = 0x0; iVar3 < gMax; iVar3 += 0x1) {
                if ((*param_2 < 0x2) || (0x4 < *param_2)) {
                    if (*(int *)(iVar2 + 0x2218) == 0x0) {
                        if (iVar4 == 0x0) {
                            if (*(int *)(iVar2 + 0x1f00) == 0x0) {
                                iVar1 = 0x0;
                            }
                            else if ((*(int *)(iVar2 + 0x1ef0) < 0x3) ||
                                    (0x6 < *(int *)(iVar2 + 0x1ef0))) {
                                if (param_2[0x3] < 0x1) {
                                    iVar1 = 0x2;
                                    iVar9 = param_1;
                                    iVar10 = gMax;
                                    if (0x0 < gMax) {
                                        do {
                                            if (*(int *)(iVar9 + 0x2218) != 0x0) {
                                                iVar1 = 0x0;
                                                break;
                                            }
                                            iVar9 += 0x2c;
                                            iVar10 += -0x1;
                                        } while (iVar10 != 0x0);
                                    }
                                }
                                else {
                                    iVar1 = 0x1;
                                }
                            }
                            else {
                                iVar1 = 0x0;
                            }
                        }
                        else {
                            iVar1 = 0x0;
                        }
                    }
                    else {
                        iVar1 = 0x1;
                    }
                }
                else {
                    iVar1 = 0x0;
                }
                if ((iVar5 == 0x0) && (iVar1 == 0x2)) {
                    iVar12 = 0xc;
                    iVar9 = iVar2;
                    iVar10 = param_1;
                    do {
                        piVar7 = (int *)(iVar10 + iVar11);
                        if (((0x0 < *(int *)(iVar9 + 0x10)) && (piVar7[0x4] < 0x8)) &&
                           (*piVar7 == 0x0)) {
                            iVar5 = piVar7[0x9];
                            iVar6 = piVar7[0xa];
                            if ((iVar5 == 0x0) || (iVar6 < 0x0)) {
                                iVar5 = 0x1;
                                iVar6 = 0x5;
                            }
                            break;
                        }
                        iVar10 += 0x318;
                        iVar9 += 0x318;
                        iVar12 += -0x1;
                    } while (iVar12 != 0x0);
                }
                if ((iVar5 != 0x0) || (iVar1 != 0x2)) {
                    iVar12 = 0x6;
                    iVar9 = param_1;
                    iVar10 = iVar2;
                    do {
                        iVar8 = iVar9 + iVar11;
                        if ((((*(int *)(iVar10 + 0x10) != 0x0) && (*(int *)(iVar8 + 0x10) < 0x8)) &&
                            (*(int *)(iVar8 + 0x4) == 0x0)) && (*(int *)(iVar8 + 0x24) < 0x7)) {
                            if (iVar1 == 0x1) {
                                *(undefined4 *)(iVar8 + 0x24) = 0x1;
                                *(undefined4 *)(iVar8 + 0x28) = 0x0;
                            }
                            else if ((iVar1 != 0x0) || (false)) {
                                *(int *)(iVar8 + 0x24) = iVar5;
                                *(int *)(iVar8 + 0x28) = iVar6;
                            }
                            else {
                                *(undefined4 *)(iVar8 + 0x24) = 0x0;
                                *(undefined4 *)(iVar8 + 0x28) = 0x0;
                            }
                        }
                        iVar8 = iVar9 + 0x318 + iVar11;
                        if (((*(int *)(iVar10 + 0x328) != 0x0) && (*(int *)(iVar8 + 0x10) < 0x8)) &&
                           ((*(int *)(iVar8 + 0x4) == 0x0 && (*(int *)(iVar8 + 0x24) < 0x7)))) {
                            if (iVar1 == 0x1) {
                                *(undefined4 *)(iVar8 + 0x24) = 0x1;
                                *(undefined4 *)(iVar8 + 0x28) = 0x0;
                            }
                            else if ((iVar1 != 0x0) || (false)) {
                                *(int *)(iVar8 + 0x24) = iVar5;
                                *(int *)(iVar8 + 0x28) = iVar6;
                            }
                            else {
                                *(undefined4 *)(iVar8 + 0x24) = 0x0;
                                *(undefined4 *)(iVar8 + 0x28) = 0x0;
                            }
                        }
                        iVar9 += 0x630;
                        iVar10 += 0x630;
                        iVar12 += -0x1;
                    } while (iVar12 != 0x0);
                }
                iVar2 += 0x2c;
                iVar11 += 0x2c;
            }
        }
    }
    return;
}



undefined4 CheckFieldActive(int *param_1)

{
    int *piVar1;
    int iVar2;
    int iVar3;
    
    iVar2 = 0x0;
    do {
        piVar1 = param_1;
        iVar3 = gMax;
        if (0x0 < gMax) {
            do {
                if (*piVar1 != 0x0) {
                    return 0xffffffff;
                }
                piVar1 = piVar1 + 0xb;
                iVar3 += -0x1;
            } while (iVar3 != 0x0);
        }
        iVar2 += 0x1;
        param_1 = param_1 + 0xc6;
    } while (iVar2 < 0xc);
    return 0x0;
}



undefined4 CheckGameOver(int *param_1,int *param_2)

{
    undefined4 uVar1;
    int *piVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    double local_18;
    double local_10;
    double local_8;
    
    iVar4 = 0x0;
    piVar2 = param_1;
    iVar5 = gMax;
    if (0x0 < gMax) {
        do {
            if (piVar2[0x886] != 0x0) break;
            piVar2 = piVar2 + 0xb;
            iVar4 += 0x1;
            iVar5 += -0x1;
        } while (iVar5 != 0x0);
    }
    if (iVar4 == gMax) {
        param_1[0x12b5] = 0x0;
        uVar1 = 0x0;
    }
    else if (param_2[0x3] < 0x1) {
        if (*param_2 == 0x0) {
            iVar5 = 0x0;
            piVar2 = param_1;
            do {
                piVar3 = piVar2;
                iVar4 = gMax;
                if (0x0 < gMax) {
                    do {
                        if (*piVar3 != 0x0) {
                            iVar5 = -0x1;
                            goto LAB_000320d0;
                        }
                        piVar3 = piVar3 + 0xb;
                        iVar4 += -0x1;
                    } while (iVar4 != 0x0);
                }
                iVar5 += 0x1;
                piVar2 = piVar2 + 0xc6;
            } while (iVar5 < 0xc);
            iVar5 = 0x0;
LAB_000320d0:
            if (iVar5 == 0x0) {
                if (param_1[0x12a4] < 0x1) {
                    param_1[0x12b5] = param_1[0x12b5] + 0x1;
                    if (gTheGame._120328_4_ == 0x1) {
                        if (param_1[0x12b5] < 0x2) {
                            return 0x0;
                        }
                    }
                    else if (gTheGame._120328_4_ == 0x2) {
                        if (gSelection == 0xb4) {
                            if (param_1[0x12b5] < 0x2) {
                                return 0x0;
                            }
                        }
                        else if ((gSelection == 0xc8) &&
                                (param_1[0x12b5] <=
                                 (int)(char)st_Player2State[param_1[0x12b8] * 0xa + 0x6])) {
                            return 0x0;
                        }
                        if (gTheGame._120340_4_ == 0x0) {
                            if ((int)gTheGame._120344_4_ < 0xa) {
                                local_8 = (double)CONCAT44(0x43300000,
                                                           gTheGame._120344_4_ ^ 0x80000000);
                                local_10 = (double)CONCAT44(0x43300000,
                                                            (int)(char)st_Player2State
                                                                       [param_1[0x12b8] * 0xa + 0x6]
                                                            ^ 0x80000000);
                                iVar5 = (int)((1.0 - (double)(float)(local_8 - 4503601774854144.0) *
                                                     0.05) * (local_10 - 4503601774854144.0));
                            }
                            else if ((int)gTheGame._120344_4_ < 0x14) {
                                local_18 = (double)CONCAT44(0x43300000,
                                                            gTheGame._120344_4_ - 0xa ^ 0x80000000);
                                local_10 = (double)CONCAT44(0x43300000,
                                                            (int)(char)st_Player2State
                                                                       [param_1[0x12b8] * 0xa + 0x6]
                                                            ^ 0x80000000);
                                iVar5 = (int)((1.0 - (double)(float)(local_18 - 4503601774854144.0)
                                                     * 0.05) * (local_10 - 4503601774854144.0) * 0.5
                                             );
                            }
                            else if ((int)gTheGame._120344_4_ < 0x1e) {
                                local_18 = (double)CONCAT44(0x43300000,
                                                            gTheGame._120344_4_ - 0x14 ^ 0x80000000)
                                ;
                                local_10 = (double)CONCAT44(0x43300000,
                                                            (int)(char)st_Player2State
                                                                       [param_1[0x12b8] * 0xa + 0x6]
                                                            ^ 0x80000000);
                                iVar5 = (int)((1.0 - (double)(float)(local_18 - 4503601774854144.0)
                                                     * 0.05) *
                                             (local_10 - 4503601774854144.0) * 0.25);
                            }
                            else {
                                local_18 = (double)CONCAT44(0x43300000,
                                                            (int)(char)st_Player2State
                                                                       [param_1[0x12b8] * 0xa + 0x6]
                                                            ^ 0x80000000);
                                iVar5 = (int)((local_18 - 4503601774854144.0) * 0.125);
                            }
                        }
                        else {
                            local_18 = (double)CONCAT44(0x43300000,
                                                        (int)(char)st_Player2State
                                                                   [param_1[0x12b8] * 0xa + 0x6] ^
                                                        0x80000000);
                            iVar5 = (int)((local_18 - 4503601774854144.0) * 0.125);
                        }
                        if (param_1[0x12b5] <= iVar5) {
                            return 0x0;
                        }
                    }
                    else {
                        if (gSelection == 0xdc) {
                            if (param_1[0x12b5] < 0x2) {
                                return 0x0;
                            }
                        }
                        else if ((gSelection == 0xe6) &&
                                (param_1[0x12b5] <=
                                 (int)(char)st_Player2State[param_1[0x12b8] * 0xa + 0x6])) {
                            return 0x0;
                        }
                        if (gTheGame._120340_4_ == 0x0) {
                            if ((int)gTheGame._120344_4_ < 0xa) {
                                local_18 = (double)CONCAT44(0x43300000,
                                                            gTheGame._120344_4_ ^ 0x80000000);
                                local_10 = (double)CONCAT44(0x43300000,
                                                            (int)(char)st_Player2State
                                                                       [param_1[0x12b8] * 0xa + 0x6]
                                                            ^ 0x80000000);
                                iVar5 = (int)((1.0 - (double)(float)(local_18 - 4503601774854144.0)
                                                     * 0.05) * (local_10 - 4503601774854144.0));
                            }
                            else if ((int)gTheGame._120344_4_ < 0x14) {
                                local_18 = (double)CONCAT44(0x43300000,
                                                            gTheGame._120344_4_ - 0xa ^ 0x80000000);
                                local_10 = (double)CONCAT44(0x43300000,
                                                            (int)(char)st_Player2State
                                                                       [param_1[0x12b8] * 0xa + 0x6]
                                                            ^ 0x80000000);
                                iVar5 = (int)((1.0 - (double)(float)(local_18 - 4503601774854144.0)
                                                     * 0.05) * (local_10 - 4503601774854144.0) * 0.5
                                             );
                            }
                            else if ((int)gTheGame._120344_4_ < 0x1e) {
                                local_18 = (double)CONCAT44(0x43300000,
                                                            gTheGame._120344_4_ - 0x14 ^ 0x80000000)
                                ;
                                local_10 = (double)CONCAT44(0x43300000,
                                                            (int)(char)st_Player2State
                                                                       [param_1[0x12b8] * 0xa + 0x6]
                                                            ^ 0x80000000);
                                iVar5 = (int)((1.0 - (double)(float)(local_18 - 4503601774854144.0)
                                                     * 0.05) *
                                             (local_10 - 4503601774854144.0) * 0.25);
                            }
                            else {
                                local_18 = (double)CONCAT44(0x43300000,
                                                            (int)(char)st_Player2State
                                                                       [param_1[0x12b8] * 0xa + 0x6]
                                                            ^ 0x80000000);
                                iVar5 = (int)((local_18 - 4503601774854144.0) * 0.125);
                            }
                        }
                        else {
                            local_18 = (double)CONCAT44(0x43300000,
                                                        (int)(char)st_Player2State
                                                                   [param_1[0x12b8] * 0xa + 0x6] ^
                                                        0x80000000);
                            iVar5 = (int)((local_18 - 4503601774854144.0) * 0.125);
                        }
                        if (param_1[0x12b5] <= iVar5) {
                            return 0x0;
                        }
                    }
                    uVar1 = 0xffffffff;
                }
                else {
                    uVar1 = 0xffffffff;
                }
            }
            else {
                uVar1 = 0x0;
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

