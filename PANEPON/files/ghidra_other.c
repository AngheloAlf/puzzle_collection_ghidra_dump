
void InitMiscStuff(void)

{
    undefined2 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined1 *puVar6;
    int *piVar7;
    int *piVar8;
    int iVar9;
    int iVar10;
    short sVar11;
    int local_58 [0x5];
    
    iVar5 = 0x0;
    sVar11 = 0x0;
    iVar3 = 0x0;
    iVar9 = 0x0;
    iVar10 = 0x0;
    Pon_DVDRead_misc(gTheGame._120328_4_);
    iVar2 = gc_misc;
    gTheGame._120064_4_ = 0x0;
    if (gSelection == 0xa0) goto LAB_0008ce54;
    if (gSelection < 0xa0) {
        if (gSelection != 0x82) {
            if (0x81 < gSelection) {
                if (gSelection != 0x96) {
                    if ((0x95 < gSelection) || (gSelection != 0x8c)) goto LAB_0008ce8c;
                    goto LAB_0008cdec;
                }
                goto LAB_0008ce54;
            }
            if (gSelection != 0x78) {
                if ((gSelection < 0x78) && (gSelection == 0x64)) {
                    gTheGame._120064_4_ = 0xffffffff;
                    local_58[0] = 0xdf;
                    iVar10 = 0x6c;
                    local_58[2] = 0x18;
                    iVar3 = 0x80;
                    iVar9 = 0xdd;
                    local_58[3] = 0xbc;
                    sVar11 = 0x70;
                    iVar5 = 0x3d10;
                    local_58[1] = 0xdf;
                }
                goto LAB_0008ce8c;
            }
        }
        gTheGame._120064_4_ = 0xffffffff;
        local_58[2] = 0xe6;
        iVar10 = 0x40;
        iVar3 = 0x40;
        local_58[0] = 0x55;
        iVar9 = 0x3f;
        sVar11 = 0xa8;
        local_58[3] = 0xe6;
        iVar5 = 0x1c40;
        local_58[1] = 0x55;
        goto LAB_0008ce8c;
    }
    if (gSelection == 0xbe) {
LAB_0008cdec:
        local_58[2] = 0xe6;
        iVar10 = 0x40;
        local_58[0] = 0x63;
        iVar3 = 0x40;
        iVar9 = 0x35;
        local_58[3] = 0xe6;
        sVar11 = 0xe0;
        iVar5 = 0x0;
        local_58[1] = 0x63;
    }
    else {
        if (gSelection < 0xbe) {
            if (gSelection != 0xb4) {
                if ((0xb3 < gSelection) || (gSelection != 0xaa)) goto LAB_0008ce8c;
                goto LAB_0008cdec;
            }
        }
        else if (gSelection != 0xc8) goto LAB_0008ce8c;
LAB_0008ce54:
        gTheGame._120064_4_ = 0xffffffff;
        local_58[0] = 0xdf;
        iVar10 = 0x6c;
        local_58[2] = 0x18;
        iVar3 = 0x80;
        iVar9 = 0xdd;
        local_58[3] = 0xbc;
        sVar11 = 0x70;
        iVar5 = 0x3d10;
        local_58[1] = 0xdf;
    }
LAB_0008ce8c:
    puVar6 = gTheGame;
    piVar8 = local_58 + 0x2;
    piVar7 = local_58;
    uVar1 = (undefined2)(iVar9 << 0x2);
    iVar4 = 0x0;
    do {
        *(undefined2 *)(puVar6 + 0x1d508) = 0x0;
        *(short *)(puVar6 + 0x1d50a) = (short)(iVar3 << 0x2);
        *(short *)(puVar6 + 0x1d50c) = (short)(*piVar8 << 0x2);
        *(short *)(puVar6 + 0x1d50e) = (short)(iVar10 << 0x2);
        *(undefined2 *)(puVar6 + 0x1d510) = 0x0;
        *(undefined2 *)(puVar6 + 0x1d512) = uVar1;
        *(short *)(puVar6 + 0x1d514) = (short)(*piVar7 << 0x2);
        *(undefined2 *)(puVar6 + 0x1d516) = uVar1;
        *(int *)(puVar6 + 0x1d518) = iVar2 + iVar5;
        *(undefined2 *)(puVar6 + 0x1d51c) = 0xfff4;
        puVar6[0x1d51e] = 0x2;
        puVar6[0x1d51f] = 0x1;
        *(undefined2 *)(puVar6 + 0x1d520) = 0x0;
        *(undefined2 *)(puVar6 + 0x1d522) = 0x0;
        pon_guS2DInitBg(puVar6 + 0x1d508);
        if (gTheGame._120332_4_ == 0x2) {
            *(undefined4 *)(puVar6 + 0x1d528) = 0x0;
            *(undefined2 *)(puVar6 + 0x1d524) = 0x400;
            *(undefined2 *)(puVar6 + 0x1d526) = 0x400;
        }
        iVar4 += 0x1;
        iVar5 += iVar3 * iVar9;
        puVar6 = puVar6 + 0x28;
        piVar8 = piVar8 + 0x1;
        piVar7 = piVar7 + 0x1;
    } while (iVar4 < 0x2);
    gTheGame._120232_4_ = 0x30;
    gTheGame._120236_4_ = iVar2 + iVar5;
    gTheGame._120240_2_ = 0x100;
    gTheGame._120242_2_ = sVar11 + -0x1;
    gTheGame._120244_2_ = 0x0;
    gTheGame._120246_2_ = 0x0;
    gTheGame._120248_4_ = 0xffffffff;
    gTheGame._120252_4_ = 0x0;
    gTheGame._120256_4_ = 0x30;
    gTheGame._120260_4_ = gTheGame._120236_4_;
    gTheGame._120264_2_ = 0x100;
    gTheGame._120266_2_ = sVar11 + -0x1;
    gTheGame._120268_2_ = 0x0;
    gTheGame._120270_2_ = 0x0;
    gTheGame._120272_4_ = 0xffffffff;
    gTheGame._120276_4_ = 0x0;
    if (gTheGame._120328_4_ == 0x2) {
        gTheGame._120086_2_ = 0x78;
        gTheGame._120126_2_ = 0x78;
    }
    return;
}



void pon_InitMiscStuff4p(void)

{
    undefined2 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    short sVar5;
    int iVar6;
    int iVar7;
    undefined1 *puVar8;
    int *piVar9;
    int *piVar10;
    int local_58 [0x4];
    int local_48 [0x4];
    
    sVar5 = 0x0;
    iVar4 = 0x0;
    iVar3 = 0x0;
    iVar6 = 0x0;
    Pon_DVDRead_misc(gTheGame._120328_4_);
    iVar2 = gc_misc;
    gTheGame._120064_4_ = 0x0;
    if (gSelection != 0xdc) {
        if (gSelection < 0xdc) {
            if ((gSelection != 0xd2) && ((0xd1 < gSelection || (gSelection != 0x64))))
            goto LAB_0008d158;
        }
        else if (gSelection != 0xe6) goto LAB_0008d158;
    }
    gTheGame._120064_4_ = 0xffffffff;
    local_48[0] = 0x1c;
    local_48[1] = 0x60;
    local_48[2] = 0xa4;
    local_48[3] = 0xe8;
    iVar6 = 0x40;
    iVar4 = 0x40;
    iVar3 = 0x98;
    sVar5 = 0x70;
    if (gTheGame._90112_4_ == 0x1) {
        local_58[0] = 0x5d;
    }
    else {
        local_58[0] = 0xd5;
    }
    if (gTheGame._90384_4_ == 0x1) {
        local_58[1] = 0x5d;
    }
    else {
        local_58[1] = 0xd5;
    }
    if (gTheGame._90656_4_ == 0x1) {
        local_58[2] = 0x5d;
    }
    else {
        local_58[2] = 0xd5;
    }
    if (gTheGame._90928_4_ == 0x1) {
        local_58[3] = 0x5d;
    }
    else {
        local_58[3] = 0xd5;
    }
LAB_0008d158:
    puVar8 = gTheGame;
    piVar10 = local_48;
    piVar9 = local_58;
    uVar1 = (undefined2)(iVar3 << 0x2);
    iVar7 = 0x0;
    do {
        *(undefined2 *)(puVar8 + 0x1d508) = 0x0;
        *(short *)(puVar8 + 0x1d50a) = (short)(iVar4 << 0x2);
        *(short *)(puVar8 + 0x1d50c) = (short)(*piVar10 << 0x2);
        *(short *)(puVar8 + 0x1d50e) = (short)(iVar6 << 0x2);
        *(undefined2 *)(puVar8 + 0x1d510) = 0x0;
        *(undefined2 *)(puVar8 + 0x1d512) = uVar1;
        *(short *)(puVar8 + 0x1d514) = (short)(*piVar9 << 0x2);
        *(undefined2 *)(puVar8 + 0x1d516) = uVar1;
        *(int *)(puVar8 + 0x1d518) = iVar2;
        *(undefined2 *)(puVar8 + 0x1d51c) = 0xfff4;
        puVar8[0x1d51e] = 0x2;
        puVar8[0x1d51f] = 0x1;
        *(undefined2 *)(puVar8 + 0x1d520) = 0x0;
        *(undefined2 *)(puVar8 + 0x1d522) = 0x0;
        pon_guS2DInitBg(puVar8 + 0x1d508);
        iVar7 += 0x1;
        puVar8 = puVar8 + 0x28;
        piVar10 = piVar10 + 0x1;
        piVar9 = piVar9 + 0x1;
    } while (iVar7 < 0x4);
    iVar4 *= iVar3;
    gTheGame._120232_4_ = 0x30;
    gTheGame._120242_2_ = sVar5 + -0x1;
    gTheGame._120236_4_ = iVar2 + iVar4;
    gTheGame._120240_2_ = 0x100;
    gTheGame._120244_2_ = 0x0;
    gTheGame._120246_2_ = 0x0;
    gTheGame._120248_4_ = 0xffffffff;
    gTheGame._120252_4_ = 0x0;
    gTheGame._120256_4_ = 0x30;
    gTheGame._120260_4_ = iVar2 + iVar4 + 0x200;
    gTheGame._120264_2_ = 0x100;
    gTheGame._120266_2_ = gTheGame._120242_2_;
    gTheGame._120268_2_ = 0x0;
    gTheGame._120270_2_ = 0x0;
    gTheGame._120272_4_ = 0xffffffff;
    gTheGame._120276_4_ = 0x0;
    gTheGame._120280_4_ = 0x30;
    gTheGame._120284_4_ = iVar2 + iVar4 + 0x400;
    gTheGame._120288_2_ = 0x100;
    gTheGame._120290_2_ = gTheGame._120242_2_;
    gTheGame._120292_2_ = 0x0;
    gTheGame._120294_2_ = 0x0;
    gTheGame._120296_4_ = 0xffffffff;
    gTheGame._120300_4_ = 0x0;
    gTheGame._120304_4_ = 0x30;
    gTheGame._120308_4_ = iVar2 + iVar4 + 0x600;
    gTheGame._120312_2_ = 0x100;
    gTheGame._120314_2_ = gTheGame._120242_2_;
    gTheGame._120316_2_ = 0x0;
    gTheGame._120318_2_ = 0x0;
    gTheGame._120320_4_ = 0xffffffff;
    gTheGame._120324_4_ = 0x0;
    gTheGame._120086_2_ = 0x78;
    gTheGame._120126_2_ = 0x78;
    gTheGame._120166_2_ = 0x78;
    gTheGame._120206_2_ = 0x78;
    return;
}



void UpdateMiscStuff(int param_1,int param_2,int param_3)

{
    int iVar1;
    uint uVar2;
    
    if (gSelection != 0xaa) {
        if (gSelection < 0xaa) {
            if (gSelection == 0x8c) goto LAB_0008d3a8;
            if (gSelection < 0x8c) {
                if (gSelection != 0x78) {
                    if (gSelection < 0x78) {
                        if (gSelection != 0x64) {
                            return;
                        }
                        goto LAB_0008d4f0;
                    }
                    if (gSelection != 0x82) {
                        return;
                    }
                }
                if (gTheGame._120064_4_ < 0x2) {
                    gTheGame._120064_4_ = -0x1;
                }
                else {
                    gTheGame._120064_4_ += -0x1;
                }
                gTheGame._117196_2_ = 0x2e0;
                uVar2 = *(uint *)(param_2 + 0x2c);
                if (uVar2 == (((int)uVar2 >> 0x1) + (uint)((int)uVar2 < 0x0 && (uVar2 & 0x1) != 0x0)
                             ) * 0x2) {
                    gTheGame._117210_2_ = 0x0;
                    return;
                }
                gTheGame._117210_2_ = 0x3;
                return;
            }
            if (gSelection != 0xa0) {
                if (0x9f < gSelection) {
                    return;
                }
                if (gSelection != 0x96) {
                    return;
                }
            }
        }
        else if (gSelection != 0xd2) {
            if (gSelection < 0xd2) {
                if (gSelection == 0xbe) goto LAB_0008d3a8;
                if (gSelection < 0xbe) {
                    if (gSelection != 0xb4) {
                        return;
                    }
                }
                else if (gSelection != 0xc8) {
                    return;
                }
            }
            else if (gSelection != 0xe6) {
                if (0xe5 < gSelection) {
                    return;
                }
                if (gSelection != 0xdc) {
                    return;
                }
            }
        }
LAB_0008d4f0:
        gTheGame._120064_4_ = 0xffffffff;
        *(short *)(gTheGame + param_3 * 0x28 + 0x1d514) = (short)(*(int *)(param_1 + 0x4afc) << 0x2)
        ;
        return;
    }
LAB_0008d3a8:
    if ((gGameStatus & 0x20) != 0x0) {
        *(undefined4 *)(param_2 + 0xc) = 0x0;
        return;
    }
    if (0x0 < *(int *)(param_2 + 0xc)) {
        if (gTheGame._120064_4_ == 0x0) {
            gTheGame._120064_4_ = 0x1;
        }
        iVar1 = *(int *)(param_2 + 0xc);
        if (iVar1 < 0x259) {
            if (iVar1 < 0x169) {
                if (iVar1 < 0x79) {
                    iVar1 = 0x5;
                }
                else {
                    iVar1 = 0xf;
                }
            }
            else {
                iVar1 = 0x1e;
            }
        }
        else {
            iVar1 = 0x32;
        }
        if (gCounter != (gCounter / iVar1) * iVar1) {
            return;
        }
        if (gTheGame._120064_4_ == 0x1) {
            gTheGame._120064_4_ = 0x2;
            return;
        }
        gTheGame._120064_4_ = 0x1;
        return;
    }
    gTheGame._120064_4_ = 0x0;
    return;
}



void Draw2DMiscStuff(int param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    
    puVar1 = glistp;
    if (gTheGame._120064_4_ != 0x0) {
        puVar2 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe3000a01;
        glistp = puVar2;
        puVar1[0x1] = 0x200000;
        for (iVar3 = 0x0; puVar1 = glistp, iVar3 < gTheGame._120328_4_; iVar3 += 0x1) {
            if (gSelection < 0x83) {
                if (gTheGame._120064_4_ < 0x2) {
                    iVar3 = 0x0;
                }
                else {
                    iVar3 = 0x1;
                }
            }
            else if (gTheGame._120328_4_ == 0x1) {
                iVar3 = gTheGame._120064_4_ + -0x1;
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
            pon_gSPObjLoadTxtr(&glistp,iVar3 * 0x18 + 0x2be3f0);
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            pon_gSPBgRectCopy(&glistp,iVar3 * 0x28 + 0x2be350);
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
        *glistp = 0xe3000a01;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        if ((gSelection < 0x83) && (0x383 < gMain)) {
            puVar2 = glistp + 0x2;
            *glistp = 0xe3001001;
            glistp = puVar2;
            puVar1[0x1] = 0x8000;
            pon_gSPObjLoadTxtr(&glistp,&otherLUT);
            if (*(int *)(param_1 + 0x2c0d4) < 0x2) {
                pon_gSPObjLoadTxtr(&glistp,&otherTexture9);
            }
            else if (*(int *)(param_1 + 0x2c0d4) < 0x4) {
                pon_gSPObjLoadTxtr(&glistp,&otherTexture10);
            }
            else {
                pon_gSPObjLoadTxtr(&glistp,&otherTexture11);
            }
            pon_gSPObjRectangle(&glistp,param_1 + 0x31328);
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
    }
    return;
}



void Draw3DMiscStuff(int param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    uint uVar4;
    
    puVar1 = glistp;
    if (0x1 < gTheGame._120328_4_) {
        return;
    }
    if (gTheGame._120064_4_ == 0x0) {
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
        puVar1 = glistp;
        if (gSelection == 0xaa) {
            if (gTheGame._19200_4_ != 0x5) {
                puVar2 = glistp + 0x2;
                *glistp = 0xfd500000;
                glistp = puVar2;
                puVar1[0x1] = w_template1;
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
                *glistp = 0xf54810c0;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf2000000;
                glistp = puVar2;
                puVar1[0x1] = 0xfc01c;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe44a0200;
                glistp = puVar2;
                puVar1[0x1] = 0x3a01e0;
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
        else {
            if (gSelection < 0xaa) {
                if (gSelection != 0x8c) goto LAB_0008e51c;
            }
            else if (gSelection != 0xbe) goto LAB_0008e51c;
            puVar2 = glistp + 0x2;
            *glistp = 0xfd500000;
            glistp = puVar2;
            puVar1[0x1] = w_template1;
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
            *glistp = 0xf54810c0;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar2;
            puVar1[0x1] = 0xfc01c;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe44a0200;
            glistp = puVar2;
            puVar1[0x1] = 0x3a01e0;
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
            if (gTheGame._19200_4_ == 0x2) {
                puVar2 = glistp + 0x2;
                *glistp = 0xfd500000;
                glistp = puVar2;
                puVar1[0x1] = &w_level2;
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
                *glistp = 0xf5481000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
            }
            else if (gTheGame._19200_4_ < 0x2) {
                if (gTheGame._19200_4_ == 0x0) {
                    puVar2 = glistp + 0x2;
                    *glistp = 0xfd500000;
                    glistp = puVar2;
                    puVar1[0x1] = &w_level1;
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
                    *glistp = 0xf5481000;
                    glistp = puVar2;
                    puVar1[0x1] = 0x5000000;
                }
                else if (-0x1 < gTheGame._19200_4_) {
                    puVar2 = glistp + 0x2;
                    *glistp = 0xfd500000;
                    glistp = puVar2;
                    puVar1[0x1] = &w_level1;
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
                    *glistp = 0xf5481080;
                    glistp = puVar2;
                    puVar1[0x1] = 0x0;
                }
            }
            else if (gTheGame._19200_4_ < 0x4) {
                puVar2 = glistp + 0x2;
                *glistp = 0xfd500000;
                glistp = puVar2;
                puVar1[0x1] = &w_level2;
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
                *glistp = 0xf5481080;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
            }
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar2;
            puVar1[0x1] = 0xfc03c;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe44a4240;
            glistp = puVar2;
            puVar1[0x1] = 0x3a4200;
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
        puVar1[0x1] = gTheGame._120236_4_;
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
        if (gSelection < 0x83) {
            if (gTheGame._120064_4_ < 0x2) {
                iVar3 = 0x0;
            }
            else {
                iVar3 = 0x1;
            }
        }
        else {
            iVar3 = gTheGame._120064_4_ + -0x1;
        }
        *(undefined2 *)(gTheGame + iVar3 * 0x28 + 0x1d50a) = 0x104;
        pon_guS2DEmuBgRect1Cyc(&glistp,iVar3 * 0x28 + 0x2be350);
        puVar1 = glistp;
        if ((gSelection < 0x83) && (0x383 < gMain)) {
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
            puVar1 = glistp;
            if (*(int *)(param_1 + 0x2c0d4) < 0x2) {
                puVar2 = glistp + 0x2;
                *glistp = 0xfd500000;
                glistp = puVar2;
                puVar1[0x1] = w_template5;
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
                puVar1[0x1] = 0x723f156;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf5480c00;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf2000000;
                glistp = puVar2;
                puVar1[0x1] = 0xbc05c;
            }
            else if (*(int *)(param_1 + 0x2c0d4) < 0x4) {
                puVar2 = glistp + 0x2;
                *glistp = 0xfd500000;
                glistp = puVar2;
                puVar1[0x1] = w_template6;
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
                puVar1[0x1] = 0x723f156;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf5480c00;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf2000000;
                glistp = puVar2;
                puVar1[0x1] = 0xbc05c;
            }
            else {
                puVar2 = glistp + 0x2;
                *glistp = 0xfd500000;
                glistp = puVar2;
                puVar1[0x1] = w_template7;
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
                puVar1[0x1] = 0x723f156;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf5480c00;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf2000000;
                glistp = puVar2;
                puVar1[0x1] = 0xbc05c;
            }
            puVar1 = glistp;
            uVar4 = *(uint *)(param_1 + 0x2c0d4);
            if (uVar4 == (((int)uVar4 >> 0x1) + (uint)((int)uVar4 < 0x0 && (uVar4 & 0x1) != 0x0)) *
                         0x2) {
                puVar2 = glistp + 0x2;
                *glistp = 0xf5480c00;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
            }
            else {
                puVar2 = glistp + 0x2;
                *glistp = 0xf5480c03;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
            }
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar2;
            puVar1[0x1] = 0x5c05c;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe44381c0;
            glistp = puVar2;
            puVar1[0x1] = 0x3d8160;
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
LAB_0008e51c:
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
    return;
}

