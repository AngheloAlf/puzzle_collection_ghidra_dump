
void GameOverSmoke(int param_1)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    
    iVar3 = param_1;
    for (iVar4 = 0x0; iVar4 < gMax; iVar4 += 0x1) {
        if (*(int *)(param_1 + 0x2218) != 0x0) {
            *(int *)(iVar3 + 0x35b4) = *(int *)(iVar3 + 0x35b4) + -0x1;
            iVar1 = *(int *)(iVar3 + 0x35b4);
            if (iVar1 < -0x4) {
                if (iVar1 < -0xa) {
                    if (iVar1 < -0xf) {
                        *(undefined2 *)(iVar3 + 0x35da) = 0x0;
                    }
                    else {
                        *(undefined2 *)(iVar3 + 0x35da) = 0x2;
                    }
                }
                else {
                    *(undefined2 *)(iVar3 + 0x35da) = 0x4;
                }
            }
            else {
                *(undefined2 *)(iVar3 + 0x35da) = 0x6;
            }
            uVar2 = *(uint *)(iVar3 + 0x35b4);
            if (uVar2 == (((int)uVar2 >> 0x1) + (uint)((int)uVar2 < 0x0 && (uVar2 & 0x1) != 0x0)) *
                         0x2) {
                *(short *)(iVar3 + 0x35d0) =
                     (short)(((int)*(short *)(iVar3 + 0x35d0) >> 0x2) + -0x1) * 0x4;
            }
        }
        param_1 += 0x2c;
        iVar3 += 0x30;
    }
    return;
}



void DeadBlocksShakeOne2D(int param_1)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iVar3 = *(int *)(param_1 + 0x4adc);
    if (iVar3 < 0x0) {
        return;
    }
    cVar1 = dead1Shake[iVar3];
    *(int *)(param_1 + 0x4adc) = iVar3 + -0x1;
    iVar2 = (int)cVar1;
    iVar4 = 0x6;
    iVar3 = param_1;
    do {
        *(short *)(iVar3 + 0x3f18) = (short)(((int)*(short *)(iVar3 + 0x3f18) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3f30) = (short)(((int)*(short *)(iVar3 + 0x3f30) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3f48) = (short)(((int)*(short *)(iVar3 + 0x3f48) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3f60) = (short)(((int)*(short *)(iVar3 + 0x3f60) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3f78) = (short)(((int)*(short *)(iVar3 + 0x3f78) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3f90) = (short)(((int)*(short *)(iVar3 + 0x3f90) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3fa8) = (short)(((int)*(short *)(iVar3 + 0x3fa8) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3fc0) = (short)(((int)*(short *)(iVar3 + 0x3fc0) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3fd8) = (short)(((int)*(short *)(iVar3 + 0x3fd8) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3ff0) = (short)(((int)*(short *)(iVar3 + 0x3ff0) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x4008) = (short)(((int)*(short *)(iVar3 + 0x4008) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x4020) = (short)(((int)*(short *)(iVar3 + 0x4020) >> 0x2) - iVar2) * 0x4
        ;
        iVar3 += 0x120;
        iVar4 += -0x1;
    } while (iVar4 != 0x0);
    if (gSelection < 0x83) {
        return;
    }
    *(short *)(param_1 + 0x45d8) = (short)(((int)*(short *)(param_1 + 0x45d8) >> 0x2) - iVar2) * 0x4
    ;
    *(short *)(param_1 + 0x45f0) = (short)(((int)*(short *)(param_1 + 0x45f0) >> 0x2) - iVar2) * 0x4
    ;
    *(short *)(param_1 + 0x4608) = (short)(((int)*(short *)(param_1 + 0x4608) >> 0x2) - iVar2) * 0x4
    ;
    *(short *)(param_1 + 0x4620) = (short)(((int)*(short *)(param_1 + 0x4620) >> 0x2) - iVar2) * 0x4
    ;
    *(short *)(param_1 + 0x4638) = (short)(((int)*(short *)(param_1 + 0x4638) >> 0x2) - iVar2) * 0x4
    ;
    *(short *)(param_1 + 0x4650) = (short)(((int)*(short *)(param_1 + 0x4650) >> 0x2) - iVar2) * 0x4
    ;
    *(short *)(param_1 + 0x4668) = (short)(((int)*(short *)(param_1 + 0x4668) >> 0x2) - iVar2) * 0x4
    ;
    *(short *)(param_1 + 0x4680) = (short)(((int)*(short *)(param_1 + 0x4680) >> 0x2) - iVar2) * 0x4
    ;
    return;
}



void AllDeadBlocks(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    iVar2 = 0x0;
    if (*(int *)(param_1 + 0x4acc) == 0x0) {
        iVar5 = 0x6;
        iVar3 = param_1;
        do {
            iVar1 = iVar3;
            for (iVar4 = 0x0; iVar4 < gMax; iVar4 += 0x1) {
                if (*(int *)(iVar1 + 0x10) != 0x0) {
                    iVar2 = *(int *)(iVar1 + 0x24);
                    if (iVar2 < 0xd) {
                        *(undefined4 *)(iVar1 + 0x24) = 0xd;
                    }
                    else if (iVar2 == 0xd) {
                        *(undefined4 *)(iVar1 + 0x24) = 0xe;
                    }
                    else if (iVar2 == 0xe) {
                        *(undefined4 *)(iVar1 + 0x24) = 0xf;
                    }
                    else if (iVar2 == 0xf) {
                        *(undefined4 *)(iVar1 + 0x24) = 0x10;
                    }
                }
                iVar2 = iVar1;
                iVar1 = iVar1 + 0x2c;
            }
            iVar1 = iVar3 + 0x318;
            for (iVar4 = 0x0; iVar4 < gMax; iVar4 += 0x1) {
                if (*(int *)(iVar1 + 0x10) != 0x0) {
                    iVar2 = *(int *)(iVar1 + 0x24);
                    if (iVar2 < 0xd) {
                        *(undefined4 *)(iVar1 + 0x24) = 0xd;
                    }
                    else if (iVar2 == 0xd) {
                        *(undefined4 *)(iVar1 + 0x24) = 0xe;
                    }
                    else if (iVar2 == 0xe) {
                        *(undefined4 *)(iVar1 + 0x24) = 0xf;
                    }
                    else if (iVar2 == 0xf) {
                        *(undefined4 *)(iVar1 + 0x24) = 0x10;
                    }
                }
                iVar2 = iVar1;
                iVar1 = iVar1 + 0x2c;
            }
            iVar3 += 0x630;
            iVar5 += -0x1;
        } while (iVar5 != 0x0);
        iVar3 = param_1;
        for (iVar5 = 0x0; iVar5 < gMax; iVar5 += 0x1) {
            iVar2 = iVar3 + 0x476c;
            if (*(int *)(iVar3 + 0x4790) < 0xd) {
                *(undefined4 *)(iVar3 + 0x4790) = 0xd;
            }
            else {
                iVar1 = *(int *)(iVar3 + 0x4790);
                if (iVar1 == 0xd) {
                    *(undefined4 *)(iVar3 + 0x4790) = 0xe;
                }
                else if (iVar1 == 0xe) {
                    *(undefined4 *)(iVar3 + 0x4790) = 0xf;
                }
                else if (iVar1 == 0xf) {
                    *(undefined4 *)(iVar3 + 0x4790) = 0x10;
                }
            }
            iVar3 += 0x2c;
        }
        if (*(int *)(iVar2 + 0x24) == 0xd) {
            *(undefined4 *)(param_1 + 0x4acc) = 0x28;
            return;
        }
        *(undefined4 *)(param_1 + 0x4acc) = 0x5;
        return;
    }
    *(int *)(param_1 + 0x4acc) = *(int *)(param_1 + 0x4acc) + -0x1;
    if (*(int *)(param_1 + 0x4790) != 0x10) {
        return;
    }
    if (*(int *)(param_1 + 0x4acc) != 0x0) {
        return;
    }
    gMain = 0x390;
    return;
}



void AllDeadFaces(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    
    iVar5 = 0x0;
    if (*(int *)(param_1 + 0x4acc) == 0x0) {
        iVar6 = 0x3;
        iVar3 = param_1;
        do {
            iVar1 = iVar3;
            for (iVar4 = 0x0; iVar2 = iVar1, iVar4 < gMax; iVar4 += 0x1) {
                if ((*(int *)(iVar2 + 0x10) != 0x0) && (*(int *)(iVar2 + 0x24) < 0xd)) {
                    *(undefined4 *)(iVar2 + 0x24) = 0x8;
                }
                iVar1 = iVar2 + 0x2c;
                iVar5 = iVar2;
            }
            iVar1 = iVar3 + 0x318;
            for (iVar4 = 0x0; iVar2 = iVar1, iVar4 < gMax; iVar4 += 0x1) {
                if ((*(int *)(iVar2 + 0x10) != 0x0) && (*(int *)(iVar2 + 0x24) < 0xd)) {
                    *(undefined4 *)(iVar2 + 0x24) = 0x8;
                }
                iVar1 = iVar2 + 0x2c;
                iVar5 = iVar2;
            }
            iVar1 = iVar3 + 0x630;
            for (iVar4 = 0x0; iVar2 = iVar1, iVar4 < gMax; iVar4 += 0x1) {
                if ((*(int *)(iVar2 + 0x10) != 0x0) && (*(int *)(iVar2 + 0x24) < 0xd)) {
                    *(undefined4 *)(iVar2 + 0x24) = 0x8;
                }
                iVar1 = iVar2 + 0x2c;
                iVar5 = iVar2;
            }
            iVar1 = iVar3 + 0x948;
            for (iVar4 = 0x0; iVar2 = iVar1, iVar4 < gMax; iVar4 += 0x1) {
                if ((*(int *)(iVar2 + 0x10) != 0x0) && (*(int *)(iVar2 + 0x24) < 0xd)) {
                    *(undefined4 *)(iVar2 + 0x24) = 0x8;
                }
                iVar1 = iVar2 + 0x2c;
                iVar5 = iVar2;
            }
            iVar3 += 0xc60;
            iVar6 += -0x1;
        } while (iVar6 != 0x0);
        iVar3 = param_1;
        for (iVar6 = 0x0; iVar6 < gMax; iVar6 += 0x1) {
            iVar5 = iVar3 + 0x476c;
            if (*(int *)(iVar3 + 0x4790) < 0xd) {
                *(undefined4 *)(iVar3 + 0x4790) = 0x8;
            }
            iVar3 += 0x2c;
        }
        if (*(int *)(iVar5 + 0x24) != 0x8) {
            return;
        }
        *(undefined4 *)(param_1 + 0x4acc) = 0x3c;
        return;
    }
    *(int *)(param_1 + 0x4acc) = *(int *)(param_1 + 0x4acc) + -0x1;
    if (*(int *)(param_1 + 0x4790) != 0x8) {
        return;
    }
    if (*(int *)(param_1 + 0x4acc) != 0x0) {
        return;
    }
    gMain = 0x390;
    return;
}



void KillRow2D(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iVar1 = 0x0;
    iVar2 = *(int *)(param_1 + 0x4acc) + -0x1;
    *(int *)(param_1 + 0x4acc) = iVar2;
    if (iVar2 != 0x0) {
        return;
    }
    iVar4 = 0xc;
    *(short *)(param_1 + 0x45dc) =
         (short)(((int)(uint)*(ushort *)(param_1 + 0x45dc) >> 0x5) + -0x1) * 0x20;
    *(short *)(param_1 + 0x45f4) =
         (short)(((int)(uint)*(ushort *)(param_1 + 0x45f4) >> 0x5) + -0x1) * 0x20;
    *(short *)(param_1 + 0x460c) =
         (short)(((int)(uint)*(ushort *)(param_1 + 0x460c) >> 0x5) + -0x1) * 0x20;
    *(short *)(param_1 + 0x4624) =
         (short)(((int)(uint)*(ushort *)(param_1 + 0x4624) >> 0x5) + -0x1) * 0x20;
    *(short *)(param_1 + 0x463c) =
         (short)(((int)(uint)*(ushort *)(param_1 + 0x463c) >> 0x5) + -0x1) * 0x20;
    *(short *)(param_1 + 0x4654) =
         (short)(((int)(uint)*(ushort *)(param_1 + 0x4654) >> 0x5) + -0x1) * 0x20;
    iVar2 = param_1;
    do {
        iVar3 = (int)(uint)*(ushort *)(iVar2 + 0x3f1c) >> 0x5;
        *(short *)(iVar2 + 0x3f1c) = (short)(iVar3 + -0x1) * 0x20;
        if (iVar3 == 0x1) {
            iVar1 = -0x1;
        }
        iVar3 = (int)(uint)*(ushort *)(iVar2 + 0x3f34) >> 0x5;
        *(short *)(iVar2 + 0x3f34) = (short)(iVar3 + -0x1) * 0x20;
        if (iVar3 == 0x1) {
            iVar1 = -0x1;
        }
        iVar3 = (int)(uint)*(ushort *)(iVar2 + 0x3f4c) >> 0x5;
        *(short *)(iVar2 + 0x3f4c) = (short)(iVar3 + -0x1) * 0x20;
        if (iVar3 == 0x1) {
            iVar1 = -0x1;
        }
        iVar3 = (int)(uint)*(ushort *)(iVar2 + 0x3f64) >> 0x5;
        *(short *)(iVar2 + 0x3f64) = (short)(iVar3 + -0x1) * 0x20;
        if (iVar3 == 0x1) {
            iVar1 = -0x1;
        }
        iVar3 = (int)(uint)*(ushort *)(iVar2 + 0x3f7c) >> 0x5;
        *(short *)(iVar2 + 0x3f7c) = (short)(iVar3 + -0x1) * 0x20;
        if (iVar3 == 0x1) {
            iVar1 = -0x1;
        }
        iVar3 = (int)(uint)*(ushort *)(iVar2 + 0x3f94) >> 0x5;
        *(short *)(iVar2 + 0x3f94) = (short)(iVar3 + -0x1) * 0x20;
        if (iVar3 == 0x1) {
            iVar1 = -0x1;
        }
        iVar2 += 0x90;
        iVar4 += -0x1;
    } while (iVar4 != 0x0);
    *(short *)(param_1 + 0x466c) =
         (short)(((int)(uint)*(ushort *)(param_1 + 0x466c) >> 0x5) + -0x1) * 0x20;
    *(short *)(param_1 + 0x4684) =
         (short)(((int)(uint)*(ushort *)(param_1 + 0x4684) >> 0x5) + -0x1) * 0x20;
    if (iVar1 != 0x0) {
        gMain = 0x391;
        return;
    }
    *(undefined4 *)(param_1 + 0x4acc) = 0x1;
    return;
}



void KillRow3D(void *param_1)

{
    int extraout_r4;
    int iVar1;
    int iVar2;
    void *pvVar3;
    void *__src;
    void *__dest;
    int iVar4;
    
    iVar4 = -0x1;
    *(int *)((int)param_1 + 0x4acc) = *(int *)((int)param_1 + 0x4acc) + 0x1;
    if ((0x1d < *(uint *)((int)param_1 + 0x4acc)) &&
       ((*(uint *)((int)param_1 + 0x4acc) & 0x1) != 0x1)) {
        iVar2 = 0x0;
        pvVar3 = param_1;
        do {
            __src = (void *)((int)param_1 + (iVar2 + 0x1) * 0x318);
            iVar1 = 0x0;
            __dest = pvVar3;
            do {
                bcopy(__src,__dest,0x2c);
                InitTetrisState(__src);
                iVar1 += 0x1;
                __dest = (void *)((int)__dest + 0x2c);
                __src = (void *)((int)__src + 0x2c);
            } while (iVar1 < 0x12);
            iVar2 += 0x1;
            pvVar3 = (void *)((int)pvVar3 + 0x318);
        } while (iVar2 < 0xb);
        iVar1 = 0x2;
        iVar2 = 0x0;
        pvVar3 = param_1;
        do {
            if (*(int *)((int)pvVar3 + 0x10) != 0x0) {
                iVar4 = 0x0;
            }
            if (*(int *)((int)pvVar3 + 0x3c) != 0x0) {
                iVar4 = 0x0;
            }
            if (*(int *)((int)pvVar3 + 0x68) != 0x0) {
                iVar4 = 0x0;
            }
            if (*(int *)((int)pvVar3 + 0x94) != 0x0) {
                iVar4 = 0x0;
            }
            if (*(int *)((int)pvVar3 + 0xc0) != 0x0) {
                iVar4 = 0x0;
            }
            if (*(int *)((int)pvVar3 + 0xec) != 0x0) {
                iVar4 = 0x0;
            }
            if (*(int *)((int)pvVar3 + 0x118) != 0x0) {
                iVar4 = 0x0;
            }
            if (*(int *)((int)pvVar3 + 0x144) != 0x0) {
                iVar4 = 0x0;
            }
            if (*(int *)((int)pvVar3 + 0x170) != 0x0) {
                iVar4 = 0x0;
            }
            pvVar3 = (void *)((int)pvVar3 + 0x18c);
            iVar2 += 0x8;
            iVar1 += -0x1;
        } while (iVar1 != 0x0);
        if (iVar4 != 0x0) {
            iVar4 = 0x0;
            pvVar3 = param_1;
            do {
                InitTetrisState((int)pvVar3 + 0x476c,iVar2);
                iVar4 += 0x1;
                pvVar3 = (void *)((int)pvVar3 + 0x2c);
                iVar2 = extraout_r4;
            } while (iVar4 < 0x12);
            gMain = 0x391;
            *(undefined4 *)((int)param_1 + 0x4acc) = 0x14;
        }
    }
    return;
}



void GameOverSign(int param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    
    iVar2 = 0x0;
    iVar1 = *(int *)(param_1 + 0x4adc);
    if (iVar1 < 0x0) {
        gMain = 0x393;
        return;
    }
    if (gSelection == 0x8c) {
        iVar2 = (int)(char)gameoverShake[iVar1];
        if (iVar1 == 0x50) {
            PlaySE(SFX_INIT_TABLE,0x41);
        }
        goto LAB_00063b24;
    }
    if (gSelection < 0x8c) {
        if ((gSelection != 0x82) && ((0x81 < gSelection || (gSelection != 0x78))))
        goto LAB_00063b24;
    }
    else {
        if (gSelection == 0xbe) {
            if (*param_2 == 0x7) {
                gTheGame._119572_2_ = 0x12c;
                *(undefined4 *)(param_1 + 0x4adc) = 0x0;
                gMain = 0x393;
                return;
            }
            iVar2 = (int)(char)gameoverShake[iVar1];
            if (iVar1 == 0x50) {
                PlaySE(SFX_INIT_TABLE,0x41);
            }
            goto LAB_00063b24;
        }
        if ((0xbd < gSelection) || (gSelection != 0xaa)) goto LAB_00063b24;
    }
    if (*param_2 == 0x7) {
        iVar2 = (int)(char)clearroundShake[iVar1];
        if (iVar1 == 0x48) {
            if ((gSelection == 0xaa) && (gTheGame._120368_4_ == 0x5)) {
                PlaySE(SFX_INIT_TABLE,0x144);
            }
            else if ((gSelection == 0x82) &&
                    (iVar1 = CheckPlayerPuzzleRound(gTheGame._120360_4_,gTheGame._120364_4_),
                    iVar1 != 0x0)) {
                PlaySE(SFX_INIT_TABLE,0x144);
            }
            else {
                PlaySE(SFX_INIT_TABLE,0x41);
            }
        }
    }
    else {
        iVar2 = (int)(char)gameoverShake[iVar1];
        if (iVar1 == 0x50) {
            PlaySE(SFX_INIT_TABLE,0x41);
        }
    }
LAB_00063b24:
    *(int *)(param_1 + 0x4adc) = *(int *)(param_1 + 0x4adc) + -0x1;
    gTheGame._119892_2_ = (short)(((int)gTheGame._119572_2_ >> 0x2) - iVar2) * 0x4;
    gTheGame._119572_2_ = gTheGame._119892_2_;
    return;
}



undefined4 EndingExplosion(int param_1)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;
    
    iVar3 = 0x0;
    local_2c = 0xb000702;
    local_28 = 0x1000904;
    local_24 = 0x3020504;
    local_20 = 0x7000b04;
    local_1c = 0x5020104;
    local_18 = 0x9020300;
    local_14 = 0xb020704;
    local_10 = 0x9000102;
    local_c = 0x5000304;
    if ((gSelection == 0x82) && (iVar3 = *(int *)(param_1 + 0x4b04), 0xf < iVar3)) {
        if (iVar3 < 0x1f) {
            iVar3 += -0xf;
        }
        else {
            iVar3 += -0x1e;
        }
    }
    if (gWhatever == 0x3) {
        if (gSelection == 0xaa) {
            if (*(int *)(param_1 + 0x4b08) < 0x3) {
                PlaySE(SFX_INIT_TABLE,0xcc);
            }
            else if (*(int *)(param_1 + 0x4b08) < 0x5) {
                PlaySE(SFX_INIT_TABLE,0xcd);
            }
            else {
                PlaySE(SFX_INIT_TABLE,0xce);
            }
        }
        else if (gSelection == 0x82) {
            if (iVar3 < 0x6) {
                PlaySE(SFX_INIT_TABLE,0xcc);
            }
            else if (iVar3 < 0xb) {
                PlaySE(SFX_INIT_TABLE,0xcd);
            }
            else {
                PlaySE(SFX_INIT_TABLE,0xce);
            }
        }
        else {
            PlaySE(SFX_INIT_TABLE,0xc9);
        }
    }
    if ((gWhatever < 0x6d) && (iVar2 = gWhatever / 0x3, gWhatever == iVar2 * 0x3)) {
        if (gWhatever < 0x37) {
            iVar2 += -0x1;
        }
        else {
            iVar2 += -0x13;
        }
        if (gTheGame._120332_4_ == 0x1) {
            StartExplosion(param_1,0x0,*(undefined *)((int)&local_2c + iVar2 * 0x2),
                           *(undefined *)((int)&local_2c + iVar2 * 0x2 + 0x1),0x1f);
        }
        else {
            StartExplosion(param_1,0x0,*(undefined *)((int)&local_2c + iVar2 * 0x2),
                           *(byte *)((int)&local_2c + iVar2 * 0x2 + 0x1) + 0x2,0x1f);
        }
    }
    if (gSelection == 0xaa) {
        if (*(int *)(param_1 + 0x4b08) < 0x3) {
            iVar3 = 0x82;
        }
        else if (*(int *)(param_1 + 0x4b08) < 0x5) {
            iVar3 = 0xaa;
        }
        else {
            iVar3 = 0xcd;
        }
    }
    else if (gSelection == 0x82) {
        if (iVar3 < 0x6) {
            iVar3 = 0x82;
        }
        else if (iVar3 < 0xb) {
            iVar3 = 0xaa;
        }
        else {
            iVar3 = 0xcd;
        }
    }
    else {
        iVar3 = 0x82;
    }
    if (iVar3 < gWhatever) {
        uVar1 = 0x0;
    }
    else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}



void DeadBlocksShakeTwo2D(int param_1,int param_2)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iVar3 = *(int *)(param_1 + 0x4adc);
    if (iVar3 < 0x0) {
        return;
    }
    cVar1 = dead2Shake[iVar3];
    *(int *)(param_1 + 0x4adc) = iVar3 + -0x1;
    iVar2 = (int)cVar1;
    iVar4 = 0x6;
    iVar3 = param_1;
    do {
        *(short *)(iVar3 + 0x3f18) = (short)(((int)*(short *)(iVar3 + 0x3f18) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3f30) = (short)(((int)*(short *)(iVar3 + 0x3f30) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3f48) = (short)(((int)*(short *)(iVar3 + 0x3f48) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3f60) = (short)(((int)*(short *)(iVar3 + 0x3f60) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3f78) = (short)(((int)*(short *)(iVar3 + 0x3f78) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3f90) = (short)(((int)*(short *)(iVar3 + 0x3f90) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3fa8) = (short)(((int)*(short *)(iVar3 + 0x3fa8) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3fc0) = (short)(((int)*(short *)(iVar3 + 0x3fc0) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3fd8) = (short)(((int)*(short *)(iVar3 + 0x3fd8) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x3ff0) = (short)(((int)*(short *)(iVar3 + 0x3ff0) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x4008) = (short)(((int)*(short *)(iVar3 + 0x4008) >> 0x2) - iVar2) * 0x4
        ;
        *(short *)(iVar3 + 0x4020) = (short)(((int)*(short *)(iVar3 + 0x4020) >> 0x2) - iVar2) * 0x4
        ;
        iVar3 += 0x120;
        iVar4 += -0x1;
    } while (iVar4 != 0x0);
    *(short *)(param_1 + 0x45d8) = (short)(((int)*(short *)(param_1 + 0x45d8) >> 0x2) - iVar2) * 0x4
    ;
    *(short *)(param_1 + 0x45f0) = (short)(((int)*(short *)(param_1 + 0x45f0) >> 0x2) - iVar2) * 0x4
    ;
    *(short *)(param_1 + 0x4608) = (short)(((int)*(short *)(param_1 + 0x4608) >> 0x2) - iVar2) * 0x4
    ;
    *(short *)(param_1 + 0x4620) = (short)(((int)*(short *)(param_1 + 0x4620) >> 0x2) - iVar2) * 0x4
    ;
    *(short *)(param_1 + 0x4638) = (short)(((int)*(short *)(param_1 + 0x4638) >> 0x2) - iVar2) * 0x4
    ;
    *(short *)(param_1 + 0x4650) = (short)(((int)*(short *)(param_1 + 0x4650) >> 0x2) - iVar2) * 0x4
    ;
    *(short *)(param_1 + 0x4668) = (short)(((int)*(short *)(param_1 + 0x4668) >> 0x2) - iVar2) * 0x4
    ;
    *(short *)(param_1 + 0x4680) = (short)(((int)*(short *)(param_1 + 0x4680) >> 0x2) - iVar2) * 0x4
    ;
    *(short *)(gTheGame + param_2 * 0x28 + 0x1d514) =
         (short)(((int)*(short *)(gTheGame + param_2 * 0x28 + 0x1d514) >> 0x2) - iVar2) * 0x4;
    if (-0x1 < *(int *)(param_1 + 0x4adc)) {
        return;
    }
    gMain = 0x390;
    *(undefined4 *)(param_1 + 0x4acc) = 0x3c;
    return;
}



void ChangeDeadFace(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    
    iVar5 = 0x0;
    if (*(int *)(param_1 + 0x4acc) != 0x0) {
        *(int *)(param_1 + 0x4acc) = *(int *)(param_1 + 0x4acc) + -0x1;
        return;
    }
    iVar6 = 0x3;
    iVar1 = param_1 + 0x2208;
    iVar3 = 0xb;
    while( true ) {
        iVar2 = iVar1;
        for (iVar4 = 0x0; iVar4 < gMax; iVar4 += 0x1) {
            if ((*(int *)(iVar2 + 0x10) != 0x0) && (*(int *)(iVar2 + 0x24) != 0xd)) {
                *(undefined4 *)(iVar2 + 0x24) = 0xd;
                iVar5 = -0x1;
            }
            iVar2 += 0x2c;
        }
        if (iVar5 != 0x0) {
            *(undefined4 *)(param_1 + 0x4acc) = 0x2;
            return;
        }
        iVar2 = iVar1 + -0x318;
        for (iVar4 = 0x0; iVar4 < gMax; iVar4 += 0x1) {
            if ((*(int *)(iVar2 + 0x10) != 0x0) && (*(int *)(iVar2 + 0x24) != 0xd)) {
                *(undefined4 *)(iVar2 + 0x24) = 0xd;
                iVar5 = -0x1;
            }
            iVar2 += 0x2c;
        }
        if (iVar5 != 0x0) {
            *(undefined4 *)(param_1 + 0x4acc) = 0x2;
            return;
        }
        iVar2 = iVar1 + -0x630;
        for (iVar4 = 0x0; iVar4 < gMax; iVar4 += 0x1) {
            if ((*(int *)(iVar2 + 0x10) != 0x0) && (*(int *)(iVar2 + 0x24) != 0xd)) {
                *(undefined4 *)(iVar2 + 0x24) = 0xd;
                iVar5 = -0x1;
            }
            iVar2 += 0x2c;
        }
        if (iVar5 != 0x0) break;
        iVar2 = iVar1 + -0x948;
        for (iVar4 = 0x0; iVar4 < gMax; iVar4 += 0x1) {
            if ((*(int *)(iVar2 + 0x10) != 0x0) && (*(int *)(iVar2 + 0x24) != 0xd)) {
                *(undefined4 *)(iVar2 + 0x24) = 0xd;
                iVar5 = -0x1;
            }
            iVar2 += 0x2c;
        }
        if (iVar5 != 0x0) {
            *(undefined4 *)(param_1 + 0x4acc) = 0x2;
            return;
        }
        iVar1 += -0xc60;
        iVar3 += -0x4;
        iVar6 += -0x1;
        if (iVar6 == 0x0) {
            if (-0x1 < iVar3) {
                return;
            }
            for (iVar5 = 0x0; iVar5 < gMax; iVar5 += 0x1) {
                *(undefined4 *)(param_1 + 0x4790) = 0xd;
                param_1 += 0x2c;
            }
            return;
        }
    }
    *(undefined4 *)(param_1 + 0x4acc) = 0x2;
    return;
}



void WinWallUp2D(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    
    if (*(int *)(param_1 + 0x4adc) < 0x0) {
        gMain = 0x392;
        Init2DTetrisBlocks(param_1,param_2);
        Init2DNewRow(param_1);
        Init2DAttackBlocks(param_1);
        pon_Init2DAttackBlocks4p(param_1);
        pon_InitAttackOtherData(param_1,param_2);
    }
    else {
        if (*(int *)(param_1 + 0x4adc) == 0x32) {
            PlaySE(SFX_INIT_TABLE,0x40);
        }
        iVar1 = (int)(char)winwallShake[*(int *)(param_1 + 0x4adc)];
        if (0x2 < gTheGame._120328_4_) {
            if (iVar1 == 0x10) {
                iVar1 = 0xa;
            }
            else if (iVar1 == -0x10) {
                iVar1 = -0xa;
            }
        }
        *(int *)(param_1 + 0x4adc) = *(int *)(param_1 + 0x4adc) + -0x1;
        if (*(int *)(param_1 + 0x4adc) == 0x26) {
            if (gTheGame._120328_4_ < 0x3) {
                iVar2 = 0x1f;
            }
            else {
                iVar2 = 0x15;
            }
            if (((int)*(short *)(gTheGame + param_2 * 0x28 + 0x1d514) >> 0x2) - iVar1 < iVar2) {
                iVar1 = ((int)*(short *)(gTheGame + param_2 * 0x28 + 0x1d514) >> 0x2) - iVar2;
            }
        }
        iVar3 = 0x6;
        iVar2 = param_1;
        do {
            *(short *)(iVar2 + 0x3f18) =
                 (short)(((int)*(short *)(iVar2 + 0x3f18) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3f30) =
                 (short)(((int)*(short *)(iVar2 + 0x3f30) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3f48) =
                 (short)(((int)*(short *)(iVar2 + 0x3f48) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3f60) =
                 (short)(((int)*(short *)(iVar2 + 0x3f60) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3f78) =
                 (short)(((int)*(short *)(iVar2 + 0x3f78) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3f90) =
                 (short)(((int)*(short *)(iVar2 + 0x3f90) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3fa8) =
                 (short)(((int)*(short *)(iVar2 + 0x3fa8) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3fc0) =
                 (short)(((int)*(short *)(iVar2 + 0x3fc0) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3fd8) =
                 (short)(((int)*(short *)(iVar2 + 0x3fd8) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3ff0) =
                 (short)(((int)*(short *)(iVar2 + 0x3ff0) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x4008) =
                 (short)(((int)*(short *)(iVar2 + 0x4008) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x4020) =
                 (short)(((int)*(short *)(iVar2 + 0x4020) >> 0x2) - iVar1) * 0x4;
            iVar2 += 0x120;
            iVar3 += -0x1;
        } while (iVar3 != 0x0);
        *(short *)(param_1 + 0x45d8) =
             (short)(((int)*(short *)(param_1 + 0x45d8) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x45f0) =
             (short)(((int)*(short *)(param_1 + 0x45f0) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4608) =
             (short)(((int)*(short *)(param_1 + 0x4608) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4620) =
             (short)(((int)*(short *)(param_1 + 0x4620) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4638) =
             (short)(((int)*(short *)(param_1 + 0x4638) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4650) =
             (short)(((int)*(short *)(param_1 + 0x4650) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4668) =
             (short)(((int)*(short *)(param_1 + 0x4668) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4680) =
             (short)(((int)*(short *)(param_1 + 0x4680) >> 0x2) - iVar1) * 0x4;
        *(short *)(gTheGame + param_2 * 0x28 + 0x1d514) =
             (short)(((int)*(short *)(gTheGame + param_2 * 0x28 + 0x1d514) >> 0x2) - iVar1) * 0x4;
    }
    return;
}



void LoseWallUp2D(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    
    if (*(int *)(param_1 + 0x4adc) < 0x0) {
        gMain = 0x393;
        Init2DTetrisBlocks(param_1,param_2);
        Init2DNewRow(param_1);
        Init2DAttackBlocks(param_1);
        pon_Init2DAttackBlocks4p(param_1);
        pon_InitAttackOtherData(param_1,param_2);
    }
    else {
        if (*(int *)(param_1 + 0x4adc) == 0x32) {
            PlaySE(SFX_INIT_TABLE,0x40);
        }
        iVar1 = (int)(char)losewallShake[*(int *)(param_1 + 0x4adc)];
        if (0x2 < gTheGame._120328_4_) {
            if (iVar1 == 0x10) {
                iVar1 = 0xa;
            }
            else if (iVar1 == -0x10) {
                iVar1 = -0xa;
            }
        }
        *(int *)(param_1 + 0x4adc) = *(int *)(param_1 + 0x4adc) + -0x1;
        iVar3 = 0x6;
        iVar2 = param_1;
        do {
            *(short *)(iVar2 + 0x3f18) =
                 (short)(((int)*(short *)(iVar2 + 0x3f18) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3f30) =
                 (short)(((int)*(short *)(iVar2 + 0x3f30) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3f48) =
                 (short)(((int)*(short *)(iVar2 + 0x3f48) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3f60) =
                 (short)(((int)*(short *)(iVar2 + 0x3f60) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3f78) =
                 (short)(((int)*(short *)(iVar2 + 0x3f78) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3f90) =
                 (short)(((int)*(short *)(iVar2 + 0x3f90) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3fa8) =
                 (short)(((int)*(short *)(iVar2 + 0x3fa8) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3fc0) =
                 (short)(((int)*(short *)(iVar2 + 0x3fc0) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3fd8) =
                 (short)(((int)*(short *)(iVar2 + 0x3fd8) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x3ff0) =
                 (short)(((int)*(short *)(iVar2 + 0x3ff0) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x4008) =
                 (short)(((int)*(short *)(iVar2 + 0x4008) >> 0x2) - iVar1) * 0x4;
            *(short *)(iVar2 + 0x4020) =
                 (short)(((int)*(short *)(iVar2 + 0x4020) >> 0x2) - iVar1) * 0x4;
            iVar2 += 0x120;
            iVar3 += -0x1;
        } while (iVar3 != 0x0);
        *(short *)(param_1 + 0x45d8) =
             (short)(((int)*(short *)(param_1 + 0x45d8) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x45f0) =
             (short)(((int)*(short *)(param_1 + 0x45f0) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4608) =
             (short)(((int)*(short *)(param_1 + 0x4608) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4620) =
             (short)(((int)*(short *)(param_1 + 0x4620) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4638) =
             (short)(((int)*(short *)(param_1 + 0x4638) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4650) =
             (short)(((int)*(short *)(param_1 + 0x4650) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4668) =
             (short)(((int)*(short *)(param_1 + 0x4668) >> 0x2) - iVar1) * 0x4;
        *(short *)(param_1 + 0x4680) =
             (short)(((int)*(short *)(param_1 + 0x4680) >> 0x2) - iVar1) * 0x4;
        if (*(int *)(param_1 + 0x4adc) < 0x32) {
            iVar1 = (int)(char)winwallShake[*(int *)(param_1 + 0x4adc) + 0x1];
            if (0x2 < gTheGame._120328_4_) {
                if (iVar1 == 0x10) {
                    iVar1 = 0xa;
                }
                else if (iVar1 == -0x10) {
                    iVar1 = -0xa;
                }
            }
            *(short *)(gTheGame + param_2 * 0x28 + 0x1d514) =
                 (short)(((int)*(short *)(gTheGame + param_2 * 0x28 + 0x1d514) >> 0x2) - iVar1) *
                 0x4;
        }
    }
    return;
}



void WallsDown2D(int param_1,int param_2)

{
    int iVar1;
    
    if (*(int *)(param_1 + 0x4acc) == 0x0) {
        if (*(int *)(param_1 + 0x4adc) == 0x36) {
            PlaySE(SFX_INIT_TABLE,0x41);
        }
        iVar1 = (int)(char)wallsdownShake[*(int *)(param_1 + 0x4adc)];
        if (0x2 < gTheGame._120328_4_) {
            if (iVar1 == 0x10) {
                iVar1 = 0xa;
            }
            else if (iVar1 == -0x10) {
                iVar1 = -0xa;
            }
        }
        *(int *)(param_1 + 0x4adc) = *(int *)(param_1 + 0x4adc) + -0x1;
        *(short *)(gTheGame + param_2 * 0x28 + 0x1d514) =
             (short)(((int)*(short *)(gTheGame + param_2 * 0x28 + 0x1d514) >> 0x2) - iVar1) * 0x4;
        if (*(int *)(param_1 + 0x4adc) < 0x0) {
            gMain = 0x394;
        }
    }
    else {
        *(int *)(param_1 + 0x4acc) = *(int *)(param_1 + 0x4acc) + -0x1;
    }
    return;
}



void SmallStars(void)

{
    undefined1 *puVar1;
    undefined1 *puVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    undefined1 *puVar7;
    undefined1 *puVar8;
    int iVar9;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;
    
    puVar1 = gTheGame;
    iVar4 = 0x0;
    local_20 = 0x20406;
    iVar3 = 0x0;
    local_1c = 0x80828486;
    local_18 = 0x20406;
    local_14 = 0x80828486;
    puVar2 = puVar1;
    do {
        iVar9 = 0x3;
        puVar7 = puVar1;
        puVar8 = puVar2;
        do {
            iVar6 = ((int)*(short *)(puVar8 + 0x3f18) >> 0x2) + *(int *)(puVar7 + 0xc);
            if (iVar4 == (iVar4 >> 0x1) * 0x2) {
                if (0xd6 < iVar6) {
                    iVar6 = 0x0;
                }
            }
            else if (0xef < iVar6) {
                iVar6 = 0x0;
            }
            *(short *)(puVar8 + 0x3f18) = (short)(iVar6 << 0x2);
            *(int *)(puVar7 + 0x28) = *(int *)(puVar7 + 0x28) + 0x1;
            if (0x2 < *(int *)(puVar7 + 0x28)) {
                *(undefined4 *)(puVar7 + 0x28) = 0x0;
                *(int *)(puVar7 + 0x24) = *(int *)(puVar7 + 0x24) + 0x1;
                if (0x3 < *(int *)(puVar7 + 0x24)) {
                    *(undefined4 *)(puVar7 + 0x24) = 0x0;
                }
            }
            uVar5 = iVar4 + 0x1;
            *(ushort *)(puVar8 + 0x3f22) =
                 (ushort)*(byte *)((int)&local_20 +
                                  *(int *)(puVar7 + 0x1c) * 0x4 + *(int *)(puVar7 + 0x24));
            if (0x14 < (int)uVar5) {
                return;
            }
            iVar6 = ((int)*(short *)(puVar8 + 0x3f30) >> 0x2) + *(int *)(puVar7 + 0x38);
            if (uVar5 == (((int)uVar5 >> 0x1) + (uint)((int)uVar5 < 0x0 && (uVar5 & 0x1) != 0x0)) *
                         0x2) {
                if (0xd6 < iVar6) {
                    iVar6 = 0x0;
                }
            }
            else if (0xef < iVar6) {
                iVar6 = 0x0;
            }
            *(short *)(puVar8 + 0x3f30) = (short)(iVar6 << 0x2);
            *(int *)(puVar7 + 0x54) = *(int *)(puVar7 + 0x54) + 0x1;
            if (0x2 < *(int *)(puVar7 + 0x54)) {
                *(undefined4 *)(puVar7 + 0x54) = 0x0;
                *(int *)(puVar7 + 0x50) = *(int *)(puVar7 + 0x50) + 0x1;
                if (0x3 < *(int *)(puVar7 + 0x50)) {
                    *(undefined4 *)(puVar7 + 0x50) = 0x0;
                }
            }
            iVar4 += 0x2;
            *(ushort *)(puVar8 + 0x3f3a) =
                 (ushort)*(byte *)((int)&local_20 +
                                  *(int *)(puVar7 + 0x48) * 0x4 + *(int *)(puVar7 + 0x50));
            if (0x14 < iVar4) {
                return;
            }
            puVar7 = puVar7 + 0x58;
            puVar8 = puVar8 + 0x30;
            iVar9 += -0x1;
        } while (iVar9 != 0x0);
        iVar3 += 0x1;
        puVar1 = puVar1 + 0x318;
        puVar2 = puVar2 + 0x90;
        if (0xb < iVar3) {
            return;
        }
    } while( true );
}



void pon_SmallStars4p(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    
    iVar3 = 0x0;
    local_1c = 0x20406;
    iVar2 = 0x0;
    local_18 = 0x80828486;
    local_14 = 0x20406;
    local_10 = 0x80828486;
    iVar1 = param_1;
    do {
        iVar8 = 0x3;
        iVar6 = param_1;
        iVar7 = iVar1;
        do {
            iVar5 = ((int)*(short *)(iVar7 + 0x3f18) >> 0x2) + *(int *)(iVar6 + 0xc);
            if (iVar3 == (iVar3 >> 0x1) * 0x2) {
                if (0xd6 < iVar5) {
                    iVar5 = 0x0;
                }
            }
            else if (0xef < iVar5) {
                iVar5 = 0x0;
            }
            *(short *)(iVar7 + 0x3f18) = (short)(iVar5 << 0x2);
            *(int *)(iVar6 + 0x28) = *(int *)(iVar6 + 0x28) + 0x1;
            if (0x2 < *(int *)(iVar6 + 0x28)) {
                *(undefined4 *)(iVar6 + 0x28) = 0x0;
                *(int *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x24) + 0x1;
                if (0x3 < *(int *)(iVar6 + 0x24)) {
                    *(undefined4 *)(iVar6 + 0x24) = 0x0;
                }
            }
            uVar4 = iVar3 + 0x1;
            *(ushort *)(iVar7 + 0x3f22) =
                 (ushort)*(byte *)((int)&local_1c +
                                  *(int *)(iVar6 + 0x1c) * 0x4 + *(int *)(iVar6 + 0x24));
            if (0xc < (int)uVar4) {
                return;
            }
            iVar5 = ((int)*(short *)(iVar7 + 0x3f30) >> 0x2) + *(int *)(iVar6 + 0x38);
            if (uVar4 == (((int)uVar4 >> 0x1) + (uint)((int)uVar4 < 0x0 && (uVar4 & 0x1) != 0x0)) *
                         0x2) {
                if (0xd6 < iVar5) {
                    iVar5 = 0x0;
                }
            }
            else if (0xef < iVar5) {
                iVar5 = 0x0;
            }
            *(short *)(iVar7 + 0x3f30) = (short)(iVar5 << 0x2);
            *(int *)(iVar6 + 0x54) = *(int *)(iVar6 + 0x54) + 0x1;
            if (0x2 < *(int *)(iVar6 + 0x54)) {
                *(undefined4 *)(iVar6 + 0x54) = 0x0;
                *(int *)(iVar6 + 0x50) = *(int *)(iVar6 + 0x50) + 0x1;
                if (0x3 < *(int *)(iVar6 + 0x50)) {
                    *(undefined4 *)(iVar6 + 0x50) = 0x0;
                }
            }
            iVar3 += 0x2;
            *(ushort *)(iVar7 + 0x3f3a) =
                 (ushort)*(byte *)((int)&local_1c +
                                  *(int *)(iVar6 + 0x48) * 0x4 + *(int *)(iVar6 + 0x50));
            if (0xc < iVar3) {
                return;
            }
            iVar6 += 0x58;
            iVar7 += 0x30;
            iVar8 += -0x1;
        } while (iVar8 != 0x0);
        iVar2 += 0x1;
        param_1 += 0x318;
        iVar1 += 0x90;
        if (0xb < iVar2) {
            return;
        }
    } while( true );
}



undefined4 CircleStars(void)

{
    int iVar1;
    undefined4 uVar2;
    int *piVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    int *piVar6;
    int *piVar7;
    int *piVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    float local_178 [0x22];
    undefined4 auStack_f0 [0x2];
    float local_e8 [0x24];
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    longlong local_38;
    longlong local_30;
    undefined4 local_28;
    uint uStack_24;
    undefined4 local_20;
    uint uStack_1c;
    
    iVar11 = 0x12;
    iVar9 = 0x0;
    local_58 = 0x20406;
    local_54 = 0x80828486;
    local_50 = 0x20406;
    local_4c = 0x80828486;
    puVar4 = (undefined4 *)(_745 + 0x8);
    puVar5 = auStack_f0;
    do {
        uVar2 = puVar4[0x3];
        puVar5[0x2] = puVar4[0x2];
        puVar5[0x3] = uVar2;
        iVar11 += -0x1;
        puVar4 = puVar4 + 0x2;
        puVar5 = puVar5 + 0x2;
    } while (iVar11 != 0x0);
    iVar11 = 0x12;
    puVar4 = (undefined4 *)(_746 + 0x88);
    puVar5 = (undefined4 *)&stack0xfffffe80;
    do {
        uVar2 = puVar4[0x3];
        puVar5[0x2] = puVar4[0x2];
        puVar5[0x3] = uVar2;
        iVar11 += -0x1;
        puVar4 = puVar4 + 0x2;
        puVar5 = puVar5 + 0x2;
    } while (iVar11 != 0x0);
    piVar3 = (int *)(gTheGame + 0x57c0);
    iVar11 = 0x0;
    piVar8 = piVar3;
    do {
        iVar12 = 0x6;
        piVar6 = piVar3;
        piVar7 = piVar8;
        do {
            *piVar6 = *piVar6 + 0x1;
            if ((piVar6[0x6] < 0x25) && (0x0 < *piVar6)) {
                *piVar6 = 0x0;
                piVar6[0x6] = piVar6[0x6] + 0x2;
            }
            uStack_24 = piVar6[0x6] ^ 0x80000000;
            iVar10 = piVar6[0x8] / 0xa + (piVar6[0x8] >> 0x1f);
            iVar10 -= iVar10 >> 0x1f;
            local_28 = 0x43300000;
            uStack_1c = uStack_24;
            local_20 = 0x43300000;
            iVar1 = (int)((float)((double)CONCAT44(0x43300000,uStack_24) - 4503601774854144.0) *
                         local_178[iVar10]);
            local_30 = (longlong)iVar1;
            iVar10 = (int)((float)((double)CONCAT44(0x43300000,uStack_24) - 4503601774854144.0) *
                          local_e8[iVar10]);
            *(short *)(piVar7 + 0xfc4) = (short)(iVar1 + piVar6[0x3]) * 0x4;
            local_38 = (longlong)iVar10;
            *(short *)(piVar7 + 0xfc6) = (short)(iVar10 + piVar6[0x1]) * 0x4;
            piVar6[0xa] = piVar6[0xa] + 0x1;
            if (0x2 < piVar6[0xa]) {
                piVar6[0xa] = 0x0;
                piVar6[0x7] = piVar6[0x7] + 0x1;
                if (0x3 < piVar6[0x7]) {
                    piVar6[0x7] = 0x0;
                }
                piVar6[0x9] = piVar6[0x9] + 0x1;
                if (0x3 < piVar6[0x9]) {
                    piVar6[0x9] = 0x0;
                }
            }
            iVar9 += 0x1;
            *(ushort *)((int)piVar7 + 0x3f22) =
                 (ushort)*(byte *)((int)&local_58 + piVar6[0x7] * 0x4 + piVar6[0x9]);
            if (0xb < iVar9) {
                if ((0x24 < piVar6[0x6]) && (0x20 < *piVar6)) {
                    return 0xffffffff;
                }
                return 0x0;
            }
            piVar6 = piVar6 + 0xb;
            piVar7 = piVar7 + 0x6;
            iVar12 += -0x1;
        } while (iVar12 != 0x0);
        iVar11 += 0x1;
        piVar3 = piVar3 + 0xc6;
        piVar8 = piVar8 + 0x24;
        if (0xb < iVar11) {
            return 0xffffffff;
        }
    } while( true );
}



undefined4 DoGameOverTryAgain(void)

{
    if ((gTheGame._90948_2_ & 0x200) == 0x0) {
        if ((gTheGame._90948_2_ & 0x100) == 0x0) {
            if (((gTheGame._90948_2_ & 0x8000) != 0x0) || ((gTheGame._90948_2_ & 0x1000) != 0x0)) {
                FadeOutSong(last_song_handle,0x5a);
                if (gTheGame._120356_4_ == 0x0) {
                    PlaySE(SFX_INIT_TABLE,0x5);
                }
                else {
                    PlaySE(SFX_INIT_TABLE,0x6);
                }
                return 0xffffffff;
            }
        }
        else {
            if (gTheGame._120356_4_ != 0x1) {
                PlaySE(SFX_INIT_TABLE,0xfe);
            }
            gTheGame._120356_4_ = 0x1;
        }
    }
    else {
        if (gTheGame._120356_4_ != 0x0) {
            PlaySE(SFX_INIT_TABLE,0xfd);
        }
        gTheGame._120356_4_ = 0x0;
    }
    if (gTheGame._120356_4_ == 0x0) {
        if (gTheGame._120332_4_ == 0x1) {
            gTheGame._119644_2_ = 0x1ec;
            gTheGame._119652_2_ = 0x2d0;
            gTheGame._119650_2_ = 0x64;
            gTheGame._119654_2_ = 0x64;
            gTheGame._119656_4_ = endSegment + 0x9e00;
            pon_guS2DInitBg();
        }
        else {
            gTheGame._119644_2_ = 0x1f0;
            gTheGame._119652_2_ = 0x2cc;
            gTheGame._119650_2_ = 0x78;
            gTheGame._119654_2_ = 0x78;
            gTheGame._119656_4_ = endSegment + 0xb900;
        }
        if (gTheGame._120332_4_ == 0x1) {
            gTheGame._119684_2_ = 0x2d0;
            gTheGame._119692_2_ = 0x2e8;
            gTheGame._119690_2_ = 0x34;
            gTheGame._119694_2_ = 0x34;
            gTheGame._119696_4_ = endSegment + 0xaa80;
            pon_guS2DInitBg();
        }
        else {
            gTheGame._119684_2_ = 0x2d8;
            gTheGame._119692_2_ = 0x2e4;
            gTheGame._119690_2_ = 0x48;
            gTheGame._119694_2_ = 0x48;
            gTheGame._119696_4_ = endSegment + 0xc780;
        }
    }
    else {
        if (gTheGame._120332_4_ == 0x1) {
            gTheGame._119644_2_ = 0x204;
            gTheGame._119652_2_ = 0x2e8;
            gTheGame._119650_2_ = 0x34;
            gTheGame._119654_2_ = 0x34;
            gTheGame._119656_4_ = endSegment + 0x9780;
            pon_guS2DInitBg();
        }
        else {
            gTheGame._119644_2_ = 0x204;
            gTheGame._119652_2_ = 0x2e4;
            gTheGame._119650_2_ = 0x48;
            gTheGame._119654_2_ = 0x48;
            gTheGame._119656_4_ = endSegment + 0xb080;
        }
        if (gTheGame._120332_4_ == 0x1) {
            gTheGame._119684_2_ = 0x2a0;
            gTheGame._119692_2_ = 0x2d0;
            gTheGame._119690_2_ = 0x64;
            gTheGame._119694_2_ = 0x64;
            gTheGame._119696_4_ = endSegment + 0xb100;
            pon_guS2DInitBg();
        }
        else {
            gTheGame._119684_2_ = 0x2a4;
            gTheGame._119692_2_ = 0x2cc;
            gTheGame._119690_2_ = 0x78;
            gTheGame._119694_2_ = 0x78;
            gTheGame._119696_4_ = endSegment + 0xd000;
        }
    }
    osWritebackDCache(0x2be1a0,0x28);
    osWritebackDCache(0x2be1c8,0x28);
    return 0x0;
}



undefined4 DoGameOverTryNextStage(void)

{
    ushort uVar1;
    
    uVar1 = gTheGame._90948_2_;
    if (g_winnerNo == 0x1) {
        uVar1 = gTheGame._90964_2_;
    }
    if ((uVar1 & 0x400) == 0x0) {
        if ((uVar1 & 0x800) == 0x0) {
            if (((uVar1 & 0x8000) != 0x0) || ((uVar1 & 0x1000) != 0x0)) {
                if (SelectCursorPos < 0x2) {
                    PlaySE(SFX_INIT_TABLE,0x5);
                    FadeOutSong(last_song_handle,0x5a);
                }
                else {
                    PlaySE(SFX_INIT_TABLE,0x6);
                }
                return 0xffffffff;
            }
        }
        else {
            SelectCursorPos -= 0x1;
            if ((int)SelectCursorPos < 0x0) {
                SelectCursorPos = 0x2;
            }
        }
    }
    else {
        SelectCursorPos += 0x1;
        if (0x2 < (int)SelectCursorPos) {
            SelectCursorPos = 0x0;
        }
    }
    return 0x0;
}



undefined4 DoGameOverSaveYesNo(void)

{
    ushort uVar1;
    
    uVar1 = gTheGame._90948_2_;
    if (g_winnerNo == 0x1) {
        uVar1 = gTheGame._90964_2_;
    }
    if ((uVar1 & 0x100) == 0x0) {
        if ((uVar1 & 0x200) == 0x0) {
            if (((uVar1 & 0x8000) != 0x0) || ((uVar1 & 0x1000) != 0x0)) {
                FadeOutSong(last_song_handle,0x5a);
                if (SelectCursorSaveYesNo == 0x0) {
                    PlaySE(SFX_INIT_TABLE,0x5);
                }
                else {
                    PlaySE(SFX_INIT_TABLE,0x6);
                }
                gTheGame._120340_4_ = 0x0;
                gTheGame._120344_4_ = 0x0;
                gTheGame._120348_4_ = 0x0;
                return 0xffffffff;
            }
            if ((uVar1 & 0x4000) != 0x0) {
                gMain = 0x396;
            }
        }
        else {
            if (SelectCursorSaveYesNo == 0x1) {
                PlaySE(SFX_INIT_TABLE,0xfd);
            }
            SelectCursorSaveYesNo = 0x0;
        }
    }
    else {
        if (SelectCursorSaveYesNo == 0x0) {
            PlaySE(SFX_INIT_TABLE,0xfe);
        }
        SelectCursorSaveYesNo = 0x1;
    }
    return 0x0;
}



void EditGameOverStat(void)

{
    char cVar1;
    char *pcVar2;
    int iVar3;
    
    if ((gGameStatus & 0x2) != 0x0) {
        return;
    }
    pcVar2 = st_Combo2 + 0x19;
    iVar3 = 0x5;
    st_Combo2[25] = '\0';
    do {
        if (*pcVar2 != '\0') {
            st_Combo2[25] += *pcVar2;
            *pcVar2 = '\0';
        }
        cVar1 = pcVar2[0x1];
        if (cVar1 != '\0') {
            st_Combo2[25] += cVar1;
            pcVar2[0x1] = '\0';
        }
        cVar1 = pcVar2[0x2];
        if (cVar1 != '\0') {
            st_Combo2[25] += cVar1;
            pcVar2[0x2] = '\0';
        }
        cVar1 = pcVar2[0x3];
        if (cVar1 != '\0') {
            st_Combo2[25] += cVar1;
            pcVar2[0x3] = '\0';
        }
        cVar1 = pcVar2[0x4];
        if (cVar1 != '\0') {
            st_Combo2[25] += cVar1;
            pcVar2[0x4] = '\0';
        }
        cVar1 = pcVar2[0x5];
        if (cVar1 != '\0') {
            st_Combo2[25] += cVar1;
            pcVar2[0x5] = '\0';
        }
        cVar1 = pcVar2[0x6];
        if (cVar1 != '\0') {
            st_Combo2[25] += cVar1;
            pcVar2[0x6] = '\0';
        }
        pcVar2 = pcVar2 + 0x7;
        iVar3 += -0x1;
    } while (iVar3 != 0x0);
    pcVar2 = st_Chain2 + 0x4;
    iVar3 = 0x2b;
    st_Chain2[4] = '\0';
    do {
        if (*pcVar2 != '\0') {
            st_Chain2[4] += *pcVar2;
            *pcVar2 = '\0';
        }
        cVar1 = pcVar2[0x1];
        if (cVar1 != '\0') {
            st_Chain2[4] += cVar1;
            pcVar2[0x1] = '\0';
        }
        pcVar2 = pcVar2 + 0x2;
        iVar3 += -0x1;
    } while (iVar3 != 0x0);
    return;
}



int DoGameOverStat(int param_1)

{
    ushort uVar1;
    ushort uVar2;
    int iVar3;
    int iVar4;
    short sVar5;
    int iVar6;
    int iVar7;
    undefined1 *puVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    char acStack_44 [0xc];
    
    EditGameOverStat();
    uVar2 = gTheGame._90950_2_;
    uVar1 = gTheGame._90948_2_;
    puVar8 = st_Combo1;
    iVar11 = 0x0;
    iVar10 = 0x0;
    iVar9 = 0x38;
    iVar3 = 0x0;
    sVar5 = 0xe0;
    iVar4 = param_1;
    do {
        iVar6 = iVar4;
        if (*(ushort *)puVar8 != 0x0) {
            if ((gTheGame._120356_4_ <= iVar10) && (iVar10 < gTheGame._120356_4_ + 0x6)) {
                *(undefined4 *)(iVar4 + 0x31a0) = 0xffffffff;
                *(undefined4 *)(iVar4 + 0x31a4) = 0xc;
                *(int *)(iVar4 + 0x31a8) = iVar3 + 0x4;
                *(undefined2 *)(iVar4 + 0x31c8) = 0x220;
                iVar11 += 0x1;
                *(short *)(iVar4 + 0x31d0) = sVar5;
                *(undefined2 *)(iVar4 + 0x31cc) = 0x200;
                *(uint *)(iVar4 + 0x31bc) = (uint)*(ushort *)puVar8;
                iVar6 = iVar4 + 0x68;
                Init2DComboTMEM(iVar4 + 0x31a0);
                sprintf(acStack_44,(char *)&_999,*(undefined4 *)(iVar4 + 0x31bc));
                SetText(0xad,iVar9 + 0x2,acStack_44,0x15);
                sVar5 += 0x64;
                iVar9 += 0x19;
            }
            iVar10 += 0x1;
        }
        iVar3 += 0x1;
        puVar8 = (undefined1 *)((int)puVar8 + 0x2);
        iVar4 = iVar6;
    } while (iVar3 < 0x7);
    puVar8 = st_Combo2;
    iVar4 = iVar9 << 0x2;
    iVar6 = 0x0;
    iVar3 = param_1 + iVar11 * 0x68;
    do {
        iVar7 = iVar3;
        if (*puVar8 != 0x0) {
            if (gTheGame._120356_4_ <= iVar10) {
                if (iVar10 < gTheGame._120356_4_ + 0x6) {
                    *(undefined4 *)(iVar3 + 0x31a0) = 0xffffffff;
                    *(undefined4 *)(iVar3 + 0x31a4) = 0xc;
                    *(int *)(iVar3 + 0x31a8) = iVar6 + 0xb;
                    *(undefined2 *)(iVar3 + 0x31c8) = 0x220;
                    iVar11 += 0x1;
                    *(short *)(iVar3 + 0x31d0) = (short)iVar4;
                    *(undefined2 *)(iVar3 + 0x31cc) = 0x200;
                    *(uint *)(iVar3 + 0x31bc) = (uint)(byte)*puVar8;
                    iVar7 = iVar3 + 0x68;
                    Init2DComboTMEM(iVar3 + 0x31a0);
                    if (((gGameStatus & 0x2) == 0x0) && (0x23 < *(int *)(iVar3 + 0x31a8))) {
                        *(undefined4 *)(iVar3 + 0x31a4) = 0xd;
                        *(undefined2 *)(iVar3 + 0x31cc) = 0x400;
                        *(undefined2 *)(iVar3 + 0x31da) = 0x80;
                    }
                    sprintf(acStack_44,(char *)&_999,*(undefined4 *)(iVar3 + 0x31bc));
                    SetText(0xad,iVar9 + 0x2,acStack_44,0x15);
                    iVar4 += 0x64;
                    iVar9 += 0x19;
                }
            }
            iVar10 += 0x1;
        }
        iVar6 += 0x1;
        puVar8 = puVar8 + 0x1;
        iVar3 = iVar7;
    } while (iVar6 < 0x3c);
    puVar8 = st_Chain1;
    iVar4 = iVar9 << 0x2;
    iVar6 = 0x0;
    iVar3 = param_1 + iVar11 * 0x68;
    do {
        iVar7 = iVar3;
        if (*(ushort *)puVar8 != 0x0) {
            if ((gTheGame._120356_4_ <= iVar10) && (iVar10 < gTheGame._120356_4_ + 0x6)) {
                *(undefined4 *)(iVar3 + 0x31a0) = 0xffffffff;
                *(undefined4 *)(iVar3 + 0x31a4) = 0xa;
                *(int *)(iVar3 + 0x31a8) = iVar6 + 0x1;
                *(undefined2 *)(iVar3 + 0x31c8) = 0x220;
                iVar11 += 0x1;
                *(short *)(iVar3 + 0x31d0) = (short)iVar4;
                *(undefined2 *)(iVar3 + 0x31cc) = 0x200;
                *(uint *)(iVar3 + 0x31bc) = (uint)*(ushort *)puVar8;
                iVar7 = iVar3 + 0x68;
                Init2DChainTMEM(iVar3 + 0x31a0);
                sprintf(acStack_44,(char *)&_999,*(undefined4 *)(iVar3 + 0x31bc));
                SetText(0xad,iVar9 + 0x2,acStack_44,0x15);
                iVar4 += 0x64;
                iVar9 += 0x19;
            }
            iVar10 += 0x1;
        }
        iVar6 += 0x1;
        puVar8 = (undefined1 *)((int)puVar8 + 0x2);
        iVar3 = iVar7;
    } while (iVar6 < 0x9);
    puVar8 = st_Chain2;
    iVar4 = iVar9 << 0x2;
    iVar6 = 0x0;
    iVar3 = param_1 + iVar11 * 0x68;
    do {
        iVar11 = iVar3;
        if (*puVar8 != 0x0) {
            if (gTheGame._120356_4_ <= iVar10) {
                if (iVar10 < gTheGame._120356_4_ + 0x6) {
                    *(undefined4 *)(iVar3 + 0x31a0) = 0xffffffff;
                    *(undefined4 *)(iVar3 + 0x31a4) = 0xa;
                    *(int *)(iVar3 + 0x31a8) = iVar6 + 0xa;
                    iVar11 = iVar3 + 0x68;
                    if (((gGameStatus & 0x2) == 0x0) && (0xd < *(int *)(iVar3 + 0x31a8))) {
                        *(undefined4 *)(iVar3 + 0x31a8) = 0x63;
                    }
                    *(undefined2 *)(iVar3 + 0x31c8) = 0x220;
                    *(short *)(iVar3 + 0x31d0) = (short)iVar4;
                    *(undefined2 *)(iVar3 + 0x31cc) = 0x200;
                    *(uint *)(iVar3 + 0x31bc) = (uint)(byte)*puVar8;
                    Init2DChainTMEM(iVar3 + 0x31a0);
                    sprintf(acStack_44,(char *)&_999,*(undefined4 *)(iVar3 + 0x31bc));
                    SetText(0xad,iVar9 + 0x2,acStack_44,0x15);
                    iVar4 += 0x64;
                    iVar9 += 0x19;
                }
            }
            iVar10 += 0x1;
        }
        iVar6 += 0x1;
        puVar8 = puVar8 + 0x1;
        iVar3 = iVar11;
    } while (iVar6 < 0x5a);
    gTheGame._117068_2_ = 0x100;
    gTheGame._117066_2_ = 0x400;
    gTheGame._117070_2_ = 0x0;
    gTheGame._117076_2_ = 0x100;
    gTheGame._117074_2_ = 0x400;
    gTheGame._117078_2_ = 0x0;
    gTheGame._117080_2_ = 0x8;
    if (false) {
        gTheGame._117072_2_ = 0x354;
        gTheGame._117082_2_ = 0x2;
    }
    else {
        gTheGame._117072_2_ = 0x8c;
        gTheGame._117082_2_ = 0x3;
    }
    gTheGame._117064_2_ = 0x294;
    gTheGame[117084] = 0x2;
    gTheGame[117085] = 0x1;
    gTheGame[117086] = 0x0;
    gTheGame[117087] = 0x0;
    gTheGame._117044_2_ = 0x100;
    gTheGame._117042_2_ = 0x400;
    gTheGame._117046_2_ = 0x0;
    gTheGame._117052_2_ = 0x100;
    gTheGame._117050_2_ = 0x400;
    gTheGame._117054_2_ = 0x0;
    gTheGame._117056_2_ = 0x8;
    gTheGame._117040_2_ = 0x294;
    gTheGame._117048_2_ = 0x354;
    gTheGame._117058_2_ = 0x2;
    gTheGame[117060] = 0x2;
    gTheGame[117061] = 0x1;
    gTheGame[117062] = 0x0;
    gTheGame[117063] = 0x0;
    if (gTheGame._120356_4_ < 0x1) {
        gTheGame._117072_2_ = 0xfd80;
    }
    if (iVar10 <= gTheGame._120356_4_ + 0x6) {
        gTheGame._117048_2_ = 0xfd80;
    }
    if ((uVar2 & 0x800) == 0x0) {
        if ((uVar2 & 0x400) == 0x0) {
            if (((uVar1 & 0xc000) != 0x0) || ((uVar1 & 0x1000) != 0x0)) {
                gMain = 0x392;
            }
        }
        else if (gTheGame._120356_4_ + 0x6 < iVar10) {
            gTheGame._120356_4_ += 0x1;
        }
    }
    else if (0x0 < gTheGame._120356_4_) {
        gTheGame._120356_4_ += -0x1;
    }
    return iVar10;
}



undefined4 DoGameOverInput(void)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    undefined1 *puVar4;
    int iVar5;
    
    iVar5 = 0x0;
    if (gMain == 0x397) {
        iVar5 = DoGameOverSaveYesNo();
        if (iVar5 != 0x0) {
            if (SelectCursorSaveYesNo == 0x0) {
                SaveRom();
            }
            if (gSelection == 0x82) {
                gTheGame._89904_4_ = 0xffffffff;
            }
            gReset = 0xffffffff;
            gMain = 0x258;
            return 0xffffffff;
        }
        return 0x0;
    }
    if (gSelection != 0xb4) {
        if (0xb3 < gSelection) {
            if (gSelection != 0xd2) {
                if (gSelection < 0xd2) {
                    if (gSelection != 0xc8) {
                        if (((gSelection < 0xc8) && (gSelection == 0xbe)) &&
                           (iVar1 = DoGameOverTryAgain(), iVar1 != 0x0)) {
                            if (gTheGame._120356_4_ == 0x0) {
                                iVar5 = 0x2;
                            }
                            else if (gTheGame._19084_4_ < 0x2710) {
                                iVar5 = 0x7;
                            }
                            else {
                                iVar5 = 0x6;
                            }
                        }
                        goto LAB_00066814;
                    }
                    goto LAB_000665cc;
                }
                if ((gSelection != 0xe6) && ((0xe5 < gSelection || (gSelection != 0xdc))))
                goto LAB_00066814;
            }
            iVar1 = 0x4;
            puVar4 = gTheGame;
            do {
                if (*(short *)(puVar4 + 0x16344) != 0x0) {
                    FadeOutSong(last_song_handle,0x5a);
                    PlaySE(SFX_INIT_TABLE,0x2);
                    iVar1 = -0x1;
                    goto LAB_00066770;
                }
                puVar4 = puVar4 + 0x10;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
            iVar1 = 0x0;
LAB_00066770:
            if (iVar1 != 0x0) {
                if (gTheGame._120328_4_ < 0x3) {
                    if ((gGameStatus & 0x40) == 0x0) {
                        iVar5 = 0x2;
                    }
                    else {
                        iVar5 = 0x1;
                    }
                    if (gTheGame._19172_4_ == iVar5) {
                        iVar5 = 0x2;
                    }
                    else if (gTheGame._41636_4_ == iVar5) {
                        iVar5 = 0x2;
                    }
                    else if (gTheGame._64100_4_ == iVar5) {
                        iVar5 = 0x2;
                    }
                    else if (gTheGame._86564_4_ == iVar5) {
                        iVar5 = 0x2;
                    }
                    else {
                        iVar5 = 0x3;
                    }
                }
                else {
                    iVar5 = 0x2;
                }
            }
            goto LAB_00066814;
        }
        if (gSelection == 0x96) {
            if ((gTheGame._89856_4_ == 0x7) || (gTheGame._90128_4_ == 0x8)) {
                iVar1 = DoGameOverTryNextStage();
            }
            else {
                iVar1 = 0x0;
                if (gTheGame._90948_2_ != 0x0) {
                    FadeOutSong(last_song_handle,0x5a);
                    PlaySE(SFX_INIT_TABLE,0x2);
                    iVar1 = -0x1;
                }
            }
            if (iVar1 != 0x0) {
                if (gTheGame._89856_4_ == gTheGame._90128_4_) {
                    iVar5 = 0x3;
                }
                else if ((gTheGame._89856_4_ == 0x7) || (gTheGame._90128_4_ == 0x8)) {
                    if (SelectCursorPos == 0x1) {
                        SaveRom();
                    }
                    if (SelectCursorPos == 0x2) {
                        iVar5 = 0x7;
                    }
                    else {
                        iVar5 = 0x6;
                        if (gTheGame._89856_4_ != gTheGame._90128_4_) {
                            gTheGame._120364_4_ += 0x1;
                        }
                    }
                }
                else if ((gTheGame._120360_4_ < 0x3) || (gTheGame._120364_4_ != 0xf)) {
                    iVar5 = 0x4;
                }
                else {
                    gTheGame._120364_4_ = 0x11;
                    iVar5 = 0x6;
                }
            }
            goto LAB_00066814;
        }
        if (gSelection < 0x96) {
            if (gSelection == 0x82) {
                if (gTheGame._89856_4_ == 0x8) {
                    iVar1 = DoGameOverTryAgain();
                    if (iVar1 != 0x0) {
                        if (gTheGame._120356_4_ == 0x0) {
                            iVar5 = 0x3;
                            gTheGame._89904_4_ = gWorld;
                        }
                        else {
                            iVar5 = 0x7;
                        }
                    }
                }
                else {
                    iVar1 = DoGameOverTryNextStage();
                    if (iVar1 != 0x0) {
                        if (SelectCursorPos == 0x1) {
                            SaveRom();
                        }
                        if (SelectCursorPos == 0x2) {
                            iVar5 = 0x7;
                        }
                        else {
                            iVar5 = CheckPlayerPuzzleRound(gTheGame._120360_4_,gTheGame._120364_4_);
                            if (iVar5 == 0x0) {
                                iVar5 = gTheGame._120364_4_ / 0xf + (gTheGame._120364_4_ >> 0x1f);
                                if (gTheGame._120364_4_ == (iVar5 - (iVar5 >> 0x1f)) * 0xf) {
                                    iVar5 = 0x2;
                                }
                                else {
                                    gTheGame._120364_4_ += 0x1;
                                    iVar5 = 0x3;
                                }
                            }
                            else {
                                iVar5 = 0x2;
                            }
                        }
                        iVar1 = 0x0;
                        if (gTheGame._120360_4_ == 0x4) {
                            iVar2 = CheckPlayerPuzzleRound(0x4,0x1);
                            if (((iVar2 != 0x0) &&
                                (iVar2 = CheckPlayerPuzzleRound(0x4,0x10), iVar2 != 0x0)) &&
                               (iVar2 = CheckPlayerPuzzleRound(0x4,0x1f), iVar2 != 0x0)) {
                                iVar1 = -0x1;
                            }
                        }
                        else if (gTheGame._120360_4_ < 0x4) {
                            if ((((0x2 < gTheGame._120360_4_) &&
                                 (iVar2 = CheckPlayerPuzzleRound(0x3,0x1), iVar2 != 0x0)) &&
                                (iVar2 = CheckPlayerPuzzleRound(0x3,0x10), iVar2 != 0x0)) &&
                               (iVar2 = CheckPlayerPuzzleRound(0x3,0x1f), iVar2 != 0x0)) {
                                iVar1 = -0x1;
                            }
                        }
                        else if (gTheGame._120360_4_ < 0x6) {
                            if (gTheGame._120332_4_ == 0x1) {
                                iVar2 = CheckPlayerPuzzleRound(0x5,0x1);
                                if (((iVar2 != 0x0) &&
                                    (iVar2 = CheckPlayerPuzzleRound(0x5,0x10), iVar2 != 0x0)) &&
                                   (iVar2 = CheckPlayerPuzzleRound(0x5,0x1f), iVar2 != 0x0)) {
                                    iVar1 = -0x1;
                                }
                            }
                            else {
                                iVar2 = CheckPlayerPuzzleRound(0x5,0x2e);
                                if (((iVar2 != 0x0) &&
                                    (iVar2 = CheckPlayerPuzzleRound(0x5,0x3d), iVar2 != 0x0)) &&
                                   (iVar2 = CheckPlayerPuzzleRound(0x5,0x4c), iVar2 != 0x0)) {
                                    iVar1 = -0x1;
                                }
                            }
                        }
                        if ((iVar1 != 0x0) &&
                           (iVar1 = PlayPlayerPuzzleEnding(gTheGame._120360_4_,gTheGame._19204_4_),
                           iVar1 != 0x0)) {
                            iVar5 = 0x6;
                        }
                    }
                }
            }
            else if (gSelection < 0x82) {
                if (gSelection == 0x78) {
                    iVar1 = 0x0;
                    if (gTheGame._90948_2_ != 0x0) {
                        FadeOutSong(last_song_handle,0x5a);
                        PlaySE(SFX_INIT_TABLE,0x2);
                        iVar1 = -0x1;
                    }
                    if (iVar1 != 0x0) {
                        iVar5 = 0x5;
                    }
                }
            }
            else if (gSelection == 0x8c) {
                if ((gTheGame._19084_4_ < 0x7530) || (gTheGame._120360_4_ == 0x0)) {
                    iVar1 = DoGameOverTryAgain();
                    if (iVar1 != 0x0) {
                        if (gTheGame._120356_4_ == 0x0) {
                            if (gTheGame._120360_4_ == 0x0) {
                                iVar5 = 0x3;
                            }
                            else {
                                iVar5 = 0x2;
                            }
                        }
                        else if (gTheGame._120360_4_ == 0x0) {
                            iVar5 = 0x1;
                        }
                        else {
                            iVar5 = 0x7;
                        }
                    }
                }
                else {
                    iVar1 = 0x0;
                    if (gTheGame._90948_2_ != 0x0) {
                        FadeOutSong(last_song_handle,0x5a);
                        PlaySE(SFX_INIT_TABLE,0x2);
                        iVar1 = -0x1;
                    }
                    if (iVar1 != 0x0) {
                        SaveRom();
                        iVar5 = 0x6;
                    }
                }
            }
            goto LAB_00066814;
        }
        if (gSelection == 0xaa) {
            if (gTheGame._89856_4_ == 0x8) {
                if ((gTheGame._120360_4_ == 0x5) && (gTheGame._120364_4_ == 0x3)) {
                    iVar1 = 0x0;
                    if (gTheGame._90948_2_ != 0x0) {
                        FadeOutSong(last_song_handle,0x5a);
                        PlaySE(SFX_INIT_TABLE,0x2);
                        iVar1 = -0x1;
                    }
                    if (iVar1 != 0x0) {
                        gTheGame._120360_4_ = 0x2;
                        gTheGame._120364_4_ += 0x1;
                        iVar5 = 0x2;
                        gTheGame._120368_4_ = 0x1;
                    }
                }
                else {
                    iVar1 = DoGameOverTryAgain();
                    if (iVar1 != 0x0) {
                        if (gTheGame._120356_4_ == 0x0) {
                            iVar5 = 0x3;
                        }
                        else {
                            iVar5 = 0x7;
                        }
                    }
                }
            }
            else {
                iVar1 = DoGameOverTryNextStage();
                if (iVar1 != 0x0) {
                    if (SelectCursorPos == 0x1) {
                        SaveRom();
                    }
                    if (SelectCursorPos == 0x2) {
                        iVar5 = 0x7;
                    }
                    else {
                        iVar1 = 0x0;
                        gTheGame._120348_4_ = 0x0;
                        iVar5 = 0x3;
                        gTheGame._120344_4_ = 0x0;
                        gTheGame._120340_4_ = 0x0;
                        gTheGame._120368_4_ += 0x1;
                        if (0x5 < gTheGame._120368_4_) {
                            if ((gTheGame._120360_4_ == 0x2) && (gTheGame._120364_4_ == 0x3)) {
                                if ((gTheGame._120332_4_ == 0x1) &&
                                   ((*(byte *)(gPlayer._0_4_ + 0x35) & 0x20) == 0x0)) {
                                    iVar1 = -0x1;
                                }
                                else if ((gTheGame._120332_4_ == 0x2) &&
                                        ((*(byte *)(gPlayer._0_4_ + 0xc1) & 0x20) == 0x0)) {
                                    iVar1 = -0x1;
                                }
                                if (iVar1 == 0x0) {
                                    gTheGame._120360_4_ = 0x2;
                                    gTheGame._120364_4_ = 0x4;
                                    gTheGame._120368_4_ = 0x1;
                                }
                                else {
                                    gTheGame._120360_4_ = 0x5;
                                }
                                iVar5 = 0x2;
                            }
                            else if ((gTheGame._120360_4_ == 0x2) && (gTheGame._120364_4_ == 0x6)) {
                                gTheGame._120360_4_ = 0x5;
                                iVar5 = 0x2;
                            }
                            else if ((gTheGame._120360_4_ == 0x5) && (gTheGame._120364_4_ == 0x6)) {
                                iVar5 = 0x6;
                            }
                            else {
                                gTheGame._120360_4_ = 0x2;
                                iVar5 = 0x2;
                                gTheGame._120364_4_ += 0x1;
                                gTheGame._120368_4_ = 0x1;
                            }
                        }
                    }
                }
            }
            goto LAB_00066814;
        }
        if ((0xa9 < gSelection) || (gSelection != 0xa0)) goto LAB_00066814;
    }
LAB_000665cc:
    if (g_MatchEnd == 0x0) {
        iVar1 = 0x2;
        puVar4 = gTheGame;
        do {
            if (*(short *)(puVar4 + 0x16344) != 0x0) {
                FadeOutSong(last_song_handle,0x5a);
                PlaySE(SFX_INIT_TABLE,0x2);
                iVar1 = -0x1;
                goto LAB_00066630;
            }
            puVar4 = puVar4 + 0x10;
            iVar1 += -0x1;
        } while (iVar1 != 0x0);
        iVar1 = 0x0;
LAB_00066630:
        if (iVar1 != 0x0) {
            if ((gGameStatus & 0x40) == 0x0) {
                iVar5 = 0x2;
            }
            else {
                iVar5 = 0x1;
            }
            if (gTheGame._19172_4_ == iVar5) {
                iVar5 = 0x2;
            }
            else if (gTheGame._41636_4_ == iVar5) {
                iVar5 = 0x2;
            }
            else {
                iVar5 = 0x3;
            }
        }
    }
    else {
        iVar1 = DoGameOverTryNextStage();
        if (iVar1 != 0x0) {
            if (SelectCursorPos == 0x1) {
                SaveRom();
            }
            if (SelectCursorPos == 0x2) {
                iVar5 = 0x7;
            }
            else {
                if ((gGameStatus & 0x40) == 0x0) {
                    iVar5 = 0x2;
                }
                else {
                    iVar5 = 0x1;
                }
                if (gTheGame._19172_4_ == iVar5) {
                    iVar5 = 0x2;
                }
                else if (gTheGame._41636_4_ == iVar5) {
                    iVar5 = 0x2;
                }
                else {
                    iVar5 = 0x3;
                }
            }
        }
    }
LAB_00066814:
    if (iVar5 == 0x0) {
        uVar3 = 0x0;
    }
    else {
        if ((gSelection != 0xaa) && (iVar5 != 0x7)) {
            gTheGame._120348_4_ = 0x0;
            gTheGame._120344_4_ = 0x0;
            gTheGame._120340_4_ = 0x0;
        }
        if (iVar5 - 0x1U < 0x2) {
            if (iVar5 == 0x1) {
                gMain = 0x258;
            }
            else {
                gMain = 0x2bc;
            }
        }
        else if (iVar5 == 0x3) {
            gMain = 0x384;
        }
        else if (iVar5 == 0x4) {
            gMain = 0x36d;
        }
        else if (iVar5 == 0x5) {
            gMain = 0x2bc;
        }
        else {
            if (iVar5 != 0x6) {
                gMain = 0x397;
                return 0x0;
            }
            gMain = 0x383;
        }
        gReset = 0xffffffff;
        uVar3 = 0xffffffff;
    }
    return uVar3;
}



void DrawNextStage(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    uint uVar3;
    
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
    if (gSelection == 0x96) {
        uVar3 = 0x1e;
    }
    else {
        uVar3 = 0x79;
    }
    if (((gSelection == 0xa0) || (gSelection == 0xc8)) || (gSelection == 0xb4)) {
        if (g_winnerNo == 0x1) {
            uVar3 = 0xc3;
        }
        else {
            uVar3 = 0x1e;
        }
    }
    StretchTexBlock4((double)(float)((double)CONCAT44(0x43300000,uVar3 ^ 0x80000000) -
                                    4503601774854144.0),0x4062c00000000000,0x4058000000000000,
                     0x4050000000000000,&glistp,0x60,0x40,tlu_SaveYesNo_1,tex_SaveYesNo_1);
    StretchTexBlock8((double)(float)((double)CONCAT44(0x43300000,uVar3 - 0x10 ^ 0x80000000) -
                                    4503601774854144.0),
                     (double)(float)((double)CONCAT44(0x43300000,
                                                      SelectCursorPos * 0x12 + 0x92U ^ 0x80000000) -
                                    4503601774854144.0),0x4060000000000000,0x4040000000000000,
                     &glistp,0x80,0x20,tlu_SaveYesNo_Cursor1,tex_SaveYesNo_Cursor1);
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar2;
    puVar1[0x1] = 0x200000;
    return;
}



void DrawSaveYesNo(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    uint uVar3;
    
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
    if (gSelection == 0x96) {
        uVar3 = 0x1e;
    }
    else {
        uVar3 = 0x79;
    }
    if (((gSelection == 0xa0) || (gSelection == 0xc8)) || (gSelection == 0xb4)) {
        if (g_winnerNo == 0x1) {
            uVar3 = 0xc3;
        }
        else {
            uVar3 = 0x1e;
        }
    }
    StretchTexBlock4((double)(float)((double)CONCAT44(0x43300000,uVar3 ^ 0x80000000) -
                                    4503601774854144.0),0x4062c00000000000,0x4058000000000000,
                     0x4050000000000000,&glistp,0x60,0x40,tlu_SaveYesNo_2,tex_SaveYesNo_2);
    StretchTexBlock8((double)(float)((double)CONCAT44(0x43300000,
                                                      uVar3 + SelectCursorSaveYesNo * 0x30 ^
                                                      0x80000000) - 4503601774854144.0),
                     0x4066800000000000,0x4048000000000000,0x4040000000000000,&glistp,0x30,0x20,
                     tlu_SaveYesNo_Cursor2,tex_SaveYesNo_Cursor2);
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar2;
    puVar1[0x1] = 0x200000;
    return;
}



void Draw2DGameOver(undefined4 param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    undefined4 *puVar4;
    undefined1 *puVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    undefined1 *puVar8;
    
    if (gMain == 0x38f) {
        for (iVar3 = 0x0; iVar3 < gTheGame._120328_4_; iVar3 += 0x1) {
            Draw2DSmoke(param_1,iVar3);
        }
    }
    if (gTheGame._120328_4_ == 0x1) {
        if ((gMain == 0x391) &&
           (((gSelection == 0x8c || (gSelection == 0xbe)) &&
            (iVar3 = DoFlashDrawAlways(), puVar1 = glistp, iVar3 != 0x0)))) {
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
            pon_gSPObjLoadTxtr(&glistp,&arrowTexture);
            pon_gSPObjRectangle(&glistp,0x2bd790);
            pon_gSPObjRectangle(&glistp,0x2bd778);
        }
        if (gMain < 0x392) {
            return;
        }
    }
    else if (gMain < 0x393) {
        return;
    }
    if ((gTheGame._120328_4_ == 0x2) && (0x394 < gMain)) {
        Draw2DSmallStars(param_1,0x1);
    }
    else if ((0x2 < gTheGame._120328_4_) && (0x395 < gMain)) {
        puVar5 = gTheGame;
        for (iVar3 = 0x0; iVar3 < gTheGame._120328_4_; iVar3 += 0x1) {
            if (*(int *)(puVar5 + 0x15f00) == 0x9) {
                pon_Draw2DSmallStars4p(param_1,0x1,iVar3);
            }
            puVar5 = puVar5 + 0x110;
        }
    }
    puVar1 = glistp;
    puVar6 = &alphaR;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar8 = gTheGame;
    puVar4 = &alphaB;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar7 = &alphaG;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfc11fe23;
    glistp = puVar2;
    puVar1[0x1] = 0xfffff3f9;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar2;
    puVar1[0x1] = 0x504240;
    puVar5 = puVar8;
    for (iVar3 = 0x0; puVar1 = glistp, iVar3 < gTheGame._120328_4_; iVar3 += 0x1) {
        if (*(short *)(puVar5 + 0x1d454) != 0x0) {
            puVar2 = glistp + 0x2;
            *glistp = 0xfa000000;
            glistp = puVar2;
            puVar1[0x1] = (uint)*(byte *)puVar4 << 0x8 |
                          (uint)*(byte *)puVar6 << 0x18 | (uint)*(byte *)puVar7 << 0x10 | 0xff;
            pon_gSPBgRect1Cyc(&glistp,puVar5 + 0x1d448);
        }
        puVar5 = puVar5 + 0x28;
        puVar7 = (undefined4 *)((int)puVar7 + 0x1);
        puVar6 = (undefined4 *)((int)puVar6 + 0x1);
        puVar4 = (undefined4 *)((int)puVar4 + 0x1);
    }
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
    *glistp = 0xfcffffff;
    glistp = puVar2;
    puVar1[0x1] = 0xfffcf279;
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
    puVar5 = puVar8;
    do {
        if ((*(int *)(puVar5 + 0x1d318) != 0x0) && ((g_MatchEnd == 0x0 || (0x1 < iVar3 - 0x2U)))) {
            pon_gSPBgRectCopy(&glistp,puVar5 + 0x1d308);
        }
        iVar3 += 0x1;
        puVar5 = puVar5 + 0x28;
    } while (iVar3 < 0x8);
    if ((gMain - 0x395U < 0x2) &&
       ((((gSelection == 0x96 || (gSelection == 0xaa)) || (gSelection == 0x82)) &&
        (gTheGame._89856_4_ != 0x8)))) {
        DrawNextStage();
    }
    if ((gMain - 0x395U < 0x2) &&
       ((((gSelection == 0xa0 || (gSelection == 0xc8)) || (gSelection == 0xb4)) &&
        ((gTheGame._120328_4_ == 0x2 && (g_MatchEnd != 0x0)))))) {
        DrawNextStage();
    }
    if (gMain == 0x397) {
        DrawSaveYesNo();
    }
    if ((gTheGame._120328_4_ == 0x2) && (0x394 < gMain)) {
        Draw2DSmallStars(param_1,0x2);
    }
    else if ((0x2 < gTheGame._120328_4_) && (0x395 < gMain)) {
        for (iVar3 = 0x0; iVar3 < gTheGame._120328_4_; iVar3 += 0x1) {
            if (*(int *)(puVar8 + 0x15f00) == 0x9) {
                pon_Draw2DSmallStars4p(param_1,0x2,iVar3);
            }
            puVar8 = puVar8 + 0x110;
        }
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
    *glistp = 0xe3000a01;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    return;
}



void Draw3DGameOver(int param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    undefined1 *puVar7;
    undefined1 *puVar8;
    
    if (gMain == 0x38f) {
        for (iVar3 = 0x0; iVar3 < gTheGame._120328_4_; iVar3 += 0x1) {
            Draw3DSmoke(param_1,iVar3);
        }
    }
    if (gTheGame._120328_4_ == 0x1) {
        if (gMain == 0x391) {
            Draw3DGameOverStat(param_1);
            return;
        }
        if (gMain < 0x392) {
            return;
        }
    }
    else if (gTheGame._120328_4_ == 0x2) {
        if (gMain == 0x392) {
            if (*(int *)(param_1 + 0x2c0a8) != *(int *)(param_1 + 0x2c1b8)) {
                if ((*(int *)(param_1 + 0x2c0a8) == 0x8) || (*(int *)(param_1 + 0x2c1b8) == 0x7)) {
                    if (gTheGame._41636_4_ == 0x1) {
                        Draw3DGameStar(0x3);
                    }
                    else {
                        Draw3DGameStar(0x4);
                    }
                }
                else if (gTheGame._19172_4_ == 0x1) {
                    Draw3DGameStar(0x1);
                }
                else {
                    Draw3DGameStar(0x2);
                }
            }
        }
        else if (gMain < 0x391) {
            return;
        }
    }
    if ((0x394 < gMain) && (gTheGame._120328_4_ == 0x2)) {
        Draw3DSmallStars(0x1);
    }
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar6 = &alphaG;
    puVar8 = gTheGame;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar2;
    puVar5 = &alphaR;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar4 = &alphaB;
    puVar2 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar2;
    puVar1[0x1] = 0x504240;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfc11fe23;
    glistp = puVar2;
    puVar1[0x1] = 0xfffff3f9;
    puVar7 = puVar8;
    for (iVar3 = 0x0; puVar1 = glistp, iVar3 < gTheGame._120328_4_; iVar3 += 0x1) {
        if (*(short *)(puVar7 + 0x1d454) != 0x0) {
            puVar2 = glistp + 0x2;
            *glistp = 0xfa000000;
            glistp = puVar2;
            puVar1[0x1] = (uint)*(byte *)puVar4 << 0x8 |
                          (uint)*(byte *)puVar5 << 0x18 | (uint)*(byte *)puVar6 << 0x10 | 0xff;
            pon_guS2DEmuBgRect1Cyc(&glistp,puVar7 + 0x1d448);
        }
        puVar7 = puVar7 + 0x28;
        puVar6 = (undefined4 *)((int)puVar6 + 0x1);
        puVar5 = (undefined4 *)((int)puVar5 + 0x1);
        puVar4 = (undefined4 *)((int)puVar4 + 0x1);
    }
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    iVar3 = 0x0;
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
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe2001e01;
    glistp = puVar2;
    puVar1[0x1] = 0x1;
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
    do {
        if ((*(int *)(puVar8 + 0x1d318) != 0x0) && ((g_MatchEnd == 0x0 || (0x1 < iVar3 - 0x2U)))) {
            pon_guS2DEmuBgRect1Cyc(&glistp,puVar8 + 0x1d308);
        }
        iVar3 += 0x1;
        puVar8 = puVar8 + 0x28;
    } while (iVar3 < 0x4);
    if ((gMain - 0x395U < 0x2) &&
       ((((gSelection == 0x96 || (gSelection == 0xaa)) || (gSelection == 0x82)) &&
        (gTheGame._89856_4_ != 0x8)))) {
        DrawNextStage();
    }
    if ((gMain - 0x395U < 0x2) &&
       ((((gSelection == 0xa0 || (gSelection == 0xc8)) || (gSelection == 0xb4)) &&
        ((gTheGame._120328_4_ == 0x2 && (g_MatchEnd != 0x0)))))) {
        DrawNextStage();
    }
    if (gMain == 0x397) {
        DrawSaveYesNo();
    }
    if ((0x392 < gMain) && (gTheGame._120328_4_ == 0x2)) {
        Draw3DSmallStars(0x2);
    }
    return;
}



void DrawGameOver(void)

{
    if (gTheGame._120332_4_ == 0x2) {
        Draw3DGameOver();
    }
    else {
        Draw2DGameOver();
    }
    return;
}



void DoGameOver2D(void)

{
    int iVar1;
    undefined1 *puVar2;
    uint uVar3;
    int *piVar4;
    int iVar5;
    int iVar6;
    undefined1 *puVar7;
    int **ppiVar8;
    int *piVar9;
    int iVar10;
    int **ppiVar11;
    undefined4 uVar12;
    int *piVar13;
    undefined1 *puVar14;
    int *piVar15;
    int iVar16;
    int *local_5c [0x4];
    int local_4c [0x4];
    int local_3c [0x5];
    
    uVar12 = 0x0;
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
    iVar6 = 0x2a16e8;
    iVar1 = 0x1;
    if (true) {
        do {
            *(undefined4 *)(iVar6 + 0x1c980) = 0xffffffff;
            iVar6 += 0x20;
            iVar1 += -0x1;
        } while (iVar1 != 0x0);
    }
    puVar2 = gTheGame;
    iVar1 = 0x2a6608;
    if (gMain == 0x38e) {
        SelectCursorPos = 0x0;
        SelectCursorSaveYesNo = 0x0;
        g_winnerNo = 0x0;
        g_MatchEnd = 0x0;
    }
    if ((0x395 < gMain) && (iVar6 = DoGameOverInput(), iVar6 != 0x0)) {
        return;
    }
    puVar14 = gTheGame;
    if (gTheGame._120328_4_ != 0x1) {
        if (gTheGame._120328_4_ == 0x2) {
            iVar6 = 0x0;
            iVar10 = 0x0;
            if (gTheGame._89856_4_ != gTheGame._90128_4_) {
                if ((gTheGame._89856_4_ == 0x8) || (gTheGame._90128_4_ == 0x7)) {
                    g_winnerNo = 0x1;
                    iVar10 = -0x1;
                }
                else {
                    g_winnerNo = 0x0;
                    iVar6 = -0x1;
                }
            }
            switch(gMain) {
            case 0x38e:
                if (iVar6 != iVar10) {
                    if (iVar6 == 0x0) {
                        if (iVar10 != 0x0) {
                            gTheGame._41636_4_ += 0x1;
                        }
                    }
                    else {
                        gTheGame._19172_4_ += 0x1;
                    }
                }
                if (gSelection == 0x96) {
                    if (iVar6 == 0x0) {
                        if (iVar6 == 0x0) {
                            UpdatePlayerCharacter(gTheGame._120360_4_,gTheGame._120372_4_);
                        }
                    }
                    else {
                        UpdatePlayerCPU(gTheGame._120360_4_,gTheGame._120364_4_);
                    }
                }
                else {
                    if ((gGameStatus & 0x40) == 0x0) {
                        iVar5 = 0x2;
                    }
                    else {
                        iVar5 = 0x1;
                    }
                    if (gTheGame._19172_4_ == iVar5) {
                        UpdateRecord2(iVar6,iVar10);
                        g_MatchEnd = 0x1;
                    }
                    else if (gTheGame._41636_4_ == iVar5) {
                        UpdateRecord2(iVar6,iVar10);
                        g_MatchEnd = 0x1;
                    }
                }
                LoadGameOver2D();
                *(undefined4 *)(gTheGame + gTheGame._101888_4_ * 0x20 + 0x16384) = 0xffffffff;
                if (iVar6 == 0x0) {
                    gTheGame._101892_4_ = 0x6;
                    gTheGame._101888_4_ = gTheGame._101960_4_;
                }
                else {
                    gTheGame._101892_4_ = 0x5;
                    gTheGame._101888_4_ = gTheGame._101948_4_;
                    if (gTheGame._101956_4_ != 0x0) {
                        if (((gTheGame._19204_4_ == 0x8) || (gTheGame._19204_4_ == 0x2)) ||
                           (gTheGame._19204_4_ == 0xe)) {
                            gTheGame._101892_4_ = 0x1;
                            gTheGame._19080_4_ = 0x0;
                            gTheGame._101904_4_ = gTheGame._101956_4_ + -0x6;
                            gTheGame._101908_4_ = gTheGame._101956_4_;
                            gTheGame._101916_4_ = 0x2;
                            gTheGame._101920_4_ = gTheGame._101956_4_;
                            gTheGame._101928_4_ = 0xe;
                            gTheGame._101932_4_ = 0x0;
                        }
                        else {
                            gTheGame._101904_4_ = gTheGame._101956_4_ + -0x16;
                            gTheGame._101908_4_ = gTheGame._101956_4_;
                            gTheGame._101928_4_ = 0x14;
                            gTheGame._101932_4_ = 0x0;
                        }
                    }
                }
                *(undefined4 *)(gTheGame + gTheGame._101888_4_ * 0x20 + 0x16384) =
                     *(undefined4 *)(gTheGame + gTheGame._101888_4_ * 0x20 + 0x16380);
                *(undefined4 *)(gTheGame + gTheGame._102008_4_ * 0x20 + 0x16384) = 0xffffffff;
                if (iVar10 == 0x0) {
                    gTheGame._102012_4_ = 0x6;
                    gTheGame._102008_4_ = gTheGame._102080_4_;
                }
                else {
                    gTheGame._102012_4_ = 0x5;
                    gTheGame._102008_4_ = gTheGame._102068_4_;
                    if (gTheGame._102076_4_ != 0x0) {
                        if (((gTheGame._41668_4_ == 0x8) || (gTheGame._41668_4_ == 0x2)) ||
                           (gTheGame._41668_4_ == 0xe)) {
                            gTheGame._102012_4_ = 0x1;
                            gTheGame._41544_4_ = 0x0;
                            gTheGame._102024_4_ = gTheGame._102076_4_ + -0x6;
                            gTheGame._102028_4_ = gTheGame._102076_4_;
                            gTheGame._102036_4_ = 0x2;
                            gTheGame._102040_4_ = gTheGame._102076_4_;
                            gTheGame._102048_4_ = 0xe;
                            gTheGame._102052_4_ = 0x0;
                        }
                        else {
                            gTheGame._102024_4_ = gTheGame._102076_4_ + -0x16;
                            gTheGame._102028_4_ = gTheGame._102076_4_;
                            gTheGame._102048_4_ = 0x14;
                            gTheGame._102052_4_ = 0x0;
                        }
                    }
                }
                *(undefined4 *)(gTheGame + gTheGame._102008_4_ * 0x20 + 0x16384) =
                     *(undefined4 *)(gTheGame + gTheGame._102008_4_ * 0x20 + 0x16380);
                gOverflow = 0x0;
                Init2DIcons(gTheGame);
                Init2DIcons(0x2a6608);
                Init2DExplosion(gTheGame);
                Init2DExplosion(0x2a6608);
                gTheGame._120356_4_ = 0x0;
                iVar16 = 0x8;
                iVar5 = 0x0;
                do {
                    if (*(int *)(puVar2 + 0x2520) < 0x4) {
                        *(undefined4 *)(puVar2 + 0x2520) = 0x0;
                    }
                    if (*(int *)(iVar1 + 0x2520) < 0x4) {
                        *(undefined4 *)(iVar1 + 0x2520) = 0x0;
                    }
                    *(undefined4 *)(puVar2 + 0x2540) = 0x0;
                    *(undefined4 *)(iVar1 + 0x2540) = 0x0;
                    if (*(int *)(puVar2 + 0x2570) < 0x4) {
                        *(undefined4 *)(puVar2 + 0x2570) = 0x0;
                    }
                    if (*(int *)(iVar1 + 0x2570) < 0x4) {
                        *(undefined4 *)(iVar1 + 0x2570) = 0x0;
                    }
                    *(undefined4 *)(puVar2 + 0x2590) = 0x0;
                    *(undefined4 *)(iVar1 + 0x2590) = 0x0;
                    if (*(int *)(puVar2 + 0x25c0) < 0x4) {
                        *(undefined4 *)(puVar2 + 0x25c0) = 0x0;
                    }
                    if (*(int *)(iVar1 + 0x25c0) < 0x4) {
                        *(undefined4 *)(iVar1 + 0x25c0) = 0x0;
                    }
                    *(undefined4 *)(puVar2 + 0x25e0) = 0x0;
                    *(undefined4 *)(iVar1 + 0x25e0) = 0x0;
                    if (*(int *)(puVar2 + 0x2610) < 0x4) {
                        *(undefined4 *)(puVar2 + 0x2610) = 0x0;
                    }
                    if (*(int *)(iVar1 + 0x2610) < 0x4) {
                        *(undefined4 *)(iVar1 + 0x2610) = 0x0;
                    }
                    *(undefined4 *)(puVar2 + 0x2630) = 0x0;
                    *(undefined4 *)(iVar1 + 0x2630) = 0x0;
                    if (*(int *)(puVar2 + 0x2660) < 0x4) {
                        *(undefined4 *)(puVar2 + 0x2660) = 0x0;
                    }
                    if (*(int *)(iVar1 + 0x2660) < 0x4) {
                        *(undefined4 *)(iVar1 + 0x2660) = 0x0;
                    }
                    *(undefined4 *)(puVar2 + 0x2680) = 0x0;
                    puVar2 = puVar2 + 0x190;
                    iVar5 += 0x4;
                    *(undefined4 *)(iVar1 + 0x2680) = 0x0;
                    iVar1 += 0x190;
                    iVar16 += -0x1;
                } while (iVar16 != 0x0);
                gTheGame._120086_2_ = 0x374;
                gTheGame._120126_2_ = 0x374;
                if (gTheGame._89856_4_ == 0x8) {
                    Init2DGameOverSmoke(gTheGame,0x0,iVar5);
                }
                if (gTheGame._90128_4_ == 0x8) {
                    Init2DGameOverSmoke(0x2a6608,0x1);
                }
                gMain = 0x38f;
                gWhatever = 0x0;
                gTheGame._19148_4_ = 0x0;
                gTheGame._41612_4_ = 0x0;
                if (gTheGame._89856_4_ == 0x8) {
                    gTheGame._19164_4_ = 0x27;
                }
                if (gTheGame._90128_4_ == 0x8) {
                    gTheGame._41628_4_ = 0x27;
                }
                if (gSelection == 0x96) {
                    if ((iVar6 == iVar10) || (iVar10 != 0x0)) {
                        PlaySE(SFX_INIT_TABLE,0x118);
                    }
                    else {
                        PlaySE(SFX_INIT_TABLE,0x117);
                    }
                }
                else if (iVar6 == iVar10) {
                    PlaySE(SFX_INIT_TABLE,0x118);
                }
                else {
                    PlaySE(SFX_INIT_TABLE,0x117);
                }
                FadeOutSong(last_song_handle,0x3c);
                break;
            case 0x38f:
                if (iVar6 == 0x0) {
                    GameOverSmoke(gTheGame);
                    DeadBlocksShakeTwo2D(gTheGame,0x0);
                    ChangeDeadFace(gTheGame);
                }
                if (iVar10 == 0x0) {
                    GameOverSmoke(0x2a6608);
                    DeadBlocksShakeTwo2D(0x2a6608,0x1);
                    ChangeDeadFace(0x2a6608);
                }
                break;
            case 0x390:
                gWhatever += 0x1;
                if (gTheGame._19148_4_ == 0x0) {
                    if (gTheGame._41612_4_ == 0x0) {
                        gMain = 0x391;
                        if (iVar6 != 0x0) {
                            gTheGame._19164_4_ = 0x32;
                        }
                        if (iVar10 != 0x0) {
                            gTheGame._41628_4_ = 0x32;
                        }
                    }
                    else {
                        gTheGame._41612_4_ += -0x1;
                    }
                }
                else {
                    gTheGame._19148_4_ += -0x1;
                }
                break;
            case 0x391:
                if ((iVar6 == 0x0) && (iVar10 == 0x0)) {
                    gMain = 0x392;
                }
                if (iVar6 != 0x0) {
                    WinWallUp2D(gTheGame,0x0);
                }
                if (iVar10 != 0x0) {
                    WinWallUp2D(0x2a6608,0x1);
                }
                if (gMain == 0x392) {
                    if (iVar6 == 0x0) {
                        gTheGame._19164_4_ = 0x60;
                    }
                    if (iVar10 == 0x0) {
                        gTheGame._41628_4_ = 0x60;
                    }
                }
                break;
            case 0x392:
                if (iVar6 == 0x0) {
                    LoseWallUp2D(gTheGame,0x0);
                }
                if (iVar10 == 0x0) {
                    LoseWallUp2D(0x2a6608,0x1);
                }
                if (gMain == 0x393) {
                    gTheGame._19164_4_ = 0x36;
                    gTheGame._41628_4_ = 0x36;
                    gTheGame._19148_4_ = 0x3c;
                    gTheGame._41612_4_ = 0x3c;
                }
                break;
            case 0x393:
                WallsDown2D(gTheGame,0x0);
                WallsDown2D(0x2a6608,0x1);
                if ((gTheGame._19164_4_ < 0x32) &&
                   (iVar1 = (int)gTheGame._119572_2_,
                   gTheGame._119572_2_ =
                        (short)((iVar1 >> 0x2) - (int)(char)wallsdownShake[gTheGame._19164_4_]) *
                        0x4, 0x1d < iVar1 >> 0x2)) {
                    gTheGame._119892_2_ = gTheGame._119572_2_;
                }
                if ((gTheGame._41628_4_ < 0x32) &&
                   (iVar1 = (int)gTheGame._119612_2_,
                   gTheGame._119612_2_ =
                        (short)((iVar1 >> 0x2) - (int)(char)wallsdownShake[gTheGame._41628_4_]) *
                        0x4, 0x1d < iVar1 >> 0x2)) {
                    gTheGame._119932_2_ = gTheGame._119612_2_;
                }
                break;
            case 0x394:
                if (gSelection != 0x96) {
                    if ((gGameStatus & 0x40) == 0x0) {
                        iVar1 = 0x2;
                    }
                    else {
                        iVar1 = 0x1;
                    }
                    if (gTheGame._19172_4_ == iVar1) {
                        gTheGame._19200_4_ += 0x1;
                        gTheGame._120360_4_ += 0x1;
                        if (0x63 < gTheGame._120360_4_) {
                            gTheGame._19200_4_ = 0x63;
                            gTheGame._120360_4_ = 0x63;
                        }
                    }
                    else if (gTheGame._41636_4_ == iVar1) {
                        gTheGame._41664_4_ += 0x1;
                        gTheGame._120384_4_ += 0x1;
                        if (0x63 < gTheGame._120384_4_) {
                            gTheGame._41664_4_ = 0x63;
                            gTheGame._120384_4_ = 0x63;
                        }
                    }
                }
                gTheGame._119652_2_ = 0x2d0;
                gTheGame._119692_2_ = 0x2d0;
                gTheGame._119892_2_ = 0xf8;
                gTheGame._119932_2_ = 0xf8;
                if (iVar6 != 0x0) {
                    if (gTheGame._19172_4_ == 0x1) {
                        if (gTheGame._117184_4_ < 0xc8) {
                            gTheGame._117120_4_ = 0x64;
                        }
                        else {
                            gTheGame._117120_4_ = gTheGame._117184_4_ + -0x64;
                        }
                        Init2DCircleStars(0x0,0x0);
                    }
                    else {
                        gTheGame._117152_4_ = gTheGame._117120_4_;
                        Init2DCircleStars(0x0,0x1);
                    }
                    PlaySE(SFX_INIT_TABLE,0x144);
                }
                if (iVar10 != 0x0) {
                    if (gTheGame._41636_4_ == 0x1) {
                        if (gTheGame._117120_4_ < 0x64) {
                            gTheGame._117184_4_ = 0xc8;
                        }
                        else {
                            gTheGame._117184_4_ = gTheGame._117120_4_ + 0x64;
                        }
                        Init2DCircleStars(0x1,0x0);
                    }
                    else {
                        gTheGame._117216_4_ = gTheGame._117184_4_;
                        Init2DCircleStars(0x1,0x1);
                    }
                    PlaySE(SFX_INIT_TABLE,0x144);
                }
                gTheGame._19164_4_ = -0x1;
                gTheGame._41628_4_ = -0x1;
                gTheGame._19148_4_ = 0x0;
                gTheGame._41612_4_ = 0x0;
                gWhatever = 0x0;
                if (iVar6 == 0x0) {
                    if (iVar10 != 0x0) {
                        Init2DSmallStars(0x1);
                    }
                }
                else {
                    Init2DSmallStars(0x0);
                }
                if (iVar6 == iVar10) {
                    gMain = 0x396;
                }
                else {
                    gMain = 0x395;
                }
                break;
            case 0x395:
                iVar1 = CircleStars();
                if (iVar1 != 0x0) {
                    gMain = 0x396;
                }
                break;
            case 0x396:
                if (iVar6 == iVar10) {
                    AnimateDraw2D(gTheGame,0x2be150,0x2be290);
                    AnimateDraw2D(0x2a6608,0x2be178,0x2be2b8);
                }
                else {
                    if (iVar6 == 0x0) {
                        AnimateLose2D(gTheGame,0x2be150,0x2be290);
                    }
                    else {
                        AnimateWin2D(gTheGame,0x2be150,0x2be290);
                    }
                    if (iVar10 == 0x0) {
                        AnimateLose2D(0x2a6608,0x2be178,0x2be2b8);
                    }
                    else {
                        AnimateWin2D(0x2a6608,0x2be178,0x2be2b8);
                    }
                    SmallStars();
                }
                AnimatePushKey(0x2be1a0);
                AnimatePushKey(0x2be1c8);
                gWhatever += 0x1;
                break;
            case 0x397:
                if (iVar6 == iVar10) {
                    AnimateDraw2D(gTheGame,0x2be150,0x2be290);
                    AnimateDraw2D(0x2a6608,0x2be178,0x2be2b8);
                }
                else {
                    if (iVar6 == 0x0) {
                        AnimateLose2D(gTheGame,0x2be150,0x2be290);
                    }
                    else {
                        AnimateWin2D(gTheGame,0x2be150,0x2be290);
                    }
                    if (iVar10 == 0x0) {
                        AnimateLose2D(0x2a6608,0x2be178,0x2be2b8);
                    }
                    else {
                        AnimateWin2D(0x2a6608,0x2be178,0x2be2b8);
                    }
                    SmallStars();
                }
            }
            if (gTheGame._120332_4_ != 0x1) {
                return;
            }
            UpdateAnimation(gTheGame,0x0,0x0);
            UpdateAnimation(0x2a6608,0x1,0x0);
            return;
        }
        piVar15 = local_4c;
        ppiVar11 = local_5c;
        piVar13 = local_3c;
        iVar6 = -0x1;
        iVar10 = -0x1;
        puVar2 = puVar14;
        piVar4 = piVar15;
        puVar7 = puVar14;
        ppiVar8 = ppiVar11;
        piVar9 = piVar13;
        iVar1 = gTheGame._120328_4_;
        if (0x0 < gTheGame._120328_4_) {
            do {
                *piVar4 = (int)puVar2;
                *ppiVar8 = (int *)(puVar7 + 0x15f00);
                if (**ppiVar8 == 0x9) {
                    *piVar9 = -0x1;
                }
                else {
                    *piVar9 = 0x0;
                }
                puVar2 = puVar2 + 0x57c0;
                piVar4 = piVar4 + 0x1;
                puVar7 = puVar7 + 0x110;
                ppiVar8 = ppiVar8 + 0x1;
                piVar9 = piVar9 + 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
        piVar4 = piVar13;
        iVar1 = gTheGame._120328_4_;
        if (0x0 < gTheGame._120328_4_) {
            do {
                if (*piVar4 == -0x1) {
                    iVar6 = 0x0;
                }
                piVar4 = piVar4 + 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
        if (true) {
            switch(gMain) {
            case 0x38e:
                if (iVar6 == 0x0) {
                    pon_UpdateRecord4p(*local_5c[0],*local_5c[1],*local_5c[2],*local_5c[3]);
                }
                LoadGameOver2D();
                puVar2 = puVar14;
                puVar7 = puVar14;
                for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
                    if (*(int *)(puVar2 + 0x16000) != 0x1) {
                        iVar6 = *(int *)(*piVar15 + 0x57b8) * 0x28 >> 0x2;
                        iVar10 = iVar6 * 0xc;
                        *(undefined4 *)
                         (gTheGame + *(int *)(gTheGame + iVar10 + 0x18e00) * 0x20 + 0x16384) =
                             0xffffffff;
                        if (*piVar13 == -0x1) {
                            iVar5 = *(int *)(gTheGame + iVar10 + 0x18e3c);
                            *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x5;
                            piVar4 = (int *)(gTheGame + iVar10 + 0x18e44);
                            if (*(int *)(gTheGame + iVar10 + 0x18e44) != 0x0) {
                                if (((gTheGame._41668_4_ == 0x8) || (gTheGame._41668_4_ == 0x2)) ||
                                   (gTheGame._41668_4_ == 0xe)) {
                                    *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x1;
                                    gTheGame._41544_4_ = 0x0;
                                    *(int *)(gTheGame + iVar10 + 0x18e10) = *piVar4 + -0x6;
                                    *(int *)(gTheGame + iVar10 + 0x18e14) = *piVar4;
                                    *(undefined4 *)(gTheGame + iVar10 + 0x18e1c) = 0x2;
                                    *(int *)(gTheGame + iVar10 + 0x18e20) = *piVar4;
                                    *(undefined4 *)(gTheGame + iVar10 + 0x18e28) = 0xe;
                                    *(undefined4 *)(gTheGame + iVar10 + 0x18e2c) = 0x0;
                                }
                                else {
                                    *(int *)(gTheGame + iVar10 + 0x18e10) =
                                         *(int *)(gTheGame + iVar10 + 0x18e44) + -0x16;
                                    *(int *)(gTheGame + iVar10 + 0x18e14) = *piVar4;
                                    *(undefined4 *)(gTheGame + iVar10 + 0x18e28) = 0x14;
                                    *(undefined4 *)(gTheGame + iVar10 + 0x18e2c) = 0x0;
                                }
                            }
                        }
                        else {
                            iVar5 = *(int *)(gTheGame + iVar10 + 0x18e48);
                            *(undefined4 *)(gTheGame + iVar10 + 0x18e04) = 0x6;
                        }
                        *(undefined4 *)(gTheGame + iVar5 * 0x20 + 0x16384) =
                             *(undefined4 *)(gTheGame + iVar5 * 0x20 + 0x16380);
                        *(int *)(gTheGame + iVar6 * 0xc + 0x18e00) = iVar5;
                        Init2DIcons(*piVar15);
                        Init2DExplosion(*piVar15);
                        iVar10 = 0x0;
                        iVar5 = 0x5;
                        iVar6 = 0x0;
                        do {
                            piVar4 = (int *)(*piVar15 + iVar6 + 0x2520);
                            if (*piVar4 < 0x4) {
                                *piVar4 = 0x0;
                            }
                            *(undefined4 *)(*piVar15 + iVar6 + 0x2540) = 0x0;
                            piVar4 = (int *)(*piVar15 + iVar6 + 0x2570);
                            if (*piVar4 < 0x4) {
                                *piVar4 = 0x0;
                            }
                            *(undefined4 *)(*piVar15 + iVar6 + 0x2590) = 0x0;
                            piVar4 = (int *)(*piVar15 + iVar6 + 0x25c0);
                            if (*piVar4 < 0x4) {
                                *piVar4 = 0x0;
                            }
                            *(undefined4 *)(*piVar15 + iVar6 + 0x25e0) = 0x0;
                            piVar4 = (int *)(*piVar15 + iVar6 + 0x2610);
                            if (*piVar4 < 0x4) {
                                *piVar4 = 0x0;
                            }
                            *(undefined4 *)(*piVar15 + iVar6 + 0x2630) = 0x0;
                            piVar4 = (int *)(*piVar15 + iVar6 + 0x2660);
                            if (*piVar4 < 0x4) {
                                *piVar4 = 0x0;
                            }
                            *(undefined4 *)(*piVar15 + iVar6 + 0x2680) = 0x0;
                            piVar4 = (int *)(*piVar15 + iVar6 + 0x26b0);
                            if (*piVar4 < 0x4) {
                                *piVar4 = 0x0;
                            }
                            *(undefined4 *)(*piVar15 + iVar6 + 0x26d0) = 0x0;
                            piVar4 = (int *)(*piVar15 + iVar6 + 0x2700);
                            if (*piVar4 < 0x4) {
                                *piVar4 = 0x0;
                            }
                            *(undefined4 *)(*piVar15 + iVar6 + 0x2720) = 0x0;
                            piVar4 = (int *)(*piVar15 + iVar6 + 0x2750);
                            if (*piVar4 < 0x4) {
                                *piVar4 = 0x0;
                            }
                            iVar10 += 0x7;
                            *(undefined4 *)(*piVar15 + iVar6 + 0x2770) = 0x0;
                            iVar6 += 0x280;
                            iVar5 += -0x1;
                        } while (iVar5 != 0x0);
                        *(undefined2 *)(puVar7 + 0x1d516) = 0x260;
                        *(undefined2 *)(puVar7 + 0x1d514) = 0x354;
                        if (**ppiVar11 != 0x9) {
                            Init2DGameOverSmoke(*piVar15,iVar1,0x0,iVar6,iVar10);
                        }
                        *(undefined4 *)(*piVar15 + 0x4acc) = 0x0;
                        if (**ppiVar11 != 0x9) {
                            *(undefined4 *)(*piVar15 + 0x4adc) = 0x27;
                        }
                    }
                    puVar2 = puVar2 + 0x110;
                    piVar15 = piVar15 + 0x1;
                    piVar13 = piVar13 + 0x1;
                    puVar7 = puVar7 + 0x28;
                    ppiVar11 = ppiVar11 + 0x1;
                }
                gOverflow = 0x0;
                gTheGame._120356_4_ = 0x0;
                gMain = 0x38f;
                gWhatever = 0x0;
                PlaySE(SFX_INIT_TABLE,0x117);
                FadeOutSong(last_song_handle,0x3c);
                break;
            case 0x38f:
                piVar4 = local_4c;
                puVar2 = puVar14;
                for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
                    if ((*(int *)(puVar2 + 0x16000) != 0x1) && (*piVar13 == 0x0)) {
                        GameOverSmoke(*piVar4);
                        DeadBlocksShakeTwo2D(*piVar4,iVar1);
                        ChangeDeadFace(*piVar4);
                    }
                    puVar2 = puVar2 + 0x110;
                    piVar13 = piVar13 + 0x1;
                    piVar4 = piVar4 + 0x1;
                }
                break;
            case 0x390:
                iVar6 = 0x0;
                piVar4 = piVar15;
                iVar1 = gTheGame._120328_4_;
                if (0x0 < gTheGame._120328_4_) {
                    do {
                        if (*(int *)(*piVar4 + 0x4acc) != 0x0) {
                            iVar10 = 0x0;
                            *(int *)(local_4c[iVar6] + 0x4acc) =
                                 *(int *)(local_4c[iVar6] + 0x4acc) + -0x1;
                            break;
                        }
                        piVar4 = piVar4 + 0x1;
                        iVar6 += 0x1;
                        iVar1 += -0x1;
                    } while (iVar1 != 0x0);
                }
                if (iVar10 == -0x1) {
                    for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
                        if (*piVar13 == -0x1) {
                            *(undefined4 *)(*piVar15 + 0x4adc) = 0x32;
                        }
                        piVar13 = piVar13 + 0x1;
                        piVar15 = piVar15 + 0x1;
                    }
                    gMain = 0x391;
                }
                break;
            case 0x391:
                if (iVar6 == -0x1) {
                    gMain = 0x392;
                }
                else {
                    piVar9 = local_4c;
                    piVar4 = piVar13;
                    for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
                        if (*piVar4 == -0x1) {
                            WinWallUp2D(*piVar9,iVar1);
                        }
                        piVar4 = piVar4 + 0x1;
                        piVar9 = piVar9 + 0x1;
                    }
                }
                if (gMain == 0x392) {
                    for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
                        if (*piVar13 == 0x0) {
                            *(undefined4 *)(*piVar15 + 0x4adc) = 0x60;
                        }
                        piVar13 = piVar13 + 0x1;
                        piVar15 = piVar15 + 0x1;
                    }
                }
                break;
            case 0x392:
                piVar4 = local_4c;
                puVar2 = puVar14;
                for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
                    if ((*(int *)(puVar2 + 0x16000) != 0x1) && (*piVar13 == 0x0)) {
                        LoseWallUp2D(*piVar4,iVar1);
                    }
                    puVar2 = puVar2 + 0x110;
                    piVar13 = piVar13 + 0x1;
                    piVar4 = piVar4 + 0x1;
                }
                if (gMain == 0x393) {
                    for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
                        *(undefined4 *)(*piVar15 + 0x4adc) = 0x36;
                        iVar6 = *piVar15;
                        piVar15 = piVar15 + 0x1;
                        *(undefined4 *)(iVar6 + 0x4acc) = 0x3c;
                    }
                }
                break;
            case 0x393:
                piVar4 = local_4c;
                puVar2 = puVar14;
                puVar7 = puVar14;
                for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
                    if ((*(int *)(puVar2 + 0x16000) != 0x1) &&
                       (WallsDown2D(*piVar4,iVar1), *(int *)(*piVar4 + 0x4adc) == 0x31)) {
                        *(undefined2 *)(puVar7 + 0x1d314) = 0x1a4;
                        *(undefined2 *)(puVar7 + 0x1d454) = 0x1a4;
                    }
                    puVar2 = puVar2 + 0x110;
                    piVar4 = piVar4 + 0x1;
                    puVar7 = puVar7 + 0x28;
                }
                break;
            case 0x394:
                puVar2 = puVar14;
                for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
                    if (*(int *)(puVar2 + 0x16000) != 0x1) {
                        *(undefined2 *)(gTheGame + (iVar1 + gTheGame._120328_4_) * 0x28 + 0x1d314) =
                             0x2d0;
                        *(undefined4 *)(*piVar15 + 0x4adc) = 0xffffffff;
                        *(undefined4 *)(*piVar15 + 0x4acc) = 0x0;
                    }
                    puVar2 = puVar2 + 0x110;
                    piVar15 = piVar15 + 0x1;
                }
                gWhatever = 0x0;
                gMain = 0x396;
                break;
            case 0x396:
                if (iVar6 == -0x1) {
                    puVar7 = gTheGame;
                    piVar4 = local_4c;
                    puVar2 = puVar14;
                    for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
                        if (*(int *)(puVar2 + 0x16000) != 0x1) {
                            AnimateDraw2D(*piVar4,puVar7 + 0x1d308,puVar7 + 0x1d448);
                        }
                        puVar2 = puVar2 + 0x110;
                        puVar7 = puVar7 + 0x28;
                        piVar4 = piVar4 + 0x1;
                    }
                }
                else {
                    puVar7 = gTheGame;
                    piVar4 = local_4c;
                    puVar2 = puVar14;
                    for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
                        if (*(int *)(puVar2 + 0x16000) != 0x1) {
                            pon_Animate2DRanking4p
                                      (*piVar4,puVar7 + 0x1d308,puVar7 + 0x1d448,
                                       *(undefined4 *)(puVar2 + 0x15f00),0x0);
                            pon_SmallStars4p(*piVar4);
                        }
                        puVar2 = puVar2 + 0x110;
                        puVar7 = puVar7 + 0x28;
                        piVar4 = piVar4 + 0x1;
                    }
                }
                puVar2 = puVar14;
                for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
                    if (*(int *)(puVar2 + 0x16000) != 0x1) {
                        AnimatePushKey((iVar1 + gTheGame._120328_4_) * 0x28 + 0x2be150);
                    }
                    puVar2 = puVar2 + 0x110;
                }
                gWhatever += 0x1;
            }
        }
        if (gTheGame._120332_4_ != 0x1) {
            return;
        }
        piVar4 = local_4c;
        for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
            if (*(int *)(puVar14 + 0x16000) != 0x1) {
                UpdateAnimation(*piVar4,iVar1,0x0);
            }
            puVar14 = puVar14 + 0x110;
            piVar4 = piVar4 + 0x1;
        }
        return;
    }
    if (((gTheGame._89856_4_ == 0x7) &&
        (((gSelection == 0x78 || (gSelection == 0x82)) ||
         ((gSelection == 0xaa && (gTheGame._120360_4_ != 0x5)))))) &&
       (gTheGame._102356_4_ == gTheGame._102360_4_)) {
        uVar12 = 0x4bf384;
    }
    if (false) goto switchD_00067a9c_caseD_394;
    switch(gMain) {
    case 0x38e:
        if (gSelection == 0xaa) {
            UpdatePlayerStageClear(0x2b6d48,gTheGame._120364_4_,gTheGame._120368_4_);
        }
        else if ((gSelection < 0xaa) && (gSelection == 0x82)) {
            UpdatePlayerPuzzle(0x2b6d48,gTheGame._120360_4_,gTheGame._120364_4_);
        }
        LoadGameOver2D();
        iVar1 = gSelection;
        if (((gSelection != 0xaa) || (gTheGame._120360_4_ != 0x5)) && (gTheGame._89856_4_ == 0x8)) {
            *(undefined4 *)(gTheGame + gTheGame._102356_4_ * 0x20 + 0x16384) = 0xffffffff;
            gTheGame._102356_4_ = gTheGame._102364_4_ >> 0x10;
            uVar3 = gTheGame._102364_4_ >> 0xb & 0x1fffe0;
            *(undefined4 *)(gTheGame + uVar3 + 0x16384) =
                 *(undefined4 *)(gTheGame + uVar3 + 0x16380);
        }
        if (iVar1 == 0x8c) {
LAB_00067bb8:
            gTheGame._120064_4_ = 0x0;
            gTheGame._89868_4_ = 0x0;
        }
        else if (iVar1 < 0x8c) {
            if ((iVar1 == 0x82) || ((iVar1 < 0x82 && (iVar1 == 0x78)))) {
                gTheGame._120064_4_ = 0xffffffff;
            }
        }
        else if ((iVar1 == 0xbe) || ((iVar1 < 0xbe && (iVar1 == 0xaa)))) goto LAB_00067bb8;
        gGameStatus &= 0xffdf;
        Init2DIcons(gTheGame);
        Init2DExplosion(gTheGame);
        gTheGame._120356_4_ = 0x0;
        gTheGame._117072_2_ = 0xfd80;
        gTheGame._117048_2_ = 0xfd80;
        if (gTheGame._89856_4_ == 0x8) {
            Init2DGameOverSmoke(gTheGame,0x0);
        }
        gMain = 0x38f;
        gWhatever = 0x0;
        gTheGame._19148_4_ = 0x0;
        gTheGame._19164_4_ = 0x25;
        if (gTheGame._89856_4_ == 0x8) {
            PlaySE(SFX_INIT_TABLE,0x3d);
            if (0x82 < gSelection) {
                PlaySE(SFX_INIT_TABLE,0x118);
            }
        }
        else if (gSelection == 0xbe) {
            PlaySE(SFX_INIT_TABLE,0x117);
        }
        else {
            PlaySE(SFX_INIT_TABLE,0x3e);
            if (gTheGame._120360_4_ != 0x5) {
                if (gTheGame._120368_4_ == 0x5) {
                    PlaySE(SFX_INIT_TABLE,0x3c);
                }
                else {
                    PlaySE(SFX_INIT_TABLE,0x3b);
                }
            }
        }
        FadeOutSong(last_song_handle,0x3c);
        break;
    case 0x38f:
        if (gTheGame._89856_4_ == 0x8) {
            GameOverSmoke(gTheGame);
            DeadBlocksShakeOne2D(gTheGame);
            AllDeadBlocks(gTheGame);
        }
        else {
            AllDeadFaces(gTheGame);
        }
        if (gMain == 0x390) {
            gTheGame._19148_4_ = 0x28;
        }
        break;
    case 0x390:
        if (gTheGame._89856_4_ == 0x8) {
            KillRow2D(gTheGame);
            if (gMain == 0x391) {
                Init2DTetrisBlocks(gTheGame,0x0);
                Init2DNewRow(gTheGame);
            }
        }
        else {
            gTheGame._19148_4_ += -0x1;
            if ((gTheGame._19148_4_ == 0x0) && (gMain = 0x391, gSelection == 0xbe)) {
                Init2DTetrisBlocks(gTheGame,0x0);
                Init2DNewRow(gTheGame);
            }
        }
        break;
    case 0x391:
        gWhatever += 0x1;
        if ((gSelection == 0x8c) || (gSelection == 0xbe)) {
            if (gTheGame._19084_4_ < 0x2710) {
                iVar1 = 0x0;
            }
            else {
                iVar1 = DoGameOverStat(gTheGame);
                if (gWhatever < 0x5a) {
                    gWhatever += 0x1;
                }
                else if (gWhatever == 0x5a) {
                    gWhatever = 0x5b;
                    ForceLoadSong(0x38,0x0);
                    PlayMIDI(BGM_INIT_TABLE,0x38,0x0,0x0);
                }
            }
        }
        else if (gTheGame._89856_4_ == 0x7) {
            iVar1 = EndingExplosion(gTheGame);
            UpdateExplosion(gTheGame);
        }
        else {
            iVar1 = 0x0;
        }
        if (iVar1 == 0x0) {
            gMain = 0x392;
        }
        if (gMain == 0x392) {
            Init2DTetrisBlocks(gTheGame,0x0);
            Init2DNewRow(gTheGame);
            Init2DIcons(gTheGame);
            if ((gSelection < 0x83) && (gTheGame._89856_4_ == 0x7)) {
                gTheGame._19164_4_ = 0x50;
            }
            else if ((gSelection == 0xaa) && (gTheGame._89856_4_ == 0x7)) {
                gTheGame._19164_4_ = 0x50;
            }
            else {
                gTheGame._19164_4_ = 0x59;
            }
        }
        break;
    case 0x392:
        GameOverSign(gTheGame,0x2b6d48);
        if (gMain == 0x393) {
            gTheGame._120356_4_ = 0x0;
            gTheGame._19148_4_ = 0x0;
        }
        break;
    case 0x393:
        gTheGame._119612_2_ = 0x280;
        if (gTheGame._89856_4_ == 0x7) {
            if ((gSelection < 0x83) || (gSelection == 0xaa)) {
                ForceLoadSong(0x25,0x0);
                PlayMIDI(BGM_INIT_TABLE,0x25,0x0,0x0);
            }
        }
        else if (((gSelection != 0x8c) && (gSelection != 0xbe)) || (gTheGame._19084_4_ < 0x2710)) {
            ForceLoadSong(0x24,0x0);
            PlayMIDI(BGM_INIT_TABLE,0x24,0x0,0x0);
        }
        gWhatever = 0x0;
        gMain = 0x396;
        break;
    case 0x396:
        AnimateGameOver2D(gTheGame);
        if ((gSelection == 0xbe) && (gTheGame._19084_4_ < 0x2710)) {
            if (gWhatever < 0x5a) {
                gWhatever += 0x1;
            }
            else if ((gWhatever == 0x5a) && (gTheGame._89856_4_ == 0x7)) {
                gWhatever = 0x5b;
                ForceLoadSong(0x25,0x0);
                PlayMIDI(BGM_INIT_TABLE,0x25,0x0,0x0);
            }
        }
        else if (((((gSelection == 0x8c) && (gTheGame._120360_4_ == 0x0)) ||
                  ((gSelection == 0xaa && (gTheGame._89856_4_ == 0x7)))) ||
                 ((gSelection == 0x82 && (gTheGame._89856_4_ == 0x7)))) || (gSelection == 0x78)) {
            AnimatePushKey(0x2be178);
            gWhatever += 0x1;
        }
    }
switchD_00067a9c_caseD_394:
    if (gTheGame._120332_4_ == 0x1) {
        UpdateAnimation(gTheGame,0x0,uVar12);
    }
    return;
}



void DoGameOver3D(void)

{
    char *pcVar1;
    int iVar2;
    undefined1 *puVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    
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
    iVar2 = 0x1;
    if (true) {
        do {
            *(undefined4 *)(iVar5 + 0x1c980) = 0xffffffff;
            iVar5 += 0x20;
            iVar2 += -0x1;
        } while (iVar2 != 0x0);
    }
    puVar3 = gTheGame;
    iVar2 = 0x2a6608;
    if (gMain == 0x38e) {
        SelectCursorPos = 0x0;
        SelectCursorSaveYesNo = 0x0;
        g_winnerNo = 0x0;
        g_MatchEnd = 0x0;
    }
    if ((0x394 < gMain) && (iVar5 = DoGameOverInput(), iVar5 != 0x0)) {
        return;
    }
    if (gTheGame._120328_4_ != 0x1) {
        if (gTheGame._120328_4_ != 0x2) {
            return;
        }
        iVar6 = 0x0;
        iVar5 = 0x0;
        if (gTheGame._89856_4_ != gTheGame._90128_4_) {
            if ((gTheGame._89856_4_ == 0x8) || (gTheGame._90128_4_ == 0x7)) {
                g_winnerNo = 0x1;
                iVar5 = -0x1;
            }
            else {
                g_winnerNo = 0x0;
                iVar6 = -0x1;
            }
        }
        if (true) {
            switch(gMain) {
            case 0x38e:
                if (iVar6 != iVar5) {
                    if (iVar6 == 0x0) {
                        if (iVar5 != 0x0) {
                            gTheGame._41636_4_ += 0x1;
                        }
                    }
                    else {
                        gTheGame._19172_4_ += 0x1;
                    }
                }
                if ((gGameStatus & 0x40) == 0x0) {
                    iVar4 = 0x2;
                }
                else {
                    iVar4 = 0x1;
                }
                if (gTheGame._19172_4_ == iVar4) {
                    UpdateRecord2(iVar6,iVar5);
                    g_MatchEnd = 0x1;
                }
                else if (gTheGame._41636_4_ == iVar4) {
                    UpdateRecord2(iVar6,iVar5);
                    g_MatchEnd = 0x1;
                }
                LoadGameOver3D();
                InitFlic();
                Init3DIcons(gTheGame);
                Init3DIcons(0x2a6608);
                Init3DExplosion(gTheGame);
                Init3DExplosion(0x2a6608);
                gTheGame._120356_4_ = 0x0;
                iVar7 = 0x8;
                iVar4 = 0x0;
                do {
                    if (*(int *)(puVar3 + 0x2520) < 0x4) {
                        *(undefined4 *)(puVar3 + 0x2520) = 0x0;
                    }
                    if (*(int *)(iVar2 + 0x2520) < 0x4) {
                        *(undefined4 *)(iVar2 + 0x2520) = 0x0;
                    }
                    *(undefined4 *)(puVar3 + 0x2540) = 0x0;
                    *(undefined4 *)(iVar2 + 0x2540) = 0x0;
                    if (*(int *)(puVar3 + 0x2570) < 0x4) {
                        *(undefined4 *)(puVar3 + 0x2570) = 0x0;
                    }
                    if (*(int *)(iVar2 + 0x2570) < 0x4) {
                        *(undefined4 *)(iVar2 + 0x2570) = 0x0;
                    }
                    *(undefined4 *)(puVar3 + 0x2590) = 0x0;
                    *(undefined4 *)(iVar2 + 0x2590) = 0x0;
                    if (*(int *)(puVar3 + 0x25c0) < 0x4) {
                        *(undefined4 *)(puVar3 + 0x25c0) = 0x0;
                    }
                    if (*(int *)(iVar2 + 0x25c0) < 0x4) {
                        *(undefined4 *)(iVar2 + 0x25c0) = 0x0;
                    }
                    *(undefined4 *)(puVar3 + 0x25e0) = 0x0;
                    *(undefined4 *)(iVar2 + 0x25e0) = 0x0;
                    if (*(int *)(puVar3 + 0x2610) < 0x4) {
                        *(undefined4 *)(puVar3 + 0x2610) = 0x0;
                    }
                    if (*(int *)(iVar2 + 0x2610) < 0x4) {
                        *(undefined4 *)(iVar2 + 0x2610) = 0x0;
                    }
                    *(undefined4 *)(puVar3 + 0x2630) = 0x0;
                    *(undefined4 *)(iVar2 + 0x2630) = 0x0;
                    if (*(int *)(puVar3 + 0x2660) < 0x4) {
                        *(undefined4 *)(puVar3 + 0x2660) = 0x0;
                    }
                    if (*(int *)(iVar2 + 0x2660) < 0x4) {
                        *(undefined4 *)(iVar2 + 0x2660) = 0x0;
                    }
                    *(undefined4 *)(puVar3 + 0x2680) = 0x0;
                    puVar3 = puVar3 + 0x190;
                    iVar4 += 0x4;
                    *(undefined4 *)(iVar2 + 0x2680) = 0x0;
                    iVar2 += 0x190;
                    iVar7 += -0x1;
                } while (iVar7 != 0x0);
                if (gTheGame._89856_4_ == 0x8) {
                    Init3DGameOverSmoke(gTheGame,0x0,iVar2,iVar4);
                }
                if (gTheGame._90128_4_ == 0x8) {
                    Init3DGameOverSmoke(0x2a6608,0x1);
                }
                gMain = 0x38f;
                gWhatever = 0x0;
                gTheGame._19148_4_ = 0x0;
                gTheGame._41612_4_ = 0x0;
                if (gTheGame._89856_4_ == 0x8) {
                    gTheGame._19164_4_ = 0x27;
                }
                if (gTheGame._90128_4_ == 0x8) {
                    gTheGame._41628_4_ = 0x27;
                }
                if (iVar6 == iVar5) {
                    PlaySE(SFX_INIT_TABLE,0x118);
                }
                else {
                    PlaySE(SFX_INIT_TABLE,0x117);
                }
                FadeOutSong(last_song_handle,0x3c);
                break;
            case 0x38f:
                if ((iVar6 == 0x0) && (GameOverSmoke(gTheGame), -0x1 < gTheGame._19164_4_)) {
                    gTheGame._18280_4_ =
                         gTheGame._18280_4_ +
                         (float)((double)CONCAT44(0x43300000,
                                                  (int)(char)dead2Shake[gTheGame._19164_4_] ^
                                                  0x80000000) - 4503601774854144.0) / 250.0;
                    ChangeDeadFace(gTheGame);
                }
                if ((iVar5 == 0x0) && (GameOverSmoke(0x2a6608), -0x1 < gTheGame._41628_4_)) {
                    gTheGame._40744_4_ =
                         gTheGame._40744_4_ +
                         (float)((double)CONCAT44(0x43300000,
                                                  (int)(char)dead2Shake[gTheGame._41628_4_] ^
                                                  0x80000000) - 4503601774854144.0) / 250.0;
                    ChangeDeadFace(0x2a6608);
                }
                gTheGame._19164_4_ += -0x1;
                gTheGame._41628_4_ += -0x1;
                if (((gWhatever == 0x0) && (gTheGame._19164_4_ < -0x3c)) &&
                   (gTheGame._41628_4_ < -0x3c)) {
                    gWhatever = 0x1;
                }
                if ((gTheGame._19164_4_ < -0x3c) && (gTheGame._41628_4_ < -0x3c)) {
                    gMain = 0x390;
                    gTheGame._19148_4_ = 0x0;
                    gTheGame._41612_4_ = 0x0;
                }
                break;
            case 0x390:
                gTheGame._19148_4_ += 0x1;
                if (0x4 < gTheGame._19148_4_) {
                    gTheGame._18280_4_ = gTheGame._18280_4_ - 0.008;
                    if (gTheGame._19148_4_ == (gTheGame._19148_4_ / 0x28) * 0x28) {
                        iVar2 = 0x2;
                        puVar3 = gTheGame + (gTheGame._19148_4_ / 0x28 - 0x1) * 0x318;
                        do {
                            if (*(int *)(puVar3 + 0x10) != 0x9) {
                                *(undefined4 *)(puVar3 + 0x10) = 0x0;
                            }
                            if (*(int *)(puVar3 + 0x3c) != 0x9) {
                                *(undefined4 *)(puVar3 + 0x3c) = 0x0;
                            }
                            if (*(int *)(puVar3 + 0x68) != 0x9) {
                                *(undefined4 *)(puVar3 + 0x68) = 0x0;
                            }
                            if (*(int *)(puVar3 + 0x94) != 0x9) {
                                *(undefined4 *)(puVar3 + 0x94) = 0x0;
                            }
                            if (*(int *)(puVar3 + 0xc0) != 0x9) {
                                *(undefined4 *)(puVar3 + 0xc0) = 0x0;
                            }
                            if (*(int *)(puVar3 + 0xec) != 0x9) {
                                *(undefined4 *)(puVar3 + 0xec) = 0x0;
                            }
                            if (*(int *)(puVar3 + 0x118) != 0x9) {
                                *(undefined4 *)(puVar3 + 0x118) = 0x0;
                            }
                            if (*(int *)(puVar3 + 0x144) != 0x9) {
                                *(undefined4 *)(puVar3 + 0x144) = 0x0;
                            }
                            if (*(int *)(puVar3 + 0x170) != 0x9) {
                                *(undefined4 *)(puVar3 + 0x170) = 0x0;
                            }
                            puVar3 = puVar3 + 0x18c;
                            iVar2 += -0x1;
                        } while (iVar2 != 0x0);
                    }
                    if (gTheGame._89880_4_ == 0x0) {
                        Move3DCursorRight(0x2b6d48,0x0);
                    }
                }
                gTheGame._41612_4_ += 0x1;
                if (0x4 < gTheGame._41612_4_) {
                    gTheGame._40744_4_ = gTheGame._40744_4_ - 0.008;
                    if (gTheGame._41612_4_ == (gTheGame._41612_4_ / 0x28) * 0x28) {
                        iVar5 = 0x2;
                        iVar2 = (gTheGame._41612_4_ / 0x28 - 0x1) * 0x318 + 0x2a6608;
                        do {
                            if (*(int *)(iVar2 + 0x10) != 0x9) {
                                *(undefined4 *)(iVar2 + 0x10) = 0x0;
                            }
                            if (*(int *)(iVar2 + 0x3c) != 0x9) {
                                *(undefined4 *)(iVar2 + 0x3c) = 0x0;
                            }
                            if (*(int *)(iVar2 + 0x68) != 0x9) {
                                *(undefined4 *)(iVar2 + 0x68) = 0x0;
                            }
                            if (*(int *)(iVar2 + 0x94) != 0x9) {
                                *(undefined4 *)(iVar2 + 0x94) = 0x0;
                            }
                            if (*(int *)(iVar2 + 0xc0) != 0x9) {
                                *(undefined4 *)(iVar2 + 0xc0) = 0x0;
                            }
                            if (*(int *)(iVar2 + 0xec) != 0x9) {
                                *(undefined4 *)(iVar2 + 0xec) = 0x0;
                            }
                            if (*(int *)(iVar2 + 0x118) != 0x9) {
                                *(undefined4 *)(iVar2 + 0x118) = 0x0;
                            }
                            if (*(int *)(iVar2 + 0x144) != 0x9) {
                                *(undefined4 *)(iVar2 + 0x144) = 0x0;
                            }
                            if (*(int *)(iVar2 + 0x170) != 0x9) {
                                *(undefined4 *)(iVar2 + 0x170) = 0x0;
                            }
                            iVar2 += 0x18c;
                            iVar5 += -0x1;
                        } while (iVar5 != 0x0);
                    }
                    if (gTheGame._90152_4_ == 0x0) {
                        Move3DCursorRight(0x2b6e58,0x0);
                    }
                }
                iVar2 = 0x0;
                if ((gTheGame._18280_4_ < -1.6) && (gTheGame._40744_4_ < -1.6)) {
                    iVar2 = -0x1;
                }
                if (iVar2 != 0x0) {
                    gMain = 0x391;
                    Init3DTetrisBlocks(gTheGame,0x0);
                    Init3DTetrisBlocks(0x2a6608,0x1);
                    Init3DNewRow(gTheGame);
                    Init3DNewRow(0x2a6608);
                    Init3DAttackBlocks(gTheGame);
                    Init3DAttackBlocks(0x2a6608);
                    gTheGame._19148_4_ = 0x0;
                    gTheGame._41612_4_ = 0x0;
                    gTheGame._19164_4_ = 0x31;
                    gTheGame._41628_4_ = 0x31;
                    PlaySE(SFX_INIT_TABLE,0x41);
                }
                break;
            case 0x391:
                if ((gTheGame._19164_4_ < 0x32) &&
                   (iVar2 = (int)gTheGame._119572_2_,
                   gTheGame._119572_2_ =
                        (short)((iVar2 >> 0x2) - (int)(char)wallsdownShake[gTheGame._19164_4_]) *
                        0x4, 0x1d < iVar2 >> 0x2)) {
                    gTheGame._119892_2_ = gTheGame._119572_2_;
                }
                if ((gTheGame._41628_4_ < 0x32) &&
                   (iVar2 = (int)gTheGame._119612_2_,
                   gTheGame._119612_2_ =
                        (short)((iVar2 >> 0x2) - (int)(char)wallsdownShake[gTheGame._41628_4_]) *
                        0x4, 0x1d < iVar2 >> 0x2)) {
                    gTheGame._119932_2_ = gTheGame._119612_2_;
                }
                gTheGame._19164_4_ += -0x1;
                gTheGame._41628_4_ += -0x1;
                if (gTheGame._19164_4_ < 0x0) {
                    gMain = 0x392;
                }
                break;
            case 0x392:
                if ((gGameStatus & 0x40) == 0x0) {
                    iVar2 = 0x2;
                }
                else {
                    iVar2 = 0x1;
                }
                if (gTheGame._19172_4_ == iVar2) {
                    gTheGame._19200_4_ += 0x1;
                    gTheGame._120360_4_ += 0x1;
                    if (0x63 < gTheGame._120360_4_) {
                        gTheGame._19200_4_ = 0x63;
                        gTheGame._120360_4_ = 0x63;
                    }
                }
                else if (gTheGame._41636_4_ == iVar2) {
                    gTheGame._41664_4_ += 0x1;
                    gTheGame._120384_4_ += 0x1;
                    if (0x63 < gTheGame._120384_4_) {
                        gTheGame._41664_4_ = 0x63;
                        gTheGame._120384_4_ = 0x63;
                    }
                }
                if (iVar6 != 0x0) {
                    if (gTheGame._19172_4_ == 0x1) {
                        Init3DCircleStars(0x0,0x0);
                    }
                    else {
                        Init3DCircleStars(0x0,0x1);
                    }
                    PlaySE(SFX_INIT_TABLE,0x144);
                }
                if (iVar5 != 0x0) {
                    if (gTheGame._41636_4_ == 0x1) {
                        Init3DCircleStars(0x1,0x0);
                    }
                    else {
                        Init3DCircleStars(0x1,0x1);
                    }
                    PlaySE(SFX_INIT_TABLE,0x144);
                }
                gTheGame._19164_4_ = -0x1;
                gTheGame._41628_4_ = -0x1;
                gTheGame._19148_4_ = 0x0;
                gTheGame._41612_4_ = 0x0;
                gWhatever = 0x0;
                if (iVar6 == iVar5) {
                    gMain = 0x394;
                }
                else {
                    gMain = 0x393;
                }
                break;
            case 0x393:
                iVar2 = CircleStars();
                if (iVar2 != 0x0) {
                    gMain = 0x394;
                }
                break;
            case 0x394:
                gTheGame._119652_2_ = 0x2d0;
                gTheGame._119692_2_ = 0x2d0;
                if (iVar6 == 0x0) {
                    if (iVar5 != 0x0) {
                        Init3DSmallStars(0x1);
                    }
                }
                else {
                    Init3DSmallStars(0x0);
                }
                gMain = 0x395;
                break;
            case 0x395:
                if (iVar6 == iVar5) {
                    AnimateDraw3D(gTheGame,0x2be150,0x2be290);
                    AnimateDraw3D(0x2a6608,0x2be178,0x2be2b8);
                }
                else {
                    if (iVar6 == 0x0) {
                        AnimateLose3D(gTheGame,0x2be150,0x2be290);
                    }
                    else {
                        AnimateWin3D(gTheGame,0x2be150,0x2be290);
                    }
                    if (iVar5 == 0x0) {
                        AnimateLose3D(0x2a6608,0x2be178,0x2be2b8);
                    }
                    else {
                        AnimateWin3D(0x2a6608,0x2be178,0x2be2b8);
                    }
                    SmallStars();
                }
                AnimatePushKey(0x2be1a0);
                AnimatePushKey(0x2be1c8);
                gWhatever += 0x1;
                break;
            case 0x397:
                if (iVar6 == 0x0) {
                    AnimateLose3D(gTheGame,0x2be150,0x2be290);
                }
                else {
                    AnimateWin3D(gTheGame,0x2be150,0x2be290);
                }
                if (iVar5 == 0x0) {
                    AnimateLose3D(0x2a6608,0x2be178,0x2be2b8);
                }
                else {
                    AnimateWin3D(0x2a6608,0x2be178,0x2be2b8);
                }
                SmallStars();
                AnimatePushKey(0x2be1a0);
                AnimatePushKey(0x2be1c8);
                gWhatever += 0x1;
            }
        }
        Update3DCursor(gTheGame,0x2b6d48);
        Update3DCursor(0x2a6608,0x2b6e58);
        Check3DVisibleBlocks(gTheGame,0x2b6d48);
        Check3DVisibleBlocks(0x2a6608,0x2b6e58);
        return;
    }
    if (false) goto switchD_00069a7c_caseD_394;
    switch(gMain) {
    case 0x38e:
        if (gSelection == 0xaa) {
            UpdatePlayerStageClear(0x2b6d48,gTheGame._120364_4_,gTheGame._120368_4_);
        }
        else if ((gSelection < 0xaa) && (gSelection == 0x82)) {
            UpdatePlayerPuzzle(0x2b6d48,gTheGame._120360_4_,gTheGame._120364_4_);
        }
        LoadGameOver3D();
        InitFlic();
        if (gSelection == 0x8c) {
LAB_00069b10:
            gTheGame._120064_4_ = 0x0;
            gTheGame._89868_4_ = 0x0;
        }
        else if (gSelection < 0x8c) {
            if ((gSelection == 0x82) || ((gSelection < 0x82 && (gSelection == 0x78)))) {
                gTheGame._120064_4_ = 0xffffffff;
            }
        }
        else if ((gSelection == 0xbe) || ((gSelection < 0xbe && (gSelection == 0xaa))))
        goto LAB_00069b10;
        gGameStatus &= 0xffdf;
        Init3DIcons(gTheGame);
        Init3DExplosion(gTheGame);
        gTheGame._120356_4_ = 0x0;
        gTheGame._117072_2_ = 0xfd80;
        gTheGame._117048_2_ = 0xfd80;
        if (gTheGame._89856_4_ == 0x8) {
            Init3DGameOverSmoke(gTheGame,0x0);
        }
        gMain = 0x38f;
        gWhatever = 0x0;
        gTheGame._19148_4_ = 0x0;
        gTheGame._19164_4_ = 0x25;
        if (gTheGame._89856_4_ == 0x8) {
            PlaySE(SFX_INIT_TABLE,0x3d);
            if (gSelection != 0x82) {
                PlaySE(SFX_INIT_TABLE,0x118);
            }
        }
        else if (gSelection == 0xbe) {
            PlaySE(SFX_INIT_TABLE,0x117);
        }
        else {
            PlaySE(SFX_INIT_TABLE,0x3e);
            if (gTheGame._120360_4_ != 0x5) {
                if (gTheGame._120368_4_ == 0x5) {
                    PlaySE(SFX_INIT_TABLE,0x3c);
                }
                else {
                    PlaySE(SFX_INIT_TABLE,0x3b);
                }
            }
        }
        FadeOutSong(last_song_handle,0x3c);
        break;
    case 0x38f:
        if (gTheGame._89856_4_ == 0x8) {
            GameOverSmoke(gTheGame);
            if (-0x1 < gTheGame._19164_4_) {
                pcVar1 = dead1Shake + gTheGame._19164_4_;
                gTheGame._19164_4_ += -0x1;
                gTheGame._18280_4_ =
                     gTheGame._18280_4_ +
                     (float)((double)CONCAT44(0x43300000,(int)*pcVar1 ^ 0x80000000) -
                            4503601774854144.0) / 250.0;
            }
            AllDeadBlocks(gTheGame);
        }
        else {
            AllDeadFaces(gTheGame);
        }
        if (gMain == 0x390) {
            gTheGame._19148_4_ = 0x28;
        }
        break;
    case 0x390:
        if (gTheGame._89856_4_ == 0x8) {
            KillRow3D(gTheGame,0x2b6d48);
        }
        else {
            gTheGame._19148_4_ -= 0x1;
            if ((gTheGame._19148_4_ == 0x0) && (gMain = 0x391, gSelection == 0xbe)) {
                Init3DTetrisBlocks(gTheGame,0x0);
                Init3DNewRow(gTheGame);
            }
        }
        break;
    case 0x391:
        gWhatever += 0x1;
        if (gTheGame._19148_4_ == 0x0) {
            if ((gSelection == 0x8c) || (gSelection == 0xbe)) {
                if (gTheGame._19084_4_ < 0x2710) {
                    iVar2 = 0x0;
                }
                else {
                    iVar2 = DoGameOverStat(gTheGame);
                    if (gWhatever < 0x5a) {
                        gWhatever += 0x1;
                    }
                    else if (gWhatever == 0x5a) {
                        gWhatever = 0x5b;
                        ForceLoadSong(0x38,0x0);
                        PlayMIDI(BGM_INIT_TABLE,0x38,0x0,0x0);
                    }
                }
            }
            else if (gTheGame._89856_4_ == 0x7) {
                iVar2 = EndingExplosion(gTheGame);
                UpdateExplosion(gTheGame);
            }
            else {
                iVar2 = 0x0;
            }
            if (iVar2 == 0x0) {
                gMain = 0x392;
            }
            if (gMain == 0x392) {
                Init3DTetrisBlocks(gTheGame,0x0);
                Init3DNewRow(gTheGame);
                Init3DIcons(gTheGame);
                if ((gSelection < 0x83) && (gTheGame._89856_4_ == 0x7)) {
                    gTheGame._19164_4_ = 0x50;
                }
                else if ((gSelection == 0xaa) && (gTheGame._89856_4_ == 0x7)) {
                    gTheGame._19164_4_ = 0x50;
                }
                else {
                    gTheGame._19164_4_ = 0x59;
                }
            }
        }
        else {
            gTheGame._19148_4_ -= 0x1;
        }
        break;
    case 0x392:
        GameOverSign(gTheGame,0x2b6d48);
        if (gMain == 0x393) {
            gTheGame._120356_4_ = 0x0;
            gTheGame._19148_4_ = 0x0;
        }
        break;
    case 0x393:
        gTheGame._119612_2_ = 0x280;
        if (gTheGame._89856_4_ == 0x7) {
            if ((gSelection < 0x83) || (gSelection == 0xaa)) {
                ForceLoadSong(0x25,0x0);
                PlayMIDI(BGM_INIT_TABLE,0x25,0x0,0x0);
            }
        }
        else if (((gSelection != 0x8c) && (gSelection != 0xbe)) || (gTheGame._19084_4_ < 0x2710)) {
            ForceLoadSong(0x24,0x0);
            PlayMIDI(BGM_INIT_TABLE,0x24,0x0,0x0);
        }
        gWhatever = 0x0;
        gMain = 0x395;
        break;
    case 0x395:
    case 0x396:
    case 0x397:
        AnimateGameOver3D(gTheGame);
        if ((gSelection == 0xbe) && (gTheGame._19084_4_ < 0x2710)) {
            if (gWhatever < 0x5a) {
                gWhatever += 0x1;
            }
            else if ((gWhatever == 0x5a) && (gTheGame._89856_4_ == 0x7)) {
                gWhatever = 0x5b;
                ForceLoadSong(0x25,0x0);
                PlayMIDI(BGM_INIT_TABLE,0x25,0x0,0x0);
            }
        }
        else if (((gSelection == 0xaa) && (gTheGame._89856_4_ == 0x7)) ||
                ((gSelection == 0x82 && (gTheGame._89856_4_ == 0x7)))) {
            AnimatePushKey(0x2be178);
            gWhatever += 0x1;
        }
    }
switchD_00069a7c_caseD_394:
    Check3DVisibleBlocks(gTheGame,0x2b6d48);
    return;
}



void DoGameOver(void)

{
    SetGameFade();
    if (gTheGame._120332_4_ == 0x2) {
        DoGameOver3D();
    }
    else {
        DoGameOver2D();
    }
    if (gTheGame._120328_4_ < 0x3) {
        UpdateText();
    }
    else {
        pon_UpdateText4p();
    }
    return;
}



void SaveRom(void)

{
    menuSaveData((int)*gPlayer._0_4_);
    if ((gTheGame._120328_4_ == 0x2) && (gSelection != 0x96)) {
        menuSaveData((int)*gPlayer._4_4_);
    }
    return;
}


