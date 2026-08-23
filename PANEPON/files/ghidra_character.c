
void InitCharacter(int param_1,int param_2)

{
    int iVar1;
    undefined1 *puVar2;
    int iVar3;
    undefined1 *puVar4;
    int iVar5;
    int local_a8;
    
    iVar5 = 0x3;
    puVar4 = attackA;
    puVar2 = attackB;
    do {
        *(undefined4 *)puVar4 = 0x1033;
        *(undefined4 *)((int)puVar4 + 0x4) = 0x0;
        *(undefined2 *)((int)puVar4 + 0x8) = 0x0;
        *(undefined2 *)((int)puVar4 + 0xa) = 0xff;
        *(undefined2 *)((int)puVar4 + 0xc) = 0x100;
        *(undefined2 *)((int)puVar4 + 0xe) = 0x0;
        *(undefined4 *)((int)puVar4 + 0x10) = 0xffffffff;
        *(undefined4 *)((int)puVar4 + 0x14) = 0x0;
        *(undefined4 *)puVar2 = 0x1033;
        *(undefined4 *)((int)puVar2 + 0x4) = 0x0;
        *(undefined2 *)((int)puVar2 + 0x8) = 0x0;
        *(undefined2 *)((int)puVar2 + 0xa) = 0xff;
        *(undefined2 *)((int)puVar2 + 0xc) = 0x100;
        *(undefined2 *)((int)puVar2 + 0xe) = 0x0;
        *(undefined4 *)((int)puVar2 + 0x10) = 0xffffffff;
        *(undefined4 *)((int)puVar2 + 0x14) = 0x0;
        *(undefined4 *)((int)puVar4 + 0x18) = 0x1033;
        *(undefined4 *)((int)puVar4 + 0x1c) = 0x0;
        *(undefined2 *)((int)puVar4 + 0x20) = 0x0;
        *(undefined2 *)((int)puVar4 + 0x22) = 0xff;
        *(undefined2 *)((int)puVar4 + 0x24) = 0x100;
        *(undefined2 *)((int)puVar4 + 0x26) = 0x0;
        *(undefined4 *)((int)puVar4 + 0x28) = 0xffffffff;
        *(undefined4 *)((int)puVar4 + 0x2c) = 0x0;
        puVar4 = (undefined1 *)((int)puVar4 + 0x30);
        *(undefined4 *)((int)puVar2 + 0x18) = 0x1033;
        *(undefined4 *)((int)puVar2 + 0x1c) = 0x0;
        *(undefined2 *)((int)puVar2 + 0x20) = 0x0;
        *(undefined2 *)((int)puVar2 + 0x22) = 0xff;
        *(undefined2 *)((int)puVar2 + 0x24) = 0x100;
        *(undefined2 *)((int)puVar2 + 0x26) = 0x0;
        *(undefined4 *)((int)puVar2 + 0x28) = 0xffffffff;
        *(undefined4 *)((int)puVar2 + 0x2c) = 0x0;
        puVar2 = (undefined1 *)((int)puVar2 + 0x30);
        iVar5 += -0x1;
    } while (iVar5 != 0x0);
    iVar5 = 0x3;
    puVar4 = brickA;
    puVar2 = brickB;
    do {
        *(undefined4 *)puVar4 = 0x1033;
        *(undefined4 *)((int)puVar4 + 0x4) = 0x0;
        *(undefined2 *)((int)puVar4 + 0x8) = 0x0;
        *(undefined2 *)((int)puVar4 + 0xa) = 0x1ff;
        *(undefined2 *)((int)puVar4 + 0xc) = 0x80;
        *(undefined2 *)((int)puVar4 + 0xe) = 0x0;
        *(undefined4 *)((int)puVar4 + 0x10) = 0xffffffff;
        *(undefined4 *)((int)puVar4 + 0x14) = 0x0;
        puVar4 = (undefined1 *)((int)puVar4 + 0x18);
        *(undefined4 *)puVar2 = 0x1033;
        *(undefined4 *)((int)puVar2 + 0x4) = 0x0;
        *(undefined2 *)((int)puVar2 + 0x8) = 0x0;
        *(undefined2 *)((int)puVar2 + 0xa) = 0x1ff;
        *(undefined2 *)((int)puVar2 + 0xc) = 0x80;
        *(undefined2 *)((int)puVar2 + 0xe) = 0x0;
        *(undefined4 *)((int)puVar2 + 0x10) = 0xffffffff;
        *(undefined4 *)((int)puVar2 + 0x14) = 0x0;
        puVar2 = (undefined1 *)((int)puVar2 + 0x18);
        iVar5 += -0x1;
    } while (iVar5 != 0x0);
    faceA._0_4_ = 0x1033;
    faceA._4_4_ = 0x0;
    faceA._8_2_ = 0x0;
    faceA._10_2_ = 0x7f;
    faceA._12_2_ = 0x100;
    faceA._14_2_ = 0x0;
    faceA._16_4_ = 0xffffffff;
    faceA._20_4_ = 0x0;
    faceB._0_4_ = 0x1033;
    faceB._4_4_ = 0x0;
    faceB._8_2_ = 0x0;
    faceB._10_2_ = 0x7f;
    faceB._12_2_ = 0x100;
    faceB._14_2_ = 0x0;
    faceB._16_4_ = 0xffffffff;
    faceB._20_4_ = 0x0;
    explodeA._0_4_ = 0x1033;
    explodeA._4_4_ = 0x0;
    explodeA._8_2_ = 0x0;
    explodeA._10_2_ = 0x7f;
    explodeA._12_2_ = 0x100;
    explodeA._14_2_ = 0x0;
    explodeA._16_4_ = 0xffffffff;
    explodeA._20_4_ = 0x0;
    explodeB._0_4_ = 0x1033;
    explodeB._4_4_ = 0x0;
    explodeB._8_2_ = 0x0;
    explodeB._10_2_ = 0x7f;
    explodeB._12_2_ = 0x100;
    explodeB._14_2_ = 0x0;
    explodeB._16_4_ = 0xffffffff;
    explodeB._20_4_ = 0x0;
    if (param_2 == -0x1) {
        local_a8 = 0x1;
    }
    else {
        local_a8 = 0x2;
    }
    for (iVar5 = 0x0; iVar5 < local_a8; iVar5 += 0x1) {
        iVar3 = param_2;
        if (iVar5 == 0x0) {
            iVar3 = param_1;
        }
        if ((param_2 == 0xf) && (iVar5 == 0x0)) {
            iVar3 = 0x11;
        }
        Pon_DVDRead_char(iVar3,iVar5);
        iVar1 = gc_charFlower;
        switch(iVar3) {
        case 0x0:
            break;
        case 0x1:
            iVar1 = gc_charIce;
            break;
        case 0x2:
            iVar1 = gc_charJewel;
            break;
        case 0x3:
            iVar1 = gc_charWater;
            break;
        case 0x4:
            iVar1 = gc_charFire;
            break;
        case 0x5:
            iVar1 = gc_charCloud;
            break;
        case 0x6:
            iVar1 = gc_charGreen;
            break;
        case 0x7:
            iVar1 = gc_charOcean;
            break;
        case 0x8:
            iVar1 = gc_charMoon;
            break;
        case 0x9:
            iVar1 = gc_charPrince;
            break;
        case 0xa:
            iVar1 = gc_charLion;
            break;
        case 0xb:
            iVar1 = gc_charDragon;
            break;
        case 0xc:
            iVar1 = gc_charJoker;
            break;
        case 0xd:
            iVar1 = gc_charDevil;
            break;
        case 0xe:
            iVar1 = gc_charGoddess;
            break;
        case 0xf:
            iVar1 = gc_charWhale;
            break;
        case 0x10:
            iVar1 = gc_charWitch;
            break;
        case 0x11:
            iVar1 = gc_charCombine;
        }
        if (iVar5 == 0x0) {
            attackB._28_4_ = iVar1 + 0x800;
            attackB._52_4_ = iVar1 + 0x1000;
            attackB._76_4_ = iVar1 + 0x1800;
            attackB._100_4_ = iVar1 + 0x2000;
            attackB._124_4_ = iVar1 + 0x2800;
            gfaceB = iVar1 + 0x3000;
            explosionA = iVar1 + 0x3400;
            brickB._4_4_ = iVar1 + 0x3800;
            brickB._28_4_ = iVar1 + 0x4800;
            brickB._52_4_ = iVar1 + 0x5800;
            attackB._4_4_ = iVar1;
            gblockB._0_4_ = iVar1;
            gblockB._4_4_ = attackB._28_4_;
            gblockB._8_4_ = attackB._52_4_;
            gblockB._12_4_ = attackB._76_4_;
            gblockB._16_4_ = attackB._100_4_;
            gblockB._20_4_ = attackB._124_4_;
            gbrickB._0_4_ = brickB._4_4_;
            gbrickB._4_4_ = brickB._28_4_;
            gbrickB._8_4_ = brickB._52_4_;
            faceB._4_4_ = gfaceB;
            explodeA._4_4_ = explosionA;
        }
        else {
            attackA._28_4_ = iVar1 + 0x800;
            attackA._52_4_ = iVar1 + 0x1000;
            attackA._76_4_ = iVar1 + 0x1800;
            attackA._100_4_ = iVar1 + 0x2000;
            attackA._124_4_ = iVar1 + 0x2800;
            gfaceA = iVar1 + 0x3000;
            explosionB = iVar1 + 0x3400;
            brickA._4_4_ = iVar1 + 0x3800;
            brickA._28_4_ = iVar1 + 0x4800;
            brickA._52_4_ = iVar1 + 0x5800;
            attackA._4_4_ = iVar1;
            gblockA._0_4_ = iVar1;
            gblockA._4_4_ = attackA._28_4_;
            gblockA._8_4_ = attackA._52_4_;
            gblockA._12_4_ = attackA._76_4_;
            gblockA._16_4_ = attackA._100_4_;
            gblockA._20_4_ = attackA._124_4_;
            gbrickA._0_4_ = brickA._4_4_;
            gbrickA._4_4_ = brickA._28_4_;
            gbrickA._8_4_ = brickA._52_4_;
            faceA._4_4_ = gfaceA;
            explodeB._4_4_ = explosionB;
        }
    }
    return;
}



void pon_InitCharacter4p(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
    undefined4 *puVar1;
    int iVar2;
    undefined1 *puVar3;
    undefined1 *puVar4;
    undefined1 *puVar5;
    undefined1 *puVar6;
    int iVar7;
    undefined1 *puVar8;
    undefined1 *puVar9;
    undefined1 *puVar10;
    uint *puVar11;
    undefined1 *puVar12;
    undefined1 *puVar13;
    uint local_b8 [0x5];
    int *local_a4;
    int *local_a0;
    int *local_9c;
    undefined4 local_98;
    int *local_94;
    undefined4 local_90;
    int *local_8c;
    undefined4 local_88;
    int *local_84;
    undefined4 local_80;
    int *local_7c;
    undefined4 local_78;
    int *local_74;
    undefined4 local_70;
    int *local_6c;
    undefined4 local_68;
    int *local_64;
    undefined4 local_60;
    int *local_5c;
    undefined4 local_58;
    int *local_54;
    undefined4 local_50;
    int *local_4c;
    
    local_b8[0] = param_1;
    local_b8[1] = param_2;
    puVar10 = attackTxtr;
    local_b8[2] = param_3;
    local_b8[3] = param_4;
    puVar1 = (undefined4 *)puVar10;
    for (iVar7 = 0x0; iVar7 < gTheGame._120328_4_; iVar7 += 0x1) {
        *puVar1 = 0x1033;
        puVar1[0x1] = 0x0;
        *(undefined2 *)(puVar1 + 0x2) = 0x0;
        *(undefined2 *)((int)puVar1 + 0xa) = 0xff;
        *(undefined2 *)(puVar1 + 0x3) = 0x100;
        *(undefined2 *)((int)puVar1 + 0xe) = 0x0;
        puVar1[0x4] = 0xffffffff;
        puVar1[0x5] = 0x0;
        puVar1[0x6] = 0x1033;
        puVar1[0x7] = 0x0;
        *(undefined2 *)(puVar1 + 0x8) = 0x0;
        *(undefined2 *)((int)puVar1 + 0x22) = 0xff;
        *(undefined2 *)(puVar1 + 0x9) = 0x100;
        *(undefined2 *)((int)puVar1 + 0x26) = 0x0;
        puVar1[0xa] = 0xffffffff;
        puVar1[0xb] = 0x0;
        puVar1[0xc] = 0x1033;
        puVar1[0xd] = 0x0;
        *(undefined2 *)(puVar1 + 0xe) = 0x0;
        *(undefined2 *)((int)puVar1 + 0x3a) = 0xff;
        *(undefined2 *)(puVar1 + 0xf) = 0x100;
        *(undefined2 *)((int)puVar1 + 0x3e) = 0x0;
        puVar1[0x10] = 0xffffffff;
        puVar1[0x11] = 0x0;
        puVar1[0x12] = 0x1033;
        puVar1[0x13] = 0x0;
        *(undefined2 *)(puVar1 + 0x14) = 0x0;
        *(undefined2 *)((int)puVar1 + 0x52) = 0xff;
        *(undefined2 *)(puVar1 + 0x15) = 0x100;
        *(undefined2 *)((int)puVar1 + 0x56) = 0x0;
        puVar1[0x16] = 0xffffffff;
        puVar1[0x17] = 0x0;
        puVar1[0x18] = 0x1033;
        puVar1[0x19] = 0x0;
        *(undefined2 *)(puVar1 + 0x1a) = 0x0;
        *(undefined2 *)((int)puVar1 + 0x6a) = 0xff;
        *(undefined2 *)(puVar1 + 0x1b) = 0x100;
        *(undefined2 *)((int)puVar1 + 0x6e) = 0x0;
        puVar1[0x1c] = 0xffffffff;
        puVar1[0x1d] = 0x0;
        puVar1[0x1e] = 0x1033;
        puVar1[0x1f] = 0x0;
        *(undefined2 *)(puVar1 + 0x20) = 0x0;
        *(undefined2 *)((int)puVar1 + 0x82) = 0xff;
        *(undefined2 *)(puVar1 + 0x21) = 0x100;
        *(undefined2 *)((int)puVar1 + 0x86) = 0x0;
        puVar1[0x22] = 0xffffffff;
        puVar1[0x23] = 0x0;
        puVar1 = puVar1 + 0x24;
    }
    puVar6 = brickTxtr;
    puVar1 = (undefined4 *)puVar6;
    for (iVar7 = 0x0; iVar7 < gTheGame._120328_4_; iVar7 += 0x1) {
        *puVar1 = 0x1033;
        puVar1[0x1] = 0x0;
        *(undefined2 *)(puVar1 + 0x2) = 0x0;
        *(undefined2 *)((int)puVar1 + 0xa) = 0x1ff;
        *(undefined2 *)(puVar1 + 0x3) = 0x80;
        *(undefined2 *)((int)puVar1 + 0xe) = 0x0;
        puVar1[0x4] = 0xffffffff;
        puVar1[0x5] = 0x0;
        puVar1[0x6] = 0x1033;
        puVar1[0x7] = 0x0;
        *(undefined2 *)(puVar1 + 0x8) = 0x0;
        *(undefined2 *)((int)puVar1 + 0x22) = 0x1ff;
        *(undefined2 *)(puVar1 + 0x9) = 0x80;
        *(undefined2 *)((int)puVar1 + 0x26) = 0x0;
        puVar1[0xa] = 0xffffffff;
        puVar1[0xb] = 0x0;
        puVar1[0xc] = 0x1033;
        puVar1[0xd] = 0x0;
        *(undefined2 *)(puVar1 + 0xe) = 0x0;
        *(undefined2 *)((int)puVar1 + 0x3a) = 0x1ff;
        *(undefined2 *)(puVar1 + 0xf) = 0x80;
        *(undefined2 *)((int)puVar1 + 0x3e) = 0x0;
        puVar1[0x10] = 0xffffffff;
        puVar1[0x11] = 0x0;
        puVar1 = puVar1 + 0x12;
    }
    puVar3 = faceTxtr;
    puVar1 = (undefined4 *)puVar3;
    for (iVar7 = 0x0; iVar7 < gTheGame._120328_4_; iVar7 += 0x1) {
        *puVar1 = 0x1033;
        puVar1[0x1] = 0x0;
        *(undefined2 *)(puVar1 + 0x2) = 0x0;
        *(undefined2 *)((int)puVar1 + 0xa) = 0x7f;
        *(undefined2 *)(puVar1 + 0x3) = 0x100;
        *(undefined2 *)((int)puVar1 + 0xe) = 0x0;
        puVar1[0x4] = 0xffffffff;
        puVar1[0x5] = 0x0;
        puVar1 = puVar1 + 0x6;
    }
    puVar4 = explodeTxtr;
    puVar1 = (undefined4 *)puVar4;
    for (iVar7 = 0x0; iVar7 < gTheGame._120328_4_; iVar7 += 0x1) {
        *puVar1 = 0x1033;
        puVar1[0x1] = 0x0;
        *(undefined2 *)(puVar1 + 0x2) = 0x0;
        *(undefined2 *)((int)puVar1 + 0xa) = 0x7f;
        *(undefined2 *)(puVar1 + 0x3) = 0x100;
        *(undefined2 *)((int)puVar1 + 0xe) = 0x0;
        puVar1[0x4] = 0xffffffff;
        puVar1[0x5] = 0x0;
        puVar1 = puVar1 + 0x6;
    }
    local_98 = 0x1b0000;
    local_90 = 0x1b0000;
    puVar5 = gTheGame;
    local_88 = 0x1b0000;
    local_80 = 0x1b0000;
    local_78 = 0x1b0000;
    local_70 = 0x1b0000;
    local_68 = 0x1b0000;
    local_60 = 0x1b0000;
    puVar11 = local_b8;
    local_58 = 0x1b0000;
    local_50 = 0x1b0000;
    local_a4 = &gc_charGreen;
    local_a0 = &gc_charWater;
    local_9c = &gc_charMoon;
    local_94 = &gc_charOcean;
    local_8c = &gc_charDragon;
    local_84 = &gc_charJoker;
    local_7c = &gc_charGoddess;
    local_74 = &gc_charDevil;
    local_6c = &gc_charLion;
    local_64 = &gc_charPrince;
    local_5c = &gc_charWhale;
    puVar13 = gblock;
    local_54 = &gc_charWitch;
    local_4c = &gc_charCombine;
    puVar8 = gface;
    puVar9 = explosion;
    puVar12 = gbrick;
    for (iVar7 = 0x0; iVar7 < gTheGame._120328_4_; iVar7 += 0x1) {
        if (*(int *)(puVar5 + 0x16000) != 0x1) {
            Pon_DVDRead_char(*puVar11,iVar7);
            iVar2 = gc_charFlower;
            switch(*puVar11) {
            case 0x0:
                break;
            case 0x1:
                iVar2 = gc_charIce;
                break;
            case 0x2:
                iVar2 = gc_charJewel;
                break;
            case 0x3:
                iVar2 = *local_a0;
                break;
            case 0x4:
                iVar2 = gc_charFire;
                break;
            case 0x5:
                iVar2 = gc_charCloud;
                break;
            case 0x6:
                iVar2 = *local_a4;
                break;
            case 0x7:
                iVar2 = *local_94;
                break;
            case 0x8:
                iVar2 = *local_9c;
                break;
            case 0x9:
                iVar2 = *local_64;
                break;
            case 0xa:
                iVar2 = *local_6c;
                break;
            case 0xb:
                iVar2 = *local_8c;
                break;
            case 0xc:
                iVar2 = *local_84;
                break;
            case 0xd:
                iVar2 = *local_74;
                break;
            case 0xe:
                iVar2 = *local_7c;
                break;
            case 0xf:
                iVar2 = *local_5c;
                break;
            case 0x10:
                iVar2 = *local_54;
                break;
            case 0x11:
                iVar2 = *local_4c;
            }
            *(int *)puVar13 = iVar2;
            *(int *)((int)puVar13 + 0x4) = iVar2 + 0x800;
            *(int *)((int)puVar13 + 0x8) = iVar2 + 0x1000;
            *(int *)((int)puVar13 + 0xc) = iVar2 + 0x1800;
            *(int *)((int)puVar13 + 0x10) = iVar2 + 0x2000;
            *(int *)((int)puVar13 + 0x14) = iVar2 + 0x2800;
            *(int *)puVar8 = iVar2 + 0x3000;
            *(int *)puVar9 = iVar2 + 0x3400;
            *(int *)puVar12 = iVar2 + 0x3800;
            *(int *)((int)puVar12 + 0x4) = iVar2 + 0x4800;
            *(int *)((int)puVar12 + 0x8) = iVar2 + 0x5800;
            *(int *)(puVar6 + 0x4) = *(int *)puVar12;
            *(int *)(puVar6 + 0x1c) = *(int *)((int)puVar12 + 0x4);
            *(int *)(puVar6 + 0x34) = *(int *)((int)puVar12 + 0x8);
            *(int *)(puVar10 + 0x4) = *(int *)puVar13;
            *(int *)(puVar10 + 0x1c) = *(int *)((int)puVar13 + 0x4);
            *(int *)(puVar10 + 0x34) = *(int *)((int)puVar13 + 0x8);
            *(int *)(puVar10 + 0x4c) = *(int *)((int)puVar13 + 0xc);
            *(int *)(puVar10 + 0x64) = *(int *)((int)puVar13 + 0x10);
            *(int *)(puVar10 + 0x7c) = *(int *)((int)puVar13 + 0x14);
            *(int *)(puVar3 + 0x4) = *(int *)puVar8;
            *(int *)(puVar4 + 0x4) = *(int *)puVar9;
        }
        puVar5 = puVar5 + 0x110;
        puVar11 = puVar11 + 0x1;
        puVar13 = (undefined1 *)((int)puVar13 + 0x18);
        puVar8 = (undefined1 *)((int)puVar8 + 0x4);
        puVar9 = (undefined1 *)((int)puVar9 + 0x4);
        puVar12 = (undefined1 *)((int)puVar12 + 0xc);
        puVar6 = puVar6 + 0x48;
        puVar10 = puVar10 + 0x90;
        puVar3 = puVar3 + 0x18;
        puVar4 = puVar4 + 0x18;
    }
    return;
}



int ReturnAttackTexValue(int param_1,int param_2,int param_3,uint param_4)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    undefined8 *puVar4;
    
    if ((gTheGame._120332_4_ == 0x2) && (0xd < param_2)) {
        param_2 += -0x2;
    }
    puVar4 = NULL;
    if (true) {
        switch(param_2) {
        case 0x1:
            puVar4 = (undefined8 *)&attack_combo4;
            break;
        case 0x2:
            puVar4 = (undefined8 *)&attack_combo5;
            break;
        case 0x3:
            puVar4 = (undefined8 *)&attack_combo6;
            break;
        case 0x4:
        case 0xa:
            puVar4 = (undefined8 *)&attack_combo7;
            break;
        case 0x9:
            puVar4 = (undefined8 *)attack_chain3;
            break;
        case 0xb:
            if (gTheGame._120332_4_ == 0x1) {
                puVar4 = (undefined8 *)(attack_chain3 + param_3 * 0x6);
            }
            else {
                puVar4 = (undefined8 *)ring_chain3;
            }
            break;
        case 0xc:
            puVar4 = (undefined8 *)&attack_chain4;
            break;
        case 0xd:
            puVar4 = (undefined8 *)&attack_chain5;
            break;
        case 0xe:
            puVar4 = (undefined8 *)&attack_chain6;
            break;
        case 0xf:
            puVar4 = (undefined8 *)&attack_chain7;
            break;
        case 0x10:
            puVar4 = (undefined8 *)&attack_chain8;
            break;
        case 0x11:
            puVar4 = &attack_chain9;
            break;
        case 0x12:
            puVar4 = (undefined8 *)attack_chain10;
            break;
        case 0x13:
            puVar4 = (undefined8 *)attack_chain11;
            break;
        case 0x14:
            puVar4 = (undefined8 *)attack_chain12;
            break;
        case 0x15:
        case 0x16:
            puVar4 = (undefined8 *)attack_chain13;
        }
    }
    if ((gTheGame._120332_4_ == 0x1) || (param_2 < 0xc)) {
        if (0xb < param_2) {
            iVar1 = (int)*(char *)((int)puVar4 + param_3);
            switch(iVar1) {
            case 0x0:
                goto switchD_00051b78_caseD_0;
            case 0x1:
                return (int)*(char *)((int)&attackRow1 + param_4);
            case 0x2:
                return (int)*(char *)((int)&attackRow2 + param_4);
            case 0x3:
                return (int)*(char *)((int)&attackRow3 + param_4);
            case 0x4:
                return (int)*(char *)((int)&attackRow4 + param_4);
            case 0x5:
                return (int)*(char *)((int)&attackRow5 + param_4);
            case 0x6:
                return (int)*(char *)((int)&attackRow6 + param_4);
            case 0x7:
                return (int)*(char *)((int)&attackRow7 + param_4);
            case 0x8:
                return (int)*(char *)((int)&attackRow8 + param_4);
            case 0x9:
                return (int)*(char *)((int)&attackRow9 + param_4);
            default:
                return iVar1;
            }
        }
        return (int)*(char *)((int)puVar4 + param_4);
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 < 0xa) {
        uVar3 = iVar1 + 0x8;
    }
    else {
        uVar3 = iVar1 - 0xa;
    }
    iVar1 = *(int *)(param_1 + 0x4);
    if (0x16 < iVar1) {
        iVar1 += -0x16;
    }
    if (iVar1 - 0xcU < 0x2) {
        if (param_4 == uVar3) {
            iVar2 = 0x2;
        }
        else if (param_4 == uVar3 + 0x1) {
            iVar2 = 0x3;
        }
        else {
            iVar2 = 0x1;
        }
    }
    else if (param_4 == uVar3) {
        iVar2 = 0x2;
    }
    else if (param_4 == uVar3 + 0x1) {
        iVar2 = 0x3;
    }
    else if (uVar3 == (((int)uVar3 >> 0x1) + (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0)) * 0x2
            ) {
        if (param_4 ==
            (((int)param_4 >> 0x1) + (uint)((int)param_4 < 0x0 && (param_4 & 0x1) != 0x0)) * 0x2) {
            iVar2 = 0x4;
        }
        else {
            iVar2 = 0x1;
        }
    }
    else if (param_4 + (((int)param_4 >> 0x1) + (uint)((int)param_4 < 0x0 && (param_4 & 0x1) != 0x0)
                       ) * -0x2 == 0x1) {
        iVar2 = 0x4;
    }
    else {
        iVar2 = 0x1;
    }
    if (iVar1 != 0xd) {
        if ((iVar1 < 0xd) && (0xb < iVar1)) {
            return (int)*(char *)((int)&attack_combo7 + iVar2);
        }
        iVar1 = (int)*(char *)((int)puVar4 + param_3);
        switch(iVar1) {
        case 0x0:
            goto switchD_00051b78_caseD_0;
        case 0x1:
            return (int)*(char *)((int)&attackRow1 + iVar2);
        case 0x2:
            return (int)*(char *)((int)&attackRow2 + iVar2);
        case 0x3:
            return (int)*(char *)((int)&attackRow3 + iVar2);
        case 0x4:
            return (int)*(char *)((int)&attackRow4 + iVar2);
        case 0x5:
            return (int)*(char *)((int)&attackRow5 + iVar2);
        case 0x6:
            return (int)*(char *)((int)&attackRow6 + iVar2);
        case 0x7:
            return (int)*(char *)((int)&attackRow7 + iVar2);
        case 0x8:
            return (int)*(char *)((int)&attackRow8 + iVar2);
        case 0x9:
            iVar1 = (int)*(char *)((int)&attackRow9 + iVar2);
switchD_00051b78_caseD_0:
            return iVar1;
        default:
            return iVar1;
        }
    }
    return (int)(char)attack_chain3[param_3 * 0x6 + iVar2];
}



void LoadCharacterProfileOffset(undefined4 param_1,int *param_2,int *param_3)

{
    switch(param_1) {
    case 0x0:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0x7b8;
        return;
    case 0x1:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0x5c8;
        return;
    case 0x2:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0x6b8;
        return;
    case 0x3:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0x6f8;
        return;
    case 0x4:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0xa08;
        return;
    case 0x5:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0x9f8;
        return;
    case 0x6:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0x6b8;
        return;
    case 0x7:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0x930;
        return;
    case 0x8:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0x6f0;
        return;
    case 0x9:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0x538;
        return;
    case 0xa:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0x4e0;
        return;
    case 0xb:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0xe58;
        return;
    case 0xc:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0xc30;
        return;
    case 0xd:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0x510;
        return;
    case 0xe:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0x488;
        return;
    case 0xf:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0x1b8;
        return;
    case 0x10:
        *param_2 = 0x10;
        *param_3 = *param_2 + 0x490;
        return;
    default:
        *param_2 = 0x0;
        *param_3 = 0x0;
        return;
    }
}


