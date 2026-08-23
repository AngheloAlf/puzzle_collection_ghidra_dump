

void InitBonus(void)

{
    int *piVar1;
    byte bVar2;
    undefined4 uVar3;
    int iVar4;
    undefined4 *puVar5;
    int iVar6;
    undefined1 *puVar7;
    int *piVar8;
    undefined1 *puVar9;
    int iVar10;
    undefined4 *puVar11;
    int iVar12;
    undefined4 local_f0;
    undefined2 local_ec;
    byte abStack_ea [0x2];
    undefined4 local_e8;
    undefined4 local_e4;
    undefined4 local_e0;
    undefined4 local_dc;
    undefined4 local_d8;
    undefined4 local_d4;
    undefined4 local_d0;
    undefined2 local_cc;
    int local_c8 [0x24];
    int local_38;
    int local_34;
    int local_30;
    int local_2c;
    
    iVar12 = 0x12;
    local_38 = 0x20;
    local_34 = 0x100;
    local_30 = 0xc8;
    local_2c = 0x18;
    puVar11 = (undefined4 *)(_100 + 0x8);
    puVar5 = &local_d0;
    do {
        uVar3 = puVar11[0x3];
        puVar5[0x2] = puVar11[0x2];
        puVar5[0x3] = uVar3;
        iVar12 += -0x1;
        puVar11 = puVar11 + 0x2;
        puVar5 = puVar5 + 0x2;
    } while (iVar12 != 0x0);
    local_e8 = 0x20a0214;
    local_e4 = 0x70002;
    local_e0 = 0x1306000d;
    local_dc = 0x131301;
    local_d8 = 0x132f0016;
    local_d4 = 0x130d1318;
    local_d0 = 0x20b0218;
    local_cc = 0x12;
    local_f0 = 0x1d304356;
    local_ec = 0x697c;
    gCounter = 0x0;
    pon_ClearHeap();
    nextSegment = Pon_Image_Heap;
    n642Dolphin_AllchangeTexture();
    iVar12 = gc_ending;
    if (((gSelection == 0x96) && (gTheGame._89856_4_ != 0x7)) && (gTheGame._90128_4_ != 0x8)) {
        ForceLoadSong(0x24,0x0);
        PlayMIDI(BGM_INIT_TABLE,0x24,0x0,0x0);
    }
    puVar7 = gTheGame;
    gTheGame._119512_4_ = iVar12;
    pon_guS2DInitBg(0x2be110);
    gTheGame._102368_4_ = 0x30;
    gTheGame._102372_4_ = iVar12 + 0x24400;
    gTheGame._102376_2_ = 0x100;
    iVar6 = 0x0;
    gTheGame._102378_2_ = (short)local_38 + -0x1;
    gTheGame._102380_2_ = 0x0;
    gTheGame._102382_2_ = 0x0;
    gTheGame._102384_4_ = 0xffffffff;
    gTheGame._102388_4_ = 0x0;
    piVar8 = local_c8;
    gTheGame._102392_4_ = 0x30;
    iVar10 = local_38 * 0x2 + 0x24400;
    gTheGame._102396_4_ = iVar12 + iVar10;
    gTheGame._102400_2_ = 0x100;
    gTheGame._102402_2_ = (short)local_34 + -0x1;
    gTheGame._102404_2_ = 0x0;
    gTheGame._102406_2_ = 0x0;
    gTheGame._102408_4_ = 0xffffffff;
    gTheGame._102412_4_ = 0x0;
    gTheGame._102416_4_ = 0x30;
    iVar10 += local_34 * 0x2;
    gTheGame._102420_4_ = iVar12 + iVar10;
    gTheGame._102424_2_ = 0x100;
    gTheGame._102426_2_ = (short)local_30 + -0x1;
    gTheGame._102428_2_ = 0x0;
    gTheGame._102430_2_ = 0x0;
    gTheGame._102432_4_ = 0xffffffff;
    gTheGame._102436_4_ = 0x0;
    gTheGame._102440_4_ = 0x30;
    iVar10 += local_30 * 0x2;
    gTheGame._102444_4_ = iVar12 + iVar10;
    gTheGame._102448_2_ = 0x100;
    gTheGame._102450_2_ = (short)local_2c + -0x1;
    gTheGame._102452_2_ = 0x0;
    gTheGame._102454_2_ = 0x0;
    gTheGame._102456_4_ = 0xffffffff;
    gTheGame._102460_4_ = 0x0;
    iVar10 += local_2c * 0x2;
    puVar9 = puVar7;
    do {
        *(undefined2 *)(puVar9 + 0x193a0) = 0x0;
        *(short *)(puVar9 + 0x193a2) = (short)(*piVar8 << 0x2);
        *(short *)(puVar9 + 0x193a4) = (short)(piVar8[0x2] << 0x2);
        *(short *)(puVar9 + 0x193a6) = (short)(*piVar8 << 0x2);
        *(undefined2 *)(puVar9 + 0x193a8) = 0x0;
        *(short *)(puVar9 + 0x193aa) = (short)(piVar8[0x1] << 0x2);
        *(short *)(puVar9 + 0x193ac) = (short)(piVar8[0x3] << 0x2);
        *(short *)(puVar9 + 0x193ae) = (short)(piVar8[0x1] << 0x2);
        *(int *)(puVar9 + 0x193b0) = iVar12 + iVar10;
        *(undefined2 *)(puVar9 + 0x193b4) = 0xfff4;
        puVar9[0x193b6] = 0x2;
        puVar9[0x193b7] = 0x1;
        *(undefined2 *)(puVar9 + 0x193b8) = 0x0;
        *(undefined2 *)(puVar9 + 0x193ba) = 0x0;
        pon_guS2DInitBg();
        iVar4 = *piVar8;
        iVar6 += 0x1;
        piVar1 = piVar8 + 0x1;
        piVar8 = piVar8 + 0x4;
        iVar10 += iVar4 * *piVar1;
        puVar9 = puVar9 + 0x28;
    } while (iVar6 < 0x9);
    if (gSelection == 0x96) {
        pon_InitLevel(gWorld,0x1,0x1,0x0);
        if (gWorld < 0x1) {
            gc_assert(0x0,&_156,0x1c4,_157,0x0,0x0,0x0);
        }
        gTheGame._105354_2_ = 0x1;
        gTheGame._105332_2_ = (0xad - (ushort)abStack_ea[gWorld * 0x2]) * 0x4;
        gTheGame._105340_2_ = (0x2a - (ushort)abStack_ea[gWorld * 0x2 + 0x1]) * 0x4;
        gTheGame._105334_2_ = 0x1b0;
        if (gTheGame._105332_2_ >> 0x2 == 0xab) {
            gTheGame._105332_2_ = 0x25c;
        }
        iVar12 = 0x0;
        puVar9 = gTheGame;
        puVar11 = &local_f0;
        do {
            InitTetrisState(puVar9);
            iVar12 += 0x1;
            *(ushort *)(puVar7 + 0x3f10) = (ushort)*(byte *)puVar11 << 0x2;
            *(undefined2 *)(puVar7 + 0x3f18) = 0xffb0;
            *(undefined2 *)(puVar7 + 0x3f12) = 0x400;
            *(undefined2 *)(puVar7 + 0x3f1a) = 0x400;
            *(undefined2 *)(puVar7 + 0x3f14) = 0x200;
            *(undefined2 *)(puVar7 + 0x3f1c) = 0x200;
            puVar7 = puVar7 + 0x18;
            bVar2 = *(byte *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 0x1);
            *(uint *)(puVar9 + 0x4) = (uint)bVar2;
            puVar9 = puVar9 + 0x2c;
        } while (iVar12 < 0x6);
    }
    gTheGame._19148_4_ = 0x0;
    gTheGame._19164_4_ = 0x0;
    gWhatever = 0x0;
    return;
}



void DoBonus(void)

{
    undefined4 uVar1;
    int iVar2;
    undefined1 *puVar3;
    undefined6 *puVar4;
    int iVar5;
    undefined4 *puVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    char *pcVar15;
    int iVar16;
    undefined1 *puVar17;
    int iVar18;
    undefined4 local_1c4;
    undefined4 local_1c0;
    undefined4 local_1bc;
    undefined4 local_1b8;
    undefined4 local_1b4;
    int local_1b0 [0x64];
    char acStack_20 [0xc];
    
    iVar18 = 0x32;
    iVar2 = 0x0;
    iVar16 = 0x0;
    pcVar15 = NULL;
    puVar4 = &_103;
    puVar6 = &local_1b8;
    do {
        uVar1 = *(undefined4 *)(puVar4 + 0x2);
        puVar6[0x2] = *(undefined4 *)(undefined6 *)((int)puVar4 + 0x8);
        puVar6[0x3] = uVar1;
        iVar18 += -0x1;
        puVar4 = (undefined6 *)((int)puVar4 + 0x8);
        puVar6 = puVar6 + 0x2;
    } while (iVar18 != 0x0);
    local_1c4 = 0xf81df01b;
    local_1c0 = 0xe019c817;
    local_1bc = 0xb815a813;
    local_1b8 = 0xb815c817;
    local_1b4 = 0xe019f01b;
    gTheGame._117120_4_ = 0xffffffff;
    gTheGame._117152_4_ = 0xffffffff;
    gTheGame._117184_4_ = 0xffffffff;
    gTheGame._117216_4_ = 0xffffffff;
    gTheGame._117248_4_ = 0xffffffff;
    gTheGame._117088_4_ = 0x5;
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
    gTheGame._119168_4_ = 0xffffffff;
    gTheGame._119200_4_ = 0xffffffff;
    gTheGame._119232_4_ = 0xffffffff;
    gTheGame._119264_4_ = 0xffffffff;
    gTheGame._119296_4_ = 0xffffffff;
    iVar5 = 0x2a16e8;
    iVar18 = 0x1;
    if (true) {
        do {
            *(undefined4 *)(iVar5 + 0x1c980) = 0xffffffff;
            iVar5 += 0x20;
            iVar18 += -0x1;
        } while (iVar18 != 0x0);
    }
    puVar3 = gTheGame;
    if (gSelection == 0x96) {
        if (gWhatever == 0x0) {
            iVar2 = DoGameOverTryAgain();
        }
        if ((iVar2 != 0x0) || (gWhatever != 0x0)) {
            if ((gWhatever == 0x0) && (gTheGame._120356_4_ == 0x0)) {
                if (gTheGame._120360_4_ == 0x3) {
                    pcVar15 = (char *)(gPlayer._0_4_ + 0x176);
                }
                else if (gTheGame._120360_4_ < 0x3) {
                    if (gTheGame._120360_4_ == 0x1) {
                        pcVar15 = (char *)(gPlayer._0_4_ + 0x174);
                    }
                    else if (0x0 < gTheGame._120360_4_) {
                        pcVar15 = (char *)(gPlayer._0_4_ + 0x175);
                    }
                }
                else if (gTheGame._120360_4_ == 0x5) {
                    pcVar15 = (char *)(gPlayer._0_4_ + 0x178);
                }
                else if (gTheGame._120360_4_ < 0x5) {
                    pcVar15 = (char *)(gPlayer._0_4_ + 0x177);
                }
                if (gTheGame._120368_4_ < 0x63) {
                    gTheGame._120368_4_ += 0x1;
                }
                if (*pcVar15 < 'c') {
                    *pcVar15 = *pcVar15 + '\x01';
                }
            }
            gWhatever += 0x1;
            if (0x13 < gWhatever) {
                gReset = 0xffffffff;
                if (gTheGame._120356_4_ == 0x0) {
                    SaveRom();
                    if ((gTheGame._120364_4_ < 0xa) || (0xd < gTheGame._120364_4_)) {
                        gMain = 0x384;
                    }
                    else {
                        gMain = 0x383;
                        if (gTheGame._120360_4_ == 0x3) {
                            *(ushort *)(gPlayer._0_4_ + 0x17e) =
                                 *(ushort *)(gPlayer._0_4_ + 0x17e) | 0x8000;
                        }
                        else if (gTheGame._120360_4_ < 0x3) {
                            if (gTheGame._120360_4_ == 0x1) {
                                *(ushort *)(gPlayer._0_4_ + 0x17a) =
                                     *(ushort *)(gPlayer._0_4_ + 0x17a) | 0x8000;
                            }
                            else if (0x0 < gTheGame._120360_4_) {
                                *(ushort *)(gPlayer._0_4_ + 0x17c) =
                                     *(ushort *)(gPlayer._0_4_ + 0x17c) | 0x8000;
                            }
                        }
                        else if (gTheGame._120360_4_ == 0x5) {
                            *(ushort *)(gPlayer._0_4_ + 0x182) =
                                 *(ushort *)(gPlayer._0_4_ + 0x182) | 0x8000;
                        }
                        else if (gTheGame._120360_4_ < 0x5) {
                            *(ushort *)(gPlayer._0_4_ + 0x180) =
                                 *(ushort *)(gPlayer._0_4_ + 0x180) | 0x8000;
                        }
                    }
                }
                else {
                    gMain = 0x258;
                }
            }
        }
        if (gTheGame._19164_4_ < 0x0) {
            gTheGame._19164_4_ = 0x27;
        }
        else {
            pcVar15 = gameoverBounce + gTheGame._19164_4_;
            gTheGame._19164_4_ += -0x1;
            iVar16 = (int)*pcVar15;
        }
        iVar2 = 0x0;
        gTheGame._103460_2_ = (short)(((int)gTheGame._103460_2_ >> 0x2) - iVar16) * 0x4;
        puVar17 = gTheGame;
        do {
            if (*(int *)(puVar3 + 0x10) == 0x0) {
                iVar18 = AnimationRandom(0x1f4);
                iVar16 = iVar18 / 0x15 + (iVar18 >> 0x1f);
                if (iVar18 == (iVar16 - (iVar16 >> 0x1f)) * 0x15) {
                    uVar1 = RandomBlock(gTheGame);
                    *(undefined4 *)(puVar3 + 0x10) = uVar1;
                    Init2DTetrisTMEM(puVar3,puVar17 + 0x3f10);
                    *(short *)(puVar17 + 0x3f10) = (short)(*(int *)(puVar3 + 0x4) << 0x2);
                }
            }
            else {
                iVar16 = (int)*(short *)(puVar17 + 0x3f18) >> 0x2;
                if (iVar16 < 0x28) {
                    iVar16 += 0x4;
                }
                else if (iVar16 < 0x32) {
                    iVar16 += 0x5;
                }
                else if (iVar16 < 0x82) {
                    iVar16 += 0x6;
                }
                else {
                    iVar16 += 0x7;
                }
                if (0xef < iVar16) {
                    *(undefined4 *)(puVar3 + 0x10) = 0x0;
                    iVar16 = -0x14;
                    *(undefined4 *)(puVar3 + 0x8) = 0x0;
                }
                iVar18 = gTheGame._140_4_;
                if (iVar2 == 0x3) {
                    if ((0x59 < iVar16) && (gTheGame._140_4_ == 0x0)) {
                        gTheGame._144_4_ = 0x8;
                    }
                    if ((0x59 < iVar16) || (gTheGame._140_4_ != 0x0)) {
                        if (gTheGame._144_4_ != 0x0) {
                            gTheGame._144_4_ += -0x1;
                        }
                        iVar18 = gTheGame._140_4_ + 0x1;
                        if (0x1 < iVar18) {
                            gTheGame._16216_2_ =
                                 (short)(local_1b0[(gTheGame._140_4_ + -0x1) * 0x2] + 0x5a) * 0x4;
                            iVar16 = local_1b0[(gTheGame._140_4_ + -0x1) * 0x2 + 0x1] + -0x21;
                        }
                    }
                }
                else if (((iVar2 < 0x3) && (iVar2 == 0x0)) &&
                        ((0xa8 < iVar16 || (gTheGame._8_4_ != 0x0)))) {
                    gTheGame._8_4_ += 0x1;
                    gTheGame._16144_2_ = (short)(((int)gTheGame._16144_2_ >> 0x2) + -0x2) * 0x4;
                    if ((0x1 < gTheGame._8_4_) && (gTheGame._8_4_ < 0x10)) {
                        iVar16 += -0x8;
                    }
                }
                gTheGame._140_4_ = iVar18;
                *(short *)(puVar17 + 0x3f18) = (short)(iVar16 << 0x2);
            }
            iVar2 += 0x1;
            puVar3 = puVar3 + 0x2c;
            puVar17 = puVar17 + 0x18;
        } while (iVar2 < 0x6);
        sprintf(acStack_20,(char *)&_272,gTheGame._120368_4_);
        SetText(0x103,0x17,acStack_20,0x17);
        iVar2 = gTheGame._102420_4_;
        iVar16 = gCounter / 0xa + (gCounter >> 0x1f);
        if (gCounter == (iVar16 - (iVar16 >> 0x1f)) * 0xa) {
            gTheGame._19148_4_ += 0x1;
            if (0x9 < gTheGame._19148_4_) {
                gTheGame._19148_4_ = 0x0;
            }
            iVar13 = gTheGame._19148_4_ + 0x1;
            iVar16 = (int)gTheGame._19148_4_ / 0xa + ((int)gTheGame._19148_4_ >> 0x1f);
            iVar14 = gTheGame._19148_4_ + 0x2;
            iVar7 = iVar13 / 0xa + (iVar13 >> 0x1f);
            iVar12 = gTheGame._19148_4_ + 0x3;
            iVar10 = iVar14 / 0xa + (iVar14 >> 0x1f);
            iVar11 = gTheGame._19148_4_ + 0x4;
            iVar8 = iVar12 / 0xa + (iVar12 >> 0x1f);
            iVar9 = gTheGame._19148_4_ + 0x5;
            iVar5 = iVar11 / 0xa + (iVar11 >> 0x1f);
            iVar18 = iVar9 / 0xa + (iVar9 >> 0x1f);
            *(undefined2 *)(gTheGame._102420_4_ + 0x54) =
                 *(undefined2 *)
                  ((int)&local_1c4 + (gTheGame._19148_4_ + (iVar16 - (iVar16 >> 0x1f)) * -0xa) * 0x2
                  );
            *(undefined2 *)(iVar2 + 0xa8) =
                 *(undefined2 *)
                  ((int)&local_1c4 + (iVar13 + (iVar7 - (iVar7 >> 0x1f)) * -0xa) * 0x2);
            *(undefined2 *)(iVar2 + 0xd8) =
                 *(undefined2 *)
                  ((int)&local_1c4 + (iVar14 + (iVar10 - (iVar10 >> 0x1f)) * -0xa) * 0x2);
            *(undefined2 *)(iVar2 + 0x13a) =
                 *(undefined2 *)
                  ((int)&local_1c4 + (iVar12 + (iVar8 - (iVar8 >> 0x1f)) * -0xa) * 0x2);
            *(undefined2 *)(iVar2 + 0x154) =
                 *(undefined2 *)
                  ((int)&local_1c4 + (iVar11 + (iVar5 - (iVar5 >> 0x1f)) * -0xa) * 0x2);
            *(undefined2 *)(iVar2 + 0x172) =
                 *(undefined2 *)
                  ((int)&local_1c4 + (iVar9 + (iVar18 - (iVar18 >> 0x1f)) * -0xa) * 0x2);
        }
    }
    else {
        iVar2 = DoWatchMenu();
        if (iVar2 != 0x0) {
            gReset = 0xffffffff;
            gMain = 0x258;
        }
    }
    return;
}



void DrawBonus(int param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    int iVar4;
    
    if (((gSelection == 0x96) && (gTheGame._89856_4_ != 0x7)) && (gTheGame._90128_4_ != 0x8)) {
        Draw2DBigScreen(0x2b9e28,0x2ba1e8);
        Draw2DBigScreen(0x2b9f18,0x2ba9b8);
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe3000a01;
        glistp = puVar2;
        puVar1[0x1] = 0x200000;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        pon_gSPBgRectCopy(&glistp,0x2be110);
        if (*(int *)(param_1 + 0x1c4f4) == 0x0) {
            Draw2DBigScreen(0x2b9e40,0x2ba210);
        }
        else {
            Draw2DBigScreen(0x2b9e40,0x2ba238);
        }
        gTheGame._103498_2_ = 0x2c;
        Draw2DBigScreen(0x2b9e70,0x2ba288);
        if (gTheGame._120356_4_ == 0x0) {
            Draw2DBigScreen(0x2b9e70,0x2ba2b0);
            Draw2DBigScreen(0x2b9e70,0x2ba328);
        }
        else {
            Draw2DBigScreen(0x2b9e70,0x2ba2d8);
            Draw2DBigScreen(0x2b9e70,0x2ba300);
        }
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
        *glistp = 0xe3001001;
        glistp = puVar2;
        puVar1[0x1] = 0x8000;
        pon_gSPObjLoadTxtr(&glistp,colorLUT);
        iVar3 = 0x0;
        iVar4 = param_1;
        do {
            pon_gSPObjLoadTxtr(&glistp,&tetrisBlock3);
            pon_gSPObjRectangle(&glistp,iVar4 + 0x2c4e8);
            iVar3 += 0x1;
            iVar4 += 0x18;
        } while (iVar3 < 0x6);
        gTheGame._103458_2_ = 0xc8;
        Draw2DBigScreen(0x2b9e58,0x2ba260);
        Draw2DText(param_1);
    }
    return;
}



int DoWatchMenu(void)

{
    int iVar1;
    
    iVar1 = 0x0;
    if ((gTheGame._90948_2_ & 0x9000) == 0x0) {
        if ((gTheGame._90948_2_ & 0x4000) != 0x0) {
            iVar1 = 0x2;
        }
    }
    else {
        iVar1 = 0x1;
    }
    if (iVar1 != 0x0) {
        return iVar1;
    }
    return 0x0;
}



void DoCountDown(void)

{
    ushort uVar1;
    ushort uVar2;
    int iVar3;
    int iVar4;
    undefined1 *puVar5;
    undefined1 *puVar6;
    uint uVar7;
    undefined1 *puVar8;
    undefined1 *puVar9;
    undefined1 *puVar10;
    
    if (gSelection < 0x82) {
        gMain = 0x387;
    }
    else if ((gSelection == 0x82) && (0xe < (int)gCounter)) {
        PlaySE(SFX_INIT_TABLE,0x2c);
        gMain = 0x387;
    }
    gTheGame._117088_4_ = 0x5;
    gTheGame._117280_4_ = 0xffffffff;
    uVar7 = 0x45;
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
    gTheGame._119168_4_ = 0xffffffff;
    gTheGame._119200_4_ = 0xffffffff;
    gTheGame._119232_4_ = 0xffffffff;
    gTheGame._119264_4_ = 0xffffffff;
    gTheGame._119296_4_ = 0xffffffff;
    iVar4 = 0x2a16e8;
    iVar3 = 0x1;
    if (true) {
        do {
            *(undefined4 *)(iVar4 + 0x1c980) = 0xffffffff;
            iVar4 += 0x20;
            uVar7 += 0x1;
            iVar3 += -0x1;
        } while (iVar3 != 0x0);
    }
    if (0x3b < (int)gCounter) {
        DoGameFade(0x1);
    }
    if (gMain == 0x384) {
        if ((int)gCounter < 0x3d) {
            gCountDown._0_2_ = 0xfd80;
            gCountDown._24_2_ = 0xfd80;
            gCountDown._48_2_ = 0xfd80;
            gCountDown._72_2_ = 0xfd80;
            gCountDown._96_2_ = 0xfd80;
            gCountDown._120_2_ = 0xfd80;
            gCountDown._144_2_ = 0xfd80;
            gCountDown._168_2_ = 0xfd80;
        }
        else if (gTheGame._120328_4_ == 0x1) {
            gCountDown._0_2_ = 0x228;
            gCountDown._8_2_ = 0x140;
        }
        else if (gTheGame._120328_4_ == 0x2) {
            gCountDown._0_2_ = 0xc0;
            gCountDown._24_2_ = 0x354;
            gCountDown._8_2_ = 0x140;
            gCountDown._32_2_ = 0x140;
        }
        else {
            gCountDown._0_2_ = 0x70;
            gCountDown._24_2_ = 0x180;
            gCountDown._48_2_ = 0x290;
            gCountDown._72_2_ = 0x3a0;
            gCountDown._8_2_ = 0x1a4;
            gCountDown._32_2_ = 0x1a4;
            gCountDown._56_2_ = 0x1a4;
            gCountDown._80_2_ = 0x1a4;
        }
        if (gCounter == 0xb4) {
            PlaySE(SFX_INIT_TABLE,0x2a);
        }
        else if ((int)gCounter < 0xb4) {
            if (gCounter == 0x78) {
                PlaySE(SFX_INIT_TABLE,0x29);
            }
        }
        else if (gCounter == 0x12c) {
            PlaySE(SFX_INIT_TABLE,0x2c);
        }
        else if (((int)gCounter < 0x12c) && (gCounter == 0xf0)) {
            PlaySE(SFX_INIT_TABLE,0x2b);
        }
        if (((int)gCounter < 0x78) || (0xb3 < (int)gCounter)) {
            if (((int)gCounter < 0xb4) || (0xef < (int)gCounter)) {
                if (((int)gCounter < 0xf0) || (0x12a < (int)gCounter)) {
                    if ((int)gCounter < 0x12c) {
                        gCountDown._114_2_ = 0x86;
                        gCountDown._138_2_ = 0x86;
                        gCountDown._162_2_ = 0x86;
                        gCountDown._186_2_ = 0x86;
                    }
                    else {
                        gMain = 0x387;
                        gWhatever = 0x0;
                        gTheGame._89892_4_ = 0x1;
                        gTheGame._90164_4_ = 0x1;
                        gTheGame._90436_4_ = 0x1;
                        gTheGame._90708_4_ = 0x1;
                        gCountDown._114_2_ = 0x86;
                        gCountDown._138_2_ = 0x86;
                        gCountDown._162_2_ = 0x86;
                        gCountDown._186_2_ = 0x86;
                    }
                }
                else {
                    gCountDown._114_2_ = 0x84;
                    gCountDown._138_2_ = 0x84;
                    gCountDown._162_2_ = 0x84;
                    gCountDown._186_2_ = 0x84;
                }
            }
            else {
                gCountDown._114_2_ = 0x82;
                gCountDown._138_2_ = 0x82;
                gCountDown._162_2_ = 0x82;
                gCountDown._186_2_ = 0x82;
            }
        }
        else {
            gCountDown._114_2_ = 0x80;
            gCountDown._138_2_ = 0x80;
            gCountDown._162_2_ = 0x80;
            gCountDown._186_2_ = 0x80;
        }
        if (gTheGame._120328_4_ == 0x1) {
            gCountDown._96_2_ = 0x280;
            gCountDown._104_2_ = 0x190;
        }
        else if (gTheGame._120328_4_ == 0x2) {
            gCountDown._96_2_ = 0x118;
            gCountDown._120_2_ = 0x3ac;
            gCountDown._104_2_ = 0x190;
            gCountDown._128_2_ = 0x190;
        }
        else {
            gCountDown._96_2_ = 0xc8;
            gCountDown._120_2_ = 0x1d8;
            gCountDown._144_2_ = 0x2e8;
            gCountDown._168_2_ = 0x3f8;
            gCountDown._104_2_ = 0x1f4;
            gCountDown._128_2_ = 0x1f4;
            gCountDown._152_2_ = 0x1f4;
            gCountDown._176_2_ = 0x1f4;
        }
    }
    if (gTheGame._120328_4_ < 0x3) {
        UpdateText();
    }
    else {
        pon_UpdateText4p();
    }
    puVar8 = gTheGame;
    puVar6 = brainbrain;
    iVar3 = 0x0;
    puVar5 = puVar8;
    puVar9 = puVar8;
    do {
        if (gTheGame._120328_4_ <= iVar3) {
            peelTick();
            return;
        }
        uVar1 = *(ushort *)(puVar8 + 0x16344);
        uVar2 = *(ushort *)(puVar8 + 0x16346);
        puVar10 = puVar5 + 0x15f00;
        if (*(int *)(puVar5 + 0x16000) != 0x1) {
            if (gMain == 0x384) {
                if (gTheGame._120332_4_ == 0x2) {
                    if (0.0 <= *(float *)(puVar9 + 0x4768)) {
                        *(undefined4 *)(puVar9 + 0x4768) = 0x0;
                    }
                    else {
                        *(float *)(puVar9 + 0x4768) = *(float *)(puVar9 + 0x4768) + 0.016;
                        if (*(int *)(puVar5 + 0x15f18) == 0x0) {
                            Move3DCursorLeft(puVar10,*(undefined4 *)(puVar8 + 0x16348));
                        }
                    }
                }
                if ((((int)gCounter < 0x1f) || ((uVar1 & 0x1000) == 0x0)) ||
                   ((*(int *)(puVar6 + 0xc) != -0x1 && (gDemo != 0xb)))) {
                    UpdateAnimation(puVar9,iVar3,0x0);
LAB_0004f2dc:
                    if (0x3c < (int)gCounter) {
                        if (gTheGame._120332_4_ == 0x1) {
                            if ((int)gCounter < 0x50) {
                                if (gCounter ==
                                    (((int)gCounter >> 0x1) +
                                    (uint)((int)gCounter < 0x0 && (gCounter & 0x1) != 0x0)) * 0x2) {
                                    if (*(int *)(puVar5 + 0x15f14) < 0x6) {
                                        if (0x2 < *(int *)(puVar5 + 0x15f10)) {
                                            Move2DCursorLeft(puVar10,0xffffffff);
                                        }
                                    }
                                    else {
                                        Move2DCursorDown(puVar10,0xffffffff);
                                    }
                                }
                            }
                            else if (*(int *)(puVar6 + 0xc) == -0x1) {
                                if ((uVar2 & 0x800) == 0x0) {
                                    if ((uVar2 & 0x400) == 0x0) {
                                        if ((uVar2 & 0x200) == 0x0) {
                                            if ((uVar2 & 0x100) != 0x0) {
                                                Move2DCursorRight(puVar10,*(undefined4 *)
                                                                           (puVar8 + 0x16348));
                                            }
                                        }
                                        else {
                                            Move2DCursorLeft(puVar10,*(undefined4 *)
                                                                      (puVar8 + 0x16348));
                                        }
                                    }
                                    else {
                                        Move2DCursorDown(puVar10,*(undefined4 *)(puVar8 + 0x16348));
                                    }
                                }
                                else {
                                    Move2DCursorUp(puVar9,puVar10,*(undefined4 *)(puVar8 + 0x16348))
                                    ;
                                }
                            }
                        }
                        else if (0x4f < (int)gCounter) {
                            if ((uVar2 & 0x800) == 0x0) {
                                if ((uVar2 & 0x400) == 0x0) {
                                    if ((uVar2 & 0x200) == 0x0) {
                                        if ((uVar2 & 0x100) != 0x0) {
                                            Move3DCursorRight(puVar10,*(undefined4 *)
                                                                       (puVar8 + 0x16348));
                                        }
                                    }
                                    else {
                                        Move3DCursorLeft(puVar10,*(undefined4 *)(puVar8 + 0x16348));
                                    }
                                }
                                else {
                                    Move3DCursorDown(puVar10,*(undefined4 *)(puVar8 + 0x16348));
                                }
                            }
                            else {
                                Move3DCursorUp(puVar9,puVar10,*(undefined4 *)(puVar8 + 0x16348));
                            }
                        }
                    }
                    UpdateCursor(puVar9,puVar10);
                    if (gTheGame._120332_4_ == 0x2) {
                        Check3DVisibleBlocks(puVar9,puVar10);
                    }
                    if (gSelection < 0x83) {
                        UpdateMiscStuff(puVar9,puVar10,0x0);
                    }
                }
                else {
                    gTheGame._89888_4_ = 0x0;
                    gMain = 0x388;
                    if (gSelection == 0xaa) {
                        UpdatePlayerStageClear(puVar10,0xffffffff,0xffffffff);
                    }
                    else if (gSelection == 0x82) {
                        UpdatePlayerPuzzle(puVar10,0xffffffff,0xffffffff);
                    }
                    gTheGame._120356_4_ = 0x0;
                    gTheGame._120352_4_ = iVar3;
                    PlaySE(SFX_INIT_TABLE,0x42);
                    gWhatever = 0x0;
                    UpdateAnimation(puVar9,iVar3,0x0);
                }
            }
            else {
                if (gMain != 0x388) goto LAB_0004f2dc;
                if (iVar3 == 0x0) {
                    uVar7 = gCounter;
                    gCounter = gCounter + gWhatever;
                }
                DoPauseGame(puVar8 + 0x16340,iVar3,0x0);
                UpdateAnimation(puVar9,iVar3,0x0);
                if (iVar3 == 0x0) {
                    gCounter = uVar7 - 0x1;
                    gWhatever += 0x1;
                }
                UpdateCursor(puVar9,puVar10);
                if (gTheGame._120332_4_ == 0x2) {
                    Check3DVisibleBlocks(puVar9,puVar10);
                }
            }
        }
        puVar9 = puVar9 + 0x57c0;
        puVar5 = puVar5 + 0x110;
        puVar8 = puVar8 + 0x10;
        puVar6 = puVar6 + 0x128;
        iVar3 += 0x1;
    } while( true );
}



void DrawCountDown(void)

{
    uint *puVar1;
    uint *puVar2;
    uint uVar3;
    int iVar4;
    undefined1 *puVar5;
    undefined1 *puVar6;
    
    puVar1 = glistp;
    if (0x3c < gCounter) {
        puVar5 = gTheGame;
        if (gTheGame._120332_4_ == 0x1) {
            puVar2 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe3001001;
            glistp = puVar2;
            puVar1[0x1] = 0x8000;
            pon_gSPObjLoadTxtr(&glistp,&countLUT);
            pon_gSPObjLoadTxtr(&glistp,&countTexture);
            if (gTheGame._120328_4_ == 0x1) {
                pon_gSPObjRectangle(&glistp,gCountDown);
                pon_gSPObjRectangle(&glistp,0x1787f8);
            }
            else if (gTheGame._120328_4_ == 0x2) {
                pon_gSPObjRectangle(&glistp,gCountDown);
                pon_gSPObjRectangle(&glistp,0x1787f8);
                pon_gSPObjRectangle(&glistp,0x1787b0);
                pon_gSPObjRectangle(&glistp,0x178810);
            }
            else {
                puVar6 = gCountDown;
                for (iVar4 = 0x0; iVar4 < gTheGame._120328_4_; iVar4 += 0x1) {
                    if (*(int *)(puVar5 + 0x16000) != 0x1) {
                        pon_gSPObjRectangle(&glistp,puVar6);
                        pon_gSPObjRectangle(&glistp,gCountDown + (iVar4 + 0x4) * 0x18);
                    }
                    puVar5 = puVar5 + 0x110;
                    puVar6 = puVar6 + 0x18;
                }
            }
        }
        else {
            puVar2 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe3001001;
            glistp = puVar2;
            puVar1[0x1] = 0x8000;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xfd100000;
            glistp = puVar2;
            puVar1[0x1] = (uint)countTable;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe8000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf5000100;
            glistp = puVar2;
            puVar1[0x1] = 0x7000000;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf0000000;
            glistp = puVar2;
            puVar1[0x1] = 0x73fc000;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xfd500000;
            glistp = puVar2;
            puVar1[0x1] = (uint)countdown;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf5500000;
            glistp = puVar2;
            puVar1[0x1] = 0x7000000;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf3000000;
            glistp = puVar2;
            puVar1[0x1] = 0x73ff100;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf5481000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar2;
            puVar1[0x1] = 0xfc07c;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf5481000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar2;
            puVar1[0x1] = 0xfc03c;
            puVar1 = glistp;
            if (gTheGame._120328_4_ == 0x1) {
                puVar2 = glistp + 0x2;
                *glistp = 0xe4328180;
                glistp = puVar2;
                puVar1[0x1] = 0x228140;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe1000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf1000000;
                glistp = puVar2;
                puVar1[0x1] = 0x4000400;
            }
            else if (gTheGame._120328_4_ == 0x2) {
                puVar2 = glistp + 0x2;
                *glistp = 0xe41c0180;
                glistp = puVar2;
                puVar1[0x1] = 0xc0140;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe1000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf1000000;
                glistp = puVar2;
                puVar1[0x1] = 0x4000400;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe4454180;
                glistp = puVar2;
                puVar1[0x1] = 0x354140;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe1000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf1000000;
                glistp = puVar2;
                puVar1[0x1] = 0x4000400;
            }
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xfd500000;
            glistp = puVar2;
            puVar1[0x1] = (uint)countdown;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf5500000;
            glistp = puVar2;
            puVar1[0x1] = 0x7000000;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf3000000;
            glistp = puVar2;
            puVar1[0x1] = 0x73ff100;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf5481000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar2;
            puVar1[0x1] = 0xfc07c;
            puVar1 = glistp;
            if (gCountDown._114_2_ == 0x80) {
                uVar3 = 0x80;
            }
            else if (gCountDown._114_2_ == 0x82) {
                uVar3 = 0x82;
            }
            else if (gCountDown._114_2_ == 0x84) {
                uVar3 = 0x84;
            }
            else {
                uVar3 = 0x86;
            }
            puVar2 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = uVar3 | 0xf5481000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar2;
            puVar1[0x1] = 0x3c03c;
            puVar1 = glistp;
            if (gTheGame._120328_4_ == 0x1) {
                puVar2 = glistp + 0x2;
                *glistp = 0xe42c01d0;
                glistp = puVar2;
                puVar1[0x1] = 0x280190;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe1000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf1000000;
                glistp = puVar2;
                puVar1[0x1] = 0x4000400;
            }
            else if (gTheGame._120328_4_ == 0x2) {
                puVar2 = glistp + 0x2;
                *glistp = 0xe41581d0;
                glistp = puVar2;
                puVar1[0x1] = 0x118190;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe1000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf1000000;
                glistp = puVar2;
                puVar1[0x1] = 0x4000400;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe43ec1d0;
                glistp = puVar2;
                puVar1[0x1] = 0x3ac190;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe1000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf1000000;
                glistp = puVar2;
                puVar1[0x1] = 0x4000400;
            }
        }
    }
    return;
}



void InitStageClearIntro(void)

{
    int iVar1;
    undefined1 *puVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    undefined4 uVar8;
    int iVar9;
    int iVar10;
    int aiStack_50 [0x4];
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    
    uVar8 = 0x0;
    iVar6 = -0x1;
    iVar5 = -0x1;
    iVar4 = -0x1;
    aiStack_50[1] = 0x2;
    aiStack_50[2] = 0x2;
    aiStack_50[3] = 0x0;
    local_40 = 0xfffffff2;
    local_3c = 0xfffffff2;
    local_38 = 0xfffffff0;
    local_34 = 0xfffffffa;
    pon_ClearHeap();
    nextSegment = Pon_Image_Heap;
    n642Dolphin_AllchangeTexture();
    iVar7 = gTheGame._120364_4_;
    gWhatever = gTheGame._120332_4_;
    gTheGame._120332_4_ = 0x1;
    nextSegment += 0x24400;
    InitFlic();
    if (gTheGame._120360_4_ == 0x5) {
        iVar7 = 0x7;
        uVar8 = 0xd;
        InitDevil1();
        iVar10 = FlicTable._204_4_;
        iVar1 = FlicTable._204_4_ * 0x20;
        iVar9 = FlicTable._164_4_ * 0x20;
        iVar6 = *(int *)(gTheGame + iVar1 + 0x16394);
        *(undefined4 *)(gTheGame + iVar9 + 0x16384) = 0xffffffff;
        iVar5 = -0x1;
        iVar4 = -0x1;
        *(undefined4 *)(gTheGame + FlicTable._168_4_ * 0x20 + 0x16384) = 0xffffffff;
        gTheGame._102356_4_ = iVar10;
        *(undefined4 *)(gTheGame + iVar1 + 0x16384) = *(undefined4 *)(gTheGame + iVar1 + 0x16380);
        *(int *)(gTheGame + iVar1 + 0x1639c) = iVar10;
        *(undefined4 *)(gTheGame + FlicTable._40_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._44_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._52_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._60_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._68_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._76_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._84_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._92_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._100_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._108_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._116_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._124_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._132_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._140_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + iVar9 + 0x16384) = 0xffffffff;
    }
    else if (iVar7 == 0x4) {
        uVar8 = 0x5;
        InitCloud1();
        gTheGame._102356_4_ = FlicTable._276_4_;
        iVar1 = FlicTable._276_4_ * 0x20;
        iVar6 = *(int *)(gTheGame + FlicTable._104_4_ * 0x20 + 0x16394);
        iVar5 = *(int *)(gTheGame + iVar1 + 0x16394);
        *(undefined4 *)(gTheGame + FlicTable._132_4_ * 0x20 + 0x16384) = 0xffffffff;
        iVar4 = -0x1;
        *(undefined4 *)(gTheGame + iVar1 + 0x16384) = *(undefined4 *)(gTheGame + iVar1 + 0x16380);
        *(undefined4 *)(gTheGame + FlicTable._40_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._56_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._72_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._0_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._16_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + FlicTable._32_4_ * 0x20 + 0x16384) = 0xffffffff;
    }
    else if (iVar7 < 0x4) {
        if (iVar7 == 0x2) {
            uVar8 = 0x3;
            InitWater1();
            gTheGame._102356_4_ = FlicTable._188_4_;
            iVar1 = FlicTable._256_4_ * 0x20;
            iVar4 = *(int *)(gTheGame + iVar1 + 0x16394);
            iVar9 = FlicTable._188_4_ * 0x20;
            iVar6 = *(int *)(gTheGame + FlicTable._0_4_ * 0x20 + 0x16394);
            iVar5 = *(int *)(gTheGame + iVar9 + 0x16394);
            *(undefined4 *)(gTheGame + FlicTable._28_4_ * 0x20 + 0x16384) = 0xffffffff;
            *(undefined4 *)(gTheGame + iVar9 + 0x16384) =
                 *(undefined4 *)(gTheGame + iVar9 + 0x16380);
            *(undefined4 *)(gTheGame + FlicTable._236_4_ * 0x20 + 0x16384) = 0xffffffff;
            *(undefined4 *)(gTheGame + FlicTable._268_4_ * 0x20 + 0x16384) = 0xffffffff;
            *(undefined4 *)(gTheGame + iVar1 + 0x16384) =
                 *(undefined4 *)(gTheGame + iVar1 + 0x16380);
            *(undefined4 *)(gTheGame + FlicTable._272_4_ * 0x20 + 0x16384) = 0xffffffff;
            *(undefined4 *)(gTheGame + FlicTable._280_4_ * 0x20 + 0x16384) = 0xffffffff;
            *(undefined4 *)(gTheGame + FlicTable._288_4_ * 0x20 + 0x16384) = 0xffffffff;
        }
        else if (iVar7 < 0x2) {
            if (0x0 < iVar7) {
                uVar8 = 0x0;
                InitFlower1();
                iVar6 = *(int *)(gTheGame + FlicTable._0_4_ * 0x20 + 0x16394);
                iVar5 = *(int *)(gTheGame + FlicTable._360_4_ * 0x20 + 0x16394);
                iVar4 = *(int *)(gTheGame + FlicTable._348_4_ * 0x20 + 0x16394);
                gTheGame._102356_4_ = FlicTable._360_4_;
                *(int *)(gTheGame + FlicTable._360_4_ * 0x20 + 0x1639c) = FlicTable._360_4_;
                *(undefined4 *)(gTheGame + FlicTable._120_4_ * 0x20 + 0x16384) = 0xffffffff;
                *(undefined4 *)(gTheGame + FlicTable._136_4_ * 0x20 + 0x16384) = 0xffffffff;
                *(undefined4 *)(gTheGame + FlicTable._152_4_ * 0x20 + 0x16384) = 0xffffffff;
                *(undefined4 *)(gTheGame + FlicTable._168_4_ * 0x20 + 0x16384) = 0xffffffff;
                *(undefined4 *)(gTheGame + FlicTable._184_4_ * 0x20 + 0x16384) = 0xffffffff;
                *(undefined4 *)(gTheGame + FlicTable._188_4_ * 0x20 + 0x16384) = 0xffffffff;
                *(undefined4 *)(gTheGame + FlicTable._192_4_ * 0x20 + 0x16384) = 0xffffffff;
            }
        }
        else {
            uVar8 = 0x4;
            InitFire1();
            gTheGame._102356_4_ = FlicTable._188_4_;
            iVar1 = FlicTable._188_4_ * 0x20;
            iVar6 = *(int *)(gTheGame + FlicTable._0_4_ * 0x20 + 0x16394);
            iVar5 = *(int *)(gTheGame + iVar1 + 0x16394);
            iVar4 = *(int *)(gTheGame + FlicTable._228_4_ * 0x20 + 0x16394);
            *(undefined4 *)(gTheGame + FlicTable._44_4_ * 0x20 + 0x16384) = 0xffffffff;
            *(undefined4 *)(gTheGame + iVar1 + 0x16384) =
                 *(undefined4 *)(gTheGame + iVar1 + 0x16380);
            *(undefined4 *)(gTheGame + FlicTable._28_4_ * 0x20 + 0x16384) = 0xffffffff;
            *(undefined4 *)(gTheGame + FlicTable._36_4_ * 0x20 + 0x16384) = 0xffffffff;
        }
    }
    else if (iVar7 == 0x6) {
        uVar8 = 0x8;
        InitMoon1();
        gTheGame._102356_4_ = FlicTable._224_4_;
        iVar1 = FlicTable._224_4_ * 0x20;
        iVar6 = *(int *)(gTheGame + FlicTable._0_4_ * 0x20 + 0x16394);
        iVar5 = *(int *)(gTheGame + iVar1 + 0x16394);
        iVar4 = *(int *)(gTheGame + FlicTable._44_4_ * 0x20 + 0x16394);
        *(undefined4 *)(gTheGame + FlicTable._48_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + iVar1 + 0x16384) = *(undefined4 *)(gTheGame + iVar1 + 0x16380);
        *(undefined4 *)(gTheGame + FlicTable._312_4_ * 0x20 + 0x16384) = 0xffffffff;
    }
    else if (iVar7 < 0x6) {
        uVar8 = 0x6;
        InitGreen1();
        gTheGame._102356_4_ = FlicTable._236_4_;
        iVar1 = FlicTable._236_4_ * 0x20;
        iVar6 = *(int *)(gTheGame + FlicTable._0_4_ * 0x20 + 0x16394);
        iVar4 = *(int *)(gTheGame + FlicTable._28_4_ * 0x20 + 0x16394);
        iVar5 = *(int *)(gTheGame + iVar1 + 0x16394);
        *(undefined4 *)(gTheGame + FlicTable._32_4_ * 0x20 + 0x16384) = 0xffffffff;
        *(undefined4 *)(gTheGame + iVar1 + 0x16384) = *(undefined4 *)(gTheGame + iVar1 + 0x16380);
    }
    InitAnimeBGTransparent();
    iVar9 = 0x19;
    piVar3 = aiStack_50 + iVar7;
    iVar1 = *piVar3;
    puVar2 = gTheGame;
    do {
        *(short *)(puVar2 + 0x193ac) =
             (short)(((int)*(short *)(puVar2 + 0x193ac) >> 0x2) + iVar1) * 0x4;
        *(short *)(puVar2 + 0x193d4) =
             (short)(((int)*(short *)(puVar2 + 0x193d4) >> 0x2) + iVar1) * 0x4;
        *(short *)(puVar2 + 0x193fc) =
             (short)(((int)*(short *)(puVar2 + 0x193fc) >> 0x2) + iVar1) * 0x4;
        *(short *)(puVar2 + 0x19424) =
             (short)(((int)*(short *)(puVar2 + 0x19424) >> 0x2) + iVar1) * 0x4;
        *(short *)(puVar2 + 0x1944c) =
             (short)(((int)*(short *)(puVar2 + 0x1944c) >> 0x2) + iVar1) * 0x4;
        *(short *)(puVar2 + 0x19474) =
             (short)(((int)*(short *)(puVar2 + 0x19474) >> 0x2) + iVar1) * 0x4;
        *(short *)(puVar2 + 0x1949c) =
             (short)(((int)*(short *)(puVar2 + 0x1949c) >> 0x2) + iVar1) * 0x4;
        *(short *)(puVar2 + 0x194c4) =
             (short)(((int)*(short *)(puVar2 + 0x194c4) >> 0x2) + iVar1) * 0x4;
        iVar9 += -0x1;
        puVar2 = puVar2 + 0x140;
    } while (iVar9 != 0x0);
    iVar1 = *piVar3;
    iVar10 = 0x13;
    iVar9 = 0x0;
    puVar2 = gTheGame;
    do {
        iVar9 += 0x8;
        *(short *)(puVar2 + 0x1ba68) =
             (short)(((int)*(short *)(puVar2 + 0x1ba68) >> 0x2) + iVar1) * 0x4;
        *(short *)(puVar2 + 0x1ba80) =
             (short)(((int)*(short *)(puVar2 + 0x1ba80) >> 0x2) + iVar1) * 0x4;
        *(short *)(puVar2 + 0x1ba98) =
             (short)(((int)*(short *)(puVar2 + 0x1ba98) >> 0x2) + iVar1) * 0x4;
        *(short *)(puVar2 + 0x1bab0) =
             (short)(((int)*(short *)(puVar2 + 0x1bab0) >> 0x2) + iVar1) * 0x4;
        *(short *)(puVar2 + 0x1bac8) =
             (short)(((int)*(short *)(puVar2 + 0x1bac8) >> 0x2) + iVar1) * 0x4;
        *(short *)(puVar2 + 0x1bae0) =
             (short)(((int)*(short *)(puVar2 + 0x1bae0) >> 0x2) + iVar1) * 0x4;
        *(short *)(puVar2 + 0x1baf8) =
             (short)(((int)*(short *)(puVar2 + 0x1baf8) >> 0x2) + iVar1) * 0x4;
        *(short *)(puVar2 + 0x1bb10) =
             (short)(((int)*(short *)(puVar2 + 0x1bb10) >> 0x2) + iVar1) * 0x4;
        iVar10 += -0x1;
        puVar2 = puVar2 + 0xc0;
    } while (iVar10 != 0x0);
    iVar10 = *piVar3;
    iVar1 = 0x9f - iVar9;
    puVar2 = gTheGame + iVar9 * 0x18;
    if (iVar9 < 0x9f) {
        do {
            *(short *)(puVar2 + 0x1ba68) =
                 (short)(((int)*(short *)(puVar2 + 0x1ba68) >> 0x2) + iVar10) * 0x4;
            iVar1 += -0x1;
            puVar2 = puVar2 + 0x18;
        } while (iVar1 != 0x0);
    }
    if (true) {
        switch(uVar8) {
        case 0x0:
            *(undefined2 *)(gTheGame + iVar6 * 0x28 + 0x193a4) = 0x6c;
            *(undefined2 *)(gTheGame + iVar6 * 0x28 + 0x193ac) = 0x94;
            gTheGame._113248_2_ = 0xf0;
            gTheGame._113256_2_ = 0x16c;
            gTheGame._113272_2_ = 0x130;
            gTheGame._113280_2_ = 0x14c;
            gTheGame._113296_2_ = 0xf0;
            gTheGame._113304_2_ = 0x170;
            gTheGame._113320_2_ = 0x12c;
            gTheGame._113328_2_ = 0x14c;
            *(undefined2 *)(gTheGame + iVar5 * 0x28 + 0x193a4) = 0x390;
            *(undefined2 *)(gTheGame + iVar5 * 0x28 + 0x193ac) = 0x23c;
            *(undefined2 *)(gTheGame + iVar4 * 0x28 + 0x193a4) = 0x390;
            *(undefined2 *)(gTheGame + iVar4 * 0x28 + 0x193ac) = 0x2e0;
            break;
        case 0x3:
            *(undefined2 *)(gTheGame + iVar6 * 0x28 + 0x193a4) = 0x44;
            *(undefined2 *)(gTheGame + iVar6 * 0x28 + 0x193ac) = 0x118;
            gTheGame._113248_2_ = 0x12c;
            gTheGame._113256_2_ = 0x18c;
            gTheGame._113272_2_ = 0x12c;
            gTheGame._113280_2_ = 0x18c;
            *(short *)(gTheGame + iVar5 * 0x28 + 0x193ac) =
                 (short)(((int)*(short *)(gTheGame + iVar5 * 0x28 + 0x193ac) >> 0x2) + -0xf) * 0x4;
            *(short *)(gTheGame + iVar4 * 0x28 + 0x193ac) =
                 (short)(((int)*(short *)(gTheGame + iVar4 * 0x28 + 0x193ac) >> 0x2) + -0xf) * 0x4;
            break;
        case 0x4:
            *(undefined2 *)(gTheGame + iVar6 * 0x28 + 0x193a4) = 0x30;
            *(undefined2 *)(gTheGame + iVar6 * 0x28 + 0x193ac) = 0xcc;
            gTheGame._113248_2_ = 0x100;
            gTheGame._113256_2_ = 0x1a8;
            gTheGame._113272_2_ = 0x100;
            gTheGame._113280_2_ = 0x1a8;
            *(undefined2 *)(gTheGame + iVar5 * 0x28 + 0x193a4) = 0x380;
            *(undefined2 *)(gTheGame + iVar5 * 0x28 + 0x193ac) = 0x24c;
            *(undefined2 *)(gTheGame + iVar4 * 0x28 + 0x193a4) = 0x370;
            *(undefined2 *)(gTheGame + iVar4 * 0x28 + 0x193ac) = 0x2e4;
            break;
        case 0x5:
            *(undefined2 *)(gTheGame + iVar6 * 0x28 + 0x193a4) = 0x60;
            *(undefined2 *)(gTheGame + iVar6 * 0x28 + 0x193ac) = 0xbc;
            gTheGame._113512_2_ = 0xf8;
            gTheGame._113520_2_ = 0x1c0;
            gTheGame._113536_2_ = 0xf8;
            gTheGame._113544_2_ = 0x1c0;
            break;
        case 0x6:
            iVar5 *= 0x28;
            *(undefined2 *)(gTheGame + iVar5 + 0x193a4) = 0x370;
            *(undefined2 *)(gTheGame + iVar5 + 0x193ac) = 0x248;
            *(undefined2 *)(gTheGame + iVar5 + 0x193cc) = 0x370;
            *(undefined2 *)(gTheGame + iVar5 + 0x193d4) = 0x244;
            *(undefined2 *)(gTheGame + iVar4 * 0x28 + 0x193a4) = 0x36c;
            *(undefined2 *)(gTheGame + iVar4 * 0x28 + 0x193ac) = 0x298;
            break;
        case 0x8:
            *(undefined2 *)(gTheGame + iVar6 * 0x28 + 0x193a4) = 0x4c;
            *(undefined2 *)(gTheGame + iVar6 * 0x28 + 0x193ac) = 0xa0;
            gTheGame._113248_2_ = 0x104;
            gTheGame._113256_2_ = 0x170;
            gTheGame._113272_2_ = 0x104;
            gTheGame._113280_2_ = 0x170;
            break;
        case 0xd:
            *(undefined2 *)(gTheGame + iVar6 * 0x28 + 0x193a4) = 0x60;
            *(undefined2 *)(gTheGame + iVar6 * 0x28 + 0x193ac) = 0x154;
        }
    }
    InitBackground(uVar8);
    gTheGame._119508_2_ = (short)(((int)gTheGame._119508_2_ >> 0x2) + aiStack_50[iVar7]) * 0x4;
    nextSegment = Pon_Image_Heap;
    gTheGame._120332_4_ = gWhatever;
    UpdatePlayerStageClearTimeScore(0x2b6d48,0xffffffff,iVar7,0x1);
    gTheGame._120332_4_ = 0x1;
    gTheGame._120348_4_ = 0x0;
    gTheGame._120344_4_ = 0x0;
    gTheGame._120340_4_ = 0x0;
    gCounter = 0x0;
    gTheGame._89856_4_ = 0x0;
    gWorld = uVar8;
    iVar7 = screenLoad(_675,&nextSegment);
    if (iVar7 != 0x0) {
        gnTickClear = 0x0;
        giScreenClear = screenSet(_676,0x1);
        screenSetNumber(giScreenClear,0x32,gTheGame._19084_4_,0xffffffff);
        if (gTheGame._120360_4_ == 0x5) {
            if (gTheGame._120364_4_ < 0x5) {
                gnTagTextClear = -0xc8;
                screenShowImage(giScreenClear,0x19a);
            }
            else {
                gnTagTextClear = -0xfa;
                screenShowImage(giScreenClear,0x1a4);
            }
        }
        else {
            gnTagTextClear = -((gTheGame._120364_4_ + -0x1) * 0xa + 0x64);
            screenShowImage(giScreenClear,gTheGame._120364_4_ + 0x18f);
        }
    }
    return;
}



void DoStageClearIntro(void)

{
    int iVar1;
    int iVar2;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined auStack_18 [0xc];
    
    iVar2 = 0x0;
    local_28 = 0x0;
    local_24 = 0x0;
    local_20 = 0x0;
    local_1c = 0x0;
    gTheGame._120328_4_ = 0x1;
    Update2DAnimation(gTheGame,0x0,0x0,0x0);
    screenTick(&local_28);
    if (gnTagTextClear == -0x1) {
        if ((gTheGame._90948_2_ & 0x8000) != 0x0) {
            iVar2 = -0x1;
        }
    }
    else {
        if (-0x1 < gnTagTextClear) {
            iVar1 = screenTextDone(giScreenClear);
            if (iVar1 == 0x0) {
                if (((gTheGame._90948_2_ & 0x8000) != 0x0) &&
                   (iVar1 = screenFastText(), iVar1 != 0x0)) {
                    PlaySE(SFX_INIT_TABLE,0x33);
                }
                goto LAB_000509b8;
            }
        }
        iVar1 = screenTextDone(giScreenClear,gnTagTextClear);
        if (iVar1 != 0x0) {
            iVar1 = screenGetTextType(giScreenClear,gnTagTextClear + 0x1,auStack_18);
            if (iVar1 == 0x0) {
                if (0x0 < gnTagTextClear) {
                    gnTagTextClear = -0x1;
                }
            }
            else {
                screenShowImage(giScreenClear,0x12c);
            }
        }
        if (gnTagTextClear < 0x0) {
            iVar1 = 0xf0;
        }
        else {
            iVar1 = 0x708;
        }
        gnTickClear += 0x1;
        if (gnTickClear < iVar1) {
            if ((gTheGame._90948_2_ & 0x8000) != 0x0) {
                gnTickClear = 0x708;
                PlaySE(SFX_INIT_TABLE,0x33);
            }
        }
        else {
            gnTickClear = 0x0;
            screenHideImage(giScreenClear,0x12c);
            if (gnTagTextClear < 0x0) {
                gnTagTextClear = -gnTagTextClear;
                screenShowText(giScreenClear,gnTagTextClear);
                screenHideImage(giScreenClear,0x81a48190);
            }
            else {
                iVar1 = screenGetTextType(giScreenClear,gnTagTextClear + 0x1,auStack_18);
                if (iVar1 == 0x0) {
                    gnTagTextClear = -0x1;
                }
                else {
                    screenHideText(giScreenClear,gnTagTextClear);
                    gnTagTextClear += 0x1;
                    screenShowText(giScreenClear,gnTagTextClear);
                }
            }
        }
    }
LAB_000509b8:
    if (0x1e < gCounter) {
        if (iVar2 == 0x0) {
            if ((gTheGame._90948_2_ & 0x1000) == 0x0) {
                if ((gTheGame._90948_2_ & 0x4000) != 0x0) {
                    gReset = 0xffffffff;
                    gMain = 0x2bc;
                    PlaySE(SFX_INIT_TABLE,0x6);
                }
                goto LAB_00050a7c;
            }
        }
        gReset = 0xffffffff;
        gMain = 0x384;
        gTheGame._120332_4_ = gWhatever;
        gWhatever = 0x0;
        FadeOutSong(last_song_handle,0x5a);
        PlaySE(SFX_INIT_TABLE,0x4);
    }
LAB_00050a7c:
    iVar2 = screenFlushing();
    if (iVar2 == 0x0) {
        peelTick();
    }
    return;
}



void DrawStageClearIntro(undefined4 param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    
    iVar3 = screenFlushing();
    if (iVar3 != 0x0) goto LAB_00050c7c;
    if (false) {
switchD_00050af8_caseD_1:
        uVar5 = 0x66;
        uVar4 = 0x6e;
        uVar6 = 0xb0;
    }
    else {
        switch(gWorld) {
        case 0x0:
            uVar5 = 0xca;
            uVar4 = 0x5c;
            uVar6 = 0x6e;
            break;
        default:
            goto switchD_00050af8_caseD_1;
        case 0x3:
            uVar5 = 0x94;
            uVar4 = 0xaa;
            uVar6 = 0xd6;
            break;
        case 0x4:
            uVar5 = 0x5b;
            uVar4 = 0x63;
            uVar6 = 0x9e;
            break;
        case 0x5:
            uVar5 = 0x8d;
            uVar4 = 0xcf;
            uVar6 = 0xf4;
            break;
        case 0x6:
            uVar5 = 0xad;
            uVar4 = 0xdf;
            uVar6 = 0x65;
            break;
        case 0x8:
            uVar5 = 0x32;
            uVar4 = 0x43;
            uVar6 = 0x95;
        }
    }
    Draw2DBackground(param_1);
    Draw2DAnimation(param_1,0x1,0x3);
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    uVar4 = uVar6 >> 0x2 & 0x3e | (uVar5 & 0xf8) << 0x8 | (uVar4 & 0xf8) << 0x3 | 0x1;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar2;
    puVar1[0x1] = 0x300000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf7000000;
    glistp = puVar2;
    puVar1[0x1] = uVar4 << 0x10 | uVar4;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf65000f0;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf65003c0;
    glistp = puVar2;
    puVar1[0x1] = 0x2d0;
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
    Draw2DAnimation(param_1,0x4,0x6);
LAB_00050c7c:
    screenDraw(&glistp,0x0);
    return;
}


