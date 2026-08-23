

void Init3DAttackPosition(undefined4 *param_1,undefined4 param_2,int param_3)

{
    byte bVar1;
    byte *pbVar2;
    
    *param_1 = 0x1;
    param_1[0x1] = param_2;
    param_1[0x2] = 0xffffffff;
    param_1[0x5] = 0x1;
    param_1[0x3] = 0x19;
    *(undefined2 *)((int)param_1 + 0x36) = 0x14;
    *(undefined2 *)((int)param_1 + 0x3e) = 0x10;
    if (false) {
switchD_0004922c_caseD_0:
        *(undefined *)((int)param_1 + 0x46) = 0x6;
    }
    else {
        switch(param_2) {
        default:
            goto switchD_0004922c_caseD_0;
        case 0x1:
            pbVar2 = (byte *)((int)&st_AttackPosition + param_3);
            bVar1 = *pbVar2;
            *pbVar2 = bVar1 & 0xfc;
            if ((bVar1 & 0x3) == 0x1) {
                param_1[0x6] = 0x2;
                param_1[0x7] = 0x5;
                *pbVar2 = *pbVar2 | 0x2;
            }
            else {
                param_1[0x6] = 0x5;
                param_1[0x7] = 0x8;
                *pbVar2 = *pbVar2 | 0x1;
            }
            *(undefined2 *)((int)param_1 + 0x36) = 0x18;
            *(undefined *)((int)param_1 + 0x46) = 0x7;
            break;
        case 0x2:
            pbVar2 = (byte *)((int)&st_AttackPosition + param_3);
            bVar1 = *pbVar2 & 0x1c;
            *pbVar2 = *pbVar2 & 0xe3;
            if (bVar1 == 0x4) {
                param_1[0x6] = 0x2;
                param_1[0x7] = 0x6;
                *pbVar2 = *pbVar2 | 0x8;
            }
            else if (bVar1 == 0x8) {
                param_1[0x6] = 0x3;
                param_1[0x7] = 0x7;
                *pbVar2 = *pbVar2 | 0x10;
            }
            else {
                param_1[0x6] = 0x4;
                param_1[0x7] = 0x8;
                *pbVar2 = *pbVar2 | 0x4;
            }
            *(undefined2 *)((int)param_1 + 0x36) = 0x10;
            *(undefined *)((int)param_1 + 0x46) = 0x7;
            break;
        case 0x3:
            pbVar2 = (byte *)((int)&st_AttackPosition + param_3);
            bVar1 = *pbVar2;
            *pbVar2 = bVar1 & 0x9f;
            if ((bVar1 & 0x60) == 0x20) {
                param_1[0x6] = 0x2;
                param_1[0x7] = 0x7;
                *pbVar2 = *pbVar2 | 0x40;
            }
            else {
                param_1[0x6] = 0x3;
                param_1[0x7] = 0x8;
                *pbVar2 = *pbVar2 | 0x20;
            }
            *(undefined2 *)((int)param_1 + 0x36) = 0x18;
            *(undefined *)((int)param_1 + 0x46) = 0x7;
            break;
        case 0x4:
            param_1[0x6] = 0x2;
            param_1[0x7] = 0x8;
            *(undefined *)((int)param_1 + 0x46) = 0x5;
            break;
        case 0x9:
            param_1[0x6] = 0x2;
            param_1[0x7] = 0x8;
            *(undefined *)((int)param_1 + 0x46) = 0x4;
            break;
        case 0xa:
        case 0x10:
            *(undefined *)((int)param_1 + 0x46) = 0x5;
            break;
        case 0xb:
        case 0x11:
            *(undefined *)((int)param_1 + 0x46) = 0x6;
            break;
        case 0xc:
        case 0x12:
            *(undefined *)((int)param_1 + 0x46) = 0x1;
            break;
        case 0xd:
        case 0x13:
            *(undefined *)((int)param_1 + 0x46) = 0x2;
            break;
        case 0xe:
        case 0x14:
            *(undefined *)((int)param_1 + 0x46) = 0x3;
            break;
        case 0xf:
        case 0x15:
            *(undefined *)((int)param_1 + 0x46) = 0x4;
        }
    }
    if (0x9 < (int)param_1[0x1]) {
        Set3DRingPosition();
    }
    return;
}



void Set3DRingPosition(int param_1)

{
    int iVar1;
    
    iVar1 = *(int *)(param_1 + 0x4);
    if (iVar1 == 0xb) {
        *(undefined4 *)(param_1 + 0x18) = 0x11;
        *(undefined4 *)(param_1 + 0x1c) = 0xb;
    }
    else if ((iVar1 < 0xb) && (0x9 < iVar1)) {
        *(undefined4 *)(param_1 + 0x18) = 0x2;
        *(undefined4 *)(param_1 + 0x1c) = 0x8;
    }
    else {
        *(undefined4 *)(param_1 + 0x18) = 0xe;
        *(undefined4 *)(param_1 + 0x1c) = 0xe;
    }
    if (*(int *)(param_1 + 0x4) < 0xc) {
        *(undefined4 *)(param_1 + 0x14) = 0x1;
    }
    else {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x4) + -0xb;
    }
    if (0xa < *(int *)(param_1 + 0x14)) {
        *(undefined4 *)(param_1 + 0x14) = 0xa;
        return;
    }
    return;
}



void Upgrade3DBrick(int param_1,int param_2)

{
    int *piVar1;
    
    piVar1 = (int *)(param_1 + param_2 * 0x50 + 0x2520);
    if (0x9 < piVar1[0x1]) {
        if (*piVar1 == 0x1) {
            piVar1[0x1] = piVar1[0x1] + 0x1;
            if (0x16 < piVar1[0x1]) {
                piVar1[0x1] = 0x16;
            }
            Init3DAttackPosition(piVar1,piVar1[0x1]);
        }
        else if (*piVar1 - 0x2U < 0x2) {
            *piVar1 = 0x2;
            piVar1[0x1] = piVar1[0x1] + 0x1;
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
            piVar1[0x3] = 0x3c;
        }
    }
    return;
}



void Draw3DChain3_CrossBoundary(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
    int iVar1;
    
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0x6) {
        if (*param_2 != 0x0) {
            return;
        }
        *param_2 = 0x6;
        *param_3 = 0x9;
        *param_4 = 0x0;
        return;
    }
    if (iVar1 == 0x7) {
        if (*param_2 != 0x1) {
            return;
        }
        *param_2 = 0x7;
        *param_3 = 0x9;
        *param_4 = 0x0;
        return;
    }
    if (iVar1 != 0x8) {
        return;
    }
    if (*param_2 != 0x2) {
        return;
    }
    *param_2 = 0x8;
    *param_3 = 0x9;
    *param_4 = 0x0;
    return;
}



void Update3DAttack(int param_1,undefined4 param_2,int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int iVar6;
    char acStack_35 [0x5];
    undefined local_30;
    int local_2c [0x2];
    
    iVar4 = 0x0;
    iVar3 = -0x1;
    local_2c[0] = 0x0;
    bzero(acStack_35 + 0x1,0x5);
    acStack_35[1] = 0xff;
    iVar6 = 0x14;
    iVar2 = param_1;
    do {
        if ((*(int *)(iVar2 + 0x2524) == 0xa) && (*(int *)(iVar2 + 0x2548) != -0x1)) {
            iVar1 = *(int *)(iVar2 + 0x2520);
            if (((0x0 < iVar1) && (iVar1 < 0x3)) && (*(int *)(iVar2 + 0x2528) != -0x1)) {
                iVar3 = *(int *)(param_1 + *(int *)(iVar2 + 0x2548) * 0x50 + 0x2528);
            }
        }
        else {
            iVar1 = *(int *)(iVar2 + 0x2520);
            if ((0x0 < iVar1) &&
               (((iVar1 < 0x4 && (iVar1 = *(int *)(iVar2 + 0x2528), iVar1 != -0x1)) && (iVar1 < 0x5)
                ))) {
                acStack_35[iVar1 + 0x1] = -0x1;
            }
        }
        if ((*(int *)(iVar2 + 0x2574) == 0xa) && (*(int *)(iVar2 + 0x2598) != -0x1)) {
            iVar1 = *(int *)(iVar2 + 0x2570);
            if (((0x0 < iVar1) && (iVar1 < 0x3)) && (*(int *)(iVar2 + 0x2578) != -0x1)) {
                iVar3 = *(int *)(param_1 + *(int *)(iVar2 + 0x2598) * 0x50 + 0x2528);
            }
        }
        else {
            iVar1 = *(int *)(iVar2 + 0x2570);
            if ((0x0 < iVar1) &&
               (((iVar1 < 0x4 && (iVar1 = *(int *)(iVar2 + 0x2578), iVar1 != -0x1)) && (iVar1 < 0x5)
                ))) {
                acStack_35[iVar1 + 0x1] = -0x1;
            }
        }
        iVar2 += 0xa0;
        iVar6 += -0x1;
    } while (iVar6 != 0x0);
    iVar6 = 0x0;
    iVar2 = param_1;
    do {
        iVar1 = *(int *)(iVar2 + 0x2520);
        piVar5 = (int *)(iVar2 + 0x2520);
        if (iVar1 < 0x5) {
            if (iVar1 == 0x1) {
                AttackFly(param_1,piVar5,param_3);
            }
            else if (0x0 < iVar1) {
                iVar1 = *(int *)(iVar2 + 0x2528);
                if ((acStack_35[iVar1] == '\0') && (iVar3 != iVar1)) {
                    *(int *)(iVar2 + 0x2528) = iVar1 + -0x1;
                    iVar1 = *(int *)(iVar2 + 0x2528);
                    if (iVar1 < 0x5) {
                        acStack_35[iVar1 + 0x1] = -0x1;
                    }
                    else if (iVar1 == 0x5) {
                        local_30 = 0xff;
                    }
                }
                AttackTop(param_1,param_2,piVar5,param_3,iVar6);
                if (*piVar5 == 0x5) {
                    if (*(int *)(iVar2 + 0x252c) == -0x1) {
                        *(undefined4 *)(iVar2 + 0x252c) = 0x0;
                    }
                    else {
                        iVar4 += 0x1;
                    }
                }
                else if ((*piVar5 == 0x4) && (*(int *)(iVar2 + 0x252c) == 0x0)) {
                    *(undefined4 *)(iVar2 + 0x252c) = 0xffffffff;
                    iVar4 += 0x1;
                }
            }
        }
        else if (iVar1 == 0x7) {
            AttackShake(param_1,param_2,piVar5);
        }
        else if (iVar1 < 0x7) {
            AttackFall(param_1,param_2,piVar5,local_2c);
        }
        iVar6 += 0x1;
        iVar2 += 0x50;
    } while (iVar6 < 0x28);
    piVar5 = (int *)(st_Attack3DTopPosition + param_3 * 0x18);
    *piVar5 = *piVar5 - iVar4;
    if (*piVar5 < 0x1) {
        *piVar5 = 0x1;
    }
    if (local_2c[0] != 0x0) {
        if (param_3 == 0x0) {
            PlaySE(SFX_INIT_TABLE,local_2c[0] + 0xb7);
        }
        else {
            PlaySE(SFX_INIT_TABLE,local_2c[0] + 0xba);
        }
    }
    return;
}



void Check3DSameAttack(int param_1,int param_2,int param_3,int param_4,int param_5)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    iVar4 = 0x0;
    if (param_3 == -0x1) {
        iVar3 = param_1 + param_4 * 0x50 + 0x2520;
    }
    else {
        iVar1 = ReturnAttackSlot(param_1,param_3,param_4);
        if (iVar1 == -0x1) {
            return;
        }
        iVar3 = param_1 + iVar1 * 0x50 + 0x2520;
        if ((*(int *)(iVar3 + 0x4) == 0x9) || (param_5 == 0x0)) {
            if ((*(int *)(iVar3 + 0x4) == 0x9) && (param_5 == 0x0)) {
                iVar4 = -0x1;
            }
        }
        else {
            iVar4 = -0x1;
        }
        if (iVar4 == 0x0) {
            return;
        }
        iVar5 = 0x2b;
        iVar2 = 0x0;
        iVar4 = param_2;
        do {
            if (*(int *)(iVar4 + 0x28) == iVar1 + 0x1) {
                return;
            }
            if (*(int *)(iVar4 + 0x28) == 0x0) {
                *(int *)(param_2 + iVar2 * 0x4 + 0x28) = iVar1 + 0x1;
                break;
            }
            iVar4 += 0x4;
            iVar2 += 0x1;
            iVar5 += -0x1;
        } while (iVar5 != 0x0);
    }
    iVar4 = *(int *)(iVar3 + 0x18);
    if (iVar4 == 0x0) {
        iVar4 = 0x12;
    }
    for (iVar1 = 0x0; iVar1 < *(int *)(iVar3 + 0x14); iVar1 += 0x1) {
        iVar2 = *(int *)(iVar3 + 0x24) + iVar1;
        if ((iVar2 < 0xc) &&
           (*(int *)(param_1 + (iVar4 + -0x1) * 0x2c + iVar2 * 0x318 + 0x10) == 0x9)) {
            Check3DSameAttack(param_1,param_2,iVar2,iVar4 + -0x1,param_5);
        }
    }
    iVar4 = *(int *)(iVar3 + 0x1c);
    if (iVar4 == 0x11) {
        iVar4 = 0x0;
    }
    for (iVar1 = 0x0; iVar1 < *(int *)(iVar3 + 0x14); iVar1 += 0x1) {
        iVar2 = *(int *)(iVar3 + 0x24) + iVar1;
        if ((iVar2 < 0xc) && (*(int *)(param_1 + iVar4 * 0x2c + iVar2 * 0x318 + 0x10) == 0x9)) {
            Check3DSameAttack(param_1,param_2,iVar2,iVar4,param_5);
        }
    }
    iVar4 = *(int *)(iVar3 + 0x24) + *(int *)(iVar3 + 0x14);
    if (iVar4 < 0xc) {
        iVar1 = *(int *)(iVar3 + 0x18);
        if (iVar1 == *(int *)(iVar3 + 0x1c)) {
            iVar2 = param_1 + iVar4 * 0x318;
            iVar1 = 0x0;
            do {
                if (*(int *)(iVar2 + 0x10) == 0x9) {
                    Check3DSameAttack(param_1,param_2,iVar4,iVar1,param_5);
                }
                iVar1 += 0x1;
                iVar2 += 0x2c;
            } while (iVar1 < 0x12);
        }
        else if (*(int *)(iVar3 + 0x1c) < iVar1) {
            iVar2 = param_1 + iVar4 * 0x318;
            iVar5 = iVar2 + iVar1 * 0x2c;
            for (; iVar1 < 0x12; iVar1 += 0x1) {
                if (*(int *)(iVar5 + 0x10) == 0x9) {
                    Check3DSameAttack(param_1,param_2,iVar4,iVar1,param_5);
                }
                iVar5 += 0x2c;
            }
            for (iVar1 = 0x0; iVar1 < *(int *)(iVar3 + 0x1c); iVar1 += 0x1) {
                if (*(int *)(iVar2 + 0x10) == 0x9) {
                    Check3DSameAttack(param_1,param_2,iVar4,iVar1,param_5);
                }
                iVar2 += 0x2c;
            }
        }
        else {
            iVar2 = param_1 + iVar4 * 0x318 + iVar1 * 0x2c;
            for (; iVar1 < *(int *)(iVar3 + 0x1c); iVar1 += 0x1) {
                if (*(int *)(iVar2 + 0x10) == 0x9) {
                    Check3DSameAttack(param_1,param_2,iVar4,iVar1,param_5);
                }
                iVar2 += 0x2c;
            }
        }
    }
    iVar4 = *(int *)(iVar3 + 0x24) + -0x1;
    if (-0x1 < iVar4) {
        iVar1 = *(int *)(iVar3 + 0x18);
        if (iVar1 == *(int *)(iVar3 + 0x1c)) {
            iVar1 = param_1 + iVar4 * 0x318;
            iVar3 = 0x0;
            do {
                if (*(int *)(iVar1 + 0x10) == 0x9) {
                    Check3DSameAttack(param_1,param_2,iVar4,iVar3,param_5);
                }
                iVar3 += 0x1;
                iVar1 += 0x2c;
            } while (iVar3 < 0x12);
        }
        else if (*(int *)(iVar3 + 0x1c) < iVar1) {
            iVar2 = param_1 + iVar4 * 0x318;
            iVar5 = iVar2 + iVar1 * 0x2c;
            for (; iVar1 < 0x12; iVar1 += 0x1) {
                if (*(int *)(iVar5 + 0x10) == 0x9) {
                    Check3DSameAttack(param_1,param_2,iVar4,iVar1,param_5);
                }
                iVar5 += 0x2c;
            }
            for (iVar1 = 0x0; iVar1 < *(int *)(iVar3 + 0x1c); iVar1 += 0x1) {
                if (*(int *)(iVar2 + 0x10) == 0x9) {
                    Check3DSameAttack(param_1,param_2,iVar4,iVar1,param_5);
                }
                iVar2 += 0x2c;
            }
        }
        else {
            iVar2 = param_1 + iVar4 * 0x318 + iVar1 * 0x2c;
            for (; iVar1 < *(int *)(iVar3 + 0x1c); iVar1 += 0x1) {
                if (*(int *)(iVar2 + 0x10) == 0x9) {
                    Check3DSameAttack(param_1,param_2,iVar4,iVar1,param_5);
                }
                iVar2 += 0x2c;
            }
        }
    }
    return;
}



void Sync3DAttack(int param_1,int param_2)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    int *piVar4;
    int iVar5;
    void *__src;
    void *__src_00;
    int iVar6;
    int *piVar7;
    int iVar8;
    undefined auStack_128 [0x50];
    int local_d8 [0x2d];
    
    iVar8 = 0x2b;
    piVar7 = local_d8;
    iVar6 = 0x0;
    piVar4 = piVar7;
    iVar5 = param_2;
    do {
        *piVar4 = 0x0;
        if (*(int *)(iVar5 + 0x28) != 0x0) {
            piVar7[iVar6] = *(int *)(iVar5 + 0x28) + -0x1;
            iVar6 += 0x1;
        }
        piVar4 = piVar4 + 0x1;
        iVar5 += 0x4;
        iVar8 += -0x1;
    } while (iVar8 != 0x0);
    piVar4 = piVar7;
    for (iVar5 = 0x0; iVar5 < iVar6 + -0x1; iVar5 += 0x1) {
        iVar1 = iVar5 + 0x1;
        iVar8 = iVar6 - iVar1;
        piVar2 = local_d8 + iVar1;
        if (iVar1 < iVar6) {
            do {
                iVar1 = *piVar4;
                if (*piVar2 < iVar1) {
                    *piVar4 = *piVar2;
                    *piVar2 = iVar1;
                }
                piVar2 = piVar2 + 0x1;
                iVar8 += -0x1;
            } while (iVar8 != 0x0);
        }
        piVar4 = piVar4 + 0x1;
    }
    iVar8 = 0x2b;
    iVar5 = 0x0;
    do {
        if (*(int *)(param_2 + 0x28) != 0x0) {
            piVar4 = local_d8 + iVar5;
            iVar5 += 0x1;
            *(int *)(param_2 + 0x28) = *piVar4 + 0x1;
        }
        param_2 += 0x4;
        iVar8 += -0x1;
    } while (iVar8 != 0x0);
    for (iVar5 = 0x0; iVar5 < iVar6 + -0x1; iVar5 += 0x1) {
        iVar8 = iVar5 + 0x1;
        piVar4 = local_d8 + iVar8;
        for (; iVar8 < iVar6; iVar8 += 0x1) {
            iVar3 = param_1 + *piVar7 * 0x50;
            iVar1 = param_1 + *piVar4 * 0x50;
            __src_00 = (void *)(iVar3 + 0x2520);
            __src = (void *)(iVar1 + 0x2520);
            if (*(int *)(iVar1 + 0x2544) < *(int *)(iVar3 + 0x2544)) {
                bcopy(__src_00,auStack_128,0x50);
                bcopy(__src,__src_00,0x50);
                bcopy(auStack_128,__src,0x50);
            }
            else if ((*(int *)(iVar3 + 0x2544) == *(int *)(iVar1 + 0x2544)) &&
                    (*(int *)(iVar3 + 0x2538) < *(int *)(iVar1 + 0x2538))) {
                bcopy(__src_00,auStack_128,0x50);
                bcopy(__src,__src_00,0x50);
                bcopy(auStack_128,__src,0x50);
            }
            piVar4 = piVar4 + 0x1;
        }
        piVar7 = piVar7 + 0x1;
    }
    return;
}



void Change3DAttack(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
    undefined4 *puVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int *piVar11;
    int iVar12;
    int *piVar13;
    int iVar14;
    int iVar15;
    undefined4 *puVar16;
    int iVar17;
    undefined4 *puVar18;
    int iVar19;
    uint uVar20;
    int local_74;
    int local_70;
    int local_6c;
    int local_68;
    int local_64;
    int local_60;
    longlong local_58;
    undefined4 local_50;
    uint uStack_4c;
    
    iVar19 = 0x2b;
    piVar11 = &local_74;
    iVar14 = 0x0;
    puVar16 = NULL;
    iVar9 = *(int *)(param_1 + 0x4aa8);
    iVar10 = *(int *)(param_1 + 0x4aac);
    iVar12 = *(int *)(param_1 + 0x4ab0) + -0x2;
    iVar15 = *(int *)(param_1 + 0x4ab8);
    local_74 = -0x1;
    local_70 = -0x1;
    local_6c = -0x1;
    local_68 = -0x1;
    local_64 = -0x1;
    puVar18 = param_2;
    do {
        if (puVar18[0xa] != 0x0) {
            iVar3 = param_1 + (puVar18[0xa] + -0x1) * 0x50 + 0x2520;
            iVar6 = *(int *)(iVar3 + 0x14);
            if (0xc < *(int *)(iVar3 + 0x24) + iVar6) {
                iVar6 = 0xc - *(int *)(iVar3 + 0x24);
            }
            iVar2 = *(int *)(iVar3 + 0x18);
            iVar3 = *(int *)(iVar3 + 0x1c);
            if (iVar2 == iVar3) {
                iVar14 += iVar6 * 0x12;
            }
            else if (iVar3 < iVar2) {
                iVar14 += iVar6 * ((0x12 - iVar2) + iVar3);
            }
            else {
                iVar14 += iVar6 * (iVar3 - iVar2);
            }
        }
        puVar18 = puVar18 + 0x1;
        iVar19 += -0x1;
    } while (iVar19 != 0x0);
    if (iVar14 != 0x0) {
        iVar19 = 0x0;
        if ((((param_2[0x35] != 0x0) && (iVar19 = 0x1, param_2[0x36] != 0x0)) &&
            (iVar19 = 0x2, param_2[0x37] != 0x0)) &&
           ((iVar19 = 0x3, param_2[0x38] != 0x0 && (iVar19 = 0x4, param_2[0x39] != 0x0)))) {
            iVar19 = 0x5;
        }
        param_2[iVar19 + 0x35] = iVar14;
        iVar3 = 0x2b;
        uVar7 = iVar9 + iVar10 + (param_4 + -0x1) * iVar12 + 0x1 ^ 0x80000000;
        puVar18 = param_2;
        do {
            if (puVar18[0xa] != 0x0) {
                local_50 = 0x43300000;
                iVar6 = param_1 + (puVar18[0xa] + -0x1) * 0x50 + 0x2520;
                *(int *)(iVar6 + 0xc) = iVar9;
                iVar10 = (int)((double)CONCAT44(0x43300000,uVar7) - 4503601774854144.0);
                local_58 = (longlong)iVar10;
                *(int *)(iVar6 + 0x10) = iVar10;
                *(int *)(iVar6 + 0x8) = iVar19;
                uStack_4c = uVar7;
            }
            puVar18 = puVar18 + 0x1;
            iVar3 += -0x1;
        } while (iVar3 != 0x0);
        param_2[0xa] = 0x0;
        param_2[0xb] = 0x0;
        param_2[0xc] = 0x0;
        param_2[0xd] = 0x0;
        param_2[0xe] = 0x0;
        param_2[0xf] = 0x0;
        param_2[0x10] = 0x0;
        param_2[0x11] = 0x0;
        param_2[0x12] = 0x0;
        param_2[0x13] = 0x0;
        param_2[0x14] = 0x0;
        param_2[0x15] = 0x0;
        param_2[0x16] = 0x0;
        param_2[0x17] = 0x0;
        param_2[0x18] = 0x0;
        param_2[0x19] = 0x0;
        param_2[0x1a] = 0x0;
        param_2[0x1b] = 0x0;
        param_2[0x1c] = 0x0;
        param_2[0x1d] = 0x0;
        param_2[0x1e] = 0x0;
        param_2[0x1f] = 0x0;
        param_2[0x20] = 0x0;
        param_2[0x21] = 0x0;
        param_2[0x22] = 0x0;
        param_2[0x23] = 0x0;
        param_2[0x24] = 0x0;
        param_2[0x25] = 0x0;
        param_2[0x26] = 0x0;
        param_2[0x27] = 0x0;
        param_2[0x28] = 0x0;
        param_2[0x29] = 0x0;
        param_2[0x2a] = 0x0;
        param_2[0x2b] = 0x0;
        param_2[0x2c] = 0x0;
        param_2[0x2d] = 0x0;
        param_2[0x2e] = 0x0;
        param_2[0x2f] = 0x0;
        param_2[0x30] = 0x0;
        param_2[0x31] = 0x0;
        puVar18 = param_2 + 0x28;
        iVar9 = 0x3;
        if (true) {
            do {
                puVar18[0xa] = 0x0;
                puVar18 = puVar18 + 0x1;
                iVar9 += -0x1;
            } while (iVar9 != 0x0);
        }
    }
    local_60 = 0x0;
    iVar9 = param_1;
    do {
        puVar18 = (undefined4 *)(iVar9 + 0x2520);
        if ((0x6 < *(int *)(iVar9 + 0x2520)) && (*(int *)(iVar9 + 0x2528) != -0x1)) {
            *param_2 = 0x2;
            if ((*(int *)(iVar9 + 0x252c) < 0x1) && (*(int *)(iVar9 + 0x2530) < 0x1)) {
                iVar10 = 0x0;
                if (*(int *)(iVar9 + 0x2528) == local_74) {
                    iVar10 = -0x1;
                }
                if (*(int *)(iVar9 + 0x2528) == local_70) {
                    iVar10 = -0x1;
                }
                if (*(int *)(iVar9 + 0x2528) == local_6c) {
                    iVar10 = -0x1;
                }
                if (*(int *)(iVar9 + 0x2528) == local_68) {
                    iVar10 = -0x1;
                }
                if (*(int *)(iVar9 + 0x2528) == local_64) {
                    iVar10 = -0x1;
                }
                iVar14 = 0x5;
                if (iVar10 == 0x0) {
                    iVar10 = 0x0;
                    piVar13 = piVar11;
                    for (iVar19 = 0x0; iVar19 < *(int *)(iVar9 + 0x2534); iVar19 += 0x1) {
                        iVar3 = *(int *)(iVar9 + 0x2544) + iVar19;
                        if (iVar3 < 0xc) {
                            iVar6 = *(int *)(iVar9 + 0x2538);
                            iVar2 = 0x0;
                            iVar5 = *(int *)(iVar9 + 0x253c);
                            if (iVar6 == iVar5) {
                                iVar17 = iVar5 + -0x1;
                                iVar8 = param_1 + iVar3 * 0x318;
                                puVar1 = (undefined4 *)(iVar8 + iVar17 * 0x2c);
                                if (-0x1 < iVar17) {
                                    do {
                                        puVar16 = puVar1;
                                        if ((puVar16[0x4] == 0x9) && (puVar16[0x3] == 0x0)) {
                                            iVar2 = -0x1;
                                        }
                                        if (iVar2 != 0x0) break;
                                        iVar17 += -0x1;
                                        iVar5 += -0x1;
                                        puVar1 = puVar16 + -0xb;
                                    } while (iVar5 != 0x0);
                                }
                                if (iVar2 == 0x0) {
                                    iVar5 = 0x12 - iVar6;
                                    iVar17 = 0x11;
                                    puVar1 = (undefined4 *)(iVar8 + 0x2ec);
                                    if (iVar6 < 0x12) {
                                        do {
                                            puVar16 = puVar1;
                                            if ((puVar16[0x4] == 0x9) && (puVar16[0x3] == 0x0)) {
                                                iVar2 = -0x1;
                                            }
                                            if (iVar2 != 0x0) break;
                                            iVar17 += -0x1;
                                            iVar5 += -0x1;
                                            puVar1 = puVar16 + -0xb;
                                        } while (iVar5 != 0x0);
                                    }
                                }
                            }
                            else if (iVar5 < iVar6) {
                                iVar17 = iVar5 + -0x1;
                                iVar8 = param_1 + iVar3 * 0x318;
                                puVar1 = (undefined4 *)(iVar8 + iVar17 * 0x2c);
                                if (-0x1 < iVar17) {
                                    do {
                                        puVar16 = puVar1;
                                        if ((puVar16[0x4] == 0x9) && (puVar16[0x3] == 0x0)) {
                                            iVar2 = -0x1;
                                        }
                                        if (iVar2 != 0x0) break;
                                        iVar17 += -0x1;
                                        iVar5 += -0x1;
                                        puVar1 = puVar16 + -0xb;
                                    } while (iVar5 != 0x0);
                                }
                                if (iVar2 == 0x0) {
                                    iVar5 = 0x12 - iVar6;
                                    iVar17 = 0x11;
                                    puVar1 = (undefined4 *)(iVar8 + 0x2ec);
                                    if (iVar6 < 0x12) {
                                        do {
                                            puVar16 = puVar1;
                                            if ((puVar16[0x4] == 0x9) && (puVar16[0x3] == 0x0)) {
                                                iVar2 = -0x1;
                                            }
                                            if (iVar2 != 0x0) break;
                                            iVar17 += -0x1;
                                            iVar5 += -0x1;
                                            puVar1 = puVar16 + -0xb;
                                        } while (iVar5 != 0x0);
                                    }
                                }
                            }
                            else {
                                iVar17 = iVar5 + -0x1;
                                iVar5 -= iVar6;
                                puVar1 = (undefined4 *)(param_1 + iVar3 * 0x318 + iVar17 * 0x2c);
                                if (iVar6 <= iVar17) {
                                    do {
                                        puVar16 = puVar1;
                                        if ((puVar16[0x4] == 0x9) && (puVar16[0x3] == 0x0)) {
                                            iVar2 = -0x1;
                                        }
                                        if (iVar2 != 0x0) break;
                                        iVar17 += -0x1;
                                        iVar5 += -0x1;
                                        puVar1 = puVar16 + -0xb;
                                    } while (iVar5 != 0x0);
                                }
                            }
                            if (iVar2 != 0x0) {
                                if (puVar16[0x2] == 0x0) {
                                    puVar16[0x2] = iVar12;
                                }
                                piVar11 = piVar11 + 0x1;
                                *piVar13 = *(int *)(iVar9 + 0x2528);
                                piVar13 = piVar13 + 0x1;
                                iVar10 = puVar16[0x2];
                                puVar16[0x2] = iVar10 + -0x1;
                                if (iVar10 + -0x1 == 0x0) {
                                    iVar14 = param_2[*(int *)(iVar9 + 0x2528) + 0x35];
                                    param_2[*(int *)(iVar9 + 0x2528) + 0x35] = iVar14 + -0x1;
                                    if (iVar14 == 0x1) {
                                        *(undefined4 *)(param_1 + 0x4a9c) = 0xffffffff;
                                    }
                                    StartExplosion(param_1,param_3,iVar3,iVar17,puVar16[0x5]);
                                    PlayExplosionSound(param_3,puVar16[0x6]);
                                    if (iVar19 == 0x0) {
                                        uVar4 = AttackToBlock(param_1,iVar3,iVar17);
                                        puVar16[0x4] = uVar4;
                                        *puVar16 = 0x9;
                                        puVar16[0x8] = 0xffffffff;
                                        puVar16[0x1] = iVar15 + (iVar14 + -0x1) * iVar12;
                                    }
                                    else {
                                        puVar16[0x3] = 0x1;
                                    }
                                    if ((iVar17 == *(int *)(iVar9 + 0x2538)) && (iVar19 == 0x0)) {
                                        if (*(int *)(iVar9 + 0x2534) == 0x1) {
                                            if (*(int *)(iVar9 + 0x2524) == 0xa) {
                                                *(undefined4 *)(iVar9 + 0x2524) = 0x4;
                                            }
                                            iVar10 = FindEmptySpaces(param_1,puVar18);
                                            iVar10 = iVar15 + iVar10 + 0x1;
                                            if ((int)param_2[0x2] < iVar10) {
                                                param_2[0x2] = iVar10;
                                            }
                                            *puVar18 = 0x0;
                                            *(undefined4 *)(iVar9 + 0x2528) = 0xffffffff;
                                            if (param_2[*(int *)(iVar9 + 0x2528) + 0x35] == 0x0) {
                                                *param_2 = 0x0;
                                            }
                                        }
                                        else {
                                            *(int *)(iVar9 + 0x2524) =
                                                 *(int *)(iVar9 + 0x2524) + -0x1;
                                            *(int *)(iVar9 + 0x2524) =
                                                 *(int *)(iVar9 + 0x2524) + 0x16;
                                        }
                                    }
                                    else if ((iVar17 == *(int *)(iVar9 + 0x2538)) &&
                                            (iVar19 == *(int *)(iVar9 + 0x2534) + -0x1)) {
                                        *(int *)(iVar9 + 0x2544) = *(int *)(iVar9 + 0x2544) + 0x1;
                                        *(int *)(iVar9 + 0x2534) = *(int *)(iVar9 + 0x2534) + -0x1;
                                        *(int *)(iVar9 + 0x2524) = *(int *)(iVar9 + 0x2524) + -0x16;
                                        *(undefined4 *)(iVar9 + 0x2528) = 0xffffffff;
                                        for (iVar19 = 0x0; iVar19 < *(int *)(iVar9 + 0x2534);
                                            iVar19 += 0x1) {
                                            iVar10 = *(int *)(iVar9 + 0x2538);
                                            iVar3 = *(int *)(iVar9 + 0x2544) + iVar19;
                                            if (iVar10 == *(int *)(iVar9 + 0x253c)) {
                                                iVar10 = 0x0;
                                                if (true) {
                                                    iVar6 = 0x2;
                                                    iVar2 = param_1 + iVar3 * 0x318;
                                                    if (true) {
                                                        do {
                                                            *(undefined4 *)(iVar2 + 0xc) = 0x0;
                                                            iVar10 += 0x8;
                                                            *(undefined4 *)(iVar2 + 0x38) = 0x0;
                                                            *(undefined4 *)(iVar2 + 0x64) = 0x0;
                                                            *(undefined4 *)(iVar2 + 0x90) = 0x0;
                                                            *(undefined4 *)(iVar2 + 0xbc) = 0x0;
                                                            *(undefined4 *)(iVar2 + 0xe8) = 0x0;
                                                            *(undefined4 *)(iVar2 + 0x114) = 0x0;
                                                            *(undefined4 *)(iVar2 + 0x140) = 0x0;
                                                            iVar2 += 0x160;
                                                            iVar6 += -0x1;
                                                        } while (iVar6 != 0x0);
                                                    }
                                                }
                                                iVar6 = param_1 + iVar3 * 0x318 + iVar10 * 0x2c;
                                                iVar3 = 0x12 - iVar10;
                                                if (iVar10 < 0x12) {
                                                    do {
                                                        *(undefined4 *)(iVar6 + 0xc) = 0x0;
                                                        iVar6 += 0x2c;
                                                        iVar3 += -0x1;
                                                    } while (iVar3 != 0x0);
                                                }
                                            }
                                            else if (*(int *)(iVar9 + 0x253c) < iVar10) {
                                                iVar6 = param_1 + iVar3 * 0x318;
                                                iVar3 = iVar6 + iVar10 * 0x2c;
                                                uVar7 = 0x12 - iVar10;
                                                if (iVar10 < 0x12) {
                                                    uVar20 = uVar7 >> 0x3;
                                                    if (uVar20 != 0x0) {
                                                        do {
                                                            *(undefined4 *)(iVar3 + 0xc) = 0x0;
                                                            *(undefined4 *)(iVar3 + 0x38) = 0x0;
                                                            *(undefined4 *)(iVar3 + 0x64) = 0x0;
                                                            *(undefined4 *)(iVar3 + 0x90) = 0x0;
                                                            *(undefined4 *)(iVar3 + 0xbc) = 0x0;
                                                            *(undefined4 *)(iVar3 + 0xe8) = 0x0;
                                                            *(undefined4 *)(iVar3 + 0x114) = 0x0;
                                                            *(undefined4 *)(iVar3 + 0x140) = 0x0;
                                                            iVar3 += 0x160;
                                                            uVar20 -= 0x1;
                                                        } while (uVar20 != 0x0);
                                                        uVar7 &= 0x7;
                                                        if (uVar7 == 0x0) goto LAB_0004a840;
                                                    }
                                                    do {
                                                        *(undefined4 *)(iVar3 + 0xc) = 0x0;
                                                        iVar3 += 0x2c;
                                                        uVar7 -= 0x1;
                                                    } while (uVar7 != 0x0);
                                                }
LAB_0004a840:
                                                for (iVar10 = 0x0; iVar10 < *(int *)(iVar9 + 0x253c)
                                                    ; iVar10 += 0x1) {
                                                    *(undefined4 *)(iVar6 + 0xc) = 0x0;
                                                    iVar6 += 0x2c;
                                                }
                                            }
                                            else {
                                                iVar3 = param_1 + iVar3 * 0x318 + iVar10 * 0x2c;
                                                for (; iVar10 < *(int *)(iVar9 + 0x253c);
                                                    iVar10 += 0x1) {
                                                    *(undefined4 *)(iVar3 + 0xc) = 0x0;
                                                    iVar3 += 0x2c;
                                                }
                                            }
                                        }
                                        iVar10 = FindEmptySpaces(param_1,puVar18);
                                        iVar10 = iVar15 + iVar10 + 0x1;
                                        if ((int)param_2[0x2] < iVar10) {
                                            param_2[0x2] = iVar10;
                                        }
                                        if (param_2[*(int *)(iVar9 + 0x2528) + 0x35] == 0x0) {
                                            *param_2 = 0x0;
                                        }
                                    }
                                }
                                iVar10 = -0x1;
                            }
                        }
                        else {
                            *(int *)(iVar9 + 0x2544) = *(int *)(iVar9 + 0x2544) + 0x1;
                            *(int *)(iVar9 + 0x2534) = *(int *)(iVar9 + 0x2534) + -0x1;
                            *(int *)(iVar9 + 0x2524) = *(int *)(iVar9 + 0x2524) + -0x16;
                            *(undefined4 *)(iVar9 + 0x2528) = 0xffffffff;
                            for (iVar19 = 0x0; iVar19 < *(int *)(iVar9 + 0x2534); iVar19 += 0x1) {
                                iVar3 = *(int *)(iVar9 + 0x2544) + iVar19;
                                if (iVar3 < 0xc) {
                                    iVar6 = *(int *)(iVar9 + 0x2538);
                                    if (iVar6 == *(int *)(iVar9 + 0x253c)) {
                                        iVar6 = 0x0;
                                        if (true) {
                                            iVar2 = 0x2;
                                            iVar5 = param_1 + iVar3 * 0x318;
                                            if (true) {
                                                do {
                                                    *(undefined4 *)(iVar5 + 0xc) = 0x0;
                                                    iVar6 += 0x8;
                                                    *(undefined4 *)(iVar5 + 0x38) = 0x0;
                                                    *(undefined4 *)(iVar5 + 0x64) = 0x0;
                                                    *(undefined4 *)(iVar5 + 0x90) = 0x0;
                                                    *(undefined4 *)(iVar5 + 0xbc) = 0x0;
                                                    *(undefined4 *)(iVar5 + 0xe8) = 0x0;
                                                    *(undefined4 *)(iVar5 + 0x114) = 0x0;
                                                    *(undefined4 *)(iVar5 + 0x140) = 0x0;
                                                    iVar5 += 0x160;
                                                    iVar2 += -0x1;
                                                } while (iVar2 != 0x0);
                                            }
                                        }
                                        iVar2 = param_1 + iVar3 * 0x318 + iVar6 * 0x2c;
                                        iVar3 = 0x12 - iVar6;
                                        if (iVar6 < 0x12) {
                                            do {
                                                *(undefined4 *)(iVar2 + 0xc) = 0x0;
                                                iVar2 += 0x2c;
                                                iVar3 += -0x1;
                                            } while (iVar3 != 0x0);
                                        }
                                    }
                                    else if (*(int *)(iVar9 + 0x253c) < iVar6) {
                                        iVar2 = param_1 + iVar3 * 0x318;
                                        iVar3 = iVar2 + iVar6 * 0x2c;
                                        uVar7 = 0x12 - iVar6;
                                        if (iVar6 < 0x12) {
                                            uVar20 = uVar7 >> 0x3;
                                            if (uVar20 != 0x0) {
                                                do {
                                                    *(undefined4 *)(iVar3 + 0xc) = 0x0;
                                                    *(undefined4 *)(iVar3 + 0x38) = 0x0;
                                                    *(undefined4 *)(iVar3 + 0x64) = 0x0;
                                                    *(undefined4 *)(iVar3 + 0x90) = 0x0;
                                                    *(undefined4 *)(iVar3 + 0xbc) = 0x0;
                                                    *(undefined4 *)(iVar3 + 0xe8) = 0x0;
                                                    *(undefined4 *)(iVar3 + 0x114) = 0x0;
                                                    *(undefined4 *)(iVar3 + 0x140) = 0x0;
                                                    iVar3 += 0x160;
                                                    uVar20 -= 0x1;
                                                } while (uVar20 != 0x0);
                                                uVar7 &= 0x7;
                                                if (uVar7 == 0x0) goto LAB_0004aa50;
                                            }
                                            do {
                                                *(undefined4 *)(iVar3 + 0xc) = 0x0;
                                                iVar3 += 0x2c;
                                                uVar7 -= 0x1;
                                            } while (uVar7 != 0x0);
                                        }
LAB_0004aa50:
                                        for (iVar3 = 0x0; iVar3 < *(int *)(iVar9 + 0x253c);
                                            iVar3 += 0x1) {
                                            *(undefined4 *)(iVar2 + 0xc) = 0x0;
                                            iVar2 += 0x2c;
                                        }
                                    }
                                    else {
                                        iVar3 = param_1 + iVar3 * 0x318 + iVar6 * 0x2c;
                                        for (; iVar6 < *(int *)(iVar9 + 0x253c); iVar6 += 0x1) {
                                            *(undefined4 *)(iVar3 + 0xc) = 0x0;
                                            iVar3 += 0x2c;
                                        }
                                    }
                                }
                            }
                            iVar3 = FindEmptySpaces(param_1,puVar18);
                            if ((int)param_2[0x2] < iVar15 + iVar3) {
                                param_2[0x2] = iVar15 + iVar3;
                            }
                            *param_2 = 0x0;
                        }
                        if (iVar10 != 0x0) break;
                    }
                }
            }
            else {
                if (0x0 < *(int *)(iVar9 + 0x252c)) {
                    *(int *)(iVar9 + 0x252c) = *(int *)(iVar9 + 0x252c) + -0x1;
                }
                if (0x0 < *(int *)(iVar9 + 0x2530)) {
                    *(int *)(iVar9 + 0x2530) = *(int *)(iVar9 + 0x2530) + -0x1;
                }
            }
        }
        iVar9 += 0x50;
        local_60 += 0x1;
        if (0x27 < local_60) {
            if (iVar14 == 0x1) {
                FinishGarbageBlock(param_1);
            }
            return;
        }
    } while( true );
}

