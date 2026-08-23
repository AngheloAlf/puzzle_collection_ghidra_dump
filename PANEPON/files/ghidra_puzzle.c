

void Match2DPuzzle(undefined4 *param_1,int param_2)

{
    if (param_2 == 0x3) {
        *param_1 = puzzle01;
        return;
    }
    if (0x2 < param_2) {
        if (param_2 == 0x5) {
            *param_1 = puzzle04;
            return;
        }
        if (0x4 < param_2) {
            return;
        }
        *param_1 = puzzle03;
        return;
    }
    if (param_2 == 0x1) {
        *param_1 = puzzle00;
        return;
    }
    if (param_2 < 0x1) {
        return;
    }
    *param_1 = puzzle02;
    return;
}



undefined4 Init2DPuzzle(int param_1,int param_2,byte *param_3,int param_4)

{
    byte bVar1;
    byte bVar2;
    byte bVar3;
    int iVar4;
    uint uVar5;
    undefined4 uVar6;
    int iVar7;
    int iVar8;
    uint uVar9;
    
    iVar8 = -0x1;
    Init2DTetrisBlocks(param_1,0x0);
    iVar7 = 0x0;
    if (0x0 < param_4 + -0x1) {
        if ((0x8 < param_4 + -0x1) && (uVar9 = param_4 - 0x2U >> 0x3, 0x0 < param_4 + -0x9)) {
            do {
                iVar7 += 0x8;
                param_3 = param_3 + ((int)(uint)*param_3 >> 0x1) + (uint)*param_3 + 0x2;
                param_3 = param_3 + ((int)(uint)*param_3 >> 0x1) + (uint)*param_3 + 0x2;
                param_3 = param_3 + ((int)(uint)*param_3 >> 0x1) + (uint)*param_3 + 0x2;
                param_3 = param_3 + ((int)(uint)*param_3 >> 0x1) + (uint)*param_3 + 0x2;
                param_3 = param_3 + ((int)(uint)*param_3 >> 0x1) + (uint)*param_3 + 0x2;
                param_3 = param_3 + ((int)(uint)*param_3 >> 0x1) + (uint)*param_3 + 0x2;
                uVar5 = (uint)param_3[((int)(uint)*param_3 >> 0x1) + (uint)*param_3 + 0x2];
                param_3 = param_3 + ((int)(uint)*param_3 >> 0x1) + (uint)*param_3 + 0x2 +
                          ((int)uVar5 >> 0x1) + uVar5 + 0x2;
                uVar9 -= 0x1;
            } while (uVar9 != 0x0);
        }
        iVar4 = (param_4 + -0x1) - iVar7;
        if (iVar7 < param_4 + -0x1) {
            do {
                param_3 = param_3 + ((int)(uint)*param_3 >> 0x1) + (uint)*param_3 + 0x2;
                iVar4 += -0x1;
            } while (iVar4 != 0x0);
        }
    }
    uVar9 = (uint)*param_3;
    param_3 = param_3 + 0x1;
    if (uVar9 == 0x0) {
        *(undefined4 *)(param_2 + 0x28) = 0x0;
        uVar6 = 0x0;
    }
    else {
        *(uint *)(param_2 + 0x28) = (uint)(*param_3 >> 0x4);
        *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x28);
        for (; uVar9 != 0x0; uVar9 -= 0x1) {
            if (iVar8 == 0x0) {
                bVar3 = *param_3;
                iVar8 = -0x1;
                param_3 = param_3 + 0x1;
                bVar2 = bVar3 >> 0x4;
                bVar1 = *param_3 >> 0x4;
            }
            else {
                bVar1 = param_3[0x1];
                iVar8 = 0x0;
                bVar2 = *param_3;
                param_3 = param_3 + 0x2;
                bVar3 = bVar1 >> 0x4;
            }
            *(uint *)(param_1 + (bVar1 & 0xf) * 0x318 + (bVar3 & 0xf) * 0x2c + 0x10) = bVar2 & 0xf;
        }
        Init2DTetrisBlocksTMEM(param_1,0x0);
        uVar6 = 0xffffffff;
    }
    return uVar6;
}



undefined4 Save2DPuzzle(int param_1,int param_2,undefined *param_3)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    byte *pbVar8;
    byte *pbVar9;
    int iVar10;
    
    iVar10 = 0xc;
    iVar6 = 0x0;
    iVar7 = -0x1;
    iVar2 = param_1;
    do {
        if (*(int *)(iVar2 + 0x10) != 0x0) {
            iVar6 += 0x1;
        }
        if (*(int *)(iVar2 + 0x3c) != 0x0) {
            iVar6 += 0x1;
        }
        if (*(int *)(iVar2 + 0x68) != 0x0) {
            iVar6 += 0x1;
        }
        if (*(int *)(iVar2 + 0x94) != 0x0) {
            iVar6 += 0x1;
        }
        if (*(int *)(iVar2 + 0xc0) != 0x0) {
            iVar6 += 0x1;
        }
        if (*(int *)(iVar2 + 0xec) != 0x0) {
            iVar6 += 0x1;
        }
        iVar2 += 0x318;
        iVar10 += -0x1;
    } while (iVar10 != 0x0);
    *param_3 = (char)iVar6;
    pbVar8 = param_3 + 0x1;
    uVar5 = (*(uint *)(param_2 + 0x28) & 0xf) << 0x4;
    if (iVar6 == 0x0) {
        *pbVar8 = (byte)uVar5;
        return 0x0;
    }
    uVar3 = 0x0;
    do {
        iVar10 = 0x3;
        uVar4 = 0x0;
        iVar2 = param_1;
        do {
            iVar1 = *(int *)(iVar2 + 0x10);
            pbVar9 = pbVar8;
            if (iVar1 != 0x0) {
                if (iVar7 == 0x0) {
                    *pbVar8 = (byte)(iVar1 << 0x4) | (byte)uVar4;
                    iVar6 += -0x1;
                    uVar5 = uVar3 << 0x4 & 0xf0;
                    pbVar9 = pbVar8 + 0x1;
                    if (iVar6 == 0x0) {
                        *pbVar9 = (byte)uVar5;
                        pbVar9 = pbVar8 + 0x2;
                    }
                    iVar7 = -0x1;
                }
                else {
                    *pbVar8 = (byte)uVar5 | (byte)iVar1;
                    uVar5 = (uVar4 & 0xf) << 0x4 | uVar3 & 0xff;
                    pbVar8[0x1] = (byte)uVar5;
                    iVar7 = 0x0;
                    pbVar9 = pbVar8 + 0x2;
                    iVar6 += -0x1;
                }
            }
            pbVar8 = pbVar9;
            if (iVar6 == 0x0) break;
            iVar1 = *(int *)(iVar2 + 0x3c);
            if (iVar1 != 0x0) {
                if (iVar7 == 0x0) {
                    *pbVar9 = (byte)(iVar1 << 0x4) | (byte)(uVar4 + 0x1);
                    iVar6 += -0x1;
                    uVar5 = uVar3 << 0x4 & 0xf0;
                    pbVar8 = pbVar9 + 0x1;
                    if (iVar6 == 0x0) {
                        *pbVar8 = (byte)uVar5;
                        pbVar8 = pbVar9 + 0x2;
                    }
                    iVar7 = -0x1;
                }
                else {
                    *pbVar9 = (byte)uVar5 | (byte)iVar1;
                    uVar5 = (uVar4 + 0x1) * 0x10 & 0xf0 | uVar3 & 0xff;
                    pbVar9[0x1] = (byte)uVar5;
                    iVar7 = 0x0;
                    pbVar8 = pbVar9 + 0x2;
                    iVar6 += -0x1;
                }
            }
            if (iVar6 == 0x0) break;
            iVar2 += 0x58;
            uVar4 += 0x2;
            iVar10 += -0x1;
        } while (iVar10 != 0x0);
        if (iVar6 == 0x0) {
            return 0xffffffff;
        }
        uVar3 += 0x1;
        param_1 += 0x318;
        if (0xb < (int)uVar3) {
            return 0xffffffff;
        }
    } while( true );
}



undefined4 Init3DPuzzle(int param_1,int param_2,byte *param_3,int param_4)

{
    byte *pbVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    uint uVar5;
    uint uVar6;
    
    Init3DTetrisBlocks(param_1,0x0);
    iVar3 = 0x0;
    if (0x0 < param_4 + -0x1) {
        if ((0x8 < param_4 + -0x1) && (uVar5 = param_4 - 0x2U >> 0x3, 0x0 < param_4 + -0x9)) {
            do {
                iVar3 += 0x8;
                param_3 = param_3 + (uint)*param_3 * 0x2 + 0x2;
                param_3 = param_3 + (uint)*param_3 * 0x2 + 0x2;
                param_3 = param_3 + (uint)*param_3 * 0x2 + 0x2;
                param_3 = param_3 + (uint)*param_3 * 0x2 + 0x2;
                param_3 = param_3 + (uint)*param_3 * 0x2 + 0x2;
                param_3 = param_3 + (uint)*param_3 * 0x2 + 0x2;
                param_3 = param_3 + (uint)*param_3 * 0x2 + 0x2 +
                          (uint)param_3[(uint)*param_3 * 0x2 + 0x2] * 0x2 + 0x2;
                uVar5 -= 0x1;
            } while (uVar5 != 0x0);
        }
        iVar2 = (param_4 + -0x1) - iVar3;
        if (iVar3 < param_4 + -0x1) {
            do {
                param_3 = param_3 + (uint)*param_3 * 0x2 + 0x2;
                iVar2 += -0x1;
            } while (iVar2 != 0x0);
        }
    }
    uVar5 = (uint)*param_3;
    param_3 = param_3 + 0x1;
    if (uVar5 == 0x0) {
        *(undefined4 *)(param_2 + 0x28) = 0x0;
        uVar4 = 0x0;
    }
    else {
        iVar3 = 0x0;
        *(uint *)(param_2 + 0x28) = (uint)*param_3;
        *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x28);
        if (uVar5 != 0x0) {
            if ((0x8 < uVar5) && (uVar6 = uVar5 - 0x1 >> 0x3, 0x0 < (int)(uVar5 - 0x8))) {
                do {
                    iVar3 += 0x8;
                    *(uint *)(param_1 +
                             (param_3[0x1] & 0xf) * 0x318 + (uint)param_3[0x2] * 0x2c + 0x10) =
                         (uint)(param_3[0x1] >> 0x4);
                    *(uint *)(param_1 +
                             (param_3[0x3] & 0xf) * 0x318 + (uint)param_3[0x4] * 0x2c + 0x10) =
                         (uint)(param_3[0x3] >> 0x4);
                    *(uint *)(param_1 +
                             (param_3[0x5] & 0xf) * 0x318 + (uint)param_3[0x6] * 0x2c + 0x10) =
                         (uint)(param_3[0x5] >> 0x4);
                    *(uint *)(param_1 +
                             (param_3[0x7] & 0xf) * 0x318 + (uint)param_3[0x8] * 0x2c + 0x10) =
                         (uint)(param_3[0x7] >> 0x4);
                    *(uint *)(param_1 +
                             (param_3[0x9] & 0xf) * 0x318 + (uint)param_3[0xa] * 0x2c + 0x10) =
                         (uint)(param_3[0x9] >> 0x4);
                    *(uint *)(param_1 +
                             (param_3[0xb] & 0xf) * 0x318 + (uint)param_3[0xc] * 0x2c + 0x10) =
                         (uint)(param_3[0xb] >> 0x4);
                    *(uint *)(param_1 +
                             (param_3[0xd] & 0xf) * 0x318 + (uint)param_3[0xe] * 0x2c + 0x10) =
                         (uint)(param_3[0xd] >> 0x4);
                    pbVar1 = param_3 + 0xf;
                    param_3 = param_3 + 0x10;
                    *(uint *)(param_1 + (*pbVar1 & 0xf) * 0x318 + (uint)*param_3 * 0x2c + 0x10) =
                         (uint)(*pbVar1 >> 0x4);
                    uVar6 -= 0x1;
                } while (uVar6 != 0x0);
            }
            iVar2 = uVar5 - iVar3;
            if (iVar3 < (int)uVar5) {
                do {
                    pbVar1 = param_3 + 0x1;
                    param_3 = param_3 + 0x2;
                    *(uint *)(param_1 + (*pbVar1 & 0xf) * 0x318 + (uint)*param_3 * 0x2c + 0x10) =
                         (uint)(*pbVar1 >> 0x4);
                    iVar2 += -0x1;
                } while (iVar2 != 0x0);
            }
        }
        uVar4 = 0xffffffff;
    }
    return uVar4;
}



void EncodeWell(int param_1,int param_2,int param_3)

{
    int *piVar1;
    int *piVar2;
    int iVar3;
    
    if (0x7 < param_3) {
        return;
    }
    iVar3 = 0xc;
    param_2 += param_3 * 0x84;
    do {
        *(uint *)(param_2 + 0x10) =
             *(int *)(param_1 + 0x10) << 0x1c | *(int *)(param_1 + 0x3c) << 0x18 |
             *(int *)(param_1 + 0x68) << 0x14 | *(int *)(param_1 + 0x94) << 0x10 |
             *(int *)(param_1 + 0xc0) << 0xc | *(int *)(param_1 + 0xec) << 0x8 |
             *(int *)(param_1 + 0x118) << 0x4 | *(uint *)(param_1 + 0x144);
        *(uint *)(param_2 + 0x3c) =
             *(int *)(param_1 + 0x170) << 0x1c | *(int *)(param_1 + 0x19c) << 0x18 |
             *(int *)(param_1 + 0x1c8) << 0x14 | *(int *)(param_1 + 0x1f4) << 0x10 |
             *(int *)(param_1 + 0x220) << 0xc | *(int *)(param_1 + 0x24c) << 0x8 |
             *(int *)(param_1 + 0x278) << 0x4 | *(uint *)(param_1 + 0x2a4);
        piVar1 = (int *)(param_1 + 0x2d0);
        piVar2 = (int *)(param_1 + 0x2fc);
        param_1 += 0x318;
        *(int *)(param_2 + 0x68) = *piVar1 << 0x1c | *piVar2 << 0x18;
        param_2 += 0x318;
        iVar3 += -0x1;
    } while (iVar3 != 0x0);
    return;
}



void DecodeWell(int param_1,int param_2,int param_3)

{
    uint uVar1;
    int iVar2;
    
    if (0x7 < param_3) {
        return;
    }
    iVar2 = 0xc;
    param_2 += param_3 * 0x84;
    do {
        uVar1 = *(uint *)(param_2 + 0x10);
        *(uint *)(param_1 + 0x10) = uVar1 >> 0x1c;
        *(uint *)(param_1 + 0x3c) = uVar1 >> 0x18 & 0xf;
        *(uint *)(param_1 + 0x68) = uVar1 >> 0x14 & 0xf;
        *(uint *)(param_1 + 0x94) = uVar1 >> 0x10 & 0xf;
        *(uint *)(param_1 + 0xc0) = uVar1 >> 0xc & 0xf;
        *(uint *)(param_1 + 0xec) = uVar1 >> 0x8 & 0xf;
        *(uint *)(param_1 + 0x118) = uVar1 >> 0x4 & 0xf;
        *(uint *)(param_1 + 0x144) = uVar1 & 0xf;
        uVar1 = *(uint *)(param_2 + 0x3c);
        *(uint *)(param_1 + 0x170) = uVar1 >> 0x1c;
        *(uint *)(param_1 + 0x19c) = uVar1 >> 0x18 & 0xf;
        *(uint *)(param_1 + 0x1c8) = uVar1 >> 0x14 & 0xf;
        *(uint *)(param_1 + 0x1f4) = uVar1 >> 0x10 & 0xf;
        *(uint *)(param_1 + 0x220) = uVar1 >> 0xc & 0xf;
        *(uint *)(param_1 + 0x24c) = uVar1 >> 0x8 & 0xf;
        *(uint *)(param_1 + 0x278) = uVar1 >> 0x4 & 0xf;
        *(uint *)(param_1 + 0x2a4) = uVar1 & 0xf;
        uVar1 = *(uint *)(param_2 + 0x68);
        param_2 += 0x318;
        *(uint *)(param_1 + 0x2d0) = uVar1 >> 0x1c;
        *(uint *)(param_1 + 0x2fc) = uVar1 >> 0x18 & 0xf;
        param_1 += 0x318;
        iVar2 += -0x1;
    } while (iVar2 != 0x0);
    return;
}



undefined4 CheckPlayerPuzzle(int param_1)

{
    if (*(char *)(gPlayer._0_4_ + (param_1 + -0x1) * 0x6e + 0x1f4) == '\0') {
        return 0x0;
    }
    return 0xffffffff;
}



undefined4 LoadPuzzleEditor(int param_1)

{
    undefined4 uVar1;
    int iVar2;
    
    iVar2 = gPlayer._0_4_ + (param_1 + -0x1) * 0x6e + 0x1f4;
    Init2DTetrisBlocks(gTheGame,0x0);
    iVar2 = Init2DPuzzle(gTheGame,0x2b6d48,iVar2,0x1);
    if (iVar2 == 0x0) {
        Init2DTetrisBlocks(gTheGame,0x0);
        uVar1 = 0x0;
    }
    else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}



undefined4 SavePuzzleEditor(int param_1)

{
    undefined4 uVar1;
    
    if ((gTheGame._89896_4_ < 0x1) || (0x5 < gTheGame._89896_4_)) {
        uVar1 = 0x0;
    }
    else {
        uVar1 = Save2DPuzzle(gTheGame,0x2b6d48,gPlayer._0_4_ + (param_1 + -0x1) * 0x6e + 0x1f4);
    }
    return uVar1;
}



undefined4 DeletePuzzleEditor(int param_1)

{
    Init2DTetrisBlocks(gTheGame,0x0);
    Save2DPuzzle(gTheGame,0x2b6d48,gPlayer._0_4_ + (param_1 + -0x1) * 0x6e + 0x1f4);
    return 0xffffffff;
}



void InitPuzzleEditor(int param_1)

{
    if (param_1 != 0x0) {
        gTheGame._89904_4_ = 0xffffffff;
    }
    InitTetrisWell();
    gTheGame._89904_4_ = gWorld;
    return;
}



void DoPuzzleEditor(void)

{
    Init2DTetrisBlocksTMEM(gTheGame,0xffffffff);
    UpdateAnimation(gTheGame,0x0,0x0);
    return;
}



void DrawPuzzleEditor(undefined4 param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    
    Update2DBuffer(*fb);
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xed000023;
    glistp = puVar2;
    puVar1[0x1] = 0x5003c3;
    Draw2DBackground(param_1);
    Draw2DAnimation(param_1,0x1,0x3);
    gBox_Level = 0x8c;
    Draw2DShadeBox();
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xed000083;
    glistp = puVar2;
    puVar1[0x1] = 0x500383;
    puVar1 = glistp;
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
    Draw2DTetrisWell(param_1,gTheGame,0x0);
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xed000023;
    glistp = puVar2;
    puVar1[0x1] = 0x5003c3;
    Draw2DFrame();
    Draw2DAnimation(param_1,0x4,0x4);
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar2;
    puVar1[0x1] = 0x300000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x63196319;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf647c23c;
    glistp = puVar2;
    puVar1[0x1] = 0x39c09c;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    Draw2DAnimation(param_1,0x5,0x6);
    return;
}

