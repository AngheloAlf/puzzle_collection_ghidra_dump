
void pon_InitLevel(int param_1,int param_2,int param_3,int param_4)

{
    undefined2 uVar1;
    undefined2 uVar2;
    int iVar3;
    int iVar4;
    short sVar5;
    int iVar6;
    int iVar7;
    undefined1 *puVar8;
    int iVar9;
    int iVar10;
    short sVar11;
    undefined2 uVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    
    if (gTheGame._120328_4_ == 0x2) {
        iVar3 = param_1 * 0x4;
        iVar14 = *(int *)(Init_position_normal_posY_2p + iVar3);
        iVar13 = *(int *)(Init_position_win_posY_2p + iVar3);
        iVar3 = param_2 * 0x2 + iVar3;
        uVar12 = *(undefined2 *)(Init_position_normal_posY_2p + iVar3 + 0x88);
        sVar5 = *(short *)(Init_position_normal_posY_2p + iVar3 + 0xcc);
        sVar11 = *(short *)(Init_position_normal_posY_2p + iVar3 + 0x110);
    }
    else {
        iVar13 = param_2 * 0x2 + param_1 * 0x8;
        sVar5 = *(short *)(Init_position_normal_posY_2p + iVar13 + 0x1dc);
        iVar14 = *(int *)(Init_position_normal_posY_4p + param_1 * 0x4) + -0x14;
        sVar11 = *(short *)(Init_position_normal_posY_2p + iVar13 + 0x264);
        iVar13 = *(int *)(Init_position_win_posY_4p + param_1 * 0x4) + -0x14;
        uVar12 = 0x0;
    }
    Pon_DVDRead_lev_2(param_1,param_2);
    iVar3 = param_1 * 0x14;
    pon_InitTrack(**(undefined4 **)(gaSegmentCharacter + param_1 * 0x4),param_3,
                  *(undefined4 *)(InittrackData + iVar3),
                  *(undefined4 *)(InittrackData + iVar3 + 0x4),
                  *(undefined4 *)(InittrackData + iVar3 + 0x8),
                  *(undefined4 *)(InittrackData + iVar3 + 0xc),
                  *(undefined4 *)(InittrackData + iVar3 + 0x10));
    iVar3 = param_3 * 0x154 >> 0x2;
    iVar10 = param_3 * 0x28 >> 0x2;
    iVar4 = param_3 * 0xc8 >> 0x2;
    iVar6 = param_3 * 0xa0 >> 0x2;
    iVar9 = (param_3 + 0x1) * 0x154 >> 0x2;
    iVar7 = iVar9 - iVar3;
    puVar8 = gTheGame + iVar3 * 0x20;
    if (iVar3 < iVar9) {
        do {
            *(int *)(puVar8 + 0x16390) = *(int *)(puVar8 + 0x16390) + iVar10;
            if (*(int *)(puVar8 + 0x16388) < 0x0) {
                *(int *)(puVar8 + 0x16394) = *(int *)(puVar8 + 0x16394) + iVar4;
            }
            else {
                *(int *)(puVar8 + 0x16394) = *(int *)(puVar8 + 0x16394) + iVar6;
            }
            *(int *)(puVar8 + 0x16398) = *(int *)(puVar8 + 0x16398) + (param_3 * 0x50 >> 0x2);
            if (*(int *)(puVar8 + 0x1639c) != -0x1) {
                *(int *)(puVar8 + 0x1639c) = *(int *)(puVar8 + 0x1639c) + iVar3;
            }
            puVar8 = puVar8 + 0x20;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
    }
    iVar7 = param_1 * 0xc;
    *(char *)((int)&alphaR + param_2) = (char)*(undefined4 *)(InitalphaRGBData + iVar7);
    *(char *)((int)&alphaG + param_2) = (char)*(undefined4 *)(InitalphaRGBData + iVar7 + 0x4);
    iVar9 = param_1 * 0x1c;
    *(char *)((int)&alphaB + param_2) = (char)*(undefined4 *)(InitalphaRGBData + iVar7 + 0x8);
    iVar10 *= 0xc;
    *(int *)(gTheGame + iVar10 + 0x18e0c) = iVar3 + *(int *)(Initcurrent_flicData + iVar9);
    *(int *)(gTheGame + iVar10 + 0x18e18) = iVar3 + *(int *)(Initcurrent_flicData + iVar9 + 0x4);
    *(int *)(gTheGame + iVar10 + 0x18e24) = iVar3 + *(int *)(Initcurrent_flicData + iVar9 + 0x8);
    *(int *)(gTheGame + iVar10 + 0x18e30) = iVar3 + *(int *)(Initcurrent_flicData + iVar9 + 0xc);
    *(int *)(gTheGame + iVar10 + 0x18e3c) = iVar3 + *(int *)(Initcurrent_flicData + iVar9 + 0x10);
    *(int *)(gTheGame + iVar10 + 0x18e48) = iVar3 + *(int *)(Initcurrent_flicData + iVar9 + 0x14);
    *(int *)(gTheGame + iVar10 + 0x18e54) = iVar3 + *(int *)(Initcurrent_flicData + iVar9 + 0x18);
    switch(param_1) {
    case 0x0:
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0x14;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        uVar1 = (undefined2)((int)sVar5 << 0x2);
        iVar7 = 0x4;
        uVar2 = (undefined2)(iVar14 << 0x2);
        *(int *)(gTheGame + iVar10 + 0x18e44) = iVar13;
        iVar13 = iVar4 + 0x5;
        iVar14 = 0x0;
        do {
            iVar9 = (iVar13 + iVar14) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x90;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x90;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x90;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x90;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x90;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar14 += 0x5;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        iVar13 = (iVar4 + 0x19) * 0x28;
        uVar1 = (undefined2)((int)sVar11 << 0x2);
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1a) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1b) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1c) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1d) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1e) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1f) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x20) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        if (gWorld == 0x10) {
            iVar13 = gTheGame._101936_4_ * 0x20;
            *(undefined4 *)(gTheGame + iVar13 + 0x16380) = 0x6;
            *(undefined4 *)(gTheGame + iVar13 + 0x163a0) = 0x8;
            *(undefined4 *)(gTheGame + iVar13 + 0x163c0) = 0x5;
            *(undefined4 *)(gTheGame + iVar13 + 0x163e0) = 0x5;
            *(undefined4 *)(gTheGame + iVar13 + 0x16400) = 0x5;
            *(undefined4 *)(gTheGame + iVar13 + 0x16420) = 0x5;
            *(undefined4 *)(gTheGame + iVar13 + 0x16440) = 0x5;
            *(undefined4 *)(gTheGame + iVar13 + 0x16460) = 0x5;
        }
        break;
    case 0x1:
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0x17;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        uVar1 = (undefined2)((int)sVar5 << 0x2);
        iVar7 = 0x2;
        uVar2 = (undefined2)(iVar14 << 0x2);
        *(int *)(gTheGame + iVar10 + 0x18e44) = iVar13;
        iVar13 = iVar4 + 0x9;
        iVar14 = 0x0;
        do {
            iVar9 = (iVar13 + iVar14) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x80;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x80;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x80;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x80;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x80;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x5) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x80;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x6) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x80;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar14 += 0x7;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        iVar13 = (iVar4 + 0x17) * 0x28;
        uVar1 = (undefined2)((int)sVar11 << 0x2);
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x80;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x18) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x80;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x19) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x80;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1a) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x80;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        break;
    case 0x2:
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0x11;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        uVar1 = (undefined2)((int)sVar5 << 0x2);
        *(undefined4 *)(gTheGame + iVar10 + 0x18e10) = 0x2f;
        iVar9 = 0x2;
        *(int *)(gTheGame + iVar10 + 0x18e14) = iVar14;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e1c) = 0x2;
        iVar7 = 0x0;
        uVar2 = (undefined2)(iVar14 << 0x2);
        *(int *)(gTheGame + iVar10 + 0x18e20) = iVar14;
        iVar14 = iVar4 + 0x9;
        *(int *)(gTheGame + iVar10 + 0x18e44) = iVar13;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e28) = 0xe;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e2c) = 0x0;
        do {
            iVar13 = (iVar14 + iVar7) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x80;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x80;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x80;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x80;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x80;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x5) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x80;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x6) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x80;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar7 += 0x7;
            iVar9 += -0x1;
        } while (iVar9 != 0x0);
        uVar1 = (undefined2)((int)sVar11 << 0x2);
        iVar7 = 0x2;
        iVar13 = iVar4 + 0x17;
        iVar14 = 0x0;
        do {
            iVar9 = (iVar13 + iVar14) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x5) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x6) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x7) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar14 += 0x8;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        break;
    case 0x3:
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0xf;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        uVar1 = (undefined2)((int)sVar5 << 0x2);
        *(undefined4 *)(gTheGame + iVar10 + 0x18e10) = 0x2e;
        iVar9 = 0x2;
        *(int *)(gTheGame + iVar10 + 0x18e14) = iVar14;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e1c) = 0x3;
        iVar7 = 0x0;
        uVar2 = (undefined2)(iVar14 << 0x2);
        *(int *)(gTheGame + iVar10 + 0x18e20) = iVar14;
        iVar14 = iVar4 + 0x5;
        *(int *)(gTheGame + iVar10 + 0x18e44) = iVar13;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e28) = 0xe;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e2c) = 0x0;
        do {
            iVar13 = (iVar14 + iVar7) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x5) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x6) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar7 += 0x7;
            iVar9 += -0x1;
        } while (iVar9 != 0x0);
        iVar13 = (iVar4 + 0x13) * 0x28;
        uVar1 = (undefined2)((int)sVar11 << 0x2);
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x14) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x15) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x16) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x17) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x18) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x19) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1a) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        break;
    case 0x4:
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0xf;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        uVar1 = (undefined2)((int)sVar5 << 0x2);
        *(undefined4 *)(gTheGame + iVar10 + 0x18e10) = 0x2d;
        iVar9 = 0x2;
        *(int *)(gTheGame + iVar10 + 0x18e14) = iVar14;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e1c) = 0x2;
        iVar7 = 0x0;
        uVar2 = (undefined2)(iVar14 << 0x2);
        *(int *)(gTheGame + iVar10 + 0x18e20) = iVar14;
        iVar14 = iVar4 + 0xd;
        *(int *)(gTheGame + iVar10 + 0x18e44) = iVar13;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e28) = 0xe;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e2c) = 0x0;
        do {
            iVar13 = (iVar14 + iVar7) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x5) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x6) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar7 += 0x7;
            iVar9 += -0x1;
        } while (iVar9 != 0x0);
        iVar13 = (iVar4 + 0x1b) * 0x28;
        uVar1 = (undefined2)((int)sVar11 << 0x2);
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1c) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1d) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1e) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1f) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x20) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x21) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x22) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        break;
    case 0x5:
        mini_shadow._24_2_ = (short)(((int)mini_shadow._24_2_ >> 0x2) + 0x1) * 0x4;
        uVar1 = (undefined2)((int)sVar5 << 0x2);
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0x19;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        iVar15 = 0x2;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e10) = 0x2a;
        *(int *)(gTheGame + iVar10 + 0x18e14) = iVar14;
        iVar7 = 0x0;
        uVar2 = (undefined2)(iVar14 << 0x2);
        *(undefined4 *)(gTheGame + iVar10 + 0x18e1c) = 0x2;
        iVar9 = iVar4 + 0x15;
        *(int *)(gTheGame + iVar10 + 0x18e20) = iVar14;
        *(int *)(gTheGame + iVar10 + 0x18e44) = iVar13;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e28) = 0xe;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e2c) = 0x0;
        do {
            iVar13 = (iVar9 + iVar7) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0xa0;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar9 + iVar7 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0xa0;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar9 + iVar7 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0xa0;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar9 + iVar7 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0xa0;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar9 + iVar7 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0xa0;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar9 + iVar7 + 0x5) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0xa0;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar9 + iVar7 + 0x6) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0xa0;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar7 += 0x7;
            iVar15 += -0x1;
        } while (iVar15 != 0x0);
        iVar13 = (iVar4 + 0x23) * 0x28;
        uVar1 = (undefined2)((int)sVar11 << 0x2);
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x24) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x25) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x26) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x27) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x28) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x29) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x2a) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        break;
    case 0x6:
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0x14;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        uVar1 = (undefined2)((int)sVar5 << 0x2);
        *(undefined4 *)(gTheGame + iVar10 + 0x18e10) = 0x2f;
        iVar9 = 0x2;
        *(int *)(gTheGame + iVar10 + 0x18e14) = iVar14;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e1c) = 0x2;
        iVar7 = 0x0;
        uVar2 = (undefined2)(iVar14 << 0x2);
        *(int *)(gTheGame + iVar10 + 0x18e20) = iVar14;
        iVar14 = iVar4 + 0xd;
        *(int *)(gTheGame + iVar10 + 0x18e44) = iVar13;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e28) = 0xe;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e2c) = 0x0;
        do {
            iVar13 = (iVar14 + iVar7) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x84;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x84;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x84;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x84;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x84;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x5) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x84;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar14 + iVar7 + 0x6) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x84;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar7 += 0x7;
            iVar9 += -0x1;
        } while (iVar9 != 0x0);
        uVar1 = (undefined2)((int)sVar11 << 0x2);
        iVar7 = 0x2;
        iVar13 = iVar4 + 0x1b;
        iVar14 = 0x0;
        do {
            iVar9 = (iVar13 + iVar14) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x5) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar14 += 0x6;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        break;
    case 0x7:
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0x19;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        uVar1 = (undefined2)((int)sVar5 << 0x2);
        iVar7 = 0x2;
        uVar2 = (undefined2)(iVar14 << 0x2);
        *(int *)(gTheGame + iVar10 + 0x18e44) = iVar13;
        iVar13 = iVar4 + 0x19;
        iVar14 = 0x0;
        do {
            iVar9 = (iVar13 + iVar14) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x5) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x6) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar14 += 0x7;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        uVar1 = (undefined2)((int)sVar11 << 0x2);
        iVar7 = 0x2;
        iVar14 = iVar4 + 0x27;
        iVar13 = 0x0;
        do {
            iVar9 = (iVar14 + iVar13) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar14 + iVar13 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar14 + iVar13 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar14 + iVar13 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar14 + iVar13 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar13 += 0x5;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        break;
    case 0x8:
        mini_shadow._24_2_ = (short)(((int)mini_shadow._24_2_ >> 0x2) + 0x3) * 0x4;
        uVar1 = (undefined2)((int)sVar5 << 0x2);
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0x1d;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        iVar15 = 0x4;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e10) = 0x29;
        *(int *)(gTheGame + iVar10 + 0x18e14) = iVar14;
        iVar7 = 0x0;
        uVar2 = (undefined2)(iVar14 << 0x2);
        *(undefined4 *)(gTheGame + iVar10 + 0x18e1c) = 0x2;
        iVar9 = iVar4 + 0x9;
        *(int *)(gTheGame + iVar10 + 0x18e20) = iVar14;
        *(int *)(gTheGame + iVar10 + 0x18e44) = iVar13;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e28) = 0xe;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e2c) = 0x0;
        do {
            iVar13 = (iVar9 + iVar7) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0xa0;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar9 + iVar7 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0xa0;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar9 + iVar7 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0xa0;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar9 + iVar7 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0xa0;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar13 = (iVar9 + iVar7 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0xa0;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
            }
            iVar7 += 0x5;
            iVar15 += -0x1;
        } while (iVar15 != 0x0);
        iVar13 = (iVar4 + 0x1d) * 0x28;
        uVar1 = (undefined2)((int)sVar11 << 0x2);
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1e) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1f) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x20) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x21) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x22) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x23) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        break;
    case 0x9:
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0xa;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        iVar7 = 0xd;
        uVar1 = (undefined2)(iVar14 << 0x2);
        iVar13 = 0x0;
        do {
            iVar14 = (iVar4 + 0xe + iVar13) * 0x28;
            *(undefined2 *)(gTheGame + iVar14 + 0x193ba) = uVar12;
            *(short *)(gTheGame + iVar14 + 0x193a4) = (short)((int)sVar5 << 0x2);
            *(undefined2 *)(gTheGame + iVar14 + 0x193a6) = 0x80;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar14 + 0x193ac) = uVar1;
            }
            iVar13 += 0x1;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        iVar13 = (iVar4 + 0x1b) * 0x28;
        uVar2 = (undefined2)((int)sVar11 << 0x2);
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x1c) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x1d) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x1e) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x1f) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x20) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x21) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x22) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        break;
    case 0xa:
        iVar7 = 0xd;
        mini_shadow._24_2_ = (short)(((int)mini_shadow._24_2_ >> 0x2) + 0x3) * 0x4;
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0xa;
        uVar1 = (undefined2)(iVar14 << 0x2);
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        iVar13 = 0x0;
        do {
            iVar14 = (iVar4 + 0xe + iVar13) * 0x28;
            *(undefined2 *)(gTheGame + iVar14 + 0x193ba) = uVar12;
            *(short *)(gTheGame + iVar14 + 0x193a4) = (short)((int)sVar5 << 0x2);
            *(undefined2 *)(gTheGame + iVar14 + 0x193a6) = 0xc8;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar14 + 0x193ac) = uVar1;
            }
            iVar13 += 0x1;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        iVar13 = (iVar4 + 0x1b) * 0x28;
        uVar2 = (undefined2)((int)sVar11 << 0x2);
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x1c) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x1d) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x1e) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x1f) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x20) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x21) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        break;
    case 0xb:
        iVar7 = 0xd;
        mini_shadow._24_2_ = (short)(((int)mini_shadow._24_2_ >> 0x2) + 0x3) * 0x4;
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0x1e;
        uVar1 = (undefined2)(iVar14 << 0x2);
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        iVar13 = 0x0;
        do {
            iVar14 = (iVar4 + 0x13 + iVar13) * 0x28;
            *(undefined2 *)(gTheGame + iVar14 + 0x193ba) = uVar12;
            *(short *)(gTheGame + iVar14 + 0x193a4) = (short)((int)sVar5 << 0x2);
            *(undefined2 *)(gTheGame + iVar14 + 0x193a6) = 0xd4;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar14 + 0x193ac) = uVar1;
            }
            iVar13 += 0x1;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        iVar13 = (iVar4 + 0x20) * 0x28;
        uVar2 = (undefined2)((int)sVar11 << 0x2);
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x21) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x22) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x23) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x24) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x25) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x26) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        break;
    case 0xc:
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0x2d;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        iVar7 = 0xd;
        uVar1 = (undefined2)(iVar14 << 0x2);
        iVar13 = 0x0;
        do {
            iVar14 = (iVar4 + 0x15 + iVar13) * 0x28;
            *(undefined2 *)(gTheGame + iVar14 + 0x193ba) = uVar12;
            *(short *)(gTheGame + iVar14 + 0x193a4) = (short)((int)sVar5 << 0x2);
            *(undefined2 *)(gTheGame + iVar14 + 0x193a6) = 0xfc;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar14 + 0x193ac) = uVar1;
            }
            iVar13 += 0x1;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        uVar2 = (undefined2)((int)sVar11 << 0x2);
        iVar7 = 0x2;
        iVar14 = iVar4 + 0x22;
        iVar13 = 0x0;
        do {
            iVar9 = (iVar14 + iVar13) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar14 + iVar13 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar14 + iVar13 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar14 + iVar13 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar14 + iVar13 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar14 + iVar13 + 0x5) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar14 + iVar13 + 0x6) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar13 += 0x7;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        break;
    case 0xd:
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0xb;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        iVar7 = 0xd;
        uVar1 = (undefined2)(iVar14 << 0x2);
        iVar13 = 0x0;
        do {
            iVar14 = (iVar4 + 0x9 + iVar13) * 0x28;
            *(undefined2 *)(gTheGame + iVar14 + 0x193ba) = uVar12;
            *(short *)(gTheGame + iVar14 + 0x193a4) = (short)((int)sVar5 << 0x2);
            *(undefined2 *)(gTheGame + iVar14 + 0x193a6) = 0xf4;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar14 + 0x193ac) = uVar1;
            }
            iVar13 += 0x1;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        uVar2 = (undefined2)((int)sVar11 << 0x2);
        iVar7 = 0x2;
        iVar14 = iVar4 + 0x16;
        iVar13 = 0x0;
        do {
            iVar9 = (iVar14 + iVar13) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar14 + iVar13 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar14 + iVar13 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar14 + iVar13 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar14 + iVar13 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar13 += 0x5;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        break;
    case 0xe:
        mini_shadow._24_2_ = (short)(((int)mini_shadow._24_2_ >> 0x2) + 0x2) * 0x4;
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0x9;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        iVar9 = 0xd;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e10) = 0x25;
        *(int *)(gTheGame + iVar10 + 0x18e14) = iVar14;
        iVar7 = 0x0;
        uVar1 = (undefined2)(iVar14 << 0x2);
        *(undefined4 *)(gTheGame + iVar10 + 0x18e1c) = 0x2;
        *(int *)(gTheGame + iVar10 + 0x18e20) = iVar14;
        *(int *)(gTheGame + iVar10 + 0x18e44) = iVar13;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e28) = 0xe;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e2c) = 0x0;
        do {
            iVar13 = (iVar4 + 0xd + iVar7) * 0x28;
            *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
            *(short *)(gTheGame + iVar13 + 0x193a4) = (short)((int)sVar5 << 0x2);
            *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0xbc;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
            }
            iVar7 += 0x1;
            iVar9 += -0x1;
        } while (iVar9 != 0x0);
        uVar2 = (undefined2)((int)sVar11 << 0x2);
        iVar7 = 0x2;
        iVar13 = iVar4 + 0x1a;
        iVar14 = 0x0;
        do {
            iVar9 = (iVar13 + iVar14) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar13 + iVar14 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar13 + iVar14 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar13 + iVar14 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar13 + iVar14 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar13 + iVar14 + 0x5) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar9 = (iVar13 + iVar14 + 0x6) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar2;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x100;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar1;
            }
            iVar14 += 0x7;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        break;
    case 0xf:
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0x1;
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        uVar1 = (undefined2)((int)sVar5 << 0x2);
        iVar7 = 0x4;
        uVar2 = (undefined2)(iVar14 << 0x2);
        *(int *)(gTheGame + iVar10 + 0x18e44) = iVar13;
        iVar13 = iVar4 + 0x1;
        iVar14 = 0x0;
        do {
            iVar9 = (iVar13 + iVar14) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x1) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x2) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x3) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar9 = (iVar13 + iVar14 + 0x4) * 0x28;
            *(undefined2 *)(gTheGame + iVar9 + 0x193ba) = uVar12;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a4) = uVar1;
            *(undefined2 *)(gTheGame + iVar9 + 0x193a6) = 0x88;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar9 + 0x193ac) = uVar2;
            }
            iVar14 += 0x5;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        iVar13 = (iVar4 + 0x15) * 0x28;
        uVar1 = (undefined2)((int)sVar11 << 0x2);
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x16) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x17) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x18) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x19) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1a) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1b) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        iVar13 = (iVar4 + 0x1c) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x100;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar2;
        }
        break;
    case 0x10:
        iVar7 = 0xd;
        mini_shadow._24_2_ = (short)(((int)mini_shadow._24_2_ >> 0x2) + 0x8) * 0x4;
        *(int *)(gTheGame + iVar10 + 0x18e00) = iVar3 + 0x9;
        uVar1 = (undefined2)(iVar14 << 0x2);
        *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
        iVar13 = 0x0;
        do {
            iVar14 = (iVar4 + 0x9 + iVar13) * 0x28;
            *(undefined2 *)(gTheGame + iVar14 + 0x193ba) = uVar12;
            *(short *)(gTheGame + iVar14 + 0x193a4) = (short)((int)sVar5 << 0x2);
            *(undefined2 *)(gTheGame + iVar14 + 0x193a6) = 0x13c;
            if (gTheGame._120328_4_ == 0x4) {
                *(undefined2 *)(gTheGame + iVar14 + 0x193ac) = uVar1;
            }
            iVar13 += 0x1;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        iVar13 = (iVar4 + 0x16) * 0x28;
        uVar2 = (undefined2)((int)sVar11 << 0x2);
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x180;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x17) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x180;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x18) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x180;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x19) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x180;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x1a) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x180;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x1b) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x180;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x1c) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x180;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
        iVar13 = (iVar4 + 0x1d) * 0x28;
        *(undefined2 *)(gTheGame + iVar13 + 0x193ba) = uVar12;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a4) = uVar2;
        *(undefined2 *)(gTheGame + iVar13 + 0x193a6) = 0x180;
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined2 *)(gTheGame + iVar13 + 0x193ac) = uVar1;
        }
    }
    if ((param_4 != 0x0) && (anim_bg = iVar4, anim_sp = iVar6, true)) {
        switch(param_1) {
        case 0x0:
            iVar3 *= 0x20;
            iVar4 *= 0x28;
            *(undefined4 *)(gTheGame + iVar3 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x193ce) = 0xc0;
            iVar6 *= 0x18;
            *(undefined2 *)(gTheGame + iVar4 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19446) = 0xc0;
            *(undefined4 *)(gTheGame + iVar3 + 0x16424) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16420);
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba60) = 0x19c;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba68) = 0x4c;
            *(undefined4 *)(gTheGame + iVar3 + 0x16444) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16440);
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba78) = 0x220;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba80) = 0xc0;
            *(undefined4 *)(gTheGame + iVar3 + 0x16464) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16460);
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba90) = 0x244;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba98) = 0x9c;
            *(undefined4 *)(gTheGame + iVar3 + 0x16484) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16480);
            *(undefined2 *)(gTheGame + iVar6 + 0x1baa8) = 0x248;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bab0) = 0xd4;
            *(undefined4 *)(gTheGame + iVar3 + 0x164a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164a0);
            *(undefined2 *)(gTheGame + iVar6 + 0x1bac0) = 0x270;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bac8) = 0x60;
            *(undefined4 *)(gTheGame + iVar3 + 0x164c4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164c0);
            *(undefined2 *)(gTheGame + iVar6 + 0x1bad8) = 0x2b0;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bae0) = 0x78;
            *(undefined4 *)(gTheGame + iVar3 + 0x164e4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164e0);
            *(undefined2 *)(gTheGame + iVar6 + 0x1baf0) = 0x2c0;
            *(undefined2 *)(gTheGame + iVar6 + 0x1baf8) = 0xc0;
            *(undefined4 *)(gTheGame + iVar3 + 0x16504) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16500);
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb08) = 0x2ec;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb10) = 0x20;
            *(undefined4 *)(gTheGame + iVar3 + 0x16524) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16520);
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb20) = 0x32c;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb28) = 0x40;
            *(undefined4 *)(gTheGame + iVar3 + 0x16544) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16540);
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb38) = 0xa0;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb40) = 0x38;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb50) = 0x9c;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb58) = 0x38;
            *(undefined4 *)(gTheGame + iVar3 + 0x16584) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16580);
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb68) = 0x1dc;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb70) = 0x4c;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb80) = 0x1d8;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb88) = 0x4c;
            *(undefined4 *)(gTheGame + iVar3 + 0x165c4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x165c0);
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb98) = 0x3b0;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bba0) = 0x38;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bbb0) = 0x3ac;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bbb8) = 0x38;
            break;
        case 0x1:
            iVar4 *= 0x28;
            *(undefined4 *)(gTheGame + iVar3 * 0x20 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 * 0x20 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x193ce) = 0xc0;
            iVar13 = 0x0;
            *(undefined2 *)(gTheGame + iVar4 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19446) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1946e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19496) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194be) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194e6) = 0xc0;
            do {
                iVar14 = (iVar3 + iVar13 + 0x9) * 0x20;
                *(undefined4 *)(gTheGame + iVar14 + 0x16384) =
                     *(undefined4 *)(gTheGame + iVar14 + 0x16380);
                sVar5 = AnimationRandom(0x118);
                *(short *)(gTheGame + (anim_sp + iVar13) * 0x18 + 0x1ba60) = (sVar5 + 0x14) * 0x4;
                sVar5 = AnimationRandom(0x64);
                iVar14 = (anim_sp + iVar13) * 0x18;
                *(short *)(gTheGame + iVar14 + 0x1ba68) = sVar5 * -0x4;
                iVar13 += 0x1;
                *(short *)(gTheGame + iVar14 + 0x1ba64) =
                     *(short *)(gTheGame + iVar14 + 0x1ba64) + -0x20;
            } while (iVar13 < 0xe);
            iVar13 = 0x0;
            do {
                iVar14 = (iVar3 + iVar13 + 0x31) * 0x20;
                *(undefined4 *)(gTheGame + iVar14 + 0x16384) =
                     *(undefined4 *)(gTheGame + iVar14 + 0x16380);
                sVar5 = AnimationRandom(0x118);
                *(short *)(gTheGame + (anim_sp + iVar13 + 0xe) * 0x18 + 0x1ba60) =
                     (sVar5 + 0x14) * 0x4;
                sVar5 = AnimationRandom(0x64);
                iVar14 = (anim_sp + iVar13 + 0xe) * 0x18;
                *(short *)(gTheGame + iVar14 + 0x1ba68) = sVar5 * -0x4;
                iVar13 += 0x1;
                *(short *)(gTheGame + iVar14 + 0x1ba64) =
                     *(short *)(gTheGame + iVar14 + 0x1ba64) + -0x20;
            } while (iVar13 < 0xe);
            break;
        case 0x2:
            iVar3 *= 0x20;
            iVar4 *= 0x28;
            *(undefined4 *)(gTheGame + iVar3 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x193ce) = 0xc0;
            iVar6 *= 0x18;
            *(undefined2 *)(gTheGame + iVar4 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19446) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1946e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19496) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194be) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194e6) = 0xc0;
            *(undefined4 *)(gTheGame + iVar3 + 0x164a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164a0);
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba60) = 0x74;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba68) = 0x20;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba64) = 0x200;
            *(undefined4 *)(gTheGame + iVar3 + 0x164e4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164e0);
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba78) = 0x20;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba80) = 0x214;
            *(undefined4 *)(gTheGame + iVar3 + 0x16524) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16520);
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba90) = 0x2b4;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba98) = 0x158;
            *(undefined4 *)(gTheGame + iVar3 + 0x16564) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16560);
            *(undefined2 *)(gTheGame + iVar6 + 0x1baa8) = 0x4a0;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bab0) = 0x24c;
            *(short *)(gTheGame + iVar6 + 0x1ba64) = *(short *)(gTheGame + iVar6 + 0x1ba64) + -0x20;
            *(short *)(gTheGame + iVar6 + 0x1ba7c) = *(short *)(gTheGame + iVar6 + 0x1ba7c) + -0x20;
            break;
        case 0x3:
            iVar3 *= 0x20;
            iVar4 *= 0x28;
            *(undefined4 *)(gTheGame + iVar3 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x193ce) = 0xc0;
            iVar6 *= 0x18;
            *(undefined2 *)(gTheGame + iVar4 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19446) = 0xc0;
            *(undefined4 *)(gTheGame + iVar3 + 0x16424) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16420);
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba60) = 0x28c;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba68) = 0xc0;
            *(undefined4 *)(gTheGame + iVar3 + 0x16444) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16440);
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba78) = 0x230;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba80) = 0x124;
            *(undefined4 *)(gTheGame + iVar3 + 0x16464) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16460);
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba90) = 0x278;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba98) = 0x14c;
            *(undefined4 *)(gTheGame + iVar3 + 0x16484) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16480);
            *(undefined2 *)(gTheGame + iVar6 + 0x1baa8) = 0x2b4;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bab0) = 0x134;
            *(undefined4 *)(gTheGame + iVar3 + 0x164a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164a0);
            *(undefined2 *)(gTheGame + iVar6 + 0x1bac0) = 0x2a4;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bac8) = 0x10c;
            *(undefined4 *)(gTheGame + iVar3 + 0x164c4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164c0);
            *(undefined2 *)(gTheGame + iVar6 + 0x1bad8) = 0x240;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bae0) = 0x13c;
            *(undefined4 *)(gTheGame + iVar3 + 0x164e4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164e0);
            *(undefined2 *)(gTheGame + iVar6 + 0x1baf0) = 0x2b4;
            *(undefined2 *)(gTheGame + iVar6 + 0x1baf8) = 0x170;
            *(undefined4 *)(gTheGame + iVar3 + 0x16504) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16500);
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb08) = 0x2c0;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb10) = 0x11c;
            *(undefined4 *)(gTheGame + iVar3 + 0x16524) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16520);
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb20) = 0x238;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb28) = 0x98;
            *(undefined4 *)(gTheGame + iVar3 + 0x16544) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16540);
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb38) = 0x230;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb40) = 0xfc;
            *(short *)(gTheGame + iVar6 + 0x1ba64) = *(short *)(gTheGame + iVar6 + 0x1ba64) + -0x20;
            *(short *)(gTheGame + iVar6 + 0x1ba7c) = *(short *)(gTheGame + iVar6 + 0x1ba7c) + -0x20;
            *(short *)(gTheGame + iVar6 + 0x1ba94) = *(short *)(gTheGame + iVar6 + 0x1ba94) + -0x20;
            *(short *)(gTheGame + iVar6 + 0x1baac) = *(short *)(gTheGame + iVar6 + 0x1baac) + -0x20;
            *(short *)(gTheGame + iVar6 + 0x1bac4) = *(short *)(gTheGame + iVar6 + 0x1bac4) + -0x20;
            *(short *)(gTheGame + iVar6 + 0x1badc) = *(short *)(gTheGame + iVar6 + 0x1badc) + -0x20;
            *(short *)(gTheGame + iVar6 + 0x1baf4) = *(short *)(gTheGame + iVar6 + 0x1baf4) + -0x20;
            *(short *)(gTheGame + iVar6 + 0x1bb0c) = *(short *)(gTheGame + iVar6 + 0x1bb0c) + -0x20;
            *(short *)(gTheGame + iVar6 + 0x1bb24) = *(short *)(gTheGame + iVar6 + 0x1bb24) + -0x20;
            *(short *)(gTheGame + iVar6 + 0x1bb3c) = *(short *)(gTheGame + iVar6 + 0x1bb3c) + -0x20;
            break;
        case 0x4:
            iVar3 *= 0x20;
            iVar4 *= 0x28;
            *(undefined4 *)(gTheGame + iVar3 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x193ce) = 0xc0;
            iVar6 *= 0x18;
            *(undefined2 *)(gTheGame + iVar4 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19446) = 0xc0;
            *(undefined4 *)(gTheGame + iVar3 + 0x16524) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16520);
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba60) = 0x250;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba68) = 0x50;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba78) = 0x254;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba80) = 0x44;
            *(undefined4 *)(gTheGame + iVar3 + 0x16424) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16420);
            *(undefined2 *)(gTheGame + iVar4 + 0x1946e) = 0x188;
            *(undefined2 *)(gTheGame + iVar4 + 0x19496) = 0x184;
            *(undefined2 *)(gTheGame + iVar4 + 0x194be) = 0x188;
            *(undefined2 *)(gTheGame + iVar4 + 0x194e6) = 0x188;
            *(undefined4 *)(gTheGame + iVar3 + 0x164a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x1950e) = 0x160;
            *(undefined2 *)(gTheGame + iVar4 + 0x19536) = 0x15c;
            *(undefined2 *)(gTheGame + iVar4 + 0x1955e) = 0x15c;
            *(undefined2 *)(gTheGame + iVar4 + 0x19586) = 0x160;
            break;
        case 0x5:
            iVar3 *= 0x20;
            iVar4 *= 0x28;
            *(undefined4 *)(gTheGame + iVar3 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x193ce) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19446) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1946e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19496) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194be) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194e6) = 0xc0;
            *(undefined4 *)(gTheGame + iVar3 + 0x164a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x1950e) = 0x120;
            *(undefined2 *)(gTheGame + iVar4 + 0x19536) = 0x11c;
            *(undefined2 *)(gTheGame + iVar4 + 0x1955e) = 0x110;
            *(undefined4 *)(gTheGame + iVar3 + 0x16524) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16520);
            *(undefined2 *)(gTheGame + iVar4 + 0x19586) = 0xa8;
            *(undefined2 *)(gTheGame + iVar4 + 0x195ae) = 0xa8;
            *(undefined2 *)(gTheGame + iVar4 + 0x195d6) = 0xa4;
            *(undefined4 *)(gTheGame + iVar3 + 0x165a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x165a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x195fe) = 0xd0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19626) = 0xd0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1964e) = 0xd0;
            *(undefined4 *)(gTheGame + iVar3 + 0x16624) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16620);
            *(undefined2 *)(gTheGame + iVar4 + 0x19676) = 0x94;
            *(undefined2 *)(gTheGame + iVar4 + 0x1969e) = 0x94;
            *(undefined2 *)(gTheGame + iVar4 + 0x196c6) = 0x94;
            *(undefined2 *)(gTheGame + iVar4 + 0x19672) = 0x104;
            *(undefined2 *)(gTheGame + iVar4 + 0x1969a) = 0x104;
            *(undefined2 *)(gTheGame + iVar4 + 0x196c2) = 0x104;
            break;
        case 0x6:
            iVar3 *= 0x20;
            iVar4 *= 0x28;
            *(undefined4 *)(gTheGame + iVar3 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x193ce) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19446) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1946e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19496) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194be) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194e6) = 0xc0;
            *(undefined4 *)(gTheGame + iVar3 + 0x164a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164a0);
            *(undefined4 *)(gTheGame + iVar3 + 0x164e4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164e0);
            *(undefined4 *)(gTheGame + iVar3 + 0x16544) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16540);
            *(undefined4 *)(gTheGame + iVar3 + 0x165a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x165a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x1950e) = 0x88;
            *(undefined2 *)(gTheGame + iVar4 + 0x19536) = 0xe8;
            *(undefined2 *)(gTheGame + iVar4 + 0x1955e) = 0x12c;
            *(undefined2 *)(gTheGame + iVar4 + 0x19586) = 0x48;
            break;
        case 0x7:
            iVar3 *= 0x20;
            iVar4 *= 0x28;
            *(undefined4 *)(gTheGame + iVar3 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x193ce) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19446) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1946e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19496) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194be) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194e6) = 0xc0;
            *(undefined4 *)(gTheGame + iVar3 + 0x164a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x1950e) = 0x4c;
            *(undefined2 *)(gTheGame + iVar4 + 0x19536) = 0x50;
            *(undefined2 *)(gTheGame + iVar4 + 0x1955e) = 0x54;
            *(undefined2 *)(gTheGame + iVar4 + 0x19586) = 0x54;
            *(undefined4 *)(gTheGame + iVar3 + 0x16524) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16520);
            *(undefined2 *)(gTheGame + iVar4 + 0x195ae) = 0x5c;
            *(undefined2 *)(gTheGame + iVar4 + 0x195d6) = 0x64;
            *(undefined2 *)(gTheGame + iVar4 + 0x195fe) = 0x68;
            *(undefined2 *)(gTheGame + iVar4 + 0x19626) = 0x68;
            *(undefined4 *)(gTheGame + iVar3 + 0x165a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x165a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x1964e) = 0x7c;
            *(undefined2 *)(gTheGame + iVar4 + 0x19676) = 0x8c;
            *(undefined2 *)(gTheGame + iVar4 + 0x1969e) = 0x84;
            *(undefined2 *)(gTheGame + iVar4 + 0x196c6) = 0x80;
            *(undefined4 *)(gTheGame + iVar3 + 0x16624) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16620);
            *(undefined2 *)(gTheGame + iVar4 + 0x196ee) = 0xa4;
            *(undefined2 *)(gTheGame + iVar4 + 0x19716) = 0xb4;
            *(undefined2 *)(gTheGame + iVar4 + 0x1973e) = 0xb0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19766) = 0xa4;
            break;
        case 0x8:
            iVar3 *= 0x20;
            iVar4 *= 0x28;
            *(undefined4 *)(gTheGame + iVar3 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x193ce) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19446) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1946e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19496) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194be) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194e6) = 0xc0;
            *(undefined4 *)(gTheGame + iVar3 + 0x164a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164a0);
            *(undefined2 *)(gTheGame + iVar6 * 0x18 + 0x1ba60) = 0x310;
            iVar14 = (iVar6 + 0x1) * 0x18;
            *(undefined2 *)(gTheGame + iVar6 * 0x18 + 0x1ba68) = 0x44;
            *(undefined2 *)(gTheGame + iVar14 + 0x1ba60) = 0x310;
            iVar13 = (iVar6 + 0x2) * 0x18;
            *(undefined2 *)(gTheGame + iVar14 + 0x1ba68) = 0x44;
            iVar14 = (iVar6 + 0x3) * 0x18;
            *(undefined2 *)(gTheGame + iVar13 + 0x1ba60) = 0x310;
            *(undefined2 *)(gTheGame + iVar13 + 0x1ba68) = 0x44;
            iVar4 = (iVar6 + 0x4) * 0x18;
            *(undefined2 *)(gTheGame + iVar14 + 0x1ba60) = 0x310;
            *(undefined2 *)(gTheGame + iVar14 + 0x1ba68) = 0x44;
            iVar7 = (iVar6 + 0x5) * 0x18;
            *(undefined4 *)(gTheGame + iVar3 + 0x16524) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16520);
            iVar14 = (iVar6 + 0x6) * 0x18;
            *(undefined2 *)(gTheGame + iVar4 + 0x1ba60) = 0x44c;
            iVar13 = (iVar6 + 0x7) * 0x18;
            *(undefined2 *)(gTheGame + iVar4 + 0x1ba68) = 0x44;
            *(undefined2 *)(gTheGame + iVar7 + 0x1ba60) = 0x44c;
            iVar9 = (iVar6 + 0x8) * 0x18;
            *(undefined2 *)(gTheGame + iVar7 + 0x1ba68) = 0x44;
            *(undefined2 *)(gTheGame + iVar14 + 0x1ba60) = 0x44c;
            iVar10 = (iVar6 + 0x9) * 0x18;
            *(undefined2 *)(gTheGame + iVar14 + 0x1ba68) = 0x44;
            *(undefined2 *)(gTheGame + iVar13 + 0x1ba60) = 0x44c;
            iVar4 = (iVar6 + 0xa) * 0x18;
            *(undefined2 *)(gTheGame + iVar13 + 0x1ba68) = 0x44;
            iVar7 = (iVar6 + 0xb) * 0x18;
            *(undefined4 *)(gTheGame + iVar3 + 0x165a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x165a0);
            iVar14 = (iVar6 + 0xc) * 0x18;
            *(undefined2 *)(gTheGame + iVar9 + 0x1ba60) = 0x9c;
            *(undefined2 *)(gTheGame + iVar9 + 0x1ba68) = 0x38;
            iVar9 = (iVar6 + 0xd) * 0x18;
            *(undefined2 *)(gTheGame + iVar10 + 0x1ba60) = 0x9c;
            *(undefined2 *)(gTheGame + iVar10 + 0x1ba68) = 0x38;
            iVar13 = (iVar6 + 0xe) * 0x18;
            *(undefined2 *)(gTheGame + iVar4 + 0x1ba60) = 0x9c;
            iVar10 = (iVar6 + 0xf) * 0x18;
            *(undefined2 *)(gTheGame + iVar4 + 0x1ba68) = 0x38;
            *(undefined2 *)(gTheGame + iVar7 + 0x1ba60) = 0x9c;
            *(undefined2 *)(gTheGame + iVar7 + 0x1ba68) = 0x38;
            *(undefined4 *)(gTheGame + iVar3 + 0x16624) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16620);
            *(undefined2 *)(gTheGame + iVar14 + 0x1ba60) = 0x268;
            *(undefined2 *)(gTheGame + iVar14 + 0x1ba68) = 0x20;
            *(undefined2 *)(gTheGame + iVar9 + 0x1ba60) = 0x268;
            *(undefined2 *)(gTheGame + iVar9 + 0x1ba68) = 0x20;
            *(undefined2 *)(gTheGame + iVar13 + 0x1ba60) = 0x268;
            *(undefined2 *)(gTheGame + iVar13 + 0x1ba68) = 0x20;
            *(undefined2 *)(gTheGame + iVar10 + 0x1ba60) = 0x268;
            *(undefined2 *)(gTheGame + iVar10 + 0x1ba68) = 0x20;
            iVar13 = (iVar6 + 0x10) * 0x18;
            *(undefined4 *)(gTheGame + iVar3 + 0x166a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x166a0);
            *(undefined2 *)(gTheGame + iVar13 + 0x1ba60) = 0x228;
            iVar3 = (iVar6 + 0x11) * 0x18;
            *(undefined2 *)(gTheGame + iVar13 + 0x1ba68) = 0x54;
            *(undefined2 *)(gTheGame + iVar3 + 0x1ba60) = 0x228;
            iVar14 = (iVar6 + 0x12) * 0x18;
            *(undefined2 *)(gTheGame + iVar3 + 0x1ba68) = 0x54;
            *(undefined2 *)(gTheGame + iVar14 + 0x1ba60) = 0x228;
            iVar13 = (iVar6 + 0x13) * 0x18;
            *(undefined2 *)(gTheGame + iVar14 + 0x1ba68) = 0x54;
            *(undefined2 *)(gTheGame + iVar13 + 0x1ba60) = 0x228;
            *(undefined2 *)(gTheGame + iVar13 + 0x1ba68) = 0x54;
            break;
        case 0x9:
            iVar13 = iVar4 * 0x28;
            *(undefined4 *)(gTheGame + iVar3 * 0x20 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 * 0x20 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar13 + 0x193ce) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x19446) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x1946e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x19496) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x194be) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x194e6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x1950e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x1953a) = 0x5c;
            *(undefined2 *)(gTheGame + iVar13 + 0x1953e) = 0x5c;
            gTheGame[iVar13 + 0x19546] = 0x0;
            gTheGame[iVar13 + 0x19547] = 0x2;
            pon_guS2DInitBg((iVar4 + 0xa) * 0x28 + 0x2ba1e8);
            iVar13 = anim_bg;
            iVar14 = anim_bg * 0x28;
            *(undefined2 *)(gTheGame + iVar14 + 0x1958a) = 0x120;
            *(undefined2 *)(gTheGame + iVar14 + 0x1958e) = 0x120;
            gTheGame[iVar14 + 0x19596] = 0x0;
            gTheGame[iVar14 + 0x19597] = 0x2;
            pon_guS2DInitBg((iVar13 + 0xc) * 0x28 + 0x2ba1e8);
            gTheGame._102360_4_ = *(undefined4 *)(gTheGame + anim_bg * 0x28 + 0x19540);
            gTheGame._102364_4_ = *(undefined4 *)(gTheGame + anim_bg * 0x28 + 0x19590);
            break;
        case 0xa:
            iVar13 = iVar4 * 0x28;
            *(undefined4 *)(gTheGame + iVar3 * 0x20 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 * 0x20 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar13 + 0x193ce) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x19446) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x1946e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x19496) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x194be) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x194e6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x1950e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x1953a) = 0x5c;
            *(undefined2 *)(gTheGame + iVar13 + 0x1953e) = 0x5c;
            gTheGame[iVar13 + 0x19546] = 0x0;
            gTheGame[iVar13 + 0x19547] = 0x2;
            pon_guS2DInitBg((iVar4 + 0xa) * 0x28 + 0x2ba1e8);
            iVar13 = anim_bg;
            iVar14 = anim_bg * 0x28;
            *(undefined2 *)(gTheGame + iVar14 + 0x1958a) = 0x120;
            *(undefined2 *)(gTheGame + iVar14 + 0x1958e) = 0x120;
            gTheGame[iVar14 + 0x19596] = 0x0;
            gTheGame[iVar14 + 0x19597] = 0x2;
            pon_guS2DInitBg((iVar13 + 0xc) * 0x28 + 0x2ba1e8);
            gTheGame._102360_4_ = *(undefined4 *)(gTheGame + anim_bg * 0x28 + 0x19540);
            gTheGame._102364_4_ = *(undefined4 *)(gTheGame + anim_bg * 0x28 + 0x19590);
            break;
        case 0xb:
            iVar3 *= 0x20;
            iVar4 *= 0x28;
            *(undefined4 *)(gTheGame + iVar3 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x193ce) = 0xc0;
            iVar6 *= 0x18;
            *(undefined2 *)(gTheGame + iVar4 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19446) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1946e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19496) = 0xc0;
            *(undefined4 *)(gTheGame + iVar3 + 0x16464) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16460);
            *(undefined2 *)(gTheGame + iVar4 + 0x194be) = 0x168;
            *(undefined2 *)(gTheGame + iVar4 + 0x194e6) = 0x180;
            *(undefined2 *)(gTheGame + iVar4 + 0x1950e) = 0x194;
            *(undefined2 *)(gTheGame + iVar4 + 0x19536) = 0x148;
            *(undefined4 *)(gTheGame + iVar3 + 0x164e4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164e0);
            *(undefined2 *)(gTheGame + iVar4 + 0x1955e) = 0x14c;
            *(undefined2 *)(gTheGame + iVar4 + 0x19586) = 0x150;
            *(undefined2 *)(gTheGame + iVar4 + 0x195ae) = 0x154;
            *(undefined2 *)(gTheGame + iVar4 + 0x195d6) = 0x144;
            *(undefined4 *)(gTheGame + iVar3 + 0x16564) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16560);
            *(undefined2 *)(gTheGame + iVar4 + 0x195fe) = 0x140;
            *(undefined2 *)(gTheGame + iVar4 + 0x19626) = 0x14c;
            *(undefined2 *)(gTheGame + iVar4 + 0x1964e) = 0x13c;
            *(undefined2 *)(gTheGame + iVar4 + 0x19676) = 0x13c;
            *(undefined4 *)(gTheGame + iVar3 + 0x165e4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x165e0);
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba60) = 0x248;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba68) = 0x74;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba78) = 0x250;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba80) = 0x8c;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba90) = 0x250;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba98) = 0x84;
            *(undefined2 *)(gTheGame + iVar6 + 0x1baa8) = 0x248;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bab0) = 0x84;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bac0) = 0x250;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bac8) = 0x84;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bad8) = 0x250;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bae0) = 0x8c;
            *(undefined2 *)(gTheGame + iVar6 + 0x1baf0) = 0x24c;
            *(undefined2 *)(gTheGame + iVar6 + 0x1baf8) = 0x74;
            break;
        case 0xc:
            iVar3 *= 0x20;
            iVar4 *= 0x28;
            *(undefined4 *)(gTheGame + iVar3 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x193ce) = 0xc0;
            iVar6 *= 0x18;
            *(undefined2 *)(gTheGame + iVar4 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19446) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1946e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19496) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194be) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194e6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1950e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19536) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1955e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19586) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x195ae) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x195d6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x195fe) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19626) = 0xc0;
            *(undefined4 *)(gTheGame + iVar3 + 0x16724) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16720);
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba60) = 0x1c;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba68) = 0x4;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba78) = 0x1c;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba80) = 0x0;
            *(undefined4 *)(gTheGame + iVar3 + 0x16764) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16760);
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba90) = 0x4c4;
            *(undefined2 *)(gTheGame + iVar6 + 0x1ba98) = 0x0;
            *(undefined2 *)(gTheGame + iVar6 + 0x1baa8) = 0x4c0;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bab0) = 0x0;
            *(undefined4 *)(gTheGame + iVar3 + 0x167a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x167a0);
            *(undefined2 *)(gTheGame + iVar6 + 0x1bac0) = 0x26c;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bac8) = 0x138;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bad8) = 0x274;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bae0) = 0x128;
            *(undefined4 *)(gTheGame + iVar3 + 0x167e4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x167e0);
            *(undefined2 *)(gTheGame + iVar6 + 0x1baf0) = 0x288;
            *(undefined2 *)(gTheGame + iVar6 + 0x1baf8) = 0xf4;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb08) = 0x290;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb10) = 0xe8;
            *(undefined4 *)(gTheGame + iVar3 + 0x16824) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16820);
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb20) = 0x58;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb28) = 0x0;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb38) = 0x60;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb40) = 0x0;
            *(undefined4 *)(gTheGame + iVar3 + 0x16864) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x16860);
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb50) = 0x210;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb58) = 0xbc;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb68) = 0x218;
            *(undefined2 *)(gTheGame + iVar6 + 0x1bb70) = 0xb8;
            *(undefined4 *)(gTheGame + iVar3 + 0x168a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x168a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x1964e) = 0x54;
            *(undefined2 *)(gTheGame + iVar4 + 0x19676) = 0x48;
            *(undefined4 *)(gTheGame + iVar3 + 0x168e4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x168e0);
            *(undefined2 *)(gTheGame + iVar4 + 0x1969e) = 0x4c;
            *(undefined2 *)(gTheGame + iVar4 + 0x196c6) = 0x4c;
            break;
        case 0xd:
            iVar3 *= 0x20;
            iVar4 *= 0x28;
            *(undefined4 *)(gTheGame + iVar3 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x193ce) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19446) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1946e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19496) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194be) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194e6) = 0xc0;
            *(undefined4 *)(gTheGame + iVar3 + 0x164a4) =
                 *(undefined4 *)(gTheGame + iVar3 + 0x164a0);
            sVar5 = AnimationRandom(0x96);
            iVar13 = anim_sp * 0x18;
            *(short *)(gTheGame + iVar13 + 0x1ba60) = (sVar5 + 0x64) * 0x4;
            *(undefined2 *)(gTheGame + iVar13 + 0x1ba68) = 0xffb0;
            break;
        case 0xe:
            iVar13 = iVar4 * 0x28;
            *(undefined4 *)(gTheGame + iVar3 * 0x20 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 * 0x20 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar13 + 0x193ce) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x19446) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x1946e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x19496) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x194be) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x194e6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar13 + 0x19512) = 0x5c;
            *(undefined2 *)(gTheGame + iVar13 + 0x19516) = 0x5c;
            gTheGame[iVar13 + 0x1951e] = 0x0;
            gTheGame[iVar13 + 0x1951f] = 0x2;
            pon_guS2DInitBg((iVar4 + 0x9) * 0x28 + 0x2ba1e8);
            iVar13 = anim_bg;
            iVar14 = anim_bg * 0x28;
            *(undefined2 *)(gTheGame + iVar14 + 0x19562) = 0x120;
            *(undefined2 *)(gTheGame + iVar14 + 0x19566) = 0x120;
            gTheGame[iVar14 + 0x1956e] = 0x0;
            gTheGame[iVar14 + 0x1956f] = 0x2;
            pon_guS2DInitBg((iVar13 + 0xb) * 0x28 + 0x2ba1e8);
            gTheGame._102360_4_ = *(undefined4 *)(gTheGame + anim_bg * 0x28 + 0x19518);
            gTheGame._102364_4_ = *(undefined4 *)(gTheGame + anim_bg * 0x28 + 0x19568);
            gTheGame._102356_4_ = 0x0;
            break;
        case 0x10:
            iVar4 *= 0x28;
            *(undefined4 *)(gTheGame + iVar3 * 0x20 + 0x163a4) =
                 *(undefined4 *)(gTheGame + iVar3 * 0x20 + 0x163a0);
            *(undefined2 *)(gTheGame + iVar4 + 0x193ce) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x193f6) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1941e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19446) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x1946e) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x19496) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194be) = 0xc0;
            *(undefined2 *)(gTheGame + iVar4 + 0x194e6) = 0xc0;
        }
    }
    return;
}



void pon_SetSpecialAttack(int param_1,int param_2,int param_3)

{
    undefined2 uVar1;
    short sVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    if (gTheGame._120328_4_ == 0x2) {
        sVar2 = *(short *)(Init_specialattack_frameX_2p + param_2 * 0x2 + param_1 * 0x4);
    }
    else {
        sVar2 = *(short *)(Init_specialattack_frameX_4p + param_2 * 0x2 + param_1 * 0x8);
    }
    switch(param_1) {
    case 0x0:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x19) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1a) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1b) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1c) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1d) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1e) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1f) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x20) * 0x28 + 0x193a4) = uVar1;
        break;
    case 0x1:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x17) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x18) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x19) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1a) * 0x28 + 0x193a4) = uVar1;
        break;
    case 0x2:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x17) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x18) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x19) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1a) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1b) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1c) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1d) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1e) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1f) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x20) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x21) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x22) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x23) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x24) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x25) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x26) * 0x28 + 0x193a4) = uVar1;
        break;
    case 0x3:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x13) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x14) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x15) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x16) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x17) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x18) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x19) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1a) * 0x28 + 0x193a4) = uVar1;
        break;
    case 0x4:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x1b) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1c) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1d) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1e) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1f) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x20) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x21) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x22) * 0x28 + 0x193a4) = uVar1;
        break;
    case 0x5:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x23) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x24) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x25) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x26) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x27) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x28) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x29) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x2a) * 0x28 + 0x193a4) = uVar1;
        break;
    case 0x6:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x1b) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1c) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1d) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1e) * 0x28 + 0x193a4) = uVar1;
        iVar5 = 0x8;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1f) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x20) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x21) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x22) * 0x28 + 0x193a4) = uVar1;
        iVar4 = 0x4;
        if (true) {
            do {
                *(undefined2 *)(gTheGame + (iVar3 + 0x1b + iVar5) * 0x28 + 0x193a4) = uVar1;
                iVar5 += 0x1;
                iVar4 += -0x1;
            } while (iVar4 != 0x0);
        }
        break;
    case 0x7:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x27) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x28) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x29) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x2a) * 0x28 + 0x193a4) = uVar1;
        iVar5 = 0x8;
        *(undefined2 *)(gTheGame + (iVar3 + 0x2b) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x2c) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x2d) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x2e) * 0x28 + 0x193a4) = uVar1;
        iVar4 = 0x2;
        if (true) {
            do {
                *(undefined2 *)(gTheGame + (iVar3 + 0x27 + iVar5) * 0x28 + 0x193a4) = uVar1;
                iVar5 += 0x1;
                iVar4 += -0x1;
            } while (iVar4 != 0x0);
        }
        break;
    case 0x8:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x1d) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1e) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1f) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x20) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x21) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x22) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x23) * 0x28 + 0x193a4) = uVar1;
        break;
    case 0x9:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x1b) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1c) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1d) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1e) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1f) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x20) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x21) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x22) * 0x28 + 0x193a4) = uVar1;
        break;
    case 0xa:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x1b) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1c) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1d) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1e) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1f) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x20) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x21) * 0x28 + 0x193a4) = uVar1;
        break;
    case 0xb:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x20) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x21) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x22) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x23) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x24) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x25) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x26) * 0x28 + 0x193a4) = uVar1;
        break;
    case 0xc:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x22) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x23) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x24) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x25) * 0x28 + 0x193a4) = uVar1;
        iVar5 = 0x8;
        *(undefined2 *)(gTheGame + (iVar3 + 0x26) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x27) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x28) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x29) * 0x28 + 0x193a4) = uVar1;
        iVar4 = 0x6;
        if (true) {
            do {
                *(undefined2 *)(gTheGame + (iVar3 + 0x22 + iVar5) * 0x28 + 0x193a4) = uVar1;
                iVar5 += 0x1;
                iVar4 += -0x1;
            } while (iVar4 != 0x0);
        }
        break;
    case 0xd:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x16) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x17) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x18) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x19) * 0x28 + 0x193a4) = uVar1;
        iVar5 = 0x8;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1a) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1b) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1c) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1d) * 0x28 + 0x193a4) = uVar1;
        iVar4 = 0x2;
        if (true) {
            do {
                *(undefined2 *)(gTheGame + (iVar3 + 0x16 + iVar5) * 0x28 + 0x193a4) = uVar1;
                iVar5 += 0x1;
                iVar4 += -0x1;
            } while (iVar4 != 0x0);
        }
        break;
    case 0xe:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x1a) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1b) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1c) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1d) * 0x28 + 0x193a4) = uVar1;
        iVar5 = 0x8;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1e) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1f) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x20) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x21) * 0x28 + 0x193a4) = uVar1;
        iVar4 = 0x6;
        if (true) {
            do {
                *(undefined2 *)(gTheGame + (iVar3 + 0x1a + iVar5) * 0x28 + 0x193a4) = uVar1;
                iVar5 += 0x1;
                iVar4 += -0x1;
            } while (iVar4 != 0x0);
        }
        break;
    case 0xf:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x15) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x16) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x17) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x18) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x19) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1a) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1b) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1c) * 0x28 + 0x193a4) = uVar1;
        break;
    case 0x10:
        iVar3 = param_3 * 0xc8 >> 0x2;
        uVar1 = (undefined2)((int)sVar2 << 0x2);
        *(undefined2 *)(gTheGame + (iVar3 + 0x16) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x17) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x18) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x19) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1a) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1b) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1c) * 0x28 + 0x193a4) = uVar1;
        *(undefined2 *)(gTheGame + (iVar3 + 0x1d) * 0x28 + 0x193a4) = uVar1;
    }
    return;
}

