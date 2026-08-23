
void CheckCollision(undefined4 param_1)

{
    CheckRowCombos();
    CheckColCombos(param_1);
    if (gTheGame._120332_4_ == 0x2) {
        Check3DConnectCombos(param_1);
    }
    return;
}



void CompactWell(int *param_1,int param_2)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int *piVar6;
    int *piVar7;
    int *piVar8;
    int *__src;
    int *__dest;
    int aiStack_d8 [0x29];
    
    iVar3 = 0x0;
    bzero(aiStack_d8,0xa0);
    iVar5 = 0x0;
    piVar2 = param_1;
    piVar7 = param_1;
    do {
        __src = param_1 + (iVar5 + 0x1) * 0xc6;
        piVar8 = piVar2;
        __dest = piVar7;
        for (iVar4 = 0x0; iVar4 < gMax; iVar4 += 0x1) {
            if ((__dest[0x4] == 0x0) && (__src[0x4] != 0x0)) {
                if (__src[0x4] == 0x9) {
                    iVar1 = ReturnAttackSlot(param_1,iVar5 + 0x1,iVar4);
                    if ((iVar1 != -0x1) && (piVar6 = aiStack_d8 + iVar1, *piVar6 == 0x0)) {
                        if (gTheGame._120332_4_ == 0x1) {
                            Compact2DAttack(param_1);
                            *piVar6 = -0x1;
                        }
                        else {
                            Compact3DAttack(param_1);
                            *piVar6 = -0x1;
                        }
                    }
                }
                else if ((__src[0x1] == 0x0) &&
                        ((((iVar1 = *__src, iVar1 == 0x1 || (iVar1 == 0x6)) ||
                          ((*__dest != 0x2 && (*__dest != 0x3)))) && (0x1 < iVar1 - 0x2U)))) {
                    if (iVar1 - 0x5U < 0x2) {
                        *__src = 0x1;
                    }
                    bcopy(__src,__dest,0x2c);
                    Init2DTetrisTMEM(__dest,piVar8 + 0xfc4);
                    InitTetrisState(__src);
                    if (iVar5 == 0x0) {
                        param_1[0x12a9] = -0x1;
                        iVar3 = -0x1;
                    }
                    else if ((__dest[-0xc6] == 0x1) || (__dest[-0xc2] == 0x0)) {
                        *__dest = 0x1;
                    }
                    else if (__dest[-0xc2] == 0x9) {
                        iVar1 = ReturnAttackSlot(param_1,iVar5 + -0x1,iVar4);
                        if ((iVar1 != -0x1) && (param_1[iVar1 * 0x14 + 0x948] != 0x6)) {
                            iVar3 = -0x1;
                        }
                    }
                    else {
                        iVar3 = -0x1;
                    }
                }
            }
            else if ((__dest[0x4] == 0x0) || (__src[0x4] == 0x0)) {
                if ((iVar5 == 0x0) && ((*__dest == 0x1 || (*__dest == 0x6)))) {
                    *__dest = 0x0;
                    param_1[0x12a9] = -0x1;
                }
            }
            else {
                if ((iVar5 == 0x0) && ((*__dest == 0x1 || (*__dest == 0x6)))) {
                    *__dest = 0x0;
                    param_1[0x12a9] = -0x1;
                }
                if ((((__src[0x4] != 0x9) && (iVar1 = *__src, iVar1 != 0x0)) && (__src[0x1] == 0x0))
                   && ((iVar1 == 0x1 || (iVar1 - 0x5U < 0x2)))) {
                    iVar1 = *__dest;
                    if (iVar1 == 0x6) {
                        *__src = 0x5;
                        __src[0x8] = -0x1;
                    }
                    else if ((iVar1 < 0x6) && (0x4 < iVar1)) {
                        *__src = 0x5;
                    }
                    else {
                        *__src = 0x0;
                        param_1[0x12a9] = -0x1;
                    }
                }
            }
            __dest = __dest + 0xb;
            __src = __src + 0xb;
            piVar8 = piVar8 + 0x6;
        }
        iVar5 += 0x1;
        piVar7 = piVar7 + 0xc6;
        piVar2 = piVar2 + 0x24;
    } while (iVar5 < 0xb);
    if (iVar3 != 0x0) {
        if (gTheGame._120328_4_ == 0x1) {
            PlaySE(SFX_INIT_TABLE,0x46);
        }
        else if (gTheGame._120328_4_ == 0x2) {
            if (param_2 == 0x0) {
                PlaySE(SFX_INIT_TABLE,0x47);
            }
            else {
                PlaySE(SFX_INIT_TABLE,0x48);
            }
        }
        else {
            PlaySE(SFX_INIT_TABLE,0x46);
        }
    }
    if (gTheGame._120328_4_ != 0x1) {
        iVar5 = 0x0;
        piVar2 = param_1;
        iVar3 = gMax;
        if (0x0 < gMax) {
            do {
                if (piVar2[0x886] != 0x0) break;
                piVar2 = piVar2 + 0xb;
                iVar5 += 0x1;
                iVar3 += -0x1;
            } while (iVar3 != 0x0);
        }
        if (gTheGame._120332_4_ == 0x1) {
            if (iVar5 == 0x6) {
                Compact2DAttackNoWhere(param_1);
            }
        }
        else if (iVar5 == 0x12) {
            Compact3DAttackNoWhere(param_1);
        }
    }
    return;
}



void CheckIcon(int param_1,int param_2)

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
    
    iVar4 = 0x0;
    iVar5 = -0x1;
    iVar1 = 0x0;
    iVar6 = 0x0;
    if (param_2 != 0x0) {
        iVar9 = 0x5;
        iVar2 = param_1;
        iVar3 = gMax;
        do {
            if ((*(int *)(iVar2 + 0x31a0) != 0x0) && (*(int *)(iVar2 + 0x31bc) < 0x0)) {
                if (iVar4 < *(int *)(iVar2 + 0x31b8)) {
                    iVar4 = *(int *)(iVar2 + 0x31b8);
                    iVar3 = *(int *)(iVar2 + 0x31ac);
                }
                if ((*(int *)(iVar2 + 0x31ac) < iVar3) && (iVar4 <= *(int *)(iVar2 + 0x31b8))) {
                    iVar3 = *(int *)(iVar2 + 0x31ac);
                    iVar4 = *(int *)(iVar2 + 0x31b8);
                }
            }
            if ((*(int *)(iVar2 + 0x3208) != 0x0) && (*(int *)(iVar2 + 0x3224) < 0x0)) {
                if (iVar4 < *(int *)(iVar2 + 0x3220)) {
                    iVar4 = *(int *)(iVar2 + 0x3220);
                    iVar3 = *(int *)(iVar2 + 0x3214);
                }
                if ((*(int *)(iVar2 + 0x3214) < iVar3) && (iVar4 <= *(int *)(iVar2 + 0x3220))) {
                    iVar3 = *(int *)(iVar2 + 0x3214);
                    iVar4 = *(int *)(iVar2 + 0x3220);
                }
            }
            iVar2 += 0xd0;
            iVar9 += -0x1;
        } while (iVar9 != 0x0);
        if ((param_2 != *(int *)(param_1 + 0x4a84)) && (param_2 == 0x3)) {
            iVar6 = -0x1;
        }
        iVar9 = 0x0;
        iVar2 = param_1;
        do {
            if (((*(int *)(iVar2 + 0x31a0) != 0x0) && (*(int *)(iVar2 + 0x31a4) == 0xa)) &&
               (*(int *)(iVar2 + 0x31bc) < 0x0)) {
                if (iVar1 == 0x0) {
                    *(int *)(iVar2 + 0x31bc) = -param_2;
                    if (0x3 < param_2) {
                        iVar6 = -0x1;
                    }
                    *(int *)(iVar2 + 0x31ac) = iVar3;
                    iVar1 = -0x1;
                    *(int *)(iVar2 + 0x31b8) = iVar4;
                    if (((*(int *)(param_1 + 0x4a94) != 0x0) && (gTheGame._120328_4_ == 0x1)) &&
                       ((gGameStatus & 0x20) == 0x0)) {
                        iVar10 = 0xa;
                        iVar7 = 0x0;
                        iVar8 = param_1;
                        do {
                            if (*(int *)(iVar8 + 0x31a0) == 0x0) {
                                iVar8 = param_1 + iVar7 * 0x68;
                                *(undefined4 *)(iVar8 + 0x31a0) = 0xffffffff;
                                *(undefined4 *)(iVar8 + 0x31a4) = 0xb;
                                *(undefined4 *)(iVar8 + 0x31bc) = 0xffffffff;
                                *(int *)(iVar8 + 0x31ac) = iVar3;
                                *(int *)(iVar8 + 0x31b8) = iVar4;
                                break;
                            }
                            iVar8 += 0x68;
                            iVar7 += 0x1;
                            iVar10 += -0x1;
                        } while (iVar10 != 0x0);
                    }
                }
                else {
                    *(undefined4 *)(iVar2 + 0x31a0) = 0x0;
                }
            }
            iVar9 += 0x1;
            iVar2 += 0x68;
        } while (iVar9 < 0xa);
        iVar2 = 0x0;
        iVar1 = param_1;
        do {
            if (((*(int *)(iVar1 + 0x31a0) != 0x0) && (*(int *)(iVar1 + 0x31a4) == 0xc)) &&
               (*(int *)(iVar1 + 0x31bc) < 0x0)) {
                if ((iVar5 != 0x0) && (*(int *)(param_1 + 0x4a88) < 0x0)) {
                    iVar9 = -0x1 - *(int *)(param_1 + 0x4a88);
                    iVar5 = 0x0;
                    if (0xb < iVar9) {
                        iVar9 = 0xb;
                    }
                    *(int *)(param_1 + 0x4a8c) =
                         *(int *)(param_1 + 0x4a8c) + *(int *)(st_ChainScore + iVar9 * 0x4);
                }
                if (iVar6 == 0x0) {
                    *(int *)(iVar1 + 0x31bc) = -param_2;
                    iVar6 = -0x1;
                    *(int *)(iVar1 + 0x31ac) = iVar3;
                    *(int *)(iVar1 + 0x31b8) = iVar4;
                    if ((((*(int *)(param_1 + 0x4a94) != 0x0) && (param_2 != 0x3)) &&
                        (gTheGame._120328_4_ == 0x1)) && ((gGameStatus & 0x20) == 0x0)) {
                        iVar7 = 0xa;
                        iVar8 = 0x0;
                        iVar9 = param_1;
                        do {
                            if (*(int *)(iVar9 + 0x31a0) == 0x0) {
                                iVar9 = param_1 + iVar8 * 0x68;
                                *(undefined4 *)(iVar9 + 0x31a0) = 0xffffffff;
                                *(undefined4 *)(iVar9 + 0x31a4) = 0xb;
                                *(undefined4 *)(iVar9 + 0x31bc) = 0xffffffff;
                                *(int *)(iVar9 + 0x31ac) = iVar3;
                                *(int *)(iVar9 + 0x31b8) = iVar4;
                                break;
                            }
                            iVar9 += 0x68;
                            iVar8 += 0x1;
                            iVar7 += -0x1;
                        } while (iVar7 != 0x0);
                    }
                }
                else {
                    *(undefined4 *)(iVar1 + 0x31a0) = 0x0;
                }
            }
            iVar2 += 0x1;
            iVar1 += 0x68;
        } while (iVar2 < 0xa);
        iVar1 = param_1 + iVar4 * 0x318 + iVar3 * 0x2c;
        iVar5 = 0x0;
        iVar4 = param_1;
        do {
            if (*(int *)(iVar4 + 0x31a0) != 0x0) {
                if ((*(int *)(iVar4 + 0x31a4) == 0xa) && (true)) {
                    switch(*(undefined4 *)(iVar1 + 0x10)) {
                    case 0x1:
                        *(undefined4 *)(param_1 + 0x5798) = 0x1;
                        break;
                    case 0x2:
                        *(undefined4 *)(param_1 + 0x5798) = 0x2;
                        break;
                    case 0x3:
                        *(undefined4 *)(param_1 + 0x5798) = 0x3;
                        break;
                    case 0x4:
                        *(undefined4 *)(param_1 + 0x5798) = 0x4;
                        break;
                    case 0x5:
                        *(undefined4 *)(param_1 + 0x5798) = 0x5;
                        break;
                    case 0x6:
                        *(undefined4 *)(param_1 + 0x5798) = 0x6;
                        break;
                    case 0x7:
                        *(undefined4 *)(param_1 + 0x5798) = 0x7;
                    }
                }
                if ((0x3 < param_2) && (true)) {
                    switch(*(undefined4 *)(iVar1 + 0x10)) {
                    case 0x1:
                        *(undefined4 *)(param_1 + 0x579c) = 0x1;
                        break;
                    case 0x2:
                        *(undefined4 *)(param_1 + 0x579c) = 0x2;
                        break;
                    case 0x3:
                        *(undefined4 *)(param_1 + 0x579c) = 0x3;
                        break;
                    case 0x4:
                        *(undefined4 *)(param_1 + 0x579c) = 0x4;
                        break;
                    case 0x5:
                        *(undefined4 *)(param_1 + 0x579c) = 0x5;
                        break;
                    case 0x6:
                        *(undefined4 *)(param_1 + 0x579c) = 0x6;
                        break;
                    case 0x7:
                        *(undefined4 *)(param_1 + 0x579c) = 0x7;
                    }
                }
                if (*(int *)(iVar1 + 0x10) == 0x7) {
                    *(undefined4 *)(param_1 + 0x57a0) = 0x7;
                }
            }
            iVar5 += 0x1;
            iVar4 += 0x68;
        } while (iVar5 < 0xa);
    }
    return;
}



void CheckRowCombos(int *param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int *piVar6;
    int *piVar7;
    
    iVar5 = 0x0;
    piVar6 = param_1;
    do {
        iVar2 = 0x0;
        iVar3 = 0x1;
        piVar7 = piVar6;
        for (iVar4 = 0x0; iVar4 < gMax; iVar4 += 0x1) {
            iVar1 = piVar7[0x4];
            if ((((iVar1 == 0x0) || (0x7 < iVar1)) || (iVar1 != iVar2)) ||
               ((piVar7[0x1] != 0x0 ||
                (((iVar1 = *piVar7, iVar1 != 0x0 && (iVar1 != 0x4)) && (iVar1 != 0x7)))))) {
                if (0x2 < iVar3) {
                    SetRowState(param_1,iVar3,iVar5,iVar4 + -0x1);
                }
                iVar2 = piVar7[0x4];
                if (((iVar2 == 0x0) || (0x7 < iVar2)) ||
                   ((piVar7[0x1] != 0x0 ||
                    (((iVar3 = *piVar7, iVar3 != 0x0 && (iVar3 != 0x4)) && (iVar3 != 0x7)))))) {
                    iVar2 = 0x0;
                }
                iVar3 = 0x1;
            }
            else {
                iVar3 += 0x1;
            }
            piVar7 = piVar7 + 0xb;
        }
        if (0x2 < iVar3) {
            SetRowState(param_1,iVar3,iVar5,iVar4 + -0x1);
        }
        iVar5 += 0x1;
        piVar6 = piVar6 + 0xc6;
    } while (iVar5 < 0xc);
    return;
}



void CheckColCombos(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    
    iVar7 = 0x0;
    iVar8 = param_1;
    for (iVar5 = 0x0; iVar5 < gMax; iVar5 += 0x1) {
        iVar2 = 0x0;
        iVar3 = 0x1;
        iVar1 = 0x0;
        iVar9 = iVar8;
        iVar10 = param_1;
        do {
            iVar6 = iVar1;
            piVar4 = (int *)(iVar10 + iVar7);
            if ((((*(int *)(iVar9 + 0x10) == 0x0) || (0x7 < piVar4[0x4])) || (piVar4[0x4] != iVar2))
               || ((piVar4[0x1] != 0x0 ||
                   (((iVar1 = *piVar4, iVar1 != 0x0 && (iVar1 != 0x4)) && (iVar1 != 0x7)))))) {
                if (0x2 < iVar3) {
                    SetColState(param_1,iVar3,iVar6 + -0x1,iVar5);
                }
                iVar2 = piVar4[0x4];
                if (((iVar2 == 0x0) || (0x7 < iVar2)) ||
                   ((piVar4[0x1] != 0x0 ||
                    (((iVar1 = *piVar4, iVar1 != 0x0 && (iVar1 != 0x4)) && (iVar1 != 0x7)))))) {
                    iVar2 = 0x0;
                }
                iVar3 = 0x1;
            }
            else {
                iVar3 += 0x1;
            }
            iVar10 += 0x318;
            iVar9 += 0x318;
            iVar1 = iVar6 + 0x1;
        } while (iVar6 + 0x1 < 0xc);
        if (0x2 < iVar3) {
            SetColState(param_1,iVar3,iVar6,iVar5);
        }
        iVar8 += 0x2c;
        iVar7 += 0x2c;
    }
    return;
}



void SetRowState(int param_1,uint param_2,int param_3,int param_4)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    int iVar7;
    int iVar8;
    uint uVar9;
    uint uVar10;
    int iVar11;
    
    iVar1 = param_1 + param_3 * 0x318;
    uVar2 = 0x1e;
    uVar3 = 0x64;
    iVar4 = 0xc;
    puVar5 = NULL;
    iVar7 = 0x0;
    uVar10 = param_2;
    if (0x0 < (int)param_2) {
        do {
            if (*(int *)(iVar1 + (param_4 - iVar7) * 0x2c + 0x20) != 0x0) {
                iVar4 = 0xa;
            }
            iVar7 += 0x1;
            uVar10 -= 0x1;
        } while (uVar10 != 0x0);
    }
    if (0x5 < (int)param_2) {
        uVar2 = 0x1f;
    }
    if (iVar4 != 0xc) {
        if (*(int *)(param_1 + 0x4a88) < -0x1) {
            uVar2 = 0x21;
            uVar3 = 0x190;
        }
        else if (*(int *)(param_1 + 0x4a88) == -0x1) {
            uVar2 = 0x20;
            uVar3 = 0x12c;
        }
        else {
            uVar2 = 0x1f;
            uVar3 = 0xc8;
        }
    }
    iVar11 = 0xa;
    iVar8 = 0x0;
    iVar7 = param_1;
    do {
        if (*(int *)(iVar7 + 0x31a0) == 0x0) {
            puVar5 = (undefined4 *)(param_1 + iVar8 * 0x68 + 0x31a0);
            break;
        }
        iVar7 += 0x68;
        iVar8 += 0x1;
        iVar11 += -0x1;
    } while (iVar11 != 0x0);
    iVar7 = 0x0;
    if (iVar4 == 0xa) {
        if (0x0 < (int)param_2) {
            uVar10 = param_2 >> 0x3;
            uVar9 = param_2;
            if (uVar10 != 0x0) {
                do {
                    puVar6 = (undefined4 *)(iVar1 + (param_4 - iVar7) * 0x2c);
                    *puVar6 = 0x7;
                    puVar6[0x5] = uVar2;
                    puVar6[0x6] = uVar3;
                    puVar6[0x8] = 0xffffffff;
                    puVar6 = (undefined4 *)(iVar1 + (param_4 - (iVar7 + 0x1)) * 0x2c);
                    *puVar6 = 0x7;
                    puVar6[0x5] = uVar2;
                    puVar6[0x6] = uVar3;
                    puVar6[0x8] = 0xffffffff;
                    puVar6 = (undefined4 *)(iVar1 + (param_4 - (iVar7 + 0x2)) * 0x2c);
                    *puVar6 = 0x7;
                    puVar6[0x5] = uVar2;
                    puVar6[0x6] = uVar3;
                    puVar6[0x8] = 0xffffffff;
                    puVar6 = (undefined4 *)(iVar1 + (param_4 - (iVar7 + 0x3)) * 0x2c);
                    *puVar6 = 0x7;
                    puVar6[0x5] = uVar2;
                    iVar8 = iVar7 + 0x6;
                    puVar6[0x6] = uVar3;
                    puVar6[0x8] = 0xffffffff;
                    puVar6 = (undefined4 *)(iVar1 + (param_4 - (iVar7 + 0x4)) * 0x2c);
                    *puVar6 = 0x7;
                    puVar6[0x5] = uVar2;
                    iVar11 = iVar7 + 0x7;
                    puVar6[0x6] = uVar3;
                    puVar6[0x8] = 0xffffffff;
                    puVar6 = (undefined4 *)(iVar1 + (param_4 - (iVar7 + 0x5)) * 0x2c);
                    *puVar6 = 0x7;
                    puVar6[0x5] = uVar2;
                    iVar7 += 0x8;
                    puVar6[0x6] = uVar3;
                    puVar6[0x8] = 0xffffffff;
                    puVar6 = (undefined4 *)(iVar1 + (param_4 - iVar8) * 0x2c);
                    *puVar6 = 0x7;
                    puVar6[0x5] = uVar2;
                    puVar6[0x6] = uVar3;
                    puVar6[0x8] = 0xffffffff;
                    puVar6 = (undefined4 *)(iVar1 + (param_4 - iVar11) * 0x2c);
                    *puVar6 = 0x7;
                    puVar6[0x5] = uVar2;
                    puVar6[0x6] = uVar3;
                    puVar6[0x8] = 0xffffffff;
                    uVar10 -= 0x1;
                } while (uVar10 != 0x0);
                uVar9 = param_2 & 0x7;
                if (uVar9 == 0x0) goto LAB_00052cd8;
            }
            do {
                puVar6 = (undefined4 *)(iVar1 + (param_4 - iVar7) * 0x2c);
                *puVar6 = 0x7;
                iVar7 += 0x1;
                puVar6[0x5] = uVar2;
                puVar6[0x6] = uVar3;
                puVar6[0x8] = 0xffffffff;
                uVar9 -= 0x1;
            } while (uVar9 != 0x0);
        }
    }
    else if (0x0 < (int)param_2) {
        uVar10 = param_2 >> 0x3;
        uVar9 = param_2;
        if (uVar10 != 0x0) {
            do {
                puVar6 = (undefined4 *)(iVar1 + (param_4 - iVar7) * 0x2c);
                *puVar6 = 0x7;
                puVar6[0x5] = uVar2;
                puVar6[0x6] = uVar3;
                puVar6 = (undefined4 *)(iVar1 + (param_4 - (iVar7 + 0x1)) * 0x2c);
                *puVar6 = 0x7;
                puVar6[0x5] = uVar2;
                puVar6[0x6] = uVar3;
                puVar6 = (undefined4 *)(iVar1 + (param_4 - (iVar7 + 0x2)) * 0x2c);
                *puVar6 = 0x7;
                puVar6[0x5] = uVar2;
                puVar6[0x6] = uVar3;
                puVar6 = (undefined4 *)(iVar1 + (param_4 - (iVar7 + 0x3)) * 0x2c);
                *puVar6 = 0x7;
                puVar6[0x5] = uVar2;
                puVar6[0x6] = uVar3;
                puVar6 = (undefined4 *)(iVar1 + (param_4 - (iVar7 + 0x4)) * 0x2c);
                *puVar6 = 0x7;
                puVar6[0x5] = uVar2;
                puVar6[0x6] = uVar3;
                puVar6 = (undefined4 *)(iVar1 + (param_4 - (iVar7 + 0x5)) * 0x2c);
                *puVar6 = 0x7;
                puVar6[0x5] = uVar2;
                puVar6[0x6] = uVar3;
                puVar6 = (undefined4 *)(iVar1 + (param_4 - (iVar7 + 0x6)) * 0x2c);
                *puVar6 = 0x7;
                puVar6[0x5] = uVar2;
                puVar6[0x6] = uVar3;
                puVar6 = (undefined4 *)(iVar1 + (param_4 - (iVar7 + 0x7)) * 0x2c);
                *puVar6 = 0x7;
                iVar7 += 0x8;
                puVar6[0x5] = uVar2;
                puVar6[0x6] = uVar3;
                uVar10 -= 0x1;
            } while (uVar10 != 0x0);
            uVar9 = param_2 & 0x7;
            if (uVar9 == 0x0) goto LAB_00052cd8;
        }
        do {
            puVar6 = (undefined4 *)(iVar1 + (param_4 - iVar7) * 0x2c);
            *puVar6 = 0x7;
            iVar7 += 0x1;
            puVar6[0x5] = uVar2;
            puVar6[0x6] = uVar3;
            uVar9 -= 0x1;
        } while (uVar9 != 0x0);
    }
LAB_00052cd8:
    if (puVar5 != NULL) {
        *puVar5 = 0xffffffff;
        puVar5[0x1] = iVar4;
        puVar5[0x3] = param_4 - (param_2 - 0x1);
        puVar5[0x4] = param_3;
        puVar5[0x5] = param_4;
        puVar5[0x6] = param_3;
        puVar5[0x7] = -param_2;
        if (*(int *)(param_1 + param_3 * 0x318 + param_4 * 0x2c + 0x10) == 0x7) {
            *(uint *)(param_1 + 0x4a84) = *(int *)(param_1 + 0x4a84) + param_2;
        }
    }
    return;
}



void SetColState(int param_1,uint param_2,int param_3,int param_4)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    undefined4 *puVar5;
    uint uVar6;
    undefined4 *puVar7;
    int iVar8;
    int iVar9;
    uint uVar10;
    int iVar11;
    
    iVar1 = param_4 * 0x2c;
    uVar2 = 0x1e;
    uVar3 = 0x64;
    iVar4 = 0xc;
    puVar5 = NULL;
    iVar8 = 0x0;
    uVar10 = param_2;
    if (0x0 < (int)param_2) {
        do {
            if (*(int *)(param_1 + iVar1 + (param_3 - iVar8) * 0x318 + 0x20) != 0x0) {
                iVar4 = 0xa;
            }
            iVar8 += 0x1;
            uVar10 -= 0x1;
        } while (uVar10 != 0x0);
    }
    if (0x5 < (int)param_2) {
        uVar2 = 0x1f;
    }
    if (iVar4 != 0xc) {
        if (*(int *)(param_1 + 0x4a88) < -0x1) {
            uVar2 = 0x21;
            uVar3 = 0x190;
        }
        else if (*(int *)(param_1 + 0x4a88) == -0x1) {
            uVar2 = 0x20;
            uVar3 = 0x12c;
        }
        else {
            uVar2 = 0x1f;
            uVar3 = 0xc8;
        }
    }
    iVar11 = 0xa;
    iVar9 = 0x0;
    iVar8 = param_1;
    do {
        if (*(int *)(iVar8 + 0x31a0) == 0x0) {
            puVar5 = (undefined4 *)(param_1 + iVar9 * 0x68 + 0x31a0);
            break;
        }
        iVar8 += 0x68;
        iVar9 += 0x1;
        iVar11 += -0x1;
    } while (iVar11 != 0x0);
    iVar8 = 0x0;
    if (iVar4 == 0xa) {
        if (0x0 < (int)param_2) {
            uVar10 = param_2 >> 0x3;
            uVar6 = param_2;
            if (uVar10 != 0x0) {
                do {
                    puVar7 = (undefined4 *)(param_1 + (param_3 - iVar8) * 0x318 + iVar1);
                    *puVar7 = 0x7;
                    puVar7[0x5] = uVar2;
                    puVar7[0x6] = uVar3;
                    puVar7[0x8] = 0xffffffff;
                    puVar7 = (undefined4 *)(param_1 + (param_3 - (iVar8 + 0x1)) * 0x318 + iVar1);
                    *puVar7 = 0x7;
                    puVar7[0x5] = uVar2;
                    puVar7[0x6] = uVar3;
                    puVar7[0x8] = 0xffffffff;
                    puVar7 = (undefined4 *)(param_1 + (param_3 - (iVar8 + 0x2)) * 0x318 + iVar1);
                    *puVar7 = 0x7;
                    puVar7[0x5] = uVar2;
                    puVar7[0x6] = uVar3;
                    puVar7[0x8] = 0xffffffff;
                    puVar7 = (undefined4 *)(param_1 + (param_3 - (iVar8 + 0x3)) * 0x318 + iVar1);
                    *puVar7 = 0x7;
                    puVar7[0x5] = uVar2;
                    puVar7[0x6] = uVar3;
                    iVar9 = iVar8 + 0x6;
                    puVar7[0x8] = 0xffffffff;
                    puVar7 = (undefined4 *)(param_1 + (param_3 - (iVar8 + 0x4)) * 0x318 + iVar1);
                    *puVar7 = 0x7;
                    puVar7[0x5] = uVar2;
                    puVar7[0x6] = uVar3;
                    iVar11 = iVar8 + 0x7;
                    puVar7[0x8] = 0xffffffff;
                    puVar7 = (undefined4 *)(param_1 + (param_3 - (iVar8 + 0x5)) * 0x318 + iVar1);
                    *puVar7 = 0x7;
                    puVar7[0x5] = uVar2;
                    puVar7[0x6] = uVar3;
                    iVar8 += 0x8;
                    puVar7[0x8] = 0xffffffff;
                    puVar7 = (undefined4 *)(param_1 + (param_3 - iVar9) * 0x318 + iVar1);
                    *puVar7 = 0x7;
                    puVar7[0x5] = uVar2;
                    puVar7[0x6] = uVar3;
                    puVar7[0x8] = 0xffffffff;
                    puVar7 = (undefined4 *)(param_1 + (param_3 - iVar11) * 0x318 + iVar1);
                    *puVar7 = 0x7;
                    puVar7[0x5] = uVar2;
                    puVar7[0x6] = uVar3;
                    puVar7[0x8] = 0xffffffff;
                    uVar10 -= 0x1;
                } while (uVar10 != 0x0);
                uVar6 = param_2 & 0x7;
                if (uVar6 == 0x0) goto LAB_000530e4;
            }
            do {
                puVar7 = (undefined4 *)(param_1 + (param_3 - iVar8) * 0x318 + iVar1);
                *puVar7 = 0x7;
                iVar8 += 0x1;
                puVar7[0x5] = uVar2;
                puVar7[0x6] = uVar3;
                puVar7[0x8] = 0xffffffff;
                uVar6 -= 0x1;
            } while (uVar6 != 0x0);
        }
    }
    else if (0x0 < (int)param_2) {
        uVar10 = param_2 >> 0x3;
        uVar6 = param_2;
        if (uVar10 != 0x0) {
            do {
                puVar7 = (undefined4 *)(param_1 + (param_3 - iVar8) * 0x318 + iVar1);
                *puVar7 = 0x7;
                puVar7[0x5] = uVar2;
                puVar7[0x6] = uVar3;
                puVar7 = (undefined4 *)(param_1 + (param_3 - (iVar8 + 0x1)) * 0x318 + iVar1);
                *puVar7 = 0x7;
                puVar7[0x5] = uVar2;
                puVar7[0x6] = uVar3;
                puVar7 = (undefined4 *)(param_1 + (param_3 - (iVar8 + 0x2)) * 0x318 + iVar1);
                *puVar7 = 0x7;
                puVar7[0x5] = uVar2;
                puVar7[0x6] = uVar3;
                puVar7 = (undefined4 *)(param_1 + (param_3 - (iVar8 + 0x3)) * 0x318 + iVar1);
                *puVar7 = 0x7;
                puVar7[0x5] = uVar2;
                puVar7[0x6] = uVar3;
                puVar7 = (undefined4 *)(param_1 + (param_3 - (iVar8 + 0x4)) * 0x318 + iVar1);
                *puVar7 = 0x7;
                puVar7[0x5] = uVar2;
                puVar7[0x6] = uVar3;
                puVar7 = (undefined4 *)(param_1 + (param_3 - (iVar8 + 0x5)) * 0x318 + iVar1);
                *puVar7 = 0x7;
                puVar7[0x5] = uVar2;
                puVar7[0x6] = uVar3;
                puVar7 = (undefined4 *)(param_1 + (param_3 - (iVar8 + 0x6)) * 0x318 + iVar1);
                *puVar7 = 0x7;
                puVar7[0x5] = uVar2;
                puVar7[0x6] = uVar3;
                puVar7 = (undefined4 *)(param_1 + (param_3 - (iVar8 + 0x7)) * 0x318 + iVar1);
                *puVar7 = 0x7;
                iVar8 += 0x8;
                puVar7[0x5] = uVar2;
                puVar7[0x6] = uVar3;
                uVar10 -= 0x1;
            } while (uVar10 != 0x0);
            uVar6 = param_2 & 0x7;
            if (uVar6 == 0x0) goto LAB_000530e4;
        }
        do {
            puVar7 = (undefined4 *)(param_1 + (param_3 - iVar8) * 0x318 + iVar1);
            *puVar7 = 0x7;
            iVar8 += 0x1;
            puVar7[0x5] = uVar2;
            puVar7[0x6] = uVar3;
            uVar6 -= 0x1;
        } while (uVar6 != 0x0);
    }
LAB_000530e4:
    if (puVar5 != NULL) {
        *puVar5 = 0xffffffff;
        puVar5[0x1] = iVar4;
        puVar5[0x3] = param_4;
        puVar5[0x4] = param_3 - (param_2 - 0x1);
        puVar5[0x5] = param_4;
        puVar5[0x6] = param_3;
        puVar5[0x7] = -param_2;
        if (*(int *)(param_1 + param_3 * 0x318 + iVar1 + 0x10) == 0x7) {
            *(uint *)(param_1 + 0x4a84) = *(int *)(param_1 + 0x4a84) + param_2;
        }
    }
    return;
}



void CheckChainCounter(int *param_1,int *param_2)

{
    int iVar1;
    int *piVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    
    if (param_1[0x12a8] != 0x0) {
        return;
    }
    if ((param_1[0x12a8] != 0x0) && (*param_2 == 0x2)) {
        return;
    }
    if (param_1[0x12a2] == 0x0) {
        return;
    }
    iVar4 = 0x0;
    piVar3 = param_1;
    do {
        piVar2 = piVar3;
        iVar5 = gMax;
        if (0x0 < gMax) {
            do {
                iVar1 = *piVar2;
                if (iVar1 == 0x5) {
                    return;
                }
                if (iVar1 == 0x4) {
                    return;
                }
                if (iVar1 == 0x1) {
                    return;
                }
                if ((iVar1 != 0x9) && (piVar2[0x8] != 0x0)) {
                    return;
                }
                piVar2 = piVar2 + 0xb;
                iVar5 += -0x1;
            } while (iVar5 != 0x0);
        }
        iVar4 += 0x1;
        piVar3 = piVar3 + 0xc6;
        if (0xb < iVar4) {
            param_1[0x12a2] = 0x0;
            return;
        }
    } while( true );
}



int ComboCount(int *param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    int *piVar5;
    int *piVar6;
    int iVar7;
    int iVar8;
    
    iVar8 = 0xc;
    iVar1 = param_1[0x12aa];
    iVar3 = 0x0;
    iVar2 = 0x0;
    piVar6 = param_1;
    do {
        piVar5 = param_1 + (iVar2 + -0x1) * 0xc6;
        piVar4 = piVar6;
        for (iVar7 = 0x0; iVar7 < gMax; iVar7 += 0x1) {
            if (*piVar4 == 0x7) {
                piVar4[0x1] = iVar1;
                iVar3 += 0x1;
            }
            if ((((piVar4[0x4] != 0x0) && (piVar4[0x4] < 0x9)) && (0x0 < piVar4[0x1])) &&
               ((piVar4[0x1] = piVar4[0x1] + -0x1, param_1[0x12a7] != 0x0 && (*piVar4 == 0x9)))) {
                *piVar4 = 0x6;
                piVar4[0x8] = -0x1;
                piVar4[0x9] = 0x9;
                piVar4[0xa] = 0x3;
            }
            if (((*piVar4 == 0x0) || (*piVar4 == 0x4)) && (piVar4[0x8] != 0x0)) {
                if (iVar2 == 0x0) {
                    piVar4[0x8] = 0x0;
                }
                else if ((piVar5[0x4] != 0x0) && ((*piVar5 < 0x1 || (0x6 < *piVar5)))) {
                    piVar4[0x8] = 0x0;
                }
            }
            piVar4 = piVar4 + 0xb;
            piVar5 = piVar5 + 0xb;
        }
        piVar6 = piVar6 + 0xc6;
        iVar2 += 0x1;
        iVar8 += -0x1;
    } while (iVar8 != 0x0);
    if ((gSelection == 0x6e) && (iVar3 != 0x0)) {
        *(int *)(param_2 + 0x2c) = iVar3;
    }
    return iVar3;
}

