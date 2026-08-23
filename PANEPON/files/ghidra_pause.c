

void Do2DPauseGame(int param_1,int param_2,int param_3)

{
    ushort uVar1;
    uint uVar2;
    short sVar3;
    int iVar4;
    
    iVar4 = 0x2;
    if (gTheGame._120352_4_ != param_2) {
        return;
    }
    if ((gTheGame._120328_4_ == 0x1) &&
       ((((uVar2 = gTheGame._102364_4_ & 0xffff, gSelection != 0xaa || (gTheGame._120360_4_ != 0x5))
         && (gTheGame._102356_4_ != uVar2)) && (gTheGame._102356_4_ == gTheGame._102360_4_)))) {
        *(undefined4 *)(gTheGame + gTheGame._102356_4_ * 0x20 + 0x16384) = 0xffffffff;
        gTheGame._102356_4_ = uVar2;
        *(undefined4 *)(gTheGame + uVar2 * 0x20 + 0x16384) =
             *(undefined4 *)(gTheGame + uVar2 * 0x20 + 0x16380);
    }
    if ((gSelection == 0xbe) || (gSelection < 0x83)) {
        iVar4 = 0x3;
    }
    if ((*(ushort *)(param_1 + 0xe) & 0x8) == 0x0) {
        if (gTheGame._120356_4_ < 0x0) {
            gTheGame._120356_4_ += 0xc;
        }
        uVar1 = *(ushort *)(param_1 + 0x4);
        if ((uVar1 & 0x800) == 0x0) {
            if ((uVar1 & 0x400) == 0x0) {
                if ((uVar1 & 0x4000) != 0x0) {
                    gTheGame._89888_4_ = 0x0;
                    gTheGame._90160_4_ = 0x0;
                    gTheGame._90432_4_ = 0x0;
                    gTheGame._90704_4_ = 0x0;
                    PlaySE(SFX_INIT_TABLE,0x6);
                    if (param_3 == 0x0) {
                        gMain = 0x384;
                    }
                    else {
                        gMain = 0x387;
                        sVar3 = GetTuneBufferFromHandle(last_song_handle);
                        FadeSong(last_song_handle,
                                 (int)*(short *)((int)&CROSSFADE_VOLUME + sVar3 * 0x2),0xf,0x0);
                    }
                    uVar2 = gTheGame._102360_4_;
                    if (gTheGame._120328_4_ == 0x1) {
                        *(undefined4 *)(gTheGame + gTheGame._102356_4_ * 0x20 + 0x16384) =
                             0xffffffff;
                        iVar4 = uVar2 * 0x20;
                        gTheGame._102356_4_ = uVar2;
                        *(undefined4 *)(gTheGame + iVar4 + 0x16384) =
                             *(undefined4 *)(gTheGame + iVar4 + 0x16380);
                    }
                    gTheGame._119732_2_ = 0x3c0;
                    return;
                }
                if ((uVar1 & 0x9000) != 0x0) {
                    if (gTheGame._120356_4_ == 0x0) {
                        gTheGame._89888_4_ = 0x0;
                        gTheGame._90160_4_ = 0x0;
                        gTheGame._90432_4_ = 0x0;
                        gTheGame._90704_4_ = 0x0;
                        if (param_3 == 0x0) {
                            gMain = 0x384;
                        }
                        else {
                            gMain = 0x387;
                            sVar3 = GetTuneBufferFromHandle(last_song_handle);
                            FadeSong(last_song_handle,
                                     (int)*(short *)((int)&CROSSFADE_VOLUME + sVar3 * 0x2),0xf,0x0);
                        }
                        uVar2 = gTheGame._102360_4_;
                        if (gTheGame._120328_4_ == 0x1) {
                            *(undefined4 *)(gTheGame + gTheGame._102356_4_ * 0x20 + 0x16384) =
                                 0xffffffff;
                            iVar4 = uVar2 * 0x20;
                            gTheGame._102356_4_ = uVar2;
                            *(undefined4 *)(gTheGame + iVar4 + 0x16384) =
                                 *(undefined4 *)(gTheGame + iVar4 + 0x16380);
                        }
                        PlaySE(SFX_INIT_TABLE,0x2);
                        gTheGame._119732_2_ = 0x3c0;
                        return;
                    }
                    if ((gTheGame._120356_4_ == 0x1) &&
                       ((gSelection == 0xbe || (gSelection < 0x83)))) {
                        gReset = 0xffffffff;
                        gMain = 0x384;
                        gCounter = 0x0;
                        gTheGame._89904_4_ = gWorld;
                        PlaySE(SFX_INIT_TABLE,0x2);
                    }
                    else if ((gTheGame._120356_4_ == 0x1) &&
                            ((gSelection == 0xaa && (gTheGame._120360_4_ == 0x5)))) {
                        PlaySE(SFX_INIT_TABLE,0x7);
                    }
                    else {
                        gMain = 0x387;
                        UpdateComboChainCount(0x0,0x0,-gTheGame._19080_4_);
                        UpdateComboChainCount(0x1,0x0,-gTheGame._41544_4_);
                        UpdateComboChainCount(0x2,0x0,-gTheGame._64008_4_);
                        UpdateComboChainCount(0x3,0x0,-gTheGame._86472_4_);
                        gReset = 0xffffffff;
                        gMain = 0x2bc;
                        gTheGame._120348_4_ = 0x0;
                        gTheGame._120344_4_ = 0x0;
                        gTheGame._120340_4_ = 0x0;
                        Init2DAttackBlocks(gTheGame);
                        Init2DAttackBlocks(0x2a6608);
                        pon_Init2DAttackBlocks4p(gTheGame);
                        pon_Init2DAttackBlocks4p(0x2a6608);
                        pon_Init2DAttackBlocks4p(0x2abdc8);
                        pon_Init2DAttackBlocks4p(0x2b1588);
                        pon_InitAttackOtherData(gTheGame,0x0);
                        pon_InitAttackOtherData(0x2a6608,0x1);
                        pon_InitAttackOtherData(0x2abdc8,0x2);
                        pon_InitAttackOtherData(0x2b1588,0x3);
                        Init2DIcons(gTheGame);
                        Init2DIcons(0x2a6608);
                        Init2DIcons(0x2abdc8);
                        Init2DIcons(0x2b1588);
                        Init2DExplosion(gTheGame);
                        Init2DExplosion(0x2a6608);
                        Init2DExplosion(0x2abdc8);
                        Init2DExplosion(0x2b1588);
                        if (gSelection == 0xaa) {
                            *(undefined4 *)(gPlayer._0_4_ + 0x20) = 0x0;
                        }
                        gGameStatus &= 0xffdf;
                        PlaySE(SFX_INIT_TABLE,0x2);
                    }
                }
            }
            else {
                gTheGame._120356_4_ += 0x1;
                if (gTheGame._120356_4_ < iVar4) {
                    PlaySE(SFX_INIT_TABLE,0x1);
                }
                else {
                    gTheGame._120356_4_ = iVar4 + -0x1;
                }
            }
        }
        else {
            gTheGame._120356_4_ += -0x1;
            if (gTheGame._120356_4_ < 0x0) {
                gTheGame._120356_4_ = 0x0;
            }
            else {
                PlaySE(SFX_INIT_TABLE,0x1);
            }
        }
    }
    else if (-0x1 < gTheGame._120356_4_) {
        gTheGame._120356_4_ += -0xc;
    }
    if (gTheGame._120328_4_ == 0x1) {
        AnimatePauseKey(0x2be150);
        gTheGame._89888_4_ += 0x1;
        gTheGame._89892_4_ += 0x1;
        gTheGame._119724_2_ = 0x1d8;
        gTheGame._119732_2_ = 0x19c;
        gTheGame._117064_2_ = 0x1e8;
        gTheGame._117072_2_ = (short)(gTheGame._120356_4_ * 0xf + 0x71) * 0x4;
    }
    else if (gTheGame._120328_4_ == 0x2) {
        AnimatePauseKey(0x2be150);
        AnimatePauseKey(0x2be178);
        if (gTheGame._120352_4_ == param_2) {
            gTheGame._89888_4_ += 0x1;
        }
        gTheGame._89892_4_ += 0x1;
        gTheGame._90164_4_ += 0x1;
        if (gTheGame._120352_4_ == 0x0) {
            gTheGame._119724_2_ = 0x70;
            gTheGame._119732_2_ = 0x19c;
            gTheGame._117064_2_ = 0x84;
            gTheGame._117072_2_ = (short)(gTheGame._120356_4_ * 0xf + 0x71) * 0x4;
        }
        else {
            gTheGame._119724_2_ = 0x304;
            gTheGame._119732_2_ = 0x19c;
            gTheGame._117064_2_ = 0x318;
            gTheGame._117072_2_ = (short)(gTheGame._120356_4_ * 0xf + 0x71) * 0x4;
        }
    }
    else {
        AnimatePauseKey(0x2be150);
        AnimatePauseKey(0x2be178);
        AnimatePauseKey(0x2be1a0);
        AnimatePauseKey(0x2be1c8);
        if (gTheGame._120352_4_ == param_2) {
            gTheGame._89888_4_ += 0x1;
        }
        gTheGame._89892_4_ += 0x1;
        gTheGame._90164_4_ += 0x1;
        gTheGame._90436_4_ += 0x1;
        gTheGame._90708_4_ += 0x1;
        if (gTheGame._120352_4_ == 0x0) {
            gTheGame._119724_2_ = 0x70;
            gTheGame._119732_2_ = 0x214;
            gTheGame._117064_2_ = 0x70;
            gTheGame._117072_2_ = (short)(gTheGame._120356_4_ * 0xf + 0x8f) * 0x4;
        }
        else if (gTheGame._120352_4_ == 0x1) {
            gTheGame._119724_2_ = 0x180;
            gTheGame._119732_2_ = 0x214;
            gTheGame._117064_2_ = 0x180;
            gTheGame._117072_2_ = (short)(gTheGame._120356_4_ * 0xf + 0x8f) * 0x4;
        }
        else if (gTheGame._120352_4_ == 0x2) {
            gTheGame._119724_2_ = 0x290;
            gTheGame._119732_2_ = 0x214;
            gTheGame._117064_2_ = 0x290;
            gTheGame._117072_2_ = (short)(gTheGame._120356_4_ * 0xf + 0x8f) * 0x4;
        }
        else if (gTheGame._120352_4_ == 0x3) {
            gTheGame._119724_2_ = 0x3a0;
            gTheGame._119732_2_ = 0x214;
            gTheGame._117064_2_ = 0x3a0;
            gTheGame._117072_2_ = (short)(gTheGame._120356_4_ * 0xf + 0x8f) * 0x4;
        }
    }
    return;
}



void Do3DPauseGame(int param_1,int param_2,int param_3)

{
    ushort uVar1;
    short sVar2;
    int iVar3;
    
    iVar3 = 0x2;
    if (gTheGame._120352_4_ == param_2) {
        if ((gSelection == 0xbe) || (gSelection < 0x83)) {
            iVar3 = 0x3;
        }
        if ((*(ushort *)(param_1 + 0xe) & 0x8) == 0x0) {
            if (gTheGame._120356_4_ < 0x0) {
                gTheGame._120356_4_ += 0xc;
            }
            uVar1 = *(ushort *)(param_1 + 0x4);
            if ((uVar1 & 0x800) == 0x0) {
                if ((uVar1 & 0x400) == 0x0) {
                    if ((uVar1 & 0x4000) == 0x0) {
                        if ((uVar1 & 0x9000) != 0x0) {
                            if (gTheGame._120356_4_ == 0x0) {
                                gTheGame._89888_4_ = 0x0;
                                gTheGame._90160_4_ = 0x0;
                                if (param_3 == 0x0) {
                                    gMain = 0x384;
                                }
                                else {
                                    gMain = 0x387;
                                    sVar2 = GetTuneBufferFromHandle(last_song_handle);
                                    FadeSong(last_song_handle,
                                             (int)*(short *)((int)&CROSSFADE_VOLUME + sVar2 * 0x2),
                                             0xf,0x0);
                                }
                                PlaySE(SFX_INIT_TABLE,0x2);
                            }
                            else if ((gTheGame._120356_4_ == 0x1) &&
                                    ((gSelection == 0xbe || (gSelection == 0x82)))) {
                                gReset = 0xffffffff;
                                gMain = 0x384;
                                gCounter = 0x0;
                                PlaySE(SFX_INIT_TABLE,0x2);
                            }
                            else if ((gTheGame._120356_4_ == 0x1) &&
                                    ((gSelection == 0xaa && (gTheGame._120360_4_ == 0x5)))) {
                                PlaySE(SFX_INIT_TABLE,0x7);
                            }
                            else {
                                gMain = 0x387;
                                UpdateComboChainCount(0x0,0x0,-gTheGame._19080_4_);
                                UpdateComboChainCount(0x1,0x0,-gTheGame._41544_4_);
                                gReset = 0xffffffff;
                                gMain = 0x2bc;
                                gTheGame._120348_4_ = 0x0;
                                gTheGame._120344_4_ = 0x0;
                                gTheGame._120340_4_ = 0x0;
                                Init3DAttackBlocks(gTheGame);
                                Init3DAttackBlocks(0x2a6608);
                                Init3DIcons(gTheGame);
                                Init3DIcons(0x2a6608);
                                Init3DExplosion(gTheGame);
                                Init3DExplosion(0x2a6608);
                                if (gSelection == 0xaa) {
                                    *(undefined4 *)(gPlayer._0_4_ + 0x28) = 0x0;
                                }
                                gGameStatus &= 0xffdf;
                                PlaySE(SFX_INIT_TABLE,0x2);
                            }
                        }
                    }
                    else {
                        gTheGame._89888_4_ = 0x0;
                        gTheGame._90160_4_ = 0x0;
                        PlaySE(SFX_INIT_TABLE,0x6);
                        if (param_3 == 0x0) {
                            gMain = 0x384;
                        }
                        else {
                            gMain = 0x387;
                            sVar2 = GetTuneBufferFromHandle(last_song_handle);
                            FadeSong(last_song_handle,
                                     (int)*(short *)((int)&CROSSFADE_VOLUME + sVar2 * 0x2),0xf,0x0);
                        }
                    }
                }
                else {
                    gTheGame._120356_4_ += 0x1;
                    if (gTheGame._120356_4_ < iVar3) {
                        PlaySE(SFX_INIT_TABLE,0x1);
                    }
                    else {
                        gTheGame._120356_4_ = iVar3 + -0x1;
                    }
                }
            }
            else {
                gTheGame._120356_4_ += -0x1;
                if (gTheGame._120356_4_ < 0x0) {
                    gTheGame._120356_4_ = 0x0;
                }
                else {
                    PlaySE(SFX_INIT_TABLE,0x1);
                }
            }
        }
        else if (-0x1 < gTheGame._120356_4_) {
            gTheGame._120356_4_ += -0xc;
        }
        if (gTheGame._120328_4_ == 0x1) {
            AnimatePauseKey(0x2be150);
            gTheGame._89888_4_ += 0x1;
            gTheGame._89892_4_ += 0x1;
            gTheGame._119724_2_ = 0x1d8;
            gTheGame._119732_2_ = 0x19c;
            gTheGame._117064_2_ = 0x1e8;
            gTheGame._117072_2_ = (short)(gTheGame._120356_4_ * 0xf + 0x71) * 0x4;
        }
        else if (gTheGame._120328_4_ == 0x2) {
            AnimatePauseKey(0x2be150);
            AnimatePauseKey(0x2be178);
            if (gTheGame._120352_4_ == param_2) {
                gTheGame._89888_4_ += 0x1;
            }
            gTheGame._89892_4_ += 0x1;
            gTheGame._90164_4_ += 0x1;
            if (gTheGame._120352_4_ == 0x0) {
                gTheGame._119724_2_ = 0x70;
                gTheGame._119732_2_ = 0x19c;
                gTheGame._117064_2_ = 0x84;
                gTheGame._117072_2_ = (short)(gTheGame._120356_4_ * 0xf + 0x71) * 0x4;
            }
            else {
                gTheGame._119724_2_ = 0x304;
                gTheGame._119732_2_ = 0x19c;
                gTheGame._117064_2_ = 0x318;
                gTheGame._117072_2_ = (short)(gTheGame._120356_4_ * 0xf + 0x71) * 0x4;
            }
        }
    }
    return;
}



void DoPauseGame(void)

{
    if (gTheGame._120332_4_ == 0x2) {
        Do3DPauseGame();
    }
    else {
        Do2DPauseGame();
    }
    return;
}



void Draw2DPause(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    undefined1 *puVar4;
    undefined1 *puVar5;
    
    puVar1 = glistp;
    puVar4 = gTheGame;
    if (-0x1 < gTheGame._120356_4_) {
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        iVar3 = 0x0;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar2;
        puVar1[0x1] = 0x8000;
        pon_gSPObjLoadTxtr(&glistp,0x2be330);
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
        puVar5 = puVar4;
        if (gTheGame._120328_4_ < 0x3) {
            iVar3 = 0x0;
            do {
                if (*(int *)(puVar4 + 0x1d318) != 0x0) {
                    pon_gSPBgRectCopy(&glistp,puVar4 + 0x1d308);
                }
                iVar3 += 0x1;
                puVar4 = puVar4 + 0x28;
            } while (iVar3 < 0x5);
        }
        else {
            do {
                puVar1 = glistp;
                if (*(int *)(puVar4 + 0x1d318) != 0x0) {
                    if (iVar3 < 0x4) {
                        if (*(int *)(puVar5 + 0x16000) != 0x1) {
                            puVar2 = glistp + 0x2;
                            *glistp = 0xe3000a01;
                            glistp = puVar2;
                            puVar1[0x1] = 0x200000;
                            pon_gSPBgRectCopy(&glistp,puVar4 + 0x1d308);
                        }
                    }
                    else {
                        *(undefined2 *)(puVar4 + 0x1d30a) = 0x204;
                        *(undefined4 *)(puVar4 + 0x1d328) = 0x0;
                        *(undefined2 *)(puVar4 + 0x1d324) = 0x699;
                        *(undefined2 *)(puVar4 + 0x1d326) = 0x400;
                        puVar1 = glistp;
                        puVar2 = glistp + 0x2;
                        *glistp = 0xe3000a01;
                        glistp = puVar2;
                        puVar1[0x1] = 0x0;
                        pon_gSPBgRect1Cyc(&glistp,puVar4 + 0x1d308);
                    }
                }
                iVar3 += 0x1;
                puVar4 = puVar4 + 0x28;
                puVar5 = puVar5 + 0x110;
            } while (iVar3 < 0x5);
        }
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
        pon_gSPObjLoadTxtr(&glistp,&numberLUT);
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
        pon_gSPObjLoadTxtr(&glistp,&arrowTexture);
        pon_gSPObjRectangle(&glistp,0x2bd790);
    }
    return;
}



void Draw3DPause(void)

{
    uint *puVar1;
    uint *puVar2;
    int iVar3;
    undefined1 *puVar4;
    int iVar5;
    
    puVar1 = glistp;
    puVar4 = gTheGame;
    if (-0x1 < gTheGame._120356_4_) {
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
        puVar1[0x1] = gTheGame._120044_4_;
        puVar1 = glistp;
        iVar3 = 0x0;
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
        *glistp = 0xe3000c00;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfcffffff;
        glistp = puVar2;
        puVar1[0x1] = 0xfffcf279;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar2;
        puVar1[0x1] = 0xf0a7008;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe3000a01;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        do {
            *(undefined2 *)(puVar4 + 0x1d30a) = 0x204;
            if (*(int *)(puVar4 + 0x1d318) != 0x0) {
                pon_guS2DEmuBgRect1Cyc(&glistp,puVar4 + 0x1d308);
            }
            puVar1 = glistp;
            iVar3 += 0x1;
            puVar4 = puVar4 + 0x28;
        } while (iVar3 < 0x5);
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
        puVar1[0x1] = (uint)numberTable;
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
        iVar3 = (int)gTheGame._117064_2_;
        iVar5 = (int)gTheGame._117072_2_;
        puVar2 = glistp + 0x2;
        *glistp = 0xfd500000;
        glistp = puVar2;
        puVar1[0x1] = (uint)arrow;
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
        puVar1[0x1] = 0x70ff100;
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
        puVar1[0x1] = 0xfc01c;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf5481000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf2000000;
        glistp = puVar2;
        puVar1[0x1] = 0x1c01c;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = ((iVar3 >> 0x2) + 0x8U) * 0x4000 & 0xffc000 | 0xe4000000 |
                  ((iVar5 >> 0x2) + 0x8U) * 0x4 & 0xffc;
        glistp = puVar2;
        puVar1[0x1] = (iVar3 >> 0x2 & 0x3ffU) << 0xe | (iVar5 >> 0x2 & 0x3ffU) << 0x2;
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
    return;
}



void DrawPause(void)

{
    if (gTheGame._120332_4_ == 0x2) {
        Draw3DPause();
    }
    else {
        Draw2DPause();
    }
    return;
}

