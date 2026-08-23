

void Init3DNewRow(int param_1)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    
    iVar1 = 0x0;
    iVar6 = -0x1;
    uVar5 = 0x0;
    iVar4 = 0x0;
    if ((*(int *)(param_1 + 0x4af8) < 0x5) && (0x1 < *(int *)(param_1 + 0x4af4))) {
        *(int *)(param_1 + 0x4af4) = *(int *)(param_1 + 0x4af4) + -0x2;
        uVar5 = 0x3;
        iVar1 = -0x1;
        *(int *)(param_1 + 0x4af8) = *(int *)(param_1 + 0x4af8) + 0x2;
    }
    else if ((*(int *)(param_1 + 0x4af8) < 0x9) && (0x0 < *(int *)(param_1 + 0x4af4))) {
        *(int *)(param_1 + 0x4af4) = *(int *)(param_1 + 0x4af4) + -0x1;
        uVar5 = 0x2;
        iVar1 = -0x1;
        *(int *)(param_1 + 0x4af8) = *(int *)(param_1 + 0x4af8) + 0x1;
    }
    else if (*(int *)(param_1 + 0x4ac8) < 0x2) {
        uVar5 = 0x1;
        iVar1 = -0x1;
    }
    if (iVar1 != 0x0) {
        uVar2 = *(undefined4 *)(param_1 + 0x4ac4);
        *(undefined4 *)(param_1 + 0x4ac4) = 0xffffffff;
        iVar6 = RandomBlock(param_1);
        *(undefined4 *)(param_1 + 0x4ac4) = uVar2;
    }
    if (*(int *)(param_1 + 0x4ac8) == 0x1) {
        *(undefined4 *)(param_1 + 0x4ac8) = 0x2;
    }
    else if (*(int *)(param_1 + 0x4ac8) == 0x2) {
        *(undefined4 *)(param_1 + 0x4ac8) = 0x1;
    }
    iVar1 = 0x11;
    do {
        if (iVar1 < 0x0) {
            return;
        }
        iVar3 = param_1 + iVar1 * 0x2c;
        InitTetrisState(iVar3 + 0x476c);
        *(undefined4 *)(iVar3 + 0x4788) = 0x0;
        if (iVar1 == iVar6) {
            if (uVar5 == 0x2) {
                iVar4 = 0x7;
                goto LAB_000753d0;
            }
            if (0x1 < uVar5) {
                if (uVar5 < 0x4) {
                    *(undefined4 *)(iVar3 + 0x47a8) = 0x7;
                    iVar4 = 0x7;
                }
                goto LAB_000753d0;
            }
            if ((uVar5 == 0x0) ||
               (iVar4 = *(int *)(iVar3 + 0x47a8), iVar4 != *(int *)(iVar3 + 0x10)))
            goto LAB_000753d0;
            iVar1 += 0x2;
        }
        else {
            if (iVar1 == 0x0) {
                do {
                    do {
                        iVar4 = RandomBlock(param_1);
                    } while (iVar4 == *(int *)(param_1 + 0x4a68));
                } while ((iVar4 == *(int *)(iVar3 + 0x47a8)) || (iVar4 == *(int *)(iVar3 + 0x10)));
            }
            else {
                do {
                    do {
                        iVar4 = RandomBlock(param_1);
                    } while (iVar4 == *(int *)(iVar3 + 0x47a8));
                } while (iVar4 == *(int *)(iVar3 + 0x10));
            }
LAB_000753d0:
            *(int *)(iVar3 + 0x477c) = iVar4;
        }
        iVar1 += -0x1;
    } while( true );
}



void Init3DCursor(int param_1,int param_2)

{
    *(undefined4 *)(param_1 + 0x18) = 0x0;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x10) = 0x4;
    if (gTheGame._120328_4_ == 0x1) {
        *(undefined2 *)(param_1 + 0xe8) = 0x8e;
    }
    else if (gTheGame._120328_4_ == 0x2) {
        if (param_2 == 0x0) {
            *(undefined2 *)(param_1 + 0xe8) = 0x33;
        }
        else {
            *(undefined2 *)(param_1 + 0xe8) = 0xd6;
        }
    }
    *(short *)(param_1 + 0xf0) = 0xcb - (short)(*(int *)(param_1 + 0x14) << 0x4);
    return;
}



void Init3DTetrisBlocks(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    
    iVar2 = 0x0;
    *(undefined4 *)(param_1 + 0x4768) = 0x0;
    iVar3 = param_1;
    iVar4 = param_1;
    do {
        iVar1 = 0x0;
        iVar5 = iVar3;
        iVar6 = iVar4;
        do {
            InitTetrisState(iVar6);
            *(int *)(iVar6 + 0x1c) = iVar2;
            iVar1 += 0x1;
            *(undefined *)(iVar5 + 0x4690) = 0x0;
            iVar6 += 0x2c;
            iVar5 += 0x1;
        } while (iVar1 < 0x12);
        iVar2 += 0x1;
        iVar4 += 0x318;
        iVar3 += 0x12;
    } while (iVar2 < 0xc);
    iVar3 = 0x0;
    do {
        InitTetrisState(param_1 + 0x476c);
        iVar3 += 0x1;
        *(undefined4 *)(param_1 + 0x4788) = 0x0;
        param_1 += 0x2c;
    } while (iVar3 < 0x12);
    return;
}



void Init3DTetrisBlocksState(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iVar2 = 0x0;
    do {
        iVar1 = 0x0;
        iVar4 = param_1;
        do {
            iVar3 = *(int *)(iVar4 + 0x10);
            if (iVar3 == 0x0) {
                InitTetrisState(iVar4);
            }
            else {
                InitTetrisState(iVar4);
                *(int *)(iVar4 + 0x10) = iVar3;
            }
            iVar1 += 0x1;
            iVar4 += 0x2c;
        } while (iVar1 < 0x12);
        iVar2 += 0x1;
        param_1 += 0x318;
    } while (iVar2 < 0xc);
    return;
}



void Init3DIcons(int param_1)

{
    int iVar1;
    
    iVar1 = 0x0;
    do {
        *(undefined4 *)(param_1 + 0x31a0) = 0x0;
        *(undefined4 *)(param_1 + 0x31a4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x31bc) = 0x0;
        *(undefined4 *)(param_1 + 0x31c0) = 0x0;
        *(undefined4 *)(param_1 + 0x31b4) = 0x0;
        guMtxIdent(param_1 + 0x31c8);
        iVar1 += 0x1;
        param_1 += 0x68;
    } while (iVar1 < 0xa);
    return;
}



void Init3DAttackBlocks(int param_1)

{
    int iVar1;
    
    iVar1 = 0x5;
    do {
        *(undefined4 *)(param_1 + 0x2520) = 0x0;
        *(undefined4 *)(param_1 + 0x2524) = 0x0;
        *(undefined4 *)(param_1 + 0x2528) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x252c) = 0x0;
        *(undefined4 *)(param_1 + 0x2530) = 0x0;
        *(undefined4 *)(param_1 + 0x2544) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2548) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2570) = 0x0;
        *(undefined4 *)(param_1 + 0x2574) = 0x0;
        *(undefined4 *)(param_1 + 0x2578) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x257c) = 0x0;
        *(undefined4 *)(param_1 + 0x2580) = 0x0;
        *(undefined4 *)(param_1 + 0x2594) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2598) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x25c0) = 0x0;
        *(undefined4 *)(param_1 + 0x25c4) = 0x0;
        *(undefined4 *)(param_1 + 0x25c8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x25cc) = 0x0;
        *(undefined4 *)(param_1 + 0x25d0) = 0x0;
        *(undefined4 *)(param_1 + 0x25e4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x25e8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2610) = 0x0;
        *(undefined4 *)(param_1 + 0x2614) = 0x0;
        *(undefined4 *)(param_1 + 0x2618) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x261c) = 0x0;
        *(undefined4 *)(param_1 + 0x2620) = 0x0;
        *(undefined4 *)(param_1 + 0x2634) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2638) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2660) = 0x0;
        *(undefined4 *)(param_1 + 0x2664) = 0x0;
        *(undefined4 *)(param_1 + 0x2668) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x266c) = 0x0;
        *(undefined4 *)(param_1 + 0x2670) = 0x0;
        *(undefined4 *)(param_1 + 0x2684) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2688) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x26b0) = 0x0;
        *(undefined4 *)(param_1 + 0x26b4) = 0x0;
        *(undefined4 *)(param_1 + 0x26b8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x26bc) = 0x0;
        *(undefined4 *)(param_1 + 0x26c0) = 0x0;
        *(undefined4 *)(param_1 + 0x26d4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x26d8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2700) = 0x0;
        *(undefined4 *)(param_1 + 0x2704) = 0x0;
        *(undefined4 *)(param_1 + 0x2708) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x270c) = 0x0;
        *(undefined4 *)(param_1 + 0x2710) = 0x0;
        *(undefined4 *)(param_1 + 0x2724) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2728) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2750) = 0x0;
        *(undefined4 *)(param_1 + 0x2754) = 0x0;
        *(undefined4 *)(param_1 + 0x2758) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x275c) = 0x0;
        *(undefined4 *)(param_1 + 0x2760) = 0x0;
        *(undefined4 *)(param_1 + 0x2774) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2778) = 0xffffffff;
        param_1 += 0x280;
        iVar1 += -0x1;
    } while (iVar1 != 0x0);
    return;
}



void Init3DExplosion(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    
    iVar3 = 0x3;
    iVar2 = 0x0;
    iVar1 = param_1;
    do {
        *(undefined4 *)(iVar1 + 0x35b0) = 0xffffffff;
        iVar2 += 0x10;
        *(undefined4 *)(iVar1 + 0x35b4) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x35e0) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x35e4) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3610) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3614) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3640) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3644) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3670) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3674) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x36a0) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x36a4) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x36d0) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x36d4) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3700) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3704) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3730) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3734) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3760) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3764) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3790) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3794) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x37c0) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x37c4) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x37f0) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x37f4) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3820) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3824) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3850) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3854) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3880) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x3884) = 0xffffffff;
        iVar1 += 0x300;
        iVar3 += -0x1;
    } while (iVar3 != 0x0);
    param_1 += iVar2 * 0x30;
    iVar1 = 0x32 - iVar2;
    if (iVar2 < 0x32) {
        do {
            *(undefined4 *)(param_1 + 0x35b0) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x35b4) = 0xffffffff;
            param_1 += 0x30;
            iVar1 += -0x1;
        } while (iVar1 != 0x0);
    }
    return;
}



void Init3DText(void)

{
    int iVar1;
    int iVar2;
    
    gTheGame._117088_4_ = 0x0;
    gTheGame._117120_4_ = 0xffffffff;
    gTheGame._117152_4_ = 0xffffffff;
    gTheGame._117184_4_ = 0xffffffff;
    gTheGame._117216_4_ = 0xffffffff;
    gTheGame._117248_4_ = 0xffffffff;
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
    iVar2 = 0x2a1648;
    iVar1 = 0x6;
    if (false) {
        return;
    }
    do {
        *(undefined4 *)(iVar2 + 0x1c980) = 0xffffffff;
        iVar2 += 0x20;
        iVar1 += -0x1;
    } while (iVar1 != 0x0);
    return;
}



void Init3DClearLine(int param_1,undefined4 param_2,int param_3)

{
    undefined2 *puVar1;
    
    *(undefined4 *)(param_1 + 0x2544) = 0x0;
    puVar1 = (undefined2 *)(param_1 + 0x2550);
    if (gTheGame._120328_4_ == 0x1) {
        *puVar1 = 0xe1;
    }
    else if (gTheGame._120328_4_ == 0x2) {
        if (param_3 == 0x0) {
            *puVar1 = 0x87;
        }
        else {
            *puVar1 = 0x89;
        }
    }
    *(undefined2 *)(param_1 + 0x2558) = 0xc6;
    return;
}



void Init3DSmallStars(void)

{
    Init2DSmallStars();
    return;
}



void Init3DCircleStars(void)

{
    Init2DCircleStars();
    return;
}



void Init3DGameOverSmoke(int param_1,int param_2)

{
    int *piVar1;
    int *piVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int local_74 [0x4];
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    int local_54 [0x4];
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    int local_34 [0x4];
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;
    
    local_34[1] = 0xd;
    iVar6 = 0x32;
    iVar5 = 0x0;
    local_34[2] = 0x17;
    iVar4 = 0x0;
    local_34[3] = 0x27;
    local_24 = 0x3b;
    local_20 = 0x4f;
    local_1c = 0x63;
    local_18 = 0x73;
    local_14 = 0x7d;
    local_54[1] = 0xb1;
    local_54[2] = 0xbb;
    local_54[3] = 0xcb;
    local_44 = 0xdf;
    local_40 = 0xf3;
    local_3c = 0x107;
    local_38 = 0x117;
    local_34[0] = 0x121;
    local_74[1] = 0x69;
    local_74[2] = 0x73;
    local_74[3] = 0x83;
    local_64 = 0x97;
    local_60 = 0xab;
    local_5c = 0xbf;
    local_58 = 0xcf;
    local_54[0] = 0xd9;
    piVar1 = local_74;
    piVar2 = local_34;
    piVar3 = local_54;
    while( true ) {
        *(undefined4 *)(param_1 + 0x35b0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x35b4) = 0xffffffff;
        *(undefined2 *)(param_1 + 0x35da) = 0x0;
        if (gTheGame._120328_4_ == 0x1) {
            if ((iVar4 < 0x2) || (0x7 < iVar4)) {
                *(undefined2 *)(param_1 + 0x35c8) = 0xfd80;
            }
            else {
                *(short *)(param_1 + 0x35c8) = (short)(*piVar1 << 0x2);
            }
        }
        else if (gTheGame._120328_4_ == 0x2) {
            if ((iVar4 < 0x2) || (0x7 < iVar4)) {
                *(undefined2 *)(param_1 + 0x35c8) = 0xfd80;
            }
            else if (param_2 == 0x0) {
                *(short *)(param_1 + 0x35c8) = (short)(*piVar2 << 0x2);
            }
            else {
                *(short *)(param_1 + 0x35c8) = (short)(*piVar3 << 0x2);
            }
        }
        iVar5 += 0x1;
        *(undefined2 *)(param_1 + 0x35d0) = 0x3c;
        if (0x11 < iVar5) break;
        param_1 += 0x30;
        iVar4 += 0x1;
        iVar6 += -0x1;
        piVar1 = piVar1 + 0x1;
        piVar2 = piVar2 + 0x1;
        piVar3 = piVar3 + 0x1;
        if (iVar6 == 0x0) {
            return;
        }
    }
    return;
}



void Init3DMatrixBlocks(void)

{
    gAllVertex = gc_vertex;
    guMtxIdent(gIdent);
    return;
}



undefined4 Return3DComboTile(int param_1)

{
    uint uVar1;
    int iVar2;
    
    if (param_1 < 0x46) {
        uVar1 = param_1 + 0x4;
        iVar2 = uVar1 + (((int)uVar1 >> 0x3) + (uint)((int)uVar1 < 0x0 && (uVar1 & 0x7) != 0x0)) *
                        -0x8;
    }
    else {
        iVar2 = -0x1;
    }
    switch(iVar2) {
    case 0x0:
        return 0x0;
    case 0x1:
        return 0x1;
    case 0x2:
        return 0x2;
    case 0x3:
        return 0x3;
    case 0x4:
        return 0x4;
    case 0x5:
        return 0x5;
    case 0x6:
        return 0x6;
    case 0x7:
        return 0x7;
    default:
        return 0x3;
    }
}



undefined4 Return3DChainTile(uint param_1)

{
    if (0x62 < (int)param_1) {
        return 0x3;
    }
    if (true) {
        switch(param_1 + (((int)param_1 >> 0x3) +
                         (uint)((int)param_1 < 0x0 && (param_1 & 0x7) != 0x0)) * -0x8) {
        case 0x1:
            return 0x0;
        case 0x2:
            return 0x1;
        case 0x3:
            return 0x2;
        case 0x4:
            return 0x3;
        case 0x5:
            return 0x4;
        case 0x6:
            return 0x5;
        case 0x7:
            return 0x6;
        }
    }
    return 0x7;
}

