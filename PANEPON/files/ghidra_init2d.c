

void Init2DNewRow(int param_1)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    
    iVar1 = 0x0;
    iVar7 = -0x1;
    uVar6 = 0x0;
    iVar5 = 0x0;
    if ((*(int *)(param_1 + 0x4af8) < 0x5) && (0x1 < *(int *)(param_1 + 0x4af4))) {
        *(int *)(param_1 + 0x4af4) = *(int *)(param_1 + 0x4af4) + -0x2;
        uVar6 = 0x3;
        iVar1 = -0x1;
        *(int *)(param_1 + 0x4af8) = *(int *)(param_1 + 0x4af8) + 0x2;
    }
    else if ((*(int *)(param_1 + 0x4af8) < 0x9) && (0x0 < *(int *)(param_1 + 0x4af4))) {
        *(int *)(param_1 + 0x4af4) = *(int *)(param_1 + 0x4af4) + -0x1;
        uVar6 = 0x2;
        iVar1 = -0x1;
        *(int *)(param_1 + 0x4af8) = *(int *)(param_1 + 0x4af8) + 0x1;
    }
    else if (*(int *)(param_1 + 0x4ac8) < 0x2) {
        uVar6 = 0x1;
        iVar1 = -0x1;
    }
    if (iVar1 != 0x0) {
        uVar2 = *(undefined4 *)(param_1 + 0x4ac4);
        *(undefined4 *)(param_1 + 0x4ac4) = 0xffffffff;
        do {
            do {
                iVar7 = RandomBlock(param_1);
                iVar7 += -0x1;
                iVar1 = param_1 + iVar7 * 0x2c;
            } while (*(int *)(iVar1 + 0x10) == 0x7);
        } while (*(int *)(iVar1 + 0x3c) == 0x7);
        *(undefined4 *)(param_1 + 0x4ac4) = uVar2;
    }
    if (*(int *)(param_1 + 0x4ac8) == 0x1) {
        *(undefined4 *)(param_1 + 0x4ac8) = 0x2;
    }
    else if (*(int *)(param_1 + 0x4ac8) == 0x2) {
        *(undefined4 *)(param_1 + 0x4ac8) = 0x1;
    }
    iVar1 = 0x5;
    do {
        if (iVar1 < 0x0) {
            return;
        }
        iVar3 = param_1 + iVar1 * 0x2c;
        iVar4 = param_1 + iVar1 * 0x18 + 0x45d0;
        InitTetrisState(iVar3 + 0x476c);
        *(undefined4 *)(iVar3 + 0x4788) = 0x0;
        if (iVar1 == iVar7) {
            if (uVar6 == 0x2) {
                iVar5 = 0x7;
                goto LAB_00073160;
            }
            if (0x1 < uVar6) {
                if (uVar6 < 0x4) {
                    *(undefined4 *)(iVar3 + 0x47a8) = 0x7;
                    iVar5 = 0x7;
                    Init2DTetrisTMEM(param_1 + (iVar1 + 0x1) * 0x2c + 0x476c,
                                     param_1 + (iVar1 + 0x1) * 0x18 + 0x45d0);
                }
                goto LAB_00073160;
            }
            if ((uVar6 == 0x0) ||
               (iVar5 = *(int *)(iVar3 + 0x47a8), iVar5 != *(int *)(iVar3 + 0x10)))
            goto LAB_00073160;
            iVar1 += 0x2;
        }
        else {
            do {
                do {
                    iVar5 = RandomBlock(param_1);
                } while (iVar5 == *(int *)(iVar3 + 0x47a8));
            } while (iVar5 == *(int *)(iVar3 + 0x10));
LAB_00073160:
            if (gTheGame._120328_4_ < 0x3) {
                *(undefined2 *)(iVar4 + 0x8) = 0x37c;
            }
            else {
                *(undefined2 *)(iVar4 + 0x8) = 0x354;
            }
            *(int *)(iVar3 + 0x477c) = iVar5;
            Init2DTetrisTMEM(iVar3 + 0x476c,iVar4);
        }
        iVar1 += -0x1;
    } while( true );
}



void Init2DCursor(int param_1,int param_2)

{
    short *psVar1;
    
    psVar1 = (short *)(param_1 + 0xe8);
    if (gTheGame._120328_4_ == 0x1) {
        *psVar1 = (short)(*(int *)(param_1 + 0x10) * 0x12 + 0x6e) * 0x4;
        *(short *)(param_1 + 0xf0) = (short)(*(int *)(param_1 + 0x14) * -0x10 + 0xcb) * 0x4;
    }
    else if (gTheGame._120328_4_ == 0x2) {
        if (param_2 == 0x0) {
            *psVar1 = (short)(*(int *)(param_1 + 0x10) * 0x12 + 0x14) * 0x4;
        }
        else {
            *psVar1 = (short)(*(int *)(param_1 + 0x10) * 0x12 + 0xb8) * 0x4;
        }
        *(short *)(param_1 + 0xf0) = (short)(*(int *)(param_1 + 0x14) * -0x10 + 0xcb) * 0x4;
    }
    else {
        if (param_2 == 0x0) {
            *psVar1 = (short)(*(int *)(param_1 + 0x10) * 0xa + 0x1b) * 0x4;
        }
        else if (param_2 == 0x1) {
            *psVar1 = (short)(*(int *)(param_1 + 0x10) * 0xa + 0x5f) * 0x4;
        }
        else if (param_2 == 0x2) {
            *psVar1 = (short)(*(int *)(param_1 + 0x10) * 0xa + 0xa3) * 0x4;
        }
        else if (param_2 == 0x3) {
            *psVar1 = (short)(*(int *)(param_1 + 0x10) * 0xa + 0xe7) * 0x4;
        }
        *(short *)(param_1 + 0xf0) = (short)(*(int *)(param_1 + 0x14) * -0xa + 0xc8) * 0x4;
    }
    *(undefined2 *)(param_1 + 0xea) = 0x400;
    *(undefined2 *)(param_1 + 0xec) = 0x580;
    *(undefined2 *)(param_1 + 0xee) = 0x0;
    *(undefined2 *)(param_1 + 0xf2) = 0x400;
    *(undefined2 *)(param_1 + 0xf4) = 0x300;
    *(undefined2 *)(param_1 + 0xf6) = 0x0;
    *(undefined2 *)(param_1 + 0xf8) = 0x8;
    *(undefined2 *)(param_1 + 0xfa) = 0x0;
    *(undefined *)(param_1 + 0xfc) = 0x2;
    *(undefined *)(param_1 + 0xfd) = 0x1;
    *(undefined *)(param_1 + 0xfe) = 0x0;
    *(undefined *)(param_1 + 0xff) = 0x0;
    if (gTheGame._120328_4_ < 0x3) {
        return;
    }
    *(undefined2 *)(param_1 + 0xea) = 0x799;
    *(undefined2 *)(param_1 + 0xf2) = 0x666;
    return;
}



void Init2DTetrisBlocks(int param_1,int param_2)

{
    short sVar1;
    int iVar2;
    short sVar3;
    short sVar4;
    short sVar5;
    short sVar6;
    short sVar7;
    short sVar8;
    short sVar9;
    short sVar10;
    short sVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    short *psVar15;
    int local_54;
    int local_50;
    
    sVar3 = 0x0;
    sVar1 = 0x0;
    iVar2 = 0x0;
    local_54 = param_1;
    local_50 = param_1;
    do {
        sVar5 = (0xcf - sVar3) * 0x4;
        iVar13 = 0x0;
        sVar4 = 0x1c8;
        sVar6 = 0x60;
        sVar7 = 0x2f0;
        sVar8 = 0x70;
        sVar9 = 0x180;
        sVar10 = 0x290;
        sVar11 = 0x3a0;
        iVar12 = local_54;
        iVar14 = local_50;
        do {
            psVar15 = (short *)(iVar12 + 0x3f10);
            InitTetrisState(iVar14);
            *(int *)(iVar14 + 0x1c) = iVar2;
            if (gTheGame._120328_4_ == 0x1) {
                *psVar15 = sVar4;
                *(short *)(iVar12 + 0x3f18) = sVar5;
            }
            else if (gTheGame._120328_4_ == 0x2) {
                if (param_2 == 0x0) {
                    *psVar15 = sVar6;
                }
                else {
                    *psVar15 = sVar7;
                }
                *(short *)(iVar12 + 0x3f18) = sVar5;
            }
            else {
                if (param_2 == 0x0) {
                    *psVar15 = sVar8;
                }
                else if (param_2 == 0x1) {
                    *psVar15 = sVar9;
                }
                else if (param_2 == 0x2) {
                    *psVar15 = sVar10;
                }
                else if (param_2 == 0x3) {
                    *psVar15 = sVar11;
                }
                *(short *)(iVar12 + 0x3f18) = (0xcb - sVar1) * 0x4;
            }
            *(undefined2 *)(iVar12 + 0x3f12) = 0x38f;
            *(undefined2 *)(iVar12 + 0x3f14) = 0x200;
            *(undefined2 *)(iVar12 + 0x3f16) = 0x0;
            *(undefined2 *)(iVar12 + 0x3f1a) = 0x400;
            *(undefined2 *)(iVar12 + 0x3f1c) = 0x200;
            *(undefined2 *)(iVar12 + 0x3f1e) = 0x0;
            *(undefined2 *)(iVar12 + 0x3f20) = 0x8;
            *(undefined2 *)(iVar12 + 0x3f22) = 0x0;
            *(undefined *)(iVar12 + 0x3f24) = 0x2;
            *(undefined *)(iVar12 + 0x3f25) = 0x1;
            *(undefined *)(iVar12 + 0x3f26) = 0x0;
            *(undefined *)(iVar12 + 0x3f27) = 0x0;
            if (0x2 < gTheGame._120328_4_) {
                *(undefined2 *)(iVar12 + 0x3f14) = 0x1e0;
                *(undefined2 *)(iVar12 + 0x3f12) = 0x666;
                *(undefined2 *)(iVar12 + 0x3f1a) = 0x666;
            }
            iVar13 += 0x1;
            iVar14 += 0x2c;
            iVar12 += 0x18;
            sVar4 += 0x48;
            sVar6 += 0x48;
            sVar7 += 0x48;
            sVar8 += 0x28;
            sVar9 += 0x28;
            sVar10 += 0x28;
            sVar11 += 0x28;
        } while (iVar13 < 0x6);
        iVar2 += 0x1;
        local_50 += 0x318;
        sVar3 += 0x10;
        sVar1 += 0xa;
        local_54 += 0x90;
    } while (iVar2 < 0xc);
    iVar12 = 0x0;
    sVar1 = 0x1c8;
    sVar8 = 0x60;
    sVar7 = 0x2f0;
    sVar6 = 0x70;
    sVar4 = 0x180;
    sVar5 = 0x290;
    sVar3 = 0x3a0;
    iVar2 = param_1;
    do {
        psVar15 = (short *)(param_1 + 0x45d0);
        InitTetrisState(iVar2 + 0x476c);
        *(undefined4 *)(iVar2 + 0x4788) = 0x0;
        if (gTheGame._120328_4_ == 0x1) {
            *psVar15 = sVar1;
            *(undefined2 *)(param_1 + 0x45d8) = 0x37c;
        }
        else if (gTheGame._120328_4_ == 0x2) {
            if (param_2 == 0x0) {
                *psVar15 = sVar8;
            }
            else {
                *psVar15 = sVar7;
            }
            *(undefined2 *)(param_1 + 0x45d8) = 0x37c;
        }
        else {
            if (param_2 == 0x0) {
                *psVar15 = sVar6;
            }
            else if (param_2 == 0x1) {
                *psVar15 = sVar4;
            }
            else if (param_2 == 0x2) {
                *psVar15 = sVar5;
            }
            else if (param_2 == 0x3) {
                *psVar15 = sVar3;
            }
            *(undefined2 *)(param_1 + 0x45d8) = 0x354;
        }
        *(undefined2 *)(param_1 + 0x45d2) = 0x38f;
        *(undefined2 *)(param_1 + 0x45d4) = 0x200;
        *(undefined2 *)(param_1 + 0x45d6) = 0x0;
        *(undefined2 *)(param_1 + 0x45da) = 0x400;
        *(undefined2 *)(param_1 + 0x45dc) = 0x200;
        *(undefined2 *)(param_1 + 0x45de) = 0x0;
        *(undefined2 *)(param_1 + 0x45e0) = 0x8;
        *(undefined2 *)(param_1 + 0x45e2) = 0x0;
        *(undefined *)(param_1 + 0x45e4) = 0x2;
        *(undefined *)(param_1 + 0x45e5) = 0x1;
        *(undefined *)(param_1 + 0x45e6) = 0x0;
        *(undefined *)(param_1 + 0x45e7) = 0x0;
        if (0x2 < gTheGame._120328_4_) {
            *(undefined2 *)(param_1 + 0x45d4) = 0x1e0;
            *(undefined2 *)(param_1 + 0x45d2) = 0x666;
            *(undefined2 *)(param_1 + 0x45da) = 0x666;
        }
        iVar12 += 0x1;
        iVar2 += 0x2c;
        param_1 += 0x18;
        sVar1 += 0x48;
        sVar8 += 0x48;
        sVar7 += 0x48;
        sVar6 += 0x28;
        sVar4 += 0x28;
        sVar5 += 0x28;
        sVar3 += 0x28;
    } while (iVar12 < 0x6);
    return;
}



void Init2DTetrisBlocksTMEM(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    
    iVar2 = 0x0;
    iVar4 = param_1;
    do {
        iVar1 = 0x0;
        iVar5 = param_1;
        iVar6 = iVar4;
        do {
            iVar3 = *(int *)(iVar6 + 0x10);
            if (iVar3 == 0x0) {
                InitTetrisState(iVar6);
            }
            else {
                if (param_2 != 0x0) {
                    InitTetrisState(iVar6);
                }
                *(int *)(iVar6 + 0x10) = iVar3;
                Init2DTetrisTMEM(iVar6,iVar5 + 0x3f10);
            }
            iVar1 += 0x1;
            iVar6 += 0x2c;
            iVar5 += 0x18;
        } while (iVar1 < 0x6);
        iVar2 += 0x1;
        iVar4 += 0x318;
        param_1 += 0x90;
    } while (iVar2 < 0xc);
    return;
}



void Init2DIcons(int param_1)

{
    int iVar1;
    
    iVar1 = 0x5;
    do {
        *(undefined4 *)(param_1 + 0x31a0) = 0x0;
        *(undefined4 *)(param_1 + 0x31a4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x31bc) = 0x0;
        *(undefined4 *)(param_1 + 0x31c0) = 0x0;
        *(undefined2 *)(param_1 + 0x31ca) = 0x38f;
        *(undefined2 *)(param_1 + 0x31cc) = 0x200;
        *(undefined2 *)(param_1 + 0x31ce) = 0x0;
        *(undefined2 *)(param_1 + 0x31d2) = 0x400;
        *(undefined2 *)(param_1 + 0x31d4) = 0x200;
        *(undefined2 *)(param_1 + 0x31d6) = 0x0;
        *(undefined2 *)(param_1 + 0x31d8) = 0x8;
        *(undefined2 *)(param_1 + 0x31da) = 0x0;
        *(undefined *)(param_1 + 0x31dc) = 0x2;
        *(undefined *)(param_1 + 0x31dd) = 0x1;
        *(undefined *)(param_1 + 0x31de) = 0x0;
        *(undefined *)(param_1 + 0x31df) = 0x0;
        if (0x2 < gTheGame._120328_4_) {
            *(undefined2 *)(param_1 + 0x31ca) = 0x666;
            *(undefined2 *)(param_1 + 0x31d2) = 0x666;
        }
        *(undefined4 *)(param_1 + 0x3208) = 0x0;
        *(undefined4 *)(param_1 + 0x320c) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x3224) = 0x0;
        *(undefined4 *)(param_1 + 0x3228) = 0x0;
        *(undefined2 *)(param_1 + 0x3232) = 0x38f;
        *(undefined2 *)(param_1 + 0x3234) = 0x200;
        *(undefined2 *)(param_1 + 0x3236) = 0x0;
        *(undefined2 *)(param_1 + 0x323a) = 0x400;
        *(undefined2 *)(param_1 + 0x323c) = 0x200;
        *(undefined2 *)(param_1 + 0x323e) = 0x0;
        *(undefined2 *)(param_1 + 0x3240) = 0x8;
        *(undefined2 *)(param_1 + 0x3242) = 0x0;
        *(undefined *)(param_1 + 0x3244) = 0x2;
        *(undefined *)(param_1 + 0x3245) = 0x1;
        *(undefined *)(param_1 + 0x3246) = 0x0;
        *(undefined *)(param_1 + 0x3247) = 0x0;
        if (0x2 < gTheGame._120328_4_) {
            *(undefined2 *)(param_1 + 0x3232) = 0x666;
            *(undefined2 *)(param_1 + 0x323a) = 0x666;
        }
        param_1 += 0xd0;
        iVar1 += -0x1;
    } while (iVar1 != 0x0);
    return;
}



void Init2DAttackBlocks(int param_1)

{
    int iVar1;
    
    iVar1 = 0x14;
    do {
        *(undefined4 *)(param_1 + 0x2520) = 0x0;
        *(undefined4 *)(param_1 + 0x2524) = 0x0;
        *(undefined4 *)(param_1 + 0x2528) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x252c) = 0x0;
        *(undefined4 *)(param_1 + 0x2530) = 0x0;
        *(undefined4 *)(param_1 + 0x2540) = 0x0;
        *(undefined4 *)(param_1 + 0x2544) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2548) = 0xffffffff;
        *(undefined2 *)(param_1 + 0x2552) = 0x400;
        *(undefined2 *)(param_1 + 0x2554) = 0x400;
        *(undefined2 *)(param_1 + 0x2556) = 0x0;
        *(undefined2 *)(param_1 + 0x255a) = 0x400;
        *(undefined2 *)(param_1 + 0x255c) = 0x200;
        *(undefined2 *)(param_1 + 0x255e) = 0x0;
        *(undefined2 *)(param_1 + 0x2560) = 0x0;
        *(undefined2 *)(param_1 + 0x2562) = 0x0;
        *(undefined *)(param_1 + 0x2564) = 0x2;
        *(undefined *)(param_1 + 0x2565) = 0x1;
        *(undefined *)(param_1 + 0x2566) = 0x0;
        *(undefined *)(param_1 + 0x2567) = 0x0;
        *(undefined4 *)(param_1 + 0x2570) = 0x0;
        *(undefined4 *)(param_1 + 0x2574) = 0x0;
        *(undefined4 *)(param_1 + 0x2578) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x257c) = 0x0;
        *(undefined4 *)(param_1 + 0x2580) = 0x0;
        *(undefined4 *)(param_1 + 0x2590) = 0x0;
        *(undefined4 *)(param_1 + 0x2594) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2598) = 0xffffffff;
        *(undefined2 *)(param_1 + 0x25a2) = 0x400;
        *(undefined2 *)(param_1 + 0x25a4) = 0x400;
        *(undefined2 *)(param_1 + 0x25a6) = 0x0;
        *(undefined2 *)(param_1 + 0x25aa) = 0x400;
        *(undefined2 *)(param_1 + 0x25ac) = 0x200;
        *(undefined2 *)(param_1 + 0x25ae) = 0x0;
        *(undefined2 *)(param_1 + 0x25b0) = 0x0;
        *(undefined2 *)(param_1 + 0x25b2) = 0x0;
        *(undefined *)(param_1 + 0x25b4) = 0x2;
        *(undefined *)(param_1 + 0x25b5) = 0x1;
        *(undefined *)(param_1 + 0x25b6) = 0x0;
        *(undefined *)(param_1 + 0x25b7) = 0x0;
        param_1 += 0xa0;
        iVar1 += -0x1;
    } while (iVar1 != 0x0);
    return;
}



void pon_Init2DAttackBlocks4p(int param_1)

{
    int iVar1;
    
    iVar1 = 0x14;
    do {
        *(undefined4 *)(param_1 + 0x4b18) = 0x0;
        *(undefined4 *)(param_1 + 0x4b1c) = 0x0;
        *(undefined4 *)(param_1 + 0x4b20) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x4b24) = 0x0;
        *(undefined4 *)(param_1 + 0x4b28) = 0x0;
        *(undefined4 *)(param_1 + 0x4b38) = 0x0;
        *(undefined4 *)(param_1 + 0x4b3c) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x4b40) = 0xffffffff;
        *(undefined2 *)(param_1 + 0x4b4a) = 0x400;
        *(undefined2 *)(param_1 + 0x4b4c) = 0x400;
        *(undefined2 *)(param_1 + 0x4b4e) = 0x0;
        *(undefined2 *)(param_1 + 0x4b52) = 0x400;
        *(undefined2 *)(param_1 + 0x4b54) = 0x200;
        *(undefined2 *)(param_1 + 0x4b56) = 0x0;
        *(undefined2 *)(param_1 + 0x4b58) = 0x0;
        *(undefined2 *)(param_1 + 0x4b5a) = 0x0;
        *(undefined *)(param_1 + 0x4b5c) = 0x2;
        *(undefined *)(param_1 + 0x4b5d) = 0x1;
        *(undefined *)(param_1 + 0x4b5e) = 0x0;
        *(undefined *)(param_1 + 0x4b5f) = 0x0;
        *(undefined2 *)(param_1 + 0x4b4a) = 0x799;
        *(undefined2 *)(param_1 + 0x4b52) = 0x666;
        *(undefined4 *)(param_1 + 0x4b68) = 0x0;
        *(undefined4 *)(param_1 + 0x4b6c) = 0x0;
        *(undefined4 *)(param_1 + 0x4b70) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x4b74) = 0x0;
        *(undefined4 *)(param_1 + 0x4b78) = 0x0;
        *(undefined4 *)(param_1 + 0x4b88) = 0x0;
        *(undefined4 *)(param_1 + 0x4b8c) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x4b90) = 0xffffffff;
        *(undefined2 *)(param_1 + 0x4b9a) = 0x400;
        *(undefined2 *)(param_1 + 0x4b9c) = 0x400;
        *(undefined2 *)(param_1 + 0x4b9e) = 0x0;
        *(undefined2 *)(param_1 + 0x4ba2) = 0x400;
        *(undefined2 *)(param_1 + 0x4ba4) = 0x200;
        *(undefined2 *)(param_1 + 0x4ba6) = 0x0;
        *(undefined2 *)(param_1 + 0x4ba8) = 0x0;
        *(undefined2 *)(param_1 + 0x4baa) = 0x0;
        *(undefined *)(param_1 + 0x4bac) = 0x2;
        *(undefined *)(param_1 + 0x4bad) = 0x1;
        *(undefined *)(param_1 + 0x4bae) = 0x0;
        *(undefined *)(param_1 + 0x4baf) = 0x0;
        *(undefined2 *)(param_1 + 0x4b9a) = 0x799;
        *(undefined2 *)(param_1 + 0x4ba2) = 0x666;
        param_1 += 0xa0;
        iVar1 += -0x1;
    } while (iVar1 != 0x0);
    return;
}



void pon_InitAttackOtherData(int param_1,int param_2)

{
    *(undefined4 *)(param_1 + 0x5798) = 0x0;
    *(undefined4 *)(param_1 + 0x579c) = 0x0;
    *(undefined4 *)(param_1 + 0x57a0) = 0x0;
    *(undefined4 *)(param_1 + 0x57a4) = 0x0;
    *(undefined4 *)(param_1 + 0x57a8) = 0x0;
    if (param_2 == 0x2) {
        *(undefined4 *)(param_1 + 0x57ac) = 0x3;
        return;
    }
    if (0x1 < param_2) {
        if (0x3 < param_2) {
            return;
        }
        *(undefined4 *)(param_1 + 0x57ac) = 0x0;
        return;
    }
    if (param_2 == 0x0) {
        *(undefined4 *)(param_1 + 0x57ac) = 0x1;
        return;
    }
    if (param_2 < 0x0) {
        return;
    }
    *(undefined4 *)(param_1 + 0x57ac) = 0x2;
    return;
}



void Init2DExplosion(int param_1)

{
    int iVar1;
    
    iVar1 = 0x19;
    do {
        *(undefined4 *)(param_1 + 0x35b0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x35b4) = 0xffffffff;
        *(undefined2 *)(param_1 + 0x35ca) = 0x400;
        *(undefined2 *)(param_1 + 0x35ce) = 0x0;
        *(undefined2 *)(param_1 + 0x35d2) = 0x400;
        *(undefined2 *)(param_1 + 0x35d6) = 0x0;
        *(undefined2 *)(param_1 + 0x35d8) = 0x8;
        *(undefined2 *)(param_1 + 0x35da) = 0x0;
        *(undefined *)(param_1 + 0x35dc) = 0x2;
        *(undefined *)(param_1 + 0x35dd) = 0x1;
        *(undefined *)(param_1 + 0x35de) = 0x0;
        *(undefined *)(param_1 + 0x35df) = 0x0;
        if (0x2 < gTheGame._120328_4_) {
            *(undefined2 *)(param_1 + 0x35ca) = 0x799;
            *(undefined2 *)(param_1 + 0x35d2) = 0x666;
        }
        *(undefined4 *)(param_1 + 0x35e0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x35e4) = 0xffffffff;
        *(undefined2 *)(param_1 + 0x35fa) = 0x400;
        *(undefined2 *)(param_1 + 0x35fe) = 0x0;
        *(undefined2 *)(param_1 + 0x3602) = 0x400;
        *(undefined2 *)(param_1 + 0x3606) = 0x0;
        *(undefined2 *)(param_1 + 0x3608) = 0x8;
        *(undefined2 *)(param_1 + 0x360a) = 0x0;
        *(undefined *)(param_1 + 0x360c) = 0x2;
        *(undefined *)(param_1 + 0x360d) = 0x1;
        *(undefined *)(param_1 + 0x360e) = 0x0;
        *(undefined *)(param_1 + 0x360f) = 0x0;
        if (0x2 < gTheGame._120328_4_) {
            *(undefined2 *)(param_1 + 0x35fa) = 0x799;
            *(undefined2 *)(param_1 + 0x3602) = 0x666;
        }
        param_1 += 0x60;
        iVar1 += -0x1;
    } while (iVar1 != 0x0);
    return;
}



void Init2DText(void)

{
    undefined1 *puVar1;
    int iVar2;
    
    iVar2 = 0x23;
    gTheGame._117088_4_ = 0x5;
    puVar1 = gTheGame;
    do {
        *(undefined4 *)(puVar1 + 0x1c980) = 0xffffffff;
        *(undefined2 *)(puVar1 + 0x1c96a) = 0x400;
        *(undefined2 *)(puVar1 + 0x1c96c) = 0x1e0;
        *(undefined2 *)(puVar1 + 0x1c96e) = 0x0;
        *(undefined2 *)(puVar1 + 0x1c972) = 0x400;
        *(undefined2 *)(puVar1 + 0x1c974) = 0x200;
        *(undefined2 *)(puVar1 + 0x1c976) = 0x0;
        *(undefined2 *)(puVar1 + 0x1c978) = 0x8;
        *(undefined2 *)(puVar1 + 0x1c97a) = 0x0;
        puVar1[0x1c97c] = 0x2;
        puVar1[0x1c97d] = 0x1;
        puVar1[0x1c97e] = 0x0;
        puVar1[0x1c97f] = 0x0;
        *(undefined4 *)(puVar1 + 0x1c9a0) = 0xffffffff;
        *(undefined2 *)(puVar1 + 0x1c98a) = 0x400;
        *(undefined2 *)(puVar1 + 0x1c98c) = 0x1e0;
        *(undefined2 *)(puVar1 + 0x1c98e) = 0x0;
        *(undefined2 *)(puVar1 + 0x1c992) = 0x400;
        *(undefined2 *)(puVar1 + 0x1c994) = 0x200;
        *(undefined2 *)(puVar1 + 0x1c996) = 0x0;
        *(undefined2 *)(puVar1 + 0x1c998) = 0x8;
        *(undefined2 *)(puVar1 + 0x1c99a) = 0x0;
        puVar1[0x1c99c] = 0x2;
        puVar1[0x1c99d] = 0x1;
        puVar1[0x1c99e] = 0x0;
        puVar1[0x1c99f] = 0x0;
        iVar2 += -0x1;
        puVar1 = puVar1 + 0x40;
    } while (iVar2 != 0x0);
    if (gSelection != 0xb4) {
        if (gSelection < 0xb4) {
            if (gSelection == 0x96) {
                if (gTheGame._120364_4_ < 0xd) {
                    gTheGame._117132_2_ = 0x520;
                }
                else {
                    gTheGame._117132_2_ = 0x600;
                }
                if (gTheGame._120364_4_ < 0x5) {
                    gTheGame._117216_4_ = 0x5;
                    gTheGame._117196_2_ = 0x200;
                    gTheGame._117204_2_ = 0x200;
                    gTheGame._117192_2_ = 0x2b8;
                    gTheGame._117200_2_ = 0x1bc;
                    gTheGame._117210_2_ =
                         (undefined2)((gTheGame._120364_4_ + -0x1) * 0x10 + 0x400 >> 0x3);
                }
                else if (gTheGame._120364_4_ < 0xd) {
                    gTheGame._117216_4_ = 0x6;
                    gTheGame._117196_2_ = 0x200;
                    gTheGame._117204_2_ = 0x200;
                    gTheGame._117192_2_ = 0x2b8;
                    gTheGame._117200_2_ = 0x1bc;
                    if (gTheGame._120364_4_ < 0x9) {
                        gTheGame._117210_2_ =
                             (undefined2)((gTheGame._120364_4_ + -0x5) * 0x10 >> 0x3);
                    }
                    else {
                        gTheGame._117210_2_ =
                             (undefined2)((gTheGame._120364_4_ + -0x9) * 0x10 + 0x400 >> 0x3);
                    }
                }
                else if (gTheGame._120364_4_ < 0xf) {
                    gTheGame._117216_4_ = 0x5;
                    gTheGame._117196_2_ = 0x200;
                    gTheGame._117204_2_ = 0x200;
                    gTheGame._117192_2_ = 0x2c0;
                    gTheGame._117200_2_ = 0x1bc;
                    if (gTheGame._120364_4_ == 0xd) {
                        gTheGame._117210_2_ = 0x84;
                    }
                    else {
                        gTheGame._117210_2_ = 0x86;
                    }
                }
                else if (gTheGame._120364_4_ < 0x13) {
                    gTheGame._117216_4_ = 0x6;
                    gTheGame._117196_2_ = 0x200;
                    gTheGame._117204_2_ = 0x200;
                    gTheGame._117192_2_ = 0x2c0;
                    gTheGame._117200_2_ = 0x1bc;
                    gTheGame._117210_2_ = (undefined2)((gTheGame._120364_4_ + -0xf) * 0x10 >> 0x3);
                }
                if (gTheGame._19200_4_ == 0x3) {
                    gTheGame._117096_2_ = 0x234;
                    gTheGame._117100_2_ = 0x200;
                    gTheGame._117104_2_ = 0x320;
                    gTheGame._117108_2_ = 0x200;
                    gTheGame._117114_2_ = 0x0;
                    gTheGame._117120_4_ = 0xffffffff;
                    gTheGame._117128_2_ = 0x210;
                    gTheGame._117136_2_ = 0x1bc;
                    gTheGame._117140_2_ = 0x200;
                    gTheGame._117146_2_ = 0x0;
                    gTheGame._117152_4_ = 0x5;
                    gTheGame._117160_2_ = 0x28c;
                    gTheGame._117164_2_ = 0x200;
                    gTheGame._117168_2_ = 0x320;
                    gTheGame._117172_2_ = 0x200;
                    gTheGame._117178_2_ = 0x80;
                    gTheGame._117184_4_ = 0xffffffff;
                    gTheGame._117224_2_ = 0x1f4;
                    gTheGame._117228_2_ = 0x800;
                    gTheGame._117232_2_ = 0x244;
                    gTheGame._117236_2_ = 0x200;
                    gTheGame._117242_2_ = 0x80;
                    gTheGame._117248_4_ = 0x2;
                    return;
                }
                if (gTheGame._19200_4_ < 0x3) {
                    if (gTheGame._19200_4_ == 0x1) {
                        gTheGame._117096_2_ = 0x234;
                        gTheGame._117100_2_ = 0x200;
                        gTheGame._117104_2_ = 0x320;
                        gTheGame._117108_2_ = 0x200;
                        gTheGame._117114_2_ = 0x0;
                        gTheGame._117120_4_ = 0xffffffff;
                        gTheGame._117128_2_ = 0x210;
                        gTheGame._117136_2_ = 0x1bc;
                        gTheGame._117140_2_ = 0x200;
                        gTheGame._117146_2_ = 0x0;
                        gTheGame._117152_4_ = 0x5;
                        gTheGame._117160_2_ = 0x28c;
                        gTheGame._117164_2_ = 0x200;
                        gTheGame._117168_2_ = 0x320;
                        gTheGame._117172_2_ = 0x200;
                        gTheGame._117178_2_ = 0x80;
                        gTheGame._117184_4_ = 0xffffffff;
                        gTheGame._117224_2_ = 0x1f4;
                        gTheGame._117228_2_ = 0x800;
                        gTheGame._117232_2_ = 0x244;
                        gTheGame._117236_2_ = 0x200;
                        gTheGame._117242_2_ = 0x80;
                        gTheGame._117248_4_ = 0x1;
                        return;
                    }
                    if (gTheGame._19200_4_ < 0x1) {
                        gTheGame._117096_2_ = 0x234;
                        gTheGame._117100_2_ = 0x200;
                        gTheGame._117104_2_ = 0x320;
                        gTheGame._117108_2_ = 0x200;
                        gTheGame._117114_2_ = 0x0;
                        gTheGame._117120_4_ = 0xffffffff;
                        gTheGame._117128_2_ = 0x210;
                        gTheGame._117136_2_ = 0x1bc;
                        gTheGame._117140_2_ = 0x200;
                        gTheGame._117146_2_ = 0x0;
                        gTheGame._117152_4_ = 0x5;
                        gTheGame._117160_2_ = 0x28c;
                        gTheGame._117164_2_ = 0x200;
                        gTheGame._117168_2_ = 0x320;
                        gTheGame._117172_2_ = 0x200;
                        gTheGame._117178_2_ = 0x80;
                        gTheGame._117184_4_ = 0xffffffff;
                        gTheGame._117228_2_ = 0x800;
                        gTheGame._117232_2_ = 0x244;
                        gTheGame._117236_2_ = 0x200;
                        return;
                    }
                    gTheGame._117096_2_ = 0x234;
                    gTheGame._117100_2_ = 0x200;
                    gTheGame._117104_2_ = 0x320;
                    gTheGame._117108_2_ = 0x200;
                    gTheGame._117114_2_ = 0x0;
                    gTheGame._117120_4_ = 0xffffffff;
                    gTheGame._117128_2_ = 0x210;
                    gTheGame._117136_2_ = 0x1bc;
                    gTheGame._117140_2_ = 0x200;
                    gTheGame._117146_2_ = 0x0;
                    gTheGame._117152_4_ = 0x5;
                    gTheGame._117160_2_ = 0x28c;
                    gTheGame._117164_2_ = 0x200;
                    gTheGame._117168_2_ = 0x320;
                    gTheGame._117172_2_ = 0x200;
                    gTheGame._117178_2_ = 0x80;
                    gTheGame._117184_4_ = 0xffffffff;
                    gTheGame._117224_2_ = 0x214;
                    gTheGame._117228_2_ = 0x800;
                    gTheGame._117232_2_ = 0x244;
                    gTheGame._117236_2_ = 0x200;
                    gTheGame._117242_2_ = 0x0;
                    gTheGame._117248_4_ = 0x2;
                    return;
                }
                if (gTheGame._19200_4_ == 0x5) {
                    gTheGame._117096_2_ = 0x234;
                    gTheGame._117100_2_ = 0x200;
                    gTheGame._117104_2_ = 0x320;
                    gTheGame._117108_2_ = 0x200;
                    gTheGame._117114_2_ = 0x0;
                    gTheGame._117120_4_ = 0xffffffff;
                    gTheGame._117128_2_ = 0x210;
                    gTheGame._117136_2_ = 0x1bc;
                    gTheGame._117140_2_ = 0x200;
                    gTheGame._117146_2_ = 0x0;
                    gTheGame._117152_4_ = 0x5;
                    gTheGame._117160_2_ = 0x28c;
                    gTheGame._117164_2_ = 0x200;
                    gTheGame._117168_2_ = 0x320;
                    gTheGame._117172_2_ = 0x200;
                    gTheGame._117178_2_ = 0x80;
                    gTheGame._117184_4_ = 0xffffffff;
                    gTheGame._117224_2_ = 0x214;
                    gTheGame._117228_2_ = 0x800;
                    gTheGame._117232_2_ = 0x244;
                    gTheGame._117236_2_ = 0x200;
                    gTheGame._117242_2_ = 0x80;
                    gTheGame._117248_4_ = 0x3;
                    return;
                }
                if (0x4 < gTheGame._19200_4_) {
                    gTheGame._117096_2_ = 0x234;
                    gTheGame._117100_2_ = 0x200;
                    gTheGame._117104_2_ = 0x320;
                    gTheGame._117108_2_ = 0x200;
                    gTheGame._117114_2_ = 0x0;
                    gTheGame._117120_4_ = 0xffffffff;
                    gTheGame._117128_2_ = 0x210;
                    gTheGame._117136_2_ = 0x1bc;
                    gTheGame._117140_2_ = 0x200;
                    gTheGame._117146_2_ = 0x0;
                    gTheGame._117152_4_ = 0x5;
                    gTheGame._117160_2_ = 0x28c;
                    gTheGame._117164_2_ = 0x200;
                    gTheGame._117168_2_ = 0x320;
                    gTheGame._117172_2_ = 0x200;
                    gTheGame._117178_2_ = 0x80;
                    gTheGame._117184_4_ = 0xffffffff;
                    gTheGame._117228_2_ = 0x800;
                    gTheGame._117232_2_ = 0x244;
                    gTheGame._117236_2_ = 0x200;
                    return;
                }
                gTheGame._117096_2_ = 0x234;
                gTheGame._117100_2_ = 0x200;
                gTheGame._117104_2_ = 0x320;
                gTheGame._117108_2_ = 0x200;
                gTheGame._117114_2_ = 0x0;
                gTheGame._117120_4_ = 0xffffffff;
                gTheGame._117128_2_ = 0x210;
                gTheGame._117136_2_ = 0x1bc;
                gTheGame._117140_2_ = 0x200;
                gTheGame._117146_2_ = 0x0;
                gTheGame._117152_4_ = 0x5;
                gTheGame._117160_2_ = 0x28c;
                gTheGame._117164_2_ = 0x200;
                gTheGame._117168_2_ = 0x320;
                gTheGame._117172_2_ = 0x200;
                gTheGame._117178_2_ = 0x80;
                gTheGame._117184_4_ = 0xffffffff;
                gTheGame._117224_2_ = 0x210;
                gTheGame._117228_2_ = 0x800;
                gTheGame._117232_2_ = 0x244;
                gTheGame._117236_2_ = 0x200;
                gTheGame._117242_2_ = 0x0;
                gTheGame._117248_4_ = 0x3;
                return;
            }
            if (gSelection < 0x96) {
                if (gSelection == 0x82) {
                    if (gTheGame._19200_4_ == 0x3) {
                        gTheGame._117184_4_ = 0x2;
                        gTheGame._117178_2_ = 0x80;
                    }
                    else if (gTheGame._19200_4_ < 0x3) {
                        if (gTheGame._19200_4_ == 0x1) {
                            gTheGame._117184_4_ = 0x1;
                            gTheGame._117178_2_ = 0x80;
                        }
                        else if (gTheGame._19200_4_ < 0x1) {
                            if (-0x1 < gTheGame._19200_4_) {
                                gTheGame._117184_4_ = 0x9;
                                gTheGame._117178_2_ = 0x80;
                            }
                        }
                        else {
                            gTheGame._117184_4_ = 0x8;
                            gTheGame._117178_2_ = 0x0;
                        }
                    }
                    else if (gTheGame._19200_4_ == 0x5) {
                        gTheGame._117184_4_ = 0x7;
                        gTheGame._117178_2_ = 0x80;
                    }
                    else if (gTheGame._19200_4_ < 0x5) {
                        gTheGame._117184_4_ = 0x8;
                        gTheGame._117178_2_ = 0x80;
                    }
                    gTheGame._117096_2_ = 0x3a0;
                    gTheGame._117100_2_ = 0x7e0;
                    gTheGame._117104_2_ = 0xa0;
                    gTheGame._117108_2_ = 0x200;
                    gTheGame._117114_2_ = 0x0;
                    gTheGame._117120_4_ = 0x4;
                    gTheGame._117128_2_ = 0x3a0;
                    gTheGame._117132_2_ = 0x7e0;
                    gTheGame._117136_2_ = 0xf8;
                    gTheGame._117140_2_ = 0x100;
                    gTheGame._117146_2_ = 0xc0;
                    gTheGame._117152_4_ = 0x0;
                    gTheGame._117160_2_ = 0x3a4;
                    gTheGame._117164_2_ = 0x7e0;
                    gTheGame._117168_2_ = 0x118;
                    gTheGame._117172_2_ = 0x200;
                    gTheGame._117192_2_ = 0x3d8;
                    gTheGame._117196_2_ = 0x300;
                    gTheGame._117200_2_ = 0x160;
                    gTheGame._117204_2_ = 0x300;
                    gTheGame._117208_2_ = 0x6;
                    return;
                }
                if (gSelection < 0x82) {
                    if (gSelection != 0x78) {
                        return;
                    }
                    gTheGame._117096_2_ = 0x3a0;
                    gTheGame._117100_2_ = 0x7e0;
                    gTheGame._117104_2_ = 0xa0;
                    gTheGame._117108_2_ = 0x200;
                    gTheGame._117114_2_ = 0x0;
                    gTheGame._117120_4_ = 0x4;
                    gTheGame._117128_2_ = 0x3a0;
                    gTheGame._117132_2_ = 0x7e0;
                    gTheGame._117136_2_ = 0xf8;
                    gTheGame._117140_2_ = 0x100;
                    gTheGame._117146_2_ = 0xc0;
                    gTheGame._117152_4_ = 0x0;
                    gTheGame._117160_2_ = 0x3a4;
                    gTheGame._117164_2_ = 0x7e0;
                    gTheGame._117168_2_ = 0x118;
                    gTheGame._117172_2_ = 0x200;
                    gTheGame._117178_2_ = 0x80;
                    gTheGame._117184_4_ = 0x9;
                    gTheGame._117192_2_ = 0x3d8;
                    gTheGame._117196_2_ = 0x300;
                    gTheGame._117200_2_ = 0x160;
                    gTheGame._117204_2_ = 0x300;
                    gTheGame._117208_2_ = 0x6;
                    return;
                }
                if (gSelection != 0x8c) {
                    return;
                }
LAB_00073d58:
                if (gTheGame._19200_4_ == 0x2) {
                    gTheGame._117096_2_ = 0x3a0;
                    gTheGame._117100_2_ = 0x7e0;
                    gTheGame._117104_2_ = 0xa0;
                    gTheGame._117108_2_ = 0x100;
                    gTheGame._117114_2_ = 0x0;
                    gTheGame._117120_4_ = 0x0;
                    gTheGame._117128_2_ = 0x3a0;
                    gTheGame._117132_2_ = 0x7e0;
                    gTheGame._117136_2_ = 0xf4;
                    gTheGame._117140_2_ = 0x100;
                    gTheGame._117146_2_ = 0x40;
                    gTheGame._117152_4_ = 0x0;
                    gTheGame._117160_2_ = 0x3a0;
                    gTheGame._117164_2_ = 0x7e0;
                    gTheGame._117168_2_ = 0x164;
                    gTheGame._117172_2_ = 0x100;
                    gTheGame._117178_2_ = 0x80;
                    gTheGame._117184_4_ = 0x0;
                    gTheGame._117192_2_ = 0x3a0;
                    gTheGame._117196_2_ = 0x7e0;
                    gTheGame._117200_2_ = 0x1e0;
                    gTheGame._117204_2_ = 0x100;
                    gTheGame._117210_2_ = 0xc0;
                    gTheGame._117216_4_ = 0x0;
                    gTheGame._117224_2_ = 0x3a4;
                    gTheGame._117228_2_ = 0x7e0;
                    gTheGame._117232_2_ = 0x200;
                    gTheGame._117236_2_ = 0x200;
                    gTheGame._117242_2_ = 0x0;
                    gTheGame._117248_4_ = 0x2;
                    return;
                }
                if (0x1 < gTheGame._19200_4_) {
                    if (0x3 < gTheGame._19200_4_) {
                        gTheGame._117096_2_ = 0x3a0;
                        gTheGame._117100_2_ = 0x7e0;
                        gTheGame._117104_2_ = 0xa0;
                        gTheGame._117108_2_ = 0x100;
                        gTheGame._117114_2_ = 0x0;
                        gTheGame._117120_4_ = 0x0;
                        gTheGame._117128_2_ = 0x3a0;
                        gTheGame._117132_2_ = 0x7e0;
                        gTheGame._117136_2_ = 0xf4;
                        gTheGame._117140_2_ = 0x100;
                        gTheGame._117146_2_ = 0x40;
                        gTheGame._117152_4_ = 0x0;
                        gTheGame._117160_2_ = 0x3a0;
                        gTheGame._117164_2_ = 0x7e0;
                        gTheGame._117168_2_ = 0x164;
                        gTheGame._117172_2_ = 0x100;
                        gTheGame._117178_2_ = 0x80;
                        gTheGame._117184_4_ = 0x0;
                        gTheGame._117192_2_ = 0x3a0;
                        gTheGame._117196_2_ = 0x7e0;
                        gTheGame._117200_2_ = 0x1e0;
                        gTheGame._117204_2_ = 0x100;
                        gTheGame._117210_2_ = 0xc0;
                        gTheGame._117216_4_ = 0x0;
                        gTheGame._117224_2_ = 0x3a4;
                        gTheGame._117228_2_ = 0x7e0;
                        gTheGame._117232_2_ = 0x200;
                        gTheGame._117236_2_ = 0x200;
                        return;
                    }
                    gTheGame._117096_2_ = 0x3a0;
                    gTheGame._117100_2_ = 0x7e0;
                    gTheGame._117104_2_ = 0xa0;
                    gTheGame._117108_2_ = 0x100;
                    gTheGame._117114_2_ = 0x0;
                    gTheGame._117120_4_ = 0x0;
                    gTheGame._117128_2_ = 0x3a0;
                    gTheGame._117132_2_ = 0x7e0;
                    gTheGame._117136_2_ = 0xf4;
                    gTheGame._117140_2_ = 0x100;
                    gTheGame._117146_2_ = 0x40;
                    gTheGame._117152_4_ = 0x0;
                    gTheGame._117160_2_ = 0x3a0;
                    gTheGame._117164_2_ = 0x7e0;
                    gTheGame._117168_2_ = 0x164;
                    gTheGame._117172_2_ = 0x100;
                    gTheGame._117178_2_ = 0x80;
                    gTheGame._117184_4_ = 0x0;
                    gTheGame._117192_2_ = 0x3a0;
                    gTheGame._117196_2_ = 0x7e0;
                    gTheGame._117200_2_ = 0x1e0;
                    gTheGame._117204_2_ = 0x100;
                    gTheGame._117210_2_ = 0xc0;
                    gTheGame._117216_4_ = 0x0;
                    gTheGame._117224_2_ = 0x3a4;
                    gTheGame._117228_2_ = 0x7e0;
                    gTheGame._117232_2_ = 0x200;
                    gTheGame._117236_2_ = 0x200;
                    gTheGame._117242_2_ = 0x80;
                    gTheGame._117248_4_ = 0x2;
                    return;
                }
                if (gTheGame._19200_4_ == 0x0) {
                    gTheGame._117096_2_ = 0x3a0;
                    gTheGame._117100_2_ = 0x7e0;
                    gTheGame._117104_2_ = 0xa0;
                    gTheGame._117108_2_ = 0x100;
                    gTheGame._117114_2_ = 0x0;
                    gTheGame._117120_4_ = 0x0;
                    gTheGame._117128_2_ = 0x3a0;
                    gTheGame._117132_2_ = 0x7e0;
                    gTheGame._117136_2_ = 0xf4;
                    gTheGame._117140_2_ = 0x100;
                    gTheGame._117146_2_ = 0x40;
                    gTheGame._117152_4_ = 0x0;
                    gTheGame._117160_2_ = 0x3a0;
                    gTheGame._117164_2_ = 0x7e0;
                    gTheGame._117168_2_ = 0x164;
                    gTheGame._117172_2_ = 0x100;
                    gTheGame._117178_2_ = 0x80;
                    gTheGame._117184_4_ = 0x0;
                    gTheGame._117192_2_ = 0x3a0;
                    gTheGame._117196_2_ = 0x7e0;
                    gTheGame._117200_2_ = 0x1e0;
                    gTheGame._117204_2_ = 0x100;
                    gTheGame._117210_2_ = 0xc0;
                    gTheGame._117216_4_ = 0x0;
                    gTheGame._117224_2_ = 0x3a4;
                    gTheGame._117228_2_ = 0x7e0;
                    gTheGame._117232_2_ = 0x200;
                    gTheGame._117236_2_ = 0x200;
                    gTheGame._117242_2_ = 0x0;
                    gTheGame._117248_4_ = 0x1;
                    return;
                }
                if (gTheGame._19200_4_ < 0x0) {
                    gTheGame._117096_2_ = 0x3a0;
                    gTheGame._117100_2_ = 0x7e0;
                    gTheGame._117104_2_ = 0xa0;
                    gTheGame._117108_2_ = 0x100;
                    gTheGame._117114_2_ = 0x0;
                    gTheGame._117120_4_ = 0x0;
                    gTheGame._117128_2_ = 0x3a0;
                    gTheGame._117132_2_ = 0x7e0;
                    gTheGame._117136_2_ = 0xf4;
                    gTheGame._117140_2_ = 0x100;
                    gTheGame._117146_2_ = 0x40;
                    gTheGame._117152_4_ = 0x0;
                    gTheGame._117160_2_ = 0x3a0;
                    gTheGame._117164_2_ = 0x7e0;
                    gTheGame._117168_2_ = 0x164;
                    gTheGame._117172_2_ = 0x100;
                    gTheGame._117178_2_ = 0x80;
                    gTheGame._117184_4_ = 0x0;
                    gTheGame._117192_2_ = 0x3a0;
                    gTheGame._117196_2_ = 0x7e0;
                    gTheGame._117200_2_ = 0x1e0;
                    gTheGame._117204_2_ = 0x100;
                    gTheGame._117210_2_ = 0xc0;
                    gTheGame._117216_4_ = 0x0;
                    gTheGame._117224_2_ = 0x3a4;
                    gTheGame._117228_2_ = 0x7e0;
                    gTheGame._117232_2_ = 0x200;
                    gTheGame._117236_2_ = 0x200;
                    return;
                }
                gTheGame._117096_2_ = 0x3a0;
                gTheGame._117100_2_ = 0x7e0;
                gTheGame._117104_2_ = 0xa0;
                gTheGame._117108_2_ = 0x100;
                gTheGame._117114_2_ = 0x0;
                gTheGame._117120_4_ = 0x0;
                gTheGame._117128_2_ = 0x3a0;
                gTheGame._117132_2_ = 0x7e0;
                gTheGame._117136_2_ = 0xf4;
                gTheGame._117140_2_ = 0x100;
                gTheGame._117146_2_ = 0x40;
                gTheGame._117152_4_ = 0x0;
                gTheGame._117160_2_ = 0x3a0;
                gTheGame._117164_2_ = 0x7e0;
                gTheGame._117168_2_ = 0x164;
                gTheGame._117172_2_ = 0x100;
                gTheGame._117178_2_ = 0x80;
                gTheGame._117184_4_ = 0x0;
                gTheGame._117192_2_ = 0x3a0;
                gTheGame._117196_2_ = 0x7e0;
                gTheGame._117200_2_ = 0x1e0;
                gTheGame._117204_2_ = 0x100;
                gTheGame._117210_2_ = 0xc0;
                gTheGame._117216_4_ = 0x0;
                gTheGame._117224_2_ = 0x3a4;
                gTheGame._117228_2_ = 0x7e0;
                gTheGame._117232_2_ = 0x200;
                gTheGame._117236_2_ = 0x200;
                gTheGame._117242_2_ = 0x80;
                gTheGame._117248_4_ = 0x1;
                return;
            }
            if (gSelection == 0xaa) {
                if (gTheGame._19200_4_ == 0x5) {
                    if (gTheGame._19204_4_ == 0x3) {
                        gTheGame._117248_4_ = 0x7;
                    }
                    else {
                        gTheGame._117248_4_ = 0xa;
                    }
                    gTheGame._117224_2_ = 0x3a4;
                    gTheGame._117232_2_ = 0xbc;
                    gTheGame._117228_2_ = 0x7e0;
                    gTheGame._117236_2_ = 0x200;
                    gTheGame._117242_2_ = 0x0;
                }
                if (gTheGame._19200_4_ == 0x5) {
                    gTheGame._117096_2_ = 0x3a0;
                    gTheGame._117100_2_ = 0x7e0;
                    gTheGame._117104_2_ = 0xa0;
                    gTheGame._117108_2_ = 0x100;
                    gTheGame._117114_2_ = 0x80;
                    gTheGame._117120_4_ = 0x4;
                    gTheGame._117128_2_ = 0x3a0;
                    gTheGame._117132_2_ = 0x7e0;
                    gTheGame._117136_2_ = 0xf4;
                    gTheGame._117140_2_ = 0x100;
                    gTheGame._117146_2_ = 0x40;
                    gTheGame._117152_4_ = 0x0;
                    gTheGame._117160_2_ = 0x3a0;
                    gTheGame._117164_2_ = 0x7e0;
                    gTheGame._117168_2_ = 0x164;
                    gTheGame._117172_2_ = 0x100;
                    gTheGame._117178_2_ = 0x80;
                    gTheGame._117184_4_ = 0x0;
                    return;
                }
                gTheGame._117096_2_ = 0x3a0;
                gTheGame._117100_2_ = 0x7e0;
                gTheGame._117104_2_ = 0xa0;
                gTheGame._117108_2_ = 0x100;
                gTheGame._117114_2_ = 0x80;
                gTheGame._117120_4_ = 0x4;
                gTheGame._117128_2_ = 0x3a0;
                gTheGame._117132_2_ = 0x7e0;
                gTheGame._117136_2_ = 0xf4;
                gTheGame._117140_2_ = 0x100;
                gTheGame._117146_2_ = 0x40;
                gTheGame._117152_4_ = 0x0;
                gTheGame._117160_2_ = 0x3a0;
                gTheGame._117164_2_ = 0x7e0;
                gTheGame._117168_2_ = 0x164;
                gTheGame._117172_2_ = 0x100;
                gTheGame._117178_2_ = 0x80;
                gTheGame._117184_4_ = 0x0;
                gTheGame._117192_2_ = 0x3a0;
                gTheGame._117196_2_ = 0x7e0;
                gTheGame._117200_2_ = 0x1e0;
                gTheGame._117204_2_ = 0x100;
                gTheGame._117210_2_ = 0xc0;
                gTheGame._117216_4_ = 0x0;
                return;
            }
            if (0xa9 < gSelection) {
                return;
            }
            if (gSelection != 0xa0) {
                return;
            }
        }
        else {
            if (gSelection == 0xd2) {
                return;
            }
            if (0xd1 < gSelection) {
                return;
            }
            if (gSelection != 0xc8) {
                if (0xc7 < gSelection) {
                    return;
                }
                if (gSelection != 0xbe) {
                    return;
                }
                goto LAB_00073d58;
            }
        }
    }
    if (gTheGame._19172_4_ == 0x0) {
        gTheGame._117120_4_ = 0xffffffff;
    }
    else {
        gTheGame._117120_4_ = 0x64;
    }
    if (gTheGame._41636_4_ == 0x0) {
        gTheGame._117184_4_ = 0xffffffff;
    }
    else {
        gTheGame._117184_4_ = 0xc8;
    }
    gTheGame._117216_4_ = 0xffffffff;
    gTheGame._117210_2_ = 0x80;
    gTheGame._117204_2_ = 0x200;
    gTheGame._117200_2_ = 0x340;
    gTheGame._117196_2_ = 0x200;
    gTheGame._117192_2_ = 0x28c;
    gTheGame._117178_2_ = 0x80;
    gTheGame._117172_2_ = 0x200;
    gTheGame._117168_2_ = 0x2fc;
    gTheGame._117164_2_ = 0x200;
    gTheGame._117160_2_ = 0x28c;
    gTheGame._117152_4_ = 0xffffffff;
    gTheGame._117146_2_ = 0x0;
    gTheGame._117140_2_ = 0x200;
    gTheGame._117136_2_ = 0x340;
    gTheGame._117132_2_ = 0x200;
    gTheGame._117128_2_ = 0x234;
    gTheGame._117114_2_ = 0x0;
    gTheGame._117108_2_ = 0x200;
    gTheGame._117104_2_ = 0x2fc;
    gTheGame._117100_2_ = 0x200;
    gTheGame._117096_2_ = 0x234;
    return;
}



void Init2DClearLine(int param_1,undefined4 param_2,int param_3)

{
    undefined2 *puVar1;
    int iVar2;
    int iVar3;
    short *psVar4;
    short sVar5;
    short sVar6;
    short sVar7;
    short sVar8;
    short sVar9;
    short sVar10;
    short sVar11;
    int iVar12;
    
    iVar12 = 0x6;
    iVar3 = 0x0;
    sVar5 = 0x1c8;
    sVar6 = 0x60;
    sVar7 = 0x2f0;
    sVar11 = 0x70;
    sVar10 = 0x180;
    sVar9 = 0x290;
    sVar8 = 0x3a0;
    iVar2 = param_1;
    do {
        psVar4 = (short *)(iVar2 + 0x2550);
        if (gTheGame._120328_4_ == 0x1) {
            *psVar4 = sVar5;
            *(undefined2 *)(iVar2 + 0x2558) = 0x340;
        }
        else if (gTheGame._120328_4_ == 0x2) {
            if (param_3 == 0x0) {
                *psVar4 = sVar6;
            }
            else {
                *psVar4 = sVar7;
            }
            *(undefined2 *)(iVar2 + 0x2558) = 0x340;
        }
        else {
            if (param_3 == 0x0) {
                *psVar4 = sVar11;
            }
            else if (param_3 == 0x1) {
                *psVar4 = sVar10;
            }
            else if (param_3 == 0x2) {
                *psVar4 = sVar9;
            }
            else if (param_3 == 0x3) {
                *psVar4 = sVar8;
            }
            *(undefined2 *)(iVar2 + 0x2558) = 0x330;
        }
        *(undefined2 *)(iVar2 + 0x2552) = 0x38f;
        *(undefined2 *)(iVar2 + 0x255a) = 0x400;
        *(undefined2 *)(iVar2 + 0x2554) = 0x200;
        *(undefined2 *)(iVar2 + 0x255c) = 0x200;
        *(undefined2 *)(iVar2 + 0x2560) = 0x8;
        *(undefined2 *)(iVar2 + 0x2562) = 0x0;
        if (0x2 < gTheGame._120328_4_) {
            *(undefined2 *)(iVar2 + 0x2552) = 0x666;
            *(undefined2 *)(iVar2 + 0x255a) = 0x666;
        }
        iVar2 += 0x50;
        sVar5 += 0x48;
        sVar6 += 0x48;
        sVar7 += 0x48;
        sVar11 += 0x28;
        sVar10 += 0x28;
        sVar9 += 0x28;
        sVar8 += 0x28;
        iVar3 += 0x1;
        iVar12 += -0x1;
    } while (iVar12 != 0x0);
    puVar1 = (undefined2 *)(param_1 + iVar3 * 0x50 + 0x2550);
    if (gTheGame._120328_4_ == 0x1) {
        *puVar1 = 0x378;
        puVar1[0x9] = 0x2;
        puVar1[0x4] = 0x340;
    }
    else if (gTheGame._120328_4_ == 0x2) {
        if (param_3 == 0x0) {
            *puVar1 = 0x210;
            puVar1[0x9] = 0x2;
        }
        else {
            *puVar1 = 0x230;
            puVar1[0x9] = 0x82;
        }
        puVar1[0x4] = 0x340;
    }
    else {
        if (param_3 == 0x0) {
            *puVar1 = 0x160;
            puVar1[0x9] = 0x2;
        }
        else if (param_3 == 0x1) {
            *puVar1 = 0x110;
            puVar1[0x9] = 0x82;
        }
        else if (param_3 == 0x2) {
            *puVar1 = 0x380;
            puVar1[0x9] = 0x2;
        }
        else if (param_3 == 0x3) {
            *puVar1 = 0x330;
            puVar1[0x9] = 0x82;
        }
        puVar1[0x4] = 0x330;
    }
    puVar1[0x2] = 0x5e0;
    puVar1[0x6] = 0x200;
    puVar1[0x8] = 0x8;
    return;
}



void Init2DSmallStars(int param_1)

{
    undefined4 uVar1;
    int iVar2;
    undefined4 extraout_r4;
    uint uVar3;
    int iVar4;
    int iVar5;
    undefined4 *puVar6;
    byte *pbVar7;
    undefined1 *puVar8;
    undefined1 *puVar9;
    undefined4 *puVar10;
    byte *pbVar11;
    undefined1 *puVar12;
    undefined1 *puVar13;
    undefined4 local_a4;
    undefined4 local_a0;
    undefined4 local_9c;
    undefined4 local_98;
    undefined4 local_94;
    undefined4 local_90;
    undefined2 local_8c;
    undefined4 local_88;
    undefined4 local_84;
    undefined4 local_80;
    undefined4 local_7c;
    undefined4 local_78;
    undefined4 local_74;
    undefined4 local_70;
    undefined4 local_6c;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined2 local_4c;
    undefined local_4a;
    
    uVar3 = 0x0;
    local_88 = 0x10a01828;
    local_84 = 0xb81818a8;
    local_80 = 0x1262f220;
    local_7c = 0x30c02d4a;
    local_78 = 0xda1e25b5;
    local_74 = 0x255aea29;
    local_70 = 0x38c8185b;
    local_6c = 0xeb3040d0;
    local_68 = 0x5010a055;
    local_64 = 0x48d8682a;
    local_60 = 0xba7019a9;
    local_5c = 0x7837c778;
    local_58 = 0x25b5263a;
    local_54 = 0xca8040d0;
    local_50 = 0x6d58e877;
    local_4c = 0x898;
    local_4a = 0x77;
    local_94 = 0x3060406;
    local_90 = 0x5020302;
    local_8c = 0x401;
    local_a4 = 0x20406;
    local_a0 = 0x80828486;
    local_9c = 0x20406;
    local_98 = 0x80828486;
    pon_osGetTime();
    puVar8 = gTheGame;
    pbVar7 = (byte *)((int)&local_88 + param_1);
    puVar6 = &local_88;
    iVar5 = 0x0;
    puVar9 = puVar8;
    gTheGame._120336_4_ = extraout_r4;
    do {
        iVar4 = 0x0;
        puVar10 = puVar6;
        pbVar11 = pbVar7;
        puVar12 = puVar8;
        puVar13 = puVar9;
        do {
            if (param_1 == 0x0) {
                *(ushort *)(puVar12 + 0x3f10) = (*pbVar11 + 0x16) * 0x4;
            }
            else if (param_1 == 0x1) {
                *(ushort *)(puVar12 + 0x3f10) = (*pbVar11 + 0x2a) * 0x4;
            }
            *(ushort *)(puVar12 + 0x3f18) = (*(byte *)((int)puVar10 + 0x2) + 0x1c) * 0x4;
            uVar1 = AnimationRandom(0x4);
            *(undefined4 *)(puVar13 + 0x1c) = uVar1;
            uVar1 = AnimationRandom(0x4);
            *(undefined4 *)(puVar13 + 0x24) = uVar1;
            *(undefined4 *)(puVar13 + 0x28) = 0x0;
            iVar2 = AnimationRandom(0xa);
            *(uint *)(puVar13 + 0xc) = (uint)*(byte *)((int)&local_94 + iVar2);
            if (uVar3 == (((int)uVar3 >> 0x1) + (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0)) *
                         0x2) {
                *(undefined4 *)(puVar13 + 0x14) = 0x1;
            }
            else {
                *(undefined4 *)(puVar13 + 0x14) = 0x2;
            }
            if (*(int *)(puVar13 + 0x14) == 0x1) {
                *(undefined2 *)(puVar12 + 0x3f12) = 0x400;
                *(undefined2 *)(puVar12 + 0x3f14) = 0x180;
                *(undefined2 *)(puVar12 + 0x3f1a) = 0x400;
                *(undefined2 *)(puVar12 + 0x3f1c) = 0x200;
            }
            else {
                *(undefined2 *)(puVar12 + 0x3f12) = 0x1000;
                *(undefined2 *)(puVar12 + 0x3f14) = 0x400;
                *(undefined2 *)(puVar12 + 0x3f1a) = 0x400;
                *(undefined2 *)(puVar12 + 0x3f1c) = 0x180;
            }
            *(undefined2 *)(puVar12 + 0x3f20) = 0x8;
            uVar3 += 0x1;
            pbVar11 = pbVar11 + 0x3;
            puVar10 = (undefined4 *)((int)puVar10 + 0x3);
            pbVar7 = pbVar7 + 0x3;
            puVar6 = (undefined4 *)((int)puVar6 + 0x3);
            *(ushort *)(puVar12 + 0x3f22) =
                 (ushort)*(byte *)((int)&local_a4 +
                                  *(int *)(puVar13 + 0x1c) * 0x4 + *(int *)(puVar13 + 0x24));
            if (0x14 < (int)uVar3) {
                return;
            }
            iVar4 += 0x1;
            puVar13 = puVar13 + 0x2c;
            puVar12 = puVar12 + 0x18;
        } while (iVar4 < 0x6);
        iVar5 += 0x1;
        puVar9 = puVar9 + 0x318;
        puVar8 = puVar8 + 0x90;
        if (0xb < iVar5) {
            return;
        }
    } while( true );
}



void Init2DCircleStars(int param_1,int param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    undefined4 *puVar7;
    int iVar8;
    undefined4 *puVar9;
    undefined4 *puVar10;
    
    puVar1 = (undefined4 *)(gTheGame + 0x57c0);
    iVar3 = 0x0;
    iVar5 = 0x0;
    iVar6 = 0x0;
    puVar7 = puVar1;
    do {
        iVar4 = 0x0;
        iVar8 = iVar6;
        puVar9 = puVar1;
        puVar10 = puVar7;
        do {
            if (gSelection == 0x96) {
                if (param_1 == 0x0) {
                    puVar10[0x3] = 0x91;
                }
                else {
                    puVar10[0x3] = 0xa7;
                }
                puVar10[0x1] = 0xcb;
            }
            else if (((gSelection == 0xc8) || (gSelection == 0xa0)) || (gSelection == 0xb4)) {
                if (param_1 == 0x0) {
                    puVar10[0x3] = 0x91;
                }
                else {
                    puVar10[0x3] = 0xa7;
                }
                if (param_2 == 0x0) {
                    puVar10[0x1] = 0xc2;
                }
                else {
                    puVar10[0x1] = 0xd3;
                }
            }
            *(short *)(puVar9 + 0xfc4) = (short)(puVar10[0x3] << 0x2);
            *(short *)(puVar9 + 0xfc6) = (short)(puVar10[0x1] << 0x2);
            puVar10[0x7] = 0x0;
            uVar2 = AnimationRandom(0x4);
            puVar10[0x9] = uVar2;
            iVar3 += 0x1;
            puVar10[0xa] = 0x0;
            puVar10[0x5] = 0x2;
            puVar10[0x6] = 0x0;
            iVar6 += 0x1e;
            *puVar10 = 0x0;
            puVar10[0x8] = iVar8;
            iVar8 += 0x1e;
            *(undefined2 *)((int)puVar9 + 0x3f12) = 0x1000;
            *(undefined2 *)(puVar9 + 0xfc5) = 0x400;
            *(undefined2 *)((int)puVar9 + 0x3f1a) = 0x400;
            *(undefined2 *)(puVar9 + 0xfc7) = 0x180;
            *(undefined2 *)(puVar9 + 0xfc8) = 0x8;
            *(undefined2 *)((int)puVar9 + 0x3f22) = 0x0;
            if (0xb < iVar3) {
                return;
            }
            iVar4 += 0x1;
            puVar10 = puVar10 + 0xb;
            puVar9 = puVar9 + 0x6;
        } while (iVar4 < 0x6);
        iVar5 += 0x1;
        puVar7 = puVar7 + 0xc6;
        puVar1 = puVar1 + 0x24;
        if (0xb < iVar5) {
            return;
        }
    } while( true );
}



void Init2DGameOverSmoke(int param_1,int param_2)

{
    int iVar1;
    short *psVar2;
    short sVar3;
    short sVar4;
    short sVar5;
    short sVar6;
    short sVar7;
    short sVar8;
    short sVar9;
    int iVar10;
    
    iVar10 = 0x32;
    iVar1 = 0x0;
    sVar3 = 0x1c8;
    sVar4 = 0x60;
    sVar5 = 0x2f0;
    sVar6 = 0x70;
    sVar9 = 0x180;
    sVar8 = 0x290;
    sVar7 = 0x3a0;
    while( true ) {
        *(undefined4 *)(param_1 + 0x35b0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x35b4) = 0xffffffff;
        psVar2 = (short *)(param_1 + 0x35c8);
        if (gTheGame._120328_4_ == 0x1) {
            *psVar2 = sVar3;
            *(undefined2 *)(param_1 + 0x35d0) = 0x3c;
        }
        else if (gTheGame._120328_4_ == 0x2) {
            if (param_2 == 0x0) {
                *psVar2 = sVar4;
            }
            else {
                *psVar2 = sVar5;
            }
            *(undefined2 *)(param_1 + 0x35d0) = 0x3c;
        }
        else {
            if (param_2 == 0x0) {
                *psVar2 = sVar6;
            }
            else if (param_2 == 0x1) {
                *psVar2 = sVar9;
            }
            else if (param_2 == 0x2) {
                *psVar2 = sVar8;
            }
            else if (param_2 == 0x3) {
                *psVar2 = sVar7;
            }
            *(undefined2 *)(param_1 + 0x35d0) = 0x138;
        }
        *(undefined2 *)(param_1 + 0x35ca) = 0x2ae;
        *(undefined2 *)(param_1 + 0x35cc) = 0x200;
        *(undefined2 *)(param_1 + 0x35ce) = 0x0;
        *(undefined2 *)(param_1 + 0x35d2) = 0x400;
        *(undefined2 *)(param_1 + 0x35d4) = 0x200;
        *(undefined2 *)(param_1 + 0x35d6) = 0x0;
        *(undefined2 *)(param_1 + 0x35d8) = 0x8;
        *(undefined2 *)(param_1 + 0x35da) = 0x6;
        *(undefined *)(param_1 + 0x35dc) = 0x4;
        *(undefined *)(param_1 + 0x35dd) = 0x1;
        *(undefined *)(param_1 + 0x35de) = 0x0;
        *(undefined *)(param_1 + 0x35df) = 0x0;
        if (0x2 < gTheGame._120328_4_) {
            *(undefined2 *)(param_1 + 0x35ca) = 0x4d7;
            *(undefined2 *)(param_1 + 0x35d2) = 0x48f;
        }
        iVar1 += 0x1;
        sVar3 += 0x48;
        sVar4 += 0x48;
        sVar5 += 0x48;
        sVar6 += 0x28;
        sVar9 += 0x28;
        sVar8 += 0x28;
        sVar7 += 0x28;
        if (0x5 < iVar1) break;
        param_1 += 0x30;
        iVar10 += -0x1;
        if (iVar10 == 0x0) {
            return;
        }
    }
    return;
}



void Init2DTetrisTMEM(int param_1,int param_2)

{
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0x0:
        goto switchD_00074dd8_caseD_0;
    case 0x1:
        *(undefined2 *)(param_2 + 0x12) = 0x0;
        return;
    case 0x2:
        *(undefined2 *)(param_2 + 0x12) = 0x2;
        return;
    case 0x3:
        *(undefined2 *)(param_2 + 0x12) = 0x4;
        return;
    case 0x4:
        *(undefined2 *)(param_2 + 0x12) = 0x6;
        return;
    case 0x5:
        *(undefined2 *)(param_2 + 0x12) = 0x80;
        return;
    case 0x6:
        *(undefined2 *)(param_2 + 0x12) = 0x82;
        return;
    case 0x7:
        *(undefined2 *)(param_2 + 0x12) = 0x84;
        return;
    case 0x8:
        *(undefined2 *)(param_2 + 0x12) = 0x86;
switchD_00074dd8_caseD_0:
        return;
    default:
        return;
    }
}



void Init2DComboTMEM(int param_1)

{
    uint uVar1;
    int iVar2;
    undefined2 *puVar3;
    
    if (*(int *)(param_1 + 0x8) < 0x46) {
        uVar1 = *(int *)(param_1 + 0x8) + 0x4;
        iVar2 = uVar1 + (((int)uVar1 >> 0x3) + (uint)((int)uVar1 < 0x0 && (uVar1 & 0x7) != 0x0)) *
                        -0x8;
    }
    else {
        iVar2 = -0x1;
    }
    puVar3 = (undefined2 *)(param_1 + 0x3a);
    switch(iVar2) {
    case 0x0:
        *puVar3 = 0x0;
        return;
    case 0x1:
        *puVar3 = 0x2;
        return;
    case 0x2:
        *puVar3 = 0x4;
        return;
    case 0x3:
        *puVar3 = 0x6;
        return;
    case 0x4:
        *puVar3 = 0x80;
        return;
    case 0x5:
        *puVar3 = 0x82;
        return;
    case 0x6:
        *puVar3 = 0x84;
        return;
    case 0x7:
        *puVar3 = 0x86;
        return;
    default:
        *puVar3 = 0x6;
        return;
    }
}



void Init2DChainTMEM(int param_1)

{
    uint uVar1;
    int iVar2;
    undefined2 *puVar3;
    
    uVar1 = *(uint *)(param_1 + 0x8);
    if ((int)uVar1 < 0x63) {
        iVar2 = uVar1 + (((int)uVar1 >> 0x3) + (uint)((int)uVar1 < 0x0 && (uVar1 & 0x7) != 0x0)) *
                        -0x8;
    }
    else {
        iVar2 = -0x1;
    }
    puVar3 = (undefined2 *)(param_1 + 0x3a);
    switch(iVar2) {
    case 0x0:
        *puVar3 = 0x86;
        return;
    case 0x1:
        *puVar3 = 0x0;
        return;
    case 0x2:
        *puVar3 = 0x2;
        return;
    case 0x3:
        *puVar3 = 0x4;
        return;
    case 0x4:
        *puVar3 = 0x6;
        return;
    case 0x5:
        *puVar3 = 0x80;
        return;
    case 0x6:
        *puVar3 = 0x82;
        return;
    case 0x7:
        *puVar3 = 0x84;
        return;
    default:
        *puVar3 = 0x6;
        return;
    }
}



void Init2DAttackTMEM(int param_1)

{
    int iVar1;
    int iVar2;
    
    iVar2 = ReturnAttackTexValue(0x0);
    iVar1 = iVar2 / 0xa + (iVar2 >> 0x1f);
    switch(iVar2 + (iVar1 - (iVar1 >> 0x1f)) * -0xa) {
    case 0x0:
        *(undefined2 *)(param_1 + 0x12) = 0x0;
        break;
    case 0x1:
        *(undefined2 *)(param_1 + 0x12) = 0x2;
        break;
    case 0x2:
        *(undefined2 *)(param_1 + 0x12) = 0x4;
        break;
    case 0x3:
        *(undefined2 *)(param_1 + 0x12) = 0x6;
        break;
    case 0x4:
        *(undefined2 *)(param_1 + 0x12) = 0x80;
        break;
    case 0x5:
        *(undefined2 *)(param_1 + 0x12) = 0x82;
        break;
    case 0x6:
        *(undefined2 *)(param_1 + 0x12) = 0x84;
        break;
    case 0x7:
        *(undefined2 *)(param_1 + 0x12) = 0x86;
    }
    return;
}



void Init2DBrickTMEM(int param_1)

{
    *(undefined2 *)(param_1 + 0x34) = 0x280;
    *(undefined2 *)(param_1 + 0x32) = 0x400;
    *(undefined2 *)(param_1 + 0x40) = 0x10;
    *(undefined *)(param_1 + 0x44) = 0x0;
    *(undefined *)(param_1 + 0x45) = 0x2;
    if (true) {
        switch(*(undefined4 *)(param_1 + 0x4)) {
        case 0x1:
            *(undefined2 *)(param_1 + 0x34) = 0x300;
            *(undefined2 *)(param_1 + 0x42) = 0x0;
            return;
        case 0x2:
            *(undefined2 *)(param_1 + 0x34) = 0x200;
            *(undefined2 *)(param_1 + 0x42) = 0x6;
            return;
        case 0x3:
            *(undefined2 *)(param_1 + 0x34) = 0x300;
            *(undefined2 *)(param_1 + 0x42) = 0xa;
            return;
        case 0x4:
        case 0xa:
        case 0x10:
            *(undefined2 *)(param_1 + 0x42) = 0x105;
            return;
        case 0x9:
        case 0xf:
        case 0x15:
            *(undefined2 *)(param_1 + 0x42) = 0x100;
            return;
        case 0xb:
        case 0x11:
            *(undefined2 *)(param_1 + 0x42) = 0x10a;
            return;
        case 0xc:
        case 0x12:
            *(undefined2 *)(param_1 + 0x42) = 0x0;
            return;
        case 0xd:
        case 0x13:
            *(undefined2 *)(param_1 + 0x42) = 0x5;
            return;
        case 0xe:
        case 0x14:
            *(undefined2 *)(param_1 + 0x42) = 0xa;
            return;
        }
    }
    *(undefined2 *)(param_1 + 0x42) = 0x10a;
    return;
}



void Init2DFaceTMEM(int param_1)

{
    if (*(int *)(param_1 + 0x4) < 0xb) {
        *(undefined4 *)(param_1 + 0x20) = 0x1e;
        *(undefined4 *)(param_1 + 0x10) = 0xfffffff6;
        *(undefined2 *)(param_1 + 0x42) = 0x0;
    }
    else if (gCounter ==
             (((int)gCounter >> 0x1) + (uint)((int)gCounter < 0x0 && (gCounter & 0x1) != 0x0)) * 0x2
            ) {
        *(undefined4 *)(param_1 + 0x20) = 0x1f;
        *(undefined4 *)(param_1 + 0x10) = 0xfffffff6;
        *(undefined2 *)(param_1 + 0x42) = 0x2;
    }
    else {
        *(undefined4 *)(param_1 + 0x20) = 0x20;
        *(undefined4 *)(param_1 + 0x10) = 0xffffff6a;
        *(undefined2 *)(param_1 + 0x42) = 0x4;
    }
    if (gTheGame._120328_4_ < 0x3) {
        return;
    }
    *(undefined2 *)(param_1 + 0x32) = 0x666;
    *(undefined2 *)(param_1 + 0x3a) = 0x666;
    return;
}

