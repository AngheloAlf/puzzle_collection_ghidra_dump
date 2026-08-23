

int storyMakeDustBall(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
    uint uVar1;
    undefined4 *puVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    undefined *puVar6;
    int iVar7;
    uint extraout_r4;
    uint uVar8;
    uint uVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    uint uVar16;
    int iVar17;
    double dVar18;
    float fVar19;
    float fVar20;
    double local_58;
    
    iVar5 = gnDustBallCount;
    dVar18 = 0.0;
    if (param_5 < 0x1) {
        iVar5 = -0x1;
    }
    else {
        uVar1 = param_5 * 0x4;
        puVar2 = (undefined4 *)(*param_1 + 0x3 & 0xfffffffc);
        *param_1 = (uint)puVar2;
        iVar12 = (int)(uVar1 + 0x7) >> 0x3;
        iVar4 = gnDustBallCount * 0x4;
        iVar7 = 0x0;
        gnDustBallCount = gnDustBallCount + 0x1;
        *(undefined4 **)(gapDustBall + iVar4) = puVar2;
        *param_1 = *param_1 + 0x34;
        puVar2[0x1] = 0x0;
        puVar2[0x7] = param_2;
        puVar2[0x2] = param_3 << 0x8;
        puVar2[0x3] = param_4 << 0x8;
        *puVar2 = 0x400;
        puVar2[0x5] = 0x100;
        puVar2[0x6] = 0xffffff00;
        puVar2[0x4] = param_5;
        uVar3 = *param_1 + 0x3 & 0xfffffffc;
        *param_1 = uVar3;
        puVar2[0x8] = uVar3;
        *param_1 = *param_1 + uVar1;
        uVar3 = *param_1 + 0x3 & 0xfffffffc;
        *param_1 = uVar3;
        puVar2[0x9] = uVar3;
        *param_1 = *param_1 + uVar1;
        uVar3 = *param_1 + 0x3 & 0xfffffffc;
        *param_1 = uVar3;
        puVar2[0xa] = uVar3;
        *param_1 = *param_1 + uVar1;
        uVar3 = *param_1 + 0x3 & 0xfffffffc;
        *param_1 = uVar3;
        puVar2[0xb] = uVar3;
        *param_1 = *param_1 + uVar1;
        uVar3 = *param_1 + 0x3 & 0xfffffffc;
        *param_1 = uVar3;
        puVar2[0xc] = uVar3;
        *param_1 = *param_1 + uVar1;
        puVar6 = (undefined *)*param_1;
        uVar3 = (uint)(puVar6 + 0x3) & 0xfffffffc;
        if (0x0 < iVar12) {
            if ((0x8 < iVar12) && (uVar16 = iVar12 - 0x1U >> 0x3, 0x0 < iVar12 + -0x8)) {
                do {
                    puVar6 = (undefined *)(uVar3 + iVar7);
                    *puVar6 = 0xff;
                    iVar7 += 0x8;
                    puVar6[0x1] = 0xff;
                    puVar6[0x2] = 0xff;
                    puVar6[0x3] = 0xff;
                    puVar6[0x4] = 0xff;
                    puVar6[0x5] = 0xff;
                    puVar6[0x6] = 0xff;
                    puVar6[0x7] = 0xff;
                    uVar16 -= 0x1;
                } while (uVar16 != 0x0);
            }
            iVar4 = iVar12 - iVar7;
            puVar6 = (undefined *)(uVar3 + iVar7);
            if (iVar7 < iVar12) {
                do {
                    *puVar6 = 0xff;
                    iVar7 += 0x1;
                    puVar6 = puVar6 + 0x1;
                    iVar4 += -0x1;
                } while (iVar4 != 0x0);
            }
        }
        pon_osGetTime(puVar6,iVar7);
        uVar15 = extraout_r4 ^ 0xa6b99cd;
        uVar16 = uVar15 & 0x7;
        iVar7 = 0x0;
        uVar13 = uVar1 ^ 0x80000000;
        for (iVar4 = 0x0; iVar4 < param_5; iVar4 += 0x1) {
            iVar17 = 0x8;
            iVar10 = 0x0;
            do {
                uVar15 = (int)((uVar15 * 0x4 + 0x2) * (uVar15 * 0x4 + 0x3)) >> 0x2;
                uVar8 = (uVar15 & 0xffff) - ((int)(uVar15 & 0xffff) / (int)uVar1) * uVar1;
                iVar11 = iVar10;
                if ((0x1 << (uVar8 & 0x7) & (uint)*(byte *)(uVar3 + ((int)uVar8 >> 0x3))) != 0x0)
                break;
                uVar15 = (int)((uVar15 * 0x4 + 0x2) * (uVar15 * 0x4 + 0x3)) >> 0x2;
                uVar8 = (uVar15 & 0xffff) - ((int)(uVar15 & 0xffff) / (int)uVar1) * uVar1;
                iVar11 = iVar10 + 0x1;
                if ((0x1 << (uVar8 & 0x7) & (uint)*(byte *)(uVar3 + ((int)uVar8 >> 0x3))) != 0x0)
                break;
                uVar15 = (int)((uVar15 * 0x4 + 0x2) * (uVar15 * 0x4 + 0x3)) >> 0x2;
                uVar8 = (uVar15 & 0xffff) - ((int)(uVar15 & 0xffff) / (int)uVar1) * uVar1;
                iVar11 = iVar10 + 0x2;
                if ((0x1 << (uVar8 & 0x7) & (uint)*(byte *)(uVar3 + ((int)uVar8 >> 0x3))) != 0x0)
                break;
                uVar15 = (int)((uVar15 * 0x4 + 0x2) * (uVar15 * 0x4 + 0x3)) >> 0x2;
                uVar8 = (uVar15 & 0xffff) - ((int)(uVar15 & 0xffff) / (int)uVar1) * uVar1;
                iVar11 = iVar10 + 0x3;
                if ((0x1 << (uVar8 & 0x7) & (uint)*(byte *)(uVar3 + ((int)uVar8 >> 0x3))) != 0x0)
                break;
                iVar10 += 0x4;
                iVar17 += -0x1;
                iVar11 = iVar10;
            } while (iVar17 != 0x0);
            if ((iVar11 == 0x20) && (uVar8 = 0x0, iVar10 = iVar12, 0x0 < iVar12)) {
                do {
                    if ((0x1 << (uVar8 & 0x7) & (uint)*(byte *)(uVar3 + ((int)uVar8 >> 0x3))) != 0x0
                       ) break;
                    uVar8 += 0x1;
                    iVar10 += -0x1;
                } while (iVar10 != 0x0);
            }
            *(byte *)(uVar3 + ((int)uVar8 >> 0x3)) =
                 *(byte *)(uVar3 + ((int)uVar8 >> 0x3)) & ~(byte)(0x1 << (uVar8 & 0x7));
            if (param_2 == 0x1) {
                local_58 = (double)CONCAT44(0x43300000,uVar13);
                dVar18 = (double)(((float)((double)CONCAT44(0x43300000,uVar8 ^ 0x80000000) -
                                          4503601774854144.0) * 6.283185) /
                                 (float)(local_58 - 4503601774854144.0));
            }
            else if (param_2 < 0x1) {
                if (-0x1 < param_2) {
                    local_58 = (double)CONCAT44(0x43300000,uVar8 ^ 0x80000000);
                    dVar18 = (double)(((float)(local_58 - 4503601774854144.0) * 0.7853982) /
                                      (float)((double)CONCAT44(0x43300000,uVar13) -
                                             4503601774854144.0) + 1.178097);
                }
            }
            else if (param_2 < 0x3) {
                local_58 = (double)CONCAT44(0x43300000,uVar13);
                fVar19 = ((float)((double)CONCAT44(0x43300000,uVar8 ^ 0x80000000) -
                                 4503601774854144.0) * 1.570796) /
                         (float)(local_58 - 4503601774854144.0);
                if (fVar19 < 0.7853982) {
                    dVar18 = (double)(fVar19 - 0.3926991);
                    if (dVar18 < 0.0) {
                        dVar18 = (double)(float)(dVar18 + 6.283185307179586);
                    }
                }
                else {
                    dVar18 = (double)(fVar19 + 1.963495);
                }
            }
            uVar15 = (int)((uVar15 * 0x4 + 0x2) * (uVar15 * 0x4 + 0x3)) >> 0x2;
            uVar8 = uVar15 & 0xff;
            if (param_2 == 0x0) {
                uVar8 = 0x0;
            }
            iVar10 = uVar15 * 0x4;
            uVar15 = (iVar10 + 0x2) * (iVar10 + 0x3) >> 0x2;
            uVar14 = uVar15 & 0xff;
            if (param_2 == 0x2) {
                uVar14 |= 0x80;
            }
            fVar19 = cosf((float)dVar18);
            fVar20 = sinf((float)dVar18);
            uVar9 = 0xf - ((int)uVar14 >> 0x4);
            if ((param_2 == 0x0) && ((int)uVar9 < 0x6)) {
                uVar9 = 0x6;
            }
            *(uint *)(puVar2[0xa] + iVar7) = (uVar9 & 0xf) << 0x18 | uVar8 << 0x10 | 0x8000;
            *(undefined4 *)(puVar2[0x8] + iVar7) = 0x400;
            if (param_2 == 0x0) {
                *(undefined4 *)(puVar2[0x9] + iVar7) = 0xff78d2ff;
            }
            else {
                *(undefined4 *)(puVar2[0x9] + iVar7) = *(undefined4 *)(ganColorDust + uVar16 * 0x4);
            }
            *(uint *)(puVar2[0xb] + iVar7) =
                 (int)((float)((double)CONCAT44(0x43300000,uVar14 ^ 0x80000000) - 4503601774854144.0
                              ) * fVar19) << 0x17 | param_3 << 0x8 & 0x7fff00U;
            *(uint *)(puVar2[0xc] + iVar7) =
                 (int)((float)((double)CONCAT44(0x43300000,uVar14 ^ 0x80000000) - 4503601774854144.0
                              ) * fVar20) << 0x17 | param_4 << 0x8 & 0x7fff00U;
            iVar7 += 0x4;
        }
        if ((param_2 == 0x0) && (gpImageDustBits == 0x0)) {
            imageLoad(&gpImageDustBits,_198,param_1);
        }
        if ((param_2 == 0x1) && (gpImageDustBall == 0x0)) {
            imageLoad(&gpImageDustBall,_199,param_1);
        }
        if ((param_2 == 0x2) && (gpImageDustGlow == 0x0)) {
            imageLoad(&gpImageDustGlow,_200,param_1);
        }
    }
    return iVar5;
}



void storyTickDustBall(void)

{
    int iVar1;
    int iVar2;
    undefined1 *puVar3;
    int iVar4;
    undefined4 *puVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    
    puVar3 = gapDustBall;
    for (iVar6 = 0x0; iVar6 < gnDustBallCount; iVar6 += 0x1) {
        puVar5 = *(undefined4 **)puVar3;
        iVar4 = 0x0;
        iVar2 = 0x0;
        for (iVar7 = 0x0; iVar7 < (int)puVar5[0x4]; iVar7 += 0x1) {
            iVar1 = 0x0;
            uVar11 = *(uint *)(puVar5[0xa] + iVar2);
            uVar9 = uVar11 >> 0x10 & 0xff;
            uVar12 = uVar11 >> 0x18 & 0xf;
            uVar10 = uVar11 >> 0x1c;
            uVar8 = (uVar11 & 0x7fff) + 0x1;
            if ((uVar11 & 0x8000) == 0x0) {
                if (uVar12 << 0x1 <= uVar8) {
                    uVar8 = 0x0;
                    uVar10 += 0x1;
                    if (0x7 < uVar10) {
                        uVar10 = 0x0;
                        uVar11 |= 0x8000;
                    }
                }
            }
            else {
                iVar1 = -0x1;
                if (((uVar9 <= uVar8) && (puVar5[0x1] == 0x0)) &&
                   ((puVar5[0x7] != 0x0 || (iVar4 < 0x5)))) {
                    uVar11 = 0x0;
                    uVar8 = 0x0;
                    iVar4 += 0x1;
                    *(undefined4 *)(puVar5[0x8] + iVar2) = *puVar5;
                }
            }
            *(uint *)(puVar5[0xa] + iVar2) =
                 uVar8 & 0x7fff | uVar11 & 0x8000 | uVar9 << 0x10 | uVar10 << 0x1c | uVar12 << 0x18;
            uVar11 = *(uint *)(puVar5[0xb] + iVar2);
            uVar10 = uVar11 >> 0x17;
            if ((uVar11 >> 0x17 & 0x100) != 0x0) {
                uVar10 |= 0xfffffe00;
            }
            uVar9 = *(uint *)(puVar5[0xc] + iVar2);
            uVar8 = uVar9 >> 0x17;
            if ((uVar9 >> 0x17 & 0x100) != 0x0) {
                uVar8 |= 0xfffffe00;
            }
            if (iVar1 == 0x0) {
                uVar11 = (uVar11 & 0x7fffff) + uVar10 * 0x2;
                uVar9 = (uVar9 & 0x7fffff) + uVar8 * 0x2;
            }
            else {
                uVar11 = puVar5[0x2];
                uVar9 = puVar5[0x3];
            }
            *(uint *)(puVar5[0xb] + iVar2) = uVar10 << 0x17 | uVar11 & 0x7fffff;
            *(uint *)(puVar5[0xc] + iVar2) = uVar8 << 0x17 | uVar9 & 0x7fffff;
            iVar2 += 0x4;
        }
        puVar3 = (undefined1 *)((int)puVar3 + 0x4);
    }
    return;
}



void storyDrawDustBall(uint **param_1,int param_2)

{
    short sVar1;
    short sVar2;
    short sVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    int iVar7;
    short sVar8;
    int iVar9;
    int iVar10;
    uint uVar11;
    uint uVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    uint *puVar16;
    uint *puVar17;
    short sVar19;
    int iVar18;
    int iVar20;
    int iVar21;
    int iVar22;
    int iVar23;
    int *local_84;
    
    iVar23 = 0x0;
    if (gnDustBallCount != 0x0) {
        puVar16 = *param_1;
        *puVar16 = 0xe7000000;
        puVar16[0x1] = 0x0;
        puVar16[0x2] = 0xe3000f00;
        puVar16[0x3] = 0x0;
        puVar16[0x4] = 0xe3001001;
        puVar16[0x5] = 0x0;
        puVar16[0x6] = 0xe2001e01;
        puVar16[0x7] = 0x0;
        puVar16[0x8] = 0xe3000c00;
        puVar16[0x9] = 0x0;
        puVar16[0xa] = 0xe3000a01;
        puVar16[0xb] = 0x0;
        puVar16[0xc] = 0xe3001201;
        puVar16[0xd] = 0x2000;
        puVar16[0xe] = 0xe200001c;
        puVar16[0xf] = 0x504240;
        iVar22 = -0x1;
        puVar16[0x10] = 0xd9ddf9fa;
        puVar16[0x11] = 0x0;
        puVar16 = puVar16 + 0x12;
        if (param_2 == -0x1) {
            param_2 = 0x0;
            iVar9 = gnDustBallCount;
        }
        else {
            iVar9 = param_2 + 0x1;
        }
        iVar14 = iVar9 - param_2;
        local_84 = (int *)(gapDustBall + param_2 * 0x4);
        if (param_2 < iVar9) {
            do {
                iVar9 = *local_84;
                if ((*(int *)(iVar9 + 0x1c) == 0x0) && (iVar22 != 0x0)) {
                    *puVar16 = 0xfa000000;
                    puVar16[0x1] = 0xffffffff;
                    puVar16[0x2] = 0xfc30d261;
                    puVar16[0x3] = 0x55a6ff7f;
                    iVar23 = **(int **)(gpImageDustBits + 0x2c);
                    puVar16[0x4] = 0xfd700000;
                    puVar16[0x5] = *(uint *)(iVar23 + 0x8);
                    puVar16[0x6] = 0xf5700000;
                    puVar16[0x7] = 0x7000000;
                    puVar16[0x8] = 0xe6000000;
                    puVar16[0x9] = 0x0;
                    puVar16[0xa] = 0xf3000000;
                    uVar4 = *(uint *)(iVar23 + 0xc);
                    uVar11 = uVar4 * *(int *)(iVar23 + 0x10) - 0x1;
                    if (0x7fe < (int)uVar11) {
                        uVar11 = 0x7ff;
                    }
                    uVar12 = uVar4 << 0x1 | uVar4 >> 0x1f;
                    iVar10 = ((int)uVar12 >> 0x3) +
                             (uint)((int)uVar12 < 0x0 && (uVar4 << 0x1 & 0x6) != 0x0);
                    if (iVar10 < 0x1) {
                        iVar10 = 0x1;
                    }
                    puVar16[0xb] = (iVar10 + 0x7ff) / iVar10 & 0xfffU |
                                   (uVar11 & 0xfff) << 0xc | 0x7000000;
                    puVar16[0xc] = 0xe7000000;
                    puVar16[0xd] = 0x0;
                    puVar16[0xe] = (*(int *)(iVar23 + 0xc) * 0x2 + 0x7 >> 0x3 & 0x1ffU) << 0x9 |
                                   0xf5700000;
                    puVar16[0xf] = 0x0;
                    puVar16[0x10] = 0xf2000000;
                    puVar16[0x11] =
                         (*(int *)(iVar23 + 0xc) + -0x1) * 0x4000 & 0xffc000U |
                         (*(int *)(iVar23 + 0x10) + -0x1) * 0x4 & 0xffcU;
                    puVar16 = puVar16 + 0x12;
                }
                if ((*(int *)(iVar9 + 0x1c) == 0x1) && (iVar22 != 0x1)) {
                    *puVar16 = 0xfa000000;
                    puVar16[0x1] = 0xffffffff;
                    puVar16[0x2] = 0xfc119623;
                    puVar16[0x3] = 0xff2fffff;
                    iVar23 = *(int *)(*(int *)(gpImageDustBall + 0x2c) + (gnTickStory & 0x1c));
                    puVar16[0x4] = 0xfd700000;
                    puVar16[0x5] = *(uint *)(iVar23 + 0x8);
                    puVar16[0x6] = 0xf5700000;
                    puVar16[0x7] = 0x7018060;
                    puVar16[0x8] = 0xe6000000;
                    puVar16[0x9] = 0x0;
                    puVar16[0xa] = 0xf3000000;
                    uVar4 = *(uint *)(iVar23 + 0xc);
                    uVar11 = uVar4 * *(int *)(iVar23 + 0x10) - 0x1;
                    if (0x7fe < (int)uVar11) {
                        uVar11 = 0x7ff;
                    }
                    uVar12 = uVar4 << 0x1 | uVar4 >> 0x1f;
                    iVar10 = ((int)uVar12 >> 0x3) +
                             (uint)((int)uVar12 < 0x0 && (uVar4 << 0x1 & 0x6) != 0x0);
                    if (iVar10 < 0x1) {
                        iVar10 = 0x1;
                    }
                    puVar16[0xb] = (iVar10 + 0x7ff) / iVar10 & 0xfffU |
                                   (uVar11 & 0xfff) << 0xc | 0x7000000;
                    puVar16[0xc] = 0xe7000000;
                    puVar16[0xd] = 0x0;
                    puVar16[0xe] = (*(int *)(iVar23 + 0xc) * 0x2 + 0x7 >> 0x3 & 0x1ffU) << 0x9 |
                                   0xf5700000;
                    puVar16[0xf] = 0x18060;
                    puVar16[0x10] = 0xf2000000;
                    puVar16[0x11] =
                         (*(int *)(iVar23 + 0xc) + -0x1) * 0x4000 & 0xffc000U |
                         (*(int *)(iVar23 + 0x10) + -0x1) * 0x4 & 0xffcU;
                    puVar16 = puVar16 + 0x12;
                }
                if ((*(int *)(iVar9 + 0x1c) == 0x2) && (iVar22 != 0x2)) {
                    *puVar16 = 0xfa000000;
                    puVar16[0x1] = 0xffffffff;
                    puVar16[0x2] = 0xfc30fe61;
                    puVar16[0x3] = 0x55fef379;
                    iVar23 = *(int *)(*(int *)(gpImageDustGlow + 0x2c) + (gnTickStory & 0x1e) * 0x2)
                    ;
                    puVar16[0x4] = 0xfd700000;
                    puVar16[0x5] = *(uint *)(iVar23 + 0x8);
                    puVar16[0x6] = 0xf5700000;
                    puVar16[0x7] = 0x7054150;
                    puVar16[0x8] = 0xe6000000;
                    puVar16[0x9] = 0x0;
                    puVar16[0xa] = 0xf3000000;
                    uVar4 = *(uint *)(iVar23 + 0xc);
                    uVar11 = uVar4 * *(int *)(iVar23 + 0x10) - 0x1;
                    if (0x7fe < (int)uVar11) {
                        uVar11 = 0x7ff;
                    }
                    uVar12 = uVar4 << 0x1 | uVar4 >> 0x1f;
                    iVar22 = ((int)uVar12 >> 0x3) +
                             (uint)((int)uVar12 < 0x0 && (uVar4 << 0x1 & 0x6) != 0x0);
                    if (iVar22 < 0x1) {
                        iVar22 = 0x1;
                    }
                    puVar16[0xb] = (iVar22 + 0x7ff) / iVar22 & 0xfffU |
                                   (uVar11 & 0xfff) << 0xc | 0x7000000;
                    puVar16[0xc] = 0xe7000000;
                    puVar16[0xd] = 0x0;
                    puVar16[0xe] = (*(int *)(iVar23 + 0xc) * 0x2 + 0x7 >> 0x3 & 0x1ffU) << 0x9 |
                                   0xf5700000;
                    puVar16[0xf] = 0x54150;
                    puVar16[0x10] = 0xf2000000;
                    puVar16[0x11] =
                         (*(int *)(iVar23 + 0xc) + -0x1) * 0x4000 & 0xffc000U |
                         (*(int *)(iVar23 + 0x10) + -0x1) * 0x4 & 0xffcU;
                    puVar16 = puVar16 + 0x12;
                }
                iVar10 = 0x0;
                for (iVar22 = 0x0; iVar22 < *(int *)(iVar9 + 0x10); iVar22 += 0x1) {
                    uVar4 = *(uint *)(*(int *)(iVar9 + 0x28) + iVar10);
                    puVar17 = puVar16;
                    if (((uVar4 & 0x8000) == 0x0) &&
                       (uVar11 = *(uint *)(*(int *)(iVar9 + 0x20) + iVar10), uVar11 != 0x0)) {
                        uVar5 = *(uint *)(*(int *)(iVar9 + 0x2c) + iVar10);
                        uVar12 = uVar5 & 0x7fffff;
                        if ((uVar5 & 0x400000) != 0x0) {
                            uVar12 |= 0xff800000;
                        }
                        uVar6 = *(uint *)(*(int *)(iVar9 + 0x30) + iVar10);
                        uVar5 = uVar6 & 0x7fffff;
                        if ((uVar6 & 0x400000) != 0x0) {
                            uVar5 |= 0xff800000;
                        }
                        iVar7 = *(int *)(iVar9 + 0x1c);
                        iVar13 = (int)(uVar12 + 0x80) >> 0x8;
                        iVar15 = (int)(uVar5 + 0x80) >> 0x8;
                        if (iVar7 == 0x0) {
                            uVar12 = uVar4 >> 0x1c;
                            uVar5 = *(uint *)(*(int *)(iVar9 + 0x24) + iVar10);
                            for (uVar4 = (uVar4 >> 0x14 & 0xf0) -
                                         ((uVar4 & 0x7fff) + uVar12 * (uVar4 >> 0x17 & 0x1e));
                                0xff < (int)uVar4; uVar4 = (int)uVar4 >> 0x1) {
                            }
                            *puVar16 = 0xe7000000;
                            puVar16[0x1] = 0x0;
                            puVar16[0x2] = 0xfb000000;
                            puVar16[0x3] = uVar4 & 0xff | uVar5 & 0xffffff00;
                            uVar4 = 0x10;
                            puVar17 = puVar16 + 0x4;
                            if (uVar11 != 0x400) {
                                uVar4 = 0x4000 / uVar11;
                            }
                            if ((0x1 < uVar4) && (0x1 < uVar4)) {
                                iVar7 = (int)uVar4 >> 0x1;
                                sVar8 = (short)(iVar15 + iVar7) * 0x4;
                                uVar4 = (uint)sVar8;
                                if (sVar8 < 0x1) {
                                    uVar4 = 0x0;
                                }
                                sVar8 = (short)(iVar13 + iVar7) * 0x4;
                                uVar5 = (uint)sVar8;
                                if (sVar8 < 0x1) {
                                    uVar5 = 0x0;
                                }
                                iVar15 = (iVar15 - iVar7) * 0x4;
                                sVar8 = (short)iVar15;
                                uVar6 = (uint)sVar8;
                                *puVar17 = (uVar5 & 0xfff) << 0xc | 0xe4000000 | uVar4 & 0xfff;
                                if (sVar8 < 0x1) {
                                    uVar6 = 0x0;
                                }
                                sVar1 = (short)(iVar13 - iVar7) * 0x4;
                                uVar4 = (uint)sVar1;
                                if (sVar1 < 0x1) {
                                    uVar4 = 0x0;
                                }
                                puVar16[0x5] = (uVar4 & 0xfff) << 0xc | uVar6 & 0xfff;
                                puVar16[0x6] = 0xe1000000;
                                sVar19 = (short)uVar11;
                                if (iVar15 < 0x0) {
                                    if (sVar19 < 0x0) {
                                        iVar7 = (int)sVar8 * (int)sVar19 >> 0x7;
                                        if (iVar7 < 0x1) {
                                            iVar7 = 0x0;
                                        }
                                    }
                                    else {
                                        iVar7 = (int)sVar8 * (int)sVar19 >> 0x7;
                                        if (-0x1 < iVar7) {
                                            iVar7 = 0x0;
                                        }
                                    }
                                }
                                else {
                                    iVar7 = 0x0;
                                }
                                if (sVar1 < 0x0) {
                                    if (sVar19 < 0x0) {
                                        iVar13 = (int)sVar1 * (int)sVar19 >> 0x7;
                                        if (iVar13 < 0x1) {
                                            iVar13 = 0x0;
                                        }
                                    }
                                    else {
                                        iVar13 = (int)sVar1 * (int)sVar19 >> 0x7;
                                        if (-0x1 < iVar13) {
                                            iVar13 = 0x0;
                                        }
                                    }
                                }
                                else {
                                    iVar13 = 0x0;
                                }
                                puVar16[0x7] = ((uVar12 + ((int)uVar12 >> 0x2) * -0x4) * 0x200 -
                                               iVar13) * 0x10000 |
                                               ((int)uVar12 >> 0x2) * 0x200 - iVar7 & 0xffffU;
                                puVar16[0x8] = 0xf1000000;
                                puVar16[0x9] = uVar11 & 0xffff | uVar11 << 0x10;
                                puVar17 = puVar16 + 0xa;
                            }
                        }
                        else if (iVar7 == 0x1) {
                            iVar7 = iVar15 << 0x2;
                            sVar8 = (short)iVar7;
                            uVar4 = (uint)sVar8;
                            if (sVar8 < 0x1) {
                                uVar4 = 0x0;
                            }
                            sVar1 = (short)(iVar13 << 0x2);
                            uVar11 = (uint)sVar1;
                            if (sVar1 < 0x1) {
                                uVar11 = 0x0;
                            }
                            iVar18 = (iVar15 + -0x20) * 0x4;
                            sVar19 = (short)iVar18;
                            uVar12 = (uint)sVar19;
                            *puVar16 = (uVar11 & 0xfff) << 0xc | 0xe4000000 | uVar4 & 0xfff;
                            if (sVar19 < 0x1) {
                                uVar12 = 0x0;
                            }
                            sVar3 = (short)(iVar13 + -0x20) * 0x4;
                            uVar4 = (uint)sVar3;
                            if (sVar3 < 0x1) {
                                uVar4 = 0x0;
                            }
                            puVar16[0x1] = (uVar4 & 0xfff) << 0xc | uVar12 & 0xfff;
                            puVar16[0x2] = 0xe1000000;
                            if (iVar18 < 0x0) {
                                iVar21 = ((int)sVar19 << 0xa) >> 0x7;
                                if (-0x1 < iVar21) {
                                    iVar21 = 0x0;
                                }
                            }
                            else {
                                iVar21 = 0x0;
                            }
                            if (sVar3 < 0x0) {
                                iVar20 = ((int)sVar3 << 0xa) >> 0x7;
                                if (-0x1 < iVar20) {
                                    iVar20 = 0x0;
                                }
                            }
                            else {
                                iVar20 = 0x0;
                            }
                            puVar16[0x3] = iVar20 * -0x10000 | -iVar21 & 0xffffU;
                            uVar4 = (uint)sVar8;
                            puVar16[0x4] = 0xf1000000;
                            puVar16[0x5] = 0x4000400;
                            if (sVar8 < 0x1) {
                                uVar4 = 0x0;
                            }
                            sVar2 = (short)(iVar13 + 0x20) * 0x4;
                            uVar11 = (uint)sVar2;
                            if (sVar2 < 0x1) {
                                uVar11 = 0x0;
                            }
                            uVar12 = (uint)sVar19;
                            puVar16[0x6] = (uVar11 & 0xfff) << 0xc | 0xe4000000 | uVar4 & 0xfff;
                            if (sVar19 < 0x1) {
                                uVar12 = 0x0;
                            }
                            uVar4 = (uint)sVar1;
                            if (sVar1 < 0x1) {
                                uVar4 = 0x0;
                            }
                            puVar16[0x7] = (uVar4 & 0xfff) << 0xc | uVar12 & 0xfff;
                            puVar16[0x8] = 0xe1000000;
                            if (iVar18 < 0x0) {
                                iVar13 = ((int)sVar19 << 0xa) >> 0x7;
                                if (-0x1 < iVar13) {
                                    iVar13 = 0x0;
                                }
                            }
                            else {
                                iVar13 = 0x0;
                            }
                            if (sVar1 < 0x0) {
                                iVar18 = sVar1 * -0x400 >> 0x7;
                                if (iVar18 < 0x1) {
                                    iVar18 = 0x0;
                                }
                            }
                            else {
                                iVar18 = 0x0;
                            }
                            puVar16[0x9] = (0x3e0 - iVar18) * 0x10000 | -iVar13 & 0xffffU;
                            sVar19 = (short)(iVar15 + 0x20) * 0x4;
                            puVar16[0xa] = 0xf1000000;
                            uVar4 = (uint)sVar19;
                            puVar16[0xb] = 0xfc000400;
                            if (sVar19 < 0x1) {
                                uVar4 = 0x0;
                            }
                            uVar11 = (uint)sVar1;
                            if (sVar1 < 0x1) {
                                uVar11 = 0x0;
                            }
                            uVar12 = (uint)sVar8;
                            puVar16[0xc] = (uVar11 & 0xfff) << 0xc | 0xe4000000 | uVar4 & 0xfff;
                            if (sVar8 < 0x1) {
                                uVar12 = 0x0;
                            }
                            uVar4 = (uint)sVar3;
                            if (sVar3 < 0x1) {
                                uVar4 = 0x0;
                            }
                            puVar16[0xd] = (uVar4 & 0xfff) << 0xc | uVar12 & 0xfff;
                            puVar16[0xe] = 0xe1000000;
                            if (iVar7 < 0x0) {
                                iVar13 = sVar8 * -0x400 >> 0x7;
                                if (iVar13 < 0x1) {
                                    iVar13 = 0x0;
                                }
                            }
                            else {
                                iVar13 = 0x0;
                            }
                            if (sVar3 < 0x0) {
                                iVar15 = ((int)sVar3 << 0xa) >> 0x7;
                                if (-0x1 < iVar15) {
                                    iVar15 = 0x0;
                                }
                            }
                            else {
                                iVar15 = 0x0;
                            }
                            puVar16[0xf] = iVar15 * -0x10000 | 0x3e0U - iVar13 & 0xffff;
                            uVar4 = (uint)sVar19;
                            puVar16[0x10] = 0xf1000000;
                            puVar16[0x11] = 0x400fc00;
                            if (sVar19 < 0x1) {
                                uVar4 = 0x0;
                            }
                            uVar11 = (uint)sVar2;
                            if (sVar2 < 0x1) {
                                uVar11 = 0x0;
                            }
                            uVar12 = (uint)sVar8;
                            puVar16[0x12] = (uVar11 & 0xfff) << 0xc | 0xe4000000 | uVar4 & 0xfff;
                            if (sVar8 < 0x1) {
                                uVar12 = 0x0;
                            }
                            uVar4 = (uint)sVar1;
                            if (sVar1 < 0x1) {
                                uVar4 = 0x0;
                            }
                            puVar16[0x13] = (uVar4 & 0xfff) << 0xc | uVar12 & 0xfff;
                            puVar16[0x14] = 0xe1000000;
                            if (iVar7 < 0x0) {
                                iVar7 = sVar8 * -0x400 >> 0x7;
                                if (iVar7 < 0x1) {
                                    iVar7 = 0x0;
                                }
                            }
                            else {
                                iVar7 = 0x0;
                            }
                            if (sVar1 < 0x0) {
                                iVar13 = sVar1 * -0x400 >> 0x7;
                                if (iVar13 < 0x1) {
                                    iVar13 = 0x0;
                                }
                            }
                            else {
                                iVar13 = 0x0;
                            }
                            puVar16[0x15] = (0x3e0 - iVar13) * 0x10000 | 0x3e0U - iVar7 & 0xffff;
                            puVar16[0x16] = 0xf1000000;
                            puVar16[0x17] = 0xfc00fc00;
                            puVar17 = puVar16 + 0x18;
                        }
                        else if (iVar7 == 0x2) {
                            uVar4 = *(uint *)(*(int *)(iVar9 + 0x24) + iVar10);
                            *puVar16 = 0xe7000000;
                            puVar16[0x1] = 0x0;
                            puVar16[0x2] = 0xfb000000;
                            puVar16[0x3] = uVar4;
                            sVar8 = (short)(iVar15 + (*(int *)(iVar23 + 0x10) >> 0x1)) * 0x4;
                            uVar4 = (uint)sVar8;
                            if (sVar8 < 0x1) {
                                uVar4 = 0x0;
                            }
                            sVar8 = (short)(iVar13 + (*(int *)(iVar23 + 0xc) >> 0x1)) * 0x4;
                            uVar11 = (uint)sVar8;
                            if (sVar8 < 0x1) {
                                uVar11 = 0x0;
                            }
                            puVar16[0x4] = (uVar11 & 0xfff) << 0xc | 0xe4000000 | uVar4 & 0xfff;
                            sVar8 = (short)(iVar15 - (*(int *)(iVar23 + 0x10) >> 0x1)) * 0x4;
                            uVar4 = (uint)sVar8;
                            if (sVar8 < 0x1) {
                                uVar4 = 0x0;
                            }
                            sVar8 = (short)(iVar13 - (*(int *)(iVar23 + 0xc) >> 0x1)) * 0x4;
                            uVar11 = (uint)sVar8;
                            if (sVar8 < 0x1) {
                                uVar11 = 0x0;
                            }
                            puVar16[0x5] = (uVar11 & 0xfff) << 0xc | uVar4 & 0xfff;
                            puVar16[0x6] = 0xe1000000;
                            iVar7 = (iVar15 - (*(int *)(iVar23 + 0x10) >> 0x1)) * 0x4;
                            if (iVar7 < 0x0) {
                                iVar7 = ((int)(short)iVar7 << 0xa) >> 0x7;
                                if (-0x1 < iVar7) {
                                    iVar7 = 0x0;
                                }
                            }
                            else {
                                iVar7 = 0x0;
                            }
                            sVar8 = (short)(iVar13 - (*(int *)(iVar23 + 0xc) >> 0x1)) * 0x4;
                            if (sVar8 < 0x0) {
                                iVar13 = ((int)sVar8 << 0xa) >> 0x7;
                                if (-0x1 < iVar13) {
                                    iVar13 = 0x0;
                                }
                            }
                            else {
                                iVar13 = 0x0;
                            }
                            puVar16[0x7] = iVar13 * -0x10000 | -iVar7 & 0xffffU;
                            puVar16[0x8] = 0xf1000000;
                            puVar16[0x9] = 0x4000400;
                            puVar17 = puVar16 + 0xa;
                        }
                    }
                    iVar10 += 0x4;
                    puVar16 = puVar17;
                }
                iVar22 = *(int *)(iVar9 + 0x1c);
                local_84 = local_84 + 0x1;
                iVar14 += -0x1;
            } while (iVar14 != 0x0);
        }
        *param_1 = puVar16;
    }
    return;
}



void storySetupStage(void)

{
    if ((gTheGame._120360_4_ == 0x1) && (0x9 < gTheGame._120364_4_)) {
        geModeNext = 0x7;
        geXtraNext = 0x0;
        gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        return;
    }
    if ((gTheGame._120360_4_ == 0x2) && (0xd < gTheGame._120364_4_)) {
        geModeNext = 0x7;
        geXtraNext = 0x0;
        gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        return;
    }
    if (gTheGame._120364_4_ == 0x11) {
        geModeNext = 0x7;
        geXtraNext = 0x0;
        gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        return;
    }
    if (gTheGame._120364_4_ == 0x10) {
        geModeNext = 0x6;
        geXtraNext = 0x0;
        gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        return;
    }
    if (gTheGame._120364_4_ == 0xf) {
        geModeNext = 0x5;
        geXtraNext = 0x0;
        gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        return;
    }
    if (0xa < gTheGame._120364_4_) {
        giLevelStory = gTheGame._120364_4_ + -0xb;
        geModeNext = 0x4;
        geXtraNext = 0x1;
        gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        return;
    }
    if (gTheGame._120364_4_ == 0xa) {
        giLevelStory = 0x9;
        geModeNext = 0x3;
        geXtraNext = 0x1;
        gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        return;
    }
    if (0x1 < gTheGame._120364_4_) {
        giLevelStory = gTheGame._120364_4_;
        geModeNext = 0x3;
        geXtraNext = 0x0;
        gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        return;
    }
    geModeNext = 0x2;
    geXtraNext = 0x0;
    gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
    return;
}



void storySetCamera(double param_1,double param_2,double param_3,double param_4,double param_5,
                   double param_6,double param_7)

{
    double dVar1;
    double dVar2;
    float fVar3;
    
    if ((param_1 <= 0.0) || (180.0 <= param_1)) {
        grFOV = 60.0;
    }
    else {
        grFOV = (float)param_1;
    }
    grCameraSourceX = (float)param_2;
    grCameraSourceY = (float)param_3;
    grCameraSourceZ = (float)param_4;
    grCameraTargetX = (float)param_5;
    grCameraTargetY = (float)param_6;
    grCameraTargetZ = (float)param_7;
    fVar3 = grFOV * 0.5 * 0.01745329;
    dVar2 = (double)fVar3;
    fVar3 = sinf(fVar3);
    dVar1 = (double)fVar3;
    fVar3 = cosf((float)dVar2);
    grDistanceCamera = (float)((double)(fVar3 * 160.0) / dVar1);
    guLookAtF((double)grCameraSourceX,(double)grCameraSourceY,(double)grCameraSourceZ,
              (double)grCameraTargetX,(double)grCameraTargetY,(double)grCameraTargetZ,0x0,
              0x3ff0000000000000,garLook);
    guMtxF2L(garLook,gMtxLook);
    guPerspectiveF((double)grFOV,0x3ff5555560000000,0x4030000000000000,0x40b0000000000000,
                   0x3ff0000000000000,garView,&gnNormalize);
    guMtxF2L(garView,gMtxView);
    return;
}



undefined4 storyGetScreen(int *param_1,int *param_2,float *param_3)

{
    float fVar1;
    float fVar2;
    float fVar3;
    undefined4 uVar4;
    float local_38;
    float local_34;
    float local_30 [0x4];
    
    guMtxXFMF(garLook,local_30,&local_34,&local_38);
    if (local_38 < -128.0) {
        if (-8192.0 < local_38) {
            fVar1 = garView._60_4_ +
                    garView._44_4_ * local_38 +
                    garView._12_4_ * local_30[0] + garView._28_4_ * local_34;
            fVar2 = garView._48_4_ +
                    garView._32_4_ * local_38 +
                    garView._0_4_ * local_30[0] + garView._16_4_ * local_34;
            fVar3 = garView._52_4_ +
                    garView._36_4_ * local_38 +
                    garView._4_4_ * local_30[0] + garView._20_4_ * local_34;
            if (fVar1 == 0.0) {
                uVar4 = 0x0;
            }
            else {
                if (param_3 != NULL) {
                    *param_3 = grDistanceCamera /
                               (garView._56_4_ +
                               garView._40_4_ * local_38 +
                               garView._8_4_ * local_30[0] + garView._24_4_ * local_34);
                }
                if (param_1 != NULL) {
                    *param_1 = (int)((fVar2 * 160.0) / fVar1 + 160.0 + 0.5);
                }
                if (param_2 != NULL) {
                    *param_2 = (int)((120.0 - (fVar3 * 120.0) / fVar1) + 0.5);
                }
                uVar4 = 0xffffffff;
            }
        }
        else {
            uVar4 = 0x0;
        }
    }
    else {
        uVar4 = 0x0;
    }
    return uVar4;
}



void storyMakeRainbow(double param_1,double param_2,double param_3,double param_4,
                     undefined2 *param_5,uint param_6)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    short sVar5;
    short sVar6;
    short sVar7;
    undefined2 uVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    double dVar13;
    double dVar14;
    double dVar15;
    double dVar16;
    float fVar17;
    float fVar18;
    
    iVar9 = (((int)param_6 >> 0xa) + (uint)((int)param_6 < 0x0 && (param_6 & 0x3ff) != 0x0)) * 0x8;
    *(float *)(garBaseRainbow + iVar9) = (float)param_1;
    *(float *)(garBaseRainbow + iVar9 + 0x4) = (float)param_2;
    dVar15 = (double)((float)(param_4 - param_3) * 0.0625);
    if (0.0 <= dVar15) {
        dVar16 = (double)(float)(param_2 - param_1);
        iVar11 = **(int **)(gpImageRainbow + 0x2c);
        dVar14 = param_1 + (double)(float)(param_3 * dVar16);
        dVar13 = (double)(float)(param_3 * 3.141592653589793);
        fVar17 = sinf((float)(param_3 * 3.141592653589793));
        fVar18 = sinf((float)dVar13);
        iVar12 = 0x0;
        iVar4 = param_6 + (int)(param_3 * 1024.0);
        iVar3 = (int)(fVar18 * 32.0 + 0.5) + 0x70;
        iVar9 = (int)(fVar17 * 96.0 + 0.5);
        iVar10 = (int)dVar14;
        do {
            param_3 = (double)(float)(param_3 + dVar15);
            dVar14 = (double)(float)(param_3 * 3.141592653589793);
            iVar1 = (int)(param_1 + (double)(float)(param_3 * dVar16));
            fVar17 = sinf((float)(param_3 * 3.141592653589793));
            iVar2 = (int)(fVar17 * 96.0 + 0.5);
            fVar17 = sinf((float)dVar14);
            sVar6 = (short)iVar10 + (short)iVar9;
            uVar8 = (undefined2)iVar4;
            *param_5 = uVar8;
            sVar7 = (short)(iVar3 >> 0x1);
            param_5[0x1] = sVar6;
            sVar5 = 0x0;
            iVar4 = param_6 + (int)(param_3 * 1024.0);
            param_5[0x2] = sVar7;
            param_5[0x4] = 0x0;
            iVar3 = (int)(fVar17 * 32.0 + 0.5) + 0x70;
            if (iVar12 == 0xf) {
                sVar5 = (short)(*(int *)(iVar11 + 0x10) + -0x1) * 0x40;
            }
            param_5[0x5] = sVar5;
            param_5[0x8] = uVar8;
            param_5[0x9] = sVar6;
            param_5[0xa] = -sVar7;
            param_5[0xc] = (short)(*(int *)(iVar11 + 0xc) + -0x1) * 0x40;
            if (iVar12 == 0xf) {
                sVar5 = (short)(*(int *)(iVar11 + 0x10) + -0x1) * 0x40;
            }
            else {
                sVar5 = 0x0;
            }
            param_5[0xd] = sVar5;
            sVar6 = (short)iVar1 + (short)iVar2;
            param_5[0x10] = (short)iVar4;
            sVar5 = (short)(iVar3 >> 0x1);
            param_5[0x11] = sVar6;
            param_5[0x12] = -sVar5;
            param_5[0x14] = (short)(*(int *)(iVar11 + 0xc) + -0x1) * 0x40;
            if (iVar12 == 0xf) {
                sVar7 = 0x0;
            }
            else {
                sVar7 = (short)(*(int *)(iVar11 + 0x10) + -0x1) * 0x40;
            }
            param_5[0x15] = sVar7;
            param_5[0x18] = (short)iVar4;
            param_5[0x19] = sVar6;
            sVar6 = 0x0;
            param_5[0x1a] = sVar5;
            param_5[0x1c] = 0x0;
            if (iVar12 != 0xf) {
                sVar6 = (short)(*(int *)(iVar11 + 0x10) + -0x1) * 0x40;
            }
            iVar12 += 0x1;
            param_5[0x1d] = sVar6;
            param_5 = param_5 + 0x20;
            iVar9 = iVar2;
            iVar10 = iVar1;
        } while (iVar12 < 0x10);
    }
    return;
}



void storyDrawRainbow(undefined4 *param_1,int param_2,uint param_3)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;
    uint uVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    
    uVar5 = *(uint *)((int)&gaiPageRainbow + param_2 * 0x4);
    puVar7 = (undefined4 *)*param_1;
    *puVar7 = 0xe7000000;
    puVar7[0x1] = 0x0;
    puVar7[0x2] = 0xe3000f00;
    puVar7[0x3] = 0x0;
    puVar7[0x4] = 0xe3001001;
    puVar7[0x5] = 0x0;
    puVar7[0x6] = 0xe2001e01;
    puVar7[0x7] = 0x0;
    puVar7[0x8] = 0xe3000c00;
    puVar7[0x9] = 0x80000;
    puVar7[0xa] = 0xe3001201;
    puVar7[0xb] = 0x2000;
    puVar7[0xc] = 0xe200001c;
    puVar7[0xd] = 0x5041c8;
    puVar7[0xe] = 0xd7000002;
    puVar7[0xf] = 0x80008000;
    puVar7[0x10] = 0xd9ddf9fa;
    puVar7[0x11] = 0x0;
    puVar7[0x12] = 0xfa000000;
    puVar7[0x13] = param_3 & 0xff;
    iVar4 = **(int **)(gpImageRainbow + 0x2c);
    puVar7[0x14] = 0xe7000000;
    puVar7[0x15] = 0x0;
    puVar7[0x16] = 0xfd180000;
    puVar7[0x17] = *(undefined4 *)(iVar4 + 0x8);
    puVar7[0x18] = 0xf5180000;
    puVar7[0x19] = 0x7000000;
    puVar7[0x1a] = 0xe6000000;
    puVar7[0x1b] = 0x0;
    puVar7[0x1c] = 0xf3000000;
    uVar9 = *(uint *)(iVar4 + 0xc);
    uVar6 = uVar9 * *(int *)(iVar4 + 0x10) - 0x1;
    if (0x7fe < (int)uVar6) {
        uVar6 = 0x7ff;
    }
    uVar1 = uVar9 << 0x2 | uVar9 >> 0x1e;
    iVar10 = ((int)uVar1 >> 0x3) + (uint)((int)uVar1 < 0x0 && (uVar9 << 0x2 & 0x4) != 0x0);
    if (iVar10 < 0x1) {
        iVar10 = 0x1;
    }
    puVar7[0x1d] = (iVar10 + 0x7ff) / iVar10 & 0xfffU | (uVar6 & 0xfff) << 0xc | 0x7000000;
    puVar7[0x1e] = 0xe7000000;
    puVar7[0x1f] = 0x0;
    puVar7[0x20] = (*(int *)(iVar4 + 0xc) * 0x2 + 0x7 >> 0x3 & 0x1ffU) << 0x9 | 0xf5180000;
    iVar12 = 0x8;
    puVar7[0x21] = 0x0;
    puVar7[0x22] = 0xf2000000;
    puVar7[0x23] = (*(int *)(iVar4 + 0xc) + -0x1) * 0x4000 & 0xffc000U |
                   (*(int *)(iVar4 + 0x10) + -0x1) * 0x4 & 0xffcU;
    iVar10 = 0xf;
    iVar4 = 0x3c0;
    puVar7 = puVar7 + 0x24;
    do {
        if (iVar10 == 0xe) {
LAB_000a1af4:
            *puVar7 = 0xfcffffff;
            puVar7[0x1] = 0xfffcf67b;
            puVar7 = puVar7 + 0x2;
        }
        else if (iVar10 < 0xe) {
            if (iVar10 == 0x1) goto LAB_000a1af4;
            if ((iVar10 < 0x1) && (-0x1 < iVar10)) {
                *puVar7 = 0xfcff97ff;
                puVar7[0x1] = 0xff2cfe7f;
                puVar7 = puVar7 + 0x2;
            }
        }
        else if (iVar10 < 0x10) {
            *puVar7 = 0xfcff97ff;
            puVar7[0x1] = 0xff2cfe7f;
            puVar7 = puVar7 + 0x2;
        }
        iVar2 = *(int *)(gapVtxRainbow +
                        param_2 * 0x8 +
                        (uVar5 + (((int)uVar5 >> 0x1) +
                                 (uint)((int)uVar5 < 0x0 && (uVar5 & 0x1) != 0x0)) * -0x2) * 0x4);
        iVar11 = iVar10 + -0x1;
        *puVar7 = 0x1004008;
        iVar3 = iVar4 + -0x40;
        puVar7[0x1] = iVar2 + iVar4;
        puVar7[0x2] = 0x6000204;
        puVar7[0x3] = 0x406;
        puVar8 = puVar7 + 0x4;
        if (iVar11 == 0xe) {
LAB_000a1b78:
            *puVar8 = 0xfcffffff;
            puVar7[0x5] = 0xfffcf67b;
            puVar8 = puVar7 + 0x6;
        }
        else if (iVar11 < 0xe) {
            if (iVar11 == 0x1) goto LAB_000a1b78;
            if ((iVar11 < 0x1) && (-0x1 < iVar11)) {
                *puVar8 = 0xfcff97ff;
                puVar7[0x5] = 0xff2cfe7f;
                puVar8 = puVar7 + 0x6;
            }
        }
        else if (iVar11 < 0x10) {
            *puVar8 = 0xfcff97ff;
            puVar7[0x5] = 0xff2cfe7f;
            puVar8 = puVar7 + 0x6;
        }
        iVar2 = *(int *)(gapVtxRainbow +
                        param_2 * 0x8 +
                        (uVar5 + (((int)uVar5 >> 0x1) +
                                 (uint)((int)uVar5 < 0x0 && (uVar5 & 0x1) != 0x0)) * -0x2) * 0x4);
        iVar10 += -0x2;
        *puVar8 = 0x1004008;
        iVar4 += -0x80;
        puVar8[0x1] = iVar2 + iVar3;
        puVar8[0x2] = 0x6000204;
        puVar8[0x3] = 0x406;
        puVar7 = puVar8 + 0x4;
        iVar12 += -0x1;
        if (iVar12 == 0x0) {
            *param_1 = puVar7;
            return;
        }
    } while( true );
}



undefined4 storyLoadPath2(int **param_1,undefined4 param_2,int **param_3,int param_4)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    int *piVar4;
    int iVar5;
    int *piVar6;
    undefined auStack_40 [0x4];
    int local_3c;
    undefined auStack_38 [0x10];
    undefined auStack_28 [0x10];
    
    iVar1 = fileOpen(auStack_28);
    if (iVar1 == 0x0) {
        uVar2 = 0x0;
    }
    else {
        piVar6 = *param_3;
        piVar4 = (int *)((int)piVar6 + 0x3U & 0xfffffffc);
        *param_3 = piVar4;
        *param_1 = piVar4;
        *param_3 = *param_3 + 0x10;
        **param_1 = 0x0;
        (*param_1)[0x4] = 0x0;
        (*param_1)[0x3] = 0xff;
        (*param_1)[0xd] = param_4;
        (*param_1)[0x1] = 0x0;
        (*param_1)[0x2] = 0x0;
        (*param_1)[0x6] = 0x1;
        fileGet(auStack_28,auStack_40,0x4);
        fileGet(auStack_28,&local_3c,0x4);
        iVar1 = 0x0;
        (*param_1)[0xa] = local_3c;
        piVar4 = (int *)((int)*param_3 + 0x3U & 0xfffffffc);
        *param_3 = piVar4;
        (*param_1)[0xc] = (int)piVar4;
        *param_3 = *param_3 + local_3c;
        for (iVar5 = 0x0; iVar5 < local_3c; iVar5 += 0x1) {
            fileGet(auStack_28,auStack_38,0x10);
            iVar3 = imageLoad((*param_1)[0xc] + iVar1,auStack_38,param_3);
            if (iVar3 == 0x0) {
                *param_3 = piVar6;
                return 0x0;
            }
            iVar1 += 0x4;
        }
        fileGet(auStack_28,*param_1 + 0x9,0x4);
        fileGet(auStack_28,*param_1 + 0x8,0x4);
        iVar1 = 0x0;
        piVar4 = (int *)((int)*param_3 + 0x3U & 0xfffffffc);
        *param_3 = piVar4;
        (*param_1)[0xb] = (int)piVar4;
        *param_3 = *param_3 + (*param_1)[0x8] + 0x1;
        for (iVar5 = 0x0; piVar4 = *param_1, iVar5 < piVar4[0x8]; iVar5 += 0x1) {
            fileGet(auStack_28,piVar4[0xb] + iVar1,0x4);
            iVar1 += 0x4;
        }
        *(int *)(piVar4[0xb] + iVar5 * 0x4) = piVar4[0x9];
        if (param_4 == 0x3) {
            iVar1 = 0x0;
            piVar4 = (int *)((int)*param_3 + 0x3U & 0xfffffffc);
            *param_3 = piVar4;
            (*param_1)[0x5] = (int)piVar4;
            *param_3 = *param_3 + (*param_1)[0x8];
            for (iVar5 = 0x0; piVar4 = *param_1, iVar5 < piVar4[0x8]; iVar5 += 0x1) {
                *(undefined4 *)(piVar4[0x5] + iVar1) = *(undefined4 *)(piVar4[0xb] + iVar1);
                iVar1 += 0x4;
            }
        }
        piVar4 = (int *)((int)*param_3 + 0x3U & 0xfffffffc);
        *param_3 = piVar4;
        (*param_1)[0x7] = (int)piVar4;
        *param_3 = *param_3 + (*param_1)[0x9] * 0x2;
        fileGet(auStack_28,(*param_1)[0x7],(*param_1)[0x9] << 0x3);
        iVar1 = 0x0;
        for (iVar5 = 0x0; piVar4 = *param_1, iVar5 <= piVar4[0x4]; iVar5 += 0x1) {
            if (iVar5 < 0x1) {
                if (((int)*(short *)(piVar4[0x7] + iVar1) & 0x8000U) != 0x0) {
                    *piVar4 = *piVar4 + 0x1;
                }
            }
            else if ((((int)*(short *)(piVar4[0x7] + (iVar5 + -0x1) * 0x8) & 0x8000U) == 0x0) &&
                    (((int)*(short *)(piVar4[0x7] + iVar1) & 0x8000U) != 0x0)) {
                *piVar4 = *piVar4 + 0x1;
            }
            iVar1 += 0x8;
        }
        piVar4[0xe] = 0x0;
        uVar2 = 0xffffffff;
        (*param_1)[0xf] = (*param_1)[0x9];
    }
    return uVar2;
}



undefined4 storyHackPath2(undefined4 param_1)

{
    gnSkipCount = 0x0;
    gnFlushCount = 0xffffffff;
    gnTickStory = param_1;
    return 0xffffffff;
}



undefined4 storySetPathBlur2(int param_1,int param_2)

{
    undefined4 uVar1;
    
    if (param_2 == 0x0) {
        uVar1 = 0x0;
    }
    else {
        uVar1 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x8) = uVar1;
    return 0xffffffff;
}



undefined4 storySetPathWrap2(int param_1,int param_2,int param_3)

{
    if (*(int *)(param_1 + 0x34) == 0x3) {
        return 0x0;
    }
    if (((param_2 <= param_3) && (-0x1 < param_2)) && (param_2 < *(int *)(param_1 + 0x20))) {
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(*(int *)(param_1 + 0x2c) + param_2 * 0x4);
        if (param_3 < *(int *)(param_1 + 0x20)) {
            *(undefined4 *)(param_1 + 0x3c) =
                 *(undefined4 *)(*(int *)(param_1 + 0x2c) + param_3 * 0x4);
        }
        else {
            *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x24);
        }
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 storySetPathImage2(int param_1,undefined4 param_2)

{
    *(undefined4 *)(param_1 + 0xc) = param_2;
    return 0xffffffff;
}



undefined4 storyGetPathImage2(int param_1,int param_2,int param_3,int *param_4,uint *param_5)

{
    bool bVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    
    if (*(int *)(param_1 + 0x34) == 0x3) {
        param_3 *= 0x4;
        bVar1 = true;
        param_2 = *(int *)(*(int *)(param_1 + 0x14) + param_3) - param_2;
        if ((*(int *)(*(int *)(param_1 + 0x2c) + param_3) <= param_2) &&
           (param_2 < *(int *)(*(int *)(param_1 + 0x2c) + param_3 + 0x4))) {
            bVar1 = false;
        }
        if (bVar1) {
            iVar2 = -0x1;
        }
        else {
            iVar2 = 0x0;
        }
    }
    else {
        bVar1 = false;
        param_2 = *(int *)(param_1 + 0x10) - param_2;
        if ((-0x1 < param_2) && (param_2 < *(int *)(param_1 + 0x24))) {
            bVar1 = true;
        }
        if (bVar1) {
            iVar2 = 0x0;
        }
        else {
            iVar2 = -0x1;
        }
    }
    if (iVar2 == 0x0) {
        uVar3 = (uint)*(short *)(*(int *)(param_1 + 0x1c) + param_2 * 0x8);
        uVar4 = uVar3 >> 0x8 & 0x7f;
        uVar3 &= 0xff;
        if ((false) || (*(int *)(param_1 + 0x28) <= (int)uVar4)) {
            return 0x0;
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x30) + uVar4 * 0x4);
        if (iVar2 != 0x0) {
            if (param_5 != NULL) {
                *param_5 = uVar3;
            }
            if (param_4 != NULL) {
                *param_4 = iVar2;
            }
            bVar1 = false;
            if ((true) && ((int)uVar3 < *(int *)(iVar2 + 0x18))) {
                bVar1 = true;
            }
            if (bVar1) {
                return 0xffffffff;
            }
            return 0x0;
        }
    }
    return 0x0;
}



int storyTickPath2(int *param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int local_14 [0x2];
    
    if (param_1[0x4] == 0x0) {
        if (((int)*(short *)param_1[0x7] & 0x8000U) == 0x0) {
            *param_1 = 0x0;
        }
        else {
            *param_1 = 0x1;
        }
    }
    iVar4 = 0x0;
    iVar1 = peelActive();
    if ((((iVar1 == 0x0) && (iVar1 = screenFlushing(), iVar1 == 0x0)) && (gnFlushCount == -0x1)) &&
       ((gnSkipCount == 0x0 && ((gnTickStory & param_1[0x6]) == 0x0)))) {
        iVar1 = param_1[0xd];
        if (iVar1 == 0x2) {
            if (param_1[0x1] == 0x0) {
                iVar1 = param_1[0x4];
                param_1[0x4] = iVar1 + 0x1;
                if (param_1[0x9] + -0x1 <= iVar1 + 0x1) {
                    param_1[0x1] = param_1[0x1] ^ 0xffffffff;
                }
            }
            else {
                iVar1 = param_1[0x4];
                param_1[0x4] = iVar1 + -0x1;
                if (iVar1 + -0x1 < 0x1) {
                    param_1[0x1] = param_1[0x1] ^ 0xffffffff;
                }
            }
        }
        else if (iVar1 < 0x2) {
            if (iVar1 == 0x0) {
                if (param_1[0x4] < param_1[0x9] + -0x1) {
                    param_1[0x4] = param_1[0x4] + 0x1;
                }
                else {
                    iVar4 = -0x1;
                }
            }
            else if ((-0x1 < iVar1) &&
                    (iVar1 = param_1[0x4], param_1[0x4] = iVar1 + 0x1, param_1[0xf] <= iVar1 + 0x1))
            {
                param_1[0x4] = param_1[0xe];
            }
        }
        else if (iVar1 < 0x4) {
            iVar1 = 0x0;
            for (iVar3 = 0x0; iVar3 < param_1[0x8]; iVar3 += 0x1) {
                iVar2 = *(int *)(param_1[0x5] + iVar1);
                if (iVar2 < *(int *)(param_1[0xb] + iVar1 + 0x4) + -0x1) {
                    *(int *)(param_1[0x5] + iVar1) = iVar2 + 0x1;
                }
                iVar1 += 0x4;
            }
        }
        if (iVar4 == 0x0) {
            if ((((int)*(short *)(param_1[0x7] + (param_1[0x4] + -0x1) * 0x8) & 0x8000U) == 0x0) &&
               (((int)*(short *)(param_1[0x7] + param_1[0x4] * 0x8) & 0x8000U) != 0x0)) {
                if (*param_1 < 0x0) {
                    *param_1 = -*param_1;
                }
                *param_1 = *param_1 + 0x1;
            }
            if ((((int)*(short *)(param_1[0x7] + (param_1[0x4] + -0x1) * 0x8) & 0x8000U) != 0x0) &&
               (((int)*(short *)(param_1[0x7] + param_1[0x4] * 0x8) & 0x8000U) == 0x0)) {
                *param_1 = -*param_1;
            }
        }
    }
    if (param_1[0xd] == 0x3) {
        iVar1 = 0x0;
        for (iVar3 = 0x0; iVar3 < param_1[0x8]; iVar3 += 0x1) {
            if (*(int *)(param_1[0x5] + iVar1) < *(int *)(param_1[0xb] + iVar1)) {
                *(int *)(param_1[0x5] + iVar1) = *(int *)(param_1[0xb] + iVar1);
            }
            iVar2 = *(int *)(param_1[0xb] + iVar1 + 0x4);
            if (iVar2 <= *(int *)(param_1[0x5] + iVar1)) {
                *(int *)(param_1[0x5] + iVar1) = iVar2 + -0x1;
            }
            iVar1 += 0x4;
        }
    }
    else {
        if (param_1[0x4] < 0x0) {
            param_1[0x4] = 0x0;
        }
        if (param_1[0x9] <= param_1[0x4]) {
            param_1[0x4] = param_1[0x9] + -0x1;
        }
    }
    iVar1 = storyGetPathImage2(param_1,0x0,0x0,local_14,0x0);
    if ((iVar1 != 0x0) && ((*(uint *)(local_14[0] + 0xc) & 0x24) != 0x0)) {
        imageTick(local_14[0],gnTickStory);
    }
    return iVar4;
}



undefined4
storyDrawPath2(double param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,
              float *param_7,undefined4 param_8)

{
    float fVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    int *piVar6;
    int iVar7;
    int iVar8;
    undefined4 uVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    double dVar13;
    double dVar14;
    int local_98 [0x3];
    int local_8c [0x3];
    undefined4 local_80;
    uint uStack_7c;
    undefined4 local_78;
    uint uStack_74;
    undefined4 local_70;
    uint uStack_6c;
    undefined4 local_68;
    uint uStack_64;
    
    uVar9 = 0x0;
    if (*(int *)(param_2 + 0x34) == 0x3) {
        iVar12 = *(int *)(param_2 + 0x20);
    }
    else {
        iVar12 = 0x1;
    }
    iVar11 = 0x0;
    for (iVar10 = 0x0; iVar10 < iVar12; iVar10 += 0x1) {
        if (*(int *)(param_2 + 0x8) == 0x0) {
            iVar3 = 0x0;
        }
        else {
            iVar3 = 0x8;
        }
        for (; -0x1 < iVar3; iVar3 += -0x1) {
            if (*(int *)(param_2 + 0x34) == 0x3) {
                iVar7 = *(int *)(iVar11 + *(int *)(param_2 + 0x14)) - iVar3;
                bVar2 = false;
                piVar6 = (int *)(iVar11 + *(int *)(param_2 + 0x2c));
                if ((*piVar6 <= iVar7) && (iVar7 < piVar6[0x1])) {
                    bVar2 = true;
                }
                if (bVar2) {
                    iVar4 = 0x0;
                }
                else {
                    iVar4 = -0x1;
                }
            }
            else {
                iVar7 = *(int *)(param_2 + 0x10) - iVar3;
                bVar2 = false;
                if ((-0x1 < iVar7) && (iVar7 < *(int *)(param_2 + 0x24))) {
                    bVar2 = true;
                }
                if (bVar2) {
                    iVar4 = 0x0;
                }
                else {
                    iVar4 = -0x1;
                }
            }
            if (iVar4 == 0x0) {
                iVar4 = *(int *)(param_2 + 0x1c) + iVar7 * 0x8;
                iVar8 = param_3 + *(short *)(iVar4 + 0x2);
                iVar4 = param_4 + *(short *)(iVar4 + 0x4);
                if (param_5 != NULL) {
                    *param_5 = iVar8;
                }
                if (param_6 != NULL) {
                    *param_6 = iVar4;
                }
                uVar5 = (uint)*(short *)(*(int *)(param_2 + 0x1c) + iVar7 * 0x8 + 0x6);
                iVar7 = storyGetPathImage2(param_2,iVar3,iVar10,local_8c,local_98);
                if (iVar7 != 0x0) {
                    uStack_64 = uVar5 & 0xff ^ 0x80000000;
                    uStack_74 = uVar5 >> 0x8 & 0xff ^ 0x80000000;
                    iVar7 = *(int *)(*(int *)(local_8c[0] + 0x2c) + local_98[0] * 0x4);
                    uStack_6c = *(uint *)(iVar7 + 0x14) ^ 0x80000000;
                    local_68 = 0x43300000;
                    uStack_7c = *(uint *)(iVar7 + 0x10) ^ 0x80000000;
                    local_70 = 0x43300000;
                    uVar9 = 0xffffffff;
                    local_78 = 0x43300000;
                    local_80 = 0x43300000;
                    fVar1 = (float)(param_1 +
                                   (double)((float)((double)CONCAT44(0x43300000,uStack_64) -
                                                   4503601774854144.0) /
                                           (float)((double)CONCAT44(0x43300000,uStack_6c) -
                                                  4503601774854144.0)));
                    dVar14 = (double)fVar1;
                    dVar13 = (double)(float)(param_1 +
                                            (double)((float)((double)CONCAT44(0x43300000,uStack_74)
                                                            - 4503601774854144.0) /
                                                    (float)((double)CONCAT44(0x43300000,uStack_7c) -
                                                           4503601774854144.0)));
                    if (param_7 != NULL) {
                        *param_7 = fVar1;
                    }
                    if ((*(uint *)(local_8c[0] + 0xc) & 0x24) == 0x0) {
                        imageSetFrame(local_8c[0],local_98[0]);
                    }
                    if (*(int *)(param_2 + 0x8) == 0x0) {
                        *(undefined4 *)(local_8c[0] + 0x14) = *(undefined4 *)(param_2 + 0xc);
                    }
                    else {
                        *(int *)(local_8c[0] + 0x14) =
                             *(int *)(param_2 + 0xc) >> (iVar3 >> 0x1 & 0x3fU);
                    }
                    imageSetScale(dVar14,dVar13,local_8c[0]);
                    imageDraw(local_8c[0],param_8,iVar8,iVar4,0x0);
                }
            }
        }
        iVar11 += 0x4;
    }
    return uVar9;
}



undefined4 storyDonePath2(int param_1)

{
    int iVar1;
    int iVar2;
    
    if (*(int *)(param_1 + 0x34) != 0x3) {
        if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x24) + -0x1) {
            return 0xffffffff;
        }
        return 0x0;
    }
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = 0x0;
    if (0x0 < iVar1) {
        do {
            if (*(int *)(*(int *)(param_1 + 0x14) + iVar2) <
                *(int *)(*(int *)(param_1 + 0x2c) + iVar2 + 0x4) + -0x1) {
                return 0x0;
            }
            iVar2 += 0x4;
            iVar1 += -0x1;
        } while (iVar1 != 0x0);
    }
    return 0xffffffff;
}



undefined4 storyTickPath3(uint *param_1,int *param_2,int *param_3,int *param_4)

{
    undefined4 uVar1;
    int iVar2;
    uint uVar3;
    
    if ((int)param_1[0x1] < 0x0) {
        param_1[0x1] = 0x0;
    }
    if ((int)param_1[0x3] <= (int)param_1[0x1]) {
        param_1[0x1] = param_1[0x3] - 0x1;
    }
    uVar1 = 0x0;
    if ((gnTickStory & 0x1) == 0x0) {
        uVar3 = param_1[0x4];
        if (uVar3 == 0x1) {
            uVar3 = param_1[0x1];
            param_1[0x1] = uVar3 + 0x1;
            if ((int)param_1[0x3] <= (int)(uVar3 + 0x1)) {
                param_1[0x1] = 0x0;
            }
        }
        else if ((int)uVar3 < 0x1) {
            if (-0x1 < (int)uVar3) {
                if ((int)param_1[0x1] < (int)(param_1[0x3] - 0x1)) {
                    param_1[0x1] = param_1[0x1] + 0x1;
                }
                else {
                    uVar1 = 0xffffffff;
                }
            }
        }
        else if ((int)uVar3 < 0x3) {
            if (*param_1 == 0x0) {
                uVar3 = param_1[0x1];
                param_1[0x1] = uVar3 + 0x1;
                if ((int)(param_1[0x3] - 0x1) <= (int)(uVar3 + 0x1)) {
                    *param_1 = *param_1 ^ 0xffffffff;
                }
            }
            else {
                uVar3 = param_1[0x1];
                param_1[0x1] = uVar3 - 0x1;
                if ((int)(uVar3 - 0x1) < 0x1) {
                    *param_1 = *param_1 ^ 0xffffffff;
                }
            }
        }
    }
    uVar3 = param_1[0x1];
    if (param_4 != NULL) {
        *param_4 = *(short *)(param_1[0x2] + uVar3 * 0x6) + -0x1;
    }
    if (param_2 != NULL) {
        *param_2 = (int)*(short *)(param_1[0x2] + uVar3 * 0x6 + 0x2);
        iVar2 = *param_2;
        *param_2 = 0x3ff - iVar2;
        if (0x3ff - iVar2 < 0x0) {
            *param_2 = 0x0;
        }
    }
    if (param_3 != NULL) {
        *param_3 = (int)*(short *)(param_1[0x2] + uVar3 * 0x6 + 0x4);
    }
    return uVar1;
}



undefined4 storyLoadPath(uint **param_1,undefined4 param_2,uint **param_3)

{
    uint *puVar1;
    int iVar2;
    undefined4 uVar3;
    uint local_2c;
    undefined auStack_28 [0x8];
    undefined auStack_20 [0x14];
    
    puVar1 = (uint *)((int)*param_3 + 0x3U & 0xfffffffc);
    *param_3 = puVar1;
    *param_1 = puVar1;
    *param_3 = *param_3 + 0x6;
    (*param_1)[0x4] = 0x0;
    (*param_1)[0x5] = 0x0;
    iVar2 = fileOpen(auStack_20);
    if (iVar2 == 0x0) {
        uVar3 = 0x0;
    }
    else {
        fileGet(auStack_20,auStack_28,0x4);
        fileGet(auStack_20,*param_1,0x4);
        if ((**param_1 & 0x1) == 0x0) {
            iVar2 = 0x3;
        }
        else {
            iVar2 = 0x4;
        }
        fileGet(auStack_20,&local_2c,0x4);
        puVar1 = (uint *)((int)*param_3 + 0x3U & 0xfffffffc);
        *param_3 = puVar1;
        (*param_1)[0x3] = (uint)puVar1;
        *param_3 = (uint *)((int)*param_3 + local_2c * iVar2 * 0x2);
        fileGet(auStack_20,(*param_1)[0x3],local_2c * iVar2 * 0x2);
        (*param_1)[0x1] = 0x0;
        (*param_1)[0x2] = local_2c;
        if (geXtra == 0x1) {
            (*param_1)[0x1] = (*param_1)[0x2] - 0x1;
        }
        uVar3 = 0xffffffff;
    }
    return uVar3;
}



undefined4 storyGetPath(uint *param_1,float *param_2,float *param_3,float *param_4,int *param_5)

{
    int iVar1;
    undefined4 uVar2;
    uint uVar3;
    
    if ((int)param_1[0x1] < (int)param_1[0x2]) {
        if ((*param_1 & 0x1) == 0x0) {
            iVar1 = 0x3;
        }
        else {
            iVar1 = 0x4;
        }
        iVar1 = param_1[0x1] * iVar1 * 0x2;
        *param_2 = (float)((double)CONCAT44(0x43300000,
                                            (int)*(short *)(param_1[0x3] + iVar1) ^ 0x80000000) -
                          4503601774854144.0);
        *param_3 = (float)((double)CONCAT44(0x43300000,
                                            (int)*(short *)(param_1[0x3] + iVar1 + 0x2) ^ 0x80000000
                                           ) - 4503601774854144.0);
        *param_4 = (float)((double)CONCAT44(0x43300000,
                                            (int)*(short *)(param_1[0x3] + iVar1 + 0x4) ^ 0x80000000
                                           ) - 4503601774854144.0);
        if (param_5 != NULL) {
            if ((*param_1 & 0x1) == 0x0) {
                *param_5 = 0x0;
            }
            else {
                *param_5 = (int)*(short *)(param_1[0x3] + iVar1 + 0x6);
            }
        }
        uVar3 = param_1[0x1];
        param_1[0x1] = uVar3 + 0x1;
        if (uVar3 + 0x1 == param_1[0x2]) {
            param_1[0x1] = param_1[0x1] - 0x1;
        }
        uVar2 = 0xffffffff;
    }
    else {
        uVar2 = 0x0;
    }
    return uVar2;
}



void storyMakeBeam(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
    uint uVar1;
    undefined4 *puVar2;
    int iVar3;
    undefined4 *puVar4;
    short sVar6;
    short sVar7;
    short sVar8;
    short sVar9;
    short sVar10;
    short sVar11;
    short sVar12;
    short sVar13;
    short sVar14;
    short sVar15;
    undefined2 *puVar5;
    int iVar16;
    uint extraout_r4;
    uint extraout_r4_00;
    uint uVar17;
    int iVar18;
    int iVar19;
    int iVar20;
    uint uVar21;
    
    if (0x0 < (int)param_2) {
        uVar1 = param_2 * 0x2;
        uVar21 = *param_5 + 0x3 & 0xfffffffc;
        *param_5 = uVar21;
        *param_1 = uVar21;
        *param_5 = *param_5 + 0x24;
        iVar16 = 0x0;
        *(undefined4 *)(*param_1 + 0x8) = param_3;
        *(undefined4 *)(*param_1 + 0xc) = param_4;
        *(undefined4 *)*param_1 = 0x0;
        *(uint *)(*param_1 + 0x10) = param_2;
        *(undefined4 *)(*param_1 + 0x18) = 0x0;
        uVar21 = *param_5 + 0x3 & 0xfffffffc;
        *param_5 = uVar21;
        *(uint *)(*param_1 + 0x14) = uVar21;
        *param_5 = *param_5 + param_2 * 0x4;
        uVar21 = *param_5 + 0xf & 0xfffffff0;
        *param_5 = uVar21;
        *(uint *)(*param_1 + 0x4) = uVar21;
        *param_5 = *param_5 + param_2 * 0x40;
        uVar21 = *param_5 + 0xf & 0xfffffff0;
        *param_5 = uVar21;
        *(uint *)(*param_1 + 0x1c) = uVar21;
        *param_5 = *param_5 + param_2 * 0x80;
        uVar21 = *param_5 + 0xf & 0xfffffff0;
        *param_5 = uVar21;
        *(uint *)(*param_1 + 0x20) = uVar21;
        *param_5 = *param_5 + 0x100;
        puVar2 = (undefined4 *)(*param_5 + 0x3 & 0xfffffffc);
        *param_5 = (uint)puVar2;
        if (0x0 < (int)uVar1) {
            if ((0x8 < (int)uVar1) &&
               (uVar21 = uVar1 - 0x1 >> 0x3, puVar4 = puVar2, 0x0 < (int)(uVar1 - 0x8))) {
                do {
                    *puVar4 = 0x0;
                    iVar16 += 0x8;
                    puVar4[0x1] = 0x0;
                    puVar4[0x2] = 0x0;
                    puVar4[0x3] = 0x0;
                    puVar4[0x4] = 0x0;
                    puVar4[0x5] = 0x0;
                    puVar4[0x6] = 0x0;
                    puVar4[0x7] = 0x0;
                    puVar4 = puVar4 + 0x8;
                    uVar21 -= 0x1;
                } while (uVar21 != 0x0);
            }
            puVar4 = puVar2 + iVar16;
            iVar3 = uVar1 - iVar16;
            if (iVar16 < (int)uVar1) {
                do {
                    *puVar4 = 0x0;
                    puVar4 = puVar4 + 0x1;
                    iVar3 += -0x1;
                } while (iVar3 != 0x0);
            }
        }
        iVar3 = 0x0;
        iVar16 = 0x0;
        for (uVar21 = 0x0; (int)uVar21 < (int)param_2; uVar21 += 0x1) {
            iVar19 = 0x0;
            *(undefined4 *)(*(int *)(*param_1 + 0x14) + iVar3) = 0x0;
            do {
                pon_osGetTime();
                __mod2u(0x0,extraout_r4 & 0xffff,(int)(uVar1 | param_2 >> 0x1f) >> 0x1f,uVar1);
                iVar19 += 0x1;
            } while (iVar19 < 0x80);
            uVar17 = extraout_r4_00;
            if (iVar19 == 0x80) {
                for (; puVar2[uVar17] != 0x0;
                    uVar17 = (uVar17 + 0x1) - ((int)(uVar17 + 0x1) / (int)uVar1) * uVar1) {
                }
            }
            puVar2[uVar17] = puVar2[uVar17] + 0x1;
            uVar17 = (uint)((65536.0 /
                            (float)((double)CONCAT44(0x43300000,uVar1 ^ 0x80000000) -
                                   4503601774854144.0)) *
                           (float)((double)CONCAT44(0x43300000,uVar17 ^ 0x80000000) -
                                  4503601774854144.0));
            sVar6 = coss(uVar17);
            sVar7 = sins(uVar17);
            sVar8 = coss(uVar17);
            sVar9 = sins(uVar17);
            sVar10 = coss(uVar17);
            sVar11 = sins(uVar17);
            iVar19 = (uVar17 & 0xffff) - 0x4000;
            iVar20 = (uVar17 & 0xffff) + 0x4000;
            iVar18 = (uVar21 & 0x3) + 0x1;
            sVar12 = coss(iVar19);
            sVar13 = sins(iVar19);
            sVar14 = coss(iVar20);
            sVar15 = sins(iVar20);
            puVar5 = (undefined2 *)(*(int *)(*param_1 + 0x4) + iVar16);
            *puVar5 = (short)((int)((int)sVar6 << 0x4 | (uint)(int)sVar6 >> 0x1c) >> 0xf);
            sVar9 = (short)(sVar9 * 0x6b >> 0xf);
            puVar5[0x1] = 0x0;
            puVar5[0x2] = (short)((int)((int)sVar7 << 0x4 | (uint)(int)sVar7 >> 0x1c) >> 0xf);
            sVar6 = (short)(sVar8 * 0x6b >> 0xf);
            *(undefined *)(puVar5 + 0x6) = 0xff;
            *(undefined *)((int)puVar5 + 0xd) = 0xff;
            *(undefined *)(puVar5 + 0x7) = 0xff;
            *(undefined *)((int)puVar5 + 0xf) = 0x0;
            puVar5[0x8] = sVar6 + (short)(iVar18 * sVar12 >> 0xf);
            iVar3 += 0x4;
            iVar16 += 0x40;
            puVar5[0x9] = 0x34;
            puVar5[0xa] = sVar9 + (short)(iVar18 * sVar13 >> 0xf);
            *(undefined *)(puVar5 + 0xe) = 0xff;
            *(undefined *)((int)puVar5 + 0x1d) = 0xff;
            *(undefined *)(puVar5 + 0xf) = 0xff;
            *(undefined *)((int)puVar5 + 0x1f) = 0x80;
            puVar5[0x10] = sVar6 + (short)(iVar18 * sVar14 >> 0xf);
            puVar5[0x11] = 0x34;
            puVar5[0x12] = sVar9 + (short)(iVar18 * sVar15 >> 0xf);
            *(undefined *)(puVar5 + 0x16) = 0xff;
            *(undefined *)((int)puVar5 + 0x2d) = 0xff;
            *(undefined *)(puVar5 + 0x17) = 0xff;
            *(undefined *)((int)puVar5 + 0x2f) = 0x80;
            puVar5[0x18] = (short)((int)((int)sVar10 << 0x7 | (uint)(int)sVar10 >> 0x19) >> 0xf);
            puVar5[0x19] = 0x40;
            puVar5[0x1a] = (short)((int)((int)sVar11 << 0x7 | (uint)(int)sVar11 >> 0x19) >> 0xf);
            *(undefined *)(puVar5 + 0x1e) = 0xff;
            *(undefined *)((int)puVar5 + 0x3d) = 0xff;
            *(undefined *)(puVar5 + 0x1f) = 0xff;
            *(undefined *)((int)puVar5 + 0x3f) = 0xa0;
        }
    }
    return;
}



void storyDrawBeam(uint *param_1,undefined4 *param_2)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    undefined4 *puVar7;
    int iVar8;
    int iVar9;
    double dVar10;
    
    iVar8 = 0x0;
    *param_1 = *param_1 ^ 0x1;
    puVar7 = (undefined4 *)*param_2;
    *puVar7 = 0xe7000000;
    puVar7[0x1] = 0x0;
    puVar7[0x2] = 0xe2001e01;
    puVar7[0x3] = 0x0;
    puVar7[0x4] = 0xe3000c00;
    puVar7[0x5] = 0x80000;
    puVar7[0x6] = 0xe3001201;
    puVar7[0x7] = 0x2000;
    puVar7[0x8] = 0xe200001c;
    puVar7[0x9] = 0x504240;
    puVar7[0xa] = 0xfcffc7ff;
    puVar7[0xb] = 0xff8e7f3f;
    puVar7[0xc] = 0xd7000000;
    puVar7[0xd] = 0x80008000;
    puVar7[0xe] = 0xd9fdf9fe;
    puVar7[0xf] = 0x0;
    puVar7[0x10] = 0xd9ffffff;
    puVar7[0x11] = 0x200004;
    uVar3 = *param_1;
    iVar6 = uVar3 * 0x80;
    guTranslate((double)(float)((double)CONCAT44(0x43300000,param_1[0x2] ^ 0x80000000) -
                               4503601774854144.0),0x0,
                (double)(float)((double)CONCAT44(0x43300000,param_1[0x3] ^ 0x80000000) -
                               4503601774854144.0),param_1[0x8] + iVar6);
    puVar7[0x12] = 0xda380002;
    iVar9 = (uVar3 * 0x2 + 0x1) * 0x40;
    puVar7[0x13] = param_1[0x8] + iVar6;
    guRotate((double)(float)param_1[0x6],0x0,0x3ff0000000000000,0x0,param_1[0x8] + iVar9);
    puVar7[0x14] = 0xda380001;
    puVar7[0x15] = param_1[0x8] + iVar9;
    iVar9 = 0x0;
    uVar4 = *param_1;
    uVar3 = param_1[0x4];
    puVar7 = puVar7 + 0x16;
    for (iVar6 = 0x0; iVar6 < (int)param_1[0x4]; iVar6 += 0x1) {
        uVar2 = *(uint *)(param_1[0x5] + iVar8);
        if (0x0 < (int)uVar2) {
            if ((int)uVar2 < 0x64) {
                uVar5 = 0xff;
                dVar10 = (double)((float)((double)CONCAT44(0x43300000,uVar2 ^ 0x80000000) -
                                         4503601774854144.0) / 100.0);
            }
            else {
                dVar10 = 1.0;
                uVar5 = 0xff - ((int)(uVar2 - 0x64) >> 0x3);
                if ((int)uVar5 < 0x0) {
                    uVar5 = 0x0;
                }
            }
            iVar1 = (uVar4 * uVar3 + iVar6) * 0x40;
            guScale(dVar10,dVar10,dVar10,param_1[0x7] + iVar1);
            *puVar7 = 0xda380000;
            puVar7[0x1] = param_1[0x7] + iVar1;
            puVar7[0x2] = 0xfa000000;
            puVar7[0x3] = uVar5 & 0xff;
            puVar7[0x4] = 0x1004008;
            puVar7[0x5] = param_1[0x1] + iVar9;
            puVar7[0x6] = 0x6000204;
            puVar7[0x7] = 0x20604;
            puVar7[0x8] = 0xd8380002;
            puVar7[0x9] = 0x40;
            puVar7 = puVar7 + 0xa;
        }
        iVar8 += 0x4;
        iVar9 += 0x40;
    }
    *puVar7 = 0xd8380002;
    puVar7[0x1] = 0x40;
    *param_2 = puVar7 + 0x2;
    return;
}



void storyTickBeam(int param_1)

{
    float fVar1;
    int iVar2;
    uint extraout_r4;
    int extraout_r4_00;
    int iVar3;
    int *piVar4;
    int iVar5;
    int iVar6;
    
    iVar3 = 0x0;
    iVar2 = *(int *)(param_1 + 0x10);
    fVar1 = 0.0;
    if (0x0 < iVar2) {
        do {
            if (*(int *)(*(int *)(param_1 + 0x14) + iVar3) != 0x0) {
                fVar1 = fVar1 + 0.002;
            }
            iVar3 += 0x4;
            iVar2 += -0x1;
        } while (iVar2 != 0x0);
    }
    fVar1 = *(float *)(param_1 + 0x18) - fVar1;
    *(float *)(param_1 + 0x18) = fVar1;
    if (fVar1 < 0.0) {
        *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + 360.0;
    }
    iVar3 = 0x0;
    iVar2 = 0x0;
    while( true ) {
        iVar5 = *(int *)(param_1 + 0x10);
        if (iVar5 <= iVar3) break;
        piVar4 = (int *)(*(int *)(param_1 + 0x14) + iVar2);
        iVar5 = *piVar4;
        if ((0x0 < iVar5) && (iVar5 += 0x8, *piVar4 = iVar5, 0x640 < iVar5)) {
            *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2) = 0x0;
        }
        iVar2 += 0x4;
        iVar3 += 0x1;
    }
    if ((gnTickStory & 0x1) == 0x0) {
        iVar6 = 0x0;
        iVar3 = 0x0;
        iVar2 = iVar5;
        if (0x0 < iVar5) {
            do {
                if (*(int *)(*(int *)(param_1 + 0x14) + iVar3) == 0x0) break;
                iVar3 += 0x4;
                iVar6 += 0x1;
                iVar2 += -0x1;
            } while (iVar2 != 0x0);
        }
        if (iVar6 != iVar5) {
            iVar3 = *(int *)(param_1 + 0x10);
            pon_osGetTime();
            __mod2u(0x0,extraout_r4 & 0xffff,iVar3 >> 0x1f,iVar3);
            iVar2 = extraout_r4_00;
            while( true ) {
                if (*(int *)(*(int *)(param_1 + 0x14) + iVar2 * 0x4) == 0x0) break;
                iVar2 = (iVar2 + 0x1) - ((iVar2 + 0x1) / iVar3) * iVar3;
            }
            *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 * 0x4) = 0x1;
        }
    }
    return;
}



void storyMakeRays(uint *param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    uint uVar8;
    short sVar9;
    double dVar10;
    float fVar11;
    
    uVar8 = 0x0;
    iVar6 = 0x0;
    uVar7 = 0x0;
    gnAlphaRays = 0xff;
    gaVtxRay = *param_1 + 0x7 & 0xfffffff8;
    *param_1 = gaVtxRay;
    *param_1 = *param_1 + 0x300;
    do {
        iVar1 = (uVar7 + (((int)uVar7 >> 0x3) + (uint)((int)uVar7 < 0x0 && (uVar7 & 0x7) != 0x0)) *
                         -0x8) * 0x4;
        fVar11 = (float)((double)CONCAT44(0x43300000,uVar8 ^ 0x80000000) - 4503601774854144.0) *
                 0.1308997;
        dVar10 = (double)fVar11;
        sVar9 = (short)*(undefined4 *)(ganOffsetRayHeight + iVar1) + 0xa0;
        fVar11 = sinf(fVar11);
        *(short *)(gaVtxRay + iVar6) = (short)(int)(fVar11 * 8.0);
        *(undefined2 *)(gaVtxRay + iVar6 + 0x2) = 0x0;
        fVar11 = cosf((float)dVar10);
        *(short *)(gaVtxRay + iVar6 + 0x4) = (short)(int)(fVar11 * 8.0);
        *(undefined *)(gaVtxRay + iVar6 + 0xc) = 0xff;
        *(undefined *)(gaVtxRay + iVar6 + 0xd) = 0xff;
        *(undefined *)(gaVtxRay + iVar6 + 0xe) = 0xff;
        *(undefined *)(gaVtxRay + iVar6 + 0xf) = 0xff;
        fVar11 = sinf((float)dVar10);
        *(short *)(gaVtxRay + iVar6 + 0x10) = (short)(int)(fVar11 * 54.0);
        *(short *)(gaVtxRay + iVar6 + 0x12) = sVar9;
        fVar11 = cosf((float)dVar10);
        *(short *)(gaVtxRay + iVar6 + 0x14) = (short)(int)(fVar11 * 54.0);
        *(undefined *)(gaVtxRay + iVar6 + 0x1c) = 0xff;
        *(undefined *)(gaVtxRay + iVar6 + 0x1d) = 0xff;
        *(undefined *)(gaVtxRay + iVar6 + 0x1e) = 0xff;
        *(undefined *)(gaVtxRay + iVar6 + 0x1f) = 0x0;
        fVar11 = (float)((double)CONCAT44(0x43300000,
                                          uVar8 + *(int *)(ganOffsetRayWidth + iVar1) ^ 0x80000000)
                        - 4503601774854144.0) * 0.1308997;
        dVar10 = (double)fVar11;
        fVar11 = sinf(fVar11);
        *(short *)(gaVtxRay + iVar6 + 0x30) = (short)(int)(fVar11 * 8.0);
        *(undefined2 *)(gaVtxRay + iVar6 + 0x32) = 0x0;
        fVar11 = cosf((float)dVar10);
        *(short *)(gaVtxRay + iVar6 + 0x34) = (short)(int)(fVar11 * 8.0);
        *(undefined *)(gaVtxRay + iVar6 + 0x3c) = 0xff;
        *(undefined *)(gaVtxRay + iVar6 + 0x3d) = 0xff;
        *(undefined *)(gaVtxRay + iVar6 + 0x3e) = 0xff;
        *(undefined *)(gaVtxRay + iVar6 + 0x3f) = 0xff;
        fVar11 = sinf((float)dVar10);
        *(short *)(gaVtxRay + iVar6 + 0x20) = (short)(int)(fVar11 * 54.0);
        *(short *)(gaVtxRay + iVar6 + 0x22) = sVar9;
        fVar11 = cosf((float)dVar10);
        uVar7 += 0x1;
        iVar5 = iVar6 + 0x24;
        iVar4 = iVar6 + 0x2c;
        iVar3 = iVar6 + 0x2d;
        iVar2 = iVar6 + 0x2e;
        iVar1 = iVar6 + 0x2f;
        uVar8 += 0x4;
        iVar6 += 0x40;
        *(short *)(gaVtxRay + iVar5) = (short)(int)(fVar11 * 54.0);
        *(undefined *)(gaVtxRay + iVar4) = 0xff;
        *(undefined *)(gaVtxRay + iVar3) = 0xff;
        *(undefined *)(gaVtxRay + iVar2) = 0xff;
        *(undefined *)(gaVtxRay + iVar1) = 0x0;
    } while ((int)uVar7 < 0xc);
    return;
}



void storyDrawRays(uint **param_1,int param_2,uint param_3,uint param_4)

{
    uint *puVar1;
    uint uVar2;
    int iVar3;
    uint *puVar4;
    
    if (gnAlphaRays != 0x0) {
        puVar4 = *param_1;
        *puVar4 = 0xe7000000;
        puVar4[0x1] = 0x0;
        puVar4[0x2] = 0xe3000f00;
        puVar4[0x3] = 0x0;
        puVar4[0x4] = 0xe3001001;
        puVar4[0x5] = 0x0;
        puVar4[0x6] = 0xe2001e01;
        puVar4[0x7] = 0x0;
        puVar4[0x8] = 0xe3000c00;
        puVar4[0x9] = 0x80000;
        puVar4[0xa] = 0xe3001201;
        puVar4[0xb] = 0x2000;
        puVar4[0xc] = 0xe200001c;
        puVar4[0xd] = 0x504240;
        puVar4[0xe] = 0xfc41c683;
        puVar4[0xf] = 0xff8fffff;
        puVar4[0x10] = 0xd9ffffff;
        puVar4[0x11] = 0x200004;
        puVar4[0x12] = 0xfa000000;
        puVar4[0x13] = gnAlphaRays & 0xff | 0xffffff00;
        if (param_2 == 0x0) {
            puVar4[0x14] = 0xd9ffffff;
            puVar4[0x15] = 0x200;
            puVar4[0x16] = 0xd9fffbff;
            puVar4[0x17] = 0x0;
        }
        else {
            puVar4[0x14] = 0xd9ffffff;
            puVar4[0x15] = 0x400;
            puVar4[0x16] = 0xd9fffdff;
            puVar4[0x17] = 0x0;
        }
        puVar4[0x18] = 0xd7000000;
        puVar4[0x19] = 0x80008000;
        guTranslate(0xc030000000000000,0xc058000000000000,0x0,param_3);
        puVar4[0x1a] = 0xda380002;
        puVar4[0x1b] = param_3;
        guRotate((double)grAngleRay,0x0,0x3ff0000000000000,0x0,param_4);
        puVar4[0x1c] = 0xda380001;
        puVar4[0x1d] = param_4;
        puVar4 = puVar4 + 0x1e;
        for (iVar3 = 0x0; iVar3 < 0x30; iVar3 += uVar2) {
            uVar2 = 0x30 - iVar3;
            if (0x20 < (int)uVar2) {
                uVar2 = 0x20;
            }
            *puVar4 = (uVar2 & 0xff) << 0xc | 0x1000000 | (uVar2 & 0x7f) << 0x1;
            puVar4[0x1] = gaVtxRay + iVar3 * 0x10;
            puVar4[0x2] = 0x6000204;
            puVar4[0x3] = 0x406;
            puVar1 = puVar4 + 0x4;
            if (0x4 < (int)uVar2) {
                puVar4[0x4] = 0x6080a0c;
                puVar4[0x5] = 0x80c0e;
                puVar1 = puVar4 + 0x6;
            }
            puVar4 = puVar1;
            if (0x8 < (int)uVar2) {
                *puVar4 = 0x6101214;
                puVar4[0x1] = 0x101416;
                puVar4 = puVar4 + 0x2;
            }
            if (0xc < (int)uVar2) {
                *puVar4 = 0x6181a1c;
                puVar4[0x1] = 0x181c1e;
                puVar4 = puVar4 + 0x2;
            }
            if (0x10 < (int)uVar2) {
                *puVar4 = 0x6202224;
                puVar4[0x1] = 0x202426;
                puVar4 = puVar4 + 0x2;
            }
            if (0x14 < (int)uVar2) {
                *puVar4 = 0x6282a2c;
                puVar4[0x1] = 0x282c2e;
                puVar4 = puVar4 + 0x2;
            }
            if (0x18 < (int)uVar2) {
                *puVar4 = 0x6303234;
                puVar4[0x1] = 0x303436;
                puVar4 = puVar4 + 0x2;
            }
            if (0x1c < (int)uVar2) {
                *puVar4 = 0x6383a3c;
                puVar4[0x1] = 0x383c3e;
                puVar4 = puVar4 + 0x2;
            }
        }
        *puVar4 = 0xd8380002;
        puVar4[0x1] = 0x40;
        puVar4[0x2] = 0xe7000000;
        puVar4[0x3] = 0x0;
        *param_1 = puVar4 + 0x4;
    }
    return;
}



void storyTickScriptFade(uint param_1)

{
    int *piVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    int iVar7;
    undefined1 *puVar8;
    int local_1c;
    
    puVar8 = ganFadeScript;
    iVar7 = 0x0;
    do {
        uVar2 = *(uint *)puVar8;
        if (uVar2 != 0x0) {
            uVar5 = uVar2 & 0xff;
            uVar6 = uVar2 >> 0x8 & 0xff;
            if ((uVar5 != 0x0) || (uVar5 = 0x1, (param_1 & 0x1) == 0x0)) {
                iVar4 = screenGetImage(giScreenStory,uVar2 >> 0x10,&local_1c);
                if (iVar4 == 0x0) {
                    *(uint *)puVar8 = 0x0;
                }
                else {
                    iVar4 = 0x0;
                    if (gbSkipScript == 0x0) {
                        piVar1 = (int *)(local_1c + 0x14);
                        iVar3 = *piVar1;
                        if (iVar3 < (int)uVar6) {
                            *piVar1 = iVar3 + uVar5;
                            if ((int)uVar6 <= (int)(iVar3 + uVar5)) {
                                iVar4 = -0x1;
                            }
                        }
                        else if ((int)uVar6 < iVar3) {
                            *piVar1 = iVar3 - uVar5;
                            if ((int)(iVar3 - uVar5) <= (int)uVar6) {
                                iVar4 = -0x1;
                            }
                        }
                        else {
                            iVar4 = -0x1;
                        }
                    }
                    else {
                        iVar4 = -0x1;
                    }
                    if (iVar4 != 0x0) {
                        *(uint *)puVar8 = 0x0;
                        *(uint *)(local_1c + 0x14) = uVar6;
                    }
                }
            }
        }
        iVar7 += 0x1;
        puVar8 = (undefined1 *)((int)puVar8 + 0x4);
    } while (iVar7 < 0x8);
    return;
}



void storySetupScript(undefined4 param_1,undefined4 param_2)

{
    gnCode = 0x0;
    gnData = 0x0;
    giCode = 0x0;
    ganCode = param_1;
    gaszNameScript = param_2;
    geHoldStory0 = 0x0;
    geHoldStory1 = 0x0;
    geHoldStory2 = 0x0;
    geHoldStory3 = 0x0;
    geHoldStory4 = 0x0;
    geHoldStory5 = 0x0;
    geHoldStory6 = 0x0;
    geHoldStory7 = 0x0;
    gbSkipScriptText = 0x0;
    gbSkipScript = 0x0;
    ganFadeScript._0_4_ = 0x0;
    ganFadeScript._4_4_ = 0x0;
    ganFadeScript._8_4_ = 0x0;
    ganFadeScript._12_4_ = 0x0;
    ganFadeScript._16_4_ = 0x0;
    ganFadeScript._20_4_ = 0x0;
    ganFadeScript._24_4_ = 0x0;
    ganFadeScript._28_4_ = 0x0;
    return;
}



void storyTickScript(undefined4 param_1,int param_2)

{
    uint uVar1;
    undefined1 *puVar2;
    short sVar5;
    int iVar3;
    pointer_____offset_0x478___ puVar4;
    int iVar6;
    int iVar7;
    int iVar8;
    int unaff_r21;
    uint local_48;
    int local_44 [0x2];
    
    if (param_2 != 0x0) {
        gbSkipScript = -0x1;
    }
    storyTickScriptFade();
    do {
        uVar1 = gnData;
        iVar7 = 0x0;
        iVar8 = 0x0;
        if (true) {
            iVar3 = (int)gnCode >> 0x10;
            switch(gnCode & 0xff) {
            case 0x0:
                iVar8 = -0x1;
                break;
            case 0x1:
                iVar3 = screenGet();
                if (giScreenStory == iVar3) {
                    iVar8 = -0x1;
                }
                break;
            case 0x2:
                iVar3 = screenShowImage(giScreenStory,iVar3);
                if (iVar3 != 0x0) {
                    iVar8 = -0x1;
                }
                break;
            case 0x3:
                iVar3 = screenHideImage(giScreenStory,iVar3);
                if (iVar3 != 0x0) {
                    iVar8 = -0x1;
                }
                break;
            case 0x4:
                if (geModeText == 0x2) {
                    gnCountScript += 0x1;
                    iVar3 = screenTextDone(giScreenStory,iVar3);
                    if (iVar3 == 0x0) {
                        iVar3 = (int)gnCode >> 0x10;
                        if (gbSkipScript == 0x0) {
                            if (ganCode == ganCommandOpen) {
                                iVar6 = screenGetTextFlag(giScreenStory,iVar3,local_44);
                                if ((iVar6 != 0x0) && (local_44[0] != gnFlagTextStory)) {
                                    if (iVar3 == 0xda) {
                                        storyPlaySong(0x39,0xffffffff);
                                    }
                                    if (iVar3 == 0xdd) {
                                        storyPlaySong(0x3a,0x0);
                                    }
                                }
                                gnFlagTextStory = local_44[0];
                            }
                        }
                        else {
                            iVar3 = screenGetTextType(giScreenStory,iVar3,&local_48);
                            if ((iVar3 == 0x0) || ((local_48 & 0x8000000) == 0x0)) {
                                iVar3 = -0x1;
                            }
                            else if (gnData == 0x0) {
                                gnData = 0x5a;
                                iVar3 = -0x1;
                            }
                            else {
                                gnData -= 0x1;
                                iVar3 = 0x0;
                            }
                            if (iVar3 != 0x0) {
                                if (gnData == 0x0) {
                                    gnData = 0x5a;
                                }
                                gbSkipScript = 0x0;
                                gbSkipScriptText = 0xffffffff;
                                screenShowTextFull(giScreenStory,(int)gnCode >> 0x10);
                                PlaySE(SFX_INIT_TABLE,0x33);
                            }
                        }
                    }
                    else {
                        geModeText = 0x3;
                    }
                }
                else if (geModeText < 0x2) {
                    if ((geModeText != 0x0) && (-0x1 < geModeText)) {
                        gnFlagTextStory = 0x0;
                        iVar3 = screenShowText(giScreenStory,iVar3);
                        if (iVar3 == 0x0) {
                            gbSkipScript = -0x1;
                            iVar8 = -0x1;
                            geModeText = 0x0;
                        }
                        else {
                            PlaySE(SFX_INIT_TABLE,0x1b);
                            gnCountScript = 0x0;
                            geModeText = 0x2;
                            gbSkipScriptText = 0x0;
                        }
                    }
                }
                else if (geModeText == 0x4) {
                    iVar8 = screenHideText(giScreenStory,iVar3);
                    if (iVar8 != 0x0) {
                        PlaySE(SFX_INIT_TABLE,0x1c);
                    }
                    geModeText = 0x0;
                    iVar8 = -0x1;
                }
                else if ((geModeText < 0x4) &&
                        ((((gnCountScript += 0x1, gbSkipScript != 0x0 && (0x5a < (int)gnCountScript)
                           ) || ((int)gnData <= (int)gnCountScript)) &&
                         (geModeText = 0x4, gbSkipScript != 0x0)))) {
                    gbSkipScriptText = 0xffffffff;
                }
                break;
            case 0x5:
                gnCountScript += 0x1;
                if ((iVar3 <= (int)gnCountScript) || (gbSkipScript != 0x0)) {
                    iVar8 = -0x1;
                }
                break;
            case 0x6:
                iVar6 = 0x8;
                puVar2 = ganFadeScript;
                iVar3 = 0x0;
                do {
                    if (*(int *)puVar2 == 0x0) {
                        *(uint *)(ganFadeScript + iVar3 * 0x4) =
                             gnCode >> 0x18 | gnData << 0x10 | (gnCode >> 0x10 & 0xff) << 0x8;
                        iVar6 = -0x1;
                        unaff_r21 = iVar3;
                        goto LAB_000a41b0;
                    }
                    puVar2 = (undefined1 *)((int)puVar2 + 0x4);
                    iVar3 += 0x1;
                    iVar6 += -0x1;
                } while (iVar6 != 0x0);
                iVar6 = 0x0;
LAB_000a41b0:
                if (iVar6 != 0x0) {
                    if ((uVar1 & 0x10000) == 0x0) {
                        gnCode = unaff_r21 << 0x10 | 0x7;
                    }
                    else {
                        iVar8 = -0x1;
                        iVar7 = -0x1;
                    }
                }
                break;
            case 0x7:
                if ((iVar3 < 0x0) || (0x7 < iVar3)) {
                    iVar3 = 0x0;
                }
                else if (*(int *)(ganFadeScript + iVar3 * 0x4) == 0x0) {
                    iVar3 = -0x1;
                }
                else {
                    iVar3 = 0x0;
                }
                if (iVar3 != 0x0) {
                    iVar8 = -0x1;
                }
                break;
            case 0x8:
                gbSkipScript = 0x0;
                iVar8 = -0x1;
                break;
            case 0x9:
                if (iVar3 == 0x0) {
                    iVar3 = 0x8;
                }
                sVar5 = GetSafeTuneBuffer();
                iVar6 = (int)sVar5;
                if (-0x1 < iVar6) {
                    ForceLoadSong(gnData,iVar6);
                    SetSongCrossFadeValue((int)(short)iVar3);
                    PlayMIDI(BGM_INIT_TABLE,gnData,iVar6,0x1);
                    iVar8 = -0x1;
                }
                break;
            case 0xa:
                FadeOutSong(last_song_handle,iVar3);
                iVar8 = -0x1;
                break;
            case 0xb:
                iVar3 = PlaySE(SFX_INIT_TABLE,gnData);
                if (-0x1 < iVar3) {
                    iVar8 = -0x1;
                }
                break;
            case 0xc:
                FadeOutAllSFXs((int)(short)(gnCode >> 0x10));
                iVar8 = -0x1;
                break;
            case 0xd:
                iVar8 = -0x1;
                gnColorBackRed = gnData >> 0x10 & 0xff;
                gnColorBackGreen = gnData >> 0x8 & 0xff;
                gnColorBackBlue = gnData & 0xff;
                break;
            case 0xe:
                gbSkipScript = 0x0;
                puVar4 = (&gaszNameHold)[iVar3];
                if (puVar4 != NULL) {
                    if (*(int *)puVar4 == 0x2) {
                        iVar8 = -0x1;
                    }
                    else {
                        *(undefined4 *)puVar4 = 0x1;
                    }
                }
            }
        }
        if (iVar8 != 0x0) {
            iVar8 = giCode + 0x1;
            gnCode = *(uint *)(ganCode + giCode * 0x4);
            if (true) {
                switch(gnCode & 0xff) {
                case 0x1:
                case 0x4:
                case 0x6:
                case 0x9:
                case 0xb:
                case 0xd:
                    gnData = *(uint *)(ganCode + iVar8 * 0x4);
                    iVar8 = giCode + 0x2;
                }
            }
            giCode = iVar8;
            if (((gnCode & 0xff) == 0x5) && (iVar8 = screenGetTextWait(), iVar8 != 0x0)) {
                gnCode = iVar8 << 0x10 | gnCode & 0xff;
            }
            if ((gnCode & 0xff) == 0x1) {
                giScreenStory =
                     screenSet(*(undefined4 *)(gaszNameScript + (gnData & 0xff) * 0x4),
                               ((int)gnData >> 0x10 & 0x7fU) << 0xc | 0x80001);
            }
            geModeText = 0x1;
            if ((gnCode & 0xff) == 0x6) {
                gnCountScript = gnCode >> 0x8 & 0xff;
            }
            else {
                gnCountScript = 0x0;
            }
        }
        if (iVar7 == 0x0) {
            return;
        }
    } while( true );
}



void storyLoadIsleIsland(int param_1,int param_2,undefined4 param_3)

{
    int iVar1;
    int iVar2;
    ushort *puVar3;
    int *piVar4;
    ushort *puVar5;
    int local_34 [0x2];
    
    puVar5 = (ushort *)(&gaLayerIsland + param_2 * 0x28);
    iVar2 = 0x0;
    piVar4 = (int *)(gapImageIsle + param_1 * 0x14);
    puVar3 = (ushort *)(ganOffsetIsle + param_1 * 0xa);
    do {
        if (*(int *)(puVar5 + 0x2) == 0x0) {
            *piVar4 = 0x0;
        }
        else {
            imageLoad(local_34,*(int *)(puVar5 + 0x2),param_3);
            *piVar4 = local_34[0];
            *puVar3 = (ushort)((int)(short)puVar5[0x1] << 0x8) | *puVar5 & 0xff;
            if (param_2 == 0x9) {
                *(uint *)(local_34[0] + 0xc) = *(uint *)(local_34[0] + 0xc) | 0xc60;
                gnOffsetSunMax = *(int *)(**(int **)(local_34[0] + 0x2c) + 0xc);
                iVar1 = *(int *)(**(int **)(local_34[0] + 0x2c) + 0x10);
                if (gnOffsetSunMax < iVar1) {
                    gnOffsetSunMax = iVar1;
                }
                gnOffsetSun = gnOffsetSunMax;
                if (geXtra == 0x1) {
                    gnOffsetSun = 0x0;
                }
            }
            else {
                *(uint *)(local_34[0] + 0xc) = *(uint *)(local_34[0] + 0xc) | 0xe0;
                if (((((param_2 == 0x1) && (iVar2 == 0x0)) || ((param_2 == 0x3 && (iVar2 == 0x2))))
                    || (param_2 - 0x4U < 0x3)) || ((param_2 == 0x7 && (iVar2 == 0x2)))) {
                    *(uint *)(local_34[0] + 0xc) = *(uint *)(local_34[0] + 0xc) | 0xc00;
                }
                if (param_2 == 0x6) {
                    if (iVar2 == 0x3) {
                        imageSetFrame(local_34[0],0x2);
                        *(uint *)(local_34[0] + 0xc) = *(uint *)(local_34[0] + 0xc) & 0xfffff7ff;
                    }
                    else if ((0x2 < iVar2) && (iVar2 < 0x5)) {
                        imageSetFrame(local_34[0],0x3);
                        *(uint *)(local_34[0] + 0xc) = *(uint *)(local_34[0] + 0xc) & 0xfffff7ff;
                    }
                }
                if ((param_2 == 0x3) && (iVar2 == 0x1)) {
                    *(uint *)(local_34[0] + 0xc) = *(uint *)(local_34[0] + 0xc) | 0x10;
                    *(undefined4 *)(local_34[0] + 0x94) = 0xffffffff;
                    *(undefined4 *)(local_34[0] + 0x98) = 0x262df6ff;
                }
                if ((param_2 == 0x8) && (iVar2 == 0x1)) {
                    *(uint *)(local_34[0] + 0xc) = *(uint *)(local_34[0] + 0xc) | 0x10;
                    *(undefined4 *)(local_34[0] + 0x94) = 0xffa4a4ff;
                    *(undefined4 *)(local_34[0] + 0x98) = 0xffff00ff;
                }
            }
        }
        iVar2 += 0x1;
        puVar5 = puVar5 + 0x4;
        piVar4 = piVar4 + 0x1;
        puVar3 = puVar3 + 0x1;
    } while (iVar2 < 0x5);
    return;
}



void storyTickIsleRainbow(void)

{
    uint uVar1;
    int iVar2;
    undefined1 *puVar3;
    int iVar4;
    undefined1 *puVar5;
    undefined8 *puVar6;
    double dVar7;
    double dVar8;
    
    if ((grPercentLast0 != grPercent0) || (grPercentLast1 != grPercent1)) {
        grPercentLast0 = grPercent0;
        iVar2 = 0x0;
        grPercentLast1 = grPercent1;
        puVar6 = &gaiPageRainbow;
        iVar4 = 0x0;
        puVar3 = gapVtxRainbow;
        puVar5 = garHeight;
        do {
            if (iVar2 == 0x0) {
                dVar7 = 0.1500000059604645;
                dVar8 = (double)grPercent0;
            }
            else if (iVar2 == 0x1) {
                dVar7 = (double)grPercent1;
                dVar8 = 0.949999988079071;
            }
            else {
                dVar7 = 0.05000000074505806;
                dVar8 = 0.949999988079071;
            }
            uVar1 = *(uint *)puVar6;
            *(uint *)puVar6 = uVar1 ^ 0x1;
            storyMakeRainbow((double)*(float *)puVar5,(double)*(float *)((int)puVar5 + 0x4),dVar7,
                             dVar8,*(undefined4 *)(puVar3 + (uVar1 ^ 0x1) * 0x4),iVar4);
            iVar2 += 0x1;
            puVar6 = (undefined8 *)((int)puVar6 + 0x4);
            puVar5 = (undefined1 *)((int)puVar5 + 0x4);
            iVar4 += 0x400;
            puVar3 = puVar3 + 0x8;
        } while (iVar2 < 0x2);
    }
    return;
}



void storyTickIsleBackground(void)

{
    float fVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int local_30;
    int local_2c;
    int local_28 [0x2];
    double local_20;
    undefined4 local_18;
    uint uStack_14;
    
    if (giLevelStory == 0x9) {
        uStack_14 = gnOffsetSunMax - gnOffsetSun ^ 0x80000000;
        local_18 = 0x43300000;
        local_20 = (double)CONCAT44(0x43300000,gnOffsetSunMax ^ 0x80000000);
        fVar1 = (float)((double)CONCAT44(0x43300000,uStack_14) - 4503601774854144.0) /
                (float)(local_20 - 4503601774854144.0);
    }
    else {
        local_20 = (double)CONCAT44(0x43300000,0x3ffU - gnOffsetGirl ^ 0x80000000);
        fVar1 = (float)(local_20 - 4503601774854144.0) / 1023.0;
    }
    if (fVar1 < 0.0) {
        fVar1 = 0.0;
    }
    iVar5 = (int)(fVar1 * 1088.0 + 0.5);
    if (0x440 < iVar5) {
        iVar5 = 0x440;
    }
    iVar4 = (int)(fVar1 * 768.0 + 0.5);
    local_20 = (double)(longlong)iVar4;
    if (0x300 < iVar4) {
        iVar4 = 0x300;
    }
    iVar3 = screenGetImage(giScreenStory,0x64,local_28);
    if (iVar3 != 0x0) {
        *(uint *)(local_28[0] + 0xc) = *(uint *)(local_28[0] + 0xc) | 0x2000;
        *(short *)(local_28[0] + 0x90) =
             (short)((int)(char)ganScrollBack[giLevelStory * 0x2] << 0x5) - (short)iVar5;
        *(short *)(local_28[0] + 0x92) =
             (short)((int)(char)ganScrollBack[giLevelStory * 0x2 + 0x1] << 0x5) - (short)iVar4;
    }
    iVar5 = screenGetImage(giScreenStory,0x15e,&local_2c);
    if ((iVar5 != 0x0) && (iVar5 = screenGetImage(giScreenStory,0x15f,&local_30), iVar5 != 0x0)) {
        if (giLevelStory < 0x7) {
            uVar2 = 0xffffffff;
        }
        else {
            uVar2 = 0x7f7f7fff;
        }
        *(undefined4 *)(local_2c + 0x94) = uVar2;
        *(undefined4 *)(local_30 + 0x94) = uVar2;
    }
    return;
}



void storyTickIsleTitle(void)

{
    undefined4 uVar1;
    int iVar2;
    int local_10 [0x2];
    
    iVar2 = 0x0;
    if (gnTagTitle == -0x1) {
        if (gnOffsetTitle < -0xc7) {
            screenHideText(giScreenStory,0x1f5);
            screenHideText(giScreenStory,0x1f5);
            screenHideImage(giScreenStory,0x1f4);
        }
        else {
            gnOffsetTitle += -0x6;
            iVar2 = -0x1;
        }
    }
    else {
        screenShowImage(giScreenStory,0x1f4);
        screenShowText(giScreenStory,gnTagTitle);
        if (gnTagTitle == 0x1f4) {
            uVar1 = 0x1f5;
        }
        else {
            uVar1 = 0x1f4;
        }
        screenHideText(giScreenStory,uVar1);
        if (gnOffsetTitle < 0x48) {
            gnOffsetTitle += 0x6;
            iVar2 = -0x1;
            if (0x48 < gnOffsetTitle) {
                gnOffsetTitle = 0x48;
            }
        }
    }
    if (iVar2 != 0x0) {
        screenSetImagePosition(giScreenStory,0x1f4,gnOffsetTitle,0x14);
        screenGetTextSize(giScreenStory,0x1f4,local_10);
        local_10[0] = local_10[0] * -0x10 + 0xac >> 0x1;
        screenSetTextPosition(giScreenStory,0x1f4,gnOffsetTitle + local_10[0],0x16);
        screenGetTextSize(giScreenStory,0x1f5,local_10);
        local_10[0] = local_10[0] * -0x10 + 0xac >> 0x1;
        screenSetTextPosition(giScreenStory,0x1f5,gnOffsetTitle + local_10[0],0x16);
    }
    return;
}



void storyTickIsleGirl(undefined4 param_1,int param_2)

{
    int iVar1;
    
    if (true) {
        switch(geModeGirl) {
        case 0x1:
            storyTickPath3(gpPathGirlWait,0x0,0x0,&giFrameGirl);
            break;
        case 0x2:
            storyTickPath3(gpPathGirlGlad,0x0,&gnJumpGirl,&giFrameGirl);
            break;
        case 0x3:
            iVar1 = storyTickPath3(gpPathGirlMove,&gnOffsetGirl,&gnJumpGirl,&giFrameGirl);
            if (iVar1 != 0x0) {
                geModeGirl = 0x1;
            }
            break;
        case 0x4:
            iVar1 = storyTickPath3(gpPathGirlWave,0x0,&gnJumpGirl,&giFrameGirl);
            if (iVar1 != 0x0) {
                gnTickStory = 0x0;
                geModeGirl = 0x5;
                if ((-0x1 < giBallGirl) && (giBallGirl < gnDustBallCount)) {
                    *(undefined4 *)(*(int *)(gapDustBall + giBallGirl * 0x4) + 0x4) = 0x0;
                }
            }
            break;
        case 0x5:
            if ((0xef < gnTickStory) || (param_2 != 0x0)) {
                geModeGirl = 0x6;
            }
            break;
        case 0x6:
            gnColorBackAlpha += 0x4;
            if (0xfe < gnColorBackAlpha) {
                geModeGirl = 0x9;
                gnColorBackAlpha = 0xff;
                if ((-0x1 < giBallGirl) && (giBallGirl < gnDustBallCount)) {
                    *(undefined4 *)(*(int *)(gapDustBall + giBallGirl * 0x4) + 0x4) = 0xffffffff;
                }
            }
            break;
        case 0x7:
            storyTickPath2(gpPathFlower);
            storyTickPath2(gapPathBits._0_4_);
            if (*(int *)(*(int *)(gpPathFlower + 0x2c) + 0x4) <= *(int *)(gpPathFlower + 0x10)) {
                geModeGirl = 0x9;
                *(int *)(gpPathFlower + 0x10) = *(int *)(*(int *)(gpPathFlower + 0x2c) + 0x4) + -0x1
                ;
            }
            if (*(int *)(gpPathFlower + 0x10) == 0x8) {
                PlaySE(SFX_INIT_TABLE,0x13d);
            }
            break;
        case 0x8:
            if ((gnCode & 0xff) == 0xf) {
                iVar1 = -0x1;
            }
            else {
                iVar1 = 0x0;
            }
            if (iVar1 != 0x0) {
                storyTickPath2(gpPathFlower);
                storyTickPath2(gapPathBits._0_4_);
            }
            break;
        case 0x9:
            geModeGirl = 0x0;
            FadeOutAllSFXs(0x1e);
            FadeOutAllSongs(0x1e);
            gMain = 0x384;
            gReset = 0xffffffff;
            gTheGame._120364_4_ = giLevelStory;
            gTheGame._120332_4_ = 0x1;
        }
    }
    return;
}



undefined4 storyDrawIsleIsland(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
    float fVar1;
    undefined4 uVar2;
    uint uVar3;
    short *psVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int *piVar8;
    uint uVar9;
    undefined8 uVar10;
    double dVar11;
    int local_68;
    int local_64;
    float local_60 [0x2];
    double local_58;
    double local_50;
    undefined4 local_48;
    uint uStack_44;
    undefined4 local_40;
    uint uStack_3c;
    
    piVar8 = (int *)(gapImageIsle + param_1 * 0x14);
    if (*piVar8 == 0x0) {
        uVar2 = 0x0;
    }
    else if ((giLevelStory == 0x9) && (param_1 == 0x0)) {
        iVar7 = 0x0;
        do {
            iVar6 = *piVar8;
            if (iVar6 != 0x0) {
                iVar5 = **(int **)(iVar6 + 0x2c);
                *(undefined4 *)(iVar6 + 0x14) = 0xff;
                uStack_3c = gnOffsetSun ^ 0x80000000;
                uStack_44 = gnOffsetSunMax ^ 0x80000000;
                local_40 = 0x43300000;
                local_48 = 0x43300000;
                local_60[0] = (float)((double)CONCAT44(0x43300000,uStack_3c) - 4503601774854144.0) /
                              (float)((double)CONCAT44(0x43300000,uStack_44) - 4503601774854144.0) +
                              1.0;
                imageSetScale((double)local_60[0],(double)local_60[0],iVar6);
                uStack_44 = iVar7 != 0x0 ^ 0x80000000;
                local_50 = (double)CONCAT44(0x43300000,*(uint *)(iVar5 + 0x10) ^ 0x80000000);
                uStack_3c = gnOffsetSun ^ 0x80000000;
                local_40 = 0x43300000;
                local_48 = 0x43300000;
                iVar5 = (int)((float)((double)CONCAT44(0x43300000,uStack_44) - 4503601774854144.0) +
                             (float)((double)CONCAT44(0x43300000,uStack_3c) - 4503601774854144.0) +
                             (240.0 - (float)(local_50 - 4503601774854144.0) * local_60[0]));
                local_58 = (double)(longlong)iVar5;
                imageDraw(iVar6,param_2,-(gnOffsetSun + (iVar7 != 0x0)),iVar5,0x0);
            }
            iVar7 += 0x1;
            piVar8 = piVar8 + 0x1;
        } while (iVar7 < 0x5);
        uVar2 = 0xffffffff;
    }
    else {
        local_58 = (double)CONCAT44(0x43300000,param_1 << 0xa ^ 0x80000000);
        dVar11 = (double)(float)(local_58 - 4503601774854144.0);
        uVar10 = 0x0;
        iVar7 = storyGetScreen(dVar11,(double)(*(float *)(garHeight + param_1 * 0x4) +
                                              *(float *)(garOffsetIsle + param_1 * 0x4)),0x0,
                               &local_64,&local_68,local_60);
        if (iVar7 == 0x0) {
            uVar2 = 0x0;
        }
        else {
            iVar7 = storyGetScreen(dVar11,(double)grCameraTargetY,uVar10,0x0,0x0,local_60);
            if (iVar7 == 0x0) {
                uVar2 = 0x0;
            }
            else {
                if (param_3 != NULL) {
                    *param_3 = local_64;
                }
                if (param_4 != NULL) {
                    *param_4 = local_68;
                }
                dVar11 = (double)(local_60[0] / 0.7915394);
                if (local_60[0] <= 0.6) {
                    fVar1 = (local_60[0] / 0.4) * 255.0;
                }
                else {
                    fVar1 = 255.0;
                }
                iVar7 = (int)fVar1;
                local_58 = (double)(longlong)iVar7;
                if (0xff < iVar7) {
                    iVar7 = 0xff;
                }
                iVar6 = 0x0;
                psVar4 = (short *)(ganOffsetIsle + param_1 * 0xa);
                do {
                    iVar5 = *piVar8;
                    if (iVar5 != 0x0) {
                        uVar3 = (uint)*psVar4;
                        uVar9 = uVar3 & 0xff;
                        if ((uVar3 & 0x80) != 0x0) {
                            uVar9 |= 0xffffff00;
                        }
                        uVar3 = (int)uVar3 >> 0x8;
                        if ((uVar3 & 0x80) != 0x0) {
                            uVar3 |= 0xffffff00;
                        }
                        if (uVar9 != 0x0) {
                            local_58 = (double)CONCAT44(0x43300000,uVar9 ^ 0x80000000);
                            uVar9 = (uint)((double)(float)(local_58 - 4503601774854144.0) * dVar11);
                            local_50 = (double)(longlong)(int)uVar9;
                        }
                        if (uVar3 != 0x0) {
                            local_58 = (double)CONCAT44(0x43300000,uVar3 ^ 0x80000000);
                            uVar3 = (uint)((double)(float)(local_58 - 4503601774854144.0) * dVar11);
                            local_50 = (double)(longlong)(int)uVar3;
                        }
                        imageSetScale(dVar11,dVar11,iVar5);
                        *(int *)(iVar5 + 0x14) = iVar7;
                        imageDraw(iVar5,param_2,local_64 + uVar9,local_68 + uVar3,0x0);
                    }
                    iVar6 += 0x1;
                    piVar8 = piVar8 + 0x1;
                    psVar4 = psVar4 + 0x1;
                } while (iVar6 < 0x5);
                uVar2 = 0xffffffff;
            }
        }
    }
    return uVar2;
}



void storyDrawIsle(undefined4 param_1,int param_2)

{
    int iVar1;
    int iVar2;
    double dVar3;
    double dVar4;
    float fVar5;
    int local_68;
    int local_64;
    int local_60;
    int local_5c;
    float local_58 [0x2];
    undefined4 local_50;
    uint uStack_4c;
    undefined4 local_48;
    uint uStack_44;
    undefined4 local_40;
    uint uStack_3c;
    longlong local_38;
    undefined4 local_30;
    uint uStack_2c;
    
    iVar2 = ((int)gnOffsetGirl >> 0xa) +
            (uint)((int)gnOffsetGirl < 0x0 && (gnOffsetGirl & 0x3ff) != 0x0);
    if ((-0x1 < (int)gnOffsetGirl) && ((int)gnOffsetGirl < 0x800)) {
        uStack_2c = gnOffsetGirl + iVar2 * -0x400 ^ 0x80000000;
        local_30 = 0x43300000;
        iVar2 *= 0x8;
        dVar4 = (double)((float)((double)CONCAT44(0x43300000,uStack_2c) - 4503601774854144.0) *
                        0.0009765625);
        dVar3 = (double)(*(float *)(garBaseRainbow + iVar2 + 0x4) -
                        *(float *)(garBaseRainbow + iVar2));
        fVar5 = sinf((float)(dVar4 * 3.141592653589793));
        gnHeightGirl = (int)(*(float *)(garBaseRainbow + iVar2) + (float)(dVar3 * dVar4) +
                             fVar5 * 96.0 + 0.5);
        local_38 = (longlong)gnHeightGirl;
    }
    fVar5 = sinf(grAngleBob);
    local_60 = (int)(fVar5 * 16.0);
    local_38 = (longlong)local_60;
    uStack_2c = local_60 + 0x40U ^ 0x80000000;
    uStack_3c = gnOffsetGirl ^ 0x80000000;
    uStack_44 = gnHeightGirl + local_60 + 0x80U ^ 0x80000000;
    uStack_4c = gnOffsetGirl - 0x100 ^ 0x80000000;
    local_30 = 0x43300000;
    local_40 = 0x43300000;
    local_48 = 0x43300000;
    grCameraTargetY = (float)((double)CONCAT44(0x43300000,uStack_2c) - 4503601774854144.0);
    grCameraTargetX = (float)((double)CONCAT44(0x43300000,uStack_3c) - 4503601774854144.0);
    local_50 = 0x43300000;
    grCameraSourceY = (float)((double)CONCAT44(0x43300000,uStack_44) - 4503601774854144.0);
    grCameraSourceX = (float)((double)CONCAT44(0x43300000,uStack_4c) - 4503601774854144.0);
    if ((grFOV <= 0.0) || (180.0 <= grFOV)) {
        grFOV = 60.0;
    }
    grCameraSourceZ = 256.0;
    grCameraTargetZ = 0.0;
    fVar5 = grFOV * 0.5 * 0.01745329;
    dVar4 = (double)fVar5;
    fVar5 = sinf(fVar5);
    dVar3 = (double)fVar5;
    fVar5 = cosf((float)dVar4);
    grDistanceCamera = (float)((double)(fVar5 * 160.0) / dVar3);
    guLookAtF((double)grCameraSourceX,(double)grCameraSourceY,(double)grCameraSourceZ,
              (double)grCameraTargetX,(double)grCameraTargetY,(double)grCameraTargetZ,0x0,
              0x3ff0000000000000,garLook);
    guMtxF2L(garLook,gMtxLook);
    guPerspectiveF((double)grFOV,0x3ff5555560000000,0x4030000000000000,0x40b0000000000000,
                   0x3ff0000000000000,garView,&gnNormalize);
    guMtxF2L(garView,gMtxView);
    iVar2 = 0x1;
    do {
        if (gnOffsetGirl == 0x3ff) {
            iVar1 = storyDrawIsleIsland(iVar2 + 0x1,param_1,&local_64,&local_68);
        }
        else {
            iVar1 = storyDrawIsleIsland(iVar2 + 0x1,param_1,0x0,0x0);
        }
        if (iVar1 != 0x0) {
            storyDrawRainbow(param_1,iVar2,0xa0);
        }
        iVar2 += -0x1;
    } while (-0x1 < iVar2);
    if (gnOffsetGirl == 0x0) {
        storyDrawIsleIsland(0x0,param_1,&local_64,&local_68);
    }
    else {
        storyDrawIsleIsland(0x0,param_1,0x0,0x0);
    }
    if ((giFrameGirl != -0x1) && (param_2 != 0x0)) {
        uStack_4c = gnOffsetGirl ^ 0x80000000;
        uStack_44 = gnHeightGirl + gnJumpGirl ^ 0x80000000;
        local_50 = 0x43300000;
        local_48 = 0x43300000;
        iVar2 = storyGetScreen((double)(float)((double)CONCAT44(0x43300000,uStack_4c) -
                                              4503601774854144.0),
                               (double)(float)((double)CONCAT44(0x43300000,uStack_44) -
                                              4503601774854144.0),0x0,&local_5c,&local_60,local_58);
        if (iVar2 != 0x0) {
            if (((int)gnOffsetGirl < 0x1) || (gnOffsetGirl == 0x3ff)) {
                uStack_4c = gnOffsetGirl ^ 0x80000000;
                local_50 = 0x43300000;
                iVar2 = storyGetScreen((double)(float)((double)CONCAT44(0x43300000,uStack_4c) -
                                                      4503601774854144.0),(double)grCameraTargetY,
                                       0x0,0x0,0x0,local_58);
                if (iVar2 == 0x0) {
                    return;
                }
                if ((geModeGirl == 0x1) || (geModeGirl == 0x5)) {
                    if ((gnDeltaX == 0x0) && (gnDeltaY == 0x0)) {
                        gnDeltaX = local_64 - local_5c;
                        gnDeltaY = local_68 - local_60;
                    }
                    local_5c = local_64 - gnDeltaX;
                    local_60 = local_68 - gnDeltaY;
                }
                else {
                    gnDeltaY = 0x0;
                    gnDeltaX = 0x0;
                }
            }
            gpImageGirl[0x5] = param_2;
            *gpImageGirl = giFrameGirl - (giFrameGirl / gpImageGirl[0x6]) * gpImageGirl[0x6];
            imageSetScale((double)(local_58[0] / 0.791539),(double)(local_58[0] / 0.791539),
                          gpImageGirl);
            imageDraw(gpImageGirl,param_1,local_5c,local_60,0x0);
            if (geModeGirl == 0x5) {
                if ((-0x1 < giBallGirl) && (giBallGirl < gnDustBallCount)) {
                    iVar2 = giBallGirl * 0x4;
                    *(int *)(*(int *)(gapDustBall + iVar2) + 0x8) = (local_5c + -0x10) * 0x100;
                    *(int *)(*(int *)(gapDustBall + iVar2) + 0xc) = (local_60 + -0x30) * 0x100;
                }
            }
        }
    }
    return;
}



void storyTickIsle(uint param_1,int param_2)

{
    int iVar1;
    int iVar2;
    undefined1 *puVar3;
    undefined4 *puVar4;
    double dVar5;
    int local_3c;
    undefined4 local_38;
    uint uStack_34;
    undefined4 local_30;
    uint uStack_2c;
    
    if (geHoldStory2 == 0x1) {
        geHoldStory2 = 0x2;
        screenHideImage(giScreenStory,0x190);
    }
    else if (geHoldStory2 != 0x2) {
        if (geHoldStory1 == 0x1) {
            geHoldStory1 = 0x2;
            gnTickAnchor = gnTickStory;
        }
        else if (geHoldStory1 == 0x2) {
            screenShowImage(giScreenStory,0x190);
            iVar1 = gnTickStory - gnTickAnchor;
            if (iVar1 < 0x0) {
                iVar1 = 0x0;
            }
            if (0xff < iVar1) {
                iVar1 = 0xff;
            }
            iVar2 = screenGetImage(giScreenStory,0x190,&local_3c);
            if (iVar2 != 0x0) {
                *(int *)(local_3c + 0x14) = iVar1;
            }
            iVar2 = screenGetImage(giScreenStory,0xbb8,&local_3c);
            if (iVar2 != 0x0) {
                *(int *)(local_3c + 0x14) = 0xff - iVar1;
            }
        }
    }
    if ((gTheGame._90948_2_ & 0x1000) != 0x0) {
        PlaySE(SFX_INIT_TABLE,0x2);
        if ((giLevelStory == 0x9) && (geXtra == 0x1)) {
            gTheGame._120364_4_ = 0xa;
            geModeNext = 0x8;
            geXtraNext = 0x0;
            gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        }
        else {
            FadeOutAllSFXs(0x1e);
            FadeOutAllSongs(0x1e);
            gReset = 0xffffffff;
            gMain = 0x384;
            gTheGame._120364_4_ = giLevelStory;
            gTheGame._120332_4_ = 0x1;
        }
    }
    grAngleBob = grAngleBob + 0.02454369;
    if (6.283185 <= grAngleBob) {
        grAngleBob = grAngleBob - 6.283185;
    }
    storyTickScript(param_1,param_2);
    if ((gnCode & 0xff) == 0xf) {
        iVar1 = -0x1;
    }
    else {
        iVar1 = 0x0;
    }
    if (iVar1 == 0x0) {
        param_2 = 0x0;
    }
    storyTickIsleGirl(param_1,param_2);
    storyTickIsleTitle(param_1,param_2);
    storyTickIsleRainbow(param_1,param_2);
    storyTickIsleBackground(param_1,param_2);
    iVar1 = 0x0;
    puVar3 = gapImageIsle;
    do {
        iVar2 = 0x0;
        puVar4 = (undefined4 *)puVar3;
        do {
            imageTick(*puVar4,gnTickStory);
            iVar2 += 0x1;
            puVar4 = puVar4 + 0x1;
        } while (iVar2 < 0x5);
        iVar1 += 0x1;
        puVar3 = (undefined1 *)((int)puVar3 + 0x14);
    } while (iVar1 < 0x3);
    if (true) {
        switch(geModeIsle) {
        case 0x1:
            if (geXtra == 0x1) {
                if (geHoldStory0 == 0x1) {
                    gnTickStory = 0x0;
                    geModeIsle = 0x7;
                }
            }
            else {
                gnTickStory = 0x0;
                geModeIsle = 0x2;
            }
            break;
        case 0x2:
            if ((param_1 & 0x3) == 0x0) {
                if (((giLevelStory < 0x9) && (grPercent0 < 0.95)) &&
                   (grPercent0 = grPercent0 + 0.01, 0.95 <= grPercent0)) {
                    grPercent0 = 0.95;
                }
                if ((0.05 < grPercent1) && (grPercent1 = grPercent1 - 0.01, grPercent1 <= 0.05)) {
                    grPercent1 = 0.05;
                }
            }
            if (((giLevelStory == 0x9) || (0.949 <= grPercent0)) && (grPercent1 <= 0.051)) {
                if (giLevelStory != 0x1) {
                    if (*(int *)(gpPathGirlGlad + 0x4) == *(int *)(gpPathGirlGlad + 0xc) + -0x1) {
                        iVar1 = -0x1;
                    }
                    else {
                        iVar1 = 0x0;
                    }
                    if (iVar1 == 0x0) {
                        return;
                    }
                }
                if (giLevelStory == 0x9) {
                    gnTagTitle = 0xffffffff;
                    geModeGirl = 0x1;
                    geModeIsle = 0x5;
                }
                else {
                    geModeGirl = 0x3;
                    geModeIsle = 0x3;
                }
            }
            break;
        case 0x3:
            gnTagTitle = 0xffffffff;
            if (gnOffsetGirl == 0x0) {
                geModeIsle = 0x4;
                geHoldStory0 = 0x2;
                gnTickAnchor = gnTickStory;
            }
            break;
        case 0x4:
            gnTagTitle = 0x1f5;
            if ((gnCode & 0xff) == 0xf) {
                iVar1 = -0x1;
            }
            else {
                iVar1 = 0x0;
            }
            if (iVar1 == 0x0) {
                gnTickAnchor = gnTickStory;
            }
            else if ((param_2 != 0x0) || (gbSkipScriptText != 0x0)) {
                if (giLevelStory == 0x9) {
                    if (geXtra == 0x1) {
                        geModeGirl = 0x8;
                        geModeIsle = 0x7;
                    }
                    else {
                        geModeGirl = 0x7;
                        geModeIsle = 0x6;
                    }
                }
                else if (geModeGirl == 0x1) {
                    geModeGirl = 0x4;
                    PlaySE(SFX_INIT_TABLE,0x2);
                    PlaySE(SFX_INIT_TABLE,0x143);
                }
            }
            break;
        case 0x5:
            if (((param_1 & 0x3) == 0x0) && (0x0 < (int)gnOffsetCloud)) {
                gnOffsetCloud -= 0x1;
                uStack_2c = gnOffsetCloud ^ 0x80000000;
                uStack_34 = gnOffsetCloudMax ^ 0x80000000;
                local_30 = 0x43300000;
                local_38 = 0x43300000;
                dVar5 = (double)((1.0 - (float)((double)CONCAT44(0x43300000,uStack_2c) -
                                               4503601774854144.0) /
                                        (float)((double)CONCAT44(0x43300000,uStack_34) -
                                               4503601774854144.0)) + 1.0);
                screenSetImageScale(dVar5,giScreenStory,0x15e);
                screenSetImageScale(dVar5,giScreenStory,0x15f);
                screenSetImagePosition
                          (giScreenStory,0x15e,-(gnOffsetCloudMax - gnOffsetCloud),
                           0xf0 - gnOffsetCloud);
                screenSetImagePosition
                          (giScreenStory,0x15f,(gnOffsetCloudMax - gnOffsetCloud) + 0xb8,
                           0xf0 - gnOffsetCloud);
            }
            if (gnOffsetSunMax >> 0x1 < gnOffsetSun) {
                gnOffsetSun += -0x1;
            }
            else if (gnOffsetSunMax >> 0x2 < gnOffsetSun) {
                gnOffsetSun += -0x1;
            }
            else if (gnOffsetSunMax >> 0x3 < gnOffsetSun) {
                if ((param_1 & 0x1) == 0x0) {
                    gnOffsetSun += -0x1;
                }
            }
            else if ((0x0 < gnOffsetSun) && ((param_1 & 0x1) == 0x0)) {
                gnOffsetSun += -0x1;
            }
            if ((gnOffsetSun == 0x0) && (gnOffsetCloud == 0x0)) {
                geModeIsle = 0x4;
                geHoldStory0 = 0x2;
                gnTickAnchor = gnTickStory;
            }
            break;
        case 0x7:
            if (0x78 < (int)param_1) {
                gnTagTitle = 0xffffffff;
            }
            if (0x37f < gnOffsetGirl) {
                gnOffsetGirl += -0x1;
            }
            geHoldStory0 = 0x2;
            if ((gnCode & 0xff) == 0xf) {
                iVar1 = -0x1;
            }
            else {
                iVar1 = 0x0;
            }
            if (iVar1 != 0x0) {
                iVar1 = *(int *)(*(int *)(gpPathFlower + 0x2c) + 0x4);
                if ((*(int *)(gpPathFlower + 0x10) < iVar1 + 0x4) &&
                   (*(int *)(gpPathFlower + 0x10) == iVar1 + 0x2)) {
                    PlaySE(SFX_INIT_TABLE,0x13d);
                }
                if (*(int *)(gpPathFlower + 0x34) == 0x3) {
                    iVar1 = *(int *)(gpPathFlower + 0x20);
                    iVar2 = 0x0;
                    if (0x0 < iVar1) {
                        do {
                            if (*(int *)(*(int *)(gpPathFlower + 0x14) + iVar2) <
                                *(int *)(*(int *)(gpPathFlower + 0x2c) + iVar2 + 0x4) + -0x1) {
                                iVar1 = 0x0;
                                goto LAB_000a5e98;
                            }
                            iVar2 += 0x4;
                            iVar1 += -0x1;
                        } while (iVar1 != 0x0);
                    }
                    iVar1 = -0x1;
                }
                else if (*(int *)(gpPathFlower + 0x10) == *(int *)(gpPathFlower + 0x24) + -0x1) {
                    iVar1 = -0x1;
                }
                else {
                    iVar1 = 0x0;
                }
LAB_000a5e98:
                if (iVar1 != 0x0) {
                    geModeIsle = 0x0;
                    giLevelStory = 0x0;
                    geModeNext = 0x4;
                    geXtraNext = 0x2;
                    gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
                }
            }
        }
    }
    return;
}



void storySetupIsle(void)

{
    uint uVar1;
    int iVar2;
    undefined1 *puVar3;
    int iVar4;
    undefined1 *puVar5;
    undefined8 *puVar6;
    float fVar7;
    undefined auStack_88 [0x10];
    undefined auStack_78 [0x4];
    undefined auStack_74 [0x10];
    undefined auStack_64 [0x4];
    undefined auStack_60 [0x10];
    undefined auStack_50 [0x4];
    undefined auStack_4c [0x10];
    undefined auStack_3c [0x4];
    int local_38;
    undefined auStack_34 [0x4];
    undefined4 *local_30 [0x2];
    
    gnJumpGirl = 0x0;
    giFrameGirl = 0xffffffff;
    grAngleBob = 0x0;
    gnDeltaY = 0x0;
    gnDeltaX = 0x0;
    gnOffsetGirl = 0x3ff;
    gnColorBackAlpha = 0x0;
    gnTagTitle = 0x1f4;
    gnOffsetTitle = 0x48;
    pon_ClearHeap();
    iVar4 = -0x1;
    gpPathGirlWait = (undefined4 *)(Pon_Image_Heap + 0x3U & 0xfffffffc);
    local_30[0] = gpPathGirlWait + 0x5;
    *gpPathGirlWait = 0x0;
    gpPathGirlWait[0x1] = 0x0;
    gpPathGirlWait[0x4] = 0x2;
    iVar2 = fileOpen(auStack_4c,_2045);
    if (iVar2 != 0x0) {
        fileGet(auStack_4c,auStack_3c,0x4);
        fileGet(auStack_4c,gpPathGirlWait + 0x3,0x4);
        uVar1 = (int)local_30[0] + 0x3U & 0xfffffffc;
        gpPathGirlWait[0x2] = uVar1;
        local_30[0] = (undefined4 *)(uVar1 + gpPathGirlWait[0x3] * 0x6);
        fileGet(auStack_4c,gpPathGirlWait[0x2],gpPathGirlWait[0x3] * 0x6);
        if (geXtra == 0x1) {
            gpPathGirlWait[0x1] = gpPathGirlWait[0x3] + -0x1;
        }
    }
    gpPathGirlGlad = (undefined4 *)((int)local_30[0] + 0x3U & 0xfffffffc);
    local_30[0] = gpPathGirlGlad + 0x5;
    *gpPathGirlGlad = 0x0;
    gpPathGirlGlad[0x1] = 0x0;
    gpPathGirlGlad[0x4] = 0x0;
    iVar2 = fileOpen(auStack_60,_2046);
    if (iVar2 != 0x0) {
        fileGet(auStack_60,auStack_50,0x4);
        fileGet(auStack_60,gpPathGirlGlad + 0x3,0x4);
        uVar1 = (int)local_30[0] + 0x3U & 0xfffffffc;
        gpPathGirlGlad[0x2] = uVar1;
        local_30[0] = (undefined4 *)(uVar1 + gpPathGirlGlad[0x3] * 0x6);
        fileGet(auStack_60,gpPathGirlGlad[0x2],gpPathGirlGlad[0x3] * 0x6);
        if (geXtra == 0x1) {
            gpPathGirlGlad[0x1] = gpPathGirlGlad[0x3] + -0x1;
        }
    }
    if (giLevelStory == 0x9) {
        giBallGirl = -0x1;
        gpPathGirlWave = NULL;
        gpPathGirlMove = NULL;
        imageLoad(&gpImageBubble,_2049,local_30);
        storyLoadPath2(&gpPathFlower,_2050,local_30,0x0);
        if (geXtra == 0x1) {
            iVar4 = 0x0;
            storyLoadPath2(&gapPathBits,_2051,local_30,0x3);
            *(undefined4 *)(gpPathFlower + 0x10) =
                 *(undefined4 *)(*(int *)(gpPathFlower + 0x2c) + 0x4);
        }
        else {
            storyLoadPath2(&gapPathBits,_2052,local_30,0x3);
        }
    }
    else {
        giBallGirl = storyMakeDustBall(local_30,0x2,0xa0,0x78,0x20);
        if ((-0x1 < giBallGirl) && (giBallGirl < gnDustBallCount)) {
            *(undefined4 *)(*(int *)(gapDustBall + giBallGirl * 0x4) + 0x4) = 0xffffffff;
        }
        gpPathGirlMove = (undefined4 *)((int)local_30[0] + 0x3U & 0xfffffffc);
        local_30[0] = gpPathGirlMove + 0x5;
        *gpPathGirlMove = 0x0;
        gpPathGirlMove[0x1] = 0x0;
        gpPathGirlMove[0x4] = 0x0;
        iVar2 = fileOpen(auStack_74,_2047);
        if (iVar2 != 0x0) {
            fileGet(auStack_74,auStack_64,0x4);
            fileGet(auStack_74,gpPathGirlMove + 0x3,0x4);
            uVar1 = (int)local_30[0] + 0x3U & 0xfffffffc;
            gpPathGirlMove[0x2] = uVar1;
            local_30[0] = (undefined4 *)(uVar1 + gpPathGirlMove[0x3] * 0x6);
            fileGet(auStack_74,gpPathGirlMove[0x2],gpPathGirlMove[0x3] * 0x6);
            if (geXtra == 0x1) {
                gpPathGirlMove[0x1] = gpPathGirlMove[0x3] + -0x1;
            }
        }
        gpPathGirlWave = (undefined4 *)((int)local_30[0] + 0x3U & 0xfffffffc);
        local_30[0] = gpPathGirlWave + 0x5;
        *gpPathGirlWave = 0x0;
        gpPathGirlWave[0x1] = 0x0;
        gpPathGirlWave[0x4] = 0x0;
        iVar2 = fileOpen(auStack_88,_2048);
        if (iVar2 != 0x0) {
            fileGet(auStack_88,auStack_78,0x4);
            fileGet(auStack_88,gpPathGirlWave + 0x3,0x4);
            uVar1 = (int)local_30[0] + 0x3U & 0xfffffffc;
            gpPathGirlWave[0x2] = uVar1;
            local_30[0] = (undefined4 *)(uVar1 + gpPathGirlWave[0x3] * 0x6);
            fileGet(auStack_88,gpPathGirlWave[0x2],gpPathGirlWave[0x3] * 0x6);
            if (geXtra == 0x1) {
                gpPathGirlWave[0x1] = gpPathGirlWave[0x3] + -0x1;
            }
        }
        gpPathFlower = 0x0;
    }
    fVar7 = sinf(0.3926991);
    garHeight._0_4_ = fVar7 * 128.0;
    fVar7 = sinf(0.3926991);
    garHeight._4_4_ = fVar7 * 128.0;
    fVar7 = sinf(0.3926991);
    garHeight._8_4_ = fVar7 * 128.0;
    if (iVar4 == 0x0) {
        gpImageGirl = 0x0;
    }
    else {
        imageLoad(&gpImageGirl,_2055,local_30);
        *(uint *)(gpImageGirl + 0xc) = *(uint *)(gpImageGirl + 0xc) | 0x80;
        *(uint *)(gpImageGirl + 0xc) = *(uint *)(gpImageGirl + 0xc) & 0xffffffdb;
    }
    geModeIsle = 0x1;
    if (giLevelStory == 0x1) {
        geModeGirl = 0x1;
    }
    else if ((giLevelStory == 0x9) && (geXtra == 0x1)) {
        geModeGirl = 0x8;
        gnOffsetGirl = 0x37f;
    }
    else {
        geModeGirl = 0x2;
    }
    puVar3 = gapImageIsle;
    puVar5 = garOffsetIsle;
    iVar2 = 0x0;
    do {
        iVar4 = giLevelStory - iVar2;
        if (iVar4 < 0x0) {
            *(undefined4 *)puVar3 = 0x0;
            *(undefined4 *)((int)puVar3 + 0x4) = 0x0;
            *(undefined4 *)((int)puVar3 + 0x8) = 0x0;
            *(undefined4 *)((int)puVar3 + 0xc) = 0x0;
            *(undefined4 *)((int)puVar3 + 0x10) = 0x0;
        }
        else {
            storyLoadIsleIsland(iVar2,iVar4,local_30);
            *(undefined4 *)puVar5 = *(undefined4 *)(garOffsetIsland + iVar4 * 0x4);
        }
        iVar2 += 0x1;
        puVar3 = (undefined1 *)((int)puVar3 + 0x14);
        puVar5 = (undefined1 *)((int)puVar5 + 0x4);
    } while (iVar2 < 0x3);
    imageLoad(&gpImageRainbow,_2056,local_30);
    iVar4 = 0x0;
    grPercent0 = 0x3f000000;
    grPercent1 = 0x3e19999a;
    puVar6 = &gaiPageRainbow;
    puVar5 = gapVtxRainbow;
    grPercentLast1 = 0xbf800000;
    iVar2 = 0x0;
    grPercentLast0 = 0xbf800000;
    puVar3 = garHeight;
    do {
        *(undefined4 *)puVar6 = 0x0;
        uVar1 = (int)local_30[0] + 0x7U & 0xfffffff8;
        *(uint *)puVar5 = uVar1;
        *(uint *)((int)puVar5 + 0x4) = uVar1 + 0x400;
        local_30[0] = (undefined4 *)(uVar1 + 0x800);
        storyMakeRainbow((double)*(float *)puVar3,(double)*(float *)((int)puVar3 + 0x4),0x0,
                         0x3ff0000000000000,*(uint *)puVar5,iVar2);
        storyMakeRainbow((double)*(float *)puVar3,(double)*(float *)((int)puVar3 + 0x4),0x0,
                         0x3ff0000000000000,*(uint *)((int)puVar5 + 0x4),iVar2);
        iVar4 += 0x1;
        puVar6 = (undefined8 *)((int)puVar6 + 0x4);
        puVar5 = (undefined1 *)((int)puVar5 + 0x8);
        puVar3 = (undefined1 *)((int)puVar3 + 0x4);
        iVar2 += 0x400;
    } while (iVar4 < 0x2);
    if (geXtra == 0x0) {
        puVar3 = ganCommandIsle;
    }
    else {
        puVar3 = ganCommandIsleSun;
    }
    storySetupScript(puVar3,0x0);
    if (geXtra == 0x0) {
        _2044._5_1_ = (char)giLevelStory + '0';
    }
    else {
        _2044._5_1_ = 'A';
    }
    iVar2 = screenLoad(_2059,local_30);
    if (iVar2 != 0x0) {
        giScreenStory = screenSet(&_2044,0xff001);
        screenGetImagePosition(giScreenStory,0x15e,auStack_34,&local_38);
        gnOffsetCloudMax = 0xf0 - local_38;
        gnOffsetCloud = gnOffsetCloudMax;
        if (geXtra == 0x1) {
            gnOffsetCloud = 0x0;
            screenSetImageScale(0x4000000000000000,giScreenStory,0x15e);
            screenSetImageScale(0x4000000000000000,giScreenStory,0x15f);
            screenSetImagePosition(giScreenStory,0x15e,-gnOffsetCloudMax,0xf0);
            screenSetImagePosition(giScreenStory,0x15f,gnOffsetCloudMax + 0xb8,0xf0);
        }
    }
    storyPlaySong(0x26,0xffffffff);
    return;
}



void storyTickOpen(void)

{
    int iVar1;
    uint extraout_r4;
    uint extraout_r4_00;
    undefined8 uVar2;
    
    storyTickScript();
    if ((gnCode & 0xff) == 0xf) {
        iVar1 = -0x1;
    }
    else {
        iVar1 = 0x0;
    }
    if (iVar1 == 0x0) {
        if (geHoldStory0 != 0x2) goto LAB_000a67f8;
        if ((gTheGame._90948_2_ & 0x1000) == 0x0) goto LAB_000a67f8;
    }
    if ((gTheGame._90948_2_ & 0x1000) != 0x0) {
        PlaySE(SFX_INIT_TABLE,0x2);
    }
    if ((gnPickStory & 0x2) == 0x0) {
        giLevelStory = 0x1;
        geModeNext = 0x3;
        geXtraNext = 0x0;
        gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
    }
    else {
        geModeNext = 0x1;
        geXtraNext = 0x0;
        gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
    }
LAB_000a67f8:
    if (geHoldStory0 == 0x1) {
        geHoldStory0 = 0x2;
    }
    if (geHoldStory1 == 0x1) {
        geHoldStory1 = 0x2;
    }
    if (geHoldStory0 == 0x2) {
        screenShowImage(giScreenStory,0x190);
    }
    iVar1 = screenGet();
    if (giScreenStorm == iVar1) {
        pon_osGetTime();
        uVar2 = pon_osGetTime();
        __shr2u((int)((ulonglong)uVar2 >> 0x20),(int)uVar2,0x4);
        screenSetImagePosition
                  (giScreenStory,0xc9,0x3 - (extraout_r4 & 0x7),0x3 - (extraout_r4_00 & 0x7));
    }
    return;
}



void storyTickDone(void)

{
    int iVar1;
    uint uVar2;
    short sVar3;
    uint extraout_r4;
    int iVar4;
    int iVar5;
    int iVar6;
    int local_4c;
    longlong local_48;
    undefined4 local_40;
    uint uStack_3c;
    longlong local_38;
    double local_30;
    double local_28;
    double local_20;
    
    storyTickScript();
    iVar6 = 0x0;
    if (((gTheGame._120360_4_ == 0x3) && (*(char *)(gPlayer._0_4_ + 0x176) == '\0')) ||
       (0x3 < gTheGame._120360_4_)) {
        iVar5 = -0x1;
    }
    else {
        iVar5 = 0x0;
    }
    if (ganCode == ganCommandDone) {
        if ((gnCode & 0xff) == 0xf) {
            iVar1 = -0x1;
        }
        else {
            iVar1 = 0x0;
        }
        if (iVar1 != 0x0) {
            if (iVar5 == 0x0) {
                storySetupScript(ganCommandDoneEnd1,&gaszNameEnd);
            }
            else {
                storySetupScript(ganCommandDoneEnd2,&gaszNameEnd);
            }
        }
        if (geHoldStory1 == 0x1) {
            gnTickWhale += 0x1;
            if ((int)gnTickWhale < 0x78) {
                iVar1 = screenGetImage(giScreenStory,0x65,&local_4c);
                if (iVar1 != 0x0) {
                    if (((gnTickWhale & 0x3) == 0x0) && (uVar2 = osGetCount(), (uVar2 & 0x3) == 0x1)
                       ) {
                        *(uint *)(local_4c + 0xc) = *(uint *)(local_4c + 0xc) | 0x10;
                        *(undefined4 *)(local_4c + 0x14) = 0x1;
                        *(undefined4 *)(local_4c + 0x94) = 0x0;
                        *(undefined4 *)(local_4c + 0x98) = 0xffffffff;
                    }
                    else {
                        *(uint *)(local_4c + 0xc) = *(uint *)(local_4c + 0xc) & 0xffffffef;
                        *(undefined4 *)(local_4c + 0x14) = 0xff;
                    }
                }
            }
            else {
                if (gnTickWhale == 0x78) {
                    storyPlaySong(0x32,0xffffffff);
                }
                if (0xb3 < (int)gnTickWhale) {
                    local_20 = (double)CONCAT44(0x43300000,0x12c - gnTickWhale ^ 0x80000000);
                    iVar1 = (int)(((float)(local_20 - 4503601774854144.0) / 120.0) * 255.0);
                    local_30 = (double)(longlong)iVar1;
                    local_28 = local_30;
                    if ((-0x1 < iVar1) &&
                       (iVar4 = screenGetImage(giScreenStory,0x64,&local_4c), iVar4 != 0x0)) {
                        *(uint *)(local_4c + 0xc) = *(uint *)(local_4c + 0xc) & 0xffffffef;
                        *(int *)(local_4c + 0x14) = iVar1;
                    }
                }
                if (0x77 < (int)gnTickWhale) {
                    local_30 = (double)CONCAT44(0x43300000,0x10e - gnTickWhale ^ 0x80000000);
                    iVar1 = (int)(((float)(local_30 - 4503601774854144.0) / 150.0) * 254.0);
                    local_28 = (double)(longlong)iVar1;
                    local_20 = local_28;
                    if ((0x0 < iVar1) &&
                       (iVar4 = screenGetImage(giScreenStory,0x65,&local_4c), iVar4 != 0x0)) {
                        *(uint *)(local_4c + 0xc) = *(uint *)(local_4c + 0xc) | 0x10;
                        *(int *)(local_4c + 0x14) = iVar1;
                    }
                }
                if (gnTickWhale == 0x12c) {
                    screenHideImage(giScreenStory,0x64);
                    screenHideImage(giScreenStory,0x65);
                    screenShowImage(giScreenStory,0x66);
                    iVar1 = screenGetImage(giScreenStory,0x66,&local_4c);
                    if (iVar1 != 0x0) {
                        *(uint *)(local_4c + 0xc) = *(uint *)(local_4c + 0xc) & 0xffffffef;
                        *(undefined4 *)(local_4c + 0x14) = 0x0;
                    }
                    screenShowImage(giScreenStory,0x67);
                    iVar1 = screenGetImage(giScreenStory,0x67,&local_4c);
                    if (iVar1 != 0x0) {
                        *(uint *)(local_4c + 0xc) = *(uint *)(local_4c + 0xc) | 0x10;
                        *(undefined4 *)(local_4c + 0x14) = 0x1;
                        *(undefined4 *)(local_4c + 0x94) = 0x0;
                        *(undefined4 *)(local_4c + 0x98) = 0xffffffff;
                    }
                }
                if ((0x167 < (int)gnTickWhale) &&
                   (iVar1 = screenGetImage(giScreenStory,0x66,&local_4c), iVar1 != 0x0)) {
                    local_30 = (double)CONCAT44(0x43300000,gnTickWhale - 0x168 ^ 0x80000000);
                    iVar1 = (int)(((float)(local_30 - 4503601774854144.0) / 360.0) * 255.0);
                    local_28 = (double)(longlong)iVar1;
                    local_20 = local_28;
                    if (iVar1 < 0x100) {
                        *(uint *)(local_4c + 0xc) = *(uint *)(local_4c + 0xc) & 0xffffffef;
                        *(int *)(local_4c + 0x14) = iVar1;
                    }
                }
                if ((0x1a3 < (int)gnTickWhale) &&
                   (iVar1 = screenGetImage(giScreenStory,0x67,&local_4c), iVar1 != 0x0)) {
                    if (gnTickWhale == 0x384) {
                        *(undefined4 *)(local_4c + 0x14) = 0xff;
                        *(uint *)(local_4c + 0xc) = *(uint *)(local_4c + 0xc) & 0xffffffef;
                        geHoldStory1 = 0x2;
                    }
                    else {
                        local_30 = (double)CONCAT44(0x43300000,gnTickWhale - 0x1a4 ^ 0x80000000);
                        iVar1 = (int)(((float)(local_30 - 4503601774854144.0) / 480.0) * 254.0);
                        local_28 = (double)(longlong)iVar1;
                        if (0x0 < iVar1) {
                            *(int *)(local_4c + 0x14) = iVar1;
                            *(uint *)(local_4c + 0xc) = *(uint *)(local_4c + 0xc) | 0x10;
                        }
                    }
                }
            }
        }
        if (geHoldStory0 != 0x0) {
            storyTickPath2(gapPathBits._0_4_);
            storyTickPath2(gapPathBits._4_4_);
        }
        if (geHoldStory0 == 0x1) {
            storyTickPath2(gpPathEye1);
            storyTickPath2(gpPathEye2);
            if (*(int *)(gpPathEye1 + 0x34) == 0x3) {
                iVar1 = *(int *)(gpPathEye1 + 0x20);
                iVar4 = 0x0;
                if (0x0 < iVar1) {
                    do {
                        if (*(int *)(*(int *)(gpPathEye1 + 0x14) + iVar4) <
                            *(int *)(*(int *)(gpPathEye1 + 0x2c) + iVar4 + 0x4) + -0x1) {
                            iVar1 = 0x0;
                            goto LAB_000a6e0c;
                        }
                        iVar4 += 0x4;
                        iVar1 += -0x1;
                    } while (iVar1 != 0x0);
                }
                iVar1 = -0x1;
            }
            else if (*(int *)(gpPathEye1 + 0x10) == *(int *)(gpPathEye1 + 0x24) + -0x1) {
                iVar1 = -0x1;
            }
            else {
                iVar1 = 0x0;
            }
LAB_000a6e0c:
            if (iVar1 != 0x0) {
                if (*(int *)(gpPathEye2 + 0x34) == 0x3) {
                    iVar1 = *(int *)(gpPathEye2 + 0x20);
                    iVar4 = 0x0;
                    if (0x0 < iVar1) {
                        do {
                            if (*(int *)(*(int *)(gpPathEye2 + 0x14) + iVar4) <
                                *(int *)(*(int *)(gpPathEye2 + 0x2c) + iVar4 + 0x4) + -0x1) {
                                iVar1 = 0x0;
                                goto LAB_000a6e90;
                            }
                            iVar4 += 0x4;
                            iVar1 += -0x1;
                        } while (iVar1 != 0x0);
                    }
                    iVar1 = -0x1;
                }
                else if (*(int *)(gpPathEye2 + 0x10) == *(int *)(gpPathEye2 + 0x24) + -0x1) {
                    iVar1 = -0x1;
                }
                else {
                    iVar1 = 0x0;
                }
LAB_000a6e90:
                if (iVar1 != 0x0) {
                    geHoldStory0 = 0x2;
                }
            }
        }
    }
    else {
        if ((gnCode & 0xff) == 0xf) {
            iVar1 = -0x1;
        }
        else {
            iVar1 = 0x0;
        }
        if (iVar1 != 0x0) {
            iVar6 = -0x1;
        }
        if (geHoldStory0 == 0x0) {
            gnTickAnchor = gnTickStory;
            gnOffsetShakeY = 0x0;
            gnOffsetShakeX = 0x0;
        }
        else {
            if (gnTickStory - gnTickAnchor < 0x3c) {
                if (gnMagnitudeShake < 0x67) {
                    gnOffsetShakeY = 0x0;
                    gnOffsetShakeX = 0x0;
                }
                else {
                    pon_osGetTime();
                    sVar3 = sins(extraout_r4 & 0xffff);
                    gnOffsetShakeX = gnMagnitudeShake * sVar3 >> 0x1a;
                    sVar3 = coss(extraout_r4 & 0xffff);
                    gnOffsetShakeY = gnMagnitudeShake * sVar3 >> 0x19;
                    iVar1 = gnMagnitudeShake >> 0x3;
                    if (iVar1 == 0x0) {
                        iVar1 = 0x10;
                    }
                    if (gnMagnitudeShake - iVar1 < 0x66) {
                        gnOffsetShakeY = 0x0;
                        gnOffsetShakeX = 0x0;
                    }
                }
                gnMagnitudeShake = 0x800;
            }
            grScaleWitch = grScaleWitch + 0.08;
            if (1.0 <= grScaleWitch) {
                grScaleWitch = 1.0;
                geHoldStory0 = 0x2;
            }
        }
        local_30 = (double)CONCAT44(0x43300000,gnOffsetShakeX ^ 0x80000000);
        local_20 = (double)CONCAT44(0x43300000,gnOffsetShakeY ^ 0x80000000);
        iVar1 = (int)((float)(local_30 - 4503601774854144.0) * grScaleWitch);
        local_28 = (double)(longlong)iVar1;
        uStack_3c = (uint)((float)(local_20 - 4503601774854144.0) * grScaleWitch);
        local_38 = (longlong)(int)uStack_3c;
        screenSetImageScale(giScreenStory,0x190);
        uStack_3c ^= 0x80000000;
        local_40 = 0x43300000;
        iVar4 = (int)((210.0 - (1.0 - (double)grScaleWitch) * 90.0) +
                     ((double)CONCAT44(0x43300000,uStack_3c) - 4503601774854144.0));
        local_48 = (longlong)iVar4;
        screenSetImagePosition(giScreenStory,0x190,iVar1 + 0xa0,iVar4);
        screenSetImagePosition(giScreenStory,0x67,gnOffsetShakeX,gnOffsetShakeY);
        screenSetImagePosition(giScreenStory,0x68,gnOffsetShakeX,gnOffsetShakeY);
        screenSetImagePosition(giScreenStory,0x69,gnOffsetShakeX,gnOffsetShakeY);
        screenSetImagePosition(giScreenStory,0x12f,gnOffsetShakeX + 0x8e,gnOffsetShakeY);
        screenSetImagePosition(giScreenStory,0x130,gnOffsetShakeX + 0x56,gnOffsetShakeY);
    }
    if ((iVar6 != 0x0) || ((gTheGame._90948_2_ & 0x1000) != 0x0)) {
        if ((gTheGame._90948_2_ & 0x1000) != 0x0) {
            PlaySE(SFX_INIT_TABLE,0x2);
        }
        if (iVar5 == 0x0) {
            geModeNext = 0x7;
            geXtraNext = 0x0;
            gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        }
        else {
            FadeOutAllSFXs(0x1e);
            FadeOutAllSongs(0x1e);
            gReset = 0xffffffff;
            gMain = 0x384;
            gTheGame._120332_4_ = 0x1;
            gTheGame._120364_4_ = 0xf;
        }
    }
    return;
}



void storySetupCast(void)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    char *pcVar4;
    int iVar5;
    int iVar6;
    float fVar7;
    undefined auStack_68 [0x10];
    undefined auStack_58 [0x4];
    int local_54;
    int local_50;
    byte local_4c [0x4];
    undefined local_48;
    undefined local_47;
    undefined local_46;
    undefined local_45;
    undefined4 *local_44;
    longlong local_40;
    undefined4 local_38;
    uint uStack_34;
    
    gnTagCheat = 0xffffffff;
    gpBitsCast = NULL;
    pon_ClearHeap();
    local_44 = Pon_Image_Heap;
    if (((gSelection == 0x8c) || (gSelection == 0xbe)) || (gSelection == 0xaa)) {
        geTypeCast = 0x1;
        if (gSelection == 0x8c) {
            if (0xc34f < gTheGame._19084_4_) {
                gnTagCheat = 0xc8;
            }
        }
        else if (gSelection == 0xbe) {
            if (0x270f < gTheGame._19084_4_) {
                gnTagCheat = 0xf0;
            }
        }
        else if (gSelection == 0xaa) {
            gnTagCheat = 0xfa;
        }
    }
    else if ((gSelection == 0x96) && (gTheGame._120360_4_ != 0x1)) {
        geTypeCast = 0x1;
        if (gTheGame._120360_4_ == 0x3) {
            gnTagCheat = 0xd2;
        }
        else if (gTheGame._120360_4_ == 0x4) {
            gnTagCheat = 0xdc;
        }
        else if (gTheGame._120360_4_ == 0x5) {
            gnTagCheat = 0xe6;
        }
    }
    else if (gSelection == 0x82) {
        geTypeCast = 0x3;
        if (gTheGame._120360_4_ == 0x3) {
            gnTagCheat = 0xc8;
        }
        else if (gTheGame._120360_4_ == 0x5) {
            if (0x2d < gTheGame._120364_4_) {
                gnTagCheat = 0xd2;
            }
        }
        else if (gTheGame._120360_4_ == 0x4) {
            gnTagCheat = 0xdc;
        }
    }
    else {
        geTypeCast = 0x4;
    }
    if (geTypeCast == 0x3) {
        LoadCharacterProfileOffset(0x0,&local_50,&local_54);
        gapHeapBack._0_4_ = local_44;
        n642Dolphin_AllchangeTexture();
        Pon_DVDRead_lev_2(0x0,0x0);
        imageLoadROM(gapImageBack,*gaSegmentCharacter._0_4_ + local_54,
                     *gaSegmentCharacter._0_4_ + local_50,0x433,0x80,0xc0,&local_44);
        local_44 = local_44 + 0x10;
        screenSetBack(0x0);
    }
    else if (geTypeCast - 0x1U < 0x2) {
        gbGfxHeap = 0xffffffff;
        giBackStory = 0x0;
        gapHeapBack._0_4_ = Pon_Image_Heap;
        if (geTypeCast == 0x1) {
            pcVar4 = _2411;
        }
        else {
            pcVar4 = _2412;
        }
        imageLoad(gapImageBack,pcVar4,&local_44);
        gapHeapBack._4_4_ = local_44 + 0x10;
        if (geTypeCast == 0x1) {
            pcVar4 = _2411;
        }
        else {
            pcVar4 = _2412;
        }
        local_44 = gapHeapBack._4_4_;
        imageLoad(0x2a0d4c,pcVar4,&local_44);
        local_44 = local_44 + 0x10;
    }
    if (geTypeCast == 0x1) {
        grAngleBob = 0x0;
        fVar7 = sinf(0.3926991);
        garHeight._0_4_ = fVar7 * 128.0 - 64.0;
        fVar7 = sinf(0.3926991);
        garHeight._4_4_ = fVar7 * 128.0 - 64.0;
        fVar7 = sinf(0.3926991);
        garHeight._8_4_ = fVar7 * 128.0 - 64.0;
        imageLoad(&gpImageGirl,_2055,&local_44);
        *(uint *)(gpImageGirl + 0xc) = *(uint *)(gpImageGirl + 0xc) | 0x80;
        *(uint *)(gpImageGirl + 0xc) = *(uint *)(gpImageGirl + 0xc) & 0xffffffdb;
        imageLoad(&gpImageRainbow,_2056,&local_44);
        gpPathGirlMove = (undefined4 *)((int)local_44 + 0x3U & 0xfffffffc);
        local_44 = gpPathGirlMove + 0x5;
        *gpPathGirlMove = 0x0;
        gpPathGirlMove[0x1] = 0x0;
        gpPathGirlMove[0x4] = 0x0;
        iVar1 = fileOpen(auStack_68,_2047);
        if (iVar1 != 0x0) {
            fileGet(auStack_68,auStack_58,0x4);
            fileGet(auStack_68,gpPathGirlMove + 0x3,0x4);
            uVar2 = (int)local_44 + 0x3U & 0xfffffffc;
            gpPathGirlMove[0x2] = uVar2;
            local_44 = (undefined4 *)(uVar2 + gpPathGirlMove[0x3] * 0x6);
            fileGet(auStack_68,gpPathGirlMove[0x2],gpPathGirlMove[0x3] * 0x6);
            if (geXtra == 0x1) {
                gpPathGirlMove[0x1] = gpPathGirlMove[0x3] + -0x1;
            }
        }
        gaiPageRainbow._0_4_ = 0x0;
        gapVtxRainbow._0_4_ = (int)local_44 + 0x7U & 0xfffffff8;
        gapVtxRainbow._4_4_ = gapVtxRainbow._0_4_ + 0x400;
        local_44 = (undefined4 *)(gapVtxRainbow._0_4_ + 0x800);
        storyMakeRainbow((double)garHeight._0_4_,(double)garHeight._4_4_,0x0,0x3ff0000000000000,
                         gapVtxRainbow._0_4_,0x0);
        storyMakeRainbow((double)garHeight._0_4_,(double)garHeight._4_4_,0x0,0x3ff0000000000000,
                         gapVtxRainbow._4_4_,0x0);
    }
    if (geTypeCast == 0x4) {
        gpBitsCast = (undefined4 *)((int)local_44 + 0x3U & 0xfffffffc);
        local_44 = gpBitsCast + 0x283;
        *gpBitsCast = 0xffffffff;
        gpBitsCast[0x2] = 0x0;
        imageLoad(gpBitsCast + 0x1,_2414,&local_44);
        local_4c[0] = 0x0;
        local_4c[1] = 0x0;
        local_4c[2] = 0x0;
        iVar5 = 0x0;
        local_4c[3] = 0x0;
        local_48 = 0x0;
        local_47 = 0x0;
        local_46 = 0x0;
        local_45 = 0x0;
        iVar1 = 0x0;
        do {
            iVar6 = 0x0;
            do {
                uVar2 = osGetCount();
                if (((uint)local_4c[uVar2 >> 0x3 & 0x7] & 0x1 << (uVar2 & 0x7)) == 0x0) break;
                iVar6 += 0x1;
            } while (iVar6 < 0x20);
            uVar2 = uVar2 & 0x3f;
            if (iVar6 == 0x20) {
                iVar6 = 0x8;
                uVar3 = 0x0;
                do {
                    uVar2 = uVar3;
                    if ((((local_4c[(int)uVar3 >> 0x3] & 0x1) == 0x0) ||
                        (uVar2 = uVar3 + 0x1,
                        ((uint)local_4c[(int)uVar2 >> 0x3] & 0x1 << (uVar2 & 0x7)) == 0x0)) ||
                       ((uVar2 = uVar3 + 0x2,
                        ((uint)local_4c[(int)uVar2 >> 0x3] & 0x1 << (uVar2 & 0x7)) == 0x0 ||
                        ((((uVar2 = uVar3 + 0x3,
                           ((uint)local_4c[(int)uVar2 >> 0x3] & 0x1 << (uVar2 & 0x7)) == 0x0 ||
                           (uVar2 = uVar3 + 0x4,
                           ((uint)local_4c[(int)uVar2 >> 0x3] & 0x1 << (uVar2 & 0x7)) == 0x0)) ||
                          (uVar2 = uVar3 + 0x5,
                          ((uint)local_4c[(int)uVar2 >> 0x3] & 0x1 << (uVar2 & 0x7)) == 0x0)) ||
                         ((uVar2 = uVar3 + 0x6,
                          ((uint)local_4c[(int)uVar2 >> 0x3] & 0x1 << (uVar2 & 0x7)) == 0x0 ||
                          (uVar2 = uVar3 + 0x7,
                          ((uint)local_4c[(int)uVar2 >> 0x3] & 0x1 << (uVar2 & 0x7)) == 0x0))))))))
                    break;
                    uVar2 = uVar3 + 0x8;
                    iVar6 += -0x1;
                    uVar3 = uVar2;
                } while (iVar6 != 0x0);
            }
            uStack_34 = uVar2 ^ 0x80000000;
            local_38 = 0x43300000;
            local_4c[(int)uVar2 >> 0x3] = local_4c[(int)uVar2 >> 0x3] | (byte)(0x1 << (uVar2 & 0x7))
            ;
            iVar6 = (int)((float)((double)CONCAT44(local_38,uStack_34) - 4503601774854144.0) * 5.0 *
                         4.0);
            local_40 = (longlong)iVar6;
            *(int *)((int)gpBitsCast + iVar1 + 0x20) = iVar6;
            uVar3 = osGetCount();
            *(uint *)((int)gpBitsCast + iVar1 + 0x24) = -(uVar3 & 0xf);
            uVar3 = osGetCount();
            *(uint *)((int)gpBitsCast + iVar1 + 0x2c) = uVar3 & 0x7f;
            *(uint *)((int)gpBitsCast + iVar1 + 0x28) = uVar2 & 0x3;
            if ((uVar2 & 0x3) == 0x0) {
                *(undefined4 *)((int)gpBitsCast + iVar1 + 0x28) = 0x1;
            }
            iVar5 += 0x1;
            *(undefined4 *)((int)gpBitsCast + iVar1 + 0x14) = 0x0;
            *(undefined4 *)((int)gpBitsCast + iVar1 + 0x30) =
                 *(undefined4 *)(ganColorBits + (uVar2 & 0x7) * 0x4);
            *(undefined4 *)((int)gpBitsCast + iVar1 + 0xc) =
                 *(undefined4 *)((int)gpBitsCast + iVar1 + 0x20);
            *(undefined4 *)((int)gpBitsCast + iVar1 + 0x10) =
                 *(undefined4 *)((int)gpBitsCast + iVar1 + 0x24);
            *(undefined4 *)((int)gpBitsCast + iVar1 + 0x18) =
                 *(undefined4 *)((int)gpBitsCast + iVar1 + 0x28);
            *(undefined4 *)((int)gpBitsCast + iVar1 + 0x1c) =
                 *(undefined4 *)((int)gpBitsCast + iVar1 + 0x2c);
            iVar1 = iVar1 + 0x28;
        } while (iVar5 < 0x40);
    }
    iVar1 = screenLoad(_2417,&local_44);
    if (iVar1 != 0x0) {
        if (geTypeCast == 0x3) {
            giScreenStory = screenSet(_2419,0x1);
            storySetupScript(ganCommandWait,0x0);
            storyPlaySong(0x35,0xffffffff);
        }
        else if (geTypeCast < 0x3) {
            if ((geTypeCast != 0x0) && (-0x1 < geTypeCast)) {
                giScreenStory = screenSet(_2418,0x1);
                storySetupScript(ganCommandWait,0x0);
                *(undefined4 *)(gapImageBack._4_4_ + 0x14) = 0x0;
                if (gTheGame._120364_4_ == 0x10) {
                    storyPlaySong(0x33,0xffffffff);
                }
                else {
                    storyPlaySong(0x35,0xffffffff);
                }
            }
        }
        else if (geTypeCast < 0x5) {
            storySetupScript(ganCommandCast,&gaszNameCast);
        }
    }
    return;
}



undefined4 storyTickCastRainbow(int param_1)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    int local_2c;
    uint local_28;
    int local_24;
    int local_20;
    undefined4 local_1c [0x2];
    
    iVar3 = -0x1;
    uVar4 = 0x0;
    if ((geTypeCast == 0x1) && ((int)giBackStory < 0x2)) {
        grAngleBob = grAngleBob + 0.02454369;
        if (6.283185 <= grAngleBob) {
            grAngleBob = grAngleBob - 6.283185;
        }
        storyTickPath3(gpPathGirlMove,0x0,0x0,&giFrameGirl);
        if (*(int *)(gpPathGirlMove + 0xc) >> 0x1 < *(int *)(gpPathGirlMove + 0x4)) {
            if (&stack0x00000000 != (undefined *)0x20) {
                local_20 = *(short *)(*(int *)(gpPathGirlMove + 0x8) +
                                     *(int *)(gpPathGirlMove + 0x4) * 0x6) + -0x1;
            }
            *(undefined4 *)(gpPathGirlMove + 0x4) = 0x0;
            while( true ) {
                if (&stack0x00000000 != (undefined *)0x24) {
                    local_24 = *(short *)(*(int *)(gpPathGirlMove + 0x8) +
                                         *(int *)(gpPathGirlMove + 0x4) * 0x6) + -0x1;
                }
                if (local_20 == local_24) break;
                *(int *)(gpPathGirlMove + 0x4) = *(int *)(gpPathGirlMove + 0x4) + 0x1;
            }
        }
    }
    if (geHoldStory0 != 0x2) {
        if (param_1 < 0xa) {
            nFlagLast_2447 = 0x0;
        }
        iVar2 = screenGetTextFlag(giScreenStory,0x64,&local_2c);
        if ((iVar2 != 0x0) && (local_2c != nFlagLast_2447)) {
            nFlagLast_2447 = local_2c;
            iVar2 = 0x0;
            for (; local_2c != 0x0; local_2c >>= 0x1) {
                iVar2 += 0x1;
            }
            giBackStory += 0x1;
            uVar1 = giBackStory * 0x4 & 0x4;
            local_1c[0] = *(undefined4 *)((int)&gapHeapBack + uVar1);
            if (iVar2 < 0x8) {
                if (geTypeCast == 0x1) {
                    _2529[5] = 0x41;
                }
                else {
                    _2529[5] = 0x42;
                }
                _2529[6] = (char)iVar2 + '0';
                imageLoad(gapImageBack + (giBackStory * 0x4 & 0x4),_2529,local_1c);
            }
            else {
                imageLoad(gapImageBack + uVar1,_2530,local_1c);
            }
            *(undefined4 *)(*(int *)(gapImageBack + (giBackStory & 0x1) * 0x4) + 0x14) = 0x0;
        }
        screenSetTextPosition(giScreenStory,0x64,0x0,0xf0 - param_1 / 0x3);
        if (((param_1 < 0xf1) ||
            (iVar2 = screenGetTextType(giScreenStory,0x64,&local_28), iVar2 == 0x0)) ||
           ((local_28 & 0x1) != 0x0)) {
            gnTickAnchor = -0x1;
        }
        else {
            if (gnTickAnchor == -0x1) {
                gnTickAnchor = param_1;
                screenHideText(giScreenStory,0x64);
            }
            if ((0x5dc < param_1 - gnTickAnchor) && (gnTagCheat != -0x1)) {
                iVar3 = 0x0;
                iVar2 = *(int *)(*(int *)(gapImageBack + (giBackStory & 0x1) * 0x4) + 0x14);
                if (0x0 < iVar2) {
                    *(int *)(*(int *)(gapImageBack + (giBackStory & 0x1) * 0x4) + 0x14) =
                         iVar2 + -0x1;
                }
                iVar2 = *(int *)(*(int *)(gapImageBack + (giBackStory & 0x1 ^ 0x1) * 0x4) + 0x14);
                if (0x0 < iVar2) {
                    *(int *)(*(int *)(gapImageBack + (giBackStory & 0x1 ^ 0x1) * 0x4) + 0x14) =
                         iVar2 + -0x1;
                }
            }
            if (0x708 < param_1 - gnTickAnchor) {
                geHoldStory0 = 0x2;
                if (gnTagCheat == -0x1) {
                    uVar4 = 0xffffffff;
                    gnTickAnchor = param_1;
                }
                else {
                    gnTickAnchor = param_1;
                    screenShowText(giScreenStory);
                }
            }
        }
        if (iVar3 != 0x0) {
            iVar3 = *(int *)(gapImageBack + (giBackStory & 0x1) * 0x4);
            if ((*(int *)(iVar3 + 0x14) != 0xff) &&
               (iVar2 = *(int *)(iVar3 + 0x14) + 0x2, *(int *)(iVar3 + 0x14) = iVar2, 0xfe < iVar2))
            {
                *(undefined4 *)(iVar3 + 0x14) = 0xff;
            }
        }
        return uVar4;
    }
    if (geHoldStory1 == 0x2) {
        return 0x0;
    }
    if (gnTagCheat == -0x1) {
        geHoldStory1 = 0x2;
        return 0xffffffff;
    }
    if (param_1 - gnTickAnchor < 0xf1) {
        return 0x0;
    }
    geHoldStory1 = 0x2;
    return 0x0;
}



undefined4 storyTickCastProfile(int param_1)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    int local_28;
    int local_24;
    int local_20;
    uint local_1c;
    int local_18;
    undefined4 local_14;
    
    uVar3 = 0x0;
    if (param_1 < 0xa) {
        nFlagLast_2531 = 0x0;
    }
    iVar1 = screenGetTextFlag(giScreenStory,0x64,&local_20);
    if ((iVar1 != 0x0) && (local_20 != nFlagLast_2531)) {
        nFlagLast_2531 = local_20;
        iVar1 = 0x0;
        while (local_20 != 0x0) {
            local_20 >>= 0x1;
            iVar2 = iVar1 + 0x1;
            if (iVar1 + 0x1 == 0x1) {
                iVar2 = iVar1 + 0x2;
            }
            iVar1 = iVar2;
            if (iVar1 == 0x2) {
                iVar1 = 0x3;
            }
            if (iVar1 == 0x6) {
                iVar1 = 0x7;
            }
            if (iVar1 == 0x7) {
                iVar1 = 0x8;
            }
            if (iVar1 == 0x9) {
                iVar1 = 0xd;
            }
        }
        LoadCharacterProfileOffset(iVar1,&local_24,&local_28);
        local_14 = gapHeapBack._0_4_;
        n642Dolphin_AllchangeTexture();
        Pon_DVDRead_lev_2(iVar1,0x0);
        imageLoadROM(gapImageBack,**(int **)(gaSegmentCharacter + iVar1 * 0x4) + local_28,
                     **(int **)(gaSegmentCharacter + iVar1 * 0x4) + local_24,0x433,0x80,0xc0,
                     &local_14);
        iVar2 = screenGetImage(giScreenStory,0x64,&local_18);
        if (iVar2 != 0x0) {
            *(undefined4 *)(local_18 + 0x94) = *(undefined4 *)(ganColorCharacter + iVar1 * 0x10);
            *(undefined4 *)(local_18 + 0x98) =
                 *(undefined4 *)(ganColorCharacter + iVar1 * 0x10 + 0x4);
        }
        iVar2 = screenGetImage(giScreenStory,0x6e,&local_18);
        if (iVar2 != 0x0) {
            *(undefined4 *)(local_18 + 0x94) =
                 *(undefined4 *)(ganColorCharacter + iVar1 * 0x10 + 0x8);
        }
    }
    if (geHoldStory0 == 0x2) {
        if (geHoldStory1 != 0x2) {
            if (gnTagCheat == -0x1) {
                geHoldStory1 = 0x2;
                uVar3 = 0xffffffff;
            }
            else if (0xf0 < param_1 - gnTickAnchor) {
                geHoldStory1 = 0x2;
            }
        }
    }
    else {
        if (0xf0 < param_1) {
            iVar1 = screenGetTextType(giScreenStory,0x64,&local_1c);
            if ((iVar1 != 0x0) && ((local_1c & 0x1) == 0x0)) {
                if (((gnTagCheat == -0x1) && (gTheGame._120360_4_ == 0x5)) &&
                   (gTheGame._120364_4_ < 0x2e)) {
                    iVar1 = 0x1e0;
                }
                else {
                    iVar1 = 0x708;
                }
                if (gnTickAnchor == -0x1) {
                    gnTickAnchor = param_1;
                    screenHideText(giScreenStory,0x64);
                    screenShowImage(giScreenStory,0xc8);
                }
                else if (iVar1 < param_1 - gnTickAnchor) {
                    geHoldStory0 = 0x2;
                    if (gnTagCheat == -0x1) {
                        if ((gTheGame._120360_4_ == 0x5) && (gTheGame._120364_4_ < 0x2e)) {
                            gSelection = 0xffffffff;
                            gTheGame._19084_4_ = 0x0;
                            geModeNext = 0x7;
                            geXtraNext = 0x0;
                            gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
                            gnTickAnchor = param_1;
                        }
                        else {
                            uVar3 = 0xffffffff;
                            gnTickAnchor = param_1;
                        }
                    }
                    else {
                        gnTickAnchor = param_1;
                        screenHideImage(giScreenStory,0x64);
                        screenHideImage(giScreenStory,0x6e);
                        screenHideImage(giScreenStory,0xc8);
                        screenHideImage(giScreenStory,0x276);
                        screenShowText(giScreenStory,gnTagCheat);
                    }
                }
                goto LAB_000a8214;
            }
        }
        gnTickAnchor = -0x1;
    }
LAB_000a8214:
    screenSetTextPosition(giScreenStory,0x64,0x0,0xf0 - (param_1 >> 0x2));
    return uVar3;
}



undefined4 storyTickCastFaries(uint param_1)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    int *piVar4;
    int iVar5;
    int iVar6;
    
    uVar3 = param_1 & 0x7;
    if (uVar3 == 0x0) {
        uVar1 = osGetCount();
        if ((uVar1 & 0x1) != 0x0) {
            uVar1 = osGetCount();
            if ((uVar1 & 0x4) == 0x0) {
                if (-0x8 < (int)gpBitsCast[0x2]) {
                    gpBitsCast[0x2] = gpBitsCast[0x2] - 0x1;
                }
            }
            else if ((int)gpBitsCast[0x2] < 0x8) {
                gpBitsCast[0x2] = gpBitsCast[0x2] + 0x1;
            }
        }
    }
    iVar5 = 0x0;
    iVar6 = 0x0;
    do {
        iVar2 = *(int *)((int)gpBitsCast + iVar6 + 0x1c);
        if (iVar2 == 0x0) {
            *(int *)((int)gpBitsCast + iVar6 + 0x14) =
                 *(int *)((int)gpBitsCast + iVar6 + 0x14) + *(int *)((int)gpBitsCast + iVar6 + 0x18)
            ;
            iVar2 = *(int *)((int)gpBitsCast + iVar6 + 0x10) +
                    *(int *)((int)gpBitsCast + iVar6 + 0x18);
            *(int *)((int)gpBitsCast + iVar6 + 0x10) = iVar2;
            if (0x3c0 < iVar2) {
                *(undefined4 *)((int)gpBitsCast + iVar6 + 0xc) =
                     *(undefined4 *)((int)gpBitsCast + iVar6 + 0x20);
                *(undefined4 *)((int)gpBitsCast + iVar6 + 0x10) =
                     *(undefined4 *)((int)gpBitsCast + iVar6 + 0x24);
                *(undefined4 *)((int)gpBitsCast + iVar6 + 0x18) =
                     *(undefined4 *)((int)gpBitsCast + iVar6 + 0x28);
                *(undefined4 *)((int)gpBitsCast + iVar6 + 0x1c) =
                     *(undefined4 *)((int)gpBitsCast + iVar6 + 0x2c);
            }
            if ((param_1 & 0x3) == 0x0) {
                *(uint *)((int)gpBitsCast + iVar6 + 0xc) =
                     *(int *)((int)gpBitsCast + iVar6 + 0xc) + gpBitsCast[0x2];
            }
            if (uVar3 == 0x0) {
                uVar1 = osGetCount();
                if ((uVar1 & 0x1) != 0x0) {
                    uVar1 = osGetCount();
                    if ((uVar1 & 0x2) == 0x0) {
                        piVar4 = (int *)((int)gpBitsCast + iVar6 + 0x18);
                        iVar2 = *piVar4;
                        if (0x1 < iVar2) {
                            *piVar4 = iVar2 + -0x1;
                        }
                    }
                    else {
                        piVar4 = (int *)((int)gpBitsCast + iVar6 + 0x18);
                        iVar2 = *piVar4;
                        if (iVar2 < 0x8) {
                            *piVar4 = iVar2 + 0x1;
                        }
                    }
                }
            }
        }
        else {
            *(int *)((int)gpBitsCast + iVar6 + 0x1c) = iVar2 + -0x1;
        }
        iVar5 += 0x1;
        iVar6 += 0x28;
    } while (iVar5 < 0x40);
    uVar1 = *gpBitsCast;
    if (uVar1 == 0xffffffff) {
        if ((uVar3 == 0x0) && (uVar3 = osGetCount(), (uVar3 & 0x7) == 0x0)) {
            uVar3 = osGetCount();
            uVar3 = (uVar3 >> 0x2 & 0xff) % 0xa;
            uVar1 = uVar3 + 0x65;
            if (uVar1 == 0x6e) {
                uVar1 = uVar3 + 0x66;
            }
            *gpBitsCast = uVar1;
        }
    }
    else {
        iVar5 = (int)uVar1 >> 0x10;
        if (((param_1 & 0x1) == 0x0) || (iVar5 += 0x1, iVar5 < 0x4)) {
            *gpBitsCast = iVar5 << 0x10 | uVar1 & 0xffff;
            if (iVar5 == 0x3) {
                iVar5 = 0x1;
            }
        }
        else {
            *gpBitsCast = 0xffffffff;
            iVar5 = 0x0;
        }
        if (iVar5 == 0x0) {
            iVar5 = 0x0;
        }
        else {
            iVar5 += 0x3;
        }
        screenSetFrame(giScreenStory,uVar1 & 0xffff,iVar5);
    }
    return 0x0;
}



void storyTickCast(undefined4 param_1,undefined4 param_2)

{
    int iVar1;
    int iVar2;
    
    iVar2 = 0x0;
    storyTickScript(param_1,0x0);
    if (geTypeCast == 0x3) {
        iVar2 = storyTickCastProfile(param_1,param_2);
    }
    else if (geTypeCast < 0x3) {
        if (geTypeCast == 0x0) {
            iVar2 = 0x0;
        }
        else if (-0x1 < geTypeCast) {
            iVar2 = storyTickCastRainbow(param_1,param_2);
        }
    }
    else if (geTypeCast < 0x5) {
        iVar2 = storyTickCastFaries(param_1,param_2);
    }
    if ((gnCode & 0xff) == 0xf) {
        iVar1 = -0x1;
    }
    else {
        iVar1 = 0x0;
    }
    if ((((iVar1 != 0x0) && ((gTheGame._90948_2_ & 0xc000) != 0x0)) ||
        ((gTheGame._90948_2_ & 0x1000) != 0x0)) || (iVar2 != 0x0)) {
        PlaySE(SFX_INIT_TABLE,0x2);
        if ((gnPickStory & 0x2) == 0x0) {
            FadeOutAllSFXs(0x1e);
            FadeOutAllSongs(0x1e);
            gReset = 0xffffffff;
            gMain = 0x1f4;
            gTheGame._120332_4_ = 0x1;
        }
        else {
            geModeNext = 0x1;
            geXtraNext = 0x0;
            gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        }
    }
    return;
}



void storySetupChar(void)

{
    int iVar1;
    undefined4 local_10 [0x3];
    
    pon_ClearHeap();
    local_10[0] = Pon_Image_Heap;
    gnColorBackBlue = 0xff;
    gnColorBackGreen = 0xff;
    gnColorBackRed = 0xff;
    gnColorBackAlpha = 0xff;
    *(ushort *)(gPlayer._0_4_ + 0x17a) = *(ushort *)(gPlayer._0_4_ + 0x17a) & 0x7fff;
    *(ushort *)(gPlayer._0_4_ + 0x17c) = *(ushort *)(gPlayer._0_4_ + 0x17c) & 0x7fff;
    *(ushort *)(gPlayer._0_4_ + 0x17e) = *(ushort *)(gPlayer._0_4_ + 0x17e) & 0x7fff;
    *(ushort *)(gPlayer._0_4_ + 0x180) = *(ushort *)(gPlayer._0_4_ + 0x180) & 0x7fff;
    *(ushort *)(gPlayer._0_4_ + 0x182) = *(ushort *)(gPlayer._0_4_ + 0x182) & 0x7fff;
    iVar1 = screenLoad(_2694,local_10);
    if (iVar1 != 0x0) {
        giScreenStory = screenSet(&_2695,0x8e001);
        iVar1 = gTheGame._120372_4_ / 0x5 + (gTheGame._120372_4_ >> 0x1f);
        screenSetCursor(giScreenStory,0x64,gTheGame._120372_4_ + (iVar1 - (iVar1 >> 0x1f)) * -0x5,
                        iVar1 - (iVar1 >> 0x1f));
    }
    if (geModeLast == 0x0) {
        if (gTheGame._120364_4_ == 0xc) {
            storyPlaySong(0x29,0xffffffff);
        }
        else if (gTheGame._120364_4_ < 0xc) {
            if (gTheGame._120364_4_ == 0xa) {
                storyPlaySong(0x34,0xffffffff);
            }
            else if (0x9 < gTheGame._120364_4_) {
                storyPlaySong(0x2b,0xffffffff);
            }
        }
        else if (gTheGame._120364_4_ < 0xe) {
            storyPlaySong(0x2a,0xffffffff);
        }
    }
    return;
}



void storyTickChar(undefined4 param_1,int param_2)

{
    undefined4 uVar1;
    int iVar2;
    ushort uVar4;
    int iVar3;
    int iVar5;
    uint uVar6;
    int local_28;
    int local_24;
    int local_20 [0x2];
    
    uVar4 = 0x0;
    if (gPlayer._0_4_ == 0x0) {
        uVar4 = 0x0;
    }
    else if (gTheGame._120360_4_ == 0x3) {
        uVar4 = *(ushort *)(gPlayer._0_4_ + 0x17e);
    }
    else if (gTheGame._120360_4_ < 0x3) {
        if (gTheGame._120360_4_ == 0x1) {
            uVar4 = *(ushort *)(gPlayer._0_4_ + 0x17a);
        }
        else if (0x0 < gTheGame._120360_4_) {
            uVar4 = *(ushort *)(gPlayer._0_4_ + 0x17c);
        }
    }
    else if (gTheGame._120360_4_ == 0x5) {
        uVar4 = *(ushort *)(gPlayer._0_4_ + 0x182);
    }
    else if (gTheGame._120360_4_ < 0x5) {
        uVar4 = *(ushort *)(gPlayer._0_4_ + 0x180);
    }
    screenGetCursor(giScreenStory,0x64,&local_24,&local_28);
    uVar6 = (uint)(short)(uVar4 & 0xfdfe);
    local_24 += local_28 * 0x5;
    if ((uVar6 & 0x1 << local_24) == 0x0) {
        iVar3 = local_24 + 0x259;
        gTheGame._120372_4_ = local_24;
    }
    else {
        iVar3 = -0x1;
    }
    iVar5 = 0x259;
    do {
        iVar2 = screenGetImage(giScreenStory,iVar5,local_20);
        if (iVar2 != 0x0) {
            if ((uVar6 & 0x1 << iVar5 + -0x259) == 0x0) {
                *(uint *)(local_20[0] + 0xc) = *(uint *)(local_20[0] + 0xc) & 0xffffffef;
                if (iVar5 == iVar3) {
                    uVar1 = 0xff;
                }
                else {
                    uVar1 = 0x8f;
                }
                *(undefined4 *)(local_20[0] + 0x14) = uVar1;
            }
            else {
                *(uint *)(local_20[0] + 0xc) = *(uint *)(local_20[0] + 0xc) | 0x10;
                *(undefined4 *)(local_20[0] + 0x14) = 0x40;
                *(undefined4 *)(local_20[0] + 0x94) = 0x0;
                *(undefined4 *)(local_20[0] + 0x98) = 0xffffffff;
            }
        }
        iVar5 += 0x1;
    } while (iVar5 < 0x263);
    menuWinkFace(iVar3,giScreenStory,0x0);
    if ((param_2 != 0x0) || ((gTheGame._90948_2_ & 0x1000) != 0x0)) {
        if ((uVar6 & 0x1 << local_24) == 0x0) {
            gReset = 0xffffffff;
            gMain = 0x384;
            gTheGame._120332_4_ = 0x1;
            FadeOutSong(last_song_handle,0x78);
            menuPlayEffect2P(local_24,0x0);
        }
        else {
            PlaySE(SFX_INIT_TABLE,0x7);
        }
    }
    return;
}



void storyTickKeysDragon(int param_1)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    int local_1c;
    int local_18;
    int local_14 [0x2];
    
    storyTickPath2(gpPathGirl);
    storyTickPath2(gpPathBaby);
    storyTickPath2(gpPathMother);
    if (geXtra == 0x2) {
        if (gnTickStory == 0x24) {
            storyPlaySong(0x34,0xffffffff);
        }
        if ((geHoldStory1 == 0x1) && (gnColorBackAlpha += 0x4, 0xfe < gnColorBackAlpha)) {
            geHoldStory1 = 0x2;
            gnColorBackAlpha = 0xff;
            geModeNext = 0x8;
            geXtraNext = 0x0;
            gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        }
        if (*(int *)(gpPathMother + 0x10) < *(int *)(*(int *)(gpPathMother + 0x2c) + 0x4)) {
            iVar1 = storyGetPathImage2(gpPathMother,0x0,0x0,0x0,&local_18);
            if (iVar1 != 0x0) {
                if (local_18 == 0x1) {
                    PlaySE(SFX_INIT_TABLE,0x115);
                }
            }
        }
        if ((gnTickStory & gpPathGirl[0x6]) == 0x0) {
            if (gpPathGirl[0x4] == 0x13c) {
                PlaySE(SFX_INIT_TABLE,0x112);
            }
        }
        if ((gnTickStory & *(uint *)(gpPathMother + 0x18)) == 0x0) {
            if (*(int *)(gpPathMother + 0x10) ==
                *(int *)(*(int *)(gpPathMother + 0x2c) + 0x4) + -0x1) {
                PlaySE(SFX_INIT_TABLE,0x113);
            }
        }
        if (((gnTickStory & *(uint *)(gpPathMother + 0x18)) == 0x0) &&
           (*(int *)(gpPathMother + 0x10) == 0x27c)) {
            gnMagnitudeShake = 0x1800;
            geHoldStory0 = 0x2;
            PlaySE(SFX_INIT_TABLE,0x114);
        }
        storyTickPath2(gpPathFlower);
        storyTickPath2(gapPathBits._0_4_);
        if (*(int *)(gpPathFlower + 0x10) == *(int *)(gpPathFlower + 0x24) + -0x10) {
            PlaySE(SFX_INIT_TABLE,0x13d);
        }
        screenHideImage(giScreenStory,0x8138812c);
        if (((gnOffsetShakeX == 0x0) && (gnOffsetShakeY == 0x0)) &&
           (iVar1 = *gpPathGirl, 0x0 < iVar1)) {
            if (0xa < iVar1) {
                iVar1 = 0xa;
            }
            screenShowImage(giScreenStory,iVar1 + 0x12c);
        }
        iVar1 = (int)gnTickStory >> 0x5;
        if (0x8 < iVar1) {
            iVar1 = 0x8;
        }
        gnHeightSky = 0x18 - (0x8 - iVar1);
        iVar1 = (int)gnTickStory >> 0x3;
        if (0x20 < iVar1) {
            iVar1 = 0x20;
        }
        screenSetImagePosition
                  (giScreenStory,0x6e,gnOffsetShakeX >> 0x1,(0x20 - iVar1) + (gnOffsetShakeY >> 0x1)
                  );
        iVar1 = (int)gnTickStory >> 0x2;
        if (0x40 < iVar1) {
            iVar1 = 0x40;
        }
        screenSetImagePosition(giScreenStory,0x82,gnOffsetShakeX,(0x40 - iVar1) + gnOffsetShakeY);
    }
    else {
        if ((gpPathGirl != gpPathNote) && (geHoldStory1 == 0x2)) {
            gpPathGirl[0xd] = 0x0;
        }
        iVar1 = screenFind(&local_1c,_2867);
        if ((iVar1 == 0x0) || (iVar1 = screenGet(), local_1c != iVar1)) {
            screenHideImage(giScreenStory,0x8138812c);
            if ((gnOffsetShakeX == 0x0) &&
               ((gnOffsetShakeY == 0x0 && (iVar1 = *gpPathGirl, 0x0 < iVar1)))) {
                if (iVar1 < 0x4) {
                    iVar1 = 0xa;
                }
                else {
                    iVar1 += 0x7;
                }
                screenShowImage(giScreenStory,iVar1 + 0x12c);
            }
            if (geHoldStory0 != 0x0) {
                if (geHoldStory0 == 0x1) {
                    geHoldStory0 = 0x2;
                    gnTickAnchor = param_1;
                    PlaySE(SFX_INIT_TABLE,0x13e);
                }
                else {
                    uVar3 = param_1 - gnTickAnchor;
                    iVar1 = 0xff - uVar3;
                    if (iVar1 < 0x0) {
                        if ((geHoldStory1 != 0x0) && (geHoldStory1 = 0x2, geHoldStory2 != 0x0)) {
                            geHoldStory2 = 0x2;
                            if (gpPathGirl[0xd] == 0x3) {
                                iVar1 = gpPathGirl[0x8];
                                iVar2 = 0x0;
                                if (0x0 < iVar1) {
                                    do {
                                        if (*(int *)(gpPathGirl[0x5] + iVar2) <
                                            *(int *)(gpPathGirl[0xb] + iVar2 + 0x4) + -0x1) {
                                            iVar1 = 0x0;
                                            goto LAB_000a8fac;
                                        }
                                        iVar2 += 0x4;
                                        iVar1 += -0x1;
                                    } while (iVar1 != 0x0);
                                }
                                iVar1 = -0x1;
                            }
                            else if (gpPathGirl[0x4] == gpPathGirl[0x9] + -0x1) {
                                iVar1 = -0x1;
                            }
                            else {
                                iVar1 = 0x0;
                            }
LAB_000a8fac:
                            if (iVar1 != 0x0) {
                                gnTickStory = 0x0;
                                gpPathGirl = gpPathNote;
                                gpPathBat1 = gpPathBat1X;
                                gpPathBat2 = gpPathBat2X;
                                gpPathBat3 = gpPathBat3X;
                                gpPathBat4 = gpPathBat4X;
                                gpPathBat5 = gpPathBat5X;
                                giScreenStory = screenSet(_2867,0xff001);
                            }
                        }
                    }
                    else {
                        *(int *)(gpPathBaby + 0xc) = iVar1;
                        iVar2 = storyGetPathImage2(gpPathBaby,0x0,0x0,local_14,0x0);
                        if (iVar2 != 0x0) {
                            imageMakeScanWave(local_14[0],(int)uVar3 >> 0x4,uVar3 * 0x100 & 0xff00,
                                              (int)*(short *)(local_14[0] + 0x8) - (int)uVar3 / 0x6)
                            ;
                        }
                        *(int *)(gpPathMother + 0xc) = iVar1;
                        iVar1 = storyGetPathImage2(gpPathMother,0x0,0x0,local_14,0x0);
                        if (iVar1 != 0x0) {
                            imageMakeScanWave(local_14[0],(int)uVar3 >> 0x3,uVar3 * 0x100 & 0xff00,
                                              (int)*(short *)(local_14[0] + 0x8) -
                                              (((int)uVar3 >> 0x2) +
                                              (uint)((int)uVar3 < 0x0 && (uVar3 & 0x3) != 0x0)));
                        }
                    }
                }
            }
        }
        else {
            if (gpPathGirl[0xd] == 0x3) {
                iVar1 = gpPathGirl[0x8];
                iVar2 = 0x0;
                if (0x0 < iVar1) {
                    do {
                        if (*(int *)(gpPathGirl[0x5] + iVar2) <
                            *(int *)(gpPathGirl[0xb] + iVar2 + 0x4) + -0x1) {
                            iVar1 = 0x0;
                            goto LAB_000a8de8;
                        }
                        iVar2 += 0x4;
                        iVar1 += -0x1;
                    } while (iVar1 != 0x0);
                }
                iVar1 = -0x1;
            }
            else if (gpPathGirl[0x4] == gpPathGirl[0x9] + -0x1) {
                iVar1 = -0x1;
            }
            else {
                iVar1 = 0x0;
            }
LAB_000a8de8:
            if (iVar1 != 0x0) {
                giLevelStory += 0x1;
                geModeNext = 0x4;
                geXtraNext = 0x2;
                gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
            }
            screenHideImage(giScreenStory,0x8133812c);
            if (((gnOffsetShakeX == 0x0) && (gnOffsetShakeY == 0x0)) && (-0x1 < *gpPathGirl)) {
                screenShowImage(giScreenStory,*gpPathGirl + 0x129);
            }
        }
    }
    return;
}



void storyTickKeysNotes(int *param_1,uint param_2)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    int local_50;
    int local_4c;
    float local_48;
    float local_44;
    float local_40;
    int local_3c;
    float local_38 [0x2];
    longlong local_30;
    undefined4 local_28;
    uint uStack_24;
    
    if ((param_2 & 0x1) == 0x0) {
        uVar3 = 0x0;
        do {
            if (0x7e < *(int *)(*param_1 + 0x4)) {
                uVar1 = osGetCount();
                if (uVar3 == (uVar1 & 0x7)) {
                    *(undefined4 *)(*param_1 + 0x4) = 0x0;
                }
                else {
                    *(undefined4 *)(*param_1 + 0x4) = 0x7f;
                }
            }
            iVar2 = storyGetPath(*param_1,&local_40,&local_44,&local_48,0x0);
            if (iVar2 != 0x0) {
                local_48 = local_48 + grPercentZoom * 1000.0;
                iVar2 = storyGetScreen((double)local_40,(double)local_44,(double)local_48,&local_4c,
                                       &local_50,local_38);
                if (iVar2 == 0x0) {
                    screenHideImage(giScreenStory,uVar3 + 0x1f4);
                }
                else {
                    iVar2 = screenGetImage(giScreenStory,uVar3 + 0x1f4,&local_3c);
                    if (iVar2 != 0x0) {
                        uStack_24 = *(uint *)(*param_1 + 0x4) ^ 0x80000000;
                        local_28 = 0x43300000;
                        iVar2 = (int)(((float)((double)CONCAT44(0x43300000,uStack_24) -
                                              4503601774854144.0) / 100.0) * 255.0);
                        local_30 = (longlong)iVar2;
                        iVar2 = 0xff - iVar2;
                        if (iVar2 < 0x0) {
                            iVar2 = 0x0;
                        }
                        *(int *)(local_3c + 0x14) = iVar2;
                    }
                    screenSetImageScale((double)(local_38[0] / 0.049903 + grPercentZoom),
                                        giScreenStory,uVar3 + 0x1f4);
                    screenSetImagePosition
                              (giScreenStory,uVar3 + 0x1f4,local_4c + *(int *)(*param_1 + 0x10),
                               local_50 + *(int *)(*param_1 + 0x14));
                }
            }
            uVar3 += 0x1;
            param_1 = param_1 + 0x1;
        } while ((int)uVar3 < 0x3);
    }
    return;
}



void storyTickKeysJoker(uint param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    int local_1c;
    int local_18 [0x2];
    
    iVar6 = 0x0;
    iVar1 = screenGetImage(giScreenStory,0xdc,local_18);
    if (iVar1 != 0x0) {
        imageMakeScanWave(local_18[0],0x4,(param_1 & 0xff) << 0x8,0x0);
    }
    iVar1 = screenGetImage(giScreenStory,0xdd,local_18);
    if (iVar1 != 0x0) {
        imageMakeScanWave(local_18[0],0x4,(param_1 & 0xff) << 0x8,0x0);
    }
    storyTickPath2(gpPathGirl);
    if (geXtra == 0x1) {
        screenHideImage(giScreenStory,0x12c);
        screenShowImage(giScreenStory,0x12d);
        if (geHoldStory1 == 0x2) {
            storySetPathWrap2(gpPathGirl,0x2,0x3);
        }
        iVar1 = screenGetImage(giScreenStory,0x64,local_18);
        if (iVar1 != 0x0) {
            *(undefined4 *)(local_18[0] + 0x14) = 0xff;
        }
        iVar1 = screenGetImage(giScreenStory,0x65,local_18);
        if (iVar1 != 0x0) {
            *(undefined4 *)(local_18[0] + 0x14) = 0xff;
        }
        if (geHoldStory0 != 0x0) {
            if (geHoldStory0 == 0x1) {
                geHoldStory0 = 0x2;
                gnTickAnchor = gnTickStory;
                PlaySE(SFX_INIT_TABLE,0x13e);
            }
            else {
                iVar6 = param_1 - gnTickAnchor;
                iVar1 = 0x1ff - iVar6;
                if (iVar1 < 0x0) {
                    iVar1 = 0x0;
                    if (geHoldStory1 == 0x1) {
                        geHoldStory1 = 0x2;
                    }
                    if (geHoldStory2 == 0x1) {
                        giLevelStory += 0x1;
                        geModeNext = 0x4;
                        geXtraNext = 0x2;
                        gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
                    }
                }
                if (0xff < iVar1) {
                    iVar1 = 0xff;
                }
                iVar4 = -(iVar6 >> 0x1) + 0xd0;
                iVar2 = screenGetImage(giScreenStory,0x64,local_18);
                iVar3 = iVar6 >> 0x3;
                if (iVar2 != 0x0) {
                    *(int *)(local_18[0] + 0x14) = iVar1;
                    imageMakeScanWave(local_18[0],iVar3,iVar6 * 0x100 & 0xff00U | 0x1,iVar4);
                }
                iVar2 = screenGetImage(giScreenStory,0x65,local_18);
                if (iVar2 != 0x0) {
                    *(int *)(local_18[0] + 0x14) = iVar1;
                    imageMakeScanWave(local_18[0],iVar3,iVar6 * 0x100 & 0xff00U | 0x1,
                                      -(iVar6 >> 0x1) + 0xd8);
                }
                iVar2 = screenGetImage(giScreenStory,0x66,local_18);
                if (iVar2 != 0x0) {
                    *(int *)(local_18[0] + 0x14) = iVar1;
                    imageMakeScanWave(local_18[0],iVar3,iVar6 * 0x100 & 0xff00U | 0x1,iVar4);
                }
            }
        }
        screenSetImagePosition(giScreenStory,0xd2,0xe1,0x55);
    }
    else {
        if ((geHoldStory3 == 0x1) && (gnColorBackAlpha += 0x4, 0xfe < gnColorBackAlpha)) {
            geHoldStory3 = 0x2;
            gnColorBackAlpha = 0xff;
            geModeNext = 0x8;
            geXtraNext = 0x0;
            gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        }
        if (geHoldStory0 == 0x2) {
            storySetPathWrap2(gpPathGirl,0x3,0x4);
        }
        screenHideImage(giScreenStory,0x812e812c);
        if ((geHoldStory2 == 0x1) &&
           (*(int *)(*(int *)(gpPathGirl + 0x2c) + 0x4) <= *(int *)(gpPathGirl + 0x10))) {
            geHoldStory2 = 0x2;
        }
        else if (geHoldStory2 != 0x2) {
            screenSetImagePosition(giScreenStory,0xd2,0x1d1,0x55);
        }
        if (geHoldStory0 != 0x0) {
            if (geHoldStory0 == 0x1) {
                gnTickAnchor = gnTickStory;
                geHoldStory0 = 0x2;
            }
            else {
                param_1 -= gnTickAnchor;
                if ((int)param_1 < 0x100) {
                    uVar5 = param_1;
                    if ((int)param_1 < 0x10) {
                        if (param_1 == 0x1) {
                            PlaySE(SFX_INIT_TABLE,0x113);
                        }
                        uVar5 = param_1 * 0x20 & 0xe0;
                        if ((param_1 & 0x8) != 0x0) {
                            uVar5 = 0xff - uVar5;
                        }
                    }
                    iVar1 = screenGetImage(giScreenStory,0x64,local_18);
                    if (iVar1 != 0x0) {
                        *(uint *)(local_18[0] + 0x14) = uVar5;
                    }
                    iVar1 = screenGetImage(giScreenStory,0x65,local_18);
                    if (iVar1 != 0x0) {
                        *(uint *)(local_18[0] + 0x14) = uVar5;
                    }
                }
                else {
                    iVar6 = -0x1;
                    if (geHoldStory1 == 0x1) {
                        geHoldStory1 = 0x2;
                    }
                }
                if ((int)param_1 < 0xf0) {
                    screenSetImagePosition(giScreenStory,0xd2,0x1d1 - param_1,0x55);
                }
            }
        }
        if (iVar6 != 0x0) {
            iVar1 = screenGetImage(giScreenStory,0x64,local_18);
            if ((((iVar1 == 0x0) || (iVar1 = imageGetFrame(local_18[0],&local_1c), iVar1 == 0x0)) ||
                (local_1c != 0x1)) || ((*(uint *)(local_18[0] + 0xc) & 0x800) == 0x0)) {
                screenHideImage(giScreenStory,0x66);
            }
            else {
                screenShowImage(giScreenStory,0x66);
            }
        }
    }
    return;
}



void storyTickKeysSanatos(int param_1)

{
    float fVar1;
    float fVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    uint uVar8;
    double dVar9;
    double dVar10;
    double dVar11;
    int local_88 [0x2];
    double local_80;
    longlong local_78;
    longlong local_70;
    longlong local_68;
    longlong local_60;
    longlong local_58;
    longlong local_50;
    longlong local_48;
    longlong local_40;
    longlong local_38;
    undefined4 local_30;
    uint uStack_2c;
    
    iVar7 = 0x0;
    uVar8 = 0x0;
    storyTickPath2(gpPathGirl);
    if (geHoldStory3 == 0x2) {
        if ((gpPathNote != 0x0) &&
           (storyTickPath2(),
           *(int *)(gpPathNote + 0x10) == *(int *)(*(int *)(gpPathNote + 0x2c) + 0x8) + 0x46)) {
            PlaySE(SFX_INIT_TABLE,0x13f);
        }
        if (geHoldStory4 == 0x2) {
            if (*(int *)(*(int *)(gpPathNote + 0x2c) + 0x8) + 0x50 < *(int *)(gpPathNote + 0x10)) {
                storyTickPath2(gapPathBits._4_4_);
            }
        }
        else {
            storyTickPath2(gapPathBits._0_4_);
        }
    }
    if (geXtra == 0x1) {
        if (geHoldStory2 != 0x2) {
            if ((*(int *)(*(int *)(gpPathNote + 0x2c) + 0x8) <= *(int *)(gpPathNote + 0x10)) &&
               (*(undefined4 *)(gpPathNote + 0x10) =
                     *(undefined4 *)(*(int *)(gpPathNote + 0x2c) + 0x4), geHoldStory4 == 0x1)) {
                geHoldStory4 = 0x2;
            }
        }
        if (geHoldStory0 == 0x0) {
            if (*(int *)(*(int *)(gpPathGirl + 0x2c) + 0x4) <= *(int *)(gpPathGirl + 0x10)) {
                *(undefined4 *)(gpPathGirl + 0x10) = 0x0;
            }
        }
        else if (geHoldStory3 == 0x2) {
            if ((geHoldStory2 != 0x2) ||
               (*(int *)(gpPathNote + 0x10) < *(int *)(*(int *)(gpPathNote + 0x2c) + 0x8))) {
                if (*(int *)(*(int *)(gpPathGirl + 0x2c) + 0xc) <= *(int *)(gpPathGirl + 0x10)) {
                    *(undefined4 *)(gpPathGirl + 0x10) =
                         *(undefined4 *)(*(int *)(gpPathGirl + 0x2c) + 0x8);
                }
            }
        }
        else {
            iVar3 = *(int *)(*(int *)(gpPathGirl + 0x2c) + 0x8);
            if (iVar3 <= *(int *)(gpPathGirl + 0x10)) {
                *(int *)(gpPathGirl + 0x10) = iVar3 + -0x1;
            }
        }
        iVar4 = *(int *)(gpPathGirl + 0x10);
        iVar3 = *(int *)(*(int *)(gpPathGirl + 0x2c) + 0xc);
        iVar5 = iVar3 + 0x4b;
        if ((iVar5 <= iVar4) && (iVar4 <= iVar3 + 0x9b)) {
            uStack_2c = iVar4 - iVar5 ^ 0x80000000;
            local_30 = 0x43300000;
            dVar9 = (double)((float)((double)CONCAT44(0x43300000,uStack_2c) - 4503601774854144.0) /
                            80.0);
            dVar11 = dVar9 * 59.0;
            iVar3 = (int)dVar11;
            local_58 = (longlong)iVar3;
            *(int *)(gapPathNote._0_4_ + 0x10) = iVar3;
            dVar10 = dVar9 * 68.0;
            iVar4 = (int)dVar10;
            local_60 = (longlong)iVar4;
            *(int *)(gapPathNote._0_4_ + 0x14) = iVar4;
            *(int *)(gapPathNote._4_4_ + 0x10) = iVar3;
            *(int *)(gapPathNote._4_4_ + 0x14) = iVar4;
            *(int *)(gapPathNote._8_4_ + 0x10) = iVar3;
            *(int *)(gapPathNote._8_4_ + 0x14) = iVar4;
            iVar3 = (int)(dVar9 * 74.0 + -128.0);
            local_68 = (longlong)iVar3;
            iVar4 = (int)(dVar9 * 42.0 + -50.0);
            local_70 = (longlong)iVar4;
            local_50 = local_60;
            local_48 = local_58;
            local_40 = local_60;
            local_38 = local_58;
            screenSetImagePosition(giScreenStory,0x6e,iVar3,iVar4);
            local_78 = (longlong)(int)(dVar11 + -203.0);
            local_80 = (double)(longlong)(int)(dVar10 + -68.0);
            screenSetImagePosition(giScreenStory,0x82,(int)(dVar11 + -203.0),(int)(dVar10 + -68.0));
        }
        if (geHoldStory2 == 0x1) {
            geHoldStory2 = 0x2;
        }
        if (geHoldStory0 != 0x0) {
            if (geHoldStory0 == 0x1) {
                gpPathBat1 = gpPathBat1X;
                gpPathBat2 = gpPathBat2X;
                gpPathBat3 = gpPathBat3X;
                gpPathBat4 = gpPathBat4X;
                gpPathBat5 = gpPathBat5X;
                geHoldStory0 = 0x2;
                gnTickAnchor = gnTickStory;
                PlaySE(SFX_INIT_TABLE,0x13e);
            }
            else {
                iVar3 = 0xff - (param_1 - gnTickAnchor);
                if (iVar3 < 0x0) {
                    if ((param_1 - gnTickAnchor < 0x200) &&
                       (iVar3 = screenGetImage(giScreenStory,0x12c,local_88), iVar3 != 0x0)) {
                        imageMakeScanBurn(local_88[0],0x0);
                    }
                    if (geHoldStory1 != 0x2) {
                        PlaySE(SFX_INIT_TABLE,0x146);
                        geHoldStory1 = 0x2;
                    }
                    if (geHoldStory3 == 0x1) {
                        gnCountZoom += 0x1;
                        if ((int)gnCountZoom < 0x3d) {
                            local_80 = (double)CONCAT44(0x43300000,gnCountZoom ^ 0x80000000);
                            grPercentZoom = (float)(local_80 - 4503601774854144.0) / 60.0;
                            fVar1 = grPercentZoom * 128.0;
                            fVar2 = grPercentZoom * 50.0;
                            local_78 = (longlong)(int)fVar1;
                            local_70 = (longlong)(int)fVar2;
                            screenSetImageScale((double)(grPercentZoom * 0.5 + 1.0),giScreenStory,
                                                0x6e);
                            screenSetImagePosition(giScreenStory,0x6e,-(int)fVar1,-(int)fVar2);
                            fVar1 = grPercentZoom * 203.0;
                            fVar2 = grPercentZoom * 68.0;
                            local_68 = (longlong)(int)fVar1;
                            local_60 = (longlong)(int)fVar2;
                            screenSetImageScale((double)(grPercentZoom + 1.0),giScreenStory,0x82);
                            screenSetImagePosition(giScreenStory,0x82,-(int)fVar1,-(int)fVar2);
                        }
                        else {
                            geHoldStory3 = 0x2;
                        }
                    }
                    if (*(int *)(gpPathGirl + 0x34) == 0x3) {
                        iVar3 = *(int *)(gpPathGirl + 0x20);
                        iVar4 = 0x0;
                        if (0x0 < iVar3) {
                            do {
                                if (*(int *)(*(int *)(gpPathGirl + 0x14) + iVar4) <
                                    *(int *)(*(int *)(gpPathGirl + 0x2c) + iVar4 + 0x4) + -0x1) {
                                    iVar3 = 0x0;
                                    goto LAB_000a9d38;
                                }
                                iVar4 += 0x4;
                                iVar3 += -0x1;
                            } while (iVar3 != 0x0);
                        }
                        iVar3 = -0x1;
                    }
                    else if (*(int *)(gpPathGirl + 0x10) == *(int *)(gpPathGirl + 0x24) + -0x1) {
                        iVar3 = -0x1;
                    }
                    else {
                        iVar3 = 0x0;
                    }
LAB_000a9d38:
                    if ((iVar3 != 0x0) && (geHoldStory5 == 0x1)) {
                        giLevelStory += 0x1;
                        geModeNext = 0x4;
                        geXtraNext = 0x2;
                        gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
                    }
                }
                else {
                    gnAlphaRays = iVar3;
                    if (iVar3 < 0x0) {
                        gnAlphaRays = 0x0;
                    }
                    if (0xff < gnAlphaRays) {
                        gnAlphaRays = 0xff;
                    }
                    iVar4 = screenGetImage(giScreenStory,0x12c,local_88);
                    if (iVar4 != 0x0) {
                        *(undefined4 *)(local_88[0] + 0x14) = 0xff;
                        imageMakeScanBurn(local_88[0],iVar3);
                    }
                }
            }
        }
    }
    else {
        if ((geHoldStory1 == 0x1) && (gnColorBackAlpha += 0x4, 0xfe < gnColorBackAlpha)) {
            geHoldStory1 = 0x2;
            gnColorBackAlpha = 0xff;
            geModeNext = 0x8;
            geXtraNext = 0x0;
            gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        }
        if (param_1 < 0x12c) {
            if (*(int *)(*(int *)(gpPathGirl + 0x2c) + 0x4) <= *(int *)(gpPathGirl + 0x10)) {
                *(undefined4 *)(gpPathGirl + 0x10) = 0x0;
            }
        }
        else if (param_1 == 0x12c) {
            gnMagnitudeShake = 0x1000;
            PlaySE(SFX_INIT_TABLE,0x10c);
        }
        else if ((gnOffsetShakeX == 0x0) && (gnOffsetShakeY == 0x0)) {
            if (geHoldStory0 == 0x2) {
                if (*(int *)(*(int *)(gpPathGirl + 0x2c) + 0xc) <= *(int *)(gpPathGirl + 0x10)) {
                    *(undefined4 *)(gpPathGirl + 0x10) =
                         *(undefined4 *)(*(int *)(gpPathGirl + 0x2c) + 0x8);
                }
            }
            else {
                *(undefined4 *)(gpPathGirl + 0x10) = 0x0;
            }
        }
        else if (*(int *)(*(int *)(gpPathGirl + 0x2c) + 0x8) <= *(int *)(gpPathGirl + 0x10)) {
            *(undefined4 *)(gpPathGirl + 0x10) = *(undefined4 *)(*(int *)(gpPathGirl + 0x2c) + 0x4);
        }
        if (param_1 == 0xb4) {
            PlaySE(SFX_INIT_TABLE,0x13f);
        }
        if ((0xb4 < param_1) && (param_1 < 0x21c)) {
            gnAlphaRays = param_1 + -0xb4;
            if (param_1 + -0xb4 < 0x0) {
                gnAlphaRays = 0x0;
            }
            if (0xff < gnAlphaRays) {
                gnAlphaRays = 0xff;
            }
        }
        if (param_1 < 0x169) {
            iVar7 = 0xf0;
        }
        else {
            iVar7 = 0x0;
            uVar8 = 0x0;
            if (param_1 < 0x258) {
                iVar7 = 0xf0 - (param_1 + -0x168);
                if (iVar7 < 0x0) {
                    iVar7 = 0x0;
                }
                else {
                    gnMagnitudeShake = 0x800;
                }
            }
            if (iVar7 == 0x0) {
                if (geHoldStory0 == 0x1) {
                    geHoldStory0 = 0x2;
                    gnTickAnchor = gnTickStory;
                    PlaySE(SFX_INIT_TABLE,0x10e);
                }
                uVar6 = (param_1 - gnTickAnchor) + 0x100;
                uVar8 = (uVar6 >> 0x2 & 0x3f) % 0x5;
                if (0x2 < uVar8) {
                    uVar8 = 0x4 - uVar8;
                }
                if ((uVar6 & 0x100) == 0x0) {
                    uVar8 = 0x0;
                }
            }
        }
        screenSetImagePosition(giScreenStory,0x6e,gnOffsetShakeX >> 0x1,gnOffsetShakeY >> 0x1);
        screenSetImagePosition(giScreenStory,0x82,gnOffsetShakeX,gnOffsetShakeY);
    }
    screenSetFrame(giScreenStory,0x12c,uVar8);
    screenSetImagePosition(giScreenStory,0x12c,0x0,iVar7);
    return;
}



void storyDrawGoddess(undefined4 *param_1)

{
    short sVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    int iVar4;
    short sVar5;
    uint uVar6;
    undefined1 *puVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    int iVar11;
    short sVar13;
    int iVar12;
    int iVar14;
    
    puVar2 = (undefined4 *)*param_1;
    *puVar2 = 0xe7000000;
    puVar2[0x1] = 0x0;
    puVar2[0x2] = 0xe3000f00;
    puVar2[0x3] = 0x0;
    puVar2[0x4] = 0xe3001001;
    puVar2[0x5] = 0x0;
    puVar2[0x6] = 0xe2001e01;
    puVar2[0x7] = 0x0;
    puVar2[0x8] = 0xe3000c00;
    puVar2[0x9] = 0x0;
    puVar2[0xa] = 0xe3000a01;
    puVar2[0xb] = 0x0;
    puVar2[0xc] = 0xe3001201;
    puVar2[0xd] = 0x2000;
    puVar2[0xe] = 0xe200001c;
    puVar2[0xf] = 0x504340;
    puVar2[0x10] = 0xd9ddf9fa;
    puVar2[0x11] = 0x0;
    puVar2[0x12] = 0xfc119623;
    puVar2[0x13] = 0xff2fffff;
    puVar3 = puVar2 + 0x14;
    uVar6 = (int)gnDataGlow & 0xff;
    if (uVar6 != 0x0) {
        *puVar3 = 0xfa000000;
        puVar2[0x15] = (int)gnDataGlow >> 0x8 & 0xffU | 0xffffff00;
        iVar4 = *(int *)(*(int *)(gpImageGlow + 0x2c) + ((gnTickStory >> 0x3) % 0x3) * 0x4);
        puVar2[0x16] = 0xfd700000;
        puVar2[0x17] = *(undefined4 *)(iVar4 + 0x8);
        puVar2[0x18] = 0xf5700000;
        puVar2[0x19] = 0x7054150;
        puVar2[0x1a] = 0xe6000000;
        puVar2[0x1b] = 0x0;
        puVar2[0x1c] = 0xf3000000;
        uVar10 = *(uint *)(iVar4 + 0xc);
        uVar8 = uVar10 * *(int *)(iVar4 + 0x10) - 0x1;
        if (0x7fe < (int)uVar8) {
            uVar8 = 0x7ff;
        }
        uVar9 = uVar10 << 0x1 | uVar10 >> 0x1f;
        iVar11 = ((int)uVar9 >> 0x3) + (uint)((int)uVar9 < 0x0 && (uVar10 << 0x1 & 0x6) != 0x0);
        if (iVar11 < 0x1) {
            iVar11 = 0x1;
        }
        puVar2[0x1d] = (iVar11 + 0x7ff) / iVar11 & 0xfffU | (uVar8 & 0xfff) << 0xc | 0x7000000;
        puVar2[0x1e] = 0xe7000000;
        puVar2[0x1f] = 0x0;
        puVar2[0x20] = (*(int *)(iVar4 + 0xc) * 0x2 + 0x7 >> 0x3 & 0x1ffU) << 0x9 | 0xf5700000;
        puVar2[0x21] = 0x54150;
        sVar13 = (short)(uVar6 + 0x64);
        puVar2[0x22] = 0xf2000000;
        uVar10 = (uint)(short)(sVar13 * 0x4);
        puVar2[0x23] = (*(int *)(iVar4 + 0xc) + -0x1) * 0x4000 & 0xffc000U |
                       (*(int *)(iVar4 + 0x10) + -0x1) * 0x4 & 0xffcU;
        uVar8 = (*(int *)(iVar4 + 0xc) << 0xa) / (int)(uVar6 << 0x1);
        if (sVar13 == 0x0) {
            uVar10 = 0x0;
        }
        sVar13 = (short)(uVar6 + 0xa0);
        iVar4 = (int)(short)(sVar13 * 0x4);
        if (sVar13 == 0x0) {
            iVar4 = 0x0;
        }
        iVar11 = (0x64 - uVar6) * 0x4;
        sVar13 = (short)iVar11;
        uVar9 = (uint)sVar13;
        puVar2[0x24] = iVar4 << 0xc | 0xe4000000U | uVar10;
        if (sVar13 < 0x1) {
            uVar9 = 0x0;
        }
        sVar1 = (short)(0xa0 - uVar6) * 0x4;
        uVar6 = (uint)sVar1;
        if (sVar1 < 0x1) {
            uVar6 = 0x0;
        }
        puVar2[0x25] = (uVar6 & 0xfff) << 0xc | uVar9 & 0xfff;
        puVar2[0x26] = 0xe1000000;
        sVar5 = (short)uVar8;
        if (iVar11 < 0x0) {
            if (sVar5 < 0x0) {
                iVar4 = (int)sVar5 * (int)sVar13 >> 0x7;
                if (iVar4 < 0x1) {
                    iVar4 = 0x0;
                }
            }
            else {
                iVar4 = (int)sVar5 * (int)sVar13 >> 0x7;
                if (-0x1 < iVar4) {
                    iVar4 = 0x0;
                }
            }
        }
        else {
            iVar4 = 0x0;
        }
        if (sVar1 < 0x0) {
            if (sVar5 < 0x0) {
                iVar11 = (int)sVar5 * (int)sVar1 >> 0x7;
                if (iVar11 < 0x1) {
                    iVar11 = 0x0;
                }
            }
            else {
                iVar11 = (int)sVar5 * (int)sVar1 >> 0x7;
                if (-0x1 < iVar11) {
                    iVar11 = 0x0;
                }
            }
        }
        else {
            iVar11 = 0x0;
        }
        puVar2[0x27] = iVar11 * -0x10000 | -iVar4 & 0xffffU;
        puVar2[0x28] = 0xf1000000;
        puVar2[0x29] = uVar8 & 0xffff | uVar8 << 0x10;
        puVar3 = puVar2 + 0x2a;
    }
    iVar4 = **(int **)(gpImageRing + 0x2c);
    *puVar3 = 0xfd700000;
    puVar3[0x1] = *(undefined4 *)(iVar4 + 0x8);
    puVar3[0x2] = 0xf5700000;
    puVar3[0x3] = 0x7054150;
    puVar3[0x4] = 0xe6000000;
    puVar3[0x5] = 0x0;
    puVar3[0x6] = 0xf3000000;
    uVar8 = *(uint *)(iVar4 + 0xc);
    uVar6 = uVar8 * *(int *)(iVar4 + 0x10) - 0x1;
    if (0x7fe < (int)uVar6) {
        uVar6 = 0x7ff;
    }
    uVar10 = uVar8 << 0x1 | uVar8 >> 0x1f;
    iVar11 = ((int)uVar10 >> 0x3) + (uint)((int)uVar10 < 0x0 && (uVar8 << 0x1 & 0x6) != 0x0);
    if (iVar11 < 0x1) {
        iVar11 = 0x1;
    }
    puVar3[0x7] = (iVar11 + 0x7ff) / iVar11 & 0xfffU | (uVar6 & 0xfff) << 0xc | 0x7000000;
    puVar3[0x8] = 0xe7000000;
    puVar3[0x9] = 0x0;
    puVar3[0xa] = (*(int *)(iVar4 + 0xc) * 0x2 + 0x7 >> 0x3 & 0x1ffU) << 0x9 | 0xf5700000;
    puVar3[0xb] = 0x54150;
    puVar7 = ganDataRing;
    iVar11 = 0x4;
    puVar3[0xc] = 0xf2000000;
    puVar3[0xd] = (*(int *)(iVar4 + 0xc) + -0x1) * 0x4000 & 0xffc000U |
                  (*(int *)(iVar4 + 0x10) + -0x1) * 0x4 & 0xffcU;
    puVar3 = puVar3 + 0xe;
    do {
        uVar6 = *(uint *)puVar7 & 0xff;
        if (uVar6 != 0x0) {
            *puVar3 = 0xfa000000;
            sVar13 = (short)(uVar6 + 0x64);
            uVar10 = (uint)(short)(sVar13 * 0x4);
            puVar3[0x1] = *(uint *)puVar7 & 0xffffff00 | 0xc0;
            uVar8 = (*(int *)(iVar4 + 0xc) << 0xa) / (int)(uVar6 << 0x1);
            if (sVar13 == 0x0) {
                uVar10 = 0x0;
            }
            sVar13 = (short)(uVar6 + 0xa0);
            iVar14 = (int)(short)(sVar13 * 0x4);
            if (sVar13 == 0x0) {
                iVar14 = 0x0;
            }
            iVar12 = (0x64 - uVar6) * 0x4;
            sVar13 = (short)iVar12;
            uVar9 = (uint)sVar13;
            puVar3[0x2] = iVar14 << 0xc | 0xe4000000U | uVar10;
            if (sVar13 < 0x1) {
                uVar9 = 0x0;
            }
            sVar1 = (short)(0xa0 - uVar6) * 0x4;
            uVar6 = (uint)sVar1;
            if (sVar1 < 0x1) {
                uVar6 = 0x0;
            }
            puVar3[0x3] = (uVar6 & 0xfff) << 0xc | uVar9 & 0xfff;
            puVar3[0x4] = 0xe1000000;
            sVar5 = (short)uVar8;
            if (iVar12 < 0x0) {
                if (sVar5 < 0x0) {
                    iVar14 = (int)sVar5 * (int)sVar13 >> 0x7;
                    if (iVar14 < 0x1) {
                        iVar14 = 0x0;
                    }
                }
                else {
                    iVar14 = (int)sVar5 * (int)sVar13 >> 0x7;
                    if (-0x1 < iVar14) {
                        iVar14 = 0x0;
                    }
                }
            }
            else {
                iVar14 = 0x0;
            }
            if (sVar1 < 0x0) {
                if (sVar5 < 0x0) {
                    iVar12 = (int)sVar5 * (int)sVar1 >> 0x7;
                    if (iVar12 < 0x1) {
                        iVar12 = 0x0;
                    }
                }
                else {
                    iVar12 = (int)sVar5 * (int)sVar1 >> 0x7;
                    if (-0x1 < iVar12) {
                        iVar12 = 0x0;
                    }
                }
            }
            else {
                iVar12 = 0x0;
            }
            puVar3[0x5] = iVar12 * -0x10000 | -iVar14 & 0xffffU;
            puVar3[0x6] = 0xf1000000;
            puVar3[0x7] = uVar8 & 0xffff | uVar8 << 0x10;
            puVar3 = puVar3 + 0x8;
        }
        puVar7 = (undefined1 *)((int)puVar7 + 0x4);
        iVar11 += -0x1;
    } while (iVar11 != 0x0);
    *param_1 = puVar3;
    return;
}



void storyTickKeysRings(uint param_1,int param_2)

{
    uint uVar1;
    uint extraout_r4;
    uint uVar2;
    
    if (param_2 == 0x0) {
        ganDataRing._0_4_ = 0x0;
        ganDataRing._4_4_ = 0x0;
        ganDataRing._8_4_ = 0x0;
        ganDataRing._12_4_ = 0x0;
    }
    else {
        if (false) {
            uVar1 = 0xffffc000;
        }
        else {
            uVar1 = 0xffffff00;
        }
        uVar2 = ganDataRing._0_4_ & 0xff;
        if (uVar2 != 0x0) {
            uVar2 += (int)uVar2 >> 0x3;
            if (0xff < uVar2) {
                uVar2 = 0x0;
            }
            ganDataRing._0_4_ = uVar1 | uVar2;
        }
        uVar1 = ganDataRing._4_4_ & 0xff;
        if (uVar1 != 0x0) {
            uVar1 += (int)uVar1 >> 0x3;
            if (0xff < uVar1) {
                uVar1 = 0x0;
            }
            ganDataRing._4_4_ = uVar1 | 0xffffc000;
        }
        uVar1 = ganDataRing._8_4_ & 0xff;
        if (uVar1 != 0x0) {
            uVar1 += (int)uVar1 >> 0x3;
            if (0xff < uVar1) {
                uVar1 = 0x0;
            }
            ganDataRing._8_4_ = uVar1 | 0xffffc000;
        }
        uVar1 = ganDataRing._12_4_ & 0xff;
        if (uVar1 != 0x0) {
            uVar1 += (int)uVar1 >> 0x3;
            if (0xff < uVar1) {
                uVar1 = 0x0;
            }
            ganDataRing._12_4_ = uVar1 | 0xffffc000;
        }
        if (((param_1 & 0x1f) == 0x0) && (pon_osGetTime(), (extraout_r4 & 0x1) != 0x0)) {
            if (false) {
                uVar1 = 0xffffc000;
            }
            else {
                uVar1 = 0xffffff00;
            }
            if ((ganDataRing._0_4_ & 0xff) == 0x0) {
                ganDataRing._0_4_ = uVar1 | 0x10;
            }
            else if ((ganDataRing._4_4_ & 0xff) == 0x0) {
                ganDataRing._4_4_ = 0xffffc010;
            }
            else if ((ganDataRing._8_4_ & 0xff) == 0x0) {
                ganDataRing._8_4_ = 0xffffc010;
            }
            else if ((ganDataRing._12_4_ & 0xff) == 0x0) {
                ganDataRing._12_4_ = 0xffffc010;
            }
        }
    }
    return;
}



void storyTickKeysGoddess(uint param_1)

{
    int iVar1;
    int iVar2;
    ushort uVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    double dVar7;
    int local_44;
    longlong local_40;
    longlong local_38;
    longlong local_30;
    undefined4 local_28;
    uint uStack_24;
    
    uVar6 = 0x0;
    uVar3 = 0x0;
    storyTickPath2(gpPathGirl);
    gnDataGlow = 0x0;
    if (geXtra == 0x1) {
        if ((geHoldStory1 != 0x2) &&
           (*(int *)(*(int *)(gpPathGirl + 0x2c) + 0x4) <= *(int *)(gpPathGirl + 0x10))) {
            *(undefined4 *)(gpPathGirl + 0x10) = 0x0;
        }
        screenSetImagePosition(giScreenStory,0x6e,0x0,0xfffffff8);
        screenSetImagePosition(giScreenStory,0x6f,0x0,0xbe);
        screenSetImagePosition(giScreenStory,0x70,0x50,0x20);
        screenSetImagePosition(giScreenStory,0x64,0x4c,0x0);
        iVar1 = screenGetImage(giScreenStory,0x64,&local_44);
        if (iVar1 != 0x0) {
            *(uint *)(local_44 + 0xc) = *(uint *)(local_44 + 0xc) & 0xffffffef;
            *(undefined4 *)(local_44 + 0x14) = 0xff;
        }
        iVar1 = 0xff;
        if (geHoldStory0 == 0x1) {
            geHoldStory0 = 0x2;
            gnTickAnchor = gnTickStory;
            PlaySE(SFX_INIT_TABLE,0x13e);
        }
        if (geHoldStory0 == 0x2) {
            iVar5 = param_1 - gnTickAnchor;
            iVar1 = 0xff - iVar5;
            if (iVar1 < 0x0) {
                iVar1 = 0x0;
                if (geHoldStory1 == 0x1) {
                    geHoldStory1 = 0x2;
                }
                else if (geHoldStory2 != 0x0) {
                    iVar2 = storyTickPath2(gpPathBaby);
                    if (iVar2 != 0x0) {
                        geHoldStory2 = 0x2;
                    }
                    if (geHoldStory4 == 0x1) {
                        giLevelStory += 0x1;
                        geModeNext = 0x4;
                        geXtraNext = 0x2;
                        gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
                    }
                }
            }
            *(int *)(local_44 + 0x14) = iVar1;
            if (iVar1 != 0x0) {
                imageMakeScanWave(local_44,iVar5 >> 0x3,iVar5 * 0x100 & 0xff00,0x0);
            }
        }
        iVar5 = 0x80 - (0xfe - iVar1);
        if (iVar5 < 0x0) {
            iVar5 = 0x0;
        }
        iVar1 += -0x40;
        if (iVar1 < 0x0) {
            iVar1 = 0x0;
        }
        gnDataGlow = (short)(iVar1 << 0x8) + (short)iVar5;
    }
    else {
        if ((geHoldStory1 == 0x1) && (gnColorBackAlpha += 0x4, 0xfe < gnColorBackAlpha)) {
            geHoldStory1 = 0x2;
            geModeNext = 0x8;
            geXtraNext = 0x0;
            gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        }
        if (geModeEnemy < 0x3) {
            if (*(int *)(*(int *)(gpPathGirl + 0x2c) + 0x8) <= *(int *)(gpPathGirl + 0x10)) {
                *(undefined4 *)(gpPathGirl + 0x10) =
                     *(undefined4 *)(*(int *)(gpPathGirl + 0x2c) + 0x4);
            }
        }
        else if (*(int *)(gpPathGirl + 0x10) == *(int *)(gpPathGirl + 0x24) + -0x1) {
            *(undefined4 *)(gpPathGirl + 0x10) = *(undefined4 *)(*(int *)(gpPathGirl + 0x2c) + 0xc);
        }
        if ((*(int *)(gpPathGirl + 0x10) < 0xa0) &&
           (iVar5 = param_1 + 0x14, iVar1 = iVar5 / 0x28 + (iVar5 >> 0x1f),
           iVar5 == (iVar1 - (iVar1 >> 0x1f)) * 0x28)) {
            PlaySE(SFX_INIT_TABLE,0x1d);
        }
        if (0x1 < geModeEnemy) {
            storyTickBeam(gpBeamGoddess);
        }
        iVar1 = 0x0;
        if (true) {
            switch(geModeEnemy) {
            case 0x1:
                uVar3 = 0x0;
                uVar6 = 0x0;
                screenHideImage(giScreenStory,0xc8);
                screenSetImagePosition(giScreenStory,0x64,0x4c,0xffffff4c);
                storyTickKeysRings(param_1,0x0);
                uStack_24 = param_1;
                if (0xf0 < (int)param_1) {
                    uStack_24 = 0xf0;
                }
                uStack_24 ^= 0x80000000;
                local_28 = 0x43300000;
                dVar7 = (double)((float)((double)CONCAT44(0x43300000,uStack_24) - 4503601774854144.0
                                        ) / 240.0);
                local_30 = (longlong)(int)(dVar7 * 56.0);
                screenSetImagePosition(giScreenStory,0x6e,0x0,(int)(dVar7 * 56.0) + -0x40);
                local_38 = (longlong)(int)(dVar7 * 46.0);
                screenSetImagePosition(giScreenStory,0x6f,0x0,(int)(dVar7 * 46.0) + 0x90);
                local_40 = (longlong)(int)(dVar7 * 32.0);
                screenSetImagePosition(giScreenStory,0x70,0x50,(int)(dVar7 * 32.0) + -0x8);
                if ((0xf0 < (int)param_1) && (0xf4 < *(int *)(gpPathGirl + 0x10))) {
                    iVar1 = 0x2;
                    storyPlaySong(0x2a,0xffffffff);
                }
                break;
            case 0x2:
                uVar6 = param_1;
                if (0xbf < (int)param_1) {
                    uVar6 = 0xc0;
                }
                uVar3 = (ushort)((int)param_1 >> 0x3);
                if (((int)param_1 >> 0x3 & 0x10U) == 0x0) {
                    uVar3 &= 0xf;
                }
                else {
                    uVar3 = 0xf - (uVar3 & 0xf);
                }
                uVar3 += 0x20;
                storyTickKeysRings(param_1,0xffffffff);
                if (param_1 == 0x1a4) {
                    PlaySE(SFX_INIT_TABLE,0x13b);
                }
                if (0x1e0 < (int)param_1) {
                    geHoldStory0 = 0x2;
                    iVar1 = 0x3;
                }
                break;
            case 0x3:
                uVar3 = (short)param_1 * 0x10 + 0x20;
                uVar6 = param_1 * 0x8 + 0xbf;
                storyTickKeysRings(param_1,0xffffffff);
                if (param_1 == 0x8) {
                    iVar1 = 0x4;
                }
                break;
            case 0x4:
                uVar6 = 0xff;
                gnColorBackAlpha = 0xff;
                uVar3 = 0x100;
                screenShowImage(giScreenStory,0xc8);
                storyTickKeysRings(param_1,0x0);
                if (param_1 == 0x1e) {
                    iVar1 = 0x5;
                }
                break;
            case 0x5:
                screenSetImagePosition(giScreenStory,0x64,0x4c,0x0);
                iVar5 = screenGetImage(giScreenStory,0x64,&local_44);
                if ((iVar5 != 0x0) && (*(uint *)(local_44 + 0x14) = param_1, 0xfe < (int)param_1)) {
                    *(undefined4 *)(local_44 + 0x14) = 0xfe;
                }
                gnColorBackAlpha = 0xff - param_1;
                uVar3 = 0x80;
                uVar6 = 0x80;
                if (gnColorBackAlpha < 0x0) {
                    gnColorBackAlpha = 0x0;
                }
                if (param_1 == 0x100) {
                    iVar1 = 0x6;
                }
                break;
            case 0x6:
                uVar4 = (int)param_1 >> 0x1;
                if ((param_1 & 0x10) == 0x0) {
                    uVar6 = param_1 & 0xf;
                }
                else {
                    uVar6 = 0xf - (param_1 & 0xf);
                }
                uVar6 += 0x80;
                if ((uVar4 & 0x40) == 0x0) {
                    uVar3 = (ushort)uVar4 & 0x3f;
                }
                else {
                    uVar3 = 0x3f - ((ushort)uVar4 & 0x3f);
                }
                uVar3 += 0x80;
                iVar5 = screenGetImage(giScreenStory,0x64,&local_44);
                if (iVar5 != 0x0) {
                    imageMakeScanWave(local_44,0x1,(uVar4 & 0xff) << 0x8,0x0);
                }
            }
        }
        gnDataGlow = (ushort)(uVar6 << 0x8) | uVar3;
        if (iVar1 != 0x0) {
            gnTickStory = 0x0;
            geModeEnemy = iVar1;
        }
    }
    return;
}



void storyTickKeysWhale(uint param_1)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    uint extraout_r4;
    uint extraout_r4_00;
    uint extraout_r4_01;
    int local_24;
    int local_20;
    int local_1c;
    
    if ((geHoldStory0 != 0x0) && (0x0 < gnAlphaWhale)) {
        if (geHoldStory0 != 0x2) {
            geHoldStory0 = 0x2;
            PlaySE(SFX_INIT_TABLE,0x10c);
        }
        gnColorBackAlpha = 0x0;
        screenShowImage(giScreenStory,0x196);
        *(undefined4 *)(gapImageBack._0_4_ + 0x14) = 0xff;
        *(undefined4 *)(gapImageBack._4_4_ + 0x14) = 0xff;
        *(undefined4 *)(gapImageBack._8_4_ + 0x14) = 0xff;
        screenHideImage(giScreenStory,0x64);
        screenHideImage(giScreenStory,0x78);
        screenHideImage(giScreenStory,0x1b8);
        screenHideImage(giScreenStory,0x1f4);
        screenHideImage(giScreenStory,0x1f5);
        screenHideImage(giScreenStory,0x1f6);
        gnAlphaWhale += -0x4;
        if (gnAlphaWhale < 0x1) {
            gnAlphaWhale = 0x0;
        }
        iVar1 = screenGetImage(giScreenStory,0x69,&local_24);
        if (iVar1 != 0x0) {
            *(int *)(local_24 + 0x14) = gnAlphaWhale;
        }
        iVar1 = screenGetImage(giScreenStory,0x6e,&local_24);
        if (iVar1 != 0x0) {
            *(int *)(local_24 + 0x14) = gnAlphaWhale;
        }
        iVar1 = screenGetImage(giScreenStory,0x82,&local_24);
        if (iVar1 != 0x0) {
            *(int *)(local_24 + 0x14) = gnAlphaWhale;
        }
        iVar1 = 0x0;
        do {
            iVar2 = screenGetImage(giScreenStory,iVar1 + 0x12c,&local_24);
            if (iVar2 != 0x0) {
                *(int *)(local_24 + 0x14) = gnAlphaWhale;
            }
            iVar1 += 0x1;
        } while (iVar1 < 0x2);
        iVar1 = 0x0;
        do {
            iVar2 = screenGetImage(giScreenStory,iVar1 + 0x136,&local_24);
            if (iVar2 != 0x0) {
                *(int *)(local_24 + 0x14) = gnAlphaWhale;
            }
            iVar1 += 0x1;
        } while (iVar1 < 0x8);
    }
    if (geHoldStory1 == 0x1) {
        if ((param_1 & 0x3) == 0x0) {
            gnDeltaWhale += 0x1;
        }
        screenShowImage(giScreenStory,0xc8);
        gnColorBackAlpha += 0x2;
        if (0xfe < gnColorBackAlpha) {
            geHoldStory1 = 0x2;
            gnColorBackAlpha = 0xff;
        }
    }
    iVar1 = 0x0;
    iVar2 = 0x0;
    do {
        uVar3 = *(uint *)(ganWaitRockSmall + iVar2);
        if ((int)uVar3 >> 0x10 < (int)(uVar3 & 0xffff)) {
            *(uint *)(ganWaitRockSmall + iVar2) = uVar3 + 0x10000;
        }
        else {
            screenGetImagePosition(giScreenStory,iVar1 + 0x136,&local_1c,&local_20);
            if ((((local_1c < 0x2b) || (0x67 < local_1c)) || (local_20 < 0x75)) && (local_20 < 0xf1)
               ) {
                local_20 += 0x4;
                if (0x0 < local_20) {
                    local_20 += local_20 >> 0x6;
                }
            }
            else {
                local_20 = -0x28;
                pon_osGetTime();
                *(uint *)(ganWaitRockSmall + iVar2) = extraout_r4 & 0x1ff;
            }
            screenSetImagePosition(giScreenStory,iVar1 + 0x136,local_1c,local_20);
        }
        iVar1 += 0x1;
        iVar2 += 0x4;
    } while (iVar1 < 0x8);
    iVar1 = 0x0;
    iVar2 = 0x0;
    do {
        uVar3 = *(uint *)(ganWaitRockLarge + iVar2);
        if ((int)uVar3 >> 0x10 < (int)(uVar3 & 0xffff)) {
            *(uint *)(ganWaitRockLarge + iVar2) = uVar3 + 0x10000;
        }
        else {
            screenGetImagePosition(giScreenStory,iVar1 + 0x12c,&local_1c,&local_20);
            if (local_20 < 0xf1) {
                local_20 += 0xc;
                if (0x0 < local_20) {
                    local_20 += local_20 >> 0x6;
                }
            }
            else {
                local_20 = -0xc8;
                pon_osGetTime();
                *(uint *)(ganWaitRockLarge + iVar2) = extraout_r4_00 & 0x1ff;
            }
            screenSetImagePosition(giScreenStory,iVar1 + 0x12c,local_1c,local_20);
        }
        iVar1 += 0x1;
        iVar2 += 0x4;
    } while (iVar1 < 0x2);
    if (geHoldStory0 == 0x0) {
        if (gnTickFlash < 0x1) {
            screenHideImage(giScreenStory,0xc8);
            pon_osGetTime();
            if ((extraout_r4_01 & 0x3f) == 0x3f) {
                gnTickFlash = 0x2;
            }
        }
        else {
            gnTickFlash += -0x1;
            screenShowImage(giScreenStory,0xc8);
        }
    }
    if ((geHoldStory1 == 0x0) && ((param_1 & 0x1f) == 0x0)) {
        gnMagnitudeShake = 0x800;
    }
    *(undefined4 *)(gapPathNote._0_4_ + 0x10) = 0x0;
    *(undefined4 *)(gapPathNote._0_4_ + 0x14) = 0xffffffe0;
    *(undefined4 *)(gapPathNote._4_4_ + 0x10) = 0x0;
    *(undefined4 *)(gapPathNote._4_4_ + 0x14) = 0xffffffe0;
    *(undefined4 *)(gapPathNote._8_4_ + 0x10) = 0x0;
    *(undefined4 *)(gapPathNote._8_4_ + 0x14) = 0xffffffe0;
    screenSetImagePosition(giScreenStory,0x6e,gnOffsetShakeX >> 0x2,gnOffsetShakeY >> 0x2);
    screenSetImagePosition(giScreenStory,0x82,gnOffsetShakeX + -0x8,gnOffsetShakeY + 0x8);
    return;
}



void storyTickKeys(uint param_1,int param_2)

{
    int iVar1;
    short sVar2;
    uint extraout_r4;
    uint uVar3;
    int local_18 [0x3];
    
    storyTickScript();
    if ((gnCode & 0xff) == 0xf) {
        iVar1 = -0x1;
    }
    else {
        iVar1 = 0x0;
    }
    if (iVar1 == 0x0) {
        param_2 = 0x0;
    }
    else if (giLevelStory == 0x4) {
        param_2 = -0x1;
    }
    if (((param_2 != 0x0) || ((gTheGame._90948_2_ & 0x1000) != 0x0)) && (geModeNext == 0x0)) {
        PlaySE(SFX_INIT_TABLE,0x2);
        if (geXtra == 0x1) {
            gTheGame._120364_4_ += 0x1;
        }
        if ((((gTheGame._90948_2_ & 0x1000) == 0x0) || (giLevelStory == 0x4)) ||
           ((giLevelStory == 0x3 && (geXtra == 0x1)))) {
            FadeOutAllSFXs(0x1e);
            FadeOutAllSongs(0x1e);
            gReset = 0xffffffff;
            gMain = 0x384;
            gTheGame._120332_4_ = 0x1;
        }
        else {
            geModeNext = 0x8;
            geXtraNext = 0x0;
            gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        }
    }
    grAngleRay = grAngleRay + 0.25;
    if (360.0 <= grAngleRay) {
        grAngleRay = grAngleRay - 360.0;
    }
    if (gnMagnitudeShake < 0x67) {
        gnOffsetShakeY = 0x0;
        gnOffsetShakeX = 0x0;
    }
    else {
        pon_osGetTime();
        sVar2 = sins(extraout_r4 & 0xffff);
        gnOffsetShakeX = gnMagnitudeShake * sVar2 >> 0x1a;
        sVar2 = coss(extraout_r4 & 0xffff);
        gnOffsetShakeY = gnMagnitudeShake * sVar2 >> 0x19;
        iVar1 = gnMagnitudeShake >> 0x3;
        if (iVar1 == 0x0) {
            iVar1 = 0x10;
        }
        gnMagnitudeShake -= iVar1;
        if (gnMagnitudeShake < 0x66) {
            gnMagnitudeShake = 0x0;
            gnOffsetShakeY = 0x0;
            gnOffsetShakeX = 0x0;
        }
    }
    if (gpPathBat1 != 0x0) {
        storyTickPath2();
        storyTickPath2(gpPathBat2);
        storyTickPath2(gpPathBat3);
        storyTickPath2(gpPathBat4);
        storyTickPath2(gpPathBat5);
    }
    if (geModeNext == 0x0) {
        if (giLevelStory == 0x2) {
            storyTickKeysSanatos(param_1);
            storyTickKeysNotes(gapPathNote,param_1);
        }
        else if (giLevelStory < 0x2) {
            if (giLevelStory == 0x0) {
                storyTickKeysDragon(param_1);
                storyTickKeysNotes(gapPathNote,param_1);
            }
            else if (-0x1 < giLevelStory) {
                storyTickKeysJoker(param_1);
            }
        }
        else if (giLevelStory == 0x4) {
            storyTickKeysWhale(param_1);
            storyTickKeysNotes(gapPathNote,param_1);
        }
        else if (giLevelStory < 0x4) {
            storyTickKeysGoddess(param_1);
        }
    }
    if (((giLevelStory == 0x0) || (giLevelStory == 0x2)) || (giLevelStory == 0x4)) {
        if (((param_1 & 0x3) == 0x0) &&
           (iVar1 = screenGetImage(giScreenStory,0x78,local_18), iVar1 != 0x0)) {
            uVar3 = *(ushort *)(local_18[0] + 0x90) + 0x13f;
            *(short *)(local_18[0] + 0x90) = (short)uVar3 + (short)(uVar3 / 0x140) * -0x140;
        }
        grAngleSky = grAngleSky - 0.6;
        if (grAngleSky < 0.0) {
            grAngleSky = grAngleSky + 360.0;
        }
    }
    return;
}



void storySetupKeys(void)

{
    uint uVar1;
    uint extraout_r4;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    undefined4 uVar7;
    int iVar8;
    undefined1 *puVar9;
    int iVar10;
    double dVar11;
    double dVar12;
    float fVar13;
    undefined4 local_3c;
    uint *local_38 [0x2];
    
    gpImageRing = 0x0;
    gpImageGlow = 0x0;
    if (giLevelStory < 0x0) {
        giLevelStory = 0x0;
    }
    if (0x4 < giLevelStory) {
        giLevelStory = 0x4;
    }
    gnColorBackBlue = 0xff;
    gnColorBackGreen = 0xff;
    gnColorBackRed = 0xff;
    gnColorBackAlpha = 0x0;
    pon_ClearHeap();
    local_38[0] = Pon_Image_Heap;
    gnHeightSky = 0x18;
    iVar8 = 0x0;
    grPercentZoom = 0x0;
    grAngleSky = 0x0;
    modelLoad(&gpModelSky,_3795,local_38);
    gpPathBat1 = 0x0;
    uVar7 = 0xff001;
    gpPathBat2 = 0x0;
    gpPathBat3 = 0x0;
    gpPathBat4 = 0x0;
    gpPathBat5 = 0x0;
    if (giLevelStory == 0x2) {
        gTheGame._120364_4_ = 0xc;
        iVar8 = -0x1;
        storyMakeRays(local_38);
        if (geXtra == 0x2) {
            gnAlphaRays = 0x0;
            storySetupScript(ganCommandDevilMeet,0x0);
            gpPathNote = 0x0;
            storyLoadPath2(&gpPathGirl,_3817,local_38,0x0);
            storyLoadPath2(&gpPathBat1,_3809,local_38,0x1);
            storyLoadPath2(&gpPathBat2,_3810,local_38,0x1);
            storyLoadPath2(&gpPathBat3,_3811,local_38,0x1);
            storyLoadPath2(&gpPathBat4,_3812,local_38,0x1);
            storyLoadPath2(&gpPathBat5,_3813,local_38,0x1);
            storyPlaySong(0x29,0xffffffff);
        }
        else {
            gnAlphaRays = 0xff;
            gnCountZoom = 0x0;
            storyLoadPath2(&gapPathBits,_3818,local_38,0x3);
            storyLoadPath2(0x2a0d0c,_3819,local_38,0x3);
            storySetupScript(ganCommandDevilBeat,0x0);
            storyLoadPath2(&gpPathGirl,_3820,local_38,0x0);
            storyLoadPath2(&gpPathNote,_3821,local_38,0x0);
            storyLoadPath2(&gpPathBat1,_3809,local_38,0x1);
            storyLoadPath2(&gpPathBat2,_3810,local_38,0x1);
            storyLoadPath2(&gpPathBat3,_3811,local_38,0x1);
            storyLoadPath2(&gpPathBat4,_3812,local_38,0x1);
            storyLoadPath2(&gpPathBat5,_3813,local_38,0x1);
            storyLoadPath2(&gpPathBat1X,_3822,local_38,0x0);
            storyLoadPath2(&gpPathBat2X,_3823,local_38,0x0);
            storyLoadPath2(&gpPathBat3X,_3824,local_38,0x0);
            storyLoadPath2(&gpPathBat4X,_3825,local_38,0x0);
            storyLoadPath2(&gpPathBat5X,_3826,local_38,0x0);
            storyPlaySong(0x27,0xffffffff);
        }
    }
    else if (giLevelStory < 0x2) {
        if (giLevelStory == 0x0) {
            gTheGame._120364_4_ = 0xa;
            iVar8 = -0x1;
            if (geXtra == 0x2) {
                gnHeightSky = 0x10;
                uVar7 = 0x88001;
                storyLoadPath2(&gapPathBits,_3796,local_38,0x3);
                imageLoad(&gpImageBubble,_2049,local_38);
                storySetupScript(ganCommandDragonMeet,0x0);
                storyLoadPath2(&gpPathGirl,_3797,local_38,0x1);
                storyLoadPath2(&gpPathBaby,_3798,local_38,0x1);
                storyLoadPath2(&gpPathBat1,_3799,local_38,0x1);
                storyLoadPath2(&gpPathBat2,_3800,local_38,0x1);
                storyLoadPath2(&gpPathBat3,_3801,local_38,0x1);
                storyLoadPath2(&gpPathBat4,_3802,local_38,0x1);
                storyLoadPath2(&gpPathBat5,_3803,local_38,0x1);
                storyLoadPath2(&gpPathMother,_3804,local_38,0x1);
                storyLoadPath2(&gpPathFlower,_3805,local_38,0x0);
                storySetPathWrap2(gpPathGirl,0x1,0x2);
                storySetPathWrap2(gpPathBaby,0x1,0x2);
                storySetPathWrap2(gpPathMother,0x1,0x2);
            }
            else {
                storySetupScript(ganCommandDragonBeat,0x0);
                gpPathFlower = 0x0;
                storyLoadPath2(&gpPathGirl,_3806,local_38,0x1);
                storyLoadPath2(&gpPathBaby,_3807,local_38,0x1);
                storyLoadPath2(&gpPathNote,_3808,local_38,0x0);
                storyLoadPath2(&gpPathBat1,_3799,local_38,0x1);
                storyLoadPath2(&gpPathBat2,_3800,local_38,0x1);
                storyLoadPath2(&gpPathBat3,_3801,local_38,0x1);
                storyLoadPath2(&gpPathBat4,_3802,local_38,0x1);
                storyLoadPath2(&gpPathBat5,_3803,local_38,0x1);
                storyLoadPath2(&gpPathBat1X,_3809,local_38,0x1);
                storyLoadPath2(&gpPathBat2X,_3810,local_38,0x1);
                storyLoadPath2(&gpPathBat3X,_3811,local_38,0x1);
                storyLoadPath2(&gpPathBat4X,_3812,local_38,0x1);
                storyLoadPath2(&gpPathBat5X,_3813,local_38,0x1);
                storyLoadPath2(&gpPathMother,_3814,local_38,0x1);
                storySetPathWrap2(gpPathGirl,0x0,0x1);
                *gpPathGirl = 0xa;
                storyPlaySong(0x27,0xffffffff);
            }
            iVar10 = storyGetPathImage2(gpPathBaby,0x0,0x0,&local_3c,0x0);
            if (iVar10 != 0x0) {
                imageMakeScan(local_3c,local_38);
            }
            iVar10 = storyGetPathImage2(gpPathMother,0x0,0x0,&local_3c,0x0);
            if (iVar10 != 0x0) {
                imageMakeScan(local_3c,local_38);
            }
        }
        else if (-0x1 < giLevelStory) {
            gTheGame._120364_4_ = 0xb;
            if (geXtra == 0x2) {
                storySetupScript(ganCommandJokerMeet,0x0);
                storyLoadPath2(&gpPathGirl,_3815,local_38,0x1);
                storySetPathWrap2(gpPathGirl,0x1,0x2);
                storyPlaySong(0x2b,0xffffffff);
            }
            else {
                storySetupScript(ganCommandJokerBeat,0x0);
                storyLoadPath2(&gpPathGirl,_3816,local_38,0x1);
                storySetPathWrap2(gpPathGirl,0x0,0x1);
                storyPlaySong(0x27,0xffffffff);
            }
        }
    }
    else if (giLevelStory == 0x4) {
        gTheGame._120364_4_ = 0xe;
        iVar8 = -0x1;
        storySetupScript(ganCommandWhaleMeet,0x0);
        storyPlaySong(0x29,0xffffffff);
        gnDeltaWhale = 0x0;
        gnAlphaWhale = 0xff;
        Pon_Image_Heap = local_38[0];
        Pon_DVDRead_bg2d_2(0xf,0x3);
        local_38[0] = Pon_Image_Heap;
        imageLoadROM(gapImageBack,gc_bg2dwhale2,0x0,0x54,0x140,0xe8,local_38);
        imageCopy(0x2a0d4c,gapImageBack._0_4_,local_38);
        imageCopy(0x2a0d50,gapImageBack._0_4_,local_38);
        *(undefined4 *)(gapImageBack._0_4_ + 0x14) = 0x0;
        *(undefined4 *)(gapImageBack._4_4_ + 0x14) = 0x0;
        *(undefined4 *)(gapImageBack._8_4_ + 0x14) = 0x0;
        ganWaitRockLarge = (uint *)((int)local_38[0] + 0x3U & 0xfffffffc);
        ganWaitRockSmall = ganWaitRockLarge + 0x2;
        local_38[0] = ganWaitRockLarge + 0xa;
        pon_osGetTime();
        iVar10 = (extraout_r4 ^ 0xa6b99cd) * 0x4;
        uVar6 = (iVar10 + 0x2) * (iVar10 + 0x3) >> 0x2;
        iVar10 = uVar6 * 0x4;
        uVar5 = (iVar10 + 0x2) * (iVar10 + 0x3) >> 0x2;
        iVar10 = uVar5 * 0x4;
        uVar1 = (iVar10 + 0x2) * (iVar10 + 0x3) >> 0x2;
        iVar10 = uVar1 * 0x4;
        uVar4 = (iVar10 + 0x2) * (iVar10 + 0x3) >> 0x2;
        iVar10 = uVar4 * 0x4;
        uVar3 = (iVar10 + 0x2) * (iVar10 + 0x3) >> 0x2;
        iVar10 = uVar3 * 0x4;
        uVar2 = (iVar10 + 0x2) * (iVar10 + 0x3) >> 0x2;
        iVar10 = uVar2 * 0x4;
        *ganWaitRockLarge = uVar6 & 0x1ff;
        ganWaitRockLarge[0x1] = uVar5 & 0x1ff;
        uVar5 = (iVar10 + 0x2) * (iVar10 + 0x3) >> 0x2;
        iVar10 = uVar5 * 0x4;
        *ganWaitRockSmall = uVar1 & 0x1ff;
        ganWaitRockSmall[0x1] = uVar4 & 0x1ff;
        uVar1 = (iVar10 + 0x2) * (iVar10 + 0x3) >> 0x2;
        iVar10 = uVar1 * 0x4;
        ganWaitRockSmall[0x2] = uVar3 & 0x1ff;
        ganWaitRockSmall[0x3] = uVar2 & 0x1ff;
        uVar2 = (iVar10 + 0x2) * (iVar10 + 0x3) >> 0x2;
        iVar10 = uVar2 * 0x4;
        ganWaitRockSmall[0x4] = uVar5 & 0x1ff;
        ganWaitRockSmall[0x5] = uVar1 & 0x1ff;
        ganWaitRockSmall[0x6] = uVar2 & 0x1ff;
        ganWaitRockSmall[0x7] = (iVar10 + 0x2) * (iVar10 + 0x3) >> 0x2 & 0x1ff;
        gnColorBackAlpha = 0xff;
        gnColorBackBlue = 0xff;
        gnColorBackGreen = 0xff;
        gnColorBackRed = 0xff;
        gnTickFlash = 0x0;
    }
    else if (giLevelStory < 0x4) {
        gTheGame._120364_4_ = 0xd;
        gnColorBackAlpha = 0xff;
        gnColorBackBlue = 0xff;
        gnColorBackGreen = 0xff;
        gnColorBackRed = 0xff;
        geModeEnemy = 0x1;
        storyMakeBeam(&gpBeamGoddess,0x80,0x0,0xfffffff2,local_38);
        imageLoad(&gpImageRing,_3827,local_38);
        imageLoad(&gpImageGlow,_3828,local_38);
        if (geXtra == 0x2) {
            storySetupScript(ganCommandGoddessMeet,0x0);
            storyLoadPath2(&gpPathGirl,_3829,local_38,0x0);
            gpPathBaby = 0x0;
            FadeOutAllSongs(0x3c);
        }
        else {
            storySetupScript(ganCommandGoddessBeat,0x0);
            storyLoadPath2(&gpPathGirl,_3830,local_38,0x0);
            storyLoadPath2(&gpPathBaby,_3831,local_38,0x0);
            storyPlaySong(0x2a,0xffffffff);
        }
    }
    if (iVar8 != 0x0) {
        iVar8 = 0x0;
        iVar10 = 0x0;
        puVar9 = gapPathNote;
        do {
            acNameNote_3660[0x4] = (char)iVar8 + '1';
            storyLoadPath(puVar9,acNameNote_3660,local_38);
            iVar8 += 0x1;
            *(int *)(*(int *)puVar9 + 0x4) = iVar10;
            puVar9 = (undefined1 *)((int)puVar9 + 0x4);
            iVar10 += 0x20;
        } while (iVar8 < 0x3);
    }
    iVar8 = screenLoad(_3832,local_38);
    if (iVar8 != 0x0) {
        if (giLevelStory == 0x2) {
            if ((grFOV <= 0.0) || (180.0 <= grFOV)) {
                grFOV = 60.0;
            }
            grCameraSourceX = 0.0;
            grCameraSourceY = 0.0;
            grCameraSourceZ = 100.0;
            grCameraTargetX = 0.0;
            grCameraTargetY = 0.0;
            grCameraTargetZ = 0.0;
            fVar13 = grFOV * 0.5 * 0.01745329;
            dVar12 = (double)fVar13;
            fVar13 = sinf(fVar13);
            dVar11 = (double)fVar13;
            fVar13 = cosf((float)dVar12);
            grDistanceCamera = (float)((double)(fVar13 * 160.0) / dVar11);
            guLookAtF((double)grCameraSourceX,(double)grCameraSourceY,(double)grCameraSourceZ,
                      (double)grCameraTargetX,(double)grCameraTargetY,(double)grCameraTargetZ,0x0,
                      0x3ff0000000000000,garLook);
            guMtxF2L(garLook,gMtxLook);
            guPerspectiveF((double)grFOV,0x3ff5555560000000,0x4030000000000000,0x40b0000000000000,
                           0x3ff0000000000000,garView,&gnNormalize);
            guMtxF2L(garView,gMtxView);
            giScreenStory = screenSet(_3835,uVar7);
        }
        else if (giLevelStory < 0x2) {
            if (giLevelStory == 0x0) {
                if ((grFOV <= 0.0) || (180.0 <= grFOV)) {
                    grFOV = 60.0;
                }
                grCameraSourceX = 0.0;
                grCameraSourceY = 0.0;
                grCameraSourceZ = 100.0;
                grCameraTargetX = 0.0;
                grCameraTargetY = 0.0;
                grCameraTargetZ = 0.0;
                fVar13 = grFOV * 0.5 * 0.01745329;
                dVar12 = (double)fVar13;
                fVar13 = sinf(fVar13);
                dVar11 = (double)fVar13;
                fVar13 = cosf((float)dVar12);
                grDistanceCamera = (float)((double)(fVar13 * 160.0) / dVar11);
                guLookAtF((double)grCameraSourceX,(double)grCameraSourceY,(double)grCameraSourceZ,
                          (double)grCameraTargetX,(double)grCameraTargetY,(double)grCameraTargetZ,
                          0x0,0x3ff0000000000000,garLook);
                guMtxF2L(garLook,gMtxLook);
                guPerspectiveF((double)grFOV,0x3ff5555560000000,0x4030000000000000,
                               0x40b0000000000000,0x3ff0000000000000,garView,&gnNormalize);
                guMtxF2L(garView,gMtxView);
                giScreenStory = screenSet(_3833,uVar7);
            }
            else if (-0x1 < giLevelStory) {
                giScreenStory = screenSet(_3834,uVar7);
            }
        }
        else if (giLevelStory == 0x4) {
            if ((grFOV <= 0.0) || (180.0 <= grFOV)) {
                grFOV = 60.0;
            }
            grCameraSourceX = 0.0;
            grCameraSourceY = 0.0;
            grCameraSourceZ = 100.0;
            grCameraTargetX = 0.0;
            grCameraTargetY = 0.0;
            grCameraTargetZ = 0.0;
            fVar13 = grFOV * 0.5 * 0.01745329;
            dVar12 = (double)fVar13;
            fVar13 = sinf(fVar13);
            dVar11 = (double)fVar13;
            fVar13 = cosf((float)dVar12);
            grDistanceCamera = (float)((double)(fVar13 * 160.0) / dVar11);
            guLookAtF((double)grCameraSourceX,(double)grCameraSourceY,(double)grCameraSourceZ,
                      (double)grCameraTargetX,(double)grCameraTargetY,(double)grCameraTargetZ,0x0,
                      0x3ff0000000000000,garLook);
            guMtxF2L(garLook,gMtxLook);
            guPerspectiveF((double)grFOV,0x3ff5555560000000,0x4030000000000000,0x40b0000000000000,
                           0x3ff0000000000000,garView,&gnNormalize);
            guMtxF2L(garView,gMtxView);
            giScreenStory = screenSet(_3837,uVar7);
            iVar8 = 0x0;
            do {
                screenSetImageScale(0x3fe0000000000000,giScreenStory,iVar8 + 0x12c);
                iVar8 += 0x1;
            } while (iVar8 < 0x2);
            iVar8 = 0x0;
            do {
                screenSetImageScale(0x3fe3333340000000,giScreenStory,iVar8 + 0x136);
                iVar8 += 0x1;
            } while (iVar8 < 0x8);
        }
        else if (giLevelStory < 0x4) {
            if ((grFOV <= 0.0) || (180.0 <= grFOV)) {
                grFOV = 60.0;
            }
            grCameraSourceX = 0.0;
            grCameraSourceY = 100.0;
            grCameraSourceZ = 1.0;
            grCameraTargetX = 0.0;
            grCameraTargetY = 0.0;
            grCameraTargetZ = 0.0;
            fVar13 = grFOV * 0.5 * 0.01745329;
            dVar12 = (double)fVar13;
            fVar13 = sinf(fVar13);
            dVar11 = (double)fVar13;
            fVar13 = cosf((float)dVar12);
            grDistanceCamera = (float)((double)(fVar13 * 160.0) / dVar11);
            guLookAtF((double)grCameraSourceX,(double)grCameraSourceY,(double)grCameraSourceZ,
                      (double)grCameraTargetX,(double)grCameraTargetY,(double)grCameraTargetZ,0x0,
                      0x3ff0000000000000,garLook);
            guMtxF2L(garLook,gMtxLook);
            guPerspectiveF((double)grFOV,0x3ff5555560000000,0x4030000000000000,0x40b0000000000000,
                           0x3ff0000000000000,garView,&gnNormalize);
            guMtxF2L(garView,gMtxView);
            giScreenStory = screenSet(_3836,uVar7);
        }
    }
    return;
}



void storyTickPick(undefined4 param_1,int param_2)

{
    int iVar1;
    undefined4 uVar2;
    undefined auStack_68 [0x44];
    int local_24;
    undefined auStack_20 [0xc];
    
    uVar2 = 0x0;
    iVar1 = 0x0;
    if (gTheGame._120360_4_ == 0x3) {
        iVar1 = 0xe;
    }
    else if (gTheGame._120360_4_ < 0x3) {
        if (gTheGame._120360_4_ == 0x1) {
            iVar1 = 0x9;
        }
        else if (0x0 < gTheGame._120360_4_) {
            iVar1 = 0xd;
        }
    }
    else if (gTheGame._120360_4_ < 0x6) {
        iVar1 = 0xf;
    }
    screenGetCursor(giScreenStory,0x64,auStack_20,&local_24);
    if (local_24 == 0x0) {
        if (((gTheGame._90948_2_ & 0x200) != 0x0) && (0x1 < gTheGame._120364_4_)) {
            gTheGame._120364_4_ += -0x1;
            PlaySE(SFX_INIT_TABLE,0x1);
        }
        if (((gTheGame._90948_2_ & 0x100) != 0x0) && (gTheGame._120364_4_ < iVar1)) {
            gTheGame._120364_4_ += 0x1;
            PlaySE(SFX_INIT_TABLE,0x1);
        }
    }
    else if (local_24 == 0x1) {
        if (((gTheGame._90948_2_ & 0x200) != 0x0) && (0x0 < giMovieStory)) {
            giMovieStory += -0x1;
            PlaySE(SFX_INIT_TABLE,0x1);
        }
        if (((gTheGame._90948_2_ & 0x100) != 0x0) && (giMovieStory < 0x3)) {
            giMovieStory += 0x1;
            PlaySE(SFX_INIT_TABLE,0x1);
        }
    }
    screenGetText(giScreenStory,gTheGame._120364_4_ + 0x64,auStack_68,0x20);
    screenSetTextField(giScreenStory,0x12c,auStack_68);
    screenGetText(giScreenStory,giMovieStory + 0xc8,auStack_68,0x20);
    screenSetTextField(giScreenStory,0x136,auStack_68);
    if (param_2 != 0x0) {
        PlaySE(SFX_INIT_TABLE,0x3);
        if (local_24 == 0x1) {
            gnPickStory |= 0x2;
            if (giMovieStory == 0x2) {
                uVar2 = 0x6;
            }
            else if (giMovieStory < 0x2) {
                if (giMovieStory == 0x0) {
                    uVar2 = 0x2;
                }
                else if (-0x1 < giMovieStory) {
                    uVar2 = 0x5;
                }
            }
            else if (giMovieStory < 0x4) {
                uVar2 = 0x7;
            }
            geXtraNext = 0x0;
            gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
            geModeNext = uVar2;
        }
        else if ((local_24 < 0x1) && (-0x1 < local_24)) {
            gnPickStory &= 0xfffffffd;
            if (gTheGame._120364_4_ == 0x1) {
                giLevelStory = 0x1;
                geModeNext = 0x3;
                geXtraNext = 0x0;
                gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
            }
            else {
                storySetupStage();
            }
        }
    }
    return;
}



void storyPlaySong(undefined4 param_1,int param_2)

{
    undefined2 uVar1;
    
    if (param_2 == 0x0) {
        uVar1 = 0x0;
    }
    else {
        uVar1 = 0x3c;
    }
    FadeOutAllSFXs(uVar1);
    if (param_2 == 0x0) {
        uVar1 = 0x0;
    }
    else {
        uVar1 = 0x3c;
    }
    FadeOutAllSongs(uVar1);
    ForceLoadSong(param_1,0x2);
    PlayMIDI(BGM_INIT_TABLE,param_1,0x2,param_2 != 0x0);
    return;
}



void DoStory(void)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;
    uint local_20;
    undefined4 local_1c;
    
    gnTickStory += 0x1;
    if (0x0 < gnSkipCount) {
        gnSkipCount += -0x1;
    }
    if (gnFlushCount < 0x1) {
        if (gnFlushCount == 0x0) {
            gnFlushCount = -0x1;
            gnDustBallCount = 0x0;
            iVar3 = 0x0;
            gpImageDustBits = 0x0;
            gpImageDustBall = 0x0;
            gpImageDustGlow = 0x0;
            gnMagnitudeShake = 0x0;
            gnTickAnchor = 0x0;
            gnTickStory = 0x0;
            gbGfxHeap = 0x0;
            geXtra = geXtraNext;
            geXtraNext = 0x0;
            gnColorBackAlpha = 0xff;
            gnColorBackBlue = 0xff;
            gnColorBackGreen = 0xff;
            gnColorBackRed = 0xff;
            if (true) {
                switch(geModeNext) {
                case 0x1:
                    FadeOutAllSFXs(0x3c);
                    FadeOutAllSongs(0x3c);
                    gnPickStory |= 0x1;
                    storySetCamera((double)grFOV,0x0,0x4059000000000000,0x3ff0000000000000,0x0,0x0,
                                   0x0);
                    pon_ClearHeap();
                    local_24 = Pon_Image_Heap;
                    iVar2 = screenLoad(_3895,&local_24);
                    if (iVar2 != 0x0) {
                        giScreenStory = screenSet(&_2695,0x1);
                    }
                    break;
                case 0x2:
                    FadeOutAllSongs(0x78);
                    pon_ClearHeap();
                    local_28 = Pon_Image_Heap;
                    iVar2 = screenLoad(_2067,&local_28);
                    if (iVar2 != 0x0) {
                        screenFind(&giScreenStorm,_2062);
                        storySetupScript(ganCommandOpen,&gaszNameOpen);
                    }
                    break;
                case 0x3:
                    storySetupIsle();
                    break;
                case 0x4:
                    storySetupKeys();
                    break;
                case 0x5:
                    grScaleWitch = 0x3e800000;
                    gnTickWhale = 0x0;
                    pon_ClearHeap();
                    local_2c = Pon_Image_Heap;
                    storyLoadPath2(&gpPathEye1,_2098,&local_2c,0x0);
                    storyLoadPath2(&gpPathEye2,_2099,&local_2c,0x0);
                    storyLoadPath2(&gapPathBits,_2100,&local_2c,0x3);
                    storyLoadPath2(0x2a0d0c,_2101,&local_2c,0x3);
                    iVar2 = screenLoad(_2102,&local_2c);
                    if (iVar2 != 0x0) {
                        storySetupScript(ganCommandDone,&gaszNameEnd);
                    }
                    break;
                case 0x6:
                    pon_ClearHeap();
                    local_30 = Pon_Image_Heap;
                    gnOffsetWipe = 0x78;
                    iVar2 = screenLoad(_2260,&local_30);
                    if (iVar2 != 0x0) {
                        storySetupScript(ganCommandHags,&gaszNameHags);
                    }
                    break;
                case 0x7:
                    iVar3 = -0x1;
                    storySetupCast();
                    break;
                case 0x8:
                    storySetupChar();
                }
            }
            if ((iVar3 != 0x0) && (gPlayer._0_4_ != NULL)) {
                menuSaveData((int)*gPlayer._0_4_);
            }
            geModeLast = geMode;
            geMode = geModeNext;
            geModeNext = 0x0;
            gnSkipCount += gfxFrameMsgQ._8_4_;
        }
        else {
            iVar3 = screenFlushing();
            if (iVar3 != 0x0) {
                gTheGame._90948_2_ = 0x0;
                gTheGame._90950_2_ = 0x0;
                gTheGame._90964_2_ = 0x0;
                gTheGame._90966_2_ = 0x0;
            }
            local_1c = 0x0;
            local_20 = (uint)((gTheGame._90948_2_ & 0x800) != 0x0);
            if ((gTheGame._90948_2_ & 0x400) != 0x0) {
                local_20 = 0x2;
            }
            if ((gTheGame._90948_2_ & 0x200) != 0x0) {
                local_20 = 0x3;
            }
            if ((gTheGame._90948_2_ & 0x100) != 0x0) {
                local_20 = 0x4;
            }
            if (geMode == 0x8) {
                if ((gTheGame._90950_2_ & 0x800) != 0x0) {
                    local_20 = 0x1;
                }
                if ((gTheGame._90950_2_ & 0x400) != 0x0) {
                    local_20 = 0x2;
                }
                if ((gTheGame._90950_2_ & 0x200) != 0x0) {
                    local_20 = 0x3;
                }
                if ((gTheGame._90950_2_ & 0x100) != 0x0) {
                    local_20 = 0x4;
                }
            }
            screenTick(&local_20);
            if (local_20 != 0x0) {
                PlaySE(SFX_INIT_TABLE,0x1);
            }
            if (((gTheGame._90948_2_ & 0x4000) != 0x0) && (geMode == 0x1)) {
                FadeOutAllSFXs(0x1e);
                FadeOutAllSongs(0x1e);
                PlaySE(SFX_INIT_TABLE,0x6);
                gMain = 0x2bc;
                gReset = 0xffffffff;
            }
            if ((gTheGame._90948_2_ & 0x8000) == 0x0) {
                uVar1 = 0x0;
            }
            else {
                uVar1 = 0xffffffff;
            }
            storyTickDustBall(gnTickStory);
            if (true) {
                switch(geMode) {
                case 0x1:
                    storyTickPick(gnTickStory,uVar1);
                    break;
                case 0x2:
                    storyTickOpen(gnTickStory,uVar1);
                    break;
                case 0x3:
                    storyTickIsle(gnTickStory,uVar1);
                    break;
                case 0x4:
                    storyTickKeys(gnTickStory,uVar1);
                    break;
                case 0x5:
                    storyTickDone(gnTickStory,uVar1);
                    break;
                case 0x6:
                    storyTickScript(gnTickStory,0x0);
                    if (((geHoldStory0 != 0x0) && (0x0 < gnOffsetWipe)) &&
                       (gnOffsetWipe += -0xc, gnOffsetWipe < 0x1)) {
                        gnOffsetWipe = 0x0;
                        geHoldStory0 = 0x2;
                    }
                    if ((gnCode & 0xff) == 0xf) {
                        iVar3 = -0x1;
                    }
                    else {
                        iVar3 = 0x0;
                    }
                    if (iVar3 != 0x0) {
                        if ((gnPickStory & 0x2) == 0x0) {
                            geModeNext = 0x7;
                            geXtraNext = 0x0;
                            gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
                        }
                        else {
                            geModeNext = 0x1;
                            geXtraNext = 0x0;
                            gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
                        }
                    }
                    break;
                case 0x7:
                    storyTickCast(gnTickStory,uVar1);
                    break;
                case 0x8:
                    storyTickChar(gnTickStory,uVar1);
                }
            }
            iVar3 = screenFlushing();
            if ((iVar3 == 0x0) && (gnFlushCount == -0x1)) {
                peelTick();
            }
        }
    }
    return;
}



void storyDrawImage(undefined4 *param_1,undefined4 param_2,int param_3)

{
    int iVar1;
    undefined1 *puVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    double dVar9;
    float fVar10;
    float local_88;
    undefined4 local_84;
    int local_80 [0x4];
    int local_70;
    int local_6c;
    int local_68;
    float local_64;
    undefined4 *local_60 [0x2];
    undefined4 local_58;
    uint uStack_54;
    undefined4 local_50;
    uint uStack_4c;
    undefined4 local_48;
    uint uStack_44;
    longlong local_40;
    double local_38;
    
    iVar8 = 0xff;
    local_60[0] = (undefined4 *)*param_1;
    iVar1 = giMtxDraw * 0x40;
    puVar2 = gaMtxStory + iVar1;
    iVar7 = iVar1 + 0x2a0830;
    iVar6 = iVar1 + 0x2a08b0;
    n642Dolphin_AllchangeTexture();
    if (param_3 == 0x192) {
        storyDrawPath2(0x0,gpPathGirl,0x0,0x0,0x0,0x0,0x0,local_60);
        goto LAB_000aebec;
    }
    if (0x191 < param_3) {
        if (param_3 == 0x258) {
            iVar1 = 0x5;
            *local_60[0] = 0xed000087;
            local_60[0][0x1] = 0x500343;
            puVar5 = (undefined4 *)(gapImageBack + 0x14);
            local_60[0] = local_60[0] + 0x2;
            do {
                imageDraw(*puVar5,local_60,0x0,0x0,0x0);
                iVar1 += -0x1;
                puVar5 = puVar5 + -0x1;
            } while (-0x1 < iVar1);
        }
        else if (param_3 < 0x258) {
            if (param_3 == 0x1b8) {
                if (gpPathBat1 != 0x0) {
                    storyDrawPath2(0x0,gpPathBat1,0x0,0x0,0x0,0x0,0x0,local_60);
                    storyDrawPath2(0x0,gpPathBat2,0x0,0x0,0x0,0x0,0x0,local_60);
                    storyDrawPath2(0x0,gpPathBat3,0x0,0x0,0x0,0x0,0x0,local_60);
                    storyDrawPath2(0x0,gpPathBat4,0x0,0x0,0x0,0x0,0x0,local_60);
                    storyDrawPath2(0x0,gpPathBat5,0x0,0x0,0x0,0x0,0x0,local_60);
                }
            }
            else if (param_3 < 0x1b8) {
                if (param_3 == 0x195) {
                    storyDrawPath2(0x0,gpPathGirl,0x0,0x0,0x0,0x0,0x0,local_60);
                }
                else if (param_3 < 0x195) {
                    if (param_3 < 0x194) {
                        storyDrawPath2(0x0,gpPathGirl,0x0,0x0,0x0,0x0,0x0,local_60);
                    }
                    else {
                        if ((gpPathNote != 0x0) && (*(int *)(gpPathNote + 0x10) != 0x0)) {
                            if ((*(int *)(gpPathNote + 0x10) < 0x10) &&
                               (iVar1 = storyGetPathImage2(gpPathNote,0x0,0x0,&local_68,0x0),
                               iVar1 != 0x0)) {
                                *(uint *)(local_68 + 0x14) =
                                     *(int *)(gpPathNote + 0x10) << 0x4 | 0xf;
                            }
                            iVar1 = storyDrawPath2(0x0,gpPathNote,0x0,0x0,&local_6c,&local_70,
                                                   &local_64,local_60);
                            if ((iVar1 != 0x0) && (geHoldStory3 == 0x2)) {
                                if (geHoldStory4 == 0x2) {
                                    if (*(int *)(*(int *)(gpPathNote + 0x2c) + 0x8) + 0x50 <
                                        *(int *)(gpPathNote + 0x10)) {
                                        storyDrawPath2(0x0,gapPathBits._4_4_,0x0,0x0,0x0,0x0,0x0,
                                                       local_60);
                                    }
                                }
                                else {
                                    storyDrawPath2(0x0,gapPathBits._0_4_,0x0,0x0,0x0,0x0,0x0,
                                                   local_60);
                                }
                            }
                        }
                        if (geHoldStory3 == 0x1) {
                            local_64 = grPercentZoom * 0.8;
                            local_38 = (double)(longlong)(int)(grPercentZoom * 24.0);
                            local_6c = -(int)(grPercentZoom * 24.0);
                            local_70 = (int)(grPercentZoom * 48.0);
                            local_40 = (longlong)local_70;
                        }
                        else {
                            local_70 = 0x0;
                            local_6c = 0x0;
                            local_64 = 0.0;
                        }
                        storyDrawPath2((double)local_64,gpPathGirl,local_6c,local_70,0x0,0x0,0x0,
                                       local_60);
                    }
                }
                else if (param_3 < 0x197) {
                    if (gnDeltaWhale == 0x0) {
                        imageDraw(gapImageBack._0_4_,local_60,gnOffsetShakeX >> 0x2,
                                  gnOffsetShakeY >> 0x2,0x0);
                    }
                    else {
                        if (0x80 < *(int *)(gapImageBack._0_4_ + 0x14)) {
                            *(int *)(gapImageBack._0_4_ + 0x14) =
                                 *(int *)(gapImageBack._0_4_ + 0x14) + -0x10;
                        }
                        if (0x80 < *(int *)(gapImageBack._4_4_ + 0x14)) {
                            *(int *)(gapImageBack._4_4_ + 0x14) =
                                 *(int *)(gapImageBack._4_4_ + 0x14) + -0x10;
                        }
                        if (0x80 < *(int *)(gapImageBack._8_4_ + 0x14)) {
                            *(int *)(gapImageBack._8_4_ + 0x14) =
                                 *(int *)(gapImageBack._8_4_ + 0x14) + -0x10;
                        }
                        imageDraw(gapImageBack._0_4_,local_60,(gnOffsetShakeX >> 0x2) - gnDeltaWhale
                                  ,gnOffsetShakeY >> 0x2,0x0);
                        imageDraw(gapImageBack._4_4_,local_60,gnOffsetShakeX >> 0x2,
                                  gnOffsetShakeY >> 0x2,0x0);
                        imageDraw(gapImageBack._8_4_,local_60,(gnOffsetShakeX >> 0x2) + gnDeltaWhale
                                  ,gnOffsetShakeY >> 0x2,0x0);
                    }
                }
            }
            else if (param_3 == 0x1f4) {
                if (gnOffsetWipe < 0xa0) {
                    *local_60[0] = 0xe7000000;
                    local_60[0][0x1] = 0x0;
                    local_60[0][0x2] = 0xe3000a01;
                    local_60[0][0x3] = 0x300000;
                    local_60[0][0x4] = 0xe200001c;
                    local_60[0][0x5] = 0x0;
                    local_60[0][0x6] = 0xd9ddf9fa;
                    local_60[0][0x7] = 0x0;
                    local_60[0][0x8] = 0xd7000000;
                    local_60[0][0x9] = 0x80008000;
                    local_60[0][0xa] = 0xf7000000;
                    local_60[0][0xb] = 0x10001;
                    local_60[0][0xc] = (0x78 - gnOffsetWipe) * 0x4 & 0xffcU | 0xf64fc000;
                    local_60[0][0xd] = 0x0;
                    local_60[0][0xe] = 0xf64fc3bc;
                    local_60[0][0xf] = (gnOffsetWipe + 0x78) * 0x4 & 0xffc;
                    local_60[0][0x10] = 0xe7000000;
                    local_60[0][0x11] = 0x0;
                    local_60[0][0x12] = 0xe3000a01;
                    local_60[0][0x13] = 0x0;
                    local_60[0] = local_60[0] + 0x14;
                }
            }
            else if ((param_3 < 0x1f4) && (param_3 == 0x1c2)) {
                storyDrawDustBall(local_60,0xffffffff);
            }
        }
        else if (param_3 == 0x276) {
            *local_60[0] = 0xe7000000;
            local_60[0][0x1] = 0x0;
            local_60[0][0x2] = 0xe3000a01;
            local_60[0][0x3] = 0x0;
            local_60[0][0x4] = 0xe2001e01;
            local_60[0][0x5] = 0x0;
            local_60[0][0x6] = 0xfa000000;
            local_60[0][0x7] = 0x40;
            local_60[0][0x8] = 0xe200001c;
            local_60[0][0x9] = 0x504240;
            local_60[0][0xa] = 0xfcffffff;
            local_60[0][0xb] = 0xfffdf6fb;
            local_60[0][0xc] = 0xd9ddf9fa;
            local_60[0][0xd] = 0x0;
            local_60[0][0xe] = 0xf6248368;
            local_60[0][0xf] = 0x88054;
            local_60[0] = local_60[0] + 0x10;
            imageDraw(gapImageBack._0_4_,local_60,0x24,0x18,0x0);
        }
        else if (param_3 < 0x276) {
            if (param_3 == 0x26c) {
                if (gpBitsCast != 0x0) {
                    *local_60[0] = 0xe7000000;
                    iVar1 = 0x0;
                    local_60[0][0x1] = 0x0;
                    iVar6 = 0x40;
                    local_60[0][0x2] = 0xe3000a01;
                    local_60[0][0x3] = 0x0;
                    local_60[0][0x4] = 0xe2001e01;
                    local_60[0][0x5] = 0x0;
                    local_60[0][0x6] = 0xe200001c;
                    local_60[0][0x7] = 0xf0a4000;
                    local_60[0][0x8] = 0xfcffffff;
                    local_60[0][0x9] = 0xfffdf6fb;
                    local_60[0][0xa] = 0xd9ddf9fa;
                    local_60[0][0xb] = 0x0;
                    local_60[0] = local_60[0] + 0xc;
                    do {
                        iVar7 = gpBitsCast + iVar1;
                        local_6c = *(int *)(iVar7 + 0xc);
                        if (local_6c < 0x0) {
                            local_6c += 0x500;
                        }
                        if (0x4ff < local_6c) {
                            local_6c += -0x500;
                        }
                        local_70 = *(int *)(iVar7 + 0x10);
                        if (local_70 < 0x0) {
                            local_70 += 0x3c0;
                        }
                        if (0x3bf < local_70) {
                            local_70 += -0x3c0;
                        }
                        uVar3 = *(uint *)(iVar7 + 0x14) >> 0x3 & 0x7;
                        if (0x3 < uVar3) {
                            uVar3 = 0x8 - uVar3;
                        }
                        uVar4 = *(undefined4 *)(iVar7 + 0x30);
                        iVar1 += 0x28;
                        *local_60[0] = 0xfa000000;
                        local_60[0][0x1] = uVar4;
                        puVar5 = local_60[0] + 0x4;
                        local_60[0][0x2] =
                             ((local_6c >> 0x2) + 0x3) * 0x4000 & 0xffc000U | 0xf6000000 |
                             ((local_70 >> 0x2) + ((int)uVar3 >> 0x1) + 0x1) * 0x4 & 0xffcU;
                        local_60[0][0x3] =
                             ((local_6c >> 0x2) + -0x2) * 0x4000 & 0xffc000U |
                             ((local_70 >> 0x2) - ((int)uVar3 >> 0x1)) * 0x4 & 0xffcU;
                        iVar6 += -0x1;
                        local_60[0] = puVar5;
                    } while (iVar6 != 0x0);
                }
            }
            else if ((param_3 < 0x26c) && (param_3 == 0x262)) {
                *local_60[0] = 0xe7000000;
                local_60[0][0x1] = 0x0;
                local_60[0][0x2] = 0xed000007;
                local_60[0][0x3] = 0x5003c3;
                local_60[0][0x4] = 0xe2001e01;
                local_60[0][0x5] = 0x0;
                local_60[0][0x6] = 0xd7000000;
                local_60[0][0x7] = 0x80008000;
                local_60[0][0x8] = 0xd9ddf9fa;
                local_60[0][0x9] = 0x0;
                local_60[0][0xa] = 0xe3000a01;
                local_60[0][0xb] = 0x300000;
                local_60[0][0xc] = 0xe200001c;
                local_60[0][0xd] = 0x0;
                local_60[0][0xe] = 0xf7000000;
                local_60[0][0xf] = 0x10001;
                local_60[0][0x10] = 0xf64fc3bc;
                local_60[0][0x11] = 0x0;
                local_60[0][0x12] = 0xe7000000;
                local_60[0][0x13] = 0x0;
                local_60[0][0x14] = 0xed000087;
                local_60[0][0x15] = 0x500343;
                if ((geTypeCast == 0x1) && ((int)giBackStory < 0x2)) {
                    local_60[0] = local_60[0] + 0x16;
                    imageDraw(gapImageBack._0_4_,local_60,0x0,0x0,0x0);
                    dVar9 = (double)(garBaseRainbow._4_4_ - garBaseRainbow._0_4_);
                    fVar10 = sinf(1.570796);
                    uStack_54 = (uint)(garBaseRainbow._0_4_ + (float)(dVar9 * 0.5) + fVar10 * 96.0 +
                                      0.5);
                    local_40 = (longlong)(int)uStack_54;
                    fVar10 = sinf(grAngleBob);
                    local_80[0] = (int)(fVar10 * 16.0);
                    local_38 = (double)(longlong)local_80[0];
                    uStack_44 = uStack_54 + local_80[0] + 0x80 ^ 0x80000000;
                    uStack_4c = local_80[0] + 0x40U ^ 0x80000000;
                    local_48 = 0x43300000;
                    local_50 = 0x43300000;
                    storySetCamera((double)grFOV,0x4070000000000000,
                                   (double)(float)((double)CONCAT44(0x43300000,uStack_44) -
                                                  4503601774854144.0),0x4070000000000000,
                                   0x4080000000000000,
                                   (double)(float)((double)CONCAT44(0x43300000,uStack_4c) -
                                                  4503601774854144.0),0x0);
                    storyDrawRainbow(local_60,0x0,0xa0);
                    uStack_54 ^= 0x80000000;
                    local_58 = 0x43300000;
                    iVar1 = storyGetScreen(0x4080000000000000,
                                           (double)(float)((double)CONCAT44(0x43300000,uStack_54) -
                                                          4503601774854144.0),0x0,&local_84,local_80
                                           ,&local_88);
                    if (iVar1 != 0x0) {
                        gpImageGirl[0x5] = 0xff;
                        *gpImageGirl = giFrameGirl;
                        imageSetScale((double)(local_88 / 0.791539),(double)(local_88 / 0.791539),
                                      gpImageGirl);
                        imageDraw(gpImageGirl,local_60,local_84,local_80[0],0x0);
                    }
                    imageDraw(gapImageBack._4_4_,local_60,0x0,0x0,0x0);
                }
                else {
                    local_60[0] = local_60[0] + 0x16;
                    imageDraw(*(undefined4 *)(gapImageBack + (giBackStory & 0x1 ^ 0x1) * 0x4),
                              local_60,0x0,0x0,0x0);
                    imageDraw(*(undefined4 *)(gapImageBack + (giBackStory & 0x1) * 0x4),local_60,0x0
                              ,0x0,0x0);
                }
            }
        }
        else if (param_3 == 0x27b) {
            *local_60[0] = 0xe7000000;
            local_60[0][0x1] = 0x0;
            local_60[0][0x2] = 0xe3000a01;
            local_60[0][0x3] = 0x0;
            local_60[0][0x4] = 0xe2001e01;
            local_60[0][0x5] = 0x0;
            local_60[0][0x6] = 0xe3001a01;
            local_60[0][0x7] = 0x30;
            local_60[0][0x8] = 0xfa000000;
            local_60[0][0x9] = 0x40;
            local_60[0][0xa] = 0xe200001c;
            local_60[0][0xb] = 0x504240;
            local_60[0][0xc] = 0xfcffffff;
            local_60[0][0xd] = 0xfffdf6fb;
            local_60[0][0xe] = 0xd9ddf9fa;
            local_60[0][0xf] = 0x0;
            local_60[0][0x10] = 0xf65003c0;
            local_60[0][0x11] = 0x0;
            local_60[0] = local_60[0] + 0x12;
        }
        goto LAB_000aebec;
    }
    if (param_3 == 0x97) {
        storyDrawRays(local_60,0x0,iVar6,iVar1 + 0x2a0930);
        goto LAB_000aebec;
    }
    if (param_3 < 0x97) {
        if (param_3 == 0x73) {
            storyDrawBeam(gpBeamGoddess,local_60);
        }
        else if (param_3 < 0x73) {
            if (param_3 == 0x71) {
                if ((gpPathBaby != 0x0) && (0x0 < *(int *)(gpPathBaby + 0x10))) {
                    storyDrawPath2(0x0,gpPathBaby,0x0,0x0,0x0,0x0,0x0,local_60);
                }
            }
            else if ((param_3 < 0x71) && (param_3 == 0x64)) {
                local_38 = (double)CONCAT44(0x43300000,gnHeightSky ^ 0x80000000);
                guTranslate(0x0,(double)(float)(local_38 - 4503601774854144.0),0x0,puVar2);
                *local_60[0] = 0xda380002;
                local_60[0][0x1] = puVar2;
                local_60[0] = local_60[0] + 0x2;
                guRotate(0xc054000000000000,0x3ff0000000000000,0x0,0x0,iVar7);
                *local_60[0] = 0xda380001;
                local_60[0][0x1] = iVar7;
                local_60[0] = local_60[0] + 0x2;
                guRotate((double)grAngleSky,0x0,0x0,0x3ff0000000000000,iVar6);
                *local_60[0] = 0xda380001;
                local_60[0][0x1] = iVar6;
                local_60[0] = local_60[0] + 0x2;
                modelDrawMesh(gpModelSky,0x0,local_60);
                *local_60[0] = 0xd8380002;
                local_60[0][0x1] = 0x40;
                local_60[0] = local_60[0] + 0x2;
            }
        }
        else if (param_3 == 0x78) {
            storyDrawGoddess(local_60);
        }
        else if ((0x77 < param_3) && (0x95 < param_3)) {
            storyDrawRays(local_60,0xffffffff,puVar2,iVar7);
        }
        goto LAB_000aebec;
    }
    if (param_3 == 0xd3) {
        if (*(int *)(gpPathEye1 + 0x10) < *(int *)(gpPathEye1 + 0x24) >> 0x1) {
            if (*(int *)(gpPathEye1 + 0x34) == 0x3) {
                iVar1 = *(int *)(gpPathEye1 + 0x20);
                iVar6 = 0x0;
                if (0x0 < iVar1) {
                    do {
                        if (*(int *)(*(int *)(gpPathEye1 + 0x14) + iVar6) <
                            *(int *)(*(int *)(gpPathEye1 + 0x2c) + iVar6 + 0x4) + -0x1) {
                            iVar1 = 0x0;
                            goto LAB_000ad918;
                        }
                        iVar6 += 0x4;
                        iVar1 += -0x1;
                    } while (iVar1 != 0x0);
                }
                iVar1 = -0x1;
            }
            else if (*(int *)(gpPathEye1 + 0x10) == *(int *)(gpPathEye1 + 0x24) + -0x1) {
                iVar1 = -0x1;
            }
            else {
                iVar1 = 0x0;
            }
LAB_000ad918:
            if (iVar1 == 0x0) {
                storyDrawPath2(0x0,gpPathEye1,0x0,0x0,&local_6c,&local_70,&local_64,local_60);
            }
            if (*(int *)(gapPathBits._0_4_ + 0x34) == 0x3) {
                iVar1 = *(int *)(gapPathBits._0_4_ + 0x20);
                iVar6 = 0x0;
                if (0x0 < iVar1) {
                    do {
                        if (*(int *)(*(int *)(gapPathBits._0_4_ + 0x14) + iVar6) <
                            *(int *)(*(int *)(gapPathBits._0_4_ + 0x2c) + iVar6 + 0x4) + -0x1) {
                            iVar1 = 0x0;
                            goto LAB_000ad9c0;
                        }
                        iVar6 += 0x4;
                        iVar1 += -0x1;
                    } while (iVar1 != 0x0);
                }
                iVar1 = -0x1;
            }
            else if (*(int *)(gapPathBits._0_4_ + 0x10) == *(int *)(gapPathBits._0_4_ + 0x24) + -0x1
                    ) {
                iVar1 = -0x1;
            }
            else {
                iVar1 = 0x0;
            }
LAB_000ad9c0:
            if (iVar1 == 0x0) {
                storyDrawPath2(0x0,gapPathBits._0_4_,0x0,0x0,0x0,0x0,0x0,local_60);
            }
        }
        if (0x0 < *(int *)(gpPathEye2 + 0x10)) {
            if (*(int *)(gpPathEye2 + 0x34) == 0x3) {
                iVar1 = *(int *)(gpPathEye2 + 0x20);
                iVar6 = 0x0;
                if (0x0 < iVar1) {
                    do {
                        if (*(int *)(*(int *)(gpPathEye2 + 0x14) + iVar6) <
                            *(int *)(*(int *)(gpPathEye2 + 0x2c) + iVar6 + 0x4) + -0x1) {
                            iVar1 = 0x0;
                            goto LAB_000ada70;
                        }
                        iVar6 += 0x4;
                        iVar1 += -0x1;
                    } while (iVar1 != 0x0);
                }
                iVar1 = -0x1;
            }
            else if (*(int *)(gpPathEye2 + 0x10) == *(int *)(gpPathEye2 + 0x24) + -0x1) {
                iVar1 = -0x1;
            }
            else {
                iVar1 = 0x0;
            }
LAB_000ada70:
            if (iVar1 == 0x0) {
                storyDrawPath2(0x0,gpPathEye2,0x0,0x0,&local_6c,&local_70,&local_64,local_60);
            }
            if (*(int *)(gapPathBits._4_4_ + 0x34) == 0x3) {
                iVar1 = *(int *)(gapPathBits._4_4_ + 0x20);
                iVar6 = 0x0;
                if (0x0 < iVar1) {
                    do {
                        if (*(int *)(*(int *)(gapPathBits._4_4_ + 0x14) + iVar6) <
                            *(int *)(*(int *)(gapPathBits._4_4_ + 0x2c) + iVar6 + 0x4) + -0x1) {
                            iVar1 = 0x0;
                            goto LAB_000adb18;
                        }
                        iVar6 += 0x4;
                        iVar1 += -0x1;
                    } while (iVar1 != 0x0);
                }
                iVar1 = -0x1;
            }
            else if (*(int *)(gapPathBits._4_4_ + 0x10) == *(int *)(gapPathBits._4_4_ + 0x24) + -0x1
                    ) {
                iVar1 = -0x1;
            }
            else {
                iVar1 = 0x0;
            }
LAB_000adb18:
            if (iVar1 == 0x0) {
                storyDrawPath2(0x0,gapPathBits._4_4_,0x0,0x0,0x0,0x0,0x0,local_60);
            }
        }
        goto LAB_000aebec;
    }
    if (param_3 < 0xd3) {
        if (param_3 == 0xc8) {
            if (0x0 < (int)gnColorBackAlpha) {
                *local_60[0] = 0xe7000000;
                local_60[0][0x1] = 0x0;
                local_60[0][0x2] = 0xe2001e01;
                local_60[0][0x3] = 0x0;
                local_60[0][0x4] = 0xd7000000;
                local_60[0][0x5] = 0x80008000;
                local_60[0][0x6] = 0xd9ddf9fa;
                local_60[0][0x7] = 0x0;
                if (gnColorBackAlpha == 0xff) {
                    local_60[0][0x8] = 0xe3000a01;
                    local_60[0][0x9] = 0x300000;
                    local_60[0][0xa] = 0xe200001c;
                    local_60[0][0xb] = 0x0;
                    local_60[0][0xc] = 0xf7000000;
                    uVar3 = gnColorBackBlue >> 0x2 & 0x3e |
                            (gnColorBackRed & 0xf8) << 0x8 | (gnColorBackGreen & 0xf8) << 0x3 | 0x1;
                    local_60[0][0xd] = uVar3 << 0x10 | uVar3;
                    local_60[0][0xe] = 0xf64fc3bc;
                    local_60[0][0xf] = 0x0;
                    local_60[0][0x10] = 0xe7000000;
                    local_60[0][0x11] = 0x0;
                    local_60[0][0x12] = 0xe3000a01;
                    local_60[0][0x13] = 0x0;
                    local_60[0] = local_60[0] + 0x14;
                }
                else {
                    local_60[0][0x8] = 0xe3000a01;
                    local_60[0][0x9] = 0x0;
                    local_60[0][0xa] = 0xe200001c;
                    local_60[0][0xb] = 0x504240;
                    local_60[0][0xc] = 0xfcffffff;
                    local_60[0][0xd] = 0xfffdf6fb;
                    local_60[0][0xe] = 0xfa000000;
                    local_60[0][0xf] =
                         gnColorBackAlpha & 0xff |
                         (gnColorBackBlue & 0xff) << 0x8 |
                         gnColorBackRed << 0x18 | (gnColorBackGreen & 0xff) << 0x10;
                    local_60[0][0x10] = 0xf65003c0;
                    local_60[0][0x11] = 0x0;
                    local_60[0] = local_60[0] + 0x12;
                }
            }
        }
        else if ((0xc7 < param_3) && (0xd1 < param_3)) {
            if (*(int *)(gpPathEye1 + 0x24) >> 0x1 <= *(int *)(gpPathEye1 + 0x10)) {
                if (*(int *)(gpPathEye1 + 0x34) == 0x3) {
                    iVar1 = *(int *)(gpPathEye1 + 0x20);
                    iVar6 = 0x0;
                    if (0x0 < iVar1) {
                        do {
                            if (*(int *)(*(int *)(gpPathEye1 + 0x14) + iVar6) <
                                *(int *)(*(int *)(gpPathEye1 + 0x2c) + iVar6 + 0x4) + -0x1) {
                                iVar1 = 0x0;
                                goto LAB_000ad7b8;
                            }
                            iVar6 += 0x4;
                            iVar1 += -0x1;
                        } while (iVar1 != 0x0);
                    }
                    iVar1 = -0x1;
                }
                else if (*(int *)(gpPathEye1 + 0x10) == *(int *)(gpPathEye1 + 0x24) + -0x1) {
                    iVar1 = -0x1;
                }
                else {
                    iVar1 = 0x0;
                }
LAB_000ad7b8:
                if (iVar1 == 0x0) {
                    storyDrawPath2(0x0,gpPathEye1,0x0,0x0,&local_6c,&local_70,&local_64,local_60);
                }
                if (*(int *)(gapPathBits._0_4_ + 0x34) == 0x3) {
                    iVar1 = *(int *)(gapPathBits._0_4_ + 0x20);
                    iVar6 = 0x0;
                    if (0x0 < iVar1) {
                        do {
                            if (*(int *)(*(int *)(gapPathBits._0_4_ + 0x14) + iVar6) <
                                *(int *)(*(int *)(gapPathBits._0_4_ + 0x2c) + iVar6 + 0x4) + -0x1) {
                                iVar1 = 0x0;
                                goto LAB_000ad860;
                            }
                            iVar6 += 0x4;
                            iVar1 += -0x1;
                        } while (iVar1 != 0x0);
                    }
                    iVar1 = -0x1;
                }
                else if (*(int *)(gapPathBits._0_4_ + 0x10) ==
                         *(int *)(gapPathBits._0_4_ + 0x24) + -0x1) {
                    iVar1 = -0x1;
                }
                else {
                    iVar1 = 0x0;
                }
LAB_000ad860:
                if (iVar1 == 0x0) {
                    storyDrawPath2(0x0,gapPathBits._0_4_,0x0,0x0,0x0,0x0,0x0,local_60);
                }
            }
        }
        goto LAB_000aebec;
    }
    if (param_3 == 0x190) {
        screenGetImagePosition(param_2,0x6e,&local_6c,&local_70);
        storyDrawPath2(0x0,gpPathBaby,local_6c,local_70,0x0,0x0,0x0,local_60);
        if (gpPathFlower != 0x0) {
            if (*(int *)(gpPathFlower + 0x34) == 0x3) {
                iVar1 = *(int *)(gpPathFlower + 0x20);
                iVar6 = 0x0;
                if (0x0 < iVar1) {
                    do {
                        if (*(int *)(*(int *)(gpPathFlower + 0x14) + iVar6) <
                            *(int *)(*(int *)(gpPathFlower + 0x2c) + iVar6 + 0x4) + -0x1) {
                            iVar1 = 0x0;
                            goto LAB_000add70;
                        }
                        iVar6 += 0x4;
                        iVar1 += -0x1;
                    } while (iVar1 != 0x0);
                }
                iVar1 = -0x1;
            }
            else if (*(int *)(gpPathFlower + 0x10) == *(int *)(gpPathFlower + 0x24) + -0x1) {
                iVar1 = -0x1;
            }
            else {
                iVar1 = 0x0;
            }
LAB_000add70:
            if (iVar1 == 0x0) {
                iVar8 = 0xfe;
                if ((*(int *)(gpPathFlower + 0x24) + -0x20 <= *(int *)(gpPathFlower + 0x10)) &&
                   (iVar1 = storyGetPathImage2(gpPathFlower,0x0,0x0,&local_68,0x0), iVar1 != 0x0)) {
                    iVar8 = (*(int *)(gpPathFlower + 0x24) - *(int *)(gpPathFlower + 0x10)) * 0x8 +
                            -0x1;
                    *(int *)(gpPathFlower + 0xc) = iVar8;
                }
                iVar1 = storyDrawPath2(0x0,gpPathFlower,0x0,0x0,&local_6c,&local_70,&local_64,
                                       local_60);
                if (iVar1 != 0x0) {
                    imageSetScale((double)local_64,(double)local_64,gpImageBubble);
                    imageDraw(gpImageBubble,local_60,local_6c,local_70,0x0);
                    storyDrawPath2(0x0,gapPathBits._0_4_,0x0,0x0,0x0,0x0,0x0,local_60);
                }
            }
        }
        storyDrawPath2(0x0,gpPathMother,gnOffsetShakeX,gnOffsetShakeY,0x0,0x0,0x0,local_60);
    }
    else if (param_3 < 0x190) {
        if (param_3 != 0x12c) goto LAB_000aebec;
        iVar1 = 0xff;
        uVar3 = 0xff;
        if ((gpPathFlower != 0x0) && (iVar6 = *(int *)(gpPathFlower + 0x10), 0x0 < iVar6)) {
            if (*(int *)(*(int *)(gpPathFlower + 0x2c) + 0x4) + 0x78 < iVar6) {
                iVar1 = 0x0;
            }
            else {
                iVar1 = -0x1;
            }
            if (0x20 - iVar6 < 0x0) {
                uVar3 = 0x0;
            }
            else {
                uVar3 = (0x20 - iVar6) * 0x8 | 0x7;
            }
        }
        if (iVar1 != 0x0) {
            storyDrawIsle(local_60,uVar3);
        }
        if ((gpPathFlower != 0x0) && (0x0 < *(int *)(gpPathFlower + 0x10))) {
            if (geXtra == 0x1) {
                if ((gnCode & 0xff) == 0xf) {
                    iVar6 = -0x1;
                }
                else {
                    iVar6 = 0x0;
                }
                if (iVar6 == 0x0) goto LAB_000adc94;
            }
            *(uint *)(gpPathFlower + 0xc) = 0xff - uVar3;
            iVar6 = storyDrawPath2(0x0,gpPathFlower,0x0,0x0,&local_6c,&local_70,&local_64,local_60);
            if (iVar6 != 0x0) {
                *(uint *)(gpImageBubble + 0x14) = 0xff - uVar3;
                imageSetScale((double)local_64,(double)local_64,gpImageBubble);
                imageDraw(gpImageBubble,local_60,local_6c,local_70,0x0);
                storyDrawPath2(0x0,gapPathBits._0_4_,0x0,0x0,0x0,0x0,0x0,local_60);
            }
        }
LAB_000adc94:
        if (iVar1 == 0x0) {
            storyDrawIsle(local_60,uVar3);
        }
        goto LAB_000aebec;
    }
    if ((iVar8 != 0xff) &&
       (iVar1 = storyGetPathImage2(gpPathGirl,0x0,0x0,&local_68,0x0), iVar1 != 0x0)) {
        *(int *)(gpPathGirl + 0xc) = 0xff - iVar8;
    }
    storyDrawPath2(0x0,gpPathGirl,0x0,0x0,0x0,0x0,0x0,local_60);
LAB_000aebec:
    *param_1 = local_60[0];
    return;
}



void DrawStory(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    undefined4 *local_2c;
    undefined4 *local_28 [0x3];
    
    local_28[0] = glistp;
    if (gnFlushCount < 0x1) {
        iVar3 = screenFlushing();
        if (iVar3 == 0x0) {
            giMtxDraw ^= 0x1;
            *local_28[0] = 0xe7000000;
            local_28[0][0x1] = 0x0;
            local_28[0][0x2] = 0xe3000a01;
            local_28[0][0x3] = 0x0;
            local_28[0][0x4] = 0xe3000800;
            local_28[0][0x5] = 0x800000;
            local_28[0][0x6] = 0xed000007;
            local_28[0][0x7] = 0x5003c7;
            local_28[0][0x8] = 0xd961f9fe;
            local_28[0][0x9] = 0x0;
            local_28[0][0xa] = 0xd9ffffff;
            local_28[0][0xb] = 0x200004;
            local_28[0][0xc] = 0xda380007;
            local_28[0][0xd] = gMtxView;
            local_28[0][0xe] = 0xda380005;
            local_28[0][0xf] = gMtxLook;
            local_28[0][0x10] = 0xdb0e0000;
            local_28[0][0x11] = (uint)gnNormalize;
            local_28[0] = local_28[0] + 0x12;
            guMtxIdent(0x2a09b0);
            *local_28[0] = 0xda380003;
            local_28[0][0x1] = 0x2a09b0;
            local_28[0] = local_28[0] + 0x2;
        }
        if (gbGfxHeap == 0x0) {
            gpGfxHeapLast = NULL;
            screenDraw(local_28,storyDrawImage);
        }
        else if ((giMtxDraw == 0x0) || (gpGfxHeapLast == NULL)) {
            screenGetHeap(&local_2c);
            *local_28[0] = 0xde000000;
            local_28[0][0x1] = local_2c;
            local_28[0] = local_28[0] + 0x2;
            screenDraw(&local_2c,storyDrawImage);
            gpGfxHeapLast = local_2c + 0x2;
            *local_2c = 0xdf000000;
            local_2c[0x1] = 0x0;
            local_2c = gpGfxHeapLast;
        }
        else {
            *local_28[0] = 0xde000000;
            local_28[0][0x1] = gpGfxHeapLast;
            local_28[0] = local_28[0] + 0x2;
            screenDraw(&gpGfxHeapLast,storyDrawImage);
            puVar1 = gpGfxHeapLast;
            puVar2 = gpGfxHeapLast + 0x2;
            *gpGfxHeapLast = 0xdf000000;
            gpGfxHeapLast = puVar2;
            puVar1[0x1] = 0x0;
        }
        screenFlushing();
        glistp = local_28[0];
    }
    else {
        gnFlushCount += -0x1;
    }
    return;
}



void InitStory(void)

{
    int iVar1;
    int iVar2;
    double dVar3;
    double dVar4;
    float fVar5;
    
    osViSetSpecialFeatures(0x40);
    iVar2 = 0x0;
    gnSkipCount = 0x0;
    giMtxDraw = 0x0;
    grFOV = 60.0;
    grCameraSourceX = 0.0;
    grCameraSourceY = 0.0;
    grCameraSourceZ = 256.0;
    grCameraTargetX = 0.0;
    grCameraTargetY = 0.0;
    grCameraTargetZ = 0.0;
    dVar4 = 0.5235987901687622;
    fVar5 = sinf(0.5235988);
    dVar3 = (double)fVar5;
    fVar5 = cosf((float)dVar4);
    grDistanceCamera = (float)((double)(fVar5 * 160.0) / dVar3);
    guLookAtF((double)grCameraSourceX,(double)grCameraSourceY,(double)grCameraSourceZ,
              (double)grCameraTargetX,(double)grCameraTargetY,(double)grCameraTargetZ,0x0,
              0x3ff0000000000000,garLook);
    guMtxF2L(garLook,gMtxLook);
    guPerspectiveF((double)grFOV,0x3ff5555560000000,0x4030000000000000,0x40b0000000000000,
                   0x3ff0000000000000,garView,&gnNormalize);
    guMtxF2L(garView,gMtxView);
    gbGfxHeap = 0x0;
    gnAlphaBack = 0x0;
    gnTickStory = 0x0;
    geXtraNext = 0x0;
    geXtra = 0x0;
    geModeLast = 0x0;
    geModeNext = 0x0;
    geMode = 0x0;
    giMovieStory = 0x0;
    gnPickStory = 0x0;
    if (gSelection == 0x96) {
        iVar1 = 0x0;
        if ((gPlayer._0_4_ != 0x0) && (gTheGame._120364_4_ < 0xf)) {
            if (gTheGame._120360_4_ == 0x3) {
                iVar1 = iVar2;
                if (((int)*(short *)(gPlayer._0_4_ + 0x17e) & 0x8000U) != 0x0) {
                    iVar1 = -0x1;
                }
            }
            else if (gTheGame._120360_4_ < 0x3) {
                if (gTheGame._120360_4_ == 0x1) {
                    iVar1 = iVar2;
                    if (((int)*(short *)(gPlayer._0_4_ + 0x17a) & 0x8000U) != 0x0) {
                        iVar1 = -0x1;
                    }
                }
                else if ((0x0 < gTheGame._120360_4_) &&
                        (iVar1 = iVar2, ((int)*(short *)(gPlayer._0_4_ + 0x17c) & 0x8000U) != 0x0))
                {
                    iVar1 = -0x1;
                }
            }
            else if (gTheGame._120360_4_ == 0x5) {
                iVar1 = iVar2;
                if (((int)*(short *)(gPlayer._0_4_ + 0x182) & 0x8000U) != 0x0) {
                    iVar1 = -0x1;
                }
            }
            else if ((gTheGame._120360_4_ < 0x5) &&
                    (iVar1 = iVar2, ((int)*(short *)(gPlayer._0_4_ + 0x180) & 0x8000U) != 0x0)) {
                iVar1 = -0x1;
            }
        }
        if (iVar1 == 0x0) {
            storySetupStage();
        }
        else {
            geModeNext = 0x8;
            geXtraNext = 0x0;
            gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
        }
    }
    else {
        geModeNext = 0x7;
        geXtraNext = 0x0;
        gnFlushCount = gfxFrameMsgQ._8_4_ + 0x2;
    }
    return;
}

