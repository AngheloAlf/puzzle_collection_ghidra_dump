
void Start3DExplosion(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    
    if (param_3 < 0xc) {
        if (param_5 < 0x20) {
            iVar4 = 0x4;
        }
        else if (param_5 == 0x20) {
            iVar4 = 0x6;
        }
        else {
            iVar4 = 0x8;
        }
        for (iVar5 = 0x0; iVar5 < iVar4; iVar5 += 0x1) {
            iVar6 = 0x32;
            iVar2 = 0x0;
            iVar1 = param_1;
            do {
                if (*(int *)(iVar1 + 0x35b0) == -0x1) {
                    piVar3 = (int *)(param_1 + iVar2 * 0x30 + 0x35b0);
                    *piVar3 = param_5;
                    piVar3[0x2] = iVar5;
                    piVar3[0x1] = -0x1;
                    *(char *)(piVar3 + 0xb) = (char)param_2;
                    *(short *)((int)piVar3 + 0x1a) = (short)param_4;
                    *(short *)((int)piVar3 + 0x22) = (short)param_3;
                    Match3DPosition(param_2,param_3,param_4,piVar3 + 0x3,piVar3 + 0x4);
                    if (param_5 == 0x1e) {
                        *(undefined *)((int)piVar3 + 0x2d) = 0x8;
                        if (iVar5 == 0x2) {
                            *(undefined2 *)((int)piVar3 + 0x1e) = 0xffff;
                            *(undefined2 *)((int)piVar3 + 0x26) = 0xffff;
                        }
                        else if (iVar5 < 0x2) {
                            if (iVar5 == 0x0) {
                                *(undefined2 *)((int)piVar3 + 0x1e) = 0x1;
                                *(undefined2 *)((int)piVar3 + 0x26) = 0x1;
                            }
                            else if (-0x1 < iVar5) {
                                *(undefined2 *)((int)piVar3 + 0x1e) = 0xffff;
                                *(undefined2 *)((int)piVar3 + 0x26) = 0x1;
                            }
                        }
                        else if (iVar5 < 0x4) {
                            *(undefined2 *)((int)piVar3 + 0x1e) = 0x1;
                            *(undefined2 *)((int)piVar3 + 0x26) = 0xffff;
                        }
                    }
                    break;
                }
                iVar1 += 0x30;
                iVar2 += 0x1;
                iVar6 += -0x1;
            } while (iVar6 != 0x0);
        }
    }
    return;
}



void Start3DExBlosion(int param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    undefined4 *puVar4;
    int iVar5;
    
    iVar3 = 0x0;
    do {
        iVar5 = 0x32;
        iVar2 = 0x0;
        iVar1 = param_1;
        do {
            if (*(int *)(iVar1 + 0x35b0) == -0x1) {
                puVar4 = (undefined4 *)(param_1 + iVar2 * 0x30 + 0x35b0);
                *puVar4 = 0x17;
                puVar4[0x2] = iVar3;
                puVar4[0x1] = 0x0;
                *(undefined2 *)((int)puVar4 + 0x1a) = 0x1;
                *(undefined *)(puVar4 + 0xb) = param_2;
                puVar4[0x3] = param_3;
                puVar4[0x4] = param_4;
                *(undefined *)((int)puVar4 + 0x2d) = 0x8;
                if (iVar3 == 0x2) {
                    *(undefined2 *)((int)puVar4 + 0x1e) = 0xffff;
                    *(undefined2 *)((int)puVar4 + 0x26) = 0xffff;
                }
                else if (iVar3 < 0x2) {
                    if (iVar3 == 0x0) {
                        *(undefined2 *)((int)puVar4 + 0x1e) = 0x1;
                        *(undefined2 *)((int)puVar4 + 0x26) = 0x1;
                    }
                    else if (-0x1 < iVar3) {
                        *(undefined2 *)((int)puVar4 + 0x1e) = 0xffff;
                        *(undefined2 *)((int)puVar4 + 0x26) = 0x1;
                    }
                }
                else if (iVar3 < 0x4) {
                    *(undefined2 *)((int)puVar4 + 0x1e) = 0x1;
                    *(undefined2 *)((int)puVar4 + 0x26) = 0xffff;
                }
                break;
            }
            iVar1 += 0x30;
            iVar2 += 0x1;
            iVar5 += -0x1;
        } while (iVar5 != 0x0);
        iVar3 += 0x1;
        if (0x3 < iVar3) {
            return;
        }
    } while( true );
}



void Start3DIconSplash(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
    int iVar1;
    int iVar2;
    undefined4 *puVar3;
    int iVar4;
    int iVar5;
    
    iVar4 = 0x0;
    do {
        iVar5 = 0x32;
        iVar2 = 0x0;
        iVar1 = param_1;
        do {
            if (*(int *)(iVar1 + 0x35b0) == -0x1) {
                puVar3 = (undefined4 *)(param_1 + iVar2 * 0x30 + 0x35b0);
                *puVar3 = 0x19;
                puVar3[0x2] = iVar4;
                puVar3[0x1] = 0x0;
                *(char *)(puVar3 + 0xb) = (char)param_2;
                *(short *)((int)puVar3 + 0x1a) = (short)param_4;
                *(short *)((int)puVar3 + 0x22) = (short)param_3;
                Match3DPosition(param_2,param_3,param_4,puVar3 + 0x3,puVar3 + 0x4);
                puVar3[0x4] = puVar3[0x4] + -0x4;
                *(undefined *)((int)puVar3 + 0x2d) = 0x8;
                *(undefined2 *)((int)puVar3 + 0x1e) = 0x1;
                *(undefined2 *)((int)puVar3 + 0x26) = 0x1;
                *(undefined *)((int)puVar3 + 0x2e) = 0x1;
                break;
            }
            iVar1 += 0x30;
            iVar2 += 0x1;
            iVar5 += -0x1;
        } while (iVar5 != 0x0);
        iVar4 += 0x1;
        if (0x5 < iVar4) {
            return;
        }
    } while( true );
}



void Update3DExplode1(undefined4 *param_1,short param_2)

{
    char cVar1;
    int iVar2;
    
    cVar1 = Explosion1[param_1[0x2] * 0x3 + param_1[0x1] * 0xc];
    if (cVar1 == '\b') {
        *param_1 = 0xffffffff;
        param_1[0x1] = 0xffffffff;
        *(undefined2 *)(param_1 + 0x6) = 0xff60;
        *(undefined2 *)(param_1 + 0x8) = 0xff60;
        return;
    }
    iVar2 = param_1[0x2] * 0x3 + param_1[0x1] * 0xc;
    *(short *)(param_1 + 0x6) = (short)param_1[0x3] + (short)(char)Explosion1[iVar2 + 0x1];
    *(short *)(param_1 + 0x8) =
         ((short)param_1[0x4] + (short)(char)Explosion1[iVar2 + 0x2]) - param_2;
    *(char *)((int)param_1 + 0x2e) = cVar1;
    param_1[0x1] = param_1[0x1] + 0x1;
    return;
}



void Update3DExplode2(int *param_1,short param_2)

{
    char cVar1;
    int iVar2;
    int *piVar3;
    undefined1 *puVar4;
    int iVar5;
    
    iVar2 = *param_1;
    puVar4 = NULL;
    iVar5 = 0x0;
    if (iVar2 == 0x20) {
        puVar4 = Explosion3 + param_1[0x1] * 0x18;
        iVar5 = 0x18;
    }
    else if (iVar2 < 0x20) {
        if (0x1e < iVar2) {
            puVar4 = Explosion2 + param_1[0x1] * 0x10;
            iVar5 = 0x14;
        }
    }
    else if (iVar2 < 0x22) {
        puVar4 = Explosion4 + param_1[0x1] * 0x20;
        iVar5 = 0x18;
    }
    piVar3 = param_1 + 0x6;
    iVar2 = param_1[0x2] * 0x4;
    cVar1 = puVar4[iVar2];
    if ((cVar1 != '\b') && (param_1[0x1] != iVar5)) {
        if (cVar1 < '\0') {
            *(undefined2 *)piVar3 = 0xff60;
            *(undefined2 *)(param_1 + 0x8) = 0xff60;
        }
        else {
            if (cVar1 == '\0') {
                *(undefined *)((int)param_1 + 0x2d) = 0x10;
            }
            else {
                *(undefined *)((int)param_1 + 0x2d) = 0x8;
            }
            *(short *)piVar3 = (short)param_1[0x3] + (short)(char)puVar4[iVar2 + 0x1];
            *(short *)(param_1 + 0x8) =
                 ((short)param_1[0x4] + (short)(char)puVar4[iVar2 + 0x2]) - param_2;
            *(char *)((int)param_1 + 0x2e) = cVar1;
            cVar1 = puVar4[iVar2 + 0x3];
            if (cVar1 == '\x03') {
                *(undefined2 *)((int)param_1 + 0x1e) = 0xffff;
                *(undefined2 *)((int)param_1 + 0x26) = 0xffff;
            }
            else if (cVar1 < '\x03') {
                if (cVar1 == '\x01') {
                    *(undefined2 *)((int)param_1 + 0x1e) = 0x1;
                    *(undefined2 *)((int)param_1 + 0x26) = 0x1;
                }
                else if ('\0' < cVar1) {
                    *(undefined2 *)((int)param_1 + 0x1e) = 0xffff;
                    *(undefined2 *)((int)param_1 + 0x26) = 0x1;
                }
            }
            else if (cVar1 < '\x05') {
                *(undefined2 *)((int)param_1 + 0x1e) = 0x1;
                *(undefined2 *)((int)param_1 + 0x26) = 0xffff;
            }
        }
        param_1[0x1] = param_1[0x1] + 0x1;
        return;
    }
    *param_1 = -0x1;
    param_1[0x1] = -0x1;
    *(undefined2 *)piVar3 = 0xff60;
    *(undefined2 *)(param_1 + 0x8) = 0xff60;
    return;
}



void Update3DExplosion(int param_1)

{
    uint uVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    undefined auStack_20 [0xc];
    
    iVar4 = 0x0;
    uVar1 = *(uint *)(param_1 + 0x4ad8);
    iVar3 = ((int)uVar1 >> 0x1) + (uint)((int)uVar1 < 0x0 && (uVar1 & 0x1) != 0x0);
    do {
        piVar2 = (int *)(param_1 + 0x35b0);
        if (*(int *)(param_1 + 0x35b0) != -0x1) {
            if (*(int *)(param_1 + 0x35b4) < 0x0) {
                *(int *)(param_1 + 0x35b4) = *(int *)(param_1 + 0x35b4) + 0x1;
            }
            else if (*piVar2 == 0x17) {
                Update3DExplode1(piVar2,0x0);
            }
            else {
                Match3DPosition(*(undefined *)(param_1 + 0x35dc),0x0,
                                *(undefined2 *)(param_1 + 0x35ca),param_1 + 0x35bc,auStack_20);
                if (*piVar2 == 0x19) {
                    *(int *)(param_1 + 0x35bc) = *(int *)(param_1 + 0x35bc) + 0x5;
                    if (*(int *)(param_1 + 0x35b4) == 0x19) {
                        *piVar2 = -0x1;
                        *(undefined4 *)(param_1 + 0x35b4) = 0xffffffff;
                        *(short *)(param_1 + 0x35c8) = -0xa0;
                        *(undefined2 *)(param_1 + 0x35d0) = 0xff60;
                    }
                    else {
                        *(short *)(param_1 + 0x35c8) =
                             (short)*(undefined4 *)(param_1 + 0x35bc) +
                             (short)(char)IconSplash
                                          [*(int *)(param_1 + 0x35b8) * 0x2 +
                                           *(int *)(param_1 + 0x35b4) * 0xc];
                        *(short *)(param_1 + 0x35d0) =
                             ((short)*(undefined4 *)(param_1 + 0x35c0) +
                             (short)(char)(IconSplash +
                                          *(int *)(param_1 + 0x35b8) * 0x2 +
                                          *(int *)(param_1 + 0x35b4) * 0xc)[0x1]) - (short)iVar3;
                        *(int *)(param_1 + 0x35b4) = *(int *)(param_1 + 0x35b4) + 0x1;
                    }
                }
                else if (*piVar2 == 0x1e) {
                    Update3DExplode1(piVar2,iVar3);
                }
                else {
                    Update3DExplode2(piVar2,iVar3);
                }
            }
        }
        iVar4 += 0x1;
        param_1 += 0x30;
    } while (iVar4 < 0x32);
    return;
}

