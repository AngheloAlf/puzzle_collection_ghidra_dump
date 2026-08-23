

undefined4 FromNumberToCombo(int param_1,undefined4 *param_2)

{
    switch(param_1) {
    case 0x3:
        *param_2 = 0x0;
        return 0x0;
    case 0x4:
        *param_2 = 0x1;
        break;
    case 0x5:
        *param_2 = 0x2;
        break;
    case 0x6:
        *param_2 = 0x3;
        break;
    case 0x7:
        *param_2 = 0x4;
        break;
    case 0x8:
        *param_2 = 0x5;
        break;
    case 0x9:
        *param_2 = 0x6;
        break;
    case 0xa:
        *param_2 = 0x7;
        break;
    case 0xb:
        *param_2 = 0x8;
        break;
    default:
        *param_2 = 0x4;
    }
    if (param_1 < 0x8) {
        return 0x1;
    }
    if (param_1 < 0xd) {
        return 0x2;
    }
    if (param_1 != 0xd) {
        if (param_1 < 0x14) {
            return 0x4;
        }
        if (0x1a < param_1) {
            return 0x8;
        }
        return 0x6;
    }
    return 0x3;
}



void InitShakingDelay(int param_1)

{
    if (true) {
        switch(*(undefined4 *)(param_1 + 0x4)) {
        case 0x1:
            *(undefined4 *)(param_1 + 0x28) = 0xffffffee;
            return;
        case 0x2:
            *(undefined4 *)(param_1 + 0x28) = 0xffffffee;
            return;
        case 0x3:
            *(undefined4 *)(param_1 + 0x28) = 0xffffffe8;
            return;
        case 0x4:
        case 0x9:
        case 0xa:
        case 0xb:
        case 0xc:
            *(undefined4 *)(param_1 + 0x28) = 0xffffffd6;
            return;
        case 0xd:
        case 0xe:
        case 0xf:
            *(undefined4 *)(param_1 + 0x28) = 0xffffffbe;
            return;
        }
    }
    *(undefined4 *)(param_1 + 0x28) = 0xffffffb4;
    return;
}



void SetShakingDist(int param_1,int param_2)

{
    int iVar1;
    
    iVar1 = *(int *)(param_2 + 0x28);
    if (iVar1 < 0x1) {
        iVar1 = -iVar1;
    }
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 0x1;
    if (false) {
switchD_00042a34_caseD_0:
        iVar1 = (int)(char)(&DAT_0017827f)[iVar1];
    }
    else {
        switch(*(undefined4 *)(param_2 + 0x4)) {
        default:
            goto switchD_00042a34_caseD_0;
        case 0x1:
            iVar1 = (int)*(char *)((int)&PTR_LAB_001781cc + iVar1 + 0x3);
            break;
        case 0x2:
            iVar1 = (int)(char)(&DAT_001781e3)[iVar1];
            break;
        case 0x3:
            iVar1 = (int)(char)(&DAT_001781f7)[iVar1];
            break;
        case 0x4:
        case 0x9:
        case 0xa:
        case 0xb:
        case 0xc:
            iVar1 = (int)(char)combo6Shake[iVar1 + 0x17];
            break;
        case 0xd:
        case 0xe:
        case 0xf:
            iVar1 = (int)(char)(&DAT_0017823b)[iVar1];
        }
    }
    iVar1 *= gTheGame._120332_4_;
    *(int *)(param_1 + 0x4adc) = *(int *)(param_1 + 0x4adc) + iVar1;
    *(int *)(param_1 + 0x4ad8) = *(int *)(param_1 + 0x4ad8) + iVar1;
    *(int *)(param_1 + 0x4afc) = *(int *)(param_1 + 0x4afc) - iVar1;
    return;
}



void AttackFly(int param_1,undefined4 *param_2,int param_3)

{
    float fVar1;
    int iVar2;
    undefined4 *puVar3;
    int iVar4;
    uint uVar5;
    double local_30;
    double local_10;
    
    iVar2 = 0x0;
    param_2[0x3] = param_2[0x3] + -0x1;
    if ((int)param_2[0x3] < 0x1) {
        puVar3 = param_2 + 0xc;
        if (gTheGame._120328_4_ < 0x3) {
            if (param_3 == 0x0) {
                iVar2 = -0x1;
            }
            else if (param_3 == 0x1) {
                iVar2 = 0x1;
            }
        }
        else if (0x2 < gTheGame._120328_4_) {
            iVar2 = -0x1;
        }
        gOverflow += 0x1e;
        iVar4 = param_2[0x3];
        if (iVar4 < -0x5) {
            if (iVar4 < -0x18) {
                if (param_2[0x2] == -0x1) {
                    if ((param_2[0x1] == 0xa) && (param_2[0xa] != -0x1)) {
                        param_2[0x2] = *(undefined4 *)(param_1 + param_2[0xa] * 0x50 + 0x2528);
                    }
                    else {
                        if (gTheGame._120332_4_ == 0x1) {
                            iVar4 = *(int *)(st_Attack2DTopPosition + param_3 * 0x18);
                            *(int *)(st_Attack2DTopPosition + param_3 * 0x18) = iVar4 + 0x1;
                        }
                        else {
                            iVar4 = *(int *)(st_Attack3DTopPosition + param_3 * 0x18);
                            *(int *)(st_Attack3DTopPosition + param_3 * 0x18) = iVar4 + 0x1;
                        }
                        if (0x5 < iVar4) {
                            iVar4 = 0x5;
                        }
                        param_2[0x2] = iVar4;
                    }
                }
                if (gTheGame._120332_4_ == 0x1) {
                    uVar5 = param_2[0x4];
                    local_10 = (double)CONCAT44(0x43300000,
                                                *(uint *)(st_Attack2DTopPosition +
                                                         param_2[0x2] * 0x4 + param_3 * 0x18) ^
                                                0x80000000);
                    param_2[0x4] = uVar5 + iVar2 * 0x5;
                    fVar1 = (10.0 - (float)((double)CONCAT44(0x43300000,param_2[0x9] ^ 0x80000000) -
                                           4503601774854144.0)) /
                            ((float)(local_10 - 4503601774854144.0) -
                            (float)((double)CONCAT44(0x43300000,uVar5 ^ 0x80000000) -
                                   4503601774854144.0));
                    param_2[0x9] = (int)((10.0 - fVar1 * (float)(local_10 - 4503601774854144.0)) +
                                        fVar1 * (float)((double)CONCAT44(0x43300000,
                                                                         param_2[0x4] ^ 0x80000000)
                                                       - 4503601774854144.0));
                }
                else {
                    uVar5 = param_2[0x4];
                    local_30 = (double)CONCAT44(0x43300000,
                                                *(uint *)(st_Attack3DTopPosition +
                                                         param_2[0x2] * 0x4 + param_3 * 0x18) ^
                                                0x80000000);
                    param_2[0x4] = uVar5 + iVar2 * 0x5;
                    fVar1 = (10.0 - (float)((double)CONCAT44(0x43300000,param_2[0x9] ^ 0x80000000) -
                                           4503601774854144.0)) /
                            ((float)(local_30 - 4503601774854144.0) -
                            (float)((double)CONCAT44(0x43300000,uVar5 ^ 0x80000000) -
                                   4503601774854144.0));
                    param_2[0x9] = (int)((10.0 - fVar1 * (float)(local_30 - 4503601774854144.0)) +
                                        fVar1 * (float)((double)CONCAT44(0x43300000,
                                                                         param_2[0x4] ^ 0x80000000)
                                                       - 4503601774854144.0));
                }
            }
            else {
                param_2[0x4] = param_2[0x4] + (char)chain4Shake[-iVar4 + 0x46] * iVar2;
                param_2[0x9] = param_2[0x9] + (int)(char)attack_flyingX[-iVar4 + 0xe];
            }
        }
        else {
            param_2[0x4] = param_2[0x4] + iVar2 * -0x2;
            param_2[0x9] = param_2[0x9] + 0x2;
        }
        if (gTheGame._120332_4_ == 0x1) {
            *(short *)puVar3 = (short)(param_2[0x4] << 0x2);
            *(short *)(param_2 + 0xe) = (short)(param_2[0x9] << 0x2);
            if (gTheGame._120328_4_ < 0x3) {
                if ((int)param_2[0x9] < 0xb) {
                    param_2[0x3] = 0x3c;
                    *(short *)puVar3 =
                         (short)(*(int *)(st_Attack2DTopPosition +
                                         param_2[0x2] * 0x4 + param_3 * 0x18) << 0x2);
                    *(undefined2 *)(param_2 + 0xe) = 0x28;
                    Init2DBrickTMEM(param_2);
                    *param_2 = 0x2;
                }
            }
            else {
                param_2[0x2] = 0x5;
                param_2[0x3] = 0x3c;
                *(short *)puVar3 =
                     (short)(*(int *)(st_Attack2DTopPosition + param_2[0x2] * 0x4 + param_3 * 0x18)
                            << 0x2);
                *(undefined2 *)(param_2 + 0xe) = 0x28;
                Init2DBrickTMEM(param_2);
                *param_2 = 0x2;
            }
        }
        else {
            *(short *)((int)param_2 + 0x32) = (short)param_2[0x4];
            *(short *)((int)param_2 + 0x3a) = (short)param_2[0x9];
            if ((int)param_2[0x9] < 0xb) {
                param_2[0x3] = 0x3c;
                *(short *)puVar3 =
                     (short)*(undefined4 *)
                             (st_Attack3DTopPosition + param_2[0x2] * 0x4 + param_3 * 0x18);
                *(undefined2 *)(param_2 + 0xe) = 0xa;
                *param_2 = 0x2;
            }
        }
    }
    return;
}



void pon_AttackFly4p(undefined4 param_1,undefined4 *param_2,int param_3)

{
    param_2[0x3] = param_2[0x3] + -0x1;
    if ((int)param_2[0x3] < 0x1) {
        *(short *)(param_2 + 0xc) = (short)(param_2[0x4] << 0x2);
        *(short *)(param_2 + 0xe) = (short)(param_2[0x9] << 0x2);
        param_2[0x2] = 0x5;
        param_2[0x3] = 0x3c;
        *(short *)(param_2 + 0xc) =
             (short)(*(int *)(st_Attack2DTopPosition + param_2[0x2] * 0x4 + param_3 * 0x18) << 0x2);
        *(undefined2 *)(param_2 + 0xe) = 0x28;
        Init2DBrickTMEM(param_2);
        *param_2 = 0x2;
    }
    return;
}



void AttackTop(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
    int *piVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    uint uVar9;
    
    iVar6 = 0x0;
    iVar4 = 0x0;
    if ((param_3[0x1] == 0xa) && (param_3[0xa] != -0x1)) {
        piVar1 = (int *)(param_1 + param_3[0xa] * 0x50 + 0x2520);
        if (piVar1[0x1] < 0xa) {
            *param_3 = 0x0;
            return;
        }
        if (*piVar1 == 0x1) {
            return;
        }
        *piVar1 = 0x2;
        piVar1[0x1] = piVar1[0x1] + 0x1;
        if (gTheGame._120332_4_ == 0x1) {
            piVar1[0x5] = piVar1[0x5] + 0x1;
            if (0x16 < piVar1[0x1]) {
                piVar1[0x1] = 0x16;
            }
            if (0xc < piVar1[0x5]) {
                piVar1[0x5] = 0xc;
            }
            Init2DBrickTMEM(piVar1);
        }
        else {
            if (0x16 < piVar1[0x1]) {
                piVar1[0x1] = 0x16;
            }
            *(char *)((int)piVar1 + 0x46) = *(char *)((int)piVar1 + 0x46) + '\x01';
            if (piVar1[0x1] == 0x16) {
                *(undefined *)((int)piVar1 + 0x46) = 0x6;
            }
            else if (0x6 < *(byte *)((int)piVar1 + 0x46)) {
                *(undefined *)((int)piVar1 + 0x46) = 0x1;
            }
            Set3DRingPosition(piVar1);
        }
        piVar1[0x3] = 0x3c;
        *param_3 = 0x0;
        return;
    }
    if (0x0 < param_3[0x3]) {
        param_3[0x3] = param_3[0x3] + -0x1;
    }
    if (param_3[0x3] == 0x0) {
        if (gTheGame._120328_4_ < 0x3) {
            if ((param_4 == 0x0) && (gTheGame._41544_4_ != 0x0)) {
                param_3[0x3] = 0x1;
            }
            else if ((param_4 == 0x1) && (gTheGame._19080_4_ != 0x0)) {
                param_3[0x3] = param_3[0x3] + 0x1;
            }
        }
        if (param_3[0x3] == 0x0) {
            if ((gTheGame._120332_4_ == 0x2) && (param_2[0x6] != 0x0)) {
                param_3[0x3] = 0x1;
            }
            else if (param_3[0x2] < 0x5) {
                if (0x9 < param_3[0x1]) {
                    iVar7 = 0x8;
                    iVar5 = param_1;
                    do {
                        if ((((*(int *)(iVar5 + 0x2524) == 0xa) &&
                             (*(int *)(iVar5 + 0x2548) == param_5)) &&
                            (0x0 < *(int *)(iVar5 + 0x2520))) && (*(int *)(iVar5 + 0x2520) < 0x3)) {
                            param_3[0x3] = param_3[0x3] + 0x1;
                            break;
                        }
                        if (((*(int *)(iVar5 + 0x2574) == 0xa) &&
                            (*(int *)(iVar5 + 0x2598) == param_5)) &&
                           ((0x0 < *(int *)(iVar5 + 0x2570) && (*(int *)(iVar5 + 0x2570) < 0x3)))) {
                            param_3[0x3] = param_3[0x3] + 0x1;
                            break;
                        }
                        if (((*(int *)(iVar5 + 0x25c4) == 0xa) &&
                            (*(int *)(iVar5 + 0x25e8) == param_5)) &&
                           ((0x0 < *(int *)(iVar5 + 0x25c0) && (*(int *)(iVar5 + 0x25c0) < 0x3)))) {
                            param_3[0x3] = param_3[0x3] + 0x1;
                            break;
                        }
                        if ((((*(int *)(iVar5 + 0x2614) == 0xa) &&
                             (*(int *)(iVar5 + 0x2638) == param_5)) &&
                            (0x0 < *(int *)(iVar5 + 0x2610))) && (*(int *)(iVar5 + 0x2610) < 0x3)) {
                            param_3[0x3] = param_3[0x3] + 0x1;
                            break;
                        }
                        if (((*(int *)(iVar5 + 0x2664) == 0xa) &&
                            (*(int *)(iVar5 + 0x2688) == param_5)) &&
                           ((0x0 < *(int *)(iVar5 + 0x2660) && (*(int *)(iVar5 + 0x2660) < 0x3)))) {
                            param_3[0x3] = param_3[0x3] + 0x1;
                            break;
                        }
                        iVar5 += 0x190;
                        iVar7 += -0x1;
                    } while (iVar7 != 0x0);
                }
            }
            else {
                param_3[0x3] = param_3[0x3] + 0x1;
            }
        }
    }
    if (0x0 < param_3[0x3]) {
        piVar1 = param_3 + 0xc;
        if (gTheGame._120332_4_ != 0x1) {
            *(undefined2 *)(param_3 + 0xe) = 0xa;
            iVar6 = (int)*(short *)piVar1;
            if (*param_3 == 0x2) {
                *param_3 = 0x3;
                if (param_4 == 0x0) {
                    Start3DExBlosion(0x2a6608,0x1,iVar6 + 0x3,0xd);
                }
                else if (param_4 == 0x1) {
                    Start3DExBlosion(gTheGame,0x0,iVar6 + 0x3,0xd);
                }
            }
            iVar5 = *(int *)(st_Attack3DTopPosition + param_3[0x2] * 0x4 + param_4 * 0x18);
            if (param_4 == 0x0) {
                iVar4 = 0x1;
                if (0xa < iVar5 - iVar6) {
                    iVar4 = 0x3;
                }
            }
            else if ((param_4 == 0x1) && (iVar4 = -0x1, 0xa < iVar6 - iVar5)) {
                iVar4 = -0x3;
            }
            if (iVar6 == iVar5) {
                return;
            }
            iVar6 += iVar4 * 0x2;
            if ((((param_4 != 0x0) || (iVar4 = iVar5, iVar6 <= iVar5)) &&
                (iVar4 = iVar6, param_4 == 0x1)) && (iVar6 < iVar5)) {
                iVar4 = iVar5;
            }
            *(short *)piVar1 = (short)iVar4;
            return;
        }
        *(undefined2 *)(param_3 + 0xe) = 0x28;
        iVar6 = (int)*(short *)piVar1 >> 0x2;
        if (*param_3 == 0x2) {
            *param_3 = 0x3;
            if (gTheGame._120328_4_ < 0x3) {
                if (param_4 == 0x0) {
                    Start2DExBlosion(0x2a6608,iVar6 + 0x2,0x9);
                }
                else if (param_4 == 0x1) {
                    Start2DExBlosion(gTheGame,iVar6 + 0x2,0x9);
                }
            }
            else if (param_3[0x1] < 0xa) {
                if (param_3[0x1] != 0x0) {
                    Start2DExBlosion(gTheGame + param_3[0x13] * 0x57c0,iVar6 + 0x2,0x9);
                }
            }
            else {
                Start2DExBlosion(gTheGame + param_3[0x12] * 0x57c0,iVar6 + 0x2,0x9);
            }
        }
        iVar5 = *(int *)(st_Attack2DTopPosition + param_3[0x2] * 0x4 + param_4 * 0x18);
        if (param_4 == 0x0) {
            iVar4 = 0x2;
            if (0xa < iVar5 - iVar6) {
                iVar4 = 0x4;
            }
        }
        else if (param_4 == 0x1) {
            iVar4 = -0x2;
            if (0xa < iVar6 - iVar5) {
                iVar4 = -0x4;
            }
        }
        else if (param_4 == 0x2) {
            iVar4 = -0x2;
            if (0xa < iVar6 - iVar5) {
                iVar4 = -0x4;
            }
        }
        else if ((param_4 == 0x3) && (iVar4 = -0x2, 0xa < iVar6 - iVar5)) {
            iVar4 = -0x4;
        }
        if (iVar6 == iVar5) {
            return;
        }
        iVar6 += iVar4;
        iVar4 = iVar5;
        if ((((param_4 != 0x0) || (iVar6 <= iVar5)) && ((param_4 != 0x1 || (iVar5 <= iVar6)))) &&
           ((((param_4 != 0x2 || (iVar5 <= iVar6)) && (iVar4 = iVar6, param_4 == 0x3)) &&
            (iVar6 < iVar5)))) {
            iVar4 = iVar5;
        }
        *(short *)piVar1 = (short)(iVar4 << 0x2);
        return;
    }
    if (param_3[0x1] == 0x16) {
        param_3[0x1] = 0x15;
    }
    if (param_3[0x3] == 0x0) {
        if (gTheGame._120332_4_ == 0x1) {
            if (gTheGame._120328_4_ < 0x3) {
                if (param_4 == 0x0) {
                    Start2DExBlosion(0x2a6608,((int)*(short *)(param_3 + 0xc) >> 0x2) + 0x2,0x9);
                }
                else if (param_4 == 0x1) {
                    Start2DExBlosion(gTheGame,((int)*(short *)(param_3 + 0xc) >> 0x2) + 0x2,0x9);
                }
            }
        }
        else if (param_4 == 0x0) {
            Start3DExBlosion(0x2a6608,0x1,*(short *)(param_3 + 0xc) + 0x2,0xd);
        }
        else if (param_4 == 0x1) {
            Start3DExBlosion(gTheGame,0x0,*(short *)(param_3 + 0xc) + 0x2,0xd);
        }
    }
    if (param_2[0x7] == -0x1) {
        if (*param_2 == 0x1) {
            iVar5 = 0x0;
        }
        else if (*param_2 == 0x2) {
            iVar5 = 0x0;
        }
        else if (param_2[0x2] < 0x1) {
            iVar7 = 0x4;
            iVar5 = -0x1;
            iVar4 = param_1;
            do {
                if (*(int *)(iVar4 + 0x2520) == 0x0) break;
                if ((0x6 < *(int *)(iVar4 + 0x2520)) && (*(int *)(iVar4 + 0x2544) == 0xc)) {
                    iVar5 = 0x0;
                    break;
                }
                if (*(int *)(iVar4 + 0x2570) == 0x0) break;
                if ((0x6 < *(int *)(iVar4 + 0x2570)) && (*(int *)(iVar4 + 0x2594) == 0xc)) {
                    iVar5 = 0x0;
                    break;
                }
                if (*(int *)(iVar4 + 0x25c0) == 0x0) break;
                if ((0x6 < *(int *)(iVar4 + 0x25c0)) && (*(int *)(iVar4 + 0x25e4) == 0xc)) {
                    iVar5 = 0x0;
                    break;
                }
                if (*(int *)(iVar4 + 0x2610) == 0x0) break;
                if ((0x6 < *(int *)(iVar4 + 0x2610)) && (*(int *)(iVar4 + 0x2634) == 0xc)) {
                    iVar5 = 0x0;
                    break;
                }
                if (*(int *)(iVar4 + 0x2660) == 0x0) break;
                if ((0x6 < *(int *)(iVar4 + 0x2660)) && (*(int *)(iVar4 + 0x2684) == 0xc)) {
                    iVar5 = 0x0;
                    break;
                }
                if (*(int *)(iVar4 + 0x26b0) == 0x0) break;
                if ((0x6 < *(int *)(iVar4 + 0x26b0)) && (*(int *)(iVar4 + 0x26d4) == 0xc)) {
                    iVar5 = 0x0;
                    break;
                }
                if (*(int *)(iVar4 + 0x2700) == 0x0) break;
                if ((0x6 < *(int *)(iVar4 + 0x2700)) && (*(int *)(iVar4 + 0x2724) == 0xc)) {
                    iVar5 = 0x0;
                    break;
                }
                if (*(int *)(iVar4 + 0x2750) == 0x0) break;
                if ((0x6 < *(int *)(iVar4 + 0x2750)) && (*(int *)(iVar4 + 0x2774) == 0xc)) {
                    iVar5 = 0x0;
                    break;
                }
                if (*(int *)(iVar4 + 0x27a0) == 0x0) break;
                if ((0x6 < *(int *)(iVar4 + 0x27a0)) && (*(int *)(iVar4 + 0x27c4) == 0xc)) {
                    iVar5 = 0x0;
                    break;
                }
                if (*(int *)(iVar4 + 0x27f0) == 0x0) break;
                if ((0x6 < *(int *)(iVar4 + 0x27f0)) && (*(int *)(iVar4 + 0x2814) == 0xc)) {
                    iVar5 = 0x0;
                    break;
                }
                iVar4 += 0x320;
                iVar7 += -0x1;
            } while (iVar7 != 0x0);
            if (iVar5 != 0x0) {
                iVar5 = param_3[0x6];
                iVar6 = 0xb;
                iVar4 = param_3[0x7];
                if (iVar5 == iVar4) {
                    iVar8 = 0x2;
                    iVar7 = 0x0;
                    iVar5 = param_1;
                    do {
                        iVar3 = iVar7;
                        if ((((*(int *)(iVar5 + 0x2218) != 0x0) ||
                             (iVar3 = iVar7 + 0x1, *(int *)(iVar5 + 0x2244) != 0x0)) ||
                            (iVar3 = iVar7 + 0x2, *(int *)(iVar5 + 0x2270) != 0x0)) ||
                           ((((iVar3 = iVar7 + 0x3, *(int *)(iVar5 + 0x229c) != 0x0 ||
                              (iVar3 = iVar7 + 0x4, *(int *)(iVar5 + 0x22c8) != 0x0)) ||
                             ((iVar3 = iVar7 + 0x5, *(int *)(iVar5 + 0x22f4) != 0x0 ||
                              ((iVar3 = iVar7 + 0x6, *(int *)(iVar5 + 0x2320) != 0x0 ||
                               (iVar3 = iVar7 + 0x7, *(int *)(iVar5 + 0x234c) != 0x0)))))) ||
                            (iVar3 = iVar7 + 0x8, *(int *)(iVar5 + 0x2378) != 0x0)))) break;
                        iVar5 += 0x18c;
                        iVar7 += 0x9;
                        iVar8 += -0x1;
                        iVar3 = iVar7;
                    } while (iVar8 != 0x0);
                    iVar5 = iVar4;
                    if (iVar3 != 0x12) {
                        iVar5 = -0x1;
                    }
                }
                else if (iVar4 < iVar5) {
                    iVar7 = 0x12 - iVar5;
                    iVar8 = param_1 + iVar5 * 0x2c;
                    if (iVar5 < 0x12) {
                        do {
                            if (*(int *)(iVar8 + 0x2218) != 0x0) break;
                            iVar8 += 0x2c;
                            iVar5 += 0x1;
                            iVar7 += -0x1;
                        } while (iVar7 != 0x0);
                    }
                    if ((iVar5 == 0x12) && (iVar5 = 0x0, iVar7 = param_1, 0x0 < iVar4)) {
                        do {
                            if (*(int *)(iVar7 + 0x2218) != 0x0) break;
                            iVar7 += 0x2c;
                            iVar5 += 0x1;
                            iVar4 += -0x1;
                        } while (iVar4 != 0x0);
                    }
                }
                else {
                    iVar7 = iVar4 - iVar5;
                    iVar8 = param_1 + iVar5 * 0x2c;
                    if (iVar5 < iVar4) {
                        do {
                            if (*(int *)(iVar8 + 0x2218) != 0x0) break;
                            iVar8 += 0x2c;
                            iVar5 += 0x1;
                            iVar7 += -0x1;
                        } while (iVar7 != 0x0);
                    }
                }
            }
        }
        else {
            iVar5 = 0x0;
        }
    }
    else {
        iVar5 = 0x0;
    }
    if (iVar5 != param_3[0x7]) {
        *param_3 = 0x4;
        return;
    }
    param_3[0x4] = 0x0;
    param_3[0x2] = -0x1;
    param_3[0x8] = 0x0;
    param_3[0x9] = 0xb;
    if (*param_3 != 0x4) {
        param_3[0x3] = 0x0;
    }
    *param_3 = 0x5;
    *param_2 = 0x3;
    if (gTheGame._120332_4_ == 0x1) {
        iVar5 = param_3[0x6];
        iVar4 = param_1 + iVar6 * 0x318 + iVar5 * 0x2c;
        param_1 += iVar6 * 0x90 + iVar5 * 0x18;
        iVar6 = 0x0;
        for (; iVar5 < param_3[0x7]; iVar5 += 0x1) {
            *(undefined4 *)(iVar4 + 0x10) = 0x9;
            Init2DAttackTMEM(param_1 + 0x3f10,param_3[0x1],0x0,iVar6);
            iVar6 += 0x1;
            iVar4 += 0x2c;
            param_1 += 0x18;
        }
        return;
    }
    iVar4 = param_3[0x6];
    if (iVar4 == param_3[0x7]) {
        param_1 += iVar6 * 0x318;
        *(undefined4 *)(param_1 + 0x10) = 0x9;
        *(undefined4 *)(param_1 + 0x3c) = 0x9;
        *(undefined4 *)(param_1 + 0x68) = 0x9;
        *(undefined4 *)(param_1 + 0x94) = 0x9;
        *(undefined4 *)(param_1 + 0xc0) = 0x9;
        *(undefined4 *)(param_1 + 0xec) = 0x9;
        *(undefined4 *)(param_1 + 0x118) = 0x9;
        *(undefined4 *)(param_1 + 0x144) = 0x9;
        *(undefined4 *)(param_1 + 0x170) = 0x9;
        *(undefined4 *)(param_1 + 0x19c) = 0x9;
        *(undefined4 *)(param_1 + 0x1c8) = 0x9;
        *(undefined4 *)(param_1 + 0x1f4) = 0x9;
        *(undefined4 *)(param_1 + 0x220) = 0x9;
        *(undefined4 *)(param_1 + 0x24c) = 0x9;
        *(undefined4 *)(param_1 + 0x278) = 0x9;
        *(undefined4 *)(param_1 + 0x2a4) = 0x9;
        param_1 += 0x2c0;
        iVar4 = 0x2;
        if (false) {
            return;
        }
        do {
            *(undefined4 *)(param_1 + 0x10) = 0x9;
            param_1 += 0x2c;
            iVar4 += -0x1;
        } while (iVar4 != 0x0);
        return;
    }
    if (iVar4 <= param_3[0x7]) {
        param_1 += iVar6 * 0x318 + iVar4 * 0x2c;
        for (; iVar4 < param_3[0x7]; iVar4 += 0x1) {
            *(undefined4 *)(param_1 + 0x10) = 0x9;
            param_1 += 0x2c;
        }
        return;
    }
    param_1 += iVar6 * 0x318;
    iVar6 = param_1 + iVar4 * 0x2c;
    uVar2 = 0x12 - iVar4;
    if (iVar4 < 0x12) {
        uVar9 = uVar2 >> 0x3;
        if (uVar9 != 0x0) {
            do {
                *(undefined4 *)(iVar6 + 0x10) = 0x9;
                *(undefined4 *)(iVar6 + 0x3c) = 0x9;
                *(undefined4 *)(iVar6 + 0x68) = 0x9;
                *(undefined4 *)(iVar6 + 0x94) = 0x9;
                *(undefined4 *)(iVar6 + 0xc0) = 0x9;
                *(undefined4 *)(iVar6 + 0xec) = 0x9;
                *(undefined4 *)(iVar6 + 0x118) = 0x9;
                *(undefined4 *)(iVar6 + 0x144) = 0x9;
                iVar6 += 0x160;
                uVar9 -= 0x1;
            } while (uVar9 != 0x0);
            uVar2 &= 0x7;
            if (uVar2 == 0x0) goto LAB_00043a94;
        }
        do {
            *(undefined4 *)(iVar6 + 0x10) = 0x9;
            iVar6 += 0x2c;
            uVar2 -= 0x1;
        } while (uVar2 != 0x0);
    }
LAB_00043a94:
    for (iVar4 = 0x0; iVar4 < param_3[0x7]; iVar4 += 0x1) {
        *(undefined4 *)(param_1 + 0x10) = 0x9;
        param_1 += 0x2c;
    }
    return;
}



void pon_AttackTop4p(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
    int *piVar1;
    undefined1 *puVar2;
    undefined1 *puVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    
    iVar6 = 0x0;
    iVar4 = 0x0;
    if ((param_3[0x1] == 0xa) && (param_3[0xa] != -0x1)) {
        piVar1 = (int *)(param_1 + param_3[0xa] * 0x50 + 0x4b18);
        if (piVar1[0x1] < 0xa) {
            *param_3 = 0x0;
        }
        else if (*piVar1 != 0x1) {
            *piVar1 = 0x2;
            piVar1[0x1] = piVar1[0x1] + 0x1;
            if (gTheGame._120332_4_ == 0x1) {
                piVar1[0x5] = piVar1[0x5] + 0x1;
                if (0x16 < piVar1[0x1]) {
                    piVar1[0x1] = 0x16;
                }
                if (0xc < piVar1[0x5]) {
                    piVar1[0x5] = 0xc;
                }
                Init2DBrickTMEM(piVar1);
            }
            else {
                if (0x16 < piVar1[0x1]) {
                    piVar1[0x1] = 0x16;
                }
                *(char *)((int)piVar1 + 0x46) = *(char *)((int)piVar1 + 0x46) + '\x01';
                if (piVar1[0x1] == 0x16) {
                    *(undefined *)((int)piVar1 + 0x46) = 0x6;
                }
                else if (0x6 < *(byte *)((int)piVar1 + 0x46)) {
                    *(undefined *)((int)piVar1 + 0x46) = 0x1;
                }
                Set3DRingPosition(piVar1);
            }
            piVar1[0x3] = 0x3c;
            *param_3 = 0x0;
        }
    }
    else {
        if (0x0 < param_3[0x3]) {
            param_3[0x3] = param_3[0x3] + -0x1;
        }
        iVar5 = param_4;
        if (param_3[0x3] == 0x0) {
            if (*(int *)(param_1 + 0x4a88) == 0x0) {
                if ((gTheGame._120332_4_ == 0x2) && (param_2[0x6] != 0x0)) {
                    param_3[0x3] = 0x1;
                }
                else if (param_3[0x2] < 0x5) {
                    if (0x9 < param_3[0x1]) {
                        iVar7 = 0x8;
                        iVar8 = param_1;
                        iVar9 = 0x0;
                        do {
                            iVar5 = iVar9;
                            if ((((*(int *)(iVar8 + 0x4b1c) == 0xa) &&
                                 (*(int *)(iVar8 + 0x4b40) == param_5)) &&
                                (0x0 < *(int *)(iVar8 + 0x4b18))) &&
                               (*(int *)(iVar8 + 0x4b18) < 0x3)) {
                                param_3[0x3] = param_3[0x3] + 0x1;
                                break;
                            }
                            if (((*(int *)(iVar8 + 0x4b6c) == 0xa) &&
                                (*(int *)(iVar8 + 0x4b90) == param_5)) &&
                               ((0x0 < *(int *)(iVar8 + 0x4b68) && (*(int *)(iVar8 + 0x4b68) < 0x3))
                               )) {
                                param_3[0x3] = param_3[0x3] + 0x1;
                                break;
                            }
                            iVar5 = iVar9 + 0x1;
                            if (((*(int *)(iVar8 + 0x4bbc) == 0xa) &&
                                (*(int *)(iVar8 + 0x4be0) == param_5)) &&
                               ((0x0 < *(int *)(iVar8 + 0x4bb8) && (*(int *)(iVar8 + 0x4bb8) < 0x3))
                               )) {
                                param_3[0x3] = param_3[0x3] + 0x1;
                                break;
                            }
                            iVar5 = iVar9 + 0x2;
                            if ((((*(int *)(iVar8 + 0x4c0c) == 0xa) &&
                                 (*(int *)(iVar8 + 0x4c30) == param_5)) &&
                                (0x0 < *(int *)(iVar8 + 0x4c08))) &&
                               (*(int *)(iVar8 + 0x4c08) < 0x3)) {
                                param_3[0x3] = param_3[0x3] + 0x1;
                                break;
                            }
                            iVar5 = iVar9 + 0x3;
                            if (((*(int *)(iVar8 + 0x4c5c) == 0xa) &&
                                (*(int *)(iVar8 + 0x4c80) == param_5)) &&
                               ((0x0 < *(int *)(iVar8 + 0x4c58) && (*(int *)(iVar8 + 0x4c58) < 0x3))
                               )) {
                                param_3[0x3] = param_3[0x3] + 0x1;
                                break;
                            }
                            iVar8 += 0x190;
                            iVar5 = iVar9 + 0x4;
                            iVar7 += -0x1;
                            iVar9 = iVar5;
                        } while (iVar7 != 0x0);
                    }
                }
                else {
                    param_3[0x3] = param_3[0x3] + 0x1;
                }
            }
            else {
                param_3[0x3] = 0x1;
            }
        }
        if (param_3[0x3] < 0x1) {
            if (param_3[0x1] == 0x16) {
                param_3[0x1] = 0x15;
            }
            if (param_3[0x3] == 0x0) {
                if (0x9 < param_3[0x1]) {
                    if (*param_3 == 0x0) {
                        gc_assert(0x0,_728,0x70e,_729,0x0,0x0,0x0);
                    }
                    iVar6 = 0x28;
                    puVar3 = gTheGame + *(int *)(param_1 + 0x57a4) * 0x57c0;
                    iVar4 = 0x0;
                    puVar2 = puVar3;
                    do {
                        if (*(int *)(puVar2 + 0x2520) == 0x0) {
                            memcpy(puVar3 + iVar4 * 0x50 + 0x2520,param_3,0x50);
                            break;
                        }
                        puVar2 = puVar2 + 0x50;
                        iVar4 += 0x1;
                        iVar6 += -0x1;
                    } while (iVar6 != 0x0);
                    bzero(param_3,0x50);
                    *(int *)(puVar3 + iVar4 * 0x50 + 0x2568) = param_4;
                    *(undefined4 *)(attack_chain2 + *(int *)(param_1 + 0x57a4) * 0x4) =
                         *(undefined4 *)(attack_chain2C + param_4 * 0x4);
                    *(undefined4 *)(attack_chain2C + param_4 * 0x4) = 0x0;
                    return;
                }
                if (param_3[0x1] != 0x0) {
                    gc_assert(0x0,_728,0x72b,_730,0x0,0x0,0x0);
                }
            }
            if (param_2[0x7] == -0x1) {
                if (*param_2 == 0x1) {
                    iVar5 = 0x0;
                }
                else if (*param_2 == 0x2) {
                    iVar5 = 0x0;
                }
                else if (param_2[0x2] < 0x1) {
                    iVar8 = 0x4;
                    iVar5 = -0x1;
                    iVar4 = param_1;
                    do {
                        if (*(int *)(iVar4 + 0x2520) == 0x0) break;
                        if ((0x6 < *(int *)(iVar4 + 0x2520)) && (*(int *)(iVar4 + 0x2544) == 0xc)) {
                            iVar5 = 0x0;
                            break;
                        }
                        if (*(int *)(iVar4 + 0x2570) == 0x0) break;
                        if ((0x6 < *(int *)(iVar4 + 0x2570)) && (*(int *)(iVar4 + 0x2594) == 0xc)) {
                            iVar5 = 0x0;
                            break;
                        }
                        if (*(int *)(iVar4 + 0x25c0) == 0x0) break;
                        if ((0x6 < *(int *)(iVar4 + 0x25c0)) && (*(int *)(iVar4 + 0x25e4) == 0xc)) {
                            iVar5 = 0x0;
                            break;
                        }
                        if (*(int *)(iVar4 + 0x2610) == 0x0) break;
                        if ((0x6 < *(int *)(iVar4 + 0x2610)) && (*(int *)(iVar4 + 0x2634) == 0xc)) {
                            iVar5 = 0x0;
                            break;
                        }
                        if (*(int *)(iVar4 + 0x2660) == 0x0) break;
                        if ((0x6 < *(int *)(iVar4 + 0x2660)) && (*(int *)(iVar4 + 0x2684) == 0xc)) {
                            iVar5 = 0x0;
                            break;
                        }
                        if (*(int *)(iVar4 + 0x26b0) == 0x0) break;
                        if ((0x6 < *(int *)(iVar4 + 0x26b0)) && (*(int *)(iVar4 + 0x26d4) == 0xc)) {
                            iVar5 = 0x0;
                            break;
                        }
                        if (*(int *)(iVar4 + 0x2700) == 0x0) break;
                        if ((0x6 < *(int *)(iVar4 + 0x2700)) && (*(int *)(iVar4 + 0x2724) == 0xc)) {
                            iVar5 = 0x0;
                            break;
                        }
                        if (*(int *)(iVar4 + 0x2750) == 0x0) break;
                        if ((0x6 < *(int *)(iVar4 + 0x2750)) && (*(int *)(iVar4 + 0x2774) == 0xc)) {
                            iVar5 = 0x0;
                            break;
                        }
                        if (*(int *)(iVar4 + 0x27a0) == 0x0) break;
                        if ((0x6 < *(int *)(iVar4 + 0x27a0)) && (*(int *)(iVar4 + 0x27c4) == 0xc)) {
                            iVar5 = 0x0;
                            break;
                        }
                        if (*(int *)(iVar4 + 0x27f0) == 0x0) break;
                        if ((0x6 < *(int *)(iVar4 + 0x27f0)) && (*(int *)(iVar4 + 0x2814) == 0xc)) {
                            iVar5 = 0x0;
                            break;
                        }
                        iVar4 += 0x320;
                        iVar8 += -0x1;
                    } while (iVar8 != 0x0);
                    if (iVar5 != 0x0) {
                        iVar5 = *(int *)(param_1 + 0x2538);
                        iVar6 = 0xb;
                        iVar4 = *(int *)(param_1 + 0x253c);
                        if (iVar5 == iVar4) {
                            iVar9 = 0x2;
                            iVar8 = 0x0;
                            iVar5 = param_1;
                            do {
                                iVar7 = iVar8;
                                if ((((((*(int *)(iVar5 + 0x2218) != 0x0) ||
                                       (iVar7 = iVar8 + 0x1, *(int *)(iVar5 + 0x2244) != 0x0)) ||
                                      (iVar7 = iVar8 + 0x2, *(int *)(iVar5 + 0x2270) != 0x0)) ||
                                     ((iVar7 = iVar8 + 0x3, *(int *)(iVar5 + 0x229c) != 0x0 ||
                                      (iVar7 = iVar8 + 0x4, *(int *)(iVar5 + 0x22c8) != 0x0)))) ||
                                    ((iVar7 = iVar8 + 0x5, *(int *)(iVar5 + 0x22f4) != 0x0 ||
                                     ((iVar7 = iVar8 + 0x6, *(int *)(iVar5 + 0x2320) != 0x0 ||
                                      (iVar7 = iVar8 + 0x7, *(int *)(iVar5 + 0x234c) != 0x0)))))) ||
                                   (iVar7 = iVar8 + 0x8, *(int *)(iVar5 + 0x2378) != 0x0)) break;
                                iVar5 += 0x18c;
                                iVar8 += 0x9;
                                iVar9 += -0x1;
                                iVar7 = iVar8;
                            } while (iVar9 != 0x0);
                            iVar5 = iVar4;
                            if (iVar7 != 0x12) {
                                iVar5 = -0x1;
                            }
                        }
                        else if (iVar4 < iVar5) {
                            iVar8 = 0x12 - iVar5;
                            iVar9 = param_1 + iVar5 * 0x2c;
                            if (iVar5 < 0x12) {
                                do {
                                    if (*(int *)(iVar9 + 0x2218) != 0x0) break;
                                    iVar9 += 0x2c;
                                    iVar5 += 0x1;
                                    iVar8 += -0x1;
                                } while (iVar8 != 0x0);
                            }
                            if ((iVar5 == 0x12) && (iVar5 = 0x0, iVar8 = param_1, 0x0 < iVar4)) {
                                do {
                                    if (*(int *)(iVar8 + 0x2218) != 0x0) break;
                                    iVar8 += 0x2c;
                                    iVar5 += 0x1;
                                    iVar4 += -0x1;
                                } while (iVar4 != 0x0);
                            }
                        }
                        else {
                            iVar5 = param_3[0x6];
                            iVar8 = iVar4 - iVar5;
                            iVar9 = param_1 + iVar5 * 0x2c;
                            if (iVar5 < iVar4) {
                                do {
                                    if (*(int *)(iVar9 + 0x2218) != 0x0) break;
                                    iVar9 += 0x2c;
                                    iVar5 += 0x1;
                                    iVar8 += -0x1;
                                } while (iVar8 != 0x0);
                            }
                        }
                    }
                }
                else {
                    iVar5 = 0x0;
                }
            }
            else {
                iVar5 = 0x0;
            }
            if (iVar5 == param_3[0x7]) {
                param_3[0x4] = 0x0;
                param_3[0x2] = -0x1;
                param_3[0x8] = 0x0;
                param_3[0x9] = 0xb;
                if (*param_3 != 0x4) {
                    param_3[0x3] = 0x0;
                }
                *param_3 = 0x5;
                *param_2 = 0x3;
                iVar5 = param_3[0x6];
                iVar4 = param_1 + iVar6 * 0x318 + iVar5 * 0x2c;
                param_1 += iVar6 * 0x90 + iVar5 * 0x18;
                iVar6 = 0x0;
                for (; iVar5 < param_3[0x7]; iVar5 += 0x1) {
                    *(undefined4 *)(iVar4 + 0x10) = 0x9;
                    Init2DAttackTMEM(param_1 + 0x3f10,param_3[0x1],0x0,iVar6);
                    iVar6 += 0x1;
                    iVar4 += 0x2c;
                    param_1 += 0x18;
                }
            }
            else {
                *param_3 = 0x4;
            }
        }
        else {
            *(undefined2 *)(param_3 + 0xe) = 0x28;
            iVar6 = (int)*(short *)(param_3 + 0xc) >> 0x2;
            if (*param_3 == 0x2) {
                *param_3 = 0x3;
                Start2DExBlosion(gTheGame + param_4 * 0x57c0,iVar6 + 0x2,0x9,iVar5);
            }
            iVar5 = *(int *)(st_Attack2DTopPosition + param_3[0x2] * 0x4 + param_4 * 0x18);
            if (param_4 == 0x0) {
                iVar4 = 0x2;
                if (0xa < iVar5 - iVar6) {
                    iVar4 = 0x4;
                }
            }
            else if (param_4 == 0x1) {
                iVar4 = -0x2;
                if (0xa < iVar6 - iVar5) {
                    iVar4 = -0x4;
                }
            }
            else if (param_4 == 0x2) {
                iVar4 = -0x2;
                if (0xa < iVar6 - iVar5) {
                    iVar4 = -0x4;
                }
            }
            else if ((param_4 == 0x3) && (iVar4 = -0x2, 0xa < iVar6 - iVar5)) {
                iVar4 = -0x4;
            }
            if (iVar6 != iVar5) {
                iVar6 += iVar4;
                iVar4 = iVar5;
                if (((((param_4 != 0x0) || (iVar6 <= iVar5)) &&
                     ((param_4 != 0x1 || (iVar5 <= iVar6)))) &&
                    (((param_4 != 0x2 || (iVar5 <= iVar6)) && (iVar4 = iVar6, param_4 == 0x3)))) &&
                   (iVar6 < iVar5)) {
                    iVar4 = iVar5;
                }
                *(short *)(param_3 + 0xc) = (short)(iVar4 << 0x2);
            }
        }
    }
    return;
}



void AttackFall(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int *piVar9;
    
    iVar6 = -0x1;
    iVar5 = -0x1;
    iVar4 = 0x8;
    if (param_3[0x2] == -0x1) {
        if ((int)param_3[0x9] < 0x1) {
            iVar7 = 0x0;
        }
        else {
            iVar7 = param_3[0x9] + -0x1;
        }
        iVar8 = param_3[0x6];
        iVar1 = param_3[0x7];
        if (iVar8 == iVar1) {
            iVar1 = 0x12;
            piVar3 = (int *)(param_1 + iVar7 * 0x318);
            iVar8 = 0x0;
            while ((iVar7 == 0x0 || (piVar3[0x4] != 0x9))) {
                if (*piVar3 != 0x0) {
                    iVar5 = 0x0;
                }
                if ((piVar3[0x4] != 0x0) || (*piVar3 - 0x2U < 0x2)) goto LAB_00044980;
                piVar3 = piVar3 + 0xb;
                iVar8 += 0x1;
                iVar1 += -0x1;
                if (iVar1 == 0x0) goto LAB_00044980;
            }
            iVar7 = ReturnAttackSlot(param_1,iVar7,iVar8);
            if ((iVar7 != -0x1) &&
               ((iVar4 = *(int *)(param_1 + iVar7 * 0x50 + 0x2520), iVar4 == 0x5 || (iVar4 == 0x6)))
               ) {
                iVar5 = 0x0;
            }
LAB_00044980:
            if (iVar8 == 0x12) {
                iVar8 = param_3[0x7];
            }
            else {
                iVar8 = -0x1;
            }
        }
        else if (iVar1 < iVar8) {
            iVar1 = 0x12 - iVar8;
            piVar9 = (int *)(param_1 + iVar7 * 0x318);
            piVar3 = piVar9 + iVar8 * 0xb;
            if (iVar8 < 0x12) {
                while ((iVar7 == 0x0 || (piVar3[0x4] != 0x9))) {
                    if (*piVar3 != 0x0) {
                        iVar5 = 0x0;
                    }
                    if ((piVar3[0x4] != 0x0) || (*piVar3 - 0x2U < 0x2)) goto LAB_00044a44;
                    piVar3 = piVar3 + 0xb;
                    iVar8 += 0x1;
                    iVar1 += -0x1;
                    if (iVar1 == 0x0) goto LAB_00044a44;
                }
                iVar1 = ReturnAttackSlot(param_1,iVar7,iVar8);
                if ((iVar1 != -0x1) &&
                   ((iVar4 = *(int *)(param_1 + iVar1 * 0x50 + 0x2520), iVar4 == 0x5 ||
                    (iVar4 == 0x6)))) {
                    iVar5 = 0x0;
                }
            }
LAB_00044a44:
            if (iVar8 == 0x12) {
                iVar1 = param_3[0x7];
                iVar8 = 0x0;
                if (0x0 < iVar1) {
                    while ((iVar7 == 0x0 || (piVar9[0x4] != 0x9))) {
                        if (*piVar9 != 0x0) {
                            iVar5 = 0x0;
                        }
                        if ((piVar9[0x4] != 0x0) || (*piVar9 - 0x2U < 0x2)) goto LAB_00044b98;
                        piVar9 = piVar9 + 0xb;
                        iVar8 += 0x1;
                        iVar1 += -0x1;
                        if (iVar1 == 0x0) goto LAB_00044b98;
                    }
                    iVar7 = ReturnAttackSlot(param_1,iVar7,iVar8);
                    if ((iVar7 != -0x1) &&
                       ((iVar4 = *(int *)(param_1 + iVar7 * 0x50 + 0x2520), iVar4 == 0x5 ||
                        (iVar4 == 0x6)))) {
                        iVar5 = 0x0;
                    }
                }
            }
        }
        else {
            iVar2 = iVar1 - iVar8;
            piVar3 = (int *)(param_1 + iVar7 * 0x318 + iVar8 * 0x2c);
            if (iVar8 < iVar1) {
                while ((iVar7 == 0x0 || (piVar3[0x4] != 0x9))) {
                    if (*piVar3 != 0x0) {
                        iVar5 = 0x0;
                    }
                    if ((piVar3[0x4] != 0x0) || (*piVar3 - 0x2U < 0x2)) goto LAB_00044b98;
                    piVar3 = piVar3 + 0xb;
                    iVar8 += 0x1;
                    iVar2 += -0x1;
                    if (iVar2 == 0x0) goto LAB_00044b98;
                }
                iVar7 = ReturnAttackSlot(param_1,iVar7,iVar8);
                if ((iVar7 != -0x1) &&
                   ((iVar4 = *(int *)(param_1 + iVar7 * 0x50 + 0x2520), iVar4 == 0x5 ||
                    (iVar4 == 0x6)))) {
                    iVar5 = 0x0;
                }
            }
        }
    }
    else {
        iVar8 = -0x1;
    }
LAB_00044b98:
    if ((iVar8 == param_3[0x7]) || (iVar4 < 0x7)) {
        *param_2 = 0x3;
        return;
    }
    iVar8 = 0x28;
    iVar4 = param_1;
    do {
        if (*(int *)(iVar4 + 0x2520) == 0x7) {
            if ((int)param_3[0x1] < *(int *)(iVar4 + 0x2524)) {
                iVar6 = 0x0;
            }
            else {
                *(undefined4 *)(iVar4 + 0x2520) = 0x8;
                iVar6 = -0x1;
            }
            break;
        }
        iVar4 += 0x50;
        iVar8 += -0x1;
    } while (iVar8 != 0x0);
    if (iVar6 == 0x0) {
        *param_3 = 0x8;
        goto LAB_00044cd4;
    }
    if (gTheGame._120328_4_ < 0x3) {
        iVar4 = 0xdf;
    }
    else {
        iVar4 = 0xd5;
    }
    if (*(int *)(param_1 + 0x4afc) != iVar4) {
        iVar4 = *(int *)(param_1 + 0x4afc) - iVar4;
        *(int *)(param_1 + 0x4adc) = *(int *)(param_1 + 0x4adc) + iVar4;
        *(int *)(param_1 + 0x4ad8) = *(int *)(param_1 + 0x4ad8) + iVar4;
        *(int *)(param_1 + 0x4afc) = *(int *)(param_1 + 0x4afc) - iVar4;
    }
    *param_3 = 0x7;
    if (false) {
switchD_00044c80_caseD_0:
        param_3[0xa] = 0xffffffb4;
    }
    else {
        switch(param_3[0x1]) {
        default:
            goto switchD_00044c80_caseD_0;
        case 0x1:
            param_3[0xa] = 0xffffffee;
            break;
        case 0x2:
            param_3[0xa] = 0xffffffee;
            break;
        case 0x3:
            param_3[0xa] = 0xffffffe8;
            break;
        case 0x4:
        case 0x9:
        case 0xa:
        case 0xb:
        case 0xc:
            param_3[0xa] = 0xffffffd6;
            break;
        case 0xd:
        case 0xe:
        case 0xf:
            param_3[0xa] = 0xffffffbe;
        }
    }
LAB_00044cd4:
    if (iVar5 != 0x0) {
        if ((int)param_3[0x1] < 0xb) {
            if ((int)param_3[0x1] < 0x4) {
                *param_4 = 0x1;
            }
            else {
                *param_4 = 0x2;
            }
        }
        else {
            *param_4 = 0x3;
        }
    }
    return;
}



void AttackShake(undefined4 param_1,int *param_2,undefined4 *param_3)

{
    if ((int)param_3[0xa] < 0x0) {
        if (*param_2 != 0x2) {
            *param_2 = 0x4;
        }
        SetShakingDist(param_1,param_3);
    }
    else {
        *param_3 = 0x8;
        if (*param_2 == 0x4) {
            *param_2 = 0x0;
        }
    }
    return;
}



int AttackToBlock(int param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int *piVar7;
    
    iVar6 = 0x0;
    iVar5 = 0x0;
    if (gSelection == 0x64) {
        iVar1 = TutorialPattern();
    }
    else {
        piVar7 = (int *)(param_1 + 0x4af0);
        if (*(int *)(param_1 + 0x4af0) == 0x1) {
            iVar6 = -0x1;
            *piVar7 = (int)(char)st_Player2State[*(int *)(param_1 + 0x4ae0) * 0xa + 0x7];
        }
        param_3 *= 0x2c;
        iVar2 = param_1 + param_2 * 0x318;
        iVar1 = param_1 + param_3 + param_2 * 0x318;
        iVar4 = iVar2;
        while (iVar5 == 0x0) {
            param_2 += -0x1;
            iVar4 += -0x318;
            iVar3 = iVar1 + -0x318;
            if (((-0x1 < param_2) && (0x0 < *(int *)(iVar1 + -0x308))) &&
               (iVar1 = *(int *)(iVar4 + param_3 + 0x10), iVar1 < 0x7)) {
                iVar5 = iVar1;
            }
            iVar1 = iVar3;
            if (((param_2 < 0x1) && (iVar5 == 0x0)) &&
               (iVar5 = *(int *)(param_1 + param_3 + 0x477c), iVar5 == 0x7)) {
                iVar5 = RandomBlock(param_1);
            }
        }
        iVar1 = iVar5;
        if (iVar6 == 0x0) {
            *piVar7 = *piVar7 + -0x1;
            do {
                do {
                    iVar1 = RandomBlock(param_1);
                } while (iVar1 == *(int *)(iVar2 + param_3 + 0x3c));
            } while (iVar1 == iVar5);
        }
    }
    return iVar1;
}



void FinishGarbageBlock(int *param_1)

{
    int *piVar1;
    int *piVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int *piVar8;
    int iVar9;
    
    iVar7 = param_1[0x12ae];
    iVar4 = 0x0;
    piVar3 = param_1;
    for (iVar5 = 0x0; iVar5 < gMax; iVar5 += 0x1) {
        iVar9 = 0x3;
        iVar6 = 0x0;
        piVar1 = param_1;
        piVar2 = piVar3;
        do {
            piVar8 = (int *)((int)piVar1 + iVar4);
            if (*piVar2 == 0x9) {
                iVar6 = -0x1;
            }
            else if ((((iVar6 != 0x0) && (piVar8[0x4] != 0x0)) && (piVar8[0x4] != 0x9)) &&
                    (*piVar8 == 0x0)) {
                *piVar8 = 0x6;
                piVar8[0x1] = iVar7;
                piVar8[0x8] = -0x1;
            }
            piVar8 = (int *)((int)piVar1 + iVar4 + 0x318);
            if (piVar2[0xc6] == 0x9) {
                iVar6 = -0x1;
            }
            else if (((iVar6 != 0x0) && (piVar8[0x4] != 0x0)) &&
                    ((piVar8[0x4] != 0x9 && (*piVar8 == 0x0)))) {
                *piVar8 = 0x6;
                piVar8[0x1] = iVar7;
                piVar8[0x8] = -0x1;
            }
            piVar8 = (int *)((int)piVar1 + iVar4 + 0x630);
            if (piVar2[0x18c] == 0x9) {
                iVar6 = -0x1;
            }
            else if (((iVar6 != 0x0) && (piVar8[0x4] != 0x0)) &&
                    ((piVar8[0x4] != 0x9 && (*piVar8 == 0x0)))) {
                *piVar8 = 0x6;
                piVar8[0x1] = iVar7;
                piVar8[0x8] = -0x1;
            }
            piVar8 = (int *)((int)piVar1 + iVar4 + 0x948);
            if (piVar2[0x252] == 0x9) {
                iVar6 = -0x1;
            }
            else if ((((iVar6 != 0x0) && (piVar8[0x4] != 0x0)) && (piVar8[0x4] != 0x9)) &&
                    (*piVar8 == 0x0)) {
                *piVar8 = 0x6;
                piVar8[0x1] = iVar7;
                piVar8[0x8] = -0x1;
            }
            piVar1 = piVar1 + 0x318;
            piVar2 = piVar2 + 0x318;
            iVar9 += -0x1;
        } while (iVar9 != 0x0);
        piVar3 = piVar3 + 0xb;
        iVar4 += 0x2c;
    }
    return;
}



int FindEmptySpaces(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    
    iVar2 = 0x0;
    if (*(int *)(param_2 + 0x4) < 0xa) {
        iVar1 = *(int *)(param_2 + 0x24) + -0x1;
    }
    else {
        iVar1 = *(int *)(param_2 + 0x24) + -0x2;
    }
    iVar9 = *(int *)(param_2 + 0x18);
    iVar6 = *(int *)(param_2 + 0x1c);
    if (iVar9 == iVar6) {
        iVar6 = param_1 + iVar1 * 0x318;
        iVar9 = 0x0;
        do {
            iVar7 = 0x0;
            if (*(int *)(iVar6 + 0x10) == 0x0) {
                iVar3 = param_1 + iVar1 * 0x318;
                iVar10 = iVar1 + 0x1;
                if (-0x1 < iVar1) {
                    do {
                        if (*(int *)(iVar3 + 0x10) == 0x0) {
                            iVar7 += 0x1;
                        }
                        else if (iVar7 != 0x0) break;
                        iVar3 += -0x318;
                        iVar10 += -0x1;
                    } while (iVar10 != 0x0);
                }
                if (iVar2 < iVar7) {
                    iVar2 = iVar7;
                }
            }
            iVar9 += 0x1;
            iVar6 += 0x2c;
            param_1 += 0x2c;
        } while (iVar9 < 0x12);
    }
    else if (iVar6 < iVar9) {
        iVar3 = iVar1 * 0x318;
        iVar8 = param_1 + iVar3;
        iVar7 = iVar8 + iVar9 * 0x2c;
        iVar10 = param_1 + iVar9 * 0x2c;
        for (; iVar9 < 0x12; iVar9 += 0x1) {
            iVar5 = 0x0;
            if (*(int *)(iVar7 + 0x10) == 0x0) {
                iVar4 = iVar10 + iVar3;
                iVar11 = iVar1 + 0x1;
                if (-0x1 < iVar1) {
                    do {
                        if (*(int *)(iVar4 + 0x10) == 0x0) {
                            iVar5 += 0x1;
                        }
                        else if (iVar5 != 0x0) break;
                        iVar4 += -0x318;
                        iVar11 += -0x1;
                    } while (iVar11 != 0x0);
                }
                if (iVar2 < iVar5) {
                    iVar2 = iVar5;
                }
            }
            iVar7 += 0x2c;
            iVar10 += 0x2c;
        }
        for (iVar9 = 0x0; iVar9 < iVar6; iVar9 += 0x1) {
            iVar7 = 0x0;
            if (*(int *)(iVar8 + 0x10) == 0x0) {
                iVar5 = param_1 + iVar3;
                iVar10 = iVar1 + 0x1;
                if (-0x1 < iVar1) {
                    do {
                        if (*(int *)(iVar5 + 0x10) == 0x0) {
                            iVar7 += 0x1;
                        }
                        else if (iVar7 != 0x0) break;
                        iVar5 += -0x318;
                        iVar10 += -0x1;
                    } while (iVar10 != 0x0);
                }
                if (iVar2 < iVar7) {
                    iVar2 = iVar7;
                }
            }
            iVar8 += 0x2c;
            param_1 += 0x2c;
        }
    }
    else {
        iVar7 = param_1 + iVar9 * 0x2c;
        param_1 += iVar1 * 0x318 + iVar9 * 0x2c;
        for (; iVar9 < iVar6; iVar9 += 0x1) {
            iVar10 = 0x0;
            if (*(int *)(param_1 + 0x10) == 0x0) {
                iVar8 = iVar7 + iVar1 * 0x318;
                iVar3 = iVar1 + 0x1;
                if (-0x1 < iVar1) {
                    do {
                        if (*(int *)(iVar8 + 0x10) == 0x0) {
                            iVar10 += 0x1;
                        }
                        else if (iVar10 != 0x0) break;
                        iVar8 += -0x318;
                        iVar3 += -0x1;
                    } while (iVar3 != 0x0);
                }
                if (iVar2 < iVar10) {
                    iVar2 = iVar10;
                }
            }
            param_1 += 0x2c;
            iVar7 += 0x2c;
        }
    }
    return iVar2 + 0x1;
}



void AttackPackEmpty(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int *__src;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    
    iVar6 = 0x0;
    iVar5 = 0x0;
    iVar7 = param_1;
    do {
        if (*(int *)(iVar7 + 0x2520) == 0x0) {
            iVar4 = iVar5 + 0x1;
            iVar1 = 0x28 - iVar4;
            iVar2 = param_1 + iVar4 * 0x50;
            iVar6 = 0x0;
            if (iVar4 < 0x28) {
LAB_0004534c:
                if (*(int *)(iVar2 + 0x2520) == 0x0) break;
                __src = (int *)(param_1 + iVar4 * 0x50 + 0x2520);
                iVar6 = -0x1;
                bcopy(__src,(void *)(iVar7 + 0x2520),0x50);
                if ((((0x0 < *__src) && (*__src < 0x4)) && (0x9 < __src[0x1])) &&
                   (__src[0xa] == -0x1)) {
                    iVar3 = iVar4 + 0x1;
                    *(int *)(attack_chain2 + param_2 * 0x4) = iVar5;
                    iVar1 = 0x28 - iVar3;
                    iVar2 = param_1 + iVar3 * 0x50;
                    if (iVar3 < 0x28) {
                        do {
                            if (((iVar3 != iVar4) && (*(int *)(iVar2 + 0x2524) == 0xa)) &&
                               ((*(int *)(iVar2 + 0x2548) == iVar4 &&
                                ((0x0 < *(int *)(iVar2 + 0x2520) && (*(int *)(iVar2 + 0x2520) < 0x3)
                                 ))))) {
                                *(int *)(iVar2 + 0x2548) = iVar5;
                            }
                            iVar2 += 0x50;
                            iVar3 += 0x1;
                            iVar1 += -0x1;
                        } while (iVar1 != 0x0);
                    }
                }
                *__src = 0x0;
                __src[0x3] = 0x0;
                __src[0x4] = 0x0;
                __src[0x2] = -0x1;
            }
        }
LAB_00045434:
        if (iVar6 == 0x0) {
            return;
        }
        iVar5 += 0x1;
        iVar7 += 0x50;
        if (0x27 < iVar5) {
            return;
        }
    } while( true );
    iVar2 += 0x50;
    iVar4 += 0x1;
    iVar1 += -0x1;
    if (iVar1 == 0x0) goto LAB_00045434;
    goto LAB_0004534c;
}



void pon_AttackPackEmpty(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int *__src;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    
    iVar6 = 0x0;
    iVar5 = 0x0;
    iVar7 = param_1;
    do {
        if (*(int *)(iVar7 + 0x4b18) == 0x0) {
            iVar4 = iVar5 + 0x1;
            iVar1 = 0x28 - iVar4;
            iVar2 = param_1 + iVar4 * 0x50;
            iVar6 = 0x0;
            if (iVar4 < 0x28) {
LAB_000454bc:
                if (*(int *)(iVar2 + 0x4b18) == 0x0) break;
                __src = (int *)(param_1 + iVar4 * 0x50 + 0x4b18);
                iVar6 = -0x1;
                bcopy(__src,(void *)(iVar7 + 0x4b18),0x50);
                if ((((0x0 < *__src) && (*__src < 0x4)) && (0x9 < __src[0x1])) &&
                   (__src[0xa] == -0x1)) {
                    iVar3 = iVar4 + 0x1;
                    *(int *)(attack_chain2C + param_2 * 0x4) = iVar5;
                    iVar1 = 0x28 - iVar3;
                    iVar2 = param_1 + iVar3 * 0x50;
                    if (iVar3 < 0x28) {
                        do {
                            if (((iVar3 != iVar4) && (*(int *)(iVar2 + 0x4b1c) == 0xa)) &&
                               ((*(int *)(iVar2 + 0x4b40) == iVar4 &&
                                ((0x0 < *(int *)(iVar2 + 0x4b18) && (*(int *)(iVar2 + 0x4b18) < 0x3)
                                 ))))) {
                                *(int *)(iVar2 + 0x4b40) = iVar5;
                            }
                            iVar2 += 0x50;
                            iVar3 += 0x1;
                            iVar1 += -0x1;
                        } while (iVar1 != 0x0);
                    }
                }
                *__src = 0x0;
                __src[0x3] = 0x0;
                __src[0x4] = 0x0;
                __src[0x2] = -0x1;
            }
        }
LAB_000455a4:
        if (iVar6 == 0x0) {
            return;
        }
        iVar5 += 0x1;
        iVar7 += 0x50;
        if (0x27 < iVar5) {
            return;
        }
    } while( true );
    iVar2 += 0x50;
    iVar4 += 0x1;
    iVar1 += -0x1;
    if (iVar1 == 0x0) goto LAB_000455a4;
    goto LAB_000454bc;
}



int ReturnAttackSlot(int param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iVar4 = 0x0;
    do {
        if ((((0x4 < *(int *)(param_1 + 0x2520)) && (*(int *)(param_1 + 0x2528) == -0x1)) &&
            (*(int *)(param_1 + 0x2544) <= param_2)) &&
           (param_2 < *(int *)(param_1 + 0x2544) + *(int *)(param_1 + 0x2534))) {
            iVar1 = *(int *)(param_1 + 0x2538);
            iVar3 = *(int *)(param_1 + 0x253c);
            if (iVar1 == iVar3) {
                return iVar4;
            }
            if (iVar3 < iVar1) {
                iVar2 = 0x12 - iVar1;
                if (iVar1 < 0x12) {
                    do {
                        if (param_3 == iVar1) {
                            return iVar4;
                        }
                        iVar1 += 0x1;
                        iVar2 += -0x1;
                    } while (iVar2 != 0x0);
                }
                iVar1 = 0x0;
                if (0x0 < iVar3) {
                    do {
                        if (param_3 == iVar1) {
                            return iVar4;
                        }
                        iVar1 += 0x1;
                        iVar3 += -0x1;
                    } while (iVar3 != 0x0);
                }
            }
            else if ((iVar1 <= param_3) && (param_3 < iVar3)) {
                return iVar4;
            }
        }
        iVar4 += 0x1;
        param_1 += 0x50;
        if (0x27 < iVar4) {
            return -0x1;
        }
    } while( true );
}



void Match3DPosition(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,int *param_5)

{
    int iVar1;
    undefined4 auStack_68 [0x4];
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48 [0x4];
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28 [0x4];
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;
    undefined4 local_8;
    
    local_28[1] = 0xd;
    local_28[2] = 0x17;
    local_28[3] = 0x27;
    local_18 = 0x3b;
    local_14 = 0x4f;
    local_10 = 0x63;
    local_c = 0x73;
    local_8 = 0x7d;
    local_48[1] = 0xb1;
    local_48[2] = 0xbb;
    local_48[3] = 0xcb;
    local_38 = 0xdf;
    local_34 = 0xf3;
    local_30 = 0x107;
    local_2c = 0x117;
    local_28[0] = 0x121;
    auStack_68[1] = 0x69;
    auStack_68[2] = 0x73;
    auStack_68[3] = 0x83;
    local_58 = 0x97;
    local_54 = 0xab;
    local_50 = 0xbf;
    local_4c = 0xcf;
    local_48[0] = 0xd9;
    *param_5 = param_2 * -0x10 + 0xcc;
    if (false) {
switchD_000457b8_caseD_0:
        *param_4 = 0xffffffec;
    }
    else {
        switch(param_3) {
        default:
            goto switchD_000457b8_caseD_0;
        case 0x1:
            iVar1 = 0x1;
            break;
        case 0x2:
            iVar1 = 0x2;
            break;
        case 0x3:
            iVar1 = 0x3;
            break;
        case 0x4:
            iVar1 = 0x4;
            break;
        case 0x5:
            iVar1 = 0x5;
            break;
        case 0x6:
            iVar1 = 0x6;
            break;
        case 0x7:
            iVar1 = 0x7;
            break;
        case 0x8:
            iVar1 = 0x8;
        }
        if ((gTheGame._120328_4_ == 0x1) && (gSelection != 0x64)) {
            *param_4 = auStack_68[iVar1];
        }
        else if (param_1 == 0x0) {
            *param_4 = local_28[iVar1];
        }
        else if (param_1 == 0x1) {
            *param_4 = local_48[iVar1];
        }
    }
    return;
}



void UpdateAttack(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
    if (gTheGame._120332_4_ == 0x1) {
        if (0x2 < gTheGame._120328_4_) {
            pon_Update2DAttack4p(param_1,param_2,param_3);
        }
        Update2DAttack(param_1,param_2,param_3);
    }
    else {
        Update3DAttack(param_1,param_2,param_3);
    }
    AttackPackEmpty(param_1,param_3);
    pon_AttackPackEmpty(param_1,param_3);
    return;
}



void CheckSameAttack(int param_1,int param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    undefined4 uVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    int iVar9;
    uint uVar10;
    
    uVar5 = 0xffffffff;
    iVar8 = 0x1f4;
    if (*(int *)(param_1 + param_3 * 0x50 + 0x2524) == 0x9) {
        uVar5 = 0x0;
    }
    if (gTheGame._120332_4_ == 0x1) {
        Check2DSameAttack(param_1,param_2,0xffffffff,param_3);
    }
    else {
        Check3DSameAttack(param_1,param_2,0xffffffff,param_3,uVar5);
    }
    iVar6 = 0x0;
    iVar3 = param_2;
    do {
        if (*(int *)(iVar3 + 0x28) != 0x0) {
            iVar4 = iVar6 + 0x1;
            iVar1 = 0x2b - iVar4;
            iVar2 = param_2 + iVar4 * 0x4;
            if (iVar4 < 0x2b) {
                do {
                    if ((*(int *)(iVar2 + 0x28) != 0x0) &&
                       (*(int *)(iVar3 + 0x28) == *(int *)(iVar2 + 0x28))) {
                        *(undefined4 *)(iVar2 + 0x28) = 0x0;
                    }
                    iVar2 += 0x4;
                    iVar1 += -0x1;
                } while (iVar1 != 0x0);
            }
        }
        iVar6 += 0x1;
        iVar3 += 0x4;
    } while (iVar6 < 0x2a);
    if (gTheGame._120332_4_ == 0x1) {
        Sync2DAttack(param_1,param_2);
    }
    else {
        Sync3DAttack(param_1,param_2);
    }
    iVar3 = 0x0;
    do {
        if (*(int *)(param_2 + 0x28) != 0x0) {
            iVar1 = param_1 + (*(int *)(param_2 + 0x28) + -0x1) * 0x50 + 0x2520;
            for (iVar6 = 0x0; iVar6 < *(int *)(iVar1 + 0x14); iVar6 += 0x1) {
                iVar2 = *(int *)(iVar1 + 0x24) + iVar6;
                if (iVar2 < 0xc) {
                    uVar7 = *(uint *)(iVar1 + 0x1c);
                    if (*(uint *)(iVar1 + 0x18) == uVar7) {
                        iVar2 = param_1 + iVar2 * 0x318;
                        iVar4 = iVar2 + (uVar7 - 0x1) * 0x2c;
                        if (-0x1 < (int)(uVar7 - 0x1)) {
                            uVar10 = uVar7 >> 0x3;
                            iVar9 = iVar8;
                            if (uVar10 != 0x0) {
                                do {
                                    *(undefined4 *)(iVar4 + 0x14) = param_4;
                                    *(int *)(iVar4 + 0x18) = iVar8;
                                    *(undefined4 *)(iVar4 + -0x18) = param_4;
                                    *(int *)(iVar4 + -0x14) = iVar8 + 0x1;
                                    *(undefined4 *)(iVar4 + -0x44) = param_4;
                                    *(int *)(iVar4 + -0x40) = iVar8 + 0x2;
                                    *(undefined4 *)(iVar4 + -0x70) = param_4;
                                    *(int *)(iVar4 + -0x6c) = iVar8 + 0x3;
                                    *(undefined4 *)(iVar4 + -0x9c) = param_4;
                                    *(int *)(iVar4 + -0x98) = iVar8 + 0x4;
                                    *(undefined4 *)(iVar4 + -0xc8) = param_4;
                                    *(int *)(iVar4 + -0xc4) = iVar8 + 0x5;
                                    iVar9 = iVar8 + 0x7;
                                    *(undefined4 *)(iVar4 + -0xf4) = param_4;
                                    *(int *)(iVar4 + -0xf0) = iVar8 + 0x6;
                                    iVar8 += 0x8;
                                    *(undefined4 *)(iVar4 + -0x120) = param_4;
                                    *(int *)(iVar4 + -0x11c) = iVar9;
                                    iVar4 += -0x160;
                                    uVar10 -= 0x1;
                                } while (uVar10 != 0x0);
                                uVar7 &= 0x7;
                                iVar9 = iVar8;
                                if (uVar7 == 0x0) goto LAB_00045b60;
                            }
                            do {
                                *(undefined4 *)(iVar4 + 0x14) = param_4;
                                iVar8 = iVar9 + 0x1;
                                *(int *)(iVar4 + 0x18) = iVar9;
                                iVar4 += -0x2c;
                                uVar7 -= 0x1;
                                iVar9 = iVar8;
                            } while (uVar7 != 0x0);
                        }
LAB_00045b60:
                        iVar2 += 0x2ec;
                        for (iVar4 = 0x11; *(int *)(iVar1 + 0x18) <= iVar4; iVar4 += -0x1) {
                            *(undefined4 *)(iVar2 + 0x14) = param_4;
                            *(int *)(iVar2 + 0x18) = iVar8;
                            iVar2 += -0x2c;
                            iVar8 += 0x1;
                        }
                    }
                    else if ((int)uVar7 < (int)*(uint *)(iVar1 + 0x18)) {
                        iVar2 = param_1 + iVar2 * 0x318;
                        iVar4 = iVar2 + (uVar7 - 0x1) * 0x2c;
                        if (-0x1 < (int)(uVar7 - 0x1)) {
                            uVar10 = uVar7 >> 0x3;
                            iVar9 = iVar8;
                            if (uVar10 != 0x0) {
                                do {
                                    *(undefined4 *)(iVar4 + 0x14) = param_4;
                                    *(int *)(iVar4 + 0x18) = iVar8;
                                    *(undefined4 *)(iVar4 + -0x18) = param_4;
                                    *(int *)(iVar4 + -0x14) = iVar8 + 0x1;
                                    *(undefined4 *)(iVar4 + -0x44) = param_4;
                                    *(int *)(iVar4 + -0x40) = iVar8 + 0x2;
                                    *(undefined4 *)(iVar4 + -0x70) = param_4;
                                    *(int *)(iVar4 + -0x6c) = iVar8 + 0x3;
                                    *(undefined4 *)(iVar4 + -0x9c) = param_4;
                                    *(int *)(iVar4 + -0x98) = iVar8 + 0x4;
                                    *(undefined4 *)(iVar4 + -0xc8) = param_4;
                                    *(int *)(iVar4 + -0xc4) = iVar8 + 0x5;
                                    iVar9 = iVar8 + 0x7;
                                    *(undefined4 *)(iVar4 + -0xf4) = param_4;
                                    *(int *)(iVar4 + -0xf0) = iVar8 + 0x6;
                                    iVar8 += 0x8;
                                    *(undefined4 *)(iVar4 + -0x120) = param_4;
                                    *(int *)(iVar4 + -0x11c) = iVar9;
                                    iVar4 += -0x160;
                                    uVar10 -= 0x1;
                                } while (uVar10 != 0x0);
                                uVar7 &= 0x7;
                                iVar9 = iVar8;
                                if (uVar7 == 0x0) goto LAB_00045c6c;
                            }
                            do {
                                *(undefined4 *)(iVar4 + 0x14) = param_4;
                                iVar8 = iVar9 + 0x1;
                                *(int *)(iVar4 + 0x18) = iVar9;
                                iVar4 += -0x2c;
                                uVar7 -= 0x1;
                                iVar9 = iVar8;
                            } while (uVar7 != 0x0);
                        }
LAB_00045c6c:
                        iVar2 += 0x2ec;
                        for (iVar4 = 0x11; *(int *)(iVar1 + 0x18) <= iVar4; iVar4 += -0x1) {
                            *(undefined4 *)(iVar2 + 0x14) = param_4;
                            *(int *)(iVar2 + 0x18) = iVar8;
                            iVar2 += -0x2c;
                            iVar8 += 0x1;
                        }
                    }
                    else {
                        iVar4 = uVar7 - 0x1;
                        iVar2 = param_1 + iVar2 * 0x318 + iVar4 * 0x2c;
                        for (; *(int *)(iVar1 + 0x18) <= iVar4; iVar4 += -0x1) {
                            *(undefined4 *)(iVar2 + 0x14) = param_4;
                            *(int *)(iVar2 + 0x18) = iVar8;
                            iVar2 += -0x2c;
                            iVar8 += 0x1;
                        }
                    }
                }
            }
        }
        iVar3 += 0x1;
        param_2 += 0x4;
        if (0x2a < iVar3) {
            return;
        }
    } while( true );
}



void ChangeAttack(void)

{
    if (gTheGame._120332_4_ == 0x1) {
        Change2DAttack();
    }
    else {
        Change3DAttack();
    }
    return;
}



void InitFlyAttack(int param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5,
                  int param_6)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int local_30;
    int local_2c [0x2];
    
    iVar2 = 0x0;
    if (gTheGame._120328_4_ < 0x3) {
        iVar1 = 0x10;
    }
    else {
        iVar1 = 0xa;
    }
    if ((((gSelection == 0x64) || (gSelection == 0x96)) || (gSelection == 0xa0)) ||
       (gSelection == 0xd2)) {
        if (gTheGame._120328_4_ < 0x3) {
            iVar3 = *(int *)(param_1 + 0x4afc) + -0xdf;
        }
        else {
            iVar3 = *(int *)(param_1 + 0x4afc) + -0xd5;
        }
        if (gTheGame._120332_4_ == 0x1) {
            local_2c[0] = (int)*(short *)(param_1 + 0x3f10) >> 0x2;
            local_30 = ((int)*(short *)(param_1 + 0x3f18) >> 0x2) - iVar3;
            Init2DAttackPosition(param_2,param_5,param_6);
            param_2[0x4] = local_2c[0] + param_3 * iVar1;
            param_2[0x9] = local_30 - param_4 * iVar1;
        }
        else {
            Match3DPosition(param_6,param_4,param_3,local_2c,&local_30);
            if (local_2c[0] < 0x1) {
                Init3DAttackPosition(param_2,param_5,param_6);
                if (param_6 == 0x0) {
                    iVar2 = 0x1;
                }
                else if (param_6 == 0x1) {
                    iVar2 = 0x0;
                }
                if ((param_2[0x1] == 0xa) && (param_2[0xa] != -0x1)) {
                    iVar1 = param_1 + param_2[0xa] * 0x50;
                    if (*(int *)(iVar1 + 0x2524) < 0xa) {
                        *param_2 = 0x0;
                        return;
                    }
                    param_2[0x2] = *(undefined4 *)(iVar1 + 0x2528);
                    iVar1 = param_1 + param_2[0xa] * 0x50;
                    if (*(int *)(iVar1 + 0x2520) == 0x1) {
                        *(int *)(iVar1 + 0x2524) = *(int *)(iVar1 + 0x2524) + 0x1;
                        iVar2 = param_1 + param_2[0xa] * 0x50;
                        if (0x16 < *(int *)(iVar2 + 0x2524)) {
                            *(undefined4 *)(iVar2 + 0x2524) = 0x16;
                        }
                        Init3DAttackPosition
                                  (param_1 + param_2[0xa] * 0x50 + 0x2520,
                                   *(undefined4 *)(param_1 + param_2[0xa] * 0x50 + 0x2524),param_6);
                        *param_2 = 0x0;
                        return;
                    }
                }
                else {
                    iVar1 = *(int *)(st_Attack3DTopPosition + iVar2 * 0x18);
                    *(int *)(st_Attack3DTopPosition + iVar2 * 0x18) = iVar1 + 0x1;
                    if (0x5 < iVar1) {
                        iVar1 = 0x5;
                    }
                    param_2[0x2] = iVar1;
                }
                *(short *)(param_2 + 0xc) =
                     (short)*(undefined4 *)
                             (st_Attack3DTopPosition + param_2[0x2] * 0x4 + iVar2 * 0x18);
                *(undefined2 *)(param_2 + 0xe) = 0xa;
                *param_2 = 0x2;
                param_2[0x3] = 0x3c;
            }
            else {
                Init3DAttackPosition(param_2,param_5,param_6);
                param_2[0x4] = local_2c[0];
                param_2[0x9] = local_30 - iVar3;
            }
        }
    }
    return;
}



void StartAttack(int param_1,int param_2)

{
    int iVar1;
    undefined1 *puVar2;
    int *piVar3;
    int iVar4;
    undefined1 *puVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    undefined1 *puVar9;
    undefined1 *puVar10;
    int iVar11;
    int iVar12;
    undefined4 local_110;
    undefined4 local_10c;
    int local_f4;
    int local_a8 [0x3];
    int local_9c;
    undefined1 *local_98;
    undefined1 *local_94;
    int *local_90;
    pointer_____offset_0x6fc___ *local_8c;
    undefined1 *local_88;
    undefined1 *local_84;
    undefined1 *local_80;
    undefined1 *local_7c;
    undefined1 *local_78;
    undefined1 *local_74;
    undefined1 *local_70;
    undefined1 *local_6c;
    undefined1 *local_68;
    undefined1 *local_64;
    undefined1 *local_60;
    undefined1 *local_5c;
    undefined1 *local_58;
    undefined1 *local_54;
    undefined1 *local_50;
    
    puVar5 = NULL;
    local_9c = 0x0;
    puVar10 = NULL;
    if (gTheGame._120328_4_ < 0x3) {
        if (param_2 == 0x0) {
            puVar5 = attack_chain2 + 0x4;
            puVar10 = (undefined1 *)0x2a6608;
        }
        else if (param_2 == 0x1) {
            puVar5 = attack_chain2;
            puVar10 = gTheGame;
        }
    }
    local_50 = SFX_INIT_TABLE;
    local_54 = SFX_INIT_TABLE;
    local_90 = &gSelection;
    local_58 = SFX_INIT_TABLE;
    local_5c = SFX_INIT_TABLE;
    local_60 = SFX_INIT_TABLE;
    local_64 = SFX_INIT_TABLE;
    local_68 = SFX_INIT_TABLE;
    iVar6 = 0x0;
    local_6c = SFX_INIT_TABLE;
    local_70 = SFX_INIT_TABLE;
    local_74 = SFX_INIT_TABLE;
    local_78 = SFX_INIT_TABLE;
    local_7c = SFX_INIT_TABLE;
    local_80 = SFX_INIT_TABLE;
    local_84 = SFX_INIT_TABLE;
    local_88 = SFX_INIT_TABLE;
    local_94 = SFX_INIT_TABLE;
    local_98 = SFX_INIT_TABLE;
    local_8c = &_1598;
    iVar7 = param_1;
    do {
        if ((*(int *)(iVar7 + 0x31a0) != 0x0) && (*(int *)(iVar7 + 0x31bc) < 0x1)) {
            local_a8[0] = 0x0;
            iVar8 = -*(int *)(iVar7 + 0x31bc);
            if (*(int *)(iVar7 + 0x31a4) == 0xa) {
                if (0x3 < iVar8) {
                    local_9c = *(int *)(iVar7 + 0x31bc);
                    bcopy((undefined4 *)(iVar7 + 0x31a0),&local_110,0x68);
                }
                *(int *)(param_1 + 0x4a88) = *(int *)(param_1 + 0x4a88) + -0x1;
                *(undefined4 *)(iVar7 + 0x31bc) = *(undefined4 *)(param_1 + 0x4a88);
                if ((*(int *)(iVar7 + 0x31bc) < -0xd) && ((gGameStatus & 0x2) == 0x0)) {
                    *(undefined4 *)(iVar7 + 0x31bc) = 0xffffff9d;
                }
                gOverflow += *(int *)(param_1 + 0x4a88) * -0x1e;
                iVar1 = *(int *)puVar5;
                piVar3 = (int *)(puVar10 + iVar1 * 0x50 + 0x2520);
                if ((((*piVar3 < 0x1) || (0x3 < *piVar3)) || (piVar3[0x1] < 0xa)) ||
                   (piVar3[0xa] != -0x1)) {
                    puVar9 = NULL;
                }
                else {
                    puVar9 = NULL;
                    if (piVar3[0x1] + -0x9 < -*(int *)(iVar7 + 0x31bc)) {
                        iVar11 = 0x28;
                        iVar4 = 0x0;
                        puVar2 = puVar10;
                        do {
                            if (*(int *)(puVar2 + 0x2520) == 0x0) {
                                puVar9 = puVar10 + iVar4 * 0x50 + 0x2520;
                                break;
                            }
                            puVar2 = puVar2 + 0x50;
                            iVar4 += 0x1;
                            iVar11 += -0x1;
                        } while (iVar11 != 0x0);
                        if (puVar9 == NULL) {
                            if (gTheGame._120332_4_ != 0x1) {
                                Upgrade3DBrick(param_1,iVar1,param_2);
                            }
                            goto LAB_00046784;
                        }
                        *(int *)(puVar9 + 0x28) = iVar1;
                        InitFlyAttack(param_1,puVar9,*(undefined4 *)(iVar7 + 0x31ac),
                                      *(undefined4 *)(iVar7 + 0x31b8),0xa,param_2);
                    }
                }
                if (puVar9 == NULL) {
                    iVar4 = 0x28;
                    iVar1 = 0x0;
                    puVar2 = puVar10;
                    do {
                        if (*(int *)(puVar2 + 0x2520) == 0x0) {
                            puVar9 = puVar10 + iVar1 * 0x50 + 0x2520;
                            break;
                        }
                        puVar2 = puVar2 + 0x50;
                        iVar1 += 0x1;
                        iVar4 += -0x1;
                    } while (iVar4 != 0x0);
                    if ((puVar9 == NULL) || (*(int *)(param_1 + 0x4a88) < -0x1)) goto LAB_00046784;
                    *(undefined4 *)(puVar9 + 0x28) = 0xffffffff;
                    InitFlyAttack(param_1,puVar9,*(undefined4 *)(iVar7 + 0x31ac),
                                  *(undefined4 *)(iVar7 + 0x31b8),0xa,param_2);
                    *(int *)puVar5 = iVar1;
                }
            }
            iVar1 = *(int *)(iVar7 + 0x31a4);
            if (((iVar1 == 0xc) || ((iVar1 == 0xa && (0x3 < iVar8)))) ||
               ((iVar1 == 0xa && (*(int *)(param_1 + 0x4a84) != 0x0)))) {
                iVar1 = FromNumberToCombo(iVar8,local_a8);
                if ((0x2 < iVar1) && (gTheGame._120332_4_ == 0x2)) {
                    iVar1 = 0x2;
                }
                if (((*(int *)(iVar7 + 0x31a4) == 0xc) && (0x23 < iVar8)) &&
                   ((gGameStatus & 0x2) == 0x0)) {
                    *(undefined4 *)(iVar7 + 0x31a4) = 0xd;
                }
                for (iVar4 = 0x0; iVar4 < iVar1; iVar4 += 0x1) {
                    puVar2 = NULL;
                    iVar12 = 0x28;
                    iVar11 = 0x0;
                    puVar9 = puVar10;
                    do {
                        if (*(int *)(puVar9 + 0x2520) == 0x0) {
                            puVar2 = puVar10 + iVar11 * 0x50 + 0x2520;
                            break;
                        }
                        puVar9 = puVar9 + 0x50;
                        iVar11 += 0x1;
                        iVar12 += -0x1;
                    } while (iVar12 != 0x0);
                    if (puVar2 != NULL) {
                        if (local_a8[0] < 0x5) {
                            InitFlyAttack(param_1,puVar2,*(undefined4 *)(iVar7 + 0x31ac),
                                          *(undefined4 *)(iVar7 + 0x31b8),local_a8[0],param_2);
                        }
                        else if ((local_a8[0] == 0x5) && (iVar4 == 0x0)) {
                            InitFlyAttack(param_1,puVar2,*(undefined4 *)(iVar7 + 0x31ac),
                                          *(undefined4 *)(iVar7 + 0x31b8),0x1,param_2);
                        }
                        else if ((local_a8[0] == 0x5) && (iVar4 == 0x1)) {
                            InitFlyAttack(param_1,puVar2,*(undefined4 *)(iVar7 + 0x31ac),
                                          *(undefined4 *)(iVar7 + 0x31b8),0x2,param_2);
                        }
                        else if (local_a8[0] == 0x6) {
                            InitFlyAttack(param_1,puVar2,*(undefined4 *)(iVar7 + 0x31ac),
                                          *(undefined4 *)(iVar7 + 0x31b8),0x2,param_2);
                        }
                        else if (local_a8[0] == 0x7) {
                            InitFlyAttack(param_1,puVar2,*(undefined4 *)(iVar7 + 0x31ac),
                                          *(undefined4 *)(iVar7 + 0x31b8),0x3,param_2);
                        }
                        else if ((local_a8[0] == 0x8) && (iVar4 == 0x0)) {
                            InitFlyAttack(param_1,puVar2,*(undefined4 *)(iVar7 + 0x31ac),
                                          *(undefined4 *)(iVar7 + 0x31b8),0x4,param_2);
                        }
                        else if ((local_a8[0] == 0x8) && (iVar4 == 0x1)) {
                            InitFlyAttack(param_1,puVar2,*(undefined4 *)(iVar7 + 0x31ac),
                                          *(undefined4 *)(iVar7 + 0x31b8),0x3,param_2);
                        }
                    }
                }
                iVar1 = *(int *)(param_1 + 0x4a84);
                if (iVar1 != 0x0) {
                    if (((*(int *)(iVar7 + 0x31a4) != 0xa) && (iVar8 == 0x3)) && (iVar1 == 0x3)) {
                        *(undefined4 *)(iVar7 + 0x31a0) = 0x0;
                    }
                    if (*(int *)(param_1 + 0x4a84) < 0x6) {
                        if (param_2 == 0x0) {
                            PlaySE(SFX_INIT_TABLE,0xf1);
                        }
                        else if (param_2 == 0x1) {
                            if (gWorld == 0x10) {
                                PlaySE(local_98,0x1e4);
                            }
                            else {
                                PlaySE(SFX_INIT_TABLE,0xf7);
                            }
                        }
                        else {
                            PlaySE(local_94,0xf7);
                        }
                    }
                    else {
                        iVar8 = gWorld;
                        if (gTheGame._120328_4_ != 0x1) {
                            if (gTheGame._120328_4_ == 0x2) {
                                if (*local_90 == 0x96) {
                                    if ((param_2 == 0x0) &&
                                       (iVar8 = *(int *)(param_1 + 0x4b0c), gWorld == 0xf)) {
                                        iVar8 = -0x1;
                                    }
                                }
                                else {
                                    iVar8 = *(int *)(param_1 + 0x4b04);
                                }
                            }
                            else {
                                iVar8 = *(int *)(param_1 + 0x4b04);
                            }
                        }
                        if (iVar8 + 0x1U < 0x12) {
                            switch(local_8c[iVar8 + 0x1U]) {
                            case (pointer_____offset_0x6fc___)0x46608:
                                PlaySE(local_88,0x147);
                                break;
                            case (pointer_____offset_0x6fc___)0x46618:
                                PlaySE(local_84,0x14c);
                                break;
                            case (pointer_____offset_0x6fc___)0x46628:
                                PlaySE(local_80,0x14b);
                                break;
                            case (pointer_____offset_0x6fc___)0x46638:
                                PlaySE(local_7c,0x149);
                                break;
                            case (pointer_____offset_0x6fc___)0x46648:
                                PlaySE(local_78,0x14d);
                                break;
                            case (pointer_____offset_0x6fc___)0x46658:
                                PlaySE(local_74,0x148);
                                break;
                            case (pointer_____offset_0x6fc___)0x46668:
                                PlaySE(local_70,0x14a);
                                break;
                            case (pointer_____offset_0x6fc___)0x46678:
                                PlaySE(local_6c,0x14e);
                                break;
                            case (pointer_____offset_0x6fc___)0x46688:
                                PlaySE(local_68,0x14f);
                                break;
                            case (pointer_____offset_0x6fc___)0x46698:
                                PlaySE(local_64,0x151);
                                break;
                            case (pointer_____offset_0x6fc___)0x466a8:
                                PlaySE(local_60,0x150);
                                break;
                            case (pointer_____offset_0x6fc___)0x466b8:
                                PlaySE(local_5c,0x152);
                                break;
                            case (pointer_____offset_0x6fc___)0x466c8:
                                PlaySE(local_58,0x153);
                                break;
                            case (pointer_____offset_0x6fc___)0x466d8:
                                PlaySE(local_54,0x155);
                                break;
                            case (pointer_____offset_0x6fc___)0x466e8:
                                PlaySE(local_50,0x156);
                                break;
                            case (pointer_____offset_0x6fc___)0x466f8:
                                PlaySE(SFX_INIT_TABLE,0x158);
                                break;
                            case (pointer_____offset_0x6fc___)0x46708:
                                PlaySE(SFX_INIT_TABLE,0x157);
                            }
                        }
                    }
                    for (iVar8 = 0x0; iVar8 < iVar1 + -0x2; iVar8 += 0x1) {
                        puVar2 = NULL;
                        iVar11 = 0x28;
                        iVar4 = 0x0;
                        puVar9 = puVar10;
                        do {
                            if (*(int *)(puVar9 + 0x2520) == 0x0) {
                                puVar2 = puVar10 + iVar4 * 0x50 + 0x2520;
                                break;
                            }
                            puVar9 = puVar9 + 0x50;
                            iVar4 += 0x1;
                            iVar11 += -0x1;
                        } while (iVar11 != 0x0);
                        if (puVar2 != NULL) {
                            InitFlyAttack(param_1,puVar2,*(undefined4 *)(iVar7 + 0x31ac),
                                          *(undefined4 *)(iVar7 + 0x31b8),0x9,param_2);
                        }
                    }
                }
            }
        }
LAB_00046784:
        iVar6 += 0x1;
        iVar7 += 0x68;
        if (0x9 < iVar6) {
            if (local_9c != 0x0) {
                iVar8 = 0xa;
                iVar6 = 0x0;
                iVar7 = param_1;
                do {
                    if (*(int *)(iVar7 + 0x31a0) == 0x0) {
                        local_110 = 0xffffffff;
                        if ((local_9c < -0x23) && ((gGameStatus & 0x2) == 0x0)) {
                            local_10c = 0xd;
                        }
                        else {
                            local_10c = 0xc;
                        }
                        local_f4 = local_9c;
                        bcopy(&local_110,(void *)(param_1 + iVar6 * 0x68 + 0x31a0),0x68);
                        return;
                    }
                    iVar7 += 0x68;
                    iVar6 += 0x1;
                    iVar8 += -0x1;
                } while (iVar8 != 0x0);
            }
            return;
        }
    } while( true );
}



void pon_StartAttack4p(undefined1 *param_1,int param_2)

{
    int iVar1;
    int iVar2;
    undefined1 *puVar3;
    int iVar4;
    int *piVar5;
    undefined1 *puVar6;
    undefined1 *puVar7;
    int iVar8;
    int *piVar9;
    int iVar10;
    undefined1 *puVar11;
    undefined1 *puVar12;
    undefined1 *puVar13;
    int iVar14;
    int iVar15;
    undefined4 local_118;
    undefined4 local_114;
    int local_fc;
    int local_b0 [0x3];
    int local_a4;
    undefined1 *local_a0;
    undefined1 *local_9c;
    undefined1 *local_98;
    undefined1 *local_94;
    int *local_90;
    pointer_____offset_0x9c4___ *local_8c;
    undefined1 *local_88;
    undefined1 *local_84;
    undefined1 *local_80;
    undefined1 *local_7c;
    undefined1 *local_78;
    undefined1 *local_74;
    undefined1 *local_70;
    undefined1 *local_6c;
    undefined1 *local_68;
    undefined1 *local_64;
    undefined1 *local_60;
    undefined1 *local_5c;
    undefined1 *local_58;
    undefined1 *local_54;
    undefined1 *local_50;
    
    local_a4 = 0x0;
    iVar10 = 0x0;
    iVar4 = 0x0;
    if ((gSelection == 0x64) || (iVar1 = param_2, gSelection == 0xd2)) {
        iVar1 = *(int *)(param_1 + 0x5798);
        if ((iVar1 == 0x0) &&
           ((iVar1 = *(int *)(param_1 + 0x579c), iVar1 == 0x0 &&
            (iVar1 = 0x0, *(int *)(param_1 + 0x57a0) != 0x0)))) {
            iVar1 = *(int *)(param_1 + 0x57a0);
        }
        if (true) {
            switch(iVar1) {
            case 0x1:
                iVar10 = 0x2;
                break;
            case 0x2:
            case 0x6:
                iVar10 = rand();
                iVar4 = -0x1;
                iVar10 -= (iVar10 / gTheGame._120328_4_) * gTheGame._120328_4_;
                break;
            case 0x3:
                iVar10 = 0x1;
                break;
            case 0x4:
                iVar10 = 0x3;
                break;
            case 0x5:
                iVar10 = 0x0;
                break;
            case 0x7:
                iVar10 = *(int *)(param_1 + 0x57ac);
            }
        }
        iVar1 = iVar10;
        if ((*(int *)(gTheGame + param_2 * 0x110 + 0x16008) != -0x1) &&
           (*(int *)(gTheGame + param_2 * 0x110 + 0x16000) == 0x3)) {
            iVar4 = 0x0;
            iVar1 = *(int *)(gTheGame + param_2 * 0x110 + 0x16008);
        }
        if (((iVar4 != 0x0) || (iVar1 != param_2)) ||
           (*(int *)(gTheGame + iVar1 * 0x110 + 0x16000) != 0x3)) {
            RandCheck = 0x0;
            while( true ) {
                RandCheck += 0x1;
                if (0x3e7 < RandCheck) {
                    gc_assert(0x0,_728,0xe68,&_1932,0x0,0x0,0x0);
                }
                if ((iVar1 != param_2) && (*(int *)(gTheGame + iVar1 * 0x110 + 0x16000) == 0x3))
                break;
                iVar1 = rand();
                iVar1 -= (iVar1 / gTheGame._120328_4_) * gTheGame._120328_4_;
            }
            RandCheck = 0x0;
        }
        if (*(int *)(param_1 + 0x5798) == 0x0) {
            if (*(int *)(param_1 + 0x579c) == 0x0) {
                if (*(int *)(param_1 + 0x57a0) != 0x0) {
                    puVar7 = gTheGame;
                    *(undefined4 *)(param_1 + 0x57a0) = 0x0;
                    iVar10 = 0x0;
                    puVar11 = puVar7;
                    do {
                        if ((iVar10 != param_2) && (*(int *)(puVar11 + 0x16000) == 0x3)) {
                            iVar2 = 0x28;
                            iVar4 = 0x0;
                            puVar12 = puVar7;
                            do {
                                if (*(int *)(puVar12 + 0x2520) == 0x0) {
                                    *(int *)(puVar7 + iVar4 * 0x50 + 0x256c) = param_2;
                                    break;
                                }
                                puVar12 = puVar12 + 0x50;
                                iVar4 += 0x1;
                                iVar2 += -0x1;
                            } while (iVar2 != 0x0);
                        }
                        iVar10 += 0x1;
                        puVar11 = puVar11 + 0x110;
                        puVar7 = puVar7 + 0x57c0;
                    } while (iVar10 < 0x4);
                }
            }
            else {
                *(int *)(param_1 + 0x57a8) = iVar1;
                *(undefined4 *)(param_1 + 0x579c) = 0x0;
                iVar4 = 0x28;
                puVar11 = gTheGame + iVar1 * 0x57c0;
                iVar10 = 0x0;
                do {
                    if (*(int *)(puVar11 + 0x2520) == 0x0) {
                        *(int *)(gTheGame + iVar1 * 0x57c0 + iVar10 * 0x50 + 0x256c) = param_2;
                        break;
                    }
                    puVar11 = puVar11 + 0x50;
                    iVar10 += 0x1;
                    iVar4 += -0x1;
                } while (iVar4 != 0x0);
            }
        }
        else {
            *(int *)(param_1 + 0x57a4) = iVar1;
            *(undefined4 *)(param_1 + 0x5798) = 0x0;
        }
    }
    local_50 = SFX_INIT_TABLE;
    iVar4 = 0x0;
    local_54 = SFX_INIT_TABLE;
    local_58 = SFX_INIT_TABLE;
    local_5c = SFX_INIT_TABLE;
    puVar11 = gTheGame + iVar1 * 0x57c0;
    local_60 = SFX_INIT_TABLE;
    local_90 = &gSelection;
    iVar10 = 0x0;
    local_64 = SFX_INIT_TABLE;
    local_68 = SFX_INIT_TABLE;
    local_6c = SFX_INIT_TABLE;
    piVar9 = (int *)(attack_chain2C + param_2 * 0x4);
    local_70 = SFX_INIT_TABLE;
    local_74 = SFX_INIT_TABLE;
    local_78 = SFX_INIT_TABLE;
    local_7c = SFX_INIT_TABLE;
    local_80 = SFX_INIT_TABLE;
    local_84 = SFX_INIT_TABLE;
    local_88 = SFX_INIT_TABLE;
    local_94 = SFX_INIT_TABLE;
    local_98 = SFX_INIT_TABLE;
    local_9c = SFX_INIT_TABLE;
    local_a0 = SFX_INIT_TABLE;
    local_8c = &_1934;
    do {
        puVar7 = param_1;
        if ((*(int *)(param_1 + iVar10 + 0x31a0) != 0x0) &&
           (*(int *)(param_1 + iVar10 + 0x31bc) < 0x1)) {
            local_b0[0] = 0x0;
            iVar1 = -*(int *)(param_1 + iVar10 + 0x31bc);
            if (*(int *)(param_1 + iVar10 + 0x31a4) == 0xa) {
                if (0x3 < iVar1) {
                    local_a4 = *(int *)(param_1 + iVar10 + 0x31bc);
                    bcopy(param_1 + iVar10 + 0x31a0,&local_118,0x68);
                }
                *(int *)(param_1 + 0x4a88) = *(int *)(param_1 + 0x4a88) + -0x1;
                *(undefined4 *)(param_1 + iVar10 + 0x31bc) = *(undefined4 *)(param_1 + 0x4a88);
                if ((*(int *)(param_1 + iVar10 + 0x31bc) < -0xd) && ((gGameStatus & 0x2) == 0x0)) {
                    *(undefined4 *)(param_1 + iVar10 + 0x31bc) = 0xffffff9d;
                }
                gOverflow += *(int *)(param_1 + 0x4a88) * -0x1e;
                piVar5 = (int *)(param_1 + *piVar9 * 0x50 + 0x4b18);
                if ((((*piVar5 < 0x1) || (0x3 < *piVar5)) || (piVar5[0x1] < 0xa)) ||
                   (piVar5[0xa] != -0x1)) {
                    puVar12 = NULL;
                }
                else {
                    puVar12 = NULL;
                    if (piVar5[0x1] + -0x9 < -*(int *)(param_1 + iVar10 + 0x31bc)) {
                        iVar14 = 0x28;
                        iVar2 = 0x0;
                        puVar13 = param_1;
                        do {
                            if (*(int *)(puVar13 + 0x4b18) == 0x0) {
                                puVar12 = param_1 + iVar2 * 0x50 + 0x4b18;
                                break;
                            }
                            puVar13 = puVar13 + 0x50;
                            iVar2 += 0x1;
                            iVar14 += -0x1;
                        } while (iVar14 != 0x0);
                        if (puVar12 == NULL) {
                            if (gTheGame._120332_4_ != 0x1) {
                                Upgrade3DBrick(param_1,*piVar9,param_2);
                            }
                            goto LAB_000472d0;
                        }
                        *(int *)(puVar12 + 0x28) = *piVar9;
                        InitFlyAttack(param_1,puVar12,*(undefined4 *)(param_1 + iVar10 + 0x31ac),
                                      *(undefined4 *)(param_1 + iVar10 + 0x31b8),0xa,param_2);
                    }
                }
                if (puVar12 == NULL) {
                    iVar14 = 0x28;
                    iVar2 = 0x0;
                    puVar13 = param_1;
                    do {
                        if (*(int *)(puVar13 + 0x4b18) == 0x0) {
                            puVar12 = param_1 + iVar2 * 0x50 + 0x4b18;
                            break;
                        }
                        puVar13 = puVar13 + 0x50;
                        iVar2 += 0x1;
                        iVar14 += -0x1;
                    } while (iVar14 != 0x0);
                    if ((puVar12 == NULL) || (*(int *)(param_1 + 0x4a88) < -0x1)) goto LAB_000472d0;
                    *(undefined4 *)(puVar12 + 0x28) = 0xffffffff;
                    InitFlyAttack(param_1,puVar12,*(undefined4 *)(param_1 + iVar10 + 0x31ac),
                                  *(undefined4 *)(param_1 + iVar10 + 0x31b8),0xa,param_2);
                    *piVar9 = iVar2;
                }
            }
            iVar2 = *(int *)(param_1 + iVar10 + 0x31a4);
            if (((iVar2 == 0xc) || ((iVar2 == 0xa && (0x3 < iVar1)))) ||
               ((iVar2 == 0xa && (*(int *)(param_1 + 0x4a84) != 0x0)))) {
                iVar2 = FromNumberToCombo(iVar1,local_b0);
                if ((0x2 < iVar2) && (gTheGame._120332_4_ == 0x2)) {
                    iVar2 = 0x2;
                }
                if (((*(int *)(param_1 + iVar10 + 0x31a4) == 0xc) && (0x23 < iVar1)) &&
                   ((gGameStatus & 0x2) == 0x0)) {
                    *(undefined4 *)(param_1 + iVar10 + 0x31a4) = 0xd;
                }
                if (*(int *)(param_1 + 0x4a84) == 0x0) {
                    for (iVar14 = 0x0; iVar14 < iVar2; iVar14 += 0x1) {
                        puVar13 = NULL;
                        iVar15 = 0x28;
                        iVar8 = 0x0;
                        puVar12 = puVar11;
                        do {
                            if (*(int *)(puVar12 + 0x2520) == 0x0) {
                                *(int *)(puVar11 + iVar8 * 0x50 + 0x256c) = param_2;
                                puVar13 = puVar11 + iVar8 * 0x50 + 0x2520;
                                break;
                            }
                            puVar12 = puVar12 + 0x50;
                            iVar8 += 0x1;
                            iVar15 += -0x1;
                        } while (iVar15 != 0x0);
                        if (puVar13 != NULL) {
                            if (local_b0[0] < 0x5) {
                                InitFlyAttack(param_1,puVar13,
                                              *(undefined4 *)(param_1 + iVar10 + 0x31ac),
                                              *(undefined4 *)(param_1 + iVar10 + 0x31b8),local_b0[0]
                                              ,param_2);
                            }
                            else if ((local_b0[0] == 0x5) && (iVar14 == 0x0)) {
                                InitFlyAttack(param_1,puVar13,
                                              *(undefined4 *)(param_1 + iVar10 + 0x31ac),
                                              *(undefined4 *)(param_1 + iVar10 + 0x31b8),0x1,param_2
                                             );
                            }
                            else if ((local_b0[0] == 0x5) && (iVar14 == 0x1)) {
                                InitFlyAttack(param_1,puVar13,
                                              *(undefined4 *)(param_1 + iVar10 + 0x31ac),
                                              *(undefined4 *)(param_1 + iVar10 + 0x31b8),0x2,param_2
                                             );
                            }
                            else if (local_b0[0] == 0x6) {
                                InitFlyAttack(param_1,puVar13,
                                              *(undefined4 *)(param_1 + iVar10 + 0x31ac),
                                              *(undefined4 *)(param_1 + iVar10 + 0x31b8),0x2,param_2
                                             );
                            }
                            else if (local_b0[0] == 0x7) {
                                InitFlyAttack(param_1,puVar13,
                                              *(undefined4 *)(param_1 + iVar10 + 0x31ac),
                                              *(undefined4 *)(param_1 + iVar10 + 0x31b8),0x3,param_2
                                             );
                            }
                            else if ((local_b0[0] == 0x8) && (iVar14 == 0x0)) {
                                InitFlyAttack(param_1,puVar13,
                                              *(undefined4 *)(param_1 + iVar10 + 0x31ac),
                                              *(undefined4 *)(param_1 + iVar10 + 0x31b8),0x4,param_2
                                             );
                            }
                            else if ((local_b0[0] == 0x8) && (iVar14 == 0x1)) {
                                InitFlyAttack(param_1,puVar13,
                                              *(undefined4 *)(param_1 + iVar10 + 0x31ac),
                                              *(undefined4 *)(param_1 + iVar10 + 0x31b8),0x3,param_2
                                             );
                            }
                        }
                    }
                }
                iVar2 = *(int *)(param_1 + 0x4a84);
                if (iVar2 != 0x0) {
                    if (((*(int *)(param_1 + iVar10 + 0x31a4) != 0xa) && (iVar1 == 0x3)) &&
                       (iVar2 == 0x3)) {
                        *(undefined4 *)(param_1 + iVar10 + 0x31a0) = 0x0;
                    }
                    if (*(int *)(param_1 + 0x4a84) < 0x6) {
                        if (param_2 == 0x0) {
                            PlaySE(local_a0,0xf1);
                        }
                        else if (param_2 == 0x1) {
                            if (gWorld == 0x10) {
                                PlaySE(local_98,0x1e4);
                            }
                            else {
                                PlaySE(local_9c,0xf7);
                            }
                        }
                        else {
                            PlaySE(local_94,0xf7);
                        }
                    }
                    else {
                        iVar1 = gWorld;
                        if (gTheGame._120328_4_ != 0x1) {
                            if (gTheGame._120328_4_ == 0x2) {
                                if (*local_90 == 0x96) {
                                    if ((param_2 == 0x0) &&
                                       (iVar1 = *(int *)(param_1 + 0x4b0c), gWorld == 0xf)) {
                                        iVar1 = -0x1;
                                    }
                                }
                                else {
                                    iVar1 = *(int *)(param_1 + 0x4b04);
                                }
                            }
                            else {
                                iVar1 = *(int *)(param_1 + 0x4b04);
                            }
                        }
                        if (iVar1 + 0x1U < 0x12) {
                            switch(local_8c[iVar1 + 0x1U]) {
                            case (pointer_____offset_0x9c4___)0x4710c:
                                PlaySE(local_88,0x147);
                                break;
                            case (pointer_____offset_0x9c4___)0x4711c:
                                PlaySE(local_84,0x14c);
                                break;
                            case (pointer_____offset_0x9c4___)0x4712c:
                                PlaySE(local_80,0x14b);
                                break;
                            case (pointer_____offset_0x9c4___)0x4713c:
                                PlaySE(local_7c,0x149);
                                break;
                            case (pointer_____offset_0x9c4___)0x4714c:
                                PlaySE(local_78,0x14d);
                                break;
                            case (pointer_____offset_0x9c4___)0x4715c:
                                PlaySE(local_74,0x148);
                                break;
                            case (pointer_____offset_0x9c4___)0x4716c:
                                PlaySE(local_70,0x14a);
                                break;
                            case (pointer_____offset_0x9c4___)0x4717c:
                                PlaySE(local_6c,0x14e);
                                break;
                            case (pointer_____offset_0x9c4___)0x4718c:
                                PlaySE(local_68,0x14f);
                                break;
                            case (pointer_____offset_0x9c4___)0x4719c:
                                PlaySE(local_64,0x151);
                                break;
                            case (pointer_____offset_0x9c4___)0x471ac:
                                PlaySE(local_60,0x150);
                                break;
                            case (pointer_____offset_0x9c4___)0x471bc:
                                PlaySE(local_5c,0x152);
                                break;
                            case (pointer_____offset_0x9c4___)0x471cc:
                                PlaySE(local_58,0x153);
                                break;
                            case (pointer_____offset_0x9c4___)0x471dc:
                                PlaySE(local_54,0x155);
                                break;
                            case (pointer_____offset_0x9c4___)0x471ec:
                                PlaySE(local_50,0x156);
                                break;
                            case (pointer_____offset_0x9c4___)0x471fc:
                                PlaySE(SFX_INIT_TABLE,0x158);
                                break;
                            case (pointer_____offset_0x9c4___)0x4720c:
                                PlaySE(SFX_INIT_TABLE,0x157);
                            }
                        }
                    }
                    puVar12 = gTheGame;
                    puVar13 = gTheGame;
                    for (iVar1 = 0x0; iVar1 < gTheGame._120328_4_; iVar1 += 0x1) {
                        if ((iVar1 != param_2) && (*(int *)(puVar12 + 0x16000) == 0x3)) {
                            for (iVar14 = 0x0; iVar14 < iVar2 + -0x2; iVar14 += 0x1) {
                                puVar6 = NULL;
                                iVar15 = 0x28;
                                iVar8 = 0x0;
                                puVar3 = puVar13;
                                do {
                                    if (*(int *)(puVar3 + 0x2520) == 0x0) {
                                        *(int *)(puVar13 + iVar8 * 0x50 + 0x256c) = param_2;
                                        puVar6 = puVar13 + iVar8 * 0x50 + 0x2520;
                                        puVar7 = puVar13;
                                        break;
                                    }
                                    puVar3 = puVar3 + 0x50;
                                    iVar8 += 0x1;
                                    iVar15 += -0x1;
                                } while (iVar15 != 0x0);
                                if (puVar6 != NULL) {
                                    InitFlyAttack(puVar7,puVar6,
                                                  *(undefined4 *)(param_1 + iVar10 + 0x31ac),
                                                  *(undefined4 *)(param_1 + iVar10 + 0x31b8),0x9,
                                                  param_2);
                                }
                            }
                        }
                        puVar12 = puVar12 + 0x110;
                        puVar13 = puVar13 + 0x57c0;
                    }
                }
            }
        }
LAB_000472d0:
        iVar4 += 0x1;
        iVar10 += 0x68;
        param_1 = puVar7;
        if (0x9 < iVar4) {
            if (local_a4 != 0x0) {
                iVar4 = 0xa;
                iVar10 = 0x0;
                puVar11 = puVar7;
                do {
                    if (*(int *)(puVar11 + 0x31a0) == 0x0) {
                        local_118 = 0xffffffff;
                        if ((local_a4 < -0x23) && ((gGameStatus & 0x2) == 0x0)) {
                            local_114 = 0xd;
                        }
                        else {
                            local_114 = 0xc;
                        }
                        local_fc = local_a4;
                        bcopy(&local_118,puVar7 + iVar10 * 0x68 + 0x31a0,0x68);
                        return;
                    }
                    puVar11 = puVar11 + 0x68;
                    iVar10 += 0x1;
                    iVar4 += -0x1;
                } while (iVar4 != 0x0);
            }
            return;
        }
    } while( true );
}

