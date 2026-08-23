
void Draw2DTetrisWell(int param_1,int param_2,int param_3)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int *piVar12;
    
    iVar3 = 0x6;
    if (0x38d < gMain) {
        gLastOverflow = 0x320;
        iVar3 = 0x9;
    }
    iVar4 = param_1 + param_3 * 0x2520 + 0x1c464;
    iVar1 = param_1 + param_3 * 0x110 + 0x2c0a8;
    iVar6 = param_1 + param_3 * 0xa + 0x1;
    iVar5 = 0x4;
    for (uVar8 = 0x1; (int)uVar8 <= iVar3; uVar8 += 0x1) {
        if (*(char *)(iVar6 + 0x1c410) != '\0') {
            if (uVar8 < 0xa) {
                    // WARNING: Could not recover jumptable at 0x00056560. Too many branches
                    // WARNING: Treating indirect jump as call
                (**(code **)((int)&_196 + iVar5))();
                return;
            }
            iVar9 = 0xb;
            piVar2 = (int *)(iVar4 + 0x2208);
            iVar7 = param_1 + param_3 * 0x6c0 + 0x2cb18;
            do {
                iVar11 = 0x0;
                iVar10 = iVar7;
                piVar12 = piVar2;
                do {
                    if (((((piVar12[0x1] != -0x2) && (piVar12[0x4] != 0x9)) && (*piVar12 != 0x2)) &&
                        ((*piVar12 != 0x3 && (piVar12[0x4] != 0x0)))) && (piVar12[0x9] == uVar8)) {
                        if ((iVar9 == 0xa) && (iVar11 == 0x5)) {
                            pon_gSPObjRectangle(&glistp,iVar10);
                        }
                        else if ((iVar9 == 0x6) && (iVar11 == 0x5)) {
                            pon_gSPObjRectangle(&glistp,iVar10);
                        }
                        else {
                            pon_gSPObjRectangle(&glistp,iVar10);
                        }
                    }
                    iVar11 += 0x1;
                    piVar12 = piVar12 + 0xb;
                    iVar10 += 0x18;
                } while (iVar11 < 0x6);
                iVar9 += -0x1;
                piVar2 = piVar2 + -0xc6;
                iVar7 += -0x90;
            } while (-0x1 < iVar9);
        }
        iVar6 += 0x1;
        iVar5 += 0x4;
    }
    if (*(int *)(iVar1 + 0x1c) != -0x1) {
        iVar5 = iVar4 + *(int *)(iVar1 + 0x1c) * 0x318 + *(int *)(iVar1 + 0x18) * 0x2c;
        iVar3 = *(int *)(iVar5 + 0x50);
        iVar5 = *(int *)(iVar5 + 0x24);
        if (iVar3 < iVar5) {
            iVar3 = iVar5;
        }
        if (iVar3 == 0x8) {
            pon_gSPObjLoadTxtr(&glistp,&tetrisBlock8);
        }
        else if (iVar3 < 0x8) {
            if (iVar3 == 0x6) {
                pon_gSPObjLoadTxtr(&glistp,&tetrisBlock6);
            }
            else {
                if (iVar3 < 0x6) goto LAB_00056798;
                pon_gSPObjLoadTxtr(&glistp,&tetrisBlock7);
            }
        }
        else if (iVar3 < 0xa) {
            pon_gSPObjLoadTxtr(&glistp,&tetrisBlock9);
        }
        else {
LAB_00056798:
            pon_gSPObjLoadTxtr(&glistp,&tetrisBlock3);
        }
        piVar2 = (int *)(iVar4 + *(int *)(iVar1 + 0x1c) * 0x318 +
                                 (*(int *)(iVar1 + 0x18) + 0x1) * 0x2c);
        if (((piVar2[0x4] != 0x0) && (iVar3 = *piVar2, 0x1 < iVar3)) && (iVar3 < 0x4)) {
            pon_gSPObjRectangle(&glistp,param_1 + param_3 * 0x18 + 0x2e228);
        }
        piVar2 = (int *)(iVar4 + *(int *)(iVar1 + 0x1c) * 0x318 + *(int *)(iVar1 + 0x18) * 0x2c);
        if (((piVar2[0x4] != 0x0) && (iVar3 = *piVar2, 0x1 < iVar3)) && (iVar3 < 0x4)) {
            pon_gSPObjRectangle(&glistp,param_1 + param_3 * 0x18 + 0x2e288);
        }
    }
    if (gMain < 0x38e) {
        pon_gSPObjLoadTxtr(&glistp,&tetrisBlockNew);
    }
    else {
        iVar3 = *(int *)(param_2 + 0x4790);
        if (iVar3 == 0xe) {
            pon_gSPObjLoadTxtr(&glistp,&tetrisBlock7);
        }
        else {
            if (iVar3 < 0xe) {
                if ((iVar3 == 0x8) || ((0x7 < iVar3 && (0xc < iVar3)))) {
                    pon_gSPObjLoadTxtr(&glistp,&tetrisBlock6);
                    goto LAB_00056950;
                }
            }
            else {
                if (iVar3 == 0x10) {
                    pon_gSPObjLoadTxtr(&glistp,&tetrisBlock9);
                    goto LAB_00056950;
                }
                if (iVar3 < 0x10) {
                    pon_gSPObjLoadTxtr(&glistp,&tetrisBlock8);
                    goto LAB_00056950;
                }
            }
            pon_gSPObjLoadTxtr(&glistp,&tetrisBlockNew);
        }
    }
LAB_00056950:
    iVar3 = 0x0;
    param_1 += param_3 * 0x90;
    do {
        pon_gSPObjRectangle(&glistp,param_1 + 0x2dfe8);
        iVar3 += 0x1;
        param_1 += 0x18;
    } while (iVar3 < 0x6);
    return;
}



void Draw2DCursor(int param_1)

{
    int iVar1;
    
    if (*(int *)(param_1 + 0x2c0c8) == 0x0) {
        pon_gSPObjLoadTxtr(&glistp,s_NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN_001812d8 + 0x98);
    }
    else {
        pon_gSPObjLoadTxtr(&glistp,&cursorSmall);
    }
    for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
        if (((*(int *)(param_1 + 0x2c0bc) < 0xc) && (0x2 < *(int *)(param_1 + 0x2c1a8))) &&
           ((gSelection != 0x64 || (iVar1 < 0x1)))) {
            pon_gSPObjRectangle(&glistp,param_1 + 0x2c190);
        }
        param_1 += 0x110;
    }
    return;
}



// WARNING: Restarted to delay deadcode elimination for space: ram

void Draw2DIcon(int param_1,int param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    uint uVar3;
    int iVar4;
    int *piVar5;
    int iVar6;
    
    puVar1 = glistp;
    piVar5 = (int *)(param_1 + param_2 * 0x410 + 0x28ae8);
    if (((gGameStatus & 0x8) != 0x0) && (gMain < 0x38e)) {
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar2;
        puVar1[0x1] = 0x504240;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfc119623;
        glistp = puVar2;
        puVar1[0x1] = 0xff2fffff;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfa000000;
        glistp = puVar2;
        puVar1[0x1] = 0xffffff64;
    }
    iVar6 = 0x0;
    do {
        if (((*piVar5 == -0x1) && (uVar3 = piVar5[0x7], 0x0 < (int)uVar3)) &&
           (((gGameStatus & 0x10) == 0x0 ||
            ((0x38d < gMain ||
             (uVar3 != (((int)uVar3 >> 0x1) + (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0)) *
                       0x2)))))) {
            iVar4 = piVar5[0x1];
            if (iVar4 == 0xc) {
                iVar4 = piVar5[0x2];
                if (iVar4 < 0xc) {
                    pon_gSPObjLoadTxtr(&glistp,s_NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN_0019108e + 0x402);
                }
                else if (iVar4 < 0x14) {
                    pon_gSPObjLoadTxtr(&glistp,&combo2Block);
                }
                else if (iVar4 < 0x1c) {
                    pon_gSPObjLoadTxtr(&glistp,&combo3Block);
                }
                else if (iVar4 < 0x24) {
                    pon_gSPObjLoadTxtr(&glistp,&combo4Block);
                }
                else if (iVar4 < 0x2c) {
                    pon_gSPObjLoadTxtr(&glistp,&combo5Block);
                }
                else if (iVar4 < 0x34) {
                    pon_gSPObjLoadTxtr(&glistp,&combo6Block);
                }
                else if (iVar4 < 0x3c) {
                    pon_gSPObjLoadTxtr(&glistp,&combo7Block);
                }
                else if (iVar4 < 0x44) {
                    pon_gSPObjLoadTxtr(&glistp,&combo8Block);
                }
                else {
                    pon_gSPObjLoadTxtr(&glistp,&combo9Block);
                }
            }
            else if (iVar4 < 0xc) {
                if (iVar4 == 0xa) {
                    iVar4 = piVar5[0x2];
                    if (iVar4 < 0x9) {
                        pon_gSPObjLoadTxtr(&glistp,&chain1Block);
                    }
                    else if (iVar4 < 0x11) {
                        pon_gSPObjLoadTxtr(&glistp,&chain2Block);
                    }
                    else if (iVar4 < 0x19) {
                        pon_gSPObjLoadTxtr(&glistp,&chain3Block);
                    }
                    else if (iVar4 < 0x21) {
                        pon_gSPObjLoadTxtr(&glistp,&chain4Block);
                    }
                    else if (iVar4 < 0x29) {
                        pon_gSPObjLoadTxtr(&glistp,&chain5Block);
                    }
                    else if (iVar4 < 0x31) {
                        pon_gSPObjLoadTxtr(&glistp,&chain6Block);
                    }
                    else if (iVar4 < 0x39) {
                        pon_gSPObjLoadTxtr(&glistp,&chain7Block);
                    }
                    else if (iVar4 < 0x41) {
                        pon_gSPObjLoadTxtr(&glistp,&chain8Block);
                    }
                    else if (iVar4 < 0x49) {
                        pon_gSPObjLoadTxtr(&glistp,&chain9Block);
                    }
                    else if (iVar4 < 0x51) {
                        pon_gSPObjLoadTxtr(&glistp,&chain10Block);
                    }
                    else if (iVar4 < 0x59) {
                        pon_gSPObjLoadTxtr(&glistp,&chain11Block);
                    }
                    else if (iVar4 < 0x61) {
                        pon_gSPObjLoadTxtr(&glistp,&chain12Block);
                    }
                    else {
                        pon_gSPObjLoadTxtr(&glistp,&chain13Block);
                    }
                }
                else if (0x9 < iVar4) goto LAB_00056fbc;
            }
            else if (iVar4 < 0xe) {
LAB_00056fbc:
                pon_gSPObjLoadTxtr(&glistp,&combo9Block);
            }
            pon_gSPObjRectangle(&glistp,piVar5 + 0xa);
        }
        puVar1 = glistp;
        iVar6 += 0x1;
        piVar5 = piVar5 + 0x1a;
        if (0x9 < iVar6) {
            if ((gGameStatus & 0x8) != 0x0) {
                puVar2 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe200001c;
                glistp = puVar2;
                puVar1[0x1] = 0xf0a4000;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xfcffffff;
                glistp = puVar2;
                puVar1[0x1] = 0xfffcf279;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xfa000000;
                glistp = puVar2;
                puVar1[0x1] = 0xffffffff;
            }
            return;
        }
    } while( true );
}



void Draw2DAttackBrick(int param_1,int param_2,int param_3)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    int *piVar4;
    int iVar5;
    int *piVar6;
    
    puVar1 = glistp;
    piVar4 = (int *)(param_1 + param_2 * 0xc80 + 0x258e8);
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    piVar6 = piVar4 + param_3 * 0x14;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar2;
    puVar1[0x1] = 0xf0a4000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfcffffff;
    glistp = puVar2;
    puVar1[0x1] = 0xfffcf279;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfa000000;
    glistp = puVar2;
    puVar1[0x1] = 0xffffffff;
    for (iVar5 = param_3; puVar1 = glistp, -0x1 < iVar5; iVar5 += -0x1) {
        if (((*piVar6 == 0x2) || (*piVar6 == 0x3)) && (piVar6[0x2] < 0x5)) {
            iVar3 = piVar6[0x1];
            if (iVar3 < 0xa) {
                if (gTheGame._120328_4_ < 0x3) {
                    if (param_2 == 0x1) {
                        pon_gSPObjLoadTxtr(&glistp,brickB);
                    }
                    else if ((param_2 < 0x1) && (-0x1 < param_2)) {
                        pon_gSPObjLoadTxtr(&glistp,brickA);
                    }
                }
                else {
                    pon_gSPObjLoadTxtr(&glistp,brickTxtr + piVar6[0x13] * 0x48);
                }
            }
            else if (iVar3 < 0xc) {
                if (gTheGame._120328_4_ < 0x3) {
                    if (param_2 == 0x1) {
                        pon_gSPObjLoadTxtr(&glistp,brickB);
                    }
                    else if ((param_2 < 0x1) && (-0x1 < param_2)) {
                        pon_gSPObjLoadTxtr(&glistp,brickA);
                    }
                }
                else {
                    pon_gSPObjLoadTxtr(&glistp,brickTxtr + piVar6[0x12] * 0x48);
                }
            }
            else if (iVar3 < 0x12) {
                if (gTheGame._120328_4_ < 0x3) {
                    if (param_2 == 0x1) {
                        pon_gSPObjLoadTxtr(&glistp,0x1f8928);
                    }
                    else if ((param_2 < 0x1) && (-0x1 < param_2)) {
                        pon_gSPObjLoadTxtr(&glistp,0x1f88e0);
                    }
                }
                else {
                    pon_gSPObjLoadTxtr(&glistp,piVar6[0x12] * 0x48 + 0x1f8c68);
                }
            }
            else if (gTheGame._120328_4_ < 0x3) {
                if (param_2 == 0x1) {
                    pon_gSPObjLoadTxtr(&glistp,0x1f8940);
                }
                else if ((param_2 < 0x1) && (-0x1 < param_2)) {
                    pon_gSPObjLoadTxtr(&glistp,0x1f88f8);
                }
            }
            else {
                pon_gSPObjLoadTxtr(&glistp,piVar6[0x12] * 0x48 + 0x1f8c80);
            }
            if (gTheGame._120328_4_ < 0x3) {
                pon_gSPObjRectangle(&glistp,piVar6 + 0xc);
            }
        }
        piVar6 = piVar6 + -0x14;
    }
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar2;
    puVar1[0x1] = 0x8000;
    pon_gSPObjLoadTxtr(&glistp,colorLUT);
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar2;
    puVar1[0x1] = 0x504240;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfc119623;
    glistp = puVar2;
    puVar1[0x1] = 0xff2fffff;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfa000000;
    glistp = puVar2;
    puVar1[0x1] = 0xffffff64;
    if (gTheGame._120328_4_ < 0x3) {
        if (param_2 == 0x1) {
            pon_gSPObjLoadTxtr(&glistp,explodeA);
        }
        else if ((param_2 < 0x1) && (-0x1 < param_2)) {
            pon_gSPObjLoadTxtr(&glistp,explodeB);
        }
    }
    else {
        pon_gSPObjLoadTxtr(&glistp,explodeTxtr + param_2 * 0x18);
    }
    for (iVar5 = 0x0; puVar1 = glistp, iVar5 <= param_3; iVar5 += 0x1) {
        if (((*piVar4 == 0x1) && (piVar4[0x3] < 0x0)) && (gTheGame._120328_4_ < 0x3)) {
            pon_gSPObjRectangle(&glistp,piVar4 + 0xc);
        }
        piVar4 = piVar4 + 0x14;
    }
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar2;
    puVar1[0x1] = 0xf0a4000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfcffffff;
    glistp = puVar2;
    puVar1[0x1] = 0xfffcf279;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfa000000;
    glistp = puVar2;
    puVar1[0x1] = 0xffffffff;
    return;
}



int Draw2DAttackBlock(int param_1,int param_2)

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
    int *piVar10;
    int *piVar11;
    int local_d0;
    int local_cc;
    undefined1 *local_b8;
    undefined1 *local_b4;
    
    piVar10 = (int *)(param_1 + param_2 * 0xc80 + 0x258e8);
    iVar4 = param_1 + param_2 * 0x2520 + 0x1c464;
    param_1 += param_2 * 0x6c0 + 0x2c4e8;
    local_cc = 0x0;
    piVar11 = piVar10;
    do {
        if (0x4 < *piVar11) {
            if (piVar11[0x2] == -0x1) {
                if (piVar11[0x1] < 0xc) {
                    for (iVar6 = 0x0; iVar6 < piVar11[0x5]; iVar6 += 0x1) {
                        iVar8 = piVar11[0x9];
                        if (iVar8 + iVar6 < 0xc) {
                            iVar3 = piVar11[0x1];
                            if (iVar3 == 0x9) {
                                pon_gSPObjLoadTxtr(&glistp,&attackx);
                            }
                            else if (iVar3 < 0x9) {
                                if ((iVar3 < 0x5) && (0x0 < iVar3)) {
LAB_00057a80:
                                    if (true) {
                                        if (gTheGame._120328_4_ < 0x3) {
                                            if (param_2 == 0x1) {
                                                pon_gSPObjLoadTxtr(&glistp,attackB);
                                            }
                                            else if ((param_2 < 0x1) && (-0x1 < param_2)) {
                                                pon_gSPObjLoadTxtr(&glistp,attackA);
                                            }
                                        }
                                        else if (iVar3 < 0xa) {
                                            pon_gSPObjLoadTxtr(&glistp,attackTxtr +
                                                                       piVar11[0x13] * 0x90);
                                        }
                                        else {
                                            pon_gSPObjLoadTxtr(&glistp,attackTxtr +
                                                                       piVar11[0x12] * 0x90);
                                        }
                                    }
                                }
                            }
                            else if (iVar3 == 0xb) {
                                if (gTheGame._120328_4_ < 0x3) {
                                    if (param_2 == 0x1) {
                                        if (iVar6 == 0x0) {
                                            pon_gSPObjLoadTxtr(&glistp,0x1f8868);
                                        }
                                        else {
                                            pon_gSPObjLoadTxtr(&glistp,0x1f8850);
                                        }
                                    }
                                    else if ((param_2 < 0x1) && (-0x1 < param_2)) {
                                        if (iVar6 == 0x0) {
                                            pon_gSPObjLoadTxtr(&glistp,0x1f87d8);
                                        }
                                        else {
                                            pon_gSPObjLoadTxtr(&glistp,0x1f87c0);
                                        }
                                    }
                                }
                                else if (iVar6 == 0x0) {
                                    pon_gSPObjLoadTxtr(&glistp,piVar11[0x12] * 0x90 + 0x1f8a40);
                                }
                                else {
                                    pon_gSPObjLoadTxtr(&glistp,piVar11[0x12] * 0x90 + 0x1f8a28);
                                }
                            }
                            else if (iVar3 < 0xb) goto LAB_00057a80;
                            iVar3 = piVar11[0x6];
                            iVar8 = param_1 + (iVar8 + iVar6) * 0x90 + iVar3 * 0x18;
                            for (; iVar3 < piVar11[0x7]; iVar3 += 0x1) {
                                pon_gSPObjRectangle(&glistp,iVar8);
                                iVar8 += 0x18;
                            }
                        }
                    }
                }
                else {
                    iVar5 = 0x3;
                    iVar8 = 0x48;
                    iVar6 = 0x1f87f0;
                    iVar3 = 0x1f8880;
                    do {
                        if (gTheGame._120328_4_ < 0x3) {
                            if (param_2 == 0x1) {
                                pon_gSPObjLoadTxtr(&glistp,iVar3);
                            }
                            else if ((param_2 < 0x1) && (-0x1 < param_2)) {
                                pon_gSPObjLoadTxtr(&glistp,iVar6);
                            }
                        }
                        else {
                            pon_gSPObjLoadTxtr(&glistp,attackTxtr + iVar8 + piVar11[0x12] * 0x90);
                        }
                        for (iVar1 = 0x0; iVar1 < piVar11[0x5]; iVar1 += 0x1) {
                            if (piVar11[0x9] + iVar1 < 0xc) {
                                iVar9 = piVar11[0x6];
                                iVar7 = param_1 + (piVar11[0x9] + iVar1) * 0x90 + iVar9 * 0x18;
                                for (; iVar9 < piVar11[0x7]; iVar9 += 0x1) {
                                    iVar2 = ReturnAttackTexValue(0x0,piVar11[0x1],iVar1,iVar9);
                                    iVar2 = iVar2 / 0xa + (iVar2 >> 0x1f);
                                    if (iVar2 - (iVar2 >> 0x1f) == iVar5) {
                                        pon_gSPObjRectangle(&glistp,iVar7);
                                    }
                                    iVar7 += 0x18;
                                }
                            }
                        }
                        iVar5 += 0x1;
                        iVar6 += 0x18;
                        iVar3 += 0x18;
                        iVar8 += 0x18;
                    } while (iVar5 < 0x6);
                }
            }
            else {
                if (piVar11[0x1] == 0x9) {
                    pon_gSPObjLoadTxtr(&glistp,&attackx);
                }
                else if (true) {
                    if (gTheGame._120328_4_ < 0x3) {
                        if (param_2 == 0x1) {
                            pon_gSPObjLoadTxtr(&glistp,attackB);
                        }
                        else if ((param_2 < 0x1) && (-0x1 < param_2)) {
                            pon_gSPObjLoadTxtr(&glistp,attackA);
                        }
                    }
                    else if (piVar11[0x1] < 0xa) {
                        pon_gSPObjLoadTxtr(&glistp,attackTxtr + piVar11[0x13] * 0x90);
                    }
                    else {
                        pon_gSPObjLoadTxtr(&glistp,attackTxtr + piVar11[0x12] * 0x90);
                    }
                }
                iVar6 = 0x0;
                for (iVar8 = 0x0; iVar8 < piVar11[0x5]; iVar8 += 0x1) {
                    iVar3 = piVar11[0x9] + iVar8;
                    if (iVar3 < 0xc) {
                        iVar1 = piVar11[0x6];
                        iVar5 = iVar4 + iVar3 * 0x318 + iVar1 * 0x2c;
                        iVar3 = param_1 + iVar3 * 0x90 + iVar1 * 0x18;
                        for (; iVar1 < piVar11[0x7]; iVar1 += 0x1) {
                            if (*(int *)(iVar5 + 0x10) == 0x9) {
                                if (*(int *)(iVar5 + 0xc) == 0x0) {
                                    pon_gSPObjRectangle(&glistp,iVar3);
                                }
                                else if (*(int *)(iVar5 + 0xc) == 0x1) {
                                    iVar6 = -0x1;
                                }
                            }
                            iVar5 += 0x2c;
                            iVar3 += 0x18;
                        }
                    }
                }
                if (iVar6 != 0x0) {
                    iVar6 = piVar11[0x1] + -0x16;
                    if (iVar6 == 0xa) {
                        local_d0 = 0x1;
                        iVar8 = 0x0;
                    }
                    else if (iVar6 == 0xb) {
                        local_d0 = 0x3;
                        iVar8 = 0x1;
                    }
                    else {
                        local_d0 = 0x6;
                        iVar8 = 0x3;
                    }
                    iVar3 = iVar8 * 0x18;
                    local_b4 = attackA + iVar3;
                    local_b8 = attackB + iVar3;
                    for (; iVar8 < local_d0; iVar8 += 0x1) {
                        if (gTheGame._120328_4_ < 0x3) {
                            if (param_2 == 0x1) {
                                pon_gSPObjLoadTxtr(&glistp,local_b8);
                            }
                            else if ((param_2 < 0x1) && (-0x1 < param_2)) {
                                pon_gSPObjLoadTxtr(&glistp,local_b4);
                            }
                        }
                        else {
                            pon_gSPObjLoadTxtr(&glistp,attackTxtr + iVar3 + piVar11[0x12] * 0x90);
                        }
                        for (iVar5 = 0x1; iVar5 < piVar11[0x5]; iVar5 += 0x1) {
                            iVar1 = piVar11[0x9] + iVar5;
                            if (iVar1 < 0xc) {
                                iVar9 = piVar11[0x6];
                                iVar7 = iVar4 + iVar1 * 0x318 + iVar9 * 0x2c;
                                iVar1 = param_1 + iVar1 * 0x90 + iVar9 * 0x18;
                                for (; iVar9 < piVar11[0x7]; iVar9 += 0x1) {
                                    iVar2 = ReturnAttackTexValue(0x0,iVar6,iVar5 + -0x1,iVar9);
                                    iVar2 = iVar2 / 0xa + (iVar2 >> 0x1f);
                                    if ((iVar2 - (iVar2 >> 0x1f) == iVar8) &&
                                       (*(int *)(iVar7 + 0xc) == 0x1)) {
                                        pon_gSPObjRectangle(&glistp,iVar1);
                                    }
                                    iVar7 += 0x2c;
                                    iVar1 += 0x18;
                                }
                            }
                        }
                        iVar3 += 0x18;
                        local_b4 = local_b4 + 0x18;
                        local_b8 = local_b8 + 0x18;
                    }
                }
            }
        }
        piVar11 = piVar11 + 0x14;
        local_cc += 0x1;
        if (0x27 < local_cc) {
            iVar4 = 0x0;
            do {
                if (*piVar10 == 0x0) {
                    return iVar4 + -0x1;
                }
                if ((((0x6 < *piVar10) && (piVar10[0x8] != 0x0)) && (piVar10[0x2] == -0x1)) &&
                   (piVar10[0x4] < 0x0)) {
                    if (gTheGame._120328_4_ < 0x3) {
                        if (param_2 == 0x1) {
                            pon_gSPObjLoadTxtr(&glistp,faceB);
                        }
                        else if ((param_2 < 0x1) && (-0x1 < param_2)) {
                            pon_gSPObjLoadTxtr(&glistp,faceA);
                        }
                    }
                    else if (piVar10[0x1] < 0xa) {
                        pon_gSPObjLoadTxtr(&glistp,faceTxtr + piVar10[0x13] * 0x18);
                    }
                    else {
                        pon_gSPObjLoadTxtr(&glistp,faceTxtr + piVar10[0x12] * 0x18);
                    }
                    pon_gSPObjRectangle(&glistp,piVar10 + 0xc);
                }
                iVar4 += 0x1;
                piVar10 = piVar10 + 0x14;
            } while (iVar4 < 0x28);
            return 0x27;
        }
    } while( true );
}



void Draw2DExplosion(int param_1,int param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    uint uVar3;
    int *piVar4;
    int iVar5;
    int iVar6;
    
    piVar4 = (int *)(param_1 + param_2 * 0x960 + 0x29b28);
    if (gTheGame._120328_4_ < 0x3) {
        if (param_2 == 0x1) {
            pon_gSPObjLoadTxtr(&glistp,explodeB);
        }
        else if ((param_2 < 0x1) && (-0x1 < param_2)) {
            pon_gSPObjLoadTxtr(&glistp,explodeA);
        }
    }
    else {
        pon_gSPObjLoadTxtr(&glistp,explodeTxtr + param_2 * 0x18);
    }
    iVar5 = 0x0;
    iVar6 = 0x0;
    do {
        puVar1 = glistp;
        if (*piVar4 == 0x19) {
            if (((gGameStatus & 0x10) == 0x0) ||
               (uVar3 = piVar4[0x1],
               uVar3 + (((int)uVar3 >> 0x1) + (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0)) *
                       -0x2 != 0x1)) {
                if (((gGameStatus & 0x8) != 0x0) && (iVar5 == 0x0)) {
                    iVar5 = 0x1;
                    puVar2 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar2;
                    puVar1[0x1] = 0x0;
                    puVar1 = glistp;
                    puVar2 = glistp + 0x2;
                    *glistp = 0xe200001c;
                    glistp = puVar2;
                    puVar1[0x1] = 0x504240;
                    puVar1 = glistp;
                    puVar2 = glistp + 0x2;
                    *glistp = 0xfc119623;
                    glistp = puVar2;
                    puVar1[0x1] = 0xff2fffff;
                    puVar1 = glistp;
                    puVar2 = glistp + 0x2;
                    *glistp = 0xfa000000;
                    glistp = puVar2;
                    puVar1[0x1] = 0xffffff64;
                }
                goto LAB_00058044;
            }
        }
        else {
            if (iVar5 == 0x1) {
                iVar5 = 0x2;
            }
LAB_00058044:
            puVar1 = glistp;
            if (iVar5 == 0x2) {
                iVar5 = 0x0;
                puVar2 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe200001c;
                glistp = puVar2;
                puVar1[0x1] = 0xf0a4000;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xfcffffff;
                glistp = puVar2;
                puVar1[0x1] = 0xfffcf279;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xfa000000;
                glistp = puVar2;
                puVar1[0x1] = 0xffffffff;
            }
            if (-0x1 < piVar4[0x1]) {
                pon_gSPObjRectangle(&glistp,piVar4 + 0x6);
            }
        }
        puVar1 = glistp;
        iVar6 += 0x1;
        piVar4 = piVar4 + 0xc;
        if (0x31 < iVar6) {
            puVar2 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe200001c;
            glistp = puVar2;
            puVar1[0x1] = 0xf0a4000;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xfcffffff;
            glistp = puVar2;
            puVar1[0x1] = 0xfffcf279;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xfa000000;
            glistp = puVar2;
            puVar1[0x1] = 0xffffffff;
            return;
        }
    } while( true );
}



void Draw2DClearLine(int param_1,int param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    
    puVar1 = glistp;
    if (((gMain < 0x388) && (gMain != 0x2bc)) &&
       (*(int *)(gTheGame + param_2 * 0x110 + 0x15f28) < 0x1)) {
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar2;
        puVar1[0x1] = 0x8000;
        pon_gSPObjLoadTxtr(&glistp,&numberLUT);
        pon_gSPObjLoadTxtr(&glistp,&clearTexture);
        param_1 += param_2 * 0xc80 + 0x258e8;
        pon_gSPObjRectangle(&glistp,param_1 + (gCounter % 0x6) * 0x50 + 0x30);
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar2;
        puVar1[0x1] = 0x504240;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfc119623;
        glistp = puVar2;
        puVar1[0x1] = 0xff2fffff;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfa000000;
        glistp = puVar2;
        puVar1[0x1] = 0xffffff80;
        pon_gSPObjRectangle(&glistp,param_1 + 0x210);
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar2;
        puVar1[0x1] = 0xf0a4000;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfcffffff;
        glistp = puVar2;
        puVar1[0x1] = 0xfffcf279;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfa000000;
        glistp = puVar2;
        puVar1[0x1] = 0xffffffff;
    }
    return;
}



void Draw2DSmoke(int param_1,int param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    int iVar4;
    
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    pon_gSPObjLoadTxtr(&glistp,&deadsmoke);
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    iVar4 = param_1 + param_2 * 0x960;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    param_1 += param_2 * 0x2520;
    iVar3 = 0x0;
    puVar2 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar2;
    puVar1[0x1] = 0x504240;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfc11fe23;
    glistp = puVar2;
    puVar1[0x1] = 0xfffff3f9;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfa000000;
    glistp = puVar2;
    puVar1[0x1] = 0xffffffff;
    do {
        if ((*(int *)(param_1 + 0x1e67c) != 0x0) && (-0x14 < *(int *)(iVar4 + 0x29b2c))) {
            pon_gSPObjRectangle(&glistp,iVar4 + 0x29b40);
        }
        puVar1 = glistp;
        iVar3 += 0x1;
        param_1 += 0x2c;
        iVar4 += 0x30;
    } while (iVar3 < 0x6);
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar2;
    puVar1[0x1] = 0xf0a4000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfcffffff;
    glistp = puVar2;
    puVar1[0x1] = 0xfffcf279;
    return;
}



void Draw2DSmallStars(int param_1,int param_2)

{
    bool bVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    
    puVar2 = glistp;
    iVar8 = 0x0;
    bVar1 = gMain == 0x395;
    puVar3 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar3;
    puVar2[0x1] = 0x0;
    puVar2 = glistp;
    puVar3 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar3;
    puVar2[0x1] = 0x8000;
    pon_gSPObjLoadTxtr(&glistp,&numberLUT);
    iVar9 = 0x0;
    iVar10 = param_1 + (uint)bVar1 * 0x2520;
    param_1 += (uint)bVar1 * 0x6c0;
    do {
        iVar5 = 0x0;
        iVar6 = param_1;
        iVar7 = iVar10;
        do {
            if (*(int *)(iVar7 + 0x1c478) == param_2) {
                iVar4 = *(int *)(iVar7 + 0x1c480);
                if (iVar4 < 0x2) {
                    if (-0x1 < iVar4) {
                        pon_gSPObjLoadTxtr(&glistp,&stars1Texture);
                    }
                }
                else if (iVar4 < 0x4) {
                    pon_gSPObjLoadTxtr(&glistp,&stars2Texture);
                }
                pon_gSPObjRectangle(&glistp,iVar6 + 0x2c4e8);
            }
            iVar8 += 0x1;
            if (0x14 < iVar8) {
                return;
            }
            iVar5 += 0x1;
            iVar7 += 0x2c;
            iVar6 += 0x18;
        } while (iVar5 < 0x6);
        iVar9 += 0x1;
        iVar10 += 0x318;
        param_1 += 0x90;
        if (0xb < iVar9) {
            return;
        }
    } while( true );
}



void pon_Draw2DSmallStars4p(int param_1,int param_2,int param_3)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    
    puVar1 = glistp;
    iVar7 = 0x0;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar2;
    puVar1[0x1] = 0x8000;
    pon_gSPObjLoadTxtr(&glistp,&numberLUT);
    iVar8 = 0x0;
    iVar9 = param_1 + param_3 * 0x2520;
    param_1 += param_3 * 0x6c0;
    do {
        iVar4 = 0x0;
        iVar5 = param_1;
        iVar6 = iVar9;
        do {
            if (*(int *)(iVar6 + 0x1c478) == param_2) {
                iVar3 = *(int *)(iVar6 + 0x1c480);
                if (iVar3 < 0x2) {
                    if (-0x1 < iVar3) {
                        pon_gSPObjLoadTxtr(&glistp,&stars1Texture);
                    }
                }
                else if (iVar3 < 0x4) {
                    pon_gSPObjLoadTxtr(&glistp,&stars2Texture);
                }
                pon_gSPObjRectangle(&glistp,iVar5 + 0x2c4e8);
            }
            iVar7 += 0x1;
            if (0xc < iVar7) {
                return;
            }
            iVar4 += 0x1;
            iVar6 += 0x2c;
            iVar5 += 0x18;
        } while (iVar4 < 0x6);
        iVar8 += 0x1;
        iVar9 += 0x318;
        param_1 += 0x90;
        if (0xb < iVar8) {
            return;
        }
    } while( true );
}



void DrawTetris(void)

{
    if (0x1 < gCounter) {
        if (gTheGame._120332_4_ == 0x2) {
            Draw3DTetris();
        }
        else {
            Draw2DTetris();
        }
    }
    return;
}



void OverFlow(int param_1)

{
    int iVar1;
    int iVar2;
    
    if ((gTheGame._120328_4_ == 0x1) || (iVar2 = *(int *)(param_1 + 0x1c460), iVar2 < 0x321)) {
        gLastOverflow = 0x320;
    }
    else {
        iVar1 = gLastOverflow + 0x6e;
        if ((iVar2 < gLastOverflow + 0x6e) && (iVar1 = iVar2, iVar2 <= gLastOverflow + -0x50)) {
            iVar1 = gLastOverflow + -0x50;
        }
        gLastOverflow = iVar1;
        iVar2 = gLastOverflow + -0x320;
        if (0x1194 < iVar2) {
            iVar2 = 0x1194;
        }
        iVar2 = iVar2 / 0xa + (iVar2 >> 0x1f);
        for (iVar2 -= iVar2 >> 0x1f; 0x0 < iVar2; iVar2 += -0xe8) {
            iVar1 = iVar2;
            if (0xe8 < iVar2) {
                iVar1 = 0xe8;
            }
            gTheGame._119510_2_ = (undefined2)(iVar1 << 0x2);
            Draw2DBackground(param_1);
        }
        gTheGame._119510_2_ = 0x3a0;
    }
    return;
}



void Draw2DTetris(undefined4 param_1)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    int iVar3;
    undefined1 *puVar4;
    undefined4 *puVar5;
    undefined1 *puVar6;
    undefined1 *puVar7;
    undefined4 local_34 [0x6];

    puVar5 = glistp;
    puVar1 = glistp + 0x2;
    *glistp = 0xed000023;
    glistp = puVar1;
    puVar5[0x1] = 0x5003c3;
    Draw2DBackground();

    if (gOverflowFlag != 0x0) {
        OverFlow(param_1);
    }
    if (0x1 < gTheGame._120328_4_) {
        pon_DrawBackChara();
    }

    Draw2DAnimation(param_1,0x1,0x3);
    Draw2DShadeBox();
    puVar5 = glistp;
    puVar1 = glistp + 0x2;
    *glistp = 0xed000083;
    glistp = puVar1;
    puVar5[0x1] = 0x500383;
    if (((gSelection == 0xd2) || (gSelection == 0xdc)) && (gMain == 0x387)) {
        pon_Draw2DRanking4pOnTheWay();
    }
    puVar5 = glistp;
    puVar1 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar1;
    puVar5[0x1] = 0x8000;
    pon_gSPObjLoadTxtr(&glistp,colorLUT);
    Draw2DGameFade();
    puVar5 = glistp;
    if (0x2 < gTheGame._120328_4_) {
        puVar1 = glistp + 0x2;
        *glistp = 0xed00016f;
        glistp = puVar1;
        puVar5[0x1] = 0x5003c3;
    }
    puVar7 = gTheGame;
    puVar6 = gTheGame;
    puVar5 = local_34;
    puVar4 = puVar7;
    for (iVar3 = 0x0; puVar1 = glistp, iVar3 < gTheGame._120328_4_; iVar3 += 0x1) {
        if (*(int *)(puVar4 + 0x16000) != 0x1) {
            Draw2DTetrisWell(param_1,puVar6,iVar3);
            uVar2 = Draw2DAttackBlock(param_1,iVar3);
            *puVar5 = uVar2;
        }
        puVar4 = puVar4 + 0x110;
        puVar6 = puVar6 + 0x57c0;
        puVar5 = puVar5 + 0x1;
    }
    puVar5 = glistp + 0x2;
    *glistp = 0xed000023;
    glistp = puVar5;
    puVar1[0x1] = 0x5003c3;
    Draw2DFrame();
    Draw2DAnimation(param_1,0x4,0x4);
    Draw2DText(param_1);
    Draw2DMiscStuff(param_1);
    Draw2DAnimation(param_1,0x5,0x6);
    if (((gSelection == 0xaa) || (gSelection == 0xb4)) || (gSelection == 0xdc)) {
        puVar4 = puVar7;
        for (iVar3 = 0x0; iVar3 < gTheGame._120328_4_; iVar3 += 0x1) {
            if (*(int *)(puVar4 + 0x16000) != 0x1) {
                Draw2DClearLine(param_1,iVar3);
            }
            puVar4 = puVar4 + 0x110;
        }
    }
    puVar5 = glistp;
    if (gMain != 0x388) {
        puVar1 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar1;
        puVar5[0x1] = 0x8000;
        pon_gSPObjLoadTxtr(&glistp,colorLUT);
        puVar5 = local_34;
        for (iVar3 = 0x0; iVar3 < gTheGame._120328_4_; iVar3 += 0x1) {
            if (*(int *)(puVar7 + 0x16000) != 0x1) {
                Draw2DAttackBrick(param_1,iVar3,*puVar5);
                Draw2DExplosion(param_1,iVar3);
                Draw2DIcon(param_1,iVar3);
            }
            puVar7 = puVar7 + 0x110;
            puVar5 = puVar5 + 0x1;
        }
    }
    if ((gMain == 0x387) || (gMain == 0x384)) {
        Draw2DCursor(param_1);
    }
    if (gMain < 0x388) {
        if (gMain == 0x384) {
            DrawCountDown(param_1);
        }
    }
    else {
        DrawPauseOver(param_1);
    }
    return;
}

