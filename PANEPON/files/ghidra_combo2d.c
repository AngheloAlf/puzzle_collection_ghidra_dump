

void Compact2DAttackNoWhere(int param_1)

{
    int iVar1;
    int iVar2;
    
    iVar1 = 0x0;
    iVar2 = param_1;
    do {
        if ((0x6 < *(int *)(iVar2 + 0x2520)) && (*(int *)(iVar2 + 0x2544) == 0xc)) {
            Compact2DAttack(param_1,iVar1);
        }
        iVar1 += 0x1;
        iVar2 += 0x50;
    } while (iVar1 < 0x28);
    return;
}



void Compact2DAttack(int param_1,int param_2)

{
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    void *__src;
    int iVar5;
    void *__dest;
    int iVar6;
    int *piVar7;
    
    iVar4 = 0x0;
    piVar7 = (int *)(param_1 + param_2 * 0x50 + 0x2520);
    if (piVar7[0x9] < 0xc) {
        iVar3 = piVar7[0x6];
        iVar2 = param_1 + piVar7[0x9] * 0x318 + iVar3 * 0x2c;
        for (; iVar3 < piVar7[0x7]; iVar3 += 0x1) {
            if (*(int *)(iVar2 + 0x4) != 0x0) {
                *(int *)(iVar2 + 0x4) = *(int *)(iVar2 + 0x4) + -0x1;
                iVar4 = -0x1;
            }
            iVar2 += 0x2c;
        }
    }
    if ((iVar4 == 0x0) && (0x0 < piVar7[0x9])) {
        iVar3 = piVar7[0x6];
        iVar2 = piVar7[0x7];
        iVar4 = iVar2 - iVar3;
        piVar1 = (int *)(param_1 + (piVar7[0x9] + -0x1) * 0x318 + iVar3 * 0x2c);
        if (iVar3 < iVar2) {
            do {
                if (((piVar1[0x4] != 0x0) || (*piVar1 == 0x2)) || (*piVar1 == 0x3)) break;
                piVar1 = piVar1 + 0xb;
                iVar3 += 0x1;
                iVar4 += -0x1;
            } while (iVar4 != 0x0);
        }
        if (iVar3 == iVar2) {
            for (iVar4 = 0x0; iVar4 < piVar7[0x5]; iVar4 += 0x1) {
                iVar3 = 0x0;
                iVar2 = piVar7[0x9] + iVar4;
                if (iVar2 < 0xc) {
                    iVar6 = piVar7[0x6];
                    iVar5 = iVar6 * 0x2c;
                    __dest = (void *)(param_1 + (iVar2 + -0x1) * 0x318 + iVar5);
                    iVar2 = param_1 + (iVar2 + -0x1) * 0x90 + iVar6 * 0x18;
                    for (; iVar6 < piVar7[0x7]; iVar6 += 0x1) {
                        __src = (void *)(param_1 + (piVar7[0x9] + iVar4) * 0x318 + iVar5);
                        bcopy(__src,__dest,0x2c);
                        Init2DAttackTMEM(iVar2 + 0x3f10,piVar7[0x1],iVar4,iVar3);
                        iVar3 += 0x1;
                        InitTetrisState(__src);
                        __dest = (void *)((int)__dest + 0x2c);
                        iVar5 += 0x2c;
                        iVar2 += 0x18;
                    }
                }
                else if (iVar2 == 0xc) {
                    iVar2 = piVar7[0x6];
                    iVar5 = param_1 + iVar2 * 0x2c;
                    iVar6 = param_1 + iVar2 * 0x18 + 0x630;
                    for (; iVar2 < piVar7[0x7]; iVar2 += 0x1) {
                        *(undefined4 *)(iVar5 + 0x2218) = 0x9;
                        Init2DAttackTMEM(iVar6 + 0x3f10,piVar7[0x1],iVar4,iVar3);
                        iVar3 += 0x1;
                        iVar5 += 0x2c;
                        iVar6 += 0x18;
                    }
                }
                else if (0xc < iVar2) break;
            }
            piVar7[0x9] = piVar7[0x9] + -0x1;
            if (*piVar7 != 0x5) {
                *piVar7 = 0x6;
            }
        }
    }
    return;
}


