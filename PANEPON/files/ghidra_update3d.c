
void Update3DDistance(int param_1,int param_2)

{
    short sVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    
    uVar4 = *(uint *)(param_1 + 0x4adc);
    if (uVar4 != 0x0) {
        sVar1 = (short)((int)uVar4 >> 0x1) + (ushort)((int)uVar4 < 0x0 && (uVar4 & 0x1) != 0x0);
        *(float *)(param_1 + 0x4768) =
             *(float *)(param_1 + 0x4768) +
             (float)((double)CONCAT44(0x43300000,uVar4 ^ 0x80000000) - 4503601774854144.0) / 250.0;
        *(short *)(param_2 + 0xf0) = *(short *)(param_2 + 0xf0) - sVar1;
        if ((gSelection == 0xaa) || (gSelection == 0xb4)) {
            if (*(int *)(param_2 + 0x28) < 0x1) {
                *(int *)(param_1 + 0x2544) = *(int *)(param_1 + 0x2544) + 0x1;
                iVar3 = *(int *)(param_1 + 0x2544);
                iVar2 = iVar3 / 0xc + (iVar3 >> 0x1f);
                if (iVar3 != (iVar2 - (iVar2 >> 0x1f)) * 0xc) {
                    *(short *)(param_1 + 0x2558) = *(short *)(param_1 + 0x2558) - sVar1;
                }
            }
        }
    }
    return;
}



void Update3DPosition(void *param_1,undefined4 param_2,int param_3)

{
    int iVar1;
    int iVar2;
    void *pvVar3;
    undefined *puVar4;
    undefined auStack_224 [0x214];
    
    if (param_3 == 0x0) {
        iVar2 = 0x0;
        puVar4 = auStack_224;
        pvVar3 = param_1;
        do {
            bcopy((void *)((int)pvVar3 + 0x2ec),puVar4,0x2c);
            iVar2 += 0x1;
            puVar4 = puVar4 + 0x2c;
            pvVar3 = (void *)((int)pvVar3 + 0x318);
        } while (iVar2 < 0xc);
        iVar2 = 0x0;
        pvVar3 = param_1;
        do {
            memmove((void *)((int)pvVar3 + 0x2c),pvVar3,0x2ec);
            iVar2 += 0x1;
            pvVar3 = (void *)((int)pvVar3 + 0x318);
        } while (iVar2 < 0xc);
        iVar2 = 0x0;
        puVar4 = auStack_224;
        pvVar3 = param_1;
        do {
            bcopy(puVar4,pvVar3,0x2c);
            iVar2 += 0x1;
            pvVar3 = (void *)((int)pvVar3 + 0x318);
            puVar4 = puVar4 + 0x2c;
        } while (iVar2 < 0xc);
        bcopy((void *)((int)param_1 + 0x4a58),auStack_224,0x2c);
        memmove((void *)((int)param_1 + 0x4798),(void *)((int)param_1 + 0x476c),0x2ec);
        bcopy(auStack_224,(void *)((int)param_1 + 0x476c),0x2c);
        *(int *)((int)param_1 + 0x31ac) = *(int *)((int)param_1 + 0x31ac) + 0x1;
        *(int *)((int)param_1 + 0x31b4) = *(int *)((int)param_1 + 0x31b4) + 0x1;
        *(int *)((int)param_1 + 0x3214) = *(int *)((int)param_1 + 0x3214) + 0x1;
        *(int *)((int)param_1 + 0x321c) = *(int *)((int)param_1 + 0x321c) + 0x1;
        *(int *)((int)param_1 + 0x327c) = *(int *)((int)param_1 + 0x327c) + 0x1;
        *(int *)((int)param_1 + 0x3284) = *(int *)((int)param_1 + 0x3284) + 0x1;
        *(int *)((int)param_1 + 0x32e4) = *(int *)((int)param_1 + 0x32e4) + 0x1;
        *(int *)((int)param_1 + 0x32ec) = *(int *)((int)param_1 + 0x32ec) + 0x1;
        *(int *)((int)param_1 + 0x334c) = *(int *)((int)param_1 + 0x334c) + 0x1;
        *(int *)((int)param_1 + 0x3354) = *(int *)((int)param_1 + 0x3354) + 0x1;
        *(int *)((int)param_1 + 0x33b4) = *(int *)((int)param_1 + 0x33b4) + 0x1;
        *(int *)((int)param_1 + 0x33bc) = *(int *)((int)param_1 + 0x33bc) + 0x1;
        *(int *)((int)param_1 + 0x341c) = *(int *)((int)param_1 + 0x341c) + 0x1;
        *(int *)((int)param_1 + 0x3424) = *(int *)((int)param_1 + 0x3424) + 0x1;
        *(int *)((int)param_1 + 0x3484) = *(int *)((int)param_1 + 0x3484) + 0x1;
        *(int *)((int)param_1 + 0x348c) = *(int *)((int)param_1 + 0x348c) + 0x1;
        iVar1 = (int)param_1 + 0x340;
        iVar2 = 0x2;
        if (true) {
            do {
                *(int *)(iVar1 + 0x31ac) = *(int *)(iVar1 + 0x31ac) + 0x1;
                *(int *)(iVar1 + 0x31b4) = *(int *)(iVar1 + 0x31b4) + 0x1;
                iVar1 += 0x68;
                iVar2 += -0x1;
            } while (iVar2 != 0x0);
        }
        iVar2 = 0xa;
        pvVar3 = param_1;
        do {
            if (0x4 < *(int *)((int)pvVar3 + 0x2520)) {
                if (*(int *)((int)pvVar3 + 0x2538) == 0x11) {
                    *(undefined4 *)((int)pvVar3 + 0x2538) = 0x0;
                }
                else {
                    *(int *)((int)pvVar3 + 0x2538) = *(int *)((int)pvVar3 + 0x2538) + 0x1;
                }
                if (*(int *)((int)pvVar3 + 0x253c) == 0x11) {
                    *(undefined4 *)((int)pvVar3 + 0x253c) = 0x0;
                }
                else {
                    *(int *)((int)pvVar3 + 0x253c) = *(int *)((int)pvVar3 + 0x253c) + 0x1;
                }
            }
            if (0x4 < *(int *)((int)pvVar3 + 0x2570)) {
                if (*(int *)((int)pvVar3 + 0x2588) == 0x11) {
                    *(undefined4 *)((int)pvVar3 + 0x2588) = 0x0;
                }
                else {
                    *(int *)((int)pvVar3 + 0x2588) = *(int *)((int)pvVar3 + 0x2588) + 0x1;
                }
                if (*(int *)((int)pvVar3 + 0x258c) == 0x11) {
                    *(undefined4 *)((int)pvVar3 + 0x258c) = 0x0;
                }
                else {
                    *(int *)((int)pvVar3 + 0x258c) = *(int *)((int)pvVar3 + 0x258c) + 0x1;
                }
            }
            if (0x4 < *(int *)((int)pvVar3 + 0x25c0)) {
                if (*(int *)((int)pvVar3 + 0x25d8) == 0x11) {
                    *(undefined4 *)((int)pvVar3 + 0x25d8) = 0x0;
                }
                else {
                    *(int *)((int)pvVar3 + 0x25d8) = *(int *)((int)pvVar3 + 0x25d8) + 0x1;
                }
                if (*(int *)((int)pvVar3 + 0x25dc) == 0x11) {
                    *(undefined4 *)((int)pvVar3 + 0x25dc) = 0x0;
                }
                else {
                    *(int *)((int)pvVar3 + 0x25dc) = *(int *)((int)pvVar3 + 0x25dc) + 0x1;
                }
            }
            if (0x4 < *(int *)((int)pvVar3 + 0x2610)) {
                if (*(int *)((int)pvVar3 + 0x2628) == 0x11) {
                    *(undefined4 *)((int)pvVar3 + 0x2628) = 0x0;
                }
                else {
                    *(int *)((int)pvVar3 + 0x2628) = *(int *)((int)pvVar3 + 0x2628) + 0x1;
                }
                if (*(int *)((int)pvVar3 + 0x262c) == 0x11) {
                    *(undefined4 *)((int)pvVar3 + 0x262c) = 0x0;
                }
                else {
                    *(int *)((int)pvVar3 + 0x262c) = *(int *)((int)pvVar3 + 0x262c) + 0x1;
                }
            }
            pvVar3 = (void *)((int)pvVar3 + 0x140);
            iVar2 += -0x1;
        } while (iVar2 != 0x0);
        iVar2 = 0xa;
        do {
            if (*(int *)((int)param_1 + 0x35b0) != -0x1) {
                if (*(short *)((int)param_1 + 0x35ca) == 0x11) {
                    *(undefined2 *)((int)param_1 + 0x35ca) = 0x0;
                }
                else {
                    *(short *)((int)param_1 + 0x35ca) = *(short *)((int)param_1 + 0x35ca) + 0x1;
                }
            }
            if (*(int *)((int)param_1 + 0x35e0) != -0x1) {
                if (*(short *)((int)param_1 + 0x35fa) == 0x11) {
                    *(undefined2 *)((int)param_1 + 0x35fa) = 0x0;
                }
                else {
                    *(short *)((int)param_1 + 0x35fa) = *(short *)((int)param_1 + 0x35fa) + 0x1;
                }
            }
            if (*(int *)((int)param_1 + 0x3610) != -0x1) {
                if (*(short *)((int)param_1 + 0x362a) == 0x11) {
                    *(undefined2 *)((int)param_1 + 0x362a) = 0x0;
                }
                else {
                    *(short *)((int)param_1 + 0x362a) = *(short *)((int)param_1 + 0x362a) + 0x1;
                }
            }
            if (*(int *)((int)param_1 + 0x3640) != -0x1) {
                if (*(short *)((int)param_1 + 0x365a) == 0x11) {
                    *(undefined2 *)((int)param_1 + 0x365a) = 0x0;
                }
                else {
                    *(short *)((int)param_1 + 0x365a) = *(short *)((int)param_1 + 0x365a) + 0x1;
                }
            }
            if (*(int *)((int)param_1 + 0x3670) != -0x1) {
                if (*(short *)((int)param_1 + 0x368a) == 0x11) {
                    *(undefined2 *)((int)param_1 + 0x368a) = 0x0;
                }
                else {
                    *(short *)((int)param_1 + 0x368a) = *(short *)((int)param_1 + 0x368a) + 0x1;
                }
            }
            param_1 = (void *)((int)param_1 + 0xf0);
            iVar2 += -0x1;
        } while (iVar2 != 0x0);
    }
    else {
        iVar2 = 0x0;
        puVar4 = auStack_224;
        pvVar3 = param_1;
        do {
            bcopy(pvVar3,puVar4,0x2c);
            iVar2 += 0x1;
            puVar4 = puVar4 + 0x2c;
            pvVar3 = (void *)((int)pvVar3 + 0x318);
        } while (iVar2 < 0xc);
        iVar2 = 0x0;
        pvVar3 = param_1;
        do {
            bcopy((void *)((int)pvVar3 + 0x2c),pvVar3,0x2ec);
            iVar2 += 0x1;
            pvVar3 = (void *)((int)pvVar3 + 0x318);
        } while (iVar2 < 0xc);
        iVar2 = 0x0;
        puVar4 = auStack_224;
        pvVar3 = param_1;
        do {
            bcopy(puVar4,(void *)((int)pvVar3 + 0x2ec),0x2c);
            iVar2 += 0x1;
            pvVar3 = (void *)((int)pvVar3 + 0x318);
            puVar4 = puVar4 + 0x2c;
        } while (iVar2 < 0xc);
        bcopy((void *)((int)param_1 + 0x476c),auStack_224,0x2c);
        bcopy((void *)((int)param_1 + 0x4798),(void *)((int)param_1 + 0x476c),0x2ec);
        bcopy(auStack_224,(void *)((int)param_1 + 0x4a58),0x2c);
        *(int *)((int)param_1 + 0x31ac) = *(int *)((int)param_1 + 0x31ac) + -0x1;
        *(int *)((int)param_1 + 0x31b4) = *(int *)((int)param_1 + 0x31b4) + -0x1;
        *(int *)((int)param_1 + 0x3214) = *(int *)((int)param_1 + 0x3214) + -0x1;
        *(int *)((int)param_1 + 0x321c) = *(int *)((int)param_1 + 0x321c) + -0x1;
        *(int *)((int)param_1 + 0x327c) = *(int *)((int)param_1 + 0x327c) + -0x1;
        *(int *)((int)param_1 + 0x3284) = *(int *)((int)param_1 + 0x3284) + -0x1;
        *(int *)((int)param_1 + 0x32e4) = *(int *)((int)param_1 + 0x32e4) + -0x1;
        *(int *)((int)param_1 + 0x32ec) = *(int *)((int)param_1 + 0x32ec) + -0x1;
        *(int *)((int)param_1 + 0x334c) = *(int *)((int)param_1 + 0x334c) + -0x1;
        *(int *)((int)param_1 + 0x3354) = *(int *)((int)param_1 + 0x3354) + -0x1;
        *(int *)((int)param_1 + 0x33b4) = *(int *)((int)param_1 + 0x33b4) + -0x1;
        *(int *)((int)param_1 + 0x33bc) = *(int *)((int)param_1 + 0x33bc) + -0x1;
        *(int *)((int)param_1 + 0x341c) = *(int *)((int)param_1 + 0x341c) + -0x1;
        *(int *)((int)param_1 + 0x3424) = *(int *)((int)param_1 + 0x3424) + -0x1;
        *(int *)((int)param_1 + 0x3484) = *(int *)((int)param_1 + 0x3484) + -0x1;
        *(int *)((int)param_1 + 0x348c) = *(int *)((int)param_1 + 0x348c) + -0x1;
        iVar1 = (int)param_1 + 0x340;
        iVar2 = 0x2;
        if (true) {
            do {
                *(int *)(iVar1 + 0x31ac) = *(int *)(iVar1 + 0x31ac) + -0x1;
                *(int *)(iVar1 + 0x31b4) = *(int *)(iVar1 + 0x31b4) + -0x1;
                iVar1 += 0x68;
                iVar2 += -0x1;
            } while (iVar2 != 0x0);
        }
        iVar2 = 0xa;
        pvVar3 = param_1;
        do {
            if (0x4 < *(int *)((int)pvVar3 + 0x2520)) {
                if (*(int *)((int)pvVar3 + 0x2538) == 0x0) {
                    *(undefined4 *)((int)pvVar3 + 0x2538) = 0x11;
                }
                else {
                    *(int *)((int)pvVar3 + 0x2538) = *(int *)((int)pvVar3 + 0x2538) + -0x1;
                }
                if (*(int *)((int)pvVar3 + 0x253c) == 0x0) {
                    *(undefined4 *)((int)pvVar3 + 0x253c) = 0x11;
                }
                else {
                    *(int *)((int)pvVar3 + 0x253c) = *(int *)((int)pvVar3 + 0x253c) + -0x1;
                }
            }
            if (0x4 < *(int *)((int)pvVar3 + 0x2570)) {
                if (*(int *)((int)pvVar3 + 0x2588) == 0x0) {
                    *(undefined4 *)((int)pvVar3 + 0x2588) = 0x11;
                }
                else {
                    *(int *)((int)pvVar3 + 0x2588) = *(int *)((int)pvVar3 + 0x2588) + -0x1;
                }
                if (*(int *)((int)pvVar3 + 0x258c) == 0x0) {
                    *(undefined4 *)((int)pvVar3 + 0x258c) = 0x11;
                }
                else {
                    *(int *)((int)pvVar3 + 0x258c) = *(int *)((int)pvVar3 + 0x258c) + -0x1;
                }
            }
            if (0x4 < *(int *)((int)pvVar3 + 0x25c0)) {
                if (*(int *)((int)pvVar3 + 0x25d8) == 0x0) {
                    *(undefined4 *)((int)pvVar3 + 0x25d8) = 0x11;
                }
                else {
                    *(int *)((int)pvVar3 + 0x25d8) = *(int *)((int)pvVar3 + 0x25d8) + -0x1;
                }
                if (*(int *)((int)pvVar3 + 0x25dc) == 0x0) {
                    *(undefined4 *)((int)pvVar3 + 0x25dc) = 0x11;
                }
                else {
                    *(int *)((int)pvVar3 + 0x25dc) = *(int *)((int)pvVar3 + 0x25dc) + -0x1;
                }
            }
            if (0x4 < *(int *)((int)pvVar3 + 0x2610)) {
                if (*(int *)((int)pvVar3 + 0x2628) == 0x0) {
                    *(undefined4 *)((int)pvVar3 + 0x2628) = 0x11;
                }
                else {
                    *(int *)((int)pvVar3 + 0x2628) = *(int *)((int)pvVar3 + 0x2628) + -0x1;
                }
                if (*(int *)((int)pvVar3 + 0x262c) == 0x0) {
                    *(undefined4 *)((int)pvVar3 + 0x262c) = 0x11;
                }
                else {
                    *(int *)((int)pvVar3 + 0x262c) = *(int *)((int)pvVar3 + 0x262c) + -0x1;
                }
            }
            pvVar3 = (void *)((int)pvVar3 + 0x140);
            iVar2 += -0x1;
        } while (iVar2 != 0x0);
        iVar2 = 0xa;
        do {
            if (*(int *)((int)param_1 + 0x35b0) != -0x1) {
                if (*(short *)((int)param_1 + 0x35ca) == 0x0) {
                    *(undefined2 *)((int)param_1 + 0x35ca) = 0x11;
                }
                else {
                    *(short *)((int)param_1 + 0x35ca) = *(short *)((int)param_1 + 0x35ca) + -0x1;
                }
            }
            if (*(int *)((int)param_1 + 0x35e0) != -0x1) {
                if (*(short *)((int)param_1 + 0x35fa) == 0x0) {
                    *(undefined2 *)((int)param_1 + 0x35fa) = 0x11;
                }
                else {
                    *(short *)((int)param_1 + 0x35fa) = *(short *)((int)param_1 + 0x35fa) + -0x1;
                }
            }
            if (*(int *)((int)param_1 + 0x3610) != -0x1) {
                if (*(short *)((int)param_1 + 0x362a) == 0x0) {
                    *(undefined2 *)((int)param_1 + 0x362a) = 0x11;
                }
                else {
                    *(short *)((int)param_1 + 0x362a) = *(short *)((int)param_1 + 0x362a) + -0x1;
                }
            }
            if (*(int *)((int)param_1 + 0x3640) != -0x1) {
                if (*(short *)((int)param_1 + 0x365a) == 0x0) {
                    *(undefined2 *)((int)param_1 + 0x365a) = 0x11;
                }
                else {
                    *(short *)((int)param_1 + 0x365a) = *(short *)((int)param_1 + 0x365a) + -0x1;
                }
            }
            if (*(int *)((int)param_1 + 0x3670) != -0x1) {
                if (*(short *)((int)param_1 + 0x368a) == 0x0) {
                    *(undefined2 *)((int)param_1 + 0x368a) = 0x11;
                }
                else {
                    *(short *)((int)param_1 + 0x368a) = *(short *)((int)param_1 + 0x368a) + -0x1;
                }
            }
            param_1 = (void *)((int)param_1 + 0xf0);
            iVar2 += -0x1;
        } while (iVar2 != 0x0);
    }
    return;
}



void Update3DCursor(undefined4 param_1,int param_2)

{
    int iVar1;
    
    iVar1 = *(int *)(param_2 + 0x18);
    if (iVar1 < 0x0) {
        *(int *)(param_2 + 0x18) = iVar1 + 0x1;
        if (*(int *)(param_2 + 0x18) == 0x0) {
            Update3DPosition(param_1,param_2,0xffffffff);
        }
    }
    else if ((0x0 < iVar1) &&
            (*(int *)(param_2 + 0x18) = iVar1 + -0x1, *(int *)(param_2 + 0x18) == 0x0)) {
        Update3DPosition(param_1,param_2,0x0);
    }
    return;
}



void Update3DIcon(int param_1,undefined4 param_2,int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    undefined4 *puVar5;
    int iVar6;
    int iVar7;
    
    iVar7 = 0x2;
    iVar4 = 0x0;
    iVar3 = 0x0;
    iVar2 = 0x0;
    iVar6 = param_1;
    do {
        if (((*(int *)(iVar6 + 0x31a0) == -0x1) && (*(int *)(iVar6 + 0x31bc) < 0x0)) &&
           (0xb < *(int *)(iVar6 + 0x31a4))) {
            iVar4 = -0x1;
            break;
        }
        if (((*(int *)(iVar6 + 0x3208) == -0x1) && (*(int *)(iVar6 + 0x3224) < 0x0)) &&
           (0xb < *(int *)(iVar6 + 0x320c))) {
            iVar4 = -0x1;
            break;
        }
        if (((*(int *)(iVar6 + 0x3270) == -0x1) && (*(int *)(iVar6 + 0x328c) < 0x0)) &&
           (0xb < *(int *)(iVar6 + 0x3274))) {
            iVar4 = -0x1;
            break;
        }
        if (((*(int *)(iVar6 + 0x32d8) == -0x1) && (*(int *)(iVar6 + 0x32f4) < 0x0)) &&
           (0xb < *(int *)(iVar6 + 0x32dc))) {
            iVar4 = -0x1;
            break;
        }
        if (((*(int *)(iVar6 + 0x3340) == -0x1) && (*(int *)(iVar6 + 0x335c) < 0x0)) &&
           (0xb < *(int *)(iVar6 + 0x3344))) {
            iVar4 = -0x1;
            break;
        }
        iVar6 += 0x208;
        iVar7 += -0x1;
    } while (iVar7 != 0x0);
    iVar7 = 0x0;
    iVar6 = param_1;
    do {
        if (*(int *)(iVar6 + 0x31a0) == -0x1) {
            puVar5 = (undefined4 *)(iVar6 + 0x31a0);
            if (*(int *)(iVar6 + 0x31bc) < 0x0) {
                *(int *)(iVar6 + 0x31a8) = -*(int *)(iVar6 + 0x31bc);
                iVar1 = *(int *)(iVar6 + 0x31a4);
                if (iVar1 == 0xc) {
                    if (iVar3 == 0x0) {
                        iVar3 = 0x1;
                    }
                    UpdateComboScore(param_1,param_2,*(undefined4 *)(iVar6 + 0x31a8));
                    if ((gGameStatus & 0x4) != 0x0) {
                        *puVar5 = 0x0;
                        goto LAB_000bf518;
                    }
                    Start3DIconSplash(param_1,param_3,*(undefined4 *)(iVar6 + 0x31b8),
                                      *(undefined4 *)(iVar6 + 0x31ac));
                    *(undefined4 *)(iVar6 + 0x31c0) = 0x0;
                }
                else if (iVar1 == 0xa) {
                    iVar3 = 0x2;
                    UpdateChainScore(param_1,param_2,*(undefined4 *)(iVar6 + 0x31a8));
                    if ((gGameStatus & 0x4) != 0x0) {
                        *puVar5 = 0x0;
                        goto LAB_000bf518;
                    }
                    if (iVar4 == 0x0) {
                        *(undefined4 *)(iVar6 + 0x31c0) = 0x0;
                        Start3DIconSplash(param_1,param_3,*(undefined4 *)(iVar6 + 0x31b8),
                                          *(undefined4 *)(iVar6 + 0x31ac));
                    }
                    else {
                        *(undefined4 *)(iVar6 + 0x31c0) = 0x20;
                        Start3DIconSplash(param_1,param_3,*(int *)(iVar6 + 0x31b8) + 0x1,
                                          *(undefined4 *)(iVar6 + 0x31ac));
                    }
                }
                else if (iVar1 == 0xd) {
                    if (iVar3 == 0x0) {
                        iVar3 = 0x1;
                    }
                    UpdateComboScore(param_1,param_2,*(undefined4 *)(iVar6 + 0x31a8));
                    if ((gGameStatus & 0x4) != 0x0) {
                        *puVar5 = 0x0;
                        goto LAB_000bf518;
                    }
                    Start3DIconSplash(param_1,param_3,*(undefined4 *)(iVar6 + 0x31b8),
                                      *(undefined4 *)(iVar6 + 0x31ac));
                    *(undefined4 *)(iVar6 + 0x31c0) = 0x0;
                }
                else {
                    iVar2 = -0x1;
                    *(int *)(iVar6 + 0x31ac) = *(int *)(iVar6 + 0x31ac) + 0x1;
                    *(undefined4 *)(iVar6 + 0x31c0) = 0x0;
                }
                *(undefined4 *)(iVar6 + 0x31bc) = 0x19;
                gTransMtx._48_4_ = 0x0;
                gTransMtx._52_4_ =
                     (float)((double)CONCAT44(0x43300000,*(uint *)(iVar6 + 0x31c0) ^ 0x80000000) -
                            4503601774854144.0);
                guMtxF2L(gTransMtx,iVar6 + 0x31c8);
            }
            else {
                iVar1 = *(int *)(iVar6 + 0x31bc) + -0x1;
                *(int *)(iVar6 + 0x31bc) = iVar1;
                if (iVar1 == 0x0) {
                    *puVar5 = 0x0;
                }
                else {
                    iVar1 = 0x0;
                    if (true) {
                        switch(*(undefined4 *)(iVar6 + 0x31bc)) {
                        case 0x4:
                        case 0x9:
                        case 0xc:
                        case 0xe:
                        case 0x11:
                        case 0x13:
                        case 0x15:
                        case 0x16:
                        case 0x17:
                        case 0x18:
                            iVar1 = -0x1;
                            *(int *)(iVar6 + 0x31c0) = *(int *)(iVar6 + 0x31c0) + 0x2;
                        }
                    }
                    if (iVar1 != 0x0) {
                        gTransMtx._48_4_ = 0x0;
                        gTransMtx._52_4_ =
                             (float)((double)CONCAT44(0x43300000,
                                                      *(uint *)(iVar6 + 0x31c0) ^ 0x80000000) -
                                    4503601774854144.0);
                        guMtxF2L(gTransMtx,iVar6 + 0x31c8);
                    }
                }
            }
        }
LAB_000bf518:
        iVar7 += 0x1;
        iVar6 += 0x68;
        if (0x9 < iVar7) {
            if (iVar2 == 0x0) {
                if ((iVar3 != 0x0) && (*(int *)(param_1 + 0x4a84) == 0x0)) {
                    if (gTheGame._120328_4_ == 0x1) {
                        if (iVar3 == 0x1) {
                            PlaySE(SFX_INIT_TABLE,0xef);
                        }
                        else {
                            PlaySE(SFX_INIT_TABLE,0xf0);
                        }
                    }
                    else if (gTheGame._120328_4_ == 0x2) {
                        if (param_3 == 0x0) {
                            if (iVar3 == 0x1) {
                                PlaySE(SFX_INIT_TABLE,0xf1);
                            }
                            else {
                                PlaySE(SFX_INIT_TABLE,0xf2);
                            }
                        }
                        else if (iVar3 == 0x1) {
                            PlaySE(SFX_INIT_TABLE,0xf7);
                        }
                        else {
                            PlaySE(SFX_INIT_TABLE,0xf8);
                        }
                    }
                }
            }
            else if (gTheGame._120328_4_ == 0x1) {
                PlaySE(SFX_INIT_TABLE,0x2d);
            }
            else if (gTheGame._120328_4_ == 0x2) {
                if (param_3 == 0x0) {
                    PlaySE(SFX_INIT_TABLE,0x2e);
                }
                else {
                    PlaySE(SFX_INIT_TABLE,0x2f);
                }
            }
            return;
        }
    } while( true );
}



void Check3DVisibleBlocks(int param_1,int param_2)

{
    int iVar1;
    char *pcVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    undefined1 *puVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    
    bzero((void *)(param_1 + 0x4690),0xd8);
    iVar1 = *(int *)(param_2 + 0x18);
    puVar7 = block3Dview;
    iVar10 = 0x0;
    iVar5 = param_1;
    iVar6 = param_1;
    do {
        iVar9 = 0x1;
        iVar3 = iVar5;
        iVar4 = iVar6;
        do {
            if ((*(int *)(iVar3 + 0x3c) == 0x0) || (*(int *)(iVar3 + 0x30) == -0x2)) {
                iVar11 = 0x2;
                pcVar2 = puVar7;
                do {
                    if (iVar9 == 0x3) {
                        iVar12 = (int)pcVar2[0x18];
                        if (iVar12 != -0x1) {
                            iVar8 = param_1 + iVar12 * 0x318;
                            if ((*(int *)(iVar8 + 0x2d0) != 0x0) &&
                               (*(int *)(iVar8 + 0x2c4) != -0x2)) {
                                if ((*(int *)(iVar8 + 0x2fc) == 0x0) ||
                                   (*(int *)(iVar8 + 0x2f0) == -0x2)) {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x46a0) = 0x3;
                                }
                                else {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x46a0) = 0x1;
                                }
                            }
                            if (iVar1 < 0x1) {
                                if (((iVar1 < 0x0) && (*(int *)(iVar8 + 0x2fc) != 0x0)) &&
                                   (*(int *)(iVar8 + 0x2f0) != -0x2)) {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x46a1) = 0x3;
                                }
                            }
                            else {
                                if ((*(int *)(iVar8 + 0x278) != 0x0) &&
                                   (*(int *)(iVar8 + 0x26c) != -0x2)) {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x469e) = 0x3;
                                }
                                if ((*(int *)(iVar8 + 0x24c) != 0x0) &&
                                   (*(int *)(iVar8 + 0x240) != -0x2)) {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x469d) = 0x3;
                                }
                            }
                        }
                    }
                    else if (iVar9 < 0x3) {
                        if (iVar9 == 0x1) {
                            iVar12 = (int)pcVar2[0x48];
                            if (((iVar12 != -0x1) &&
                                (iVar8 = param_1 + iVar12 * 0x318, *(int *)(iVar8 + 0x10) != 0x0))
                               && (*(int *)(iVar8 + 0x4) != -0x2)) {
                                if ((*(int *)(iVar8 + 0x3c) == 0x0) ||
                                   (*(int *)(iVar8 + 0x30) == -0x2)) {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x4690) = 0x3;
                                }
                                else {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x4690) = 0x1;
                                }
                            }
                        }
                        else if ((0x0 < iVar9) && (iVar12 = (int)pcVar2[0x30], iVar12 != -0x1)) {
                            iVar8 = param_1 + iVar12 * 0x318;
                            if ((*(int *)(iVar8 + 0x2fc) != 0x0) &&
                               (*(int *)(iVar8 + 0x2f0) != -0x2)) {
                                if ((*(int *)(iVar8 + 0x10) == 0x0) ||
                                   (*(int *)(iVar8 + 0x4) == -0x2)) {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x46a1) = 0x3;
                                }
                                else {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x46a1) = 0x1;
                                }
                            }
                            if (0x0 < iVar1) {
                                if ((*(int *)(iVar8 + 0x2d0) != 0x0) &&
                                   (*(int *)(iVar8 + 0x2c4) != -0x2)) {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x46a0) = 0x3;
                                }
                                if ((*(int *)(iVar8 + 0x2a4) != 0x0) &&
                                   (*(int *)(iVar8 + 0x298) != -0x2)) {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x469f) = 0x3;
                                }
                            }
                        }
                    }
                    else if ((iVar9 < 0x5) && (iVar12 = (int)*pcVar2, iVar12 != -0x1)) {
                        iVar8 = param_1 + iVar12 * 0x318;
                        if ((*(int *)(iVar8 + 0x278) != 0x0) && (*(int *)(iVar8 + 0x26c) != -0x2)) {
                            if ((*(int *)(iVar8 + 0x2a4) == 0x0) ||
                               (*(int *)(iVar8 + 0x298) == -0x2)) {
                                *(undefined *)(param_1 + iVar12 * 0x12 + 0x469e) = 0x3;
                            }
                            else {
                                *(undefined *)(param_1 + iVar12 * 0x12 + 0x469e) = 0x1;
                            }
                        }
                        if (iVar1 < 0x1) {
                            if (((iVar1 < 0x0) && (*(int *)(iVar8 + 0x2d0) != 0x0)) &&
                               (*(int *)(iVar8 + 0x2c4) != -0x2)) {
                                *(undefined *)(param_1 + iVar12 * 0x12 + 0x46a0) = 0x3;
                            }
                        }
                        else {
                            if ((*(int *)(iVar8 + 0x24c) != 0x0) &&
                               (*(int *)(iVar8 + 0x240) != -0x2)) {
                                *(undefined *)(param_1 + iVar12 * 0x12 + 0x469d) = 0x3;
                            }
                            if ((*(int *)(iVar8 + 0x220) != 0x0) &&
                               (*(int *)(iVar8 + 0x214) != -0x2)) {
                                *(undefined *)(param_1 + iVar12 * 0x12 + 0x469c) = 0x3;
                            }
                        }
                    }
                    pcVar2 = pcVar2 + 0xc;
                    iVar11 += -0x1;
                } while (iVar11 != 0x0);
            }
            else {
                if ((*(int *)(iVar3 + 0x68) == 0x0) || (*(int *)(iVar3 + 0x5c) == -0x2)) {
                    *(undefined *)(iVar4 + 0x4691) = 0x3;
                }
                else {
                    *(undefined *)(iVar4 + 0x4691) = 0x1;
                }
                if (iVar9 == 0x3) {
                    if ((*(int *)(iVar5 + 0x68) == 0x0) || (*(int *)(iVar5 + 0x5c) == -0x2)) {
                        iVar11 = (int)(char)puVar7[0x18];
                        if ((iVar11 != -0x1) &&
                           ((iVar12 = param_1 + iVar11 * 0x318, *(int *)(iVar12 + 0x2d0) != 0x0 &&
                            (*(int *)(iVar12 + 0x2c4) != -0x2)))) {
                            *(undefined *)(param_1 + iVar11 * 0x12 + 0x46a0) = 0x5;
                        }
                        iVar11 = (int)(char)puVar7[0x24];
                        if (((iVar11 != -0x1) &&
                            (iVar12 = param_1 + iVar11 * 0x318, *(int *)(iVar12 + 0x2d0) != 0x0)) &&
                           (*(int *)(iVar12 + 0x2c4) != -0x2)) {
                            *(undefined *)(param_1 + iVar11 * 0x12 + 0x46a0) = 0x5;
                        }
                    }
                }
                else if (((iVar9 < 0x3) && (0x1 < iVar9)) &&
                        ((*(int *)(iVar5 + 0x3c) == 0x0 || (*(int *)(iVar5 + 0x30) == -0x2)))) {
                    iVar11 = (int)(char)puVar7[0x30];
                    if (((iVar11 != -0x1) &&
                        (iVar12 = param_1 + iVar11 * 0x318, *(int *)(iVar12 + 0x2fc) != 0x0)) &&
                       (*(int *)(iVar12 + 0x2f0) != -0x2)) {
                        *(undefined *)(param_1 + iVar11 * 0x12 + 0x46a1) = 0x5;
                    }
                    iVar11 = (int)(char)puVar7[0x3c];
                    if (((iVar11 != -0x1) &&
                        (iVar12 = param_1 + iVar11 * 0x318, *(int *)(iVar12 + 0x2fc) != 0x0)) &&
                       (*(int *)(iVar12 + 0x2f0) != -0x2)) {
                        *(undefined *)(param_1 + iVar11 * 0x12 + 0x46a1) = 0x5;
                    }
                }
            }
            iVar9 += 0x1;
            iVar3 = iVar3 + 0x2c;
            iVar4 = iVar4 + 0x1;
        } while (iVar9 < 0x5);
        iVar3 = iVar5 + 0x160;
        iVar4 = iVar6 + 0x8;
        iVar9 = 0x8;
        do {
            if ((*(int *)(iVar3 + 0x10) == 0x0) || (*(int *)(iVar3 + 0x4) == -0x2)) {
                iVar11 = 0x2;
                pcVar2 = puVar7;
                do {
                    if (iVar9 == 0x7) {
                        iVar12 = (int)pcVar2[0x30];
                        if (iVar12 != -0x1) {
                            iVar8 = param_1 + iVar12 * 0x318;
                            if ((*(int *)(iVar8 + 0x1c8) != 0x0) &&
                               (*(int *)(iVar8 + 0x1bc) != -0x2)) {
                                if ((*(int *)(iVar8 + 0x19c) == 0x0) ||
                                   (*(int *)(iVar8 + 0x190) == -0x2)) {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x469a) = 0x2;
                                }
                                else {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x469a) = 0x1;
                                }
                            }
                            if ((iVar1 < 0x1) && (iVar1 < 0x0)) {
                                if ((*(int *)(iVar8 + 0x1f4) != 0x0) &&
                                   (*(int *)(iVar8 + 0x1e8) != -0x2)) {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x469b) = 0x2;
                                }
                                if ((*(int *)(iVar8 + 0x220) != 0x0) &&
                                   (*(int *)(iVar8 + 0x214) != -0x2)) {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x469c) = 0x2;
                                }
                            }
                        }
                    }
                    else if (iVar9 < 0x7) {
                        if (iVar9 == 0x5) {
                            iVar12 = (int)*pcVar2;
                            if (iVar12 != -0x1) {
                                iVar8 = param_1 + iVar12 * 0x318;
                                if ((*(int *)(iVar8 + 0x24c) != 0x0) &&
                                   (*(int *)(iVar8 + 0x240) != -0x2)) {
                                    if ((*(int *)(iVar8 + 0x220) == 0x0) ||
                                       (*(int *)(iVar8 + 0x214) == -0x2)) {
                                        *(undefined *)(param_1 + iVar12 * 0x12 + 0x469d) = 0x2;
                                    }
                                    else {
                                        *(undefined *)(param_1 + iVar12 * 0x12 + 0x469d) = 0x1;
                                    }
                                }
                                if (iVar1 < 0x1) {
                                    if (iVar1 < 0x0) {
                                        if ((*(int *)(iVar8 + 0x278) != 0x0) &&
                                           (*(int *)(iVar8 + 0x26c) != -0x2)) {
                                            *(undefined *)(param_1 + iVar12 * 0x12 + 0x469e) = 0x1;
                                        }
                                        if ((*(int *)(iVar8 + 0x2a4) != 0x0) &&
                                           (*(int *)(iVar8 + 0x298) != -0x2)) {
                                            *(undefined *)(param_1 + iVar12 * 0x12 + 0x469f) = 0x2;
                                        }
                                    }
                                }
                                else {
                                    if ((*(int *)(iVar8 + 0x220) != 0x0) &&
                                       (*(int *)(iVar8 + 0x214) != -0x2)) {
                                        *(undefined *)(param_1 + iVar12 * 0x12 + 0x469c) = 0x2;
                                    }
                                    if ((*(int *)(iVar8 + 0x1f4) != 0x0) &&
                                       (*(int *)(iVar8 + 0x1e8) != -0x2)) {
                                        *(undefined *)(param_1 + iVar12 * 0x12 + 0x469b) = 0x2;
                                    }
                                }
                            }
                        }
                        else if ((0x4 < iVar9) && (iVar12 = (int)pcVar2[0x18], iVar12 != -0x1)) {
                            iVar8 = param_1 + iVar12 * 0x318;
                            if ((*(int *)(iVar8 + 0x1f4) != 0x0) &&
                               (*(int *)(iVar8 + 0x1e8) != -0x2)) {
                                if ((*(int *)(iVar8 + 0x1c8) == 0x0) ||
                                   (*(int *)(iVar8 + 0x1bc) == -0x2)) {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x469b) = 0x2;
                                }
                                else {
                                    *(undefined *)(param_1 + iVar12 * 0x12 + 0x469b) = 0x1;
                                }
                            }
                            if (iVar1 < 0x1) {
                                if (iVar1 < 0x0) {
                                    if ((*(int *)(iVar8 + 0x24c) != 0x0) &&
                                       (*(int *)(iVar8 + 0x240) != -0x2)) {
                                        *(undefined *)(param_1 + iVar12 * 0x12 + 0x469d) = 0x2;
                                    }
                                    if ((*(int *)(iVar8 + 0x278) != 0x0) &&
                                       (*(int *)(iVar8 + 0x26c) != -0x2)) {
                                        *(undefined *)(param_1 + iVar12 * 0x12 + 0x469e) = 0x1;
                                    }
                                }
                            }
                            else if ((*(int *)(iVar8 + 0x1c8) != 0x0) &&
                                    (*(int *)(iVar8 + 0x1bc) != -0x2)) {
                                *(undefined *)(param_1 + iVar12 * 0x12 + 0x469a) = 0x2;
                            }
                        }
                    }
                    else if ((((iVar9 < 0x9) && (iVar12 = (int)pcVar2[0x48], iVar12 != -0x1)) &&
                             (iVar8 = param_1 + iVar12 * 0x318, *(int *)(iVar8 + 0x19c) != 0x0)) &&
                            (*(int *)(iVar8 + 0x190) != -0x2)) {
                        if ((*(int *)(iVar8 + 0x170) == 0x0) || (*(int *)(iVar8 + 0x164) == -0x2)) {
                            *(undefined *)(param_1 + iVar12 * 0x12 + 0x4699) = 0x2;
                        }
                        else {
                            *(undefined *)(param_1 + iVar12 * 0x12 + 0x4699) = 0x1;
                        }
                    }
                    pcVar2 = pcVar2 + 0xc;
                    iVar11 += -0x1;
                } while (iVar11 != 0x0);
            }
            else {
                if ((*(int *)(iVar3 + -0x1c) == 0x0) || (*(int *)(iVar3 + -0x28) == -0x2)) {
                    *(undefined *)(iVar4 + 0x4690) = 0x2;
                }
                else {
                    *(undefined *)(iVar4 + 0x4690) = 0x1;
                }
                if (iVar9 == 0x7) {
                    if ((*(int *)(iVar5 + 0x170) == 0x0) || (*(int *)(iVar5 + 0x164) == -0x2)) {
                        iVar11 = (int)(char)puVar7[0x30];
                        if ((iVar11 != -0x1) &&
                           ((iVar12 = param_1 + iVar11 * 0x318, *(int *)(iVar12 + 0x1c8) != 0x0 &&
                            (*(int *)(iVar12 + 0x1bc) != -0x2)))) {
                            *(undefined *)(param_1 + iVar11 * 0x12 + 0x469a) = 0x4;
                        }
                        iVar11 = (int)(char)puVar7[0x3c];
                        if (((iVar11 != -0x1) &&
                            (iVar12 = param_1 + iVar11 * 0x318, *(int *)(iVar12 + 0x1c8) != 0x0)) &&
                           (*(int *)(iVar12 + 0x1bc) != -0x2)) {
                            *(undefined *)(param_1 + iVar11 * 0x12 + 0x469a) = 0x4;
                        }
                    }
                }
                else if (((iVar9 < 0x7) && (0x5 < iVar9)) &&
                        ((*(int *)(iVar5 + 0x144) == 0x0 || (*(int *)(iVar5 + 0x138) == -0x2)))) {
                    iVar11 = (int)(char)puVar7[0x18];
                    if (((iVar11 != -0x1) &&
                        (iVar12 = param_1 + iVar11 * 0x318, *(int *)(iVar12 + 0x1f4) != 0x0)) &&
                       (*(int *)(iVar12 + 0x1e8) != -0x2)) {
                        *(undefined *)(param_1 + iVar11 * 0x12 + 0x469b) = 0x4;
                    }
                    iVar11 = (int)(char)puVar7[0x24];
                    if (((iVar11 != -0x1) &&
                        (iVar12 = param_1 + iVar11 * 0x318, *(int *)(iVar12 + 0x1f4) != 0x0)) &&
                       (*(int *)(iVar12 + 0x1e8) != -0x2)) {
                        *(undefined *)(param_1 + iVar11 * 0x12 + 0x469b) = 0x4;
                    }
                }
            }
            iVar9 += -0x1;
            iVar3 += -0x2c;
            iVar4 += -0x1;
        } while (0x4 < iVar9);
        if (((*(int *)(iVar5 + 0xc0) == 0x0) || (*(int *)(iVar5 + 0xb4) == -0x2)) ||
           ((*(int *)(iVar5 + 0x94) == 0x0 || (*(int *)(iVar5 + 0x88) == -0x2)))) {
            iVar3 = (int)(char)*puVar7;
            if (((iVar3 != -0x1) &&
                (iVar4 = param_1 + iVar3 * 0x318, *(int *)(iVar4 + 0x2a4) != 0x0)) &&
               (*(int *)(iVar4 + 0x298) != -0x2)) {
                if ((*(int *)(iVar4 + 0x2d0) == 0x0) || (*(int *)(iVar4 + 0x2c4) == -0x2)) {
                    *(undefined *)(param_1 + iVar3 * 0x12 + 0x469f) = 0x3;
                }
                else {
                    *(undefined *)(param_1 + iVar3 * 0x12 + 0x469f) = 0x1;
                }
            }
            iVar3 = (int)(char)puVar7[0xc];
            if (((iVar3 != -0x1) &&
                (iVar4 = param_1 + iVar3 * 0x318, *(int *)(iVar4 + 0x2a4) != 0x0)) &&
               (*(int *)(iVar4 + 0x298) != -0x2)) {
                if ((*(int *)(iVar4 + 0x2d0) == 0x0) || (*(int *)(iVar4 + 0x2c4) == -0x2)) {
                    *(undefined *)(param_1 + iVar3 * 0x12 + 0x469f) = 0x3;
                }
                else {
                    *(undefined *)(param_1 + iVar3 * 0x12 + 0x469f) = 0x1;
                }
            }
        }
        if (((*(int *)(iVar5 + 0xec) == 0x0) || (*(int *)(iVar5 + 0xe0) == -0x2)) ||
           ((*(int *)(iVar5 + 0x118) == 0x0 || (*(int *)(iVar5 + 0x10c) == -0x2)))) {
            iVar3 = (int)(char)*puVar7;
            if (((iVar3 != -0x1) &&
                (iVar4 = param_1 + iVar3 * 0x318, *(int *)(iVar4 + 0x220) != 0x0)) &&
               (*(int *)(iVar4 + 0x214) != -0x2)) {
                if ((*(int *)(iVar4 + 0x1f4) == 0x0) || (*(int *)(iVar4 + 0x1e8) == -0x2)) {
                    *(undefined *)(param_1 + iVar3 * 0x12 + 0x469c) = 0x2;
                }
                else {
                    *(undefined *)(param_1 + iVar3 * 0x12 + 0x469c) = 0x1;
                }
            }
            iVar3 = (int)(char)puVar7[0xc];
            if (((iVar3 != -0x1) &&
                (iVar4 = param_1 + iVar3 * 0x318, *(int *)(iVar4 + 0x220) != 0x0)) &&
               (*(int *)(iVar4 + 0x214) != -0x2)) {
                if ((*(int *)(iVar4 + 0x1f4) == 0x0) || (*(int *)(iVar4 + 0x1e8) == -0x2)) {
                    *(undefined *)(param_1 + iVar3 * 0x12 + 0x469c) = 0x2;
                }
                else {
                    *(undefined *)(param_1 + iVar3 * 0x12 + 0x469c) = 0x1;
                }
            }
        }
        if (*(char *)(iVar6 + 0x4694) != '\0') {
            *(undefined *)(iVar6 + 0x4694) = 0x1;
        }
        if (*(char *)(iVar6 + 0x4695) != '\0') {
            *(undefined *)(iVar6 + 0x4695) = 0x1;
        }
        iVar10 += 0x1;
        iVar5 += 0x318;
        iVar6 += 0x12;
        puVar7 = puVar7 + 0x1;
    } while (iVar10 < 0xc);
    if (*(int *)(param_2 + 0x1c) != -0x1) {
        *(undefined *)(param_1 + *(int *)(param_2 + 0x1c) * 0x12 + 0x4694) = 0x0;
        *(undefined *)(param_1 + *(int *)(param_2 + 0x1c) * 0x12 + 0x4695) = 0x0;
        iVar5 = param_1 + *(int *)(param_2 + 0x1c) * 0x12;
        if (*(char *)(iVar5 + 0x4693) != '\0') {
            *(undefined *)(iVar5 + 0x4693) = 0x3;
        }
        pcVar2 = (char *)(param_1 + *(int *)(param_2 + 0x1c) * 0x12 + 0x4696);
        if (*pcVar2 != '\0') {
            *pcVar2 = '\x02';
        }
    }
    return;
}

