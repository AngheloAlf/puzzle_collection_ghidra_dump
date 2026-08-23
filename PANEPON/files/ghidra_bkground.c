
void InitFrame(undefined4 param_1)

{
    int iVar1;
    int iVar2;
    
    iVar1 = nextSegment;
    iVar2 = iVar1;
    if (gTheGame._120332_4_ == 0x1) {
        if (gTheGame._120328_4_ == 0x1) {
            Pon_DVDRead_fr2d(param_1,0x0);
            if (true) {
                switch(param_1) {
                case 0x0:
                    iVar2 = gc_fr2dflower1;
                    break;
                case 0x3:
                    iVar2 = gc_fr2dwater1;
                    break;
                case 0x4:
                    iVar2 = gc_fr2dfire1;
                    break;
                case 0x5:
                    iVar2 = gc_fr2dcloud1;
                    break;
                case 0x6:
                    iVar2 = gc_fr2dgreen1;
                    break;
                case 0x8:
                    iVar2 = gc_fr2dmoon1;
                    break;
                case 0xd:
                    iVar2 = gc_fr2ddevil1;
                }
            }
        }
        else if (gTheGame._120328_4_ == 0x2) {
            Pon_DVDRead_fr2d(gSelection,0x1);
            iVar2 = gc_fr2dattack22;
            if (gSelection != 0xb4) {
                if (gSelection < 0xb4) {
                    iVar2 = gc_fr2dattack22;
                    if (((gSelection != 0xa0) && (iVar2 = iVar1, gSelection < 0xa0)) &&
                       (iVar2 = gc_fr2dattack21, gSelection != 0x96)) {
                        iVar2 = iVar1;
                    }
                }
                else {
                    iVar2 = gc_fr2dscore2;
                    if (gSelection != 0xc8) {
                        iVar2 = iVar1;
                    }
                }
            }
        }
        else {
            Pon_DVDRead_fr2d(gSelection,0x0);
            if (gSelection != 0xdc) {
                if (gSelection < 0xdc) {
                    if (gSelection != 0xd2) goto switchD_0004bde4_caseD_1;
                }
                else if (gSelection != 0xe6) goto switchD_0004bde4_caseD_1;
            }
            iVar2 = gc_fr2dbattle4p;
        }
    }
    else if (gTheGame._120328_4_ == 0x1) {
        Pon_DVDRead_fr3d(param_1,0x0);
        iVar2 = gc_fr3ddevil1;
        if (true) {
            switch(param_1) {
            case 0x0:
                iVar2 = gc_fr3dflower1;
                break;
            case 0x3:
                iVar2 = gc_fr3dwater1;
                break;
            case 0x4:
                iVar2 = gc_fr3dfire1;
                break;
            case 0x5:
                iVar2 = gc_fr3dcloud1;
                break;
            case 0x6:
                iVar2 = gc_fr3dgreen1;
                break;
            case 0x8:
                iVar2 = gc_fr3dmoon1;
            }
        }
    }
    else if (gTheGame._120328_4_ == 0x2) {
        Pon_DVDRead_fr3d(gSelection,0x1);
        if (gSelection != 0xb4) {
            if (0xb3 < gSelection) {
                iVar2 = gc_fr3dscore2;
                if (gSelection != 0xc8) {
                    iVar2 = iVar1;
                }
                goto switchD_0004bde4_caseD_1;
            }
            if (gSelection != 0xa0) goto switchD_0004bde4_caseD_1;
        }
        iVar2 = gc_fr3dattack22;
    }
switchD_0004bde4_caseD_1:
    if (gTheGame._120328_4_ < 0x3) {
        iVar1 = iVar2 + 0x12200;
    }
    else {
        iVar1 = iVar2 + 0x12c00;
    }
    gTheGame._119336_2_ = 0x0;
    gTheGame._119338_2_ = 0x500;
    gTheGame._119340_2_ = 0x0;
    gTheGame._119342_2_ = 0x500;
    gTheGame._119344_2_ = 0x0;
    gTheGame._119346_2_ = 0x3a0;
    gTheGame._119348_2_ = 0x1c;
    gTheGame._119350_2_ = 0x3a0;
    gTheGame._119356_2_ = 0xfff4;
    gTheGame[119358] = 0x2;
    gTheGame[119359] = 0x1;
    gTheGame._119360_2_ = 0x0;
    gTheGame._119362_2_ = 0x0;
    gTheGame._119352_4_ = iVar2;
    pon_guS2DInitBg(0x2be110);
    gTheGame._119376_4_ = 0x30;
    gTheGame._119380_4_ = iVar1;
    gTheGame._119384_2_ = 0x100;
    gTheGame._119386_2_ = 0xff;
    gTheGame._119388_2_ = 0x0;
    gTheGame._119390_2_ = 0x0;
    gTheGame._119392_4_ = 0xffffffff;
    gTheGame._119396_4_ = 0x0;
    return;
}



void Draw2DFrame(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    
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
    pon_gSPObjLoadTxtr(&glistp,0x2be098);
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
    pon_gSPBgRectCopy(&glistp,0x2be070);
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
    return;
}



void Draw3DFrame(void)

{
    uint uVar1;
    uint *puVar2;
    uint *puVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    
    uVar6 = gTheGame._119352_4_;
    puVar2 = glistp;
    if (gTheGame._120328_4_ == 0x1) {
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
        puVar2[0x1] = gTheGame._119380_4_;
        puVar2 = glistp;
        iVar7 = 0x7;
        uVar5 = 0x1c;
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
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe3000c00;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xfcffffff;
        glistp = puVar3;
        puVar2[0x1] = 0xfffcf279;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar3;
        puVar2[0x1] = 0xf0a7008;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe2001e01;
        glistp = puVar3;
        puVar2[0x1] = 0x1;
        iVar8 = 0x39;
        do {
            puVar2 = glistp;
            iVar4 = iVar7 + 0x4;
            uVar1 = uVar5 & 0xfff;
            puVar3 = glistp + 0x2;
            *glistp = 0xfd500000;
            glistp = puVar3;
            uVar5 += 0x10;
            puVar2[0x1] = uVar6;
            puVar2 = glistp;
            uVar6 += 0x500;
            iVar7 += 0x4;
            puVar3 = glistp + 0x2;
            *glistp = 0xf5500000;
            glistp = puVar3;
            puVar2[0x1] = 0x7000000;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar3;
            puVar2[0x1] = 0x0;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = 0xf3000000;
            glistp = puVar3;
            puVar2[0x1] = 0x727f034;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar3;
            puVar2[0x1] = 0x0;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = 0xf5485000;
            glistp = puVar3;
            puVar2[0x1] = 0x0;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar3;
            puVar2[0x1] = 0x4fc00c;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = iVar4 * 0x4 & 0xffcU | 0xe4500000;
            glistp = puVar3;
            puVar2[0x1] = uVar1;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = 0xe1000000;
            glistp = puVar3;
            puVar2[0x1] = 0x0;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = 0xf1000000;
            glistp = puVar3;
            puVar2[0x1] = 0x4000400;
            puVar2 = glistp;
            iVar8 += -0x1;
        } while (iVar8 != 0x0);
        puVar3 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe2001e01;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
    }
    else if (gTheGame._120328_4_ == 0x2) {
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
        puVar2[0x1] = gTheGame._119380_4_;
        puVar2 = glistp;
        iVar7 = 0x7;
        uVar5 = 0x1c;
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
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe3000c00;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xfcffffff;
        glistp = puVar3;
        puVar2[0x1] = 0xfffcf279;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar3;
        puVar2[0x1] = 0xf0a7008;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe2001e01;
        glistp = puVar3;
        puVar2[0x1] = 0x1;
        iVar8 = 0x39;
        do {
            puVar2 = glistp;
            iVar4 = iVar7 + 0x4;
            uVar1 = uVar5 & 0xfff;
            puVar3 = glistp + 0x2;
            *glistp = 0xfd500000;
            glistp = puVar3;
            uVar5 += 0x10;
            puVar2[0x1] = uVar6;
            puVar2 = glistp;
            uVar6 += 0x500;
            iVar7 += 0x4;
            puVar3 = glistp + 0x2;
            *glistp = 0xf5500000;
            glistp = puVar3;
            puVar2[0x1] = 0x7000000;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar3;
            puVar2[0x1] = 0x0;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = 0xf3000000;
            glistp = puVar3;
            puVar2[0x1] = 0x727f034;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar3;
            puVar2[0x1] = 0x0;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = 0xf5485000;
            glistp = puVar3;
            puVar2[0x1] = 0x0;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar3;
            puVar2[0x1] = 0x4fc00c;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = iVar4 * 0x4 & 0xffcU | 0xe4500000;
            glistp = puVar3;
            puVar2[0x1] = uVar1;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = 0xe1000000;
            glistp = puVar3;
            puVar2[0x1] = 0x0;
            puVar2 = glistp;
            puVar3 = glistp + 0x2;
            *glistp = 0xf1000000;
            glistp = puVar3;
            puVar2[0x1] = 0x4000400;
            puVar2 = glistp;
            iVar8 += -0x1;
        } while (iVar8 != 0x0);
        puVar3 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe2001e01;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
    }
    return;
}



void InitBackground(undefined4 param_1)

{
    undefined4 uVar1;
    
    uVar1 = nextSegment;
    if (gTheGame._120328_4_ == 0x1) {
        Pon_DVDRead_bg2d_1(param_1,0x0);
        gTheGame._119512_4_ = uVar1;
        if (true) {
            switch(param_1) {
            case 0x0:
                gTheGame._119512_4_ = gc_bg2dflower1;
                break;
            case 0x3:
                gTheGame._119512_4_ = gc_bg2dwater1;
                break;
            case 0x4:
                gTheGame._119512_4_ = gc_bg2dfire1;
                break;
            case 0x5:
                gTheGame._119512_4_ = gc_bg2dcloud1;
                break;
            case 0x6:
                gTheGame._119512_4_ = gc_bg2dgreen1;
                break;
            case 0x8:
                gTheGame._119512_4_ = gc_bg2dmoon1;
                break;
            case 0xd:
                gTheGame._119512_4_ = gc_bg2ddevil1;
            }
        }
    }
    else if (gTheGame._120328_4_ == 0x2) {
        Pon_DVDRead_bg2d_2(param_1,0x1);
        gTheGame._119512_4_ = gc_bg2dflower2;
        switch(param_1) {
        case 0x0:
            gTheGame._119512_4_ = gc_bg2dflower2;
            break;
        case 0x1:
            gTheGame._119512_4_ = gc_bg2dice2;
            break;
        case 0x2:
            gTheGame._119512_4_ = gc_bg2djewel2;
            break;
        case 0x3:
            gTheGame._119512_4_ = gc_bg2dwater2;
            break;
        case 0x4:
            gTheGame._119512_4_ = gc_bg2dfire2;
            break;
        case 0x5:
            gTheGame._119512_4_ = gc_bg2dcloud2;
            break;
        case 0x6:
            gTheGame._119512_4_ = gc_bg2dgreen2;
            break;
        case 0x7:
            gTheGame._119512_4_ = gc_bg2docean2;
            break;
        case 0x8:
            gTheGame._119512_4_ = gc_bg2dmoon2;
            break;
        case 0x9:
        case 0xa:
            gTheGame._119512_4_ = gc_bg2dlion2;
            break;
        case 0xb:
            gTheGame._119512_4_ = gc_bg2ddragon2;
            break;
        case 0xc:
            gTheGame._119512_4_ = gc_bg2djoker2;
            break;
        case 0xd:
            gTheGame._119512_4_ = gc_bg2ddevil2;
            break;
        case 0xe:
            gTheGame._119512_4_ = gc_bg2dgoddess2;
            break;
        case 0xf:
            gTheGame._119512_4_ = gc_bg2dwhale2;
            break;
        case 0x10:
            gTheGame._119512_4_ = gc_bg2dwitch2;
        }
    }
    else {
        Pon_DVDRead_bg2d_1(0xd,0x1);
        gTheGame._119512_4_ = gc_bg2ddevil1;
    }
    gTheGame._119496_2_ = 0x0;
    gTheGame._119498_2_ = 0x500;
    gTheGame._119500_2_ = 0x0;
    gTheGame._119502_2_ = 0x500;
    gTheGame._119504_2_ = 0x0;
    gTheGame._119506_2_ = 0x3a0;
    gTheGame._119508_2_ = 0x1c;
    gTheGame._119510_2_ = 0x3a0;
    gTheGame._119516_2_ = 0xfff4;
    gTheGame[119518] = 0x0;
    gTheGame[119519] = 0x2;
    gTheGame._119520_2_ = 0x0;
    gTheGame._119522_2_ = 0x0;
    pon_guS2DInitBg(0x2be110);
    return;
}



void Draw2DBackground(undefined4 param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    
    puVar1 = glistp;
    if (gTheGame._120328_4_ == 0x1) {
        if (gWorld == 0x4) {
            DrawFire1HeatWave2D();
            DrawFire1Smoke2D(param_1);
        }
        else {
            if (gWorld < 0x4) {
                if (0x2 < gWorld) {
                    DrawWater1Lake2D(param_1);
                    goto LAB_0004cca0;
                }
            }
            else if (gWorld < 0x6) {
                DrawCloud1House2D(param_1);
                goto LAB_0004cca0;
            }
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
        }
    }
    else if (gTheGame._120328_4_ == 0x2) {
        if (gWorld == 0xe) {
            DrawGoddess2BG(param_1);
        }
        else if (((gWorld < 0xe) && (gWorld < 0xb)) && (0x8 < gWorld)) {
            DrawLion2BG(param_1);
        }
        else {
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
        }
    }
    else {
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
    }
LAB_0004cca0:
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
    return;
}



void Draw3DBackground(void)

{
    uint uVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    uint *puVar4;
    uint *puVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    uint uVar9;
    int iVar10;
    
    uVar9 = gTheGame._119512_4_;
    puVar2 = glistp;
    iVar10 = 0x39;
    puVar3 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar3;
    puVar2[0x1] = 0x0;
    puVar2 = glistp;
    iVar8 = 0x7;
    puVar3 = glistp + 0x2;
    *glistp = 0xe3000c00;
    glistp = puVar3;
    puVar2[0x1] = 0x0;
    puVar2 = glistp;
    puVar3 = glistp + 0x2;
    *glistp = 0xfcffffff;
    glistp = puVar3;
    uVar7 = 0x1c;
    puVar2[0x1] = 0xfffcf279;
    puVar2 = glistp;
    puVar3 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar3;
    puVar2[0x1] = 0x0;
    puVar2 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar4;
    puVar2[0x1] = 0x200000;
    do {
        puVar4 = glistp;
        iVar6 = iVar8 + 0x4;
        uVar1 = uVar7 & 0xfff;
        puVar5 = glistp + 0x2;
        *glistp = 0xfd100000;
        glistp = puVar5;
        uVar7 += 0x10;
        puVar4[0x1] = uVar9;
        puVar4 = glistp;
        uVar9 += 0xa00;
        iVar8 += 0x4;
        puVar5 = glistp + 0x2;
        *glistp = 0xf5100000;
        glistp = puVar5;
        puVar4[0x1] = 0x7000000;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xe6000000;
        glistp = puVar5;
        puVar4[0x1] = 0x0;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xf3000000;
        glistp = puVar5;
        puVar4[0x1] = 0x74ff01a;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar5;
        puVar4[0x1] = 0x0;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xf510a000;
        glistp = puVar5;
        puVar4[0x1] = 0x0;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xf2000000;
        glistp = puVar5;
        puVar4[0x1] = 0x4fc00c;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = iVar6 * 0x4 & 0xffcU | 0xe4500000;
        glistp = puVar5;
        puVar4[0x1] = uVar1;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xe1000000;
        glistp = puVar5;
        puVar4[0x1] = 0x0;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xf1000000;
        glistp = puVar5;
        puVar4[0x1] = 0x10000400;
        puVar4 = glistp;
        iVar10 += -0x1;
    } while (iVar10 != 0x0);
    puVar5 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar5;
    puVar4[0x1] = 0x0;
    puVar4 = glistp;
    puVar5 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar5;
    puVar4[0x1] = 0x0;
    return;
}



void InitShadeBox(void)

{
    gTheGame._119404_2_ = 0x100;
    gTheGame._119412_2_ = 0x100;
    gTheGame._119406_2_ = 0x0;
    gTheGame._119414_2_ = 0x0;
    gTheGame._119416_2_ = 0x8;
    gTheGame._119418_2_ = 0x0;
    gTheGame[119420] = 0x2;
    gTheGame[119421] = 0x1;
    gTheGame[119422] = 0x0;
    gTheGame[119423] = 0x0;
    gTheGame._119428_2_ = 0x100;
    gTheGame._119436_2_ = 0x100;
    gTheGame._119430_2_ = 0x0;
    gTheGame._119438_2_ = 0x0;
    gTheGame._119440_2_ = 0x8;
    gTheGame._119442_2_ = 0x0;
    gTheGame[119444] = 0x2;
    gTheGame[119445] = 0x1;
    gTheGame[119446] = 0x0;
    gTheGame[119447] = 0x0;
    gTheGame._119452_2_ = 0x100;
    gTheGame._119460_2_ = 0x100;
    gTheGame._119454_2_ = 0x0;
    gTheGame._119462_2_ = 0x0;
    gTheGame._119464_2_ = 0x8;
    gTheGame._119466_2_ = 0x0;
    gTheGame[119468] = 0x2;
    gTheGame[119469] = 0x1;
    gTheGame[119470] = 0x0;
    gTheGame[119471] = 0x0;
    gTheGame._119476_2_ = 0x100;
    gTheGame._119484_2_ = 0x100;
    gTheGame._119478_2_ = 0x0;
    gTheGame._119486_2_ = 0x0;
    gTheGame._119488_2_ = 0x8;
    gTheGame._119490_2_ = 0x0;
    gTheGame[119492] = 0x2;
    gTheGame[119493] = 0x1;
    gTheGame[119494] = 0x0;
    gTheGame[119495] = 0x0;
    if (gTheGame._120328_4_ == 0x1) {
        gTheGame._119400_2_ = 0x1c8;
        gTheGame._119402_2_ = 0x4b;
        gTheGame._119408_2_ = 0x7c;
        gTheGame._119410_2_ = 0x2a;
        gTheGame._119424_2_ = 0x80;
        gTheGame._119426_2_ = 0x6e;
        gTheGame._119432_2_ = 0x7c;
        gTheGame._119434_2_ = 0x155;
        gTheGame._119448_2_ = 0x39c;
        gTheGame._119450_2_ = 0x92;
        gTheGame._119456_2_ = 0x9c;
        gTheGame._119458_2_ = 0x4e;
    }
    else if (gTheGame._120328_4_ == 0x2) {
        gTheGame._119400_2_ = 0x60;
        gTheGame._119402_2_ = 0x4b;
        gTheGame._119408_2_ = 0x7c;
        gTheGame._119410_2_ = 0x2a;
        gTheGame._119424_2_ = 0x2f0;
        gTheGame._119426_2_ = 0x4b;
        gTheGame._119432_2_ = 0x7c;
        gTheGame._119434_2_ = 0x2a;
    }
    else {
        gTheGame._119400_2_ = 0x70;
        gTheGame._119402_2_ = 0x85;
        gTheGame._119408_2_ = 0x174;
        gTheGame._119410_2_ = 0x3d;
        gTheGame._119424_2_ = 0x180;
        gTheGame._119426_2_ = 0x85;
        gTheGame._119432_2_ = 0x174;
        gTheGame._119434_2_ = 0x3d;
        gTheGame._119448_2_ = 0x290;
        gTheGame._119450_2_ = 0x85;
        gTheGame._119456_2_ = 0x174;
        gTheGame._119458_2_ = 0x3d;
        gTheGame._119472_2_ = 0x3a0;
        gTheGame._119474_2_ = 0x85;
        gTheGame._119480_2_ = 0x174;
        gTheGame._119482_2_ = 0x3d;
    }
    return;
}



void Draw2DShadeBox(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    undefined1 *puVar3;
    int iVar4;
    int iVar5;
    
    puVar1 = glistp;
    if (gTheGame._120328_4_ == 0x1) {
        iVar4 = 0x3;
    }
    else if (gTheGame._120328_4_ == 0x2) {
        iVar4 = 0x2;
    }
    else {
        iVar4 = 0x4;
    }
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
    pon_gSPObjLoadTxtr(&glistp,&transTexture);
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar2;
    puVar1[0x1] = 0x504240;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfc119623;
    glistp = puVar2;
    puVar1[0x1] = 0xff2fffff;
    puVar1 = glistp;
    puVar3 = gTheGame;
    puVar2 = glistp + 0x2;
    *glistp = 0xfa000000;
    glistp = puVar2;
    puVar1[0x1] = (int)gBox_Level & 0xffU | 0xffffff00;
    for (iVar5 = 0x0; iVar5 < iVar4; iVar5 += 0x1) {
        pon_gSPObjRectangle(&glistp,puVar3 + 0x1d268);
        puVar3 = puVar3 + 0x18;
    }
    return;
}



void Draw3DShadeBox(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    uint *puVar3;
    uint *puVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    undefined1 *puVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    
    puVar1 = glistp;
    iVar12 = 0x0;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    if (gTheGame._120328_4_ == 0x1) {
        Draw3DExtraShadeBox();
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
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3000c00;
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
    puVar1[0x1] = 0x404240;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfc11fe23;
    glistp = puVar2;
    puVar1[0x1] = 0xfffff3f9;
    puVar1 = glistp;
    puVar3 = glistp + 0x2;
    *glistp = 0xfa000000;
    glistp = puVar3;
    puVar1[0x1] = 0x323232ff;
    for (iVar11 = 0x0; puVar3 = glistp, iVar11 < gTheGame._120328_4_; iVar11 += 0x1) {
        if (iVar11 == 0x0) {
            if (gTheGame._120328_4_ == 0x1) {
                iVar12 = 0x72;
            }
            else if (gTheGame._120328_4_ == 0x2) {
                iVar12 = 0x17;
            }
        }
        else if ((iVar11 == 0x1) && (gTheGame._120328_4_ == 0x2)) {
            iVar12 = 0xbb;
        }
        iVar13 = 0x7;
        iVar10 = 0x0;
        puVar9 = shade3d;
        do {
            puVar3 = glistp;
            iVar5 = 0xbd - iVar10;
            if (0x1f < iVar5) {
                iVar5 = 0x1f;
            }
            uVar6 = (iVar5 * 0x80 + 0x1 >> 0x1) - 0x1;
            puVar4 = glistp + 0x2;
            *glistp = 0xfd900000;
            glistp = puVar4;
            puVar3[0x1] = (uint)puVar9;
            puVar3 = glistp;
            puVar4 = glistp + 0x2;
            *glistp = 0xf5900000;
            glistp = puVar4;
            puVar3[0x1] = 0x7000000;
            puVar3 = glistp;
            puVar4 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar4;
            puVar3[0x1] = 0x0;
            puVar3 = glistp;
            puVar4 = glistp + 0x2;
            *glistp = 0xf3000000;
            glistp = puVar4;
            if (0x7fe < (int)uVar6) {
                uVar6 = 0x7ff;
            }
            puVar3[0x1] = (uVar6 & 0xfff) << 0xc | 0x7000080;
            puVar3 = glistp;
            iVar7 = iVar10 + iVar5 + 0x20;
            iVar8 = iVar10 + 0x20;
            puVar4 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar4;
            puVar3[0x1] = 0x0;
            puVar3 = glistp;
            puVar9 = puVar9 + iVar5 * 0x80;
            iVar10 += 0x1f;
            puVar4 = glistp + 0x2;
            *glistp = 0xf5882000;
            glistp = puVar4;
            puVar3[0x1] = 0x0;
            puVar3 = glistp;
            puVar4 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar4;
            puVar3[0x1] = (iVar5 + -0x1) * 0x4 & 0xffcU | 0x1fc000;
            puVar3 = glistp;
            puVar4 = glistp + 0x2;
            *glistp = (iVar12 + 0x7f) * 0x4000 | 0xe4000000U | iVar7 * 0x4 & 0xffcU;
            glistp = puVar4;
            puVar3[0x1] = iVar12 << 0xe | iVar8 * 0x4 & 0xffcU;
            puVar3 = glistp;
            puVar4 = glistp + 0x2;
            *glistp = 0xe1000000;
            glistp = puVar4;
            puVar3[0x1] = 0x0;
            puVar3 = glistp;
            puVar4 = glistp + 0x2;
            *glistp = 0xf1000000;
            glistp = puVar4;
            puVar3[0x1] = 0x4000400;
            iVar13 += -0x1;
        } while (iVar13 != 0x0);
    }
    puVar4 = glistp + 0x2;
    *glistp = 0xfc121824;
    glistp = puVar4;
    puVar3[0x1] = 0xff33ffff;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar4;
    puVar3[0x1] = 0x552008;
    return;
}



void Draw3DExtraShadeBox(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfc119623;
    glistp = puVar2;
    puVar1[0x1] = 0xff2fffff;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar2;
    puVar1[0x1] = 0x504240;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfa000000;
    glistp = puVar2;
    puVar1[0x1] = 0xffffff8c;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
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
    puVar1[0x1] = numberTable;
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
    *glistp = 0xfd900000;
    glistp = puVar2;
    puVar1[0x1] = transparent;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5900000;
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
    puVar1[0x1] = 0x71ff100;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5881000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar2;
    puVar1[0x1] = 0xfc03c;
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
    *glistp = 0xe41a80e0;
    glistp = puVar2;
    puVar1[0x1] = 0x80070;
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
    *glistp = 0xe447c250;
    glistp = puVar2;
    puVar1[0x1] = 0x39c098;
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
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfc121824;
    glistp = puVar2;
    puVar1[0x1] = 0xff33ffff;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar2;
    puVar1[0x1] = 0x552008;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfa000000;
    glistp = puVar2;
    puVar1[0x1] = 0xffffffff;
    return;
}



void Draw2DBigScreen(undefined4 param_1,undefined4 param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    
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
    pon_gSPObjLoadTxtr(&glistp,param_1);
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
    pon_gSPBgRectCopy(&glistp,param_2);
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
    *glistp = 0xe3001001;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    return;
}

