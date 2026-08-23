
void InitFlic(void)

{
    undefined1 *puVar1;
    int iVar2;
    int iVar3;
    
    iVar3 = 0x2a;
    iVar2 = 0x0;
    puVar1 = gTheGame;
    do {
        *(undefined4 *)(puVar1 + 0x16380) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16384) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16388) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x1638c) = 0x154;
        *(undefined4 *)(puVar1 + 0x16390) = 0xffffffff;
        iVar2 += 0x8;
        *(undefined4 *)(puVar1 + 0x16394) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16398) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x1639c) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163a0) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163a4) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163a8) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163ac) = 0x154;
        *(undefined4 *)(puVar1 + 0x163b0) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163b4) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163b8) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163bc) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163c0) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163c4) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163c8) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163cc) = 0x154;
        *(undefined4 *)(puVar1 + 0x163d0) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163d4) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163d8) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163dc) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163e0) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163e4) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163e8) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163ec) = 0x154;
        *(undefined4 *)(puVar1 + 0x163f0) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163f4) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163f8) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x163fc) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16400) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16404) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16408) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x1640c) = 0x154;
        *(undefined4 *)(puVar1 + 0x16410) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16414) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16418) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x1641c) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16420) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16424) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16428) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x1642c) = 0x154;
        *(undefined4 *)(puVar1 + 0x16430) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16434) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16438) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x1643c) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16440) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16444) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16448) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x1644c) = 0x154;
        *(undefined4 *)(puVar1 + 0x16450) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16454) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16458) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x1645c) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16460) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16464) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16468) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x1646c) = 0x154;
        *(undefined4 *)(puVar1 + 0x16470) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16474) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x16478) = 0xffffffff;
        *(undefined4 *)(puVar1 + 0x1647c) = 0xffffffff;
        iVar3 += -0x1;
        puVar1 = puVar1 + 0x100;
    } while (iVar3 != 0x0);
    iVar3 = 0x154 - iVar2;
    puVar1 = gTheGame + iVar2 * 0x20;
    if (iVar2 < 0x154) {
        do {
            *(undefined4 *)(puVar1 + 0x16380) = 0xffffffff;
            *(undefined4 *)(puVar1 + 0x16384) = 0xffffffff;
            *(undefined4 *)(puVar1 + 0x16388) = 0xffffffff;
            *(undefined4 *)(puVar1 + 0x1638c) = 0x154;
            *(undefined4 *)(puVar1 + 0x16390) = 0xffffffff;
            *(undefined4 *)(puVar1 + 0x16394) = 0xffffffff;
            *(undefined4 *)(puVar1 + 0x16398) = 0xffffffff;
            *(undefined4 *)(puVar1 + 0x1639c) = 0xffffffff;
            iVar3 += -0x1;
            puVar1 = puVar1 + 0x20;
        } while (iVar3 != 0x0);
    }
    iVar2 = 0x5;
    puVar1 = gTheGame;
    do {
        *(undefined4 *)(puVar1 + 0x18e00) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e04) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e08) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e0c) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e10) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e14) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e18) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e1c) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e20) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e24) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e28) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e2c) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e30) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e34) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e38) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e3c) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e40) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e44) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e48) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e4c) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e50) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e54) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e58) = 0x0;
        *(undefined4 *)(puVar1 + 0x18e5c) = 0x0;
        iVar2 += -0x1;
        puVar1 = puVar1 + 0x60;
    } while (iVar2 != 0x0);
    FlicLayer._0_4_ = 0x154;
    FlicLayer._4_4_ = 0x154;
    FlicLayer._8_4_ = 0x154;
    FlicLayer._12_4_ = 0x154;
    FlicLayer._16_4_ = 0x154;
    FlicLayer._20_4_ = 0x154;
    return;
}



void InitTrack(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
    undefined4 uVar1;
    undefined4 uVar2;
    
    uVar1 = 0x0;
    if (param_2 == 0x0) {
        uVar1 = 0x14;
    }
    uVar1 = InitAnimeColor(param_1,uVar1);
    uVar2 = 0x0;
    if (param_2 == 0x0) {
        uVar2 = 0x64;
    }
    uVar1 = InitAnimeBG(param_1,uVar1,uVar2,param_4);
    uVar2 = 0x0;
    if (param_2 == 0x0) {
        uVar2 = 0x28;
    }
    uVar1 = InitAnimeText(param_1,uVar1,uVar2,param_5);
    uVar2 = 0x0;
    if (param_2 == 0x0) {
        uVar2 = 0x50;
    }
    uVar1 = InitAnimeSprite(param_1,uVar1,uVar2,param_6);
    uVar2 = 0x0;
    if (param_2 == 0x0) {
        uVar2 = 0xaa;
    }
    InitAnimeFlic(param_1,uVar1,uVar2,param_7);
    return;
}



void pon_InitTrack(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
    undefined4 uVar1;
    
    uVar1 = InitAnimeColor(param_1,param_2 * 0x28 >> 0x2);
    uVar1 = InitAnimeBG(param_1,uVar1,param_2 * 0xc8 >> 0x2,param_4);
    uVar1 = InitAnimeText(param_1,uVar1,param_2 * 0x50 >> 0x2,param_5);
    uVar1 = InitAnimeSprite(param_1,uVar1,param_2 * 0xa0 >> 0x2,param_6);
    InitAnimeFlic(param_1,uVar1,param_2 * 0x154 >> 0x2,param_7);
    return;
}



int InitAnimeColor(short *param_1,int param_2,int param_3)

{
    int iVar1;
    undefined1 *puVar2;
    int iVar3;
    short *psVar4;
    
    if (0x28 < param_3) {
        return -0x1;
    }
    iVar1 = (param_2 + param_3) - param_2;
    puVar2 = gTheGame + param_2 * 0x18;
    iVar3 = param_3 << 0x1;
    psVar4 = param_1;
    if (param_2 < param_2 + param_3) {
        do {
            if (*psVar4 != 0x0) {
                *(undefined4 *)(puVar2 + 0x18fe0) = 0x30;
                *(int *)(puVar2 + 0x18fe4) = (int)param_1 + iVar3;
                *(undefined2 *)(puVar2 + 0x18fe8) = 0x100;
                *(short *)(puVar2 + 0x18fea) = *psVar4 + -0x1;
                *(undefined2 *)(puVar2 + 0x18fec) = 0x0;
                *(undefined2 *)(puVar2 + 0x18fee) = 0x0;
                *(undefined4 *)(puVar2 + 0x18ff0) = 0xffffffff;
                *(undefined4 *)(puVar2 + 0x18ff4) = 0x0;
                iVar3 += *psVar4 * 0x2;
            }
            puVar2 = puVar2 + 0x18;
            psVar4 = psVar4 + 0x1;
            iVar1 += -0x1;
        } while (iVar1 != 0x0);
    }
    return iVar3;
}



int InitAnimeBG(int param_1,int param_2,int param_3,int param_4)

{
    short *psVar1;
    short sVar2;
    short *psVar3;
    undefined1 *puVar4;
    
    if (param_4 < 0xc9) {
        puVar4 = gTheGame + param_3 * 0x28;
        psVar3 = (short *)(param_1 + param_2);
        param_2 += param_4 * 0x8;
        param_4 = param_3 + param_4;
        for (; param_3 < param_4; param_3 += 0x1) {
            *(undefined2 *)(puVar4 + 0x193a0) = 0x0;
            *(short *)(puVar4 + 0x193a2) = (short)((int)*psVar3 << 0x2);
            *(short *)(puVar4 + 0x193a4) = (short)((int)psVar3[0x2] << 0x2);
            *(short *)(puVar4 + 0x193a6) = (short)((int)*psVar3 << 0x2);
            *(undefined2 *)(puVar4 + 0x193a8) = 0x0;
            *(short *)(puVar4 + 0x193aa) = (short)((int)psVar3[0x1] << 0x2);
            *(short *)(puVar4 + 0x193ac) = (short)((int)psVar3[0x3] << 0x2);
            *(short *)(puVar4 + 0x193ae) = (short)((int)psVar3[0x1] << 0x2);
            *(int *)(puVar4 + 0x193b0) = param_1 + param_2;
            *(undefined2 *)(puVar4 + 0x193b4) = 0xfff4;
            puVar4[0x193b6] = 0x2;
            puVar4[0x193b7] = 0x1;
            *(undefined2 *)(puVar4 + 0x193b8) = 0x0;
            *(undefined2 *)(puVar4 + 0x193ba) = 0x0;
            pon_guS2DInitBg();
            sVar2 = *psVar3;
            puVar4 = puVar4 + 0x28;
            psVar1 = psVar3 + 0x1;
            psVar3 = psVar3 + 0x4;
            param_2 += (int)sVar2 * (int)*psVar1;
        }
    }
    else {
        param_2 = -0x1;
    }
    return param_2;
}



void InitAnimeBGTransparent(void)

{
    int iVar1;
    undefined1 *puVar2;
    int iVar3;
    
    puVar2 = gTheGame;
    iVar3 = 0x44;
    do {
        if ((*(int *)(puVar2 + 0x16388) < 0x0) && (*(int *)(puVar2 + 0x16388) != -0xff)) {
            iVar1 = *(int *)(puVar2 + 0x16394) * 0x28;
            *(undefined4 *)(gTheGame + iVar1 + 0x193c0) = 0x0;
            *(undefined2 *)(gTheGame + iVar1 + 0x193bc) = 0x400;
            *(undefined2 *)(gTheGame + iVar1 + 0x193be) = 0x400;
        }
        if ((*(int *)(puVar2 + 0x163a8) < 0x0) && (*(int *)(puVar2 + 0x163a8) != -0xff)) {
            iVar1 = *(int *)(puVar2 + 0x163b4) * 0x28;
            *(undefined4 *)(gTheGame + iVar1 + 0x193c0) = 0x0;
            *(undefined2 *)(gTheGame + iVar1 + 0x193bc) = 0x400;
            *(undefined2 *)(gTheGame + iVar1 + 0x193be) = 0x400;
        }
        if ((*(int *)(puVar2 + 0x163c8) < 0x0) && (*(int *)(puVar2 + 0x163c8) != -0xff)) {
            iVar1 = *(int *)(puVar2 + 0x163d4) * 0x28;
            *(undefined4 *)(gTheGame + iVar1 + 0x193c0) = 0x0;
            *(undefined2 *)(gTheGame + iVar1 + 0x193bc) = 0x400;
            *(undefined2 *)(gTheGame + iVar1 + 0x193be) = 0x400;
        }
        if ((*(int *)(puVar2 + 0x163e8) < 0x0) && (*(int *)(puVar2 + 0x163e8) != -0xff)) {
            iVar1 = *(int *)(puVar2 + 0x163f4) * 0x28;
            *(undefined4 *)(gTheGame + iVar1 + 0x193c0) = 0x0;
            *(undefined2 *)(gTheGame + iVar1 + 0x193bc) = 0x400;
            *(undefined2 *)(gTheGame + iVar1 + 0x193be) = 0x400;
        }
        if ((*(int *)(puVar2 + 0x16408) < 0x0) && (*(int *)(puVar2 + 0x16408) != -0xff)) {
            iVar1 = *(int *)(puVar2 + 0x16414) * 0x28;
            *(undefined4 *)(gTheGame + iVar1 + 0x193c0) = 0x0;
            *(undefined2 *)(gTheGame + iVar1 + 0x193bc) = 0x400;
            *(undefined2 *)(gTheGame + iVar1 + 0x193be) = 0x400;
        }
        puVar2 = puVar2 + 0xa0;
        iVar3 += -0x1;
    } while (iVar3 != 0x0);
    return;
}



int InitAnimeText(int param_1,int param_2,int param_3,int param_4)

{
    short *psVar1;
    short *psVar2;
    short sVar3;
    short sVar4;
    uint uVar5;
    undefined1 *puVar6;
    undefined1 *puVar7;
    short *psVar8;
    uint uVar9;
    
    if (param_4 == 0x0) {
        param_2 += 0x4;
    }
    else if (param_4 < 0x51) {
        puVar6 = gTheGame + param_3 * 0x18;
        psVar8 = (short *)(param_1 + param_2);
        param_2 += param_4 * 0x4;
        uVar5 = (param_3 + param_4) - param_3;
        if (param_3 < param_3 + param_4) {
            uVar9 = uVar5 >> 0x1;
            puVar7 = puVar6;
            if (uVar9 != 0x0) {
                do {
                    *(undefined4 *)(puVar7 + 0x1b2e0) = 0x1033;
                    *(int *)(puVar7 + 0x1b2e4) = param_1 + param_2;
                    *(undefined2 *)(puVar7 + 0x1b2e8) = 0x0;
                    *(short *)(puVar7 + 0x1b2ea) =
                         (short)((int)*psVar8 * (int)psVar8[0x1] >> 0x3) + -0x1;
                    *(short *)(puVar7 + 0x1b2ec) = (short)(0x7ff / ((int)*psVar8 >> 0x3)) + 0x1;
                    *(undefined2 *)(puVar7 + 0x1b2ee) = 0x0;
                    *(undefined4 *)(StretchTexBlock16_LoadTex + (int)puVar7) = 0xffffffff;
                    *(undefined4 *)(puVar7 + 0x1b2f4) = 0x0;
                    puVar6 = puVar7 + 0x30;
                    sVar3 = *psVar8;
                    sVar4 = psVar8[0x1];
                    *(undefined4 *)(puVar7 + 0x1b2f8) = 0x1033;
                    param_2 += (int)sVar3 * (int)sVar4;
                    *(int *)(puVar7 + 0x1b2fc) = param_1 + param_2;
                    *(undefined2 *)(puVar7 + 0x1b300) = 0x0;
                    *(short *)(puVar7 + 0x1b302) =
                         (short)((int)psVar8[0x2] * (int)psVar8[0x3] >> 0x3) + -0x1;
                    *(short *)(puVar7 + 0x1b304) = (short)(0x7ff / ((int)psVar8[0x2] >> 0x3)) + 0x1;
                    *(undefined2 *)(puVar7 + 0x1b306) = 0x0;
                    *(undefined4 *)(puVar7 + 0x1b308) = 0xffffffff;
                    *(undefined4 *)(puVar7 + 0x1b30c) = 0x0;
                    psVar1 = psVar8 + 0x2;
                    psVar2 = psVar8 + 0x3;
                    psVar8 = psVar8 + 0x4;
                    param_2 += (int)*psVar1 * (int)*psVar2;
                    uVar9 -= 0x1;
                    puVar7 = puVar6;
                } while (uVar9 != 0x0);
                uVar5 &= 0x1;
                if (uVar5 == 0x0) {
                    return param_2;
                }
            }
            do {
                *(undefined4 *)(puVar6 + 0x1b2e0) = 0x1033;
                *(int *)(puVar6 + 0x1b2e4) = param_1 + param_2;
                *(undefined2 *)(puVar6 + 0x1b2e8) = 0x0;
                *(short *)(puVar6 + 0x1b2ea) =
                     (short)((int)*psVar8 * (int)psVar8[0x1] >> 0x3) + -0x1;
                *(short *)(puVar6 + 0x1b2ec) = (short)(0x7ff / ((int)*psVar8 >> 0x3)) + 0x1;
                *(undefined2 *)(puVar6 + 0x1b2ee) = 0x0;
                *(undefined4 *)(StretchTexBlock16_LoadTex + (int)puVar6) = 0xffffffff;
                *(undefined4 *)(puVar6 + 0x1b2f4) = 0x0;
                sVar3 = *psVar8;
                psVar1 = psVar8 + 0x1;
                psVar8 = psVar8 + 0x2;
                param_2 += (int)sVar3 * (int)*psVar1;
                uVar5 -= 0x1;
                puVar6 = puVar6 + 0x18;
            } while (uVar5 != 0x0);
        }
    }
    else {
        param_2 = -0x1;
    }
    return param_2;
}



int InitAnimeSprite(int param_1,int param_2,int param_3,int param_4)

{
    short *psVar1;
    undefined1 *puVar2;
    undefined1 *puVar3;
    int iVar4;
    
    if (param_4 == 0x0) {
        param_2 += 0xc;
    }
    else {
        psVar1 = (short *)(param_1 + param_2);
        puVar3 = gTheGame + param_3 * 0x18;
        param_2 += param_4 * 0xc;
        if (0x0 < param_4) {
            do {
                puVar2 = puVar3;
                for (iVar4 = 0x0; iVar4 < *psVar1; iVar4 += 0x1) {
                    *(short *)(puVar2 + 0x1ba60) = (short)((int)psVar1[0x3] << 0x2);
                    *(undefined2 *)(puVar2 + 0x1ba62) = 0x400;
                    puVar3 = puVar3 + 0x18;
                    *(short *)(puVar2 + 0x1ba64) = (short)((int)psVar1[0x1] << 0x5);
                    param_3 += 0x1;
                    *(undefined2 *)(puVar2 + 0x1ba66) = 0x0;
                    *(short *)(puVar2 + 0x1ba68) = (short)((int)psVar1[0x3] << 0x2);
                    *(undefined2 *)(puVar2 + 0x1ba6a) = 0x400;
                    *(short *)(puVar2 + 0x1ba6c) = (short)((int)psVar1[0x2] << 0x5);
                    *(undefined2 *)(puVar2 + 0x1ba6e) = 0x0;
                    *(short *)(puVar2 + 0x1ba70) = psVar1[0x4] >> 0x3;
                    *(short *)(puVar2 + 0x1ba72) = psVar1[0x5] >> 0x3;
                    puVar2[0x1ba74] = 0x2;
                    puVar2[0x1ba75] = 0x1;
                    puVar2[0x1ba76] = 0x0;
                    puVar2[0x1ba77] = 0x0;
                    puVar2 = puVar2 + 0x18;
                }
                if (0xa0 < param_3) {
                    return -0x1;
                }
                psVar1 = psVar1 + 0x6;
                param_4 += -0x1;
            } while (param_4 != 0x0);
        }
    }
    return param_2;
}



void InitAnimeFlic(int param_1,int param_2,int param_3,int param_4)

{
    undefined1 *puVar1;
    int iVar2;
    undefined1 *puVar3;
    short *psVar4;
    
    puVar3 = gTheGame + param_3 * 0x20;
    psVar4 = (short *)(param_1 + param_2);
    if (param_4 < 0x1) {
        return;
    }
    while( true ) {
        puVar1 = puVar3;
        for (iVar2 = 0x0; iVar2 < *psVar4; iVar2 += 0x1) {
            *(int *)(puVar1 + 0x16388) = (int)psVar4[0x1];
            puVar3 = puVar3 + 0x20;
            param_3 += 0x1;
            *(int *)(puVar1 + 0x1638c) = (int)psVar4[0x2];
            *(int *)(puVar1 + 0x16380) = (int)psVar4[0x3];
            *(int *)(puVar1 + 0x16390) = (int)psVar4[0x4];
            *(int *)(puVar1 + 0x16394) = psVar4[0x5] + iVar2;
            *(int *)(puVar1 + 0x16398) = (int)psVar4[0x6];
            *(int *)(puVar1 + 0x1639c) = (int)psVar4[0x7];
            puVar1 = puVar1 + 0x20;
        }
        if (0x154 < param_3) break;
        psVar4 = psVar4 + 0x8;
        param_4 += -0x1;
        if (param_4 == 0x0) {
            return;
        }
    }
    return;
}



int PackFlic(void)

{
    int iVar1;
    int iVar2;
    int iVar3;
    undefined1 *puVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    undefined1 *puVar8;
    int iVar9;
    int iVar10;
    
    iVar10 = -0x1;
    iVar9 = -0x1;
    iVar7 = 0x1;
    iVar2 = 0x4;
    iVar3 = 0x110;
    iVar6 = 0x0;
    gEmptyFlicList._0_4_ = 0x0;
    gEmptyFlicList._4_4_ = 0x0;
    gEmptyFlicList._8_4_ = 0x0;
    gEmptyFlicList._12_4_ = 0x0;
    for (iVar5 = 0x0; iVar5 < 0x154; iVar5 += 0x1) {
        if (*(int *)(gTheGame + iVar3 + 0x16000) == 0x1) {
            iVar7 += 0x1;
            iVar2 += 0x4;
            iVar3 += 0x110;
        }
        if (*(int *)(gTheGame + iVar5 * 0x20 + 0x1638c) == 0x154) {
            iVar7 += 0x1;
            *(int *)(gEmptyFlicList + iVar2) = iVar5 - iVar6;
            iVar2 += 0x4;
            iVar3 += 0x110;
            if (0x3 < iVar7) break;
            iVar5 += 0x1;
            iVar1 = 0x154 - iVar5;
            puVar8 = gTheGame + iVar5 * 0x20;
            if (iVar5 < 0x154) {
                do {
                    iVar6 += 0x1;
                    if (*(int *)(puVar8 + 0x1638c) != 0x154) {
                        iVar5 += -0x1;
                        break;
                    }
                    puVar8 = puVar8 + 0x20;
                    iVar5 += 0x1;
                    iVar1 += -0x1;
                } while (iVar1 != 0x0);
            }
        }
    }
    puVar8 = gTheGame;
    iVar2 = 0x0;
    do {
        if (*(int *)(puVar8 + 0x1638c) == 0x154) {
            if (iVar9 == -0x1) {
                iVar9 = iVar2;
            }
            iVar5 = iVar2 + 0x1;
            iVar3 = 0x154 - iVar5;
            puVar4 = gTheGame + iVar5 * 0x20;
            iVar10 = 0x0;
            if (iVar5 < 0x154) {
                do {
                    if (*(int *)(puVar4 + 0x1638c) != 0x154) {
                        iVar10 = -0x1;
                        bcopy(gTheGame + iVar5 * 0x20 + 0x16380,puVar8 + 0x16380,0x20);
                        if (*(int *)(puVar8 + 0x1639c) != -0x1) {
                            *(int *)(puVar8 + 0x1639c) =
                                 *(int *)(puVar8 + 0x1639c) - (iVar5 - iVar2);
                        }
                        *(undefined4 *)(gTheGame + iVar5 * 0x20 + 0x1638c) = 0x154;
                        break;
                    }
                    puVar4 = puVar4 + 0x20;
                    iVar5 += 0x1;
                    iVar3 += -0x1;
                } while (iVar3 != 0x0);
            }
        }
        if (iVar10 == 0x0) {
            return iVar9;
        }
        iVar2 += 0x1;
        puVar8 = puVar8 + 0x20;
        if (0x153 < iVar2) {
            return iVar9;
        }
    } while( true );
}



void SortFlic(void)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int *piVar13;
    undefined1 *puVar14;
    undefined1 *puVar15;
    int *piVar16;
    undefined1 *puVar17;
    int iVar18;
    int local_5a0 [0x154];
    undefined auStack_50 [0x20];
    
    iVar18 = 0xe;
    iVar12 = 0x0;
    piVar4 = local_5a0;
    do {
        *piVar4 = iVar12;
        piVar4[0x1] = iVar12 + 0x1;
        piVar4[0x2] = iVar12 + 0x2;
        piVar4[0x3] = iVar12 + 0x3;
        piVar4[0x4] = iVar12 + 0x4;
        piVar4[0x5] = iVar12 + 0x5;
        piVar4[0x6] = iVar12 + 0x6;
        piVar4[0x7] = iVar12 + 0x7;
        piVar4[0x8] = iVar12 + 0x8;
        piVar4[0x9] = iVar12 + 0x9;
        iVar11 = iVar12 + 0x11;
        piVar4[0xa] = iVar12 + 0xa;
        iVar10 = iVar12 + 0x12;
        piVar4[0xb] = iVar12 + 0xb;
        iVar9 = iVar12 + 0x13;
        piVar4[0xc] = iVar12 + 0xc;
        iVar6 = iVar12 + 0x14;
        piVar4[0xd] = iVar12 + 0xd;
        iVar5 = iVar12 + 0x15;
        piVar4[0xe] = iVar12 + 0xe;
        iVar3 = iVar12 + 0x16;
        piVar4[0xf] = iVar12 + 0xf;
        iVar2 = iVar12 + 0x17;
        piVar4[0x10] = iVar12 + 0x10;
        iVar12 += 0x18;
        piVar4[0x11] = iVar11;
        piVar4[0x12] = iVar10;
        piVar4[0x13] = iVar9;
        piVar4[0x14] = iVar6;
        piVar4[0x15] = iVar5;
        piVar4[0x16] = iVar3;
        piVar4[0x17] = iVar2;
        piVar4 = piVar4 + 0x18;
        iVar18 += -0x1;
    } while (iVar18 != 0x0);
    piVar4 = local_5a0 + iVar12;
    iVar18 = 0x154 - iVar12;
    if (iVar12 < 0x154) {
        do {
            *piVar4 = iVar12;
            piVar4 = piVar4 + 0x1;
            iVar12 += 0x1;
            iVar18 += -0x1;
        } while (iVar18 != 0x0);
    }
    puVar15 = gTheGame;
    piVar16 = local_5a0;
    iVar12 = 0x0;
    piVar4 = piVar16;
    puVar17 = puVar15;
    do {
        iVar18 = iVar12 + 0x1;
        puVar14 = gTheGame + iVar18 * 0x20;
        piVar13 = local_5a0 + iVar18;
        for (; iVar18 < 0x154; iVar18 += 0x1) {
            if (*(int *)(puVar14 + 0x1638c) < *(int *)(puVar17 + 0x1638c)) {
                bcopy(puVar17 + 0x16380,auStack_50,0x20);
                bcopy(puVar14 + 0x16380,puVar17 + 0x16380,0x20);
                bcopy(auStack_50,puVar14 + 0x16380,0x20);
                iVar2 = *piVar4;
                *piVar4 = *piVar13;
                *piVar13 = iVar2;
            }
            puVar14 = puVar14 + 0x20;
            piVar13 = piVar13 + 0x1;
        }
        iVar12 += 0x1;
        puVar17 = puVar17 + 0x20;
        piVar4 = piVar4 + 0x1;
    } while (iVar12 < 0x153);
    iVar18 = 0x15;
    iVar12 = 0x0;
    do {
        *(int *)(FlicTable + *piVar16 * 0x4) = iVar12;
        *(int *)(FlicTable + piVar16[0x1] * 0x4) = iVar12 + 0x1;
        iVar3 = iVar12 + 0x9;
        *(int *)(FlicTable + piVar16[0x2] * 0x4) = iVar12 + 0x2;
        iVar2 = iVar12 + 0xa;
        *(int *)(FlicTable + piVar16[0x3] * 0x4) = iVar12 + 0x3;
        iVar11 = iVar12 + 0xb;
        *(int *)(FlicTable + piVar16[0x4] * 0x4) = iVar12 + 0x4;
        iVar10 = iVar12 + 0xc;
        *(int *)(FlicTable + piVar16[0x5] * 0x4) = iVar12 + 0x5;
        iVar9 = iVar12 + 0xd;
        *(int *)(FlicTable + piVar16[0x6] * 0x4) = iVar12 + 0x6;
        iVar6 = iVar12 + 0xe;
        *(int *)(FlicTable + piVar16[0x7] * 0x4) = iVar12 + 0x7;
        iVar5 = iVar12 + 0xf;
        *(int *)(FlicTable + piVar16[0x8] * 0x4) = iVar12 + 0x8;
        iVar12 += 0x10;
        *(int *)(FlicTable + piVar16[0x9] * 0x4) = iVar3;
        *(int *)(FlicTable + piVar16[0xa] * 0x4) = iVar2;
        *(int *)(FlicTable + piVar16[0xb] * 0x4) = iVar11;
        *(int *)(FlicTable + piVar16[0xc] * 0x4) = iVar10;
        *(int *)(FlicTable + piVar16[0xd] * 0x4) = iVar9;
        *(int *)(FlicTable + piVar16[0xe] * 0x4) = iVar6;
        piVar4 = piVar16 + 0xf;
        piVar16 = piVar16 + 0x10;
        *(int *)(FlicTable + *piVar4 * 0x4) = iVar5;
        iVar18 += -0x1;
    } while (iVar18 != 0x0);
    piVar4 = local_5a0 + iVar12;
    iVar18 = 0x154 - iVar12;
    if (iVar12 < 0x154) {
        do {
            iVar2 = *piVar4;
            piVar4 = piVar4 + 0x1;
            *(int *)(FlicTable + iVar2 * 0x4) = iVar12;
            iVar12 += 0x1;
            iVar18 += -0x1;
        } while (iVar18 != 0x0);
    }
    iVar12 = 0x22;
    do {
        if (*(int *)(puVar15 + 0x1639c) != -0x1) {
            *(undefined4 *)(puVar15 + 0x1639c) =
                 *(undefined4 *)(FlicTable + *(int *)(puVar15 + 0x1639c) * 0x4);
        }
        if (*(int *)(puVar15 + 0x163bc) != -0x1) {
            *(undefined4 *)(puVar15 + 0x163bc) =
                 *(undefined4 *)(FlicTable + *(int *)(puVar15 + 0x163bc) * 0x4);
        }
        if (*(int *)(puVar15 + 0x163dc) != -0x1) {
            *(undefined4 *)(puVar15 + 0x163dc) =
                 *(undefined4 *)(FlicTable + *(int *)(puVar15 + 0x163dc) * 0x4);
        }
        if (*(int *)(puVar15 + 0x163fc) != -0x1) {
            *(undefined4 *)(puVar15 + 0x163fc) =
                 *(undefined4 *)(FlicTable + *(int *)(puVar15 + 0x163fc) * 0x4);
        }
        if (*(int *)(puVar15 + 0x1641c) != -0x1) {
            *(undefined4 *)(puVar15 + 0x1641c) =
                 *(undefined4 *)(FlicTable + *(int *)(puVar15 + 0x1641c) * 0x4);
        }
        if (*(int *)(puVar15 + 0x1643c) != -0x1) {
            *(undefined4 *)(puVar15 + 0x1643c) =
                 *(undefined4 *)(FlicTable + *(int *)(puVar15 + 0x1643c) * 0x4);
        }
        if (*(int *)(puVar15 + 0x1645c) != -0x1) {
            *(undefined4 *)(puVar15 + 0x1645c) =
                 *(undefined4 *)(FlicTable + *(int *)(puVar15 + 0x1645c) * 0x4);
        }
        if (*(int *)(puVar15 + 0x1647c) != -0x1) {
            *(undefined4 *)(puVar15 + 0x1647c) =
                 *(undefined4 *)(FlicTable + *(int *)(puVar15 + 0x1647c) * 0x4);
        }
        if (*(int *)(puVar15 + 0x1649c) != -0x1) {
            *(undefined4 *)(puVar15 + 0x1649c) =
                 *(undefined4 *)(FlicTable + *(int *)(puVar15 + 0x1649c) * 0x4);
        }
        if (*(int *)(puVar15 + 0x164bc) != -0x1) {
            *(undefined4 *)(puVar15 + 0x164bc) =
                 *(undefined4 *)(FlicTable + *(int *)(puVar15 + 0x164bc) * 0x4);
        }
        puVar15 = puVar15 + 0x140;
        iVar12 += -0x1;
    } while (iVar12 != 0x0);
    iVar18 = 0x44;
    iVar12 = 0x2a38a8;
    uVar7 = 0x153;
    do {
        iVar2 = *(int *)(iVar12 + 0x1638c);
        uVar1 = uVar7;
        if ((((iVar2 != 0x154) && (uVar1 = FlicLayer._24_4_, iVar2 < 0x7)) && (0x0 < iVar2)) &&
           (uVar7 < *(uint *)(&DAT_001fc7e4 + iVar2 * 0x4))) {
            *(uint *)(&DAT_001fc7e4 + iVar2 * 0x4) = uVar7;
            uVar1 = FlicLayer._24_4_;
        }
        FlicLayer._24_4_ = uVar1;
        iVar2 = *(int *)(iVar12 + 0x1636c);
        uVar8 = uVar7 - 0x1;
        uVar1 = uVar8;
        if (((iVar2 != 0x154) && (uVar1 = FlicLayer._24_4_, iVar2 < 0x7)) &&
           ((0x0 < iVar2 && (uVar8 < *(uint *)(&DAT_001fc7e4 + iVar2 * 0x4))))) {
            *(uint *)(&DAT_001fc7e4 + iVar2 * 0x4) = uVar8;
            uVar1 = FlicLayer._24_4_;
        }
        FlicLayer._24_4_ = uVar1;
        iVar2 = *(int *)(iVar12 + 0x1634c);
        uVar8 = uVar7 - 0x2;
        uVar1 = uVar8;
        if (((iVar2 != 0x154) && (uVar1 = FlicLayer._24_4_, iVar2 < 0x7)) &&
           ((0x0 < iVar2 && (uVar8 < *(uint *)(&DAT_001fc7e4 + iVar2 * 0x4))))) {
            *(uint *)(&DAT_001fc7e4 + iVar2 * 0x4) = uVar8;
            uVar1 = FlicLayer._24_4_;
        }
        FlicLayer._24_4_ = uVar1;
        iVar2 = *(int *)(iVar12 + 0x1632c);
        uVar8 = uVar7 - 0x3;
        uVar1 = uVar8;
        if ((((iVar2 != 0x154) && (uVar1 = FlicLayer._24_4_, iVar2 < 0x7)) && (0x0 < iVar2)) &&
           (uVar8 < *(uint *)(&DAT_001fc7e4 + iVar2 * 0x4))) {
            *(uint *)(&DAT_001fc7e4 + iVar2 * 0x4) = uVar8;
            uVar1 = FlicLayer._24_4_;
        }
        FlicLayer._24_4_ = uVar1;
        iVar2 = *(int *)(iVar12 + 0x1630c);
        uVar8 = uVar7 - 0x4;
        uVar1 = uVar8;
        if (((iVar2 != 0x154) && (uVar1 = FlicLayer._24_4_, iVar2 < 0x7)) &&
           ((0x0 < iVar2 && (uVar8 < *(uint *)(&DAT_001fc7e4 + iVar2 * 0x4))))) {
            *(uint *)(&DAT_001fc7e4 + iVar2 * 0x4) = uVar8;
            uVar1 = FlicLayer._24_4_;
        }
        FlicLayer._24_4_ = uVar1;
        iVar12 += -0xa0;
        uVar7 -= 0x5;
        iVar18 += -0x1;
    } while (iVar18 != 0x0);
    return;
}



void UpdateFlic(int param_1)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    undefined1 *puVar5;
    int *piVar6;
    uint uVar7;
    int local_550 [0x154];
    
    puVar5 = gTheGame;
    piVar3 = local_550;
    iVar4 = 0x0;
    piVar6 = piVar3;
    if (0x0 < param_1) {
        do {
            if ((*(int *)(puVar5 + 0x16384) != -0x1) &&
               (*(int *)(puVar5 + 0x16384) = *(int *)(puVar5 + 0x16384) + -0x1,
               *(int *)(puVar5 + 0x16384) == 0x0)) {
                *(undefined4 *)(puVar5 + 0x16384) = 0xffffffff;
                if (*(int *)(puVar5 + 0x1639c) != -0x1) {
                    *piVar6 = *(int *)(puVar5 + 0x1639c);
                    piVar6 = piVar6 + 0x1;
                    iVar4 += 0x1;
                }
            }
            puVar5 = puVar5 + 0x20;
            param_1 += -0x1;
        } while (param_1 != 0x0);
    }
    iVar2 = 0x0;
    if (0x0 < iVar4) {
        if ((0x8 < iVar4) && (uVar7 = iVar4 - 0x1U >> 0x3, 0x0 < iVar4 + -0x8)) {
            do {
                iVar2 += 0x8;
                *(undefined4 *)(gTheGame + *piVar3 * 0x20 + 0x16384) =
                     *(undefined4 *)(gTheGame + *piVar3 * 0x20 + 0x16380);
                *(undefined4 *)(gTheGame + piVar3[0x1] * 0x20 + 0x16384) =
                     *(undefined4 *)(gTheGame + piVar3[0x1] * 0x20 + 0x16380);
                *(undefined4 *)(gTheGame + piVar3[0x2] * 0x20 + 0x16384) =
                     *(undefined4 *)(gTheGame + piVar3[0x2] * 0x20 + 0x16380);
                *(undefined4 *)(gTheGame + piVar3[0x3] * 0x20 + 0x16384) =
                     *(undefined4 *)(gTheGame + piVar3[0x3] * 0x20 + 0x16380);
                *(undefined4 *)(gTheGame + piVar3[0x4] * 0x20 + 0x16384) =
                     *(undefined4 *)(gTheGame + piVar3[0x4] * 0x20 + 0x16380);
                *(undefined4 *)(gTheGame + piVar3[0x5] * 0x20 + 0x16384) =
                     *(undefined4 *)(gTheGame + piVar3[0x5] * 0x20 + 0x16380);
                *(undefined4 *)(gTheGame + piVar3[0x6] * 0x20 + 0x16384) =
                     *(undefined4 *)(gTheGame + piVar3[0x6] * 0x20 + 0x16380);
                piVar6 = piVar3 + 0x7;
                piVar3 = piVar3 + 0x8;
                *(undefined4 *)(gTheGame + *piVar6 * 0x20 + 0x16384) =
                     *(undefined4 *)(gTheGame + *piVar6 * 0x20 + 0x16380);
                uVar7 -= 0x1;
            } while (uVar7 != 0x0);
        }
        piVar6 = local_550 + iVar2;
        iVar1 = iVar4 - iVar2;
        if (iVar2 < iVar4) {
            do {
                iVar4 = *piVar6;
                piVar6 = piVar6 + 0x1;
                *(undefined4 *)(gTheGame + iVar4 * 0x20 + 0x16384) =
                     *(undefined4 *)(gTheGame + iVar4 * 0x20 + 0x16380);
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    return;
}



void Draw2DAnimation(int param_1,int param_2,int param_3)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    uint *puVar6;
    int *piVar7;
    uint *puVar8;
    int *piVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    uint auStack_bec [0xa0];
    int aiStack_96c [0xa0];
    uint auStack_6ec [0xc8];
    int aiStack_3cc [0xc8];
    int local_ac;
    int local_a8;
    int *local_a4;
    uint *local_a0;
    uint *local_9c;
    int *local_98;
    undefined1 *local_94;
    undefined4 *local_90;
    undefined4 *local_8c;
    undefined4 local_88;
    undefined4 local_84;
    undefined4 *local_80;
    undefined4 *local_7c;
    undefined4 *local_78;
    undefined4 *local_74;
    undefined4 *local_70;
    undefined4 *local_6c;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 *local_50;
    undefined4 *local_4c;
    
    local_ac = param_1;
    local_a8 = param_3;
    if (param_2 < 0x1) {
        gc_assert(0x0,_521,0x2e8,_522,0x0,0x0,0x0);
    }
    puVar1 = glistp;
    local_50 = &glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    local_4c = &glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar2;
    puVar1[0x1] = 0xf0a4000;
    puVar1 = glistp;
    local_6c = &glistp;
    local_94 = FlicLayer + param_2 * 0x4;
    local_64 = 0x504240;
    local_60 = 0xfc119623;
    local_5c = 0xff2fffff;
    local_58 = 0xe3001001;
    local_54 = 0x8000;
    puVar2 = glistp + 0x2;
    *glistp = 0xfcffffff;
    glistp = puVar2;
    local_88 = 0xfc357e6a;
    local_84 = 0x11fcf279;
    puVar1[0x1] = 0xfffcf279;
    local_80 = &alphaB;
    local_7c = &alphaR;
    local_78 = &alphaG;
    local_98 = aiStack_3cc;
    local_9c = auStack_6ec;
    local_a4 = aiStack_96c;
    local_a0 = auStack_bec;
    local_70 = &glistp;
    local_74 = &glistp;
    local_90 = &glistp;
    local_8c = &glistp;
    local_68 = 0x200000;
    do {
        if (local_a8 < param_2) {
            if (((local_a8 == 0x6) && (gSelection == 0xaa)) && (gTheGame._120360_4_ == 0x5)) {
                DrawDevil1LifeBar2D();
            }
            else if (((local_a8 == 0x3) && (gWorld == 0x6)) && (gTheGame._120328_4_ == 0x1)) {
                DrawGreen1Light2D(local_ac);
            }
            else if (((local_a8 == 0x3) && (gWorld == 0x8)) && (gTheGame._120328_4_ == 0x1)) {
                DrawMoon1Star2D(local_ac);
            }
            else if (((local_a8 == 0x6) && (gWorld == 0x5)) && (gTheGame._120328_4_ == 0x1)) {
                DrawCloud1Bubble2D(local_ac);
            }
            return;
        }
        iVar12 = 0x0;
        iVar11 = 0x0;
        iVar5 = *(int *)(local_94 + -0x4);
        iVar3 = 0x154 - iVar5;
        iVar10 = local_ac + iVar5 * 0x20;
        puVar6 = local_9c;
        piVar7 = local_a4;
        puVar8 = local_a0;
        piVar9 = local_98;
        if (iVar5 < 0x154) {
            do {
                if (*(int *)(iVar10 + 0x2e854) != param_2) break;
                if (*(int *)(iVar10 + 0x2e84c) != -0x1) {
                    if (*(int *)(iVar10 + 0x2e850) < 0x0) {
                        *piVar9 = iVar5;
                        piVar9 = piVar9 + 0x1;
                        iVar12 += 0x1;
                        *puVar6 = -*(int *)(iVar10 + 0x2e850);
                        puVar6 = puVar6 + 0x1;
                    }
                    else if (0x0 < *(int *)(iVar10 + 0x2e850)) {
                        *piVar7 = iVar5;
                        piVar7 = piVar7 + 0x1;
                        iVar11 += 0x1;
                        *puVar8 = *(uint *)(iVar10 + 0x2e850);
                        puVar8 = puVar8 + 0x1;
                    }
                }
                iVar10 += 0x20;
                iVar5 += 0x1;
                iVar3 += -0x1;
            } while (iVar3 != 0x0);
        }
        puVar1 = glistp;
        if (iVar12 != 0x0) {
            puVar2 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe3000a01;
            glistp = puVar2;
            puVar1[0x1] = local_68;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe200001c;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            piVar7 = local_98;
            puVar6 = local_9c;
            for (iVar3 = 0x0; puVar1 = glistp, iVar3 < iVar12; iVar3 += 0x1) {
                iVar5 = *piVar7;
                iVar10 = 0x0;
                puVar2 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                iVar5 = local_ac + iVar5 * 0x20 + 0x2e848;
                puVar2 = glistp + 0x2;
                *glistp = local_58;
                glistp = puVar2;
                puVar1[0x1] = local_54;
                pon_gSPObjLoadTxtr(local_90,*(int *)(iVar5 + 0x10) * 0x18 + 0x2b9e28);
                puVar1 = glistp;
                uVar4 = *puVar6;
                if (uVar4 == 0x7b) {
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
                    *glistp = local_88;
                    glistp = puVar2;
                    puVar1[0x1] = local_84;
                    puVar1 = glistp;
                    puVar2 = glistp + 0x2;
                    *glistp = 0xfa000000;
                    glistp = puVar2;
                    puVar1[0x1] = (uint)*(byte *)local_80 << 0x8 |
                                  (uint)*(byte *)local_7c << 0x18 | (uint)*(byte *)local_78 << 0x10
                                  | 0x64;
                    puVar1 = glistp;
                    puVar2 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar2;
                    puVar1[0x1] = 0x0;
                    pon_gSPBgRect1Cyc(local_8c,*(int *)(iVar5 + 0x14) * 0x28 + 0x2ba1e8);
                    iVar10 = -0x1;
                }
                else if (uVar4 == 0x7c) {
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
                    *glistp = local_88;
                    glistp = puVar2;
                    puVar1[0x1] = local_84;
                    puVar1 = glistp;
                    puVar2 = glistp + 0x2;
                    *glistp = 0xfa000000;
                    glistp = puVar2;
                    puVar1[0x1] = (uint)*(byte *)((int)local_80 + 0x1) << 0x8 |
                                  (uint)*(byte *)((int)local_7c + 0x1) << 0x18 |
                                  (uint)*(byte *)((int)local_78 + 0x1) << 0x10 | 0x64;
                    puVar1 = glistp;
                    puVar2 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar2;
                    puVar1[0x1] = 0x0;
                    pon_gSPBgRect1Cyc(local_74,*(int *)(iVar5 + 0x14) * 0x28 + 0x2ba1e8);
                    iVar10 = -0x1;
                }
                else if (uVar4 == 0xff) {
                    puVar2 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar2;
                    puVar1[0x1] = 0x0;
                    pon_gSPBgRectCopy(local_6c,*(int *)(iVar5 + 0x14) * 0x28 + 0x2ba1e8);
                }
                else {
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
                    puVar1[0x1] = local_64;
                    puVar1 = glistp;
                    puVar2 = glistp + 0x2;
                    *glistp = local_60;
                    glistp = puVar2;
                    puVar1[0x1] = local_5c;
                    puVar1 = glistp;
                    puVar2 = glistp + 0x2;
                    *glistp = 0xfa000000;
                    glistp = puVar2;
                    puVar1[0x1] = *puVar6 & 0xff | 0xffffff00;
                    puVar1 = glistp;
                    puVar2 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar2;
                    puVar1[0x1] = 0x0;
                    pon_gSPBgRect1Cyc(local_70,*(int *)(iVar5 + 0x14) * 0x28 + 0x2ba1e8);
                    iVar10 = -0x1;
                }
                puVar1 = glistp;
                if (iVar10 != 0x0) {
                    puVar2 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar2;
                    puVar1[0x1] = 0x0;
                    puVar1 = glistp;
                    puVar2 = glistp + 0x2;
                    *glistp = 0xe3000a01;
                    glistp = puVar2;
                    puVar1[0x1] = local_68;
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
                piVar7 = piVar7 + 0x1;
                puVar6 = puVar6 + 0x1;
            }
        }
        puVar1 = glistp;
        iVar3 = 0x0;
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
        piVar7 = local_a4;
        puVar6 = local_a0;
        if (iVar11 != 0x0) {
            for (; puVar1 = glistp, iVar3 < iVar11; iVar3 += 0x1) {
                if (*puVar6 != 0xff) {
                    puVar2 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar2;
                    puVar1[0x1] = 0x0;
                    puVar1 = glistp;
                    puVar2 = glistp + 0x2;
                    *glistp = 0xe200001c;
                    glistp = puVar2;
                    puVar1[0x1] = local_64;
                    puVar1 = glistp;
                    puVar2 = glistp + 0x2;
                    *glistp = local_60;
                    glistp = puVar2;
                    puVar1[0x1] = local_5c;
                    puVar1 = glistp;
                    puVar2 = glistp + 0x2;
                    *glistp = 0xfa000000;
                    glistp = puVar2;
                    puVar1[0x1] = *puVar6 & 0xff | 0xffffff00;
                }
                puVar1 = glistp;
                iVar5 = *piVar7;
                puVar2 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                iVar5 = local_ac + iVar5 * 0x20 + 0x2e848;
                puVar2 = glistp + 0x2;
                *glistp = local_58;
                glistp = puVar2;
                puVar1[0x1] = local_54;
                pon_gSPObjLoadTxtr(&glistp,*(int *)(iVar5 + 0x10) * 0x18 + 0x2b9e28);
                pon_gSPObjLoadTxtr(local_50,*(int *)(iVar5 + 0x18) * 0x18 + 0x2bc128);
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                if (param_2 == 0x4) {
                    iVar10 = *(int *)(iVar5 + 0x14) * 0x18;
                    if (*(short *)(gTheGame + iVar10 + 0x1ba60) >> 0x2 == 0x14) {
                        *(undefined2 *)(gTheGame + iVar10 + 0x1ba62) = 0x3e8;
                    }
                    iVar10 = *(int *)(iVar5 + 0x14) * 0x18;
                    if (*(short *)(gTheGame + iVar10 + 0x1ba60) >> 0x2 == 0x41) {
                        *(undefined2 *)(gTheGame + iVar10 + 0x1ba62) = 0x3e8;
                    }
                    iVar10 = *(int *)(iVar5 + 0x14) * 0x18;
                    if (*(short *)(gTheGame + iVar10 + 0x1ba60) >> 0x2 == 0xfc) {
                        *(undefined2 *)(gTheGame + iVar10 + 0x1ba62) = 0x3e8;
                    }
                }
                pon_gSPObjRectangle(local_4c,*(int *)(iVar5 + 0x14) * 0x18 + 0x2bc8a8);
                puVar1 = glistp;
                if (((*puVar6 != 0xff) && (iVar3 + 0x1 < iVar11)) && (puVar6[0x1] == 0xff)) {
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
                piVar7 = piVar7 + 0x1;
                puVar6 = puVar6 + 0x1;
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
        }
        param_2 += 0x1;
        local_94 = local_94 + 0x4;
    } while( true );
}



void Draw3DAnimation(void)

{
    if ((gSelection == 0xaa) && (gWorld == 0xd)) {
        DrawDevil1LifeBar3D();
    }
    return;
}

