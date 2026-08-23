

int AnimationRandom(uint param_1)

{
    gTheGame._120336_4_ = gTheGame._120336_4_ * 0x7b6e73 + 0x87c125;
    return (int)(((float)((double)CONCAT44(0x43300000,gTheGame._120336_4_ & 0x7fffffff ^ 0x80000000)
                         - 4503601774854144.0) / 2.147484e+09) *
                (float)((double)CONCAT44(0x43300000,param_1 ^ 0x80000000) - 4503601774854144.0));
}



void UpdateStarAnimation(void)

{
    undefined1 *puVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    
    puVar1 = gTheGame;
    iVar2 = 0x0;
    do {
        if (0x63 < *(int *)(puVar1 + 0x1c980)) {
            piVar4 = (int *)(puVar1 + 0x1c980);
            if (true) {
                switch(*(int *)(puVar1 + 0x1c980)) {
                case 0x69:
                case 0x7d:
                    *(undefined2 *)(puVar1 + 0x1c97a) = 0x2;
                    break;
                case 0x6e:
                case 0x78:
                    *(undefined2 *)(puVar1 + 0x1c97a) = 0x4;
                    break;
                case 0x73:
                    *(undefined2 *)(puVar1 + 0x1c97a) = 0x6;
                    break;
                case 0x82:
                    *piVar4 = 0x64;
                    *(undefined2 *)(puVar1 + 0x1c97a) = 0x0;
                }
            }
            *piVar4 = *piVar4 + 0x1;
        }
        iVar2 += 0x1;
        puVar1 = puVar1 + 0x20;
    } while (iVar2 < 0x2);
    iVar2 = 0x2a0e88;
    iVar3 = 0x2;
    do {
        if (0xc7 < *(int *)(iVar2 + 0x1c980)) {
            piVar4 = (int *)(iVar2 + 0x1c980);
            if (true) {
                switch(*(int *)(iVar2 + 0x1c980)) {
                case 0xcd:
                case 0xe1:
                    *(undefined2 *)(iVar2 + 0x1c97a) = 0x82;
                    break;
                case 0xd2:
                case 0xdc:
                    *(undefined2 *)(iVar2 + 0x1c97a) = 0x84;
                    break;
                case 0xd7:
                    *(undefined2 *)(iVar2 + 0x1c97a) = 0x86;
                    break;
                case 0xe6:
                    *piVar4 = 0xc8;
                    *(undefined2 *)(iVar2 + 0x1c97a) = 0x80;
                }
            }
            *piVar4 = *piVar4 + 0x1;
        }
        iVar3 += 0x1;
        iVar2 += 0x20;
    } while (iVar3 < 0x4);
    return;
}



void InitAnimation1(undefined4 param_1)

{
    chain_check._0_4_ = 0x0;
    chain_check._4_4_ = 0x0;
    anim_bg = 0x0;
    anim_sp = 0x0;
    InitFlic();
    if (true) {
        switch(param_1) {
        case 0x0:
            InitFlower1();
            break;
        case 0x3:
            InitWater1();
            break;
        case 0x4:
            InitFire1();
            break;
        case 0x5:
            InitCloud1();
            break;
        case 0x6:
            InitGreen1();
            break;
        case 0x8:
            InitMoon1();
            break;
        case 0xd:
            InitDevil1();
        }
    }
    InitAnimeBGTransparent();
    if (gTheGame._120332_4_ == 0x2) {
        AddAnimation3D1a(param_1);
        Draw3DShadeBox();
        AddAnimation3D1b(param_1);
        InitFlic();
    }
    return;
}



void InitAnimation2(int param_1,int param_2)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    
    iVar3 = 0x0;
    chain_check._0_4_ = 0x0;
    chain_check._4_4_ = 0x0;
    anim_bg = 0x0;
    anim_sp = 0x0;
    InitFlic();
    mini_shadow._2_2_ = 0x400;
    mini_shadow._4_2_ = 0x400;
    mini_shadow._6_2_ = 0x0;
    mini_shadow._8_2_ = 0x178;
    mini_shadow._10_2_ = 0x400;
    mini_shadow._12_2_ = 0x100;
    mini_shadow._14_2_ = 0x0;
    mini_shadow._16_2_ = 0x8;
    mini_shadow[20] = 0x2;
    mini_shadow[21] = 0x1;
    mini_shadow[22] = 0x0;
    mini_shadow[23] = 0x0;
    mini_shadow._26_2_ = 0x400;
    mini_shadow._28_2_ = 0x400;
    mini_shadow._30_2_ = 0x0;
    mini_shadow._32_2_ = 0x178;
    mini_shadow._34_2_ = 0x400;
    mini_shadow._36_2_ = 0x100;
    mini_shadow._38_2_ = 0x0;
    mini_shadow._40_2_ = 0x8;
    mini_shadow[44] = 0x2;
    mini_shadow[45] = 0x1;
    mini_shadow[46] = 0x0;
    mini_shadow[47] = 0x0;
    mini_shadow._0_2_ = 0x20c;
    mini_shadow._24_2_ = 0x274;
    do {
        uVar2 = 0x0;
        if (iVar3 == 0x0) {
            iVar1 = param_1;
            if (gWorld == param_1) {
                uVar2 = 0x1;
            }
        }
        else {
            iVar1 = param_2;
            if ((gWorld == param_2) && (gWorld != param_1)) {
                uVar2 = 0x1;
            }
        }
        pon_InitLevel(iVar1,iVar3,iVar3,uVar2);
        iVar3 += 0x1;
    } while (iVar3 < 0x2);
    PackFlic();
    SortFlic();
    InitAnimeBGTransparent();
    if (gTheGame._120332_4_ == 0x1) {
        pon_StartAnimation2D();
    }
    else {
        AddAnimation3D2(param_1,param_2);
        if (gWorld == param_1) {
            StartAnimation3D(iVar3,0xffffffff);
        }
        else {
            StartAnimation3D(iVar3,0x0);
        }
        InitFlic();
    }
    return;
}



void pon_InitAnimation4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
    undefined1 *puVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    int iVar4;
    int iVar5;
    undefined4 local_38 [0x4];
    undefined4 local_28 [0x4];
    
    local_38[0] = 0x0;
    local_38[1] = 0x0;
    local_38[2] = 0x0;
    local_38[3] = 0x0;
    chain_check._0_4_ = 0x0;
    chain_check._4_4_ = 0x0;
    chain_check._8_4_ = 0x0;
    chain_check._12_4_ = 0x0;
    anim_bg = 0x0;
    anim_sp = 0x0;
    local_28[0] = param_1;
    local_28[1] = param_2;
    local_28[2] = param_3;
    local_28[3] = param_4;
    InitFlic();
    iVar5 = 0x2;
    puVar1 = mini_shadow;
    do {
        *(undefined2 *)(puVar1 + 0x2) = 0x400;
        iVar4 = 0x0;
        *(undefined2 *)(puVar1 + 0x4) = 0x400;
        *(undefined2 *)(puVar1 + 0x6) = 0x0;
        *(undefined2 *)(puVar1 + 0x8) = 0x118;
        *(undefined2 *)(puVar1 + 0xa) = 0x400;
        *(undefined2 *)(puVar1 + 0xc) = 0x100;
        *(undefined2 *)(puVar1 + 0xe) = 0x0;
        *(undefined2 *)(puVar1 + 0x10) = 0x8;
        puVar1[0x14] = 0x2;
        puVar1[0x15] = 0x1;
        puVar1[0x16] = 0x0;
        puVar1[0x17] = 0x0;
        *(undefined2 *)(puVar1 + 0x1a) = 0x400;
        *(undefined2 *)(puVar1 + 0x1c) = 0x400;
        *(undefined2 *)(puVar1 + 0x1e) = 0x0;
        *(undefined2 *)(puVar1 + 0x20) = 0x118;
        *(undefined2 *)(puVar1 + 0x22) = 0x400;
        *(undefined2 *)(puVar1 + 0x24) = 0x100;
        *(undefined2 *)(puVar1 + 0x26) = 0x0;
        *(undefined2 *)(puVar1 + 0x28) = 0x8;
        puVar1[0x2c] = 0x2;
        puVar1[0x2d] = 0x1;
        puVar1[0x2e] = 0x0;
        puVar1[0x2f] = 0x0;
        puVar1 = puVar1 + 0x30;
        iVar5 += -0x1;
    } while (iVar5 != 0x0);
    mini_shadow._0_2_ = 0xe8;
    mini_shadow._24_2_ = 0x1f8;
    puVar1 = gTheGame;
    mini_shadow._48_2_ = 0x308;
    mini_shadow._72_2_ = 0x418;
    puVar3 = local_38;
    mini_shadow._8_2_ = 0x110;
    puVar2 = local_28;
    mini_shadow._32_2_ = 0x110;
    iVar5 = 0x0;
    mini_shadow._56_2_ = 0x110;
    mini_shadow._80_2_ = 0x110;
    do {
        if (*(int *)(puVar1 + 0x16000) != 0x1) {
            pon_InitLevel(*puVar2,iVar4,iVar5,*puVar3);
            iVar5 += 0x1;
        }
        iVar4 += 0x1;
        puVar1 = puVar1 + 0x110;
        puVar3 = puVar3 + 0x1;
        puVar2 = puVar2 + 0x1;
    } while (iVar4 < 0x4);
    PackFlic();
    SortFlic();
    InitAnimeBGTransparent();
    if (gTheGame._120332_4_ == 0x1) {
        pon_StartAnimation2D();
    }
    return;
}



void AddAnimation3D1a(undefined4 param_1)

{
    ushort uVar1;
    ushort uVar2;
    ushort uVar3;
    ushort uVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    uint *puVar7;
    uint *puVar8;
    char *pcVar9;
    undefined *puVar10;
    int iVar11;
    undefined1 *puVar12;
    int iVar13;
    uint uVar14;
    uint uVar15;
    int iVar16;
    uint uVar17;
    int iVar18;
    char local_1b8 [0x4];
    undefined local_1b4;
    undefined local_1b3;
    undefined local_1b2;
    undefined local_1b1;
    undefined local_1b0;
    undefined local_1af;
    undefined local_180 [0x11c];
    undefined4 local_64;
    undefined4 local_60;
    uint local_5c;
    uint local_58;
    uint local_54;
    uint local_50;
    uint local_4c;
    
    iVar18 = 0x6;
    iVar16 = 0x0;
    pcVar9 = local_1b8;
    iVar11 = 0x0;
    local_64 = param_1;
    do {
        iVar13 = iVar11;
        *pcVar9 = -0x1;
        iVar11 = iVar13 + 0x38;
        pcVar9[0x1] = -0x1;
        pcVar9[0x2] = -0x1;
        pcVar9[0x3] = -0x1;
        pcVar9[0x4] = -0x1;
        pcVar9[0x5] = -0x1;
        pcVar9[0x6] = -0x1;
        pcVar9[0x7] = -0x1;
        pcVar9[0x8] = -0x1;
        pcVar9[0x9] = -0x1;
        pcVar9[0xa] = -0x1;
        pcVar9[0xb] = -0x1;
        pcVar9[0xc] = -0x1;
        pcVar9[0xd] = -0x1;
        pcVar9[0xe] = -0x1;
        pcVar9[0xf] = -0x1;
        pcVar9[0x10] = -0x1;
        pcVar9[0x11] = -0x1;
        pcVar9[0x12] = -0x1;
        pcVar9[0x13] = -0x1;
        pcVar9[0x14] = -0x1;
        pcVar9[0x15] = -0x1;
        pcVar9[0x16] = -0x1;
        pcVar9[0x17] = -0x1;
        pcVar9[0x18] = -0x1;
        pcVar9[0x19] = -0x1;
        pcVar9[0x1a] = -0x1;
        pcVar9[0x1b] = -0x1;
        pcVar9[0x1c] = -0x1;
        pcVar9[0x1d] = -0x1;
        pcVar9[0x1e] = -0x1;
        pcVar9[0x1f] = -0x1;
        pcVar9[0x20] = -0x1;
        pcVar9[0x21] = -0x1;
        pcVar9[0x22] = -0x1;
        pcVar9[0x23] = -0x1;
        pcVar9[0x24] = -0x1;
        pcVar9[0x25] = -0x1;
        pcVar9[0x26] = -0x1;
        pcVar9[0x27] = -0x1;
        pcVar9[0x28] = -0x1;
        pcVar9[0x29] = -0x1;
        pcVar9[0x2a] = -0x1;
        pcVar9[0x2b] = -0x1;
        pcVar9[0x2c] = -0x1;
        pcVar9[0x2d] = -0x1;
        pcVar9[0x2e] = -0x1;
        pcVar9[0x2f] = -0x1;
        pcVar9[0x30] = -0x1;
        pcVar9[0x31] = -0x1;
        pcVar9[0x32] = -0x1;
        pcVar9[0x33] = -0x1;
        pcVar9[0x34] = -0x1;
        pcVar9[0x35] = -0x1;
        pcVar9[0x36] = -0x1;
        pcVar9[0x37] = -0x1;
        pcVar9 = pcVar9 + 0x38;
        iVar18 += -0x1;
    } while (iVar18 != 0x0);
    puVar10 = local_180 + iVar13;
    iVar18 = 0x154 - iVar11;
    if (iVar11 < 0x154) {
        do {
            *puVar10 = 0xff;
            puVar10 = puVar10 + 0x1;
            iVar18 += -0x1;
        } while (iVar18 != 0x0);
    }
    iVar11 = 0x28;
    puVar12 = gTheGame;
    do {
        *(undefined4 *)(puVar12 + 0x193c0) = 0x0;
        *(undefined2 *)(puVar12 + 0x193bc) = 0x400;
        *(undefined2 *)(puVar12 + 0x193be) = 0x400;
        *(short *)(puVar12 + 0x193ac) = (short)(((int)*(short *)(puVar12 + 0x193ac) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x193aa) =
             (short)(((int)(uint)*(ushort *)(puVar12 + 0x193aa) >> 0x2) << 0x2);
        *(undefined4 *)(puVar12 + 0x193e8) = 0x0;
        *(undefined2 *)(puVar12 + 0x193e4) = 0x400;
        *(undefined2 *)(puVar12 + 0x193e6) = 0x400;
        *(short *)(puVar12 + 0x193d4) = (short)(((int)*(short *)(puVar12 + 0x193d4) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x193d2) =
             (short)(((int)(uint)*(ushort *)(puVar12 + 0x193d2) >> 0x2) << 0x2);
        *(undefined4 *)(puVar12 + 0x19410) = 0x0;
        *(undefined2 *)(puVar12 + 0x1940c) = 0x400;
        *(undefined2 *)(puVar12 + 0x1940e) = 0x400;
        *(short *)(puVar12 + 0x193fc) = (short)(((int)*(short *)(puVar12 + 0x193fc) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x193fa) =
             (short)(((int)(uint)*(ushort *)(puVar12 + 0x193fa) >> 0x2) << 0x2);
        *(undefined4 *)(puVar12 + 0x19438) = 0x0;
        *(undefined2 *)(puVar12 + 0x19434) = 0x400;
        *(undefined2 *)(puVar12 + 0x19436) = 0x400;
        *(short *)(puVar12 + 0x19424) = (short)(((int)*(short *)(puVar12 + 0x19424) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x19422) =
             (short)(((int)(uint)*(ushort *)(puVar12 + 0x19422) >> 0x2) << 0x2);
        *(undefined4 *)(puVar12 + 0x19460) = 0x0;
        *(undefined2 *)(puVar12 + 0x1945c) = 0x400;
        *(undefined2 *)(puVar12 + 0x1945e) = 0x400;
        *(short *)(puVar12 + 0x1944c) = (short)(((int)*(short *)(puVar12 + 0x1944c) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1944a) =
             (short)(((int)(uint)*(ushort *)(puVar12 + 0x1944a) >> 0x2) << 0x2);
        iVar11 += -0x1;
        puVar12 = puVar12 + 0xc8;
    } while (iVar11 != 0x0);
    iVar11 = 0xa;
    puVar12 = gTheGame;
    do {
        *(short *)(puVar12 + 0x1ba68) = (short)(((int)*(short *)(puVar12 + 0x1ba68) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1ba80) = (short)(((int)*(short *)(puVar12 + 0x1ba80) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1ba98) = (short)(((int)*(short *)(puVar12 + 0x1ba98) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1bab0) = (short)(((int)*(short *)(puVar12 + 0x1bab0) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1bac8) = (short)(((int)*(short *)(puVar12 + 0x1bac8) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1bae0) = (short)(((int)*(short *)(puVar12 + 0x1bae0) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1baf8) = (short)(((int)*(short *)(puVar12 + 0x1baf8) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1bb10) = (short)(((int)*(short *)(puVar12 + 0x1bb10) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1bb28) = (short)(((int)*(short *)(puVar12 + 0x1bb28) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1bb40) = (short)(((int)*(short *)(puVar12 + 0x1bb40) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1bb58) = (short)(((int)*(short *)(puVar12 + 0x1bb58) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1bb70) = (short)(((int)*(short *)(puVar12 + 0x1bb70) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1bb88) = (short)(((int)*(short *)(puVar12 + 0x1bb88) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1bba0) = (short)(((int)*(short *)(puVar12 + 0x1bba0) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1bbb8) = (short)(((int)*(short *)(puVar12 + 0x1bbb8) >> 0x2) << 0x2);
        *(short *)(puVar12 + 0x1bbd0) = (short)(((int)*(short *)(puVar12 + 0x1bbd0) >> 0x2) << 0x2);
        iVar11 += -0x1;
        puVar12 = puVar12 + 0x180;
    } while (iVar11 != 0x0);
    local_60 = 0x2ba1e8;
    osWritebackDCache(0x2ba1e8,0x1f40);
    osWritebackDCache(0x2bc8a8,0xf00);
    puVar5 = glistp;
    puVar6 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar6;
    puVar5[0x1] = 0x0;
    puVar5 = glistp;
    puVar6 = glistp + 0x2;
    *glistp = 0xff10013f;
    glistp = puVar6;
    puVar5[0x1] = gTheGame._119512_4_;
    puVar5 = glistp;
    puVar6 = glistp + 0x2;
    *glistp = 0xe3000c00;
    glistp = puVar6;
    puVar5[0x1] = 0x0;
    puVar5 = glistp;
    puVar6 = glistp + 0x2;
    *glistp = 0xfcffffff;
    glistp = puVar6;
    puVar5[0x1] = 0xfffcf279;
    puVar5 = glistp;
    puVar6 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar6;
    puVar5[0x1] = 0xf0a7008;
    puVar5 = glistp;
    puVar6 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar6;
    puVar5[0x1] = 0x0;
    puVar5 = glistp;
    puVar7 = glistp + 0x2;
    *glistp = 0xe2001e01;
    glistp = puVar7;
    puVar5[0x1] = 0x1;
    if (true) {
        switch(local_64) {
        case 0x0:
            iVar16 = 0x8;
            local_1b8[0] = (char)FlicTable._44_4_;
            local_1b8[1] = (char)FlicTable._48_4_;
            local_1b8[2] = (char)FlicTable._52_4_;
            local_1b8[3] = (char)FlicTable._64_4_;
            local_1b4 = (char)FlicTable._68_4_;
            local_1b3 = (char)FlicTable._184_4_;
            local_1b2 = (char)FlicTable._188_4_;
            local_1b1 = (char)FlicTable._192_4_;
            break;
        case 0x5:
            iVar16 = 0x5;
            local_1b8[0] = (char)FlicTable._0_4_;
            local_1b8[1] = (char)FlicTable._32_4_;
            local_1b8[2] = (char)FlicTable._40_4_;
            local_1b8[3] = (char)FlicTable._56_4_;
            local_1b4 = (char)FlicTable._72_4_;
            break;
        case 0x6:
            iVar16 = 0x2;
            local_1b8[0] = (char)FlicTable._312_4_;
            local_1b8[1] = (char)FlicTable._460_4_;
            break;
        case 0x8:
            iVar16 = 0xa;
            local_1b8[0] = (char)FlicTable._236_4_;
            local_1b8[1] = (char)FlicTable._296_4_;
            local_1b8[2] = (char)FlicTable._28_4_;
            local_1b8[3] = (char)FlicTable._240_4_;
            local_1b4 = (char)FlicTable._248_4_;
            local_1b3 = (char)FlicTable._256_4_;
            local_1b2 = (char)FlicTable._264_4_;
            local_1b1 = (char)FlicTable._272_4_;
            local_1b0 = (char)FlicTable._280_4_;
            local_1af = (char)FlicTable._288_4_;
            break;
        case 0xd:
            iVar16 = 0x9;
            local_1b8[0] = (char)FlicTable._0_4_;
            local_1b8[1] = (char)FlicTable._8_4_;
            local_1b8[2] = (char)FlicTable._12_4_;
            local_1b8[3] = (char)FlicTable._16_4_;
            local_1b4 = (char)FlicTable._20_4_;
            local_1b3 = (char)FlicTable._24_4_;
            local_1b2 = (char)FlicTable._28_4_;
            local_1b1 = (char)FlicTable._32_4_;
            local_1b0 = (char)FlicTable._36_4_;
        }
    }
    local_4c = 0x4000400;
    local_5c = 0xf5500000;
    local_58 = 0xf3000000;
    local_54 = 0xe1000000;
    local_50 = 0xf1000000;
    pcVar9 = local_1b8;
    uVar17 = 0x0;
    for (iVar11 = 0x0; puVar7 = glistp, iVar11 < iVar16; iVar11 += 0x1) {
        if (*(int *)(gTheGame + *pcVar9 * 0x20 + 0x16388) < 0x0) {
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe3001001;
            glistp = puVar8;
            puVar7[0x1] = 0x8000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfd100000;
            glistp = puVar8;
            puVar7[0x1] = *(uint *)(gTheGame +
                                   *(int *)(gTheGame + *pcVar9 * 0x20 + 0x16390) * 0x18 + 0x18fe4);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe8000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf5000100;
            glistp = puVar8;
            puVar7[0x1] = 0x7000000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf0000000;
            glistp = puVar8;
            puVar7[0x1] = 0x73fc000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc
                      (&glistp,*(int *)(gTheGame + *pcVar9 * 0x20 + 0x16394) * 0x28 + 0x2ba1e8);
        }
        else if ((0x0 < *(int *)(gTheGame + *pcVar9 * 0x20 + 0x16388)) && ((int)uVar17 < 0x8)) {
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe3001001;
            glistp = puVar8;
            puVar7[0x1] = 0x8000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfd100000;
            glistp = puVar8;
            puVar7[0x1] = *(uint *)(gTheGame +
                                   *(int *)(gTheGame + *pcVar9 * 0x20 + 0x16390) * 0x18 + 0x18fe4);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe8000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf5000100;
            glistp = puVar8;
            puVar7[0x1] = 0x7000000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf0000000;
            glistp = puVar8;
            puVar7[0x1] = 0x73fc000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            iVar18 = *(int *)(gTheGame + *pcVar9 * 0x20 + 0x16398);
            iVar13 = *(int *)(gTheGame + *pcVar9 * 0x20 + 0x16394);
            puVar8 = glistp + 0x2;
            *glistp = 0xfd500000;
            glistp = puVar8;
            iVar13 *= 0x18;
            puVar7[0x1] = *(uint *)(gTheGame + iVar18 * 0x18 + 0x1b2e4);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = local_5c;
            glistp = puVar8;
            puVar7[0x1] = 0x7000000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = local_58;
            glistp = puVar8;
            uVar15 = ((int)((uint)*(ushort *)(gTheGame + iVar13 + 0x1ba70) * 0x100 + 0x1) >> 0x1) -
                     0x1;
            if (0x7fe < (int)uVar15) {
                uVar15 = 0x7ff;
            }
            uVar14 = (int)((uint)*(ushort *)(gTheGame + iVar13 + 0x1ba70) << 0x3) >> 0x3;
            if (uVar14 == 0x0) {
                uVar14 = 0x1;
            }
            puVar7[0x1] = (uVar14 + 0x7ff) / uVar14 & 0xfff | (uVar15 & 0xfff) << 0xc | 0x7000000;
            puVar7 = glistp;
            uVar15 = (uVar17 & 0x7) << 0x18;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = ((int)((uint)*(ushort *)(gTheGame + iVar13 + 0x1ba70) * 0x8 + 0x7) >> 0x3 &
                      0x1ffU) << 0x9 | 0xf5480000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar8;
            puVar7[0x1] = ((uint)*(ushort *)(gTheGame + iVar13 + 0x1ba70) * 0x8 + -0x1) * 0x4000 &
                          0xffc000 | 0x7c;
            puVar7 = glistp;
            uVar1 = *(ushort *)(gTheGame + iVar13 + 0x1ba6c);
            uVar2 = *(ushort *)(gTheGame + iVar13 + 0x1ba70);
            uVar3 = *(ushort *)(gTheGame + iVar13 + 0x1ba72);
            uVar4 = *(ushort *)(gTheGame + iVar13 + 0x1ba64);
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = (uVar2 & 0x1ff) << 0x9 | 0xf5480000 | uVar3 & 0x1ff;
            glistp = puVar8;
            puVar7[0x1] = uVar15;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar8;
            puVar7[0x1] = (((int)(uint)uVar1 >> 0x5) + -0x1) * 0x4 & 0xffcU |
                          uVar15 | (((int)(uint)uVar4 >> 0x5) + -0x1) * 0x4000 & 0xffc000U;
            puVar7 = glistp;
            uVar17 += 0x1;
            puVar8 = glistp + 0x2;
            *glistp = (((int)*(short *)(gTheGame + iVar13 + 0x1ba60) >> 0x2) +
                      ((int)(uint)uVar4 >> 0x5)) * 0x4000 & 0xffc000U | 0xe4000000 |
                      (((int)*(short *)(gTheGame + iVar13 + 0x1ba68) >> 0x2) +
                      ((int)(uint)uVar1 >> 0x5)) * 0x4 & 0xffcU;
            glistp = puVar8;
            puVar7[0x1] = (int)*(short *)(gTheGame + iVar13 + 0x1ba68) & 0xfffU |
                          uVar15 | ((int)*(short *)(gTheGame + iVar13 + 0x1ba60) & 0xfffU) << 0xc;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = local_54;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = local_50;
            glistp = puVar8;
            puVar7[0x1] = local_4c;
        }
        pcVar9 = pcVar9 + 0x1;
    }
    puVar8 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar8;
    puVar7[0x1] = 0x0;
    puVar7 = glistp;
    puVar8 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar8;
    puVar7[0x1] = 0x0;
    puVar7 = glistp;
    if (true) {
        switch(local_64) {
        case 0x3:
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba738);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba878);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba918);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba9b8);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2baa58);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2baaf8);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2bab48);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe3001001;
            glistp = puVar8;
            puVar7[0x1] = 0x8000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfd100000;
            glistp = puVar8;
            puVar7[0x1] = gTheGame._102468_4_;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe8000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf5000100;
            glistp = puVar8;
            puVar7[0x1] = 0x7000000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf0000000;
            glistp = puVar8;
            puVar7[0x1] = 0x73fc000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfc119623;
            glistp = puVar8;
            puVar7[0x1] = 0xff2fffff;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe200001c;
            glistp = puVar8;
            puVar7[0x1] = 0x504240;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfa000000;
            glistp = puVar8;
            puVar7[0x1] = 0xffffff46;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba710);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfcffffff;
            glistp = puVar8;
            puVar7[0x1] = 0xfffcf279;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe200001c;
            glistp = puVar8;
            puVar7[0x1] = 0xf0a7008;
            break;
        case 0x4:
            gTheGame._103380_2_ = (short)(((int)gTheGame._103380_2_ >> 0x2) + 0x7) * 0x4;
            osWritebackDCache(0x2ba210,0x28);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba210);
            break;
        case 0x5:
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe3001001;
            glistp = puVar8;
            puVar7[0x1] = 0x8000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfd100000;
            glistp = puVar8;
            puVar7[0x1] = gTheGame._102372_4_;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe8000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf5000100;
            glistp = puVar8;
            puVar7[0x1] = 0x7000000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf0000000;
            glistp = puVar8;
            puVar7[0x1] = 0x73fc000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,local_60);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe3001001;
            glistp = puVar8;
            puVar7[0x1] = 0x8000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfd100000;
            glistp = puVar8;
            puVar7[0x1] = gTheGame._102396_4_;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe8000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf5000100;
            glistp = puVar8;
            puVar7[0x1] = 0x7000000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf0000000;
            glistp = puVar8;
            puVar7[0x1] = 0x73fc000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba238);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe3001001;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba288);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe3001001;
            glistp = puVar8;
            puVar7[0x1] = 0x8000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfd100000;
            glistp = puVar8;
            puVar7[0x1] = gTheGame._102516_4_;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe8000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf5000100;
            glistp = puVar8;
            puVar7[0x1] = 0x7000000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf0000000;
            glistp = puVar8;
            puVar7[0x1] = 0x73fc000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfc119623;
            glistp = puVar8;
            puVar7[0x1] = 0xff2fffff;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe200001c;
            glistp = puVar8;
            puVar7[0x1] = 0x504240;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfa000000;
            glistp = puVar8;
            puVar7[0x1] = 0xffffff64;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba468);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfcffffff;
            glistp = puVar8;
            puVar7[0x1] = 0xfffcf279;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe200001c;
            glistp = puVar8;
            puVar7[0x1] = 0xf0a7008;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe3001001;
            glistp = puVar8;
            puVar7[0x1] = 0x8000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfd100000;
            glistp = puVar8;
            puVar7[0x1] = gTheGame._102444_4_;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe8000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf5000100;
            glistp = puVar8;
            puVar7[0x1] = 0x7000000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf0000000;
            glistp = puVar8;
            puVar7[0x1] = 0x73fc000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba3f0);
            break;
        case 0x6:
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe200001c;
            glistp = puVar8;
            puVar7[0x1] = 0x504240;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfc30fe61;
            glistp = puVar8;
            puVar7[0x1] = 0x55fef379;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfa000000;
            glistp = puVar8;
            puVar7[0x1] = 0xffffffff;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfb000000;
            glistp = puVar8;
            puVar7[0x1] = 0xffffc8ff;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba968);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba990);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfcffffff;
            glistp = puVar8;
            puVar7[0x1] = 0xfffcf279;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe200001c;
            glistp = puVar8;
            puVar7[0x1] = 0xf0a7008;
            break;
        case 0x8:
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe200001c;
            glistp = puVar8;
            puVar7[0x1] = 0x504240;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfc11fe23;
            glistp = puVar8;
            puVar7[0x1] = 0xfffff3f9;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfa000000;
            glistp = puVar8;
            puVar7[0x1] = 0xffe6edff;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba508);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfcffffff;
            glistp = puVar8;
            puVar7[0x1] = 0xfffcf279;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe200001c;
            glistp = puVar8;
            puVar7[0x1] = 0xf0a7008;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe3001001;
            glistp = puVar8;
            puVar7[0x1] = 0x8000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfd100000;
            glistp = puVar8;
            puVar7[0x1] = gTheGame._102540_4_;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe8000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf5000100;
            glistp = puVar8;
            puVar7[0x1] = 0x7000000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xf0000000;
            glistp = puVar8;
            puVar7[0x1] = 0x73fc000;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba4e0);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe3001001;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe200001c;
            glistp = puVar8;
            puVar7[0x1] = 0x504240;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfc30fe61;
            glistp = puVar8;
            puVar7[0x1] = 0x55fef379;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfa000000;
            glistp = puVar8;
            puVar7[0x1] = 0xb4ffb4ff;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfb000000;
            glistp = puVar8;
            puVar7[0x1] = 0xdcffdcff;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba4b8);
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar8;
            puVar7[0x1] = 0x0;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xfcffffff;
            glistp = puVar8;
            puVar7[0x1] = 0xfffcf279;
            puVar7 = glistp;
            puVar8 = glistp + 0x2;
            *glistp = 0xe200001c;
            glistp = puVar8;
            puVar7[0x1] = 0xf0a7008;
        }
    }
    return;
}



void AddAnimation3D1b(undefined4 param_1)

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
    int iVar10;
    int iVar11;
    
    puVar1 = glistp;
    iVar10 = 0x0;
    iVar7 = 0x0;
    iVar9 = 0x0;
    iVar6 = 0x0;
    iVar8 = 0x0;
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
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe2001e01;
    glistp = puVar2;
    puVar1[0x1] = 0x1;
    gTheGame._119338_2_ = 0x504;
    gTheGame._119368_4_ = 0x0;
    gTheGame._119364_2_ = 0x400;
    gTheGame._119366_2_ = 0x400;
    gTheGame._119348_2_ = (short)(((int)gTheGame._119348_2_ >> 0x2) << 0x2);
    if (gWorld == 0x5) {
        *gTheGame._119380_4_ = 0x0;
        osWritebackDCache(0x2be098,0x18);
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
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfd100000;
    glistp = puVar2;
    puVar1[0x1] = gTheGame._119380_4_;
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
    pon_guS2DEmuBgRect1Cyc(&glistp,0x2be070);
    iVar11 = 0x5;
    iVar5 = 0x0;
    do {
        iVar3 = (0xc8 - (iVar5 + 0x1)) * 0x28;
        *(undefined2 *)(gTheGame + iVar3 + 0x193a0) = 0x0;
        *(undefined2 *)(gTheGame + iVar3 + 0x193a2) = 0x104;
        *(undefined2 *)(gTheGame + iVar3 + 0x193a6) = 0x100;
        iVar4 = (0xc8 - (iVar5 + 0x2)) * 0x28;
        *(undefined2 *)(gTheGame + iVar3 + 0x193a8) = 0x0;
        *(undefined2 *)(gTheGame + iVar3 + 0x193aa) = 0x20;
        *(undefined2 *)(gTheGame + iVar3 + 0x193ae) = 0x20;
        *(undefined2 *)(gTheGame + iVar3 + 0x193b4) = 0xfff4;
        iVar5 += 0x2;
        gTheGame[iVar3 + 0x193b6] = 0x2;
        gTheGame[iVar3 + 0x193b7] = 0x1;
        *(undefined2 *)(gTheGame + iVar3 + 0x193b8) = 0x0;
        *(undefined2 *)(gTheGame + iVar3 + 0x193ba) = 0x0;
        *(undefined4 *)(gTheGame + iVar3 + 0x193c0) = 0x0;
        *(undefined2 *)(gTheGame + iVar3 + 0x193bc) = 0x400;
        *(undefined2 *)(gTheGame + iVar3 + 0x193be) = 0x400;
        *(undefined2 *)(gTheGame + iVar4 + 0x193a0) = 0x0;
        *(undefined2 *)(gTheGame + iVar4 + 0x193a2) = 0x104;
        *(undefined2 *)(gTheGame + iVar4 + 0x193a6) = 0x100;
        *(undefined2 *)(gTheGame + iVar4 + 0x193a8) = 0x0;
        *(undefined2 *)(gTheGame + iVar4 + 0x193aa) = 0x20;
        *(undefined2 *)(gTheGame + iVar4 + 0x193ae) = 0x20;
        *(undefined2 *)(gTheGame + iVar4 + 0x193b4) = 0xfff4;
        gTheGame[iVar4 + 0x193b6] = 0x2;
        gTheGame[iVar4 + 0x193b7] = 0x1;
        *(undefined2 *)(gTheGame + iVar4 + 0x193b8) = 0x0;
        *(undefined2 *)(gTheGame + iVar4 + 0x193ba) = 0x0;
        *(undefined4 *)(gTheGame + iVar4 + 0x193c0) = 0x0;
        *(undefined2 *)(gTheGame + iVar4 + 0x193bc) = 0x400;
        *(undefined2 *)(gTheGame + iVar4 + 0x193be) = 0x400;
        puVar1 = glistp;
        iVar11 += -0x1;
    } while (iVar11 != 0x0);
    if (gSelection == 0xaa) {
        gTheGame._111292_2_ = 0x3a0;
        gTheGame._111300_2_ = 0xa0;
        gTheGame._111302_2_ = 0x40;
        gTheGame._111304_4_ = (undefined1 *)0x1948e8;
        gTheGame._111252_2_ = 0x3a0;
        gTheGame._111260_2_ = 0xf4;
        gTheGame._111264_4_ = 0x1926e8;
        iVar10 = 0x3;
        gTheGame._111212_2_ = 0x3a0;
        gTheGame._111220_2_ = 0x164;
        gTheGame._111224_4_ = (undefined *)0x1928e8;
        if (gTheGame._19200_4_ == 0x5) {
            gTheGame._111172_2_ = 0x3a4;
            gTheGame._111180_2_ = 0xbc;
            iVar10 = 0x4;
            gTheGame._111182_2_ = 0x40;
            gTheGame._111178_2_ = 0x40;
            gTheGame._111184_4_ = w_level4;
        }
    }
    else {
        if (gSelection < 0xaa) {
            if (gSelection != 0x8c) {
                if ((gSelection < 0x8c) && (gSelection == 0x82)) {
                    gTheGame._111292_2_ = 0x3a0;
                    gTheGame._111300_2_ = 0xa0;
                    gTheGame._111302_2_ = 0x40;
                    gTheGame._111298_2_ = 0x40;
                    gTheGame._111304_4_ = w_template2;
                    gTheGame._111252_2_ = 0x3a0;
                    gTheGame._111260_2_ = 0xf8;
                    iVar10 = 0x3;
                    gTheGame._111264_4_ = 0x192ae8;
                    gTheGame._111212_2_ = 0x3a4;
                    gTheGame._111220_2_ = 0x118;
                    gTheGame._111222_2_ = 0x40;
                    gTheGame._111218_2_ = 0x40;
                    gTheGame._111224_4_ = &w_level6;
                }
                goto LAB_00036848;
            }
        }
        else if (gSelection != 0xbe) goto LAB_00036848;
        gTheGame._111292_2_ = 0x3a0;
        gTheGame._111300_2_ = 0xa0;
        gTheGame._111304_4_ = w_template1;
        gTheGame._111252_2_ = 0x3a0;
        gTheGame._111260_2_ = 0xf4;
        iVar10 = 0x3;
        gTheGame._111264_4_ = 0x1926e8;
        gTheGame._111212_2_ = 0x3a0;
        gTheGame._111220_2_ = 0x164;
        gTheGame._111224_4_ = (undefined *)0x1928e8;
    }
LAB_00036848:
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
    puVar1[0x1] = otherTable;
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
    for (iVar5 = 0x0; puVar1 = glistp, iVar5 < iVar10; iVar5 += 0x1) {
        iVar11 = (0xc8 - (iVar5 + 0x1)) * 0x28 + 0x2ba1e8;
        osWritebackDCache(iVar11,0x28);
        pon_guS2DEmuBgRect1Cyc(&glistp,iVar11);
    }
    iVar10 = 0x0;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    iVar5 = 0x0;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    if (true) {
        switch(param_1) {
        case 0x0:
            gTheGame._103330_2_ = 0x184;
            iVar9 = 0x1;
            gTheGame._103340_2_ = 0x130;
            iVar7 = 0xc;
            iVar8 = 0x12;
            gTheGame._104050_2_ = 0x184;
            iVar6 = 0xc;
            gTheGame._103370_2_ = 0x184;
            break;
        case 0x3:
            gTheGame._103330_2_ = 0x204;
            gTheGame._103340_2_ = 0x160;
            iVar9 = 0x1;
            iVar7 = 0x2;
            gTheGame._104370_2_ = 0x184;
            iVar8 = 0x1a;
            iVar6 = 0x3;
            gTheGame._103370_2_ = 0x184;
            break;
        case 0x4:
            gTheGame._103330_2_ = 0x204;
            gTheGame._103340_2_ = 0x12c;
            iVar9 = 0xb;
            iVar7 = 0x3;
            gTheGame._103690_2_ = 0x104;
            iVar8 = 0x9;
            iVar6 = 0x3;
            gTheGame._103770_2_ = 0x104;
            break;
        case 0x5:
            gTheGame._104090_2_ = 0x204;
            gTheGame._104100_2_ = 0x13c;
            iVar10 = 0x13;
            gTheGame._104810_2_ = 0x104;
            iVar5 = 0x7;
            iVar9 = 0x14;
            gTheGame._104130_2_ = 0x104;
            iVar7 = 0x9;
            iVar8 = 0x25;
            gTheGame._104820_2_ = 0x2a0;
            iVar6 = 0x0;
            break;
        case 0x6:
            gTheGame._103330_2_ = 0x104;
            iVar9 = 0x1;
            gTheGame._103340_2_ = 0x144;
            iVar7 = 0x2;
            iVar8 = 0x1b;
            gTheGame._104410_2_ = 0x104;
            iVar6 = 0x2;
            gTheGame._103370_2_ = 0x104;
            break;
        case 0x8:
            gTheGame._103330_2_ = 0x204;
            gTheGame._103340_2_ = 0xdc;
            iVar9 = 0x4;
            iVar7 = 0x3;
            gTheGame._103930_2_ = 0x104;
            iVar8 = 0xf;
            iVar6 = 0x3;
            gTheGame._103490_2_ = 0x104;
            break;
        case 0xd:
            gTheGame._103690_2_ = 0x204;
            gTheGame._103700_2_ = 0x1ac;
            gTheGame._103370_2_ = 0x84;
            iVar10 = 0x9;
            iVar5 = 0x5;
            gTheGame._103380_2_ = 0x144;
            iVar9 = 0x2;
            iVar7 = 0x4;
            gTheGame._103410_2_ = 0x184;
            iVar8 = 0x1;
            iVar6 = 0x1;
        }
    }
    puVar2 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar2;
    puVar1[0x1] = 0x8000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfd100000;
    glistp = puVar2;
    puVar1[0x1] = *(undefined4 *)(gTheGame + iVar5 * 0x18 + 0x18fe4);
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
    pon_guS2DEmuBgRect1Cyc(&glistp,iVar10 * 0x28 + 0x2ba1e8);
    puVar1 = glistp;
    if (gWorld == 0x5) {
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
        puVar1[0x1] = *(undefined4 *)(gTheGame + iVar7 * 0x18 + 0x18fe4);
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
        pon_guS2DEmuBgRect1Cyc(&glistp,iVar9 * 0x28 + 0x2ba1e8);
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
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar2;
        puVar1[0x1] = 0x504240;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfc30fe61;
        glistp = puVar2;
        puVar1[0x1] = 0x55fef379;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfa000000;
        glistp = puVar2;
        puVar1[0x1] = 0xffffffff;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfb000000;
        glistp = puVar2;
        puVar1[0x1] = 0xd2d2ffff;
        pon_guS2DEmuBgRect1Cyc(&glistp,iVar8 * 0x28 + 0x2ba1e8);
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
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
        puVar1[0x1] = *(undefined4 *)(gTheGame + iVar6 * 0x18 + 0x18fe4);
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
        pon_guS2DEmuBgRect1Cyc(&glistp,iVar8 * 0x28 + 0x2ba1e8);
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
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfd100000;
        glistp = puVar2;
        puVar1[0x1] = *(undefined4 *)(gTheGame + iVar7 * 0x18 + 0x18fe4);
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
        pon_guS2DEmuBgRect1Cyc(&glistp,iVar9 * 0x28 + 0x2ba1e8);
    }
    osWritebackDCache(0x2be070,0x28);
    return;
}



void AddAnimation3D2(int param_1,int param_2)

{
    int iVar1;
    undefined4 *puVar2;
    undefined8 *puVar3;
    undefined4 *puVar4;
    undefined4 uVar5;
    int iVar6;
    int iVar7;
    undefined8 *puVar8;
    undefined4 *puVar9;
    int iVar10;
    undefined4 auStack_168 [0x2];
    int local_160 [0x4d];
    
    puVar2 = glistp;
    iVar1 = gc_mini3d;
    iVar10 = 0x25;
    puVar3 = &_97;
    puVar4 = auStack_168;
    do {
        puVar9 = puVar4;
        puVar8 = puVar3;
        uVar5 = *(undefined4 *)((int)puVar8 + 0xc);
        puVar9[0x2] = *(undefined4 *)(puVar8 + 0x1);
        puVar9[0x3] = uVar5;
        iVar10 += -0x1;
        puVar3 = puVar8 + 0x1;
        puVar4 = puVar9 + 0x2;
    } while (iVar10 != 0x0);
    puVar9[0x4] = *(undefined4 *)(puVar8 + 0x2);
    puVar4 = glistp + 0x2;
    *glistp = 0xde000000;
    glistp = puVar4;
    puVar2[0x1] = initRDP_dl;
    puVar2 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xde000000;
    glistp = puVar4;
    puVar2[0x1] = init3D_dl;
    puVar2 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar4;
    puVar2[0x1] = 0x0;
    puVar2 = glistp;
    iVar10 = 0x0;
    puVar4 = glistp + 0x2;
    *glistp = 0xff10013f;
    glistp = puVar4;
    puVar2[0x1] = gTheGame._119512_4_;
    puVar2 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar4;
    puVar2[0x1] = 0x0;
    puVar2 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe3000c00;
    glistp = puVar4;
    puVar2[0x1] = 0x0;
    puVar2 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xfcffffff;
    glistp = puVar4;
    puVar2[0x1] = 0xfffcf279;
    puVar2 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar4;
    puVar2[0x1] = 0xf0a7008;
    puVar2 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar4;
    puVar2[0x1] = 0x0;
    puVar2 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe2001e01;
    glistp = puVar4;
    puVar2[0x1] = 0x1;
    puVar2 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar4;
    puVar2[0x1] = 0x0;
    do {
        iVar6 = (0xc8 - (iVar10 + 0x1)) * 0x28;
        *(undefined2 *)(gTheGame + iVar6 + 0x193a0) = 0x0;
        *(undefined2 *)(gTheGame + iVar6 + 0x193a2) = 0x84;
        *(undefined2 *)(gTheGame + iVar6 + 0x193a6) = 0x80;
        *(undefined2 *)(gTheGame + iVar6 + 0x193a8) = 0x0;
        *(undefined2 *)(gTheGame + iVar6 + 0x193b4) = 0xfff4;
        gTheGame[iVar6 + 0x193b6] = 0x0;
        gTheGame[iVar6 + 0x193b7] = 0x2;
        *(undefined2 *)(gTheGame + iVar6 + 0x193b8) = 0x0;
        *(undefined2 *)(gTheGame + iVar6 + 0x193ba) = 0x0;
        *(undefined4 *)(gTheGame + iVar6 + 0x193c0) = 0x0;
        *(undefined2 *)(gTheGame + iVar6 + 0x193bc) = 0x400;
        *(undefined2 *)(gTheGame + iVar6 + 0x193be) = 0x400;
        iVar7 = param_2;
        if (iVar10 == 0x0) {
            iVar7 = param_1;
        }
        *(int *)(gTheGame + iVar6 + 0x193b0) = iVar1 + local_160[iVar7 * 0x5] * 0x40;
        *(short *)(gTheGame + iVar6 + 0x193aa) = (short)(local_160[iVar7 * 0x5 + 0x1] << 0x2);
        *(short *)(gTheGame + iVar6 + 0x193ae) = (short)(local_160[iVar7 * 0x5 + 0x1] << 0x2);
        if (iVar10 == 0x0) {
            *(undefined2 *)(gTheGame + iVar6 + 0x193ba) = 0x1;
            *(short *)(gTheGame + iVar6 + 0x193a4) = (short)(local_160[iVar7 * 0x5 + 0x2] << 0x2);
            *(short *)(gTheGame + iVar6 + 0x193ac) = (short)(local_160[iVar7 * 0x5 + 0x4] << 0x2);
        }
        else {
            *(short *)(gTheGame + iVar6 + 0x193a4) = (short)(local_160[iVar7 * 0x5 + 0x3] << 0x2);
            *(short *)(gTheGame + iVar6 + 0x193ac) = (short)(local_160[iVar7 * 0x5 + 0x4] << 0x2);
        }
        osWritebackDCache(iVar6 + 0x2ba1e8,0x28);
        pon_guS2DEmuBgRect1Cyc(&glistp,iVar6 + 0x2ba1e8);
        iVar10 += 0x1;
    } while (iVar10 < 0x2);
    return;
}



void pon_StartAnimation2D(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    undefined1 *puVar4;
    undefined1 *puVar5;
    undefined1 *puVar6;
    int *piVar7;
    undefined4 *puVar8;
    int iVar9;
    int *piVar10;
    int *piVar11;
    int iVar12;
    int *piVar13;
    undefined1 *puVar14;
    int iVar15;
    int *piVar16;
    int iVar17;
    int iVar18;
    int local_88 [0x4];
    int local_78 [0x4];
    int local_68 [0x4];
    int local_58 [0x4];
    undefined4 local_48 [0x6];
    int local_30 [0x5];
    
    if (gTheGame._120328_4_ == 0x2) {
        local_48[0] = 0x0;
        local_68[0] = 0x1f;
        local_78[0] = 0x6c;
        local_58[0] = 0x18;
        local_48[1] = 0x1;
        local_58[1] = 0xbc;
        local_68[1] = 0x1f;
        local_78[1] = 0x6c;
    }
    else {
        local_48[0] = 0x1;
        local_68[0] = 0x5d;
        local_78[0] = 0x3c;
        local_58[0] = 0x12;
        local_88[0] = 0x78;
        local_48[1] = 0x1;
        local_58[1] = 0x56;
        local_68[1] = 0x5d;
        local_78[1] = 0x3c;
        local_88[1] = 0x78;
        local_48[2] = 0x1;
        local_58[2] = 0x9a;
        local_68[2] = 0x5d;
        local_78[2] = 0x3c;
        local_88[2] = 0x78;
        local_48[3] = 0x1;
        local_58[3] = 0xde;
        local_68[3] = 0x5d;
        local_78[3] = 0x3c;
        local_88[3] = 0x78;
    }
    puVar14 = gTheGame;
    piVar16 = local_30;
    puVar5 = gEmptyFlicList;
    puVar4 = puVar14;
    puVar6 = puVar14;
    piVar7 = piVar16;
    iVar17 = gTheGame._120328_4_;
    if (0x0 < gTheGame._120328_4_) {
        do {
            if (*(int *)(puVar4 + 0x16000) != 0x1) {
                *piVar7 = (*(int *)(puVar6 + 0x57b8) * 0x154 >> 0x2) - *(int *)puVar5;
            }
            puVar4 = puVar4 + 0x110;
            puVar5 = (undefined1 *)((int)puVar5 + 0x4);
            puVar6 = puVar6 + 0x57c0;
            piVar7 = piVar7 + 0x1;
            iVar17 += -0x1;
        } while (iVar17 != 0x0);
    }
    puVar5 = mini_shadow;
    puVar4 = puVar14;
    puVar6 = puVar14;
    piVar7 = piVar16;
    for (iVar17 = 0x0; puVar1 = glistp, iVar17 < gTheGame._120328_4_; iVar17 += 0x1) {
        if (*(int *)(puVar4 + 0x16000) != 0x1) {
            iVar18 = 0x2;
            iVar12 = *piVar7;
            iVar3 = *(int *)(puVar6 + 0x57b8) * 0x28 >> 0x2;
            iVar15 = 0x0;
            do {
                iVar9 = (iVar3 + iVar15) * 0xc;
                if (*(int *)(gTheGame + iVar9 + 0x18e00) != 0x0) {
                    *(undefined4 *)(gTheGame + iVar9 + 0x18e00) =
                         *(undefined4 *)
                          (FlicTable + (*(int *)(gTheGame + iVar9 + 0x18e00) - iVar12) * 0x4);
                }
                iVar9 = (iVar3 + iVar15 + 0x1) * 0xc;
                if (*(int *)(gTheGame + iVar9 + 0x18e00) != 0x0) {
                    *(undefined4 *)(gTheGame + iVar9 + 0x18e00) =
                         *(undefined4 *)
                          (FlicTable + (*(int *)(gTheGame + iVar9 + 0x18e00) - iVar12) * 0x4);
                }
                iVar9 = (iVar3 + iVar15 + 0x2) * 0xc;
                if (*(int *)(gTheGame + iVar9 + 0x18e00) != 0x0) {
                    *(undefined4 *)(gTheGame + iVar9 + 0x18e00) =
                         *(undefined4 *)
                          (FlicTable + (*(int *)(gTheGame + iVar9 + 0x18e00) - iVar12) * 0x4);
                }
                iVar9 = (iVar3 + iVar15 + 0x3) * 0xc;
                if (*(int *)(gTheGame + iVar9 + 0x18e00) != 0x0) {
                    *(undefined4 *)(gTheGame + iVar9 + 0x18e00) =
                         *(undefined4 *)
                          (FlicTable + (*(int *)(gTheGame + iVar9 + 0x18e00) - iVar12) * 0x4);
                }
                iVar15 += 0x4;
                iVar18 += -0x1;
            } while (iVar18 != 0x0);
            iVar3 *= 0xc;
            *(undefined4 *)(gTheGame + *(int *)(gTheGame + iVar3 + 0x18e00) * 0x20 + 0x16384) =
                 *(undefined4 *)(gTheGame + *(int *)(gTheGame + iVar3 + 0x18e00) * 0x20 + 0x16380);
            *(int *)(gTheGame + iVar3 + 0x18e58) =
                 (int)*(short *)(gTheGame +
                                *(int *)(gTheGame +
                                        *(int *)(gTheGame + iVar3 + 0x18e00) * 0x20 + 0x16394) *
                                0x28 + 0x193a4) >> 0x2;
            *(int *)(gTheGame + iVar3 + 0x18e5c) = (int)*(short *)puVar5 >> 0x2;
        }
        puVar4 = puVar4 + 0x110;
        puVar6 = puVar6 + 0x57c0;
        piVar7 = piVar7 + 0x1;
        puVar5 = (undefined1 *)((int)puVar5 + 0x18);
    }
    if (gWorld != 0xf) {
        puVar2 = glistp + 0x2;
        *glistp = 0xde000000;
        glistp = puVar2;
        puVar1[0x1] = initRDP_dl;
        puVar1 = glistp;
        puVar6 = gFlicTableNo;
        puVar2 = glistp + 0x2;
        *glistp = 0xde000000;
        glistp = puVar2;
        puVar1[0x1] = init2D_dl;
        puVar1 = glistp;
        puVar8 = local_48;
        piVar7 = local_58;
        piVar11 = local_78;
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        piVar13 = local_88;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        piVar10 = local_68;
        puVar2 = glistp + 0x2;
        *glistp = 0xff10013f;
        glistp = puVar2;
        puVar1[0x1] = gTheGame._119512_4_;
        puVar4 = puVar14;
        for (iVar17 = 0x0; iVar17 < gTheGame._120328_4_; iVar17 += 0x1) {
            if (*(int *)(puVar4 + 0x16000) != 0x1) {
                iVar3 = (*(int *)(puVar14 + 0x57b8) * 0x154 >> 0x2) - *piVar16;
                *(int *)puVar6 = iVar3;
                iVar3 = *(int *)(gTheGame + *(int *)(FlicTable + iVar3 * 0x4) * 0x20 + 0x16394) *
                        0x28;
                *(short *)(gTheGame + iVar3 + 0x193ba) = (short)*puVar8;
                *(short *)(gTheGame + iVar3 + 0x193a4) = (short)(*piVar7 << 0x2);
                *(short *)(gTheGame + iVar3 + 0x193ac) = (short)(*piVar10 << 0x2);
                *(short *)(gTheGame + iVar3 + 0x193a6) = (short)(*piVar11 << 0x2);
                if (0x2 < gTheGame._120328_4_) {
                    *(short *)(gTheGame + iVar3 + 0x193ae) = (short)(*piVar13 << 0x2);
                    *(undefined2 *)(gTheGame + iVar3 + 0x193a2) = 0x204;
                    *(undefined2 *)(gTheGame + iVar3 + 0x193aa) = 0x304;
                    *(undefined2 *)(gTheGame + iVar3 + 0x193bc) = 0x733;
                    *(undefined2 *)(gTheGame + iVar3 + 0x193be) = 0x600;
                }
            }
            puVar4 = puVar4 + 0x110;
            piVar16 = piVar16 + 0x1;
            puVar14 = puVar14 + 0x57c0;
            puVar6 = (undefined1 *)((int)puVar6 + 0x4);
            puVar8 = puVar8 + 0x1;
            piVar7 = piVar7 + 0x1;
            piVar10 = piVar10 + 0x1;
            piVar11 = piVar11 + 0x1;
            piVar13 = piVar13 + 0x1;
        }
    }
    return;
}



void pon_DrawBackChara(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined1 *puVar6;
    undefined1 *puVar7;
    
    puVar1 = glistp;
    if (gWorld != 0xf) {
        puVar2 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar2;
        puVar7 = gTheGame;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar6 = gFlicTableNo;
        puVar2 = glistp + 0x2;
        *glistp = 0xe3000a01;
        glistp = puVar2;
        puVar1[0x1] = 0x200000;
        for (iVar5 = 0x0; puVar1 = glistp, iVar5 < gTheGame._120328_4_; iVar5 += 0x1) {
            if (*(int *)(puVar7 + 0x16000) != 0x1) {
                iVar3 = *(int *)(gTheGame +
                                *(int *)(FlicTable + *(int *)puVar6 * 0x4) * 0x20 + 0x16390);
                iVar4 = *(int *)(gTheGame +
                                *(int *)(FlicTable + *(int *)puVar6 * 0x4) * 0x20 + 0x16394);
                puVar2 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe3001001;
                glistp = puVar2;
                puVar1[0x1] = 0x8000;
                pon_gSPObjLoadTxtr(&glistp,iVar3 * 0x18 + 0x2b9e28);
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                if (gTheGame._120328_4_ < 0x3) {
                    puVar2 = glistp + 0x2;
                    *glistp = 0xe3000a01;
                    glistp = puVar2;
                    puVar1[0x1] = 0x200000;
                    pon_gSPBgRectCopy(&glistp,iVar4 * 0x28 + 0x2ba1e8);
                }
                else {
                    puVar2 = glistp + 0x2;
                    *glistp = 0xe3000a01;
                    glistp = puVar2;
                    puVar1[0x1] = 0x0;
                    pon_gSPBgRect1Cyc(&glistp,iVar4 * 0x28 + 0x2ba1e8);
                }
            }
            puVar7 = puVar7 + 0x110;
            puVar6 = (undefined1 *)((int)puVar6 + 0x4);
        }
    }
    return;
}



void StartAnimation3D(void)

{
    byte bVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined2 local_5c;
    undefined local_5a;
    int local_50;
    undefined4 local_4c;
    
    puVar2 = glistp;
    local_68 = 0x1020102;
    local_64 = 0x1010102;
    local_60 = 0x2020202;
    local_5c = 0x102;
    local_5a = 0x2;
    if (gWorld != 0xf) {
        gTheGame._103354_2_ = 0x0;
        gTheGame._103332_2_ = 0x60;
        local_4c = 0x204;
        gTheGame._103340_2_ = 0x7c;
        gTheGame._103334_2_ = 0x1b0;
        gTheGame._103330_2_ = 0x204;
        gTheGame._103360_4_ = 0x0;
        gTheGame._103356_2_ = 0x400;
        gTheGame._103358_2_ = 0x400;
        puVar3 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        local_50 = 0x2b9e2c;
        puVar3 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar3;
        puVar2[0x1] = 0x8000;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xfd100000;
        glistp = puVar3;
        puVar2[0x1] = gTheGame._102372_4_;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe8000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xf5000100;
        glistp = puVar3;
        puVar2[0x1] = 0x7000000;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe6000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xf0000000;
        glistp = puVar3;
        puVar2[0x1] = 0x73fc000;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba1e8);
        puVar2 = glistp;
        gTheGame._105354_2_ = 0x1;
        gTheGame._105332_2_ = 0x2a0;
        gTheGame._105340_2_ = 0x7c;
        gTheGame._105334_2_ = 0x1b0;
        gTheGame._105330_2_ = (undefined2)local_4c;
        gTheGame._105360_4_ = 0x0;
        gTheGame._105356_2_ = 0x400;
        gTheGame._105358_2_ = 0x400;
        puVar3 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar3;
        puVar2[0x1] = 0x8000;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xfd100000;
        glistp = puVar3;
        puVar2[0x1] = gTheGame._102612_4_;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe8000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xf5000100;
        glistp = puVar3;
        puVar2[0x1] = 0x7000000;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe6000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xf0000000;
        glistp = puVar3;
        puVar2[0x1] = 0x73fc000;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba9b8);
        puVar2 = glistp;
        bVar1 = *(byte *)((int)&local_68 + gTheGame._19204_4_);
        gTheGame._103372_2_ = 0x220;
        gTheGame._103380_2_ = 0x298;
        gTheGame._103374_2_ = 0xc0;
        gTheGame._103370_2_ = 0x104;
        gTheGame._103400_4_ = 0x0;
        gTheGame._103396_2_ = 0x400;
        gTheGame._103398_2_ = 0x400;
        puVar3 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar3;
        puVar2[0x1] = 0x8000;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xfd100000;
        glistp = puVar3;
        puVar2[0x1] = *(undefined4 *)(local_50 + (uint)bVar1 * 0x18);
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe8000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xf5000100;
        glistp = puVar3;
        puVar2[0x1] = 0x7000000;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe6000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xf0000000;
        glistp = puVar3;
        puVar2[0x1] = 0x73fc000;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba210);
    }
    return;
}



void UpdateAnimation2a(int param_1,int *param_2,int *param_3,int param_4)

{
    short sVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    
    iVar6 = 0x0;
    if (*param_2 == param_2[0x3]) {
        param_2[0x1] = 0x1;
    }
    iVar7 = 0xa;
    iVar4 = 0x0;
    iVar3 = 0x0;
    iVar2 = param_1;
    do {
        iVar5 = iVar3;
        if (*(int *)(iVar2 + 0x2520) == 0x0) break;
        if (*(int *)(iVar2 + 0x2520) == 0x4) {
            if (iVar6 < *(int *)(iVar2 + 0x2524)) {
                iVar6 = *(int *)(iVar2 + 0x2524);
            }
        }
        else if (*(int *)(iVar2 + 0x2520) == 0x5) {
            if (iVar6 < *(int *)(iVar2 + 0x2524)) {
                iVar6 = *(int *)(iVar2 + 0x2524);
            }
            iVar4 = -0x1;
        }
        if (*(int *)(iVar2 + 0x2570) == 0x0) break;
        if (*(int *)(iVar2 + 0x2570) == 0x4) {
            if (iVar6 < *(int *)(iVar2 + 0x2574)) {
                iVar6 = *(int *)(iVar2 + 0x2574);
            }
        }
        else if (*(int *)(iVar2 + 0x2570) == 0x5) {
            if (iVar6 < *(int *)(iVar2 + 0x2574)) {
                iVar6 = *(int *)(iVar2 + 0x2574);
            }
            iVar4 = -0x1;
        }
        iVar5 = iVar3 + 0x1;
        if (*(int *)(iVar2 + 0x25c0) == 0x0) break;
        if (*(int *)(iVar2 + 0x25c0) == 0x4) {
            if (iVar6 < *(int *)(iVar2 + 0x25c4)) {
                iVar6 = *(int *)(iVar2 + 0x25c4);
            }
        }
        else if (*(int *)(iVar2 + 0x25c0) == 0x5) {
            if (iVar6 < *(int *)(iVar2 + 0x25c4)) {
                iVar6 = *(int *)(iVar2 + 0x25c4);
            }
            iVar4 = -0x1;
        }
        iVar5 = iVar3 + 0x2;
        if (*(int *)(iVar2 + 0x2610) == 0x0) break;
        if (*(int *)(iVar2 + 0x2610) == 0x4) {
            if (iVar6 < *(int *)(iVar2 + 0x2614)) {
                iVar6 = *(int *)(iVar2 + 0x2614);
            }
        }
        else if (*(int *)(iVar2 + 0x2610) == 0x5) {
            if (iVar6 < *(int *)(iVar2 + 0x2614)) {
                iVar6 = *(int *)(iVar2 + 0x2614);
            }
            iVar4 = -0x1;
        }
        iVar2 += 0x140;
        iVar3 += 0x3;
        iVar7 += -0x1;
        iVar5 = iVar3;
    } while (iVar7 != 0x0);
    iVar3 = param_2[0x1];
    iVar2 = iVar3;
    if (iVar4 == 0x0) {
        if ((*(int *)(param_1 + 0x4a88) != 0x0) && (iVar3 == 0x1)) {
            iVar2 = 0x2;
        }
    }
    else if (iVar3 != 0x4) {
        iVar2 = 0x4;
        if (0xa < iVar6) {
            iVar2 = 0x5;
        }
        if (gSelection == 0xd2) {
            iVar4 = pon_GetWhomFromUnderAttackBlock(param_4,iVar5);
            param_3 = (int *)(gTheGame +
                             (*(int *)(gTheGame + iVar4 * 0x57c0 + 0x57b8) * 0x28 >> 0x2) * 0xc +
                             0x18e00);
            pon_SetSpecialAttack(*(undefined4 *)(gTheGame + iVar4 * 0x57c0 + 0x4b04),param_4);
        }
        iVar4 = param_3[0x9];
        *(undefined4 *)(gTheGame + *param_3 * 0x20 + 0x16384) = 0xffffffff;
        if (((gWorld == 0x10) && (*(int *)(param_1 + 0x4b04) == 0x10)) && (param_3[0x1] == 0x4)) {
            iVar5 = param_2[0x15];
            iVar7 = 0x2;
            *(undefined4 *)(gTheGame + iVar5 * 0x20 + 0x16384) = 0xffffffff;
            iVar5 = *(int *)(gTheGame + iVar5 * 0x20 + 0x1639c);
            *(undefined4 *)(gTheGame + iVar5 * 0x20 + 0x16384) = 0xffffffff;
            iVar5 = *(int *)(gTheGame + iVar5 * 0x20 + 0x1639c);
            *(undefined4 *)(gTheGame + iVar5 * 0x20 + 0x16384) = 0xffffffff;
            iVar5 = *(int *)(gTheGame + iVar5 * 0x20 + 0x1639c);
            *(undefined4 *)(gTheGame + iVar5 * 0x20 + 0x16384) = 0xffffffff;
            iVar5 = *(int *)(gTheGame + iVar5 * 0x20 + 0x1639c);
            *(undefined4 *)(gTheGame + iVar5 * 0x20 + 0x16384) = 0xffffffff;
            iVar5 = *(int *)(gTheGame + iVar5 * 0x20 + 0x1639c);
            *(undefined4 *)(gTheGame + iVar5 * 0x20 + 0x16384) = 0xffffffff;
            iVar5 = *(int *)(gTheGame + iVar5 * 0x20 + 0x1639c);
            *(undefined4 *)(gTheGame + iVar5 * 0x20 + 0x16384) = 0xffffffff;
            iVar5 = *(int *)(gTheGame + iVar5 * 0x20 + 0x1639c);
            *(undefined4 *)(gTheGame + iVar5 * 0x20 + 0x16384) = 0xffffffff;
            iVar5 = *(int *)(gTheGame + iVar5 * 0x20 + 0x1639c);
            if (true) {
                do {
                    *(undefined4 *)(gTheGame + iVar5 * 0x20 + 0x16384) = 0xffffffff;
                    iVar5 = *(int *)(gTheGame + iVar5 * 0x20 + 0x1639c);
                    iVar7 += -0x1;
                } while (iVar7 != 0x0);
            }
        }
        *param_3 = iVar4;
        param_3[0x1] = 0x3;
        iVar4 *= 0x20;
        *(int *)(gTheGame + iVar4 + 0x16384) = *(int *)(gTheGame + iVar4 + 0x16380) + 0x1;
        param_2[0xd] = 0xc;
        if (param_2[0xe] < iVar2) {
            param_2[0xe] = iVar2;
        }
        iVar2 = 0x4;
    }
    if ((iVar3 != iVar2) && (iVar2 != 0x4)) {
        *(undefined4 *)(gTheGame + *param_2 * 0x20 + 0x16384) = 0xffffffff;
        *param_2 = param_2[iVar2 * 0x3];
        param_2[0x1] = iVar2;
        *(int *)(gTheGame + *param_2 * 0x20 + 0x16384) =
             *(int *)(gTheGame + *param_2 * 0x20 + 0x16380) + 0x1;
    }
    iVar2 = param_2[0xd];
    param_2[0xd] = iVar2 + -0x1;
    if (iVar2 < 0x1) {
        return;
    }
    if (param_2[0xd] != 0x0) {
        return;
    }
    if (param_2[0xe] != 0x4) {
        if (param_4 == 0x0) {
            if (gTheGame._41668_4_ == 0x10) {
                iVar6 = 0x0;
            }
            else {
                iVar6 = -0x7b;
            }
        }
        else if (param_4 == 0x1) {
            iVar6 = -0x7c;
        }
        else if (param_4 == 0x2) {
            iVar6 = -0x7c;
        }
        else if (param_4 == 0x3) {
            iVar6 = -0x7c;
        }
        iVar3 = param_2[0xc];
        iVar2 = iVar3 * 0x20;
        *(int *)(gTheGame + iVar2 + 0x16388) = iVar6;
        iVar7 = *(int *)(gTheGame + iVar2 + 0x16394);
        iVar4 = iVar7 / 0x32 + (iVar7 >> 0x1f);
        iVar4 = iVar7 + (iVar4 - (iVar4 >> 0x1f)) * -0x32;
        iVar7 *= 0x28;
        *(undefined4 *)(gTheGame + iVar7 + 0x193c0) = 0x0;
        *(undefined2 *)(gTheGame + iVar7 + 0x193bc) = 0x400;
        *(undefined2 *)(gTheGame + iVar7 + 0x193be) = 0x400;
        if ((iVar4 == 0x10) || (iVar4 == 0x11)) {
            sVar1 = *(short *)(gTheGame + iVar7 + 0x193a2);
            if ((sVar1 != 0x84) && (0x1 < (ushort)(sVar1 - 0x80U))) goto LAB_00038488;
            *(short *)(gTheGame + iVar7 + 0x193a2) = 0x84;
        }
        else {
LAB_00038488:
            *(undefined2 *)(gTheGame + iVar7 + 0x193a2) = 0x104;
        }
        iVar4 = *(int *)(gTheGame + iVar2 + 0x1639c) * 0x20;
        *(int *)(gTheGame + iVar4 + 0x16388) = iVar6;
        iVar4 = *(int *)(gTheGame + iVar4 + 0x1639c);
        *(int *)(gTheGame + iVar4 * 0x20 + 0x16388) = iVar6;
        iVar4 = *(int *)(gTheGame + iVar4 * 0x20 + 0x1639c);
        *(int *)(gTheGame + iVar4 * 0x20 + 0x16388) = iVar6;
        iVar4 = *(int *)(gTheGame + iVar4 * 0x20 + 0x1639c);
        *(int *)(gTheGame + iVar4 * 0x20 + 0x16388) = iVar6;
        iVar4 = *(int *)(gTheGame + iVar4 * 0x20 + 0x1639c);
        *(int *)(gTheGame + iVar4 * 0x20 + 0x16388) = iVar6;
        iVar4 = *(int *)(gTheGame + iVar4 * 0x20 + 0x1639c);
        *(int *)(gTheGame + iVar4 * 0x20 + 0x16388) = iVar6;
        *(int *)(gTheGame + *(int *)(gTheGame + iVar4 * 0x20 + 0x1639c) * 0x20 + 0x16388) = iVar6;
        iVar2 = *(int *)(gTheGame + *(int *)(gTheGame + iVar2 + 0x1639c) * 0x20 + 0x16394);
        iVar6 = iVar2 / 0x32 + (iVar2 >> 0x1f);
        iVar4 = iVar2 * 0x28;
        *(undefined4 *)(gTheGame + iVar4 + 0x193c0) = 0x0;
        *(undefined2 *)(gTheGame + iVar4 + 0x193bc) = 0x400;
        *(undefined2 *)(gTheGame + iVar4 + 0x193be) = 0x400;
        iVar2 += (iVar6 - (iVar6 >> 0x1f)) * -0x32;
        if ((iVar2 == 0x10) || (iVar2 == 0x11)) {
            sVar1 = *(short *)(gTheGame + iVar4 + 0x193a2);
            if ((sVar1 != 0x84) && (0x1 < (ushort)(sVar1 - 0x80U))) goto LAB_00038594;
            *(short *)(gTheGame + iVar4 + 0x193a2) = 0x84;
        }
        else {
LAB_00038594:
            *(undefined2 *)(gTheGame + iVar4 + 0x193a2) = 0x104;
        }
        if (gSelection == 0xd2) {
            iVar6 = pon_GetWhomFromUnderAttackBlock(param_4);
            param_3 = (int *)(gTheGame +
                             (*(int *)(gTheGame + iVar6 * 0x57c0 + 0x57b8) * 0x28 >> 0x2) * 0xc +
                             0x18e00);
            pon_SetSpecialAttack(*(undefined4 *)(gTheGame + iVar6 * 0x57c0 + 0x4b04),param_4);
        }
        *(int *)(gTheGame + param_3[0x15] * 0x20 + 0x16384) =
             *(int *)(gTheGame + param_3[0x15] * 0x20 + 0x16380) + 0x1;
        goto LAB_00038624;
    }
    iVar3 = param_2[0xc];
    iVar6 = iVar3 * 0x20;
    *(undefined4 *)(gTheGame + iVar6 + 0x16388) = 0xffffff01;
    iVar2 = *(int *)(gTheGame + iVar6 + 0x16394);
    iVar4 = iVar2 / 0x32 + (iVar2 >> 0x1f);
    if ((iVar2 + (iVar4 - (iVar4 >> 0x1f)) * -0x32 == 0x10) ||
       (iVar2 + (iVar4 - (iVar4 >> 0x1f)) * -0x32 == 0x11)) {
        if ((*(short *)(gTheGame + iVar2 * 0x28 + 0x193a2) != 0x84) &&
           (0x1 < (ushort)(*(short *)(gTheGame + iVar2 * 0x28 + 0x193a2) - 0x80U)))
        goto LAB_00038200;
        *(undefined2 *)(gTheGame + iVar2 * 0x28 + 0x193a2) = 0x81;
    }
    else {
LAB_00038200:
        *(undefined2 *)(gTheGame + iVar2 * 0x28 + 0x193a2) = 0x101;
    }
    pon_guS2DInitBg(iVar2 * 0x28 + 0x2ba1e8);
    iVar2 = *(int *)(gTheGame + iVar6 + 0x1639c) * 0x20;
    *(undefined4 *)(gTheGame + iVar2 + 0x16388) = 0xffffff01;
    iVar2 = *(int *)(gTheGame + iVar2 + 0x1639c);
    *(undefined4 *)(gTheGame + iVar2 * 0x20 + 0x16388) = 0xffffff01;
    iVar2 = *(int *)(gTheGame + iVar2 * 0x20 + 0x1639c);
    *(undefined4 *)(gTheGame + iVar2 * 0x20 + 0x16388) = 0xffffff01;
    iVar2 = *(int *)(gTheGame + iVar2 * 0x20 + 0x1639c);
    *(undefined4 *)(gTheGame + iVar2 * 0x20 + 0x16388) = 0xffffff01;
    iVar2 = *(int *)(gTheGame + iVar2 * 0x20 + 0x1639c);
    *(undefined4 *)(gTheGame + iVar2 * 0x20 + 0x16388) = 0xffffff01;
    iVar2 = *(int *)(gTheGame + iVar2 * 0x20 + 0x1639c);
    *(undefined4 *)(gTheGame + iVar2 * 0x20 + 0x16388) = 0xffffff01;
    *(undefined4 *)(gTheGame + *(int *)(gTheGame + iVar2 * 0x20 + 0x1639c) * 0x20 + 0x16388) =
         0xffffff01;
    iVar2 = *(int *)(gTheGame + *(int *)(gTheGame + iVar6 + 0x1639c) * 0x20 + 0x16394);
    iVar6 = iVar2 / 0x32 + (iVar2 >> 0x1f);
    if ((iVar2 + (iVar6 - (iVar6 >> 0x1f)) * -0x32 == 0x10) ||
       (iVar2 + (iVar6 - (iVar6 >> 0x1f)) * -0x32 == 0x11)) {
        if ((*(short *)(gTheGame + iVar2 * 0x28 + 0x193a2) != 0x84) &&
           (0x1 < (ushort)(*(short *)(gTheGame + iVar2 * 0x28 + 0x193a2) - 0x80U)))
        goto LAB_0003832c;
        *(undefined2 *)(gTheGame + iVar2 * 0x28 + 0x193a2) = 0x81;
    }
    else {
LAB_0003832c:
        *(undefined2 *)(gTheGame + iVar2 * 0x28 + 0x193a2) = 0x101;
    }
    pon_guS2DInitBg(iVar2 * 0x28 + 0x2ba1e8);
LAB_00038624:
    param_2[0xe] = 0x0;
    param_2[0x13] = *(int *)(gTheGame + iVar3 * 0x20 + 0x16394);
    param_2[0x14] = 0x0;
    *(undefined4 *)(gTheGame + *param_2 * 0x20 + 0x16384) = 0xffffffff;
    *param_2 = param_2[0xc];
    param_2[0x1] = 0x4;
    *(int *)(gTheGame + *param_2 * 0x20 + 0x16384) =
         *(int *)(gTheGame + *param_2 * 0x20 + 0x16380) + 0x1;
    return;
}



void UpdateAnimation2b(int param_1,int *param_2,int param_3,int param_4)

{
    int iVar1;
    int iVar2;
    
    iVar1 = param_2[0x1];
    iVar2 = iVar1;
    if (*(int *)(param_1 + 0x4a88) == 0x0) {
        if ((param_3 < 0x4) && (param_4 < 0x1)) {
            iVar2 = 0x1;
        }
        else if (iVar1 != 0x3) {
            iVar2 = 0x3;
        }
    }
    else if (iVar1 != 0x2) {
        iVar2 = 0x2;
    }
    if (iVar2 == 0x1) {
        param_2[0x1] = 0x1;
        return;
    }
    if (iVar1 == iVar2) {
        return;
    }
    *(undefined4 *)(gTheGame + *param_2 * 0x20 + 0x16384) = 0xffffffff;
    *param_2 = param_2[iVar2 * 0x3];
    param_2[0x1] = iVar2;
    *(int *)(gTheGame + *param_2 * 0x20 + 0x16384) =
         *(int *)(gTheGame + *param_2 * 0x20 + 0x16380) + 0x1;
    return;
}



void Update2DAnimation(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
    short *psVar1;
    undefined2 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined4 uVar6;
    int iVar7;
    int *piVar8;
    int *piVar9;
    undefined4 *puVar10;
    uint uVar11;
    int *piVar12;
    int iVar13;
    int iVar14;
    int *piVar15;
    undefined4 local_34;
    undefined2 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    
    iVar14 = 0x0;
    local_2c = 0xfffefeff;
    local_28 = 0x1020201;
    local_34 = 0xf6f8fc04;
    local_30 = 0x80a;
    if (gTheGame._120328_4_ == 0x1) {
        if (false) {
            return;
        }
        switch(gWorld) {
        case 0x0:
            UpdateFlower1(param_1,param_3,param_4);
            return;
        default:
            return;
        case 0x3:
            UpdateWater1(param_1,param_3,param_4);
            return;
        case 0x4:
            UpdateFire1(param_1,param_3,param_4);
            return;
        case 0x5:
            UpdateCloud1(param_1,param_3,param_4);
            return;
        case 0x6:
            UpdateGreen1(param_1,param_3,param_4);
            return;
        case 0x8:
            UpdateMoon1(param_1,param_3,param_4);
            return;
        case 0xd:
            UpdateDevil1(param_1,param_3,param_4);
            return;
        }
    }
    if (gTheGame._120328_4_ == 0x2) {
        if (param_2 == 0x0) {
            piVar15 = (int *)(gTheGame + 0x18e00);
            uVar6 = 0x2b9cc0;
        }
        else {
            piVar15 = (int *)(gTheGame + 0x18e78);
            uVar6 = 0x2b9c48;
        }
        piVar15[0x2] = *piVar15;
        if (*(int *)(gTheGame + *piVar15 * 0x20 + 0x16384) == 0x1) {
            *(int *)(gTheGame + *piVar15 * 0x20 + 0x16384) = -0x1;
            *piVar15 = *(int *)(gTheGame + *piVar15 * 0x20 + 0x1639c);
            *(int *)(gTheGame + *piVar15 * 0x20 + 0x16384) =
                 *(int *)(gTheGame + *piVar15 * 0x20 + 0x16380) + 0x1;
        }
        if (piVar15[0x1] < 0x5) {
            if (gSelection == 0xb4) {
LAB_00038a2c:
                UpdateAnimation2b(param_1,piVar15,param_3,param_4);
            }
            else if (gSelection < 0xb4) {
                if ((gSelection == 0xa0) || ((gSelection < 0xa0 && (gSelection == 0x96)))) {
                    UpdateAnimation2a(param_1,piVar15,uVar6,param_2);
                }
            }
            else if (gSelection == 0xc8) goto LAB_00038a2c;
        }
        else if (piVar15[0x1] == 0x5) {
            piVar8 = piVar15 + 0x11;
            piVar12 = piVar15 + 0xb;
            if (piVar15[0x11] != 0x0) {
                iVar4 = piVar15[0xa];
                piVar9 = piVar15 + 0xa;
                piVar15[0xa] = iVar4 + -0x1;
                if (iVar4 + -0x1 < 0x1) {
                    *piVar9 = 0x2;
                    *piVar8 = *piVar8 + (int)*(char *)((int)&local_34 + *piVar12);
                    *piVar12 = *piVar12 + 0x1;
                    if (*piVar8 == piVar15[0x5]) {
                        *piVar8 = piVar15[0x5];
                        *piVar9 = 0x14;
                        *piVar12 = 0x0;
                    }
                    else if (*piVar8 == piVar15[0x4]) {
                        *piVar8 = piVar15[0x4];
                        *piVar9 = 0xc;
                    }
                }
                *(short *)(gTheGame +
                          *(int *)(gTheGame + *piVar15 * 0x20 + 0x16394) * 0x28 + 0x193ac) =
                     (short)(*piVar8 << 0x2);
            }
        }
        iVar4 = piVar15[0x17];
        if (param_2 == 0x0) {
            mini_shadow._0_2_ = (short)(iVar4 << 0x2);
            iVar14 = *(int *)(gTheGame + *piVar15 * 0x20 + 0x16398);
        }
        else if (param_2 == 0x1) {
            mini_shadow._24_2_ = (short)(iVar4 << 0x2);
            iVar14 = *(int *)(gTheGame + *piVar15 * 0x20 + 0x16398) + -0x14;
        }
        if (piVar15[0x1] == 0x4) {
            piVar15[0x14] = piVar15[0x14] + 0x1;
            iVar5 = piVar15[0x14];
            iVar3 = piVar15[0x13];
            iVar7 = piVar15[0x16];
            if (iVar5 == 0x3) {
                if (param_2 == 0x0) {
                    mini_shadow._0_2_ = (short)(iVar4 + -0xc) * 0x4;
                    *(short *)(gTheGame + iVar3 * 0x28 + 0x193cc) = (short)(iVar7 + -0xc) * 0x4;
                }
                else if (param_2 == 0x1) {
                    mini_shadow._24_2_ = (short)(iVar4 + 0xc) * 0x4;
                    *(short *)(gTheGame + iVar3 * 0x28 + 0x193cc) = (short)(iVar7 + 0xc) * 0x4;
                }
            }
            else if (iVar5 < 0x3) {
                if (iVar5 == 0x1) {
                    if (param_2 == 0x0) {
                        mini_shadow._0_2_ = (short)(iVar4 + -0x8) * 0x4;
                        *(short *)(gTheGame + iVar3 * 0x28 + 0x193a4) = (short)(iVar7 + -0x8) * 0x4;
                    }
                    else if (param_2 == 0x1) {
                        mini_shadow._24_2_ = (short)(iVar4 + 0x8) * 0x4;
                        *(short *)(gTheGame + iVar3 * 0x28 + 0x193a4) = (short)(iVar7 + 0x8) * 0x4;
                    }
                }
                else {
                    if (iVar5 < 0x1) goto LAB_00038cf8;
                    if (param_2 == 0x0) {
                        mini_shadow._0_2_ = (short)(iVar4 + -0xc) * 0x4;
                        *(short *)(gTheGame + iVar3 * 0x28 + 0x193a4) = (short)(iVar7 + -0xc) * 0x4;
                    }
                    else if (param_2 == 0x1) {
                        mini_shadow._24_2_ = (short)(iVar4 + 0xc) * 0x4;
                        *(short *)(gTheGame + iVar3 * 0x28 + 0x193a4) = (short)(iVar7 + 0xc) * 0x4;
                    }
                }
            }
            else if (iVar5 < 0x5) {
                if (param_2 == 0x0) {
                    mini_shadow._0_2_ = (short)(iVar4 + -0x8) * 0x4;
                    *(short *)(gTheGame + iVar3 * 0x28 + 0x193cc) = (short)(iVar7 + -0x8) * 0x4;
                }
                else if (param_2 == 0x1) {
                    mini_shadow._24_2_ = (short)(iVar4 + 0x8) * 0x4;
                    *(short *)(gTheGame + iVar3 * 0x28 + 0x193cc) = (short)(iVar7 + 0x8) * 0x4;
                }
            }
            else {
LAB_00038cf8:
                uVar2 = (undefined2)(iVar7 << 0x2);
                *(undefined2 *)(gTheGame + iVar3 * 0x28 + 0x193a4) = uVar2;
                *(undefined2 *)(gTheGame + iVar3 * 0x28 + 0x193cc) = uVar2;
            }
        }
        else if (piVar15[0x1] == 0x1) {
            piVar8 = piVar15 + 0x8;
            piVar12 = piVar15 + 0xb;
            if (piVar15[0x8] != 0x0) {
                iVar4 = piVar15[0xa];
                piVar9 = piVar15 + 0xa;
                piVar15[0xa] = iVar4 + -0x1;
                if (iVar4 + -0x1 < 0x1) {
                    *piVar9 = 0x7;
                    uVar11 = (uint)*(char *)((int)&local_2c + *piVar12);
                    if (uVar11 == (((int)uVar11 >> 0x1) +
                                  (uint)((int)uVar11 < 0x0 && (uVar11 & 0x1) != 0x0)) * 0x2) {
                        if ((int)uVar11 < 0x1) {
                            piVar15[0x7] = piVar15[0x7] + 0x1;
                        }
                        else {
                            piVar15[0x7] = piVar15[0x7] + -0x1;
                        }
                    }
                    *piVar8 = *piVar8 + uVar11;
                    *piVar12 = *piVar12 + 0x1;
                    if (*piVar8 == piVar15[0x5]) {
                        *piVar8 = piVar15[0x5];
                        *piVar9 = 0xe;
                        *piVar12 = 0x0;
                    }
                    else if (*piVar8 == piVar15[0x4]) {
                        *piVar8 = piVar15[0x4];
                        *piVar9 = 0xe;
                    }
                }
                *(short *)(gTheGame +
                          *(int *)(gTheGame + *piVar15 * 0x20 + 0x16394) * 0x28 + 0x193ac) =
                     (short)(*piVar8 << 0x2);
                if (iVar14 == 0x0) {
                    iVar14 = piVar15[0x7];
                    if (iVar14 < 0x2) {
                        iVar14 = 0x2;
                    }
                    else if (0x7 < iVar14) {
                        iVar14 = 0x7;
                    }
                }
            }
        }
        if (false) {
switchD_00038e78_caseD_0:
            *(undefined2 *)(mini_shadow + param_2 * 0x18 + 0x12) = 0xc4;
        }
        else {
            switch(iVar14) {
            default:
                goto switchD_00038e78_caseD_0;
            case 0x1:
                *(undefined2 *)(mini_shadow + param_2 * 0x18 + 0x12) = 0x0;
                break;
            case 0x2:
                *(undefined2 *)(mini_shadow + param_2 * 0x18 + 0x12) = 0x40;
                break;
            case 0x3:
                *(undefined2 *)(mini_shadow + param_2 * 0x18 + 0x12) = 0x80;
                break;
            case 0x4:
                *(undefined2 *)(mini_shadow + param_2 * 0x18 + 0x12) = 0xc0;
                break;
            case 0x5:
                *(undefined2 *)(mini_shadow + param_2 * 0x18 + 0x12) = 0x4;
                break;
            case 0x6:
                *(undefined2 *)(mini_shadow + param_2 * 0x18 + 0x12) = 0x44;
                break;
            case 0x7:
                *(undefined2 *)(mini_shadow + param_2 * 0x18 + 0x12) = 0x84;
            }
        }
        if (param_2 != 0x0) {
            if (param_2 != 0x1) {
                return;
            }
            UpdateStarAnimation();
            UpdateFlic(FlicLayer._24_4_);
            return;
        }
        if (false) {
            return;
        }
        switch(gWorld) {
        case 0x0:
            UpdateFlower2(param_1,param_3,param_4);
            return;
        case 0x1:
            UpdateIce2(param_1,param_3,param_4);
            return;
        default:
            return;
        case 0x3:
            UpdateWater2(param_1,param_3,param_4);
            return;
        case 0x8:
            UpdateMoon2(param_1,param_3,param_4);
            return;
        case 0x9:
        case 0xa:
            UpdateLion2(param_1,param_3,param_4);
            return;
        case 0xd:
            UpdateDevil2(param_1,param_3,param_4);
            return;
        case 0xe:
            UpdateGoddess2(param_1,param_3,param_4);
            return;
        }
    }
    iVar4 = *(int *)(param_1 + 0x57b8);
    iVar14 = (iVar4 * 0x28 >> 0x2) * 0xc;
    piVar15 = (int *)(gTheGame + iVar14 + 0x18e00);
    *(int *)(gTheGame + iVar14 + 0x18e08) = *piVar15;
    if (*(int *)(gTheGame + *piVar15 * 0x20 + 0x16384) == 0x1) {
        *(int *)(gTheGame + *piVar15 * 0x20 + 0x16384) = -0x1;
        *piVar15 = *(int *)(gTheGame + *piVar15 * 0x20 + 0x1639c);
        *(int *)(gTheGame + *piVar15 * 0x20 + 0x16384) =
             *(int *)(gTheGame + *piVar15 * 0x20 + 0x16380) + 0x1;
    }
    if (*(int *)(gTheGame + iVar14 + 0x18e04) < 0x5) {
        if (gSelection == 0xdc) {
LAB_00039198:
            UpdateAnimation2b(param_1,piVar15,param_3,param_4);
        }
        else if (gSelection < 0xdc) {
            if (gSelection == 0xd2) {
                UpdateAnimation2a(param_1,piVar15,piVar15,param_2);
            }
        }
        else if (gSelection == 0xe6) goto LAB_00039198;
    }
    else if (*(int *)(gTheGame + iVar14 + 0x18e04) == 0x5) {
        piVar8 = (int *)(gTheGame + iVar14 + 0x18e44);
        piVar12 = (int *)(gTheGame + iVar14 + 0x18e2c);
        if (*(int *)(gTheGame + iVar14 + 0x18e44) != 0x0) {
            iVar3 = *(int *)(gTheGame + iVar14 + 0x18e28);
            puVar10 = (undefined4 *)(gTheGame + iVar14 + 0x18e28);
            *(int *)(gTheGame + iVar14 + 0x18e28) = iVar3 + -0x1;
            if (iVar3 + -0x1 < 0x1) {
                *puVar10 = 0x2;
                *piVar8 = *piVar8 + (int)*(char *)((int)&local_34 + *piVar12);
                *piVar12 = *piVar12 + 0x1;
                if (*piVar8 == *(int *)(gTheGame + iVar14 + 0x18e14)) {
                    *piVar8 = *(int *)(gTheGame + iVar14 + 0x18e14);
                    *puVar10 = 0x14;
                    *piVar12 = 0x0;
                }
                else if (*piVar8 == *(int *)(gTheGame + iVar14 + 0x18e10)) {
                    *piVar8 = *(int *)(gTheGame + iVar14 + 0x18e10);
                    *puVar10 = 0xc;
                }
            }
            *(short *)(gTheGame + *(int *)(gTheGame + *piVar15 * 0x20 + 0x16394) * 0x28 + 0x193ac) =
                 (short)(*piVar8 << 0x2);
        }
    }
    iVar5 = *(int *)(gTheGame + iVar14 + 0x18e5c);
    iVar3 = param_2 * 0x18;
    iVar7 = *(int *)(gTheGame + *piVar15 * 0x20 + 0x16398);
    psVar1 = (short *)(mini_shadow + iVar3);
    *psVar1 = (short)(iVar5 << 0x2);
    iVar7 -= iVar4 * 0x50 >> 0x2;
    if (*(int *)(gTheGame + iVar14 + 0x18e04) == 0x4) {
        *(int *)(gTheGame + iVar14 + 0x18e50) = *(int *)(gTheGame + iVar14 + 0x18e50) + 0x1;
        iVar4 = *(int *)(gTheGame + iVar14 + 0x18e50);
        iVar13 = *(int *)(gTheGame + iVar14 + 0x18e4c);
        iVar14 = *(int *)(gTheGame + iVar14 + 0x18e58);
        if (iVar4 == 0x3) {
            if (param_2 == 0x0) {
                *(short *)(gTheGame + iVar13 * 0x28 + 0x193cc) = (short)(iVar14 + -0xc) * 0x4;
                *psVar1 = (short)(iVar5 + -0xc) * 0x4;
            }
            else if (param_2 == 0x1) {
                *(short *)(gTheGame + iVar13 * 0x28 + 0x193cc) = (short)(iVar14 + 0xc) * 0x4;
                *psVar1 = (short)(iVar5 + 0xc) * 0x4;
            }
            else if (param_2 == 0x2) {
                *(short *)(gTheGame + iVar13 * 0x28 + 0x193cc) = (short)(iVar14 + 0xc) * 0x4;
                *psVar1 = (short)(iVar5 + 0xc) * 0x4;
            }
            else if (param_2 == 0x3) {
                *(short *)(gTheGame + iVar13 * 0x28 + 0x193cc) = (short)(iVar14 + 0xc) * 0x4;
                *psVar1 = (short)(iVar5 + 0xc) * 0x4;
            }
        }
        else if (iVar4 < 0x3) {
            if (iVar4 == 0x1) {
                if (param_2 == 0x0) {
                    *(short *)(gTheGame + iVar13 * 0x28 + 0x193a4) = (short)(iVar14 + -0x8) * 0x4;
                    *psVar1 = (short)(iVar5 + -0x8) * 0x4;
                }
                else if (param_2 == 0x1) {
                    *(short *)(gTheGame + iVar13 * 0x28 + 0x193a4) = (short)(iVar14 + 0x8) * 0x4;
                    *psVar1 = (short)(iVar5 + 0x8) * 0x4;
                }
                else if (param_2 == 0x2) {
                    *(short *)(gTheGame + iVar13 * 0x28 + 0x193a4) = (short)(iVar14 + 0x8) * 0x4;
                    *psVar1 = (short)(iVar5 + 0x8) * 0x4;
                }
                else if (param_2 == 0x3) {
                    *(short *)(gTheGame + iVar13 * 0x28 + 0x193a4) = (short)(iVar14 + 0x8) * 0x4;
                    *psVar1 = (short)(iVar5 + 0x8) * 0x4;
                }
            }
            else {
                if (iVar4 < 0x1) goto LAB_000395c0;
                if (param_2 == 0x0) {
                    *(short *)(gTheGame + iVar13 * 0x28 + 0x193a4) = (short)(iVar14 + -0xc) * 0x4;
                    *psVar1 = (short)(iVar5 + -0xc) * 0x4;
                }
                else if (param_2 == 0x1) {
                    *(short *)(gTheGame + iVar13 * 0x28 + 0x193a4) = (short)(iVar14 + 0xc) * 0x4;
                    *psVar1 = (short)(iVar5 + 0xc) * 0x4;
                }
                else if (param_2 == 0x2) {
                    *(short *)(gTheGame + iVar13 * 0x28 + 0x193a4) = (short)(iVar14 + 0xc) * 0x4;
                    *psVar1 = (short)(iVar5 + 0xc) * 0x4;
                }
                else if (param_2 == 0x3) {
                    *(short *)(gTheGame + iVar13 * 0x28 + 0x193a4) = (short)(iVar14 + 0xc) * 0x4;
                    *psVar1 = (short)(iVar5 + 0xc) * 0x4;
                }
            }
        }
        else if (iVar4 < 0x5) {
            if (param_2 == 0x0) {
                *(short *)(gTheGame + iVar13 * 0x28 + 0x193cc) = (short)(iVar14 + -0x8) * 0x4;
                *psVar1 = (short)(iVar5 + -0x8) * 0x4;
            }
            else if (param_2 == 0x1) {
                *(short *)(gTheGame + iVar13 * 0x28 + 0x193cc) = (short)(iVar14 + 0x8) * 0x4;
                *psVar1 = (short)(iVar5 + 0x8) * 0x4;
            }
            else if (param_2 == 0x2) {
                *(short *)(gTheGame + iVar13 * 0x28 + 0x193cc) = (short)(iVar14 + 0x8) * 0x4;
                *psVar1 = (short)(iVar5 + 0x8) * 0x4;
            }
            else if (param_2 == 0x3) {
                *(short *)(gTheGame + iVar13 * 0x28 + 0x193cc) = (short)(iVar14 + 0x8) * 0x4;
                *psVar1 = (short)(iVar5 + 0x8) * 0x4;
            }
        }
        else {
LAB_000395c0:
            uVar2 = (undefined2)(iVar14 << 0x2);
            *(undefined2 *)(gTheGame + iVar13 * 0x28 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar13 * 0x28 + 0x193cc) = uVar2;
        }
    }
    else if (*(int *)(gTheGame + iVar14 + 0x18e04) == 0x1) {
        piVar8 = (int *)(gTheGame + iVar14 + 0x18e20);
        piVar12 = (int *)(gTheGame + iVar14 + 0x18e2c);
        if (*(int *)(gTheGame + iVar14 + 0x18e20) != 0x0) {
            iVar4 = *(int *)(gTheGame + iVar14 + 0x18e28);
            puVar10 = (undefined4 *)(gTheGame + iVar14 + 0x18e28);
            *(int *)(gTheGame + iVar14 + 0x18e28) = iVar4 + -0x1;
            if (iVar4 + -0x1 < 0x1) {
                *puVar10 = 0x7;
                uVar11 = (uint)*(char *)((int)&local_2c + *piVar12);
                if (uVar11 == (((int)uVar11 >> 0x1) +
                              (uint)((int)uVar11 < 0x0 && (uVar11 & 0x1) != 0x0)) * 0x2) {
                    if ((int)uVar11 < 0x1) {
                        *(int *)(gTheGame + iVar14 + 0x18e1c) =
                             *(int *)(gTheGame + iVar14 + 0x18e1c) + 0x1;
                    }
                    else {
                        *(int *)(gTheGame + iVar14 + 0x18e1c) =
                             *(int *)(gTheGame + iVar14 + 0x18e1c) + -0x1;
                    }
                }
                *piVar8 = *piVar8 + uVar11;
                *piVar12 = *piVar12 + 0x1;
                if (*piVar8 == *(int *)(gTheGame + iVar14 + 0x18e14)) {
                    *piVar8 = *(int *)(gTheGame + iVar14 + 0x18e14);
                    *puVar10 = 0xe;
                    *piVar12 = 0x0;
                }
                else if (*piVar8 == *(int *)(gTheGame + iVar14 + 0x18e10)) {
                    *piVar8 = *(int *)(gTheGame + iVar14 + 0x18e10);
                    *puVar10 = 0xe;
                }
            }
            *(short *)(gTheGame + *(int *)(gTheGame + *piVar15 * 0x20 + 0x16394) * 0x28 + 0x193ac) =
                 (short)(*piVar8 << 0x2);
            if (iVar7 == 0x0) {
                iVar7 = *(int *)(gTheGame + iVar14 + 0x18e1c);
                if (iVar7 < 0x2) {
                    iVar7 = 0x2;
                }
                else if (0x7 < iVar7) {
                    iVar7 = 0x7;
                }
            }
        }
    }
    if (false) {
switchD_0003973c_caseD_0:
        *(undefined2 *)(mini_shadow + iVar3 + 0x12) = 0xc4;
    }
    else {
        switch(iVar7) {
        default:
            goto switchD_0003973c_caseD_0;
        case 0x1:
            *(undefined2 *)(mini_shadow + iVar3 + 0x12) = 0x0;
            break;
        case 0x2:
            *(undefined2 *)(mini_shadow + iVar3 + 0x12) = 0x40;
            break;
        case 0x3:
            *(undefined2 *)(mini_shadow + iVar3 + 0x12) = 0x80;
            break;
        case 0x4:
            *(undefined2 *)(mini_shadow + iVar3 + 0x12) = 0xc0;
            break;
        case 0x5:
            *(undefined2 *)(mini_shadow + iVar3 + 0x12) = 0x4;
            break;
        case 0x6:
            *(undefined2 *)(mini_shadow + iVar3 + 0x12) = 0x44;
            break;
        case 0x7:
            *(undefined2 *)(mini_shadow + iVar3 + 0x12) = 0x84;
        }
    }
    if (param_2 == 0x0) {
        if (true) {
            switch(gWorld) {
            case 0x0:
                UpdateFlower2(param_1,param_3,param_4);
                break;
            case 0x1:
                UpdateIce2(param_1,param_3,param_4);
                break;
            case 0x3:
                UpdateWater2(param_1,param_3,param_4);
                break;
            case 0x8:
                UpdateMoon2(param_1,param_3,param_4);
                break;
            case 0x9:
            case 0xa:
                UpdateLion2(param_1,param_3,param_4);
                break;
            case 0xd:
                UpdateDevil2(param_1,param_3,param_4);
                break;
            case 0xe:
                UpdateGoddess2(param_1,param_3,param_4);
            }
        }
    }
    else if (param_2 == 0x1) {
        UpdateFlic(FlicLayer._24_4_);
    }
    return;
}



void Update3DAnimation(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
    if (gTheGame._120328_4_ != 0x1) {
        return;
    }
    if (gWorld != 0xd) {
        return;
    }
    if (param_4 < 0x0) {
        param_4 = -param_4;
        if (0xc < param_4) {
            param_4 = 0xc;
        }
        anim_sp = anim_sp - *(int *)(st_ChainScore + (param_4 + -0x1) * 0x4);
        return;
    }
    if (param_3 < 0x4) {
        return;
    }
    if (0x48 < param_3) {
        param_3 = 0x48;
    }
    anim_sp = anim_sp - *(int *)(st_ComboScore + (param_3 + -0x4) * 0x4);
    return;
}



void UpdateAnimation(int param_1,int param_2,int param_3)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    
    iVar3 = 0x0;
    if (param_3 != 0x0) {
        UpdateComboChainCount(param_2,0xffffffff,param_3);
    }
    piVar2 = (int *)(chain_check + param_2 * 0x4);
    iVar1 = *piVar2;
    if (*(int *)(param_1 + 0x4a88) != iVar1) {
        if (*(int *)(param_1 + 0x4a88) == 0x0) {
            if (iVar1 == -0x1) {
                iVar3 = 0x3e7;
            }
            else if (iVar1 < -0x1) {
                iVar3 = 0x270f;
            }
            UpdateComboChainCount(param_2,0x0,-iVar1);
            iVar1 = *piVar2;
            if (iVar1 == -0x3) {
                PlaySE(SFX_INIT_TABLE,0xc9);
            }
            else if (iVar1 == -0x4) {
                PlaySE(SFX_INIT_TABLE,0xca);
            }
            else if (iVar1 < -0x4) {
                PlaySE(SFX_INIT_TABLE,0xcb);
            }
        }
        *piVar2 = *(int *)(param_1 + 0x4a88);
        if (*piVar2 < 0x0) {
            iVar3 = *piVar2;
        }
    }
    if (0x6e < gSelection) {
        if (gTheGame._120332_4_ == 0x1) {
            Update2DAnimation(param_1,param_2,param_3,iVar3);
        }
        else {
            Update3DAnimation(param_1,param_2,param_3,iVar3);
        }
    }
    return;
}



undefined4 pon_GetWhomFromUnderAttackBlock(int param_1)

{
    param_1 *= 0x57c0;
    if (0x9 < *(int *)(gTheGame + param_1 + 0x2524)) {
        return *(undefined4 *)(gTheGame + param_1 + 0x2568);
    }
    return *(undefined4 *)(gTheGame + param_1 + 0x256c);
}
