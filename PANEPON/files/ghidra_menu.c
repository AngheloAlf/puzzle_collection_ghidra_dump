


void SetMenuReInit(void)

{
    int iVar1;
    
    geLanguageMenu = 0x0;
    iVar1 = GCHandover_read(0x8);
    if (iVar1 == 0x0) {
        geMenuSoundType = 0x1;
        SetSoundOptions(0x1);
    }
    else {
        geMenuSoundType = 0x2;
        SetSoundOptions(0x0);
    }
    geMenuSoundMute = 0x2;
    SetMasterSFXVolume(0x6665);
    SetMasterSongVolume(0x4ccc);
    from_title = 0x1;
    return;
}



void menuInit(void)

{
    int iVar1;
    int iVar2;
    
    iVar1 = 0x1;
    giMenuTestMusic = 0x0;
    giMenuTestEffect = 0x1;
    iVar2 = 0x2a16c8;
    gaiName._0_4_ = 0x0;
    gaiName._4_4_ = 0x0;
    gaiName._8_4_ = 0x0;
    gaiName._12_4_ = 0x0;
    do {
        bzero((void *)(iVar2 + 0x1d68a),0xe);
        iVar1 += 0x1;
        iVar2 += 0x880;
    } while (iVar1 < 0x8);
    gnCheatMenu = 0x0;
    iVar1 = GCHandover_read(0x8);
    if (iVar1 == 0x0) {
        geMenuSoundType = 0x1;
    }
    else {
        geMenuSoundType = 0x2;
    }
    geMenuSoundMute = 0x2;
    return;
}



undefined4 menuWipeUserData(void)

{
    int iVar1;
    
    iVar1 = 0x5c;
    do {
        iVar1 += -0x1;
    } while (iVar1 != 0x0);
    menuInit();
    gnCheatMenu = 0x0;
    gbOpenTitle = 0x0;
    gGameStatus = 0x302;
    gOverflowFlag = 0xffffffff;
    gnControlCPU = 0x0;
    menuUpdateName();
    menuUpdateSound();
    menuLoadData();
    return 0xffffffff;
}



undefined4 menuInitUserData(undefined4 *param_1,int param_2)

{
    undefined1 *puVar1;
    int iVar2;
    
    if (param_2 != 0x0) {
        bzero(param_1,0xb8);
        param_1[0x2d] = 0x0;
        *param_1 = 0x1;
        param_1[0x1] = 0xfedcba05;
        param_1[0x2c] = 0xb8;
        param_1[0x2b] = 0x880;
        param_1[0x5] = 0x0;
        param_1[0xb] = 0xffffffff;
        param_1[0xc] = 0xffffffff;
        param_1[0xd] = 0xffffffff;
        param_1[0xe] = 0xffffffff;
        param_1[0xf] = 0xffffffff;
        param_1[0x10] = 0xffffffff;
        param_1[0x11] = 0xffffffff;
        param_1[0x12] = 0xffffffff;
    }
    param_1[0x2] = gnCheatMenu & 0xffffffbf;
    iVar2 = 0x0;
    param_1[0x3] = gbOpenTitle;
    *(ushort *)(param_1 + 0x6) = gGameStatus & 0xff7f;
    puVar1 = gTheGame;
    param_1[0x9] = geMenuSoundType;
    param_1[0xa] = geMenuSoundMute;
    param_1[0x8] = gOverflowFlag;
    param_1[0x7] = gnControlCPU;
    do {
        bcopy(puVar1 + 0x1d68a,param_1 + 0x13,0xc);
        iVar2 += 0x1;
        param_1 = param_1 + 0x3;
        puVar1 = puVar1 + 0x880;
    } while (iVar2 < 0x8);
    return 0xffffffff;
}



undefined4 menuLoadUserData(void *param_1)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    undefined auStack_17c [0x4];
    int local_178;
    int local_d0;
    int local_cc;
    int local_c8;
    undefined auStack_c4 [0x4];
    int local_c0;
    int local_18;
    int local_14;
    int local_10;
    
    gc_memoryCardLoad(0x1,_cache_158);
    memcpy(auStack_c4,_cache_158,0xb8);
    memcpy(auStack_17c,_cache_158 + 0xb8,0xb8);
    if (local_c0 == -0x12345fb) {
        if (local_14 == 0xb8) {
            if (local_18 == 0x880) {
                iVar3 = -0x1;
            }
            else {
                iVar3 = 0x0;
            }
        }
        else {
            iVar3 = 0x0;
        }
    }
    else {
        iVar3 = 0x0;
    }
    if (local_178 == -0x12345fb) {
        if (local_cc == 0xb8) {
            if (local_d0 == 0x880) {
                iVar1 = -0x1;
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
        iVar1 = 0x0;
    }
    if ((iVar3 != 0x0) && (iVar1 != 0x0)) {
        if (local_10 == local_c8 + 0x1) {
            iVar1 = 0x0;
        }
        else if (local_c8 == local_10 + 0x1) {
            iVar3 = 0x0;
        }
    }
    if (iVar3 == 0x0) {
        if (iVar1 == 0x0) {
            uVar2 = 0x0;
        }
        else {
            bcopy(auStack_17c,param_1,0xb8);
            uVar2 = 0xffffffff;
        }
    }
    else {
        bcopy(auStack_c4,param_1,0xb8);
        uVar2 = 0xffffffff;
    }
    return uVar2;
}



undefined4 menuSaveUserData(uint *param_1,int param_2)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    
    gc_memoryCardLoad(0x1,_cache_187);
    if ((0x0 < param_2) && (param_2 < 0x8)) {
        iVar4 = 0x2;
        uVar2 = 0x0;
        do {
            uVar1 = param_1[0x5];
            uVar3 = uVar2;
            if (((((uVar1 & 0x1 << uVar2) == 0x0) ||
                 (uVar3 = uVar2 + 0x1, (uVar1 & 0x1 << uVar2 + 0x1) == 0x0)) ||
                (uVar3 = uVar2 + 0x2, (uVar1 & 0x1 << uVar2 + 0x2) == 0x0)) ||
               (((uVar3 = uVar2 + 0x3, (uVar1 & 0x1 << uVar2 + 0x3) == 0x0 ||
                 (uVar3 = uVar2 + 0x4, (uVar1 & 0x1 << uVar2 + 0x4) == 0x0)) ||
                ((uVar3 = uVar2 + 0x5, (uVar1 & 0x1 << uVar2 + 0x5) == 0x0 ||
                 (uVar3 = uVar2 + 0x6, (uVar1 & 0x1 << uVar2 + 0x6) == 0x0)))))) break;
            uVar2 += 0x7;
            iVar4 += -0x1;
            uVar3 = uVar2;
        } while (iVar4 != 0x0);
        if (0xd < uVar3) {
            return 0x0;
        }
        memcpy(_cache_187 + uVar3 * 0x880 + 0x170,gTheGame + param_2 * 0x880 + 0x1d688,0x880);
        uVar2 = param_1[param_2 + 0xb];
        if (uVar2 != 0xffffffff) {
            param_1[0x5] = param_1[0x5] & ~(0x1 << uVar2);
        }
        param_1[0x5] = param_1[0x5] | 0x1 << uVar3;
        param_1[param_2 + 0xb] = uVar3;
    }
    param_1[0x2d] = param_1[0x2d] + 0x1;
    *param_1 = *param_1 ^ 0x1;
    if (*param_1 == 0x0) {
        memcpy(_cache_187,param_1,0xb8);
    }
    else {
        memcpy(_cache_187 + 0xb8,param_1,0xb8);
    }
    gc_memoryCardSave(0x1,_cache_187);
    return 0xffffffff;
}



int menuTickCheat(undefined4 *param_1,uint *param_2)

{
    uint uVar1;
    byte bVar2;
    int iVar3;
    
    iVar3 = 0x0;
    bVar2 = 0x0;
    if ((gTheGame._90958_2_ & 0x2000) != 0x0) {
        if (((geTypeMenu == 0x1e) || (geTypeMenu == 0x21)) || (geTypeMenu == 0x24)) {
            bVar2 = (gTheGame._90958_2_ & 0x30) == 0x30;
            if (((gTheGame._90974_2_ & 0x2000) != 0x0) && ((gTheGame._90974_2_ & 0x30) == 0x30)) {
                bVar2 |= 0x2;
            }
            if (bVar2 == 0x3) {
                if (bHold_207 == 0x0) {
                    iVar3 = -0x1;
                    gnCheatMenu ^= 0x8;
                    menuInitCharacterSelect2P(giScreenMenu,0x0);
                }
                bHold_207 = -0x1;
            }
            else {
                bHold_207 = 0x0;
            }
        }
        uVar1 = *param_2;
        if ((uVar1 != 0x0) && (uVar1 == (gTheGame._90958_2_ & 0xffffdfff))) {
            *(uint *)(ganButton + giButton * 0x4) = uVar1;
            giButton = giButton + 0x1 & 0x7;
            if (geTypeMenu == 0x9) {
                bVar2 |= 0x1;
                if ((((*(int *)(ganButton + ((giButton - 0x4) * 0x4 & 0x1c)) == 0x20) &&
                     (*(int *)(ganButton + ((giButton - 0x3) * 0x4 & 0x1c)) == 0x20)) &&
                    (*(int *)(ganButton + ((giButton - 0x2) * 0x4 & 0x1c)) == 0x8000)) &&
                   (*(int *)(ganButton + ((giButton - 0x1) * 0x4 & 0x1c)) == 0x4000)) {
                    iVar3 = -0x1;
                    gnCheatMenu ^= 0x2;
                    menuInit1PVS(giScreenMenu,0x0);
                }
                if (((*(int *)(ganButton + ((giButton - 0x4) * 0x4 & 0x1c)) == 0x10) &&
                    (*(int *)(ganButton + ((giButton - 0x3) * 0x4 & 0x1c)) == 0x20)) &&
                   ((*(int *)(ganButton + ((giButton - 0x2) * 0x4 & 0x1c)) == 0x8000 &&
                    (*(int *)(ganButton + ((giButton - 0x1) * 0x4 & 0x1c)) == 0x4000)))) {
                    iVar3 = -0x1;
                    gnCheatMenu ^= 0x4;
                    menuInit1PVS(giScreenMenu,0x0);
                }
            }
            if (geTypeMenu == 0x13) {
                bVar2 |= 0x1;
                if (((*(int *)(ganButton + ((giButton - 0x4) * 0x4 & 0x1c)) == 0x10) &&
                    (*(int *)(ganButton + ((giButton - 0x3) * 0x4 & 0x1c)) == 0x10)) &&
                   ((*(int *)(ganButton + ((giButton - 0x2) * 0x4 & 0x1c)) == 0x8000 &&
                    (*(int *)(ganButton + ((giButton - 0x1) * 0x4 & 0x1c)) == 0x4000)))) {
                    iVar3 = -0x1;
                    gnCheatMenu ^= 0x10;
                    menuInit1PPuzzle(giScreenMenu,0x0);
                }
                if ((((*(int *)(ganButton + ((giButton - 0x4) * 0x4 & 0x1c)) == 0x8000) &&
                     (*(int *)(ganButton + ((giButton - 0x3) * 0x4 & 0x1c)) == 0x10)) &&
                    (*(int *)(ganButton + ((giButton - 0x2) * 0x4 & 0x1c)) == 0x4000)) &&
                   (*(int *)(ganButton + ((giButton - 0x1) * 0x4 & 0x1c)) == 0x20)) {
                    iVar3 = -0x1;
                    gnCheatMenu ^= 0x20;
                    menuInit1PPuzzle(giScreenMenu,0x0);
                }
            }
            if (((((geTypeMenu == 0x3) &&
                  (bVar2 |= 0x1, *(int *)(ganButton + ((giButton - 0x8) * 0x4 & 0x1c)) == 0x8)) &&
                 ((*(int *)(ganButton + ((giButton - 0x7) * 0x4 & 0x1c)) == 0x4 &&
                  ((*(int *)(ganButton + ((giButton - 0x6) * 0x4 & 0x1c)) == 0x2 &&
                   (*(int *)(ganButton + ((giButton - 0x5) * 0x4 & 0x1c)) == 0x1)))))) &&
                (*(int *)(ganButton + ((giButton - 0x4) * 0x4 & 0x1c)) == 0x8000)) &&
               ((((*(int *)(ganButton + ((giButton - 0x3) * 0x4 & 0x1c)) == 0x4000 &&
                  (*(int *)(ganButton + ((giButton - 0x2) * 0x4 & 0x1c)) == 0x8000)) &&
                 (*(int *)(ganButton + ((giButton - 0x1) * 0x4 & 0x1c)) == 0x4000)) &&
                ((gnCheatMenu & 0x40) == 0x0)))) {
                gnCheatMenu |= 0x40;
                iVar3 = -0x1;
                menuShowDialog(0x64,0x0);
            }
        }
    }
    if (iVar3 != 0x0) {
        menuSaveData(0xffffffff);
        PlaySE(SFX_INIT_TABLE,0x9);
    }
    if ((bVar2 & 0x1) != 0x0) {
        *param_2 = 0x0;
        *param_1 = 0x0;
    }
    if ((bVar2 & 0x2) != 0x0) {
        param_2[0x1] = 0x0;
        param_1[0x1] = 0x0;
    }
    return iVar3;
}



undefined4 menuStageClearXtra(void)

{
    byte *pbVar1;
    undefined auStack_10 [0x4];
    int local_c;
    undefined4 local_8 [0x2];
    
    screenFind(local_8,_313);
    screenGetCursor(local_8[0],0x64,&local_c,auStack_10);
    if (local_c == 0x1) {
        pbVar1 = gTheGame + gaiName._0_4_ * 0x880 + 0x1d747;
    }
    else {
        pbVar1 = gTheGame + gaiName._0_4_ * 0x880 + 0x1d6bb;
    }
    if (((((gMain == 0x2bc) && (gTheGame._120360_4_ == 0x5)) && ((*pbVar1 & 0x1f) == 0x1f)) &&
        (((pbVar1[0x1] & 0x1f) == 0x1f && ((pbVar1[0x2] & 0x1f) == 0x1f)))) &&
       (((pbVar1[0x3] & 0x1f) == 0x0 &&
        (((pbVar1[0x4] & 0x1f) == 0x0 && ((pbVar1[0x5] & 0x1f) == 0x0)))))) {
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 menuStageClearLast(void)

{
    undefined4 uVar1;
    byte *pbVar2;
    undefined auStack_10 [0x4];
    int local_c;
    undefined4 local_8 [0x2];
    
    screenFind(local_8,_313);
    screenGetCursor(local_8[0],0x64,&local_c,auStack_10);
    if (local_c == 0x1) {
        pbVar2 = gTheGame + gaiName._0_4_ * 0x880 + 0x1d747;
    }
    else {
        pbVar2 = gTheGame + gaiName._0_4_ * 0x880 + 0x1d6bb;
    }
    if (((((gMain == 0x2bc) && (gTheGame._120360_4_ == 0x5)) && ((*pbVar2 & 0x1f) == 0x1f)) &&
        (((pbVar2[0x1] & 0x1f) == 0x1f && ((pbVar2[0x2] & 0x1f) == 0x1f)))) &&
       (((pbVar2[0x3] & 0x1f) == 0x1f &&
        (((pbVar2[0x4] & 0x1f) == 0x1f && ((pbVar2[0x5] & 0x1f) == 0x1f)))))) {
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = 0x0;
    }
    return uVar1;
}



undefined4 menuTestPuzzleStage(int param_1)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    
    if (gbOpenTitle != 0x0) {
        return 0xffffffff;
    }
    if (((gnCheatMenu & 0x10) != 0x0) && (param_1 < 0x3)) {
        return 0xffffffff;
    }
    if (((gnCheatMenu & 0x20) != 0x0) && (param_1 < 0x5)) {
        return 0xffffffff;
    }
    if (param_1 == 0x3) {
        return 0x0;
    }
    if (param_1 < 0x3) {
        if (param_1 == 0x1) {
            iVar1 = gaiName._0_4_ * 0x880 + 0x2be621;
        }
        else {
            if (0x0 < param_1) {
                return 0x0;
            }
            if (param_1 < 0x0) {
                return 0x0;
            }
            iVar1 = gaiName._0_4_ * 0x880 + 0x2be61b;
        }
        iVar3 = 0x2d;
        uVar2 = 0x0;
        if (true) {
            do {
                if ((0x1 << (uVar2 & 0x7) & (int)*(char *)(iVar1 + ((int)uVar2 >> 0x3))) == 0x0) {
                    return 0x0;
                }
                uVar2 += 0x1;
                iVar3 += -0x1;
            } while (iVar3 != 0x0);
        }
        return 0xffffffff;
    }
    if (param_1 == 0x5) {
        return 0x0;
    }
    if (0x4 < param_1) {
        return 0x0;
    }
    return 0x0;
}



undefined4 menuTestVsCPUContinue(int param_1)

{
    if (param_1 == 0x2) {
        if ((gTheGame[gaiName._0_4_ * 0x880 + 0x1d7f9] != '\0') &&
           ((char)gTheGame[gaiName._0_4_ * 0x880 + 0x1d7f9] < '\x0e')) {
            return 0xffffffff;
        }
        return 0x0;
    }
    if (param_1 < 0x2) {
        if (param_1 == 0x0) {
            if ((gTheGame[gaiName._0_4_ * 0x880 + 0x1d7f7] != '\0') &&
               ((char)gTheGame[gaiName._0_4_ * 0x880 + 0x1d7f7] < '\t')) {
                return 0xffffffff;
            }
            return 0x0;
        }
        if (-0x1 < param_1) {
            if ((gTheGame[gaiName._0_4_ * 0x880 + 0x1d7f8] != '\0') &&
               ((char)gTheGame[gaiName._0_4_ * 0x880 + 0x1d7f8] < '\r')) {
                return 0xffffffff;
            }
            return 0x0;
        }
    }
    else {
        if (param_1 == 0x4) {
            if ((gTheGame[gaiName._0_4_ * 0x880 + 0x1d7fb] != '\0') &&
               ((char)gTheGame[gaiName._0_4_ * 0x880 + 0x1d7fb] < '\x0f')) {
                return 0xffffffff;
            }
            return 0x0;
        }
        if (param_1 < 0x4) {
            if ((gTheGame[gaiName._0_4_ * 0x880 + 0x1d7fa] != '\0') &&
               ((char)gTheGame[gaiName._0_4_ * 0x880 + 0x1d7fa] < '\x0f')) {
                return 0xffffffff;
            }
            return 0x0;
        }
    }
    return 0x0;
}



undefined4 menuNest(undefined4 param_1)

{
    int iVar1;
    undefined4 uVar2;
    
    if ((gnCountMenu < 0x20) && (iVar1 = menuSetScreen(param_1,0x0), iVar1 != 0x0)) {
        uVar2 = 0xffffffff;
        iVar1 = gnCountMenu * 0x4;
        gnCountMenu = gnCountMenu + 0x1;
        *(undefined4 *)(gaeTypeMenu + iVar1) = param_1;
    }
    else {
        uVar2 = 0x0;
    }
    return uVar2;
}



void menuUpdateName(void)

{
    int iVar1;
    undefined1 *puVar2;
    uint uVar3;
    undefined4 local_18 [0x3];
    
    iVar1 = screenFind(local_18,_456);
    if (iVar1 != 0x0) {
        iVar1 = 0x0;
        puVar2 = gTheGame;
        do {
            screenSetText(local_18[0],iVar1 + 0x64,puVar2 + 0x1d68a);
            iVar1 += 0x1;
            puVar2 = puVar2 + 0x880;
        } while (iVar1 < 0x8);
        puVar2 = gTheGame + gaiName._0_4_ * 0x880;
        for (uVar3 = gaiName._0_4_; (*(short *)(puVar2 + 0x1d68a) == 0x0 && (0x0 < (int)uVar3));
            uVar3 -= 0x1) {
            puVar2 = puVar2 + -0x880;
        }
        screenSetArea(local_18[0],0x64,0x0);
        screenSetCursor(local_18[0],0x64,
                        uVar3 + (((int)uVar3 >> 0x1) +
                                (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0)) * -0x2,
                        ((int)uVar3 >> 0x1) + (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0));
        puVar2 = gTheGame + gaiName._4_4_ * 0x880;
        for (uVar3 = gaiName._4_4_; (*(short *)(puVar2 + 0x1d68a) == 0x0 && (0x0 < (int)uVar3));
            uVar3 -= 0x1) {
            puVar2 = puVar2 + -0x880;
        }
        screenSetArea(local_18[0],0x6e,0x1);
        screenSetCursor(local_18[0],0x6e,
                        uVar3 + (((int)uVar3 >> 0x1) +
                                (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0)) * -0x2,
                        ((int)uVar3 >> 0x1) + (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0));
        puVar2 = gTheGame + gaiName._8_4_ * 0x880;
        for (uVar3 = gaiName._8_4_; (*(short *)(puVar2 + 0x1d68a) == 0x0 && (0x0 < (int)uVar3));
            uVar3 -= 0x1) {
            puVar2 = puVar2 + -0x880;
        }
        screenSetArea(local_18[0],0x78,0x2);
        screenSetCursor(local_18[0],0x78,
                        uVar3 + (((int)uVar3 >> 0x1) +
                                (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0)) * -0x2,
                        ((int)uVar3 >> 0x1) + (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0));
        puVar2 = gTheGame + gaiName._12_4_ * 0x880;
        for (uVar3 = gaiName._12_4_; (*(short *)(puVar2 + 0x1d68a) == 0x0 && (0x0 < (int)uVar3));
            uVar3 -= 0x1) {
            puVar2 = puVar2 + -0x880;
        }
        screenSetArea(local_18[0],0x82,0x3);
        screenSetCursor(local_18[0],0x82,
                        uVar3 + (((int)uVar3 >> 0x1) +
                                (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0)) * -0x2,
                        ((int)uVar3 >> 0x1) + (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0));
    }
    return;
}



undefined4 menuDeleteNameMain(int param_1,int param_2)

{
    uint uVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined1 *puVar4;
    undefined *puVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    uint uVar9;
    undefined auStack_d0 [0x14];
    uint local_bc;
    int aiStack_a4 [0x24];
    
    if (((param_1 < 0x1) || (0x7 < param_1)) ||
       (puVar4 = gTheGame, *(short *)(gTheGame + param_1 * 0x880 + 0x1d68a) == 0x0)) {
        uVar3 = 0x0;
    }
    else {
        iVar6 = 0x0;
        do {
            uVar1 = 0x7 - param_1;
            if (param_1 < 0x7) {
                uVar9 = uVar1 >> 0x2;
                iVar8 = param_1;
                iVar7 = param_1;
                if (uVar9 != 0x0) {
                    do {
                        puVar4[iVar7 + 0x1d81c] = puVar4[iVar7 + 0x1d81d];
                        puVar4[iVar7 + 0x1d82c] = puVar4[iVar7 + 0x1d82d];
                        puVar4[iVar7 + 0x1d83c] = puVar4[iVar7 + 0x1d83d];
                        puVar4[iVar7 + 0x1d84c] = puVar4[iVar7 + 0x1d84d];
                        puVar4[iVar7 + 0x1d85c] = puVar4[iVar7 + 0x1d85d];
                        puVar4[iVar7 + 0x1d86c] = puVar4[iVar7 + 0x1d86d];
                        puVar4[iVar7 + 0x1d81d] = puVar4[iVar7 + 0x1d81e];
                        puVar4[iVar7 + 0x1d82d] = puVar4[iVar7 + 0x1d82e];
                        puVar4[iVar7 + 0x1d83d] = puVar4[iVar7 + 0x1d83e];
                        puVar4[iVar7 + 0x1d84d] = puVar4[iVar7 + 0x1d84e];
                        puVar4[iVar7 + 0x1d85d] = puVar4[iVar7 + 0x1d85e];
                        puVar4[iVar7 + 0x1d86d] = puVar4[iVar7 + 0x1d86e];
                        puVar4[iVar7 + 0x1d81e] = puVar4[iVar7 + 0x1d81f];
                        puVar4[iVar7 + 0x1d82e] = puVar4[iVar7 + 0x1d82f];
                        puVar4[iVar7 + 0x1d83e] = puVar4[iVar7 + 0x1d83f];
                        puVar4[iVar7 + 0x1d84e] = puVar4[iVar7 + 0x1d84f];
                        puVar4[iVar7 + 0x1d85e] = puVar4[iVar7 + 0x1d85f];
                        puVar4[iVar7 + 0x1d86e] = puVar4[iVar7 + 0x1d86f];
                        iVar8 = iVar7 + 0x4;
                        puVar4[iVar7 + 0x1d81f] = puVar4[iVar7 + 0x1d820];
                        puVar4[iVar7 + 0x1d82f] = puVar4[iVar7 + 0x1d830];
                        puVar4[iVar7 + 0x1d83f] = puVar4[iVar7 + 0x1d840];
                        puVar4[iVar7 + 0x1d84f] = puVar4[iVar7 + 0x1d850];
                        puVar4[iVar7 + 0x1d85f] = puVar4[iVar7 + 0x1d860];
                        puVar4[iVar7 + 0x1d86f] = puVar4[iVar7 + 0x1d870];
                        uVar9 -= 0x1;
                        iVar7 = iVar8;
                    } while (uVar9 != 0x0);
                    uVar1 &= 0x3;
                    if (uVar1 == 0x0) goto LAB_00077dcc;
                }
                do {
                    puVar4[iVar8 + 0x1d81c] = puVar4[iVar8 + 0x1d81d];
                    puVar4[iVar8 + 0x1d82c] = puVar4[iVar8 + 0x1d82d];
                    puVar4[iVar8 + 0x1d83c] = puVar4[iVar8 + 0x1d83d];
                    puVar4[iVar8 + 0x1d84c] = puVar4[iVar8 + 0x1d84d];
                    puVar4[iVar8 + 0x1d85c] = puVar4[iVar8 + 0x1d85d];
                    puVar4[iVar8 + 0x1d86c] = puVar4[iVar8 + 0x1d86d];
                    uVar1 -= 0x1;
                    iVar8 = iVar8 + 0x1;
                } while (uVar1 != 0x0);
            }
LAB_00077dcc:
            iVar6 += 0x1;
            puVar4 = puVar4 + 0x880;
        } while (iVar6 < 0x8);
        puVar4 = gTheGame + param_1 * 0x880;
        for (iVar6 = param_1; iVar6 < 0x7; iVar6 += 0x1) {
            bcopy(gTheGame + (iVar6 + 0x1) * 0x880 + 0x1d688,puVar4 + 0x1d688,0x880);
            puVar4[0x1d688] = (char)iVar6;
            puVar4 = puVar4 + 0x880;
        }
        bzero(gTheGame + iVar6 * 0x880 + 0x1d688,0x880);
        gTheGame[iVar6 * 0x880 + 0x1d688] = (char)iVar6;
        if ((param_2 != 0x0) && (iVar6 = menuLoadUserData(auStack_d0), iVar6 != 0x0)) {
            menuInitUserData(auStack_d0,0x0);
            if (aiStack_a4[param_1] != -0x1) {
                local_bc &= ~(0x1 << aiStack_a4[param_1]);
            }
            puVar5 = auStack_d0 + param_1 * 0x4;
            uVar1 = 0x7 - param_1;
            iVar6 = param_1;
            if (param_1 < 0x7) {
                uVar9 = uVar1 >> 0x3;
                uVar2 = uVar1;
                if (uVar9 == 0x0) goto LAB_00077f2c;
                do {
                    *(undefined4 *)(puVar5 + 0x2c) = *(undefined4 *)(puVar5 + 0x30);
                    *(undefined4 *)(puVar5 + 0x30) = *(undefined4 *)(puVar5 + 0x34);
                    *(undefined4 *)(puVar5 + 0x34) = *(undefined4 *)(puVar5 + 0x38);
                    *(undefined4 *)(puVar5 + 0x38) = *(undefined4 *)(puVar5 + 0x3c);
                    *(undefined4 *)(puVar5 + 0x3c) = *(undefined4 *)(puVar5 + 0x40);
                    *(undefined4 *)(puVar5 + 0x40) = *(undefined4 *)(puVar5 + 0x44);
                    *(undefined4 *)(puVar5 + 0x44) = *(undefined4 *)(puVar5 + 0x48);
                    *(undefined4 *)(puVar5 + 0x48) = *(undefined4 *)(puVar5 + 0x4c);
                    puVar5 = puVar5 + 0x20;
                    uVar9 -= 0x1;
                } while (uVar9 != 0x0);
                for (uVar2 = uVar1 & 0x7; uVar2 != 0x0; uVar2 -= 0x1) {
LAB_00077f2c:
                    *(undefined4 *)(puVar5 + 0x2c) = *(undefined4 *)(puVar5 + 0x30);
                    puVar5 = puVar5 + 0x4;
                }
                iVar6 = param_1 + uVar1;
            }
            aiStack_a4[iVar6] = -0x1;
            for (; param_1 < 0x8; param_1 += 0x1) {
                menuSaveUserData(auStack_d0,param_1);
            }
        }
        menuUpdateName();
        uVar3 = 0xffffffff;
    }
    return uVar3;
}



void menuShowDialog(undefined4 param_1,int param_2)

{
    if (param_2 < 0x4) {
        gnTagDialog = param_1;
        giPlayerDialog = param_2;
        screenShowDialog(giScreenMenu,param_1);
        gnTickCountDialog = 0x0;
    }
    return;
}



void menuTickDialog(undefined4 param_1,int param_2,int param_3)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    int *piVar4;
    int iVar5;
    int unaff_r30;
    int local_24 [0x2];
    
    iVar1 = gnTagDialog;
    if (param_2 == giPlayerDialog) {
        screenGetDialogButton(giScreenMenu,gnTagDialog,local_24);
        piVar4 = (int *)(param_3 + param_2 * 0x4);
        if (*piVar4 == 0x20) {
            *piVar4 = 0x0;
            iVar3 = 0x0;
            if (((geTypeMenu == 0x3) && (iVar1 == 0x64)) &&
               (gnCheatMenu &= 0xffffffbf, local_24[0] == 0x1)) {
                menuWipeUserData();
                PlaySE(SFX_INIT_TABLE,0x101);
            }
            if ((geTypeMenu == 0x30) && (iVar1 == 0xd2)) {
                iVar3 = -0x1;
                if (local_24[0] == 0x1) {
                    DummyDelete(giName);
                    PlaySE(SFX_INIT_TABLE,0x101);
                }
                else {
                    PlaySE(SFX_INIT_TABLE,0x6);
                }
            }
            screenHideDialog(giScreenMenu,gnTagDialog);
            iVar5 = -0x1;
            gnTagDialog = -0x1;
            gnTickCountDialog = 0xffffffff;
            if ((geTypeMenu == 0x2f) && (iVar1 == 0x1fe)) {
                iVar3 = -0x1;
                if (local_24[0] == 0x1) {
                    if (gTheGame._120458_2_ == 0x0) {
                        iVar5 = 0x0;
                    }
                    else if (gTheGame._122634_2_ == 0x0) {
                        iVar5 = 0x1;
                    }
                    else if (gTheGame._124810_2_ == 0x0) {
                        iVar5 = 0x2;
                    }
                    else if (gTheGame._126986_2_ == 0x0) {
                        iVar5 = 0x3;
                    }
                    else if (gTheGame._129162_2_ == 0x0) {
                        iVar5 = 0x4;
                    }
                    else if (gTheGame._131338_2_ == 0x0) {
                        iVar5 = 0x5;
                    }
                    else if (gTheGame._133514_2_ == 0x0) {
                        iVar5 = 0x6;
                    }
                    else if (gTheGame._135690_2_ == 0x0) {
                        iVar5 = 0x7;
                    }
                    if (iVar5 == -0x1) {
                        iVar5 = -0x1;
                    }
                    else {
                        menuInitUser(iVar5);
                        bcopy(ganName,gTheGame + iVar5 * 0x880 + 0x1d68a,0xe);
                    }
                    *(int *)(gaiName + param_2 * 0x4) = iVar5;
                    if (iVar5 == -0x1) {
                        PlaySE(SFX_INIT_TABLE,0x7);
                    }
                    else {
                        PlaySE(SFX_INIT_TABLE,0x4);
                        menuUpdateName();
                        menuSaveData(*(int *)(gaiName + param_2 * 0x4));
                        if (gnCountMenu == 0x1) {
                            gMain = 0x1f4;
                            gReset = 0xffffffff;
                        }
                        else if ((gnCountMenu < 0x2) ||
                                (iVar1 = menuSetScreen(*(undefined4 *)
                                                        (ganPick + gnCountMenu * 0x4 + 0xc),
                                                       0xffffffff), iVar1 == 0x0)) {
                            unaff_r30 = 0x0;
                        }
                        else {
                            unaff_r30 = -0x1;
                            gnCountMenu += -0x1;
                        }
                        if (unaff_r30 == 0x0) {
                            *piVar4 = 0x0;
                        }
                    }
                }
                else {
                    PlaySE(SFX_INIT_TABLE,0x6);
                }
            }
            if (iVar3 == 0x0) {
                if (local_24[0] == 0x1) {
                    uVar2 = 0x2;
                }
                else {
                    uVar2 = 0x6;
                }
                PlaySE(SFX_INIT_TABLE,uVar2);
            }
        }
        else if (*piVar4 == 0x21) {
            screenHideDialog(giScreenMenu,gnTagDialog);
            gnTagDialog = -0x1;
            gnTickCountDialog = 0xffffffff;
            *piVar4 = 0x0;
            PlaySE(SFX_INIT_TABLE,0x6);
            if ((geTypeMenu == 0x3) && (iVar1 == 0x64)) {
                gnCheatMenu &= 0xffffffbf;
            }
        }
    }
    else {
        piVar4 = (int *)(param_3 + param_2 * 0x4);
        if (*piVar4 != 0x0) {
            PlaySE(SFX_INIT_TABLE,0x7);
            *piVar4 = 0x0;
        }
    }
    return;
}



undefined4 menuSetScreen(int param_1,int param_2)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    int iVar5;
    bool bVar6;
    uint uVar7;
    uint uVar8;
    int local_28;
    undefined4 *local_24 [0x2];
    
    iVar2 = geTypeMenu;
    iVar3 = menuFind(local_24,param_1);
    if (iVar3 == 0x0) {
        uVar4 = 0x0;
    }
    else {
        iVar3 = screenFind(&local_28,*local_24[0]);
        if (iVar3 == 0x0) {
            uVar4 = 0x0;
        }
        else if ((local_28 == giScreenMenu) && (iVar3 = screenChangePending(), iVar3 == 0x0)) {
            uVar4 = 0x0;
        }
        else {
            if ((param_1 < 0x1c) || (0x24 < param_1)) {
                if ((param_1 < 0x26) || (0x27 < param_1)) {
                    uVar4 = 0x1;
                    uVar7 = 0x1;
                }
                else {
                    uVar4 = 0x4;
                    uVar7 = 0x4;
                }
            }
            else {
                uVar4 = 0x2;
                uVar7 = 0x2;
            }
            bVar1 = false;
            bVar6 = false;
            if ((param_2 != 0x0) && (local_28 == giScreenMenuLast)) {
                bVar6 = true;
            }
            if ((bVar6) && (iVar3 = screenChangePending(), iVar3 != 0x0)) {
                bVar1 = true;
            }
            if (bVar1) {
                iVar3 = -0x1;
            }
            else {
                iVar3 = 0x0;
            }
            uVar8 = uVar7 | 0x400;
            if (param_2 != 0x0) {
                uVar8 = uVar7 | 0x500;
            }
            if (giScreenMenu != -0x1) {
                uVar8 |= 0x200;
            }
            if ((((geTypeMenu == 0x1d) && (param_1 == 0x1e)) ||
                ((geTypeMenu == 0x20 && (param_1 == 0x21)))) ||
               ((geTypeMenu == 0x23 && (param_1 == 0x24)))) {
                uVar8 |= 0x800;
            }
            if ((geTypeMenu == 0x26) && (param_1 == 0x27)) {
                uVar8 |= 0x800;
            }
            iVar5 = screenSet(*local_24[0],uVar8);
            if ((iVar5 == giScreenMenu) || (iVar5 != local_28)) {
                uVar4 = 0x0;
            }
            else {
                gnTickMenu = 0x0;
                giScreenMenuLast = giScreenMenu;
                anTagBlinkLast._0_4_ = 0xffffffff;
                anTagBlinkLast._4_4_ = 0xffffffff;
                anTagBlinkLast._8_4_ = 0xffffffff;
                anTagBlinkLast._12_4_ = 0xffffffff;
                giScreenMenu = iVar5;
                gnPlayerCount = uVar4;
                ganPick._0_4_ = iVar3;
                ganPick._4_4_ = iVar3;
                ganPick._8_4_ = iVar3;
                ganPick._12_4_ = iVar3;
                geTypeMenu = param_1;
                if (iVar3 == 0x0) {
                    if ((code *)local_24[0][0x1] != NULL) {
                        (*(code *)local_24[0][0x1])(iVar5,iVar2);
                    }
                }
                if (gbAudioChanged != 0x0) {
                    gbAudioChanged = 0x0;
                    FadeOutAllSFXs(0x3c);
                    FadeOutAllSongs(0x3c);
                    ForceLoadSong(0x21,0x0);
                    SetSongCrossFadeValue(0x3c);
                    PlaySong(0x0);
                }
                uVar4 = 0xffffffff;
            }
        }
    }
    return uVar4;
}



undefined4 menuWinkFace(uint param_1,undefined4 param_2,int param_3)

{
    uint uVar1;
    int iVar2;
    bool bVar4;
    undefined4 uVar3;
    uint extraout_r4;
    int iVar5;
    uint uVar6;
    uint *puVar7;
    uint local_24;
    int local_20 [0x3];
    
    puVar7 = (uint *)(anTagBlinkLast + param_3 * 0x4);
    iVar5 = 0x0;
    uVar1 = *puVar7 & 0xffff;
    if (param_1 != uVar1) {
        iVar2 = screenGetImage(param_2,uVar1,local_20);
        if ((iVar2 != 0x0) &&
           (screenGetFrame(param_2,uVar1,&local_24),
           (int)local_24 < *(int *)(local_20[0] + 0x18) + -0x1)) {
            iVar5 = -0x1;
            screenSetFrame(param_2,uVar1,0x0);
        }
        *puVar7 = param_1;
    }
    iVar2 = screenGetImage(param_2,param_1,local_20);
    if ((iVar2 == 0x0) ||
       (screenGetFrame(param_2,param_1,&local_24),
       *(int *)(local_20[0] + 0x18) + -0x1 <= (int)local_24)) {
        bVar4 = false;
        if ((param_1 == 0xffffffff) && (iVar5 != 0x0)) {
            bVar4 = true;
        }
        if (bVar4) {
            uVar3 = 0xffffffff;
        }
        else {
            uVar3 = 0x0;
        }
    }
    else {
        bVar4 = true;
        local_24 = *puVar7 >> 0x1c;
        if ((local_24 != 0x1) && (local_24 != 0x4)) {
            bVar4 = false;
        }
        if (bVar4) {
            uVar1 = 0x1;
        }
        else {
            uVar1 = 0x8;
        }
        uVar6 = (*puVar7 >> 0x10 & 0xfff) + 0x1;
        if (uVar1 <= uVar6) {
            uVar6 = 0x0;
            if (local_24 == 0x0) {
                pon_osGetTime();
                if ((extraout_r4 & 0x7) == 0x7) {
                    local_24 = 0x1;
                }
            }
            else {
                local_24 += 0x1;
                if (0x4 < local_24) {
                    local_24 = 0x0;
                }
            }
        }
        screenSetFrame(param_2,param_1,*(undefined *)((int)&aiFrameEye + local_24));
        uVar3 = 0xffffffff;
        *puVar7 = param_1 | local_24 << 0x1c | uVar6 << 0x10;
    }
    return uVar3;
}



void menuInitOptions(undefined4 param_1)

{
    undefined4 local_8 [0x2];
    
    local_8[0] = param_1;
    screenFind(local_8,&_710);
    screenSetArea(local_8[0],0x64,0x0);
    screenSetCursor(local_8[0],0x64,0x0,0x0);
    return;
}



void menuInitRound(undefined4 param_1,int param_2)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    uint uVar10;
    int iVar11;
    
    iVar7 = 0x0;
    iVar4 = 0x0;
    screenHideImage(param_1,0x818f8064);
    screenHideText(param_1,0x818f8064);
    if (geTypeMenu == 0x17) {
        screenShowText(param_1,0x79);
        screenShowText(param_1,0xdd);
        screenShowText(param_1,0x141);
        screenShowImage(param_1,0x78);
        screenShowImage(param_1,0xdc);
        screenShowImage(param_1,0x140);
        screenShowImage(param_1,0x66);
        screenShowImage(param_1,0xca);
        screenShowImage(param_1,0x12e);
    }
    else if (geTypeMenu == 0x19) {
        screenShowText(param_1,0x83);
        screenShowText(param_1,0xe7);
        screenShowText(param_1,0x14b);
        screenShowImage(param_1,0x82);
        screenShowImage(param_1,0xe6);
        screenShowImage(param_1,0x14a);
        screenShowImage(param_1,0x67);
        screenShowImage(param_1,0xcb);
        screenShowImage(param_1,0x12f);
    }
    else {
        if ((geTypeMenu == 0x14) || (geTypeMenu == 0x16)) {
            screenShowImage(param_1,0x64);
            screenShowImage(param_1,0xc8);
            screenShowImage(param_1,0x12c);
            if (geTypeMenu == 0x14) {
                iVar4 = 0x1;
            }
            else {
                iVar4 = 0x7;
            }
        }
        else if ((geTypeMenu == 0x15) || (geTypeMenu == 0x18)) {
            screenShowImage(param_1,0x65);
            screenShowImage(param_1,0xc9);
            screenShowImage(param_1,0x12d);
            if (geTypeMenu == 0x15) {
                iVar4 = 0x4;
            }
            else {
                iVar4 = 0xa;
            }
        }
        screenShowImage(param_1,0x6e);
        screenShowImage(param_1,0xd2);
        screenShowImage(param_1,0x136);
        screenShowText(param_1,0x6f);
        screenShowText(param_1,0xd3);
        screenShowText(param_1,0x137);
        screenSetNumber(param_1,0x6f,iVar4,0x0);
        screenSetNumber(param_1,0xd3,iVar4 + 0x1,0x0);
        screenSetNumber(param_1,0x137,iVar4 + 0x2,0x0);
    }
    if (geTypeMenu == 0x17) {
        iVar7 = gaiName._0_4_ * 0x880 + 0x2be639;
    }
    else if (geTypeMenu < 0x17) {
        if (geTypeMenu == 0x15) {
            iVar7 = gaiName._0_4_ * 0x880 + 0x2be621;
        }
        else if (geTypeMenu < 0x15) {
            if (0x13 < geTypeMenu) {
                iVar7 = gaiName._0_4_ * 0x880 + 0x2be61b;
            }
        }
        else {
            iVar7 = gaiName._0_4_ * 0x880 + 0x2be627;
        }
    }
    else if (geTypeMenu == 0x19) {
        iVar7 = gaiName._0_4_ * 0x880 + 0x2be633;
    }
    else if (geTypeMenu < 0x19) {
        iVar7 = gaiName._0_4_ * 0x880 + 0x2be62d;
    }
    iVar4 = 0x64;
    screenShowArea(param_1,0x64);
    iVar6 = 0x0;
    iVar9 = 0x8c;
    iVar8 = 0x8d;
    uVar10 = 0x0;
    do {
        iVar1 = 0x0;
        iVar11 = 0x3;
        iVar2 = 0x0;
        iVar5 = 0x0;
        uVar3 = uVar10;
        do {
            if ((0x1 << (uVar3 & 0x7) & (int)*(char *)(iVar7 + ((int)uVar3 >> 0x3))) != 0x0) {
                iVar1 = -0x1;
                iVar5 = iVar2 + 0x1;
            }
            if ((0x1 << (uVar3 + 0x1 & 0x7) & (int)*(char *)(iVar7 + ((int)(uVar3 + 0x1) >> 0x3)))
                != 0x0) {
                iVar1 = -0x1;
                iVar5 = iVar2 + 0x2;
            }
            if ((0x1 << (uVar3 + 0x2 & 0x7) & (int)*(char *)(iVar7 + ((int)(uVar3 + 0x2) >> 0x3)))
                != 0x0) {
                iVar1 = -0x1;
                iVar5 = iVar2 + 0x3;
            }
            if ((0x1 << (uVar3 + 0x3 & 0x7) & (int)*(char *)(iVar7 + ((int)(uVar3 + 0x3) >> 0x3)))
                != 0x0) {
                iVar1 = -0x1;
                iVar5 = iVar2 + 0x4;
            }
            if ((0x1 << (uVar3 + 0x4 & 0x7) & (int)*(char *)(iVar7 + ((int)(uVar3 + 0x4) >> 0x3)))
                != 0x0) {
                iVar1 = -0x1;
                iVar5 = iVar2 + 0x5;
            }
            uVar3 += 0x5;
            iVar2 += 0x5;
            iVar11 += -0x1;
        } while (iVar11 != 0x0);
        if (iVar1 != 0x0) {
            screenShowImage(param_1,iVar9);
            screenShowText(param_1,iVar8);
            screenSetNumber(param_1,iVar8,iVar5,0x0);
        }
        if (0x0 < iVar6) {
            uVar3 = (iVar6 + -0x1) * 0xf;
            iVar2 = 0x3;
            iVar1 = 0x0;
            do {
                if ((0x1 << (uVar3 & 0x7) & (int)*(char *)(iVar7 + ((int)uVar3 >> 0x3))) == 0x0) {
                    iVar2 = 0x0;
                    goto LAB_00078e38;
                }
                if ((0x1 << (uVar3 + 0x1 & 0x7) &
                    (int)*(char *)(iVar7 + ((int)(uVar3 + 0x1) >> 0x3))) == 0x0) {
                    iVar2 = 0x0;
                    goto LAB_00078e38;
                }
                if ((0x1 << (uVar3 + 0x2 & 0x7) &
                    (int)*(char *)(iVar7 + ((int)(uVar3 + 0x2) >> 0x3))) == 0x0) {
                    iVar2 = 0x0;
                    iVar1 = iVar1 + 0x1;
                    goto LAB_00078e38;
                }
                if ((0x1 << (uVar3 + 0x3 & 0x7) &
                    (int)*(char *)(iVar7 + ((int)(uVar3 + 0x3) >> 0x3))) == 0x0) {
                    iVar2 = 0x0;
                    iVar1 = iVar1 + 0x2;
                    goto LAB_00078e38;
                }
                if ((0x1 << (uVar3 + 0x4 & 0x7) &
                    (int)*(char *)(iVar7 + ((int)(uVar3 + 0x4) >> 0x3))) == 0x0) {
                    iVar2 = 0x0;
                    iVar1 = iVar1 + 0x3;
                    goto LAB_00078e38;
                }
                uVar3 += 0x5;
                iVar1 += 0x4;
                iVar2 += -0x1;
            } while (iVar2 != 0x0);
            iVar2 = -0x1;
LAB_00078e38:
            if (iVar2 == 0x0) {
                if (gbOpenTitle == 0x0) {
                    screenHideArea(param_1,iVar6 + 0x64,iVar1);
                    goto LAB_00078e74;
                }
            }
            else {
                iVar4 = iVar6 + 0x64;
            }
            screenShowArea(param_1,iVar6 + 0x64);
        }
LAB_00078e74:
        iVar6 += 0x1;
        uVar10 += 0xf;
        iVar9 += 0x64;
        iVar8 += 0x64;
        if (0x2 < iVar6) {
            if (param_2 == 0x13) {
                screenSetArea(param_1,iVar4,0x0);
                screenSetCursor(param_1,iVar4,0x0,0x0);
            }
            return;
        }
    } while( true );
}



void menuTickRound(undefined4 param_1,int param_2,int param_3)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int local_24;
    int local_20;
    int local_1c;
    
    iVar4 = -0x1;
    screenGetArea(giScreenMenu,&local_1c,0x0);
    switch(geTypeMenu) {
    case 0x14:
        iVar3 = (local_1c + -0x63) * 0x64;
        if (local_1c == 0x64) {
            iVar4 = 0xb;
        }
        else if (local_1c == 0x65) {
            iVar4 = 0xd;
        }
        else if (local_1c == 0x66) {
            iVar4 = 0x11;
        }
        break;
    case 0x15:
        iVar3 = (local_1c + -0x63) * 0x64 + 0x1;
        if (local_1c == 0x64) {
            iVar4 = 0xc;
        }
        else if (local_1c == 0x65) {
            iVar4 = 0xe;
        }
        else if (local_1c == 0x66) {
            iVar4 = 0x13;
        }
        break;
    case 0x16:
        iVar3 = (local_1c + -0x63) * 0x64;
        if (local_1c == 0x64) {
            iVar4 = 0xb;
        }
        else if (local_1c == 0x65) {
            iVar4 = 0xd;
        }
        else if (local_1c == 0x66) {
            iVar4 = 0x11;
        }
        break;
    case 0x17:
        iVar4 = 0x1e4;
        iVar3 = (local_1c + -0x63) * 0x64 + 0x2;
        break;
    case 0x18:
        iVar3 = (local_1c + -0x63) * 0x64 + 0x1;
        if (local_1c == 0x64) {
            iVar4 = 0xc;
        }
        else if (local_1c == 0x65) {
            iVar4 = 0xe;
        }
        else if (local_1c == 0x66) {
            iVar4 = 0x13;
        }
        break;
    case 0x19:
        iVar3 = (local_1c + -0x63) * 0x64 + 0x3;
        if (local_1c == 0x64) {
            iVar4 = 0x15;
        }
        else if (local_1c == 0x65) {
            iVar4 = 0x16;
        }
        else if (local_1c == 0x66) {
            iVar4 = 0x18;
        }
        break;
    case 0x1a:
        iVar3 = 0x64;
        iVar4 = 0xb;
        break;
    default:
        goto switchD_00078f28_caseD_7;
    }
    if ((geTypeMenu == 0x1a) && (piVar2 = (int *)(param_3 + param_2 * 0x4), *piVar2 == 0x20)) {
        screenGetCursor(giScreenMenu,local_1c,&local_20,&local_24);
        iVar1 = CheckPlayerPuzzle(local_20 + local_24 * 0x5 + 0x1);
        if (iVar1 == 0x0) {
            *piVar2 = 0x0;
            PlaySE(SFX_INIT_TABLE,0x7);
        }
    }
    if (((*(int *)(param_3 + param_2 * 0x4) == 0x20) && (iVar4 != -0x1)) &&
       (PlaySE(SFX_INIT_TABLE,iVar4), geTypeMenu == 0x17)) {
        SetPanSFX(last_sfx_handle,0x7f);
    }
    menuWinkFace(iVar3,giScreenMenu,0x0);
switchD_00078f28_caseD_7:
    return;
}



void menuTickController(int param_1,int param_2,int param_3)

{
    int iVar1;
    
    iVar1 = screenChangePending();
    if (((iVar1 == 0x0) && (0xf0 < param_1)) &&
       (*(short *)(gTheGame + param_2 * 0x10 + 0x16344) != 0x0)) {
        *(undefined4 *)(param_3 + param_2 * 0x4) = 0x21;
    }
    return;
}



void menuLoad1PStandard(int param_1,int param_2)

{
    int iVar1;
    uint uVar2;
    undefined4 local_10 [0x3];
    
    if (((0x0 < param_1) && (param_1 < 0x8)) && ((param_2 == 0x0 || (param_2 == 0x2)))) {
        uVar2 = (uint)*(short *)(gTheGame + param_1 * 0x880 + param_2 * 0x2 + 0x1deee);
        iVar1 = screenFind(local_10,&_863);
        if (iVar1 != 0x0) {
            screenSetCursor(local_10[0],0x64,uVar2 & 0x7f,0x0);
            screenSetCursor(local_10[0],0x65,uVar2 >> 0x7 & 0x3,0x0);
            screenSetCursor(local_10[0],0x66,uVar2 >> 0x9 & 0x3,0x0);
        }
        iVar1 = screenFind(local_10,&_864);
        if (iVar1 != 0x0) {
            uVar2 = uVar2 >> 0xb & 0x7;
            screenSetCursor(local_10[0],0x64,uVar2 % 0x3,uVar2 / 0x3);
        }
    }
    return;
}



void menuSave1PStandard(int param_1,int param_2)

{
    int iVar1;
    ushort uVar2;
    int local_20;
    int local_1c;
    undefined4 local_18 [0x3];
    
    if (((0x0 < param_1) && (param_1 < 0x8)) && ((param_2 == 0x0 || (param_2 == 0x2)))) {
        uVar2 = 0x0;
        iVar1 = screenFind(local_18,&_863);
        if (iVar1 != 0x0) {
            screenGetCursor(local_18[0],0x64,&local_1c,&local_20);
            uVar2 = (ushort)local_1c;
            screenGetCursor(local_18[0],0x65,&local_1c,&local_20);
            iVar1 = local_1c << 0x7;
            screenGetCursor(local_18[0],0x66,&local_1c,&local_20);
            uVar2 = uVar2 & 0x7f | (ushort)iVar1 & 0x180 | (ushort)(local_1c << 0x9) & 0x600;
        }
        iVar1 = screenFind(local_18,&_864);
        if (iVar1 != 0x0) {
            screenGetCursor(local_18[0],0x64,&local_1c,&local_20);
            uVar2 |= (short)(local_1c + local_20 * 0x3) * 0x800 & 0x3800U;
        }
        *(ushort *)(gTheGame + param_1 * 0x880 + param_2 * 0x2 + 0x1deee) = uVar2;
    }
    return;
}



void menuTickCharacterSelect1P(undefined4 param_1,int param_2,int param_3)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int local_24;
    int local_20;
    int local_1c [0x2];
    
    screenGetCursor(giScreenMenu,0x64,&local_20,&local_24);
    piVar5 = (int *)(param_3 + param_2 * 0x4);
    local_20 += local_24 * 0x3;
    if (*piVar5 == 0x20) {
        iVar4 = -0x1;
    }
    else {
        iVar4 = local_20 + 0x64;
    }
    iVar3 = 0x64;
    do {
        iVar2 = screenGetImage(giScreenMenu,iVar3,local_1c);
        if (iVar2 != 0x0) {
            if (iVar3 == iVar4) {
                uVar1 = 0xff;
            }
            else {
                uVar1 = 0x8f;
            }
            *(undefined4 *)(local_1c[0] + 0x14) = uVar1;
        }
        iVar3 += 0x1;
    } while (iVar3 < 0x6a);
    menuWinkFace(iVar4,giScreenMenu,0x0);
    if (*piVar5 == 0x20) {
        if (local_20 == 0x3) {
            PlaySE(SFX_INIT_TABLE,0xc);
        }
        else if (local_20 < 0x3) {
            if (local_20 == 0x1) {
                PlaySE(SFX_INIT_TABLE,0xd);
            }
            else if (local_20 < 0x1) {
                if (-0x1 < local_20) {
                    PlaySE(SFX_INIT_TABLE,0xb);
                }
            }
            else {
                PlaySE(SFX_INIT_TABLE,0x11);
            }
        }
        else if (local_20 == 0x5) {
            PlaySE(SFX_INIT_TABLE,0x13);
        }
        else if (local_20 < 0x5) {
            PlaySE(SFX_INIT_TABLE,0xe);
        }
    }
    if ((*piVar5 == 0x20) || (*piVar5 == 0x21)) {
        if (geTypeMenu == 0x7) {
            uVar1 = 0x0;
        }
        else {
            uVar1 = 0x2;
        }
        menuSave1PStandard(gaiName._0_4_,uVar1);
    }
    return;
}



void menuPlayEffect2P(undefined4 param_1,int param_2)

{
    int iVar1;
    undefined4 uVar2;
    
    switch(param_1) {
    case 0x0:
        iVar1 = PlaySE(SFX_INIT_TABLE,0xb);
        break;
    case 0x1:
        iVar1 = PlaySE(SFX_INIT_TABLE,0x10);
        break;
    case 0x2:
        iVar1 = PlaySE(SFX_INIT_TABLE,0xf);
        break;
    case 0x3:
        iVar1 = PlaySE(SFX_INIT_TABLE,0xd);
        break;
    case 0x4:
        iVar1 = PlaySE(SFX_INIT_TABLE,0x11);
        break;
    case 0x5:
        iVar1 = PlaySE(SFX_INIT_TABLE,0xc);
        break;
    case 0x6:
        iVar1 = PlaySE(SFX_INIT_TABLE,0xe);
        break;
    case 0x7:
        iVar1 = PlaySE(SFX_INIT_TABLE,0x12);
        break;
    case 0x8:
        iVar1 = PlaySE(SFX_INIT_TABLE,0x13);
        break;
    case 0x9:
        iVar1 = PlaySE(SFX_INIT_TABLE,0x14);
        break;
    case 0xa:
        iVar1 = PlaySE(SFX_INIT_TABLE,0x15);
        break;
    case 0xb:
        iVar1 = PlaySE(SFX_INIT_TABLE,0x16);
        break;
    case 0xc:
        iVar1 = PlaySE(SFX_INIT_TABLE,0x17);
        break;
    case 0xd:
        iVar1 = PlaySE(SFX_INIT_TABLE,0x18);
        break;
    case 0xe:
        iVar1 = PlaySE(SFX_INIT_TABLE,0x19);
        break;
    case 0xf:
        iVar1 = PlaySE(SFX_INIT_TABLE,0x1a);
        break;
    default:
        iVar1 = -0x1;
    }
    if (iVar1 != -0x1) {
        if (param_2 == -0x1) {
            uVar2 = 0x80;
        }
        else if (param_2 == 0x0) {
            uVar2 = 0x1b;
        }
        else {
            uVar2 = 0xe3;
        }
        SetPanSFX(iVar1,uVar2);
    }
    return;
}



void menuInitCharacterShow(undefined4 param_1)

{
    int iVar1;
    undefined4 local_18;
    int local_14;
    int local_10;
    int local_c;
    
    iVar1 = 0x0;
    gnTickCharacter = 0x1e;
    screenFind(&local_18,&_710);
    screenGetArea(local_18,&local_c,0x0);
    screenGetCursor(local_18,local_c,&local_10,&local_14);
    local_10 += gnSpecialCharacter;
    if (local_c == 0x64) {
        iVar1 = local_10 + local_14 * 0x5;
    }
    else if (local_c == 0x65) {
        iVar1 = local_10 + 0xa;
    }
    menuInitProfile(param_1,iVar1);
    return;
}



void menuTickCharacterShow(undefined4 param_1,int param_2,int param_3)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int local_44;
    int local_40;
    int local_3c;
    undefined4 local_38;
    undefined4 local_34;
    int local_30;
    int local_2c;
    uint local_28;
    int local_24;
    
    screenFind(&local_34,&_710);
    screenGetArea(local_34,&local_24,0x0);
    screenGetCursor(local_34,local_24,&local_2c,&local_30);
    iVar3 = local_30;
    uVar1 = giScreenMenu;
    iVar2 = local_2c + gnSpecialCharacter;
    local_2c = iVar2;
    if (gnTickCharacter < 0x1) {
        piVar5 = (int *)(param_3 + param_2 * 0x4);
        if (*piVar5 == 0x18) {
            if (iVar2 < 0x1) {
                if (local_24 == 0x65) {
                    local_30 = 0x1;
                    local_2c = 0x4;
                    local_24 = 0x64;
                }
                else if (0x0 < local_30) {
                    local_30 += -0x1;
                    local_2c = 0x4;
                }
            }
            else {
                local_2c = iVar2 + -0x1;
            }
        }
        if (*piVar5 == 0x19) {
            if (local_24 == 0x64) {
                if ((local_2c + local_30 * 0x5 < gnCharacterMax) &&
                   (local_2c += 0x1, local_2c == 0x5)) {
                    local_2c = 0x0;
                    if (local_30 == 0x0) {
                        local_30 = 0x1;
                    }
                    else {
                        local_30 = 0x0;
                        local_24 = 0x65;
                    }
                }
            }
            else if (local_24 == 0x65) {
                if (local_2c + 0xa < gnCharacterMax) {
LAB_00079a0c:
                    local_2c += 0x1;
                }
                else if (local_2c < 0x6) {
                    if ((gbOpenTitle != 0x0) || ((gnCheatMenu & 0x8) != 0x0)) goto LAB_00079a0c;
                }
            }
        }
    }
    else {
        gnTickCharacter += -0x1;
    }
    if (gnSkipFrame == 0x1) {
        gnTickCharacter = 0x1e;
        iVar4 = 0x0;
        screenFind(&local_38,&_710);
        screenGetArea(local_38,&local_44,0x0);
        screenGetCursor(local_38,local_44,&local_40,&local_3c);
        local_40 += gnSpecialCharacter;
        if (local_44 == 0x64) {
            iVar4 = local_40 + local_3c * 0x5;
        }
        else if (local_44 == 0x65) {
            iVar4 = local_40 + 0xa;
        }
        menuInitProfile(uVar1,iVar4);
    }
    if ((((local_2c != iVar2) || (local_30 != iVar3)) && (iVar3 = peelActive(), iVar3 == 0x0)) &&
       (gnSkipFrame == 0x0)) {
        PlaySE(SFX_INIT_TABLE,0x1);
        if (local_2c < 0x5) {
            gnSpecialCharacter = 0x0;
            screenSetArea(local_34,local_24,0x0);
            screenSetCursor(local_34,local_24,local_2c,local_30);
        }
        else {
            gnSpecialCharacter = local_2c + -0x4;
        }
        gnSkipFrame = 0x5;
    }
    if (local_24 == 0x64) {
        iVar3 = local_2c + local_30 * 0x5;
    }
    else if (local_24 == 0x65) {
        iVar3 = local_2c + 0xa;
    }
    else {
        iVar3 = 0x0;
    }
    iVar4 = iVar3 * 0xa;
    iVar2 = screenTextDone(giScreenMenu,iVar4 + 0xc9);
    if (iVar2 != 0x0) {
        iVar2 = screenGetTextType(giScreenMenu,iVar4 + 0xca,&local_28);
        if ((iVar2 != 0x0) && ((local_28 & 0x400) != 0x0)) {
            screenShowImage(giScreenMenu,0x96);
            goto LAB_00079be0;
        }
    }
    screenHideImage(giScreenMenu,0x96);
LAB_00079be0:
    piVar5 = (int *)(param_3 + param_2 * 0x4);
    if (*piVar5 == 0x20) {
        iVar2 = screenTextDone(giScreenMenu,iVar4 + 0xc9);
        if (iVar2 == 0x0) {
            PlaySE(SFX_INIT_TABLE,0x33);
            screenFastText();
        }
        else {
            iVar2 = screenGetTextType(giScreenMenu,iVar4 + 0xca,&local_28);
            if (iVar2 != 0x0) {
                if ((local_28 & 0x400) == 0x0) {
                    iVar2 = screenTextDone(giScreenMenu,iVar4 + 0xca);
                    if (iVar2 == 0x0) {
                        PlaySE(SFX_INIT_TABLE,0x33);
                        screenFastText();
                    }
                }
                else {
                    PlaySE(SFX_INIT_TABLE,0x2);
                    screenHideText(giScreenMenu,iVar4 + 0xc9);
                    screenShowText(giScreenMenu,iVar4 + 0xca);
                }
            }
        }
        *piVar5 = 0x0;
    }
    menuTickProfile(giScreenMenu,iVar3);
    return;
}



void menuLoad2P(int param_1,int param_2,int param_3)

{
    int iVar1;
    undefined4 uVar2;
    uint uVar3;
    undefined5 *puVar4;
    uint uVar5;
    undefined4 local_14;
    
    if (param_1 < 0x1) {
        return;
    }
    if (param_1 < 0x8) {
        if (param_2 == 0x6) {
            puVar4 = &_1064;
        }
        else if (param_2 < 0x6) {
            if (param_2 < 0x5) {
                return;
            }
            puVar4 = &_1063;
        }
        else {
            if (0x7 < param_2) {
                return;
            }
            puVar4 = &_1065;
        }
        uVar5 = (uint)*(short *)(gTheGame + param_1 * 0x880 + param_2 * 0x2 + 0x1deee);
        iVar1 = screenFind(&local_14,puVar4);
        if (iVar1 != 0x0) {
            if (param_3 == 0x0) {
                uVar2 = 0x65;
            }
            else {
                uVar2 = 0x67;
            }
            screenSetCursor(local_14,uVar2,uVar5 & 0xf,0x0);
            if (param_3 == 0x0) {
                uVar2 = 0x64;
            }
            else {
                uVar2 = 0x68;
            }
            screenSetCursor(local_14,uVar2,uVar5 >> 0x4 & 0x7f,0x0);
            if (param_3 == 0x0) {
                screenSetCursor(local_14,0x66,uVar5 >> 0xb & 0x1,0x0);
            }
        }
        iVar1 = screenFind(&local_14,&_710);
        if (iVar1 != 0x0) {
            uVar3 = uVar5 >> 0xc & 0xf;
            uVar5 = uVar3 / 0x5;
            uVar3 %= 0x5;
            if (uVar5 < 0x2) {
                if (param_3 == 0x0) {
                    uVar2 = 0x64;
                }
                else {
                    uVar2 = 0x6e;
                }
                screenSetArea(local_14,uVar2,param_3);
                screenSetCursor(local_14,uVar2,uVar3,uVar5);
            }
            else {
                if (param_3 == 0x0) {
                    uVar2 = 0x65;
                }
                else {
                    uVar2 = 0x6f;
                }
                screenSetArea(local_14,uVar2,param_3);
                screenSetCursor(local_14,uVar2,uVar3,uVar5 - 0x2);
            }
        }
        return;
    }
    return;
}



void menuSave2P(int param_1,int param_2,int param_3)

{
    int iVar1;
    undefined5 *puVar2;
    undefined4 uVar3;
    ushort uVar4;
    int local_2c;
    int local_28;
    int local_24;
    undefined4 local_20 [0x3];
    
    if (param_1 < 0x1) {
        return;
    }
    if (param_1 < 0x8) {
        if (param_2 == 0x6) {
            puVar2 = &_1064;
        }
        else if (param_2 < 0x6) {
            if (param_2 < 0x5) {
                return;
            }
            puVar2 = &_1063;
        }
        else {
            if (0x7 < param_2) {
                return;
            }
            puVar2 = &_1065;
        }
        uVar4 = 0x0;
        iVar1 = screenFind(local_20,puVar2);
        if (iVar1 != 0x0) {
            if (param_3 == 0x0) {
                uVar3 = 0x65;
            }
            else {
                uVar3 = 0x67;
            }
            screenGetCursor(local_20[0],uVar3,&local_28,&local_2c);
            uVar4 = (ushort)local_28;
            if (param_3 == 0x0) {
                uVar3 = 0x64;
            }
            else {
                uVar3 = 0x68;
            }
            screenGetCursor(local_20[0],uVar3,&local_28,&local_2c);
            iVar1 = local_28 << 0x4;
            screenGetCursor(local_20[0],0x66,&local_28,&local_2c);
            uVar4 = uVar4 & 0xf | (ushort)iVar1 & 0x7f0 | (ushort)(local_28 << 0xb) & 0x800;
        }
        iVar1 = screenFind(local_20,&_710);
        if ((iVar1 != 0x0) && (iVar1 = screenGetArea(local_20[0],&local_24,param_3), iVar1 != 0x0))
        {
            screenGetCursor(local_20[0],local_24,&local_28,&local_2c);
            if ((local_24 == 0x65) || (local_24 == 0x6f)) {
                local_2c = 0x2;
            }
            uVar4 |= (short)(local_28 + local_2c * 0x5) * 0x1000;
        }
        *(ushort *)(gTheGame + param_1 * 0x880 + param_2 * 0x2 + 0x1deee) = uVar4;
        return;
    }
    return;
}



void menuInitCharacterSelect2P(undefined4 param_1)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    int local_18;
    int local_14;
    
    uVar2 = 0x0;
    gnSpecialCharacter = 0x0;
    if ((gbOpenTitle == 0x0) && ((gnCheatMenu & 0x8) == 0x0)) {
        menuFindCharacterMax(&local_14);
    }
    else {
        local_14 = 0xf;
    }
    if (0x8 < local_14) {
        local_14 += 0x1;
    }
    iVar3 = 0x9;
    gnCharacterMax = local_14;
    do {
        if (local_14 < iVar3) {
            if (iVar3 == 0xc) {
                uVar2 = 0x4;
            }
            else if (iVar3 < 0xc) {
                if (iVar3 == 0x9) {
LAB_0007a148:
                    uVar2 = 0x7;
                }
                else if (0x8 < iVar3) {
LAB_0007a150:
                    uVar2 = 0x6;
                }
            }
            else {
                if (iVar3 == 0xe) goto LAB_0007a148;
                if (iVar3 < 0xe) goto LAB_0007a150;
            }
            screenSetFrame(param_1,iVar3 + 0x64,uVar2);
            screenHideImage(param_1,iVar3 + 0xc8);
        }
        else {
            screenSetFrame(param_1,iVar3 + 0x64,0x0);
            screenShowImage(param_1,iVar3 + 0xc8);
        }
        iVar3 += 0x1;
        if (0xe < iVar3) {
            for (iVar3 = 0x0; iVar3 < gnPlayerCount; iVar3 += 0x1) {
                iVar1 = screenGetArea(param_1,&local_18,iVar3);
                if ((((iVar1 == 0x0) || (local_18 == -0x1)) ||
                    ((iVar3 == 0x0 && ((local_18 != 0x64 && (local_18 != 0x65)))))) ||
                   ((iVar3 == 0x1 && ((local_18 != 0x6e && (local_18 != 0x6f)))))) {
                    if (iVar3 == 0x0) {
                        local_18 = 0x64;
                    }
                    else {
                        local_18 = 0x6e;
                    }
                    screenSetArea(param_1,local_18,iVar3);
                    screenSetCursor(param_1,local_18,0x0,0x0);
                }
            }
            return;
        }
    } while( true );
}



void menuTickCharacterSelect2P(undefined4 param_1,uint param_2,int param_3)

{
    int iVar1;
    int iVar2;
    bool bVar3;
    undefined4 uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    undefined4 uVar9;
    int iVar10;
    int *piVar11;
    int local_4c;
    int local_48;
    int local_44;
    undefined4 local_40;
    undefined4 local_3c;
    int local_38 [0x3];
    
    iVar10 = 0x0;
    uVar9 = 0x0;
    iVar7 = 0x0;
    iVar5 = 0x0;
    screenGetArea(giScreenMenu,&local_4c,param_2);
    screenGetCursor(giScreenMenu,local_4c,&local_44,&local_48);
    if ((local_4c == 0x64) || (local_4c == 0x6e)) {
        iVar10 = local_44 + local_48 * 0x5;
        iVar7 = iVar10 + 0x64;
    }
    else if ((local_4c == 0x65) || (local_4c == 0x6f)) {
        iVar10 = local_44 + 0xa;
        iVar7 = local_44 + 0x6e;
    }
    iVar1 = param_2 * 0x4;
    piVar11 = (int *)(param_3 + iVar1);
    iVar8 = iVar7;
    if (*piVar11 == 0x20) {
        if (gnCharacterMax + 0x64 < iVar7) {
            *piVar11 = 0x0;
            PlaySE(SFX_INIT_TABLE,0x7);
        }
        else {
            iVar8 = -0x1;
        }
    }
    else if (*(int *)(ganPick + iVar1) != 0x0) {
        iVar8 = -0x1;
    }
    if (gnPlayerCount < 0x2) {
        iVar6 = -0x1;
    }
    else {
        screenGetArea(giScreenMenu,&local_4c,param_2 ^ 0x1);
        screenGetCursor(giScreenMenu,local_4c,&local_44,&local_48);
        if ((local_4c == 0x64) || (local_4c == 0x6e)) {
            iVar5 = local_44 + local_48 * 0x5 + 0x64;
        }
        else if ((local_4c == 0x65) || (iVar5 = 0x0, local_4c == 0x6f)) {
            iVar5 = local_44 + 0x6e;
        }
        iVar2 = (param_2 ^ 0x1) * 0x4;
        if ((*(int *)(param_3 + iVar2) == 0x20) || (iVar6 = iVar5, *(int *)(ganPick + iVar2) != 0x0)
           ) {
            iVar6 = -0x1;
        }
    }
    if ((iVar7 == iVar5) && ((iVar8 != -0x1 || (iVar6 != -0x1)))) {
        screenGetArea(giScreenMenu,&local_4c,param_2);
        screenGetCursorPosition(giScreenMenu,local_4c,&local_3c,&local_40);
        screenShowImage(giScreenMenu,0x12c);
        screenSetImagePosition(giScreenMenu,0x12c,local_3c,local_40);
    }
    else {
        screenHideImage(giScreenMenu,0x12c);
    }
    iVar5 = 0x64;
    do {
        iVar7 = screenGetImage(giScreenMenu,iVar5,local_38);
        if (iVar7 != 0x0) {
            bVar3 = true;
            if ((iVar5 != iVar8) && (iVar5 != iVar6)) {
                bVar3 = false;
            }
            if (bVar3) {
                uVar4 = 0xff;
            }
            else {
                uVar4 = 0x8f;
            }
            *(undefined4 *)(local_38[0] + 0x14) = uVar4;
        }
        iVar5 += 0x1;
    } while (iVar5 < 0x73);
    menuWinkFace(iVar8,giScreenMenu,param_2);
    if ((*piVar11 == 0x20) && (*(int *)(ganPick + iVar1) == 0x0)) {
        if (geTypeMenu == 0x37) {
            param_2 = 0xffffffff;
        }
        menuPlayEffect2P(iVar10,param_2);
    }
    if ((*piVar11 == 0x20) || (*piVar11 == 0x21)) {
        if (geTypeMenu == 0x1e) {
            uVar9 = 0x5;
        }
        else if (geTypeMenu == 0x21) {
            uVar9 = 0x6;
        }
        else if (geTypeMenu == 0x24) {
            uVar9 = 0x7;
        }
        menuSave2P(gaiName._0_4_,uVar9,0x0);
        menuSave2P(gaiName._4_4_,uVar9,0x1);
    }
    return;
}



void pon_menuLoad4P(int param_1,int param_2,int param_3)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    undefined4 local_1c [0x2];
    
    if ((0x0 < param_1) && (param_1 < 0x8)) {
        uVar3 = (uint)*(short *)(gTheGame + param_1 * 0x880 + param_2 * 0x2 + 0x1deee);
        iVar5 = param_3 * 0xa + 0x64;
        iVar4 = param_3 * 0xa + 0x65;
        iVar1 = screenFind(local_1c,_1224);
        if (iVar1 != 0x0) {
            screenSetCursor(local_1c[0],iVar5,uVar3 & 0xf,0x0);
            screenSetCursor(local_1c[0],iVar4,uVar3 >> 0x4 & 0x7f,0x0);
        }
        iVar1 = screenFind(local_1c,_1225);
        if (iVar1 != 0x0) {
            uVar2 = uVar3 >> 0xc & 0xf;
            uVar3 = uVar2 / 0x5;
            uVar2 %= 0x5;
            if (uVar3 < 0x2) {
                screenSetArea(local_1c[0],iVar5,param_3);
                screenSetCursor(local_1c[0],iVar5,uVar2,uVar3);
            }
            else {
                screenSetArea(local_1c[0],iVar4,param_3);
                screenSetCursor(local_1c[0],iVar4,uVar2,uVar3 - 0x2);
            }
        }
    }
    return;
}



void pon_menuSave4P(int param_1,int param_2,int param_3)

{
    int iVar1;
    ushort uVar2;
    int local_2c;
    int local_28;
    int local_24;
    undefined4 local_20 [0x2];
    
    if ((0x0 < param_1) && (param_1 < 0x8)) {
        uVar2 = 0x0;
        iVar1 = screenFind(local_20,_1224);
        if (iVar1 != 0x0) {
            screenGetCursor(local_20[0],param_3 * 0xa + 0x64,&local_28,&local_2c);
            uVar2 = (ushort)local_28;
            screenGetCursor(local_20[0],param_3 * 0xa + 0x65,&local_28,&local_2c);
            uVar2 = uVar2 & 0xf | (ushort)(local_28 << 0x4) & 0x7f0;
        }
        iVar1 = screenFind(local_20,_1225);
        if ((iVar1 != 0x0) && (iVar1 = screenGetArea(local_20[0],&local_24,param_3), iVar1 != 0x0))
        {
            screenGetCursor(local_20[0],local_24,&local_28,&local_2c);
            if ((local_24 == 0x65) ||
               (((local_24 == 0x6f || (local_24 == 0x79)) || (local_24 == 0x83)))) {
                local_2c = 0x2;
            }
            uVar2 |= (short)(local_28 + local_2c * 0x5) * 0x1000;
        }
        *(ushort *)(gTheGame + param_1 * 0x880 + param_2 * 0x2 + 0x1deee) = uVar2;
    }
    return;
}



void pon_menuInitCharacterSelect4P(undefined4 param_1)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    int iVar4;
    int iVar5;
    undefined1 *puVar6;
    undefined1 *puVar7;
    undefined1 *puVar8;
    undefined1 *puVar9;
    undefined auStack_30 [0x4];
    int local_2c;
    int local_28;
    int local_24;
    
    uVar3 = 0x0;
    gnSpecialCharacter = 0x0;
    menuFindCharacterMax(&local_24);
    if (0x8 < local_24) {
        local_24 += 0x1;
    }
    iVar2 = 0x9;
    gnCharacterMax = local_24;
    do {
        if (local_24 < iVar2) {
            if (iVar2 == 0xc) {
                uVar3 = 0x4;
            }
            else if (iVar2 < 0xc) {
                if (iVar2 == 0x9) {
LAB_0007a8d4:
                    uVar3 = 0x7;
                }
                else if (0x8 < iVar2) {
LAB_0007a8dc:
                    uVar3 = 0x6;
                }
            }
            else {
                if (iVar2 == 0xe) goto LAB_0007a8d4;
                if (iVar2 < 0xe) goto LAB_0007a8dc;
            }
            screenSetFrame(param_1,iVar2 + 0x64,uVar3);
            screenHideImage(param_1,iVar2 + 0xc8);
        }
        else {
            screenSetFrame(param_1,iVar2 + 0x64,0x0);
            screenShowImage(param_1,iVar2 + 0xc8);
        }
        iVar2 += 0x1;
        if (0xe < iVar2) {
            iVar4 = 0x64;
            iVar5 = 0x65;
            for (iVar2 = 0x0; iVar2 < gnPlayerCount; iVar2 += 0x1) {
                iVar1 = screenGetArea(param_1,&local_28,iVar2);
                if (((iVar1 == 0x0) || (local_28 == -0x1)) ||
                   ((local_28 != iVar4 && (local_28 != iVar5)))) {
                    local_28 = iVar4;
                    screenSetArea(param_1,iVar4,iVar2);
                    screenSetCursor(param_1,local_28,iVar2,0x0);
                }
                iVar4 += 0xa;
                iVar5 += 0xa;
            }
            gnPlayer1Controll = 0x0;
            puVar9 = gTheGame;
            puVar8 = gaPlayerFor4PSetLevel;
            puVar6 = ganPick;
            iVar2 = 0x64;
            puVar7 = gaMultiEntryFlag;
            for (iVar4 = 0x0; iVar4 < gnPlayerCount; iVar4 += 0x1) {
                screenGetCursor(giScreenMenuLast,iVar2,&local_2c,auStack_30);
                *(int *)(puVar9 + 0x1d63c) = local_2c;
                if (*(int *)(puVar8 + local_2c * 0x4) == 0xe) {
                    *(undefined4 *)puVar7 = 0x0;
                    pon_ScreenAreaNoEntry(param_1,iVar4);
                    *(undefined4 *)puVar6 = 0xffffffff;
                }
                else {
                    *(undefined4 *)puVar7 = 0xffffffff;
                }
                iVar2 += 0xa;
                puVar9 = puVar9 + 0x18;
                puVar8 = puVar8 + 0x30;
                puVar7 = (undefined1 *)((int)puVar7 + 0x4);
                puVar6 = (undefined1 *)((int)puVar6 + 0x4);
            }
            return;
        }
    } while( true );
}



void pon_menuTickCharacterSelect4P(undefined4 param_1,int param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    int *piVar5;
    int *piVar6;
    undefined1 *puVar7;
    int *piVar8;
    undefined1 *puVar9;
    undefined4 uVar10;
    int iVar11;
    int local_5c [0x4];
    int local_4c;
    int local_48;
    int local_44;
    int local_40 [0x2];
    
    iVar1 = param_2 * 0x4;
    iVar11 = 0x0;
    uVar10 = 0x0;
    uVar4 = 0x0;
    local_5c[0] = 0x0;
    local_5c[1] = 0x0;
    local_5c[2] = 0x0;
    local_5c[3] = 0x0;
    if (*(int *)(gaMultiEntryFlag + iVar1) != 0x0) {
        screenGetArea(giScreenMenu,&local_4c,param_2);
        screenGetCursor(giScreenMenu,local_4c,&local_44,&local_48);
        if ((((local_4c == 0x64) || (local_4c == 0x6e)) || (local_4c == 0x78)) || (local_4c == 0x82)
           ) {
            iVar11 = local_44 + local_48 * 0x5;
        }
        else if (((local_4c == 0x65) || (local_4c == 0x6f)) ||
                ((local_4c == 0x79 || (local_4c == 0x83)))) {
            iVar11 = local_44 + 0xa;
        }
        piVar6 = local_5c;
        iVar3 = 0x0;
        piVar8 = piVar6;
        do {
            screenGetArea(giScreenMenu,&local_4c,iVar3);
            screenGetCursor(giScreenMenu,local_4c,&local_44,&local_48);
            if (((local_4c == 0x64) || (local_4c == 0x6e)) ||
               ((local_4c == 0x78 || (local_4c == 0x82)))) {
                *piVar8 = local_44 + local_48 * 0x5 + 0x64;
            }
            else if ((((local_4c == 0x65) || (local_4c == 0x6f)) || (local_4c == 0x79)) ||
                    (local_4c == 0x83)) {
                *piVar8 = local_44 + 0x6e;
            }
            iVar3 += 0x1;
            piVar8 = piVar8 + 0x1;
        } while (iVar3 < 0x4);
        puVar9 = gaMultiEntryFlag;
        piVar8 = local_5c + param_2;
        iVar3 = *piVar8;
        if ((gaMultiEntryFlag._0_4_ != 0x0) && (iVar3 == local_5c[0])) {
            uVar4 = 0x1;
        }
        if ((gaMultiEntryFlag._4_4_ != 0x0) && (iVar3 == local_5c[1])) {
            uVar4 |= 0x2;
        }
        if ((gaMultiEntryFlag._8_4_ != 0x0) && (iVar3 == local_5c[2])) {
            uVar4 |= 0x4;
        }
        if ((gaMultiEntryFlag._12_4_ != 0x0) && (iVar3 == local_5c[3])) {
            uVar4 |= 0x8;
        }
        iVar3 = uVar4 * 0x10;
        iVar2 = param_2 * 0x40;
        *(undefined4 *)(tex_vtx + iVar2 + 0xc) = *(undefined4 *)(nBaseColorArray + iVar3);
        piVar5 = param_3 + param_2;
        *(undefined4 *)(tex_vtx + iVar2 + 0x1c) = *(undefined4 *)(nBaseColorArray + iVar3 + 0x4);
        *(undefined4 *)(tex_vtx + iVar2 + 0x2c) = *(undefined4 *)(nBaseColorArray + iVar3 + 0x8);
        *(undefined4 *)(tex_vtx + iVar2 + 0x3c) = *(undefined4 *)(nBaseColorArray + iVar3 + 0xc);
        if (*piVar5 == 0x20) {
            if (gnCharacterMax + 0x64 < *piVar8) {
                *piVar5 = 0x0;
                PlaySE(SFX_INIT_TABLE,0x7);
            }
            else {
                *piVar8 = -0x1;
            }
        }
        else if (*(int *)(ganPick + iVar1) != 0x0) {
            *piVar8 = -0x1;
        }
        puVar7 = ganPick;
        iVar3 = 0x0;
        do {
            if ((iVar3 != param_2) || (*(int *)puVar9 != 0x0)) {
                screenGetArea(giScreenMenu,&local_4c,iVar3);
                screenGetCursor(giScreenMenu,local_4c,&local_44,&local_48);
                if ((*param_3 == 0x20) || (*(int *)puVar7 != 0x0)) {
                    *piVar6 = -0x1;
                }
                else if ((((local_4c == 0x64) || (local_4c == 0x6e)) || (local_4c == 0x78)) ||
                        (local_4c == 0x82)) {
                    *piVar6 = local_44 + local_48 * 0x5 + 0x64;
                }
                else if (((local_4c == 0x65) || (local_4c == 0x6f)) ||
                        ((local_4c == 0x79 || (local_4c == 0x83)))) {
                    *piVar6 = local_44 + 0x6e;
                }
            }
            iVar3 += 0x1;
            puVar9 = (undefined1 *)((int)puVar9 + 0x4);
            param_3 = param_3 + 0x1;
            puVar7 = (undefined1 *)((int)puVar7 + 0x4);
            piVar6 = piVar6 + 0x1;
        } while (iVar3 < 0x4);
        iVar3 = 0x64;
        do {
            iVar2 = screenGetImage(giScreenMenu,iVar3,local_40);
            if (iVar2 != 0x0) {
                iVar2 = -0x1;
                if ((gaMultiEntryFlag._0_4_ != 0x0) && (iVar3 == local_5c[0])) {
                    iVar2 = 0x0;
                }
                if ((gaMultiEntryFlag._4_4_ != 0x0) && (iVar3 == local_5c[1])) {
                    iVar2 = 0x0;
                }
                if ((gaMultiEntryFlag._8_4_ != 0x0) && (iVar3 == local_5c[2])) {
                    iVar2 = 0x0;
                }
                if ((gaMultiEntryFlag._12_4_ != 0x0) && (iVar3 == local_5c[3])) {
                    iVar2 = 0x0;
                }
                if (iVar2 == -0x1) {
                    *(undefined4 *)(local_40[0] + 0x14) = 0x8f;
                }
                else {
                    *(undefined4 *)(local_40[0] + 0x14) = 0xff;
                }
            }
            iVar3 += 0x1;
        } while (iVar3 < 0x73);
        menuWinkFace(*piVar8,giScreenMenu,param_2);
        if ((*piVar5 == 0x20) && (*(int *)(ganPick + iVar1) == 0x0)) {
            if (geTypeMenu == 0x37) {
                param_2 = -0x1;
            }
            menuPlayEffect2P(iVar11,param_2);
        }
        if ((*piVar5 == 0x20) || (*piVar5 == 0x21)) {
            if (geGameType == 0x40) {
                uVar10 = 0x9;
            }
            else if (geGameType == 0x41) {
                uVar10 = 0xa;
            }
            else if (geGameType == 0x42) {
                uVar10 = 0xb;
            }
            pon_menuSave4P(gaiName._0_4_,uVar10,0x0);
            pon_menuSave4P(gaiName._4_4_,uVar10,0x1);
            pon_menuSave4P(gaiName._8_4_,uVar10,0x2);
            pon_menuSave4P(gaiName._12_4_,uVar10,0x3);
        }
    }
    return;
}



void menuTick1PVS_Resume(undefined4 param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int local_18;
    int local_14 [0x2];
    
    if (param_2 != 0x0) {
        eStageLast_1434 = -0x1;
    }
    screenGetCursor(param_1,0x64,local_14,&local_18);
    if ((local_14[0] == 0x0) && (local_18 == 0x0)) {
        iVar2 = 0x0;
    }
    else if ((local_14[0] == 0x1) && (local_18 == 0x0)) {
        iVar2 = 0x1;
    }
    else if ((local_14[0] == 0x2) && (local_18 == 0x0)) {
        iVar2 = 0x2;
    }
    else if ((local_14[0] == 0x1) && (local_18 == 0x1)) {
        iVar2 = 0x3;
    }
    else if ((local_14[0] == 0x2) && (local_18 == 0x1)) {
        iVar2 = 0x4;
    }
    else {
        iVar2 = -0x1;
    }
    iVar1 = menuTestVsCPUContinue(iVar2);
    if (iVar1 == 0x0) {
        gbHideResume = 0xffffffff;
        screenHideImage(param_1,0xc8);
        screenHideSlot(param_1,0x65,0x0,0x0);
        if (iVar2 != eStageLast_1434) {
            screenSetCursor(param_1,0x65,0x1,0x0);
        }
        screenSetImagePosition(param_1,0xc9,0x85,0xbf);
    }
    else {
        gbHideResume = 0x0;
        screenShowImage(param_1,0xc8);
        screenShowSlot(param_1,0x65,0x0,0x0);
        if (iVar2 != eStageLast_1434) {
            screenSetCursor(param_1,0x65,0x0,0x0);
        }
        screenSetImagePosition(param_1,0xc8,0x64,0xbf);
        screenSetImagePosition(param_1,0xc9,0xa6,0xbf);
    }
    eStageLast_1434 = iVar2;
    return;
}



void menuTick1PVS(uint param_1,int param_2,int param_3)

{
    short sVar1;
    int iVar2;
    int iVar3;
    ushort uVar4;
    undefined4 local_34;
    int local_30;
    undefined local_2c [0x2];
    short sStack_2a;
    int local_28;
    int local_24;
    int local_20 [0x3];
    
    iVar3 = 0x0;
    menuTick1PVS_Resume(giScreenMenu,0x0);
    screenGetArea(giScreenMenu,local_20,0x0);
    screenSetFrame(giScreenMenu,0x64,0x0);
    screenSetFrame(giScreenMenu,0x65,0x2);
    screenSetFrame(giScreenMenu,0x66,0x4);
    screenSetFrame(giScreenMenu,0x67,0x6);
    screenSetFrame(giScreenMenu,0x68,0x8);
    screenSetFrame(giScreenMenu,0xc8,0x0);
    screenSetFrame(giScreenMenu,0xc9,0x2);
    screenGetCursor(giScreenMenu,0x64,&local_24,&local_28);
    if ((local_24 == 0x0) && (local_28 == 0x0)) {
        iVar3 = 0x0;
    }
    else if ((local_24 == 0x1) && (local_28 == 0x0)) {
        iVar3 = 0x1;
    }
    else if ((local_24 == 0x2) && (local_28 == 0x0)) {
        iVar3 = 0x2;
    }
    else if ((local_24 == 0x1) && (local_28 == 0x1)) {
        iVar3 = 0x3;
    }
    else if ((local_24 == 0x2) && (local_28 == 0x1)) {
        iVar3 = 0x4;
    }
    if ((local_20[0] != 0x64) || ((param_1 & 0x8) == 0x0)) {
        screenSetFrame(giScreenMenu,iVar3 + 0x64,iVar3 * 0x2 + 0x1);
    }
    screenSetFrame(giScreenMenu,0xca,iVar3 * 0x2 + 0x1);
    if ((local_20[0] != 0x65) || ((param_1 & 0x8) == 0x0)) {
        screenGetCursor(giScreenMenu,0x65,&local_24,&local_28);
        screenSetFrame(giScreenMenu,local_24 + 0xc8,local_24 * 0x2 + 0x1);
    }
    iVar3 = gaiName._0_4_;
    iVar2 = *(int *)(param_3 + param_2 * 0x4);
    if ((((iVar2 == 0x20) || (iVar2 == 0x21)) && (0x0 < gaiName._0_4_)) && (gaiName._0_4_ < 0x8)) {
        uVar4 = 0x0;
        iVar2 = screenFind(&local_34,_1427);
        if (iVar2 != 0x0) {
            screenGetCursor(local_34,0x64,&local_30,local_2c);
            sVar1 = (short)local_30;
            screenGetCursor(local_34,0x65,&local_30,local_2c);
            uVar4 = sVar1 + sStack_2a * 0x3 & 0x7U | (ushort)(local_30 << 0x3) & 0x8;
        }
        *(ushort *)(gTheGame + iVar3 * 0x880 + 0x1def0) = uVar4;
    }
    return;
}



void menuInit1PVS(undefined4 param_1)

{
    short sVar1;
    int iVar2;
    undefined4 local_20 [0x3];
    int local_14;
    int local_10;
    int local_c;
    
    screenSetArea(param_1,0x64,0x0);
    screenShowSlot(param_1,0x64,0x0,0x0);
    screenShowSlot(param_1,0x64,0x1,0x0);
    screenShowSlot(param_1,0x64,0x2,0x0);
    screenHideSlot(param_1,0x64,0x0,0x1);
    screenShowSlot(param_1,0x64,0x1,0x1);
    screenShowSlot(param_1,0x64,0x2,0x1);
    screenShowImage(param_1,0x80688064);
    screenShowImage(param_1,0x80c980c8);
    screenShowImage(param_1,0xc9);
    screenShowSlot(param_1,0x65,0x1,0x0);
    menuTick1PVS_Resume(param_1,0xffffffff);
    if (gbOpenTitle == 0x0) {
        if ((gnCheatMenu & 0x6) == 0x0) {
            iVar2 = 0x0;
        }
        else {
            iVar2 = -0x1;
        }
    }
    else {
        iVar2 = -0x1;
    }
    if (iVar2 == 0x0) {
        iVar2 = screenGetArea(param_1,&local_c,0x0);
        if (((iVar2 != 0x0) && (local_c == 0x64)) &&
           ((screenGetCursor(param_1,0x64,&local_10,&local_14), 0x2 < local_10 || (0x0 < local_14)))
           ) {
            screenSetCursor(param_1,local_c,0x0,0x0);
        }
        screenHideSlot(param_1,0x64,0x1,0x1);
        screenHideSlot(param_1,0x64,0x2,0x1);
        screenHideImage(param_1,0x67);
        screenHideImage(param_1,0x68);
        screenSetImagePosition(param_1,0x64,0x44,0x6a);
        screenSetImagePosition(param_1,0x65,0x87,0x6a);
        screenSetImagePosition(param_1,0x66,0xca,0x6a);
    }
    else {
        if (gbOpenTitle == 0x0) {
            if ((gnCheatMenu & 0x4) == 0x0) {
                iVar2 = 0x0;
            }
            else {
                iVar2 = -0x1;
            }
        }
        else {
            iVar2 = -0x1;
        }
        if (iVar2 == 0x0) {
            iVar2 = screenGetArea(param_1,&local_c,0x0);
            if ((((iVar2 != 0x0) && (local_c == 0x64)) &&
                (screenGetCursor(param_1,0x64,&local_10,&local_14), local_10 != 0x1)) &&
               (local_14 == 0x1)) {
                screenSetCursor(param_1,local_c,0x0,0x0);
            }
            screenHideSlot(param_1,0x64,0x2,0x1);
            screenHideImage(param_1,0x68);
            screenSetImagePosition(param_1,0x64,0x3c,0x63);
            screenSetImagePosition(param_1,0x65,0x7f,0x63);
            screenSetImagePosition(param_1,0x66,0xc2,0x63);
            screenSetImagePosition(param_1,0x67,0x7f,0x74);
        }
        else {
            screenSetImagePosition(param_1,0x64,0x3c,0x63);
            screenSetImagePosition(param_1,0x65,0x7f,0x63);
            screenSetImagePosition(param_1,0x66,0xc2,0x63);
            screenSetImagePosition(param_1,0x67,0x7f,0x74);
            screenSetImagePosition(param_1,0x68,0xc2,0x74);
        }
    }
    if ((0x0 < gaiName._0_4_) && (gaiName._0_4_ < 0x8)) {
        sVar1 = *(short *)(gTheGame + gaiName._0_4_ * 0x880 + 0x1def0);
        iVar2 = screenFind(local_20,_1427);
        if (iVar2 != 0x0) {
            screenSetCursor(local_20[0],0x64,((int)sVar1 & 0x7U) % 0x3,((int)sVar1 & 0x7U) / 0x3);
        }
    }
    return;
}



void menuDrawRound(uint **param_1,undefined4 param_2,int param_3)

{
    short sVar1;
    bool bVar2;
    uint *puVar3;
    int iVar4;
    int iVar5;
    short sVar6;
    int iVar7;
    int iVar8;
    uint uVar9;
    int iVar10;
    uint uVar11;
    uint uVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    undefined2 *puVar16;
    undefined2 local_3c [0x4];
    undefined auStack_34 [0x8];
    uint *local_2c;
    
    bVar2 = false;
    local_3c[0] = 0x0;
    if ((0x1f3 < param_3) && (0x1 < gnCountMenu)) {
        bVar2 = true;
    }
    if (!bVar2) {
        gc_assert(0x0,_1640,0x1114,_1641,0x0,0x0,0x0);
    }
    iVar13 = geTypeMenu;
    if (geTypeMenu == 0x2) {
        iVar13 = *(int *)(ganPick + gnCountMenu * 0x4 + 0xc);
    }
    iVar14 = (param_3 + -0x1f4) * 0x8;
    iVar15 = *(int *)(ganAnchorXY + iVar14);
    iVar14 = *(int *)(ganAnchorXY + iVar14 + 0x4);
    switch(iVar13) {
    case 0x11:
        if (gbGame3D == 0x0) {
            puVar16 = (undefined2 *)(gTheGame + param_3 + gaiName._0_4_ * 0x880 + 0x1d4c3);
        }
        else {
            puVar16 = (undefined2 *)(gTheGame + param_3 + gaiName._0_4_ * 0x880 + 0x1d54f);
        }
        break;
    case 0x12:
    case 0x13:
        return;
    case 0x14:
        puVar16 = (undefined2 *)(gTheGame + gaiName._0_4_ * 0x880 + 0x1d7d3);
        break;
    case 0x15:
        puVar16 = (undefined2 *)(gTheGame + gaiName._0_4_ * 0x880 + 0x1d7d9);
        break;
    case 0x16:
        puVar16 = (undefined2 *)(gTheGame + gaiName._0_4_ * 0x880 + 0x1d7df);
        break;
    case 0x17:
        puVar16 = (undefined2 *)(gTheGame + gaiName._0_4_ * 0x880 + 0x1d7f1);
        break;
    case 0x18:
        puVar16 = (undefined2 *)(gTheGame + gaiName._0_4_ * 0x880 + 0x1d7e5);
        break;
    case 0x19:
        puVar16 = (undefined2 *)(gTheGame + gaiName._0_4_ * 0x880 + 0x1d7eb);
        break;
    case 0x1a:
        uVar12 = 0x0;
        iVar15 += -0x4;
        iVar14 += -0x1;
        do {
            iVar4 = CheckPlayerPuzzle(uVar12 + 0x1);
            iVar5 = (int)uVar12 >> 0x3;
            if (iVar4 == 0x0) {
                *(byte *)((int)local_3c + iVar5) =
                     *(byte *)((int)local_3c + iVar5) & ~(byte)(0x1 << (uVar12 & 0x7));
            }
            else {
                *(byte *)((int)local_3c + iVar5) =
                     *(byte *)((int)local_3c + iVar5) | (byte)(0x1 << (uVar12 & 0x7));
            }
            uVar12 += 0x1;
        } while ((int)uVar12 < 0xf);
        puVar16 = local_3c;
        break;
    default:
        goto switchD_0007b950_caseD_a;
    }
    puVar3 = *param_1;
    *puVar3 = 0xe7000000;
    puVar3[0x1] = 0x0;
    puVar3[0x2] = 0xe3000f00;
    puVar3[0x3] = 0x0;
    puVar3[0x4] = 0xe3001001;
    puVar3[0x5] = 0x0;
    puVar3[0x6] = 0xe2001e01;
    puVar3[0x7] = 0x0;
    puVar3[0x8] = 0xe3000c00;
    puVar3[0x9] = 0x0;
    puVar3[0xa] = 0xe3001201;
    puVar3[0xb] = 0x2000;
    puVar3[0xc] = 0xe200001c;
    puVar3[0xd] = 0x504240;
    puVar3[0xe] = 0xfcffffff;
    puVar3[0xf] = 0xfffcf279;
    local_2c = puVar3 + 0x12;
    puVar3[0x10] = 0xd9ddf9fa;
    puVar3[0x11] = 0x0;
    if (iVar13 == 0x1a) {
        iVar4 = **(int **)(gpImageMark + 0x2c);
    }
    else {
        iVar4 = **(int **)(gpImageCheck + 0x2c);
    }
    bitmapLoadTile(iVar4,0xffffffff,&local_2c,0x0,auStack_34);
    if (param_3 < 0x1f7) {
        iVar5 = (param_3 + -0x1f4) * 0xf;
    }
    else {
        iVar5 = 0x0;
    }
    if (iVar13 == 0x11) {
        iVar13 = 0x5;
    }
    else {
        iVar13 = 0xf;
    }
    iVar7 = 0x0;
    puVar3 = local_2c;
    for (; iVar13 != 0x0; iVar13 += -0x1) {
        local_2c = puVar3;
        if ((0x1 << (iVar5 + iVar7 & 0x7U) & (int)*(char *)((int)puVar16 + (iVar5 + iVar7 >> 0x3)))
            != 0x0) {
            iVar8 = iVar7 / 0x5 + (iVar7 >> 0x1f);
            iVar10 = iVar14 + (iVar8 - (iVar8 >> 0x1f)) * 0x11;
            sVar6 = (short)(iVar10 + *(int *)(iVar4 + 0x10)) * 0x4;
            uVar12 = (uint)sVar6;
            iVar8 = iVar15 + (iVar7 + (iVar8 - (iVar8 >> 0x1f)) * -0x5) * 0xc;
            if (sVar6 < 0x1) {
                uVar12 = 0x0;
            }
            sVar6 = (short)(iVar8 + *(int *)(iVar4 + 0xc)) * 0x4;
            uVar9 = (uint)sVar6;
            if (sVar6 < 0x1) {
                uVar9 = 0x0;
            }
            iVar10 *= 0x4;
            sVar6 = (short)iVar10;
            uVar11 = (uint)sVar6;
            *puVar3 = (uVar9 & 0xfff) << 0xc | 0xe4000000 | uVar12 & 0xfff;
            if (sVar6 < 0x1) {
                uVar11 = 0x0;
            }
            sVar1 = (short)iVar8 * 0x4;
            uVar12 = (uint)sVar1;
            if (sVar1 < 0x1) {
                uVar12 = 0x0;
            }
            puVar3[0x1] = (uVar12 & 0xfff) << 0xc | uVar11 & 0xfff;
            puVar3[0x2] = 0xe1000000;
            if (iVar10 < 0x0) {
                iVar10 = ((int)sVar6 << 0xa) >> 0x7;
                if (-0x1 < iVar10) {
                    iVar10 = 0x0;
                }
            }
            else {
                iVar10 = 0x0;
            }
            if (sVar1 < 0x0) {
                iVar8 = ((int)sVar1 << 0xa) >> 0x7;
                if (-0x1 < iVar8) {
                    iVar8 = 0x0;
                }
            }
            else {
                iVar8 = 0x0;
            }
            puVar3[0x3] = iVar8 * -0x10000 | -iVar10 & 0xffffU;
            local_2c = puVar3 + 0x6;
            puVar3[0x4] = 0xf1000000;
            puVar3[0x5] = 0x4000400;
        }
        iVar7 += 0x1;
        puVar3 = local_2c;
    }
    *param_1 = puVar3;
switchD_0007b950_caseD_a:
    return;
}



void menuInit1PPuzzle(undefined4 param_1)

{
    short sVar1;
    uint uVar2;
    int iVar3;
    undefined4 uVar4;
    undefined4 local_18;
    int local_14;
    int local_10 [0x3];
    
    screenShowSlot(param_1,0x64,0x0,0x0);
    screenShowSlot(param_1,0x64,0x1,0x0);
    screenShowSlot(param_1,0x64,0x2,0x0);
    screenShowSlot(param_1,0x64,0x0,0x1);
    screenShowSlot(param_1,0x64,0x1,0x1);
    screenShowSlot(param_1,0x64,0x2,0x1);
    screenShowImage(param_1,0x80698064);
    iVar3 = menuTestPuzzleStage(0x1);
    if (iVar3 == 0x0) {
        screenGetCursor(param_1,0x64,local_10,&local_14);
        if ((0x1 < local_10[0]) || (0x0 < local_14)) {
            screenSetCursor(param_1,0x64,0x0,0x0);
        }
        screenHideSlot(param_1,0x64,0x2,0x0);
        screenHideImage(param_1,0x66);
        screenHideSlot(param_1,0x64,0x0,0x1);
        screenHideImage(param_1,0x67);
        screenHideSlot(param_1,0x64,0x1,0x1);
        screenHideImage(param_1,0x68);
        screenHideSlot(param_1,0x64,0x2,0x1);
        screenHideImage(param_1,0x69);
        screenSetImagePosition(param_1,0x64,0x68,0x7e);
        screenSetImagePosition(param_1,0x65,0xac,0x7e);
    }
    else {
        iVar3 = menuTestPuzzleStage(0x2);
        if (iVar3 == 0x0) {
            screenGetCursor(param_1,0x64,local_10,&local_14);
            if ((0x1 < local_10[0]) || (0x0 < local_14)) {
                screenSetCursor(param_1,0x64,0x0,0x0);
            }
            screenHideSlot(param_1,0x64,0x0,0x1);
            screenHideImage(param_1,0x67);
            screenHideSlot(param_1,0x64,0x1,0x1);
            screenHideImage(param_1,0x68);
            screenHideSlot(param_1,0x64,0x2,0x1);
            screenHideImage(param_1,0x69);
            screenSetImagePosition(param_1,0x64,0x4c,0x74);
            screenSetImagePosition(param_1,0x65,0x88,0x74);
            screenSetImagePosition(param_1,0x66,0xc4,0x74);
        }
        else {
            iVar3 = menuTestPuzzleStage(0x3);
            if ((iVar3 == 0x0) || (iVar3 = menuTestPuzzleStage(0x4), iVar3 == 0x0)) {
                screenGetCursor(param_1,0x64,local_10,&local_14);
                if ((0x1 < local_10[0]) && (0x0 < local_14)) {
                    screenSetCursor(param_1,0x64,0x0,0x0);
                }
                screenHideSlot(param_1,0x64,0x2,0x1);
                screenHideImage(param_1,0x69);
                screenSetImagePosition(param_1,0x64,0x4c,0x74);
                screenSetImagePosition(param_1,0x65,0x88,0x74);
                screenSetImagePosition(param_1,0x66,0xc4,0x74);
                screenSetImagePosition(param_1,0x67,0x4c,0x86);
                screenSetImagePosition(param_1,0x68,0x88,0x86);
            }
            else {
                screenSetImagePosition(param_1,0x64,0x4c,0x74);
                screenSetImagePosition(param_1,0x65,0x88,0x74);
                screenSetImagePosition(param_1,0x66,0xc4,0x74);
                screenSetImagePosition(param_1,0x67,0x4c,0x86);
                screenSetImagePosition(param_1,0x68,0x88,0x86);
                screenSetImagePosition(param_1,0x69,0xc4,0x86);
            }
        }
    }
    if ((0x0 < gaiName._0_4_) && (gaiName._0_4_ < 0x8)) {
        sVar1 = *(short *)(gTheGame + gaiName._0_4_ * 0x880 + 0x1def6);
        iVar3 = screenFind(&local_18,_1653);
        if (iVar3 != 0x0) {
            uVar2 = (int)sVar1 & 0x7;
            screenSetCursor(local_18,0x64,uVar2 % 0x3,uVar2 / 0x3);
            if (((uint)(int)sVar1 >> 0x3 & 0x1) == 0x0) {
                uVar4 = 0x64;
            }
            else {
                uVar4 = 0x65;
            }
            screenSetArea(local_18,uVar4,0x0);
        }
    }
    return;
}



void menuTick1PPuzzle(uint param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;
    ushort uVar3;
    ushort uVar4;
    undefined4 local_2c;
    int local_28;
    undefined local_24 [0x2];
    short sStack_22;
    undefined local_20 [0x2];
    short sStack_1e;
    int local_1c;
    int local_18;
    int local_14;
    
    screenGetArea(giScreenMenu,&local_14,0x0);
    screenSetFrame(giScreenMenu,0x64,0x0);
    screenSetFrame(giScreenMenu,0x65,0x2);
    screenSetFrame(giScreenMenu,0x66,0xc);
    screenSetFrame(giScreenMenu,0x67,0x4);
    screenSetFrame(giScreenMenu,0x68,0x6);
    screenSetFrame(giScreenMenu,0x69,0x8);
    if ((local_14 == 0x64) && ((param_1 & 0x8) == 0x0)) {
        screenGetCursor(giScreenMenu,0x64,&local_18,&local_1c);
        if ((local_18 == 0x0) && (local_1c == 0x0)) {
            screenSetFrame(giScreenMenu,0x64,0x1);
        }
        else if ((local_18 == 0x1) && (local_1c == 0x0)) {
            screenSetFrame(giScreenMenu,0x65,0x3);
        }
        else if ((local_18 == 0x2) && (local_1c == 0x0)) {
            screenSetFrame(giScreenMenu,0x66,0xd);
        }
        else if ((local_18 == 0x0) && (local_1c == 0x1)) {
            screenSetFrame(giScreenMenu,0x67,0x5);
        }
        else if ((local_18 == 0x1) && (local_1c == 0x1)) {
            screenSetFrame(giScreenMenu,0x68,0x7);
        }
        else if ((local_18 == 0x2) && (local_1c == 0x1)) {
            screenSetFrame(giScreenMenu,0x69,0x9);
        }
    }
    screenSetFrame(giScreenMenu,0x6a,0xa);
    if ((local_14 == 0x65) && ((param_1 & 0x8) == 0x0)) {
        screenSetFrame(giScreenMenu,0x6a,0xb);
    }
    iVar1 = gaiName._0_4_;
    iVar2 = *(int *)(param_3 + param_2 * 0x4);
    if ((((iVar2 == 0x20) || (iVar2 == 0x21)) && (0x0 < gaiName._0_4_)) && (gaiName._0_4_ < 0x8)) {
        uVar3 = 0x0;
        uVar4 = 0x0;
        iVar2 = screenFind(&local_2c,_1653);
        if (iVar2 != 0x0) {
            screenGetCursor(local_2c,0x64,local_24,local_20);
            screenGetArea(local_2c,&local_28,0x0);
            if (local_28 != 0x64) {
                uVar3 = 0x8;
            }
            uVar4 = sStack_22 + sStack_1e * 0x3 & 0x7U | uVar3;
        }
        *(ushort *)(gTheGame + iVar1 * 0x880 + 0x1def6) = uVar4;
    }
    return;
}



void menuTick1P2D3D_Resume(undefined4 param_1,int param_2)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    undefined auStack_20 [0x4];
    int local_1c [0x4];
    
    iVar1 = gaiName._0_4_;
    if (param_2 != 0x0) {
        iCursorLastX_1759 = -0x1;
    }
    screenGetCursor(giScreenMenu,0x64,local_1c,auStack_20);
    if (local_1c[0] == 0x0) {
        iVar1 = iVar1 * 0x880 + 0x2be503;
    }
    else {
        iVar1 = iVar1 * 0x880 + 0x2be58f;
    }
    iVar4 = 0x3;
    iVar3 = 0x0;
    uVar2 = 0x0;
    do {
        if ((0x1 << (uVar2 & 0x7) & (int)*(char *)(iVar1 + ((int)uVar2 >> 0x3))) != 0x0) {
            iVar3 = -0x1;
            break;
        }
        if ((0x1 << (uVar2 + 0x1 & 0x7) & (int)*(char *)(iVar1 + ((int)(uVar2 + 0x1) >> 0x3))) !=
            0x0) {
            iVar3 = -0x1;
            break;
        }
        if ((0x1 << (uVar2 + 0x2 & 0x7) & (int)*(char *)(iVar1 + ((int)(uVar2 + 0x2) >> 0x3))) !=
            0x0) {
            iVar3 = -0x1;
            break;
        }
        if ((0x1 << (uVar2 + 0x3 & 0x7) & (int)*(char *)(iVar1 + ((int)(uVar2 + 0x3) >> 0x3))) !=
            0x0) {
            iVar3 = -0x1;
            break;
        }
        if ((0x1 << (uVar2 + 0x4 & 0x7) & (int)*(char *)(iVar1 + ((int)(uVar2 + 0x4) >> 0x3))) !=
            0x0) {
            iVar3 = -0x1;
            break;
        }
        if ((0x1 << (uVar2 + 0x5 & 0x7) & (int)*(char *)(iVar1 + ((int)(uVar2 + 0x5) >> 0x3))) !=
            0x0) {
            iVar3 = -0x1;
            break;
        }
        if ((0x1 << (uVar2 + 0x6 & 0x7) & (int)*(char *)(iVar1 + ((int)(uVar2 + 0x6) >> 0x3))) !=
            0x0) {
            iVar3 = -0x1;
            break;
        }
        if ((0x1 << (uVar2 + 0x7 & 0x7) & (int)*(char *)(iVar1 + ((int)(uVar2 + 0x7) >> 0x3))) !=
            0x0) {
            iVar3 = -0x1;
            break;
        }
        if ((0x1 << (uVar2 + 0x8 & 0x7) & (int)*(char *)(iVar1 + ((int)(uVar2 + 0x8) >> 0x3))) !=
            0x0) {
            iVar3 = -0x1;
            break;
        }
        if ((0x1 << (uVar2 + 0x9 & 0x7) & (int)*(char *)(iVar1 + ((int)(uVar2 + 0x9) >> 0x3))) !=
            0x0) {
            iVar3 = -0x1;
            break;
        }
        uVar2 += 0xa;
        iVar4 += -0x1;
    } while (iVar4 != 0x0);
    if (iVar3 == 0x0) {
        gbHideResume = 0xffffffff;
        screenHideImage(param_1,0x6e);
        screenHideSlot(param_1,0x65,0x0,0x0);
        if (iCursorLastX_1759 != local_1c[0]) {
            screenSetCursor(param_1,0x65,0x1,0x0);
        }
        screenSetImagePosition(param_1,0x6f,0x8c,0xa1);
    }
    else {
        gbHideResume = 0x0;
        screenShowImage(param_1,0x6e);
        screenShowSlot(param_1,0x65,0x0,0x0);
        if (iCursorLastX_1759 != local_1c[0]) {
            screenSetCursor(param_1,0x65,0x0,0x0);
        }
        screenSetImagePosition(param_1,0x6e,0x64,0xa1);
        screenSetImagePosition(param_1,0x6f,0xa8,0xa1);
    }
    iCursorLastX_1759 = local_1c[0];
    return;
}



void menuTick1P2D3D(uint param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;
    ushort uVar3;
    undefined4 local_2c;
    int local_28;
    undefined auStack_24 [0x4];
    undefined auStack_20 [0x4];
    uint local_1c;
    undefined4 *local_18;
    int local_14;
    
    menuTick1P2D3D_Resume(giScreenMenu,0x0);
    screenSetFrame(giScreenMenu,0x6e,0x0);
    screenSetFrame(giScreenMenu,0x6f,0x2);
    screenGetArea(giScreenMenu,&local_14,0x0);
    screenGetCursor(giScreenMenu,0x64,&local_1c,auStack_20);
    screenHideImage(giScreenMenu,(local_1c ^ 0x1) + 0x64);
    screenShowImage(giScreenMenu,local_1c + 0x64);
    iVar2 = screenGetImage(giScreenMenu,local_1c + 0x64,&local_18);
    if (iVar2 != 0x0) {
        if ((local_14 == 0x64) && (*(int *)(param_3 + param_2 * 0x4) != 0x20)) {
            local_18[0x3] = local_18[0x3] | 0x24;
        }
        else {
            *local_18 = 0x0;
            local_18[0x3] = local_18[0x3] & 0xffffffdb;
        }
    }
    if ((local_14 != 0x65) || ((param_1 & 0x8) == 0x0)) {
        screenGetCursor(giScreenMenu,0x65,&local_1c,auStack_20);
        screenSetFrame(giScreenMenu,local_1c + 0x6e,local_1c * 0x2 + 0x1);
    }
    iVar2 = gaiName._0_4_;
    iVar1 = *(int *)(param_3 + param_2 * 0x4);
    if ((((iVar1 == 0x20) || (iVar1 == 0x21)) && (0x0 < gaiName._0_4_)) && (gaiName._0_4_ < 0x8)) {
        uVar3 = 0x0;
        iVar1 = screenFind(&local_2c,_313);
        if (iVar1 != 0x0) {
            screenGetCursor(local_2c,0x64,&local_28,auStack_24);
            uVar3 = (ushort)local_28;
            screenGetCursor(local_2c,0x65,&local_28,auStack_24);
            uVar3 = uVar3 & 0x1 | (ushort)(local_28 << 0x1) & 0x2;
        }
        *(ushort *)(gTheGame + iVar2 * 0x880 + 0x1def4) = uVar3;
    }
    return;
}



void menuInit1P2D3D(undefined4 param_1)

{
    ushort uVar1;
    int iVar2;
    undefined4 local_10 [0x3];
    
    screenSetArea(param_1,0x64,0x0);
    screenShowImage(param_1,0x6f);
    screenShowSlot(param_1,0x65,0x1,0x0);
    menuTick1P2D3D_Resume(param_1,0xffffffff);
    if ((0x0 < gaiName._0_4_) && (gaiName._0_4_ < 0x8)) {
        uVar1 = *(ushort *)(gTheGame + gaiName._0_4_ * 0x880 + 0x1def4);
        iVar2 = screenFind(local_10,_313);
        if (iVar2 != 0x0) {
            screenSetCursor(local_10[0],0x64,uVar1 & 0x1,0x0);
        }
    }
    return;
}



void menuInit1PXtra(undefined4 param_1)

{
    int iVar1;
    
    screenHideImage(param_1,0x812b8064);
    iVar1 = menuStageClearXtra();
    if (iVar1 == 0x0) {
        iVar1 = menuStageClearLast();
        if (iVar1 != 0x0) {
            screenShowImage(param_1,0xc8);
            screenShowImage(param_1,0xc9);
            screenShowImage(param_1,0xd2);
            screenShowImage(param_1,0xdc);
        }
    }
    else {
        screenShowImage(param_1,0x64);
        screenShowImage(param_1,0x65);
        screenShowImage(param_1,0x6e);
        screenShowImage(param_1,0x78);
    }
    screenSetBack(0xd);
    return;
}



void menuTick1PXtra(int param_1,int param_2,int param_3)

{
    int iVar1;
    int *piVar2;
    
    iVar1 = menuStageClearXtra();
    if (iVar1 == 0x0) {
        iVar1 = menuStageClearLast();
        if (iVar1 != 0x0) {
            menuWinkFace(0xd2,giScreenMenu,0x0);
        }
    }
    else {
        menuWinkFace(0x6e,giScreenMenu,0x0);
    }
    if (param_1 == 0x3c) {
        PlaySE(SFX_INIT_TABLE,0x10e);
    }
    piVar2 = (int *)(param_3 + param_2 * 0x4);
    if ((*piVar2 != 0x0) || (0xf0 < param_1)) {
        *piVar2 = 0x20;
    }
    return;
}



void menuInit1PXtraTalk(undefined4 param_1)

{
    undefined4 uVar1;
    
    uVar1 = 0x0;
    screenHideImage(param_1,0x812b8064);
    screenShowImage(param_1,0x64);
    screenShowImage(param_1,0x65);
    screenShowImage(param_1,0x6e);
    screenShowImage(param_1,0x78);
    screenShowImage(param_1,0x12c);
    if (gTheGame._89856_4_ == 0x8) {
        uVar1 = 0x64;
    }
    else if (gTheGame._89856_4_ == 0x7) {
        uVar1 = 0x6e;
    }
    screenShowText(param_1,uVar1);
    screenSetBack(0xd);
    return;
}



void menuTick1PXtraTalk(int param_1,int param_2,int param_3)

{
    int iVar1;
    undefined4 uVar2;
    int *piVar3;
    
    uVar2 = 0x0;
    menuWinkFace(0x6e,giScreenMenu,0x0);
    if (gTheGame._89856_4_ == 0x8) {
        uVar2 = 0x64;
    }
    else if (gTheGame._89856_4_ == 0x7) {
        uVar2 = 0x6e;
    }
    piVar3 = (int *)(param_3 + param_2 * 0x4);
    if ((*piVar3 != 0x0) || (0x3c0 < param_1)) {
        iVar1 = screenTextDone(giScreenMenu,uVar2);
        if (iVar1 == 0x0) {
            *piVar3 = 0x0;
            PlaySE(SFX_INIT_TABLE,0x2);
            screenShowTextFull(giScreenMenu,uVar2);
        }
        else {
            *piVar3 = 0x20;
            PlaySE(SFX_INIT_TABLE,0x2);
        }
    }
    return;
}



void menuInit1PClear(undefined4 param_1)

{
    byte bVar1;
    int iVar2;
    undefined uVar3;
    int iVar4;
    int iVar5;
    byte *pbVar6;
    undefined1 *__s;
    byte *pbVar7;
    undefined auStack_30 [0x4];
    int local_2c;
    int local_28 [0x3];
    
    iVar2 = gaiName._0_4_;
    screenFind(local_28,_313);
    screenGetCursor(local_28[0],0x64,&local_2c,auStack_30);
    if (local_2c == 0x1) {
        gbGame3D = -0x1;
    }
    else {
        gbGame3D = 0x0;
    }
    if (gbGame3D == 0x0) {
        iVar2 *= 0x880;
        __s = gTheGame + iVar2 + 0x1d6c4;
        pbVar6 = gTheGame + iVar2 + 0x1d6bb;
    }
    else {
        iVar2 *= 0x880;
        __s = gTheGame + iVar2 + 0x1d750;
        pbVar6 = gTheGame + iVar2 + 0x1d747;
    }
    if ((local_28[0] == giScreenMenuLast) &&
       (screenGetCursor(local_28[0],0x65,&local_2c,auStack_30), local_2c == 0x1)) {
        bzero(__s,0x80);
        pbVar6[0x5] = 0x0;
        pbVar6[0x4] = 0x0;
        pbVar6[0x3] = 0x0;
        pbVar6[0x2] = 0x0;
        pbVar6[0x1] = 0x0;
        *pbVar6 = 0x0;
    }
    screenShowArea(param_1,0x64);
    iVar4 = -0x1;
    iVar2 = -0x1;
    iVar5 = 0x0;
    pbVar7 = pbVar6;
    do {
        bVar1 = *pbVar7;
        if (iVar5 < 0x5) {
            if ((bVar1 & 0x1f) == 0x1f) {
                screenShowArea(param_1,iVar5 + 0x65);
            }
            else {
                screenHideArea(param_1,iVar5 + 0x65);
            }
        }
        uVar3 = (bVar1 & 0x1) != 0x0;
        if ((bool)uVar3) {
            iVar4 = 0x0;
            iVar2 = iVar5;
        }
        if ((bVar1 & 0x2) != 0x0) {
            iVar4 = 0x1;
            uVar3 = 0x2;
            iVar2 = iVar5;
        }
        if ((bVar1 & 0x4) != 0x0) {
            iVar4 = 0x2;
            uVar3 = 0x3;
            iVar2 = iVar5;
        }
        if ((bVar1 & 0x8) != 0x0) {
            iVar4 = 0x3;
            uVar3 = 0x4;
            iVar2 = iVar5;
        }
        if ((bVar1 & 0x10) != 0x0) {
            iVar4 = 0x4;
            uVar3 = 0x5;
            iVar2 = iVar5;
        }
        screenSetNumber(param_1,iVar5 + 0x64,uVar3,0x0);
        iVar5 += 0x1;
        pbVar7 = pbVar7 + 0x1;
    } while (iVar5 < 0x6);
    if (iVar2 == -0x1) {
        iVar2 = 0x0;
        iVar5 = 0x0;
    }
    else {
        iVar5 = iVar4 + 0x1;
        if ((iVar4 + 0x1 == 0x5) && (iVar5 = iVar4, iVar2 < 0x5)) {
            iVar2 += 0x1;
            iVar5 = 0x0;
        }
    }
    if (((iVar2 == 0x3) && (iVar5 == 0x0)) && ((pbVar6[0x2] & 0x20) == 0x0)) {
        iVar2 = 0x2;
        iVar5 = 0x4;
        screenHideArea(param_1,0x67);
    }
    screenSetArea(param_1,iVar2 + 0x64,0x0);
    screenSetCursor(param_1,iVar2 + 0x64,iVar5,0x0);
    return;
}



void menuTick1PClear(int param_1,int param_2,undefined4 *param_3)

{
    int iVar1;
    int iVar2;
    char *pcVar3;
    undefined auStack_24 [0x4];
    int local_20;
    int local_1c [0x2];
    
    screenGetArea(giScreenMenu,local_1c,param_2);
    menuWinkFace(local_1c[0],giScreenMenu,param_2);
    if (gbGame3D == 0x0) {
        pcVar3 = gTheGame + gaiName._0_4_ * 0x880 + 0x1d6bb;
    }
    else {
        pcVar3 = gTheGame + gaiName._0_4_ * 0x880 + 0x1d747;
    }
    if (((((*pcVar3 == '\0') && (pcVar3[0x1] == '\0')) && (pcVar3[0x2] == '\0')) &&
        ((pcVar3[0x3] == '\0' && (pcVar3[0x4] == '\0')))) &&
       ((pcVar3[0x5] == '\0' && (0xef < param_1)))) {
        *param_3 = 0x20;
    }
    screenGetCursor(giScreenMenu,local_1c[0],&local_20,auStack_24);
    iVar1 = param_3[param_2];
    if (iVar1 == 0x0) {
        return;
    }
    iVar2 = 0x0;
    if (iVar1 == 0x4) {
        iVar2 = -0x1;
        if (local_20 == 0x4) {
            if (local_1c[0] < 0x69) {
                local_1c[0] += 0x1;
                local_20 = 0x0;
            }
        }
        else {
            local_20 += 0x1;
        }
    }
    else if ((iVar1 == 0x2) && (iVar2 = -0x1, local_1c[0] < 0x68)) {
        local_1c[0] += 0x2;
    }
    if (iVar2 != 0x0) {
        if ((local_20 == 0x0) && (local_1c[0] == 0x64)) {
            return;
        }
        if ((local_20 == 0x0) && (0x64 < local_1c[0])) {
            local_1c[0] += -0x1;
            local_20 = 0x4;
        }
        else {
            local_20 += -0x1;
        }
        if ((0x1 << local_20 & (int)pcVar3[local_1c[0] + -0x64]) == 0x0) {
            param_3[param_2] = 0x0;
        }
        return;
    }
    return;
}



void menuInit1PStandard(undefined4 param_1)

{
    undefined4 uVar1;
    
    if (geTypeMenu == 0x6) {
        uVar1 = 0x0;
    }
    else {
        uVar1 = 0x2;
    }
    menuLoad1PStandard(gaiName._0_4_,uVar1);
    screenSetArea(param_1,0x64,0x0);
    return;
}



void menuDraw1PStandard(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
    undefined4 *puVar1;
    undefined4 local_20;
    undefined auStack_1c [0x4];
    int local_18 [0x3];
    
    puVar1 = (undefined4 *)*param_1;
    local_20 = param_3;
    screenGetCursor(param_2,0x64,local_18,auStack_1c);
    *puVar1 = 0xe7000000;
    puVar1[0x1] = 0x0;
    puVar1[0x2] = 0xfa000000;
    puVar1[0x3] = 0x7a2370ff;
    puVar1[0x4] = 0xe200001c;
    puVar1[0x5] = 0xf0a4000;
    puVar1[0x6] = 0xfcffffff;
    puVar1[0x7] = 0xfffdf6fb;
    puVar1[0x8] = 0xd9ddf9fa;
    puVar1[0x9] = 0x0;
    puVar1[0xa] = 0xf63a0198;
    puVar1[0xb] = (local_18[0] + (local_18[0] >> 0x4) + 0x7f) * 0x4000 & 0xffc000U | 0x174;
    screenGetArea(param_2,&local_20,0x0);
    *param_1 = puVar1 + 0xc;
    return;
}



void menuTick1PStandard(uint param_1,int param_2,int param_3)

{
    int iVar1;
    undefined4 uVar2;
    undefined auStack_24 [0x4];
    uint local_20;
    undefined4 *local_1c;
    int local_18 [0x2];
    
    screenGetArea(giScreenMenu,local_18,0x0);
    screenSetFrame(giScreenMenu,0x6e,0x0);
    screenSetFrame(giScreenMenu,0x6f,0x2);
    screenSetFrame(giScreenMenu,0x70,0x4);
    if ((local_18[0] != 0x65) || ((param_1 & 0x8) == 0x0)) {
        screenGetCursor(giScreenMenu,0x65,&local_20,auStack_24);
        screenSetFrame(giScreenMenu,local_20 + 0x6e,local_20 * 0x2 + 0x1);
    }
    screenGetCursor(giScreenMenu,0x66,&local_20,auStack_24);
    screenHideImage(giScreenMenu,(local_20 ^ 0x1) + 0x73);
    screenShowImage(giScreenMenu,local_20 + 0x73);
    iVar1 = screenGetImage(giScreenMenu,local_20 + 0x73,&local_1c);
    if (iVar1 != 0x0) {
        if ((local_18[0] == 0x66) && (*(int *)(param_3 + param_2 * 0x4) != 0x20)) {
            local_1c[0x3] = local_1c[0x3] | 0x24;
        }
        else {
            *local_1c = 0x0;
            local_1c[0x3] = local_1c[0x3] & 0xffffffdb;
        }
    }
    screenGetCursor(giScreenMenu,0x64,&local_20,auStack_24);
    screenSetNumber(giScreenMenu,0xc8,local_20 + 0x1,0xffffffff);
    iVar1 = *(int *)(param_3 + param_2 * 0x4);
    if ((iVar1 == 0x20) || (iVar1 == 0x21)) {
        if (geTypeMenu == 0x6) {
            uVar2 = 0x0;
        }
        else {
            uVar2 = 0x2;
        }
        menuSave1PStandard(gaiName._0_4_,uVar2);
    }
    return;
}



void menuInit2PLevel(undefined4 param_1)

{
    undefined4 uVar1;
    
    if (geGameType == 0x41) {
        uVar1 = 0x6;
    }
    else if (geGameType < 0x41) {
        if (geGameType < 0x40) {
            return;
        }
        uVar1 = 0x5;
    }
    else {
        if (0x42 < geGameType) {
            return;
        }
        uVar1 = 0x7;
    }
    menuLoad2P(gaiName._0_4_,uVar1,0x0);
    menuLoad2P(gaiName._4_4_,uVar1,0x1);
    screenSetArea(param_1,0x65,0x0);
    screenSetArea(param_1,0x67,0x1);
    screenSetNumber(param_1,0xcb,gTheGame._120360_4_,0xffffffff);
    screenSetNumber(param_1,0xd5,gTheGame._120384_4_,0xffffffff);
    return;
}



void menuTick2PLevel(undefined4 param_1,int param_2,int *param_3)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined auStack_24 [0x4];
    int local_20;
    int local_1c;
    undefined auStack_18 [0x4];
    int local_14;
    
    uVar3 = 0x0;
    screenHideImage(giScreenMenu,0x80d080cd);
    screenGetCursor(giScreenMenu,0x66,&local_20,auStack_24);
    iVar1 = screenGetArea(giScreenMenu,&local_14,0x0);
    if (((((iVar1 == 0x0) || (local_14 != 0x66)) || (ganPick._0_4_ != 0x0)) || (*param_3 == 0x20))
       && (((iVar1 = screenGetArea(giScreenMenu,&local_14,0x1), iVar1 == 0x0 || (local_14 != 0x66))
           || ((ganPick._4_4_ != 0x0 || (*param_3 == 0x20)))))) {
        if (local_20 == 0x0) {
            uVar2 = 0xcf;
        }
        else {
            uVar2 = 0xd0;
        }
        screenShowImage(giScreenMenu,uVar2);
    }
    else {
        if (local_20 == 0x0) {
            uVar2 = 0xcd;
        }
        else {
            uVar2 = 0xce;
        }
        screenShowImage(giScreenMenu,uVar2);
    }
    if ((0x0 < gnTickFade) && (gnTickFade += -0x1, gnTickFade == 0x0)) {
        screenHideImage(giScreenMenu,0x8140812c);
    }
    screenGetArea(giScreenMenu,&local_14,param_2);
    if (param_2 == 0x0) {
        screenGetCursor(giScreenMenu,0x64,&local_20,auStack_24);
        iVar1 = local_20;
        if (geTypeMenu != 0x23) {
            iVar1 = local_20 * 0x64;
        }
        screenSetNumber(giScreenMenu,0xc8,iVar1,0xffffffff);
        if (local_14 == 0x64) {
            screenGetAreaExtents(giScreenMenu,0x64,auStack_18,&local_1c);
            if ((*param_3 == 0x3) && (0x0 < local_20)) {
                gnTickFade = 0x4;
                screenShowImage(giScreenMenu,0x12c);
            }
            else if ((*param_3 == 0x4) && (local_20 < local_1c + -0x1)) {
                gnTickFade = 0x4;
                screenShowImage(giScreenMenu,0x12d);
            }
        }
        screenGetCursor(giScreenMenu,0x65,&local_20,auStack_24);
        screenSetNumber(giScreenMenu,0xc9,local_20 + 0x1,0xffffffff);
        screenSetFrame(giScreenMenu,0xca,local_20);
    }
    if (param_2 == 0x1) {
        screenGetCursor(giScreenMenu,0x68,&local_20,auStack_24);
        iVar1 = local_20;
        if (geTypeMenu != 0x23) {
            iVar1 = local_20 * 0x64;
        }
        screenSetNumber(giScreenMenu,0xd2,iVar1,0xffffffff);
        if (local_14 == 0x68) {
            screenGetAreaExtents(giScreenMenu,0x68,auStack_18,&local_1c);
            if ((param_3[0x1] == 0x3) && (0x0 < local_20)) {
                gnTickFade = 0x4;
                screenShowImage(giScreenMenu,0x136);
            }
            else if ((param_3[0x1] == 0x4) && (local_20 < local_1c + -0x1)) {
                gnTickFade = 0x4;
                screenShowImage(giScreenMenu,0x137);
            }
        }
        screenGetCursor(giScreenMenu,0x67,&local_20,auStack_24);
        screenSetNumber(giScreenMenu,0xd3,local_20 + 0x1,0xffffffff);
        screenSetFrame(giScreenMenu,0xd4,local_20);
    }
    if ((param_3[param_2] == 0x20) || (param_3[param_2] == 0x21)) {
        if (geTypeMenu == 0x1d) {
            uVar3 = 0x5;
        }
        else if (geTypeMenu == 0x20) {
            uVar3 = 0x6;
        }
        else if (geTypeMenu == 0x23) {
            uVar3 = 0x7;
        }
        menuSave2P(gaiName._0_4_,uVar3,0x0);
        menuSave2P(gaiName._4_4_,uVar3,0x1);
    }
    return;
}



void pon_menuInit4PLevel(undefined4 param_1)

{
    undefined4 uVar1;
    
    if (geGameType == 0x41) {
        uVar1 = 0xa;
    }
    else if (geGameType < 0x41) {
        if (geGameType < 0x40) {
            return;
        }
        uVar1 = 0x9;
    }
    else {
        if (0x42 < geGameType) {
            return;
        }
        uVar1 = 0xb;
    }
    pon_menuLoad4P(gaiName._0_4_,uVar1,0x0);
    pon_menuLoad4P(gaiName._4_4_,uVar1,0x1);
    pon_menuLoad4P(gaiName._8_4_,uVar1,0x2);
    pon_menuLoad4P(gaiName._12_4_,uVar1,0x3);
    screenSetArea(param_1,0x64,0x0);
    screenSetArea(param_1,0x6e,0x1);
    screenSetArea(param_1,0x78,0x2);
    screenSetArea(param_1,0x82,0x3);
    screenSetNumber(param_1,0xcb,(int)gTheGame[138232],0xffffffff);
    screenSetNumber(param_1,0xd5,(int)gTheGame[138233],0xffffffff);
    screenSetNumber(param_1,0xdf,(int)gTheGame[138234],0xffffffff);
    screenSetNumber(param_1,0xe9,(int)gTheGame[138235],0xffffffff);
    gValidCont_4pMenu = (uint)gValidControllers;
    gnPlayer1Controll = 0x0;
    return;
}



void pon_menuTick4PLevel(undefined4 param_1,uint param_2,int param_3)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 local_34;
    int local_30 [0x3];
    
    iVar1 = param_2 * 0xa;
    uVar2 = 0x0;
    screenGetCursor(giScreenMenu,iVar1 + 0x64,local_30,&local_34);
    if (((gValidCont_4pMenu >> (param_2 & 0x3f) & 0x1U) == 0x0) && (local_30[0] == 0x0)) {
        local_30[0] = 0x1;
        screenSetCursor(giScreenMenu,iVar1 + 0x64,0x1,local_34);
    }
    screenSetFrame(giScreenMenu,iVar1 + 0xc8,
                   *(undefined4 *)(gaPlayerFor4PSetLevel + local_30[0] * 0x4 + param_2 * 0x30));
    screenGetCursor(giScreenMenu,iVar1 + 0x65,local_30,&local_34);
    screenSetNumber(giScreenMenu,iVar1 + 0xc9,local_30[0] + 0x1,0xffffffff);
    screenSetFrame(giScreenMenu,iVar1 + 0xca,local_30[0]);
    iVar1 = *(int *)(param_3 + param_2 * 0x4);
    if ((iVar1 == 0x20) || (iVar1 == 0x21)) {
        if (geGameType == 0x40) {
            uVar2 = 0x9;
        }
        else if (geGameType == 0x41) {
            uVar2 = 0xa;
        }
        else if (geGameType == 0x42) {
            uVar2 = 0xb;
        }
        pon_menuSave4P(gaiName._0_4_,uVar2,0x0);
        pon_menuSave4P(gaiName._4_4_,uVar2,0x1);
        pon_menuSave4P(gaiName._8_4_,uVar2,0x2);
        pon_menuSave4P(gaiName._12_4_,uVar2,0x3);
    }
    return;
}



void menuInitSE2D3D(void)

{
    ushort uVar1;
    int iVar2;
    undefined4 local_10 [0x3];
    
    if ((0x0 < gaiName._0_4_) && (gaiName._0_4_ < 0x8)) {
        uVar1 = *(ushort *)(gTheGame + gaiName._0_4_ * 0x880 + 0x1defe);
        iVar2 = screenFind(local_10,_2062);
        if (iVar2 != 0x0) {
            screenSetCursor(local_10[0],0x64,uVar1 & 0x1,0x0);
        }
    }
    return;
}



void menuTickSE2D3D(undefined4 param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;
    ushort uVar3;
    undefined4 local_2c;
    undefined local_28 [0x2];
    ushort uStack_26;
    undefined auStack_24 [0x4];
    undefined auStack_20 [0x4];
    uint local_1c;
    undefined4 *local_18;
    int local_14 [0x2];
    
    screenGetArea(giScreenMenu,local_14,param_2);
    screenGetCursor(giScreenMenu,0x64,&local_1c,auStack_20);
    screenHideImage(giScreenMenu,(local_1c ^ 0x1) + 0x64);
    screenShowImage(giScreenMenu,local_1c + 0x64);
    iVar2 = screenGetImage(giScreenMenu,local_1c + 0x64,&local_18);
    if (iVar2 != 0x0) {
        if ((local_14[0] == 0x64) && (*(int *)(param_3 + param_2 * 0x4) != 0x20)) {
            local_18[0x3] = local_18[0x3] | 0x24;
        }
        else {
            *local_18 = 0x0;
            local_18[0x3] = local_18[0x3] & 0xffffffdb;
        }
    }
    iVar2 = gaiName._0_4_;
    iVar1 = *(int *)(param_3 + param_2 * 0x4);
    if ((((iVar1 == 0x20) || (iVar1 == 0x21)) && (0x0 < gaiName._0_4_)) && (gaiName._0_4_ < 0x8)) {
        uVar3 = 0x0;
        iVar1 = screenFind(&local_2c,_2062);
        if (iVar1 != 0x0) {
            screenGetCursor(local_2c,0x64,local_28,auStack_24);
            uVar3 = uStack_26 & 0x1;
        }
        *(ushort *)(gTheGame + iVar2 * 0x880 + 0x1defe) = uVar3;
    }
    return;
}



void menuInitNamePick(void)

{
    menuUpdateName();
    if (geTypeMenu - 0x3dU < 0x3) {
        gTheGame._120360_4_ = 0x0;
        gTheGame._120384_4_ = 0x0;
        gTheGame._120408_4_ = 0x0;
        gTheGame._120432_4_ = 0x0;
    }
    return;
}



void menuTickNamePick(undefined4 param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int *piVar7;
    int local_54;
    int local_50;
    int local_4c;
    int local_48;
    undefined4 local_44;
    undefined4 local_40;
    int local_3c;
    undefined auStack_38 [0x4];
    undefined4 local_34;
    undefined4 local_30 [0x3];
    
    iVar4 = 0x0;
    screenGetCursor(giScreenMenu,0x64,&local_48,&local_4c);
    screenGetCursor(giScreenMenu,0x6e,&local_50,&local_54);
    if (((gnPlayerCount < 0x2) || (local_48 != local_50)) || (local_4c != local_54)) {
        screenHideImage(giScreenMenu,0x12c);
    }
    else {
        screenShowImage(giScreenMenu,0x12c);
        screenGetCursorPosition(giScreenMenu,0x64,&local_40,&local_44);
        screenSetImagePosition(giScreenMenu,0x12c,local_40,local_44);
    }
    if (param_2 == 0x0) {
        iVar4 = local_48 + local_4c * 0x2;
    }
    else if (param_2 == 0x1) {
        iVar4 = local_50 + local_54 * 0x2;
    }
    iVar1 = param_2 * 0x4;
    piVar7 = (int *)(param_3 + iVar1);
    iVar3 = *piVar7;
    if (iVar3 == 0x3) {
        iVar4 += -0x1;
    }
    else if (iVar3 < 0x3) {
        if (iVar3 == 0x1) {
            iVar4 += -0x2;
        }
        else if (0x0 < iVar3) {
            iVar4 += 0x2;
        }
    }
    else if (iVar3 < 0x5) {
        iVar4 += 0x1;
    }
    if (iVar4 < 0x0) {
        iVar4 += 0x8;
    }
    if (0x7 < iVar4) {
        iVar4 += -0x8;
    }
    if (((-0x1 < iVar4) && (iVar4 < 0x8)) &&
       ((*(short *)(gTheGame + iVar4 * 0x880 + 0x1d68a) == 0x0 && (iVar3 != 0x21)))) {
        *piVar7 = 0x0;
    }
    iVar4 = 0x0;
    do {
        if (iVar4 == local_48 + local_4c * 0x2) {
            if (((gnPlayerCount < 0x2) || (local_48 != local_50)) || (local_4c != local_54)) {
                screenSetTextColor(giScreenMenu,iVar4 + 0x64,0xffffffff,0x42c2d6ff);
            }
            else {
                screenSetTextColor(giScreenMenu,iVar4 + 0x64,0xffffffff,0x9a50c8ff);
            }
        }
        else if ((gnPlayerCount < 0x2) || (iVar4 != local_50 + local_54 * 0x2)) {
            screenSetTextColor(giScreenMenu,iVar4 + 0x64,0xffffffff,0xaba83aff);
        }
        else {
            screenSetTextColor(giScreenMenu,iVar4 + 0x64,0xffffffff,0xf15bd2ff);
        }
        iVar4 += 0x1;
    } while (iVar4 < 0x8);
    if (*piVar7 == 0x20) {
        iVar4 = -0x1;
        screenGetArea(giScreenMenu,&local_34,param_2);
        screenGetCursor(giScreenMenu,local_34,&local_48,&local_4c);
        if ((local_48 + local_4c == 0x0) && ((geTypeMenu == 0x32 || (geTypeMenu == 0x30)))) {
            iVar4 = 0x0;
        }
        else if (geTypeMenu == 0x30) {
            *piVar7 = 0x0;
            giName = local_48 + local_4c * 0x2;
            screenSetTextField(giScreenMenu,0xd2,giName * 0x880 + 0x2be4d2);
            if (param_2 < 0x4) {
                gnTagDialog = 0xd2;
                giPlayerDialog = param_2;
                screenShowDialog(giScreenMenu,0xd2);
                gnTickCountDialog = 0x0;
            }
            PlaySE(SFX_INIT_TABLE,0x8);
        }
        else if ((geTypeMenu == 0x35) && (iVar3 = screenFind(local_30,_2208), iVar3 != 0x0)) {
            screenGetCursor(local_30[0],0x64,auStack_38,&local_3c);
            *(int *)(gPlayer + iVar1) = (local_48 + local_4c * 0x2) * 0x880 + 0x2be4d0;
            iVar6 = -0x1;
            iVar5 = -0x1;
            iVar3 = 0x1;
            do {
                iVar2 = CheckPlayerPuzzle(iVar3);
                if (iVar2 == 0x0) {
                    iVar5 = 0x0;
                }
                else {
                    iVar6 = 0x0;
                }
                iVar3 += 0x1;
            } while (iVar3 < 0x10);
            if ((local_3c == 0x0) && (iVar5 != 0x0)) {
                iVar4 = 0x0;
            }
            if ((local_3c == 0x1) && (iVar6 != 0x0)) {
                iVar4 = 0x0;
            }
            if ((local_3c == 0x2) && (iVar6 != 0x0)) {
                iVar4 = 0x0;
            }
        }
        if (iVar4 == 0x0) {
            *piVar7 = 0x0;
            PlaySE(SFX_INIT_TABLE,0x7);
        }
        else {
            local_48 += local_4c * 0x2;
            *(int *)(gaiName + iVar1) = local_48;
            *(int *)(gPlayer + iVar1) = local_48 * 0x880 + 0x2be4d0;
            if (geTypeMenu == 0x35) {
                FadeOutSong(last_song_handle,0x78);
            }
        }
    }
    return;
}



void menuNameAdd(int param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    
    iVar2 = 0x0;
    iVar3 = 0x0;
    if (giName < 0x6) {
        if (param_2 < 0x5) {
            PlaySE(SFX_INIT_TABLE,0x47);
        }
        else {
            PlaySE(SFX_INIT_TABLE,0x48);
        }
        if ((geLanguageMenu == 0x2) || ((geLanguageMenu == 0x1 && (param_1 == 0x2)))) {
            if (param_2 < 0x5) {
                iVar3 = 0x6;
                if (param_3 == 0x5) {
                    iVar2 = 0x1a;
                }
                else if (param_3 < 0x6) {
                    iVar2 = param_2 + param_3 * 0x5 + 0x1;
                }
                else {
                    iVar2 = param_2 + (param_3 + -0x6) * 0x5 + 0x1;
                    iVar3 = 0x5;
                }
            }
            else {
                iVar3 = 0x7;
                if (param_3 == 0x5) {
                    iVar2 = 0x1a;
                }
                else if (param_3 == 0x6) {
                    if (param_2 == 0x7) {
                        iVar3 = 0x0;
                        iVar2 = 0x1;
                    }
                    else {
                        iVar2 = param_2 + -0x4;
                        iVar3 = 0x4;
                    }
                }
                else {
                    iVar2 = param_2 + param_3 * 0x5 + -0x4;
                }
            }
        }
        else if (geLanguageMenu == 0x1) {
            if (param_1 == 0x0) {
                iVar3 = 0x3;
            }
            else {
                iVar3 = 0x2;
            }
            if (param_2 < 0x5) {
                iVar2 = param_2 + param_3 * 0x5 + 0x1;
                if (((param_3 == 0x7) && (0x0 < param_2)) || (0x7 < param_3)) {
                    iVar2 += -0x1;
                }
                if (((param_3 == 0x7) && (0x2 < param_2)) || (0x7 < param_3)) {
                    iVar2 += -0x1;
                }
            }
            else if ((((iVar3 == 0x3) && (param_2 == 0x5)) && (param_3 == 0x8)) ||
                    (((iVar3 == 0x2 && (param_2 == 0x9)) && (param_3 == 0x8)))) {
                iVar3 = 0x0;
                iVar2 = 0x1;
            }
            else {
                iVar1 = param_2 + param_3 * 0x5;
                iVar2 = iVar1 + 0x27;
                if (((param_3 == 0x0) && (0x1 < param_2 + -0x5)) || (0x0 < param_3)) {
                    iVar2 = iVar1 + 0x26;
                }
                if (((param_3 == 0x0) && (0x2 < param_2 + -0x5)) || (0x0 < param_3)) {
                    iVar2 += -0x1;
                }
                if (iVar3 == 0x2) {
                    if ((param_3 == 0x5) && (param_2 == 0x6)) {
                        iVar3 = 0x4;
                        iVar2 = 0x1;
                    }
                    else if (((param_3 == 0x5) && (0x1 < param_2 + -0x5)) || (0x5 < param_3)) {
                        iVar2 += -0x4;
                    }
                }
                if ((iVar3 == 0x3) && (iVar2 == 0x51)) {
                    iVar3 = 0x4;
                    iVar2 = 0x1;
                }
            }
        }
        iVar1 = giName * 0x2;
        giName = giName + 0x1;
        *(ushort *)(ganName + iVar1) = (ushort)iVar2 & 0x3ff | (ushort)(iVar3 << 0xa);
        *(undefined2 *)(ganName + giName * 0x2) = 0x0;
        screenSetText(giScreenMenu,0x64,ganName);
    }
    else {
        PlaySE(SFX_INIT_TABLE,0x7);
    }
    return;
}



undefined4 menuDeadSpot(int param_1,int param_2,int param_3)

{
    if ((geLanguageMenu == 0x2) || ((geLanguageMenu == 0x1 && (param_1 == 0x2)))) {
        if (((param_3 == 0x5) && (0x0 < param_2)) && (param_2 < 0x5)) {
            return 0xffffffff;
        }
        if (0x7 < param_3) {
            return 0xffffffff;
        }
        if ((param_3 == 0x5) && (0x5 < param_2)) {
            return 0xffffffff;
        }
        if ((param_3 == 0x6) && (0x7 < param_2)) {
            return 0xffffffff;
        }
        if ((0x6 < param_3) && (0x4 < param_2)) {
            return 0xffffffff;
        }
    }
    else if (geLanguageMenu == 0x1) {
        if ((param_3 == 0x7) && (param_2 == 0x1)) {
            return 0xffffffff;
        }
        if ((param_3 == 0x7) && (param_2 == 0x3)) {
            return 0xffffffff;
        }
        if ((param_3 == 0x0) && (param_2 == 0x7)) {
            return 0xffffffff;
        }
        if ((param_3 == 0x0) && (param_2 == 0x8)) {
            return 0xffffffff;
        }
        if (param_1 == 0x0) {
            if ((0x7 < param_3) && (0x5 < param_2)) {
                return 0xffffffff;
            }
        }
        else if (((param_1 == 0x1) && (param_3 == 0x5)) && (0x6 < param_2)) {
            return 0xffffffff;
        }
    }
    return 0x0;
}



void menuTestNameEntryMove(int *param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    int iVar5;
    int local_2c;
    int local_28;
    undefined auStack_24 [0x4];
    int local_20;
    int local_1c;
    int local_18 [0x2];
    
    screenGetCursor(giScreenMenu,0x64,&local_1c,&local_20);
    iVar3 = local_20;
    screenGetArea(giScreenMenu,local_18,0x0);
    screenGetCursor(giScreenMenu,local_18[0],&local_1c,&local_20);
    if (local_18[0] == 0x66) {
        local_1c += 0x5;
    }
    if (local_18[0] - 0x65U < 0x2) {
        iVar5 = 0x0;
        do {
            iVar1 = *param_1;
            if (iVar1 == 0x3) {
                local_1c += -0x1;
            }
            else if (iVar1 < 0x3) {
                if (iVar1 == 0x1) {
                    local_20 += -0x1;
                }
                else if (0x0 < iVar1) {
                    local_20 += 0x1;
                }
            }
            else if (iVar1 < 0x5) {
                local_1c += 0x1;
            }
            iVar1 = iVar5 + 0x1;
            if ((local_1c < 0x0) || (0x9 < local_1c)) break;
            if (local_20 < 0x0) {
                local_20 = 0x8;
                iVar1 = iVar5 + 0x2;
            }
            iVar5 = iVar1;
            if (0x8 < local_20) {
                local_20 = 0x0;
                iVar5 += 0x1;
            }
            iVar2 = menuDeadSpot(iVar3,local_1c,local_20);
            iVar1 = iVar5;
        } while (iVar2 != 0x0);
        if (local_1c < 0x0) {
            *param_1 = 0x0;
            PlaySE(SFX_INIT_TABLE,0x1);
            screenSetArea(giScreenMenu,0x64,0x0);
            if (local_18[0] != 0x65) {
                iVar3 = menuDeadSpot(iVar3,0x0,local_20);
                if (iVar3 != 0x0) {
                    local_20 = 0x0;
                }
                screenSetCursor(giScreenMenu,0x65,0x0,local_20);
            }
        }
        else if (local_1c < 0xa) {
            if (local_20 < 0x0) {
                *param_1 = 0x0;
            }
            else if (local_20 < 0x9) {
                if ((local_18[0] == 0x65) && (local_1c == 0x5)) {
                    *param_1 = 0x14;
                    screenSetCursor(giScreenMenu,0x67,0x0,0x1);
                }
                else if ((local_18[0] == 0x66) && (local_1c == 0x4)) {
                    *param_1 = 0x13;
                }
                else if (0x1 < iVar1) {
                    *param_1 = 0x0;
                    if ((local_18[0] == 0x65) && (0x4 < local_1c)) {
                        local_18[0] = 0x66;
                        screenSetArea(giScreenMenu,0x66,0x0);
                    }
                    else if ((local_18[0] == 0x66) && (local_1c < 0x5)) {
                        local_18[0] = 0x65;
                        screenSetArea(giScreenMenu,0x65,0x0);
                    }
                    if (0x4 < local_1c) {
                        local_1c += -0x5;
                    }
                    screenSetCursor(giScreenMenu,local_18[0],local_1c,local_20);
                    uVar4 = PlaySE(SFX_INIT_TABLE,0x1);
                    screenGetArea(giScreenMenu,&local_2c,0x0);
                    screenGetCursor(giScreenMenu,local_2c,&local_28,auStack_24);
                    if (local_2c == 0x65) {
                        SetPanSFX(uVar4,(0x5 - local_28) * -0x14 + 0x7f);
                    }
                    else if (local_2c == 0x66) {
                        SetPanSFX(uVar4,local_28 * 0x14 + 0x7f);
                    }
                }
            }
            else {
                *param_1 = 0x0;
            }
        }
        else {
            *param_1 = 0x0;
            PlaySE(SFX_INIT_TABLE,0x1);
            screenSetArea(giScreenMenu,0x67,0x0);
            screenSetCursor(giScreenMenu,0x67,0x0,0x1);
            if (local_18[0] != 0x66) {
                iVar3 = menuDeadSpot(iVar3,0x9,local_20);
                if (iVar3 != 0x0) {
                    local_20 = 0x0;
                }
                screenSetCursor(giScreenMenu,0x66,0x4,local_20);
            }
        }
    }
    return;
}



void menuInitNameEntry(undefined4 param_1)

{
    screenSetArea(param_1,0x64,0x0);
    screenSetCursor(param_1,0x64,0x0,0x0);
    screenSetCursor(param_1,0x65,0x0,0x0);
    screenSetCursor(param_1,0x66,0x0,0x0);
    giName = 0x0;
    ganName._0_2_ = 0x0;
    ganName._2_2_ = 0x0;
    ganName._4_2_ = 0x0;
    ganName._6_2_ = 0x0;
    ganName._8_2_ = 0x0;
    ganName._10_2_ = 0x0;
    ganName._12_2_ = 0x0;
    screenSetText(param_1,0x64,ganName);
    gnCountNameEntry = 0x0;
    return;
}



void menuTickNameEntry(uint param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    undefined1 *puVar4;
    int *piVar5;
    int unaff_r30;
    int local_24;
    int local_20;
    int local_1c;
    
    screenGetCursor(giScreenMenu,0x64,&local_20,&local_24);
    if (local_24 == 0x1) {
        screenHideText(giScreenMenu,0xc8);
        screenHideText(giScreenMenu,0xc9);
        screenHideText(giScreenMenu,0xd2);
        screenHideText(giScreenMenu,0xd3);
        screenShowText(giScreenMenu,0xdc);
        screenShowText(giScreenMenu,0xdd);
    }
    else if (local_24 < 0x1) {
        if (-0x1 < local_24) {
            screenHideText(giScreenMenu,0xc8);
            screenHideText(giScreenMenu,0xc9);
            screenShowText(giScreenMenu,0xd2);
            screenShowText(giScreenMenu,0xd3);
            screenHideText(giScreenMenu,0xdc);
            screenHideText(giScreenMenu,0xdd);
        }
    }
    else if (local_24 < 0x3) {
        screenShowText(giScreenMenu,0xc8);
        screenShowText(giScreenMenu,0xc9);
        screenHideText(giScreenMenu,0xd2);
        screenHideText(giScreenMenu,0xd3);
        screenHideText(giScreenMenu,0xdc);
        screenHideText(giScreenMenu,0xdd);
    }
    piVar5 = (int *)(param_3 + param_2 * 0x4);
    iVar1 = *piVar5;
    if (((iVar1 == 0x3) || (iVar1 == 0x4)) || (iVar1 - 0x1U < 0x2)) {
        menuTestNameEntryMove(param_3);
    }
    screenGetCursor(giScreenMenu,0x64,&local_20,&local_24);
    iVar1 = local_24;
    if (nLanguageLast_2431 != local_24) {
        nLanguageLast_2431 = local_24;
        screenSetCursor(giScreenMenu,0x65,0x0,0x0);
        screenSetCursor(giScreenMenu,0x66,0x0,0x0);
    }
    screenGetArea(giScreenMenu,&local_1c,0x0);
    screenGetCursor(giScreenMenu,local_1c,&local_20,&local_24);
    if (((local_1c - 0x65U < 0x3) && ((param_1 & 0x4) != 0x0)) && (giName < 0x6)) {
        screenShowImage(giScreenMenu,0x190);
        screenSetImagePosition(giScreenMenu,0x190,giName * 0x10 + 0x4c,0x22);
    }
    else {
        screenHideImage(giScreenMenu,0x190);
    }
    screenShowImage(giScreenMenu,0x12c);
    screenSetImagePosition(giScreenMenu,0x12c,0x19,iVar1 * 0x1e + 0x40);
    if (local_1c == 0x64) {
        uVar3 = param_1 >> 0x3 & 0x1;
    }
    else {
        uVar3 = 0x0;
    }
    screenSetFrame(giScreenMenu,0x12c,uVar3 + iVar1 * 0x2);
    if ((local_1c == 0x67) && ((param_1 & 0x8) != 0x0)) {
        screenShowImage(giScreenMenu,0x136);
        screenSetImagePosition(giScreenMenu,0x136,0xfe,local_24 * 0x1c + 0x44);
        screenSetFrame(giScreenMenu,0x136,local_24);
    }
    else {
        screenHideImage(giScreenMenu,0x136);
    }
    if (*piVar5 == 0x22) {
        iVar2 = 0x0;
        for (puVar4 = ganName; *(short *)puVar4 != 0x0; puVar4 = (undefined1 *)((int)puVar4 + 0x2))
        {
            if (((uint)(int)*(short *)puVar4 >> 0xa & 0x3f) != 0x0) {
                iVar2 = -0x1;
            }
        }
        if (iVar2 == 0x0) {
            PlaySE(SFX_INIT_TABLE,0x7);
        }
        else {
            if (local_1c != 0x67) {
                local_1c = 0x67;
                screenSetArea(giScreenMenu,0x67,param_2);
            }
            local_20 = 0x0;
            local_24 = 0x1;
            screenSetCursor(giScreenMenu,0x67,0x0,0x1);
            *piVar5 = 0x20;
        }
    }
    iVar2 = -0x1;
    if (*piVar5 == 0x21) {
        iVar2 = 0x0;
        if (local_1c == 0x67) {
            if (giName < 0x1) {
                iVar1 = 0x0;
            }
            else {
                giName += -0x1;
                *(undefined2 *)(ganName + giName * 0x2) = 0x0;
                screenSetText(giScreenMenu,0x64,ganName);
                PlaySE(SFX_INIT_TABLE,0x102);
                iVar1 = -0x1;
            }
            if (iVar1 == 0x0) {
                if (gnCountMenu == 0x1) {
                    gMain = 0x1f4;
                    gReset = 0xffffffff;
                }
                else if ((gnCountMenu < 0x2) ||
                        (iVar1 = menuSetScreen(*(undefined4 *)(ganPick + gnCountMenu * 0x4 + 0xc),
                                               0xffffffff), iVar1 == 0x0)) {
                    unaff_r30 = 0x0;
                }
                else {
                    unaff_r30 = -0x1;
                    gnCountMenu += -0x1;
                }
                if (unaff_r30 != 0x0) {
                    PlaySE(SFX_INIT_TABLE,0x6);
                }
            }
        }
        else if (local_1c < 0x67) {
            if (local_1c == 0x64) {
                if (gnCountMenu == 0x1) {
                    gMain = 0x1f4;
                    gReset = 0xffffffff;
                }
                else if ((gnCountMenu < 0x2) ||
                        (iVar1 = menuSetScreen(*(undefined4 *)(ganPick + gnCountMenu * 0x4 + 0xc),
                                               0xffffffff), iVar1 == 0x0)) {
                    unaff_r30 = 0x0;
                }
                else {
                    unaff_r30 = -0x1;
                    gnCountMenu += -0x1;
                }
                if (unaff_r30 != 0x0) {
                    PlaySE(SFX_INIT_TABLE,0x6);
                }
            }
            else if (0x63 < local_1c) {
                if (giName < 0x1) {
                    iVar1 = 0x0;
                }
                else {
                    giName += -0x1;
                    *(undefined2 *)(ganName + giName * 0x2) = 0x0;
                    screenSetText(giScreenMenu,0x64,ganName);
                    PlaySE(SFX_INIT_TABLE,0x102);
                    iVar1 = -0x1;
                }
                if (iVar1 == 0x0) {
                    *piVar5 = 0x0;
                    local_1c = 0x64;
                    screenSetArea(giScreenMenu,0x64,param_2);
                }
            }
        }
    }
    else if (*piVar5 == 0x20) {
        iVar2 = 0x0;
        if (local_1c == 0x66) {
            menuNameAdd(iVar1,local_20 + 0x5,local_24);
        }
        else if (local_1c < 0x66) {
            if (local_1c == 0x64) {
                *piVar5 = 0x4;
                iVar2 = -0x1;
            }
            else if (0x63 < local_1c) {
                menuNameAdd(iVar1,local_20,local_24);
            }
        }
        else if (local_1c < 0x68) {
            if (local_24 == 0x1) {
                iVar1 = 0x0;
                for (puVar4 = ganName; *(short *)puVar4 != 0x0;
                    puVar4 = (undefined1 *)((int)puVar4 + 0x2)) {
                    if (((uint)(int)*(short *)puVar4 >> 0xa & 0x3f) != 0x0) {
                        iVar1 = -0x1;
                    }
                }
                if (iVar1 == 0x0) {
                    PlaySE(SFX_INIT_TABLE,0x7);
                }
                else {
                    screenSetTextField(giScreenMenu,0x1fe,ganName);
                    if (param_2 < 0x4) {
                        gnTagDialog = 0x1fe;
                        giPlayerDialog = param_2;
                        screenShowDialog(giScreenMenu,0x1fe);
                        gnTickCountDialog = 0x0;
                    }
                    screenSetDialogButton(giScreenMenu,0x1fe,0x1);
                    PlaySE(SFX_INIT_TABLE,0x8);
                }
            }
            else {
                if (giName < 0x1) {
                    iVar1 = 0x0;
                }
                else {
                    giName += -0x1;
                    *(undefined2 *)(ganName + giName * 0x2) = 0x0;
                    screenSetText(giScreenMenu,0x64,ganName);
                    PlaySE(SFX_INIT_TABLE,0x102);
                    iVar1 = -0x1;
                }
                if (iVar1 == 0x0) {
                    PlaySE(SFX_INIT_TABLE,0x6);
                    if (gnCountMenu == 0x1) {
                        gMain = 0x1f4;
                        gReset = 0xffffffff;
                    }
                    else if ((gnCountMenu < 0x2) ||
                            (iVar1 = menuSetScreen(*(undefined4 *)
                                                    (ganPick + gnCountMenu * 0x4 + 0xc),0xffffffff),
                            iVar1 == 0x0)) {
                        unaff_r30 = 0x0;
                    }
                    else {
                        unaff_r30 = -0x1;
                        gnCountMenu += -0x1;
                    }
                    if (unaff_r30 == 0x0) {
                        iVar2 = 0x0;
                    }
                }
            }
        }
    }
    if (iVar2 == 0x0) {
        *piVar5 = 0x0;
    }
    return;
}



void menuShowRecords(undefined4 param_1)

{
    short sVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    int local_24;
    undefined auStack_20 [0x4];
    int local_1c;
    
    iVar3 = 0x2a16c8;
    iVar5 = 0x0;
    iVar2 = gaiName._0_4_ + -0x1;
    if (0x1 < gaiName._0_4_) {
        do {
            if (*(short *)(iVar3 + 0x1d68a) != 0x0) {
                iVar5 += 0x1;
            }
            iVar3 += 0x880;
            iVar2 += -0x1;
        } while (iVar2 != 0x0);
    }
    uVar4 = (uint)(gTheGame._122634_2_ != 0x0);
    if (gTheGame._124810_2_ != 0x0) {
        uVar4 += 0x1;
    }
    if (gTheGame._126986_2_ != 0x0) {
        uVar4 += 0x1;
    }
    if (gTheGame._129162_2_ != 0x0) {
        uVar4 += 0x1;
    }
    if (gTheGame._131338_2_ != 0x0) {
        uVar4 += 0x1;
    }
    if (gTheGame._133514_2_ != 0x0) {
        uVar4 += 0x1;
    }
    if (gTheGame._135690_2_ != 0x0) {
        uVar4 += 0x1;
    }
    iVar2 = screenGetArea(giScreenMenu,&local_24,0x0);
    if (iVar2 == 0x0) {
        screenHideText(giScreenMenu,0x81f3806e);
        screenHideImage(giScreenMenu,0x81f3812c);
        return;
    }
    screenGetCursor(giScreenMenu,local_24,&local_1c,auStack_20);
    if (local_24 != 0x64) {
        if (local_24 != 0x65) {
            return;
        }
        screenHideText(giScreenMenu,0x808b806e);
        screenHideText(giScreenMenu,0x81958190);
        screenHideText(giScreenMenu,0x819f819a);
        screenHideText(giScreenMenu,0x808d808c);
        screenHideText(giScreenMenu,0x80978096);
        screenHideImage(giScreenMenu,0x8149812c);
        screenShowImage(giScreenMenu,0x8167815e);
        screenSetImagePosition(giScreenMenu,0x15f,0x50,(iVar5 + 0x1) * 0x15 + 0x31);
        screenSetImagePosition(giScreenMenu,0x160,(iVar5 + 0x1) * 0x19 + 0x50,0x31);
        screenHideText(giScreenMenu,0x818f80c8);
        screenShowText(giScreenMenu,(uVar4 + 0xd1) * 0x10000 | 0x800080d2);
        screenShowText(giScreenMenu,(uVar4 + 0xc7) * 0x10000 | 0x800080c8);
        iVar3 = 0xdb;
        uVar6 = 0xdc;
        for (iVar2 = 0x0; iVar2 < (int)uVar4; iVar2 += 0x1) {
            screenShowText(giScreenMenu,uVar6 | (iVar3 + (uVar4 - 0x1) * 0x2) * 0x10000 | 0x80008000
                          );
            iVar3 += 0x14;
            uVar6 += 0x14;
        }
        return;
    }
    screenHideImage(giScreenMenu,0x8167815e);
    screenShowText(giScreenMenu,0x808b806e);
    screenHideText(giScreenMenu,0x818f80c8);
    if (local_1c == 0x0) {
        screenHideImage(giScreenMenu,0x14a);
        screenShowImage(giScreenMenu,0x8149812c);
        screenShowImage(giScreenMenu,0x815d8154);
        screenShowText(giScreenMenu,0x8075806e);
        screenShowText(giScreenMenu,0x808d808c);
        screenHideText(giScreenMenu,0x807f8078);
        screenHideText(giScreenMenu,0x80978096);
        screenShowText(giScreenMenu,0x81958190);
        screenShowText(giScreenMenu,0x819f819a);
        screenSetImagePosition(giScreenMenu,0x154,0x78,0xcb);
        screenSetImagePosition(giScreenMenu,0x155,0xdf,0xcb);
        if (gaiName._0_4_ < 0x1) goto LAB_0007f9dc;
        iVar2 = gaiName._0_4_ * 0x880;
        sVar1 = *(short *)(gTheGame + iVar2 + 0x1d80e);
        if (sVar1 == 0xbe) {
LAB_0007f8f4:
            iVar3 = 0x1;
        }
        else {
            if (0xbd < sVar1) {
                if ((sVar1 != 0xe6) && ((0xe5 < sVar1 || (sVar1 != 0xc8)))) goto LAB_0007f90c;
                goto LAB_0007f8f4;
            }
            if (sVar1 == 0x96) {
                iVar3 = 0x3;
            }
            else if (sVar1 < 0x96) {
                if (sVar1 == 0x8c) {
                    iVar3 = 0x0;
                }
                else {
LAB_0007f90c:
                    iVar3 = -0x1;
                }
            }
            else {
                if (sVar1 != 0xaa) goto LAB_0007f90c;
                iVar3 = 0x2;
            }
        }
        if (iVar3 == -0x1) {
            screenHideImage(param_1,0x154);
        }
        else {
            screenSetFrame(param_1,0x154);
        }
        sVar1 = *(short *)(gTheGame + iVar2 + 0x1d812);
        if (sVar1 == 0xbe) {
LAB_0007f99c:
            iVar2 = 0x1;
        }
        else {
            if (0xbd < sVar1) {
                if ((sVar1 != 0xe6) && ((0xe5 < sVar1 || (sVar1 != 0xc8)))) goto LAB_0007f9b4;
                goto LAB_0007f99c;
            }
            if (sVar1 == 0x96) {
                iVar2 = 0x3;
            }
            else if (sVar1 < 0x96) {
                if (sVar1 == 0x8c) {
                    iVar2 = 0x0;
                }
                else {
LAB_0007f9b4:
                    iVar2 = -0x1;
                }
            }
            else {
                if (sVar1 != 0xaa) goto LAB_0007f9b4;
                iVar2 = 0x2;
            }
        }
        if (iVar2 == -0x1) {
            screenHideImage(param_1,0x155);
        }
        else {
            screenSetFrame(param_1,0x155);
        }
LAB_0007f9dc:
        iVar2 = menuTestPuzzleStage(0x1);
        if (iVar2 == 0x0) {
            screenSetTextPosition(giScreenMenu,0x190,0x9c,0x79);
            screenSetImagePosition(giScreenMenu,0x136,0x96,0x71);
            screenSetTextPosition(giScreenMenu,0x191,0xea,0x79);
            screenSetImagePosition(giScreenMenu,0x137,0xe4,0x71);
            screenHideText(giScreenMenu,0x81958192);
            screenHideImage(giScreenMenu,0x813b8138);
        }
        else {
            iVar2 = menuTestPuzzleStage(0x2);
            if (iVar2 == 0x0) {
                screenSetTextPosition(giScreenMenu,0x190,0xb6,0x79);
                screenSetImagePosition(giScreenMenu,0x136,0xb0,0x71);
                screenSetTextPosition(giScreenMenu,0x191,0xd0,0x79);
                screenSetImagePosition(giScreenMenu,0x137,0xca,0x71);
                screenSetTextPosition(giScreenMenu,0x192,0xea,0x79);
                screenSetImagePosition(giScreenMenu,0x138,0xe4,0x71);
                screenHideText(giScreenMenu,0x81958193);
                screenHideImage(giScreenMenu,0x813b8139);
            }
            else {
                iVar2 = menuTestPuzzleStage(0x3);
                if ((iVar2 == 0x0) || (iVar2 = menuTestPuzzleStage(0x4), iVar2 == 0x0)) {
                    screenSetTextPosition(giScreenMenu,0x190,0x9c,0x79);
                    screenSetImagePosition(giScreenMenu,0x136,0x96,0x71);
                    screenSetTextPosition(giScreenMenu,0x191,0xb6,0x79);
                    screenSetImagePosition(giScreenMenu,0x137,0xb0,0x71);
                    screenSetTextPosition(giScreenMenu,0x192,0xd0,0x79);
                    screenSetImagePosition(giScreenMenu,0x138,0xca,0x71);
                    screenSetTextPosition(giScreenMenu,0x193,0xea,0x79);
                    screenSetImagePosition(giScreenMenu,0x139,0xe4,0x71);
                    screenSetTextPosition(giScreenMenu,0x194,0x104,0x79);
                    screenSetImagePosition(giScreenMenu,0x13a,0xfe,0x71);
                    screenHideText(giScreenMenu,0x81958195);
                    screenHideImage(giScreenMenu,0x813b813b);
                }
                else {
                    screenSetTextPosition(giScreenMenu,0x190,0x82,0x79);
                    screenSetImagePosition(giScreenMenu,0x136,0x7c,0x71);
                    screenSetTextPosition(giScreenMenu,0x191,0x9c,0x79);
                    screenSetImagePosition(giScreenMenu,0x137,0x96,0x71);
                    screenSetTextPosition(giScreenMenu,0x192,0xb6,0x79);
                    screenSetImagePosition(giScreenMenu,0x138,0xb0,0x71);
                    screenSetTextPosition(giScreenMenu,0x193,0xd0,0x79);
                    screenSetImagePosition(giScreenMenu,0x139,0xca,0x71);
                    screenSetTextPosition(giScreenMenu,0x194,0xea,0x79);
                    screenSetImagePosition(giScreenMenu,0x13a,0xe4,0x71);
                    screenSetTextPosition(giScreenMenu,0x195,0x104,0x79);
                    screenSetImagePosition(giScreenMenu,0x13b,0xfe,0x71);
                }
            }
        }
        if (gbOpenTitle == 0x0) {
            if ((gnCheatMenu & 0x6) == 0x0) {
                iVar2 = 0x0;
            }
            else {
                iVar2 = -0x1;
            }
        }
        else {
            iVar2 = -0x1;
        }
        if (iVar2 == 0x0) {
            screenSetTextPosition(giScreenMenu,0x19a,0xa9,0xa2);
            screenSetImagePosition(giScreenMenu,0x140,0x97,0x86);
            screenSetImagePosition(giScreenMenu,0x141,0x97,0xa8);
            screenSetTextPosition(giScreenMenu,0x19b,0xd7,0xa2);
            screenSetImagePosition(giScreenMenu,0x142,0xc5,0x86);
            screenSetImagePosition(giScreenMenu,0x143,0xc5,0xa8);
            screenSetTextPosition(giScreenMenu,0x19c,0x105,0xa2);
            screenSetImagePosition(giScreenMenu,0x144,0xf3,0x86);
            screenSetImagePosition(giScreenMenu,0x145,0xf3,0xa8);
            screenHideText(giScreenMenu,0x819e819d);
            screenHideImage(giScreenMenu,0x81498146);
            return;
        }
        if (gbOpenTitle == 0x0) {
            if ((gnCheatMenu & 0x4) == 0x0) {
                iVar2 = 0x0;
            }
            else {
                iVar2 = -0x1;
            }
        }
        else {
            iVar2 = -0x1;
        }
        if (iVar2 == 0x0) {
            screenSetTextPosition(giScreenMenu,0x19a,0xa6,0xa2);
            screenSetImagePosition(giScreenMenu,0x140,0x94,0x86);
            screenSetImagePosition(giScreenMenu,0x141,0x94,0xa8);
            screenSetTextPosition(giScreenMenu,0x19b,0xc6,0xa2);
            screenSetImagePosition(giScreenMenu,0x142,0xb4,0x86);
            screenSetImagePosition(giScreenMenu,0x143,0xb4,0xa8);
            screenSetTextPosition(giScreenMenu,0x19c,0xe6,0xa2);
            screenSetImagePosition(giScreenMenu,0x144,0xd4,0x86);
            screenSetImagePosition(giScreenMenu,0x145,0xd4,0xa8);
            screenSetTextPosition(giScreenMenu,0x19d,0x106,0xa2);
            screenSetImagePosition(giScreenMenu,0x146,0xf4,0x86);
            screenSetImagePosition(giScreenMenu,0x147,0xf4,0xa8);
            screenHideText(giScreenMenu,0x819e819e);
            screenHideImage(giScreenMenu,0x81498148);
            return;
        }
        screenSetTextPosition(giScreenMenu,0x19a,0x9f,0xa2);
        screenSetImagePosition(giScreenMenu,0x140,0x8d,0x86);
        screenSetImagePosition(giScreenMenu,0x141,0x8d,0xa8);
        screenSetTextPosition(giScreenMenu,0x19b,0xbb,0xa2);
        screenSetImagePosition(giScreenMenu,0x142,0xa9,0x86);
        screenSetImagePosition(giScreenMenu,0x143,0xa9,0xa8);
        screenSetTextPosition(giScreenMenu,0x19c,0xd7,0xa2);
        screenSetImagePosition(giScreenMenu,0x144,0xc5,0x86);
        screenSetImagePosition(giScreenMenu,0x145,0xc5,0xa8);
        screenSetTextPosition(giScreenMenu,0x19d,0xf3,0xa2);
        screenSetImagePosition(giScreenMenu,0x146,0xe1,0x86);
        screenSetImagePosition(giScreenMenu,0x147,0xe1,0xa8);
        screenSetTextPosition(giScreenMenu,0x19e,0x10f,0xa2);
        screenSetImagePosition(giScreenMenu,0x148,0xfd,0x86);
        screenSetImagePosition(giScreenMenu,0x149,0xfd,0xa8);
        return;
    }
    screenShowImage(giScreenMenu,0x14a);
    screenHideImage(giScreenMenu,0x8149812c);
    screenShowImage(giScreenMenu,0x815d8154);
    screenHideText(giScreenMenu,0x8075806e);
    screenHideText(giScreenMenu,0x808d808c);
    screenShowText(giScreenMenu,0x807f8078);
    screenShowText(giScreenMenu,0x80978096);
    screenHideText(giScreenMenu,0x81958190);
    screenHideText(giScreenMenu,0x819f819a);
    screenSetImagePosition(giScreenMenu,0x154,0x78,0xc7);
    screenSetImagePosition(giScreenMenu,0x155,0xdf,0xc7);
    if (gaiName._0_4_ < 0x1) {
        return;
    }
    iVar2 = gaiName._0_4_ * 0x880;
    sVar1 = *(short *)(gTheGame + iVar2 + 0x1d816);
    if (sVar1 == 0xbe) {
LAB_000801b8:
        iVar3 = 0x1;
    }
    else {
        if (0xbd < sVar1) {
            if ((sVar1 != 0xe6) && ((0xe5 < sVar1 || (sVar1 != 0xc8)))) goto LAB_000801d0;
            goto LAB_000801b8;
        }
        if (sVar1 == 0x96) {
            iVar3 = 0x3;
        }
        else if (sVar1 < 0x96) {
            if (sVar1 == 0x8c) {
                iVar3 = 0x0;
            }
            else {
LAB_000801d0:
                iVar3 = -0x1;
            }
        }
        else {
            if (sVar1 != 0xaa) goto LAB_000801d0;
            iVar3 = 0x2;
        }
    }
    if (iVar3 == -0x1) {
        screenHideImage(param_1,0x154);
    }
    else {
        screenSetFrame(param_1,0x154);
    }
    sVar1 = *(short *)(gTheGame + iVar2 + 0x1d81a);
    if (sVar1 == 0xbe) {
LAB_0008025c:
        iVar2 = 0x1;
    }
    else {
        if (sVar1 < 0xbe) {
            if (sVar1 == 0x96) {
                iVar2 = 0x3;
                goto LAB_00080278;
            }
            if (sVar1 < 0x96) {
                if (sVar1 == 0x8c) {
                    iVar2 = 0x0;
                    goto LAB_00080278;
                }
            }
            else if (sVar1 == 0xaa) {
                iVar2 = 0x2;
                goto LAB_00080278;
            }
        }
        else if ((sVar1 == 0xe6) || ((sVar1 < 0xe6 && (sVar1 == 0xc8)))) goto LAB_0008025c;
        iVar2 = -0x1;
    }
LAB_00080278:
    if (iVar2 == -0x1) {
        screenHideImage(param_1,0x155);
    }
    else {
        screenSetFrame(param_1,0x155);
    }
    return;
}



undefined4 menuFindRank(int *param_1,int param_2,int param_3)

{
    undefined4 uVar1;
    int *piVar2;
    int iVar3;
    int *piVar4;
    int iVar5;
    int iVar6;
    int aiStack_44 [0x9];
    int local_20 [0x8];
    
    if ((param_2 < 0x0) || (0x7 < param_2)) {
        uVar1 = 0x0;
    }
    else {
        piVar4 = aiStack_44 + 0x1;
        iVar6 = 0x7;
        iVar3 = 0x2a16c8;
        iVar5 = 0x1;
        piVar2 = piVar4;
        do {
            *piVar2 = iVar5;
            if (param_3 == 0x3) {
                piVar2[0x8] = *(int *)(iVar3 + 0x1d6a4);
            }
            else if (param_3 < 0x3) {
                if (param_3 == 0x1) {
                    piVar2[0x8] = *(int *)(iVar3 + 0x1d69c);
                }
                else if (param_3 < 0x1) {
                    if (-0x1 < param_3) {
                        piVar2[0x8] = *(int *)(iVar3 + 0x1d698);
                    }
                }
                else {
                    piVar2[0x8] = *(int *)(iVar3 + 0x1d6a0);
                }
            }
            else if (param_3 == 0x5) {
                piVar2[0x8] = (int)*(char *)(iVar3 + 0x1d746) +
                              *(char *)(iVar3 + 0x1d745) * 0x3c + *(char *)(iVar3 + 0x1d744) * 0x4b0
                ;
                if (piVar2[0x8] == 0x0) {
                    piVar2[0x8] = 0x7fffffff;
                }
            }
            else if ((param_3 < 0x5) &&
                    (piVar2[0x8] = (int)*(char *)(iVar3 + 0x1d6ba) +
                                   *(char *)(iVar3 + 0x1d6b9) * 0x3c +
                                   *(char *)(iVar3 + 0x1d6b8) * 0x4b0, piVar2[0x8] == 0x0)) {
                piVar2[0x8] = 0x7fffffff;
            }
            piVar2 = piVar2 + 0x1;
            iVar3 += 0x880;
            iVar5 += 0x1;
            iVar6 += -0x1;
        } while (iVar6 != 0x0);
        iVar3 = 0x1;
        do {
            iVar6 = iVar3 + 0x1;
            iVar5 = 0x8 - iVar6;
            piVar2 = aiStack_44 + iVar6;
            if (iVar6 < 0x8) {
                do {
                    if (param_3 - 0x4U < 0x2) {
                        if (piVar2[0x8] < piVar4[0x8]) {
                            iVar6 = -0x1;
                        }
                        else {
                            iVar6 = 0x0;
                        }
                    }
                    else if (piVar4[0x8] < piVar2[0x8]) {
                        iVar6 = -0x1;
                    }
                    else {
                        iVar6 = 0x0;
                    }
                    if (iVar6 != 0x0) {
                        iVar6 = *piVar4;
                        *piVar4 = *piVar2;
                        *piVar2 = iVar6;
                        iVar6 = piVar4[0x8];
                        piVar4[0x8] = piVar2[0x8];
                        piVar2[0x8] = iVar6;
                    }
                    piVar2 = piVar2 + 0x1;
                    iVar5 += -0x1;
                } while (iVar5 != 0x0);
            }
            iVar3 += 0x1;
            piVar4 = piVar4 + 0x1;
        } while (iVar3 < 0x7);
        iVar6 = 0x0;
        iVar5 = 0x1;
        piVar2 = aiStack_44;
        for (iVar3 = 0x1; (param_2 != piVar2[0x1] && (iVar3 < 0x8)); iVar3 += 0x1) {
            if ((iVar3 == 0x7) || (piVar2[0x9] != piVar2[0xa])) {
                iVar5 = iVar6 + iVar5;
                iVar6 = 0x0;
                iVar5 += 0x1;
            }
            else {
                iVar6 += 0x1;
            }
            piVar2 = piVar2 + 0x1;
        }
        *param_1 = iVar5;
        uVar1 = 0xffffffff;
    }
    return uVar1;
}



void menuUpdateRecords(undefined4 param_1)

{
    char cVar1;
    int iVar2;
    undefined1 *puVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int local_64;
    int local_60;
    int local_5c;
    int local_58;
    undefined2 local_54 [0xc];
    
    iVar4 = gaiName._0_4_;
    iVar12 = 0x0;
    iVar11 = 0x0;
    if ((-0x1 < gaiName._0_4_) && (gaiName._0_4_ < 0x8)) {
        iVar2 = gaiName._0_4_ * 0x880;
        iVar10 = iVar2 + 0x2be4d0;
        screenSetText(param_1,0x64,iVar2 + 0x2be4d2);
        local_58 = *(int *)(gTheGame + iVar2 + 0x1d698);
        screenSetNumber(param_1,0x6e,local_58,0x0);
        if (local_58 != 0x0) {
            menuFindRank(&local_58,iVar4,0x0);
        }
        screenSetNumber(param_1,0x6f,local_58,0x0);
        local_58 = *(int *)(gTheGame + iVar2 + 0x1d69c);
        screenSetNumber(param_1,0x78,local_58,0x0);
        if (local_58 != 0x0) {
            menuFindRank(&local_58,iVar4,0x1);
        }
        screenSetNumber(param_1,0x79,local_58,0x0);
        local_58 = *(int *)(gTheGame + iVar2 + 0x1d6a0);
        screenSetNumber(param_1,0x70,local_58,0x0);
        if (local_58 != 0x0) {
            menuFindRank(&local_58,iVar4,0x2);
        }
        screenSetNumber(param_1,0x71,local_58,0x0);
        local_58 = *(int *)(gTheGame + iVar2 + 0x1d6a4);
        screenSetNumber(param_1,0x7a,local_58,0x0);
        if (local_58 != 0x0) {
            menuFindRank(&local_58,iVar4,0x3);
        }
        screenSetNumber(param_1,0x7b,local_58,0x0);
        local_58 = (int)(char)gTheGame[iVar2 + 0x1d6b8];
        screenSetNumber(param_1,0x72,local_58,0xffffffff);
        local_58 = (int)(char)gTheGame[iVar2 + 0x1d6b9];
        screenSetNumber(param_1,0x73,local_58,0xffffffff);
        local_58 = (int)(char)gTheGame[iVar2 + 0x1d6ba];
        screenSetNumber(param_1,0x74,local_58,0xffffffff);
        local_58 = 0x0;
        if ((int)(char)gTheGame[iVar2 + 0x1d6ba] +
            (int)(char)gTheGame[iVar2 + 0x1d6b9] + (int)(char)gTheGame[iVar2 + 0x1d6b8] != 0x0) {
            menuFindRank(&local_58,iVar4,0x4);
        }
        screenSetNumber(param_1,0x75,local_58,0x0);
        local_58 = (int)(char)gTheGame[iVar2 + 0x1d744];
        screenSetNumber(param_1,0x7c,local_58,0xffffffff);
        local_58 = (int)(char)gTheGame[iVar2 + 0x1d745];
        screenSetNumber(param_1,0x7d,local_58,0xffffffff);
        local_58 = (int)(char)gTheGame[iVar2 + 0x1d746];
        screenSetNumber(param_1,0x7e,local_58,0xffffffff);
        local_58 = 0x0;
        if ((int)(char)gTheGame[iVar2 + 0x1d746] +
            (int)(char)gTheGame[iVar2 + 0x1d745] + (int)(char)gTheGame[iVar2 + 0x1d744] != 0x0) {
            menuFindRank(&local_58,iVar4,0x5);
        }
        screenSetNumber(param_1,0x7f,local_58,0x0);
        local_58 = (int)*(short *)(gTheGame + iVar2 + 0x1d80c);
        screenSetNumber(param_1,0x8c,local_58,0x0);
        local_58 = (int)*(short *)(gTheGame + iVar2 + 0x1d810);
        screenSetNumber(param_1,0x8d,local_58,0x0);
        local_58 = (int)*(short *)(gTheGame + iVar2 + 0x1d814);
        screenSetNumber(param_1,0x96,local_58,0x0);
        local_58 = (int)*(short *)(gTheGame + iVar2 + 0x1d818);
        screenSetNumber(param_1,0x97,local_58,0x0);
        iVar13 = 0x5;
        iVar4 = 0x0;
        uVar5 = 0x0;
        do {
            if (((int)*(char *)(iVar10 + ((int)uVar5 >> 0x3) + 0x14b) & 0x1 << (uVar5 & 0x7)) != 0x0
               ) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x1) >> 0x3) + 0x14b) &
                0x1 << (uVar5 + 0x1 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x2) >> 0x3) + 0x14b) &
                0x1 << (uVar5 + 0x2 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x3) >> 0x3) + 0x14b) &
                0x1 << (uVar5 + 0x3 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x4) >> 0x3) + 0x14b) &
                0x1 << (uVar5 + 0x4 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x5) >> 0x3) + 0x14b) &
                0x1 << (uVar5 + 0x5 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x6) >> 0x3) + 0x14b) &
                0x1 << (uVar5 + 0x6 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x7) >> 0x3) + 0x14b) &
                0x1 << (uVar5 + 0x7 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x8) >> 0x3) + 0x14b) &
                0x1 << (uVar5 + 0x8 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            uVar5 += 0x9;
            iVar13 += -0x1;
        } while (iVar13 != 0x0);
        screenSetNumber(param_1,0x190,iVar4,0x0);
        iVar4 = 0x0;
        iVar13 = 0x5;
        uVar5 = 0x0;
        do {
            if (((int)*(char *)(iVar10 + ((int)uVar5 >> 0x3) + 0x151) & 0x1 << (uVar5 & 0x7)) != 0x0
               ) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x1) >> 0x3) + 0x151) &
                0x1 << (uVar5 + 0x1 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x2) >> 0x3) + 0x151) &
                0x1 << (uVar5 + 0x2 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x3) >> 0x3) + 0x151) &
                0x1 << (uVar5 + 0x3 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x4) >> 0x3) + 0x151) &
                0x1 << (uVar5 + 0x4 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x5) >> 0x3) + 0x151) &
                0x1 << (uVar5 + 0x5 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x6) >> 0x3) + 0x151) &
                0x1 << (uVar5 + 0x6 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x7) >> 0x3) + 0x151) &
                0x1 << (uVar5 + 0x7 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x8) >> 0x3) + 0x151) &
                0x1 << (uVar5 + 0x8 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            uVar5 += 0x9;
            iVar13 += -0x1;
        } while (iVar13 != 0x0);
        screenSetNumber(param_1,0x191,iVar4,0x0);
        iVar4 = 0x0;
        iVar13 = 0x5;
        uVar5 = 0x0;
        do {
            if (((int)*(char *)(iVar10 + ((int)uVar5 >> 0x3) + 0x169) & 0x1 << (uVar5 & 0x7)) != 0x0
               ) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x1) >> 0x3) + 0x169) &
                0x1 << (uVar5 + 0x1 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x2) >> 0x3) + 0x169) &
                0x1 << (uVar5 + 0x2 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x3) >> 0x3) + 0x169) &
                0x1 << (uVar5 + 0x3 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x4) >> 0x3) + 0x169) &
                0x1 << (uVar5 + 0x4 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x5) >> 0x3) + 0x169) &
                0x1 << (uVar5 + 0x5 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x6) >> 0x3) + 0x169) &
                0x1 << (uVar5 + 0x6 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x7) >> 0x3) + 0x169) &
                0x1 << (uVar5 + 0x7 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x8) >> 0x3) + 0x169) &
                0x1 << (uVar5 + 0x8 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            uVar5 += 0x9;
            iVar13 += -0x1;
        } while (iVar13 != 0x0);
        screenSetNumber(param_1,0x192,iVar4,0x0);
        iVar4 = 0x0;
        iVar13 = 0x5;
        uVar5 = 0x0;
        do {
            if (((int)*(char *)(iVar10 + ((int)uVar5 >> 0x3) + 0x157) & 0x1 << (uVar5 & 0x7)) != 0x0
               ) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x1) >> 0x3) + 0x157) &
                0x1 << (uVar5 + 0x1 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x2) >> 0x3) + 0x157) &
                0x1 << (uVar5 + 0x2 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x3) >> 0x3) + 0x157) &
                0x1 << (uVar5 + 0x3 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x4) >> 0x3) + 0x157) &
                0x1 << (uVar5 + 0x4 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x5) >> 0x3) + 0x157) &
                0x1 << (uVar5 + 0x5 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x6) >> 0x3) + 0x157) &
                0x1 << (uVar5 + 0x6 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x7) >> 0x3) + 0x157) &
                0x1 << (uVar5 + 0x7 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x8) >> 0x3) + 0x157) &
                0x1 << (uVar5 + 0x8 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            uVar5 += 0x9;
            iVar13 += -0x1;
        } while (iVar13 != 0x0);
        screenSetNumber(param_1,0x193,iVar4,0x0);
        iVar4 = 0x0;
        iVar13 = 0x5;
        uVar5 = 0x0;
        do {
            if (((int)*(char *)(iVar10 + ((int)uVar5 >> 0x3) + 0x15d) & 0x1 << (uVar5 & 0x7)) != 0x0
               ) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x1) >> 0x3) + 0x15d) &
                0x1 << (uVar5 + 0x1 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x2) >> 0x3) + 0x15d) &
                0x1 << (uVar5 + 0x2 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x3) >> 0x3) + 0x15d) &
                0x1 << (uVar5 + 0x3 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x4) >> 0x3) + 0x15d) &
                0x1 << (uVar5 + 0x4 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x5) >> 0x3) + 0x15d) &
                0x1 << (uVar5 + 0x5 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x6) >> 0x3) + 0x15d) &
                0x1 << (uVar5 + 0x6 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x7) >> 0x3) + 0x15d) &
                0x1 << (uVar5 + 0x7 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x8) >> 0x3) + 0x15d) &
                0x1 << (uVar5 + 0x8 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            uVar5 += 0x9;
            iVar13 += -0x1;
        } while (iVar13 != 0x0);
        screenSetNumber(param_1,0x194,iVar4,0x0);
        iVar4 = 0x0;
        iVar13 = 0x5;
        uVar5 = 0x0;
        do {
            if (((int)*(char *)(iVar10 + ((int)uVar5 >> 0x3) + 0x163) & 0x1 << (uVar5 & 0x7)) != 0x0
               ) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x1) >> 0x3) + 0x163) &
                0x1 << (uVar5 + 0x1 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x2) >> 0x3) + 0x163) &
                0x1 << (uVar5 + 0x2 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x3) >> 0x3) + 0x163) &
                0x1 << (uVar5 + 0x3 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x4) >> 0x3) + 0x163) &
                0x1 << (uVar5 + 0x4 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x5) >> 0x3) + 0x163) &
                0x1 << (uVar5 + 0x5 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x6) >> 0x3) + 0x163) &
                0x1 << (uVar5 + 0x6 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x7) >> 0x3) + 0x163) &
                0x1 << (uVar5 + 0x7 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            if (((int)*(char *)(iVar10 + ((int)(uVar5 + 0x8) >> 0x3) + 0x163) &
                0x1 << (uVar5 + 0x8 & 0x7)) != 0x0) {
                iVar4 += 0x1;
            }
            uVar5 += 0x9;
            iVar13 += -0x1;
        } while (iVar13 != 0x0);
        screenSetNumber(param_1,0x195,iVar4,0x0);
        cVar1 = gTheGame[iVar2 + 0x1d7fc];
        iVar4 = (int)(char)gTheGame[iVar2 + 0x1d7f7];
        if (0x10 < iVar4) {
            iVar4 = 0x10;
        }
        screenSetFrame(param_1,0x140,iVar4);
        screenSetFrame(param_1,0x141,0x0);
        screenSetNumber(param_1,0x19a,(int)cVar1,0x0);
        cVar1 = gTheGame[iVar2 + 0x1d7fd];
        iVar4 = (int)(char)gTheGame[iVar2 + 0x1d7f8];
        if (0x10 < iVar4) {
            iVar4 = 0x10;
        }
        screenSetFrame(param_1,0x142,iVar4);
        screenSetFrame(param_1,0x143,0x1);
        screenSetNumber(param_1,0x19b,(int)cVar1,0x0);
        cVar1 = gTheGame[iVar2 + 0x1d7fe];
        iVar4 = (int)(char)gTheGame[iVar2 + 0x1d7f9];
        if (0x10 < iVar4) {
            iVar4 = 0x10;
        }
        screenSetFrame(param_1,0x144,iVar4);
        screenSetFrame(param_1,0x145,0x2);
        screenSetNumber(param_1,0x19c,(int)cVar1,0x0);
        cVar1 = gTheGame[iVar2 + 0x1d7ff];
        iVar4 = (int)(char)gTheGame[iVar2 + 0x1d7fa];
        if (0x10 < iVar4) {
            iVar4 = 0x10;
        }
        screenSetFrame(param_1,0x146,iVar4);
        screenSetFrame(param_1,0x147,0x3);
        screenSetNumber(param_1,0x19d,(int)cVar1,0x0);
        cVar1 = gTheGame[iVar2 + 0x1d800];
        iVar4 = (int)(char)gTheGame[iVar2 + 0x1d7fb];
        if (0x10 < iVar4) {
            iVar4 = 0x10;
        }
        screenSetFrame(param_1,0x148,iVar4);
        screenSetFrame(param_1,0x149,0x4);
        screenSetNumber(param_1,0x19e,(int)cVar1,0x0);
        local_54[0] = 0x0;
        iVar4 = 0x0;
        do {
            screenSetText(param_1,iVar4 + 0xd2,local_54);
            screenSetText(param_1,iVar4 + 0xc8,local_54);
            iVar4 += 0x1;
        } while (iVar4 < 0x7);
        iVar4 = 0x2a16c8;
        iVar10 = 0x0;
        iVar2 = 0x1;
        do {
            if (*(short *)(iVar4 + 0x1d68a) != 0x0) {
                screenSetText(param_1,iVar10 + 0xd2,iVar4 + 0x1d68a);
                screenSetText(param_1,iVar10 + 0xc8,iVar4 + 0x1d68a);
                iVar10 += 0x1;
            }
            iVar2 += 0x1;
            iVar4 += 0x880;
        } while (iVar2 < 0x8);
        uVar5 = (uint)(gTheGame._122634_2_ != 0x0);
        if (gTheGame._124810_2_ != 0x0) {
            uVar5 += 0x1;
        }
        if (gTheGame._126986_2_ != 0x0) {
            uVar5 += 0x1;
        }
        if (gTheGame._129162_2_ != 0x0) {
            uVar5 += 0x1;
        }
        if (gTheGame._131338_2_ != 0x0) {
            uVar5 += 0x1;
        }
        if (gTheGame._133514_2_ != 0x0) {
            uVar5 += 0x1;
        }
        if (gTheGame._135690_2_ != 0x0) {
            uVar5 += 0x1;
        }
        if (0x7 < uVar5) {
            uVar5 = 0x7;
        }
        screenGetArea(giScreenMenu,&local_5c,0x0);
        screenGetCursor(giScreenMenu,local_5c,&local_60,&local_64);
        if (local_60 == 0x1) {
            iVar4 = -0x1;
        }
        else {
            iVar4 = 0x0;
        }
        iVar10 = 0x1;
        iVar2 = 0x880;
        uVar8 = 0x0;
        iVar13 = 0xdc;
        do {
            if (0x7 < iVar10) {
                return;
            }
            for (puVar3 = gTheGame + iVar2; *(short *)(puVar3 + 0x1d68a) == 0x0;
                puVar3 = puVar3 + 0x880) {
                iVar10 += 0x1;
                iVar2 += 0x880;
            }
            iVar9 = 0x1;
            iVar6 = 0x880;
            uVar7 = 0x0;
            local_5c = iVar13;
            do {
                if (0x7 < iVar9) break;
                for (puVar3 = gTheGame + iVar6; *(short *)(puVar3 + 0x1d68a) == 0x0;
                    puVar3 = puVar3 + 0x880) {
                    iVar9 += 0x1;
                    iVar6 += 0x880;
                }
                if (iVar9 != iVar10) {
                    if (local_64 == 0x1) {
                        if (iVar4 == 0x0) {
                            iVar12 = (int)(char)gTheGame[iVar9 + 0x1d83c + iVar2];
                            iVar11 = (int)(char)gTheGame[iVar6 + 0x1d83c + iVar10];
                        }
                        else {
                            iVar12 = (int)(char)gTheGame[iVar9 + 0x1d84c + iVar2];
                            iVar11 = (int)(char)gTheGame[iVar6 + 0x1d84c + iVar10];
                        }
                    }
                    else if (local_64 < 0x1) {
                        if (-0x1 < local_64) {
                            if (iVar4 == 0x0) {
                                iVar12 = (int)(char)gTheGame[iVar9 + 0x1d81c + iVar2];
                                iVar11 = (int)(char)gTheGame[iVar6 + 0x1d81c + iVar10];
                            }
                            else {
                                iVar12 = (int)(char)gTheGame[iVar9 + 0x1d82c + iVar2];
                                iVar11 = (int)(char)gTheGame[iVar6 + 0x1d82c + iVar10];
                            }
                        }
                    }
                    else if (local_64 < 0x3) {
                        if (iVar4 == 0x0) {
                            iVar12 = (int)(char)gTheGame[iVar9 + 0x1d85c + iVar2];
                            iVar11 = (int)(char)gTheGame[iVar6 + 0x1d85c + iVar10];
                        }
                        else {
                            iVar12 = (int)(char)gTheGame[iVar9 + 0x1d86c + iVar2];
                            iVar11 = (int)(char)gTheGame[iVar6 + 0x1d86c + iVar10];
                        }
                    }
                    if (0x63 < iVar12) {
                        iVar12 = 0x63;
                    }
                    if (0x63 < iVar11) {
                        iVar11 = 0x63;
                    }
                    screenSetNumber(param_1,local_5c,iVar12,0x0);
                    screenSetNumber(param_1,local_5c + 0x1,iVar11,0x0);
                    local_5c += 0x2;
                }
                uVar7 += 0x1;
                iVar9 += 0x1;
                iVar6 += 0x880;
            } while (uVar7 != uVar5);
            uVar8 += 0x1;
            iVar10 += 0x1;
            iVar2 += 0x880;
            iVar13 += 0x14;
        } while (uVar8 != uVar5);
    }
    return;
}



void menuInitRecords(undefined4 param_1)

{
    menuShowRecords();
    menuUpdateRecords(param_1);
    return;
}



void menuTickRecords(uint param_1,int param_2,int param_3)

{
    int iVar1;
    uint uVar2;
    undefined1 *puVar3;
    int *piVar4;
    int local_2c;
    int local_28;
    int local_24;
    int local_20 [0x3];
    
    iVar1 = screenGetImage(giScreenMenu,0x15f,local_20);
    if (iVar1 != 0x0) {
        if ((param_1 & 0x20) == 0x0) {
            uVar2 = param_1 & 0x1f;
        }
        else {
            uVar2 = 0x1f - (param_1 & 0x1f);
        }
        *(uint *)(local_20[0] + 0x14) = uVar2 + 0x60;
    }
    iVar1 = screenGetImage(giScreenMenu,0x160,local_20);
    if (iVar1 != 0x0) {
        if ((param_1 & 0x20) == 0x0) {
            param_1 &= 0x1f;
        }
        else {
            param_1 = 0x1f - (param_1 & 0x1f);
        }
        *(uint *)(local_20[0] + 0x14) = param_1 + 0x60;
    }
    screenGetArea(giScreenMenu,&local_24,0x0);
    screenGetCursor(giScreenMenu,local_24,&local_28,&local_2c);
    if (((local_24 != nTagLast_2925) || (local_28 != iCursorLastX_2926)) ||
       (local_2c != iCursorLastY_2927)) {
        nTagLast_2925 = local_24;
        iCursorLastX_2926 = local_28;
        iCursorLastY_2927 = local_2c;
        menuShowRecords(giScreenMenu);
        menuUpdateRecords(giScreenMenu);
    }
    piVar4 = (int *)(param_3 + param_2 * 0x4);
    if (*piVar4 == 0x18) {
        iVar1 = gaiName._0_4_ + -0x1;
        for (puVar3 = gTheGame + iVar1 * 0x880;
            (0x0 < iVar1 && (*(short *)(puVar3 + 0x1d68a) == 0x0)); puVar3 = puVar3 + -0x880) {
            iVar1 += -0x1;
        }
        if (0x0 < iVar1) {
            gaiName._0_4_ = iVar1;
            PlaySE(SFX_INIT_TABLE,0x1);
            menuShowRecords(giScreenMenu);
            menuUpdateRecords(giScreenMenu);
        }
    }
    if (*piVar4 == 0x19) {
        iVar1 = gaiName._0_4_ + 0x1;
        for (puVar3 = gTheGame + iVar1 * 0x880;
            (iVar1 < 0x8 && (*(short *)(puVar3 + 0x1d68a) == 0x0)); puVar3 = puVar3 + 0x880) {
            iVar1 += 0x1;
        }
        if (iVar1 < 0x8) {
            gaiName._0_4_ = iVar1;
            PlaySE(SFX_INIT_TABLE,0x1);
            menuShowRecords(giScreenMenu);
            menuUpdateRecords(giScreenMenu);
        }
    }
    if (local_24 == 0x64) {
        screenShowImage(giScreenMenu,0x168);
        screenSetImagePosition(giScreenMenu,0x168,0x17,0x30);
        screenSetFrame(giScreenMenu,0x168,0x0);
    }
    else if (local_24 == 0x65) {
        screenShowImage(giScreenMenu,0x168);
        screenSetImagePosition(giScreenMenu,0x168,0x17,(local_2c + 0x1) * 0x2a + 0x30);
        screenSetFrame(giScreenMenu,0x168,local_2c + 0x1);
    }
    else {
        screenHideImage(giScreenMenu,0x168);
    }
    return;
}



void menuGetText(ushort *param_1,int param_2)

{
    int iVar1;
    int iVar2;
    
    iVar2 = 0x0;
    if (param_2 < 0x64) {
        *param_1 = 0x1;
    }
    else {
        iVar2 = param_2 / 0x64 + (param_2 >> 0x1f);
        iVar2 -= iVar2 >> 0x1f;
        *param_1 = (ushort)iVar2 & 0x3ff | 0x1400;
        param_2 += iVar2 * -0x64;
        iVar2 = -0x1;
    }
    if ((param_2 < 0xa) && (iVar2 == 0x0)) {
        param_1[0x1] = 0x1;
    }
    else {
        iVar1 = param_2 / 0xa + (param_2 >> 0x1f);
        iVar1 -= iVar1 >> 0x1f;
        iVar2 = iVar1;
        if (iVar1 == 0x0) {
            iVar2 = 0xa;
        }
        param_1[0x1] = (ushort)iVar2 & 0x3ff | 0x1400;
        param_2 += iVar1 * -0xa;
    }
    if (param_2 == 0x0) {
        param_2 = 0xa;
    }
    param_1[0x2] = (ushort)param_2 & 0x3ff | 0x1400;
    param_1[0x3] = 0x0;
    return;
}



void menuInitPageSettings(undefined4 param_1)

{
    undefined auStack_50 [0x4c];
    
    if ((gGameStatus & 0x4) == 0x0) {
        if ((gGameStatus & 0x8) == 0x0) {
            if ((gGameStatus & 0x10) == 0x0) {
                geMenuSignDisplay = 0x0;
            }
            else {
                geMenuSignDisplay = 0x3;
            }
        }
        else {
            geMenuSignDisplay = 0x2;
        }
    }
    else {
        geMenuSignDisplay = 0x1;
    }
    screenGetText(param_1,geMenuSignDisplay + 0xd3,auStack_50,0x20);
    screenSetTextField(param_1,0xd2,auStack_50);
    return;
}



void menuTickPageSettings(undefined4 param_1,int param_2,int param_3)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    ushort local_64;
    undefined2 local_62;
    undefined2 local_60;
    undefined2 local_5e;
    int local_24;
    undefined auStack_20 [0xc];
    
    iVar3 = 0x0;
    screenGetCursor(giScreenMenu,0x64,auStack_20,&local_24);
    if (FirstGameSetting != 0x0) {
        GameSettingState = gGameStatus;
        FirstGameSetting = 0x0;
    }
    if (local_24 == 0x2) {
        iVar1 = *(int *)(param_3 + param_2 * 0x4);
        if (((iVar1 == 0x3) && ((gGameStatus & 0x2) != 0x0)) ||
           ((iVar1 == 0x4 && ((gGameStatus & 0x2) == 0x0)))) {
            iVar3 = -0x1;
            gGameStatus ^= 0x2;
        }
    }
    else if (local_24 < 0x2) {
        if (local_24 == 0x0) {
            iVar1 = *(int *)(param_3 + param_2 * 0x4);
            if (((iVar1 == 0x3) && ((gGameStatus & 0x40) == 0x0)) ||
               ((iVar1 == 0x4 && ((gGameStatus & 0x40) != 0x0)))) {
                iVar3 = -0x1;
                gGameStatus ^= 0x40;
            }
        }
        else if (-0x1 < local_24) {
            piVar2 = (int *)(param_3 + param_2 * 0x4);
            if ((*piVar2 == 0x3) && (0x0 < geMenuSignDisplay)) {
                geMenuSignDisplay += -0x1;
                iVar3 = -0x1;
            }
            if ((*piVar2 == 0x4) && (geMenuSignDisplay < 0x3)) {
                geMenuSignDisplay += 0x1;
                iVar3 = -0x1;
            }
            if (iVar3 != 0x0) {
                gGameStatus &= 0xffe3;
                if (geMenuSignDisplay == 0x2) {
                    gGameStatus |= 0x8;
                }
                else if (geMenuSignDisplay < 0x2) {
                    if ((geMenuSignDisplay != 0x0) && (-0x1 < geMenuSignDisplay)) {
                        gGameStatus |= 0x4;
                    }
                }
                else if (geMenuSignDisplay < 0x4) {
                    gGameStatus |= 0x10;
                }
            }
        }
    }
    else if (local_24 == 0x4) {
        iVar1 = *(int *)(param_3 + param_2 * 0x4);
        if (((iVar1 == 0x3) && (gOverflowFlag != 0x0)) || ((iVar1 == 0x4 && (gOverflowFlag == 0x0)))
           ) {
            iVar3 = -0x1;
            gOverflowFlag ^= 0xffffffff;
        }
    }
    else if (local_24 < 0x4) {
        piVar2 = (int *)(param_3 + param_2 * 0x4);
        if ((*piVar2 == 0x3) && (0x0 < gnControlCPU)) {
            gnControlCPU += -0x1;
            iVar3 = -0x1;
        }
        if ((*piVar2 == 0x4) && (gnControlCPU < 0xa)) {
            gnControlCPU += 0x1;
            iVar3 = -0x1;
        }
    }
    if (*(int *)(param_3 + param_2 * 0x4) == 0x21) {
        if (GameSettingState != gGameStatus) {
            menuSaveData(0xffffffff);
        }
        FirstGameSetting = 0x1;
    }
    if (iVar3 != 0x0) {
        PlaySE(SFX_INIT_TABLE,0x1);
    }
    if ((gGameStatus & 0x40) == 0x0) {
        local_64 = 0x2;
    }
    else {
        local_64 = 0x1;
    }
    local_64 |= 0x1400;
    local_62 = 0x0;
    screenSetTextField(giScreenMenu,0xc8,&local_64);
    screenGetText(giScreenMenu,geMenuSignDisplay + 0xd3,&local_64,0x20);
    screenSetTextField(giScreenMenu,0xd2,&local_64);
    screenGetText(giScreenMenu,((gGameStatus & 0x2) != 0x0) + 0xdd,&local_64,0x20);
    screenSetTextField(giScreenMenu,0xdc,&local_64);
    if (gnControlCPU == 0x0) {
        local_64 = 0x180f;
        local_62 = 0x1806;
        local_60 = 0x1806;
        local_5e = 0x0;
    }
    else if (gnControlCPU == 0xa) {
        local_64 = 0x1401;
        local_62 = 0x140a;
        local_60 = 0x0;
    }
    else {
        local_64 = (ushort)gnControlCPU & 0x3ff | 0x1400;
        local_62 = 0x0;
    }
    screenSetTextField(giScreenMenu,0xe6,&local_64);
    screenGetText(giScreenMenu,(gOverflowFlag != 0x0) + 0xf1,&local_64,0x20);
    screenSetTextField(giScreenMenu,0xf0,&local_64);
    return;
}



void menuUpdateSound(void)

{
    int iVar1;
    undefined auStack_50 [0x40];
    undefined4 local_10 [0x3];
    
    iVar1 = screenFind(local_10,_3085);
    if (iVar1 != 0x0) {
        if (geMenuSoundType == 0x2) {
            SetSoundOptions(0x0);
        }
        else if ((geMenuSoundType < 0x2) && (0x0 < geMenuSoundType)) {
            SetSoundOptions(0x1);
        }
        screenGetText(local_10[0],geMenuSoundType + 0xc8,auStack_50,0x20);
        screenSetTextField(local_10[0],0xc8,auStack_50);
        if (geMenuSoundMute == 0x2) {
            SetMasterSFXVolume(0x6665);
            SetMasterSongVolume(0x4ccc);
        }
        else if (geMenuSoundMute < 0x2) {
            if (geMenuSoundMute == 0x0) {
                SetMasterSFXVolume(0x6665);
                SetMasterSongVolume(0x1fff);
            }
            else if (-0x1 < geMenuSoundMute) {
                FadeOutAllSFXs(0x0);
                SetMasterSFXVolume(0x1fff);
                SetMasterSongVolume(0x4ccc);
            }
        }
        else if (geMenuSoundMute < 0x4) {
            FadeOutAllSFXs(0x0);
            SetMasterSFXVolume(0x1fff);
            SetMasterSongVolume(0x1fff);
        }
        screenGetText(local_10[0],geMenuSoundMute + 0xd3,auStack_50,0x20);
        screenSetTextField(local_10[0],0xd2,auStack_50);
        menuGetText(auStack_50,giMenuTestEffect);
        screenSetTextField(local_10[0],0xdc,auStack_50);
        menuGetText(auStack_50,giMenuTestMusic);
        screenSetTextField(local_10[0],0xe6,auStack_50);
    }
    return;
}



void menuTickPageSound(undefined4 param_1,int param_2,int param_3)

{
    int *piVar1;
    int iVar2;
    int local_1c;
    undefined auStack_18 [0x8];
    
    iVar2 = 0x0;
    screenGetCursor(giScreenMenu,0x64,auStack_18,&local_1c);
    if (local_1c == 0x2) {
        piVar1 = (int *)(param_3 + param_2 * 0x4);
        if (*piVar1 == 0x20) {
            gbAudioChanged = 0xffffffff;
            *piVar1 = 0x0;
            PlayGameSfxTest(giMenuTestEffect);
        }
        if ((*piVar1 == 0x3) && (0x1 < giMenuTestEffect)) {
            giMenuTestEffect += -0x1;
            iVar2 = -0x1;
        }
        if ((*piVar1 == 0x4) && (giMenuTestEffect < 0xc8)) {
            giMenuTestEffect += 0x1;
            iVar2 = -0x1;
        }
    }
    else if (local_1c < 0x2) {
        if (local_1c == 0x0) {
            piVar1 = (int *)(param_3 + param_2 * 0x4);
            if ((*piVar1 == 0x3) && (0x1 < geMenuSoundType)) {
                geMenuSoundType += -0x1;
                iVar2 = -0x1;
                GCHandover_write(0x8,0x0);
            }
            if ((*piVar1 == 0x4) && (geMenuSoundType < 0x2)) {
                geMenuSoundType += 0x1;
                iVar2 = -0x1;
                GCHandover_write(0x8,0x1);
            }
        }
        else if (-0x1 < local_1c) {
            piVar1 = (int *)(param_3 + param_2 * 0x4);
            if ((*piVar1 == 0x3) && (0x0 < geMenuSoundMute)) {
                geMenuSoundMute += -0x1;
                iVar2 = -0x1;
            }
            if ((*piVar1 == 0x4) && (geMenuSoundMute < 0x3)) {
                geMenuSoundMute += 0x1;
                iVar2 = -0x1;
            }
        }
    }
    else if (local_1c == 0x4) {
        piVar1 = (int *)(param_3 + param_2 * 0x4);
        if (*piVar1 == 0x20) {
            *piVar1 = 0x0;
            FadeOutAllSFXs(0x0);
            FadeOutAllSongs(0x0);
            ForceLoadSong(0x21,0x0);
            PlaySong(0x0);
        }
    }
    else if (local_1c < 0x4) {
        piVar1 = (int *)(param_3 + param_2 * 0x4);
        if (*piVar1 == 0x20) {
            gbAudioChanged = 0xffffffff;
            *piVar1 = 0x0;
            PlayGameMusicTest(giMenuTestMusic);
        }
        if ((*piVar1 == 0x3) && (0x0 < giMenuTestMusic)) {
            giMenuTestMusic += -0x1;
            iVar2 = -0x1;
        }
        if ((*piVar1 == 0x4) && (giMenuTestMusic < 0x39)) {
            giMenuTestMusic += 0x1;
            iVar2 = -0x1;
        }
    }
    if (iVar2 != 0x0) {
        menuUpdateSound();
        PlaySE(SFX_INIT_TABLE,0x1);
    }
    return;
}



void menuTickPageScreen(void)

{
    return;
}



void menuTickPlay(undefined4 param_1,undefined4 param_2,int *param_3)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    char *pcVar4;
    undefined1 *puVar5;
    int iVar6;
    undefined1 *puVar7;
    undefined1 *puVar8;
    int *piVar9;
    undefined4 uVar10;
    int iVar11;
    undefined1 *puVar12;
    int *piVar13;
    int *piVar14;
    int *piVar15;
    int *piVar16;
    int local_94 [0x4];
    int local_84 [0x4];
    int local_74 [0x4];
    int local_64 [0x4];
    undefined4 local_54;
    int local_50;
    int local_4c;
    int local_48 [0x2];
    
    puVar12 = gaPlayerFor4PSetLevel;
    if (*param_3 != 0x21) {
        *param_3 = 0x0;
    }
    if (param_3[0x1] != 0x21) {
        param_3[0x1] = 0x0;
    }
    if (param_3[0x2] != 0x21) {
        param_3[0x2] = 0x0;
    }
    if (param_3[0x3] != 0x21) {
        param_3[0x3] = 0x0;
    }
    iVar2 = screenChangePending();
    if (iVar2 != 0x0) {
        return;
    }
    iVar3 = screenFlushing();
    iVar2 = gaiName._0_4_;
    if (iVar3 != 0x0) {
        return;
    }
    if (gReset == 0x0) {
        gDemo = 0x2c;
        bVar1 = false;
        local_94[0] = 0x0;
        local_74[0] = gTheGame._120360_4_;
        piVar14 = local_94;
        piVar13 = local_74;
        local_64[0] = gTheGame._120368_4_;
        piVar15 = local_64;
        piVar16 = local_84;
        uVar10 = 0x1;
        local_84[0] = gTheGame._120364_4_;
        gPlayer._0_4_ = 0x2be4d0;
        local_94[1] = 0x0;
        local_74[1] = gTheGame._120384_4_;
        local_64[1] = gTheGame._120392_4_;
        local_84[1] = gTheGame._120388_4_;
        gPlayer._4_4_ = 0x2be4d0;
        local_94[2] = 0x0;
        local_74[2] = gTheGame._120408_4_;
        local_64[2] = gTheGame._120416_4_;
        local_84[2] = gTheGame._120412_4_;
        gPlayer._8_4_ = 0x2be4d0;
        local_94[3] = 0x0;
        local_74[3] = gTheGame._120432_4_;
        local_64[3] = gTheGame._120440_4_;
        local_84[3] = gTheGame._120436_4_;
        gPlayer._12_4_ = 0x2be4d0;
        local_54 = giScreenMenuLast;
        gnCountMenu += -0x1;
        geTypeMenu = (&gnCountMenu)[gnCountMenu];
        if (true) {
            switch(geTypeMenu) {
            case 0x7:
            case 0xc:
                if (geTypeMenu == 0x7) {
                    gSelection = 0x8c;
                }
                else {
                    gSelection = 0xbe;
                }
                gTheGame._120328_4_ = 0x1;
                if ((-0x1 < gaiName._0_4_) && (gaiName._0_4_ < 0x8)) {
                    gPlayer._0_4_ = gaiName._0_4_ * 0x880 + 0x2be4d0;
                }
                brainbrain._12_4_ = 0xffffffff;
                brainbrain._308_4_ = 0xffffffff;
                screenFind(&local_54,&_863);
                screenGetCursor(local_54,0x64,&local_4c,&local_50);
                local_64[0] = local_4c + 0x1;
                screenGetCursor(local_54,0x65,&local_4c,&local_50);
                if (local_4c == 0x0) {
                    local_74[0] = 0x1;
                }
                else if (local_4c == 0x1) {
                    local_74[0] = 0x2;
                }
                else {
                    local_74[0] = 0x3;
                }
                screenGetCursor(local_54,0x66,&local_4c,&local_50);
                if (local_4c == 0x0) {
                    uVar10 = 0x1;
                }
                else {
                    uVar10 = 0x2;
                }
                screenFind(&local_54,&_864);
                screenGetCursor(local_54,0x64,&local_4c,&local_50);
                local_84[0] = local_4c + local_50 * 0x3;
                break;
            case 0x9:
                gSelection = 0x96;
                uVar10 = 0x2;
                gTheGame._120328_4_ = 0x2;
                if ((-0x1 < gaiName._0_4_) && (gaiName._0_4_ < 0x8)) {
                    gPlayer._0_4_ = gaiName._0_4_ * 0x880 + 0x2be4d0;
                }
                iVar3 = -0x1;
                brainbrain._12_4_ = 0xffffffff;
                brainbrain._308_4_ = 0xffffffff;
                screenFind(&local_54,_1427);
                screenGetCursor(local_54,0x65,&local_4c,&local_50);
                if (local_4c != 0x1) {
                    iVar3 = 0x0;
                }
                screenGetCursor(local_54,0x64,&local_4c,&local_50);
                if ((local_4c == 0x0) && (local_50 == 0x0)) {
                    if (iVar3 == 0x0) {
                        gTheGame[iVar2 * 0x880 + 0x1d7fc] =
                             gTheGame[iVar2 * 0x880 + 0x1d7fc] + '\x01';
                    }
                    else {
                        iVar3 = iVar2 * 0x880;
                        gTheGame[iVar3 + 0x1d7f7] = 0x0;
                        gTheGame[iVar3 + 0x1d7fc] = 0x0;
                        *(undefined2 *)(gTheGame + iVar3 + 0x1d802) = 0x0;
                    }
                    local_74[0] = 0x1;
                    local_84[0] = (char)gTheGame[iVar2 * 0x880 + 0x1d7f7] + 0x1;
                    local_64[0] = (int)(char)gTheGame[iVar2 * 0x880 + 0x1d7fc];
                }
                else if ((local_4c == 0x1) && (local_50 == 0x0)) {
                    if (iVar3 == 0x0) {
                        gTheGame[iVar2 * 0x880 + 0x1d7fd] =
                             gTheGame[iVar2 * 0x880 + 0x1d7fd] + '\x01';
                    }
                    else {
                        iVar3 = iVar2 * 0x880;
                        gTheGame[iVar3 + 0x1d7f8] = 0x0;
                        gTheGame[iVar3 + 0x1d7fd] = 0x0;
                        *(undefined2 *)(gTheGame + iVar3 + 0x1d804) = 0x0;
                    }
                    local_74[0] = 0x2;
                    local_84[0] = (char)gTheGame[iVar2 * 0x880 + 0x1d7f8] + 0x1;
                    local_64[0] = (int)(char)gTheGame[iVar2 * 0x880 + 0x1d7fd];
                }
                else if ((local_4c == 0x2) && (local_50 == 0x0)) {
                    if (iVar3 == 0x0) {
                        gTheGame[iVar2 * 0x880 + 0x1d7fe] =
                             gTheGame[iVar2 * 0x880 + 0x1d7fe] + '\x01';
                    }
                    else {
                        iVar3 = iVar2 * 0x880;
                        gTheGame[iVar3 + 0x1d7f9] = 0x0;
                        gTheGame[iVar3 + 0x1d7fe] = 0x0;
                        *(undefined2 *)(gTheGame + iVar3 + 0x1d806) = 0x0;
                    }
                    local_74[0] = 0x3;
                    local_84[0] = (char)gTheGame[iVar2 * 0x880 + 0x1d7f9] + 0x1;
                    local_64[0] = (int)(char)gTheGame[iVar2 * 0x880 + 0x1d7fe];
                }
                else if ((local_4c == 0x1) && (local_50 == 0x1)) {
                    if (iVar3 == 0x0) {
                        gTheGame[iVar2 * 0x880 + 0x1d7ff] =
                             gTheGame[iVar2 * 0x880 + 0x1d7ff] + '\x01';
                    }
                    else {
                        iVar3 = iVar2 * 0x880;
                        gTheGame[iVar3 + 0x1d7fa] = 0x0;
                        gTheGame[iVar3 + 0x1d7ff] = 0x0;
                        *(undefined2 *)(gTheGame + iVar3 + 0x1d808) = 0x0;
                    }
                    local_74[0] = 0x4;
                    local_84[0] = (char)gTheGame[iVar2 * 0x880 + 0x1d7fa] + 0x1;
                    local_64[0] = (int)(char)gTheGame[iVar2 * 0x880 + 0x1d7ff];
                }
                else if ((local_4c == 0x2) && (local_50 == 0x1)) {
                    if (iVar3 == 0x0) {
                        gTheGame[iVar2 * 0x880 + 0x1d800] =
                             gTheGame[iVar2 * 0x880 + 0x1d800] + '\x01';
                    }
                    else {
                        iVar3 = iVar2 * 0x880;
                        gTheGame[iVar3 + 0x1d7fb] = 0x0;
                        gTheGame[iVar3 + 0x1d800] = 0x0;
                        *(undefined2 *)(gTheGame + iVar3 + 0x1d80a) = 0x0;
                    }
                    local_74[0] = 0x5;
                    local_84[0] = (char)gTheGame[iVar2 * 0x880 + 0x1d7fb] + 0x1;
                    local_64[0] = (int)(char)gTheGame[iVar2 * 0x880 + 0x1d800];
                }
                if (0xe < local_84[0]) {
                    local_84[0] = 0xe;
                }
                break;
            case 0xf:
                (&gnCountMenu)[gnCountMenu] = 0x11;
            case 0x11:
                gSelection = 0xaa;
                gTheGame._120328_4_ = 0x1;
                if ((-0x1 < gaiName._0_4_) && (gaiName._0_4_ < 0x8)) {
                    gPlayer._0_4_ = gaiName._0_4_ * 0x880 + 0x2be4d0;
                }
                brainbrain._12_4_ = 0xffffffff;
                brainbrain._308_4_ = 0xffffffff;
                screenFind(&local_54,_313);
                screenGetCursor(local_54,0x64,&local_4c,&local_50);
                if (local_4c == 0x0) {
                    uVar10 = 0x1;
                }
                else {
                    uVar10 = 0x2;
                }
                if ((geTypeMenu == 0xf) &&
                   ((iVar2 = menuStageClearXtra(), iVar2 != 0x0 ||
                    (iVar2 = menuStageClearLast(), iVar2 != 0x0)))) {
                    local_74[0] = 0x5;
                    PlaySE(SFX_INIT_TABLE,0x18);
                }
                else {
                    local_74[0] = 0x2;
                    screenFind(&local_54,_3443);
                    screenGetArea(local_54,local_48,0x0);
                    screenGetCursor(local_54,local_48[0],&local_4c,&local_50);
                    local_84[0] = local_48[0] + -0x63;
                    local_64[0] = local_4c + 0x1;
                    if (local_84[0] == 0x4) {
                        PlaySE(SFX_INIT_TABLE,0xc);
                    }
                    else if (local_84[0] < 0x4) {
                        if (local_84[0] == 0x2) {
                            PlaySE(SFX_INIT_TABLE,0xd);
                        }
                        else if (local_84[0] < 0x2) {
                            if (0x0 < local_84[0]) {
                                PlaySE(SFX_INIT_TABLE,0xb);
                            }
                        }
                        else {
                            PlaySE(SFX_INIT_TABLE,0x11);
                        }
                    }
                    else if (local_84[0] == 0x6) {
                        PlaySE(SFX_INIT_TABLE,0x13);
                    }
                    else if (local_84[0] < 0x6) {
                        PlaySE(SFX_INIT_TABLE,0xe);
                    }
                }
                break;
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1a:
                gSelection = 0x82;
                gTheGame._120328_4_ = 0x1;
                if ((-0x1 < gaiName._0_4_) && (gaiName._0_4_ < 0x8)) {
                    gPlayer._0_4_ = gaiName._0_4_ * 0x880 + 0x2be4d0;
                }
                brainbrain._12_4_ = 0xffffffff;
                brainbrain._308_4_ = 0xffffffff;
                screenFind(&local_54,_1653);
                screenGetArea(local_54,local_48,0x0);
                screenGetCursor(local_54,local_48[0],&local_4c,&local_50);
                local_64[0] = 0x0;
                if (local_48[0] == 0x65) {
                    local_74[0] = 0x0;
                }
                else if ((local_4c == 0x0) && (local_50 == 0x0)) {
                    local_74[0] = 0x1;
                }
                else if ((local_4c == 0x1) && (local_50 == 0x0)) {
                    local_74[0] = 0x3;
                }
                else if ((local_4c == 0x2) && (local_50 == 0x0)) {
                    local_74[0] = 0x5;
                }
                else if ((local_4c == 0x0) && (local_50 == 0x1)) {
                    local_74[0] = 0x2;
                }
                else if ((local_4c == 0x1) && (local_50 == 0x1)) {
                    local_74[0] = 0x4;
                }
                else if ((local_4c == 0x2) && (local_50 == 0x1)) {
                    local_74[0] = 0x5;
                }
                if (local_48[0] == 0x65) {
                    pcVar4 = _3444;
                }
                else {
                    pcVar4 = (char *)&_3445;
                }
                screenFind(&local_54,pcVar4);
                screenGetArea(local_54,local_48,0x0);
                screenGetCursor(local_54,local_48[0],&local_4c,&local_50);
                local_84[0] = (local_48[0] + -0x64) * 0xf + local_50 * 0x5 + local_4c + 0x1;
                if (geTypeMenu == 0x17) {
                    uVar10 = 0x2;
                    local_84[0] = local_84[0] + 0x2d;
                }
                break;
            case 0x1e:
            case 0x21:
            case 0x24:
                gTheGame._120328_4_ = 0x2;
                if ((-0x1 < gaiName._0_4_) && (gaiName._0_4_ < 0x8)) {
                    gPlayer._0_4_ = gaiName._0_4_ * 0x880 + 0x2be4d0;
                }
                if (((gaiName._4_4_ != gaiName._0_4_) && (-0x1 < gaiName._4_4_)) &&
                   (gaiName._4_4_ < 0x8)) {
                    gPlayer._4_4_ = gaiName._4_4_ * 0x880 + 0x2be4d0;
                }
                brainbrain._12_4_ = 0xffffffff;
                brainbrain._308_4_ = 0xffffffff;
                if (gnControlCPU == 0x0) {
                    gTheGame._90112_4_ = 0x3;
                    gTheGame._90384_4_ = 0x3;
                }
                else {
                    gDemo = 0xb;
                    DemoCPU(0x0);
                    DemoCPU(0x1,gnControlCPU);
                }
                if (geTypeMenu == 0x1e) {
                    screenFind(&local_54,&_1063);
                    gSelection = 0xa0;
                }
                else if (geTypeMenu == 0x21) {
                    screenFind(&local_54,&_1064);
                    gSelection = 0xc8;
                }
                else if (geTypeMenu == 0x24) {
                    screenFind(&local_54,&_1065);
                    gSelection = 0xb4;
                }
                screenGetCursor(local_54,0x65,&local_4c,&local_50);
                local_64[0] = local_4c + 0x1;
                screenGetCursor(local_54,0x67,&local_4c,&local_50);
                local_64[1] = local_4c + 0x1;
                screenGetCursor(local_54,0x66,&local_4c,&local_50);
                if (local_4c == 0x0) {
                    uVar10 = 0x1;
                }
                else {
                    uVar10 = 0x2;
                }
                if (geTypeMenu == 0x21) {
                    screenGetCursor(local_54,0x64,&local_4c,&local_50);
                    local_94[0] = local_4c * 0x64;
                    screenGetCursor(local_54,0x68,&local_4c,&local_50);
                    local_94[1] = local_4c * 0x64;
                }
                if (geTypeMenu == 0x24) {
                    screenGetCursor(local_54,0x64,&local_4c,&local_50);
                    local_94[0] = local_4c;
                    screenGetCursor(local_54,0x68,&local_4c,&local_50);
                    local_94[1] = local_4c;
                }
                screenFind(&local_54,&_710);
                screenGetArea(local_54,local_48,0x0);
                screenGetCursor(local_54,local_48[0],&local_4c,&local_50);
                if (local_48[0] == 0x64) {
                    local_84[0] = local_4c + local_50 * 0x5;
                }
                else {
                    local_84[0] = local_4c + 0xa;
                }
                screenGetArea(local_54,local_48,0x1);
                screenGetCursor(local_54,local_48[0],&local_4c,&local_50);
                if (local_48[0] == 0x6e) {
                    local_84[1] = local_4c + local_50 * 0x5;
                }
                else {
                    local_84[1] = local_4c + 0xa;
                }
                break;
            case 0x27:
                if ((0x3f < geGameType) && (geGameType < 0x43)) {
                    bVar1 = true;
                }
                if (!bVar1) {
                    gc_assert(0x0,_1640,0x1f88,_3446,0x0,0x0,0x0);
                }
                gTheGame._120328_4_ = 0x4;
                gaiName._0_4_ = 0x0;
                gaiName._4_4_ = 0x0;
                gaiName._8_4_ = 0x0;
                gaiName._12_4_ = 0x0;
                screenFind(&local_54,_1224);
                if (geGameType == 0x40) {
                    gSelection = 0xd2;
                }
                else if (geGameType == 0x41) {
                    gSelection = 0xe6;
                }
                else if (geGameType == 0x42) {
                    gSelection = 0xdc;
                }
                puVar7 = gTheGame;
                puVar8 = brainbrain;
                iVar3 = 0x64;
                iVar2 = 0x65;
                puVar5 = puVar7;
                piVar9 = piVar15;
                for (iVar11 = 0x0; iVar11 < gTheGame._120328_4_; iVar11 += 0x1) {
                    screenGetCursor(local_54,iVar3,&local_4c,&local_50);
                    iVar6 = *(int *)(puVar12 + local_4c * 0x4);
                    screenGetCursor(local_54,iVar2,&local_4c,&local_50);
                    *piVar9 = local_4c + 0x1;
                    *(undefined4 *)(puVar8 + 0xc) = 0xffffffff;
                    if (iVar6 < 0x4) {
                        *(undefined4 *)(puVar7 + 0x1d638) = 0xffffffff;
                        *(undefined4 *)(puVar5 + 0x16000) = 0x3;
                    }
                    else if (iVar6 < 0xe) {
                        *(int *)(puVar7 + 0x1d638) = iVar6 >> 0x1;
                        *(undefined4 *)(puVar5 + 0x16000) = 0x3;
                    }
                    else {
                        *(undefined4 *)(puVar7 + 0x1d638) = 0xffffffff;
                        *(undefined4 *)(puVar5 + 0x16000) = 0x1;
                    }
                    iVar3 += 0xa;
                    puVar12 = puVar12 + 0x30;
                    iVar2 += 0xa;
                    piVar9 = piVar9 + 0x1;
                    puVar8 = puVar8 + 0x128;
                    puVar7 = puVar7 + 0x18;
                    puVar5 = puVar5 + 0x110;
                }
                uVar10 = 0x1;
                screenFind(&local_54,_1225);
                iVar3 = 0x64;
                piVar9 = piVar16;
                for (iVar2 = 0x0; iVar2 < gTheGame._120328_4_; iVar2 += 0x1) {
                    screenGetArea(local_54,local_48,iVar2);
                    screenGetCursor(local_54,local_48[0],&local_4c,&local_50);
                    if (local_48[0] == iVar3) {
                        *piVar9 = local_4c + local_50 * 0x5;
                    }
                    else {
                        *piVar9 = local_4c + 0xa;
                    }
                    iVar3 += 0xa;
                    piVar9 = piVar9 + 0x1;
                }
                break;
            case 0x28:
                screenGetCursor(giScreenMenuLast,0x64,&local_4c,&local_50);
                local_74[0] = local_50;
                gSelection = 0x64;
                gTheGame._120328_4_ = 0x1;
                break;
            case 0x2b:
            case 0x2c:
                gSelection = 0x6e;
                local_74[0] = 0x1;
                gTheGame._120328_4_ = 0x1;
                if (geTypeMenu != 0x2b) {
                    local_74[0] = 0x3;
                }
                screenGetCursor(giScreenMenuLast,0x64,&local_4c,&local_50);
                local_84[0] = 0x1;
                local_64[0] = local_50 + 0x1;
                local_94[0] = 0x1;
                brainbrain._12_4_ = 0xffffffff;
                brainbrain._308_4_ = 0xffffffff;
                break;
            case 0x2d:
                gSelection = 0x8c;
                uVar10 = 0x1;
                gTheGame._120328_4_ = 0x1;
                screenGetCursor(giScreenMenuLast,0x64,&local_4c,&local_50);
                if (local_4c != 0x0) {
                    uVar10 = 0x2;
                }
                local_64[0] = 0x1;
                local_74[0] = 0x0;
                local_84[0] = 0x1;
                brainbrain._12_4_ = 0xffffffff;
                brainbrain._308_4_ = 0xffffffff;
                break;
            case 0x35:
                iVar2 = screenFind(&local_54,_2208);
                if (iVar2 != 0x0) {
                    screenGetCursor(local_54,0x64,&local_4c,&local_50);
                    local_74[0] = local_50;
                }
                gSelection = 0x78;
                gTheGame._120328_4_ = 0x1;
                local_94[0] = -0x1;
                if ((-0x1 < gaiName._0_4_) && (gaiName._0_4_ < 0x8)) {
                    gPlayer._0_4_ = gaiName._0_4_ * 0x880 + 0x2be4d0;
                }
                brainbrain._12_4_ = 0xffffffff;
                brainbrain._308_4_ = 0xffffffff;
                gTheGame._19172_4_ = 0x0;
                gTheGame._41636_4_ = 0x0;
            }
        }
        puVar5 = gTheGame;
        puVar12 = puVar5;
        gn2D3D = uVar10;
        gTheGame._120332_4_ = uVar10;
        for (iVar2 = 0x0; iVar2 < gTheGame._120328_4_; iVar2 += 0x1) {
            iVar3 = *piVar13;
            piVar13 = piVar13 + 0x1;
            *(int *)(puVar12 + 0x1d628) = iVar3;
            iVar3 = *piVar14;
            piVar14 = piVar14 + 0x1;
            *(int *)(puVar12 + 0x1d634) = iVar3;
            iVar3 = *piVar15;
            piVar15 = piVar15 + 0x1;
            *(int *)(puVar12 + 0x1d630) = iVar3;
            iVar3 = *piVar16;
            piVar16 = piVar16 + 0x1;
            *(int *)(puVar12 + 0x1d62c) = iVar3;
            *(undefined4 *)(puVar5 + 0x4ae4) = 0x0;
            puVar5 = puVar5 + 0x57c0;
            puVar12 = puVar12 + 0x18;
        }
        if (gSelection == 0x96) {
            peelStop();
        }
        if (gnCountMenu < 0x1) {
            gc_assert(0x0,_1640,0x1fe8,_3446,0x0,0x0,0x0);
        }
        FadeOutSong(last_song_handle,0x78);
        if ((gSelection == 0xaa) && ((gTheGame._120360_4_ == 0x5 || (gTheGame._120368_4_ == 0x1))))
        {
            gMain = 0x357;
        }
        else if (gSelection == 0x78) {
            gMain = 0x378;
        }
        else {
            if (gSelection < 0x78) {
                if (gSelection == 0x6e) {
                    gReset = 0xffffffff;
                    gMain = 0x341;
                    return;
                }
                if ((gSelection < 0x6e) && (gSelection == 0x64)) {
                    gReset = 0xffffffff;
                    gMain = 0x34c;
                    return;
                }
            }
            else if (gSelection == 0x96) {
                gReset = 0xffffffff;
                gMain = 0x383;
                return;
            }
            gMain = 0x384;
        }
        gReset = 0xffffffff;
        return;
    }
    return;
}



undefined4 menuFind(undefined4 *param_1,pointer_____offset_0x448___ param_2)

{
    pointer_____offset_0x448___ *ppuVar1;
    int iVar2;
    int iVar3;
    
    iVar3 = 0x3e;
    ppuVar1 = &gaMenuData;
    iVar2 = 0x0;
    do {
        if (param_2 == ppuVar1[0x4]) {
            *param_1 = &gaMenuData + iVar2 * 0x6;
            return 0xffffffff;
        }
        ppuVar1 = ppuVar1 + 0x6;
        iVar2 += 0x1;
        iVar3 += -0x1;
    } while (iVar3 != 0x0);
    return 0x0;
}



void menuLoadData(void)

{
    DummyLoad();
    return;
}



undefined4 menuLoadDataMain(void)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    undefined *puVar4;
    int iVar5;
    undefined4 local_d4;
    undefined auStack_d0 [0x4];
    undefined auStack_cc [0x4];
    undefined4 local_c8;
    uint local_c4;
    ushort local_b8;
    undefined4 local_b4;
    undefined4 local_b0;
    undefined4 local_ac;
    undefined4 local_a8;
    int local_a0 [0x22];
    
    menuInit();
    bzero(gTheGame + 0x1d68a,0xe);
    iVar1 = menuLoadUserData(auStack_d0);
    if ((iVar1 == 0x0) || (iVar1 = GCHandover_read(0x7), iVar1 == 0x3)) {
        screenFind(&local_d4,_456);
        screenGetText(local_d4,0x64,ganName,0x7);
        if (ganName._0_2_ != 0x1) {
            if (gTheGame._120458_2_ == 0x0) {
                iVar1 = 0x0;
            }
            else if (gTheGame._122634_2_ == 0x0) {
                iVar1 = 0x1;
            }
            else if (gTheGame._124810_2_ == 0x0) {
                iVar1 = 0x2;
            }
            else if (gTheGame._126986_2_ == 0x0) {
                iVar1 = 0x3;
            }
            else if (gTheGame._129162_2_ == 0x0) {
                iVar1 = 0x4;
            }
            else if (gTheGame._131338_2_ == 0x0) {
                iVar1 = 0x5;
            }
            else if (gTheGame._133514_2_ == 0x0) {
                iVar1 = 0x6;
            }
            else if (gTheGame._135690_2_ == 0x0) {
                iVar1 = 0x7;
            }
            else {
                iVar1 = -0x1;
            }
            if (iVar1 == -0x1) {
                iVar1 = -0x1;
            }
            else {
                menuInitUser(iVar1);
                bcopy(ganName,gTheGame + iVar1 * 0x880 + 0x1d68a,0xe);
            }
            if (iVar1 != -0x1) {
                menuSaveData(0x0);
            }
        }
        uVar2 = 0x0;
    }
    else {
        iVar1 = 0x0;
        puVar4 = auStack_d0;
        DAT_002942d6 = 0x0;
        do {
            bcopy(puVar4 + 0x4c,ganName,0xc);
            if (gTheGame._120458_2_ == 0x0) {
                iVar5 = 0x0;
            }
            else if (gTheGame._122634_2_ == 0x0) {
                iVar5 = 0x1;
            }
            else if (gTheGame._124810_2_ == 0x0) {
                iVar5 = 0x2;
            }
            else if (gTheGame._126986_2_ == 0x0) {
                iVar5 = 0x3;
            }
            else if (gTheGame._129162_2_ == 0x0) {
                iVar5 = 0x4;
            }
            else if (gTheGame._131338_2_ == 0x0) {
                iVar5 = 0x5;
            }
            else if (gTheGame._133514_2_ == 0x0) {
                iVar5 = 0x6;
            }
            else if (gTheGame._135690_2_ == 0x0) {
                iVar5 = 0x7;
            }
            else {
                iVar5 = -0x1;
            }
            if (iVar5 != -0x1) {
                menuInitUser(iVar5);
                bcopy(ganName,gTheGame + iVar5 * 0x880 + 0x1d68a,0xe);
            }
            iVar1 += 0x1;
            puVar4 = puVar4 + 0xc;
        } while (iVar1 < 0x8);
        iVar1 = 0x1;
        iVar5 = 0x2a16c8;
        puVar4 = auStack_cc;
        do {
            iVar3 = *(int *)(puVar4 + 0x2c);
            if (iVar3 != -0x1) {
                gc_memoryCardLoad(0x1,_cache_3481);
                memcpy((void *)(iVar5 + 0x1d688),_cache_3481 + iVar3 * 0x880 + 0x170,0x880);
            }
            iVar1 += 0x1;
            puVar4 = puVar4 + 0x4;
            iVar5 += 0x880;
        } while (iVar1 < 0x8);
        gnCheatMenu = local_c8;
        uVar2 = 0xffffffff;
        gbOpenTitle ^= local_c4;
        geMenuSoundType = local_ac;
        geMenuSoundMute = local_a8;
        gGameStatus = gGameStatus & 0x1 ^ local_b8;
        gOverflowFlag = local_b0;
        gnControlCPU = local_b4;
    }
    return uVar2;
}



undefined4 menuSaveData(void)

{
    SetDummySave();
    return 0xffffffff;
}



undefined4 menuSaveDataMain(undefined4 param_1)

{
    int iVar1;
    undefined auStack_c4 [0xc0];
    
    iVar1 = menuLoadUserData(auStack_c4);
    if (iVar1 == 0x0) {
        menuInitUserData(auStack_c4,0xffffffff);
    }
    else {
        menuInitUserData(auStack_c4,0x0);
    }
    menuSaveUserData(auStack_c4,param_1);
    return 0xffffffff;
}



void menuRestore(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined4 uVar6;
    int iVar7;
    int iVar8;
    undefined4 uVar9;
    int iVar10;
    int iVar11;
    char *pcVar12;
    int iVar13;
    int iVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    int iVar18;
    undefined4 local_50;
    undefined4 local_4c;
    
    uVar9 = gTheGame._120452_4_;
    iVar8 = gTheGame._120440_4_;
    iVar7 = gTheGame._120436_4_;
    uVar6 = gTheGame._120428_4_;
    iVar5 = gTheGame._120416_4_;
    iVar4 = gTheGame._120412_4_;
    uVar15 = gTheGame._120404_4_;
    iVar3 = gTheGame._120392_4_;
    iVar2 = gTheGame._120388_4_;
    iVar13 = gTheGame._120368_4_;
    iVar18 = gTheGame._120364_4_;
    iVar1 = gTheGame._120360_4_;
    iVar11 = gn2D3D;
    uVar16 = 0x0;
    uVar17 = 0x0;
    local_4c = gTheGame._120380_4_;
    if (true) {
        iVar14 = gTheGame._120364_4_ >> 0x1f;
        iVar10 = gTheGame._120388_4_ >> 0x1f;
        switch(param_1) {
        case 0x7:
        case 0xc:
            screenFind(&local_50,_3449);
            screenSetCursor(local_50,0x64,0x0,0x0);
            screenFind(&local_50,_3450);
            if (param_1 == 0x7) {
                uVar15 = 0x0;
            }
            else {
                uVar15 = 0x2;
            }
            screenSetCursor(local_50,0x64,0x0,uVar15);
            screenFind(&local_50,&_863);
            screenSetCursor(local_50,0x64,iVar13 + -0x1,0x0);
            if (iVar1 == 0x1) {
                uVar15 = 0x0;
            }
            else if (iVar1 == 0x2) {
                uVar15 = 0x1;
            }
            else {
                uVar15 = 0x2;
            }
            screenSetCursor(local_50,0x65,uVar15,0x0);
            screenSetCursor(local_50,0x66,iVar11 != 0x1,0x0);
            screenFind(&local_50,&_864);
            screenSetCursor(local_50,0x64,iVar18 % 0x3);
            gnCountMenu += -0x1;
            break;
        case 0x9:
            screenFind(&local_50,_3449);
            screenSetCursor(local_50,0x64,0x0,0x0);
            screenFind(&local_50,_3450);
            screenSetCursor(local_50,0x64,0x0,0x1);
            if (iVar1 == 0x3) {
                uVar16 = 0x2;
                uVar17 = 0x0;
            }
            else if (iVar1 < 0x3) {
                if (iVar1 == 0x1) {
                    uVar16 = 0x0;
                    uVar17 = 0x0;
                }
                else if (0x0 < iVar1) {
                    uVar16 = 0x1;
                    uVar17 = 0x0;
                }
            }
            else if (iVar1 == 0x5) {
                uVar16 = 0x2;
                uVar17 = 0x1;
            }
            else if (iVar1 < 0x5) {
                uVar16 = 0x1;
                uVar17 = 0x1;
            }
            screenFind(&local_50,_1427);
            screenSetCursor(local_50,0x64,uVar16,uVar17);
            break;
        case 0xf:
        case 0x11:
            screenFind(&local_50,_3449);
            screenSetCursor(local_50,0x64,0x0,0x0);
            screenFind(&local_50,_3450);
            screenSetCursor(local_50,0x64,0x0,0x3);
            screenFind(&local_50,_313);
            screenSetCursor(local_50,0x64,iVar11 != 0x1,0x0);
            screenFind(&local_50,_3443);
            screenSetArea(local_50,iVar18 + 0x63,0x0);
            screenSetCursor(local_50,iVar18 + 0x63,iVar13 + -0x1,0x0);
            break;
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
            screenFind(&local_50,_3449);
            screenSetCursor(local_50,0x64,0x0,0x0);
            screenFind(&local_50,_3450);
            screenSetCursor(local_50,0x64,0x0,0x4);
            if (param_1 == 0x17) {
                iVar18 += -0x2d;
            }
            if (param_1 != 0x13) {
                if (param_1 == 0x1a) {
                    pcVar12 = _3444;
                }
                else {
                    pcVar12 = (char *)&_3445;
                }
                screenFind(&local_50,pcVar12);
                iVar11 = (iVar18 + -0x1) / 0xf + (iVar18 + -0x1 >> 0x1f);
                iVar11 -= iVar11 >> 0x1f;
                screenSetArea(local_50,iVar11 + 0x64,0x0);
                if (iVar11 == 0x1) {
                    screenSetCursor(local_50,0x64,0x4,0x2);
                    screenSetCursor(local_50,0x66,0x0,0x0);
                }
                else if (iVar11 < 0x1) {
                    if (-0x1 < iVar11) {
                        screenSetCursor(local_50,0x65,0x0,0x0);
                        screenSetCursor(local_50,0x66,0x0,0x0);
                    }
                }
                else if (iVar11 < 0x3) {
                    screenSetCursor(local_50,0x64,0x4,0x2);
                    screenSetCursor(local_50,0x65,0x4,0x2);
                }
                iVar18 += -0x1;
                iVar13 = iVar18 / 0xf + (iVar18 >> 0x1f);
                iVar18 += (iVar13 - (iVar13 >> 0x1f)) * -0xf;
                iVar13 = iVar18 / 0x5 + (iVar18 >> 0x1f);
                screenSetCursor(local_50,iVar11 + 0x64,iVar18 + (iVar13 - (iVar13 >> 0x1f)) * -0x5,
                                iVar13 - (iVar13 >> 0x1f));
            }
            screenFind(&local_50,_1653);
            if (param_1 == 0x1a) {
                screenSetArea(local_50,0x65,0x0);
            }
            else {
                screenSetArea(local_50,0x64,0x0);
                if (iVar1 == 0x3) {
                    screenSetCursor(local_50,0x64,0x1,0x0);
                }
                else if (iVar1 < 0x3) {
                    if (iVar1 == 0x1) {
                        screenSetCursor(local_50,0x64,0x0,0x0);
                    }
                    else if (0x0 < iVar1) {
                        screenSetCursor(local_50,0x64,0x0,0x1);
                    }
                }
                else if (iVar1 == 0x5) {
                    if (param_1 == 0x17) {
                        screenSetCursor(local_50,0x64,0x2,0x0);
                    }
                    else {
                        screenSetCursor(local_50,0x64,0x2,0x1);
                    }
                }
                else if (iVar1 < 0x5) {
                    screenSetCursor(local_50,0x64,0x1,0x1);
                }
            }
            break;
        case 0x1e:
        case 0x21:
        case 0x24:
            screenFind(&local_50,_3449);
            screenSetCursor(local_50,0x64,0x0,0x1);
            screenFind(&local_50,_3452);
            if (param_1 == 0x1e) {
                screenSetCursor(local_50,0x64,0x0,0x0);
                screenFind(&local_50,_3453);
                screenSetCursor(local_50,0x64,0x0,0x0);
                screenFind(&local_50,&_1063);
            }
            else if (param_1 == 0x21) {
                screenSetCursor(local_50,0x64,0x0,0x1);
                screenFind(&local_50,_3454);
                screenSetCursor(local_50,0x64,0x0,0x0);
                screenFind(&local_50,&_1064);
            }
            else if (param_1 == 0x24) {
                screenSetCursor(local_50,0x64,0x0,0x2);
                screenFind(&local_50,_3455);
                screenSetCursor(local_50,0x64,0x0,0x0);
                screenFind(&local_50,&_1065);
            }
            screenSetCursor(local_50,0x65,iVar13 + -0x1,0x0);
            screenSetCursor(local_50,0x67,iVar3 + -0x1,0x0);
            screenSetCursor(local_50,0x66,0x0,iVar11 != 0x1);
            screenFind(&local_50,&_710);
            if (iVar18 < 0xa) {
                screenSetArea(local_50,0x64,0x0);
                iVar14 = iVar18 / 0x5 + iVar14;
                screenSetCursor(local_50,0x64,iVar18 + (iVar14 - (iVar14 >> 0x1f)) * -0x5,
                                iVar14 - (iVar14 >> 0x1f));
            }
            else {
                screenSetArea(local_50,0x65,0x0);
                screenSetCursor(local_50,0x65,iVar18 + -0xa,0x0);
            }
            if (iVar2 < 0xa) {
                screenSetArea(local_50,0x6e,0x1);
                iVar10 = iVar2 / 0x5 + iVar10;
                screenSetCursor(local_50,0x6e,iVar2 + (iVar10 - (iVar10 >> 0x1f)) * -0x5,
                                iVar10 - (iVar10 >> 0x1f));
            }
            else {
                screenSetArea(local_50,0x6f,0x1);
                screenSetCursor(local_50,0x6f,iVar2 + -0xa,0x0);
            }
            gnCountMenu += -0x1;
            break;
        case 0x27:
            screenFind(&local_50,_3449);
            screenSetCursor(local_50,0x64,0x0,0x1);
            screenFind(&local_50,_3452);
            if (geGameType == 0x40) {
                screenSetCursor(local_50,0x64,0x0,0x0);
                screenFind(&local_50,_3453);
                screenSetCursor(local_50,0x64,0x0,0x1);
            }
            else if (geGameType == 0x41) {
                screenSetCursor(local_50,0x64,0x0,0x1);
                screenFind(&local_50,_3454);
                screenSetCursor(local_50,0x64,0x0,0x1);
            }
            else if (geGameType == 0x42) {
                screenSetCursor(local_50,0x64,0x0,0x2);
                screenFind(&local_50,_3455);
                screenSetCursor(local_50,0x64,0x0,0x1);
            }
            screenFind(&local_50,_1224);
            screenSetCursor(local_50,0x64,local_4c,0x0);
            screenSetCursor(local_50,0x6e,uVar15,0x0);
            screenSetCursor(local_50,0x78,uVar6,0x0);
            screenSetCursor(local_50,0x82,uVar9,0x0);
            screenSetCursor(local_50,0x65,iVar13 + -0x1,0x0);
            screenSetCursor(local_50,0x6f,iVar3 + -0x1,0x0);
            screenSetCursor(local_50,0x79,iVar5 + -0x1,0x0);
            screenSetCursor(local_50,0x83,iVar8 + -0x1,0x0);
            screenFind(&local_50,_1225);
            if (iVar18 < 0xa) {
                screenSetArea(local_50,0x64,0x0);
                iVar14 = iVar18 / 0x5 + iVar14;
                screenSetCursor(local_50,0x64,iVar18 + (iVar14 - (iVar14 >> 0x1f)) * -0x5,
                                iVar14 - (iVar14 >> 0x1f));
            }
            else {
                screenSetArea(local_50,0x65,0x0);
                screenSetCursor(local_50,0x65,iVar18 + -0xa,0x0);
            }
            if (iVar2 < 0xa) {
                screenSetArea(local_50,0x6e,0x1);
                iVar10 = iVar2 / 0x5 + iVar10;
                screenSetCursor(local_50,0x6e,iVar2 + (iVar10 - (iVar10 >> 0x1f)) * -0x5,
                                iVar10 - (iVar10 >> 0x1f));
            }
            else {
                screenSetArea(local_50,0x6f,0x1);
                screenSetCursor(local_50,0x6f,iVar2 + -0xa,0x0);
            }
            if (iVar4 < 0xa) {
                screenSetArea(local_50,0x78,0x2);
                iVar11 = iVar4 / 0x5 + (iVar4 >> 0x1f);
                screenSetCursor(local_50,0x78,iVar4 + (iVar11 - (iVar11 >> 0x1f)) * -0x5,
                                iVar11 - (iVar11 >> 0x1f));
            }
            else {
                screenSetArea(local_50,0x79,0x2);
                screenSetCursor(local_50,0x79,iVar4 + -0xa,0x0);
            }
            if (iVar7 < 0xa) {
                screenSetArea(local_50,0x82,0x3);
                iVar11 = iVar7 / 0x5 + (iVar7 >> 0x1f);
                screenSetCursor(local_50,0x82,iVar7 + (iVar11 - (iVar11 >> 0x1f)) * -0x5,
                                iVar11 - (iVar11 >> 0x1f));
            }
            else {
                screenSetArea(local_50,0x83,0x3);
                screenSetCursor(local_50,0x83,iVar7 + -0xa,0x0);
            }
            gnCountMenu += -0x1;
            break;
        case 0x28:
            screenFind(&local_50,_3449);
            screenSetCursor(local_50,0x64,0x0,0x2);
            screenFind(&local_50,_3458);
            screenSetCursor(local_50,0x64,0x0,iVar1);
            break;
        case 0x2b:
        case 0x2c:
            screenFind(&local_50,_3449);
            screenSetCursor(local_50,0x64,0x0,0x3);
            screenFind(&local_50,_3460);
            if (param_1 == 0x2b) {
                screenSetCursor(local_50,0x64,0x0,0x0);
                screenFind(&local_50,_3461);
                screenSetCursor(local_50,0x64,0x0,iVar13 + -0x1);
            }
            else {
                screenSetCursor(local_50,0x64,0x0,0x1);
                screenFind(&local_50,_3462);
                screenSetCursor(local_50,0x64,0x0,iVar13 + -0x1);
            }
            break;
        case 0x2d:
            screenFind(&local_50,_3449);
            screenSetCursor(local_50,0x64,0x0,0x3);
            screenFind(&local_50,_3460);
            screenSetCursor(local_50,0x64,0x0,0x2);
            break;
        case 0x31:
            screenFind(&local_50,_3449);
            screenSetCursor(local_50,0x64,0x0,0x5);
            screenFind(&local_50,_3465);
            screenSetCursor(local_50,0x64,0x0,0x1);
            break;
        case 0x35:
            screenFind(&local_50,_3449);
            screenSetCursor(local_50,0x64,0x0,0x5);
            screenFind(&local_50,_3465);
            screenSetCursor(local_50,0x64,0x0,0x1);
            screenFind(&local_50,_2208);
            screenSetCursor(local_50,0x64,0x0,iVar1);
            gnCountMenu += -0x1;
        }
    }
    return;
}



undefined4 menuMany(void)

{
    bool bVar1;
    int iVar2;
    undefined4 uVar3;
    int iVar4;
    int local_1c;
    int local_18;
    int local_14 [0x2];
    
    iVar4 = 0x0;
    screenGetCursor(giScreenMenu,0x64,&local_18,&local_1c);
    if (true) {
        switch(geTypeMenu) {
        case 0x3:
            if (local_1c == 0x3) {
                iVar4 = 0x2a;
            }
            else if (local_1c < 0x3) {
                if (local_1c == 0x1) {
                    iVar4 = 0x3c;
                }
                else if (local_1c < 0x1) {
                    if (-0x1 < local_1c) {
                        iVar4 = 0x4;
                    }
                }
                else {
                    iVar4 = 0x28;
                }
            }
            else if (local_1c == 0x5) {
                iVar4 = 0x31;
            }
            else if (local_1c < 0x5) {
                iVar4 = 0x2e;
            }
            break;
        case 0x4:
            if (local_1c == 0x2) {
                iVar4 = 0xa;
            }
            else if (local_1c < 0x2) {
                if (local_1c == 0x0) {
                    iVar4 = 0x5;
                }
                else if (-0x1 < local_1c) {
                    iVar4 = 0x8;
                }
            }
            else if (local_1c == 0x4) {
                iVar4 = 0x12;
            }
            else if (local_1c < 0x4) {
                iVar4 = 0xd;
            }
            break;
        case 0x13:
            screenGetArea(giScreenMenu,local_14,0x0);
            if (local_14[0] == 0x65) {
                iVar4 = 0x1a;
            }
            else if ((local_18 == 0x0) && (local_1c == 0x0)) {
                iVar4 = 0x14;
            }
            else if ((local_18 == 0x1) && (local_1c == 0x0)) {
                iVar4 = 0x15;
            }
            else if ((local_18 == 0x2) && (local_1c == 0x0)) {
                iVar4 = 0x17;
            }
            else if ((local_18 == 0x0) && (local_1c == 0x1)) {
                iVar4 = 0x16;
            }
            else if ((local_18 == 0x1) && (local_1c == 0x1)) {
                iVar4 = 0x18;
            }
            else if ((local_18 == 0x2) && (local_1c == 0x1)) {
                iVar4 = 0x19;
            }
            break;
        case 0x1b:
            if (local_1c == 0x1) {
                iVar4 = 0x1f;
            }
            else if (local_1c < 0x1) {
                if (-0x1 < local_1c) {
                    iVar4 = 0x1c;
                }
            }
            else if (local_1c < 0x3) {
                iVar4 = 0x22;
            }
            break;
        case 0x28:
            if (local_1c == 0x0) {
                iVar4 = 0x29;
            }
            else {
                iVar4 = 0x2;
            }
            break;
        case 0x2a:
            if (local_1c == 0x1) {
                iVar4 = 0x2c;
            }
            else if (local_1c < 0x1) {
                if (-0x1 < local_1c) {
                    iVar4 = 0x2b;
                }
            }
            else if (local_1c < 0x3) {
                iVar4 = 0x2d;
            }
            break;
        case 0x2e:
            if (local_1c == 0x1) {
                iVar4 = 0x30;
            }
            else if ((local_1c < 0x1) && (-0x1 < local_1c)) {
                if (gTheGame._120458_2_ == 0x0) {
                    iVar2 = 0x0;
                }
                else if (gTheGame._122634_2_ == 0x0) {
                    iVar2 = 0x1;
                }
                else if (gTheGame._124810_2_ == 0x0) {
                    iVar2 = 0x2;
                }
                else if (gTheGame._126986_2_ == 0x0) {
                    iVar2 = 0x3;
                }
                else if (gTheGame._129162_2_ == 0x0) {
                    iVar2 = 0x4;
                }
                else if (gTheGame._131338_2_ == 0x0) {
                    iVar2 = 0x5;
                }
                else if (gTheGame._133514_2_ == 0x0) {
                    iVar2 = 0x6;
                }
                else if (gTheGame._135690_2_ == 0x0) {
                    iVar2 = 0x7;
                }
                else {
                    iVar2 = -0x1;
                }
                if (iVar2 == -0x1) {
                    gnTagDialog = 0xc8;
                    giPlayerDialog = 0x0;
                    screenShowDialog(giScreenMenu,0xc8);
                    gnTickCountDialog = 0x0;
                    PlaySE(SFX_INIT_TABLE,0x7);
                }
                else {
                    iVar4 = 0x2f;
                }
            }
            break;
        case 0x31:
            if (local_1c == 0x3) {
                iVar4 = 0x39;
            }
            else if (local_1c < 0x3) {
                if (local_1c == 0x1) {
                    iVar4 = 0x34;
                }
                else if (local_1c < 0x1) {
                    if (-0x1 < local_1c) {
                        iVar4 = 0x32;
                    }
                }
                else {
                    iVar4 = 0x37;
                }
            }
            else if (local_1c == 0x5) {
                iVar4 = 0x3b;
            }
            else if (local_1c < 0x5) {
                iVar4 = 0x3a;
            }
            break;
        case 0x34:
            if (local_1c == 0x3) {
                iVar4 = 0x36;
            }
            else if ((local_1c < 0x3) && (-0x1 < local_1c)) {
                iVar4 = 0x35;
            }
            break;
        case 0x3c:
            if (local_1c == 0x1) {
                geGameType = 0x41;
                iVar4 = 0x3e;
            }
            else if (local_1c < 0x1) {
                if (-0x1 < local_1c) {
                    geGameType = 0x40;
                    iVar4 = 0x3d;
                }
            }
            else if (local_1c < 0x3) {
                geGameType = 0x42;
                iVar4 = 0x3f;
            }
            break;
        case 0x3d:
            if (local_1c == 0x1) {
                gDoMenu4pFlag = 0xffffffff;
                iVar4 = 0x26;
            }
            else if (((local_1c < 0x1) && (-0x1 < local_1c)) && ((gValidControllers & 0x3) == 0x3))
            {
                iVar4 = 0x1c;
            }
            break;
        case 0x3e:
            if (local_1c == 0x1) {
                gDoMenu4pFlag = 0xffffffff;
                iVar4 = 0x26;
            }
            else if (((local_1c < 0x1) && (-0x1 < local_1c)) && ((gValidControllers & 0x3) == 0x3))
            {
                iVar4 = 0x1f;
            }
            break;
        case 0x3f:
            if (local_1c == 0x1) {
                gDoMenu4pFlag = 0xffffffff;
                iVar4 = 0x26;
            }
            else if (((local_1c < 0x1) && (-0x1 < local_1c)) && ((gValidControllers & 0x3) == 0x3))
            {
                iVar4 = 0x22;
            }
        }
    }
    bVar1 = false;
    if ((iVar4 != 0x0) && (iVar4 = menuNest(iVar4), iVar4 != 0x0)) {
        bVar1 = true;
    }
    if (bVar1) {
        uVar3 = 0xffffffff;
    }
    else {
        uVar3 = 0x0;
    }
    return uVar3;
}



void menuTickTimeout(void)

{
    uint uVar1;
    
    if ((gTheGame._90948_2_ == 0x0) && (gTheGame._90964_2_ == 0x0)) {
        gnTickCountMenu += 0x1;
        if (((gnTickCountMenu == 0x2a30) || (gnTickCountMenu == 0x4650)) ||
           (gnTickCountMenu == 0x5460)) {
            uVar1 = osGetCount();
            uVar1 = (uVar1 & 0xf) % 0x5;
            if (((((gnMaskVoice & 0x1 << uVar1) != 0x0) && (uVar1 = 0x0, (gnMaskVoice & 0x1) != 0x0)
                 ) && ((uVar1 = 0x1, (gnMaskVoice & 0x2) != 0x0 &&
                       ((uVar1 = 0x2, (gnMaskVoice & 0x4) != 0x0 &&
                        (uVar1 = 0x3, (gnMaskVoice & 0x8) != 0x0)))))) &&
               (uVar1 = 0x4, (gnMaskVoice & 0x10) != 0x0)) {
                uVar1 = 0x5;
            }
            if (uVar1 == 0x3) {
                PlaySE(SFX_INIT_TABLE,0x131);
            }
            if (0x545f < gnTickCountMenu) {
                gnMaskVoice = 0x0;
                gnTickCountMenu = 0x0;
            }
            gnMaskVoice |= 0x1 << uVar1;
        }
    }
    else {
        gnMaskVoice = 0x0;
        gnTickCountMenu = 0x0;
    }
    return;
}



void menuPlayOK(int param_1)

{
    int iVar1;
    int local_c [0x2];
    
    if (gnPlayerCount == 0x2) {
        if (param_1 == 0x1) {
            PlaySE(SFX_INIT_TABLE,0x100);
        }
        else {
            PlaySE(SFX_INIT_TABLE,0xff);
        }
    }
    else if (gnPlayerCount != 0x4) {
        iVar1 = screenChangePending();
        if ((((iVar1 == 0x0) && (geTypeMenu == 0x2f)) &&
            (iVar1 = screenGetArea(giScreenMenu,local_c,0x0), iVar1 != 0x0)) && (local_c[0] == 0x64)
           ) {
            PlaySE(SFX_INIT_TABLE,0x46);
        }
        else if (geTypeMenu == 0x2) {
            PlaySE(SFX_INIT_TABLE,0x3);
        }
        else {
            PlaySE(SFX_INIT_TABLE,0x2);
        }
    }
    return;
}



void menuPlayCursorWave(undefined4 param_1,int param_2,int param_3)

{
    int iVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int local_34;
    int local_30;
    undefined auStack_2c [0x4];
    undefined auStack_28 [0x4];
    uint local_24;
    uint local_20 [0x2];
    undefined4 local_18;
    uint uStack_14;
    
    iVar1 = screenGetArea(param_1,local_20,param_2);
    if (iVar1 != 0x0) {
        screenGetCursor(param_1,local_20[0],&local_24,auStack_28);
    }
    iVar1 = *(int *)(param_3 + param_2 * 0x4);
    if ((iVar1 == 0x3) || (iVar1 == 0x4)) {
        if ((geTypeMenu == 0x6) || (geTypeMenu == 0xb)) {
            if (local_20[0] == 0x64) {
                PlaySE(SFX_INIT_TABLE,0x116);
                uStack_14 = local_24 ^ 0x80000000;
                local_18 = 0x43300000;
                SetFrequencySFX((double)(((float)((double)CONCAT44(0x43300000,uStack_14) -
                                                 4503601774854144.0) - 50.0) * 0.03));
                return;
            }
            PlaySE(SFX_INIT_TABLE,0x33);
            return;
        }
        if (((geTypeMenu == 0x9) || (geTypeMenu == 0x11)) || (geTypeMenu == 0x13)) {
            PlaySE(SFX_INIT_TABLE,0x33);
            return;
        }
        if (((geTypeMenu == 0x1d) || (geTypeMenu == 0x20)) || (geTypeMenu == 0x23)) {
            if ((local_20[0] != 0x65) && (local_20[0] != 0x67)) {
                uVar3 = PlaySE(SFX_INIT_TABLE,0x33);
                if (param_2 == 0x0) {
                    uVar4 = 0x1b;
                }
                else {
                    uVar4 = 0xe3;
                }
                SetPanSFX(uVar3,uVar4);
                return;
            }
            if (param_2 == 0x0) {
                uVar3 = 0x135;
            }
            else {
                uVar3 = 0x136;
            }
            PlaySE(SFX_INIT_TABLE,uVar3);
            uStack_14 = local_24 ^ 0x80000000;
            local_18 = 0x43300000;
            SetFrequencySFX((double)(((float)((double)CONCAT44(0x43300000,uStack_14) -
                                             4503601774854144.0) - 5.0) * 0.03));
            return;
        }
    }
    if (geTypeMenu == 0x2f) {
        screenGetArea(param_1,local_20,param_2);
        if (local_20[0] == 0x64) {
            gnCountNameEntry += 0x1;
            if (gnCountNameEntry == 0x6) {
                uVar2 = osGetCount();
                if ((uVar2 & 0x1) == 0x0) {
                    uVar3 = 0x11a;
                }
                else {
                    uVar3 = 0x125;
                }
                PlaySE(SFX_INIT_TABLE,uVar3);
            }
        }
        else {
            gnCountNameEntry = 0x0;
        }
        if ((local_20[0] == 0x64) || (local_20[0] == 0x67)) {
            PlaySE(SFX_INIT_TABLE,0x10f);
        }
        else {
            uVar3 = PlaySE(SFX_INIT_TABLE,0x1);
            screenGetArea(giScreenMenu,&local_34,0x0);
            screenGetCursor(giScreenMenu,local_34,&local_30,auStack_2c);
            if (local_34 == 0x65) {
                SetPanSFX(uVar3,(0x5 - local_30) * -0x14 + 0x7f);
            }
            else if (local_34 == 0x66) {
                SetPanSFX(uVar3,local_30 * 0x14 + 0x7f);
            }
        }
    }
    else if (geTypeMenu == 0x33) {
        if ((iVar1 - 0x11U < 0x2) || (iVar1 - 0x1U < 0x2)) {
            PlaySE(SFX_INIT_TABLE,0x1);
        }
        else {
            PlaySE(SFX_INIT_TABLE,0x33);
        }
    }
    else {
        uVar3 = PlaySE(SFX_INIT_TABLE,0x1);
        if (gnPlayerCount == 0x2) {
            if (param_2 == 0x0) {
                uVar4 = 0x1b;
            }
            else {
                uVar4 = 0xe3;
            }
            SetPanSFX(uVar3,uVar4);
        }
        else if (geTypeMenu == 0x11) {
            screenGetArea(param_1,local_20,param_2);
            if ((local_20[0] & 0x1) == 0x0) {
                uVar4 = 0x1b;
            }
            else {
                uVar4 = 0xe3;
            }
            SetPanSFX(uVar3,uVar4);
        }
        else if (geTypeMenu - 0x14U < 0x5) {
            screenGetArea(param_1,local_20,param_2);
            if (local_20[0] == 0x64) {
                uVar4 = 0x43;
            }
            else if (local_20[0] == 0x65) {
                uVar4 = 0x7f;
            }
            else {
                uVar4 = 0xbb;
            }
            SetPanSFX(uVar3,uVar4);
        }
        else if (geTypeMenu == 0x19) {
            screenGetArea(param_1,local_20,param_2);
        }
    }
    return;
}



undefined4 menuInitUser(int param_1)

{
    undefined4 uVar1;
    int iVar2;
    
    if ((param_1 < 0x0) || (0x7 < param_1)) {
        uVar1 = 0x0;
    }
    else {
        iVar2 = param_1 * 0x880;
        gTheGame[iVar2 + 0x1d688] = (char)param_1;
        bzero(gTheGame + iVar2 + 0x1d68a,0xe);
        *(undefined4 *)(gTheGame + iVar2 + 0x1d698) = 0x0;
        *(undefined4 *)(gTheGame + iVar2 + 0x1d69c) = 0x0;
        *(undefined4 *)(gTheGame + iVar2 + 0x1d6a0) = 0x0;
        *(undefined4 *)(gTheGame + iVar2 + 0x1d6a4) = 0x0;
        *(undefined4 *)(gTheGame + iVar2 + 0x1d6a8) = 0x0;
        *(undefined4 *)(gTheGame + iVar2 + 0x1d6b0) = 0x0;
        gTheGame[iVar2 + 0x1d6b8] = 0x0;
        gTheGame[iVar2 + 0x1d6b9] = 0x0;
        gTheGame[iVar2 + 0x1d6ba] = 0x0;
        bzero(gTheGame + iVar2 + 0x1d6bb,0x6);
        bzero(gTheGame + iVar2 + 0x1d6c4,0x80);
        gTheGame[iVar2 + 0x1d744] = 0x0;
        gTheGame[iVar2 + 0x1d745] = 0x0;
        gTheGame[iVar2 + 0x1d746] = 0x0;
        bzero(gTheGame + iVar2 + 0x1d747,0x6);
        bzero(gTheGame + iVar2 + 0x1d750,0x80);
        gTheGame[iVar2 + 0x1d7d0] = 0x0;
        gTheGame[iVar2 + 0x1d7d1] = 0x0;
        gTheGame[iVar2 + 0x1d7d2] = 0x0;
        bzero(gTheGame + iVar2 + 0x1d7d3,0x6);
        bzero(gTheGame + iVar2 + 0x1d7d9,0x6);
        bzero(gTheGame + iVar2 + 0x1d7df,0x6);
        bzero(gTheGame + iVar2 + 0x1d7e5,0x6);
        bzero(gTheGame + iVar2 + 0x1d7eb,0xc);
        gTheGame[iVar2 + 0x1d7f7] = 0x0;
        gTheGame[iVar2 + 0x1d7f8] = 0x0;
        gTheGame[iVar2 + 0x1d7f9] = 0x0;
        gTheGame[iVar2 + 0x1d7fa] = 0x0;
        gTheGame[iVar2 + 0x1d7fb] = 0x0;
        gTheGame[iVar2 + 0x1d7fc] = 0x0;
        gTheGame[iVar2 + 0x1d7fd] = 0x0;
        gTheGame[iVar2 + 0x1d7fe] = 0x0;
        gTheGame[iVar2 + 0x1d7ff] = 0x0;
        gTheGame[iVar2 + 0x1d800] = 0x0;
        *(undefined2 *)(gTheGame + iVar2 + 0x1d802) = 0x0;
        *(undefined2 *)(gTheGame + iVar2 + 0x1d804) = 0x0;
        *(undefined2 *)(gTheGame + iVar2 + 0x1d806) = 0x0;
        *(undefined2 *)(gTheGame + iVar2 + 0x1d808) = 0x0;
        *(undefined2 *)(gTheGame + iVar2 + 0x1d80a) = 0x0;
        *(undefined2 *)(gTheGame + iVar2 + 0x1d80c) = 0x0;
        *(undefined2 *)(gTheGame + iVar2 + 0x1d80e) = 0x0;
        *(undefined2 *)(gTheGame + iVar2 + 0x1d810) = 0x0;
        *(undefined2 *)(gTheGame + iVar2 + 0x1d812) = 0x0;
        *(undefined2 *)(gTheGame + iVar2 + 0x1d814) = 0x0;
        *(undefined2 *)(gTheGame + iVar2 + 0x1d816) = 0x0;
        *(undefined2 *)(gTheGame + iVar2 + 0x1d818) = 0x0;
        *(undefined2 *)(gTheGame + iVar2 + 0x1d81a) = 0x0;
        bzero(gTheGame + iVar2 + 0x1d81c,0x8);
        bzero(gTheGame + iVar2 + 0x1d824,0x8);
        bzero(gTheGame + iVar2 + 0x1d82c,0x8);
        bzero(gTheGame + iVar2 + 0x1d834,0x8);
        bzero(gTheGame + iVar2 + 0x1d83c,0x8);
        bzero(gTheGame + iVar2 + 0x1d844,0x8);
        bzero(gTheGame + iVar2 + 0x1d84c,0x8);
        bzero(gTheGame + iVar2 + 0x1d854,0x8);
        bzero(gTheGame + iVar2 + 0x1d85c,0x8);
        bzero(gTheGame + iVar2 + 0x1d864,0x8);
        bzero(gTheGame + iVar2 + 0x1d86c,0x8);
        bzero(gTheGame + iVar2 + 0x1d874,0x8);
        bzero(gTheGame + iVar2 + 0x1d87c,0x672);
        bzero(gTheGame + iVar2 + 0x1deee,0x12);
        uVar1 = 0xffffffff;
    }
    return uVar1;
}



void menuInitProfile(undefined4 param_1,int param_2)

{
    undefined4 uVar1;
    int iVar2;
    int local_18;
    int local_14;
    
    uVar1 = Pon_Image_Heap;
    iVar2 = param_2;
    if (param_2 == 0x9) {
        iVar2 = 0xa;
    }
    screenSetBack(iVar2);
    giImageFairy = 0x0;
    LoadCharacterProfileOffset(param_2,&local_18,&local_14);
    n642Dolphin_AllchangeTexture();
    Pon_DVDRead_lev_2(param_2,0x0);
    imageLoadROM((int)&gapImageFairy + giImageFairy * 0x4,
                 **(int **)(gaSegmentCharacter + param_2 * 0x4) + local_14,
                 **(int **)(gaSegmentCharacter + param_2 * 0x4) + local_18,0x433,0x80,0xc0,
                 &Pon_Image_Heap);
    screenHideText(param_1,0x819080c8);
    screenShowText(param_1,param_2 * 0xa + 0xc8);
    screenShowText(param_1,param_2 * 0xa + 0xc9);
    screenSlowText();
    screenSlowText();
    screenSlowText();
    Pon_Image_Heap = uVar1;
    return;
}



void menuTickProfile(undefined4 param_1,int param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    int local_20 [0x2];
    
    iVar3 = param_2 * 0xa;
    param_2 *= 0x10;
    puVar1 = (undefined4 *)(ganColorCharacter + param_2);
    screenSetTextColor(param_1,iVar3 + 0xc8,*puVar1,0x0);
    puVar2 = (undefined4 *)(ganColorCharacter + param_2 + 0x4);
    screenSetTextColor(param_1,iVar3 + 0xc9,*puVar1,*puVar2);
    screenSetTextColor(param_1,iVar3 + 0xca,*puVar1,*puVar2);
    iVar3 = screenGetImage(param_1,0x6e,local_20);
    if (iVar3 != 0x0) {
        *(undefined4 *)(local_20[0] + 0x94) = *puVar1;
        *(undefined4 *)(local_20[0] + 0x98) = *puVar2;
    }
    iVar3 = screenGetImage(param_1,0x82,local_20);
    if (iVar3 != 0x0) {
        *(undefined4 *)(local_20[0] + 0x94) = *(undefined4 *)(ganColorCharacter + param_2 + 0x8);
    }
    iVar3 = screenGetImage(param_1,0x8c,local_20);
    if (iVar3 != 0x0) {
        *(undefined4 *)(local_20[0] + 0x94) = 0xffffffff;
    }
    return;
}



void menuDrawProfile(undefined4 *param_1,undefined4 param_2,int param_3)

{
    undefined4 *puVar1;
    
    if (param_3 == 0x78) {
        imageDraw(*(undefined4 *)((int)&gapImageFairy + giImageFairy * 0x4),param_1,0x24,0x18,0x0);
    }
    else if ((param_3 < 0x78) && (param_3 == 0x64)) {
        puVar1 = (undefined4 *)*param_1;
        *puVar1 = 0xe7000000;
        puVar1[0x1] = 0x0;
        puVar1[0x2] = 0xe3000a01;
        puVar1[0x3] = 0x0;
        puVar1[0x4] = 0xe2001e01;
        puVar1[0x5] = 0x0;
        puVar1[0x6] = 0xfa000000;
        puVar1[0x7] = 0x50;
        puVar1[0x8] = 0xe200001c;
        puVar1[0x9] = 0x504240;
        puVar1[0xa] = 0xfcffffff;
        puVar1[0xb] = 0xfffdf6fb;
        puVar1[0xc] = 0xd9ddf9fa;
        puVar1[0xd] = 0x0;
        puVar1[0xe] = 0xf6248368;
        puVar1[0xf] = 0x88054;
        puVar1[0x10] = 0xf64680c4;
        puVar1[0x11] = 0x2a8054;
        puVar1[0x12] = 0xf6468368;
        puVar1[0x13] = 0x2a8114;
        *param_1 = puVar1 + 0x14;
    }
    return;
}



void menuInitFairy(int param_1)

{
    if (param_1 == 0x3) {
        gnPositionFairyX = 0x7a;
        gnPositionFairyY = 0x3e;
        return;
    }
    if (0x2 < param_1) {
        if (0x4 < param_1) {
            return;
        }
        gnPositionFairyX = 0xba;
        gnPositionFairyY = 0x5e;
        return;
    }
    if (param_1 == 0x1) {
        gnPositionFairyX = 0x16;
        gnPositionFairyY = 0x5e;
        return;
    }
    if (param_1 < 0x1) {
        return;
    }
    gnPositionFairyX = 0x56;
    gnPositionFairyY = 0x3e;
    return;
}



void menuTickFairy(int param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6,
                  int param_7)

{
    byte bVar1;
    bool bVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    float fVar7;
    int local_50 [0x5];
    uint local_3c;
    int local_38 [0x2];
    longlong local_30;
    undefined4 local_28;
    uint uStack_24;
    
    iVar5 = 0x0;
    iVar4 = 0x0;
    if (param_6 == 0x3) {
        iVar4 = 0x7a;
        iVar5 = 0x3e;
    }
    else if (param_6 < 0x3) {
        if (param_6 == 0x1) {
            iVar4 = 0x16;
            iVar5 = 0x5e;
        }
        else if (0x0 < param_6) {
            iVar4 = 0x56;
            iVar5 = 0x3e;
        }
    }
    else if (param_6 < 0x5) {
        iVar4 = 0xba;
        iVar5 = 0x5e;
    }
    if (gnPositionFairyX < iVar4) {
        gnPositionFairyX += 0x1;
    }
    if (iVar4 < gnPositionFairyX) {
        gnPositionFairyX += -0x1;
    }
    if (gnPositionFairyY < iVar5) {
        gnPositionFairyY += 0x1;
    }
    if (iVar5 < gnPositionFairyY) {
        gnPositionFairyY += -0x1;
    }
    if (param_1 != -0x1) {
        local_50[0] = param_3;
        if (param_3 == -0x1) {
            screenGetAreaText(param_1,local_50);
        }
        if (local_50[0] != -0x1) {
            screenGetFrame(param_1,0x258,&local_3c);
            iVar4 = screenTextDonePage(param_1,local_50[0]);
            if (iVar4 == 0x0) {
                local_3c = (param_2 >> 0x3 & 0x1) + 0x5;
            }
            else if (((int)local_3c < 0x1) || (0x3 < (int)local_3c)) {
                bVar1 = 0x0;
                if (((param_2 & 0xf) == 0x0) && (uVar3 = osGetCount(), (uVar3 & 0x3) == 0x0)) {
                    bVar1 = 0x1;
                }
                local_3c = (uint)bVar1;
            }
            else {
                bVar2 = true;
                if ((local_3c != 0x1) && (local_3c != 0x3)) {
                    bVar2 = false;
                }
                if (bVar2) {
                    uVar3 = 0x1;
                }
                else {
                    uVar3 = 0x7;
                }
                if (((param_2 & uVar3) == 0x0) && (local_3c += 0x1, local_3c == 0x4)) {
                    local_3c = 0x0;
                }
            }
            screenSetFrame(param_1,0x258,local_3c);
        }
        iVar4 = screenGetImage(param_1,0x258,local_38);
        if (iVar4 != 0x0) {
            if (gnPositionFairyX < 0x68) {
                *(uint *)(local_38[0] + 0xc) = *(uint *)(local_38[0] + 0xc) | 0x10000;
            }
            else {
                *(uint *)(local_38[0] + 0xc) = *(uint *)(local_38[0] + 0xc) & 0xfffeffff;
            }
        }
        uStack_24 = param_2 & 0x3f ^ 0x80000000;
        local_28 = 0x43300000;
        fVar7 = sinf(((float)((double)CONCAT44(0x43300000,uStack_24) - 4503601774854144.0) / 63.0) *
                     6.283185);
        iVar4 = (int)(fVar7 * 8.0 + 0.5);
        local_30 = (longlong)iVar4;
        screenSetImageScale((double)((fVar7 * 8.0 * 0.03125 + 1.0) / 1.5),param_1,0x26c);
        screenSetImagePosition(param_1,0x258,gnPositionFairyX,gnPositionFairyY + iVar4);
        screenSetImagePosition(param_1,0x26c,gnPositionFairyX + 0x3c,gnPositionFairyY + 0x7e);
        screenSetImagePosition(param_1,0x259,gnPositionFairyX,gnPositionFairyY + iVar4);
        screenSetImagePosition(param_1,0x25a,gnPositionFairyX,gnPositionFairyY + iVar4);
        *(int *)(ganOffsetFairy + (param_2 & 0x7) * 0x4) = iVar4;
        iVar4 = *(int *)(ganOffsetFairy + ((param_2 + 0x1) * 0x4 & 0x1c));
        uVar3 = param_5 & 0xffff;
        if ((param_5 & 0x8000) != 0x0) {
            uVar3 |= 0xffff0000;
        }
        screenSetImagePosition
                  (param_1,0x262,gnPositionFairyX + ((int)param_5 >> 0x10) + 0x4,
                   gnPositionFairyY + iVar4 + uVar3 + -0x2c);
        if ((param_7 == 0x0) || (iVar5 = screenTextDone(param_1,local_50[0]), iVar5 == 0x0)) {
            screenHideImage(param_1,0x263);
        }
        else {
            if (gSelection == 0x6e) {
                iVar5 = -0x10;
            }
            else if ((gSelection < 0x6e) && (gSelection == 0x64)) {
                iVar5 = -0xa;
            }
            else {
                iVar5 = 0x0;
            }
            screenShowImage(param_1,0x263);
            screenSetImagePosition
                      (param_1,0x263,gnPositionFairyX + iVar5 + 0x30,gnPositionFairyY + iVar4 + 0xf)
            ;
        }
        if (local_50[0] != -0x1) {
            uVar6 = param_4 & 0xffff;
            if ((param_4 & 0x8000) != 0x0) {
                uVar6 |= 0xffff0000;
            }
            screenSetTextPosition
                      (param_1,local_50[0],
                       gnPositionFairyX + ((int)param_4 >> 0x10) + ((int)param_5 >> 0x10) + 0x6,
                       gnPositionFairyY + iVar4 + uVar6 + uVar3 + -0x24);
        }
    }
    return;
}



void menuFindCharacterMax(int *param_1)

{
    undefined1 *puVar1;
    int iVar2;
    int iVar3;
    
    iVar3 = 0x4;
    puVar1 = gTheGame;
    iVar2 = 0x8;
    do {
        if (iVar2 < (char)puVar1[0x1d7f7]) {
            iVar2 = (int)(char)puVar1[0x1d7f7];
        }
        if (iVar2 < (char)puVar1[0x1d7f8]) {
            iVar2 = (int)(char)puVar1[0x1d7f8];
        }
        if (iVar2 < (char)puVar1[0x1d7f9]) {
            iVar2 = (int)(char)puVar1[0x1d7f9];
        }
        if (iVar2 < (char)puVar1[0x1d7fa]) {
            iVar2 = (int)(char)puVar1[0x1d7fa];
        }
        if (iVar2 < (char)puVar1[0x1d7fb]) {
            iVar2 = (int)(char)puVar1[0x1d7fb];
        }
        if (iVar2 < (char)puVar1[0x1e077]) {
            iVar2 = (int)(char)puVar1[0x1e077];
        }
        if (iVar2 < (char)puVar1[0x1e078]) {
            iVar2 = (int)(char)puVar1[0x1e078];
        }
        if (iVar2 < (char)puVar1[0x1e079]) {
            iVar2 = (int)(char)puVar1[0x1e079];
        }
        if (iVar2 < (char)puVar1[0x1e07a]) {
            iVar2 = (int)(char)puVar1[0x1e07a];
        }
        if (iVar2 < (char)puVar1[0x1e07b]) {
            iVar2 = (int)(char)puVar1[0x1e07b];
        }
        puVar1 = puVar1 + 0x1100;
        iVar3 += -0x1;
    } while (iVar3 != 0x0);
    if (0xf < iVar2) {
        iVar2 = 0xf;
    }
    *param_1 = iVar2;
    return;
}



void DrawMenu(undefined4 param_1)

{
    int iVar1;
    pointer_____offset_0x448___ *ppuVar2;
    pointer_____offset_0x448___ *unaff_r29;
    int iVar3;
    
    gpDynamicForMenu = param_1;
    if (gnSkipFrame < 0x1) {
        if (gReset == 0x0) {
            if (geTypeMenu == (pointer_____offset_0x448___)0x2) {
                iVar3 = 0x3e;
                ppuVar2 = &gaMenuData;
                iVar1 = 0x0;
                do {
                    if (*(pointer_____offset_0x448___ *)(ganPick + gnCountMenu * 0x4 + 0xc) ==
                        ppuVar2[0x4]) {
                        iVar3 = -0x1;
                        unaff_r29 = &gaMenuData + iVar1 * 0x6;
                        goto LAB_000864c4;
                    }
                    ppuVar2 = ppuVar2 + 0x6;
                    iVar1 += 0x1;
                    iVar3 += -0x1;
                } while (iVar3 != 0x0);
                iVar3 = 0x0;
LAB_000864c4:
                if (iVar3 != 0x0) {
                    screenDraw(&glistp,unaff_r29[0x2]);
                }
            }
            iVar3 = 0x3e;
            ppuVar2 = &gaMenuData;
            iVar1 = 0x0;
            do {
                if (geTypeMenu == ppuVar2[0x4]) {
                    iVar3 = -0x1;
                    unaff_r29 = &gaMenuData + iVar1 * 0x6;
                    goto LAB_00086524;
                }
                ppuVar2 = ppuVar2 + 0x6;
                iVar1 += 0x1;
                iVar3 += -0x1;
            } while (iVar3 != 0x0);
            iVar3 = 0x0;
LAB_00086524:
            if (iVar3 == 0x0) {
                screenDraw(&glistp,0x0);
            }
            else {
                screenDraw(&glistp,unaff_r29[0x2]);
            }
            if (geTypeMenu == (pointer_____offset_0x448___)0x2) {
                pon_DrawLoadingMessage(&glistp);
            }
        }
    }
    else {
        gnSkipFrame += -0x1;
    }
    return;
}



void DoMenu(void)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    undefined4 uVar4;
    pointer_____offset_0x448___ *ppuVar5;
    int *piVar6;
    int *piVar7;
    undefined1 *puVar8;
    int *piVar9;
    pointer_____offset_0x448___ puVar10;
    int *piVar11;
    undefined1 *puVar12;
    int *piVar13;
    uint *puVar14;
    uint *puVar15;
    int unaff_r28;
    pointer_____offset_0x448___ *unaff_r31;
    int iVar16;
    int local_a8;
    int local_a4;
    int local_a0;
    int local_9c;
    int local_98;
    undefined4 local_94;
    int local_90;
    int local_8c [0x4];
    int local_7c [0x4];
    uint local_6c [0x4];
    uint local_5c [0x4];
    undefined4 local_4c [0x2];
    
    iVar2 = screenFlushing();
    if ((iVar2 == 0x0) && (geTypeMenu != (pointer_____offset_0x448___)0x2)) {
        peelTick();
    }
    gnTickMenu += 0x1;
    gnFrameCount += 0x1;
    menuTickTimeout();
    local_5c[0] = (uint)gTheGame._90950_2_;
    puVar15 = local_5c;
    puVar14 = local_6c;
    local_6c[0] = (uint)gTheGame._90948_2_;
    local_5c[1] = (uint)gTheGame._90966_2_;
    local_6c[1] = (uint)gTheGame._90964_2_;
    local_5c[2] = (uint)gTheGame._90982_2_;
    local_6c[2] = (uint)gTheGame._90980_2_;
    local_5c[3] = (uint)gTheGame._90998_2_;
    local_6c[3] = (uint)gTheGame._90996_2_;
    menuTickCheat(puVar15,puVar14);
    iVar2 = peelActive();
    if ((iVar2 == 0x0) && (iVar2 = screenFlushing(), iVar2 == 0x0)) {
        iVar2 = screenChangePending();
        if (iVar2 != 0x0) {
            local_5c[0] = local_5c[0] & 0x4000;
            local_5c[1] = local_5c[1] & 0x4000;
            local_6c[0] = local_6c[0] & 0x4000;
            local_6c[1] = local_6c[1] & 0x4000;
        }
    }
    else {
        local_6c[0] = 0x0;
        local_5c[0] = 0x0;
        local_6c[1] = 0x0;
        local_5c[1] = 0x0;
    }
    if ((gnTickCountDialog != -0x1) && (gnTickCountDialog += 0x1, gnTickCountDialog == 0x78)) {
        if ((geTypeMenu == (pointer_____offset_0x448___)0x2f) && (gnTagDialog == 0x1fe)) {
            uVar3 = osGetCount();
            if ((uVar3 & 0x1) == 0x0) {
                uVar4 = 0x121;
            }
            else {
                uVar4 = 0x11f;
            }
            PlaySE(SFX_INIT_TABLE,uVar4);
        }
        if ((geTypeMenu == (pointer_____offset_0x448___)0x30) && (gnTagDialog == 0xd2)) {
            uVar3 = osGetCount();
            if ((uVar3 & 0x1) == 0x0) {
                uVar4 = 0x121;
            }
            else {
                uVar4 = 0x11d;
            }
            PlaySE(SFX_INIT_TABLE,uVar4);
        }
    }
    local_7c[0] = 0x0;
    piVar11 = local_8c;
    puVar8 = gTheGame;
    local_7c[1] = 0x0;
    puVar12 = ganPick;
    piVar13 = local_7c;
    piVar6 = piVar13;
    piVar7 = (int *)puVar12;
    piVar9 = piVar11;
    for (iVar2 = 0x0; iVar2 < gnPlayerCount; iVar2 += 0x1) {
        *piVar9 = 0x0;
        if (*(int *)(puVar8 + 0x16340) != -0x1) {
            uVar3 = 0x0;
            iVar1 = screenGetArea(giScreenMenu,local_4c,iVar2);
            if (iVar1 != 0x0) {
                uVar3 = screenGetAreaType(giScreenMenu,local_4c[0]);
            }
            if ((((uVar3 & 0x400000) != 0x0) && (iVar2 == 0x0)) ||
               (((uVar3 & 0x800000) != 0x0 && (iVar2 == 0x1)))) {
                if (((((geTypeMenu == (pointer_____offset_0x448___)0x9) &&
                      (iVar1 = screenChangePending(), iVar1 == 0x0)) &&
                     (iVar1 = screenGetArea(giScreenMenu,&local_98,iVar2), iVar1 != 0x0)) &&
                    ((local_98 == 0x64 &&
                     (screenGetCursor(giScreenMenu,0x64,&local_94,&local_90), local_90 == 0x0)))) &&
                   (iVar1 = screenTestSlot(giScreenMenu,0x64,local_94,0x1), iVar1 != 0x0)) {
                    iVar1 = -0x1;
                }
                else {
                    iVar1 = 0x0;
                }
                if (iVar1 == 0x0) {
                    *puVar15 = *puVar15 & 0xfffffbff;
                    *puVar14 = *puVar14 & 0xfffffbff;
                }
                if (((*puVar14 & 0x8000) != 0x0) && (*piVar7 == 0x0)) {
                    *piVar9 = 0x20;
                    *puVar14 = *puVar14 & 0xffff7fff;
                    *puVar15 = *puVar15 | 0x400;
                }
            }
            if ((((uVar3 & 0x1000000) != 0x0) && (iVar2 == 0x0)) ||
               (((uVar3 & 0x2000000) != 0x0 && (iVar2 == 0x1)))) {
                *puVar15 = *puVar15 & 0xfffff7ff;
                *puVar14 = *puVar14 & 0xfffff7ff;
                if (((*puVar14 & 0x4000) != 0x0) && (*piVar7 == 0x0)) {
                    *piVar9 = 0x21;
                    *puVar14 = *puVar14 & 0xffffbfff;
                    *puVar15 = *puVar15 | 0x800;
                }
            }
            uVar3 = *puVar14;
            if ((uVar3 & 0x1000) == 0x0) {
                if ((uVar3 & 0x8000) == 0x0) {
                    if ((uVar3 & 0x4000) == 0x0) {
                        if ((uVar3 & 0x20) == 0x0) {
                            if ((uVar3 & 0x10) == 0x0) {
                                if ((gnPlayerCount < 0x2) || (*piVar7 == 0x0)) {
                                    if ((*puVar15 & 0x800) != 0x0) {
                                        if (*piVar9 == 0x0) {
                                            iVar1 = 0x1;
                                        }
                                        else {
                                            iVar1 = 0x11;
                                        }
                                        *piVar6 = iVar1;
                                    }
                                    if ((*puVar15 & 0x400) != 0x0) {
                                        if (*piVar9 == 0x0) {
                                            iVar1 = 0x2;
                                        }
                                        else {
                                            iVar1 = 0x12;
                                        }
                                        *piVar6 = iVar1;
                                    }
                                    if ((*puVar15 & 0x200) != 0x0) {
                                        *piVar6 = 0x3;
                                    }
                                    if ((*puVar15 & 0x100) != 0x0) {
                                        *piVar6 = 0x4;
                                    }
                                }
                                else {
                                    uVar3 = *puVar15;
                                    if (((uVar3 & 0x800) != 0x0) ||
                                       ((((uVar3 & 0x400) != 0x0 || ((uVar3 & 0x200) != 0x0)) ||
                                        ((uVar3 & 0x100) != 0x0)))) {
                                        PlaySE(SFX_INIT_TABLE,0x8);
                                    }
                                }
                            }
                            else {
                                *piVar6 = 0x19;
                            }
                        }
                        else {
                            *piVar6 = 0x18;
                        }
                    }
                    else {
                        *piVar6 = 0x21;
                    }
                }
                else {
                    *piVar6 = 0x20;
                }
            }
            else {
                *piVar6 = 0x22;
            }
        }
        piVar9 = piVar9 + 0x1;
        puVar8 = puVar8 + 0x10;
        puVar15 = puVar15 + 0x1;
        puVar14 = puVar14 + 0x1;
        piVar7 = piVar7 + 0x1;
        piVar6 = piVar6 + 0x1;
    }
    if (gnTagDialog == -0x1) {
        iVar1 = 0x3e;
        ppuVar5 = &gaMenuData;
        iVar2 = 0x0;
        do {
            if (geTypeMenu == ppuVar5[0x4]) {
                iVar1 = -0x1;
                unaff_r31 = &gaMenuData + iVar2 * 0x6;
                goto LAB_00086b10;
            }
            ppuVar5 = ppuVar5 + 0x6;
            iVar2 += 0x1;
            iVar1 += -0x1;
        } while (iVar1 != 0x0);
        iVar1 = 0x0;
LAB_00086b10:
        if ((iVar1 != 0x0) && (unaff_r31[0x3] != NULL)) {
            for (iVar2 = 0x0; iVar2 < gnPlayerCount; iVar2 += 0x1) {
                (*(code *)unaff_r31[0x3])(gnTickMenu,iVar2,local_7c);
            }
        }
    }
    else {
        for (iVar2 = 0x0; iVar2 < gnPlayerCount; iVar2 += 0x1) {
            menuTickDialog(gnTickMenu,iVar2,local_7c);
        }
    }
    if (gReset == 0x0) {
        piVar6 = piVar13;
        for (iVar2 = 0x0; iVar2 < gnPlayerCount; iVar2 += 0x1) {
            if (*piVar6 == 0x20) {
                if (*(int *)puVar12 == 0x0) {
                    *(int *)puVar12 = -0x1;
                    if ((((int)geTypeMenu - 0x1cU < 0x2) || ((int)geTypeMenu - 0x1fU < 0x2)) ||
                       ((int)geTypeMenu - 0x22U < 0x2)) {
                        screenSetArea(giScreenMenu,0xffffffff,iVar2);
                    }
                    if ((ganPick._0_4_ == 0x0) || ((ganPick._4_4_ == 0x0 && (gnPlayerCount != 0x1)))
                       ) {
                        menuPlayOK(iVar2);
                    }
                    else {
                        if (((geTypeMenu == (pointer_____offset_0x448___)0x1c) ||
                            (geTypeMenu == (pointer_____offset_0x448___)0x1f)) ||
                           (geTypeMenu == (pointer_____offset_0x448___)0x22)) {
                            if (gnPlayerCount < 0x2) {
                                iVar1 = 0x0;
                            }
                            else {
                                screenGetCursor(giScreenMenu,0x64,&local_a8,&local_a4);
                                screenGetCursor(giScreenMenu,0x6e,&local_a0,&local_9c);
                                if ((((local_a8 + local_a4 == 0x0) || (local_a0 + local_9c == 0x0))
                                    || (local_a8 != local_a0)) || (local_a4 != local_9c)) {
                                    iVar1 = 0x0;
                                }
                                else {
                                    iVar1 = -0x1;
                                }
                            }
                            if (iVar1 != 0x0) {
                                *(int *)puVar12 = 0x0;
                                screenGetArea(giScreenMenu,local_4c,iVar2);
                                screenSetArea(giScreenMenu,local_4c[0],iVar2);
                                PlaySE(SFX_INIT_TABLE,0x7);
                                if (iVar2 < 0x4) {
                                    gnTagDialog = 0xc8;
                                    giPlayerDialog = iVar2;
                                    screenShowDialog(giScreenMenu,0xc8);
                                    gnTickCountDialog = 0x0;
                                }
                                goto LAB_00086f2c;
                            }
                        }
                        iVar16 = 0x3e;
                        ppuVar5 = &gaMenuData;
                        iVar1 = 0x0;
                        do {
                            if (geTypeMenu == ppuVar5[0x4]) {
                                iVar16 = -0x1;
                                unaff_r31 = &gaMenuData + iVar1 * 0x6;
                                goto LAB_00086d5c;
                            }
                            ppuVar5 = ppuVar5 + 0x6;
                            iVar1 += 0x1;
                            iVar16 += -0x1;
                        } while (iVar16 != 0x0);
                        iVar16 = 0x0;
LAB_00086d5c:
                        if (iVar16 != 0x0) {
                            puVar10 = unaff_r31[0x5];
                            if (puVar10 == (pointer_____offset_0x448___)0x1) {
                                iVar1 = menuMany(iVar2);
                                if (iVar1 == 0x0) {
                                    *(int *)puVar12 = 0x0;
                                }
                                else {
                                    menuPlayOK(iVar2);
                                    local_7c[1] = 0x0;
                                    local_7c[0] = 0x0;
                                }
                            }
                            else if (puVar10 == NULL) {
                                PlaySE(SFX_INIT_TABLE,0x8);
                            }
                            else {
                                if ((gnCountMenu < 0x20) &&
                                   (iVar1 = menuSetScreen(puVar10,0x0), iVar1 != 0x0)) {
                                    iVar1 = -0x1;
                                    iVar16 = gnCountMenu * 0x4;
                                    gnCountMenu = gnCountMenu + 0x1;
                                    *(pointer_____offset_0x448___ *)(gaeTypeMenu + iVar16) = puVar10
                                    ;
                                }
                                else {
                                    iVar1 = 0x0;
                                }
                                if (iVar1 == 0x0) {
                                    *(int *)puVar12 = 0x0;
                                }
                                else {
                                    menuPlayOK(iVar2);
                                    local_7c[1] = 0x0;
                                    local_7c[0] = 0x0;
                                }
                            }
                        }
                    }
                }
                else {
                    PlaySE(SFX_INIT_TABLE,0x8);
                }
            }
            else if (*piVar6 == 0x21) {
                if ((gnPlayerCount < 0x2) || (*(int *)puVar12 == 0x0)) {
                    if (gnCountMenu == 0x1) {
                        gMain = 0x1f4;
                        gReset = -0x1;
                    }
                    else if ((gnCountMenu < 0x2) ||
                            (iVar1 = menuSetScreen(*(undefined4 *)
                                                    (ganPick + gnCountMenu * 0x4 + 0xc),0xffffffff),
                            iVar1 == 0x0)) {
                        unaff_r28 = 0x0;
                    }
                    else {
                        unaff_r28 = -0x1;
                        gnCountMenu += -0x1;
                    }
                    if (unaff_r28 == 0x0) {
                        *piVar6 = 0x0;
                    }
                    else {
                        *(int *)puVar12 = 0x0;
                        screenGetArea(giScreenMenu,local_4c,iVar2);
                        screenSetArea(giScreenMenu,local_4c[0],iVar2);
                        PlaySE(SFX_INIT_TABLE,0x6);
                    }
                }
                else {
                    *(int *)puVar12 = 0x0;
                    screenGetArea(giScreenMenu,local_4c,iVar2);
                    screenSetArea(giScreenMenu,local_4c[0],iVar2);
                    PlaySE(SFX_INIT_TABLE,0x6);
                }
            }
LAB_00086f2c:
            piVar6 = piVar6 + 0x1;
            puVar12 = (undefined1 *)((int)puVar12 + 0x4);
        }
        screenTick(local_7c);
        for (iVar2 = 0x0; iVar2 < gnPlayerCount; iVar2 += 0x1) {
            if (*piVar11 == 0x20) {
                menuPlayOK(iVar2);
            }
            else if (*piVar11 == 0x21) {
                PlaySE(SFX_INIT_TABLE,0x6);
            }
            else {
                iVar1 = *piVar13;
                if (((iVar1 != 0x0) && (iVar1 != 0x20)) && (iVar1 != 0x21)) {
                    menuPlayCursorWave(giScreenMenu,iVar2,local_7c);
                }
            }
            piVar11 = piVar11 + 0x1;
            piVar13 = piVar13 + 0x1;
        }
        menuTickFairy(giScreenMenu,gnFrameCount,0xffffffff,0x0,0x0,0x4,0x0);
        menuTickFairy(giScreenMenuLast,gnFrameCount,0xffffffff,0x0,0x0,0x4,0x0);
    }
    return;
}



void pon_DoMenu4p(void)

{
    pointer_____offset_0x448___ puVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    undefined4 uVar6;
    uint *puVar7;
    int *piVar8;
    uint *puVar9;
    pointer_____offset_0x448___ *ppuVar10;
    uint *puVar11;
    uint *puVar12;
    pointer_____offset_0x448___ *unaff_r17;
    int *piVar13;
    int *piVar14;
    int *piVar15;
    undefined1 *puVar16;
    int *piVar17;
    int unaff_r30;
    uint uVar18;
    int local_98;
    undefined4 local_94;
    int local_90;
    int local_8c [0x4];
    int local_7c [0x4];
    uint local_6c [0x4];
    uint local_5c [0x4];
    undefined4 local_4c [0x2];
    
    iVar3 = screenFlushing();
    if ((iVar3 == 0x0) && (geTypeMenu != (pointer_____offset_0x448___)0x2)) {
        peelTick();
    }
    gnTickMenu += 0x1;
    gnFrameCount += 0x1;
    menuTickTimeout();
    local_5c[0] = (uint)gTheGame._90950_2_;
    puVar12 = local_5c;
    puVar11 = local_6c;
    local_6c[0] = (uint)gTheGame._90948_2_;
    local_5c[1] = (uint)gTheGame._90966_2_;
    local_6c[1] = (uint)gTheGame._90964_2_;
    local_5c[2] = (uint)gTheGame._90982_2_;
    local_6c[2] = (uint)gTheGame._90980_2_;
    local_5c[3] = (uint)gTheGame._90998_2_;
    local_6c[3] = (uint)gTheGame._90996_2_;
    menuTickCheat(puVar12,puVar11);
    iVar3 = peelActive();
    if ((iVar3 == 0x0) && (iVar3 = screenFlushing(), iVar3 == 0x0)) {
        iVar3 = screenChangePending();
        if (iVar3 != 0x0) {
            local_5c[0] = local_5c[0] & 0x4000;
            local_6c[0] = local_6c[0] & 0x4000;
            local_5c[1] = local_5c[1] & 0x4000;
            local_6c[1] = local_6c[1] & 0x4000;
            local_5c[2] = local_5c[2] & 0x4000;
            local_6c[2] = local_6c[2] & 0x4000;
            local_5c[3] = local_5c[3] & 0x4000;
            local_6c[3] = local_6c[3] & 0x4000;
        }
    }
    else {
        local_6c[0] = 0x0;
        local_5c[0] = 0x0;
        local_6c[1] = 0x0;
        local_5c[1] = 0x0;
        local_6c[2] = 0x0;
        local_5c[2] = 0x0;
        local_6c[3] = 0x0;
        local_5c[3] = 0x0;
    }
    if ((gnTickCountDialog != -0x1) && (gnTickCountDialog += 0x1, gnTickCountDialog == 0x78)) {
        if ((geTypeMenu == (pointer_____offset_0x448___)0x2f) && (gnTagDialog == 0x1fe)) {
            uVar4 = osGetCount();
            if ((uVar4 & 0x1) == 0x0) {
                uVar6 = 0x121;
            }
            else {
                uVar6 = 0x11f;
            }
            PlaySE(SFX_INIT_TABLE,uVar6);
        }
        if ((geTypeMenu == (pointer_____offset_0x448___)0x30) && (gnTagDialog == 0xd2)) {
            uVar4 = osGetCount();
            if ((uVar4 & 0x1) == 0x0) {
                uVar6 = 0x121;
            }
            else {
                uVar6 = 0x11d;
            }
            PlaySE(SFX_INIT_TABLE,uVar6);
        }
    }
    local_7c[0] = 0x0;
    local_7c[1] = 0x0;
    local_7c[2] = 0x0;
    uVar4 = 0x0;
    local_7c[3] = 0x0;
    puVar7 = puVar12;
    puVar9 = puVar11;
    iVar3 = gnPlayerCount;
    if (0x0 < gnPlayerCount) {
        do {
            if (uVar4 == gnPlayer1Controll) {
                *puVar7 = local_5c[0];
                *puVar9 = local_6c[0];
            }
            puVar7 = puVar7 + 0x1;
            puVar9 = puVar9 + 0x1;
            uVar4 += 0x1;
            iVar3 += -0x1;
        } while (iVar3 != 0x0);
    }
    if (gnPlayer1Controll != 0x0) {
        local_5c[0] = 0x0;
        local_6c[0] = 0x0;
    }
    piVar15 = local_8c;
    puVar16 = ganPick;
    piVar17 = local_7c;
    piVar13 = piVar15;
    piVar8 = (int *)puVar16;
    piVar14 = piVar17;
    for (iVar3 = 0x0; iVar3 < gnPlayerCount; iVar3 += 0x1) {
        *piVar13 = 0x0;
        uVar4 = 0x0;
        iVar2 = screenGetArea(giScreenMenu,local_4c,iVar3);
        if (iVar2 != 0x0) {
            uVar4 = screenGetAreaType(giScreenMenu,local_4c[0]);
        }
        if ((((((uVar4 & 0x400000) != 0x0) && (iVar3 == 0x0)) ||
             (((uVar4 & 0x800000) != 0x0 && (iVar3 == 0x1)))) ||
            (((uVar4 & 0x10000000) != 0x0 && (iVar3 == 0x2)))) ||
           (((uVar4 & 0x20000000) != 0x0 && (iVar3 == 0x3)))) {
            if (((((geTypeMenu == (pointer_____offset_0x448___)0x9) &&
                  (iVar2 = screenChangePending(), iVar2 == 0x0)) &&
                 (iVar2 = screenGetArea(giScreenMenu,&local_98,iVar3), iVar2 != 0x0)) &&
                ((local_98 == 0x64 &&
                 (screenGetCursor(giScreenMenu,0x64,&local_94,&local_90), local_90 == 0x0)))) &&
               (iVar2 = screenTestSlot(giScreenMenu,0x64,local_94,0x1), iVar2 != 0x0)) {
                iVar2 = -0x1;
            }
            else {
                iVar2 = 0x0;
            }
            if (iVar2 == 0x0) {
                *puVar12 = *puVar12 & 0xfffffbff;
                *puVar11 = *puVar11 & 0xfffffbff;
            }
            if (((*puVar11 & 0x8000) != 0x0) && (*piVar8 == 0x0)) {
                *piVar13 = 0x20;
                *puVar11 = *puVar11 & 0xffff7fff;
                *puVar12 = *puVar12 | 0x400;
            }
        }
        if (((((uVar4 & 0x1000000) != 0x0) && (iVar3 == 0x0)) ||
            (((uVar4 & 0x2000000) != 0x0 && (iVar3 == 0x1)))) ||
           ((((uVar4 & 0x40000000) != 0x0 && (iVar3 == 0x2)) ||
            (((uVar4 & 0x80000000) != 0x0 && (iVar3 == 0x3)))))) {
            *puVar12 = *puVar12 & 0xfffff7ff;
            *puVar11 = *puVar11 & 0xfffff7ff;
            if (((*puVar11 & 0x4000) != 0x0) && (*piVar8 == 0x0)) {
                *piVar13 = 0x21;
                *puVar11 = *puVar11 & 0xffffbfff;
                *puVar12 = *puVar12 | 0x800;
            }
        }
        uVar4 = *puVar11;
        if ((uVar4 & 0x1000) == 0x0) {
            if ((uVar4 & 0x8000) == 0x0) {
                if ((uVar4 & 0x4000) == 0x0) {
                    if ((uVar4 & 0x20) == 0x0) {
                        if ((uVar4 & 0x10) == 0x0) {
                            if ((gnPlayerCount < 0x2) || (*piVar8 == 0x0)) {
                                if ((*puVar12 & 0x800) != 0x0) {
                                    if (*piVar13 == 0x0) {
                                        iVar2 = 0x1;
                                    }
                                    else {
                                        iVar2 = 0x11;
                                    }
                                    *piVar14 = iVar2;
                                }
                                if ((*puVar12 & 0x400) != 0x0) {
                                    if (*piVar13 == 0x0) {
                                        iVar2 = 0x2;
                                    }
                                    else {
                                        iVar2 = 0x12;
                                    }
                                    *piVar14 = iVar2;
                                }
                                if ((*puVar12 & 0x200) != 0x0) {
                                    *piVar14 = 0x3;
                                }
                                if ((*puVar12 & 0x100) != 0x0) {
                                    *piVar14 = 0x4;
                                }
                            }
                            else {
                                uVar4 = *puVar12;
                                if (((uVar4 & 0x800) != 0x0) ||
                                   ((((uVar4 & 0x400) != 0x0 || ((uVar4 & 0x200) != 0x0)) ||
                                    ((uVar4 & 0x100) != 0x0)))) {
                                    PlaySE(SFX_INIT_TABLE,0x8);
                                }
                            }
                        }
                        else {
                            *piVar14 = 0x19;
                        }
                    }
                    else {
                        *piVar14 = 0x18;
                    }
                }
                else {
                    *piVar14 = 0x21;
                }
            }
            else {
                *piVar14 = 0x20;
            }
        }
        else {
            *piVar14 = 0x22;
        }
        piVar13 = piVar13 + 0x1;
        puVar12 = puVar12 + 0x1;
        puVar11 = puVar11 + 0x1;
        piVar8 = piVar8 + 0x1;
        piVar14 = piVar14 + 0x1;
    }
    if (gnTagDialog == -0x1) {
        iVar2 = 0x3e;
        ppuVar10 = &gaMenuData;
        iVar3 = 0x0;
        do {
            if (geTypeMenu == ppuVar10[0x4]) {
                unaff_r17 = &gaMenuData + iVar3 * 0x6;
                iVar3 = -0x1;
                goto LAB_00087684;
            }
            ppuVar10 = ppuVar10 + 0x6;
            iVar3 += 0x1;
            iVar2 += -0x1;
        } while (iVar2 != 0x0);
        iVar3 = 0x0;
LAB_00087684:
        if ((iVar3 != 0x0) && (unaff_r17[0x3] != NULL)) {
            for (iVar3 = 0x0; iVar3 < gnPlayerCount; iVar3 += 0x1) {
                (*(code *)unaff_r17[0x3])(gnTickMenu,iVar3,local_7c);
            }
        }
    }
    else {
        for (iVar3 = 0x0; iVar3 < gnPlayerCount; iVar3 += 0x1) {
            menuTickDialog(gnTickMenu,iVar3,local_7c);
        }
    }
    if (gReset == 0x0) {
        piVar13 = piVar17;
        for (uVar4 = 0x0; (int)uVar4 < gnPlayerCount; uVar4 += 0x1) {
            if (*piVar13 == 0x20) {
                if (*(int *)puVar16 == 0x0) {
                    *(int *)puVar16 = -0x1;
                    uVar18 = gnPlayer1Controll;
                    if (uVar4 == gnPlayer1Controll) {
                        uVar5 = gnPlayer1Controll + 0x1;
                        iVar3 = gnPlayerCount - uVar5;
                        piVar8 = (int *)(gaMultiEntryFlag + uVar5 * 0x4);
                        if ((int)uVar5 < gnPlayerCount) {
                            do {
                                if (((gValidCont_4pMenu >> (uVar5 & 0x3f) & 0x1U) == 0x0) &&
                                   ((uVar18 = uVar5, geTypeMenu != (pointer_____offset_0x448___)0x27
                                    || (*piVar8 != 0x0)))) break;
                                piVar8 = piVar8 + 0x1;
                                uVar5 += 0x1;
                                iVar3 += -0x1;
                                uVar18 = gnPlayer1Controll;
                            } while (iVar3 != 0x0);
                        }
                    }
                    gnPlayer1Controll = uVar18;
                    if (geTypeMenu == (pointer_____offset_0x448___)0x26) {
                        screenSetArea(giScreenMenu,0xffffffff,uVar4);
                    }
                    if ((((ganPick._0_4_ == 0x0) || (ganPick._4_4_ == 0x0)) ||
                        (ganPick._8_4_ == 0x0)) || (ganPick._12_4_ == 0x0)) {
                        menuPlayOK(uVar4);
                    }
                    else {
                        if (geTypeMenu == (pointer_____offset_0x448___)0x26) {
                            geTypeMenu = (pointer_____offset_0x448___)0x27;
                        }
                        else if (geTypeMenu == (pointer_____offset_0x448___)0x27) {
                            geTypeMenu = (pointer_____offset_0x448___)0x2;
                        }
                        puVar1 = geTypeMenu;
                        if ((gnCountMenu < 0x20) &&
                           (iVar3 = menuSetScreen(geTypeMenu,0x0), iVar3 != 0x0)) {
                            iVar3 = gnCountMenu * 0x4;
                            gnCountMenu = gnCountMenu + 0x1;
                            *(pointer_____offset_0x448___ *)(gaeTypeMenu + iVar3) = puVar1;
                        }
                        menuPlayOK(uVar4);
                        local_7c[1] = 0x0;
                        local_7c[0] = 0x0;
                        local_7c[3] = 0x0;
                        local_7c[2] = 0x0;
                    }
                }
                else {
                    PlaySE(SFX_INIT_TABLE,0x8);
                }
            }
            else if (*piVar13 == 0x21) {
                if (*(int *)puVar16 == 0x0) {
                    if ((uVar4 == gnPlayer1Controll) && (gnPlayer1Controll != 0x0)) {
                        uVar5 = gnPlayer1Controll - 0x1;
                        piVar8 = (int *)(gaMultiEntryFlag + uVar5 * 0x4);
                        uVar18 = gnPlayer1Controll;
                        if (-0x1 < (int)uVar5) {
                            do {
                                if (((uVar5 == 0x0) ||
                                    ((gValidCont_4pMenu >> (uVar5 & 0x3f) & 0x1U) == 0x0)) &&
                                   ((geTypeMenu != (pointer_____offset_0x448___)0x27 ||
                                    (*piVar8 != 0x0)))) {
                                    gnPlayer1Controll = uVar5;
                                    *(undefined4 *)(ganPick + uVar5 * 0x4) = 0x0;
                                    screenGetArea(giScreenMenu,local_4c,gnPlayer1Controll);
                                    screenSetArea(giScreenMenu,local_4c[0],gnPlayer1Controll);
                                    PlaySE(SFX_INIT_TABLE,0x6);
                                    break;
                                }
                                piVar8 = piVar8 + -0x1;
                                uVar5 -= 0x1;
                                uVar18 -= 0x1;
                            } while (uVar18 != 0x0);
                        }
                    }
                    else {
                        if (gnCountMenu == 0x1) {
                            gMain = 0x1f4;
                            gReset = -0x1;
                        }
                        else if ((gnCountMenu < 0x2) ||
                                (iVar3 = menuSetScreen(*(undefined4 *)
                                                        (ganPick + gnCountMenu * 0x4 + 0xc),
                                                       0xffffffff), iVar3 == 0x0)) {
                            unaff_r30 = 0x0;
                        }
                        else {
                            unaff_r30 = -0x1;
                            gnCountMenu += -0x1;
                        }
                        if (unaff_r30 == 0x0) {
                            *piVar13 = 0x0;
                        }
                        else {
                            *(int *)puVar16 = 0x0;
                            screenGetArea(giScreenMenu,local_4c,uVar4);
                            screenSetArea(giScreenMenu,local_4c[0],uVar4);
                            PlaySE(SFX_INIT_TABLE,0x6);
                            if (0x1 < (int)geTypeMenu - 0x26U) {
                                gDoMenu4pFlag = 0x0;
                            }
                        }
                    }
                }
                else {
                    *(int *)puVar16 = 0x0;
                    screenGetArea(giScreenMenu,local_4c,uVar4);
                    screenSetArea(giScreenMenu,local_4c[0],uVar4);
                    PlaySE(SFX_INIT_TABLE,0x6);
                }
            }
            piVar13 = piVar13 + 0x1;
            puVar16 = (undefined1 *)((int)puVar16 + 0x4);
        }
        screenTick(local_7c);
        for (iVar3 = 0x0; iVar3 < gnPlayerCount; iVar3 += 0x1) {
            if (*piVar15 == 0x20) {
                menuPlayOK(iVar3);
            }
            else if (*piVar15 == 0x21) {
                PlaySE(SFX_INIT_TABLE,0x6);
            }
            else {
                iVar2 = *piVar17;
                if (((iVar2 != 0x0) && (iVar2 != 0x20)) && (iVar2 != 0x21)) {
                    menuPlayCursorWave(giScreenMenu,iVar3,local_7c);
                }
            }
            piVar15 = piVar15 + 0x1;
            piVar17 = piVar17 + 0x1;
        }
        menuTickFairy(giScreenMenu,gnFrameCount,0xffffffff,0x0,0x0,0x4,0x0);
        menuTickFairy(giScreenMenuLast,gnFrameCount,0xffffffff,0x0,0x0,0x4,0x0);
    }
    return;
}



void InitMenu(void)

{
    int iVar1;
    int iVar2;
    undefined1 *puVar3;
    undefined4 local_20 [0x2];
    
    puVar3 = NULL;
    gTheGame._120332_4_ = 0x1;
    gnTickMenu = 0x0;
    gnTickFade = 0x0;
    gnFrameCount = 0x0;
    gnSkipFrame = 0x0;
    geTypeMenu = 0xffffffff;
    giScreenMenuLast = 0xffffffff;
    giScreenMenu = 0xffffffff;
    gbAudioChanged = 0xffffffff;
    gnPositionFairyX = 0xba;
    gnPositionFairyY = 0x5e;
    giButton = 0x0;
    ganButton._0_4_ = 0x0;
    ganButton._4_4_ = 0x0;
    ganButton._8_4_ = 0x0;
    ganButton._12_4_ = 0x0;
    ganButton._16_4_ = 0x0;
    ganButton._20_4_ = 0x0;
    ganButton._24_4_ = 0x0;
    ganButton._28_4_ = 0x0;
    gnTagDialog = 0xffffffff;
    pon_ClearHeap();
    local_20[0] = Pon_Image_Heap;
    n642Dolphin_AllchangeTexture();
    if (geLanguageMenu == 0x0) {
        giMenuTestMusic = 0x0;
        iVar2 = -0x1;
        giMenuTestEffect = 0x1;
        gaiName._0_4_ = 0x0;
        gaiName._4_4_ = 0x0;
        gaiName._8_4_ = 0x0;
        gaiName._12_4_ = 0x0;
        gnControlCPU = 0x0;
        gnCountMenu = 0x0;
        geLanguageMenu = 0x1;
    }
    else {
        iVar2 = 0x0;
    }
    imageLoad(&gpImageMark,_4794,local_20);
    imageLoad(&gpImageCheck,_4795,local_20);
    if (geLanguageMenu == 0x2) {
        puVar3 = _4797;
    }
    else if ((geLanguageMenu < 0x2) && (-0x1 < geLanguageMenu)) {
        puVar3 = _4796;
    }
    iVar1 = screenLoad(puVar3,local_20);
    if (iVar1 != 0x0) {
        if (iVar2 != 0x0) {
            DummyLoad();
        }
        if (geMenuSoundType == 0x0) {
            iVar2 = GCHandover_read(0x8);
            if (iVar2 == 0x0) {
                geMenuSoundType = 0x1;
            }
            else {
                geMenuSoundType = 0x2;
            }
            geMenuSoundMute = 0x2;
        }
        menuUpdateSound();
        gnTickCountDialog = 0xffffffff;
        gnMaskVoice = 0x0;
        gnTickCountMenu = 0x0;
        if ((gMain == 0x2bc) && (0x0 < gnCountMenu)) {
            if (gnCountMenu < 0x1) {
                gc_assert(0x0,_1640,0x2d0f,_4798,0x0,0x0,0x0);
            }
            iVar2 = (&gnCountMenu)[gnCountMenu];
            menuRestore(iVar2);
            iVar1 = 0x0;
            if (iVar2 == 0x11) {
                if (gn2D3D == 0x1) {
                    iVar2 = gPlayer._0_4_ + 0x33;
                }
                else {
                    iVar2 = gPlayer._0_4_ + 0xbf;
                }
                if (((gTheGame._120360_4_ == 0x2) && (gTheGame._120368_4_ == 0x1)) &&
                   (gTheGame._120364_4_ == 0x4)) {
                    if (((gTheGame._89856_4_ == 0x7) || (gTheGame._89856_4_ == 0x8)) &&
                       ((*(byte *)(iVar2 + 0x2) & 0x40) == 0x0)) {
                        *(byte *)(iVar2 + 0x2) = *(byte *)(iVar2 + 0x2) | 0x40;
                        iVar1 = -0x1;
                        (&gnCountMenu)[gnCountMenu] = 0x10;
                    }
                }
                else {
                    iVar2 = menuStageClearXtra();
                    if ((iVar2 != 0x0) || (iVar2 = menuStageClearLast(), iVar2 != 0x0)) {
                        (&gnCountMenu)[gnCountMenu] = 0xf;
                    }
                }
            }
            if (gnCountMenu < 0x1) {
                gc_assert(0x0,_1640,0x2d34,_4799,0x0,0x0,0x0);
            }
            menuSetScreen((&gnCountMenu)[gnCountMenu],0x0);
            if (iVar1 != 0x0) {
                (&gnCountMenu)[gnCountMenu] = 0x11;
            }
        }
        else {
            gnCountMenu = 0x0;
            iVar2 = menuSetScreen(0x3,0x0);
            if (iVar2 != 0x0) {
                iVar2 = gnCountMenu * 0x4;
                gnCountMenu = gnCountMenu + 0x1;
                *(undefined4 *)(gaeTypeMenu + iVar2) = 0x3;
            }
        }
    }
    from_title = 0x0;
    Pon_Image_Heap = local_20[0];
    return;
}

