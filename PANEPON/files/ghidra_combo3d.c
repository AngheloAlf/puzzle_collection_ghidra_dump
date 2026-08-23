


void Compact3DAttackNoWhere(int param_1)

{
    int iVar1;
    int iVar2;
    
    iVar1 = 0x0;
    iVar2 = param_1;
    do {
        if ((0x6 < *(int *)(iVar2 + 0x2520)) && (0xb < *(int *)(iVar2 + 0x2544))) {
            Compact3DAttack(param_1,iVar1);
        }
        iVar1 += 0x1;
        iVar2 += 0x50;
    } while (iVar1 < 0x28);
    return;
}



void Compact3DAttack(int param_1,int param_2)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    uint uVar4;
    int *piVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    void *pvVar9;
    void *__src;
    void *pvVar10;
    int *piVar11;
    uint uVar12;
    
    iVar8 = 0x0;
    piVar11 = (int *)(param_1 + param_2 * 0x50 + 0x2520);
    iVar1 = piVar11[0x9];
    if (iVar1 < 0xc) {
        iVar7 = piVar11[0x6];
        if (iVar7 == piVar11[0x7]) {
            iVar7 = 0x2;
            iVar1 = param_1 + iVar1 * 0x318;
            do {
                if (*(int *)(iVar1 + 0x4) != 0x0) {
                    *(int *)(iVar1 + 0x4) = *(int *)(iVar1 + 0x4) + -0x1;
                    iVar8 = -0x1;
                }
                if (*(int *)(iVar1 + 0x30) != 0x0) {
                    *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + -0x1;
                    iVar8 = -0x1;
                }
                if (*(int *)(iVar1 + 0x5c) != 0x0) {
                    *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) + -0x1;
                    iVar8 = -0x1;
                }
                if (*(int *)(iVar1 + 0x88) != 0x0) {
                    *(int *)(iVar1 + 0x88) = *(int *)(iVar1 + 0x88) + -0x1;
                    iVar8 = -0x1;
                }
                if (*(int *)(iVar1 + 0xb4) != 0x0) {
                    *(int *)(iVar1 + 0xb4) = *(int *)(iVar1 + 0xb4) + -0x1;
                    iVar8 = -0x1;
                }
                if (*(int *)(iVar1 + 0xe0) != 0x0) {
                    *(int *)(iVar1 + 0xe0) = *(int *)(iVar1 + 0xe0) + -0x1;
                    iVar8 = -0x1;
                }
                if (*(int *)(iVar1 + 0x10c) != 0x0) {
                    *(int *)(iVar1 + 0x10c) = *(int *)(iVar1 + 0x10c) + -0x1;
                    iVar8 = -0x1;
                }
                if (*(int *)(iVar1 + 0x138) != 0x0) {
                    *(int *)(iVar1 + 0x138) = *(int *)(iVar1 + 0x138) + -0x1;
                    iVar8 = -0x1;
                }
                if (*(int *)(iVar1 + 0x164) != 0x0) {
                    *(int *)(iVar1 + 0x164) = *(int *)(iVar1 + 0x164) + -0x1;
                    iVar8 = -0x1;
                }
                iVar1 += 0x18c;
                iVar7 += -0x1;
            } while (iVar7 != 0x0);
        }
        else if (piVar11[0x7] < iVar7) {
            iVar3 = 0x12 - iVar7;
            iVar6 = param_1 + iVar1 * 0x318;
            iVar1 = iVar6 + iVar7 * 0x2c;
            if (iVar7 < 0x12) {
                do {
                    if (*(int *)(iVar1 + 0x4) != 0x0) {
                        *(int *)(iVar1 + 0x4) = *(int *)(iVar1 + 0x4) + -0x1;
                        iVar8 = -0x1;
                    }
                    iVar1 += 0x2c;
                    iVar3 += -0x1;
                } while (iVar3 != 0x0);
            }
            for (iVar1 = 0x0; iVar1 < piVar11[0x7]; iVar1 += 0x1) {
                if (*(int *)(iVar6 + 0x4) != 0x0) {
                    *(int *)(iVar6 + 0x4) = *(int *)(iVar6 + 0x4) + -0x1;
                    iVar8 = -0x1;
                }
                iVar6 += 0x2c;
            }
        }
        else {
            iVar1 = param_1 + iVar1 * 0x318 + iVar7 * 0x2c;
            for (; iVar7 < piVar11[0x7]; iVar7 += 0x1) {
                if (*(int *)(iVar1 + 0x4) != 0x0) {
                    *(int *)(iVar1 + 0x4) = *(int *)(iVar1 + 0x4) + -0x1;
                    iVar8 = -0x1;
                }
                iVar1 += 0x2c;
            }
        }
    }
    if ((iVar8 == 0x0) && (0x0 < piVar11[0x9])) {
        iVar7 = piVar11[0x9] + -0x1;
        iVar8 = piVar11[0x6];
        iVar1 = piVar11[0x7];
        if (iVar8 == iVar1) {
            iVar8 = 0x2;
            piVar2 = (int *)(param_1 + iVar7 * 0x318);
            iVar1 = 0x0;
            while (((iVar3 = iVar1, piVar2[0x4] == 0x0 && (*piVar2 != 0x2)) && (*piVar2 != 0x3))) {
                iVar3 = iVar1 + 0x1;
                if (((piVar2[0xf] != 0x0) || (piVar2[0xb] == 0x2)) || (piVar2[0xb] == 0x3)) break;
                iVar3 = iVar1 + 0x2;
                if (((piVar2[0x1a] != 0x0) || (piVar2[0x16] == 0x2)) || (piVar2[0x16] == 0x3))
                break;
                iVar3 = iVar1 + 0x3;
                if (((piVar2[0x25] != 0x0) || (piVar2[0x21] == 0x2)) || (piVar2[0x21] == 0x3))
                break;
                iVar3 = iVar1 + 0x4;
                if (((piVar2[0x30] != 0x0) || (piVar2[0x2c] == 0x2)) || (piVar2[0x2c] == 0x3))
                break;
                iVar3 = iVar1 + 0x5;
                if (((piVar2[0x3b] != 0x0) || (piVar2[0x37] == 0x2)) || (piVar2[0x37] == 0x3))
                break;
                iVar3 = iVar1 + 0x6;
                if (((piVar2[0x46] != 0x0) || (piVar2[0x42] == 0x2)) || (piVar2[0x42] == 0x3))
                break;
                iVar3 = iVar1 + 0x7;
                if (((piVar2[0x51] != 0x0) || (piVar2[0x4d] == 0x2)) || (piVar2[0x4d] == 0x3))
                break;
                iVar3 = iVar1 + 0x8;
                if (((piVar2[0x5c] != 0x0) || (piVar2[0x58] == 0x2)) || (piVar2[0x58] == 0x3))
                break;
                piVar2 = piVar2 + 0x63;
                iVar1 += 0x9;
                iVar8 += -0x1;
                iVar3 = iVar1;
                if (iVar8 == 0x0) break;
            }
            if (iVar3 == 0x12) {
                for (iVar1 = 0x0; iVar1 < piVar11[0x5]; iVar1 += 0x1) {
                    iVar8 = piVar11[0x9] + iVar1;
                    if (iVar8 < 0xc) {
                        iVar8 = 0x0;
                        iVar3 = 0x0;
                        pvVar10 = (void *)(param_1 + (iVar7 + iVar1) * 0x318);
                        do {
                            pvVar9 = (void *)(param_1 + (piVar11[0x9] + iVar1) * 0x318 + iVar3);
                            bcopy(pvVar9,pvVar10,0x2c);
                            InitTetrisState(pvVar9);
                            iVar8 += 0x1;
                            pvVar10 = (void *)((int)pvVar10 + 0x2c);
                            iVar3 += 0x2c;
                        } while (iVar8 < 0x12);
                    }
                    else if (iVar8 == 0xc) {
                        iVar7 = 0xb;
                        uVar4 = 0x0;
                        if (true) {
                            *(undefined4 *)(param_1 + 0x2218) = 0x9;
                            uVar4 = 0x10;
                            *(undefined4 *)(param_1 + 0x2244) = 0x9;
                            *(undefined4 *)(param_1 + 0x2270) = 0x9;
                            *(undefined4 *)(param_1 + 0x229c) = 0x9;
                            *(undefined4 *)(param_1 + 0x22c8) = 0x9;
                            *(undefined4 *)(param_1 + 0x22f4) = 0x9;
                            *(undefined4 *)(param_1 + 0x2320) = 0x9;
                            *(undefined4 *)(param_1 + 0x234c) = 0x9;
                            *(undefined4 *)(param_1 + 0x2378) = 0x9;
                            *(undefined4 *)(param_1 + 0x23a4) = 0x9;
                            *(undefined4 *)(param_1 + 0x23d0) = 0x9;
                            *(undefined4 *)(param_1 + 0x23fc) = 0x9;
                            *(undefined4 *)(param_1 + 0x2428) = 0x9;
                            *(undefined4 *)(param_1 + 0x2454) = 0x9;
                            *(undefined4 *)(param_1 + 0x2480) = 0x9;
                            *(undefined4 *)(param_1 + 0x24ac) = 0x9;
                        }
                        iVar3 = param_1 + uVar4 * 0x2c;
                        iVar8 = 0x12 - uVar4;
                        if (uVar4 < 0x12) {
                            do {
                                *(undefined4 *)(iVar3 + 0x2218) = 0x9;
                                iVar3 += 0x2c;
                                iVar8 += -0x1;
                            } while (iVar8 != 0x0);
                        }
                    }
                    else if (0xc < iVar8) break;
                }
                piVar11[0x9] = piVar11[0x9] + -0x1;
                if (*piVar11 != 0x5) {
                    *piVar11 = 0x6;
                }
            }
        }
        else if (iVar1 < iVar8) {
            iVar3 = 0x12 - iVar8;
            piVar5 = (int *)(param_1 + iVar7 * 0x318);
            piVar2 = piVar5 + iVar8 * 0xb;
            if (iVar8 < 0x12) {
                do {
                    if (((piVar2[0x4] != 0x0) || (*piVar2 == 0x2)) || (*piVar2 == 0x3)) break;
                    piVar2 = piVar2 + 0xb;
                    iVar8 += 0x1;
                    iVar3 += -0x1;
                } while (iVar3 != 0x0);
            }
            if (iVar8 == 0x12) {
                iVar3 = 0x0;
                iVar8 = iVar1;
                if (0x0 < iVar1) {
                    do {
                        if (((piVar5[0x4] != 0x0) || (*piVar5 == 0x2)) || (*piVar5 == 0x3)) break;
                        piVar5 = piVar5 + 0xb;
                        iVar3 += 0x1;
                        iVar8 += -0x1;
                    } while (iVar8 != 0x0);
                }
                if (iVar3 == iVar1) {
                    for (iVar1 = 0x0; iVar1 < piVar11[0x5]; iVar1 += 0x1) {
                        iVar8 = piVar11[0x9] + iVar1;
                        if (iVar8 < 0xc) {
                            iVar3 = piVar11[0x6];
                            iVar8 = iVar3 * 0x2c;
                            pvVar9 = (void *)(param_1 + (iVar7 + iVar1) * 0x318);
                            pvVar10 = (void *)((int)pvVar9 + iVar8);
                            for (; iVar3 < 0x12; iVar3 += 0x1) {
                                __src = (void *)(param_1 + (piVar11[0x9] + iVar1) * 0x318 + iVar8);
                                bcopy(__src,pvVar10,0x2c);
                                InitTetrisState(__src);
                                pvVar10 = (void *)((int)pvVar10 + 0x2c);
                                iVar8 += 0x2c;
                            }
                            iVar8 = 0x0;
                            for (iVar3 = 0x0; iVar3 < piVar11[0x7]; iVar3 += 0x1) {
                                pvVar10 = (void *)(param_1 + (piVar11[0x9] + iVar1) * 0x318 + iVar8)
                                ;
                                bcopy(pvVar10,pvVar9,0x2c);
                                InitTetrisState(pvVar10);
                                pvVar9 = (void *)((int)pvVar9 + 0x2c);
                                iVar8 += 0x2c;
                            }
                        }
                        else if (iVar8 == 0xc) {
                            iVar8 = piVar11[0x6];
                            iVar7 = 0xb;
                            iVar3 = param_1 + iVar8 * 0x2c;
                            uVar4 = 0x12 - iVar8;
                            if (iVar8 < 0x12) {
                                uVar12 = uVar4 >> 0x3;
                                if (uVar12 != 0x0) {
                                    do {
                                        *(undefined4 *)(iVar3 + 0x2218) = 0x9;
                                        *(undefined4 *)(iVar3 + 0x2244) = 0x9;
                                        *(undefined4 *)(iVar3 + 0x2270) = 0x9;
                                        *(undefined4 *)(iVar3 + 0x229c) = 0x9;
                                        *(undefined4 *)(iVar3 + 0x22c8) = 0x9;
                                        *(undefined4 *)(iVar3 + 0x22f4) = 0x9;
                                        *(undefined4 *)(iVar3 + 0x2320) = 0x9;
                                        *(undefined4 *)(iVar3 + 0x234c) = 0x9;
                                        iVar3 += 0x160;
                                        uVar12 -= 0x1;
                                    } while (uVar12 != 0x0);
                                    uVar4 &= 0x7;
                                    if (uVar4 == 0x0) goto LAB_00053d68;
                                }
                                do {
                                    *(undefined4 *)(iVar3 + 0x2218) = 0x9;
                                    iVar3 += 0x2c;
                                    uVar4 -= 0x1;
                                } while (uVar4 != 0x0);
                            }
LAB_00053d68:
                            iVar8 = param_1;
                            for (iVar3 = 0x0; iVar3 < piVar11[0x7]; iVar3 += 0x1) {
                                *(undefined4 *)(iVar8 + 0x2218) = 0x9;
                                iVar8 += 0x2c;
                            }
                        }
                        else if (0xc < iVar8) break;
                    }
                    piVar11[0x9] = piVar11[0x9] + -0x1;
                    if (*piVar11 != 0x5) {
                        *piVar11 = 0x6;
                    }
                }
            }
        }
        else {
            iVar3 = iVar1 - iVar8;
            piVar2 = (int *)(param_1 + iVar7 * 0x318 + iVar8 * 0x2c);
            if (iVar8 < iVar1) {
                do {
                    if (((piVar2[0x4] != 0x0) || (*piVar2 == 0x2)) || (*piVar2 == 0x3)) break;
                    piVar2 = piVar2 + 0xb;
                    iVar8 += 0x1;
                    iVar3 += -0x1;
                } while (iVar3 != 0x0);
            }
            if (iVar8 == iVar1) {
                for (iVar1 = 0x0; iVar1 < piVar11[0x5]; iVar1 += 0x1) {
                    iVar8 = piVar11[0x9] + iVar1;
                    if (iVar8 < 0xc) {
                        iVar3 = piVar11[0x6];
                        iVar8 = iVar3 * 0x2c;
                        pvVar10 = (void *)(param_1 + (iVar7 + iVar1) * 0x318 + iVar8);
                        for (; iVar3 < piVar11[0x7]; iVar3 += 0x1) {
                            pvVar9 = (void *)(param_1 + (piVar11[0x9] + iVar1) * 0x318 + iVar8);
                            bcopy(pvVar9,pvVar10,0x2c);
                            InitTetrisState(pvVar9);
                            pvVar10 = (void *)((int)pvVar10 + 0x2c);
                            iVar8 += 0x2c;
                        }
                    }
                    else if (iVar8 == 0xc) {
                        iVar3 = piVar11[0x6];
                        iVar7 = 0xb;
                        iVar8 = param_1 + iVar3 * 0x2c;
                        for (; iVar3 < piVar11[0x7]; iVar3 += 0x1) {
                            *(undefined4 *)(iVar8 + 0x2218) = 0x9;
                            iVar8 += 0x2c;
                        }
                    }
                    else if (0xc < iVar8) break;
                }
                piVar11[0x9] = piVar11[0x9] + -0x1;
                if (*piVar11 != 0x5) {
                    *piVar11 = 0x6;
                }
            }
        }
    }
    return;
}



void Check3DConnectCombos(int *param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int *piVar8;
    int iVar9;
    
    iVar7 = 0x0;
    piVar8 = param_1;
LAB_00053f4c:
    iVar5 = piVar8[0x4];
    if (((iVar5 != 0x0) && (piVar8[0x1] == 0x0)) &&
       ((iVar1 = *piVar8, iVar1 == 0x0 || ((iVar1 == 0x4 || (iVar1 == 0x7)))))) {
        iVar9 = 0x11;
        iVar6 = 0x1;
        iVar1 = 0x1;
        piVar4 = piVar8;
        do {
            iVar2 = piVar4[0xf];
            if ((((iVar2 == 0x0) || (0x7 < iVar2)) || (iVar2 != iVar5)) ||
               ((piVar4[0xc] != 0x0 ||
                (((iVar2 = piVar4[0xb], iVar2 != 0x0 && (iVar2 != 0x4)) && (iVar2 != 0x7)))))) {
                iVar9 = 0x11 - iVar1;
                piVar4 = piVar8 + 0xbb;
                iVar2 = 0x11;
                if (iVar1 < 0x11) goto LAB_00053ff8;
                break;
            }
            iVar6 += 0x1;
            iVar1 += 0x1;
            iVar9 += -0x1;
            piVar4 = piVar4 + 0xb;
        } while (iVar9 != 0x0);
    }
    goto LAB_00054078;
    while( true ) {
        iVar6 += 0x1;
        piVar4 = piVar4 + -0xb;
        iVar2 += -0x1;
        iVar9 += -0x1;
        if (iVar9 == 0x0) break;
LAB_00053ff8:
        iVar3 = piVar4[0x4];
        if ((((iVar3 == 0x0) || (0x7 < iVar3)) || ((iVar3 != iVar5 || (piVar4[0x1] != 0x0)))) ||
           (((iVar3 = *piVar4, iVar3 != 0x0 && (iVar3 != 0x4)) && (iVar3 != 0x7)))) {
            if (0x2 < iVar6) {
                Set3DRowConnectState(param_1,iVar7,iVar1,iVar2);
            }
            break;
        }
    }
LAB_00054078:
    iVar7 += 0x1;
    piVar8 = piVar8 + 0xc6;
    if (0xb < iVar7) {
        return;
    }
    goto LAB_00053f4c;
}



void Set3DRowConnectState(int param_1,int param_2,uint param_3,int param_4)

{
    int iVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    uint uVar10;
    undefined4 *puVar11;
    uint uVar12;
    int iVar13;
    
    puVar2 = (undefined4 *)(param_1 + param_2 * 0x318);
    uVar5 = 0x1e;
    uVar6 = 0x64;
    iVar7 = 0xc;
    puVar11 = NULL;
    puVar3 = puVar2;
    uVar12 = param_3;
    if (0x0 < (int)param_3) {
        do {
            if (puVar3[0x8] != 0x0) {
                iVar7 = 0xa;
            }
            puVar3 = puVar3 + 0xb;
            uVar12 -= 0x1;
        } while (uVar12 != 0x0);
    }
    iVar8 = param_4 + 0x1;
    iVar1 = 0x12 - iVar8;
    puVar4 = puVar2 + iVar8 * 0xb;
    puVar3 = puVar4;
    if (iVar8 < 0x12) {
        do {
            if (puVar3[0x8] != 0x0) {
                iVar7 = 0xa;
            }
            puVar3 = puVar3 + 0xb;
            iVar1 += -0x1;
        } while (iVar1 != 0x0);
    }
    iVar1 = param_3 + (0x12 - (param_4 + 0x1));
    if (0x5 < iVar1) {
        uVar5 = 0x1f;
    }
    if (iVar7 != 0xc) {
        if (*(int *)(param_1 + 0x4a88) < -0x1) {
            uVar5 = 0x21;
            uVar6 = 0x190;
        }
        else if (*(int *)(param_1 + 0x4a88) == -0x1) {
            uVar5 = 0x20;
            uVar6 = 0x12c;
        }
        else {
            uVar5 = 0x1f;
            uVar6 = 0xc8;
        }
    }
    iVar13 = 0xa;
    iVar9 = 0x0;
    iVar8 = param_1;
    do {
        if (*(int *)(iVar8 + 0x31a0) == 0x0) {
            puVar11 = (undefined4 *)(param_1 + iVar9 * 0x68 + 0x31a0);
            break;
        }
        iVar8 += 0x68;
        iVar9 += 0x1;
        iVar13 += -0x1;
    } while (iVar13 != 0x0);
    if (iVar7 == 0xa) {
        if (0x0 < (int)param_3) {
            uVar12 = param_3 >> 0x3;
            uVar10 = param_3;
            if (uVar12 != 0x0) {
                do {
                    *puVar2 = 0x7;
                    puVar2[0x5] = uVar5;
                    puVar2[0x6] = uVar6;
                    puVar2[0x8] = 0xffffffff;
                    puVar2[0xb] = 0x7;
                    puVar2[0x10] = uVar5;
                    puVar2[0x11] = uVar6;
                    puVar2[0x13] = 0xffffffff;
                    puVar2[0x16] = 0x7;
                    puVar2[0x1b] = uVar5;
                    puVar2[0x1c] = uVar6;
                    puVar2[0x1e] = 0xffffffff;
                    puVar2[0x21] = 0x7;
                    puVar2[0x26] = uVar5;
                    puVar2[0x27] = uVar6;
                    puVar2[0x29] = 0xffffffff;
                    puVar2[0x2c] = 0x7;
                    puVar2[0x31] = uVar5;
                    puVar2[0x32] = uVar6;
                    puVar2[0x34] = 0xffffffff;
                    puVar2[0x37] = 0x7;
                    puVar2[0x3c] = uVar5;
                    puVar2[0x3d] = uVar6;
                    puVar2[0x3f] = 0xffffffff;
                    puVar2[0x42] = 0x7;
                    puVar2[0x47] = uVar5;
                    puVar2[0x48] = uVar6;
                    puVar2[0x4a] = 0xffffffff;
                    puVar2[0x4d] = 0x7;
                    puVar2[0x52] = uVar5;
                    puVar2[0x53] = uVar6;
                    puVar2[0x55] = 0xffffffff;
                    puVar2 = puVar2 + 0x58;
                    uVar12 -= 0x1;
                } while (uVar12 != 0x0);
                uVar10 = param_3 & 0x7;
                if (uVar10 == 0x0) goto LAB_00054328;
            }
            do {
                *puVar2 = 0x7;
                puVar2[0x5] = uVar5;
                puVar2[0x6] = uVar6;
                puVar2[0x8] = 0xffffffff;
                puVar2 = puVar2 + 0xb;
                uVar10 -= 0x1;
            } while (uVar10 != 0x0);
        }
    }
    else if (0x0 < (int)param_3) {
        uVar12 = param_3 >> 0x3;
        uVar10 = param_3;
        if (uVar12 != 0x0) {
            do {
                *puVar2 = 0x7;
                puVar2[0x5] = uVar5;
                puVar2[0x6] = uVar6;
                puVar2[0xb] = 0x7;
                puVar2[0x10] = uVar5;
                puVar2[0x11] = uVar6;
                puVar2[0x16] = 0x7;
                puVar2[0x1b] = uVar5;
                puVar2[0x1c] = uVar6;
                puVar2[0x21] = 0x7;
                puVar2[0x26] = uVar5;
                puVar2[0x27] = uVar6;
                puVar2[0x2c] = 0x7;
                puVar2[0x31] = uVar5;
                puVar2[0x32] = uVar6;
                puVar2[0x37] = 0x7;
                puVar2[0x3c] = uVar5;
                puVar2[0x3d] = uVar6;
                puVar2[0x42] = 0x7;
                puVar2[0x47] = uVar5;
                puVar2[0x48] = uVar6;
                puVar2[0x4d] = 0x7;
                puVar2[0x52] = uVar5;
                puVar2[0x53] = uVar6;
                puVar2 = puVar2 + 0x58;
                uVar12 -= 0x1;
            } while (uVar12 != 0x0);
            uVar10 = param_3 & 0x7;
            if (uVar10 == 0x0) goto LAB_00054328;
        }
        do {
            *puVar2 = 0x7;
            puVar2[0x5] = uVar5;
            puVar2[0x6] = uVar6;
            puVar2 = puVar2 + 0xb;
            uVar10 -= 0x1;
        } while (uVar10 != 0x0);
    }
LAB_00054328:
    iVar8 = param_4 + 0x1;
    if (iVar7 == 0xa) {
        uVar12 = 0x12 - iVar8;
        if (iVar8 < 0x12) {
            uVar10 = uVar12 >> 0x3;
            if (uVar10 != 0x0) {
                do {
                    *puVar4 = 0x7;
                    puVar4[0x5] = uVar5;
                    puVar4[0x6] = uVar6;
                    puVar4[0x8] = 0xffffffff;
                    puVar4[0xb] = 0x7;
                    puVar4[0x10] = uVar5;
                    puVar4[0x11] = uVar6;
                    puVar4[0x13] = 0xffffffff;
                    puVar4[0x16] = 0x7;
                    puVar4[0x1b] = uVar5;
                    puVar4[0x1c] = uVar6;
                    puVar4[0x1e] = 0xffffffff;
                    puVar4[0x21] = 0x7;
                    puVar4[0x26] = uVar5;
                    puVar4[0x27] = uVar6;
                    puVar4[0x29] = 0xffffffff;
                    puVar4[0x2c] = 0x7;
                    puVar4[0x31] = uVar5;
                    puVar4[0x32] = uVar6;
                    puVar4[0x34] = 0xffffffff;
                    puVar4[0x37] = 0x7;
                    puVar4[0x3c] = uVar5;
                    puVar4[0x3d] = uVar6;
                    puVar4[0x3f] = 0xffffffff;
                    puVar4[0x42] = 0x7;
                    puVar4[0x47] = uVar5;
                    puVar4[0x48] = uVar6;
                    puVar4[0x4a] = 0xffffffff;
                    puVar4[0x4d] = 0x7;
                    puVar4[0x52] = uVar5;
                    puVar4[0x53] = uVar6;
                    puVar4[0x55] = 0xffffffff;
                    puVar4 = puVar4 + 0x58;
                    uVar10 -= 0x1;
                } while (uVar10 != 0x0);
                uVar12 &= 0x7;
                if (uVar12 == 0x0) goto LAB_000544a4;
            }
            do {
                *puVar4 = 0x7;
                puVar4[0x5] = uVar5;
                puVar4[0x6] = uVar6;
                puVar4[0x8] = 0xffffffff;
                puVar4 = puVar4 + 0xb;
                uVar12 -= 0x1;
            } while (uVar12 != 0x0);
        }
    }
    else {
        uVar12 = 0x12 - iVar8;
        if (iVar8 < 0x12) {
            uVar10 = uVar12 >> 0x3;
            if (uVar10 != 0x0) {
                do {
                    *puVar4 = 0x7;
                    puVar4[0x5] = uVar5;
                    puVar4[0x6] = uVar6;
                    puVar4[0xb] = 0x7;
                    puVar4[0x10] = uVar5;
                    puVar4[0x11] = uVar6;
                    puVar4[0x16] = 0x7;
                    puVar4[0x1b] = uVar5;
                    puVar4[0x1c] = uVar6;
                    puVar4[0x21] = 0x7;
                    puVar4[0x26] = uVar5;
                    puVar4[0x27] = uVar6;
                    puVar4[0x2c] = 0x7;
                    puVar4[0x31] = uVar5;
                    puVar4[0x32] = uVar6;
                    puVar4[0x37] = 0x7;
                    puVar4[0x3c] = uVar5;
                    puVar4[0x3d] = uVar6;
                    puVar4[0x42] = 0x7;
                    puVar4[0x47] = uVar5;
                    puVar4[0x48] = uVar6;
                    puVar4[0x4d] = 0x7;
                    puVar4[0x52] = uVar5;
                    puVar4[0x53] = uVar6;
                    puVar4 = puVar4 + 0x58;
                    uVar10 -= 0x1;
                } while (uVar10 != 0x0);
                uVar12 &= 0x7;
                if (uVar12 == 0x0) goto LAB_000544a4;
            }
            do {
                *puVar4 = 0x7;
                puVar4[0x5] = uVar5;
                puVar4[0x6] = uVar6;
                puVar4 = puVar4 + 0xb;
                uVar12 -= 0x1;
            } while (uVar12 != 0x0);
        }
    }
LAB_000544a4:
    if (puVar11 != NULL) {
        *puVar11 = 0xffffffff;
        puVar11[0x1] = iVar7;
        puVar11[0x3] = param_4 + 0x1;
        puVar11[0x4] = param_2;
        puVar11[0x5] = param_3 - 0x1;
        puVar11[0x6] = param_2;
        puVar11[0x7] = -iVar1;
        if (*(int *)(param_1 + param_2 * 0x318 + 0x10) == 0x7) {
            *(int *)(param_1 + 0x4a84) = *(int *)(param_1 + 0x4a84) + iVar1;
        }
    }
    return;
}



undefined4 UpdateWell3DRowConnect(int param_1,int param_2,int *param_3)

{
    int iVar1;
    int *piVar2;
    
    if (*(int *)(param_1 + param_2 * 0x318 + 0x2ec) == 0x7) {
        piVar2 = (int *)(param_1 + param_2 * 0x318 + 0x2ec);
        for (iVar1 = 0x11; (*piVar2 == 0x7 && (0x0 < iVar1)); iVar1 += -0x1) {
            piVar2 = piVar2 + -0xb;
        }
        *param_3 = iVar1;
        return 0xffffffff;
    }
    return 0x0;
}
