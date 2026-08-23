

void InitAI(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    
    param_3[0x6] = 0x1;
    param_3[0x7] = 0x0;
    param_3[0x8] = 0xffffffff;
    param_3[0xd] = 0x0;
    param_3[0x4] = param_3[0x3];
    AIClearCommand(param_3);
    AIFinishMove(param_3);
    *(undefined *)(param_3 + 0x41) = 0x0;
    iVar3 = 0x18;
    iVar1 = 0x1;
    *(undefined *)((int)param_3 + 0x105) = 0x0;
    *(undefined *)((int)param_3 + 0x106) = 0x0;
    *(undefined *)((int)param_3 + 0x107) = 0x0;
    *(undefined *)(param_3 + 0x42) = 0x0;
    *(undefined *)((int)param_3 + 0x109) = 0x0;
    *(undefined *)((int)param_3 + 0x10a) = 0x0;
    *(undefined *)((int)param_3 + 0x10b) = 0x0;
    *(undefined *)(param_3 + 0x43) = 0x0;
    *(undefined *)((int)param_3 + 0x10d) = 0x0;
    *(undefined *)((int)param_3 + 0x10e) = 0x0;
    *(undefined *)((int)param_3 + 0x10f) = 0x0;
    *(undefined *)(param_3 + 0x44) = 0x0;
    *(undefined *)((int)param_3 + 0x111) = 0x0;
    *(undefined *)((int)param_3 + 0x112) = 0x0;
    *(undefined *)((int)param_3 + 0x113) = 0x0;
    *(undefined *)(param_3 + 0x45) = 0x0;
    *(undefined *)((int)param_3 + 0x115) = 0x0;
    *(undefined *)((int)param_3 + 0x116) = 0x0;
    *(undefined *)((int)param_3 + 0x117) = 0x0;
    *(undefined *)(param_3 + 0x46) = 0x0;
    *(undefined *)((int)param_3 + 0x119) = 0x0;
    *(undefined *)((int)param_3 + 0x11a) = 0x0;
    *(undefined *)((int)param_3 + 0x11b) = 0x0;
    if (true) {
        do {
            *(undefined *)((int)param_3 + iVar3 + 0x104) = 0x0;
            iVar3 += 0x1;
            iVar1 += -0x1;
        } while (iVar1 != 0x0);
    }
    *param_3 = 0x2;
    param_3[0x1] = 0x5;
    AISetCursor(param_1,param_2,param_3);
    AIChangeVision(param_3);
    if (gSelection == 0x96) {
        uVar2 = AnimationRandom(0x13d);
        if (uVar2 == (((int)uVar2 >> 0x1) + (uint)((int)uVar2 < 0x0 && (uVar2 & 0x1) != 0x0)) * 0x2)
        {
            AIAddCommand(param_3,0x1,0x2,0x0);
            AIAddCommand(param_3,0xa,0x0,0x0);
        }
        else {
            uVar2 = AnimationRandom(0x42);
            if (uVar2 == (((int)uVar2 >> 0x1) + (uint)((int)uVar2 < 0x0 && (uVar2 & 0x1) != 0x0)) *
                         0x2) {
                AIAddCommand(param_3,0x1,0x3,0x0);
                AIAddCommand(param_3,0xa,0x0,0x0);
            }
        }
    }
    return;
}



void AISetSHard(int param_1,int param_2)

{
    char cVar1;
    undefined uStack_19;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined2 local_c;
    undefined local_a;
    
    local_18 = 0x272f2faf;
    local_14 = 0xafafefff;
    local_10 = 0xafefffbf;
    local_c = 0xbfbf;
    local_a = 0xbf;
    *(undefined *)(param_1 + 0x14) = (&uStack_19)[param_2];
    AISetCharacter();
    if (param_2 < 0x3) {
        *(undefined4 *)(param_1 + 0xc) = 0xb;
    }
    else if (param_2 < 0x5) {
        *(undefined4 *)(param_1 + 0xc) = 0xa;
    }
    else if (param_2 < 0x7) {
        *(undefined4 *)(param_1 + 0xc) = 0x9;
    }
    else if (param_2 < 0x9) {
        *(undefined4 *)(param_1 + 0xc) = 0x8;
    }
    else {
        *(undefined4 *)(param_1 + 0xc) = 0x7;
    }
    cVar1 = *(char *)(param_1 + 0x15);
    if ((cVar1 != -0x63) && (cVar1 != '\0')) {
        *(char *)(param_1 + 0x15) = cVar1 + -0x2;
    }
    if (param_2 < 0x9) {
        *(undefined4 *)(param_1 + 0x8) = 0x0;
    }
    else {
        *(undefined4 *)(param_1 + 0x8) = 0xffffffff;
    }
    return;
}



void AISetUltra(int param_1,int param_2)

{
    undefined uStack_19;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined2 local_c;
    undefined local_a;
    
    local_18 = 0x272f2faf;
    local_14 = 0xafafefff;
    local_10 = 0xafefffbf;
    local_c = 0xbfbf;
    local_a = 0xbf;
    *(undefined *)(param_1 + 0x14) = (&uStack_19)[param_2];
    AISetCharacter();
    if (param_2 < 0x5) {
        *(undefined4 *)(param_1 + 0xc) = 0x7;
    }
    else if (param_2 < 0x9) {
        *(undefined4 *)(param_1 + 0xc) = 0x6;
    }
    else if (param_2 < 0xd) {
        *(undefined4 *)(param_1 + 0xc) = 0x5;
    }
    else {
        *(undefined4 *)(param_1 + 0xc) = 0x4;
    }
    *(undefined *)(param_1 + 0x15) = 0x9d;
    *(undefined4 *)(param_1 + 0x8) = 0xffffffff;
    return;
}



void AISetCharacter(int param_1,undefined4 param_2)

{
    switch(param_2) {
    case 0x0:
        *(undefined *)(param_1 + 0x15) = 0xff;
        return;
    case 0x1:
        *(undefined *)(param_1 + 0x15) = 0xff;
        return;
    case 0x2:
        *(undefined *)(param_1 + 0x15) = 0xfe;
        return;
    case 0x3:
        *(undefined *)(param_1 + 0x15) = 0xfd;
        return;
    case 0x4:
        *(undefined *)(param_1 + 0x15) = 0xfc;
        return;
    case 0x5:
        *(undefined *)(param_1 + 0x15) = 0x0;
        return;
    case 0x6:
        *(undefined *)(param_1 + 0x15) = 0xfb;
        return;
    case 0x7:
        *(undefined *)(param_1 + 0x15) = 0xfa;
        return;
    case 0x8:
        *(undefined *)(param_1 + 0x15) = 0xf9;
        return;
    case 0x9:
        *(undefined *)(param_1 + 0x15) = 0x9d;
        return;
    case 0xa:
        *(undefined *)(param_1 + 0x15) = 0x0;
        return;
    case 0xb:
        *(undefined *)(param_1 + 0x15) = 0xf8;
        return;
    case 0xc:
        *(undefined *)(param_1 + 0x15) = 0x0;
        return;
    case 0xd:
        *(undefined *)(param_1 + 0x15) = 0xf7;
        return;
    case 0xe:
        *(undefined *)(param_1 + 0x15) = 0xf6;
        return;
    case 0xf:
    case 0x10:
        *(undefined *)(param_1 + 0x15) = 0x9d;
        return;
    default:
        return;
    }
}



void AISetLevel(int param_1,int param_2,int param_3)

{
    char cVar1;
    uint uVar2;
    undefined uStack_35;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    undefined2 local_28;
    undefined local_26;
    undefined uStack_25;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined local_18;
    undefined uStack_15;
    undefined4 local_14;
    undefined4 local_10;
    undefined local_c;
    
    if (param_3 == 0x0) {
        param_3 = 0x1;
    }
    if (param_2 == 0x3) {
        local_34 = 0x2327272f;
        local_30 = 0x2fafafbf;
        local_2c = 0xbfefbfff;
        local_28 = 0xbfbf;
        local_26 = 0xbf;
        *(undefined *)(param_1 + 0x14) = (&uStack_35)[param_3];
        AISetCharacter(param_1,param_3);
        uVar2 = param_3 - 0x1;
        *(uint *)(param_1 + 0xc) =
             0x10 - (((int)uVar2 >> 0x1) + (uint)((int)uVar2 < 0x0 && (uVar2 & 0x1) != 0x0));
        cVar1 = *(char *)(param_1 + 0x15);
        if ((cVar1 != -0x63) && (cVar1 != '\0')) {
            *(char *)(param_1 + 0x15) = cVar1 + -0x1;
        }
        *(undefined4 *)(param_1 + 0x8) = 0x0;
        return;
    }
    if (param_2 < 0x3) {
        if (param_2 == 0x1) {
            local_14 = 0x10303;
            local_10 = 0x3030303;
            local_c = 0x7;
            *(undefined *)(param_1 + 0x14) = (&uStack_15)[param_3];
            AISetCharacter(param_1,param_3);
            uVar2 = param_3 - 0x1;
            *(uint *)(param_1 + 0xc) =
                 0x23 - (((int)uVar2 >> 0x1) + (uint)((int)uVar2 < 0x0 && (uVar2 & 0x1) != 0x0));
            *(undefined4 *)(param_1 + 0x8) = 0xffffffff;
            return;
        }
        if (0x0 < param_2) {
            local_24 = 0x1030303;
            local_20 = 0x3070707;
            local_1c = 0x70f0f0f;
            local_18 = 0xf;
            *(undefined *)(param_1 + 0x14) = (&uStack_25)[param_3];
            AISetCharacter(param_1,param_3);
            uVar2 = param_3 - 0x1;
            *(uint *)(param_1 + 0xc) =
                 0x14 - (((int)uVar2 >> 0x1) + (uint)((int)uVar2 < 0x0 && (uVar2 & 0x1) != 0x0));
            if (*(char *)(param_1 + 0x15) < -0x3) {
                *(undefined *)(param_1 + 0x15) = 0xfd;
            }
            *(undefined4 *)(param_1 + 0x8) = 0xffffffff;
            return;
        }
    }
    else if ((param_2 != 0x5) && (param_2 < 0x5)) {
        AISetSHard(param_1,param_3);
        return;
    }
    AISetUltra(param_1,param_3);
    return;
}



void AISetCursor(undefined4 param_1,int param_2,undefined4 *param_3)

{
    *param_3 = *(undefined4 *)(param_2 + 0x10);
    param_3[0x1] = *(undefined4 *)(param_2 + 0x14);
    return;
}



void AIChangeVision(int param_1)

{
    int iVar1;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x1ba,_216,0x0,0x0,0x0);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0x0;
    *(undefined4 *)(param_1 + 0x30) = 0x5;
    iVar1 = *(int *)(param_1 + 0x4) + 0x2;
    if (iVar1 < 0xc) {
        *(int *)(param_1 + 0x24) = iVar1;
    }
    else {
        *(undefined4 *)(param_1 + 0x24) = 0xb;
    }
    iVar1 = *(int *)(param_1 + 0x4) + -0x2;
    if (iVar1 < 0x0) {
        *(undefined4 *)(param_1 + 0x28) = 0x0;
    }
    else {
        *(int *)(param_1 + 0x28) = iVar1;
    }
    return;
}



void AISetGarbage(int param_1,int *param_2,int param_3)

{
    int iVar1;
    int iVar2;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x1d8,_240,0x0,0x0,0x0);
    }
    if (param_2 == NULL) {
        gc_assert(0x0,&_215,0x1d9,_241,0x0,0x0,0x0);
    }
    if (param_3 == 0x0) {
        gc_assert(0x0,&_215,0x1da,_242,0x0,0x0,0x0);
    }
    if ((*param_2 != 0x3) && (*param_2 != 0x2)) {
        iVar2 = 0xb;
        param_1 += 0x318;
        iVar1 = 0x1;
        do {
            if ((*(int *)(param_1 + 0x68) == 0x9) || (*(int *)(param_1 + 0x94) == 0x9)) break;
            param_1 += 0x318;
            iVar1 += 0x1;
            iVar2 += -0x1;
        } while (iVar2 != 0x0);
        if (0xb < iVar1) {
            iVar1 = -0x1;
        }
        *(int *)(param_3 + 0x20) = iVar1;
    }
    return;
}



void AIAddCommand(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
    undefined4 *puVar1;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
    }
    puVar1 = (undefined4 *)(param_1 + *(int *)(param_1 + 0xfc) * 0xc + 0x44);
    *puVar1 = param_2;
    puVar1[0x1] = param_3;
    puVar1[0x2] = param_4;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 0x1;
    *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 0x1;
    return;
}



void AISetMove(int param_1,undefined param_2)

{
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
    }
    *(undefined *)(param_1 + *(int *)(param_1 + 0x124) + 0x104) = param_2;
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 0x1;
    return;
}



void AIFinishMove(int param_1)

{
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x236,_258,0x0,0x0,0x0);
    }
    *(undefined4 *)(param_1 + 0x120) = 0x0;
    *(undefined4 *)(param_1 + 0x124) = 0x0;
    return;
}



void AIClearCommand(int param_1)

{
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x240,_265,0x0,0x0,0x0);
    }
    *(undefined4 *)(param_1 + 0x100) = 0x0;
    *(undefined4 *)(param_1 + 0xf8) = 0x0;
    *(undefined4 *)(param_1 + 0xfc) = 0x0;
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x236,_258,0x0,0x0,0x0);
    }
    *(undefined4 *)(param_1 + 0x120) = 0x0;
    *(undefined4 *)(param_1 + 0x124) = 0x0;
    return;
}



undefined4 AIRowPack(int *param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;
    undefined uVar3;
    undefined4 uVar4;
    int iVar5;
    
    if (param_1 == NULL) {
        gc_assert(0x0,&_215,0x257,_325,0x0,0x0,0x0);
    }
    if (param_3 - param_2 < 0x2) {
        uVar4 = 0x0;
    }
    else {
        iVar5 = *param_1;
        iVar1 = iVar5 - param_2;
        if (iVar1 < 0x1) {
            iVar1 = -iVar1;
        }
        iVar2 = (iVar5 + 0x1) - param_3;
        if (iVar2 < 0x1) {
            iVar2 = -iVar2;
        }
        if (iVar1 < iVar2) {
            if (iVar5 < param_2) {
                uVar3 = 0x2;
            }
            else {
                uVar3 = 0x1;
            }
            for (iVar5 = 0x0; iVar5 < iVar1; iVar5 += 0x1) {
                if (param_1 == NULL) {
                    gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
                }
                *(undefined *)((int)param_1 + param_1[0x49] + 0x104) = uVar3;
                param_1[0x49] = param_1[0x49] + 0x1;
            }
            uVar3 = 0x2;
        }
        else {
            if (iVar5 + 0x1 < param_3) {
                uVar3 = 0x2;
            }
            else {
                uVar3 = 0x1;
            }
            for (iVar1 = 0x0; iVar1 < iVar2; iVar1 += 0x1) {
                if (param_1 == NULL) {
                    gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
                }
                *(undefined *)((int)param_1 + param_1[0x49] + 0x104) = uVar3;
                param_1[0x49] = param_1[0x49] + 0x1;
            }
            uVar3 = 0x1;
        }
        if (param_1 == NULL) {
            gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
        }
        *(undefined *)((int)param_1 + param_1[0x49] + 0x104) = 0x5;
        param_1[0x49] = param_1[0x49] + 0x1;
        for (iVar1 = 0x0; iVar1 < (param_3 - param_2) + -0x2; iVar1 += 0x1) {
            if (param_1 == NULL) {
                gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
            }
            *(undefined *)((int)param_1 + param_1[0x49] + 0x104) = uVar3;
            param_1[0x49] = param_1[0x49] + 0x1;
            if (param_1 == NULL) {
                gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
            }
            *(undefined *)((int)param_1 + param_1[0x49] + 0x104) = 0x5;
            param_1[0x49] = param_1[0x49] + 0x1;
        }
        uVar4 = 0xffffffff;
    }
    return uVar4;
}



undefined4 AIVertMove(int param_1,int param_2)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x29c,_352,0x0,0x0,0x0);
    }
    iVar3 = param_2 - *(int *)(param_1 + 0x4);
    if (param_2 == *(int *)(param_1 + 0x4)) {
        uVar1 = 0x0;
    }
    else {
        if (iVar3 < 0x1) {
            for (iVar2 = 0x0; iVar3 < iVar2; iVar2 += -0x1) {
                if (param_1 == 0x0) {
                    gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
                }
                *(undefined *)(param_1 + *(int *)(param_1 + 0x124) + 0x104) = 0x4;
                *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 0x1;
            }
        }
        else {
            for (iVar2 = 0x0; iVar2 < iVar3; iVar2 += 0x1) {
                if (param_1 == 0x0) {
                    gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
                }
                *(undefined *)(param_1 + *(int *)(param_1 + 0x124) + 0x104) = 0x3;
                *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 0x1;
            }
        }
        uVar1 = 0xffffffff;
    }
    return uVar1;
}



undefined4 AIHoriMove(int *param_1,int param_2)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    
    if (param_1 == NULL) {
        gc_assert(0x0,&_215,0x2bf,_385,0x0,0x0,0x0);
    }
    if ((param_2 == 0x5) && (gTheGame._120332_4_ != 0x2)) {
        param_2 = 0x4;
    }
    else if (param_2 < 0x0) {
        param_2 = 0x0;
    }
    iVar3 = param_2 - *param_1;
    if (param_2 == *param_1) {
        uVar1 = 0x0;
    }
    else {
        if (iVar3 < 0x1) {
            for (iVar2 = 0x0; iVar3 < iVar2; iVar2 += -0x1) {
                if (param_1 == NULL) {
                    gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
                }
                *(undefined *)((int)param_1 + param_1[0x49] + 0x104) = 0x1;
                param_1[0x49] = param_1[0x49] + 0x1;
            }
        }
        else {
            for (iVar2 = 0x0; iVar2 < iVar3; iVar2 += 0x1) {
                if (param_1 == NULL) {
                    gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
                }
                *(undefined *)((int)param_1 + param_1[0x49] + 0x104) = 0x2;
                param_1[0x49] = param_1[0x49] + 0x1;
            }
        }
        uVar1 = 0xffffffff;
    }
    return uVar1;
}



undefined4 AIHoriMoveBlock(int *param_1,int param_2,int param_3)

{
    int iVar1;
    undefined uVar2;
    undefined uVar3;
    
    uVar3 = 0x0;
    if (param_1 == NULL) {
        gc_assert(0x0,&_215,0x2e9,_425,0x0,0x0,0x0);
    }
    if (param_2 < param_3) {
        param_3 -= param_2;
        iVar1 = *param_1;
        uVar2 = 0x2;
    }
    else {
        if (param_2 <= param_3) {
            return 0x0;
        }
        param_3 = param_2 - param_3;
        iVar1 = *param_1 + 0x1;
        uVar2 = 0x1;
    }
    if (iVar1 < param_2) {
        param_2 -= iVar1;
        uVar3 = 0x2;
    }
    else if (param_2 < iVar1) {
        param_2 = iVar1 - param_2;
        uVar3 = 0x1;
    }
    else {
        param_2 = -0x1;
    }
    for (iVar1 = 0x0; iVar1 < param_2; iVar1 += 0x1) {
        if (param_1 == NULL) {
            gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
        }
        *(undefined *)((int)param_1 + param_1[0x49] + 0x104) = uVar3;
        param_1[0x49] = param_1[0x49] + 0x1;
    }
    if (param_1 == NULL) {
        gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
    }
    *(undefined *)((int)param_1 + param_1[0x49] + 0x104) = 0x5;
    param_1[0x49] = param_1[0x49] + 0x1;
    for (iVar1 = 0x0; iVar1 < param_3 + -0x1; iVar1 += 0x1) {
        if (param_1 == NULL) {
            gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
        }
        *(undefined *)((int)param_1 + param_1[0x49] + 0x104) = uVar2;
        param_1[0x49] = param_1[0x49] + 0x1;
        if (param_1 == NULL) {
            gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
        }
        *(undefined *)((int)param_1 + param_1[0x49] + 0x104) = 0x5;
        param_1[0x49] = param_1[0x49] + 0x1;
    }
    return 0xffffffff;
}



undefined4 AIHoriMoveCheckCheck(int param_1,int *param_2,int param_3,int param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x32a,_543,0x0,0x0,0x0);
    }
    if (param_2 == NULL) {
        gc_assert(0x0,&_215,0x32b,_544,0x0,0x0,0x0);
    }
    iVar6 = param_2[0x1];
    iVar2 = param_1 + iVar6 * 0x318;
    iVar1 = *(int *)(iVar2 + param_3 * 0x2c + 0x10);
    if ((iVar1 != 0x0) && (iVar1 < 0x8)) {
        if (param_3 < param_4) {
            param_4 -= param_3;
            param_3 += 0x1;
            if ((0x1 < iVar6) && (iVar4 = 0x0, iVar7 = param_4, 0x0 < param_4)) {
                do {
                    iVar5 = param_3 + iVar4;
                    iVar3 = iVar2 + iVar5 * 0x2c;
                    if (((iVar1 == *(int *)(iVar3 + -0x308)) &&
                        ((*(int *)(iVar3 + -0x318) != 0x8 && (iVar1 == *(int *)(iVar3 + -0x620)))))
                       && (*(int *)(iVar3 + -0x630) != 0x8)) {
                        AIVertMove(param_2,iVar6 + -0x2);
                        AIHoriMoveBlock(param_2,iVar5,iVar5 + -0x1);
                        AIVertMove(param_2,iVar6 + 0x2);
                        *param_2 = iVar5 + -0x1;
                        return 0xffffffff;
                    }
                    iVar4 += 0x1;
                    iVar7 += -0x1;
                } while (iVar7 != 0x0);
            }
            if (iVar6 < 0xa) {
                iVar7 = 0x0;
                iVar2 = param_4;
                if (0x0 < param_4) {
                    do {
                        iVar3 = param_3 + iVar7;
                        iVar4 = param_1 + iVar6 * 0x318 + iVar3 * 0x2c;
                        if ((((iVar1 == *(int *)(iVar4 + 0x328)) && (*(int *)(iVar4 + 0x318) != 0x8)
                             ) && (iVar1 == *(int *)(iVar4 + 0x640))) &&
                           (*(int *)(iVar4 + 0x630) != 0x8)) {
                            AIVertMove(param_2,iVar6 + 0x1);
                            AIHoriMoveBlock(param_2,iVar3,iVar3 + -0x1);
                            AIVertMove(param_2,iVar6 + -0x1);
                            *param_2 = iVar3 + -0x1;
                            return 0xffffffff;
                        }
                        iVar7 += 0x1;
                        iVar2 += -0x1;
                    } while (iVar2 != 0x0);
                }
            }
            if ((0x0 < iVar6) && (iVar6 < 0xb)) {
                iVar2 = 0x0;
                if (0x0 < param_4) {
                    do {
                        iVar4 = param_3 + iVar2;
                        iVar7 = param_1 + iVar6 * 0x318 + iVar4 * 0x2c;
                        if (((iVar1 == *(int *)(iVar7 + 0x328)) && (*(int *)(iVar7 + 0x318) != 0x8))
                           && ((iVar1 == *(int *)(iVar7 + -0x308) &&
                               (*(int *)(iVar7 + -0x318) != 0x8)))) {
                            AIVertMove(param_2,iVar6 + 0x1);
                            AIHoriMoveBlock(param_2,iVar4,iVar4 + -0x1);
                            AIVertMove(param_2,iVar6 + -0x1);
                            *param_2 = iVar4 + -0x1;
                            return 0xffffffff;
                        }
                        iVar2 += 0x1;
                        param_4 += -0x1;
                    } while (param_4 != 0x0);
                }
            }
        }
        else if (param_4 < param_3) {
            param_4 = param_3 - param_4;
            param_3 += -0x1;
            if ((0x1 < iVar6) && (iVar4 = 0x0, iVar7 = param_4, 0x0 < param_4)) {
                do {
                    iVar5 = param_3 - iVar4;
                    iVar3 = iVar2 + iVar5 * 0x2c;
                    if ((iVar1 == *(int *)(iVar3 + -0x308)) &&
                       (((*(int *)(iVar3 + -0x318) != 0x8 && (iVar1 == *(int *)(iVar3 + -0x620))) &&
                        (*(int *)(iVar3 + -0x630) != 0x8)))) {
                        AIVertMove(param_2,iVar6 + -0x2);
                        AIHoriMoveBlock(param_2,iVar5,iVar5 + 0x1);
                        AIVertMove(param_2,iVar6 + 0x2);
                        *param_2 = iVar5;
                        return 0xffffffff;
                    }
                    iVar4 += 0x1;
                    iVar7 += -0x1;
                } while (iVar7 != 0x0);
            }
            if (iVar6 < 0xa) {
                iVar7 = 0x0;
                iVar2 = param_4;
                if (0x0 < param_4) {
                    do {
                        iVar3 = param_3 - iVar7;
                        iVar4 = param_1 + iVar6 * 0x318 + iVar3 * 0x2c;
                        if (((iVar1 == *(int *)(iVar4 + 0x328)) && (*(int *)(iVar4 + 0x318) != 0x8))
                           && ((iVar1 == *(int *)(iVar4 + 0x640) && (*(int *)(iVar4 + 0x630) != 0x8)
                               ))) {
                            AIVertMove(param_2,iVar6 + 0x1);
                            AIHoriMoveBlock(param_2,iVar3,iVar3 + 0x1);
                            AIVertMove(param_2,iVar6 + -0x1);
                            *param_2 = iVar3;
                            return 0xffffffff;
                        }
                        iVar7 += 0x1;
                        iVar2 += -0x1;
                    } while (iVar2 != 0x0);
                }
            }
            if ((0x0 < iVar6) && (iVar6 < 0xb)) {
                iVar2 = 0x0;
                if (0x0 < param_4) {
                    do {
                        iVar4 = param_3 - iVar2;
                        iVar7 = param_1 + iVar6 * 0x318 + iVar4 * 0x2c;
                        if ((((iVar1 == *(int *)(iVar7 + -0x308)) &&
                             (*(int *)(iVar7 + -0x318) != 0x8)) &&
                            (iVar1 == *(int *)(iVar7 + 0x328))) && (*(int *)(iVar7 + 0x318) != 0x8))
                        {
                            AIVertMove(param_2,iVar6 + 0x1);
                            AIHoriMoveBlock(param_2,iVar4,iVar4 + 0x1);
                            AIVertMove(param_2,iVar6 + -0x1);
                            *param_2 = iVar4;
                            return 0xffffffff;
                        }
                        iVar2 += 0x1;
                        param_4 += -0x1;
                    } while (param_4 != 0x0);
                }
            }
        }
    }
    return 0x0;
}



undefined4 AIMoveAcross(int param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    
    iVar3 = -0x1;
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x3f2,_602,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        iVar3 = 0x0;
    }
    if (param_3 != param_4) {
        if (param_3 < param_4) {
            param_3 += 0x1;
            iVar1 = param_4 - param_3;
            piVar2 = (int *)(param_1 + param_2 * 0x318 + param_3 * 0x2c);
            param_1 += (param_2 + -0x1) * 0x318 + param_3 * 0x2c;
            if (param_3 < param_4) {
                do {
                    if ((piVar2[0x4] != 0x0) && (*piVar2 != 0x0)) {
                        return 0x0;
                    }
                    if ((iVar3 != 0x0) && (*(int *)(param_1 + 0x10) == 0x0)) {
                        return 0x0;
                    }
                    piVar2 = piVar2 + 0xb;
                    param_1 += 0x2c;
                    iVar1 += -0x1;
                } while (iVar1 != 0x0);
            }
        }
        else if (param_4 < param_3) {
            param_3 += -0x1;
            iVar1 = param_3 - param_4;
            piVar2 = (int *)(param_1 + param_2 * 0x318 + param_3 * 0x2c);
            param_1 += (param_2 + -0x1) * 0x318 + param_3 * 0x2c;
            if (param_4 < param_3) {
                do {
                    if ((piVar2[0x4] != 0x0) && (*piVar2 != 0x0)) {
                        return 0x0;
                    }
                    if ((iVar3 != 0x0) && (*(int *)(param_1 + 0x10) == 0x0)) {
                        return 0x0;
                    }
                    piVar2 = piVar2 + -0xb;
                    param_1 += -0x2c;
                    iVar1 += -0x1;
                } while (iVar1 != 0x0);
            }
        }
    }
    return 0xffffffff;
}



int AIShortestD(int param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x42c,_644,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x42d,_645,0x0,0x0,0x0);
    }
    iVar5 = *(int *)(param_2 + 0x4) * 0x318;
    iVar3 = param_1 + iVar5 + 0x10;
    iVar4 = *(int *)(iVar3 + param_3 * 0x2c);
    iVar1 = param_4;
    if (iVar4 != *(int *)(iVar3 + param_4 * 0x2c)) {
        iVar6 = param_4 + -0x1;
        iVar1 = param_4 - *(int *)(param_2 + 0x2c);
        param_1 += iVar5;
        piVar2 = (int *)(param_1 + iVar6 * 0x2c);
        iVar3 = -0x1;
        if (*(int *)(param_2 + 0x2c) <= iVar6) {
            do {
                if ((iVar4 == piVar2[0x4]) && (iVar3 = iVar6, *piVar2 == 0x0)) break;
                piVar2 = piVar2 + -0xb;
                iVar6 += -0x1;
                iVar1 += -0x1;
                iVar3 = -0x1;
            } while (iVar1 != 0x0);
        }
        iVar6 = param_4 + 0x1;
        iVar1 = (*(int *)(param_2 + 0x30) + 0x1) - iVar6;
        piVar2 = (int *)(param_1 + iVar6 * 0x2c);
        iVar5 = -0x1;
        if (iVar6 <= *(int *)(param_2 + 0x30)) {
            do {
                if ((iVar4 == piVar2[0x4]) && (iVar5 = iVar6, *piVar2 == 0x0)) break;
                piVar2 = piVar2 + 0xb;
                iVar6 += 0x1;
                iVar1 += -0x1;
                iVar5 = -0x1;
            } while (iVar1 != 0x0);
        }
        iVar1 = iVar5;
        if (((iVar3 != -0x1) && (iVar1 = iVar3, iVar5 != -0x1)) &&
           (iVar5 - param_4 < param_4 - iVar3)) {
            iVar1 = iVar5;
        }
    }
    return iVar1;
}



void AISortRows(int param_1,int param_2,int *param_3)

{
    int iVar1;
    int *piVar2;
    int *piVar3;
    int *piVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    uint uVar10;
    int local_40 [0xc];
    
    iVar8 = 0x0;
    if (param_3 == NULL) {
        gc_assert(0x0,&_215,0x467,_689,0x0,0x0,0x0);
    }
    piVar4 = local_40;
    piVar3 = piVar4;
    for (iVar6 = 0x0; iVar6 < param_2; iVar6 += 0x1) {
        iVar5 = 0xc;
        iVar7 = 0x0;
        piVar2 = param_3;
        iVar9 = param_2;
        if (0x0 < param_2) {
            do {
                if (*piVar2 != 0xc) {
                    iVar1 = *piVar2 - param_1;
                    if (iVar1 < 0x1) {
                        iVar1 = -iVar1;
                    }
                    if (iVar1 < iVar5) {
                        iVar5 = iVar1;
                        iVar8 = iVar7;
                    }
                }
                piVar2 = piVar2 + 0x1;
                iVar7 += 0x1;
                iVar9 += -0x1;
            } while (iVar9 != 0x0);
        }
        *piVar3 = iVar8;
        param_1 = param_3[iVar8];
        param_3[iVar8] = 0xc;
        piVar3 = piVar3 + 0x1;
    }
    iVar8 = 0x0;
    if (0x0 < param_2) {
        if ((0x8 < param_2) &&
           (uVar10 = param_2 - 0x1U >> 0x3, piVar3 = param_3, 0x0 < param_2 + -0x8)) {
            do {
                iVar8 += 0x8;
                *piVar3 = *piVar4;
                piVar3[0x1] = piVar4[0x1];
                piVar3[0x2] = piVar4[0x2];
                piVar3[0x3] = piVar4[0x3];
                piVar3[0x4] = piVar4[0x4];
                piVar3[0x5] = piVar4[0x5];
                piVar3[0x6] = piVar4[0x6];
                piVar2 = piVar4 + 0x7;
                piVar4 = piVar4 + 0x8;
                piVar3[0x7] = *piVar2;
                piVar3 = piVar3 + 0x8;
                uVar10 -= 0x1;
            } while (uVar10 != 0x0);
        }
        piVar3 = local_40 + iVar8;
        param_3 = param_3 + iVar8;
        iVar6 = param_2 - iVar8;
        if (iVar8 < param_2) {
            do {
                iVar8 = *piVar3;
                piVar3 = piVar3 + 0x1;
                *param_3 = iVar8;
                param_3 = param_3 + 0x1;
                iVar6 += -0x1;
            } while (iVar6 != 0x0);
        }
    }
    return;
}



undefined4 AILowerRow(int param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    undefined4 *puVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x4b1,_786,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x4b2,_787,0x0,0x0,0x0);
    }
    if ((*(int *)(AItotCheck + param_4 * 0x4) != -0x1) && (param_3 != 0x0)) {
        iVar8 = param_4 + -0x1;
        iVar7 = param_3 + -0x1;
        iVar6 = param_1 + param_3 * 0x318;
        param_1 += iVar7 * 0x318;
        iVar2 = iVar6 + iVar8 * 0x2c;
        piVar3 = (int *)(AItotCheck + iVar8 * 0x4);
        iVar5 = param_1 + iVar8 * 0x2c;
        iVar1 = param_4;
        if (-0x1 < iVar8) {
            do {
                if ((*(int *)(iVar2 + 0x10) != 0x0) && (*piVar3 == -0x1)) break;
                if (*(int *)(iVar5 + 0x10) == 0x0) {
                    if (*(int *)(AItotCheck + iVar8 * 0x4) != -0x1) {
                        if (iVar8 == param_4 + -0x1) {
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar4 = 0x1;
                            puVar4[0x1] = iVar7;
                            puVar4[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar4 = 0x3;
                            puVar4[0x1] = param_4;
                            puVar4[0x2] = param_4 + -0x1;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            return 0xffffffff;
                        }
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar4 = 0x1;
                        puVar4[0x1] = param_3;
                        puVar4[0x2] = 0x0;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar4 = 0x3;
                        puVar4[0x1] = param_4;
                        puVar4[0x2] = iVar8;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        return 0xffffffff;
                    }
                    break;
                }
                iVar2 += -0x2c;
                piVar3 = piVar3 + -0x1;
                iVar5 += -0x2c;
                iVar8 += -0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
        iVar2 = param_4 + 0x1;
        iVar1 = 0x6 - iVar2;
        iVar6 += iVar2 * 0x2c;
        piVar3 = (int *)(AItotCheck + iVar2 * 0x4);
        param_1 += iVar2 * 0x2c;
        if (iVar2 < 0x6) {
            do {
                if ((*(int *)(iVar6 + 0x10) != 0x0) && (*piVar3 == -0x1)) {
                    return 0x0;
                }
                if (*(int *)(param_1 + 0x10) == 0x0) {
                    if (*(int *)(AItotCheck + iVar2 * 0x4) == -0x1) {
                        return 0x0;
                    }
                    if (iVar2 == param_4 + 0x1) {
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar4 = 0x1;
                        puVar4[0x1] = iVar7;
                        puVar4[0x2] = 0x0;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar4 = 0x3;
                        puVar4[0x1] = param_4;
                        puVar4[0x2] = param_4 + 0x1;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        return 0xffffffff;
                    }
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar4 = 0x1;
                    puVar4[0x1] = param_3;
                    puVar4[0x2] = 0x0;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar4 = 0x3;
                    puVar4[0x1] = param_4;
                    puVar4[0x2] = iVar2;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    return 0xffffffff;
                }
                iVar6 += 0x2c;
                piVar3 = piVar3 + 0x1;
                param_1 += 0x2c;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    return 0x0;
}



void AIBoundaryCheck(int param_1,int param_2)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int *piVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int *piVar13;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x525,_863,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x526,_864,0x0,0x0,0x0);
    }
    if (*(int *)(param_2 + 0x20) == -0x1) {
        iVar1 = *(int *)(param_2 + 0x24);
    }
    else {
        iVar1 = *(int *)(param_2 + 0x20) + -0x1;
    }
    iVar3 = *(int *)(param_2 + 0x28);
    if (0x1 < iVar1 - iVar3) {
        iVar4 = param_1 + iVar3 * 0x318;
        for (; iVar3 <= iVar1; iVar3 += 0x1) {
            iVar5 = *(int *)(param_2 + 0x2c);
            piVar2 = (int *)(iVar4 + iVar5 * 0x2c);
            for (; iVar5 <= *(int *)(param_2 + 0x30); iVar5 += 0x1) {
                iVar6 = piVar2[0x4];
                if ((iVar6 != 0x0) && (*piVar2 == 0x0)) {
                    piVar7 = (int *)(AItotCheck + (iVar6 + -0x1) * 0x4);
                    if (*piVar7 < 0x3) {
                        iVar8 = (iVar6 + -0x1) * 0x14;
                        *(int *)(AIrowCheck + iVar8) = iVar3;
                        iVar9 = iVar3 + 0x1;
                        *(int *)(AIcolCheck + iVar8) = iVar5;
                        *piVar7 = 0x1;
                        iVar12 = param_1 + iVar9 * 0x318;
                        for (; iVar9 <= iVar1; iVar9 += 0x1) {
                            iVar10 = *(int *)(param_2 + 0x2c);
                            iVar11 = (*(int *)(param_2 + 0x30) + 0x1) - iVar10;
                            piVar13 = (int *)(iVar12 + iVar10 * 0x2c);
                            if (iVar10 <= *(int *)(param_2 + 0x30)) {
                                do {
                                    if ((iVar6 == piVar13[0x4]) && (*piVar13 == 0x0)) {
                                        *(int *)((int)(AIrowCheck + iVar8) + *piVar7 * 0x4) = iVar9;
                                        *(int *)((int)(AIcolCheck + iVar8) + *piVar7 * 0x4) = iVar10
                                        ;
                                        *piVar7 = *piVar7 + 0x1;
                                        break;
                                    }
                                    piVar13 = piVar13 + 0xb;
                                    iVar10 += 0x1;
                                    iVar11 += -0x1;
                                } while (iVar11 != 0x0);
                            }
                            if ((*(int *)(param_2 + 0x30) < iVar10) || (0x4 < *piVar7)) break;
                            iVar12 += 0x318;
                        }
                    }
                }
                piVar2 = piVar2 + 0xb;
            }
            iVar4 += 0x318;
        }
    }
    return;
}



undefined4 AIPossibleRow(int param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    int *piVar4;
    undefined4 *puVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x576,_928,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x577,_929,0x0,0x0,0x0);
    }
    param_1 += param_3 * 0x318;
    if ((*(int *)(param_1 + 0x68) == 0x9) || (*(int *)(param_1 + 0x94) == 0x9)) {
        uVar3 = 0x0;
    }
    else {
        iVar7 = 0x1;
        do {
            iVar1 = *(int *)(param_2 + 0x2c);
            iVar6 = 0x0;
            iVar8 = -0x1;
            iVar2 = (*(int *)(param_2 + 0x30) + 0x1) - iVar1;
            piVar4 = (int *)(param_1 + iVar1 * 0x2c);
            iVar9 = -0x1;
            iVar11 = -0x1;
            iVar10 = iVar9;
            iVar12 = iVar11;
            if (iVar1 <= *(int *)(param_2 + 0x30)) {
                do {
                    iVar9 = iVar10;
                    iVar11 = iVar12;
                    if ((((iVar7 == piVar4[0x4]) && (*piVar4 == 0x0)) &&
                        (iVar6 += 0x1, iVar11 = iVar1, -0x1 < iVar12)) &&
                       ((iVar9 = iVar1, iVar11 = iVar12, -0x1 < iVar10 &&
                        (iVar9 = iVar10, iVar8 < 0x0)))) {
                        iVar8 = iVar1;
                    }
                    piVar4 = piVar4 + 0xb;
                    iVar1 += 0x1;
                    iVar2 += -0x1;
                    iVar10 = iVar9;
                    iVar12 = iVar11;
                } while (iVar2 != 0x0);
            }
        } while ((iVar6 < 0x3) && (iVar7 += 0x1, iVar7 < 0x8));
        if (iVar6 < 0x3) {
            uVar3 = 0x0;
        }
        else {
            if (iVar9 - iVar11 == 0x1) {
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar5 = 0x3;
                puVar5[0x1] = iVar8;
                puVar5[0x2] = iVar9 + 0x1;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            }
            else if (iVar8 - iVar9 == 0x1) {
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar5 = 0x3;
                puVar5[0x1] = iVar11;
                puVar5[0x2] = iVar9 + -0x1;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            }
            else if (gCounter ==
                     (((int)gCounter >> 0x1) +
                     (uint)((int)gCounter < 0x0 && (gCounter & 0x1) != 0x0)) * 0x2) {
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar5 = 0x8;
                puVar5[0x1] = iVar11;
                puVar5[0x2] = iVar9;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            }
            else {
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar5 = 0x8;
                puVar5[0x1] = iVar9;
                puVar5[0x2] = iVar8;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            }
            uVar3 = 0xffffffff;
        }
    }
    return uVar3;
}



undefined4 AIPossibleCol(int param_1,int *param_2)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    int *piVar5;
    int iVar6;
    int *piVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    
    iVar16 = 0x0;
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x5c0,_1148,0x0,0x0,0x0);
    }
    if (param_2 == NULL) {
        gc_assert(0x0,&_215,0x5c1,_1149,0x0,0x0,0x0);
    }
    if ((param_2[0x1] == 0x0) || (0x8 < param_2[0x1])) {
        uVar1 = 0x0;
    }
    else {
        iVar18 = *param_2;
        iVar17 = iVar18 + 0x1;
        if (iVar18 == param_2[0xb]) {
            iVar14 = iVar18 + 0x2;
            iVar15 = iVar18;
        }
        else if (iVar17 == param_2[0xc]) {
            iVar15 = iVar18 + -0x1;
            iVar14 = iVar17;
        }
        else {
            iVar15 = iVar18 + -0x1;
            iVar14 = iVar18 + 0x2;
        }
        iVar13 = 0x0;
        iVar9 = iVar15 * 0x2c;
        do {
            iVar3 = param_2[0x1];
            iVar10 = iVar18 + iVar13;
            iVar11 = *(int *)(param_1 + iVar3 * 0x318 + iVar10 * 0x2c + 0x10);
            iVar12 = 0x0;
            if ((iVar11 != 0x0) && (iVar11 < 0x8)) {
                iVar8 = iVar3 + 0x1;
                iVar16 = iVar11 + -0x1;
                piVar7 = (int *)(param_1 + iVar8 * 0x318 + iVar9);
                for (iVar6 = iVar15; iVar6 <= iVar14; iVar6 += 0x1) {
                    if (((iVar11 == piVar7[0x4]) && (*piVar7 == 0x0)) &&
                       (iVar2 = AIMoveAcross(param_1,iVar8,iVar6,iVar10), iVar2 != 0x0)) {
                        *(int *)(AIrowCheck + iVar16 * 0x14) = iVar8;
                        iVar12 = 0x1;
                        *(int *)(AIcolCheck + iVar16 * 0x14) = iVar6;
                        break;
                    }
                    piVar7 = piVar7 + 0xb;
                }
                if (iVar12 != 0x0) {
                    piVar7 = (int *)(param_1 + (iVar3 + 0x2) * 0x318 + iVar9);
                    for (iVar6 = iVar15; iVar6 <= iVar14; iVar6 += 0x1) {
                        if (((iVar11 == piVar7[0x4]) && (*piVar7 == 0x0)) &&
                           (iVar8 = AIMoveAcross(param_1,iVar3 + 0x2,iVar6,iVar10), iVar8 != 0x0)) {
                            iVar8 = iVar12 * 0x4 + iVar16 * 0x14;
                            *(int *)(AItotCheck + iVar8 + 0x1c) = iVar3 + 0x2;
                            iVar12 += 0x1;
                            *(int *)(AItotCheck + iVar8 + 0xa8) = iVar6;
                            break;
                        }
                        piVar7 = piVar7 + 0xb;
                    }
                    if (iVar12 == 0x2) break;
                    iVar6 = param_2[0x1] + -0x1;
                    piVar7 = (int *)(param_1 + iVar6 * 0x318 + iVar9);
                    for (iVar3 = iVar15; iVar3 <= iVar14; iVar3 += 0x1) {
                        if (((iVar11 == piVar7[0x4]) && (*piVar7 == 0x0)) &&
                           (iVar8 = AIMoveAcross(param_1,iVar6,iVar3,iVar10), iVar8 != 0x0)) {
                            iVar10 = iVar12 * 0x4 + iVar16 * 0x14;
                            *(int *)(AItotCheck + iVar10 + 0x1c) = iVar6;
                            iVar12 += 0x1;
                            *(int *)(AItotCheck + iVar10 + 0xa8) = iVar3;
                            break;
                        }
                        piVar7 = piVar7 + 0xb;
                    }
                    if (iVar12 == 0x2) break;
                }
            }
            iVar13 += 0x1;
        } while (iVar13 < 0x2);
        if (iVar12 == 0x2) {
            if (iVar13 == 0x0) {
                iVar16 *= 0x14;
                piVar7 = (int *)(AIcolCheck + iVar16);
                if (iVar18 == *piVar7) {
                    iVar17 = *(int *)(AIrowCheck + iVar16 + 0x4);
                    if (param_2 == NULL) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    piVar7 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                    *piVar7 = 0x1;
                    piVar7[0x1] = iVar17;
                    piVar7[0x2] = 0x0;
                    param_2[0x40] = param_2[0x40] + 0x1;
                    param_2[0x3f] = param_2[0x3f] + 0x1;
                    iVar16 = *(int *)(AIcolCheck + iVar16 + 0x4);
                    if (param_2 == NULL) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    piVar7 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                    *piVar7 = 0x4;
                    piVar7[0x1] = iVar16;
                    piVar7[0x2] = iVar18;
                    param_2[0x40] = param_2[0x40] + 0x1;
                    param_2[0x3f] = param_2[0x3f] + 0x1;
                }
                else {
                    piVar4 = (int *)(AIcolCheck + iVar16 + 0x4);
                    if (iVar18 == *piVar4) {
                        iVar16 = *(int *)(AIrowCheck + iVar16);
                        if (param_2 == NULL) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        piVar4 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                        *piVar4 = 0x1;
                        piVar4[0x1] = iVar16;
                        piVar4[0x2] = 0x0;
                        param_2[0x40] = param_2[0x40] + 0x1;
                        param_2[0x3f] = param_2[0x3f] + 0x1;
                        iVar16 = *piVar7;
                        if (param_2 == NULL) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        piVar7 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                        *piVar7 = 0x4;
                        piVar7[0x1] = iVar16;
                        piVar7[0x2] = iVar18;
                        param_2[0x40] = param_2[0x40] + 0x1;
                        param_2[0x3f] = param_2[0x3f] + 0x1;
                    }
                    else {
                        iVar17 = AIMoveAcross(param_1,param_2[0x1],iVar18);
                        if (iVar17 == 0x0) {
                            iVar17 = *(int *)(AIrowCheck + iVar16);
                            if (param_2 == NULL) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            piVar5 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                            *piVar5 = 0x1;
                            piVar5[0x1] = iVar17;
                            piVar5[0x2] = 0x0;
                            param_2[0x40] = param_2[0x40] + 0x1;
                            param_2[0x3f] = param_2[0x3f] + 0x1;
                            iVar17 = *piVar7;
                            if (param_2 == NULL) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            piVar7 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                            *piVar7 = 0x4;
                            piVar7[0x1] = iVar17;
                            piVar7[0x2] = iVar18;
                            param_2[0x40] = param_2[0x40] + 0x1;
                            param_2[0x3f] = param_2[0x3f] + 0x1;
                            iVar16 = *(int *)(AIrowCheck + iVar16 + 0x4);
                            if (param_2 == NULL) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            piVar7 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                            *piVar7 = 0x1;
                            piVar7[0x1] = iVar16;
                            piVar7[0x2] = 0x0;
                            param_2[0x40] = param_2[0x40] + 0x1;
                            param_2[0x3f] = param_2[0x3f] + 0x1;
                            iVar16 = *piVar4;
                            if (param_2 == NULL) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            piVar7 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                            *piVar7 = 0x4;
                            piVar7[0x1] = iVar16;
                            piVar7[0x2] = iVar18;
                            param_2[0x40] = param_2[0x40] + 0x1;
                            param_2[0x3f] = param_2[0x3f] + 0x1;
                        }
                        else {
                            iVar17 = *piVar7;
                            if (param_2 == NULL) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            piVar5 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                            *piVar5 = 0x3;
                            piVar5[0x1] = iVar18;
                            piVar5[0x2] = iVar17;
                            param_2[0x40] = param_2[0x40] + 0x1;
                            param_2[0x3f] = param_2[0x3f] + 0x1;
                            iVar16 = *(int *)(AIrowCheck + iVar16 + 0x4);
                            if (param_2 == NULL) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            piVar5 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                            *piVar5 = 0x1;
                            piVar5[0x1] = iVar16;
                            piVar5[0x2] = 0x0;
                            param_2[0x40] = param_2[0x40] + 0x1;
                            param_2[0x3f] = param_2[0x3f] + 0x1;
                            iVar17 = *piVar7;
                            iVar16 = *piVar4;
                            if (param_2 == NULL) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            piVar7 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                            *piVar7 = 0x4;
                            piVar7[0x1] = iVar16;
                            piVar7[0x2] = iVar17;
                            param_2[0x40] = param_2[0x40] + 0x1;
                            param_2[0x3f] = param_2[0x3f] + 0x1;
                        }
                    }
                }
            }
            else {
                iVar16 *= 0x14;
                piVar7 = (int *)(AIcolCheck + iVar16);
                if (iVar17 == *piVar7) {
                    iVar18 = *(int *)(AIrowCheck + iVar16 + 0x4);
                    if (param_2 == NULL) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    piVar7 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                    *piVar7 = 0x1;
                    piVar7[0x1] = iVar18;
                    piVar7[0x2] = 0x0;
                    param_2[0x40] = param_2[0x40] + 0x1;
                    param_2[0x3f] = param_2[0x3f] + 0x1;
                    iVar16 = *(int *)(AIcolCheck + iVar16 + 0x4);
                    if (param_2 == NULL) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    piVar7 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                    *piVar7 = 0x4;
                    piVar7[0x1] = iVar16;
                    piVar7[0x2] = iVar17;
                    param_2[0x40] = param_2[0x40] + 0x1;
                    param_2[0x3f] = param_2[0x3f] + 0x1;
                }
                else {
                    piVar4 = (int *)(AIcolCheck + iVar16 + 0x4);
                    if (iVar17 == *piVar4) {
                        iVar16 = *(int *)(AIrowCheck + iVar16);
                        if (param_2 == NULL) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        piVar4 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                        *piVar4 = 0x1;
                        piVar4[0x1] = iVar16;
                        piVar4[0x2] = 0x0;
                        param_2[0x40] = param_2[0x40] + 0x1;
                        param_2[0x3f] = param_2[0x3f] + 0x1;
                        iVar16 = *piVar7;
                        if (param_2 == NULL) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        piVar7 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                        *piVar7 = 0x4;
                        piVar7[0x1] = iVar16;
                        piVar7[0x2] = iVar17;
                        param_2[0x40] = param_2[0x40] + 0x1;
                        param_2[0x3f] = param_2[0x3f] + 0x1;
                    }
                    else {
                        iVar18 = AIMoveAcross(param_1,param_2[0x1],iVar17);
                        if (iVar18 == 0x0) {
                            iVar18 = *(int *)(AIrowCheck + iVar16);
                            if (param_2 == NULL) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            piVar5 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                            *piVar5 = 0x1;
                            piVar5[0x1] = iVar18;
                            piVar5[0x2] = 0x0;
                            param_2[0x40] = param_2[0x40] + 0x1;
                            param_2[0x3f] = param_2[0x3f] + 0x1;
                            iVar18 = *piVar7;
                            if (param_2 == NULL) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            piVar7 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                            *piVar7 = 0x4;
                            piVar7[0x1] = iVar18;
                            piVar7[0x2] = iVar17;
                            param_2[0x40] = param_2[0x40] + 0x1;
                            param_2[0x3f] = param_2[0x3f] + 0x1;
                            iVar16 = *(int *)(AIrowCheck + iVar16 + 0x4);
                            if (param_2 == NULL) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            piVar7 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                            *piVar7 = 0x1;
                            piVar7[0x1] = iVar16;
                            piVar7[0x2] = 0x0;
                            param_2[0x40] = param_2[0x40] + 0x1;
                            param_2[0x3f] = param_2[0x3f] + 0x1;
                            iVar16 = *piVar4;
                            if (param_2 == NULL) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            piVar7 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                            *piVar7 = 0x4;
                            piVar7[0x1] = iVar16;
                            piVar7[0x2] = iVar17;
                            param_2[0x40] = param_2[0x40] + 0x1;
                            param_2[0x3f] = param_2[0x3f] + 0x1;
                        }
                        else {
                            iVar18 = *piVar7;
                            if (param_2 == NULL) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            piVar5 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                            *piVar5 = 0x3;
                            piVar5[0x1] = iVar17;
                            piVar5[0x2] = iVar18;
                            param_2[0x40] = param_2[0x40] + 0x1;
                            param_2[0x3f] = param_2[0x3f] + 0x1;
                            iVar16 = *(int *)(AIrowCheck + iVar16 + 0x4);
                            if (param_2 == NULL) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            piVar5 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                            *piVar5 = 0x1;
                            piVar5[0x1] = iVar16;
                            piVar5[0x2] = 0x0;
                            param_2[0x40] = param_2[0x40] + 0x1;
                            param_2[0x3f] = param_2[0x3f] + 0x1;
                            iVar17 = *piVar7;
                            iVar16 = *piVar4;
                            if (param_2 == NULL) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            piVar7 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                            *piVar7 = 0x4;
                            piVar7[0x1] = iVar16;
                            piVar7[0x2] = iVar17;
                            param_2[0x40] = param_2[0x40] + 0x1;
                            param_2[0x3f] = param_2[0x3f] + 0x1;
                        }
                    }
                }
            }
            uVar1 = 0xffffffff;
        }
        else {
            uVar1 = 0x0;
        }
    }
    return uVar1;
}



void AIComboCheck(int param_1,int *param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    bool bVar3;
    int *piVar4;
    int iVar5;
    undefined4 *puVar6;
    int *piVar7;
    int *piVar8;
    int iVar9;
    undefined1 *puVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    undefined4 uVar15;
    int *piVar16;
    int *piVar17;
    undefined1 *puVar18;
    undefined1 *puVar19;
    undefined1 *puVar20;
    uint uVar21;
    int local_78 [0xc];
    
    puVar10 = AItotCheck;
    iVar9 = 0x12;
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x68a,_1288,0x0,0x0,0x0);
    }
    if (param_2 == NULL) {
        gc_assert(0x0,&_215,0x68b,_1289,0x0,0x0,0x0);
    }
    puVar19 = AIrowCheck;
    puVar18 = AIcolCheck;
    puVar20 = AIdistance;
    iVar14 = 0x0;
    piVar7 = (int *)puVar10;
    piVar8 = (int *)puVar20;
    piVar16 = (int *)puVar18;
    piVar17 = (int *)puVar19;
    do {
        iVar5 = *piVar7;
        if (0x2 < iVar5) {
            iVar12 = param_2[0x1];
            iVar11 = *piVar17;
            iVar13 = piVar17[iVar5 + -0x1];
            if (iVar12 < iVar13) {
                if (iVar11 < iVar12) {
                    iVar13 = 0x0;
                    piVar4 = piVar17;
                    if (0x0 < iVar5) {
                        do {
                            if (iVar12 == *piVar4) {
                                iVar13 = piVar17[iVar13];
                                iVar5 = 0x0;
                                if (param_2 == NULL) {
                                    gc_assert(0x0,&_215,0x499,_703,0x0,0x0,0x0);
                                }
                                iVar12 = param_2[0x1] - iVar12;
                                if (iVar12 < 0x1) {
                                    iVar12 = -iVar12;
                                }
                                iVar11 = *param_2;
                                if (iVar13 < iVar11) {
                                    iVar5 = iVar11 - iVar13;
                                }
                                else if (iVar11 < iVar13) {
                                    iVar5 = iVar13 - (iVar11 + 0x1);
                                }
                                *piVar8 = iVar12 + iVar5;
                                break;
                            }
                            piVar4 = piVar4 + 0x1;
                            iVar13 += 0x1;
                            iVar5 += -0x1;
                        } while (iVar5 != 0x0);
                    }
                }
                else {
                    iVar13 = *piVar16;
                    iVar5 = 0x0;
                    if (param_2 == NULL) {
                        gc_assert(0x0,&_215,0x499,_703,0x0,0x0,0x0);
                    }
                    iVar11 = param_2[0x1] - iVar11;
                    if (iVar11 < 0x1) {
                        iVar11 = -iVar11;
                    }
                    iVar12 = *param_2;
                    if (iVar13 < iVar12) {
                        iVar5 = iVar12 - iVar13;
                    }
                    else if (iVar12 < iVar13) {
                        iVar5 = iVar13 - (iVar12 + 0x1);
                    }
                    *piVar8 = iVar11 + iVar5;
                }
            }
            else {
                iVar5 = piVar16[iVar5 + -0x1];
                iVar11 = 0x0;
                if (param_2 == NULL) {
                    gc_assert(0x0,&_215,0x499,_703,0x0,0x0,0x0);
                }
                iVar13 = param_2[0x1] - iVar13;
                if (iVar13 < 0x1) {
                    iVar13 = -iVar13;
                }
                iVar12 = *param_2;
                if (iVar5 < iVar12) {
                    iVar11 = iVar12 - iVar5;
                }
                else if (iVar12 < iVar5) {
                    iVar11 = iVar5 - (iVar12 + 0x1);
                }
                *piVar8 = iVar13 + iVar11;
            }
        }
        iVar14 += 0x1;
        piVar7 = piVar7 + 0x1;
        piVar17 = piVar17 + 0x5;
        piVar16 = piVar16 + 0x5;
        piVar8 = piVar8 + 0x1;
        if (0x6 < iVar14) {
            iVar14 = 0x0;
            do {
                bVar3 = false;
                if ((-0x1 < iVar14) && (iVar14 < 0x7)) {
                    bVar3 = true;
                }
                if (!bVar3) {
                    gc_assert(0x0,&_215,0x6b4,_1290,0x0,0x0,0x0);
                }
                if (*(int *)puVar20 != 0x12) {
                    iVar5 = *(int *)puVar10;
                    if (iVar5 != 0x0) {
                        if (iVar5 < 0x1) {
                            gc_assert(0x0,&_215,0x6c4,_1291,0x0,0x0,0x0);
                        }
                        iVar13 = 0x0;
                        if (0x0 < iVar5) {
                            if ((0x8 < iVar5) &&
                               (uVar21 = iVar5 - 0x1U >> 0x3, puVar6 = (undefined4 *)puVar19,
                               puVar2 = (undefined4 *)&stack0xffffff68, 0x0 < iVar5 + -0x8)) {
                                do {
                                    iVar13 += 0x8;
                                    puVar2[0x8] = *puVar6;
                                    puVar2[0x9] = puVar6[0x1];
                                    puVar2[0xa] = puVar6[0x2];
                                    puVar2[0xb] = puVar6[0x3];
                                    puVar2[0xc] = puVar6[0x4];
                                    puVar2[0xd] = puVar6[0x5];
                                    puVar2[0xe] = puVar6[0x6];
                                    puVar1 = puVar6 + 0x7;
                                    puVar6 = puVar6 + 0x8;
                                    puVar2[0xf] = *puVar1;
                                    uVar21 -= 0x1;
                                    puVar2 = puVar2 + 0x8;
                                } while (uVar21 != 0x0);
                            }
                            piVar7 = (int *)((int)puVar19 + iVar13 * 0x4);
                            piVar8 = local_78 + iVar13;
                            iVar11 = iVar5 - iVar13;
                            if (iVar13 < iVar5) {
                                do {
                                    iVar13 = *piVar7;
                                    piVar7 = piVar7 + 0x1;
                                    *piVar8 = iVar13;
                                    piVar8 = piVar8 + 0x1;
                                    iVar11 += -0x1;
                                } while (iVar11 != 0x0);
                            }
                        }
                        AISortRows(param_2[0x1],iVar5,local_78);
                        iVar13 = 0x0;
                        uVar15 = *(undefined4 *)(puVar18 + local_78[iVar5 + -0x1] * 0x4);
                        piVar7 = local_78;
                        while ((iVar13 < iVar5 &&
                               (iVar11 = AIMoveAcross(param_1,*(undefined4 *)
                                                               ((int)puVar19 + *piVar7 * 0x4),
                                                      *(undefined4 *)(puVar18 + *piVar7 * 0x4),
                                                      uVar15), iVar11 != 0x0))) {
                            piVar7 = piVar7 + 0x1;
                            iVar13 += 0x1;
                        }
                        if (iVar13 != iVar5) {
                            *(int *)puVar20 = 0x12;
                        }
                        if (*(int *)puVar20 < iVar9) {
                            iVar9 = *(int *)puVar20;
                            AIdistance._28_4_ = iVar14;
                        }
                    }
                }
                iVar14 += 0x1;
                puVar20 = (undefined1 *)((int)puVar20 + 0x4);
                puVar10 = (undefined1 *)((int)puVar10 + 0x4);
                puVar19 = (undefined1 *)((int)puVar19 + 0x14);
                puVar18 = puVar18 + 0x14;
            } while (iVar14 < 0x7);
            return;
        }
    } while( true );
}



undefined4 AICombo3a(int param_1)

{
    int iVar1;
    undefined4 uVar2;
    int *piVar3;
    undefined4 *puVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int *piVar8;
    int local_5c [0xe];
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x6ee,_1333,0x0,0x0,0x0);
    }
    if (AIdistance._28_4_ == 0x12) {
        uVar2 = 0x0;
    }
    else {
        iVar5 = AIdistance._28_4_ * 0x14;
        piVar3 = (int *)(AIrowCheck +
                        (*(int *)(AItotCheck + AIdistance._28_4_ * 0x4) + -0x3) * 0x4 + iVar5);
        local_5c[0] = *piVar3;
        piVar8 = local_5c;
        local_5c[1] = piVar3[0x1];
        local_5c[2] = piVar3[0x2];
        AISortRows(*(undefined4 *)(param_1 + 0x4),0x3,piVar8);
        iVar6 = *(int *)(AIcolCheck + local_5c[2] * 0x4 + iVar5);
        iVar7 = 0x0;
        do {
            iVar1 = *piVar8 * 0x4;
            if (iVar6 != *(int *)(AIcolCheck + iVar1 + iVar5)) {
                uVar2 = *(undefined4 *)(AIrowCheck + iVar1 + iVar5);
                if (param_1 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar4 = (undefined4 *)(param_1 + *(int *)(param_1 + 0xfc) * 0xc + 0x44);
                *puVar4 = 0x1;
                puVar4[0x1] = uVar2;
                puVar4[0x2] = 0x0;
                *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 0x1;
                *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 0x1;
                uVar2 = *(undefined4 *)(AIcolCheck + iVar1 + iVar5);
                if (param_1 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar4 = (undefined4 *)(param_1 + *(int *)(param_1 + 0xfc) * 0xc + 0x44);
                *puVar4 = 0x3;
                puVar4[0x1] = uVar2;
                puVar4[0x2] = iVar6;
                *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 0x1;
                *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 0x1;
            }
            iVar7 += 0x1;
            piVar8 = piVar8 + 0x1;
        } while (iVar7 < 0x3);
        uVar2 = 0xffffffff;
    }
    return uVar2;
}



undefined4 AICombo3b(int param_1)

{
    int iVar1;
    int iVar2;
    undefined4 *puVar3;
    undefined4 uVar4;
    undefined1 *puVar5;
    int iVar6;
    int *piVar7;
    int iVar8;
    int local_5c [0xe];
    
    puVar5 = AItotCheck;
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x717,_1382,0x0,0x0,0x0);
    }
    iVar8 = 0x7;
    iVar2 = 0x0;
    do {
        if (*(int *)puVar5 == 0x3) {
            iVar2 *= 0x14;
            local_5c[0] = *(int *)(AIrowCheck + iVar2);
            piVar7 = local_5c;
            local_5c[1] = *(int *)(AIrowCheck + iVar2 + 0x4);
            local_5c[2] = *(int *)(AIrowCheck + iVar2 + 0x8);
            AISortRows(*(undefined4 *)(param_1 + 0x4),0x3,piVar7);
            iVar6 = *(int *)(AIcolCheck + local_5c[2] * 0x4 + iVar2);
            iVar8 = 0x0;
            do {
                iVar1 = *piVar7 * 0x4;
                if (iVar6 != *(int *)(AIcolCheck + iVar1 + iVar2)) {
                    uVar4 = *(undefined4 *)(AIrowCheck + iVar1 + iVar2);
                    if (param_1 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar3 = (undefined4 *)(param_1 + *(int *)(param_1 + 0xfc) * 0xc + 0x44);
                    *puVar3 = 0x1;
                    puVar3[0x1] = uVar4;
                    puVar3[0x2] = 0x0;
                    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 0x1;
                    *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 0x1;
                    uVar4 = *(undefined4 *)(AIcolCheck + iVar1 + iVar2);
                    if (param_1 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar3 = (undefined4 *)(param_1 + *(int *)(param_1 + 0xfc) * 0xc + 0x44);
                    *puVar3 = 0x4;
                    puVar3[0x1] = uVar4;
                    puVar3[0x2] = iVar6;
                    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 0x1;
                    *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 0x1;
                }
                iVar8 += 0x1;
                piVar7 = piVar7 + 0x1;
            } while (iVar8 < 0x3);
            return 0xffffffff;
        }
        puVar5 = (undefined1 *)((int)puVar5 + 0x4);
        iVar2 += 0x1;
        iVar8 += -0x1;
    } while (iVar8 != 0x0);
    return 0x0;
}



undefined4 AICombo45(int *param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    int *piVar4;
    int *piVar5;
    int iVar6;
    int iVar7;
    undefined1 *puVar8;
    int iVar9;
    uint uVar10;
    int local_64 [0xd];
    
    puVar8 = AItotCheck;
    if (param_1 == NULL) {
        gc_assert(0x0,&_215,0x741,_1473,0x0,0x0,0x0);
    }
    iVar9 = 0x7;
    iVar7 = 0x0;
    do {
        if (param_2 == *(int *)puVar8) {
            iVar9 = 0x0;
            if (0x0 < param_2) {
                if (0x8 < param_2) {
                    uVar10 = param_2 - 0x1U >> 0x3;
                    piVar3 = (int *)(AIrowCheck + iVar7 * 0x14);
                    piVar4 = local_64;
                    if (0x0 < param_2 + -0x8) {
                        do {
                            iVar9 += 0x8;
                            *piVar4 = *piVar3;
                            piVar4[0x1] = piVar3[0x1];
                            piVar4[0x2] = piVar3[0x2];
                            piVar4[0x3] = piVar3[0x3];
                            piVar4[0x4] = piVar3[0x4];
                            piVar4[0x5] = piVar3[0x5];
                            piVar4[0x6] = piVar3[0x6];
                            piVar5 = piVar3 + 0x7;
                            piVar3 = piVar3 + 0x8;
                            piVar4[0x7] = *piVar5;
                            piVar4 = piVar4 + 0x8;
                            uVar10 -= 0x1;
                        } while (uVar10 != 0x0);
                    }
                }
                piVar4 = local_64 + iVar9;
                piVar3 = (int *)(AIrowCheck + iVar7 * 0x14 + iVar9 * 0x4);
                iVar1 = param_2 - iVar9;
                if (iVar9 < param_2) {
                    do {
                        iVar9 = *piVar3;
                        piVar3 = piVar3 + 0x1;
                        *piVar4 = iVar9;
                        piVar4 = piVar4 + 0x1;
                        iVar1 += -0x1;
                    } while (iVar1 != 0x0);
                }
            }
            AISortRows(param_1[0x1],param_2,local_64);
            iVar7 *= 0x14;
            iVar9 = *(int *)(AIcolCheck + iVar7 + 0x4);
            piVar3 = (int *)(AIcolCheck + iVar7);
            iVar1 = *piVar3;
            if (param_1 == NULL) {
                gc_assert(0x0,&_215,0x3d9,_560,0x0,0x0,0x0);
            }
            iVar1 = *param_1 - iVar1;
            if (iVar1 < 0x1) {
                iVar1 = -iVar1;
            }
            iVar9 = (*param_1 + 0x1) - iVar9;
            if (iVar9 < 0x1) {
                iVar9 = -iVar9;
            }
            if (iVar9 < iVar1) {
                iVar9 = 0x0;
            }
            else {
                iVar9 = -0x1;
            }
            if (iVar9 == 0x0) {
                iVar9 = *(int *)(AIcolCheck + iVar7 + 0x4);
            }
            else {
                iVar9 = *piVar3;
            }
            piVar4 = local_64;
            for (iVar1 = 0x0; iVar1 < param_2; iVar1 += 0x1) {
                iVar2 = *piVar4;
                if (iVar2 != 0x2) {
                    if (iVar9 != piVar3[iVar2]) {
                        iVar6 = *(int *)(AIrowCheck + iVar2 * 0x4 + iVar7);
                        if (param_1 == NULL) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        piVar5 = param_1 + param_1[0x3f] * 0x3 + 0x11;
                        *piVar5 = 0x1;
                        piVar5[0x1] = iVar6;
                        piVar5[0x2] = 0x0;
                        param_1[0x40] = param_1[0x40] + 0x1;
                        param_1[0x3f] = param_1[0x3f] + 0x1;
                        iVar2 = piVar3[iVar2];
                        if (param_1 == NULL) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        piVar5 = param_1 + param_1[0x3f] * 0x3 + 0x11;
                        *piVar5 = 0x4;
                        piVar5[0x1] = iVar2;
                        piVar5[0x2] = iVar9;
                        param_1[0x40] = param_1[0x40] + 0x1;
                        param_1[0x3f] = param_1[0x3f] + 0x1;
                    }
                }
                piVar4 = piVar4 + 0x1;
            }
            if (iVar9 != *(int *)(AIcolCheck + iVar7 + 0x8)) {
                iVar1 = *(int *)(AIrowCheck + iVar7 + 0x8);
                if (param_1 == NULL) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                piVar3 = param_1 + param_1[0x3f] * 0x3 + 0x11;
                *piVar3 = 0x1;
                piVar3[0x1] = iVar1;
                piVar3[0x2] = 0x0;
                param_1[0x40] = param_1[0x40] + 0x1;
                param_1[0x3f] = param_1[0x3f] + 0x1;
                iVar7 = *(int *)(AIcolCheck + iVar7 + 0x8);
                if (param_1 == NULL) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                piVar3 = param_1 + param_1[0x3f] * 0x3 + 0x11;
                *piVar3 = 0x4;
                piVar3[0x1] = iVar7;
                piVar3[0x2] = iVar9;
                param_1[0x40] = param_1[0x40] + 0x1;
                param_1[0x3f] = param_1[0x3f] + 0x1;
            }
            return 0xffffffff;
        }
        puVar8 = (undefined1 *)((int)puVar8 + 0x4);
        iVar7 += 0x1;
        iVar9 += -0x1;
    } while (iVar9 != 0x0);
    return 0x0;
}



undefined4 AIComboX(int param_1)

{
    int iVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    int iVar4;
    int iVar5;
    int *piVar6;
    int local_54 [0xd];
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x779,_1511,0x0,0x0,0x0);
    }
    if (AItotCheck._24_4_ == 0x3) {
        piVar6 = local_54;
        local_54[0] = AIrowCheck._120_4_;
        local_54[1] = AIrowCheck._124_4_;
        local_54[2] = AIrowCheck._128_4_;
        AISortRows(*(undefined4 *)(param_1 + 0x4),0x3,piVar6);
        iVar4 = 0x0;
        iVar5 = *(int *)(AIcolCheck + local_54[2] * 0x4 + 0x78);
        do {
            iVar1 = *piVar6 * 0x4;
            if (iVar5 != *(int *)(AIcolCheck + iVar1 + 0x78)) {
                uVar3 = *(undefined4 *)(AIrowCheck + iVar1 + 0x78);
                if (param_1 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar2 = (undefined4 *)(param_1 + *(int *)(param_1 + 0xfc) * 0xc + 0x44);
                *puVar2 = 0x1;
                puVar2[0x1] = uVar3;
                puVar2[0x2] = 0x0;
                *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 0x1;
                *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 0x1;
                uVar3 = *(undefined4 *)(AIcolCheck + iVar1 + 0x78);
                if (param_1 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar2 = (undefined4 *)(param_1 + *(int *)(param_1 + 0xfc) * 0xc + 0x44);
                *puVar2 = 0x4;
                puVar2[0x1] = uVar3;
                puVar2[0x2] = iVar5;
                *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 0x1;
                *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 0x1;
            }
            iVar4 += 0x1;
            piVar6 = piVar6 + 0x1;
        } while (iVar4 < 0x3);
        uVar3 = 0xffffffff;
    }
    else {
        uVar3 = 0x0;
    }
    return uVar3;
}



undefined4 AIFlashCheck(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    int unaff_r29;
    int iVar5;
    int iVar6;
    
    iVar5 = 0x0;
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x7a3,_1576,0x0,0x0,0x0);
    }
    iVar6 = 0x0;
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x7a4,_1577,0x0,0x0,0x0);
    }
    do {
        iVar4 = param_1 + iVar6 * 0x318;
        iVar2 = iVar5;
        for (iVar1 = iVar6; iVar5 = iVar2, iVar1 < 0x8; iVar1 += 0x1) {
            iVar5 = 0x6 - iVar2;
            piVar3 = (int *)(iVar4 + iVar2 * 0x2c);
            if (iVar2 < 0x6) {
                do {
                    if (*piVar3 == 0x7) break;
                    piVar3 = piVar3 + 0xb;
                    iVar2 += 0x1;
                    iVar5 += -0x1;
                } while (iVar5 != 0x0);
            }
            iVar5 = 0x0;
            unaff_r29 = iVar2;
            if (iVar2 != 0x6) break;
            iVar4 += 0x318;
            iVar2 = iVar5;
        }
        if (0x7 < iVar1) {
            *(undefined4 *)(param_2 + 0x34) = 0x0;
            return 0x0;
        }
        iVar4 = param_1 + iVar1 * 0x318;
        iVar2 = iVar4 + unaff_r29 * 0x2c;
        if (*(int *)(iVar2 + 0x318) == 0x7) {
            *(undefined4 *)(param_2 + 0x34) = 0xb;
            *(int *)(param_2 + 0x38) = unaff_r29;
            *(int *)(param_2 + 0x3c) = iVar1;
            iVar2 = iVar1 + 0x2;
            *(int *)(param_2 + 0x40) = iVar1 + 0x1;
            iVar1 = 0xc - iVar2;
            piVar3 = (int *)(param_1 + unaff_r29 * 0x2c + iVar2 * 0x318);
            if (iVar2 < 0xc) {
                do {
                    if (*piVar3 != 0x7) break;
                    *(int *)(param_2 + 0x40) = iVar2;
                    piVar3 = piVar3 + 0xc6;
                    iVar2 += 0x1;
                    iVar1 += -0x1;
                } while (iVar1 != 0x0);
            }
        }
        else {
            if (*(int *)(iVar2 + 0x2c) != 0x7) {
                *(undefined4 *)(param_2 + 0x34) = 0x0;
                return 0x0;
            }
            *(undefined4 *)(param_2 + 0x34) = 0x16;
            iVar2 = unaff_r29 + 0x1;
            *(int *)(param_2 + 0x38) = iVar1;
            *(int *)(param_2 + 0x3c) = unaff_r29;
            unaff_r29 += 0x2;
            *(int *)(param_2 + 0x40) = iVar2;
            iVar1 = 0x6 - unaff_r29;
            piVar3 = (int *)(iVar4 + unaff_r29 * 0x2c);
            if (unaff_r29 < 0x6) {
                do {
                    if (*piVar3 != 0x7) break;
                    *(int *)(param_2 + 0x40) = unaff_r29;
                    piVar3 = piVar3 + 0xb;
                    unaff_r29 += 0x1;
                    iVar1 += -0x1;
                } while (iVar1 != 0x0);
            }
        }
        iVar1 = *(int *)(param_2 + 0x40);
        if (0x1 < iVar1 - *(int *)(param_2 + 0x3c)) {
            return 0xffffffff;
        }
        if (*(int *)(param_2 + 0x34) == 0xb) {
            iVar5 = *(int *)(param_2 + 0x38) + 0x1;
            iVar6 = iVar1;
        }
        else if (*(int *)(param_2 + 0x34) == 0x16) {
            iVar6 = *(int *)(param_2 + 0x38);
            iVar5 = iVar1 + 0x1;
        }
    } while( true );
}



int AIScrollCheck(int param_1,int param_2,int param_3)

{
    char cVar1;
    int iVar2;
    int iVar3;
    char *pcVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    char cVar9;
    int *piVar10;
    int iVar11;
    int iVar12;
    
    iVar11 = 0x0;
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x80d,_1616,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x80e,_1617,0x0,0x0,0x0);
    }
    if (param_3 == 0x0) {
        gc_assert(0x0,&_215,0x80f,_1618,0x0,0x0,0x0);
    }
    iVar2 = *(int *)(param_2 + 0x20);
    if ((iVar2 == -0x1) && (iVar2 = 0xc, *(int *)(param_1 + 0x4ad4) != 0x0)) {
        iVar2 = 0xc;
    }
    iVar3 = *(int *)(param_2 + 0x2c);
    iVar8 = iVar3 * 0x2c;
    iVar7 = param_1 + iVar8;
    pcVar4 = (char *)(param_3 + iVar3);
    do {
        if (*(int *)(param_2 + 0x30) < iVar3) {
            return iVar11;
        }
        cVar9 = '\0';
        iVar5 = param_1;
        iVar6 = iVar7;
        iVar12 = iVar2;
        cVar1 = '\0';
        if (0x0 < iVar2) {
            do {
                cVar9 = cVar1;
                piVar10 = (int *)(iVar5 + iVar8);
                if (((*(int *)(iVar6 + 0x10) == 0x0) || (0x7 < piVar10[0x4])) &&
                   ((piVar10[0x4] != 0x0 || (*piVar10 == 0x0)))) break;
                cVar9 += '\x01';
                iVar11 += 0x1;
                iVar5 += 0x318;
                iVar6 += 0x318;
                iVar12 += -0x1;
                cVar1 = cVar9;
            } while (iVar12 != 0x0);
        }
        if (param_3 != 0x0) {
            *pcVar4 = cVar9;
        }
        iVar7 += 0x2c;
        iVar8 += 0x2c;
        iVar3 += 0x1;
        pcVar4 = pcVar4 + 0x1;
    } while( true );
}



undefined4 AIVolumeCheck(int param_1,int *param_2,int *param_3,int param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    undefined4 uVar5;
    int *piVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    char local_28;
    char local_27;
    char cStack_26;
    char cStack_25;
    char cStack_24;
    char local_23;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x846,_1815,0x0,0x0,0x0);
    }
    if (param_2 == NULL) {
        gc_assert(0x0,&_215,0x847,_1816,0x0,0x0,0x0);
    }
    if (param_3 == NULL) {
        gc_assert(0x0,&_215,0x848,_1817,0x0,0x0,0x0);
    }
    iVar1 = AIScrollCheck(param_1,param_3,&local_28);
    iVar3 = (int)local_28;
    if ((int)local_28 < (int)local_27) {
        iVar3 = (int)local_27;
    }
    if (iVar3 < cStack_26) {
        iVar3 = (int)cStack_26;
    }
    if (iVar3 < cStack_25) {
        iVar3 = (int)cStack_25;
    }
    if (iVar3 < cStack_24) {
        iVar3 = (int)cStack_24;
    }
    if (iVar3 < local_23) {
        iVar3 = (int)local_23;
    }
    if ((*(byte *)(param_3 + 0x5) & 0x2) != 0x0) {
        iVar2 = param_3[0x8];
        if (iVar2 == -0x1) {
            iVar2 = iVar3;
            if (*param_2 == 0x3) {
                iVar2 = 0xc;
            }
            if ((iVar1 < 0x2a) && (iVar2 < 0x9)) {
                if (param_3 == NULL) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                piVar6 = param_3 + param_3[0x3f] * 0x3 + 0x11;
                *piVar6 = 0xc;
                piVar6[0x1] = 0x0;
                iVar2 += 0x2;
                piVar6[0x2] = 0x0;
                param_3[0x40] = param_3[0x40] + 0x1;
                param_3[0x3f] = param_3[0x3f] + 0x1;
                if (iVar1 + 0x9 < 0x2a) {
                    for (; iVar2 < 0x9; iVar2 += 0x3) {
                        if (param_3 == NULL) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        piVar6 = param_3 + param_3[0x3f] * 0x3 + 0x11;
                        *piVar6 = 0xc;
                        piVar6[0x1] = 0x0;
                        piVar6[0x2] = 0x0;
                        param_3[0x40] = param_3[0x40] + 0x1;
                        param_3[0x3f] = param_3[0x3f] + 0x1;
                    }
                }
                iVar3 = AnimationRandom(0x4);
                if (param_3 == NULL) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                piVar6 = param_3 + param_3[0x3f] * 0x3 + 0x11;
                *piVar6 = 0x1;
                piVar6[0x1] = iVar3 + 0x2;
                piVar6[0x2] = 0x0;
                param_3[0x40] = param_3[0x40] + 0x1;
                param_3[0x3f] = param_3[0x3f] + 0x1;
                if (param_3 == NULL) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                piVar6 = param_3 + param_3[0x3f] * 0x3 + 0x11;
                *piVar6 = 0xa;
                piVar6[0x1] = 0x0;
                piVar6[0x2] = 0x0;
                param_3[0x40] = param_3[0x40] + 0x1;
                param_3[0x3f] = param_3[0x3f] + 0x1;
                return 0xffffffff;
            }
        }
        else {
            iVar1 = 0xb - iVar2;
            iVar9 = param_1 + 0x2208;
            iVar7 = 0xb;
            if (iVar2 < 0xb) {
                do {
                    if ((*(int *)(iVar9 + 0x68) != 0x0) || (*(int *)(iVar9 + 0x94) != 0x0)) break;
                    iVar9 += -0x318;
                    iVar7 += -0x1;
                    iVar1 += -0x1;
                } while (iVar1 != 0x0);
            }
            if (*param_2 == 0x3) {
                iVar7 = 0xc;
            }
            if ((iVar3 < 0x9) && (iVar7 < 0x8)) {
                if (param_3 == NULL) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                piVar6 = param_3 + param_3[0x3f] * 0x3 + 0x11;
                *piVar6 = 0xc;
                piVar6[0x1] = 0x0;
                piVar6[0x2] = 0x0;
                param_3[0x40] = param_3[0x40] + 0x1;
                param_3[0x3f] = param_3[0x3f] + 0x1;
                iVar3 = param_3[0x1];
                if (param_3 == NULL) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                piVar6 = param_3 + param_3[0x3f] * 0x3 + 0x11;
                *piVar6 = 0x1;
                piVar6[0x1] = iVar3 + -0x1;
                piVar6[0x2] = 0x0;
                param_3[0x40] = param_3[0x40] + 0x1;
                param_3[0x3f] = param_3[0x3f] + 0x1;
                if (param_3 == NULL) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                piVar6 = param_3 + param_3[0x3f] * 0x3 + 0x11;
                *piVar6 = 0xa;
                piVar6[0x1] = 0x0;
                piVar6[0x2] = 0x0;
                param_3[0x40] = param_3[0x40] + 0x1;
                param_3[0x3f] = param_3[0x3f] + 0x1;
                return 0xffffffff;
            }
        }
    }
    if (param_4 != 0x0) {
        return 0x0;
    }
    iVar1 = -0x1;
    if (local_28 == iVar3) {
        iVar1 = 0x0;
LAB_000263bc:
        if (local_27 == iVar3) {
            iVar1 = 0x1;
        }
        else if (iVar1 != -0x1) goto LAB_00026458;
        if (cStack_26 == iVar3) {
            iVar1 = 0x2;
        }
        else if (iVar1 != -0x1) goto LAB_00026458;
        if (cStack_25 == iVar3) {
            iVar1 = 0x3;
        }
        else if (iVar1 != -0x1) goto LAB_00026458;
        if (cStack_24 == iVar3) {
            iVar1 = 0x4;
        }
        else if (iVar1 != -0x1) goto LAB_00026458;
        if (local_23 == iVar3) {
            iVar1 = 0x5;
        }
    }
    else if (true) goto LAB_000263bc;
LAB_00026458:
    iVar2 = -0x1;
    if (local_23 == iVar3) {
        iVar2 = 0x5;
    }
    else if (false) goto LAB_0002651c;
    if (cStack_24 == iVar3) {
        iVar2 = 0x4;
    }
    else if (iVar2 != -0x1) goto LAB_0002651c;
    if (cStack_25 == iVar3) {
        iVar2 = 0x3;
    }
    else if (iVar2 != -0x1) goto LAB_0002651c;
    if (cStack_26 == iVar3) {
        iVar2 = 0x2;
    }
    else if (iVar2 != -0x1) goto LAB_0002651c;
    if (local_27 == iVar3) {
        iVar2 = 0x1;
    }
    else if (iVar2 != -0x1) goto LAB_0002651c;
    if (local_28 == iVar3) {
        iVar2 = 0x0;
    }
LAB_0002651c:
    iVar9 = iVar3 + -0x1;
    if (iVar9 == param_3[0x8]) {
        iVar9 = iVar3 + -0x2;
    }
    uVar4 = AnimationRandom(0x73);
    if (uVar4 == (((int)uVar4 >> 0x1) + (uint)((int)uVar4 < 0x0 && (uVar4 & 0x1) != 0x0)) * 0x2) {
        iVar7 = *param_3;
        iVar3 = param_1 + iVar9 * 0x318 + iVar7 * 0x2c;
        iVar8 = iVar7;
        if ((*(int *)(iVar3 + 0x10) == 0x0) && (iVar8 = -0x1, *(int *)(iVar3 + 0x3c) != 0x0)) {
            iVar8 = iVar7 + 0x1;
        }
    }
    else {
        iVar7 = *param_3;
        iVar3 = param_1 + iVar9 * 0x318 + iVar7 * 0x2c;
        if (*(int *)(iVar3 + 0x3c) == 0x0) {
            iVar8 = -0x1;
            if (*(int *)(iVar3 + 0x10) != 0x0) {
                iVar8 = iVar7;
            }
        }
        else {
            iVar8 = iVar7 + 0x1;
        }
    }
    if ((iVar8 == -0x1) && (iVar8 = iVar1, iVar1 != iVar2)) {
        if (param_3 == NULL) {
            gc_assert(0x0,&_215,0x3d9,_560,0x0,0x0,0x0);
        }
        iVar3 = *param_3 - iVar1;
        if (iVar3 < 0x1) {
            iVar3 = -iVar3;
        }
        iVar7 = (*param_3 + 0x1) - iVar2;
        if (iVar7 < 0x1) {
            iVar7 = -iVar7;
        }
        if (iVar7 < iVar3) {
            iVar3 = 0x0;
        }
        else {
            iVar3 = -0x1;
        }
        iVar8 = iVar2;
        if (iVar3 != 0x0) {
            iVar8 = iVar1;
        }
    }
    iVar2 = iVar8 * 0x2c;
    iVar1 = iVar9 + -0x1;
    iVar7 = param_1 + iVar2 + iVar9 * 0x318;
    iVar3 = iVar9;
    if (0x1 < iVar9) {
        do {
            if (*(int *)(iVar7 + 0x10) != *(int *)(iVar7 + -0x308)) {
                if ((iVar8 != 0x0) && (*(int *)(param_1 + iVar3 * 0x318 + iVar2 + -0x334) == 0x0)) {
                    if (param_3 == NULL) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    piVar6 = param_3 + param_3[0x3f] * 0x3 + 0x11;
                    *piVar6 = 0x1;
                    piVar6[0x1] = iVar3 + -0x1;
                    piVar6[0x2] = 0x0;
                    param_3[0x40] = param_3[0x40] + 0x1;
                    param_3[0x3f] = param_3[0x3f] + 0x1;
                    if (param_3 == NULL) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    piVar6 = param_3 + param_3[0x3f] * 0x3 + 0x11;
                    *piVar6 = 0x3;
                    piVar6[0x1] = iVar8;
                    piVar6[0x2] = iVar8 + -0x1;
                    param_3[0x40] = param_3[0x40] + 0x1;
                    param_3[0x3f] = param_3[0x3f] + 0x1;
                    return 0xffffffff;
                }
                if ((iVar8 != 0x5) && (*(int *)(param_1 + iVar3 * 0x318 + iVar2 + -0x2dc) == 0x0)) {
                    if (param_3 == NULL) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    piVar6 = param_3 + param_3[0x3f] * 0x3 + 0x11;
                    *piVar6 = 0x1;
                    piVar6[0x1] = iVar3 + -0x1;
                    piVar6[0x2] = 0x0;
                    param_3[0x40] = param_3[0x40] + 0x1;
                    param_3[0x3f] = param_3[0x3f] + 0x1;
                    if (param_3 == NULL) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    piVar6 = param_3 + param_3[0x3f] * 0x3 + 0x11;
                    *piVar6 = 0x3;
                    piVar6[0x1] = iVar8;
                    piVar6[0x2] = iVar8 + 0x1;
                    param_3[0x40] = param_3[0x40] + 0x1;
                    param_3[0x3f] = param_3[0x3f] + 0x1;
                    return 0xffffffff;
                }
                break;
            }
            iVar7 += -0x318;
            iVar3 += -0x1;
            iVar1 += -0x1;
        } while (iVar1 != 0x0);
    }
    iVar2 = param_1 + iVar9 * 0x318 + iVar2;
    if ((((*(int *)(iVar2 + -0x1c) == 0x9) || (*(int *)(iVar2 + 0x3c) == 0x9)) || (iVar9 == 0x0)) ||
       (iVar3 = AILowerRow(param_1,param_3,iVar9,iVar8), iVar3 == 0x0)) {
        uVar5 = 0x0;
    }
    else {
        uVar5 = 0xffffffff;
    }
    return uVar5;
}



undefined4 AIChainVert1(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    int *piVar9;
    undefined4 *puVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int *piVar15;
    int iVar16;
    int *piVar17;
    int *piVar18;
    undefined4 uVar19;
    int aiStack_60 [0x4];
    int *local_50;
    
    iVar14 = 0x0;
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x92d,_1982,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x92e,_1983,0x0,0x0,0x0);
    }
    if ((*(byte *)(param_2 + 0x14) & 0x4) != 0x0) {
        iVar14 = -0x1;
    }
    if ((*(int *)(param_2 + 0x3c) != 0x0) && (*(int *)(param_2 + 0x40) < 0xa)) {
        bzero(AIrowCheck,0x8c);
        bzero(AIcolCheck,0x8c);
        bzero(AItotCheck,0x1c);
        iVar2 = *(int *)(param_2 + 0x38);
        if (iVar2 == *(int *)(param_2 + 0x2c)) {
            iVar13 = iVar2;
            iVar2 = iVar2 + 0x2;
        }
        else if (iVar2 == *(int *)(param_2 + 0x30)) {
            iVar13 = iVar2 + -0x2;
        }
        else {
            iVar13 = iVar2 + -0x1;
            iVar2 += 0x1;
        }
        local_50 = aiStack_60;
        iVar11 = iVar13 * 0x2c;
        iVar12 = 0x0;
        do {
            iVar3 = *(int *)(param_2 + 0x3c);
            iVar4 = iVar3 + -0x1;
            iVar7 = iVar4 * 0x318 + (iVar13 + iVar12) * 0x2c;
            iVar1 = *(int *)(param_1 + iVar7 + 0x10);
            if (((iVar1 != 0x0) && (iVar1 < 0x8)) && (*(int *)(param_1 + iVar7) == 0x0)) {
                piVar17 = (int *)(AItotCheck + (iVar1 + -0x1) * 0x4);
                iVar7 = 0x0;
                if (*piVar17 == 0x0) {
                    iVar8 = (iVar1 + -0x1) * 0x14;
                    piVar15 = (int *)(AIrowCheck + iVar8);
                    *piVar15 = iVar4;
                    iVar3 += -0x2;
                    *(int *)(AIcolCheck + *piVar17 * 0x4 + iVar8) = iVar13 + iVar12;
                    *piVar17 = *piVar17 + 0x1;
                    if (-0x1 < iVar3) {
                        piVar18 = (int *)(param_1 + iVar3 * 0x318 + iVar11);
                        for (iVar4 = iVar13; iVar4 <= iVar2; iVar4 += 0x1) {
                            if (((iVar1 == piVar18[0x4]) && (*piVar18 == 0x0)) &&
                               (iVar16 = AIMoveAcross(param_1,iVar3,iVar4,
                                                      *(undefined4 *)(param_2 + 0x38)),
                               iVar16 != 0x0)) {
                                piVar15[*piVar17] = iVar3;
                                *(int *)(AIcolCheck + *piVar17 * 0x4 + iVar8) = iVar4;
                                *piVar17 = *piVar17 + 0x1;
                                break;
                            }
                            piVar18 = piVar18 + 0xb;
                        }
                    }
                    iVar4 = *(int *)(param_2 + 0x40);
                    iVar16 = iVar4 + 0x1;
                    piVar18 = (int *)(param_1 + iVar16 * 0x318 + iVar11);
                    for (iVar3 = iVar13; iVar3 <= iVar2; iVar3 += 0x1) {
                        if (((iVar1 == piVar18[0x4]) && (*piVar18 == 0x0)) &&
                           (iVar5 = AIMoveAcross(param_1,iVar16,iVar3,
                                                 *(undefined4 *)(param_2 + 0x38)), iVar5 != 0x0)) {
                            iVar7 = 0x1;
                            piVar15[*piVar17] = iVar16;
                            *(int *)(AIcolCheck + *piVar17 * 0x4 + iVar8) = iVar3;
                            *piVar17 = *piVar17 + 0x1;
                            break;
                        }
                        piVar18 = piVar18 + 0xb;
                    }
                    if ((0x1 < *piVar17) && (iVar3 <= iVar2)) {
                        piVar18 = (int *)(param_1 + (iVar4 + 0x2) * 0x318 + iVar11);
                        for (iVar3 = iVar13; iVar3 <= iVar2; iVar3 += 0x1) {
                            if (((iVar1 == piVar18[0x4]) && (*piVar18 == 0x0)) &&
                               (iVar16 = AIMoveAcross(param_1,iVar4 + 0x2,iVar3,
                                                      *(undefined4 *)(param_2 + 0x38)),
                               iVar16 != 0x0)) {
                                iVar7 += 0x1;
                                piVar15[*piVar17] = iVar4 + 0x2;
                                *(int *)(AIcolCheck + *piVar17 * 0x4 + iVar8) = iVar3;
                                *piVar17 = *piVar17 + 0x1;
                                break;
                            }
                            piVar18 = piVar18 + 0xb;
                        }
                        if ((iVar14 != 0x0) || (*piVar17 != 0x2)) {
                            if (iVar14 != 0x0) {
                                if ((*piVar17 == 0x2) && (iVar7 == 0x2)) {
                                    iVar14 = 0xde;
                                }
                                else {
                                    iVar14 = 0x6f;
                                }
                            }
                            if (0x2 < *piVar17) {
                                uVar6 = AnimationRandom(0x204);
                                if (uVar6 == (((int)uVar6 >> 0x1) +
                                             (uint)((int)uVar6 < 0x0 && (uVar6 & 0x1) != 0x0)) * 0x2
                                   ) {
                                    *piVar17 = 0x3;
                                }
                                if ((iVar14 != 0x0) &&
                                   (uVar6 = AnimationRandom(0x204),
                                   uVar6 == (((int)uVar6 >> 0x1) +
                                            (uint)((int)uVar6 < 0x0 && (uVar6 & 0x1) != 0x0)) * 0x2)
                                   ) {
                                    iVar14 = 0x0;
                                }
                            }
                            piVar18 = piVar15;
                            piVar9 = local_50;
                            for (iVar3 = 0x0; iVar3 < *piVar17; iVar3 += 0x1) {
                                iVar4 = *piVar18;
                                piVar18 = piVar18 + 0x1;
                                *piVar9 = iVar4;
                                piVar9 = piVar9 + 0x1;
                            }
                            AISortRows(*(undefined4 *)(param_2 + 0x4),*piVar17,aiStack_60);
                            iVar3 = *(int *)(param_2 + 0x38);
                            piVar18 = local_50;
                            for (iVar4 = 0x0; iVar4 < *piVar17; iVar4 += 0x1) {
                                iVar7 = *piVar18 * 0x4;
                                if (iVar3 != *(int *)(AIcolCheck + iVar7 + iVar8)) {
                                    iVar16 = piVar15[*piVar18];
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar10 = (undefined4 *)
                                              (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar10 = 0x1;
                                    puVar10[0x1] = iVar16;
                                    puVar10[0x2] = 0x0;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    uVar19 = *(undefined4 *)(AIcolCheck + iVar7 + iVar8);
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar10 = (undefined4 *)
                                              (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar10 = 0x4;
                                    puVar10[0x1] = uVar19;
                                    puVar10[0x2] = iVar3;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                }
                                piVar18 = piVar18 + 0x1;
                            }
                            if ((iVar14 != 0x0) &&
                               (iVar1 = AIChainVert3(param_1,param_2,iVar1,iVar14), iVar1 != 0x0)) {
                                *(undefined4 *)(param_2 + 0x1c) = 0x1;
                                return 0xffffffff;
                            }
                            if (0x2 < *piVar17) {
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar10 = (undefined4 *)
                                          (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar10 = 0xb;
                                puVar10[0x1] = 0x0;
                                puVar10[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                *(undefined4 *)(param_2 + 0x1c) = 0x1;
                                return 0xffffffff;
                            }
                            iVar1 = *(int *)(param_2 + 0x100);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x21d,_250,0x0,0x0,0x0);
                            }
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) - iVar1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) - iVar1;
                        }
                    }
                }
            }
            iVar12 += 0x1;
        } while (iVar12 < 0x3);
    }
    return 0x0;
}



undefined4 AIChainVert2(int param_1,int param_2)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    undefined4 *puVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int *piVar8;
    int *piVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    undefined4 uVar13;
    int *piVar14;
    int iVar15;
    int *piVar16;
    int *piVar17;
    int local_68 [0x4];
    undefined4 local_58;
    int local_50;
    int local_4c;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0xa01,_2100,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0xa02,_2101,0x0,0x0,0x0);
    }
    bzero(AIrowCheck,0x8c);
    bzero(AIcolCheck,0x8c);
    bzero(AItotCheck,0x1c);
    local_50 = *(int *)(param_2 + 0x2c);
    iVar15 = 0x1;
    iVar10 = *(int *)(param_2 + 0x30);
    local_4c = local_50 * 0x2c;
    do {
        iVar5 = *(int *)(param_2 + 0x3c);
        iVar6 = (iVar15 + -0x1) * 0x14;
        iVar3 = *(int *)(param_2 + 0x38) + -0x1;
        iVar7 = param_1 + iVar5 * 0x318;
        iVar11 = 0x0;
        piVar9 = (int *)(AIrowCheck + iVar6);
        piVar8 = (int *)(AIcolCheck + iVar6);
        piVar16 = (int *)(iVar7 + iVar3 * 0x2c);
        bVar1 = false;
        iVar12 = 0x0;
        piVar17 = piVar9;
        piVar14 = piVar8;
        for (; *(int *)(param_2 + 0x2c) <= iVar3; iVar3 += -0x1) {
            if (((iVar15 == piVar16[0x4]) && (*piVar16 == 0x0)) &&
               (iVar2 = AIMoveAcross(param_1,iVar5,iVar3,*(int *)(param_2 + 0x38) + -0x1),
               iVar2 != 0x0)) {
                *piVar17 = iVar5;
                iVar11 += 0x1;
                *piVar14 = iVar3;
                piVar17 = piVar17 + 0x1;
                piVar14 = piVar14 + 0x1;
                if (0x1 < iVar11) break;
            }
            piVar16 = piVar16 + -0xb;
        }
        iVar3 = *(int *)(param_2 + 0x38) + 0x1;
        piVar16 = (int *)(iVar7 + iVar3 * 0x2c);
        piVar17 = piVar9;
        piVar14 = piVar8;
        for (; iVar3 <= *(int *)(param_2 + 0x30); iVar3 += 0x1) {
            if (((iVar15 == piVar16[0x4]) && (*piVar16 == 0x0)) &&
               (iVar7 = AIMoveAcross(param_1,iVar5,iVar3,*(int *)(param_2 + 0x38) + 0x1),
               iVar7 != 0x0)) {
                piVar17[0x2] = iVar5;
                iVar12 += 0x1;
                piVar14[0x2] = iVar3;
                piVar17 = piVar17 + 0x1;
                piVar14 = piVar14 + 0x1;
                if (0x1 < iVar12) break;
            }
            piVar16 = piVar16 + 0xb;
        }
        if (0x1 < iVar11 + iVar12) {
            iVar5 = *(int *)(param_2 + 0x40) + 0x1;
            piVar17 = (int *)(param_1 + iVar5 * 0x318 + local_4c);
            for (iVar3 = local_50; iVar3 <= iVar10; iVar3 += 0x1) {
                if (((iVar15 == piVar17[0x4]) && (*piVar17 == 0x0)) &&
                   (iVar7 = AIMoveAcross(param_1,iVar5,iVar3,*(undefined4 *)(param_2 + 0x38)),
                   iVar7 != 0x0)) {
                    iVar7 = *(int *)(param_2 + 0x38) - iVar3;
                    if (iVar7 < 0x1) {
                        iVar7 = -(*(int *)(param_2 + 0x38) + iVar3);
                    }
                    if (iVar7 < 0x4) {
                        *(int *)(AIrowCheck + iVar6 + 0x10) = iVar5;
                        bVar1 = true;
                        *(int *)(AIcolCheck + iVar6 + 0x10) = iVar3;
                        break;
                    }
                }
                piVar17 = piVar17 + 0xb;
            }
            if (bVar1) {
                if (iVar11 == 0x2) {
                    local_68[0] = *piVar9;
                    local_68[1] = *(int *)(AIrowCheck + iVar6 + 0x4);
                    local_68[2] = 0xc;
                    local_68[3] = 0xc;
                }
                else if (iVar12 == 0x2) {
                    local_68[0] = 0xc;
                    local_68[1] = 0xc;
                    local_68[2] = *(int *)(AIrowCheck + iVar6 + 0x8);
                    local_68[3] = *(int *)(AIrowCheck + iVar6 + 0xc);
                }
                else if ((iVar11 == 0x1) || (iVar12 == 0x1)) {
                    local_68[0] = *piVar9;
                    local_68[1] = 0xc;
                    local_68[2] = *(int *)(AIrowCheck + iVar6 + 0x8);
                    local_68[3] = 0xc;
                }
                local_58 = *(undefined4 *)(AIrowCheck + iVar6 + 0x10);
                AISortRows(*(undefined4 *)(param_2 + 0x4),0x5,local_68);
                iVar10 = 0x0;
                piVar17 = local_68;
                do {
                    iVar15 = *piVar17;
                    uVar13 = 0x3;
                    if (iVar15 == 0x2) {
                        iVar3 = *(int *)(param_2 + 0x38) + 0x1;
                    }
                    else if (iVar15 < 0x2) {
                        if (iVar15 == 0x0) {
                            iVar3 = *(int *)(param_2 + 0x38) + -0x1;
                        }
                        else if (-0x1 < iVar15) {
                            iVar3 = *(int *)(param_2 + 0x38) + -0x2;
                        }
                    }
                    else if (iVar15 == 0x4) {
                        iVar3 = *(int *)(param_2 + 0x38);
                        uVar13 = 0x4;
                    }
                    else if (iVar15 < 0x4) {
                        iVar3 = *(int *)(param_2 + 0x38) + 0x2;
                    }
                    if (iVar3 != piVar8[iVar15]) {
                        iVar5 = piVar9[iVar15];
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar4 = 0x1;
                        puVar4[0x1] = iVar5;
                        puVar4[0x2] = 0x0;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        iVar15 = piVar8[iVar15];
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar4 = uVar13;
                        puVar4[0x1] = iVar15;
                        puVar4[0x2] = iVar3;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    }
                    iVar10 += 0x1;
                    piVar17 = piVar17 + 0x1;
                } while (iVar10 < 0x3);
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar4 = 0xb;
                puVar4[0x1] = 0x0;
                puVar4[0x2] = 0x0;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                *(undefined4 *)(param_2 + 0x1c) = 0x1;
                return 0xffffffff;
            }
        }
        iVar15 += 0x1;
        if (0x7 < iVar15) {
            return 0x0;
        }
    } while( true );
}



undefined4 AIChainVert3(int param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    undefined4 *puVar4;
    undefined4 uVar5;
    int iVar6;
    int iVar7;
    int *piVar8;
    int iVar9;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0xaa4,_2175,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0xaa5,_2176,0x0,0x0,0x0);
    }
    if (param_4 == 0xde) {
        iVar6 = *(int *)(param_2 + 0x3c);
    }
    else {
        iVar6 = *(int *)(param_2 + 0x3c) + 0x1;
    }
    iVar1 = *(int *)(param_2 + 0x40) + -0x1;
    iVar9 = param_1 + iVar1 * 0x318;
    do {
        if (iVar1 < iVar6) {
            return 0x0;
        }
        iVar2 = *(int *)(param_2 + 0x38) + -0x1;
        piVar8 = (int *)(iVar9 + iVar2 * 0x2c);
        while ((iVar7 = -0x1, *(int *)(param_2 + 0x2c) <= iVar2 &&
               (((param_3 != piVar8[0x4] || (*piVar8 != 0x0)) ||
                (iVar3 = AIMoveAcross(param_1,iVar1,iVar2,*(undefined4 *)(param_2 + 0x38)),
                iVar7 = iVar2, iVar3 == 0x0))))) {
            piVar8 = piVar8 + -0xb;
            iVar2 += -0x1;
        }
        iVar2 = *(int *)(param_2 + 0x38) + 0x1;
        piVar8 = (int *)(iVar9 + iVar2 * 0x2c);
        for (; iVar2 <= *(int *)(param_2 + 0x30); iVar2 += 0x1) {
            if (((param_3 == piVar8[0x4]) && (*piVar8 == 0x0)) &&
               (iVar3 = AIMoveAcross(param_1,iVar1,iVar2,*(undefined4 *)(param_2 + 0x38)),
               iVar3 != 0x0)) {
                if ((iVar7 != -0x1) &&
                   (*(int *)(param_2 + 0x38) - iVar7 < iVar2 - *(int *)(param_2 + 0x38))) {
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar4 = 0x1;
                    puVar4[0x1] = iVar1;
                    puVar4[0x2] = 0x0;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    uVar5 = *(undefined4 *)(param_2 + 0x38);
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar4 = 0x5;
                    puVar4[0x1] = iVar7;
                    puVar4[0x2] = uVar5;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    return 0xffffffff;
                }
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar4 = 0x1;
                puVar4[0x1] = iVar1;
                puVar4[0x2] = 0x0;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                uVar5 = *(undefined4 *)(param_2 + 0x38);
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar4 = 0x5;
                puVar4[0x1] = iVar2;
                puVar4[0x2] = uVar5;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                return 0xffffffff;
            }
            piVar8 = piVar8 + 0xb;
        }
        if (iVar7 != -0x1) {
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
            }
            puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
            *puVar4 = 0x1;
            puVar4[0x1] = iVar1;
            puVar4[0x2] = 0x0;
            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            uVar5 = *(undefined4 *)(param_2 + 0x38);
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
            }
            puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
            *puVar4 = 0x5;
            puVar4[0x1] = iVar7;
            puVar4[0x2] = uVar5;
            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            return 0xffffffff;
        }
        iVar9 += -0x318;
        iVar1 += -0x1;
    } while( true );
}



undefined4 AIChainVert4(int param_1,int param_2)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined4 *puVar6;
    int iVar7;
    int *piVar8;
    int *piVar9;
    undefined4 uVar10;
    int *piVar11;
    int iVar12;
    int *piVar13;
    int iVar14;
    int iVar15;
    int *piVar16;
    int *piVar17;
    int iVar18;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0xaf4,_2465,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0xaf5,_2466,0x0,0x0,0x0);
    }
    iVar2 = *(int *)(param_2 + 0x38);
    if ((iVar2 != *(int *)(param_2 + 0x2c)) && (iVar2 != *(int *)(param_2 + 0x30))) {
        bVar1 = false;
        if ((0x0 < iVar2) && (iVar2 < 0x12)) {
            bVar1 = true;
        }
        if (!bVar1) {
            gc_assert(0x0,&_215,0xafb,_2467,0x0,0x0,0x0);
        }
        bzero(AIrowCheck,0x8c);
        bzero(AIcolCheck,0x8c);
        bzero(AItotCheck,0x1c);
        iVar2 = 0x0;
        do {
            iVar5 = *(int *)(param_2 + 0x40) + 0x1;
            iVar7 = *(int *)(param_2 + 0x38) + iVar2 + -0x1;
            iVar3 = iVar5 * 0x318 + iVar7 * 0x2c;
            iVar12 = *(int *)(param_1 + iVar3 + 0x10);
            if (((iVar12 != 0x0) && (iVar12 < 0x8)) && (*(int *)(param_1 + iVar3) == 0x0)) {
                piVar11 = (int *)(AItotCheck + (iVar12 + -0x1) * 0x4);
                if (*piVar11 == 0x0) {
                    iVar18 = (iVar12 + -0x1) * 0x14;
                    piVar17 = (int *)(AIrowCheck + iVar18);
                    *piVar17 = iVar5;
                    iVar15 = 0x0;
                    piVar16 = (int *)(AIcolCheck + iVar18);
                    piVar16[*piVar11] = iVar7;
                    iVar14 = 0x0;
                    *piVar11 = *piVar11 + 0x1;
                    iVar5 = *(int *)(param_2 + 0x3c) + 0x1;
                    iVar3 = *(int *)(param_2 + 0x38) + -0x1;
                    iVar7 = param_1 + iVar5 * 0x318;
                    piVar8 = (int *)(iVar7 + iVar3 * 0x2c);
                    piVar13 = piVar16;
                    piVar9 = piVar17;
                    for (; *(int *)(param_2 + 0x2c) <= iVar3; iVar3 += -0x1) {
                        if (((iVar12 == piVar8[0x4]) && (*piVar8 == 0x0)) &&
                           (iVar4 = AIMoveAcross(param_1,iVar5,iVar3,*(int *)(param_2 + 0x38) + -0x1
                                                ), iVar4 != 0x0)) {
                            piVar9 = piVar9 + 0x1;
                            *piVar9 = iVar5;
                            iVar15 += 0x1;
                            piVar13 = piVar13 + 0x1;
                            *piVar13 = iVar3;
                            *piVar11 = *piVar11 + 0x1;
                        }
                        piVar8 = piVar8 + -0xb;
                    }
                    iVar3 = *(int *)(param_2 + 0x38) + 0x1;
                    piVar8 = (int *)(iVar7 + iVar3 * 0x2c);
                    piVar9 = piVar17;
                    piVar13 = piVar16;
                    for (; iVar3 <= *(int *)(param_2 + 0x30); iVar3 += 0x1) {
                        if (((iVar12 == piVar8[0x4]) && (*piVar8 == 0x0)) &&
                           (iVar4 = AIMoveAcross(param_1,iVar5,iVar3,*(int *)(param_2 + 0x38) + 0x1)
                           , iVar4 != 0x0)) {
                            piVar9[0x3] = iVar5;
                            piVar9 = piVar9 + 0x1;
                            iVar14 += 0x1;
                            piVar13[0x3] = iVar3;
                            piVar13 = piVar13 + 0x1;
                            *piVar11 = *piVar11 + 0x1;
                        }
                        piVar8 = piVar8 + 0xb;
                    }
                    if (*piVar11 != 0x1) {
                        if ((iVar15 == 0x2) &&
                           (*(int *)(iVar7 + *(int *)(param_2 + 0x38) * 0x2c + 0x3c) != 0x0)) {
                            iVar2 = *piVar17;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x1;
                            puVar6[0x1] = iVar2;
                            puVar6[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar10 = *(undefined4 *)(param_2 + 0x38);
                            iVar2 = *piVar16;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x3;
                            puVar6[0x1] = iVar2;
                            puVar6[0x2] = uVar10;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar10 = *(undefined4 *)(AIrowCheck + iVar18 + 0x4);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x1;
                            puVar6[0x1] = uVar10;
                            puVar6[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar2 = *(int *)(param_2 + 0x38);
                            uVar10 = *(undefined4 *)(AIcolCheck + iVar18 + 0x4);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x3;
                            puVar6[0x1] = uVar10;
                            puVar6[0x2] = iVar2 + -0x1;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar10 = *(undefined4 *)(AIrowCheck + iVar18 + 0x8);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x1;
                            puVar6[0x1] = uVar10;
                            puVar6[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar2 = *(int *)(param_2 + 0x38);
                            uVar10 = *(undefined4 *)(AIcolCheck + iVar18 + 0x8);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x3;
                            puVar6[0x1] = uVar10;
                            puVar6[0x2] = iVar2 + -0x2;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x1;
                            puVar6[0x1] = iVar5;
                            puVar6[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar2 = *(int *)(param_2 + 0x38);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x5;
                            puVar6[0x1] = iVar2 + 0x1;
                            puVar6[0x2] = iVar2;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            *(undefined4 *)(param_2 + 0x1c) = 0x1;
                            return 0xffffffff;
                        }
                        if ((iVar14 == 0x2) &&
                           (*(int *)(iVar7 + *(int *)(param_2 + 0x38) * 0x2c + -0x1c) != 0x0)) {
                            iVar2 = *piVar17;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x1;
                            puVar6[0x1] = iVar2;
                            puVar6[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar10 = *(undefined4 *)(param_2 + 0x38);
                            iVar2 = *piVar16;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x3;
                            puVar6[0x1] = iVar2;
                            puVar6[0x2] = uVar10;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar10 = *(undefined4 *)(AIrowCheck + iVar18 + 0xc);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x1;
                            puVar6[0x1] = uVar10;
                            puVar6[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar2 = *(int *)(param_2 + 0x38);
                            uVar10 = *(undefined4 *)(AIcolCheck + iVar18 + 0xc);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x3;
                            puVar6[0x1] = uVar10;
                            puVar6[0x2] = iVar2 + 0x1;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar10 = *(undefined4 *)(AIrowCheck + iVar18 + 0x10);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x1;
                            puVar6[0x1] = uVar10;
                            puVar6[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar2 = *(int *)(param_2 + 0x38);
                            uVar10 = *(undefined4 *)(AIcolCheck + iVar18 + 0x10);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x3;
                            puVar6[0x1] = uVar10;
                            puVar6[0x2] = iVar2 + 0x2;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x1;
                            puVar6[0x1] = iVar5;
                            puVar6[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar2 = *(int *)(param_2 + 0x38);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x5;
                            puVar6[0x1] = iVar2 + -0x1;
                            puVar6[0x2] = iVar2;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            *(undefined4 *)(param_2 + 0x1c) = 0x1;
                            return 0xffffffff;
                        }
                        iVar3 = *(int *)(param_2 + 0x3c) + 0x2;
                        if (iVar15 == 0x1) {
                            iVar5 = *(int *)(param_2 + 0x38) + 0x1;
                            piVar11 = (int *)(param_1 + iVar3 * 0x318 + iVar5 * 0x2c);
                            for (; iVar5 <= *(int *)(param_2 + 0x30); iVar5 += 0x1) {
                                if (((iVar12 == piVar11[0x4]) && (*piVar11 == 0x0)) &&
                                   (iVar7 = AIMoveAcross(param_1,iVar3,iVar5,
                                                         *(int *)(param_2 + 0x38) + 0x1),
                                   iVar7 != 0x0)) {
                                    *(int *)(AIrowCheck + iVar18 + 0x8) = iVar3;
                                    iVar15 = 0x2;
                                    *(int *)(AIcolCheck + iVar18 + 0x8) = iVar5;
                                    break;
                                }
                                piVar11 = piVar11 + 0xb;
                            }
                        }
                        else if (iVar14 == 0x1) {
                            iVar5 = *(int *)(param_2 + 0x38) + -0x1;
                            piVar11 = (int *)(param_1 + iVar3 * 0x318 + iVar5 * 0x2c);
                            for (; *(int *)(param_2 + 0x2c) <= iVar5; iVar5 += -0x1) {
                                if (((iVar12 == piVar11[0x4]) && (*piVar11 == 0x0)) &&
                                   (iVar7 = AIMoveAcross(param_1,iVar3,iVar5,
                                                         *(int *)(param_2 + 0x38) + -0x1),
                                   iVar7 != 0x0)) {
                                    *(int *)(AIrowCheck + iVar18 + 0x10) = iVar3;
                                    iVar14 = 0x2;
                                    *(int *)(AIcolCheck + iVar18 + 0x10) = iVar5;
                                    break;
                                }
                                piVar11 = piVar11 + -0xb;
                            }
                        }
                        if (((iVar15 == 0x2) &&
                            (*(int *)(param_1 +
                                     *(int *)(param_2 + 0x3c) * 0x318 +
                                     *(int *)(param_2 + 0x38) * 0x2c + 0x354) != 0x0)) ||
                           ((iVar14 == 0x2 &&
                            (*(int *)(param_1 +
                                     *(int *)(param_2 + 0x3c) * 0x318 +
                                     *(int *)(param_2 + 0x38) * 0x2c + 0x2fc) != 0x0)))) {
                            if (iVar15 == 0x0) {
                                if (iVar14 != 0x0) {
                                    iVar2 = *piVar17;
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar6 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar6 = 0x1;
                                    puVar6[0x1] = iVar2;
                                    puVar6[0x2] = 0x0;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    uVar10 = *(undefined4 *)(param_2 + 0x38);
                                    iVar2 = *piVar16;
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar6 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar6 = 0x3;
                                    puVar6[0x1] = iVar2;
                                    puVar6[0x2] = uVar10;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    uVar10 = *(undefined4 *)(AIrowCheck + iVar18 + 0xc);
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar6 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar6 = 0x1;
                                    puVar6[0x1] = uVar10;
                                    puVar6[0x2] = 0x0;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    iVar2 = *(int *)(param_2 + 0x38);
                                    uVar10 = *(undefined4 *)(AIcolCheck + iVar18 + 0xc);
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar6 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar6 = 0x3;
                                    puVar6[0x1] = uVar10;
                                    puVar6[0x2] = iVar2 + 0x1;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    uVar10 = *(undefined4 *)(AIrowCheck + iVar18 + 0x10);
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar6 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar6 = 0x1;
                                    puVar6[0x1] = uVar10;
                                    puVar6[0x2] = 0x0;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    iVar2 = *(int *)(param_2 + 0x38);
                                    uVar10 = *(undefined4 *)(AIcolCheck + iVar18 + 0x10);
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar6 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar6 = 0x3;
                                    puVar6[0x1] = uVar10;
                                    puVar6[0x2] = iVar2 + -0x1;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                }
                            }
                            else {
                                iVar2 = *piVar17;
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x1;
                                puVar6[0x1] = iVar2;
                                puVar6[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                uVar10 = *(undefined4 *)(param_2 + 0x38);
                                iVar2 = *piVar16;
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x3;
                                puVar6[0x1] = iVar2;
                                puVar6[0x2] = uVar10;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                uVar10 = *(undefined4 *)(AIrowCheck + iVar18 + 0x4);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x1;
                                puVar6[0x1] = uVar10;
                                puVar6[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                iVar2 = *(int *)(param_2 + 0x38);
                                uVar10 = *(undefined4 *)(AIcolCheck + iVar18 + 0x4);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x3;
                                puVar6[0x1] = uVar10;
                                puVar6[0x2] = iVar2 + -0x1;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                uVar10 = *(undefined4 *)(AIrowCheck + iVar18 + 0x8);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x1;
                                puVar6[0x1] = uVar10;
                                puVar6[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                iVar2 = *(int *)(param_2 + 0x38);
                                uVar10 = *(undefined4 *)(AIcolCheck + iVar18 + 0x8);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x3;
                                puVar6[0x1] = uVar10;
                                puVar6[0x2] = iVar2 + 0x1;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            }
                            iVar2 = *(int *)(param_2 + 0x3c);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x1;
                            puVar6[0x1] = iVar2 + 0x1;
                            puVar6[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            if (iVar15 == 0x0) {
                                iVar2 = *(int *)(param_2 + 0x38);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x5;
                                puVar6[0x1] = iVar2 + -0x1;
                                puVar6[0x2] = iVar2;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            }
                            else {
                                iVar2 = *(int *)(param_2 + 0x38);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x5;
                                puVar6[0x1] = iVar2 + 0x1;
                                puVar6[0x2] = iVar2;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            }
                            *(undefined4 *)(param_2 + 0x1c) = 0x1;
                            return 0xffffffff;
                        }
                    }
                }
            }
            iVar2 += 0x1;
        } while (iVar2 < 0x3);
    }
    return 0x0;
}



undefined4 AIChainVert5(int param_1,int param_2)

{
    int *piVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    undefined4 *puVar5;
    int iVar6;
    int *piVar7;
    int *piVar8;
    undefined4 uVar9;
    int iVar10;
    int *piVar11;
    int *piVar12;
    int iVar13;
    int iVar14;
    int *piVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0xbd9,_2776,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0xbda,_2777,0x0,0x0,0x0);
    }
    bzero(AIrowCheck,0x8c);
    bzero(AIcolCheck,0x8c);
    bzero(AItotCheck,0x1c);
    iVar16 = 0x0;
    do {
        iVar4 = *(int *)(param_2 + 0x38) + iVar16 + -0x1;
        iVar6 = *(int *)(param_2 + 0x40) + 0x1;
        if ((-0x1 < iVar4) && (iVar4 < 0x6)) {
            piVar1 = (int *)(param_1 + iVar6 * 0x318 + iVar4 * 0x2c);
            iVar14 = piVar1[0x4];
            if ((iVar14 != 0x0) && ((iVar14 < 0x8 && (*piVar1 == 0x0)))) {
                piVar1 = (int *)(AItotCheck + (iVar14 + -0x1) * 0x4);
                if (*piVar1 == 0x0) {
                    iVar13 = (iVar14 + -0x1) * 0x14;
                    piVar12 = (int *)(AIrowCheck + iVar13);
                    *piVar12 = iVar6;
                    iVar18 = 0x0;
                    piVar11 = (int *)(AIcolCheck + iVar13);
                    piVar11[*piVar1] = iVar4;
                    iVar17 = 0x0;
                    *piVar1 = *piVar1 + 0x1;
                    iVar6 = *(int *)(param_2 + 0x3c) + 0x1;
                    iVar4 = *(int *)(param_2 + 0x38) + -0x1;
                    iVar10 = param_1 + iVar6 * 0x318;
                    piVar7 = (int *)(iVar10 + iVar4 * 0x2c);
                    piVar15 = piVar11;
                    piVar8 = piVar12;
                    for (; *(int *)(param_2 + 0x2c) <= iVar4; iVar4 += -0x1) {
                        if (((iVar14 == piVar7[0x4]) && (*piVar7 == 0x0)) &&
                           (iVar2 = AIMoveAcross(param_1,iVar6,iVar4,*(int *)(param_2 + 0x38) + -0x1
                                                ), iVar2 != 0x0)) {
                            piVar8 = piVar8 + 0x1;
                            *piVar8 = iVar6;
                            iVar18 += 0x1;
                            piVar15 = piVar15 + 0x1;
                            *piVar15 = iVar4;
                            *piVar1 = *piVar1 + 0x1;
                        }
                        piVar7 = piVar7 + -0xb;
                    }
                    iVar4 = *(int *)(param_2 + 0x38) + 0x1;
                    piVar7 = (int *)(iVar10 + iVar4 * 0x2c);
                    piVar8 = piVar12;
                    piVar15 = piVar11;
                    for (; iVar4 <= *(int *)(param_2 + 0x30); iVar4 += 0x1) {
                        if (((iVar14 == piVar7[0x4]) && (*piVar7 == 0x0)) &&
                           (iVar10 = AIMoveAcross(param_1,iVar6,iVar4,*(int *)(param_2 + 0x38) + 0x1
                                                 ), iVar10 != 0x0)) {
                            piVar8[0x3] = iVar6;
                            piVar8 = piVar8 + 0x1;
                            iVar17 += 0x1;
                            piVar15[0x3] = iVar4;
                            piVar15 = piVar15 + 0x1;
                            *piVar1 = *piVar1 + 0x1;
                        }
                        piVar7 = piVar7 + 0xb;
                    }
                    if (*piVar1 != 0x1) {
                        if (iVar18 == 0x2) {
                            iVar16 = *piVar12;
                            if (iVar14 == *(int *)(param_1 + (iVar16 + 0x1) * 0x318 +
                                                   *(int *)(param_2 + 0x38) * 0x2c + 0x10)) {
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar5 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar5 = 0x1;
                                puVar5[0x1] = iVar16 + 0x1;
                                puVar5[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                iVar16 = *(int *)(param_2 + 0x38);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar5 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar5 = 0x6;
                                puVar5[0x1] = iVar16;
                                puVar5[0x2] = iVar16 + -0x1;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            }
                            iVar16 = *piVar12;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x1;
                            puVar5[0x1] = iVar16;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar9 = *(undefined4 *)(param_2 + 0x38);
                            iVar16 = *piVar11;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x3;
                            puVar5[0x1] = iVar16;
                            puVar5[0x2] = uVar9;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar9 = *(undefined4 *)(AIrowCheck + iVar13 + 0x4);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x1;
                            puVar5[0x1] = uVar9;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar16 = *(int *)(param_2 + 0x38);
                            uVar9 = *(undefined4 *)(AIcolCheck + iVar13 + 0x4);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x3;
                            puVar5[0x1] = uVar9;
                            puVar5[0x2] = iVar16 + -0x1;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar9 = *(undefined4 *)(AIrowCheck + iVar13 + 0x8);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x1;
                            puVar5[0x1] = uVar9;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar16 = *(int *)(param_2 + 0x38);
                            uVar9 = *(undefined4 *)(AIcolCheck + iVar13 + 0x8);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x3;
                            puVar5[0x1] = uVar9;
                            puVar5[0x2] = iVar16 + -0x2;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar9 = *(undefined4 *)(param_2 + 0x3c);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x1;
                            puVar5[0x1] = uVar9;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar16 = *(int *)(param_2 + 0x38);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x2;
                            puVar5[0x1] = iVar16 + -0x1;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar16 = *(int *)(param_2 + 0x3c);
                            uVar9 = *(undefined4 *)(param_2 + 0x38);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0xd;
                            puVar5[0x1] = iVar16 + 0x2;
                            puVar5[0x2] = uVar9;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x9;
                            puVar5[0x1] = 0x0;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0xb;
                            puVar5[0x1] = 0x0;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            *(undefined4 *)(param_2 + 0x1c) = 0x1;
                            return 0xffffffff;
                        }
                        if (iVar17 == 0x2) {
                            iVar16 = *piVar12;
                            if (iVar14 == *(int *)(param_1 + (iVar16 + 0x1) * 0x318 +
                                                   *(int *)(param_2 + 0x38) * 0x2c + 0x10)) {
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar5 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar5 = 0x1;
                                puVar5[0x1] = iVar16 + 0x1;
                                puVar5[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                iVar16 = *(int *)(param_2 + 0x38);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar5 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar5 = 0x6;
                                puVar5[0x1] = iVar16;
                                puVar5[0x2] = iVar16 + 0x1;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            }
                            iVar16 = *piVar12;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x1;
                            puVar5[0x1] = iVar16;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar9 = *(undefined4 *)(param_2 + 0x38);
                            iVar16 = *piVar11;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x3;
                            puVar5[0x1] = iVar16;
                            puVar5[0x2] = uVar9;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar9 = *(undefined4 *)(AIrowCheck + iVar13 + 0xc);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x1;
                            puVar5[0x1] = uVar9;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar16 = *(int *)(param_2 + 0x38);
                            uVar9 = *(undefined4 *)(AIcolCheck + iVar13 + 0xc);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x3;
                            puVar5[0x1] = uVar9;
                            puVar5[0x2] = iVar16 + 0x1;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar9 = *(undefined4 *)(AIrowCheck + iVar13 + 0x10);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x1;
                            puVar5[0x1] = uVar9;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar16 = *(int *)(param_2 + 0x38);
                            uVar9 = *(undefined4 *)(AIcolCheck + iVar13 + 0x10);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x3;
                            puVar5[0x1] = uVar9;
                            puVar5[0x2] = iVar16 + 0x2;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar9 = *(undefined4 *)(param_2 + 0x3c);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x1;
                            puVar5[0x1] = uVar9;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar9 = *(undefined4 *)(param_2 + 0x38);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x2;
                            puVar5[0x1] = uVar9;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar16 = *(int *)(param_2 + 0x3c);
                            uVar9 = *(undefined4 *)(param_2 + 0x38);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0xd;
                            puVar5[0x1] = iVar16 + 0x2;
                            puVar5[0x2] = uVar9;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x9;
                            puVar5[0x1] = 0x0;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0xb;
                            puVar5[0x1] = 0x0;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            *(undefined4 *)(param_2 + 0x1c) = 0x1;
                            return 0xffffffff;
                        }
                        if ((iVar18 == 0x1) && (iVar17 == 0x1)) {
                            iVar16 = *piVar12;
                            if (iVar14 == *(int *)(param_1 + (iVar16 + 0x1) * 0x318 +
                                                   *(int *)(param_2 + 0x38) * 0x2c + 0x10)) {
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar5 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar5 = 0x1;
                                puVar5[0x1] = iVar16 + 0x1;
                                puVar5[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                uVar3 = AnimationRandom(0x64);
                                if (uVar3 == (((int)uVar3 >> 0x1) +
                                             (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0)) * 0x2
                                   ) {
                                    iVar16 = *(int *)(param_2 + 0x38);
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x6;
                                    puVar5[0x1] = iVar16;
                                    puVar5[0x2] = iVar16 + -0x1;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                }
                                else {
                                    iVar16 = *(int *)(param_2 + 0x38);
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x6;
                                    puVar5[0x1] = iVar16;
                                    puVar5[0x2] = iVar16 + 0x1;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                }
                            }
                            iVar16 = *piVar12;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x1;
                            puVar5[0x1] = iVar16;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar9 = *(undefined4 *)(param_2 + 0x38);
                            iVar16 = *piVar11;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x3;
                            puVar5[0x1] = iVar16;
                            puVar5[0x2] = uVar9;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar9 = *(undefined4 *)(AIrowCheck + iVar13 + 0x4);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x1;
                            puVar5[0x1] = uVar9;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar16 = *(int *)(param_2 + 0x38);
                            uVar9 = *(undefined4 *)(AIcolCheck + iVar13 + 0x4);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x3;
                            puVar5[0x1] = uVar9;
                            puVar5[0x2] = iVar16 + -0x1;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar9 = *(undefined4 *)(AIrowCheck + iVar13 + 0xc);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x1;
                            puVar5[0x1] = uVar9;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar16 = *(int *)(param_2 + 0x38);
                            uVar9 = *(undefined4 *)(AIcolCheck + iVar13 + 0xc);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x3;
                            puVar5[0x1] = uVar9;
                            puVar5[0x2] = iVar16 + 0x1;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar3 = AnimationRandom(0x64);
                            if (uVar3 == (((int)uVar3 >> 0x1) +
                                         (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0)) * 0x2) {
                                uVar9 = *(undefined4 *)(param_2 + 0x3c);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar5 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar5 = 0x1;
                                puVar5[0x1] = uVar9;
                                puVar5[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                iVar16 = *(int *)(param_2 + 0x38);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar5 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar5 = 0x2;
                                puVar5[0x1] = iVar16 + -0x1;
                                puVar5[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            }
                            else {
                                uVar9 = *(undefined4 *)(param_2 + 0x3c);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar5 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar5 = 0x1;
                                puVar5[0x1] = uVar9;
                                puVar5[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                uVar9 = *(undefined4 *)(param_2 + 0x38);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar5 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar5 = 0x2;
                                puVar5[0x1] = uVar9;
                                puVar5[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            }
                            iVar16 = *(int *)(param_2 + 0x3c);
                            uVar9 = *(undefined4 *)(param_2 + 0x38);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0xd;
                            puVar5[0x1] = iVar16 + 0x2;
                            puVar5[0x2] = uVar9;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0x9;
                            puVar5[0x1] = 0x0;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar5 = 0xb;
                            puVar5[0x1] = 0x0;
                            puVar5[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            *(undefined4 *)(param_2 + 0x1c) = 0x1;
                            return 0xffffffff;
                        }
                    }
                }
            }
        }
        iVar16 += 0x1;
        if (0x2 < iVar16) {
            return 0x0;
        }
    } while( true );
}



undefined4 AIChainHori1(int param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int *piVar8;
    int iVar9;
    int *piVar10;
    int iVar11;
    int iVar12;
    int *piVar13;
    int *piVar14;
    int *piVar15;
    int aiStack_3c [0x5];
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0xca9,_2919,0x0,0x0,0x0);
    }
    if (param_2 == NULL) {
        gc_assert(0x0,&_215,0xcaa,_2920,0x0,0x0,0x0);
    }
    if (param_2[0xf] != 0x0) {
        bzero(AIrowCheck,0x8c);
        bzero(AIcolCheck,0x8c);
        bzero(AItotCheck,0x1c);
        iVar3 = param_2[0xf];
        iVar1 = param_2[0xb];
        if (iVar3 == iVar1) {
            iVar11 = param_2[0x10] + 0x1;
        }
        else {
            iVar11 = param_2[0x10];
            if (iVar11 == param_2[0xc]) {
                iVar1 = iVar3 + -0x1;
            }
            else {
                iVar1 = iVar3 + -0x1;
                iVar11 += 0x1;
            }
        }
        iVar2 = iVar1 * 0x2c;
        iVar3 = iVar2;
        for (iVar12 = iVar1; iVar12 <= iVar11; iVar12 += 0x1) {
            iVar4 = param_2[0xe];
            iVar9 = iVar4 + -0x1;
            iVar6 = iVar9 * 0x318 + iVar3;
            iVar5 = *(int *)(param_1 + iVar6 + 0x10);
            if (((iVar5 != 0x0) && (iVar5 < 0x8)) && (*(int *)(param_1 + iVar6) == 0x0)) {
                piVar15 = (int *)(AItotCheck + (iVar5 + -0x1) * 0x4);
                if (*piVar15 == 0x0) {
                    iVar6 = (iVar5 + -0x1) * 0x14;
                    piVar14 = (int *)(AIrowCheck + iVar6);
                    *piVar14 = iVar9;
                    iVar4 += -0x2;
                    *(int *)(AIcolCheck + *piVar15 * 0x4 + iVar6) = iVar12;
                    *piVar15 = *piVar15 + 0x1;
                    if (-0x1 < iVar4) {
                        iVar7 = (iVar11 + 0x1) - iVar1;
                        piVar10 = (int *)(param_1 + iVar4 * 0x318 + iVar2);
                        iVar9 = iVar1;
                        if (iVar1 <= iVar11) {
                            do {
                                if ((iVar5 == piVar10[0x4]) && (*piVar10 == 0x0)) {
                                    piVar14[*piVar15] = iVar4;
                                    *(int *)(AIcolCheck + *piVar15 * 0x4 + iVar6) = iVar9;
                                    *piVar15 = *piVar15 + 0x1;
                                    break;
                                }
                                piVar10 = piVar10 + 0xb;
                                iVar9 += 0x1;
                                iVar7 += -0x1;
                            } while (iVar7 != 0x0);
                        }
                    }
                    iVar9 = param_2[0xe];
                    iVar7 = (iVar11 + 0x1) - iVar1;
                    piVar10 = (int *)(param_1 + (iVar9 + 0x1) * 0x318 + iVar2);
                    iVar4 = iVar1;
                    if (iVar1 <= iVar11) {
                        do {
                            if ((iVar5 == piVar10[0x4]) && (*piVar10 == 0x0)) {
                                piVar14[*piVar15] = iVar9 + 0x1;
                                *(int *)(AIcolCheck + *piVar15 * 0x4 + iVar6) = iVar4;
                                *piVar15 = *piVar15 + 0x1;
                                break;
                            }
                            piVar10 = piVar10 + 0xb;
                            iVar4 += 0x1;
                            iVar7 += -0x1;
                        } while (iVar7 != 0x0);
                    }
                    if ((0x1 < *piVar15) && (iVar4 <= iVar11)) {
                        iVar7 = (iVar11 + 0x1) - iVar1;
                        piVar10 = (int *)(param_1 + (iVar9 + 0x2) * 0x318 + iVar2);
                        iVar4 = iVar1;
                        if (iVar1 <= iVar11) {
                            do {
                                if ((iVar5 == piVar10[0x4]) && (*piVar10 == 0x0)) {
                                    piVar14[*piVar15] = iVar9 + 0x2;
                                    *(int *)(AIcolCheck + *piVar15 * 0x4 + iVar6) = iVar4;
                                    *piVar15 = *piVar15 + 0x1;
                                    break;
                                }
                                piVar10 = piVar10 + 0xb;
                                iVar4 += 0x1;
                                iVar7 += -0x1;
                            } while (iVar7 != 0x0);
                        }
                        if (0x2 < *piVar15) {
                            piVar13 = aiStack_3c + 0x1;
                            piVar10 = piVar14;
                            piVar8 = piVar13;
                            for (iVar1 = 0x0; iVar1 < *piVar15; iVar1 += 0x1) {
                                iVar3 = *piVar10;
                                piVar10 = piVar10 + 0x1;
                                *piVar8 = iVar3;
                                piVar8 = piVar8 + 0x1;
                            }
                            AISortRows(param_2[0x1],*piVar15,aiStack_3c + 0x1);
                            iVar1 = param_2[0xf];
                            iVar3 = *(int *)(AIcolCheck + aiStack_3c[*piVar15] * 0x4 + iVar6);
                            if ((iVar1 <= iVar3) && (iVar1 = param_2[0x10], iVar3 <= iVar1)) {
                                iVar1 = *(int *)(AIcolCheck + aiStack_3c[1] * 0x4 + iVar6);
                                if (param_2 == NULL) {
                                    gc_assert(0x0,&_215,0x3d9,_560,0x0,0x0,0x0);
                                }
                                iVar11 = *param_2 - iVar3;
                                if (iVar11 < 0x1) {
                                    iVar11 = -iVar11;
                                }
                                iVar1 = (*param_2 + 0x1) - iVar1;
                                if (iVar1 < 0x1) {
                                    iVar1 = -iVar1;
                                }
                                if (iVar1 < iVar11) {
                                    iVar11 = 0x0;
                                }
                                else {
                                    iVar11 = -0x1;
                                }
                                iVar1 = iVar3;
                                if (iVar11 == 0x0) {
                                    iVar1 = *(int *)(AIcolCheck + aiStack_3c[1] * 0x4 + iVar6);
                                }
                            }
                            for (iVar3 = 0x0; iVar3 < *piVar15; iVar3 += 0x1) {
                                iVar11 = *piVar13 * 0x4;
                                if (iVar1 != *(int *)(AIcolCheck + iVar11 + iVar6)) {
                                    iVar12 = piVar14[*piVar13];
                                    if (param_2 == NULL) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    piVar10 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                                    *piVar10 = 0x1;
                                    piVar10[0x1] = iVar12;
                                    piVar10[0x2] = 0x0;
                                    param_2[0x40] = param_2[0x40] + 0x1;
                                    param_2[0x3f] = param_2[0x3f] + 0x1;
                                    iVar11 = *(int *)(AIcolCheck + iVar11 + iVar6);
                                    if (param_2 == NULL) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    piVar10 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                                    *piVar10 = 0x4;
                                    piVar10[0x1] = iVar11;
                                    piVar10[0x2] = iVar1;
                                    param_2[0x40] = param_2[0x40] + 0x1;
                                    param_2[0x3f] = param_2[0x3f] + 0x1;
                                }
                                piVar13 = piVar13 + 0x1;
                            }
                            if (param_2 == NULL) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            piVar15 = param_2 + param_2[0x3f] * 0x3 + 0x11;
                            *piVar15 = 0xb;
                            piVar15[0x1] = 0x0;
                            piVar15[0x2] = 0x0;
                            param_2[0x40] = param_2[0x40] + 0x1;
                            param_2[0x3f] = param_2[0x3f] + 0x1;
                            param_2[0x7] = 0x1;
                            return 0xffffffff;
                        }
                    }
                }
            }
            iVar3 += 0x2c;
        }
    }
    return 0x0;
}



undefined4 AIChainHori2(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    char *pcVar4;
    undefined4 *puVar5;
    int iVar6;
    int iVar7;
    int *piVar8;
    int *piVar9;
    int *piVar10;
    int iVar11;
    undefined4 uVar12;
    int iVar13;
    int iVar14;
    int *piVar15;
    int *piVar16;
    int iVar17;
    int iVar18;
    int local_50 [0x3];
    undefined4 local_44;
    char acStack_41 [0x11];
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0xd61,_3227,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0xd62,_3228,0x0,0x0,0x0);
    }
    bzero(AIrowCheck,0x8c);
    bzero(AIcolCheck,0x8c);
    bzero(AItotCheck,0x1c);
    iVar14 = 0x1;
    do {
        bzero((char *)((int)register0x00000004 + -0x41) + 0x1,0x6);
        iVar2 = *(int *)(param_2 + 0x38);
        iVar11 = *(int *)(param_2 + 0x2c);
        iVar1 = (iVar14 + -0x1) * 0x14;
        piVar15 = (int *)(AIcolCheck + iVar1);
        piVar16 = (int *)(AIrowCheck + iVar1);
        piVar9 = (int *)(param_1 + (iVar2 + 0x1) * 0x318 + iVar11 * 0x2c);
        pcVar4 = (char *)((int)register0x00000004 + -0x41) + iVar11 + 0x1;
        iVar18 = 0x0;
        iVar7 = 0x0;
        iVar6 = 0x0;
        piVar8 = piVar16;
        piVar10 = piVar15;
        for (; iVar11 <= *(int *)(param_2 + 0x30); iVar11 += 0x1) {
            if ((iVar14 == piVar9[0x4]) && (*piVar9 == 0x0)) {
                if (iVar18 < 0x2) {
                    *piVar8 = iVar2 + 0x1;
                    *piVar10 = iVar11;
                }
                *pcVar4 = -0x1;
                piVar8 = piVar8 + 0x1;
                piVar10 = piVar10 + 0x1;
                iVar18 += 0x1;
            }
            piVar9 = piVar9 + 0xb;
            pcVar4 = pcVar4 + 0x1;
        }
        if (iVar18 != 0x0) {
            if (iVar18 == 0x1) {
                iVar11 = 0x2;
            }
            else {
                iVar11 = 0x1;
            }
            iVar13 = *(int *)(param_2 + 0x3c) + -0x1;
            iVar3 = param_1 + iVar2 * 0x318;
            piVar9 = (int *)(iVar3 + iVar13 * 0x2c);
            iVar17 = 0x0;
            piVar8 = piVar16;
            piVar10 = piVar15;
            for (; *(int *)(param_2 + 0x2c) <= iVar13; iVar13 += -0x1) {
                if ((iVar14 == piVar9[0x4]) && (*piVar9 == 0x0)) {
                    piVar8[0x2] = iVar2;
                    iVar6 += 0x1;
                    piVar10[0x2] = iVar13;
                    piVar8 = piVar8 + 0x1;
                    piVar10 = piVar10 + 0x1;
                    if (iVar6 == iVar11) {
                        iVar17 = 0x1;
                        break;
                    }
                }
                piVar9 = piVar9 + -0xb;
            }
            if (iVar17 == 0x0) {
                iVar13 = *(int *)(param_2 + 0x40) + 0x1;
                piVar9 = (int *)(iVar3 + iVar13 * 0x2c);
                piVar8 = piVar16;
                piVar10 = piVar15;
                for (; iVar13 <= *(int *)(param_2 + 0x30); iVar13 += 0x1) {
                    if ((iVar14 == piVar9[0x4]) && (*piVar9 == 0x0)) {
                        piVar8[0x2] = iVar2;
                        iVar7 += 0x1;
                        piVar10[0x2] = iVar13;
                        piVar8 = piVar8 + 0x1;
                        piVar10 = piVar10 + 0x1;
                        if (iVar7 == iVar11) {
                            iVar17 = 0x2;
                            break;
                        }
                    }
                    piVar9 = piVar9 + 0xb;
                }
            }
            if (iVar17 != 0x0) {
                if (0x2 < iVar18) {
                    iVar14 = *(int *)(param_2 + 0x3c);
                    iVar18 = 0x0;
                    iVar2 = (*(int *)(param_2 + 0x40) + 0x1) - iVar14;
                    pcVar4 = (char *)((int)register0x00000004 + -0x41) + iVar14 + 0x1;
                    iVar11 = 0x0;
                    iVar13 = iVar14;
                    if (iVar14 <= *(int *)(param_2 + 0x40)) {
                        do {
                            if (*pcVar4 == -0x1) {
                                iVar11 += 0x1;
                            }
                            pcVar4 = pcVar4 + 0x1;
                            iVar13 += 0x1;
                            iVar2 += -0x1;
                        } while (iVar2 != 0x0);
                    }
                    if (iVar11 == 0x2) {
                        pcVar4 = (char *)((int)register0x00000004 + -0x41) + iVar14 + 0x1;
                        piVar8 = piVar15;
                        for (iVar13 = iVar14; iVar13 <= *(int *)(param_2 + 0x40); iVar13 += 0x1) {
                            if (*pcVar4 == -0x1) {
                                iVar18 += 0x1;
                                *piVar8 = iVar13;
                                piVar8 = piVar8 + 0x1;
                                if (iVar18 == 0x2) break;
                            }
                            pcVar4 = pcVar4 + 0x1;
                        }
                        goto LAB_0002a904;
                    }
                    if (iVar11 != 0x1) {
                        iVar18 = 0x2;
                        goto LAB_0002a904;
                    }
                    pcVar4 = (char *)((int)register0x00000004 + -0x41) + iVar14;
                    piVar8 = piVar15;
                    while (iVar14 += -0x1, *(int *)(param_2 + 0x2c) <= iVar14) {
                        if (*pcVar4 == -0x1) {
                            iVar18 += 0x1;
                            *piVar8 = iVar14;
                            piVar8 = piVar8 + 0x1;
                            if (iVar18 == 0x1) break;
                        }
                        pcVar4 = pcVar4 + -0x1;
                    }
                    if (iVar18 == 0x1) {
                        iVar13 = *(int *)(param_2 + 0x3c);
                        pcVar4 = (char *)((int)register0x00000004 + -0x41) + iVar13 + 0x1;
                        piVar8 = (int *)(AIcolCheck + iVar1 + 0x4);
                        for (; iVar13 <= *(int *)(param_2 + 0x40); iVar13 += 0x1) {
                            if (*pcVar4 == -0x1) {
                                iVar18 += 0x1;
                                *piVar8 = iVar13;
                                piVar8 = piVar8 + 0x1;
                                if (iVar18 == 0x2) break;
                            }
                            pcVar4 = pcVar4 + 0x1;
                        }
                    }
                    else {
                        iVar13 = *(int *)(param_2 + 0x3c);
                        pcVar4 = (char *)((int)register0x00000004 + -0x41) + iVar13 + 0x1;
                        piVar8 = piVar15 + iVar18;
                        for (; iVar13 <= *(int *)(param_2 + 0x30); iVar13 += 0x1) {
                            if (*pcVar4 == -0x1) {
                                iVar18 += 0x1;
                                *piVar8 = iVar13;
                                piVar8 = piVar8 + 0x1;
                                if (iVar18 == 0x2) break;
                            }
                            pcVar4 = pcVar4 + 0x1;
                        }
                    }
                }
LAB_0002a904:
                local_50[0] = *piVar16;
                if (iVar18 == 0x2) {
                    local_50[1] = *(int *)(AIrowCheck + iVar1 + 0x4);
                }
                else if (iVar18 == 0x1) {
                    local_50[1] = 0xc;
                }
                local_50[2] = *(int *)(AIrowCheck + iVar1 + 0x8);
                if ((iVar6 == 0x2) || (iVar7 == 0x2)) {
                    local_44 = *(undefined4 *)(AIrowCheck + iVar1 + 0xc);
                }
                else if ((iVar6 == 0x1) || (iVar7 == 0x1)) {
                    local_44 = 0xc;
                }
                AISortRows(*(undefined4 *)(param_2 + 0x4),0x4,local_50);
                piVar8 = local_50;
                iVar14 = 0x0;
                iVar2 = 0x0;
                do {
                    iVar6 = *piVar8;
                    if (iVar6 == 0x2) {
                        if (iVar17 == 0x1) {
                            iVar13 = *(int *)(param_2 + 0x3c) + -0x1;
                        }
                        else {
                            iVar13 = *(int *)(param_2 + 0x40) + 0x1;
                        }
                    }
                    else if ((0x1 < iVar6) && (iVar6 < 0x4)) {
                        if (iVar17 == 0x1) {
                            iVar13 = *(int *)(param_2 + 0x3c) + -0x2;
                        }
                        else {
                            iVar13 = *(int *)(param_2 + 0x40) + 0x2;
                        }
                    }
                    if ((iVar14 == 0x0) && (iVar6 < 0x2)) {
                        if (iVar18 == 0x2) {
                            if (iVar17 == 0x1) {
                                iVar14 = *(int *)(param_2 + 0x3c);
                                iVar13 = iVar14 + 0x1;
                                if (*(int *)(AIcolCheck + iVar1 + 0x4) < iVar13) {
                                    uVar12 = *(undefined4 *)(AIrowCheck + iVar1 + 0x4);
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x1;
                                    puVar5[0x1] = uVar12;
                                    puVar5[0x2] = 0x0;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    uVar12 = *(undefined4 *)(AIcolCheck + iVar1 + 0x4);
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x3;
                                    puVar5[0x1] = uVar12;
                                    puVar5[0x2] = iVar13;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    iVar6 = *piVar16;
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x1;
                                    puVar5[0x1] = iVar6;
                                    puVar5[0x2] = 0x0;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    iVar6 = *piVar15;
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x5;
                                    puVar5[0x1] = iVar6;
                                    puVar5[0x2] = iVar14;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                }
                                else {
                                    iVar6 = *piVar16;
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x1;
                                    puVar5[0x1] = iVar6;
                                    puVar5[0x2] = 0x0;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    iVar6 = *piVar15;
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x3;
                                    puVar5[0x1] = iVar6;
                                    puVar5[0x2] = iVar14;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    uVar12 = *(undefined4 *)(AIrowCheck + iVar1 + 0x4);
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x1;
                                    puVar5[0x1] = uVar12;
                                    puVar5[0x2] = 0x0;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    uVar12 = *(undefined4 *)(AIcolCheck + iVar1 + 0x4);
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x5;
                                    puVar5[0x1] = uVar12;
                                    puVar5[0x2] = iVar13;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                }
                            }
                            else {
                                iVar14 = *(int *)(param_2 + 0x40);
                                iVar13 = iVar14 + -0x1;
                                if (*piVar15 < iVar13) {
                                    uVar12 = *(undefined4 *)(AIrowCheck + iVar1 + 0x4);
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x1;
                                    puVar5[0x1] = uVar12;
                                    puVar5[0x2] = 0x0;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    uVar12 = *(undefined4 *)(AIcolCheck + iVar1 + 0x4);
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x3;
                                    puVar5[0x1] = uVar12;
                                    puVar5[0x2] = iVar14;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    iVar14 = *piVar16;
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x1;
                                    puVar5[0x1] = iVar14;
                                    puVar5[0x2] = 0x0;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    iVar14 = *piVar15;
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x5;
                                    puVar5[0x1] = iVar14;
                                    puVar5[0x2] = iVar13;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                }
                                else {
                                    iVar6 = *piVar16;
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x1;
                                    puVar5[0x1] = iVar6;
                                    puVar5[0x2] = 0x0;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    iVar6 = *piVar15;
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x3;
                                    puVar5[0x1] = iVar6;
                                    puVar5[0x2] = iVar13;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    uVar12 = *(undefined4 *)(AIrowCheck + iVar1 + 0x4);
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x1;
                                    puVar5[0x1] = uVar12;
                                    puVar5[0x2] = 0x0;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                    uVar12 = *(undefined4 *)(AIcolCheck + iVar1 + 0x4);
                                    if (param_2 == 0x0) {
                                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                    }
                                    puVar5 = (undefined4 *)
                                             (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                    *puVar5 = 0x5;
                                    puVar5[0x1] = uVar12;
                                    puVar5[0x2] = iVar14;
                                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                }
                            }
                        }
                        else {
                            if (iVar17 == 0x1) {
                                iVar13 = *(int *)(param_2 + 0x3c);
                            }
                            else {
                                iVar13 = *(int *)(param_2 + 0x40);
                            }
                            if (iVar13 != *piVar15) {
                                iVar14 = *piVar16;
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar5 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar5 = 0x1;
                                puVar5[0x1] = iVar14;
                                puVar5[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                iVar14 = *piVar15;
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar5 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar5 = 0x4;
                                puVar5[0x1] = iVar14;
                                puVar5[0x2] = iVar13;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            }
                        }
                        iVar14 = -0x1;
                    }
                    else if ((0x1 < iVar6) && (iVar13 != piVar15[iVar6])) {
                        iVar7 = piVar16[iVar6];
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar5 = 0x1;
                        puVar5[0x1] = iVar7;
                        puVar5[0x2] = 0x0;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        iVar6 = piVar15[iVar6];
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar5 = 0x5;
                        puVar5[0x1] = iVar6;
                        puVar5[0x2] = iVar13;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    }
                    iVar2 += 0x1;
                    piVar8 = piVar8 + 0x1;
                } while (iVar2 < 0x3);
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar5 = 0xb;
                puVar5[0x1] = 0x0;
                puVar5[0x2] = 0x0;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                *(undefined4 *)(param_2 + 0x1c) = 0x1;
                return 0xffffffff;
            }
        }
        iVar14 += 0x1;
        if (0x7 < iVar14) {
            return 0x0;
        }
    } while( true );
}



undefined4 AIChainHori3(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    undefined4 *puVar3;
    int iVar4;
    int *piVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    undefined4 uVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    
    iVar11 = 0x0;
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0xeac,_3480,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0xead,_3481,0x0,0x0,0x0);
    }
    iVar4 = 0x1;
    param_1 += *(int *)(param_2 + 0x38) * 0x318;
    iVar15 = *(int *)(param_2 + 0x38);
    do {
        iVar2 = *(int *)(param_2 + 0x3c);
        iVar13 = -0x1;
        iVar16 = *(int *)(param_2 + 0x2c);
        iVar7 = iVar2 + -0x1;
        iVar1 = iVar2 - iVar16;
        piVar5 = (int *)(param_1 + iVar7 * 0x2c);
        iVar14 = -0x1;
        if (iVar16 <= iVar7) {
            do {
                if ((iVar4 == piVar5[0x4]) && (iVar14 = iVar7, *piVar5 == 0x0)) break;
                piVar5 = piVar5 + -0xb;
                iVar7 += -0x1;
                iVar1 += -0x1;
                iVar14 = -0x1;
            } while (iVar1 != 0x0);
        }
        iVar1 = iVar13;
        if (iVar14 != -0x1) {
            iVar9 = *(int *)(param_2 + 0x40) + 0x1;
            iVar7 = (*(int *)(param_2 + 0x30) + 0x1) - iVar9;
            piVar5 = (int *)(param_1 + iVar9 * 0x2c);
            if (iVar9 <= *(int *)(param_2 + 0x30)) {
                do {
                    if ((iVar4 == piVar5[0x4]) && (iVar1 = iVar9, *piVar5 == 0x0)) break;
                    piVar5 = piVar5 + 0xb;
                    iVar9 += 0x1;
                    iVar7 += -0x1;
                    iVar1 = iVar13;
                } while (iVar7 != 0x0);
            }
        }
        iVar7 = iVar15;
        if ((iVar14 != -0x1) && (iVar1 != -0x1)) {
            iVar8 = *(int *)(param_2 + 0x40);
            iVar9 = (iVar8 + 0x1) - iVar2;
            param_1 += 0x318;
            iVar6 = param_1 + iVar2 * 0x2c;
            iVar10 = 0x0;
            iVar7 = iVar15 + 0x1;
            iVar13 = iVar2;
            if (iVar2 <= iVar8) {
                do {
                    if (*(int *)(iVar6 + 0x10) != 0x0) {
                        iVar10 += 0x1;
                        iVar11 = iVar13;
                    }
                    iVar6 += 0x2c;
                    iVar13 += 0x1;
                    iVar9 += -0x1;
                } while (iVar9 != 0x0);
            }
            if (iVar10 == 0x0) {
                iVar13 = (*(int *)(param_2 + 0x30) + 0x1) - iVar16;
                piVar5 = (int *)(param_1 + iVar16 * 0x2c);
                if (iVar16 <= *(int *)(param_2 + 0x30)) {
                    do {
                        if ((iVar4 == piVar5[0x4]) && (*piVar5 == 0x0)) {
                            if (iVar16 < iVar2) {
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar3 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar3 = 0x1;
                                puVar3[0x1] = iVar15;
                                puVar3[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                iVar11 = *(int *)(param_2 + 0x3c);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar3 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar3 = 0x3;
                                puVar3[0x1] = iVar14;
                                puVar3[0x2] = iVar11 + -0x1;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar3 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar3 = 0x1;
                                puVar3[0x1] = iVar7;
                                puVar3[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                uVar12 = *(undefined4 *)(param_2 + 0x3c);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar3 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar3 = 0x3;
                                puVar3[0x1] = iVar16;
                                puVar3[0x2] = uVar12;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar3 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar3 = 0x1;
                                puVar3[0x1] = iVar15;
                                puVar3[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                iVar11 = *(int *)(param_2 + 0x40);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar3 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar3 = 0x7;
                                puVar3[0x1] = iVar1;
                                puVar3[0x2] = iVar11 + 0x1;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                iVar11 = *(int *)(param_2 + 0x40);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar3 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar3 = 0x5;
                                puVar3[0x1] = iVar11 + 0x1;
                                puVar3[0x2] = iVar11;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                iVar11 = *(int *)(param_2 + 0x3c);
                                uVar12 = *(undefined4 *)(param_2 + 0x40);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar3 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar3 = 0x6;
                                puVar3[0x1] = uVar12;
                                puVar3[0x2] = iVar11 + 0x1;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar3 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar3 = 0xb;
                                puVar3[0x1] = 0x0;
                                puVar3[0x2] = 0x0;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                *(undefined4 *)(param_2 + 0x1c) = 0x1;
                                return 0xffffffff;
                            }
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar3 = 0x1;
                            puVar3[0x1] = iVar15;
                            puVar3[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar11 = *(int *)(param_2 + 0x40);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar3 = 0x3;
                            puVar3[0x1] = iVar1;
                            puVar3[0x2] = iVar11 + 0x1;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar3 = 0x1;
                            puVar3[0x1] = iVar7;
                            puVar3[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            uVar12 = *(undefined4 *)(param_2 + 0x40);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar3 = 0x3;
                            puVar3[0x1] = iVar16;
                            puVar3[0x2] = uVar12;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar3 = 0x1;
                            puVar3[0x1] = iVar15;
                            puVar3[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar11 = *(int *)(param_2 + 0x3c);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar3 = 0x7;
                            puVar3[0x1] = iVar14;
                            puVar3[0x2] = iVar11 + -0x1;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar11 = *(int *)(param_2 + 0x3c);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar3 = 0x5;
                            puVar3[0x1] = iVar11 + -0x1;
                            puVar3[0x2] = iVar11;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar11 = *(int *)(param_2 + 0x40);
                            uVar12 = *(undefined4 *)(param_2 + 0x3c);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar3 = 0x6;
                            puVar3[0x1] = uVar12;
                            puVar3[0x2] = iVar11 + -0x1;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar3 = 0xb;
                            puVar3[0x1] = 0x0;
                            puVar3[0x2] = 0x0;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            *(undefined4 *)(param_2 + 0x1c) = 0x1;
                            return 0xffffffff;
                        }
                        piVar5 = piVar5 + 0xb;
                        iVar16 += 0x1;
                        iVar13 += -0x1;
                    } while (iVar13 != 0x0);
                }
            }
            else if ((iVar10 == 0x1) && (iVar4 == *(int *)(param_1 + iVar11 * 0x2c + 0x10))) {
                if (iVar11 - iVar2 < iVar8 - iVar11) {
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar3 = 0x1;
                    puVar3[0x1] = iVar15;
                    puVar3[0x2] = 0x0;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    iVar4 = *(int *)(param_2 + 0x3c);
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar3 = 0x3;
                    puVar3[0x1] = iVar14;
                    puVar3[0x2] = iVar4 + -0x1;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar3 = 0x1;
                    puVar3[0x1] = iVar7;
                    puVar3[0x2] = 0x0;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    uVar12 = *(undefined4 *)(param_2 + 0x3c);
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar3 = 0x3;
                    puVar3[0x1] = iVar11;
                    puVar3[0x2] = uVar12;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar3 = 0x1;
                    puVar3[0x1] = iVar15;
                    puVar3[0x2] = 0x0;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    iVar11 = *(int *)(param_2 + 0x40);
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar3 = 0x7;
                    puVar3[0x1] = iVar1;
                    puVar3[0x2] = iVar11 + 0x1;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    iVar11 = *(int *)(param_2 + 0x40);
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar3 = 0x5;
                    puVar3[0x1] = iVar11 + 0x1;
                    puVar3[0x2] = iVar11;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    iVar11 = *(int *)(param_2 + 0x3c);
                    uVar12 = *(undefined4 *)(param_2 + 0x40);
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar3 = 0x6;
                    puVar3[0x1] = uVar12;
                    puVar3[0x2] = iVar11 + 0x1;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar3 = 0xb;
                    puVar3[0x1] = 0x0;
                    puVar3[0x2] = 0x0;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    *(undefined4 *)(param_2 + 0x1c) = 0x1;
                    return 0xffffffff;
                }
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar3 = 0x1;
                puVar3[0x1] = iVar15;
                puVar3[0x2] = 0x0;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                iVar4 = *(int *)(param_2 + 0x40);
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar3 = 0x3;
                puVar3[0x1] = iVar1;
                puVar3[0x2] = iVar4 + 0x1;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar3 = 0x1;
                puVar3[0x1] = iVar7;
                puVar3[0x2] = 0x0;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                uVar12 = *(undefined4 *)(param_2 + 0x40);
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar3 = 0x3;
                puVar3[0x1] = iVar11;
                puVar3[0x2] = uVar12;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar3 = 0x1;
                puVar3[0x1] = iVar15;
                puVar3[0x2] = 0x0;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                iVar11 = *(int *)(param_2 + 0x3c);
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar3 = 0x7;
                puVar3[0x1] = iVar14;
                puVar3[0x2] = iVar11 + -0x1;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                iVar11 = *(int *)(param_2 + 0x3c);
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar3 = 0x5;
                puVar3[0x1] = iVar11 + -0x1;
                puVar3[0x2] = iVar11;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                iVar11 = *(int *)(param_2 + 0x40);
                uVar12 = *(undefined4 *)(param_2 + 0x3c);
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar3 = 0x6;
                puVar3[0x1] = uVar12;
                puVar3[0x2] = iVar11 + -0x1;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar3 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar3 = 0xb;
                puVar3[0x1] = 0x0;
                puVar3[0x2] = 0x0;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                *(undefined4 *)(param_2 + 0x1c) = 0x1;
                return 0xffffffff;
            }
        }
        iVar4 += 0x1;
        iVar15 = iVar7;
        if (0x7 < iVar4) {
            return 0x0;
        }
    } while( true );
}



undefined4 AIChainHori4(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    int *piVar5;
    undefined4 *puVar6;
    int iVar7;
    int *piVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    undefined4 uVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int iVar20;
    int iVar21;
    uint uVar22;
    int aiStack_70 [0x12];
    
    iVar19 = 0x0;
    iVar17 = 0x0;
    iVar15 = 0x0;
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0xf5a,_3719,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0xf5b,_3720,0x0,0x0,0x0);
    }
    iVar9 = *(int *)(param_2 + 0x3c);
    iVar7 = *(int *)(param_2 + 0x40);
    iVar1 = (iVar7 + 0x1) - iVar9;
    iVar10 = param_1 + (*(int *)(param_2 + 0x38) + 0x1) * 0x318;
    iVar2 = iVar10 + iVar9 * 0x2c;
    if (iVar9 <= iVar7) {
        do {
            if (*(int *)(iVar2 + 0x10) == 0x0) break;
            iVar2 += 0x2c;
            iVar9 += 0x1;
            iVar1 += -0x1;
        } while (iVar1 != 0x0);
    }
    if (iVar7 < iVar9) {
        return 0x0;
    }
    iVar1 = *(int *)(param_2 + 0x2c);
    iVar10 += iVar1 * 0x2c;
    piVar8 = aiStack_70 + iVar1;
    uVar3 = (*(int *)(param_2 + 0x30) + 0x1) - iVar1;
    if (iVar1 <= *(int *)(param_2 + 0x30)) {
        uVar22 = uVar3 >> 0x3;
        if (uVar22 != 0x0) {
            do {
                *piVar8 = *(int *)(iVar10 + 0x10);
                piVar8[0x1] = *(int *)(iVar10 + 0x3c);
                piVar8[0x2] = *(int *)(iVar10 + 0x68);
                piVar8[0x3] = *(int *)(iVar10 + 0x94);
                piVar8[0x4] = *(int *)(iVar10 + 0xc0);
                piVar8[0x5] = *(int *)(iVar10 + 0xec);
                piVar8[0x6] = *(int *)(iVar10 + 0x118);
                piVar5 = (int *)(iVar10 + 0x144);
                iVar10 += 0x160;
                piVar8[0x7] = *piVar5;
                piVar8 = piVar8 + 0x8;
                uVar22 -= 0x1;
            } while (uVar22 != 0x0);
            uVar3 &= 0x7;
            if (uVar3 == 0x0) goto LAB_0002c5b8;
        }
        do {
            piVar5 = (int *)(iVar10 + 0x10);
            iVar10 += 0x2c;
            *piVar8 = *piVar5;
            piVar8 = piVar8 + 0x1;
            uVar3 -= 0x1;
        } while (uVar3 != 0x0);
    }
LAB_0002c5b8:
    iVar2 = *(int *)(param_2 + 0x2c);
    iVar7 = *(int *)(param_2 + 0x38);
    iVar10 = *(int *)(param_2 + 0x30);
    piVar8 = (int *)(param_1 + iVar7 * 0x318 + iVar2 * 0x2c);
    iVar1 = iVar2;
    do {
        if (iVar10 < iVar1) {
            return 0x0;
        }
        if (((*piVar8 == 0x0) && (iVar9 = piVar8[0x4], iVar9 != 0x0)) && (iVar9 < 0x8)) {
            iVar4 = (iVar10 + 0x1) - iVar2;
            piVar5 = aiStack_70 + iVar2;
            iVar21 = iVar2;
            iVar20 = -0x1;
            if (iVar2 <= iVar10) {
                do {
                    iVar20 = iVar21;
                    if (iVar9 == *piVar5) break;
                    piVar5 = piVar5 + 0x1;
                    iVar21 += 0x1;
                    iVar4 += -0x1;
                    iVar20 = -0x1;
                } while (iVar4 != 0x0);
            }
            if (iVar20 != -0x1) {
                iVar4 = *(int *)(param_2 + 0x3c);
                piVar5 = aiStack_70 + iVar4;
                iVar13 = param_1 + iVar4 * 0x2c;
                for (iVar21 = iVar4; iVar21 <= *(int *)(param_2 + 0x40); iVar21 += 0x1) {
                    iVar16 = -0x1;
                    iVar18 = -0x1;
                    iVar15 = iVar16;
                    iVar17 = iVar18;
                    if (*piVar5 == 0x0) {
                        iVar19 = iVar7 + 0x2;
                        iVar11 = 0xc - iVar19;
                        iVar12 = iVar13 + iVar19 * 0x318;
                        if (iVar19 < 0xc) {
                            do {
                                if ((((iVar21 != 0x0) && (iVar9 == *(int *)(iVar12 + -0x1c))) &&
                                    (iVar15 = iVar16, iVar17 = iVar19,
                                    *(int *)(iVar12 + -0x2c) == 0x0)) ||
                                   (((iVar21 != 0x5 && (iVar9 == *(int *)(iVar12 + 0x3c))) &&
                                    (iVar15 = iVar19, iVar17 = iVar18,
                                    *(int *)(iVar12 + 0x2c) == 0x0)))) break;
                                iVar12 += 0x318;
                                iVar19 += 0x1;
                                iVar11 += -0x1;
                                iVar15 = iVar16;
                                iVar17 = iVar18;
                            } while (iVar11 != 0x0);
                        }
                    }
                    if ((iVar17 != -0x1) || (iVar15 != -0x1)) break;
                    piVar5 = piVar5 + 0x1;
                    iVar13 += 0x2c;
                }
                if ((iVar17 != -0x1) || (iVar15 != -0x1)) {
                    if (iVar1 < iVar4) {
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar6 = 0x1;
                        puVar6[0x1] = iVar7;
                        puVar6[0x2] = 0x0;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        iVar15 = *(int *)(param_2 + 0x3c);
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar6 = 0x3;
                        puVar6[0x1] = iVar1;
                        puVar6[0x2] = iVar15 + -0x1;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar6 = 0x1;
                        puVar6[0x1] = iVar19;
                        puVar6[0x2] = 0x0;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        if (iVar17 == -0x1) {
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x3;
                            puVar6[0x1] = iVar21 + 0x1;
                            puVar6[0x2] = iVar21;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        }
                        else {
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x3;
                            puVar6[0x1] = iVar21 + -0x1;
                            puVar6[0x2] = iVar21;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        }
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar6 = 0x1;
                        puVar6[0x1] = iVar7 + 0x1;
                        puVar6[0x2] = 0x0;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar6 = 0x14;
                        puVar6[0x1] = iVar7 + 0x1;
                        puVar6[0x2] = iVar21;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        if (iVar20 < iVar21) {
                            iVar15 = *(int *)(param_2 + 0x3c);
                            if (iVar21 == iVar15) {
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x6;
                                puVar6[0x1] = iVar21;
                                puVar6[0x2] = iVar15 + 0x1;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                uVar14 = *(undefined4 *)(param_2 + 0x3c);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x6;
                                puVar6[0x1] = iVar20;
                                puVar6[0x2] = uVar14;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            }
                            else {
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x6;
                                puVar6[0x1] = iVar20;
                                puVar6[0x2] = iVar15;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                iVar15 = *(int *)(param_2 + 0x3c);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x6;
                                puVar6[0x1] = iVar21;
                                puVar6[0x2] = iVar15 + 0x1;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            }
                        }
                        else {
                            uVar14 = *(undefined4 *)(param_2 + 0x3c);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x6;
                            puVar6[0x1] = iVar21;
                            puVar6[0x2] = uVar14;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar15 = *(int *)(param_2 + 0x3c);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x6;
                            puVar6[0x1] = iVar20;
                            puVar6[0x2] = iVar15 + 0x1;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        }
                    }
                    else {
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar6 = 0x1;
                        puVar6[0x1] = iVar7;
                        puVar6[0x2] = 0x0;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        iVar15 = *(int *)(param_2 + 0x40);
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar6 = 0x3;
                        puVar6[0x1] = iVar1;
                        puVar6[0x2] = iVar15 + 0x1;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar6 = 0x1;
                        puVar6[0x1] = iVar19;
                        puVar6[0x2] = 0x0;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        if (iVar17 == -0x1) {
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x3;
                            puVar6[0x1] = iVar21 + 0x1;
                            puVar6[0x2] = iVar21;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        }
                        else {
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x3;
                            puVar6[0x1] = iVar21 + -0x1;
                            puVar6[0x2] = iVar21;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        }
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar6 = 0x1;
                        puVar6[0x1] = iVar7 + 0x1;
                        puVar6[0x2] = 0x0;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar6 = 0x14;
                        puVar6[0x1] = iVar7 + 0x1;
                        puVar6[0x2] = iVar21;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        if (iVar20 < iVar21) {
                            uVar14 = *(undefined4 *)(param_2 + 0x40);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x6;
                            puVar6[0x1] = iVar21;
                            puVar6[0x2] = uVar14;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            iVar15 = *(int *)(param_2 + 0x40);
                            if (param_2 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x6;
                            puVar6[0x1] = iVar20;
                            puVar6[0x2] = iVar15 + -0x1;
                            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        }
                        else {
                            iVar15 = *(int *)(param_2 + 0x40);
                            if (iVar21 == iVar15) {
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x6;
                                puVar6[0x1] = iVar21;
                                puVar6[0x2] = iVar15 + -0x1;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                uVar14 = *(undefined4 *)(param_2 + 0x40);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x6;
                                puVar6[0x1] = iVar20;
                                puVar6[0x2] = uVar14;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            }
                            else {
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x6;
                                puVar6[0x1] = iVar20;
                                puVar6[0x2] = iVar15;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                                iVar15 = *(int *)(param_2 + 0x40);
                                if (param_2 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x6;
                                puVar6[0x1] = iVar21;
                                puVar6[0x2] = iVar15 + -0x1;
                                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                            }
                        }
                    }
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0xb;
                    puVar6[0x1] = 0x0;
                    puVar6[0x2] = 0x0;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    *(undefined4 *)(param_2 + 0x1c) = 0x1;
                    return 0xffffffff;
                }
            }
        }
        piVar8 = piVar8 + 0xb;
        iVar1 += 0x1;
    } while( true );
}



undefined4 AIChainHori5(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    int *piVar4;
    int iVar5;
    undefined4 *puVar6;
    int iVar7;
    int *piVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int *piVar12;
    int *piVar13;
    int iVar14;
    int *piVar15;
    int iVar16;
    undefined4 uVar17;
    int iVar18;
    int iVar19;
    int iVar20;
    int iVar21;
    int iVar22;
    uint uVar23;
    int aiStack_80 [0x15];
    
    iVar21 = 0x0;
    iVar19 = 0x0;
    iVar18 = 0x0;
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x1012,_3933,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x1013,_3934,0x0,0x0,0x0);
    }
    bzero(AIrowCheck,0x8c);
    bzero(AIcolCheck,0x8c);
    bzero(AItotCheck,0x1c);
    iVar9 = *(int *)(param_2 + 0x3c);
    iVar7 = *(int *)(param_2 + 0x40);
    iVar1 = (iVar7 + 0x1) - iVar9;
    iVar11 = param_1 + (*(int *)(param_2 + 0x38) + 0x1) * 0x318;
    iVar2 = iVar11 + iVar9 * 0x2c;
    if (iVar9 <= iVar7) {
        do {
            if (*(int *)(iVar2 + 0x10) == 0x0) break;
            iVar2 += 0x2c;
            iVar9 += 0x1;
            iVar1 += -0x1;
        } while (iVar1 != 0x0);
    }
    if (iVar7 < iVar9) {
        return 0x0;
    }
    iVar1 = *(int *)(param_2 + 0x2c);
    iVar11 += iVar1 * 0x2c;
    piVar8 = aiStack_80 + iVar1;
    uVar3 = (*(int *)(param_2 + 0x30) + 0x1) - iVar1;
    if (iVar1 <= *(int *)(param_2 + 0x30)) {
        uVar23 = uVar3 >> 0x3;
        if (uVar23 != 0x0) {
            do {
                *piVar8 = *(int *)(iVar11 + 0x10);
                piVar8[0x1] = *(int *)(iVar11 + 0x3c);
                piVar8[0x2] = *(int *)(iVar11 + 0x68);
                piVar8[0x3] = *(int *)(iVar11 + 0x94);
                piVar8[0x4] = *(int *)(iVar11 + 0xc0);
                piVar8[0x5] = *(int *)(iVar11 + 0xec);
                piVar8[0x6] = *(int *)(iVar11 + 0x118);
                piVar13 = (int *)(iVar11 + 0x144);
                iVar11 += 0x160;
                piVar8[0x7] = *piVar13;
                piVar8 = piVar8 + 0x8;
                uVar23 -= 0x1;
            } while (uVar23 != 0x0);
            uVar3 &= 0x7;
            if (uVar3 == 0x0) goto LAB_0002d40c;
        }
        do {
            piVar13 = (int *)(iVar11 + 0x10);
            iVar11 += 0x2c;
            *piVar8 = *piVar13;
            piVar8 = piVar8 + 0x1;
            uVar3 -= 0x1;
        } while (uVar3 != 0x0);
    }
LAB_0002d40c:
    iVar11 = *(int *)(param_2 + 0x38);
    iVar2 = 0x1;
    iVar1 = param_1 + iVar11 * 0x318;
    do {
        iVar16 = (iVar2 + -0x1) * 0x14;
        iVar14 = *(int *)(param_2 + 0x3c) + -0x1;
        iVar7 = 0x0;
        piVar12 = (int *)(iVar1 + iVar14 * 0x2c);
        piVar4 = (int *)(AIrowCheck + iVar16);
        piVar15 = (int *)(AIcolCheck + iVar16);
        iVar9 = 0x0;
        piVar8 = piVar4;
        piVar13 = piVar15;
        for (; *(int *)(param_2 + 0x2c) <= iVar14; iVar14 += -0x1) {
            if ((iVar2 == piVar12[0x4]) && (*piVar12 == 0x0)) {
                *piVar8 = iVar11;
                piVar8 = piVar8 + 0x1;
                iVar7 += 0x1;
                *piVar13 = iVar14;
                piVar13 = piVar13 + 0x1;
            }
            if (iVar7 == 0x2) break;
            piVar12 = piVar12 + -0xb;
        }
        iVar14 = *(int *)(param_2 + 0x40) + 0x1;
        piVar13 = (int *)(iVar1 + iVar14 * 0x2c);
        piVar8 = piVar15;
        for (; iVar14 <= *(int *)(param_2 + 0x30); iVar14 += 0x1) {
            if ((iVar2 == piVar13[0x4]) && (*piVar13 == 0x0)) {
                piVar4[0x2] = iVar11;
                piVar4 = piVar4 + 0x1;
                iVar9 += 0x1;
                piVar8[0x2] = iVar14;
                piVar8 = piVar8 + 0x1;
            }
            if (iVar9 == 0x2) break;
            piVar13 = piVar13 + 0xb;
        }
        if ((0x1 < iVar7) || (0x1 < iVar9)) {
            iVar14 = *(int *)(param_2 + 0x3c);
            piVar8 = aiStack_80 + iVar14;
            iVar9 = param_1 + iVar14 * 0x2c;
            for (; iVar14 <= *(int *)(param_2 + 0x40); iVar14 += 0x1) {
                iVar20 = -0x1;
                iVar22 = -0x1;
                iVar19 = iVar20;
                iVar21 = iVar22;
                if (*piVar8 == 0x0) {
                    iVar18 = *(int *)(param_2 + 0x38) + 0x2;
                    iVar5 = 0xc - iVar18;
                    iVar10 = iVar9 + iVar18 * 0x318;
                    if (iVar18 < 0xc) {
                        do {
                            if ((((iVar14 != 0x0) && (iVar2 == *(int *)(iVar10 + -0x1c))) &&
                                (iVar19 = iVar20, iVar21 = iVar18, *(int *)(iVar10 + -0x2c) == 0x0))
                               || (((iVar14 != 0x5 && (iVar2 == *(int *)(iVar10 + 0x3c))) &&
                                   (iVar19 = iVar18, iVar21 = iVar22, *(int *)(iVar10 + 0x2c) == 0x0
                                   )))) break;
                            iVar10 += 0x318;
                            iVar18 += 0x1;
                            iVar5 += -0x1;
                            iVar19 = iVar20;
                            iVar21 = iVar22;
                        } while (iVar5 != 0x0);
                    }
                }
                if ((iVar21 != -0x1) || (iVar19 != -0x1)) break;
                piVar8 = piVar8 + 0x1;
                iVar9 += 0x2c;
            }
            if ((iVar21 != -0x1) || (iVar19 != -0x1)) {
                if (iVar7 == 0x0) {
                    uVar17 = *(undefined4 *)(param_2 + 0x38);
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x1;
                    puVar6[0x1] = uVar17;
                    puVar6[0x2] = 0x0;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    iVar19 = *(int *)(param_2 + 0x40);
                    uVar17 = *(undefined4 *)(AIcolCheck + iVar16 + 0x8);
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x3;
                    puVar6[0x1] = uVar17;
                    puVar6[0x2] = iVar19 + 0x1;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    uVar17 = *(undefined4 *)(param_2 + 0x38);
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x1;
                    puVar6[0x1] = uVar17;
                    puVar6[0x2] = 0x0;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    iVar19 = *(int *)(param_2 + 0x40);
                    uVar17 = *(undefined4 *)(AIcolCheck + iVar16 + 0xc);
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x3;
                    puVar6[0x1] = uVar17;
                    puVar6[0x2] = iVar19 + 0x2;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x1;
                    puVar6[0x1] = iVar18;
                    puVar6[0x2] = 0x0;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    if (iVar21 == -0x1) {
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar6 = 0x3;
                        puVar6[0x1] = iVar14 + 0x1;
                        puVar6[0x2] = iVar14;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    }
                    else {
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar6 = 0x3;
                        puVar6[0x1] = iVar14 + -0x1;
                        puVar6[0x2] = iVar14;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    }
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x1;
                    puVar6[0x1] = iVar11 + 0x1;
                    puVar6[0x2] = 0x0;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x14;
                    puVar6[0x1] = iVar11 + 0x1;
                    puVar6[0x2] = iVar14;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    uVar17 = *(undefined4 *)(param_2 + 0x40);
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x6;
                    puVar6[0x1] = iVar14;
                    puVar6[0x2] = uVar17;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                }
                else {
                    uVar17 = *(undefined4 *)(param_2 + 0x38);
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x1;
                    puVar6[0x1] = uVar17;
                    puVar6[0x2] = 0x0;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    iVar19 = *(int *)(param_2 + 0x3c);
                    iVar1 = *piVar15;
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x3;
                    puVar6[0x1] = iVar1;
                    puVar6[0x2] = iVar19 + -0x1;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    uVar17 = *(undefined4 *)(param_2 + 0x38);
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x1;
                    puVar6[0x1] = uVar17;
                    puVar6[0x2] = 0x0;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    iVar19 = *(int *)(param_2 + 0x3c);
                    uVar17 = *(undefined4 *)(AIcolCheck + iVar16 + 0x4);
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x3;
                    puVar6[0x1] = uVar17;
                    puVar6[0x2] = iVar19 + -0x2;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x1;
                    puVar6[0x1] = iVar18;
                    puVar6[0x2] = 0x0;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    if (iVar21 == -0x1) {
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar6 = 0x3;
                        puVar6[0x1] = iVar14 + 0x1;
                        puVar6[0x2] = iVar14;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    }
                    else {
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar6 = 0x3;
                        puVar6[0x1] = iVar14 + -0x1;
                        puVar6[0x2] = iVar14;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    }
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x1;
                    puVar6[0x1] = iVar11 + 0x1;
                    puVar6[0x2] = 0x0;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x14;
                    puVar6[0x1] = iVar11 + 0x1;
                    puVar6[0x2] = iVar14;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    uVar17 = *(undefined4 *)(param_2 + 0x3c);
                    if (param_2 == 0x0) {
                        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                    }
                    puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                    *puVar6 = 0x6;
                    puVar6[0x1] = iVar14;
                    puVar6[0x2] = uVar17;
                    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                }
                if (param_2 == 0x0) {
                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                }
                puVar6 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                *puVar6 = 0xb;
                puVar6[0x1] = 0x0;
                puVar6[0x2] = 0x0;
                *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                *(undefined4 *)(param_2 + 0x1c) = 0x1;
                return 0xffffffff;
            }
        }
        iVar2 += 0x1;
        if (0x7 < iVar2) {
            return 0x0;
        }
    } while( true );
}



undefined4 AIClearGarbage(int param_1,int *param_2,int param_3)

{
    bool bVar1;
    undefined4 uVar2;
    int iVar3;
    int *piVar4;
    int iVar5;
    undefined4 *puVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int *piVar11;
    int iVar12;
    int iVar13;
    int *piVar14;
    int *piVar15;
    int local_54 [0x5];
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x10c9,_4083,0x0,0x0,0x0);
    }
    if (param_2 == NULL) {
        gc_assert(0x0,&_215,0x10ca,_4084,0x0,0x0,0x0);
    }
    if (param_3 == 0x0) {
        gc_assert(0x0,&_215,0x10cb,_4085,0x0,0x0,0x0);
    }
    if (*param_2 == 0x2) {
        uVar2 = 0x0;
    }
    else {
        iVar7 = *(int *)(param_3 + 0x20) + -0x1;
        iVar3 = AIPossibleRow(param_1,param_3,iVar7);
        if (iVar3 == 0x0) {
            if (*(int *)(param_3 + 0x20) < 0x3) {
                uVar2 = 0x0;
            }
            else {
                piVar4 = (int *)(param_1 + (*(int *)(param_3 + 0x20) + -0x1) * 0x318);
                if (*piVar4 == 0x7) {
                    uVar2 = 0x0;
                }
                else if (piVar4[0xb] == 0x7) {
                    uVar2 = 0x0;
                }
                else if (piVar4[0x16] == 0x7) {
                    uVar2 = 0x0;
                }
                else if (piVar4[0x21] == 0x7) {
                    uVar2 = 0x0;
                }
                else if (piVar4[0x2c] == 0x7) {
                    uVar2 = 0x0;
                }
                else if (piVar4[0x37] == 0x7) {
                    uVar2 = 0x0;
                }
                else {
                    bzero(AIrowCheck,0x8c);
                    bzero(AIcolCheck,0x8c);
                    bzero(AItotCheck,0x1c);
                    iVar3 = 0x0;
                    iVar7 = 0x0;
                    do {
                        iVar10 = *(int *)(param_3 + 0x20) + -0x1;
                        iVar13 = *(int *)(param_1 + iVar10 * 0x318 + iVar7 + 0x10);
                        if (iVar13 != 0x0) {
                            piVar4 = (int *)(AItotCheck + (iVar13 + -0x1) * 0x4);
                            if (*piVar4 == 0x0) {
                                iVar12 = (iVar13 + -0x1) * 0x14;
                                piVar11 = (int *)(AIrowCheck + iVar12);
                                *piVar11 = iVar10;
                                piVar14 = (int *)(param_1 + iVar10 * 0x318);
                                iVar8 = 0x0;
                                *(int *)(AIcolCheck + *piVar4 * 0x4 + iVar12) = iVar3;
                                *piVar4 = *piVar4 + 0x1;
                                while( true ) {
                                    bVar1 = iVar10 < 0x0;
                                    piVar14 = piVar14 + -0xc6;
                                    iVar10 += -0x1;
                                    if (bVar1) break;
                                    iVar9 = 0x0;
                                    piVar15 = piVar14;
                                    do {
                                        if (((iVar13 == piVar15[0x4]) && (*piVar15 == 0x0)) &&
                                           (iVar5 = AIMoveAcross(param_1,iVar10,iVar9,iVar3),
                                           iVar5 != 0x0)) {
                                            piVar11[*piVar4] = iVar10;
                                            *(int *)(AIcolCheck + *piVar4 * 0x4 + iVar12) = iVar9;
                                            *piVar4 = *piVar4 + 0x1;
                                            break;
                                        }
                                        iVar9 += 0x1;
                                        piVar15 = piVar15 + 0xb;
                                    } while (iVar9 < 0x6);
                                    if ((iVar9 == 0x6) || (iVar8 += 0x1, 0x2 < iVar8)) break;
                                }
                                if (0x2 < *piVar4) {
                                    local_54[0] = *piVar11;
                                    piVar14 = local_54;
                                    local_54[1] = *(int *)(AIrowCheck + iVar12 + 0x4);
                                    local_54[2] = *(int *)(AIrowCheck + iVar12 + 0x8);
                                    AISortRows(*(undefined4 *)(param_3 + 0x4),0x3,piVar14);
                                    iVar7 = param_1 + *(int *)(param_3 + 0x20) * 0x318;
                                    if (*(int *)(iVar7 + iVar3 * 0x2c + 0x10) != 0x9) {
                                        if (*(int *)(iVar7 + 0x68) == 0x9) {
                                            iVar3 = 0x2;
                                        }
                                        else {
                                            iVar3 = 0x3;
                                        }
                                    }
                                    if ((((*(byte *)(param_3 + 0x14) & 0x80) != 0x0) &&
                                        (0x3 < *piVar4)) && (*(int *)(param_1 + 0x4ad4) == 0x0)) {
                                        iVar7 = *(int *)(AIcolCheck + iVar12 + 0xc) - iVar3;
                                        if (iVar7 < 0x1) {
                                            iVar7 = -iVar7;
                                        }
                                        if ((iVar7 != 0x0) && (iVar7 < 0x3)) {
                                            uVar2 = *(undefined4 *)(AIrowCheck + iVar12 + 0xc);
                                            if (param_3 == 0x0) {
                                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                            }
                                            puVar6 = (undefined4 *)
                                                     (param_3 +
                                                     *(int *)(param_3 + 0xfc) * 0xc + 0x44);
                                            *puVar6 = 0x1;
                                            puVar6[0x1] = uVar2;
                                            puVar6[0x2] = 0x0;
                                            *(int *)(param_3 + 0x100) =
                                                 *(int *)(param_3 + 0x100) + 0x1;
                                            *(int *)(param_3 + 0xfc) =
                                                 *(int *)(param_3 + 0xfc) + 0x1;
                                            iVar7 = *(int *)(AIcolCheck + iVar12 + 0xc);
                                            if (param_3 == 0x0) {
                                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                            }
                                            puVar6 = (undefined4 *)
                                                     (param_3 +
                                                     *(int *)(param_3 + 0xfc) * 0xc + 0x44);
                                            *puVar6 = 0x4;
                                            puVar6[0x1] = iVar7;
                                            puVar6[0x2] = iVar3;
                                            *(int *)(param_3 + 0x100) =
                                                 *(int *)(param_3 + 0x100) + 0x1;
                                            *(int *)(param_3 + 0xfc) =
                                                 *(int *)(param_3 + 0xfc) + 0x1;
                                        }
                                    }
                                    iVar7 = 0x0;
                                    do {
                                        iVar10 = *piVar14 * 0x4;
                                        if (iVar3 != *(int *)(AIcolCheck + iVar10 + iVar12)) {
                                            iVar13 = piVar11[*piVar14];
                                            if (param_3 == 0x0) {
                                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                            }
                                            puVar6 = (undefined4 *)
                                                     (param_3 +
                                                     *(int *)(param_3 + 0xfc) * 0xc + 0x44);
                                            *puVar6 = 0x1;
                                            puVar6[0x1] = iVar13;
                                            puVar6[0x2] = 0x0;
                                            *(int *)(param_3 + 0x100) =
                                                 *(int *)(param_3 + 0x100) + 0x1;
                                            *(int *)(param_3 + 0xfc) =
                                                 *(int *)(param_3 + 0xfc) + 0x1;
                                            uVar2 = *(undefined4 *)(AIcolCheck + iVar10 + iVar12);
                                            if (param_3 == 0x0) {
                                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                            }
                                            puVar6 = (undefined4 *)
                                                     (param_3 +
                                                     *(int *)(param_3 + 0xfc) * 0xc + 0x44);
                                            *puVar6 = 0x4;
                                            puVar6[0x1] = uVar2;
                                            puVar6[0x2] = iVar3;
                                            *(int *)(param_3 + 0x100) =
                                                 *(int *)(param_3 + 0x100) + 0x1;
                                            *(int *)(param_3 + 0xfc) =
                                                 *(int *)(param_3 + 0xfc) + 0x1;
                                        }
                                        iVar7 += 0x1;
                                        piVar14 = piVar14 + 0x1;
                                    } while (iVar7 < 0x3);
                                    return 0xffffffff;
                                }
                            }
                        }
                        iVar3 += 0x1;
                        iVar7 += 0x2c;
                    } while (iVar3 < 0x6);
                    uVar2 = 0x0;
                }
            }
        }
        else {
            if (param_3 == 0x0) {
                gc_assert(0x0,&_215,0x240,_265,0x0,0x0,0x0);
            }
            *(undefined4 *)(param_3 + 0x100) = 0x0;
            *(undefined4 *)(param_3 + 0xf8) = 0x0;
            *(undefined4 *)(param_3 + 0xfc) = 0x0;
            if (param_3 == 0x0) {
                gc_assert(0x0,&_215,0x236,_258,0x0,0x0,0x0);
            }
            *(undefined4 *)(param_3 + 0x120) = 0x0;
            *(undefined4 *)(param_3 + 0x124) = 0x0;
            if (param_3 == 0x0) {
                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
            }
            puVar6 = (undefined4 *)(param_3 + *(int *)(param_3 + 0xfc) * 0xc + 0x44);
            *puVar6 = 0x1;
            puVar6[0x1] = iVar7;
            puVar6[0x2] = 0x0;
            *(int *)(param_3 + 0x100) = *(int *)(param_3 + 0x100) + 0x1;
            *(int *)(param_3 + 0xfc) = *(int *)(param_3 + 0xfc) + 0x1;
            AIPossibleRow(param_1,param_3,iVar7);
            uVar2 = 0xffffffff;
        }
    }
    return uVar2;
}



undefined4 AIClearPosition(int param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    undefined4 *puVar2;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x116b,_4142,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x116c,_4143,0x0,0x0,0x0);
    }
    iVar1 = param_1 + param_3 * 0x318;
    if (*(int *)(iVar1 + 0x10 + param_4 * 0x2c) == 0x0) {
        return 0xffffffff;
    }
    if (param_4 == 0x0) {
        if (*(int *)(iVar1 + 0x3c) == 0x0) {
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
            }
            puVar2 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
            *puVar2 = 0x1;
            puVar2[0x1] = param_3;
            puVar2[0x2] = 0x0;
            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
            }
            puVar2 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
            *puVar2 = 0x3;
            puVar2[0x1] = 0x0;
            puVar2[0x2] = 0x1;
            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            return 0xffffffff;
        }
    }
    else if (param_4 == 0x5) {
        if (*(int *)(iVar1 + 0xc0) == 0x0) {
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
            }
            puVar2 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
            *puVar2 = 0x1;
            puVar2[0x1] = param_3;
            puVar2[0x2] = 0x0;
            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
            }
            puVar2 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
            *puVar2 = 0x3;
            puVar2[0x1] = 0x5;
            puVar2[0x2] = 0x4;
            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            return 0xffffffff;
        }
    }
    else {
        iVar1 = param_1 + param_3 * 0x318 + param_4 * 0x2c;
        if (*(int *)(iVar1 + 0x3c) == 0x0) {
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
            }
            puVar2 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
            *puVar2 = 0x1;
            puVar2[0x1] = param_3;
            puVar2[0x2] = 0x0;
            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
            }
            puVar2 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
            *puVar2 = 0x3;
            puVar2[0x1] = param_4;
            puVar2[0x2] = param_4 + 0x1;
            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            return 0xffffffff;
        }
        if (*(int *)(iVar1 + -0x1c) == 0x0) {
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
            }
            puVar2 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
            *puVar2 = 0x1;
            puVar2[0x1] = param_3;
            puVar2[0x2] = 0x0;
            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
            }
            puVar2 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
            *puVar2 = 0x3;
            puVar2[0x1] = param_4;
            puVar2[0x2] = param_4 + -0x1;
            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            return 0xffffffff;
        }
    }
    return 0x0;
}



undefined4 AIChainPack(int *param_1,int param_2,int param_3)

{
    int iVar1;
    int *piVar2;
    int *piVar3;
    int *piVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    undefined1 *puVar10;
    int iVar11;
    
    if (param_1 == NULL) {
        gc_assert(0x0,&_215,0x11a8,_4286,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x11a9,_4287,0x0,0x0,0x0);
    }
    if (param_3 == 0x0) {
        gc_assert(0x0,&_215,0x11aa,_4288,0x0,0x0,0x0);
    }
    iVar9 = 0x0;
    iVar7 = 0x0;
    piVar4 = (int *)AItotCheck;
    piVar3 = param_1;
    do {
        if (*piVar4 == -0x1) {
            iVar1 = *(int *)(param_3 + 0x20);
            iVar6 = 0x0;
            piVar2 = piVar3;
            if (0x0 < iVar1) {
                do {
                    if (piVar2[0x4] == 0x0) {
                        if (iVar9 < iVar6) {
                            iVar9 = iVar6;
                        }
                        break;
                    }
                    piVar2 = piVar2 + 0xc6;
                    iVar6 += 0x1;
                    iVar1 += -0x1;
                } while (iVar1 != 0x0);
            }
        }
        iVar7 += 0x1;
        piVar4 = piVar4 + 0x1;
        piVar3 = piVar3 + 0xb;
        if (0x5 < iVar7) {
            if (iVar9 == 0x0) {
                iVar7 = 0x1;
                do {
                    iVar1 = -0x1;
                    piVar4 = param_1;
                    for (iVar6 = 0x0; iVar6 < *(int *)(param_3 + 0x20); iVar6 += 0x1) {
                        iVar11 = 0x6;
                        iVar8 = 0x0;
                        piVar3 = (int *)AItotCheck;
                        piVar2 = piVar4;
                        do {
                            if (((*piVar3 != -0x1) && (iVar7 == piVar2[0x4])) && (*piVar2 == 0x0)) {
                                iVar5 = iVar6;
                                if (((iVar1 != -0x1) && (iVar6 - iVar1 != 0x1)) &&
                                   (iVar1 = AILowerRow(param_1,param_3,iVar6,iVar8), iVar1 != 0x0))
                                {
                                    return 0xffffffff;
                                }
                                break;
                            }
                            piVar3 = piVar3 + 0x1;
                            piVar2 = piVar2 + 0xb;
                            iVar8 += 0x1;
                            iVar11 += -0x1;
                            iVar5 = iVar1;
                        } while (iVar11 != 0x0);
                        piVar4 = piVar4 + 0xc6;
                        iVar1 = iVar5;
                    }
                    iVar7 += 0x1;
                } while (iVar7 < 0x7);
                iVar7 = *(int *)(param_3 + 0x20) + -0x1;
                piVar4 = param_1 + iVar7 * 0xc6;
                for (; 0x0 < iVar7; iVar7 += -0x1) {
                    iVar1 = 0x1;
                    do {
                        iVar6 = 0x0;
                        iVar11 = 0x6;
                        iVar8 = 0x0;
                        piVar3 = piVar4;
                        do {
                            if ((iVar1 == piVar3[0x4]) && (*piVar3 == 0x0)) {
                                if (iVar6 == 0x0) {
                                    iVar9 = iVar8;
                                }
                                iVar6 += 0x1;
                                if (0x1 < iVar6) {
                                    iVar6 = AILowerRow(param_1,param_3,iVar7,iVar9);
                                    if (iVar6 != 0x0) {
                                        return 0xffffffff;
                                    }
                                    iVar6 = AILowerRow(param_1,param_3,iVar7,iVar8);
                                    if (iVar6 != 0x0) {
                                        return 0xffffffff;
                                    }
                                    break;
                                }
                            }
                            piVar3 = piVar3 + 0xb;
                            iVar8 += 0x1;
                            iVar11 += -0x1;
                        } while (iVar11 != 0x0);
                        iVar1 += 0x1;
                    } while (iVar1 < 0x7);
                    piVar4 = piVar4 + -0xc6;
                }
                piVar4 = param_1;
                for (iVar9 = 0x0; iVar9 < *(int *)(param_3 + 0x20) + -0x1; iVar9 += 0x1) {
                    iVar7 = 0x0;
                    piVar3 = piVar4;
                    puVar10 = AItotCheck;
                    do {
                        if ((((piVar3[0x4] == 0x0) && (piVar3[0xd5] != 0x0)) &&
                            (piVar3[0xd1] == 0x0)) &&
                           ((*(int *)(puVar10 + 0x4) != -0x1 &&
                            (iVar1 = AILowerRow(param_1,param_3,iVar9 + 0x1,iVar7 + 0x1),
                            iVar1 != 0x0)))) {
                            return 0xffffffff;
                        }
                        iVar7 += 0x1;
                        piVar3 = piVar3 + 0xb;
                        puVar10 = puVar10 + 0x4;
                    } while (iVar7 < 0x5);
                    piVar4 = piVar4 + 0xc6;
                }
            }
            else {
                iVar7 = *(int *)(param_3 + 0x20) + -0x1;
                piVar4 = param_1 + iVar7 * 0xc6;
                for (; iVar9 <= iVar7; iVar7 += -0x1) {
                    iVar1 = 0x0;
                    piVar3 = piVar4;
                    do {
                        if (((piVar3[0x4] != 0x0) && (*piVar3 == 0x0)) &&
                           (iVar6 = AILowerRow(param_1,param_3,iVar7,iVar1), iVar6 != 0x0)) {
                            return 0xffffffff;
                        }
                        iVar1 += 0x1;
                        piVar3 = piVar3 + 0xb;
                    } while (iVar1 < 0x6);
                    piVar4 = piVar4 + -0xc6;
                }
            }
            return 0x0;
        }
    } while( true );
}



undefined4 AIChainGarbage1(int param_1,int param_2,int param_3)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined4 *puVar6;
    undefined1 *puVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int *piVar14;
    int *piVar15;
    undefined4 uVar16;
    int *piVar17;
    int *piVar18;
    int local_58 [0x4];
    
    iVar13 = 0x0;
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x1248,_4486,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x1249,_4487,0x0,0x0,0x0);
    }
    if (param_3 == 0x0) {
        gc_assert(0x0,&_215,0x124a,_4488,0x0,0x0,0x0);
    }
    if (0x1 < *(int *)(param_3 + 0x20)) {
        cVar1 = *(char *)(param_3 + 0x15);
        if (cVar1 < '\0') {
            if (*(int *)(param_1 + 0x4a88) <= (int)cVar1) {
                return 0x0;
            }
        }
        else if ((cVar1 == '\0') && (*(int *)(param_1 + 0x4a88) < -0x3)) {
            return 0x0;
        }
        bzero(AItotCheck,0x1c);
        piVar14 = (int *)(AItotCheck + 0x14);
        iVar11 = param_1 + 0xdc;
        iVar9 = 0x5;
        iVar12 = 0xdc;
        piVar15 = piVar14;
        do {
            iVar2 = *(int *)(param_1 + *(int *)(param_3 + 0x20) * 0x318 + iVar12 + 0x10);
            if ((iVar2 != 0x9) && (iVar2 != 0x0)) {
                *piVar15 = iVar2;
                iVar5 = 0x0;
                iVar3 = *(int *)(param_3 + 0x20);
                iVar4 = iVar3 + -0x1;
                iVar8 = iVar11 + iVar4 * 0x318;
                if (-0x1 < iVar4) {
                    do {
                        if (*(int *)(iVar8 + 0x10) != 0x0) {
                            if (iVar2 != *(int *)(iVar8 + 0x10)) break;
                            iVar5 += 0x1;
                        }
                        if (iVar5 == 0x2) {
                            *piVar15 = -0x1;
                            if (iVar13 < iVar4 + 0x1) {
                                iVar13 = iVar4 + 0x1;
                            }
                            break;
                        }
                        iVar8 += -0x318;
                        iVar4 += -0x1;
                        iVar3 += -0x1;
                    } while (iVar3 != 0x0);
                }
            }
            iVar9 += -0x1;
            iVar12 += -0x2c;
            piVar15 = piVar15 + -0x1;
            iVar11 += -0x2c;
        } while (-0x1 < iVar9);
        local_58[2] = param_1 + 0xdc;
        iVar11 = 0x5;
        iVar9 = 0xdc;
        do {
            iVar12 = *piVar14;
            if ((iVar12 != 0x0) && (iVar12 != -0x1)) {
                iVar4 = 0x0;
                iVar2 = 0x0;
                iVar5 = *(int *)(param_3 + 0x20) + -0x1;
                piVar15 = (int *)(param_1 + iVar5 * 0x318);
                iVar3 = 0x0;
                for (; -0x1 < iVar5; iVar5 += -0x1) {
                    iVar8 = 0x0;
                    piVar17 = (int *)AItotCheck;
                    piVar18 = piVar15;
                    do {
                        if (((*piVar17 != -0x1) && (iVar12 == piVar18[0x4])) && (*piVar18 == 0x0)) {
                            if (iVar12 == *(int *)((int)piVar15 + iVar9 + 0x10)) {
                                *(int *)(AIrowCheck + iVar2) = iVar5;
                                iVar3 += 0x1;
                                *(int *)(AIcolCheck + iVar2) = iVar11;
                                iVar4 += 0x1;
                                iVar2 = iVar2 + 0x4;
                                break;
                            }
                            iVar10 = AIMoveAcross(param_1,iVar5,iVar8,iVar11);
                            if (iVar10 != 0x0) {
                                *(int *)(AIrowCheck + iVar2) = iVar5;
                                iVar4 += 0x1;
                                *(int *)(AIcolCheck + iVar2) = iVar8;
                                iVar2 = iVar2 + 0x4;
                                break;
                            }
                        }
                        iVar8 += 0x1;
                        piVar17 = piVar17 + 0x1;
                        piVar18 = piVar18 + 0xb;
                    } while (iVar8 < 0x6);
                    if (iVar8 == 0x6) {
                        if (iVar4 != 0x0) break;
                    }
                    else if (iVar4 == 0x1) {
                        iVar8 = AIChainGarbage2(param_1,param_3,iVar12,iVar11);
                        if (iVar8 != 0x0) {
                            return 0xffffffff;
                        }
                        if (*piVar14 == -0x1) break;
                    }
                    else if (iVar4 == 0x2) break;
                    piVar15 = piVar15 + -0xc6;
                }
                if (iVar3 == 0x2) {
                    iVar12 = AIClearPosition(param_1,param_3,AIrowCheck._0_4_ + 0x1,iVar11);
                    if (iVar12 != 0x0) {
                        *piVar14 = -0x1;
                    }
                    if (iVar13 < AIrowCheck._0_4_) {
                        iVar13 = AIrowCheck._0_4_;
                    }
                }
                else if ((iVar4 == 0x2) &&
                        (((*(byte *)(param_3 + 0x14) & 0x40) != 0x0 || (iVar13 < AIrowCheck._0_4_)))
                        ) {
                    iVar5 = 0x0;
                    iVar8 = *(int *)(param_3 + 0x20);
                    iVar10 = AIrowCheck._0_4_ + 0x1;
                    iVar4 = iVar8 - iVar10;
                    piVar15 = (int *)(local_58[2] + iVar10 * 0x318);
                    iVar2 = iVar10;
                    iVar3 = iVar10;
                    if (iVar10 < iVar8) {
                        do {
                            if ((piVar15[0x4] != 0x0) && (*piVar15 == 0x0)) {
                                iVar5 += 0x1;
                                iVar3 = iVar2;
                            }
                            piVar15 = piVar15 + 0xc6;
                            iVar2 += 0x1;
                            iVar4 += -0x1;
                        } while (iVar4 != 0x0);
                    }
                    if ((iVar5 < 0x2) &&
                       ((iVar10 == iVar8 ||
                        (iVar2 = AIClearPosition(param_1,param_3,iVar3,iVar11), iVar2 != 0x0)))) {
                        iVar13 = AIrowCheck._4_4_ + -0x1;
                        if (iVar12 == *(int *)(param_1 + iVar13 * 0x318 + iVar11 * 0x2c + 0x10)) {
                            if (param_3 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_3 + *(int *)(param_3 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x1;
                            puVar6[0x1] = iVar13;
                            puVar6[0x2] = 0x0;
                            *(int *)(param_3 + 0x100) = *(int *)(param_3 + 0x100) + 0x1;
                            *(int *)(param_3 + 0xfc) = *(int *)(param_3 + 0xfc) + 0x1;
                            if (param_3 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_3 + *(int *)(param_3 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x2;
                            puVar6[0x1] = iVar11 + -0x1;
                            puVar6[0x2] = 0x0;
                            *(int *)(param_3 + 0x100) = *(int *)(param_3 + 0x100) + 0x1;
                            *(int *)(param_3 + 0xfc) = *(int *)(param_3 + 0xfc) + 0x1;
                            if (param_3 == 0x0) {
                                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                            }
                            puVar6 = (undefined4 *)(param_3 + *(int *)(param_3 + 0xfc) * 0xc + 0x44)
                            ;
                            *puVar6 = 0x9;
                            puVar6[0x1] = 0x0;
                            puVar6[0x2] = 0x0;
                            *(int *)(param_3 + 0x100) = *(int *)(param_3 + 0x100) + 0x1;
                            *(int *)(param_3 + 0xfc) = *(int *)(param_3 + 0xfc) + 0x1;
                        }
                        iVar13 = 0x0;
                        if (true) {
                            if (false) {
                                iVar9 = 0x0;
                                puVar7 = AIrowCheck;
                                piVar15 = local_58;
                                if (false) {
                                    do {
                                        iVar13 += 0x8;
                                        *piVar15 = *(int *)puVar7;
                                        piVar15[0x1] = *(int *)((int)puVar7 + 0x4);
                                        piVar15[0x2] = *(int *)((int)puVar7 + 0x8);
                                        piVar15[0x3] = *(int *)((int)puVar7 + 0xc);
                                        piVar15[0x4] = *(int *)((int)puVar7 + 0x10);
                                        piVar15[0x5] = *(int *)((int)puVar7 + 0x14);
                                        piVar15[0x6] = *(int *)((int)puVar7 + 0x18);
                                        piVar14 = (int *)((int)puVar7 + 0x1c);
                                        puVar7 = (undefined1 *)((int)puVar7 + 0x20);
                                        piVar15[0x7] = *piVar14;
                                        piVar15 = piVar15 + 0x8;
                                        iVar9 += -0x1;
                                    } while (iVar9 != 0x0);
                                }
                            }
                            piVar14 = local_58 + iVar13;
                            piVar15 = (int *)(AIrowCheck + iVar13 * 0x4);
                            iVar9 = 0x2 - iVar13;
                            if (iVar13 < 0x2) {
                                do {
                                    iVar13 = *piVar15;
                                    piVar15 = piVar15 + 0x1;
                                    *piVar14 = iVar13;
                                    piVar14 = piVar14 + 0x1;
                                    iVar9 += -0x1;
                                } while (iVar9 != 0x0);
                            }
                        }
                        AISortRows(*(undefined4 *)(param_3 + 0x4),0x2,local_58);
                        piVar15 = local_58;
                        for (iVar13 = 0x0; iVar13 < 0x2; iVar13 += 0x1) {
                            iVar9 = *piVar15 * 0x4;
                            if (iVar11 != *(int *)(AIcolCheck + iVar9)) {
                                uVar16 = *(undefined4 *)(AIrowCheck + iVar9);
                                if (param_3 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_3 + *(int *)(param_3 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x1;
                                puVar6[0x1] = uVar16;
                                puVar6[0x2] = 0x0;
                                *(int *)(param_3 + 0x100) = *(int *)(param_3 + 0x100) + 0x1;
                                *(int *)(param_3 + 0xfc) = *(int *)(param_3 + 0xfc) + 0x1;
                                uVar16 = *(undefined4 *)(AIcolCheck + iVar9);
                                if (param_3 == 0x0) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                puVar6 = (undefined4 *)
                                         (param_3 + *(int *)(param_3 + 0xfc) * 0xc + 0x44);
                                *puVar6 = 0x4;
                                puVar6[0x1] = uVar16;
                                puVar6[0x2] = iVar11;
                                *(int *)(param_3 + 0x100) = *(int *)(param_3 + 0x100) + 0x1;
                                *(int *)(param_3 + 0xfc) = *(int *)(param_3 + 0xfc) + 0x1;
                            }
                            piVar15 = piVar15 + 0x1;
                        }
                        *(undefined4 *)(AItotCheck + iVar11 * 0x4) = 0xffffffff;
                        return 0xffffffff;
                    }
                }
            }
            iVar11 += -0x1;
            piVar14 = piVar14 + -0x1;
            local_58[2] += -0x2c;
            iVar9 += -0x2c;
        } while (-0x1 < iVar11);
    }
    return 0x0;
}



undefined4 AIChainGarbage2(int param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    undefined4 *puVar5;
    int iVar6;
    int iVar7;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x134a,_4533,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x134b,_4534,0x0,0x0,0x0);
    }
    iVar1 = *(int *)(param_1 + *(int *)(param_2 + 0x20) * 0x318 + param_4 * 0x2c + 0x328);
    if (((iVar1 == param_3) && (iVar1 != 0x9)) && (iVar1 != 0x0)) {
        if (*(int *)(AItotCheck + param_4 * 0x4) == -0x1) {
            uVar2 = 0x0;
        }
        else {
            iVar1 = AIMoveAcross(param_1,AIrowCheck._0_4_,AIcolCheck._0_4_,param_4);
            if (iVar1 == 0x0) {
                uVar2 = 0x0;
            }
            else {
                iVar7 = 0x0;
                iVar4 = *(int *)(param_2 + 0x20);
                iVar6 = AIrowCheck._0_4_ + 0x1;
                iVar1 = iVar4 - iVar6;
                iVar3 = param_1 + param_4 * 0x2c + iVar6 * 0x318;
                if (iVar6 < iVar4) {
                    do {
                        if (*(int *)(iVar3 + 0x10) != 0x0) {
                            iVar7 += 0x1;
                        }
                        iVar3 += 0x318;
                        iVar1 += -0x1;
                    } while (iVar1 != 0x0);
                }
                if ((iVar7 < 0x2) &&
                   ((iVar6 == iVar4 ||
                    (iVar1 = AIClearPosition(param_1,param_2,iVar6,param_4), iVar1 != 0x0)))) {
                    *(int *)(AItotCheck + param_4 * 0x4) = -0x1;
                    iVar1 = AIrowCheck._0_4_;
                    if (AIcolCheck._0_4_ == param_4) {
                        uVar2 = 0x0;
                    }
                    else {
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar5 = 0x1;
                        puVar5[0x1] = iVar1;
                        puVar5[0x2] = 0x0;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                        iVar1 = AIcolCheck._0_4_;
                        if (param_2 == 0x0) {
                            gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                        }
                        uVar2 = 0xffffffff;
                        puVar5 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
                        *puVar5 = 0x4;
                        puVar5[0x1] = iVar1;
                        puVar5[0x2] = param_4;
                        *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
                        *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
                    }
                }
                else {
                    uVar2 = 0x0;
                }
            }
        }
    }
    else {
        uVar2 = 0x0;
    }
    return uVar2;
}



undefined4 AIStupidMove(int param_1,int param_2)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    undefined4 *puVar4;
    int iVar5;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x1387,_4594,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x1388,_4595,0x0,0x0,0x0);
    }
    iVar5 = 0x0;
    do {
        iVar1 = AIPossibleRow(param_1,param_2,iVar5);
        if (iVar1 != 0x0) {
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x240,_265,0x0,0x0,0x0);
            }
            *(undefined4 *)(param_2 + 0x100) = 0x0;
            *(undefined4 *)(param_2 + 0xf8) = 0x0;
            *(undefined4 *)(param_2 + 0xfc) = 0x0;
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x236,_258,0x0,0x0,0x0);
            }
            *(undefined4 *)(param_2 + 0x120) = 0x0;
            *(undefined4 *)(param_2 + 0x124) = 0x0;
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
            }
            puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
            *puVar4 = 0x1;
            puVar4[0x1] = iVar5;
            puVar4[0x2] = 0x0;
            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            AIPossibleRow(param_1,param_2,iVar5);
            return 0xffffffff;
        }
        iVar5 += 0x1;
    } while (iVar5 < 0xc);
    iVar5 = *(int *)(param_2 + 0x20);
    if (iVar5 != -0x1) {
        iVar1 = 0xb - iVar5;
        param_1 += 0x2208;
        iVar3 = 0xb;
        if (iVar5 < 0xb) {
            do {
                if ((*(int *)(param_1 + 0x68) != 0x0) || (*(int *)(param_1 + 0x94) != 0x0)) break;
                param_1 += -0x318;
                iVar3 += -0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
        if (iVar3 < 0xb) {
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
            }
            puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
            *puVar4 = 0xc;
            puVar4[0x1] = 0x0;
            puVar4[0x2] = 0x0;
            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            iVar5 = *(int *)(param_2 + 0x4);
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
            }
            puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
            *puVar4 = 0x1;
            puVar4[0x1] = iVar5 + -0x1;
            puVar4[0x2] = 0x0;
            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            if (param_2 == 0x0) {
                gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
            }
            puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
            *puVar4 = 0xa;
            puVar4[0x1] = 0x0;
            puVar4[0x2] = 0x0;
            *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
            *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
            return 0xffffffff;
        }
    }
    uVar2 = AnimationRandom(0x6);
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
    }
    puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
    *puVar4 = 0x1;
    puVar4[0x1] = uVar2;
    puVar4[0x2] = 0x0;
    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
    }
    puVar4 = (undefined4 *)(param_2 + *(int *)(param_2 + 0xfc) * 0xc + 0x44);
    *puVar4 = 0xa;
    puVar4[0x1] = 0x0;
    puVar4[0x2] = 0x0;
    *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 0x1;
    *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 0x1;
    return 0xffffffff;
}



void UpdateAI(int param_1,int *param_2,int *param_3,int param_4)

{
    char cVar1;
    uint uVar2;
    int iVar3;
    int *piVar4;
    int *piVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    
    iVar7 = 0x0;
    iVar8 = 0x0;
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x13ca,_4898,0x0,0x0,0x0);
    }
    if (param_2 == NULL) {
        gc_assert(0x0,&_215,0x13cb,_4899,0x0,0x0,0x0);
    }
    if (param_3 == NULL) {
        gc_assert(0x0,&_215,0x13cc,_4900,0x0,0x0,0x0);
    }
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x90a,_1838,0x0,0x0,0x0);
    }
    if (param_3 == NULL) {
        gc_assert(0x0,&_215,0x90b,_1839,0x0,0x0,0x0);
    }
    if ((param_3[0x2] < 0x1) || (*(int *)(param_1 + 0x4a88) == 0x0)) {
        if ((*(int *)(param_1 + 0x4a88) != *(int *)(chain_check + param_4 * 0x4)) &&
           (((*(int *)(param_1 + 0x4a88) == 0x0 && (-0x3 < *(int *)(chain_check + param_4 * 0x4)))
            && (param_3[0x2] == 0x0)))) {
            iVar3 = AnimationRandom(0x6f);
            param_3[0x2] = iVar3 + 0x14d;
        }
    }
    else {
        param_3[0x2] = 0x0;
    }
    if (0x0 < param_3[0x2]) {
        param_3[0x2] = param_3[0x2] + -0x1;
    }
    if ((param_2[0x1] == 0x0) && (*(int *)(param_1 + 0x4a90) < 0x1)) {
        *param_3 = param_2[0x4];
        param_3[0x1] = param_2[0x5];
        AISetGarbage(param_1,param_2,param_3);
        iVar3 = AIFlashCheck(param_1,param_3);
        if ((((iVar3 != 0x0) || ((param_3[0x7] != 0x2 || (*param_2 == 0x2)))) ||
            (0x0 < param_3[0x40])) || ((*param_2 != 0x1 && (param_2[0x2] == 0x0)))) {
            if (iVar3 != 0x0) {
                if ((param_3[0x7] == 0x1) &&
                   (iVar3 = AnimationRandom(0x141), iVar3 != (iVar3 / 0x3) * 0x3)) {
                    param_3[0xd] = 0x0;
                }
                else {
                    param_3[0x7] = 0x0;
                    if (param_3 == NULL) {
                        gc_assert(0x0,&_215,0x240,_265,0x0,0x0,0x0);
                    }
                    param_3[0x40] = 0x0;
                    param_3[0x3e] = 0x0;
                    param_3[0x3f] = 0x0;
                    if (param_3 == NULL) {
                        gc_assert(0x0,&_215,0x236,_258,0x0,0x0,0x0);
                    }
                    param_3[0x48] = 0x0;
                    param_3[0x49] = 0x0;
                }
            }
            if (param_3[0x48] == param_3[0x49]) {
                if (param_3[0x40] == 0x0) {
                    param_3[0x7] = 0x0;
                    if (param_3 == NULL) {
                        gc_assert(0x0,&_215,0x240,_265,0x0,0x0,0x0);
                    }
                    param_3[0x40] = 0x0;
                    param_3[0x3e] = 0x0;
                    param_3[0x3f] = 0x0;
                    if (param_3 == NULL) {
                        gc_assert(0x0,&_215,0x236,_258,0x0,0x0,0x0);
                    }
                    param_3[0x48] = 0x0;
                    param_3[0x49] = 0x0;
                }
                if ((param_3[0x40] == 0x0) && (param_3[0x8] != -0x1)) {
                    if (*param_2 == 0x2) {
                        if (((*(byte *)(param_3 + 0x5) & 0x20) == 0x0) ||
                           (iVar3 = AIChainGarbage1(param_1,param_2,param_3), iVar3 == 0x0)) {
                            iVar3 = AIChainPack(param_1,param_2,param_3);
                            if (iVar3 == 0x0) {
                                if (param_3 == NULL) {
                                    gc_assert(0x0,&_215,0x207,_246,0x0,0x0,0x0);
                                }
                                piVar4 = param_3 + param_3[0x3f] * 0x3 + 0x11;
                                *piVar4 = 0xe;
                                piVar4[0x1] = 0x0;
                                piVar4[0x2] = 0x0;
                                param_3[0x40] = param_3[0x40] + 0x1;
                                param_3[0x3f] = param_3[0x3f] + 0x1;
                            }
                            else {
                                param_3[0x6] = 0x1f;
                            }
                        }
                        else {
                            param_3[0x6] = 0x1e;
                        }
                        param_3[0x7] = 0x2;
                    }
                    else {
                        iVar3 = AIClearGarbage(param_1,param_2,param_3);
                        if (iVar3 == 0x0) {
                            iVar3 = AnimationRandom(0x7b4);
                            if ((iVar3 == (iVar3 / 0x3) * 0x3) &&
                               (iVar3 = AIVolumeCheck(param_1,param_2,param_3,0x0), iVar3 != 0x0)) {
                                param_3[0x6] = 0x32;
                            }
                        }
                        else {
                            param_3[0x6] = 0x20;
                        }
                    }
                }
                if (((param_3[0x40] == 0x0) && (param_3[0x2] < 0x1)) && (param_3[0xd] != 0x0)) {
                    if (param_3[0x8] == -0x1) {
                        cVar1 = *(char *)((int)param_3 + 0x15);
                        if (cVar1 < '\0') {
                            if ((int)cVar1 < *(int *)(param_1 + 0x4a88)) {
                                iVar7 = -0x1;
                            }
                        }
                        else if ((cVar1 == '\0') && (-0x4 < *(int *)(param_1 + 0x4a88))) {
                            iVar7 = -0x1;
                        }
                    }
                    else if ((0x5 < param_3[0x8]) && (-0x4 < *(int *)(param_1 + 0x4a88))) {
                        iVar7 = -0x1;
                    }
                    if (iVar7 != 0x0) {
                        if (param_3[0xd] == 0xb) {
                            iVar7 = AIChainVert1(param_1,param_3);
                            if (iVar7 == 0x0) {
                                iVar7 = AIChainVert2(param_1,param_3);
                                if (iVar7 == 0x0) {
                                    if (((*(byte *)(param_3 + 0x5) & 0x8) == 0x0) ||
                                       (iVar7 = AIChainVert4(param_1,param_3), iVar7 == 0x0)) {
                                        if (((*(byte *)(param_3 + 0x5) & 0x10) != 0x0) &&
                                           ((*(int *)(param_1 + 0x4a88) != 0x0 &&
                                            (iVar7 = AIChainVert5(param_1,param_3), iVar7 != 0x0))))
                                        {
                                            param_3[0x6] = 0xf;
                                        }
                                    }
                                    else {
                                        param_3[0x6] = 0xe;
                                    }
                                }
                                else {
                                    param_3[0x6] = 0xc;
                                }
                            }
                            else {
                                param_3[0x6] = 0xb;
                            }
                        }
                        else {
                            iVar7 = AIChainHori1(param_1,param_3);
                            if (iVar7 == 0x0) {
                                iVar7 = AIChainHori2(param_1,param_3);
                                if (iVar7 == 0x0) {
                                    if (((*(byte *)(param_3 + 0x5) & 0x4) == 0x0) ||
                                       (iVar7 = AIChainHori3(param_1,param_3), iVar7 == 0x0)) {
                                        if ((*(byte *)(param_3 + 0x5) & 0x8) != 0x0) {
                                            iVar7 = AIChainHori4(param_1,param_3);
                                            if (iVar7 == 0x0) {
                                                iVar7 = AIChainHori5(param_1,param_3);
                                                if (iVar7 != 0x0) {
                                                    param_3[0x6] = 0x19;
                                                }
                                            }
                                            else {
                                                param_3[0x6] = 0x18;
                                            }
                                        }
                                    }
                                    else {
                                        param_3[0x6] = 0x17;
                                    }
                                }
                                else {
                                    param_3[0x6] = 0x16;
                                }
                            }
                            else {
                                param_3[0x6] = 0x15;
                            }
                        }
                    }
                }
                if (param_3[0x40] == 0x0) {
                    uVar2 = countLeadingZeros(*(undefined4 *)(param_1 + 0x4a98));
                    iVar7 = AIVolumeCheck(param_1,param_2,param_3,uVar2 >> 0x5);
                    if (iVar7 != 0x0) {
                        param_3[0x6] = 0x33;
                    }
                }
                if (param_3[0x40] == 0x0) {
                    iVar7 = AIPossibleRow(param_1,param_3,param_3[0x1]);
                    if (iVar7 == 0x0) {
                        iVar7 = AIPossibleCol(param_1,param_3);
                        if (iVar7 == 0x0) {
                            if (param_3 == NULL) {
                                gc_assert(0x0,&_215,0x1ba,_216,0x0,0x0,0x0);
                            }
                            param_3[0xb] = 0x0;
                            param_3[0xc] = 0x5;
                            if (param_3[0x1] + 0x2 < 0xc) {
                                param_3[0x9] = param_3[0x1] + 0x2;
                            }
                            else {
                                param_3[0x9] = 0xb;
                            }
                            if (param_3[0x1] + -0x2 < 0x0) {
                                param_3[0xa] = 0x0;
                            }
                            else {
                                param_3[0xa] = param_3[0x1] + -0x2;
                            }
                            if (param_1 == 0x0) {
                                gc_assert(0x0,&_215,0x508,_803,0x0,0x0,0x0);
                            }
                            if (param_3 == NULL) {
                                gc_assert(0x0,&_215,0x509,_804,0x0,0x0,0x0);
                            }
                            bzero(AIrowCheck,0x8c);
                            bzero(AIcolCheck,0x8c);
                            bzero(AItotCheck,0x1c);
                            AIdistance._0_4_ = 0x12;
                            AIdistance._4_4_ = 0x12;
                            AIdistance._8_4_ = 0x12;
                            AIdistance._12_4_ = 0x12;
                            AIdistance._16_4_ = 0x12;
                            AIdistance._20_4_ = 0x12;
                            AIdistance._24_4_ = 0x12;
                            AIdistance._28_4_ = 0x12;
                            AIBoundaryCheck(param_1,param_3);
                            AIComboCheck(param_1,param_3);
                            if ((*(char *)((int)param_3 + 0x15) == '\0') &&
                               (iVar8 = AIComboX(param_3), iVar8 != 0x0)) {
                                param_3[0x6] = 0x9;
                            }
                            if (((iVar8 == 0x0) && (param_3[0x2] < 0x1)) &&
                               ((*(byte *)(param_3 + 0x5) & 0x1) != 0x0)) {
                                iVar3 = AnimationRandom(0x323);
                                iVar7 = iVar3 / 0x7 + (iVar3 >> 0x1f);
                                if (iVar3 == (iVar7 - (iVar7 >> 0x1f)) * 0x7) {
                                    iVar8 = AICombo45(param_3,0x5);
                                    if (iVar8 != 0x0) {
                                        param_3[0x6] = 0x3;
                                    }
                                }
                                else {
                                    iVar3 = AnimationRandom(0x236);
                                    iVar7 = iVar3 / 0x5 + (iVar3 >> 0x1f);
                                    if ((iVar3 == (iVar7 - (iVar7 >> 0x1f)) * 0x5) &&
                                       (iVar8 = AICombo45(param_3,0x4), iVar8 != 0x0)) {
                                        param_3[0x6] = 0x4;
                                    }
                                }
                            }
                            if (iVar8 == 0x0) {
                                iVar8 = AICombo3a(param_3);
                                if (iVar8 == 0x0) {
                                    iVar8 = AICombo3b(param_3);
                                    if (iVar8 != 0x0) {
                                        param_3[0x6] = 0x6;
                                    }
                                }
                                else {
                                    param_3[0x6] = 0x5;
                                }
                            }
                            if ((iVar8 == 0x0) &&
                               (iVar8 = AIVolumeCheck(param_1,param_2,param_3,0x0), iVar8 != 0x0)) {
                                param_3[0x6] = 0x34;
                            }
                            if ((iVar8 == 0x0) && (AIStupidMove(param_1,param_3), false)) {
                                param_3[0x6] = 0x7;
                            }
                        }
                        else {
                            param_3[0x6] = 0x2;
                        }
                    }
                    else {
                        param_3[0x6] = 0x1;
                    }
                }
                if (0x0 < param_3[0x40]) {
                    if (param_3 == NULL) {
                        gc_assert(0x0,&_215,0x236,_258,0x0,0x0,0x0);
                    }
                    param_3[0x48] = 0x0;
                    param_3[0x49] = 0x0;
                    do {
                        piVar4 = param_3 + param_3[0x3e] * 0x3 + 0x11;
                        if (true) {
                            switch(*piVar4) {
                            case 0x1:
                                piVar5 = param_3 + (param_3[0x3e] + 0x1) * 0x3 + 0x11;
                                if (((*piVar5 < 0x3) || (0x5 < *piVar5)) ||
                                   (piVar5[0x1] != piVar5[0x2])) {
                                    AIVertMove(param_3,piVar4[0x1]);
                                }
                                break;
                            case 0x2:
                                AIHoriMove(param_3,piVar4[0x1]);
                                break;
                            case 0x3:
                            case 0x7:
                                if ((param_3[0x7] == 0x1) &&
                                   (iVar8 = AIHoriMoveCheckCheck
                                                      (param_1,param_3,piVar4[0x1],piVar4[0x2]),
                                   iVar8 != 0x0)) {
                                    AISpeedUpMove(param_3);
                                }
                                AIHoriMoveBlock(param_3,piVar4[0x1],piVar4[0x2]);
                                break;
                            case 0x4:
                                iVar8 = AIShortestD(param_1,param_3,piVar4[0x1],piVar4[0x2]);
                                piVar4[0x1] = iVar8;
                                if ((param_3[0x7] == 0x1) &&
                                   (iVar8 = AIHoriMoveCheckCheck
                                                      (param_1,param_3,piVar4[0x1],piVar4[0x2]),
                                   iVar8 != 0x0)) {
                                    AISpeedUpMove(param_3);
                                }
                                AIHoriMoveBlock(param_3,piVar4[0x1],piVar4[0x2]);
                                break;
                            case 0x5:
                                if ((param_3[0x7] == 0x1) &&
                                   (iVar8 = AIHoriMoveCheckCheck
                                                      (param_1,param_3,piVar4[0x1],piVar4[0x2]),
                                   iVar8 != 0x0)) {
                                    AISpeedUpMove(param_3);
                                }
                                AIHoriMoveBlock(param_3,piVar4[0x1],piVar4[0x2]);
                                if (param_3[0x49] != 0x0) {
                                    *(undefined *)((int)param_3 + param_3[0x49] + 0x103) = 0x6;
                                }
                                param_3[0x7] = 0x2;
                                break;
                            case 0x6:
                                AIHoriMoveBlock(param_3,piVar4[0x1],piVar4[0x2]);
                                AISpeedUpMove(param_3);
                                break;
                            case 0x8:
                                AIRowPack(param_3,piVar4[0x1],piVar4[0x2]);
                                break;
                            case 0x9:
                                if (param_3 == NULL) {
                                    gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
                                }
                                *(undefined *)((int)param_3 + param_3[0x49] + 0x104) = 0x5;
                                param_3[0x49] = param_3[0x49] + 0x1;
                                break;
                            case 0xa:
                                if (param_3 == NULL) {
                                    gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
                                }
                                *(undefined *)((int)param_3 + param_3[0x49] + 0x104) = 0x8;
                                param_3[0x49] = param_3[0x49] + 0x1;
                                break;
                            case 0xb:
                                param_3[0x7] = 0x2;
                                break;
                            case 0xc:
                                if (param_3 == NULL) {
                                    gc_assert(0x0,&_215,0x229,_254,0x0,0x0,0x0);
                                }
                                *(undefined *)((int)param_3 + param_3[0x49] + 0x104) = 0x7;
                                param_3[0x49] = param_3[0x49] + 0x1;
                                param_3[0x4] = 0x0;
                                break;
                            case 0xd:
                                iVar8 = param_3[0x8];
                                if (iVar8 == -0x1) {
                                    iVar8 = 0xc;
                                }
                                iVar3 = piVar4[0x1] + -0x2;
                                iVar7 = iVar8 - iVar3;
                                iVar6 = iVar3 * 0x318;
                                if (iVar3 < iVar8) {
                                    do {
                                        if (*(int *)(param_1 + piVar4[0x2] * 0x2c + iVar6 + 0x10) !=
                                            0x0) break;
                                        iVar6 += 0x318;
                                        iVar3 += 0x1;
                                        iVar7 += -0x1;
                                    } while (iVar7 != 0x0);
                                }
                                iVar7 = CheckFieldActive(param_1);
                                if ((((iVar7 != 0x0) ||
                                     (*(int *)(param_1 +
                                              piVar4[0x1] * 0x318 + piVar4[0x2] * 0x2c + -0x620) ==
                                      0x0)) && (iVar3 != iVar8)) &&
                                   (*(int *)(param_1 + piVar4[0x1] * 0x318 + piVar4[0x2] * 0x2c) !=
                                    0x1)) {
                                    return;
                                }
                                break;
                            case 0xe:
                                iVar8 = piVar4[0x1];
                                piVar4[0x1] = iVar8 + -0x1;
                                if (0x0 < iVar8) {
                                    return;
                                }
                                break;
                            case 0x14:
                                iVar8 = CheckFieldActive(param_1);
                                if ((iVar8 != 0x0) &&
                                   (*(int *)(param_1 +
                                            piVar4[0x1] * 0x318 + piVar4[0x2] * 0x2c + 0x10) == 0x0)
                                   ) {
                                    return;
                                }
                            }
                        }
                        param_3[0x40] = param_3[0x40] + -0x1;
                        param_3[0x3e] = param_3[0x3e] + 0x1;
                        if (param_3[0x40] < 0x1) {
                            return;
                        }
                        if (param_3[0x48] != param_3[0x49]) {
                            return;
                        }
                    } while( true );
                }
            }
        }
    }
    return;
}



void AIMove(int param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x157d,_4953,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x157e,_4954,0x0,0x0,0x0);
    }
    if (param_3 == 0x0) {
        gc_assert(0x0,&_215,0x157f,_4955,0x0,0x0,0x0);
    }
    if (gMain == 0x387) {
        if (((gSelection != 0x96) &&
            ((*(ushort *)(gTheGame + param_4 * 0x10 + 0x16344) & 0x1000) != 0x0)) &&
           ((gGameStatus & 0x80) == 0x0)) {
            gTheGame._89888_4_ = 0x0;
            gMain = 0x388;
            gTheGame._120356_4_ = 0x0;
            gTheGame._120352_4_ = param_4;
            FadeSong(last_song_handle,0x28,0xa,0x0);
            FadeOutAllSFXs(0xf);
            PlaySE(SFX_INIT_TABLE,0x42);
            UpdateAnimation(param_1,param_4,0x0);
            return;
        }
    }
    else if (gMain == 0x388) {
        DoPauseGame(param_4 * 0x10 + 0x2b7188,param_4,0xffffffff);
        if (gMain != 0x388) {
            return;
        }
        UpdateAnimation(param_1,param_4,0x0);
        return;
    }
    iVar1 = *(int *)(param_1 + 0x4a90);
    if (iVar1 != 0x0) {
        if (iVar1 < 0x0) {
            *(int *)(param_1 + 0x4a90) = iVar1 + 0x1;
        }
        if (0x0 < *(int *)(param_1 + 0x4a90)) {
            RaiseBlocks(param_1,param_2);
            if (*(int *)(param_1 + 0x4a90) != 0x0) {
                return;
            }
            if (param_3 == 0x0) {
                gc_assert(0x0,&_215,0x240,_265,0x0,0x0,0x0);
            }
            *(undefined4 *)(param_3 + 0x100) = 0x0;
            *(undefined4 *)(param_3 + 0xf8) = 0x0;
            *(undefined4 *)(param_3 + 0xfc) = 0x0;
            if (param_3 == 0x0) {
                gc_assert(0x0,&_215,0x236,_258,0x0,0x0,0x0);
            }
            *(undefined4 *)(param_3 + 0x120) = 0x0;
            *(undefined4 *)(param_3 + 0x124) = 0x0;
            return;
        }
    }
    iVar1 = *(int *)(param_3 + 0x10) + -0x1;
    *(int *)(param_3 + 0x10) = iVar1;
    if ((iVar1 < 0x1) && (*(int *)(param_3 + 0x120) != *(int *)(param_3 + 0x124))) {
        iVar1 = AnimationRandom(0x177);
        if (iVar1 == (iVar1 / 0x3) * 0x3) {
            iVar1 = AnimationRandom(0x2);
            *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0xc) + iVar1;
        }
        else {
            iVar1 = AnimationRandom(0x2);
            *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0xc) - iVar1;
        }
        if (*(int *)(param_1 + 0x4ad4) == 0x0) {
            if (*(int *)(param_3 + 0x1c) != 0x0) {
                iVar1 = AnimationRandom(0x3);
                *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar1;
            }
        }
        else {
            iVar1 = AnimationRandom(0x3);
            *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0xc) - iVar1;
        }
        if (gTheGame._120332_4_ == 0x1) {
            AI2DMove(param_1,param_2,param_3,param_4);
        }
        else {
            AI3DMove(param_1,param_2,param_3,param_4);
        }
    }
    return;
}



void AI2DMove(int param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    
    iVar3 = 0x0;
    iVar2 = -0x1;
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x15fd,_5028,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x15fe,_5029,0x0,0x0,0x0);
    }
    if (param_3 == 0x0) {
        gc_assert(0x0,&_215,0x15ff,_5030,0x0,0x0,0x0);
    }
    switch(*(undefined *)(param_3 + *(int *)(param_3 + 0x120) + 0x104)) {
    case 0x0:
    case 0x9:
    case 0xa:
        return;
    case 0x1:
        iVar3 = Move2DCursorLeft(param_2,0xa);
        break;
    case 0x2:
        iVar3 = Move2DCursorRight(param_2,0xa);
        break;
    case 0x3:
        iVar3 = Move2DCursorUp(param_1,param_2,0xa);
        break;
    case 0x4:
        iVar3 = Move2DCursorDown(param_2,0xa);
        break;
    case 0x5:
        iVar2 = Switch2DBlocks(param_1,param_2,param_4);
        if (iVar2 == 0x0) {
            if (param_3 == 0x0) {
                gc_assert(0x0,&_215,0x240,_265,0x0,0x0,0x0);
            }
            *(undefined4 *)(param_3 + 0x100) = 0x0;
            *(undefined4 *)(param_3 + 0xf8) = 0x0;
            *(undefined4 *)(param_3 + 0xfc) = 0x0;
            if (param_3 == 0x0) {
                gc_assert(0x0,&_215,0x236,_258,0x0,0x0,0x0);
            }
            *(undefined4 *)(param_3 + 0x120) = 0x0;
            *(undefined4 *)(param_3 + 0x124) = 0x0;
            return;
        }
        break;
    case 0x6:
        iVar2 = Switch2DBlocks(param_1,param_2,param_4);
        iVar1 = param_1 + *(int *)(param_2 + 0x14) * 0x318 + *(int *)(param_2 + 0x10) * 0x2c;
        if ((*(int *)(iVar1 + 0x10) == 0x0) && (*(int *)(iVar1 + 0x3c) == 0x0)) {
            iVar2 = -0x1;
        }
        *(undefined4 *)(param_3 + 0x10) = 0x1;
        break;
    case 0x7:
        if (*(int *)(param_1 + 0x4a90) == 0x0) {
            *(undefined4 *)(param_1 + 0x4a90) = 0x1;
        }
        else {
            iVar2 = 0x0;
        }
        break;
    case 0x8:
        if (param_3 == 0x0) {
            gc_assert(0x0,&_215,0x1ba,_216,0x0,0x0,0x0);
        }
        *(undefined4 *)(param_3 + 0x2c) = 0x0;
        *(undefined4 *)(param_3 + 0x30) = 0x5;
        iVar1 = *(int *)(param_3 + 0x4) + 0x2;
        if (iVar1 < 0xc) {
            *(int *)(param_3 + 0x24) = iVar1;
        }
        else {
            *(undefined4 *)(param_3 + 0x24) = 0xb;
        }
        iVar1 = *(int *)(param_3 + 0x4) + -0x2;
        if (iVar1 < 0x0) {
            *(undefined4 *)(param_3 + 0x28) = 0x0;
        }
        else {
            *(int *)(param_3 + 0x28) = iVar1;
        }
        break;
    case 0xb:
        iVar3 = Move2DCursorLeft(param_2,0xa);
        *(undefined4 *)(param_3 + 0x10) = 0x1;
        break;
    case 0xc:
        iVar3 = Move2DCursorRight(param_2,0xa);
        *(undefined4 *)(param_3 + 0x10) = 0x1;
        break;
    case 0xd:
        iVar3 = Move2DCursorUp(param_1,param_2,0xa);
        *(undefined4 *)(param_3 + 0x10) = 0x1;
        break;
    case 0xe:
        iVar3 = Move2DCursorDown(param_2,0xa);
        *(undefined4 *)(param_3 + 0x10) = 0x1;
        break;
    case 0xf:
        iVar2 = Switch2DBlocks(param_1,param_2,param_4);
        if (iVar2 == 0x0) {
            if (param_3 == 0x0) {
                gc_assert(0x0,&_215,0x240,_265,0x0,0x0,0x0);
            }
            *(undefined4 *)(param_3 + 0x100) = 0x0;
            *(undefined4 *)(param_3 + 0xf8) = 0x0;
            *(undefined4 *)(param_3 + 0xfc) = 0x0;
            if (param_3 == 0x0) {
                gc_assert(0x0,&_215,0x236,_258,0x0,0x0,0x0);
            }
            *(undefined4 *)(param_3 + 0x120) = 0x0;
            *(undefined4 *)(param_3 + 0x124) = 0x0;
            return;
        }
        *(undefined4 *)(param_3 + 0x10) = 0x1;
        break;
    default:
        goto switchD_00030d24_caseD_10;
    }
    if (iVar3 != 0x0) {
        if (gTheGame._120328_4_ == 0x1) {
            PlaySE(SFX_INIT_TABLE,0x33);
        }
        else if (gTheGame._120328_4_ == 0x2) {
            if (param_4 == 0x0) {
                PlaySE(SFX_INIT_TABLE,0x34);
            }
            else {
                PlaySE(SFX_INIT_TABLE,0x35);
            }
        }
        else {
            PlaySE(SFX_INIT_TABLE,0x33);
        }
    }
    if (iVar2 != 0x0) {
        *(int *)(param_3 + 0x120) = *(int *)(param_3 + 0x120) + 0x1;
    }
switchD_00030d24_caseD_10:
    return;
}



void AI3DMove(int param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    
    iVar4 = 0x0;
    iVar3 = -0x1;
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x167d,_5083,0x0,0x0,0x0);
    }
    if (param_2 == 0x0) {
        gc_assert(0x0,&_215,0x167e,_5084,0x0,0x0,0x0);
    }
    if (param_3 == 0x0) {
        gc_assert(0x0,&_215,0x167f,_5085,0x0,0x0,0x0);
    }
    switch(*(undefined *)(param_3 + *(int *)(param_3 + 0x120) + 0x104)) {
    case 0x0:
    case 0x9:
    case 0xa:
        return;
    case 0x1:
    case 0xb:
        iVar4 = Move3DCursorLeft(param_2,0xa);
        break;
    case 0x2:
    case 0xc:
        iVar4 = Move3DCursorRight(param_2,0xa);
        break;
    case 0x3:
    case 0xd:
        iVar4 = Move3DCursorUp(param_1,param_2,0xa);
        break;
    case 0x4:
    case 0xe:
        iVar4 = Move3DCursorDown(param_2,0xa);
        break;
    case 0x5:
    case 0xf:
        iVar3 = Switch3DBlocks(param_1,param_2,param_4);
        if (iVar3 == 0x0) {
            if (param_3 == 0x0) {
                gc_assert(0x0,&_215,0x240,_265,0x0,0x0,0x0);
            }
            *(undefined4 *)(param_3 + 0x100) = 0x0;
            *(undefined4 *)(param_3 + 0xf8) = 0x0;
            *(undefined4 *)(param_3 + 0xfc) = 0x0;
            if (param_3 == 0x0) {
                gc_assert(0x0,&_215,0x236,_258,0x0,0x0,0x0);
            }
            *(undefined4 *)(param_3 + 0x120) = 0x0;
            *(undefined4 *)(param_3 + 0x124) = 0x0;
            return;
        }
        break;
    case 0x6:
        iVar3 = Switch3DBlocks(param_1,param_2,param_4);
        iVar1 = param_1 + *(int *)(param_2 + 0x14) * 0x318 + *(int *)(param_2 + 0x10) * 0x2c;
        if ((*(int *)(iVar1 + 0x10) == 0x0) && (*(int *)(iVar1 + 0x3c) == 0x0)) {
            iVar3 = -0x1;
        }
        break;
    case 0x7:
        if (*(int *)(param_1 + 0x4a90) == 0x0) {
            *(undefined4 *)(param_1 + 0x4a90) = 0x1;
        }
        else {
            iVar3 = 0x0;
        }
        break;
    case 0x8:
        cVar2 = AnimationRandom(0x5);
        iVar3 = 0x0;
        *(char *)(param_3 + *(int *)(param_3 + 0x120) + 0x104) = cVar2 + '\x01';
        break;
    default:
        goto switchD_00031170_caseD_10;
    }
    if (iVar4 != 0x0) {
        if (gTheGame._120328_4_ == 0x1) {
            PlaySE(SFX_INIT_TABLE,0x33);
        }
        else if (gTheGame._120328_4_ == 0x2) {
            if (param_4 == 0x0) {
                PlaySE(SFX_INIT_TABLE,0x34);
            }
            else {
                PlaySE(SFX_INIT_TABLE,0x35);
            }
        }
    }
    if (iVar3 != 0x0) {
        *(int *)(param_3 + 0x120) = *(int *)(param_3 + 0x120) + 0x1;
    }
switchD_00031170_caseD_10:
    return;
}



void AISpeedUpMove(int param_1)

{
    char cVar1;
    char *pcVar2;
    int iVar3;
    
    if (param_1 == 0x0) {
        gc_assert(0x0,&_215,0x16d6,_5102,0x0,0x0,0x0);
    }
    for (iVar3 = *(int *)(param_1 + 0x120); iVar3 < *(int *)(param_1 + 0x124); iVar3 += 0x1) {
        pcVar2 = (char *)(param_1 + iVar3 + 0x104);
        cVar1 = *pcVar2;
        if (cVar1 == '\x03') {
            *pcVar2 = '\r';
        }
        else if (cVar1 < '\x03') {
            if (cVar1 == '\x01') {
                *pcVar2 = '\v';
            }
            else if ('\0' < cVar1) {
                *pcVar2 = '\f';
            }
        }
        else if (cVar1 == '\x05') {
            *pcVar2 = '\x0f';
        }
        else if (cVar1 < '\x05') {
            *pcVar2 = '\x0e';
        }
    }
    return;
}

