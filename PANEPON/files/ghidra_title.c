


void titleTickRing(int param_1)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    double local_10;
    double local_8;
    
    iVar3 = 0x2;
    do {
        if (*(int *)(param_1 + 0x8) != 0x0) {
            if (*(int *)(param_1 + 0x10) < 0x1) {
                iVar1 = *(int *)(param_1 + 0xc) + 0x1;
                *(int *)(param_1 + 0xc) = iVar1;
                if (iVar1 < 0x29) {
                    *(int *)(param_1 + 0x8) = *(int *)(param_1 + 0x8) + *(int *)(param_1 + 0x14);
                    uVar2 = *(uint *)(param_1 + 0xc);
                    if ((int)uVar2 < 0x10) {
                        local_8 = (double)CONCAT44(0x43300000,uVar2 ^ 0x80000000);
                        *(int *)(param_1 + 0x18) =
                             (int)((float)(local_8 - 4503601774854144.0) * 0.0625 * 102.0) + 0x19;
                    }
                    else {
                        local_10 = (double)CONCAT44(0x43300000,uVar2 - 0x10 ^ 0x80000000);
                        *(int *)(param_1 + 0x18) =
                             0x7f - (int)(((float)(local_10 - 4503601774854144.0) / 24.0) * 102.0);
                    }
                }
                else {
                    *(undefined4 *)(param_1 + 0x8) = 0x0;
                }
            }
            else {
                *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -0x1;
                *(undefined4 *)(param_1 + 0xc) = 0x0;
            }
        }
        param_1 += 0x1c;
        iVar3 += -0x1;
    } while (iVar3 != 0x0);
    return;
}



void titleDrawRing(int *param_1,undefined4 *param_2)

{
    short sVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    short sVar5;
    uint uVar6;
    uint uVar7;
    short sVar8;
    int iVar9;
    undefined4 *puVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    
    iVar14 = 0x2;
    puVar10 = (undefined4 *)*param_2;
    iVar11 = **(int **)(*(int *)(gpData + 0x50) + 0x2c);
    iVar13 = -0x1;
    do {
        if ((param_1[0x4] == 0x0) && (iVar12 = param_1[0x2] >> 0x10, iVar12 != 0x0)) {
            if (iVar13 != 0x0) {
                *puVar10 = 0xe7000000;
                puVar10[0x1] = 0x0;
                puVar10[0x2] = 0xe3000f00;
                puVar10[0x3] = 0x0;
                puVar10[0x4] = 0xe3001001;
                puVar10[0x5] = 0x0;
                puVar10[0x6] = 0xe3000c00;
                puVar10[0x7] = 0x0;
                puVar10[0x8] = 0xe2001e01;
                puVar10[0x9] = 0x0;
                puVar10[0xa] = 0xe3000a01;
                puVar10[0xb] = 0x0;
                puVar10[0xc] = 0xe3001201;
                puVar10[0xd] = 0x2000;
                puVar10[0xe] = 0xe200001c;
                puVar10[0xf] = 0x504240;
                puVar10[0x10] = 0xd9fdf9fe;
                puVar10[0x11] = 0x0;
                puVar10[0x12] = 0xd9ffffff;
                puVar10[0x13] = 0x200004;
                puVar10[0x14] = 0xfc119623;
                puVar10[0x15] = 0xff2fffff;
                puVar10[0x16] = 0xfd700000;
                puVar10[0x17] = *(undefined4 *)(iVar11 + 0x8);
                puVar10[0x18] = 0xf5700000;
                puVar10[0x19] = 0x7000000;
                puVar10[0x1a] = 0xe6000000;
                puVar10[0x1b] = 0x0;
                puVar10[0x1c] = 0xf3000000;
                uVar2 = *(uint *)(iVar11 + 0xc);
                uVar6 = uVar2 * *(int *)(iVar11 + 0x10) - 0x1;
                if (0x7fe < (int)uVar6) {
                    uVar6 = 0x7ff;
                }
                uVar7 = uVar2 << 0x1 | uVar2 >> 0x1f;
                iVar13 = ((int)uVar7 >> 0x3) +
                         (uint)((int)uVar7 < 0x0 && (uVar2 << 0x1 & 0x6) != 0x0);
                if (iVar13 < 0x1) {
                    iVar13 = 0x1;
                }
                puVar10[0x1d] =
                     (iVar13 + 0x7ff) / iVar13 & 0xfffU | (uVar6 & 0xfff) << 0xc | 0x7000000;
                puVar10[0x1e] = 0xe7000000;
                puVar10[0x1f] = 0x0;
                iVar13 = 0x0;
                puVar10[0x20] =
                     (*(int *)(iVar11 + 0xc) * 0x2 + 0x7 >> 0x3 & 0x1ffU) << 0x9 | 0xf5700000;
                puVar10[0x21] = 0x0;
                puVar10[0x22] = 0xf2000000;
                puVar10[0x23] =
                     (*(int *)(iVar11 + 0xc) + -0x1) * 0x4000 & 0xffc000U |
                     (*(int *)(iVar11 + 0x10) + -0x1) * 0x4 & 0xffcU;
                puVar10 = puVar10 + 0x24;
            }
            iVar9 = *param_1;
            uVar2 = (*(int *)(iVar11 + 0xc) << 0xa) / (iVar12 << 0x1);
            iVar3 = param_1[0x1];
            *puVar10 = 0xfa000000;
            sVar8 = (short)((iVar3 >> 0x10) + iVar12) * 0x4;
            puVar10[0x1] = param_1[0x6] & 0xffU | 0xffffff00;
            uVar6 = (uint)sVar8;
            if (sVar8 < 0x1) {
                uVar6 = 0x0;
            }
            sVar8 = (short)((iVar9 >> 0x10) + iVar12) * 0x4;
            uVar7 = (uint)sVar8;
            if (sVar8 < 0x1) {
                uVar7 = 0x0;
            }
            iVar3 = ((iVar3 >> 0x10) - iVar12) * 0x4;
            sVar8 = (short)iVar3;
            uVar4 = (uint)sVar8;
            puVar10[0x2] = (uVar7 & 0xfff) << 0xc | 0xe4000000 | uVar6 & 0xfff;
            if (sVar8 < 0x1) {
                uVar4 = 0x0;
            }
            sVar1 = (short)((iVar9 >> 0x10) - iVar12) * 0x4;
            uVar6 = (uint)sVar1;
            if (sVar1 < 0x1) {
                uVar6 = 0x0;
            }
            puVar10[0x3] = (uVar6 & 0xfff) << 0xc | uVar4 & 0xfff;
            puVar10[0x4] = 0xe1000000;
            sVar5 = (short)uVar2;
            if (iVar3 < 0x0) {
                if (sVar5 < 0x0) {
                    iVar12 = (int)sVar8 * (int)sVar5 >> 0x7;
                    if (iVar12 < 0x1) {
                        iVar12 = 0x0;
                    }
                }
                else {
                    iVar12 = (int)sVar8 * (int)sVar5 >> 0x7;
                    if (-0x1 < iVar12) {
                        iVar12 = 0x0;
                    }
                }
            }
            else {
                iVar12 = 0x0;
            }
            if (sVar1 < 0x0) {
                if (sVar5 < 0x0) {
                    iVar3 = (int)sVar1 * (int)sVar5 >> 0x7;
                    if (iVar3 < 0x1) {
                        iVar3 = 0x0;
                    }
                }
                else {
                    iVar3 = (int)sVar1 * (int)sVar5 >> 0x7;
                    if (-0x1 < iVar3) {
                        iVar3 = 0x0;
                    }
                }
            }
            else {
                iVar3 = 0x0;
            }
            puVar10[0x5] = iVar3 * -0x10000 | -iVar12 & 0xffffU;
            puVar10[0x6] = 0xf1000000;
            puVar10[0x7] = uVar2 & 0xffff | uVar2 << 0x10;
            puVar10 = puVar10 + 0x8;
        }
        param_1 = param_1 + 0x7;
        iVar14 += -0x1;
    } while (iVar14 != 0x0);
    *param_2 = puVar10;
    return;
}



void titleMakeDust(undefined4 *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
    int iVar1;
    int iVar2;
    uint extraout_r4;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    uint uVar7;
    int iVar8;
    uint uVar9;
    
    pon_osGetTime();
    iVar8 = param_6 / (int)param_2;
    iVar2 = param_5 >> 0x1;
    uVar3 = extraout_r4 ^ 0xa6b99cd;
    param_6 >>= 0x1;
    iVar5 = 0x0;
    if (0x0 < (int)param_2) {
        uVar9 = param_2 >> 0x1;
        if (uVar9 != 0x0) {
            do {
                uVar6 = (int)((uVar3 * 0x4 + 0x2) * (uVar3 * 0x4 + 0x3)) >> 0x2;
                uVar3 = uVar6 & 0xffff;
                iVar1 = uVar6 * 0x4;
                uVar4 = (iVar1 + 0x2) * (iVar1 + 0x3) >> 0x2;
                iVar1 = uVar4 * 0x4;
                uVar7 = (iVar1 + 0x2) * (iVar1 + 0x3) >> 0x2;
                uVar6 = uVar7 & 0xffff;
                param_1[0x2] = (param_3 + ((uVar3 - ((int)uVar3 / param_5) * param_5) - iVar2)) *
                               0x10000;
                param_1[0x3] = (param_4 + (iVar5 * iVar8 - param_6)) * 0x10000;
                *param_1 = 0x0;
                param_1[0x1] = uVar4 & 0x3f;
                param_1[0x4] = 0x8000;
                iVar1 = uVar7 * 0x4;
                param_1[0x5] = 0x4000;
                param_1[0x8] = (param_3 + ((uVar6 - ((int)uVar6 / param_5) * param_5) - iVar2)) *
                               0x10000;
                param_1[0x9] = (param_4 + ((iVar5 + 0x1) * iVar8 - param_6)) * 0x10000;
                uVar3 = (iVar1 + 0x2) * (iVar1 + 0x3) >> 0x2;
                param_1[0x6] = 0x0;
                iVar5 += 0x2;
                param_1[0x7] = uVar3 & 0x3f;
                param_1[0xa] = 0x8000;
                param_1[0xb] = 0x4000;
                param_1 = param_1 + 0xc;
                uVar9 -= 0x1;
            } while (uVar9 != 0x0);
            param_2 &= 0x1;
            if (param_2 == 0x0) {
                return;
            }
        }
        do {
            uVar9 = (int)((uVar3 * 0x4 + 0x2) * (uVar3 * 0x4 + 0x3)) >> 0x2;
            uVar3 = uVar9 & 0xffff;
            iVar1 = uVar9 * 0x4;
            param_1[0x2] = (param_3 + ((uVar3 - ((int)uVar3 / param_5) * param_5) - iVar2)) *
                           0x10000;
            uVar3 = (iVar1 + 0x2) * (iVar1 + 0x3) >> 0x2;
            param_1[0x3] = (param_4 + (iVar5 * iVar8 - param_6)) * 0x10000;
            *param_1 = 0x0;
            param_1[0x1] = uVar3 & 0x3f;
            iVar5 += 0x1;
            param_1[0x4] = 0x8000;
            param_1[0x5] = 0x4000;
            param_1 = param_1 + 0x6;
            param_2 -= 0x1;
        } while (param_2 != 0x0);
    }
    return;
}



void titleDrawDust(int *param_1,int param_2,undefined4 *param_3)

{
    short sVar1;
    int iVar2;
    uint uVar3;
    undefined4 *puVar4;
    uint uVar5;
    int iVar6;
    uint uVar7;
    short sVar8;
    int iVar9;
    
    puVar4 = (undefined4 *)*param_3;
    iVar9 = -0x1;
    if (0x0 < param_2) {
        do {
            if ((*param_1 != -0x1) && (param_1[0x1] == 0x0)) {
                if (iVar9 != 0x0) {
                    *puVar4 = 0xe7000000;
                    puVar4[0x1] = 0x0;
                    puVar4[0x2] = 0xe3000f00;
                    puVar4[0x3] = 0x0;
                    puVar4[0x4] = 0xe3001001;
                    puVar4[0x5] = 0x0;
                    puVar4[0x6] = 0xe3000c00;
                    puVar4[0x7] = 0x0;
                    puVar4[0x8] = 0xe2001e01;
                    puVar4[0x9] = 0x0;
                    iVar9 = 0x0;
                    puVar4[0xa] = 0xe3000a01;
                    puVar4[0xb] = 0x0;
                    puVar4[0xc] = 0xe3001201;
                    puVar4[0xd] = 0x2000;
                    puVar4[0xe] = 0xe200001c;
                    puVar4[0xf] = 0x504240;
                    puVar4[0x10] = 0xd9ddf9fa;
                    puVar4[0x11] = 0x0;
                    puVar4[0x12] = 0xfc119623;
                    puVar4[0x13] = 0xff2fffff;
                    puVar4[0x14] = 0xfa000000;
                    puVar4[0x15] = 0xfdf666ff;
                    puVar4 = puVar4 + 0x16;
                }
                iVar2 = *param_1 / 0xf + (*param_1 >> 0x1f);
                iVar2 = *(int *)(*(int *)(*(int *)(gpData + 0x54) + 0x2c) +
                                (iVar2 - (iVar2 >> 0x1f)) * 0x4);
                *puVar4 = 0xe7000000;
                puVar4[0x1] = 0x0;
                puVar4[0x2] = 0xfd700000;
                puVar4[0x3] = *(undefined4 *)(iVar2 + 0x8);
                puVar4[0x4] = 0xf5700000;
                puVar4[0x5] = 0x7000000;
                puVar4[0x6] = 0xe6000000;
                puVar4[0x7] = 0x0;
                puVar4[0x8] = 0xf3000000;
                uVar3 = *(uint *)(iVar2 + 0xc);
                uVar7 = uVar3 * *(int *)(iVar2 + 0x10) - 0x1;
                if (0x7fe < (int)uVar7) {
                    uVar7 = 0x7ff;
                }
                uVar5 = uVar3 << 0x1 | uVar3 >> 0x1f;
                iVar6 = ((int)uVar5 >> 0x3) +
                        (uint)((int)uVar5 < 0x0 && (uVar3 << 0x1 & 0x6) != 0x0);
                if (iVar6 < 0x1) {
                    iVar6 = 0x1;
                }
                puVar4[0x9] = (iVar6 + 0x7ff) / iVar6 & 0xfffU | (uVar7 & 0xfff) << 0xc | 0x7000000;
                puVar4[0xa] = 0xe7000000;
                puVar4[0xb] = 0x0;
                puVar4[0xc] = (*(int *)(iVar2 + 0xc) * 0x2 + 0x7 >> 0x3 & 0x1ffU) << 0x9 |
                              0xf5700000;
                puVar4[0xd] = 0x0;
                puVar4[0xe] = 0xf2000000;
                puVar4[0xf] = (*(int *)(iVar2 + 0xc) + -0x1) * 0x4000 & 0xffc000U |
                              (*(int *)(iVar2 + 0x10) + -0x1) * 0x4 & 0xffcU;
                iVar6 = param_1[0x2];
                sVar8 = (short)((param_1[0x3] >> 0x10) + *(int *)(iVar2 + 0x10)) * 0x4;
                uVar3 = (uint)sVar8;
                if (sVar8 < 0x1) {
                    uVar3 = 0x0;
                }
                sVar8 = (short)((iVar6 >> 0x10) + *(int *)(iVar2 + 0xc)) * 0x4;
                uVar7 = (uint)sVar8;
                if (sVar8 < 0x1) {
                    uVar7 = 0x0;
                }
                iVar2 = (param_1[0x3] >> 0x10) << 0x2;
                sVar8 = (short)iVar2;
                uVar5 = (uint)sVar8;
                puVar4[0x10] = (uVar7 & 0xfff) << 0xc | 0xe4000000 | uVar3 & 0xfff;
                if (sVar8 < 0x1) {
                    uVar5 = 0x0;
                }
                sVar1 = (short)((iVar6 >> 0x10) << 0x2);
                uVar3 = (uint)sVar1;
                if (sVar1 < 0x1) {
                    uVar3 = 0x0;
                }
                puVar4[0x11] = (uVar3 & 0xfff) << 0xc | uVar5 & 0xfff;
                puVar4[0x12] = 0xe1000000;
                if (iVar2 < 0x0) {
                    iVar2 = ((int)sVar8 << 0xa) >> 0x7;
                    if (-0x1 < iVar2) {
                        iVar2 = 0x0;
                    }
                }
                else {
                    iVar2 = 0x0;
                }
                if (sVar1 < 0x0) {
                    iVar6 = ((int)sVar1 << 0xa) >> 0x7;
                    if (-0x1 < iVar6) {
                        iVar6 = 0x0;
                    }
                }
                else {
                    iVar6 = 0x0;
                }
                puVar4[0x13] = iVar6 * -0x10000 | -iVar2 & 0xffffU;
                puVar4[0x14] = 0xf1000000;
                puVar4[0x15] = 0x4000400;
                puVar4 = puVar4 + 0x16;
            }
            param_1 = param_1 + 0x6;
            param_2 += -0x1;
        } while (param_2 != 0x0);
    }
    *param_3 = puVar4;
    return;
}



undefined4 titleStepAlpha(int *param_1,int param_2)

{
    int iVar1;
    
    if (param_2 < 0x0) {
        if (0xff < *param_1) {
            *param_1 = 0xff;
        }
        iVar1 = *param_1;
        *param_1 = iVar1 + param_2;
        if (iVar1 + param_2 < -param_2) {
            *param_1 = 0x0;
            return 0xffffffff;
        }
        return 0x0;
    }
    if (param_2 < 0x1) {
        return 0xffffffff;
    }
    if (*param_1 < 0x0) {
        *param_1 = 0x0;
    }
    iVar1 = *param_1;
    *param_1 = iVar1 + param_2;
    if (0xff - param_2 < iVar1 + param_2) {
        *param_1 = 0xff;
        return 0xffffffff;
    }
    return 0x0;
}



void titleDrawImage(undefined4 *param_1,undefined4 param_2,int param_3)

{
    int iVar1;
    undefined4 *local_14 [0x2];
    
    local_14[0] = (undefined4 *)*param_1;
    if (param_3 == 0xc8) {
        iVar1 = storyDonePath2(gpData[0x25]);
        if (iVar1 == 0x0) {
            storyDrawPath2(0x0,gpData[0x21],0x0,0x0,0x0,0x0,0x0,local_14);
            storyDrawPath2(0x0,gpData[0x22],0x0,0x0,0x0,0x0,0x0,local_14);
            storyDrawPath2(0x0,gpData[0x23],0x0,0x0,0x0,0x0,0x0,local_14);
            storyDrawPath2(0x0,gpData[0x24],0x0,0x0,0x0,0x0,0x0,local_14);
            storyDrawPath2(0x0,gpData[0x25],0x0,0x0,0x0,0x0,0x0,local_14);
        }
    }
    else if (param_3 < 0xc8) {
        if (param_3 == 0x78) {
            storyDrawPath2(0x0,gpData[0x28],0x0,0x0,0x0,0x0,0x0,local_14);
            storyDrawPath2(0x0,gpData[0x26],0x0,0x0,0x0,0x0,0x0,local_14);
            storyDrawPath2(0x0,gpData[0x27],0x0,0x0,0x0,0x0,0x0,local_14);
        }
        else if (param_3 < 0x78) {
            if (param_3 == 0x65) {
                if (0x0 < gpData[0x7]) {
                    *local_14[0] = 0xe7000000;
                    local_14[0][0x1] = 0x0;
                    local_14[0][0x2] = 0xd9ddf9fa;
                    local_14[0][0x3] = 0x0;
                    local_14[0][0x4] = 0xd7000000;
                    local_14[0][0x5] = 0x80008000;
                    local_14[0][0x6] = 0xfa000000;
                    local_14[0][0x7] = gpData[0x7] & 0xffU | 0xffffff00;
                    local_14[0][0x8] = 0xe3000a01;
                    local_14[0][0x9] = 0x0;
                    local_14[0][0xa] = 0xe200001c;
                    local_14[0][0xb] = 0x504240;
                    local_14[0][0xc] = 0xfcffffff;
                    local_14[0][0xd] = 0xfffdf6fb;
                    local_14[0][0xe] = 0xf65003c0;
                    local_14[0][0xf] = 0x0;
                    local_14[0] = local_14[0] + 0x10;
                }
            }
            else if ((param_3 < 0x65) && (0x63 < param_3)) {
                *local_14[0] = 0xe7000000;
                local_14[0][0x1] = 0x0;
                local_14[0][0x2] = 0xd9ddf9fa;
                local_14[0][0x3] = 0x0;
                local_14[0][0x4] = 0xd7000000;
                local_14[0][0x5] = 0x80008000;
                local_14[0][0x6] = 0xf7000000;
                local_14[0][0x7] = 0x10001;
                local_14[0][0x8] = 0xe3000a01;
                local_14[0][0x9] = 0x300000;
                local_14[0][0xa] = 0xe200001c;
                local_14[0][0xb] = 0x0;
                local_14[0][0xc] = 0xf64fc3bc;
                local_14[0][0xd] = 0x0;
                local_14[0][0xe] = 0xe7000000;
                local_14[0][0xf] = 0x0;
                local_14[0][0x10] = 0xe3000a01;
                local_14[0][0x11] = 0x0;
                local_14[0] = local_14[0] + 0x12;
            }
        }
        else if (param_3 == 0x91) {
            if ((gpData[0x1] & 0x100000U) == 0x0) {
                if (*gpData < 0xb5) {
                    iVar1 = (*gpData + -0x3c) * 0x2;
                }
                else {
                    iVar1 = 0xff;
                }
            }
            else {
                iVar1 = 0x0;
            }
            storySetPathImage2(gpData[0x18],iVar1);
            storyDrawPath2(0x0,gpData[0x18],0xc,gpData[0x10] + 0x8,0x0,0x0,0x0,local_14);
        }
        else if ((param_3 < 0x91) && (param_3 == 0x87)) {
            if ((gpData[0x1] & 0x100000U) == 0x0) {
                if (*gpData < 0xb5) {
                    iVar1 = (*gpData + -0x3c) * 0x2;
                }
                else {
                    iVar1 = 0xff;
                }
            }
            else {
                iVar1 = 0x0;
            }
            storySetPathImage2(gpData[0x19],iVar1);
            storyDrawPath2(0x0,gpData[0x19],0x0,gpData[0x11],0x0,0x0,0x0,local_14);
        }
    }
    else if (param_3 == 0xd3) {
        titleDrawRing(gpData + 0x37,local_14);
    }
    else if (param_3 < 0xd3) {
        if (param_3 < 0xd2) {
            if ((param_3 < 0xca) && (iVar1 = storyDonePath2(gpData[0x20]), iVar1 == 0x0)) {
                storyDrawPath2(0x0,gpData[0x1c],0x0,0x0,0x0,0x0,0x0,local_14);
                storyDrawPath2(0x0,gpData[0x1d],0x0,0x0,0x0,0x0,0x0,local_14);
                storyDrawPath2(0x0,gpData[0x1e],0x0,0x0,0x0,0x0,0x0,local_14);
                storyDrawPath2(0x0,gpData[0x1f],0x0,0x0,0x0,0x0,0x0,local_14);
                storyDrawPath2(0x0,gpData[0x20],0x0,0x0,0x0,0x0,0x0,local_14);
            }
        }
        else {
            titleDrawDust(gpData + 0xa5,0x8,local_14);
        }
    }
    else if (param_3 == 0xdd) {
        titleDrawRing(gpData + 0x29,local_14);
    }
    else if ((param_3 < 0xdd) && (0xdb < param_3)) {
        titleDrawDust(gpData + 0x45,0x10,local_14);
    }
    *param_1 = local_14[0];
    return;
}



void DrawTitle(void)

{
    if (*(int *)(gpData + 0x38) == 0x4) {
        screenDraw(&glistp,menuDrawProfile);
    }
    else {
        screenDraw(&glistp,titleDrawImage);
    }
    return;
}



void DoTitle(void)

{
    uint *puVar1;
    uint **ppuVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    ushort uVar6;
    int iVar7;
    uint uVar8;
    short sVar10;
    uint *puVar9;
    undefined4 uVar11;
    uint **ppuVar12;
    int iVar13;
    uint uVar14;
    uint uVar15;
    float fVar16;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    int local_3c;
    int local_38;
    uint local_34;
    double local_30;
    longlong local_28;
    
    iVar13 = 0x0;
    if (((gpData[0xe] != 0x1) && (iVar7 = GCHandover_read(0x1), iVar7 != 0x0)) &&
       (gpData[0xe] = 0x4, g_bInit == '\0')) {
        g_bInit = '\x01';
        InitTitle();
        gDemo = 0x2c;
        gReset = 0x0;
        gGameStatus &= 0xff7f;
        gTheGame._120332_4_ = 0x2;
        *gpData = 0x0;
        gpData[0x4] = 0x0;
        gpData[0x5] = 0x0;
        gpData[0xe] = 0x4;
        uVar8 = screenSet(___data_0,0x8e001);
        gpData[0x3] = uVar8;
        menuInitProfile(gpData[0x3],gpData[0x5]);
        storyPlaySong(0x20,0x0);
    }
    uVar8 = *gpData + 0x1;
    *gpData = uVar8;
    uVar14 = gpData[0x3];
    storyHackPath2(uVar8);
    if (gpData[0x2] != 0xffffffff) {
        sVar10 = GetSafeTuneBuffer();
        iVar7 = (int)sVar10;
        if (-0x1 < iVar7) {
            FadeOutAllSFXs(0x3c);
            FadeOutAllSongs(0x3c);
            ForceLoadSong(gpData[0x2],iVar7);
            SetSongCrossFadeValue(0x3c);
            PlayMIDI(BGM_INIT_TABLE,gpData[0x2],iVar7,0x1);
            gpData[0x2] = 0xffffffff;
        }
    }
    local_4c = 0x0;
    local_48 = 0x0;
    local_44 = 0x0;
    local_40 = 0x0;
    screenTick(&local_4c);
    iVar7 = screenFlushing();
    if (iVar7 == 0x0) {
        peelTick();
    }
    uVar5 = gpData[0xe];
    if (uVar5 == 0x4) {
        menuTickProfile(uVar14,gpData[0x5]);
        iVar13 = peelActive();
        if (iVar13 == 0x0) {
            if ((gTheGame._90944_4_ == -0x1) || (gTheGame._90948_2_ == 0x0)) {
                iVar13 = 0x0;
            }
            else {
                iVar13 = -0x1;
            }
            if ((iVar13 != 0x0) && (gReset == 0x0)) {
                gReset = -0x1;
                iVar13 = GCHandover_read(0x1);
                if (iVar13 != 0x0) {
                    gMain = 0x258;
                }
            }
        }
        iVar13 = (int)uVar8 / 0x258 + ((int)uVar8 >> 0x1f);
        if (uVar8 == (iVar13 - (iVar13 >> 0x1f)) * 0x258) {
            menuFindCharacterMax(&local_3c);
            uVar8 = gpData[0x5];
            gpData[0x5] = uVar8 + 0x1;
            if (local_3c < (int)(uVar8 + 0x1)) {
                gReset = -0x1;
                iVar13 = GCHandover_read(0x1);
                if (iVar13 != 0x0) {
                    gMain = 0x258;
                }
                FadeOutSong(last_song_handle,0x3c);
            }
            else {
                gpData[0x4] = 0x0;
                menuInitProfile(uVar14,gpData[0x5]);
            }
        }
        iVar7 = gpData[0x5] * 0xa;
        iVar13 = screenTextDone(uVar14,iVar7 + 0xc9);
        if ((((iVar13 != 0x0) &&
             (uVar8 = gpData[0x4], gpData[0x4] = uVar8 + 0x1, 0x5a < (int)(uVar8 + 0x1))) &&
            (iVar13 = screenGetTextType(uVar14,iVar7 + 0xca,&local_34), iVar13 != 0x0)) &&
           ((local_34 & 0x400) != 0x0)) {
            screenHideText(uVar14,iVar7 + 0xc9);
            screenShowText(uVar14,iVar7 + 0xca);
        }
    }
    else if (uVar5 == 0x1) {
        CheckController();
        gpData[0xe] = 0x2;
    }
    else if (uVar5 == 0x2) {
        CheckController();
        if (((0x13 < (int)uVar8) && ((int)uVar8 < 0x3d)) &&
           (iVar13 = screenGetImage(uVar14,0x6e,&local_38), iVar13 != 0x0)) {
            *(uint *)(local_38 + 0x14) = (0x3c - uVar8) * -0x6 + 0xff;
        }
        if (((0x4f < (int)uVar8) && ((int)uVar8 < 0x79)) &&
           (iVar13 = screenGetImage(uVar14,0x78,&local_38), iVar13 != 0x0)) {
            *(uint *)(local_38 + 0x14) = (0x78 - uVar8) * -0x6 + 0xff;
        }
        if ((uVar8 == 0x1) && (PlaySE(SFX_INIT_TABLE,0x145), Logo_PadReset == 0x0)) {
            gnThreadOKFlag = -0x1;
        }
        pon_FacialAnimeInLogo(uVar14,uVar8);
        if (((gnThreadOKFlag != 0x0) && (iVar13 = Pon_DVDRead_boot_thread_wait16(), iVar13 != 0x0))
           || ((Logo_PadReset != 0x0 && (uVar8 == 0x108)))) {
            gnLogoEndOKFlag = -0x1;
            Logo_PadReset = 0x0;
        }
        if ((gTheGame._90958_2_ & 0x2000) != 0x0) {
            if (gTheGame._90948_2_ != 0x0) {
                *(uint *)(ganButton + giButton * 0x4) = (uint)gTheGame._90948_2_;
                giButton = giButton + 0x1 & 0x7;
                if ((((*(int *)(ganButton + ((giButton - 0x4) * 0x4 & 0x1c)) == 0x4000) &&
                     (*(int *)(ganButton + ((giButton - 0x3) * 0x4 & 0x1c)) == 0x8000)) &&
                    (*(int *)(ganButton + ((giButton - 0x2) * 0x4 & 0x1c)) == 0x20)) &&
                   (*(int *)(ganButton + ((giButton - 0x1) * 0x4 & 0x1c)) == 0x20)) {
                    gGameStatus ^= 0x1;
                    PlaySE(SFX_INIT_TABLE,0x9);
                }
            }
            gTheGame._90948_2_ = 0x0;
            gTheGame._90950_2_ = 0x0;
            gTheGame._90964_2_ = 0x0;
            gTheGame._90966_2_ = 0x0;
        }
        if (gnLogoEndOKFlag == -0x1) {
            *gpData = 0x0;
            gbLogoTitle = 0x0;
            gpData[0xe] = 0x3;
            gpData[0x2] = 0x20;
            uVar8 = screenSet(_843,0x8e001);
            gpData[0x3] = uVar8;
            if (g_bInit == '\0') {
                g_bInit = '\x01';
                fileSetup();
                InitTitle();
            }
        }
    }
    else {
        uVar5 = gpData[0x1];
        if ((gTheGame._90958_2_ & 0x2000) != 0x0) {
            if (gTheGame._90948_2_ != 0x0) {
                *(uint *)(ganButton + giButton * 0x4) = (uint)gTheGame._90948_2_;
                giButton = giButton + 0x1 & 0x7;
                if (((((*(int *)(ganButton + ((giButton - 0x8) * 0x4 & 0x1c)) == 0x1000) &&
                      (*(int *)(ganButton + ((giButton - 0x7) * 0x4 & 0x1c)) == 0x8000)) &&
                     ((*(int *)(ganButton + ((giButton - 0x6) * 0x4 & 0x1c)) == 0x20 &&
                      ((*(int *)(ganButton + ((giButton - 0x5) * 0x4 & 0x1c)) == 0x8000 &&
                       (*(int *)(ganButton + ((giButton - 0x4) * 0x4 & 0x1c)) == 0x1000)))))) &&
                    (*(int *)(ganButton + ((giButton - 0x3) * 0x4 & 0x1c)) == 0x8000)) &&
                   ((*(int *)(ganButton + ((giButton - 0x2) * 0x4 & 0x1c)) == 0x20 &&
                    (*(int *)(ganButton + ((giButton - 0x1) * 0x4 & 0x1c)) == 0x8000)))) {
                    gbOpenTitle ^= 0xffffffff;
                    PlaySE(SFX_INIT_TABLE,0x9);
                }
            }
            gTheGame._90948_2_ = 0x0;
            gTheGame._90950_2_ = 0x0;
            gTheGame._90964_2_ = 0x0;
            gTheGame._90966_2_ = 0x0;
        }
        if ((uVar5 & 0x2000) != 0x0) {
            screenHideImage(uVar14,0x82);
            screenHideImage(uVar14,0x8c);
            screenHideImage(uVar14,0x12c);
            screenHideImage(uVar14,0x12e);
            gpData[0x4] = 0x0;
            *gpData = 0x0;
            uVar8 = 0x0;
            gpData[0x7] = 0xff;
            gpData[0x12] = 0x0;
            gpData[0x13] = 0x0;
            gpData[0x6] = 0xffffffff;
            gpData[0x8] = 0x4;
            gpData[0x9] = 0x4;
            gpData[0xa] = 0x0;
            gpData[0xb] = 0x0;
            gpData[0xc] = 0x0;
            gpData[0xd] = 0x0;
            gpData[0x16] = 0x0;
            gpData[0x17] = 0x0;
            gpData[0x10] = 0x0;
            gpData[0x11] = 0x0;
            gpData[0xf] = 0x0;
            screenSetImagePosition(uVar14,0x78,0x0,0xa0);
            screenSetImagePosition(uVar14,0x79,0x94,0x74);
            screenSetImagePosition(uVar14,0x7a,0x64,0xc6);
            puVar9 = gpData;
            gpData[0x2b] = 0x0;
            puVar9[0x32] = 0x0;
            puVar9 = gpData;
            gpData[0x45] = 0xffffffff;
            puVar9[0x4b] = 0xffffffff;
            puVar9[0x51] = 0xffffffff;
            puVar9[0x57] = 0xffffffff;
            puVar9[0x5d] = 0xffffffff;
            puVar9[0x63] = 0xffffffff;
            puVar9[0x69] = 0xffffffff;
            puVar9[0x6f] = 0xffffffff;
            puVar9[0x75] = 0xffffffff;
            puVar9[0x7b] = 0xffffffff;
            puVar9[0x81] = 0xffffffff;
            puVar9[0x87] = 0xffffffff;
            puVar9[0x8d] = 0xffffffff;
            puVar9[0x93] = 0xffffffff;
            puVar9[0x99] = 0xffffffff;
            puVar9[0x9f] = 0xffffffff;
            puVar9 = gpData;
            gpData[0x39] = 0x0;
            puVar9[0x40] = 0x0;
            puVar9 = gpData;
            gpData[0xa5] = 0xffffffff;
            puVar9[0xab] = 0xffffffff;
            puVar9[0xb1] = 0xffffffff;
            puVar9[0xb7] = 0xffffffff;
            puVar9[0xbd] = 0xffffffff;
            puVar9[0xc3] = 0xffffffff;
            puVar9[0xc9] = 0xffffffff;
            puVar9[0xcf] = 0xffffffff;
            *(undefined4 *)(gpData[0x18] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x19] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x1a] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x1b] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x1c] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x1d] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x1e] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x1f] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x20] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x21] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x22] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x23] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x24] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x25] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x26] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x27] + 0x10) = 0x0;
            *(undefined4 *)(gpData[0x28] + 0x10) = 0x0;
            screenHideText(uVar14,0x64);
            uVar5 = 0x100000;
        }
        if (((uVar5 & 0x100000) != 0x0) && (0x3c < (int)uVar8)) {
            uVar5 = uVar5 & 0xffefffff | 0x3;
        }
        if (((uVar5 & 0x1) != 0x0) && ((uVar5 & 0x2) == 0x0)) {
            screenHideText(uVar14,0x64);
            uVar5 = uVar5 & 0xfffffffe | 0x401c;
        }
        if ((uVar5 & 0x2) == 0x0) {
            storySetPathBlur2(gpData[0x18],0x0);
            storySetPathBlur2(gpData[0x19],0x0);
        }
        else {
            storyTickPath2(gpData[0x18]);
            storyTickPath2(gpData[0x19]);
            iVar7 = storyDonePath2(gpData[0x18]);
            if ((iVar7 == 0x0) || (iVar7 = storyDonePath2(gpData[0x19]), iVar7 == 0x0)) {
                storySetPathBlur2(gpData[0x18],0xffffffff);
                storySetPathBlur2(gpData[0x19],0xffffffff);
            }
            else {
                uVar5 &= 0xfffffffd;
                storySetPathBlur2(gpData[0x18],0x0);
                storySetPathBlur2(gpData[0x19],0x0);
            }
            if ((uVar5 & 0x40000) != 0x0) {
                *(int *)(gpData[0x18] + 0x10) = *(int *)(gpData[0x18] + 0x24) + -0x1;
                *(int *)(gpData[0x19] + 0x10) = *(int *)(gpData[0x19] + 0x24) + -0x1;
            }
        }
        uVar15 = uVar5;
        if ((uVar5 & 0x4) != 0x0) {
            if ((uVar5 & 0x40000) != 0x0) {
                gpData[0x7] = 0x0;
            }
            iVar7 = titleStepAlpha(gpData + 0x7,0xffffffff);
            if ((iVar7 != 0x0) && (uVar15 = uVar5 & 0xfffffffb, (uVar5 & 0x40) == 0x0)) {
                uVar15 |= 0x40;
            }
        }
        if ((uVar15 & 0x8) != 0x0) {
            if ((uVar15 & 0x40000) != 0x0) {
                *(int *)(gpData[0x26] + 0x10) = *(int *)(gpData[0x26] + 0x24) + -0x1;
                *(int *)(gpData[0x27] + 0x10) = *(int *)(gpData[0x27] + 0x24) + -0x1;
                *(int *)(gpData[0x28] + 0x10) = *(int *)(gpData[0x28] + 0x24) + -0x1;
            }
            storyTickPath2(gpData[0x26]);
            storyTickPath2(gpData[0x27]);
            storyTickPath2(gpData[0x28]);
            iVar7 = storyDonePath2(gpData[0x26]);
            if (((iVar7 != 0x0) && (iVar7 = storyDonePath2(gpData[0x27]), iVar7 != 0x0)) &&
               (iVar7 = storyDonePath2(gpData[0x28]), iVar7 != 0x0)) {
                uVar15 &= 0xfffffff7;
            }
        }
        puVar9 = gpData;
        if ((uVar15 & 0x4000) != 0x0) {
            uVar5 = 0x0;
            gpData[0x29] = 0x700000;
            puVar9[0x2a] = 0xb40000;
            puVar9[0x2c] = 0x0;
            puVar9[0x2b] = 0x4;
            puVar9[0x2f] = 0x19;
            puVar9[0x2e] = 0x20000;
            if (false) {
                uVar5 = 0xc;
            }
            puVar9[0x2d] = uVar5;
            puVar9[0x30] = 0x700000;
            puVar9[0x31] = 0xb40000;
            puVar9[0x33] = 0x0;
            puVar9[0x32] = 0x4;
            puVar9[0x36] = 0x19;
            puVar9[0x35] = 0x20000;
            puVar9[0x34] = 0xc;
            uVar15 &= 0xffffbfff;
        }
        puVar9 = gpData;
        if ((uVar15 & 0x8000) != 0x0) {
            uVar5 = 0x0;
            gpData[0x37] = 0xc40000;
            puVar9[0x38] = 0xb40000;
            puVar9[0x3a] = 0x0;
            puVar9[0x39] = 0x4;
            puVar9[0x3d] = 0x19;
            puVar9[0x3c] = 0x10000;
            if (false) {
                uVar5 = 0xc;
            }
            puVar9[0x3b] = uVar5;
            puVar9[0x3e] = 0xc40000;
            puVar9[0x3f] = 0xb40000;
            puVar9[0x41] = 0x0;
            puVar9[0x40] = 0x4;
            puVar9[0x44] = 0x19;
            puVar9[0x43] = 0x10000;
            puVar9[0x42] = 0xc;
            uVar15 &= 0xffff7fff;
        }
        if ((uVar15 & 0x10000) != 0x0) {
            storyTickPath2(gpData[0x21]);
            iVar7 = *(int *)(gpData[0x21] + 0x10);
            if (iVar7 == *(int *)(gpData[0x21] + 0x24) >> 0x2) {
                uVar15 |= 0x20000;
            }
            if (((0x9 < iVar7) &&
                (storyTickPath2(gpData[0x22]), 0x5 < *(int *)(gpData[0x22] + 0x10))) &&
               ((storyTickPath2(gpData[0x23]), 0x3 < *(int *)(gpData[0x23] + 0x10) &&
                ((storyTickPath2(gpData[0x24]), 0x7 < *(int *)(gpData[0x24] + 0x10) &&
                 (iVar7 = storyTickPath2(gpData[0x25]), iVar7 != 0x0)))))) {
                uVar15 &= 0xfffeffff;
            }
        }
        if ((((((uVar15 & 0x20000) != 0x0) &&
              (storyTickPath2(gpData[0x1c]), 0x13 < *(int *)(gpData[0x1c] + 0x10))) &&
             (storyTickPath2(gpData[0x1d]), 0xb < *(int *)(gpData[0x1d] + 0x10))) &&
            ((storyTickPath2(gpData[0x1e]), 0x7 < *(int *)(gpData[0x1e] + 0x10) &&
             (storyTickPath2(gpData[0x1f]), 0x9 < *(int *)(gpData[0x1f] + 0x10))))) &&
           (iVar7 = storyTickPath2(gpData[0x20]), iVar7 != 0x0)) {
            uVar15 &= 0xfffdffff;
        }
        if ((uVar15 & 0x10) != 0x0) {
            if (((uVar15 & 0x40000) != 0x0) && ((int)gpData[0x8] < 0xf0)) {
                uVar15 |= 0x100;
                gpData[0x12] = 0x3f800000;
                gpData[0x8] = 0xf0;
            }
            if (1.0 <= (float)gpData[0x12]) {
                gpData[0x12] = 0x3f800000;
                iVar7 = titleStepAlpha(gpData + 0x8,0x4);
                if (iVar7 != 0x0) {
                    uVar5 = uVar15 & 0xffffffef;
                    uVar4 = uVar15 & 0x40;
                    gpData[0x8] = 0xfe;
                    uVar15 = uVar5 | 0x18020;
                    if (uVar4 == 0x0) {
                        uVar15 = uVar5 | 0x18060;
                    }
                }
                if (gpData[0x8] == 0x80) {
                    uVar15 |= 0x100;
                    titleMakeDust(gpData + 0x45,0x10,0x5e,0xa5,0x48,0x86);
                }
            }
            else {
                gpData[0x12] = (uint)((float)gpData[0x12] + 0.0625);
            }
            screenShowImage(uVar14,0x8c);
            screenSetImageScale((double)(float)gpData[0x12],uVar14,0x8c);
            iVar7 = (int)(208.0 - (1.0 - (float)gpData[0x12]) * 34.0);
            local_28 = (longlong)iVar7;
            screenSetImagePosition(uVar14,0x8c,0x66,iVar7);
        }
        if ((uVar15 & 0x20) != 0x0) {
            if (((uVar15 & 0x40000) != 0x0) && ((int)gpData[0x9] < 0xf0)) {
                uVar15 |= 0xa00;
                gpData[0x13] = 0x3f800000;
                gpData[0x9] = 0xf0;
            }
            if (1.0 <= (float)gpData[0x13]) {
                gpData[0x13] = 0x3f800000;
                iVar7 = titleStepAlpha(gpData + 0x9,0x4);
                if (iVar7 != 0x0) {
                    uVar15 &= 0xffffffdf;
                    gpData[0x9] = 0xfe;
                }
                if (gpData[0x9] == 0x80) {
                    uVar15 |= 0xa00;
                    titleMakeDust(gpData + 0xa5,0x8,0xc8,0xa5,0x30,0x32);
                }
            }
            else {
                gpData[0x13] = (uint)((float)gpData[0x13] + 0.0625);
            }
            screenShowImage(uVar14,0x82);
            screenSetImageScale((double)(float)gpData[0x13],uVar14,0x82);
            iVar7 = (int)((1.0 - (float)gpData[0x13]) * 24.0 + 176.0);
            local_28 = (longlong)iVar7;
            iVar3 = (int)((1.0 - (float)gpData[0x13]) * 25.0 + 140.0);
            local_30 = (double)(longlong)iVar3;
            screenSetImagePosition(uVar14,0x82,iVar7,iVar3);
        }
        if ((uVar15 & 0x40) != 0x0) {
            iVar7 = screenGetImage(uVar14,0x6e,&local_38);
            if (iVar7 != 0x0) {
                iVar13 = -0x1;
            }
            if (((uVar15 & 0x40000) != 0x0) && ((int)gpData[0xa] < 0xf0)) {
                gpData[0xa] = 0xf0;
            }
            iVar7 = titleStepAlpha(gpData + 0xa,0x1);
            if ((iVar7 != 0x0) && (iVar13 != 0x0)) {
                uVar15 = uVar15 & 0xffffffbf | 0x480;
            }
            iVar13 = screenGetImage(uVar14,0x6e,&local_38);
            if (iVar13 != 0x0) {
                uVar5 = gpData[0xa];
                imageMakeScanWave(local_38,(int)(0xff - uVar5) >> 0x2,(uVar8 & 0x7f) << 0x9 | 0x38,
                                  (uVar5 + 0x10) * 0x10000 | (int)uVar5 >> 0x2);
            }
        }
        if ((uVar15 & 0x80) != 0x0) {
            if (((uVar15 & 0x40000) != 0x0) && ((int)gpData[0xb] < 0xff)) {
                gpData[0xb] = 0xff;
            }
            titleStepAlpha(gpData + 0xb,0x1);
            if (0xe5 < (int)gpData[0xb]) {
                gpData[0xb] = 0xe6;
                uVar15 &= 0xffffff7f;
            }
        }
        if ((uVar15 & 0x100) != 0x0) {
            if ((uVar8 & 0x1) != 0x0) {
                gpData[0x16] = gpData[0x16] + 0x1;
            }
            local_30 = (double)CONCAT44(0x43300000,gpData[0x16] & 0x3f ^ 0x80000000);
            fVar16 = sinf(((float)(local_30 - 4503601774854144.0) / 63.0) * 6.283185);
            uVar5 = (uint)(fVar16 * 6.0);
            local_28 = (longlong)(int)uVar5;
            gpData[0x10] = uVar5;
            screenSetImagePosition(uVar14,0x8c,0x66,uVar5 + 0xd0);
        }
        if ((uVar15 & 0x200) != 0x0) {
            if ((uVar8 & 0x1) != 0x0) {
                gpData[0x17] = gpData[0x17] + 0x1;
            }
            local_30 = (double)CONCAT44(0x43300000,gpData[0x17] & 0x3f ^ 0x80000000);
            fVar16 = sinf(((float)(local_30 - 4503601774854144.0) / 63.0) * 6.283185);
            uVar5 = (uint)(fVar16 * 3.0);
            local_28 = (longlong)(int)uVar5;
            gpData[0x11] = uVar5;
            screenSetImagePosition(uVar14,0x82,0xb0,uVar5 + 0x8c);
        }
        if ((uVar15 & 0x400) != 0x0) {
            if (gpData[0x6] == 0x0) {
                iVar13 = titleStepAlpha(gpData + 0xc,0xfffffffc);
                if (iVar13 != 0x0) {
                    gpData[0x6] = gpData[0x6] ^ 0xffffffff;
                }
            }
            else {
                iVar13 = titleStepAlpha(gpData + 0xc,0x4);
                if (iVar13 != 0x0) {
                    gpData[0x6] = gpData[0x6] ^ 0xffffffff;
                }
            }
            if ((gValidControllers & 0x1) == 0x0) {
                screenHideImage(uVar14,0x12c);
                screenShowImage(uVar14,0x12e);
                iVar13 = screenGetImage(uVar14,0x12e,&local_38);
                if (iVar13 != 0x0) {
                    *(uint *)(local_38 + 0x14) = gpData[0xc];
                }
            }
            else {
                screenShowImage(uVar14,0x12c);
                screenHideImage(uVar14,0x12e);
                iVar13 = screenGetImage(uVar14,0x12c,&local_38);
                if (iVar13 != 0x0) {
                    *(uint *)(local_38 + 0x14) = gpData[0xc];
                }
            }
        }
        if ((uVar15 & 0x800) != 0x0) {
            screenShowImage(uVar14,0x12d);
            if (((uVar15 & 0x40000) != 0x0) && ((int)gpData[0xd] < 0xf0)) {
                gpData[0xd] = 0xf0;
            }
            iVar13 = titleStepAlpha(gpData + 0xd,0x2);
            if (iVar13 != 0x0) {
                uVar15 = uVar15 & 0xfffff7ff | 0x81000;
            }
        }
        if ((uVar15 & 0x1000) != 0x0) {
            if ((uVar8 & 0x1ff) == 0x0) {
                titleMakeDust(gpData + 0x45,0x10,0x5e,0xa5,0x48,0x86);
            }
            if ((uVar8 & 0x1ff) == 0xff) {
                titleMakeDust(gpData + 0xa5,0x8,0xc8,0xa5,0x30,0x32);
            }
        }
        uVar6 = gGameStatus;
        if ((uVar15 & 0x80000) != 0x0) {
            gpData[0x4] = gpData[0x4] + 0x1;
            if ((gpData[0x4] == 0x384) && (geDemoTitle != 0x0)) {
                FadeOutSong(last_song_handle,0x3c);
            }
            uVar6 = gGameStatus;
            if (0x3bf < (int)gpData[0x4]) {
                gDemo = 0xb;
                uVar6 = gGameStatus | 0x80;
                gReset = -0x1;
                gPlayer._0_4_ = 0x2be4d0;
                gPlayer._4_4_ = 0x2be4d0;
                gPlayer._8_4_ = 0x2be4d0;
                gPlayer._12_4_ = 0x2be4d0;
                gTheGame._19172_4_ = 0x0;
                gTheGame._41636_4_ = 0x0;
                gTheGame._64100_4_ = 0x0;
                gTheGame._86564_4_ = 0x0;
                brainbrain._12_4_ = 0xffffffff;
                brainbrain._308_4_ = 0xffffffff;
                brainbrain._604_4_ = 0xffffffff;
                brainbrain._900_4_ = 0xffffffff;
                geDemoTitle += 0x1;
                if (geDemoTitle == 0xc) {
                    geDemoTitle = 0x1;
                }
                if (true) {
                    switch(geDemoTitle) {
                    case 0x1:
                        gDemo = 0x2c;
                        gReset = 0x0;
                        gGameStatus &= 0xff7f;
                        gTheGame._120332_4_ = 0x2;
                        *gpData = 0x0;
                        gpData[0x4] = 0x0;
                        gpData[0x5] = 0x0;
                        gpData[0xe] = 0x4;
                        uVar5 = screenSet(___data_0,0x8e001);
                        gpData[0x3] = uVar5;
                        menuInitProfile(gpData[0x3],gpData[0x5]);
                        uVar6 = gGameStatus;
                        break;
                    case 0x2:
                        gMain = 0x34c;
                        gTheGame._120328_4_ = 0x1;
                        gTheGame._120332_4_ = 0x1;
                        gSelection = 0x64;
                        gTheGame._120360_4_ = 0x1;
                        break;
                    case 0x3:
                    case 0x5:
                        gMain = 0x384;
                        gTheGame._120332_4_ = 0x1;
                        gTheGame._120328_4_ = 0x1;
                        if (geDemoTitle != 0x3) {
                            gTheGame._120332_4_ = 0x2;
                        }
                        gSelection = 0x8c;
                        gTheGame._120360_4_ = 0x1;
                        gTheGame._120372_4_ = 0x0;
                        gTheGame._120368_4_ = 0x1;
                        gGameStatus = uVar6;
                        uVar5 = osGetCount();
                        gTheGame._120364_4_ = (uVar5 & 0xff) % 0x6;
                        DemoCPU(0x0,0x6);
                        uVar6 = gGameStatus;
                        break;
                    case 0x4:
                        gMain = 0x34c;
                        gTheGame._120328_4_ = 0x1;
                        gTheGame._120332_4_ = 0x1;
                        gSelection = 0x64;
                        gTheGame._120360_4_ = 0x2;
                        break;
                    case 0x6:
                        gMain = 0x34c;
                        gTheGame._120328_4_ = 0x1;
                        gTheGame._120332_4_ = 0x1;
                        gSelection = 0x64;
                        gTheGame._120360_4_ = 0x3;
                        break;
                    case 0x7:
                    case 0x9:
                        gMain = 0x384;
                        gTheGame._120332_4_ = 0x2;
                        gTheGame._120328_4_ = 0x2;
                        if (geDemoTitle == 0x7) {
                            gTheGame._120332_4_ = 0x1;
                        }
                        gSelection = 0xa0;
                        gTheGame._120360_4_ = 0x0;
                        gTheGame._120372_4_ = 0x0;
                        if (geDemoTitle == 0x7) {
                            gTheGame._120368_4_ = 0x5;
                        }
                        else {
                            gTheGame._120368_4_ = 0x3;
                        }
                        gGameStatus = uVar6;
                        uVar5 = osGetCount();
                        gTheGame._120364_4_ = (uVar5 & 0xff) % 0x9;
                        if (geDemoTitle == 0x7) {
                            uVar11 = 0x8;
                        }
                        else {
                            uVar11 = 0x5;
                        }
                        DemoCPU(0x0,uVar11);
                        gTheGame._120384_4_ = 0x0;
                        gTheGame._120396_4_ = 0x0;
                        if (geDemoTitle == 0x7) {
                            gTheGame._120392_4_ = 0x5;
                        }
                        else {
                            gTheGame._120392_4_ = 0x3;
                        }
                        uVar5 = osGetCount();
                        gTheGame._120388_4_ = (uVar5 & 0xff) % 0x9;
                        if (geDemoTitle == 0x7) {
                            uVar11 = 0x8;
                        }
                        else {
                            uVar11 = 0x5;
                        }
                        DemoCPU(0x1,uVar11);
                        uVar6 = gGameStatus;
                        break;
                    case 0x8:
                        gMain = 0x34c;
                        gTheGame._120328_4_ = 0x1;
                        gTheGame._120332_4_ = 0x1;
                        gSelection = 0x64;
                        gTheGame._120360_4_ = 0x4;
                        break;
                    case 0xa:
                        gMain = 0x34c;
                        gTheGame._120328_4_ = 0x4;
                        gTheGame._120332_4_ = 0x1;
                        gSelection = 0x64;
                        gTheGame._120360_4_ = 0x6;
                        break;
                    case 0xb:
                        gMain = 0x384;
                        gTheGame._120328_4_ = 0x4;
                        gTheGame._120332_4_ = 0x1;
                        gSelection = 0xd2;
                        gTheGame._120360_4_ = 0x0;
                        gTheGame._120372_4_ = 0x0;
                        gTheGame._120368_4_ = 0x1;
                        gTheGame._120364_4_ = 0x1;
                        gGameStatus = uVar6;
                        DemoCPU(0x0,0xa);
                        gTheGame._120384_4_ = 0x0;
                        gTheGame._120396_4_ = 0x0;
                        gTheGame._120392_4_ = 0x1;
                        gTheGame._120388_4_ = 0x4;
                        DemoCPU(0x1,0xa);
                        gTheGame._120408_4_ = 0x0;
                        gTheGame._120420_4_ = 0x0;
                        gTheGame._120416_4_ = 0x1;
                        gTheGame._120412_4_ = 0x6;
                        DemoCPU(0x2,0xa);
                        gTheGame._120432_4_ = 0x0;
                        gTheGame._120444_4_ = 0x0;
                        gTheGame._120440_4_ = 0x1;
                        gTheGame._120436_4_ = 0x8;
                        DemoCPU(0x3,0xa);
                        uVar6 = gGameStatus;
                    }
                }
            }
        }
        gGameStatus = uVar6;
        iVar13 = screenGetImage(uVar14,0x8c,&local_38);
        if (iVar13 != 0x0) {
            *(uint *)(local_38 + 0x14) = gpData[0x8];
        }
        iVar13 = screenGetImage(uVar14,0x82,&local_38);
        if (iVar13 != 0x0) {
            *(uint *)(local_38 + 0x14) = gpData[0x9];
        }
        iVar13 = screenGetImage(uVar14,0x6e,&local_38);
        if (iVar13 != 0x0) {
            *(uint *)(local_38 + 0x14) = gpData[0xa];
        }
        iVar13 = screenGetImage(uVar14,0x64,&local_38);
        if (iVar13 != 0x0) {
            *(uint *)(local_38 + 0x14) = gpData[0xb];
        }
        iVar13 = screenGetImage(uVar14,0x12d,&local_38);
        if (iVar13 != 0x0) {
            *(uint *)(local_38 + 0x14) = gpData[0xd];
        }
        titleTickRing(gpData + 0x29,uVar8);
        titleTickRing(gpData + 0x37,uVar8);
        iVar13 = 0x8;
        puVar9 = gpData + 0x45;
        do {
            if (*puVar9 != 0xffffffff) {
                if ((int)puVar9[0x1] < 0x1) {
                    puVar9[0x2] = puVar9[0x2] + puVar9[0x4];
                    puVar9[0x3] = puVar9[0x3] + puVar9[0x5];
                    uVar8 = *puVar9;
                    *puVar9 = uVar8 + 0x1;
                    if (uVar8 + 0x1 == 0x78) {
                        *puVar9 = 0xffffffff;
                    }
                }
                else {
                    puVar9[0x1] = puVar9[0x1] - 0x1;
                }
            }
            puVar1 = puVar9 + 0x6;
            if (*puVar1 != 0xffffffff) {
                if ((int)puVar9[0x7] < 0x1) {
                    puVar9[0x8] = puVar9[0x8] + puVar9[0xa];
                    puVar9[0x9] = puVar9[0x9] + puVar9[0xb];
                    uVar8 = *puVar1;
                    *puVar1 = uVar8 + 0x1;
                    if (uVar8 + 0x1 == 0x78) {
                        *puVar1 = 0xffffffff;
                    }
                }
                else {
                    puVar9[0x7] = puVar9[0x7] - 0x1;
                }
            }
            puVar9 = puVar9 + 0xc;
            iVar13 += -0x1;
        } while (iVar13 != 0x0);
        iVar7 = 0x4;
        iVar13 = 0x0;
        ppuVar12 = (uint **)(gpData + 0xa5);
        puVar9 = gpData;
        do {
            if (*ppuVar12 != (uint *)0xffffffff) {
                puVar9 = ppuVar12[0x1];
                if ((int)puVar9 < 0x1) {
                    ppuVar12[0x2] = (uint *)((int)ppuVar12[0x2] + (int)ppuVar12[0x4]);
                    ppuVar12[0x3] = (uint *)((int)ppuVar12[0x3] + (int)ppuVar12[0x5]);
                    puVar9 = *ppuVar12;
                    *ppuVar12 = (uint *)((int)puVar9 + 0x1);
                    if ((uint *)((int)puVar9 + 0x1) == (uint *)0x78) {
                        *ppuVar12 = (uint *)0xffffffff;
                    }
                }
                else {
                    ppuVar12[0x1] = (uint *)((int)puVar9 + -0x1);
                }
            }
            ppuVar2 = ppuVar12 + 0x6;
            if (*ppuVar2 != (uint *)0xffffffff) {
                puVar9 = ppuVar12[0x7];
                if ((int)puVar9 < 0x1) {
                    ppuVar12[0x8] = (uint *)((int)ppuVar12[0x8] + (int)ppuVar12[0xa]);
                    ppuVar12[0x9] = (uint *)((int)ppuVar12[0x9] + (int)ppuVar12[0xb]);
                    puVar9 = *ppuVar2;
                    *ppuVar2 = (uint *)((int)puVar9 + 0x1);
                    if ((uint *)((int)puVar9 + 0x1) == (uint *)0x78) {
                        *ppuVar2 = (uint *)0xffffffff;
                    }
                }
                else {
                    ppuVar12[0x7] = (uint *)((int)puVar9 + -0x1);
                }
            }
            ppuVar12 = ppuVar12 + 0xc;
            iVar13 += 0x1;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        iVar13 = peelActive(puVar9,iVar13);
        if (iVar13 == 0x0) {
            if ((gTheGame._90944_4_ == -0x1) || (gTheGame._90948_2_ == 0x0)) {
                iVar13 = 0x0;
            }
            else {
                iVar13 = -0x1;
            }
            if ((iVar13 != 0x0) && (gReset == 0x0)) {
                if ((uVar15 & 0x400) == 0x0) {
                    if (((uVar15 & 0x2) != 0x0) && ((uVar15 & 0x40000) == 0x0)) {
                        gpData[0x2] = 0x37;
                        uVar15 |= 0x40000;
                        PlaySE(SFX_INIT_TABLE,0x2);
                    }
                }
                else if ((gTheGame._90948_2_ & 0x4000) == 0x0) {
                    gMain = 0x258;
                    gReset = -0x1;
                    gDemo = 0x2c;
                    gGameStatus &= 0xff7f;
                    PlaySE(SFX_INIT_TABLE,0x2);
                }
                else {
                    gMain = 0x3e7;
                }
            }
        }
        gpData[0x1] = uVar15;
    }
    return;
}



void InitTitle(void)

{
    bool bVar1;
    bool bVar2;
    uint uVar3;
    int iVar4;
    undefined4 uVar5;
    int local_1c;
    undefined4 *local_18 [0x3];
    
    gTheGame._120332_4_ = 0x2;
    from_title = 0x1;
    giButton = 0x0;
    ganButton._0_4_ = 0x0;
    ganButton._4_4_ = 0x0;
    ganButton._8_4_ = 0x0;
    ganButton._12_4_ = 0x0;
    ganButton._16_4_ = 0x0;
    ganButton._20_4_ = 0x0;
    ganButton._24_4_ = 0x0;
    ganButton._28_4_ = 0x0;
    gPlayer._0_4_ = 0x2be4d0;
    gPlayer._4_4_ = 0x2be4d0;
    gPlayer._8_4_ = 0x2be4d0;
    gPlayer._12_4_ = 0x2be4d0;
    pon_ClearHeap();
    local_18[0] = Pon_Image_Heap;
    n642Dolphin_AllchangeTexture();
    gpData = (undefined4 *)((int)local_18[0] + 0x3U & 0xfffffffc);
    local_18[0] = gpData + 0xd5;
    bzero(gpData,0x354);
    gpData[0x2] = 0xffffffff;
    gpData[0xe] = 0x0;
    gpData[0x1] = 0x2000;
    if (g_bInit != '\0') {
        imageLoad(gpData + 0x15,_907,local_18);
        imageLoad(gpData + 0x14,_908,local_18);
        storyLoadPath2(gpData + 0x18,_909,local_18,0x0);
        storyLoadPath2(gpData + 0x19,_910,local_18,0x0);
        storyLoadPath2(gpData + 0x1a,_911,local_18,0x0);
        storyLoadPath2(gpData + 0x1b,_912,local_18,0x0);
        storyLoadPath2(gpData + 0x1c,_913,local_18,0x0);
        storyLoadPath2(gpData + 0x1d,_914,local_18,0x0);
        storyLoadPath2(gpData + 0x1e,_915,local_18,0x0);
        storyLoadPath2(gpData + 0x1f,_916,local_18,0x0);
        storyLoadPath2(gpData + 0x20,_917,local_18,0x0);
        storyLoadPath2(gpData + 0x21,_918,local_18,0x0);
        storyLoadPath2(gpData + 0x22,_919,local_18,0x0);
        storyLoadPath2(gpData + 0x23,_920,local_18,0x0);
        storyLoadPath2(gpData + 0x24,_921,local_18,0x0);
        storyLoadPath2(gpData + 0x25,_922,local_18,0x0);
        storyLoadPath2(gpData + 0x26,_923,local_18,0x0);
        storyLoadPath2(gpData + 0x27,_924,local_18,0x0);
        storyLoadPath2(gpData + 0x28,_925,local_18,0x0);
        iVar4 = storyGetPathImage2(gpData[0x21],0x0,0x0,&local_1c,0x0);
        if (iVar4 != 0x0) {
            *(uint *)(local_1c + 0xc) = *(uint *)(local_1c + 0xc) | 0xc40;
        }
        iVar4 = storyGetPathImage2(gpData[0x22],0x0,0x0,&local_1c,0x0);
        if (iVar4 != 0x0) {
            *(uint *)(local_1c + 0xc) = *(uint *)(local_1c + 0xc) | 0xc40;
        }
        iVar4 = storyGetPathImage2(gpData[0x23],0x0,0x0,&local_1c,0x0);
        if (iVar4 != 0x0) {
            *(uint *)(local_1c + 0xc) = *(uint *)(local_1c + 0xc) | 0xc40;
        }
        iVar4 = storyGetPathImage2(gpData[0x24],0x0,0x0,&local_1c,0x0);
        if (iVar4 != 0x0) {
            *(uint *)(local_1c + 0xc) = *(uint *)(local_1c + 0xc) | 0xc40;
        }
        iVar4 = storyGetPathImage2(gpData[0x25],0x0,0x0,&local_1c,0x0);
        if (iVar4 != 0x0) {
            *(uint *)(local_1c + 0xc) = *(uint *)(local_1c + 0xc) | 0xc40;
        }
        iVar4 = storyGetPathImage2(gpData[0x1c],0x0,0x0,&local_1c,0x0);
        if (iVar4 != 0x0) {
            *(uint *)(local_1c + 0xc) = *(uint *)(local_1c + 0xc) | 0xc40;
        }
        iVar4 = storyGetPathImage2(gpData[0x1d],0x0,0x0,&local_1c,0x0);
        if (iVar4 != 0x0) {
            *(uint *)(local_1c + 0xc) = *(uint *)(local_1c + 0xc) | 0xc40;
        }
        iVar4 = storyGetPathImage2(gpData[0x1e],0x0,0x0,&local_1c,0x0);
        if (iVar4 != 0x0) {
            *(uint *)(local_1c + 0xc) = *(uint *)(local_1c + 0xc) | 0xc40;
        }
        iVar4 = storyGetPathImage2(gpData[0x1f],0x0,0x0,&local_1c,0x0);
        if (iVar4 != 0x0) {
            *(uint *)(local_1c + 0xc) = *(uint *)(local_1c + 0xc) | 0xc40;
        }
        iVar4 = storyGetPathImage2(gpData[0x20],0x0,0x0,&local_1c,0x0);
        if (iVar4 != 0x0) {
            *(uint *)(local_1c + 0xc) = *(uint *)(local_1c + 0xc) | 0xc40;
        }
    }
    iVar4 = screenLoad(_926,local_18);
    if ((iVar4 != 0x0) && (iVar4 = GCHandover_read(0x1), iVar4 == 0x0)) {
        if (gbLogoTitle == 0x0) {
            bVar1 = true;
            bVar2 = true;
            if ((gDemo != 0x16) && (gDemo != 0x21)) {
                bVar2 = false;
            }
            if ((!bVar2) && (geDemoTitle != 0x1)) {
                bVar1 = false;
            }
            if (bVar1) {
                uVar3 = 0xe;
            }
            else {
                uVar3 = 0xffffffff;
            }
            gpData[0xe] = 0x3;
            uVar5 = screenSet(_843,(uVar3 & 0x7f) << 0xc | 0x80001);
            gpData[0x3] = uVar5;
            storyPlaySong(0x20,0x0);
            gDemo = 0x2c;
        }
        else {
            FadeOutAllSFXs(0x3c);
            FadeOutAllSongs(0x3c);
            *gpData = 0x0;
            gpData[0xe] = 0x2;
            uVar5 = screenSet(&_927,0xff001);
            gpData[0x3] = uVar5;
            screenHideText(gpData[0x3],0xc8);
        }
    }
    return;
}



void titleSetup(void)

{
    int iVar1;
    
    iVar1 = 0x0;
    gbLogoTitle = 0xffffffff;
    gbOpenTitle = 0x0;
    geDemoTitle = 0x0;
    gGameStatus = 0x0;
    gPlayer._0_4_ = 0x0;
    gPlayer._4_4_ = 0x0;
    gPlayer._8_4_ = 0x0;
    gPlayer._12_4_ = 0x0;
    do {
        menuInitUser(iVar1);
        iVar1 += 0x1;
    } while (iVar1 < 0x8);
    return;
}



void InitFirstLogo(void)

{
    gbLogoTitle = 0xffffffff;
    gbOpenTitle = 0x0;
    geDemoTitle = 0x0;
    gnLogoEndOKFlag = 0x0;
    gnThreadOKFlag = 0x0;
    Logo_PadReset = 0xffffffff;
    return;
}



void pon_FacialAnimeInLogo(undefined4 param_1,int param_2)

{
    int iVar1;
    
    iVar1 = param_2 / 0xdc + (param_2 >> 0x1f);
    param_2 += (iVar1 - (iVar1 >> 0x1f)) * -0xdc;
    if ((((param_2 < 0x3c) || (0x46 < param_2)) && ((param_2 < 0x68 || (0x78 < param_2)))) &&
       (((param_2 < 0x9e || (0xa8 < param_2)) && ((param_2 < 0xca || (0xda < param_2)))))) {
        if (((param_2 < 0x48) || (0x66 < param_2)) && ((param_2 < 0xaa || (0xc8 < param_2)))) {
            screenHideImage(param_1,0x6f);
        }
        else {
            screenShowImage(param_1,0x6f);
            screenSetFrame(param_1,0x6f,0x1);
        }
    }
    else {
        screenShowImage(param_1,0x6f);
        screenSetFrame(param_1,0x6f,0x0);
    }
    return;
}

