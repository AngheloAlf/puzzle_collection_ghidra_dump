

void InitPause(void)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    undefined1 *puVar5;
    
    iVar1 = gc_pause1;
    iVar4 = 0x0;
    puVar5 = gTheGame;
    gTheGame._119576_4_ = 0x0;
    gTheGame._119616_4_ = 0x0;
    iVar2 = gc_pause1 + 0x1f00;
    iVar3 = gc_pause1 + 0x800;
    gTheGame._119656_4_ = 0x0;
    gTheGame._119696_4_ = 0x0;
    gTheGame._119736_4_ = 0x0;
    gTheGame._119776_4_ = 0x0;
    gTheGame._119816_4_ = 0x0;
    gTheGame._119856_4_ = 0x0;
    do {
        *(undefined2 *)(puVar5 + 0x1d308) = 0x0;
        *(undefined2 *)(puVar5 + 0x1d30c) = 0xfd80;
        *(undefined2 *)(puVar5 + 0x1d30a) = 0x200;
        *(undefined2 *)(puVar5 + 0x1d30e) = 0x200;
        *(undefined2 *)(puVar5 + 0x1d310) = 0x0;
        *(undefined2 *)(puVar5 + 0x1d314) = 0xfd80;
        *(undefined2 *)(puVar5 + 0x1d31c) = 0xfff4;
        puVar5[0x1d31e] = 0x2;
        puVar5[0x1d31f] = 0x1;
        *(undefined2 *)(puVar5 + 0x1d320) = 0x0;
        *(undefined2 *)(puVar5 + 0x1d322) = 0x0;
        if (iVar4 < 0x4) {
            *(undefined2 *)(puVar5 + 0x1d312) = 0x40;
            *(undefined2 *)(puVar5 + 0x1d316) = 0x40;
            *(int *)(puVar5 + 0x1d318) = iVar1;
        }
        else if ((gSelection == 0xbe) || (gSelection < 0x83)) {
            *(undefined2 *)(puVar5 + 0x1d312) = 0xf4;
            *(undefined2 *)(puVar5 + 0x1d316) = 0xf4;
            *(int *)(puVar5 + 0x1d318) = iVar2;
        }
        else {
            *(undefined2 *)(puVar5 + 0x1d312) = 0xb8;
            *(undefined2 *)(puVar5 + 0x1d316) = 0xb8;
            *(int *)(puVar5 + 0x1d318) = iVar3;
        }
        pon_guS2DInitBg();
        iVar4 += 0x1;
        puVar5 = puVar5 + 0x28;
    } while (iVar4 < 0x8);
    if (gTheGame._120328_4_ == 0x1) {
        gTheGame._119616_4_ = 0x0;
    }
    gTheGame._120040_4_ = 0x30;
    gTheGame._120044_4_ = iVar1 + 0x3d80;
    gTheGame._120048_2_ = 0x100;
    gTheGame._120050_2_ = 0xff;
    gTheGame._120052_2_ = 0x0;
    gTheGame._120054_2_ = 0x0;
    gTheGame._120056_4_ = 0xffffffff;
    gTheGame._120060_4_ = 0x0;
    gTheGame._117068_2_ = 0xe0;
    gTheGame._117066_2_ = 0x400;
    gTheGame._117070_2_ = 0x0;
    gTheGame._117076_2_ = 0x100;
    gTheGame._117074_2_ = 0x400;
    gTheGame._117078_2_ = 0x0;
    gTheGame._117080_2_ = 0x8;
    gTheGame._117082_2_ = 0x0;
    gTheGame[117084] = 0x2;
    gTheGame[117085] = 0x1;
    gTheGame[117086] = 0x0;
    gTheGame[117087] = 0x0;
    if (gTheGame._120328_4_ == 0x1) {
        gTheGame._119564_2_ = 0x228;
        gTheGame._119572_2_ = 0x140;
    }
    else if (gTheGame._120328_4_ == 0x2) {
        gTheGame._119564_2_ = 0xc0;
        gTheGame._119572_2_ = 0x140;
        gTheGame._119604_2_ = 0x354;
        gTheGame._119612_2_ = 0x140;
    }
    else {
        gTheGame._119564_2_ = 0x70;
        gTheGame._119572_2_ = 0x1a4;
        gTheGame._119604_2_ = 0x180;
        gTheGame._119612_2_ = 0x1a4;
        gTheGame._119644_2_ = 0x290;
        gTheGame._119652_2_ = 0x1a4;
        gTheGame._119684_2_ = 0x3a0;
        gTheGame._119692_2_ = 0x1a4;
    }
    if (gTheGame._120332_4_ == 0x2) {
        gTheGame._119592_4_ = 0x0;
        gTheGame._119588_2_ = 0x400;
        gTheGame._119590_2_ = 0x400;
        gTheGame._119632_4_ = 0x0;
        gTheGame._119628_2_ = 0x400;
        gTheGame._119630_2_ = 0x400;
        gTheGame._119672_4_ = 0x0;
        gTheGame._119668_2_ = 0x400;
        gTheGame._119670_2_ = 0x400;
        gTheGame._119712_4_ = 0x0;
        gTheGame._119708_2_ = 0x400;
        gTheGame._119710_2_ = 0x400;
        gTheGame._119752_4_ = 0x0;
        gTheGame._119748_2_ = 0x400;
        gTheGame._119750_2_ = 0x400;
        gTheGame._119792_4_ = 0x0;
        gTheGame._119788_2_ = 0x400;
        gTheGame._119790_2_ = 0x400;
        gTheGame._119832_4_ = 0x0;
        gTheGame._119828_2_ = 0x400;
        gTheGame._119830_2_ = 0x400;
        gTheGame._119872_4_ = 0x0;
        gTheGame._119868_2_ = 0x400;
        gTheGame._119870_2_ = 0x400;
    }
    return;
}



void InitGameOver(void)

{
    endSegment = nextSegment;
    Pon_DVDRead_endingX(gTheGame._120328_4_,gTheGame._120332_4_);
    if (gTheGame._120332_4_ == 0x1) {
        if (gTheGame._120328_4_ == 0x1) {
            endSegment = gc_ending1;
        }
        else if (gTheGame._120328_4_ == 0x2) {
            endSegment = gc_ending2;
        }
        else {
            endSegment = gc_ending2;
        }
    }
    else if (gTheGame._120328_4_ == 0x1) {
        endSegment = gc_ending3;
    }
    else if (gTheGame._120328_4_ == 0x2) {
        endSegment = gc_ending4;
    }
    return;
}



void LoadGameOver2D(void)

{
    undefined2 uVar1;
    undefined2 uVar2;
    undefined2 uVar3;
    undefined2 uVar4;
    undefined2 uVar5;
    undefined1 *puVar6;
    int iVar7;
    int *piVar8;
    int *piVar9;
    int iVar10;
    int *piVar11;
    int *piVar12;
    int *piVar13;
    int *piVar14;
    int iVar15;
    int *piVar16;
    int *piVar17;
    undefined1 *puVar18;
    undefined1 *puVar19;
    int *piVar20;
    int *piVar21;
    int iVar22;
    int iVar23;
    int iVar24;
    int iVar25;
    undefined1 *puVar26;
    int iVar27;
    int local_e0 [0x4];
    int local_d0 [0x4];
    int local_c0 [0x4];
    int local_b0 [0x4];
    int local_a0 [0x4];
    int local_90 [0x4];
    int local_80 [0x5];
    int local_6c;
    undefined1 *local_68;
    undefined4 *local_64;
    undefined4 *local_60;
    undefined4 *local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    
    iVar27 = endSegment;
    iVar10 = 0x0;
    iVar7 = 0x0;
    iVar24 = 0x0;
    iVar15 = 0x0;
    iVar22 = 0x0;
    gTheGame._119576_4_ = 0x0;
    gTheGame._119616_4_ = 0x0;
    gTheGame._119656_4_ = 0x0;
    gTheGame._119696_4_ = 0x0;
    gTheGame._119736_4_ = 0x0;
    gTheGame._119776_4_ = 0x0;
    gTheGame._119816_4_ = 0x0;
    gTheGame._119856_4_ = 0x0;
    gTheGame._119896_4_ = 0x0;
    gTheGame._119936_4_ = 0x0;
    gTheGame._119976_4_ = 0x0;
    gTheGame._120016_4_ = 0x0;
    if (gTheGame._120328_4_ == 0x1) {
        if (gSelection == 0x8c) {
            alphaR._0_1_ = 0x40;
            alphaG._0_1_ = 0x18;
            alphaB._0_1_ = 0x78;
            iVar15 = 0xce80;
            iVar7 = 0x71;
            iVar10 = 0x67;
            iVar24 = 0x0;
            if ((0x752f < gTheGame._19084_4_) && (gTheGame._120360_4_ != 0x0)) {
                iVar22 = -0x1;
            }
        }
        else if (gSelection < 0x8c) {
            if (gSelection == 0x82) {
                if (gTheGame._89856_4_ == 0x7) {
                    iVar27 = CheckPlayerPuzzleRound(gTheGame._120360_4_,gTheGame._120364_4_);
                    if (iVar27 == 0x0) {
                        alphaR._0_1_ = 0x44;
                        alphaG._0_1_ = 0x2;
                        alphaB._0_1_ = 0x1b;
                        iVar15 = 0x10200;
                        iVar10 = 0x5e;
                        iVar24 = 0x3380;
                    }
                    else {
                        alphaR._0_1_ = 0x51;
                        alphaG._0_1_ = 0x11;
                        alphaB._0_1_ = 0x1;
                        iVar15 = 0x13100;
                        iVar10 = 0x5f;
                        iVar24 = 0x6280;
                    }
                    iVar7 = 0x73;
                    iVar22 = -0x1;
                }
                else {
                    alphaR._0_1_ = 0x40;
                    alphaG._0_1_ = 0x18;
                    alphaB._0_1_ = 0x78;
                    iVar15 = 0xce80;
                    iVar7 = 0x71;
                    iVar10 = 0x67;
                    iVar24 = 0x0;
                }
            }
            else if ((gSelection < 0x82) && (gSelection == 0x78)) {
                if (gTheGame._89856_4_ == 0x7) {
                    alphaR._0_1_ = 0x44;
                    alphaG._0_1_ = 0x2;
                    alphaB._0_1_ = 0x1b;
                    iVar15 = 0x10200;
                    iVar7 = 0x73;
                    iVar10 = 0x5e;
                    iVar24 = 0x3380;
                }
                else {
                    alphaR._0_1_ = 0x40;
                    alphaG._0_1_ = 0x18;
                    alphaB._0_1_ = 0x78;
                    iVar15 = 0xce80;
                    iVar7 = 0x71;
                    iVar10 = 0x67;
                    iVar24 = 0x0;
                }
                iVar22 = -0x1;
            }
        }
        else if (gSelection == 0xbe) {
            if (gTheGame._89856_4_ == 0x7) {
                iVar24 = 0xc300;
                iVar7 = 0x78;
                iVar10 = 0x13;
                iVar15 = 0x0;
            }
            else {
                alphaR._0_1_ = 0x40;
                alphaG._0_1_ = 0x18;
                alphaB._0_1_ = 0x78;
                iVar15 = 0xce80;
                iVar7 = 0x71;
                iVar10 = 0x67;
                iVar24 = 0x0;
            }
        }
        else if ((gSelection < 0xbe) && (gSelection == 0xaa)) {
            if (gTheGame._89856_4_ == 0x7) {
                if (gTheGame._120368_4_ == 0x5) {
                    alphaR._0_1_ = 0x51;
                    alphaG._0_1_ = 0x11;
                    alphaB._0_1_ = 0x1;
                    iVar15 = 0x13100;
                    iVar10 = 0x5f;
                    iVar24 = 0x6280;
                }
                else {
                    alphaR._0_1_ = 0x44;
                    alphaG._0_1_ = 0x2;
                    alphaB._0_1_ = 0x1b;
                    iVar15 = 0x10200;
                    iVar10 = 0x5e;
                    iVar24 = 0x3380;
                }
                iVar7 = 0x73;
                iVar22 = -0x1;
            }
            else {
                alphaR._0_1_ = 0x40;
                alphaG._0_1_ = 0x18;
                alphaB._0_1_ = 0x78;
                iVar15 = 0xce80;
                iVar7 = 0x71;
                iVar10 = 0x67;
                iVar24 = 0x0;
                if ((gTheGame._120360_4_ == 0x5) && (gTheGame._120364_4_ == 0x3)) {
                    iVar22 = -0x1;
                }
            }
        }
        if (iVar22 == 0x0) {
            iVar27 = 0x4;
        }
        else {
            iVar27 = 0x2;
        }
        uVar1 = (undefined2)(iVar7 << 0x2);
        puVar26 = gTheGame;
        uVar3 = (undefined2)(iVar10 << 0x2);
        uVar2 = (undefined2)(iVar10 << 0x2);
        for (iVar7 = 0x0; iVar7 < iVar27; iVar7 += 0x1) {
            *(undefined2 *)(puVar26 + 0x1d308) = 0x0;
            *(undefined2 *)(puVar26 + 0x1d30a) = 0x200;
            *(undefined2 *)(puVar26 + 0x1d30c) = uVar1;
            *(undefined2 *)(puVar26 + 0x1d30e) = 0x200;
            *(undefined2 *)(puVar26 + 0x1d310) = 0x0;
            *(undefined2 *)(puVar26 + 0x1d312) = uVar2;
            *(undefined2 *)(puVar26 + 0x1d314) = 0xff38;
            *(undefined2 *)(puVar26 + 0x1d316) = uVar2;
            *(int *)(puVar26 + 0x1d318) = endSegment + iVar24;
            *(undefined2 *)(puVar26 + 0x1d31c) = 0xfff4;
            puVar26[0x1d31e] = 0x2;
            puVar26[0x1d31f] = 0x1;
            *(undefined2 *)(puVar26 + 0x1d320) = 0x0;
            *(undefined2 *)(puVar26 + 0x1d322) = 0x0;
            if (iVar7 == 0x1) {
                *(undefined2 *)(puVar26 + 0x1d314) = 0xff38;
                if (iVar22 == 0x0) {
                    *(undefined2 *)(puVar26 + 0x1d30c) = 0x1f8;
                    *(undefined2 *)(puVar26 + 0x1d312) = 0x2c;
                    *(undefined2 *)(puVar26 + 0x1d316) = 0x2c;
                    *(int *)(puVar26 + 0x1d318) = endSegment + 0x9200;
                }
                else {
                    *(undefined2 *)(puVar26 + 0x1d30c) = 0x1e0;
                    *(undefined2 *)(puVar26 + 0x1d312) = 0x2c;
                    *(undefined2 *)(puVar26 + 0x1d316) = 0x2c;
                    *(int *)(puVar26 + 0x1d318) = endSegment + 0xbd80;
                }
            }
            else if (iVar7 == 0x2) {
                *(undefined2 *)(puVar26 + 0x1d314) = 0xff38;
                *(undefined2 *)(puVar26 + 0x1d312) = 0x64;
                *(undefined2 *)(puVar26 + 0x1d316) = 0x64;
                *(int *)(puVar26 + 0x1d318) = endSegment + 0x9e00;
            }
            else if (iVar7 == 0x3) {
                *(undefined2 *)(puVar26 + 0x1d314) = 0xff38;
                *(undefined2 *)(puVar26 + 0x1d312) = 0x34;
                *(undefined2 *)(puVar26 + 0x1d316) = 0x34;
                *(int *)(puVar26 + 0x1d318) = endSegment + 0xaa80;
            }
            pon_guS2DInitBg();
            puVar26 = puVar26 + 0x28;
        }
        gTheGame._120040_4_ = 0x30;
        gTheGame._120044_4_ = (undefined1 *)(endSegment + 0xcc80);
        gTheGame._120048_2_ = 0x100;
        gTheGame._120050_2_ = 0xff;
        gTheGame._120052_2_ = 0x0;
        gTheGame._120054_2_ = 0x0;
        gTheGame._120056_4_ = 0xffffffff;
        gTheGame._120060_4_ = 0x0;
        if (iVar15 == 0x0) {
            gTheGame._119892_2_ = 0x0;
            gTheGame._120040_4_ = 0x30;
            gTheGame._120048_2_ = 0x100;
            gTheGame._120050_2_ = 0xff;
            gTheGame._120052_2_ = 0x0;
            gTheGame._120054_2_ = 0x0;
            gTheGame._120056_4_ = 0xffffffff;
            gTheGame._120060_4_ = 0x0;
            return;
        }
        gTheGame._119880_2_ = 0x0;
        gTheGame._119882_2_ = 0x204;
        gTheGame._119886_2_ = 0x200;
        gTheGame._119888_2_ = 0x0;
        gTheGame._119892_2_ = 0xff38;
        gTheGame._119896_4_ = endSegment + iVar15;
        gTheGame._119900_2_ = 0xfff4;
        gTheGame[119902] = 0x4;
        gTheGame[119903] = 0x1;
        gTheGame._119904_2_ = 0x0;
        gTheGame._119906_2_ = 0x0;
        gTheGame._119912_4_ = 0x0;
        gTheGame._119908_2_ = 0x400;
        gTheGame._119910_2_ = 0x400;
        gTheGame._119884_2_ = uVar1;
        gTheGame._119890_2_ = uVar3;
        gTheGame._119894_2_ = uVar3;
    }
    else if (gTheGame._120328_4_ == 0x2) {
        iVar27 = 0x16;
        iVar7 = 0xbb;
        if (gTheGame._89856_4_ == gTheGame._90128_4_) {
            alphaR._0_1_ = 0x53;
            alphaB._0_1_ = 0x60;
            iVar22 = 0x2e00;
            iVar15 = 0x2d;
            alphaR._1_1_ = 0x53;
            iVar23 = 0x7a00;
            iVar24 = 0x2e00;
            iVar10 = 0x2d;
            iVar25 = 0x7a00;
            alphaB._1_1_ = 0x60;
        }
        else if ((gTheGame._89856_4_ == 0x8) || (gTheGame._90128_4_ == 0x7)) {
            alphaR._0_1_ = 0x0;
            alphaB._0_1_ = 0x48;
            alphaR._1_1_ = 0x38;
            iVar22 = 0x1700;
            iVar15 = 0x2e;
            iVar23 = 0x6300;
            iVar24 = 0x0;
            alphaB._1_1_ = 0x28;
            iVar10 = 0x2e;
            iVar7 = 0xbc;
            iVar25 = 0x4c00;
        }
        else {
            alphaR._0_1_ = 0x38;
            alphaB._0_1_ = 0x28;
            iVar22 = 0x0;
            alphaR._1_1_ = 0x0;
            iVar15 = 0x2e;
            iVar27 = 0x17;
            iVar23 = 0x4c00;
            iVar24 = 0x1700;
            alphaB._1_1_ = 0x48;
            iVar10 = 0x2e;
            iVar25 = 0x6300;
        }
        alphaG._1_1_ = 0x0;
        alphaG._0_1_ = 0x0;
        puVar26 = gTheGame;
        local_6c = iVar15 << 0x2;
        uVar1 = (undefined2)(iVar27 << 0x2);
        uVar2 = (undefined2)(iVar7 << 0x2);
        uVar5 = (undefined2)(iVar10 << 0x2);
        uVar3 = (undefined2)(iVar15 << 0x2);
        uVar4 = (undefined2)(iVar10 << 0x2);
        iVar10 = 0x0;
        do {
            *(undefined2 *)(puVar26 + 0x1d308) = 0x0;
            *(undefined2 *)(puVar26 + 0x1d30a) = 0x200;
            *(undefined2 *)(puVar26 + 0x1d30e) = 0x200;
            *(undefined2 *)(puVar26 + 0x1d310) = 0x0;
            *(undefined2 *)(puVar26 + 0x1d31c) = 0xfff4;
            puVar26[0x1d31e] = 0x2;
            puVar26[0x1d31f] = 0x1;
            *(undefined2 *)(puVar26 + 0x1d320) = 0x0;
            *(undefined2 *)(puVar26 + 0x1d322) = 0x0;
            if (iVar10 == 0x0) {
                *(undefined2 *)(puVar26 + 0x1d312) = uVar3;
                *(undefined2 *)(puVar26 + 0x1d316) = uVar3;
                *(undefined2 *)(puVar26 + 0x1d30c) = uVar1;
                *(undefined2 *)(puVar26 + 0x1d314) = 0xff38;
                *(int *)(puVar26 + 0x1d318) = endSegment + iVar22;
            }
            else if (iVar10 == 0x1) {
                *(undefined2 *)(puVar26 + 0x1d312) = uVar4;
                *(undefined2 *)(puVar26 + 0x1d316) = uVar4;
                *(undefined2 *)(puVar26 + 0x1d30c) = uVar2;
                *(undefined2 *)(puVar26 + 0x1d314) = 0xff38;
                *(int *)(puVar26 + 0x1d318) = endSegment + iVar24;
            }
            else {
                if (iVar10 == 0x2) {
                    *(short *)(puVar26 + 0x1d30c) = (short)(iVar27 + 0x7) * 0x4;
                }
                else {
                    *(short *)(puVar26 + 0x1d30c) = (short)(iVar7 + 0x7) * 0x4;
                }
                *(undefined2 *)(puVar26 + 0x1d314) = 0xff38;
                *(undefined2 *)(puVar26 + 0x1d312) = 0x2c;
                *(undefined2 *)(puVar26 + 0x1d316) = 0x2c;
                *(int *)(puVar26 + 0x1d318) = endSegment + 0x4480;
            }
            pon_guS2DInitBg();
            iVar10 += 0x1;
            puVar26 = puVar26 + 0x28;
        } while (iVar10 < 0x4);
        gTheGame._120040_4_ = 0x30;
        gTheGame._120044_4_ = (undefined1 *)(endSegment + 0x4a00);
        gTheGame._120048_2_ = 0x100;
        gTheGame._120050_2_ = 0xff;
        gTheGame._120052_2_ = 0x0;
        gTheGame._120054_2_ = 0x0;
        gTheGame._120056_4_ = 0xffffffff;
        gTheGame._120060_4_ = 0x0;
        gTheGame._119880_2_ = 0x0;
        gTheGame._119882_2_ = 0x204;
        gTheGame._119886_2_ = 0x200;
        gTheGame._119888_2_ = 0x0;
        gTheGame._119900_2_ = 0xfff4;
        gTheGame[119902] = 0x4;
        gTheGame[119903] = 0x1;
        gTheGame._119904_2_ = 0x0;
        gTheGame._119906_2_ = 0x0;
        gTheGame._119884_2_ = uVar2;
        gTheGame._119894_2_ = uVar5;
        iVar27 = iVar25;
        if (true) {
            gTheGame._119884_2_ = uVar1;
            gTheGame._119894_2_ = (short)local_6c;
            iVar27 = iVar23;
        }
        gTheGame._119896_4_ = endSegment + iVar27;
        gTheGame._119892_2_ = 0x0;
        gTheGame._119912_4_ = 0x0;
        gTheGame._119908_2_ = 0x400;
        gTheGame._119910_2_ = 0x400;
        gTheGame._119920_2_ = 0x0;
        gTheGame._119922_2_ = 0x204;
        gTheGame._119926_2_ = 0x200;
        gTheGame._119928_2_ = 0x0;
        gTheGame._119940_2_ = 0xfff4;
        gTheGame[119942] = 0x4;
        gTheGame[119943] = 0x1;
        gTheGame._119944_2_ = 0x0;
        gTheGame._119946_2_ = 0x0;
        gTheGame._119932_2_ = 0x0;
        gTheGame._119936_4_ = endSegment + iVar25;
        gTheGame._119952_4_ = 0x0;
        gTheGame._119948_2_ = 0x400;
        gTheGame._119950_2_ = 0x400;
        gTheGame._119890_2_ = gTheGame._119894_2_;
        gTheGame._119924_2_ = uVar2;
        gTheGame._119930_2_ = uVar5;
        gTheGame._119934_2_ = uVar5;
    }
    else {
        local_80[0] = 0x1c;
        local_80[1] = 0x60;
        local_80[2] = 0xa4;
        local_68 = tlu_ranking;
        local_80[3] = 0xe8;
        local_58 = 0xc0000;
        local_54 = 0x1b0000;
        local_50 = 0x1b0000;
        local_4c = 0x1b0000;
        piVar21 = local_90;
        local_64 = &alphaR;
        piVar20 = local_a0;
        piVar17 = local_d0;
        piVar16 = local_e0;
        local_60 = &alphaG;
        local_5c = &alphaB;
        piVar13 = local_b0;
        piVar14 = local_c0;
        puVar18 = (undefined1 *)(endSegment + 0x4a00);
        puVar19 = NULL;
        piVar8 = piVar21;
        piVar9 = piVar20;
        piVar11 = piVar17;
        piVar12 = piVar16;
        puVar26 = gTheGame;
        iVar7 = gTheGame._120328_4_;
        if (0x0 < gTheGame._120328_4_) {
            do {
                puVar6 = local_68;
                iVar10 = *(int *)(puVar26 + 0x15f00);
                if (iVar10 == 0xc) {
                    *piVar8 = 0x28;
                    *piVar9 = 0x3c;
                    *piVar11 = (int)tex_ranking_4th;
                    *piVar12 = (int)tex_ranking_4th_S;
                    puVar19 = puVar6;
                }
                else if (iVar10 < 0xc) {
                    if (iVar10 == 0xa) {
                        *piVar8 = 0x28;
                        *piVar9 = 0x3c;
                        *piVar11 = (int)tex_ranking_2nd;
                        *piVar12 = (int)tex_ranking_2nd_S;
                        puVar19 = tlu_ranking;
                    }
                    else if (iVar10 < 0xa) {
                        if (0x8 < iVar10) {
                            *piVar8 = 0x28;
                            *piVar9 = 0x3c;
                            *piVar11 = (int)tex_ranking_1st;
                            *piVar12 = (int)tex_ranking_1st_S;
                            puVar19 = tlu_ranking;
                        }
                    }
                    else {
                        *piVar8 = 0x28;
                        *piVar9 = 0x3c;
                        *piVar11 = (int)tex_ranking_3rd;
                        *piVar12 = (int)tex_ranking_3rd_S;
                        puVar19 = tlu_ranking;
                    }
                }
                else if (iVar10 == 0xe) {
                    *piVar8 = 0x0;
                    *piVar9 = 0x0;
                    *piVar11 = 0x0;
                    *piVar12 = 0x0;
                }
                else if (iVar10 < 0xe) {
                    *piVar13 = 0x2e00;
                    *piVar8 = 0x2d;
                    *piVar9 = 0x80;
                    *piVar14 = 0x7a00;
                    *(undefined *)local_64 = 0x53;
                    *(undefined *)local_60 = 0x0;
                    *(undefined *)local_5c = 0x60;
                    *piVar11 = iVar27 + *piVar13;
                    *piVar12 = iVar27 + *piVar14;
                    puVar19 = puVar18;
                }
                puVar26 = puVar26 + 0x110;
                piVar8 = piVar8 + 0x1;
                piVar9 = piVar9 + 0x1;
                piVar11 = piVar11 + 0x1;
                piVar12 = piVar12 + 0x1;
                piVar13 = piVar13 + 0x1;
                piVar14 = piVar14 + 0x1;
                iVar7 += -0x1;
            } while (iVar7 != 0x0);
        }
        piVar11 = local_80;
        puVar26 = gTheGame;
        piVar8 = piVar11;
        piVar9 = piVar21;
        for (iVar27 = 0x0; iVar27 < gTheGame._120328_4_ << 0x1; iVar27 += 0x1) {
            *(undefined2 *)(puVar26 + 0x1d308) = 0x0;
            *(short *)(puVar26 + 0x1d30a) =
                 (short)(local_a0[iVar27 - (iVar27 / gTheGame._120328_4_) * gTheGame._120328_4_] <<
                        0x2);
            *(short *)(puVar26 + 0x1d30e) =
                 (short)(local_a0[iVar27 - (iVar27 / gTheGame._120328_4_) * gTheGame._120328_4_] <<
                        0x2);
            *(undefined2 *)(puVar26 + 0x1d310) = 0x0;
            *(undefined2 *)(puVar26 + 0x1d31c) = 0xfff4;
            puVar26[0x1d31e] = 0x2;
            puVar26[0x1d31f] = 0x1;
            *(undefined2 *)(puVar26 + 0x1d320) = 0x0;
            *(undefined2 *)(puVar26 + 0x1d322) = 0x0;
            if (iVar27 < gTheGame._120328_4_) {
                *(short *)(puVar26 + 0x1d30c) = (short)(*piVar8 << 0x2);
                *(undefined2 *)(puVar26 + 0x1d314) = 0xff38;
                *(short *)(puVar26 + 0x1d312) = (short)(*piVar9 << 0x2);
                *(short *)(puVar26 + 0x1d316) = (short)(*piVar9 << 0x2);
                *(int *)(puVar26 + 0x1d318) = *piVar17;
            }
            else {
                *(short *)(puVar26 + 0x1d30c) =
                     (short)(piVar11[iVar27 - (iVar27 / gTheGame._120328_4_) * gTheGame._120328_4_]
                            << 0x2);
                *(undefined2 *)(puVar26 + 0x1d314) = 0xff38;
                *(undefined2 *)(puVar26 + 0x1d312) = 0x20;
                *(undefined2 *)(puVar26 + 0x1d316) = 0x20;
                *(undefined1 **)(puVar26 + 0x1d318) = tex_pushanykey;
            }
            pon_guS2DInitBg();
            puVar26 = puVar26 + 0x28;
            piVar8 = piVar8 + 0x1;
            piVar9 = piVar9 + 0x1;
            piVar17 = piVar17 + 0x1;
        }
        gTheGame._120040_4_ = 0x30;
        gTheGame._120048_2_ = 0x100;
        gTheGame._120050_2_ = 0xff;
        gTheGame._120052_2_ = 0x0;
        gTheGame._120054_2_ = 0x0;
        gTheGame._120056_4_ = 0xffffffff;
        gTheGame._120060_4_ = 0x0;
        puVar26 = gTheGame;
        gTheGame._120044_4_ = puVar19;
        for (iVar27 = 0x0; iVar27 < gTheGame._120328_4_; iVar27 += 0x1) {
            *(undefined2 *)(puVar26 + 0x1d448) = 0x0;
            *(short *)(puVar26 + 0x1d44a) = (short)(*piVar20 + 0x1) * 0x4;
            iVar7 = *piVar20;
            piVar20 = piVar20 + 0x1;
            *(short *)(puVar26 + 0x1d44e) = (short)(iVar7 + 0x1) * 0x4;
            *(undefined2 *)(puVar26 + 0x1d450) = 0x0;
            *(undefined2 *)(puVar26 + 0x1d45c) = 0xfff4;
            puVar26[0x1d45e] = 0x4;
            puVar26[0x1d45f] = 0x0;
            *(undefined2 *)(puVar26 + 0x1d460) = 0x0;
            *(undefined2 *)(puVar26 + 0x1d462) = 0x0;
            *(short *)(puVar26 + 0x1d452) = (short)(*piVar21 << 0x2);
            iVar7 = *piVar21;
            piVar21 = piVar21 + 0x1;
            *(short *)(puVar26 + 0x1d456) = (short)(iVar7 << 0x2);
            iVar7 = *piVar11;
            piVar11 = piVar11 + 0x1;
            *(short *)(puVar26 + 0x1d44c) = (short)(iVar7 << 0x2);
            *(undefined2 *)(puVar26 + 0x1d454) = 0x0;
            iVar7 = *piVar16;
            piVar16 = piVar16 + 0x1;
            *(int *)(puVar26 + 0x1d458) = iVar7;
            *(undefined4 *)(puVar26 + 0x1d468) = 0x0;
            *(undefined2 *)(puVar26 + 0x1d464) = 0x400;
            *(undefined2 *)(puVar26 + 0x1d466) = 0x400;
            puVar26 = puVar26 + 0x28;
        }
    }
    if (gSelection == 0x96) {
        gTheGame._119696_4_ = 0x0;
    }
    else if (((gSelection == 0xaa) || (gSelection == 0x82)) || (gSelection == 0x78)) {
        if (gWorld == 0x3) {
            *(undefined4 *)(gTheGame + FlicTable._184_4_ * 0x20 + 0x1639c) = FlicTable._144_4_;
        }
        else if (gWorld == 0x5) {
            *(undefined4 *)(gTheGame + FlicTable._272_4_ * 0x20 + 0x1639c) = FlicTable._236_4_;
        }
    }
    return;
}



void LoadGameOver3D(void)

{
    undefined2 uVar1;
    undefined2 uVar2;
    undefined2 uVar3;
    int iVar4;
    undefined1 *puVar5;
    int iVar6;
    int iVar7;
    code *pcVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    
    iVar6 = 0x0;
    iVar10 = 0x0;
    iVar7 = 0x0;
    pcVar8 = NULL;
    iVar9 = 0x0;
    gTheGame._119576_4_ = 0x0;
    gTheGame._119616_4_ = 0x0;
    gTheGame._119656_4_ = 0x0;
    gTheGame._119696_4_ = 0x0;
    gTheGame._119896_4_ = NULL;
    gTheGame._119936_4_ = 0x0;
    if (gTheGame._120328_4_ == 0x1) {
        if (gSelection == 0xaa) {
            if (gTheGame._89856_4_ == 0x7) {
                if (gTheGame._120368_4_ == 0x5) {
                    alphaR._0_1_ = 0x51;
                    alphaG._0_1_ = 0x11;
                    alphaB._0_1_ = 0x1;
                    pcVar8 = Pon_DVDRead_fr3d;
                    iVar6 = 0x74;
                    iVar10 = 0x64;
                    iVar7 = 0x3980;
                }
                else {
                    alphaR._0_1_ = 0x44;
                    alphaG._0_1_ = 0x2;
                    alphaB._0_1_ = 0x1b;
                    pcVar8 = (code *)0x15300;
                    iVar6 = 0x73;
                    iVar10 = 0x68;
                    iVar7 = 0x6b00;
                }
                iVar9 = -0x1;
            }
            else {
                alphaR._0_1_ = 0x40;
                alphaG._0_1_ = 0x18;
                alphaB._0_1_ = 0x78;
                pcVar8 = (code *)0xe800;
                iVar6 = 0x73;
                iVar10 = 0x74;
                iVar7 = 0x0;
                if ((gTheGame._120360_4_ == 0x5) && (gTheGame._120364_4_ == 0x3)) {
                    iVar9 = -0x1;
                }
            }
        }
        else if (gSelection < 0xaa) {
            if (gSelection == 0x8c) {
                alphaR._0_1_ = 0x40;
                alphaG._0_1_ = 0x18;
                alphaB._0_1_ = 0x78;
                pcVar8 = (code *)0xe800;
                iVar6 = 0x73;
                iVar10 = 0x74;
                iVar7 = 0x0;
                if ((0x752f < gTheGame._19084_4_) && (gTheGame._120360_4_ != 0x0)) {
                    iVar9 = -0x1;
                }
            }
            else if ((gSelection < 0x8c) && (gSelection == 0x82)) {
                if (gTheGame._89856_4_ == 0x7) {
                    iVar6 = CheckPlayerPuzzleRound(gTheGame._120360_4_,gTheGame._120364_4_);
                    if (iVar6 == 0x0) {
                        alphaR._0_1_ = 0x44;
                        alphaG._0_1_ = 0x2;
                        alphaB._0_1_ = 0x1b;
                        pcVar8 = (code *)0x15300;
                        iVar6 = 0x73;
                        iVar10 = 0x68;
                        iVar7 = 0x6b00;
                    }
                    else {
                        alphaR._0_1_ = 0x51;
                        alphaG._0_1_ = 0x11;
                        alphaB._0_1_ = 0x1;
                        pcVar8 = Pon_DVDRead_fr3d;
                        iVar6 = 0x74;
                        iVar10 = 0x64;
                        iVar7 = 0x3980;
                    }
                    iVar9 = -0x1;
                }
                else {
                    alphaR._0_1_ = 0x40;
                    alphaG._0_1_ = 0x18;
                    alphaB._0_1_ = 0x78;
                    pcVar8 = (code *)0xe800;
                    iVar6 = 0x73;
                    iVar10 = 0x74;
                    iVar7 = 0x0;
                }
            }
        }
        else if (gSelection == 0xbe) {
            if (gTheGame._89856_4_ == 0x7) {
                iVar7 = 0x9e80;
                iVar6 = 0x79;
                iVar10 = 0x17;
                pcVar8 = NULL;
            }
            else {
                alphaR._0_1_ = 0x40;
                alphaG._0_1_ = 0x18;
                alphaB._0_1_ = 0x78;
                pcVar8 = (code *)0xe800;
                iVar6 = 0x73;
                iVar10 = 0x74;
                iVar7 = 0x0;
            }
        }
        if (iVar9 == 0x0) {
            iVar4 = 0x4;
        }
        else {
            iVar4 = 0x2;
        }
        uVar1 = (undefined2)(iVar6 << 0x2);
        puVar5 = gTheGame;
        uVar3 = (undefined2)(iVar10 << 0x2);
        uVar2 = (undefined2)(iVar10 << 0x2);
        iVar6 = 0x0;
        for (; iVar4 != 0x0; iVar4 += -0x1) {
            *(undefined2 *)(puVar5 + 0x1d308) = 0x0;
            *(undefined2 *)(puVar5 + 0x1d30a) = 0x204;
            *(undefined2 *)(puVar5 + 0x1d30c) = uVar1;
            *(undefined2 *)(puVar5 + 0x1d30e) = 0x200;
            *(undefined2 *)(puVar5 + 0x1d310) = 0x0;
            *(undefined2 *)(puVar5 + 0x1d312) = uVar2;
            *(undefined2 *)(puVar5 + 0x1d314) = 0xff24;
            *(undefined2 *)(puVar5 + 0x1d316) = uVar2;
            *(int *)(puVar5 + 0x1d318) = endSegment + iVar7;
            *(undefined2 *)(puVar5 + 0x1d31c) = 0xfff4;
            puVar5[0x1d31e] = 0x2;
            puVar5[0x1d31f] = 0x1;
            *(undefined2 *)(puVar5 + 0x1d320) = 0x0;
            *(undefined2 *)(puVar5 + 0x1d322) = 0x0;
            *(undefined4 *)(puVar5 + 0x1d328) = 0x0;
            *(undefined2 *)(puVar5 + 0x1d324) = 0x400;
            *(undefined2 *)(puVar5 + 0x1d326) = 0x400;
            if (iVar6 == 0x1) {
                *(undefined2 *)(puVar5 + 0x1d314) = 0xff38;
                if (iVar9 == 0x0) {
                    *(undefined2 *)(puVar5 + 0x1d30c) = 0x1f0;
                    *(undefined2 *)(puVar5 + 0x1d312) = 0x3c;
                    *(undefined2 *)(puVar5 + 0x1d316) = 0x3c;
                    *(int *)(puVar5 + 0x1d318) = endSegment + 0xa980;
                }
                else {
                    *(undefined2 *)(puVar5 + 0x1d30c) = 0x1e4;
                    *(undefined2 *)(puVar5 + 0x1d312) = 0x40;
                    *(undefined2 *)(puVar5 + 0x1d316) = 0x40;
                    *(int *)(puVar5 + 0x1d318) = endSegment + 0xde80;
                }
            }
            else if (iVar6 == 0x2) {
                *(undefined2 *)(puVar5 + 0x1d314) = 0xff38;
                *(undefined2 *)(puVar5 + 0x1d312) = 0x78;
                *(undefined2 *)(puVar5 + 0x1d316) = 0x78;
                *(int *)(puVar5 + 0x1d318) = endSegment + 0xb900;
            }
            else if (iVar6 == 0x3) {
                *(undefined2 *)(puVar5 + 0x1d314) = 0xff38;
                *(undefined2 *)(puVar5 + 0x1d312) = 0x48;
                *(undefined2 *)(puVar5 + 0x1d316) = 0x48;
                *(int *)(puVar5 + 0x1d318) = endSegment + 0xc780;
            }
            puVar5 = puVar5 + 0x28;
            iVar6 += 0x1;
        }
        gTheGame._120040_4_ = 0x30;
        gTheGame._120044_4_ = endSegment + 0xe600;
        gTheGame._120048_2_ = 0x100;
        gTheGame._120050_2_ = 0xff;
        gTheGame._120052_2_ = 0x0;
        gTheGame._120054_2_ = 0x0;
        gTheGame._120056_4_ = 0xffffffff;
        gTheGame._120060_4_ = 0x0;
        if (pcVar8 == NULL) {
            gTheGame._119892_2_ = 0x0;
        }
        else {
            gTheGame._119880_2_ = 0x0;
            gTheGame._119882_2_ = 0x204;
            gTheGame._119886_2_ = 0x200;
            gTheGame._119888_2_ = 0x0;
            gTheGame._119892_2_ = 0xff24;
            gTheGame._119896_4_ = pcVar8 + endSegment;
            gTheGame._119900_2_ = 0xfff4;
            gTheGame[119902] = 0x4;
            gTheGame[119903] = 0x1;
            gTheGame._119904_2_ = 0x0;
            gTheGame._119906_2_ = 0x0;
            gTheGame._119912_4_ = 0x0;
            gTheGame._119908_2_ = 0x400;
            gTheGame._119910_2_ = 0x400;
            gTheGame._119884_2_ = uVar1;
            gTheGame._119890_2_ = uVar3;
            gTheGame._119894_2_ = uVar3;
        }
    }
    else if (gTheGame._120328_4_ == 0x2) {
        iVar6 = 0x17;
        iVar7 = 0xba;
        if (gTheGame._89856_4_ == gTheGame._90128_4_) {
            alphaR._0_1_ = 0x53;
            alphaB._0_1_ = 0x60;
            iVar11 = 0x9180;
            alphaR._1_1_ = 0x53;
            iVar4 = 0x3700;
            iVar10 = 0x35;
            iVar12 = 0x3700;
            alphaB._1_1_ = 0x60;
            iVar13 = 0x35;
            iVar9 = iVar11;
        }
        else if ((gTheGame._89856_4_ == 0x8) || (gTheGame._90128_4_ == 0x7)) {
            alphaR._0_1_ = 0x0;
            alphaB._0_1_ = 0x48;
            iVar10 = 0x38;
            alphaR._1_1_ = 0x38;
            iVar4 = 0x1b80;
            iVar11 = 0x7600;
            iVar12 = 0x0;
            iVar13 = 0x38;
            alphaB._1_1_ = 0x28;
            iVar7 = 0xbb;
            iVar9 = 0x5a80;
        }
        else {
            iVar10 = 0x38;
            alphaR._0_1_ = 0x38;
            alphaB._0_1_ = 0x28;
            iVar4 = 0x0;
            alphaR._1_1_ = 0x0;
            iVar6 = 0x18;
            iVar11 = 0x5a80;
            iVar12 = 0x1b80;
            iVar13 = 0x38;
            alphaB._1_1_ = 0x48;
            iVar9 = 0x7600;
        }
        alphaG._1_1_ = 0x0;
        alphaG._0_1_ = 0x0;
        puVar5 = gTheGame;
        iVar14 = 0x4;
        gTheGame._119924_2_ = (undefined2)(iVar7 << 0x2);
        uVar1 = (undefined2)(iVar6 << 0x2);
        uVar2 = (undefined2)(iVar10 << 0x2);
        gTheGame._119930_2_ = (undefined2)(iVar13 << 0x2);
        uVar3 = (undefined2)(iVar13 << 0x2);
        iVar13 = 0x0;
        do {
            *(undefined2 *)(puVar5 + 0x1d308) = 0x0;
            *(undefined2 *)(puVar5 + 0x1d30a) = 0x204;
            *(undefined2 *)(puVar5 + 0x1d30e) = 0x200;
            *(undefined2 *)(puVar5 + 0x1d310) = 0x0;
            *(undefined2 *)(puVar5 + 0x1d31c) = 0xfff4;
            puVar5[0x1d31e] = 0x2;
            puVar5[0x1d31f] = 0x1;
            *(undefined2 *)(puVar5 + 0x1d320) = 0x0;
            *(undefined2 *)(puVar5 + 0x1d322) = 0x0;
            *(undefined4 *)(puVar5 + 0x1d328) = 0x0;
            *(undefined2 *)(puVar5 + 0x1d324) = 0x400;
            *(undefined2 *)(puVar5 + 0x1d326) = 0x400;
            if (iVar13 == 0x0) {
                *(undefined2 *)(puVar5 + 0x1d312) = uVar2;
                *(undefined2 *)(puVar5 + 0x1d316) = uVar2;
                *(undefined2 *)(puVar5 + 0x1d30c) = uVar1;
                *(undefined2 *)(puVar5 + 0x1d314) = 0xff24;
                *(int *)(puVar5 + 0x1d318) = endSegment + iVar4;
            }
            else if (iVar13 == 0x1) {
                *(undefined2 *)(puVar5 + 0x1d312) = uVar3;
                *(undefined2 *)(puVar5 + 0x1d316) = uVar3;
                *(undefined2 *)(puVar5 + 0x1d30c) = gTheGame._119924_2_;
                *(undefined2 *)(puVar5 + 0x1d314) = 0xff24;
                *(int *)(puVar5 + 0x1d318) = endSegment + iVar12;
            }
            else {
                if (iVar13 == 0x2) {
                    *(short *)(puVar5 + 0x1d30c) = (short)(iVar6 + 0x6) * 0x4;
                }
                else {
                    *(short *)(puVar5 + 0x1d30c) = (short)(iVar7 + 0x6) * 0x4;
                }
                *(undefined2 *)(puVar5 + 0x1d314) = 0xff38;
                *(undefined2 *)(puVar5 + 0x1d312) = 0x40;
                *(undefined2 *)(puVar5 + 0x1d316) = 0x40;
                *(int *)(puVar5 + 0x1d318) = endSegment + 0x5100;
            }
            puVar5 = puVar5 + 0x28;
            iVar13 += 0x1;
            iVar14 += -0x1;
        } while (iVar14 != 0x0);
        gTheGame._120040_4_ = 0x30;
        gTheGame._120044_4_ = endSegment + 0x5880;
        gTheGame._120048_2_ = 0x100;
        gTheGame._120050_2_ = 0xff;
        gTheGame._120052_2_ = 0x0;
        gTheGame._120054_2_ = 0x0;
        gTheGame._120056_4_ = 0xffffffff;
        gTheGame._120060_4_ = 0x0;
        gTheGame._119880_2_ = 0x0;
        gTheGame._119882_2_ = 0x204;
        gTheGame._119886_2_ = 0x200;
        gTheGame._119888_2_ = 0x0;
        gTheGame._119900_2_ = 0xfff4;
        gTheGame[119902] = 0x4;
        gTheGame[119903] = 0x1;
        gTheGame._119904_2_ = 0x0;
        gTheGame._119906_2_ = 0x0;
        gTheGame._119884_2_ = gTheGame._119924_2_;
        gTheGame._119894_2_ = gTheGame._119930_2_;
        iVar6 = iVar9;
        if (true) {
            gTheGame._119884_2_ = uVar1;
            gTheGame._119894_2_ = (short)(iVar10 << 0x2);
            iVar6 = iVar11;
        }
        gTheGame._119896_4_ = (code *)(endSegment + iVar6);
        gTheGame._119892_2_ = 0x0;
        gTheGame._119912_4_ = 0x0;
        gTheGame._119908_2_ = 0x400;
        gTheGame._119910_2_ = 0x400;
        gTheGame._119920_2_ = 0x0;
        gTheGame._119922_2_ = 0x204;
        gTheGame._119926_2_ = 0x200;
        gTheGame._119928_2_ = 0x0;
        gTheGame._119940_2_ = 0xfff4;
        gTheGame[119942] = 0x4;
        gTheGame[119943] = 0x1;
        gTheGame._119944_2_ = 0x0;
        gTheGame._119946_2_ = 0x0;
        gTheGame._119932_2_ = 0x0;
        gTheGame._119936_4_ = endSegment + iVar9;
        gTheGame._119952_4_ = 0x0;
        gTheGame._119948_2_ = 0x400;
        gTheGame._119950_2_ = 0x400;
        gTheGame._119890_2_ = gTheGame._119894_2_;
        gTheGame._119934_2_ = gTheGame._119930_2_;
    }
    return;
}



void DrawPauseOver(void)

{
    if (gMain == 0x388) {
        DrawPause();
    }
    else {
        DrawGameOver();
    }
    return;
}



void AnimateGameOver2D(int param_1)

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
    int iVar11;
    int iVar12;
    int iVar13;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;
    
    local_1c = 0xf81df01b;
    local_18 = 0xe019c817;
    local_14 = 0xb815a813;
    local_10 = 0xb815c817;
    local_c = 0xe019f01b;
    iVar1 = gCounter / 0xa + (gCounter >> 0x1f);
    if (gCounter == (iVar1 - (iVar1 >> 0x1f)) * 0xa) {
        *(int *)(param_1 + 0x4acc) = *(int *)(param_1 + 0x4acc) + 0x1;
        if (0x9 < *(uint *)(param_1 + 0x4acc)) {
            *(undefined4 *)(param_1 + 0x4acc) = 0x0;
        }
        iVar1 = endSegment;
        iVar4 = *(int *)(param_1 + 0x4acc);
        iVar2 = iVar4 / 0xa + (iVar4 >> 0x1f);
        iVar12 = iVar4 + 0x1;
        iVar6 = iVar12 / 0xa + (iVar12 >> 0x1f);
        iVar13 = iVar4 + 0x2;
        iVar11 = iVar4 + 0x3;
        iVar9 = iVar13 / 0xa + (iVar13 >> 0x1f);
        iVar10 = iVar4 + 0x4;
        iVar7 = iVar11 / 0xa + (iVar11 >> 0x1f);
        iVar8 = iVar4 + 0x5;
        iVar5 = iVar10 / 0xa + (iVar10 >> 0x1f);
        iVar3 = iVar8 / 0xa + (iVar8 >> 0x1f);
        *(undefined2 *)(endSegment + 0xccba) =
             *(undefined2 *)((int)&local_1c + (iVar4 + (iVar2 - (iVar2 >> 0x1f)) * -0xa) * 0x2);
        *(undefined2 *)(iVar1 + 0xccc4) =
             *(undefined2 *)((int)&local_1c + (iVar12 + (iVar6 - (iVar6 >> 0x1f)) * -0xa) * 0x2);
        *(undefined2 *)(iVar1 + 0xccf0) =
             *(undefined2 *)((int)&local_1c + (iVar13 + (iVar9 - (iVar9 >> 0x1f)) * -0xa) * 0x2);
        *(undefined2 *)(iVar1 + 0xccfa) =
             *(undefined2 *)((int)&local_1c + (iVar11 + (iVar7 - (iVar7 >> 0x1f)) * -0xa) * 0x2);
        *(undefined2 *)(iVar1 + 0xcd0a) =
             *(undefined2 *)((int)&local_1c + (iVar10 + (iVar5 - (iVar5 >> 0x1f)) * -0xa) * 0x2);
        *(undefined2 *)(iVar1 + 0xcd18) =
             *(undefined2 *)((int)&local_1c + (iVar8 + (iVar3 - (iVar3 >> 0x1f)) * -0xa) * 0x2);
    }
    return;
}



void AnimateGameOver3D(int param_1)

{
    int iVar1;
    
    iVar1 = gCounter / 0xa + (gCounter >> 0x1f);
    if (gCounter != (iVar1 - (iVar1 >> 0x1f)) * 0xa) {
        return;
    }
    *(int *)(param_1 + 0x4acc) = *(int *)(param_1 + 0x4acc) + 0x1;
    if (*(uint *)(param_1 + 0x4acc) < 0xa) {
        return;
    }
    *(undefined4 *)(param_1 + 0x4acc) = 0x0;
    return;
}



void AnimateWin2D(int param_1,int param_2,int param_3)

{
    char cVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;
    undefined4 local_8;
    
    iVar7 = 0x0;
    local_14 = 0xfdf9fd37;
    local_10 = 0xfcb5fc33;
    local_c = 0xfbf1fc33;
    local_8 = 0xfcb5fd37;
    iVar6 = *(int *)(param_1 + 0x4adc);
    if (iVar6 < 0x0) {
        *(undefined4 *)(param_1 + 0x4adc) = 0x27;
    }
    else {
        cVar1 = winwordShake[iVar6];
        *(int *)(param_1 + 0x4adc) = iVar6 + -0x1;
        iVar7 = (int)cVar1;
    }
    *(short *)(param_2 + 0xc) = (short)(((int)*(short *)(param_2 + 0xc) >> 0x2) - iVar7) * 0x4;
    *(short *)(param_3 + 0xc) = (short)(((int)*(short *)(param_3 + 0xc) >> 0x2) - iVar7) * 0x4;
    iVar6 = gCounter / 0xa + (gCounter >> 0x1f);
    if (gCounter == (iVar6 - (iVar6 >> 0x1f)) * 0xa) {
        *(int *)(param_1 + 0x4acc) = *(int *)(param_1 + 0x4acc) + 0x1;
        if (0x7 < *(uint *)(param_1 + 0x4acc)) {
            *(undefined4 *)(param_1 + 0x4acc) = 0x0;
        }
        iVar6 = endSegment;
        uVar8 = *(uint *)(param_1 + 0x4acc);
        uVar2 = uVar8 + 0x1;
        uVar3 = uVar8 + 0x2;
        uVar4 = uVar8 + 0x3;
        uVar5 = uVar8 + 0x4;
        *(undefined2 *)(endSegment + 0x4a38) =
             *(undefined2 *)
              ((int)&local_14 +
              (uVar8 + (((int)uVar8 >> 0x3) + (uint)((int)uVar8 < 0x0 && (uVar8 & 0x7) != 0x0)) *
                       -0x8) * 0x2);
        *(undefined2 *)(iVar6 + 0x4a58) =
             *(undefined2 *)
              ((int)&local_14 +
              (uVar2 + (((int)uVar2 >> 0x3) + (uint)((int)uVar2 < 0x0 && (uVar2 & 0x7) != 0x0)) *
                       -0x8) * 0x2);
        *(undefined2 *)(iVar6 + 0x4a82) =
             *(undefined2 *)
              ((int)&local_14 +
              (uVar3 + (((int)uVar3 >> 0x3) + (uint)((int)uVar3 < 0x0 && (uVar3 & 0x7) != 0x0)) *
                       -0x8) * 0x2);
        *(undefined2 *)(iVar6 + 0x4a88) =
             *(undefined2 *)
              ((int)&local_14 +
              (uVar4 + (((int)uVar4 >> 0x3) + (uint)((int)uVar4 < 0x0 && (uVar4 & 0x7) != 0x0)) *
                       -0x8) * 0x2);
        *(undefined2 *)(iVar6 + 0x4a8e) =
             *(undefined2 *)
              ((int)&local_14 +
              (uVar5 + (((int)uVar5 >> 0x3) + (uint)((int)uVar5 < 0x0 && (uVar5 & 0x7) != 0x0)) *
                       -0x8) * 0x2);
    }
    return;
}



void AnimateWin3D(int param_1,int param_2,int param_3)

{
    char cVar1;
    int iVar2;
    int iVar3;
    
    iVar2 = *(int *)(param_1 + 0x4adc);
    iVar3 = 0x0;
    if (iVar2 < 0x0) {
        *(undefined4 *)(param_1 + 0x4adc) = 0x27;
    }
    else {
        cVar1 = winwordShake[iVar2];
        *(int *)(param_1 + 0x4adc) = iVar2 + -0x1;
        iVar3 = (int)cVar1;
    }
    *(short *)(param_2 + 0xc) = (short)(((int)*(short *)(param_2 + 0xc) >> 0x2) - iVar3) * 0x4;
    *(short *)(param_3 + 0xc) = (short)(((int)*(short *)(param_3 + 0xc) >> 0x2) - iVar3) * 0x4;
    iVar2 = gCounter / 0xa + (gCounter >> 0x1f);
    if (gCounter != (iVar2 - (iVar2 >> 0x1f)) * 0xa) {
        return;
    }
    *(int *)(param_1 + 0x4acc) = *(int *)(param_1 + 0x4acc) + 0x1;
    if (*(uint *)(param_1 + 0x4acc) < 0x8) {
        return;
    }
    *(undefined4 *)(param_1 + 0x4acc) = 0x0;
    return;
}



void AnimateLose2D(int param_1,int param_2,int param_3)

{
    char cVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;
    undefined4 local_8;
    
    iVar7 = 0x0;
    local_14 = 0xce7fbdff;
    local_10 = 0xb5bfa53f;
    local_c = 0x94bfa53f;
    local_8 = 0xb5bfbdff;
    iVar6 = *(int *)(param_1 + 0x4adc);
    if (iVar6 < 0x0) {
        *(undefined4 *)(param_1 + 0x4adc) = 0x2;
    }
    else {
        cVar1 = *(char *)((int)&losewordShake + iVar6);
        *(int *)(param_1 + 0x4adc) = iVar6 + -0x1;
        iVar7 = (int)cVar1;
    }
    *(short *)(param_2 + 0xc) = (short)(((int)*(short *)(param_2 + 0xc) >> 0x2) - iVar7) * 0x4;
    *(short *)(param_3 + 0xc) = (short)(((int)*(short *)(param_3 + 0xc) >> 0x2) - iVar7) * 0x4;
    iVar6 = gCounter / 0xa + (gCounter >> 0x1f);
    if (gCounter == (iVar6 - (iVar6 >> 0x1f)) * 0xa) {
        *(int *)(param_1 + 0x4acc) = *(int *)(param_1 + 0x4acc) + 0x1;
        if (0x7 < *(uint *)(param_1 + 0x4acc)) {
            *(undefined4 *)(param_1 + 0x4acc) = 0x0;
        }
        iVar6 = endSegment;
        uVar8 = *(uint *)(param_1 + 0x4acc);
        uVar2 = uVar8 + 0x1;
        uVar3 = uVar8 + 0x2;
        uVar4 = uVar8 + 0x3;
        uVar5 = uVar8 + 0x4;
        *(undefined2 *)(endSegment + 0x4acc) =
             *(undefined2 *)
              ((int)&local_14 +
              (uVar8 + (((int)uVar8 >> 0x3) + (uint)((int)uVar8 < 0x0 && (uVar8 & 0x7) != 0x0)) *
                       -0x8) * 0x2);
        *(undefined2 *)(iVar6 + 0x4ad4) =
             *(undefined2 *)
              ((int)&local_14 +
              (uVar2 + (((int)uVar2 >> 0x3) + (uint)((int)uVar2 < 0x0 && (uVar2 & 0x7) != 0x0)) *
                       -0x8) * 0x2);
        *(undefined2 *)(iVar6 + 0x4ad2) =
             *(undefined2 *)
              ((int)&local_14 +
              (uVar3 + (((int)uVar3 >> 0x3) + (uint)((int)uVar3 < 0x0 && (uVar3 & 0x7) != 0x0)) *
                       -0x8) * 0x2);
        *(undefined2 *)(iVar6 + 0x4afc) =
             *(undefined2 *)
              ((int)&local_14 +
              (uVar4 + (((int)uVar4 >> 0x3) + (uint)((int)uVar4 < 0x0 && (uVar4 & 0x7) != 0x0)) *
                       -0x8) * 0x2);
        *(undefined2 *)(iVar6 + 0x4afe) =
             *(undefined2 *)
              ((int)&local_14 +
              (uVar5 + (((int)uVar5 >> 0x3) + (uint)((int)uVar5 < 0x0 && (uVar5 & 0x7) != 0x0)) *
                       -0x8) * 0x2);
    }
    return;
}



void AnimateLose3D(int param_1,int param_2,int param_3)

{
    char cVar1;
    int iVar2;
    int iVar3;
    
    iVar2 = *(int *)(param_1 + 0x4adc);
    iVar3 = 0x0;
    if (iVar2 < 0x0) {
        *(undefined4 *)(param_1 + 0x4adc) = 0x2;
    }
    else {
        cVar1 = *(char *)((int)&losewordShake + iVar2);
        *(int *)(param_1 + 0x4adc) = iVar2 + -0x1;
        iVar3 = (int)cVar1;
    }
    *(short *)(param_2 + 0xc) = (short)(((int)*(short *)(param_2 + 0xc) >> 0x2) - iVar3) * 0x4;
    *(short *)(param_3 + 0xc) = (short)(((int)*(short *)(param_3 + 0xc) >> 0x2) - iVar3) * 0x4;
    iVar2 = gCounter / 0xa + (gCounter >> 0x1f);
    if (gCounter != (iVar2 - (iVar2 >> 0x1f)) * 0xa) {
        return;
    }
    *(int *)(param_1 + 0x4acc) = *(int *)(param_1 + 0x4acc) + 0x1;
    if (*(uint *)(param_1 + 0x4acc) < 0x8) {
        return;
    }
    *(undefined4 *)(param_1 + 0x4acc) = 0x0;
    return;
}



void AnimateDraw2D(int param_1,int param_2,int param_3)

{
    char cVar1;
    undefined2 uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;
    undefined4 local_8;
    
    iVar7 = 0x0;
    local_14 = 0xfcbffc7d;
    local_10 = 0xf3bbeb3b;
    local_c = 0xeaf9eb3b;
    local_8 = 0xf3bbfc7d;
    iVar6 = *(int *)(param_1 + 0x4adc);
    if (iVar6 < 0x0) {
        *(undefined4 *)(param_1 + 0x4adc) = 0x2;
    }
    else {
        cVar1 = *(char *)((int)&losewordShake + iVar6);
        *(int *)(param_1 + 0x4adc) = iVar6 + -0x1;
        iVar7 = (int)cVar1;
    }
    *(short *)(param_2 + 0xc) = (short)(((int)*(short *)(param_2 + 0xc) >> 0x2) - iVar7) * 0x4;
    *(short *)(param_3 + 0xc) = (short)(((int)*(short *)(param_3 + 0xc) >> 0x2) - iVar7) * 0x4;
    iVar6 = gCounter / 0xa + (gCounter >> 0x1f);
    if (gCounter == (iVar6 - (iVar6 >> 0x1f)) * 0xa) {
        *(int *)(param_1 + 0x4acc) = *(int *)(param_1 + 0x4acc) + 0x1;
        if (0x7 < *(uint *)(param_1 + 0x4acc)) {
            *(undefined4 *)(param_1 + 0x4acc) = 0x0;
        }
        iVar6 = endSegment;
        uVar8 = *(uint *)(param_1 + 0x4acc);
        uVar3 = uVar8 + 0x1;
        uVar4 = uVar8 + 0x2;
        uVar5 = uVar8 + 0x3;
        *(undefined2 *)(endSegment + 0x4b48) =
             *(undefined2 *)
              ((int)&local_14 +
              (uVar8 + (((int)uVar8 >> 0x3) + (uint)((int)uVar8 < 0x0 && (uVar8 & 0x7) != 0x0)) *
                       -0x8) * 0x2);
        *(undefined2 *)(iVar6 + 0x4b60) =
             *(undefined2 *)
              ((int)&local_14 +
              (uVar3 + (((int)uVar3 >> 0x3) + (uint)((int)uVar3 < 0x0 && (uVar3 & 0x7) != 0x0)) *
                       -0x8) * 0x2);
        *(undefined2 *)(iVar6 + 0x4b74) =
             *(undefined2 *)
              ((int)&local_14 +
              (uVar4 + (((int)uVar4 >> 0x3) + (uint)((int)uVar4 < 0x0 && (uVar4 & 0x7) != 0x0)) *
                       -0x8) * 0x2);
        uVar2 = *(undefined2 *)
                 ((int)&local_14 +
                 (uVar5 + (((int)uVar5 >> 0x3) + (uint)((int)uVar5 < 0x0 && (uVar5 & 0x7) != 0x0)) *
                          -0x8) * 0x2);
        *(undefined2 *)(iVar6 + 0x4b82) = uVar2;
        *(undefined2 *)(iVar6 + 0x4b84) = uVar2;
    }
    return;
}



void AnimateDraw3D(int param_1,int param_2,int param_3)

{
    char cVar1;
    int iVar2;
    int iVar3;
    
    iVar2 = *(int *)(param_1 + 0x4adc);
    iVar3 = 0x0;
    if (iVar2 < 0x0) {
        *(undefined4 *)(param_1 + 0x4adc) = 0x2;
    }
    else {
        cVar1 = *(char *)((int)&losewordShake + iVar2);
        *(int *)(param_1 + 0x4adc) = iVar2 + -0x1;
        iVar3 = (int)cVar1;
    }
    *(short *)(param_2 + 0xc) = (short)(((int)*(short *)(param_2 + 0xc) >> 0x2) - iVar3) * 0x4;
    *(short *)(param_3 + 0xc) = (short)(((int)*(short *)(param_3 + 0xc) >> 0x2) - iVar3) * 0x4;
    iVar2 = gCounter / 0xa + (gCounter >> 0x1f);
    if (gCounter != (iVar2 - (iVar2 >> 0x1f)) * 0xa) {
        return;
    }
    *(int *)(param_1 + 0x4acc) = *(int *)(param_1 + 0x4acc) + 0x1;
    if (*(uint *)(param_1 + 0x4acc) < 0x8) {
        return;
    }
    *(undefined4 *)(param_1 + 0x4acc) = 0x0;
    return;
}



void AnimatePauseKey(int param_1)

{
    int iVar1;
    
    if (gTheGame._89888_4_ == 0x0) {
        if (gTheGame._120328_4_ < 0x3) {
            *(undefined2 *)(param_1 + 0xc) = 0x140;
        }
        else {
            *(undefined2 *)(param_1 + 0xc) = 0x1a4;
        }
    }
    iVar1 = gTheGame._89888_4_ / 0x1e + (gTheGame._89888_4_ >> 0x1f);
    *(short *)(param_1 + 0xc) =
         (short)(((int)*(short *)(param_1 + 0xc) >> 0x2) -
                (int)(char)pushkeyShake[gTheGame._89888_4_ + (iVar1 - (iVar1 >> 0x1f)) * -0x1e]) *
         0x4;
    return;
}



void AnimatePushKey(int param_1)

{
    int iVar1;
    
    iVar1 = gWhatever / 0x1e + (gWhatever >> 0x1f);
    *(short *)(param_1 + 0xc) =
         (short)(((int)*(short *)(param_1 + 0xc) >> 0x2) -
                (int)(char)pushkeyShake[gWhatever + (iVar1 - (iVar1 >> 0x1f)) * -0x1e]) * 0x4;
    return;
}



void pon_Animate2DRanking4p(int param_1,int param_2,int param_3,int param_4,int param_5)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint *puVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    int *piVar10;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    
    local_1c = 0xfdf9fcf5;
    local_18 = 0xfbf1fb2f;
    iVar2 = 0x0;
    local_14 = 0xfa6dfb2f;
    local_10 = 0xfbf1fcf5;
    local_2c = 0xffabffa7;
    local_28 = 0xff9bfed3;
    local_24 = 0xff4dfed3;
    local_20 = 0xff9bffa7;
    local_3c = 0xbfed9fdd;
    local_38 = 0x6fd11f81;
    local_34 = 0x17011f81;
    local_30 = 0x6fd19fdd;
    local_4c = 0xbebfa63f;
    local_48 = 0x857f253f;
    local_44 = 0x2c7f253f;
    local_40 = 0x857fa63f;
    if (param_5 == -0x1) {
        piVar10 = (int *)(param_1 + 0x57b0);
        puVar6 = (uint *)(param_1 + 0x57b4);
    }
    else {
        piVar10 = (int *)(param_1 + 0x4adc);
        puVar6 = (uint *)(param_1 + 0x4acc);
    }
    if (param_4 != 0xd) {
        if (param_4 < 0xd) {
            if (param_4 == 0x9) {
                iVar9 = *piVar10;
                if (iVar9 < 0x0) {
                    *piVar10 = 0x27;
                }
                else {
                    cVar1 = winwordShake[iVar9];
                    *piVar10 = iVar9 + -0x1;
                    iVar2 = (int)cVar1;
                }
            }
            else if (0x8 < param_4) {
                iVar9 = *piVar10;
                if (iVar9 < 0x0) {
                    *piVar10 = 0x2;
                }
                else {
                    cVar1 = *(char *)((int)&losewordShake + iVar9);
                    *piVar10 = iVar9 + -0x1;
                    iVar2 = (int)cVar1;
                }
            }
        }
        else if (param_4 < 0xf) {
            tlu_ranking._74_2_ = 0xfa6d;
            tlu_ranking._84_2_ = 0xfb2f;
            tlu_ranking._96_2_ = 0xfbf1;
            tlu_ranking._100_2_ = 0xfcf5;
            tlu_ranking._108_2_ = 0xfdf9;
            tlu_ranking._202_2_ = 0x2c7f;
            tlu_ranking._206_2_ = 0x253f;
            tlu_ranking._216_2_ = 0x857f;
            tlu_ranking._224_2_ = 0xa63f;
            tlu_ranking._232_2_ = 0xbebf;
            tlu_ranking._324_2_ = 0x1701;
            tlu_ranking._328_2_ = 0x1f81;
            tlu_ranking._342_2_ = 0x6fd1;
            tlu_ranking._352_2_ = 0x9fdd;
            tlu_ranking._356_2_ = 0xbfed;
            tlu_ranking._404_2_ = 0xff9b;
            tlu_ranking._414_2_ = 0xffab;
            tlu_ranking._426_2_ = 0xffa7;
            tlu_ranking._462_2_ = 0xfed3;
            tlu_ranking._476_2_ = 0xff4d;
            return;
        }
    }
    *(short *)(param_2 + 0xc) = (short)(((int)*(short *)(param_2 + 0xc) >> 0x2) - iVar2) * 0x4;
    *(short *)(param_3 + 0xc) = (short)(((int)*(short *)(param_3 + 0xc) >> 0x2) - iVar2) * 0x4;
    if (gCounter ==
        (((int)gCounter >> 0x1) + (uint)((int)gCounter < 0x0 && (gCounter & 0x1) != 0x0)) * 0x2) {
        *puVar6 = *puVar6 + 0x1;
        if (0x7 < (int)*puVar6) {
            *puVar6 = 0x0;
        }
        uVar7 = *puVar6;
        iVar2 = (int)uVar7 >> 0x3;
        if (param_4 == 0xb) {
            uVar3 = uVar7 + 0x1;
            uVar4 = uVar7 + 0x2;
            uVar5 = uVar7 + 0x3;
            uVar8 = uVar7 + 0x4;
            tlu_ranking._356_2_ =
                 *(undefined2 *)
                  ((int)&local_3c +
                  (uVar7 + (iVar2 + (uint)((int)uVar7 < 0x0 && (uVar7 & 0x7) != 0x0)) * -0x8) * 0x2)
            ;
                    // WARNING: Read-only address (ram,0x000c78b4) is written
            tlu_ranking._352_2_ =
                 *(undefined2 *)
                  ((int)&local_3c +
                  (uVar3 + (((int)uVar3 >> 0x3) + (uint)((int)uVar3 < 0x0 && (uVar3 & 0x7) != 0x0))
                           * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c78b0) is written
            tlu_ranking._342_2_ =
                 *(undefined2 *)
                  ((int)&local_3c +
                  (uVar4 + (((int)uVar4 >> 0x3) + (uint)((int)uVar4 < 0x0 && (uVar4 & 0x7) != 0x0))
                           * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c78a6) is written
            tlu_ranking._328_2_ =
                 *(undefined2 *)
                  ((int)&local_3c +
                  (uVar5 + (((int)uVar5 >> 0x3) + (uint)((int)uVar5 < 0x0 && (uVar5 & 0x7) != 0x0))
                           * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c7898) is written
            tlu_ranking._324_2_ =
                 *(undefined2 *)
                  ((int)&local_3c +
                  (uVar8 + (((int)uVar8 >> 0x3) + (uint)((int)uVar8 < 0x0 && (uVar8 & 0x7) != 0x0))
                           * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c7894) is written
        }
        else if (param_4 < 0xb) {
            if (param_4 == 0x9) {
                uVar3 = uVar7 + 0x1;
                uVar4 = uVar7 + 0x2;
                uVar5 = uVar7 + 0x3;
                uVar8 = uVar7 + 0x4;
                tlu_ranking._108_2_ =
                     *(undefined2 *)
                      ((int)&local_1c +
                      (uVar7 + (iVar2 + (uint)((int)uVar7 < 0x0 && (uVar7 & 0x7) != 0x0)) * -0x8) *
                      0x2);
                    // WARNING: Read-only address (ram,0x000c77bc) is written
                tlu_ranking._100_2_ =
                     *(undefined2 *)
                      ((int)&local_1c +
                      (uVar3 + (((int)uVar3 >> 0x3) +
                               (uint)((int)uVar3 < 0x0 && (uVar3 & 0x7) != 0x0)) * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c77b4) is written
                tlu_ranking._96_2_ =
                     *(undefined2 *)
                      ((int)&local_1c +
                      (uVar4 + (((int)uVar4 >> 0x3) +
                               (uint)((int)uVar4 < 0x0 && (uVar4 & 0x7) != 0x0)) * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c77b0) is written
                tlu_ranking._84_2_ =
                     *(undefined2 *)
                      ((int)&local_1c +
                      (uVar5 + (((int)uVar5 >> 0x3) +
                               (uint)((int)uVar5 < 0x0 && (uVar5 & 0x7) != 0x0)) * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c77a4) is written
                tlu_ranking._74_2_ =
                     *(undefined2 *)
                      ((int)&local_1c +
                      (uVar8 + (((int)uVar8 >> 0x3) +
                               (uint)((int)uVar8 < 0x0 && (uVar8 & 0x7) != 0x0)) * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c779a) is written
            }
            else if (0x8 < param_4) {
                uVar3 = uVar7 + 0x1;
                uVar4 = uVar7 + 0x2;
                uVar5 = uVar7 + 0x3;
                uVar8 = uVar7 + 0x4;
                tlu_ranking._414_2_ =
                     *(undefined2 *)
                      ((int)&local_2c +
                      (uVar7 + (iVar2 + (uint)((int)uVar7 < 0x0 && (uVar7 & 0x7) != 0x0)) * -0x8) *
                      0x2);
                    // WARNING: Read-only address (ram,0x000c78ee) is written
                tlu_ranking._426_2_ =
                     *(undefined2 *)
                      ((int)&local_2c +
                      (uVar3 + (((int)uVar3 >> 0x3) +
                               (uint)((int)uVar3 < 0x0 && (uVar3 & 0x7) != 0x0)) * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c78fa) is written
                tlu_ranking._404_2_ =
                     *(undefined2 *)
                      ((int)&local_2c +
                      (uVar4 + (((int)uVar4 >> 0x3) +
                               (uint)((int)uVar4 < 0x0 && (uVar4 & 0x7) != 0x0)) * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c78e4) is written
                tlu_ranking._476_2_ =
                     *(undefined2 *)
                      ((int)&local_2c +
                      (uVar5 + (((int)uVar5 >> 0x3) +
                               (uint)((int)uVar5 < 0x0 && (uVar5 & 0x7) != 0x0)) * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c792c) is written
                tlu_ranking._462_2_ =
                     *(undefined2 *)
                      ((int)&local_2c +
                      (uVar8 + (((int)uVar8 >> 0x3) +
                               (uint)((int)uVar8 < 0x0 && (uVar8 & 0x7) != 0x0)) * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c791e) is written
            }
        }
        else if (param_4 < 0xd) {
            uVar3 = uVar7 + 0x1;
            uVar4 = uVar7 + 0x2;
            uVar5 = uVar7 + 0x3;
            uVar8 = uVar7 + 0x4;
            tlu_ranking._232_2_ =
                 *(undefined2 *)
                  ((int)&local_4c +
                  (uVar7 + (iVar2 + (uint)((int)uVar7 < 0x0 && (uVar7 & 0x7) != 0x0)) * -0x8) * 0x2)
            ;
                    // WARNING: Read-only address (ram,0x000c7838) is written
            tlu_ranking._224_2_ =
                 *(undefined2 *)
                  ((int)&local_4c +
                  (uVar3 + (((int)uVar3 >> 0x3) + (uint)((int)uVar3 < 0x0 && (uVar3 & 0x7) != 0x0))
                           * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c7830) is written
            tlu_ranking._216_2_ =
                 *(undefined2 *)
                  ((int)&local_4c +
                  (uVar4 + (((int)uVar4 >> 0x3) + (uint)((int)uVar4 < 0x0 && (uVar4 & 0x7) != 0x0))
                           * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c7828) is written
            tlu_ranking._206_2_ =
                 *(undefined2 *)
                  ((int)&local_4c +
                  (uVar5 + (((int)uVar5 >> 0x3) + (uint)((int)uVar5 < 0x0 && (uVar5 & 0x7) != 0x0))
                           * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c781e) is written
            tlu_ranking._202_2_ =
                 *(undefined2 *)
                  ((int)&local_4c +
                  (uVar8 + (((int)uVar8 >> 0x3) + (uint)((int)uVar8 < 0x0 && (uVar8 & 0x7) != 0x0))
                           * -0x8) * 0x2);
                    // WARNING: Read-only address (ram,0x000c781a) is written
        }
    }
                    // WARNING: Read-only address (ram,0x000c779a) is written
                    // WARNING: Read-only address (ram,0x000c77a4) is written
                    // WARNING: Read-only address (ram,0x000c77b0) is written
                    // WARNING: Read-only address (ram,0x000c77b4) is written
                    // WARNING: Read-only address (ram,0x000c77bc) is written
                    // WARNING: Read-only address (ram,0x000c781a) is written
                    // WARNING: Read-only address (ram,0x000c781e) is written
                    // WARNING: Read-only address (ram,0x000c7828) is written
                    // WARNING: Read-only address (ram,0x000c7830) is written
                    // WARNING: Read-only address (ram,0x000c7838) is written
                    // WARNING: Read-only address (ram,0x000c7894) is written
                    // WARNING: Read-only address (ram,0x000c7898) is written
                    // WARNING: Read-only address (ram,0x000c78a6) is written
                    // WARNING: Read-only address (ram,0x000c78b0) is written
                    // WARNING: Read-only address (ram,0x000c78b4) is written
                    // WARNING: Read-only address (ram,0x000c78e4) is written
                    // WARNING: Read-only address (ram,0x000c78ee) is written
                    // WARNING: Read-only address (ram,0x000c78fa) is written
                    // WARNING: Read-only address (ram,0x000c791e) is written
                    // WARNING: Read-only address (ram,0x000c792c) is written
    return;
}

