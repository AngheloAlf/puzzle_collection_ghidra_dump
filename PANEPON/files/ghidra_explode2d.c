
void Start2DExplosion(int param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    short *psVar5;
    int *piVar6;
    int iVar7;
    
    if (0xb < param_2) {
        return;
    }
    if (param_4 < 0x20) {
        iVar4 = 0x4;
    }
    else if (param_4 == 0x20) {
        iVar4 = 0x6;
    }
    else {
        iVar4 = 0x8;
    }
    psVar5 = (short *)(param_1 + param_2 * 0x90 + param_3 * 0x18 + 0x3f10);
    iVar3 = 0x0;
    do {
        if (iVar4 <= iVar3) {
            return;
        }
        iVar7 = 0x32;
        iVar2 = 0x0;
        iVar1 = param_1;
        do {
            if (*(int *)(iVar1 + 0x35b0) == -0x1) {
                piVar6 = (int *)(param_1 + iVar2 * 0x30 + 0x35b0);
                *piVar6 = param_4;
                piVar6[0x2] = iVar3;
                piVar6[0x1] = 0x0;
                piVar6[0x3] = ((int)*psVar5 >> 0x2) + 0x1;
                piVar6[0x4] = (int)psVar5[0x4] >> 0x2;
                if (param_4 == 0x1e) {
                    *(undefined2 *)(piVar6 + 0x7) = 0x100;
                    *(undefined2 *)(piVar6 + 0x9) = 0x100;
                    if (iVar3 == 0x2) {
                        *(undefined *)((int)piVar6 + 0x2f) = 0x11;
                    }
                    else if (iVar3 < 0x2) {
                        if (iVar3 == 0x0) {
                            *(undefined *)((int)piVar6 + 0x2f) = 0x0;
                        }
                        else if (-0x1 < iVar3) {
                            *(undefined *)((int)piVar6 + 0x2f) = 0x1;
                        }
                    }
                    else if (iVar3 < 0x4) {
                        *(undefined *)((int)piVar6 + 0x2f) = 0x10;
                    }
                }
                break;
            }
            iVar1 += 0x30;
            iVar2 += 0x1;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
        iVar3 += 0x1;
    } while( true );
}



void Start2DExBlosion(int param_1,undefined4 param_2,undefined4 param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    undefined4 *puVar4;
    int iVar5;
    
    iVar2 = 0x0;
    do {
        iVar5 = 0x32;
        iVar3 = 0x0;
        iVar1 = param_1;
        do {
            if (*(int *)(iVar1 + 0x35b0) == -0x1) {
                puVar4 = (undefined4 *)(param_1 + iVar3 * 0x30 + 0x35b0);
                *puVar4 = 0x17;
                puVar4[0x2] = iVar2;
                puVar4[0x1] = 0x0;
                puVar4[0x3] = param_2;
                puVar4[0x4] = param_3;
                *(undefined2 *)(puVar4 + 0x7) = 0x100;
                *(undefined2 *)(puVar4 + 0x9) = 0x100;
                if (iVar2 == 0x2) {
                    *(undefined *)((int)puVar4 + 0x2f) = 0x11;
                }
                else if (iVar2 < 0x2) {
                    if (iVar2 == 0x0) {
                        *(undefined *)((int)puVar4 + 0x2f) = 0x0;
                    }
                    else if (-0x1 < iVar2) {
                        *(undefined *)((int)puVar4 + 0x2f) = 0x1;
                    }
                }
                else if (iVar2 < 0x4) {
                    *(undefined *)((int)puVar4 + 0x2f) = 0x10;
                }
                break;
            }
            iVar1 += 0x30;
            iVar3 += 0x1;
            iVar5 += -0x1;
        } while (iVar5 != 0x0);
        iVar2 += 0x1;
        if (0x3 < iVar2) {
            return;
        }
    } while( true );
}



void Start2DIconSplash(int param_1,undefined4 param_2,undefined4 param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    undefined4 *puVar4;
    int iVar5;
    
    iVar2 = 0x0;
    do {
        iVar5 = 0x32;
        iVar3 = 0x0;
        iVar1 = param_1;
        do {
            if (*(int *)(iVar1 + 0x35b0) == -0x1) {
                puVar4 = (undefined4 *)(param_1 + iVar3 * 0x30 + 0x35b0);
                *puVar4 = 0x19;
                puVar4[0x2] = iVar2;
                puVar4[0x1] = 0x0;
                puVar4[0x3] = param_2;
                puVar4[0x4] = param_3;
                *(undefined2 *)(puVar4 + 0x7) = 0x100;
                *(undefined2 *)(puVar4 + 0x9) = 0x100;
                *(undefined *)((int)puVar4 + 0x2f) = 0x0;
                *(undefined2 *)((int)puVar4 + 0x2a) = Explosion2DTMEM._2_2_;
                break;
            }
            iVar1 += 0x30;
            iVar3 += 0x1;
            iVar5 += -0x1;
        } while (iVar5 != 0x0);
        iVar2 += 0x1;
        if (0x5 < iVar2) {
            return;
        }
    } while( true );
}



void Update2DExplode2(int *param_1)

{
    char cVar1;
    int iVar2;
    int iVar3;
    undefined1 *puVar4;
    
    iVar2 = *param_1;
    puVar4 = NULL;
    iVar3 = 0x0;
    if (iVar2 == 0x20) {
        puVar4 = Explosion3 + param_1[0x1] * 0x18;
        iVar3 = 0x18;
    }
    else if (iVar2 < 0x20) {
        if (0x1e < iVar2) {
            puVar4 = Explosion2 + param_1[0x1] * 0x10;
            iVar3 = 0x14;
        }
    }
    else if (iVar2 < 0x22) {
        puVar4 = Explosion4 + param_1[0x1] * 0x20;
        iVar3 = 0x18;
    }
    if (param_1[0x1] == iVar3) {
        *param_1 = -0x1;
        param_1[0x1] = -0x1;
        *(undefined2 *)(param_1 + 0x6) = 0xfd80;
        *(undefined2 *)(param_1 + 0x8) = 0xfd80;
        return;
    }
    iVar2 = param_1[0x2] * 0x4;
    iVar3 = (int)(char)puVar4[iVar2];
    if (iVar3 < 0x0) {
        *(undefined2 *)(param_1 + 0x6) = 0xfd80;
        *(undefined2 *)(param_1 + 0x8) = 0xfd80;
    }
    else {
        if (iVar3 == 0x0) {
            *(undefined2 *)(param_1 + 0x7) = 0x200;
            *(undefined2 *)(param_1 + 0x9) = 0x200;
        }
        else {
            *(undefined2 *)(param_1 + 0x7) = 0x100;
            *(undefined2 *)(param_1 + 0x9) = 0x100;
        }
        *(short *)(param_1 + 0x6) = (short)(param_1[0x3] + (int)(char)puVar4[iVar2 + 0x1]) * 0x4;
        *(short *)(param_1 + 0x8) = (short)(param_1[0x4] + (int)(char)puVar4[iVar2 + 0x2]) * 0x4;
        *(undefined2 *)((int)param_1 + 0x2a) = *(undefined2 *)(Explosion2DTMEM + iVar3 * 0x2);
        cVar1 = puVar4[iVar2 + 0x3];
        if (cVar1 == '\x03') {
            *(undefined *)((int)param_1 + 0x2f) = 0x11;
        }
        else if (cVar1 < '\x03') {
            if (cVar1 == '\x01') {
                *(undefined *)((int)param_1 + 0x2f) = 0x0;
            }
            else if ('\0' < cVar1) {
                *(undefined *)((int)param_1 + 0x2f) = 0x1;
            }
        }
        else if (cVar1 < '\x05') {
            *(undefined *)((int)param_1 + 0x2f) = 0x10;
        }
    }
    param_1[0x1] = param_1[0x1] + 0x1;
    if (param_1[0x2] == 0x0) {
        gOverflow = gOverflow + 0x1e;
        return;
    }
    return;
}



void Update2DExplosion(int param_1)

{
    int *piVar1;
    char *pcVar2;
    int iVar3;
    
    iVar3 = 0x0;
    do {
        piVar1 = (int *)(param_1 + 0x35b0);
        if (*(int *)(param_1 + 0x35b0) != -0x1) {
            if (*piVar1 == 0x19) {
                if (*(int *)(param_1 + 0x35b4) == 0x28) {
                    *piVar1 = -0x1;
                    *(undefined4 *)(param_1 + 0x35b4) = 0xffffffff;
                    *(undefined2 *)(param_1 + 0x35c8) = 0xfd80;
                    *(undefined2 *)(param_1 + 0x35d0) = 0xfd80;
                }
                else {
                    *(short *)(param_1 + 0x35c8) =
                         (short)(*(int *)(param_1 + 0x35bc) +
                                (int)(char)IconSplash
                                           [*(int *)(param_1 + 0x35b8) * 0x2 +
                                            *(int *)(param_1 + 0x35b4) * 0xc]) * 0x4;
                    *(short *)(param_1 + 0x35d0) =
                         (short)(*(int *)(param_1 + 0x35c0) +
                                (int)(char)(IconSplash +
                                           *(int *)(param_1 + 0x35b8) * 0x2 +
                                           *(int *)(param_1 + 0x35b4) * 0xc)[0x1]) * 0x4;
                    *(int *)(param_1 + 0x35b4) = *(int *)(param_1 + 0x35b4) + 0x1;
                    if (*(int *)(param_1 + 0x35b8) == 0x0) {
                        gOverflow += 0x46;
                    }
                }
            }
            else if (*piVar1 < 0x1f) {
                if (*(int *)(param_1 + 0x35b4) == 0x14) {
                    *piVar1 = -0x1;
                    *(undefined4 *)(param_1 + 0x35b4) = 0xffffffff;
                    *(undefined2 *)(param_1 + 0x35c8) = 0xfd80;
                    *(undefined2 *)(param_1 + 0x35d0) = 0xfd80;
                }
                else {
                    pcVar2 = Explosion1 +
                             *(int *)(param_1 + 0x35b8) * 0x3 + *(int *)(param_1 + 0x35b4) * 0xc;
                    *(short *)(param_1 + 0x35c8) =
                         (short)(*(int *)(param_1 + 0x35bc) + (int)pcVar2[0x1]) * 0x4;
                    *(short *)(param_1 + 0x35d0) =
                         (short)(*(int *)(param_1 + 0x35c0) + (int)pcVar2[0x2]) * 0x4;
                    *(undefined2 *)(param_1 + 0x35da) =
                         *(undefined2 *)(Explosion2DTMEM + *pcVar2 * 0x2);
                    *(int *)(param_1 + 0x35b4) = *(int *)(param_1 + 0x35b4) + 0x1;
                    if (*(int *)(param_1 + 0x35b8) == 0x0) {
                        gOverflow += 0x1e;
                    }
                }
            }
            else {
                Update2DExplode2();
            }
        }
        iVar3 += 0x1;
        param_1 += 0x30;
    } while (iVar3 < 0x32);
    return;
}
