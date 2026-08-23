

void Set3DTile(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    return;
}



void Set3DExplodeTile(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5481000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar2;
    puVar1[0x1] = 0x3c03c;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5481002;
    glistp = puVar2;
    puVar1[0x1] = 0x1000000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar2;
    puVar1[0x1] = 0x101c01c;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5481003;
    glistp = puVar2;
    puVar1[0x1] = 0x2000000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar2;
    puVar1[0x1] = 0x201c01c;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5481004;
    glistp = puVar2;
    puVar1[0x1] = 0x3000000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar2;
    puVar1[0x1] = 0x301c01c;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5481005;
    glistp = puVar2;
    puVar1[0x1] = 0x4000000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar2;
    puVar1[0x1] = 0x401c01c;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5481042;
    glistp = puVar2;
    puVar1[0x1] = 0x5000000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar2;
    puVar1[0x1] = 0x501c01c;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5481043;
    glistp = puVar2;
    puVar1[0x1] = 0x6000000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar2;
    puVar1[0x1] = 0x601c01c;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5481044;
    glistp = puVar2;
    puVar1[0x1] = 0x7000000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar2;
    puVar1[0x1] = 0x701c01c;
    return;
}



void Draw3DFrontTetrisWell(int param_1,int param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    char *pcVar6;
    int iVar7;
    int iVar8;
    undefined4 local_b0;
    undefined4 local_ac;
    undefined2 local_a8;
    int local_a4;
    int local_a0;
    int local_9c;
    char *local_98;
    int local_94;
    int local_90;
    int local_8c;
    byte *local_88;
    char *local_84;
    int local_80;
    undefined4 local_7c;
    pointer_____offset_0x2b0___ *local_78;
    undefined1 *local_74;
    undefined1 *local_70;
    undefined1 *local_6c;
    undefined1 *local_68;
    undefined1 *local_64;
    undefined1 *local_60;
    undefined *local_5c;
    char *local_58;
    char *local_54;
    int *local_50;
    
    puVar1 = glistp;
    local_b0 = 0x30102;
    local_ac = 0x4050607;
    local_a8 = 0x809;
    local_9c = param_1 + param_2 * 0x2520 + 0x1c464;
    local_98 = (char *)(param_1 + param_2 * 0xd8 + 0x2e2e8);
    local_94 = param_1 + param_2 * 0x110 + 0x2c0a8;
    local_90 = 0x6;
    if (0x38d < gMain) {
        local_90 = 0x9;
    }
    local_88 = (byte *)((int)&local_b0 + 0x1);
    local_8c = param_1 + param_2 * 0xa;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    local_50 = &gMain;
    local_78 = &_198;
    local_74 = block1;
    local_70 = block2;
    local_6c = block3;
    local_68 = block4;
    local_64 = block5;
    local_60 = block6;
    local_5c = &block7;
    local_58 = s_L_LLMMLIIIIIIO_PIIIIIIINNNNNNNNN_00184ae9 + 0xb7;
    local_54 = s_NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN_00185380 + 0x20;
    local_7c = 0xe8000000;
    iVar3 = 0x1;
    local_a4 = param_1;
    local_a0 = param_2;
    do {
        puVar1 = glistp;
        if (local_90 < iVar3) {
            return;
        }
        puVar2 = glistp + 0x2;
        *glistp = 0xe6000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = local_7c;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        if ((iVar3 == 0x1) || (*(char *)(local_8c + *local_88 + 0x1c410) != '\0')) {
            if (*local_88 < 0xa) {
                    // WARNING: Could not recover jumptable at 0x000591b0. Too many branches
                    // WARNING: Treating indirect jump as call
                (*(code *)local_78[*local_88])();
                return;
            }
            if (false) {
                puVar2 = glistp + 0x2;
                *glistp = 0xfd500000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf5500000;
                glistp = puVar2;
                puVar1[0x1] = 0x7000000;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe6000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf3000000;
                glistp = puVar2;
                puVar1[0x1] = 0x73ff100;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf5481000;
                glistp = puVar2;
                puVar1[0x1] = 0x0;
                puVar1 = glistp;
                puVar2 = glistp + 0x2;
                *glistp = 0xf2000000;
                glistp = puVar2;
                puVar1[0x1] = 0xfc07c;
            }
            puVar1 = glistp;
            iVar5 = 0x0;
            local_80 = local_9c;
            puVar2 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            local_84 = local_98;
            uVar4 = (uint)*local_88;
            do {
                iVar7 = 0x1;
                pcVar6 = local_84;
                iVar8 = local_80;
                do {
                    puVar1 = glistp;
                    pcVar6 = pcVar6 + 0x1;
                    if (*pcVar6 != '\0') {
                        puVar2 = glistp + 0x2;
                        *glistp = 0xfd500000;
                        glistp = puVar2;
                        puVar1[0x1] = 0x0;
                        puVar1 = glistp;
                        puVar2 = glistp + 0x2;
                        *glistp = 0xf5500000;
                        glistp = puVar2;
                        puVar1[0x1] = 0x7000000;
                        puVar1 = glistp;
                        puVar2 = glistp + 0x2;
                        *glistp = 0xe6000000;
                        glistp = puVar2;
                        puVar1[0x1] = 0x0;
                        puVar1 = glistp;
                        puVar2 = glistp + 0x2;
                        *glistp = 0xf3000000;
                        glistp = puVar2;
                        puVar1[0x1] = 0x73ff100;
                        puVar1 = glistp;
                        puVar2 = glistp + 0x2;
                        *glistp = 0xe7000000;
                        glistp = puVar2;
                        puVar1[0x1] = 0x0;
                        puVar1 = glistp;
                        puVar2 = glistp + 0x2;
                        *glistp = 0xf5481000;
                        glistp = puVar2;
                        puVar1[0x1] = 0x0;
                        puVar1 = glistp;
                        puVar2 = glistp + 0x2;
                        *glistp = 0xf2000000;
                        glistp = puVar2;
                        puVar1[0x1] = 0xfc07c;
                        if ((iVar3 == 0x1) && ('\x01' < *pcVar6)) {
                            Draw3DTetrisBlockSide(iVar5,iVar7,*(undefined4 *)(iVar8 + 0x3c));
                            if ((*(uint *)(iVar8 + 0x50) == uVar4) && (*pcVar6 < '\x04')) {
                                Draw3DTetrisBlock2(iVar7,*(undefined4 *)(iVar8 + 0x3c));
                            }
                        }
                        else if ((*(uint *)(iVar8 + 0x50) == uVar4) && (*pcVar6 < '\x04')) {
                            Draw3DTetrisBlock1(iVar5,iVar7,*(undefined4 *)(iVar8 + 0x3c));
                        }
                    }
                    iVar7 += 0x1;
                    iVar8 = iVar8 + 0x2c;
                } while (iVar7 < 0x5);
                iVar8 = 0x8;
                iVar7 = local_80 + 0x160;
                pcVar6 = local_84 + 0x8;
                do {
                    puVar1 = glistp;
                    if (*pcVar6 != '\0') {
                        puVar2 = glistp + 0x2;
                        *glistp = 0xfd500000;
                        glistp = puVar2;
                        puVar1[0x1] = 0x0;
                        puVar1 = glistp;
                        puVar2 = glistp + 0x2;
                        *glistp = 0xf5500000;
                        glistp = puVar2;
                        puVar1[0x1] = 0x7000000;
                        puVar1 = glistp;
                        puVar2 = glistp + 0x2;
                        *glistp = 0xe6000000;
                        glistp = puVar2;
                        puVar1[0x1] = 0x0;
                        puVar1 = glistp;
                        puVar2 = glistp + 0x2;
                        *glistp = 0xf3000000;
                        glistp = puVar2;
                        puVar1[0x1] = 0x73ff100;
                        puVar1 = glistp;
                        puVar2 = glistp + 0x2;
                        *glistp = 0xe7000000;
                        glistp = puVar2;
                        puVar1[0x1] = 0x0;
                        puVar1 = glistp;
                        puVar2 = glistp + 0x2;
                        *glistp = 0xf5481000;
                        glistp = puVar2;
                        puVar1[0x1] = 0x0;
                        puVar1 = glistp;
                        puVar2 = glistp + 0x2;
                        *glistp = 0xf2000000;
                        glistp = puVar2;
                        puVar1[0x1] = 0xfc07c;
                        if ((iVar3 == 0x1) && ('\x01' < *pcVar6)) {
                            Draw3DTetrisBlockSide(iVar5,iVar8,*(undefined4 *)(iVar7 + 0x10));
                            if ((*(uint *)(iVar7 + 0x24) == uVar4) && (*pcVar6 < '\x04')) {
                                Draw3DTetrisBlock2(iVar8,*(undefined4 *)(iVar7 + 0x10));
                            }
                        }
                        else if ((*(uint *)(iVar7 + 0x24) == uVar4) && (*pcVar6 < '\x04')) {
                            Draw3DTetrisBlock1(iVar5,iVar8,*(undefined4 *)(iVar7 + 0x10));
                        }
                    }
                    iVar8 += -0x1;
                    iVar7 += -0x2c;
                    pcVar6 = pcVar6 + -0x1;
                } while (0x4 < iVar8);
                iVar5 += 0x1;
                local_80 += 0x318;
                local_84 = local_84 + 0x12;
            } while (iVar5 < 0xc);
            iVar5 = *(int *)(local_94 + 0x1c);
            if (iVar5 != -0x1) {
                if ((*local_50 < 0x38e) && (*local_88 == 0x3)) {
                    iVar5 = local_9c + iVar5 * 0x318;
                    Draw3DTetrisSwitch(local_a4,local_a0,iVar5 + 0xdc,iVar5 + 0xb0);
                }
                else if (0x38d < *local_50) {
                    iVar5 = local_9c + iVar5 * 0x318;
                    uVar4 = *(uint *)(iVar5 + 0x100);
                    if ((int)*(uint *)(iVar5 + 0x100) < (int)*(uint *)(iVar5 + 0xd4)) {
                        uVar4 = *(uint *)(iVar5 + 0xd4);
                    }
                    if (*local_88 == uVar4) {
                        Draw3DTetrisSwitch(local_a4,local_a0,iVar5 + 0xdc,iVar5 + 0xb0);
                    }
                }
            }
        }
        iVar3 += 0x1;
        local_88 = local_88 + 0x1;
    } while( true );
}



void Draw3DBackTetrisWell(int param_1,int param_2)

{
    char cVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    char *pcVar7;
    int iVar8;
    int iVar9;
    undefined4 local_9c;
    undefined4 local_98;
    undefined2 local_94;
    int local_90;
    char *local_8c;
    int local_88;
    int local_84;
    byte *local_80;
    char *local_7c;
    int local_78;
    pointer_____offset_0x21c___ *local_74;
    undefined1 *local_70;
    undefined1 *local_6c;
    undefined1 *local_68;
    undefined1 *local_64;
    undefined1 *local_60;
    undefined1 *local_5c;
    undefined *local_58;
    char *local_54;
    char *local_50;
    
    puVar2 = glistp;
    local_9c = 0x30102;
    local_98 = 0x4050607;
    local_94 = 0x809;
    local_90 = param_1 + param_2 * 0x2520 + 0x1c464;
    local_8c = (char *)(param_1 + param_2 * 0xd8 + 0x2e2e8);
    local_88 = 0x6;
    if (0x38d < gMain) {
        local_88 = 0x9;
    }
    puVar3 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar3;
    puVar2[0x1] = 0x0;
    local_80 = (byte *)((int)&local_9c + 0x1);
    local_84 = param_1 + param_2 * 0xa;
    local_74 = &_309;
    local_70 = block1;
    local_6c = block2;
    local_68 = block3;
    local_64 = block4;
    local_60 = block5;
    local_5c = block6;
    local_58 = &block7;
    local_54 = s_L_LLMMLIIIIIIO_PIIIIIIINNNNNNNNN_00184ae9 + 0xb7;
    local_50 = s_NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN_00185380 + 0x20;
    iVar4 = 0x1;
    do {
        puVar2 = glistp;
        if (local_88 < iVar4) {
            return;
        }
        if ((iVar4 == 0x1) || (*(char *)(local_84 + *local_80 + 0x1c438) != '\0')) {
            if (*local_80 < 0xa) {
                    // WARNING: Could not recover jumptable at 0x00059818. Too many branches
                    // WARNING: Treating indirect jump as call
                (*(code *)local_74[*local_80])();
                return;
            }
            if (false) {
                puVar3 = glistp + 0x2;
                *glistp = 0xfd500000;
                glistp = puVar3;
                puVar2[0x1] = 0x0;
                puVar2 = glistp;
                puVar3 = glistp + 0x2;
                *glistp = 0xf5500000;
                glistp = puVar3;
                puVar2[0x1] = 0x7000000;
                puVar2 = glistp;
                puVar3 = glistp + 0x2;
                *glistp = 0xe6000000;
                glistp = puVar3;
                puVar2[0x1] = 0x0;
                puVar2 = glistp;
                puVar3 = glistp + 0x2;
                *glistp = 0xf3000000;
                glistp = puVar3;
                puVar2[0x1] = 0x73ff100;
                puVar2 = glistp;
                puVar3 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar3;
                puVar2[0x1] = 0x0;
                puVar2 = glistp;
                puVar3 = glistp + 0x2;
                *glistp = 0xf5481000;
                glistp = puVar3;
                puVar2[0x1] = 0x0;
                puVar2 = glistp;
                puVar3 = glistp + 0x2;
                *glistp = 0xf2000000;
                glistp = puVar3;
                puVar2[0x1] = 0xfc07c;
            }
            puVar2 = glistp;
            iVar6 = 0x0;
            local_78 = local_90;
            puVar3 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar3;
            puVar2[0x1] = 0x0;
            local_7c = local_8c;
            uVar5 = (uint)*local_80;
            do {
                iVar8 = 0xd;
                iVar9 = local_78 + 0x23c;
                pcVar7 = local_7c + 0xd;
                do {
                    puVar2 = glistp;
                    if (*pcVar7 != '\0') {
                        puVar3 = glistp + 0x2;
                        *glistp = 0xfd500000;
                        glistp = puVar3;
                        puVar2[0x1] = 0x0;
                        puVar2 = glistp;
                        puVar3 = glistp + 0x2;
                        *glistp = 0xf5500000;
                        glistp = puVar3;
                        puVar2[0x1] = 0x7000000;
                        puVar2 = glistp;
                        puVar3 = glistp + 0x2;
                        *glistp = 0xe6000000;
                        glistp = puVar3;
                        puVar2[0x1] = 0x0;
                        puVar2 = glistp;
                        puVar3 = glistp + 0x2;
                        *glistp = 0xf3000000;
                        glistp = puVar3;
                        puVar2[0x1] = 0x73ff100;
                        puVar2 = glistp;
                        puVar3 = glistp + 0x2;
                        *glistp = 0xe7000000;
                        glistp = puVar3;
                        puVar2[0x1] = 0x0;
                        puVar2 = glistp;
                        puVar3 = glistp + 0x2;
                        *glistp = 0xf5481000;
                        glistp = puVar3;
                        puVar2[0x1] = 0x0;
                        puVar2 = glistp;
                        puVar3 = glistp + 0x2;
                        *glistp = 0xf2000000;
                        glistp = puVar3;
                        puVar2[0x1] = 0xfc07c;
                        if ((iVar4 == 0x1) && ('\x01' < *pcVar7)) {
                            Draw3DTetrisBlockSide(iVar6,iVar8,*(undefined4 *)(iVar9 + 0x10));
                            if ((*(uint *)(iVar9 + 0x24) == uVar5) && (*pcVar7 < '\x04')) {
                                Draw3DTetrisBlock2(iVar8,*(undefined4 *)(iVar9 + 0x10));
                            }
                        }
                        else if ((*(uint *)(iVar9 + 0x24) == uVar5) && (*pcVar7 < '\x04')) {
                            Draw3DTetrisBlock1(iVar6,iVar8,*(undefined4 *)(iVar9 + 0x10));
                        }
                    }
                    iVar8 += -0x1;
                    iVar9 += -0x2c;
                    pcVar7 = pcVar7 + -0x1;
                } while (0x8 < iVar8);
                iVar8 = 0xe;
                iVar9 = local_78 + 0x268;
                pcVar7 = local_7c + 0xe;
                do {
                    puVar2 = glistp;
                    if (*pcVar7 != '\0') {
                        puVar3 = glistp + 0x2;
                        *glistp = 0xfd500000;
                        glistp = puVar3;
                        puVar2[0x1] = 0x0;
                        puVar2 = glistp;
                        puVar3 = glistp + 0x2;
                        *glistp = 0xf5500000;
                        glistp = puVar3;
                        puVar2[0x1] = 0x7000000;
                        puVar2 = glistp;
                        puVar3 = glistp + 0x2;
                        *glistp = 0xe6000000;
                        glistp = puVar3;
                        puVar2[0x1] = 0x0;
                        puVar2 = glistp;
                        puVar3 = glistp + 0x2;
                        *glistp = 0xf3000000;
                        glistp = puVar3;
                        puVar2[0x1] = 0x73ff100;
                        puVar2 = glistp;
                        puVar3 = glistp + 0x2;
                        *glistp = 0xe7000000;
                        glistp = puVar3;
                        puVar2[0x1] = 0x0;
                        puVar2 = glistp;
                        puVar3 = glistp + 0x2;
                        *glistp = 0xf5481000;
                        glistp = puVar3;
                        puVar2[0x1] = 0x0;
                        puVar2 = glistp;
                        puVar3 = glistp + 0x2;
                        *glistp = 0xf2000000;
                        glistp = puVar3;
                        puVar2[0x1] = 0xfc07c;
                        if ((iVar4 == 0x1) && ('\x01' < *pcVar7)) {
                            Draw3DTetrisBlockSide(iVar6,iVar8,*(undefined4 *)(iVar9 + 0x10));
                            if ((*(uint *)(iVar9 + 0x24) == uVar5) && (*pcVar7 < '\x04')) {
                                Draw3DTetrisBlock2(iVar8,*(undefined4 *)(iVar9 + 0x10));
                            }
                        }
                        else if ((*(uint *)(iVar9 + 0x24) == uVar5) && (*pcVar7 < '\x04')) {
                            Draw3DTetrisBlock1(iVar6,iVar8,*(undefined4 *)(iVar9 + 0x10));
                        }
                    }
                    iVar8 += 0x1;
                    iVar9 += 0x2c;
                    pcVar7 = pcVar7 + 0x1;
                } while (iVar8 < 0x12);
                cVar1 = *local_7c;
                if (cVar1 != '\0') {
                    if ((iVar4 == 0x1) && ('\x01' < cVar1)) {
                        Draw3DTetrisBlockSide(iVar6,0x0,*(undefined4 *)(local_78 + 0x10));
                        if ((*(uint *)(local_78 + 0x24) == uVar5) && (*local_7c < '\x04')) {
                            Draw3DTetrisBlock2(0x0,*(undefined4 *)(local_78 + 0x10));
                        }
                    }
                    else if ((*(uint *)(local_78 + 0x24) == uVar5) && (cVar1 < '\x04')) {
                        Draw3DTetrisBlock1(iVar6,0x0,*(undefined4 *)(local_78 + 0x10));
                    }
                }
                iVar6 += 0x1;
                local_78 += 0x318;
                local_7c = local_7c + 0x12;
            } while (iVar6 < 0xc);
        }
        iVar4 += 0x1;
        local_80 = local_80 + 0x1;
    } while( true );
}



void Draw3DTetrisBlock1(int param_1,int param_2,int param_3)

{
    uint *puVar1;
    uint *puVar2;
    uint auStack_28 [0x4];
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;
    undefined4 local_8;
    
    puVar1 = glistp;
    auStack_28[1] = 0x0;
    auStack_28[2] = 0x2;
    auStack_28[3] = 0x4;
    local_18 = 0x6;
    local_14 = 0x80;
    local_10 = 0x82;
    local_c = 0x84;
    local_8 = 0x86;
    if (param_3 != 0x9) {
        puVar2 = glistp + 0x2;
        *glistp = 0x1008010;
        glistp = puVar2;
        puVar1[0x1] = gAllVertex + (param_2 * 0x8 + param_1 * 0x90) * 0x10;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = auStack_28[param_3] & 0x1ff | 0xf5481000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf2000000;
        glistp = puVar2;
        puVar1[0x1] = 0x3c03c;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xd7000002;
        glistp = puVar2;
        puVar1[0x1] = 0x40004000;
        puVar1 = glistp;
        if ((param_2 < 0x9) && (0x0 < param_2)) {
            puVar2 = glistp + 0x2;
            *glistp = 0x6000204;
            glistp = puVar2;
            puVar1[0x1] = 0x406;
        }
        else {
            puVar2 = glistp + 0x2;
            *glistp = 0x6080a0c;
            glistp = puVar2;
            puVar1[0x1] = 0x80e0a;
        }
    }
    return;
}



void Draw3DTetrisBlock2(int param_1,int param_2)

{
    uint *puVar1;
    uint *puVar2;
    uint auStack_3c [0x4];
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    
    puVar1 = glistp;
    auStack_3c[1] = 0x0;
    auStack_3c[2] = 0x2;
    auStack_3c[3] = 0x4;
    local_2c = 0x6;
    local_28 = 0x80;
    local_24 = 0x82;
    local_20 = 0x84;
    local_1c = 0x86;
    if (param_2 != 0x9) {
        puVar2 = glistp + 0x2;
        *glistp = 0xfd500000;
        glistp = puVar2;
        puVar1[0x1] = (uint)block3;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf5500000;
        glistp = puVar2;
        puVar1[0x1] = 0x7000000;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe6000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf3000000;
        glistp = puVar2;
        puVar1[0x1] = 0x73ff100;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf5481000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf2000000;
        glistp = puVar2;
        puVar1[0x1] = 0xfc07c;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = auStack_3c[param_2] & 0x1ff | 0xf5481000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf2000000;
        glistp = puVar2;
        puVar1[0x1] = 0x3c03c;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xd7000002;
        glistp = puVar2;
        puVar1[0x1] = 0x40004000;
        puVar1 = glistp;
        if ((param_1 < 0x9) && (0x0 < param_1)) {
            puVar2 = glistp + 0x2;
            *glistp = 0x6000204;
            glistp = puVar2;
            puVar1[0x1] = 0x406;
        }
        else {
            puVar2 = glistp + 0x2;
            *glistp = 0x6080a0c;
            glistp = puVar2;
            puVar1[0x1] = 0x80e0a;
        }
    }
    return;
}



void Draw3DTetrisBlockSide(int param_1,int param_2,undefined4 param_3,uint param_4)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0x1008010;
    glistp = puVar2;
    puVar1[0x1] = gAllVertex + (param_2 * 0x8 + param_1 * 0x90) * 0x10;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfcffffff;
    glistp = puVar2;
    puVar1[0x1] = 0xfffdf6fb;
    puVar1 = glistp;
    if (false) {
switchD_0005a0b0_caseD_0:
        puVar2 = glistp + 0x2;
        *glistp = 0xfa000000;
        glistp = puVar2;
        puVar1[0x1] = 0x444444ff;
    }
    else {
        switch(param_3) {
        default:
            goto switchD_0005a0b0_caseD_0;
        case 0x1:
            puVar2 = glistp + 0x2;
            *glistp = 0xfa000000;
            glistp = puVar2;
            puVar1[0x1] = 0x5a00ff;
            break;
        case 0x2:
            puVar2 = glistp + 0x2;
            *glistp = 0xfa000000;
            glistp = puVar2;
            puVar1[0x1] = 0x42008cff;
            break;
        case 0x3:
            puVar2 = glistp + 0x2;
            *glistp = 0xfa000000;
            glistp = puVar2;
            puVar1[0x1] = 0x5a0000ff;
            break;
        case 0x4:
            puVar2 = glistp + 0x2;
            *glistp = 0xfa000000;
            glistp = puVar2;
            puVar1[0x1] = 0x524a00ff;
            break;
        case 0x5:
            puVar2 = glistp + 0x2;
            *glistp = 0xfa000000;
            glistp = puVar2;
            puVar1[0x1] = 0x6b6bff;
            break;
        case 0x6:
            puVar2 = glistp + 0x2;
            *glistp = 0xfa000000;
            glistp = puVar2;
            puVar1[0x1] = 0x94ff;
            break;
        case 0x7:
            puVar2 = glistp + 0x2;
            *glistp = 0xfa000000;
            glistp = puVar2;
            puVar1[0x1] = 0x7b7b7bff;
        }
    }
    puVar1 = glistp;
    if (param_4 ==
        (((int)param_4 >> 0x1) + (uint)((int)param_4 < 0x0 && (param_4 & 0x1) != 0x0)) * 0x2) {
        puVar2 = glistp + 0x2;
        *glistp = 0x6080006;
        glistp = puVar2;
        puVar1[0x1] = 0x60e08;
    }
    else {
        puVar2 = glistp + 0x2;
        *glistp = 0x6020c0a;
        glistp = puVar2;
        puVar1[0x1] = 0xa0402;
    }
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfc121824;
    glistp = puVar2;
    puVar1[0x1] = 0xff33ffff;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfa000000;
    glistp = puVar2;
    puVar1[0x1] = 0xffffffff;
    return;
}



void Draw3DTetrisSwitch(int param_1,int param_2,int param_3,int param_4)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    uint *puVar3;
    uint *puVar4;
    int iVar5;
    uint auStack_54 [0x4];
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    
    puVar1 = glistp;
    auStack_54[1] = 0x0;
    auStack_54[2] = 0x2;
    auStack_54[3] = 0x4;
    local_44 = 0x6;
    local_40 = 0x80;
    local_3c = 0x82;
    local_38 = 0x84;
    local_34 = 0x86;
    iVar5 = *(int *)(param_1 + param_2 * 0x110 + 0x2c0c4);
    puVar2 = glistp + 0x2;
    *glistp = 0xfd500000;
    glistp = puVar2;
    puVar1[0x1] = block1;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5500000;
    glistp = puVar2;
    puVar1[0x1] = 0x7000000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe6000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf3000000;
    glistp = puVar2;
    puVar1[0x1] = 0x73ff100;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5481000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar3 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar3;
    puVar1[0x1] = 0xfc07c;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = auStack_54[*(int *)(param_3 + 0x10)] & 0x1ff | 0xf5481000;
    glistp = puVar4;
    puVar3[0x1] = 0x0;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar4;
    puVar3[0x1] = 0x3c03c;
    puVar3 = glistp;
    if (*(int *)(param_3 + 0x10) != 0x0) {
        puVar4 = glistp + 0x2;
        *glistp = 0xda380002;
        glistp = puVar4;
        puVar3[0x1] = param_1 + param_2 * 0x40 + 0x2e648;
        puVar3 = glistp;
        puVar4 = glistp + 0x2;
        *glistp = 0xd7000002;
        glistp = puVar4;
        puVar3[0x1] = 0x40004000;
        puVar3 = glistp;
        puVar4 = glistp + 0x2;
        *glistp = 0x1008010;
        glistp = puVar4;
        puVar3[0x1] = gAllVertex + iVar5 * 0x900;
        puVar3 = glistp;
        puVar4 = glistp + 0x2;
        *glistp = 0x6000204;
        glistp = puVar4;
        puVar3[0x1] = 0x406;
        puVar3 = glistp;
        puVar4 = glistp + 0x2;
        *glistp = 0xd8380002;
        glistp = puVar4;
        puVar3[0x1] = 0x40;
    }
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = auStack_54[*(int *)(param_4 + 0x10)] & 0x1ff | 0xf5481000;
    glistp = puVar4;
    puVar3[0x1] = 0x0;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar4;
    puVar3[0x1] = 0x3c03c;
    puVar3 = glistp;
    if (*(int *)(param_4 + 0x10) != 0x0) {
        puVar4 = glistp + 0x2;
        *glistp = 0xda380002;
        glistp = puVar4;
        puVar3[0x1] = param_1 + param_2 * 0x40 + 0x2e748;
        puVar3 = glistp;
        puVar4 = glistp + 0x2;
        *glistp = 0xd7000002;
        glistp = puVar4;
        puVar3[0x1] = 0x40004000;
        puVar3 = glistp;
        puVar4 = glistp + 0x2;
        *glistp = 0x1008010;
        glistp = puVar4;
        puVar3[0x1] = gAllVertex + iVar5 * 0x900;
        puVar3 = glistp;
        puVar4 = glistp + 0x2;
        *glistp = 0x6000204;
        glistp = puVar4;
        puVar3[0x1] = 0x406;
        puVar3 = glistp;
        puVar4 = glistp + 0x2;
        *glistp = 0xd8380002;
        glistp = puVar4;
        puVar3[0x1] = 0x40;
    }
    return;
}



void Draw3DTetrisNewBlock(undefined4 param_1,int param_2)

{
    int *piVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    uint *puVar4;
    uint *puVar5;
    int iVar6;
    undefined1 *puVar7;
    int iVar8;
    uint auStack_60 [0x4];
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    
    puVar2 = glistp;
    auStack_60[1] = 0x0;
    auStack_60[2] = 0x2;
    auStack_60[3] = 0x4;
    local_50 = 0x6;
    local_4c = 0x80;
    local_48 = 0x82;
    local_44 = 0x84;
    local_40 = 0x86;
    if (*(int *)(param_2 + 0x477c) == 0x0) {
        return;
    }
    if (gMain < 0x38e) {
        puVar7 = s_NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN_00185b80 + 0x20;
    }
    else {
        iVar6 = *(int *)(param_2 + 0x4790);
        if (iVar6 == 0xe) {
            puVar7 = &block7;
        }
        else {
            if (iVar6 < 0xe) {
                if ((iVar6 == 0x8) || ((0x7 < iVar6 && (0xc < iVar6)))) {
                    puVar7 = block6;
                    goto LAB_0005a728;
                }
            }
            else {
                if (iVar6 == 0x10) {
                    puVar7 = s_NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN_00185380 + 0x20;
                    goto LAB_0005a728;
                }
                if (iVar6 < 0x10) {
                    puVar7 = s_L_LLMMLIIIIIIO_PIIIIIIINNNNNNNNN_00184ae9 + 0xb7;
                    goto LAB_0005a728;
                }
            }
            puVar7 = s_NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN_00185b80 + 0x20;
        }
    }
LAB_0005a728:
    puVar3 = glistp + 0x2;
    *glistp = 0xfd500000;
    glistp = puVar3;
    iVar8 = 0x8;
    puVar2[0x1] = puVar7;
    puVar2 = glistp;
    puVar3 = glistp + 0x2;
    *glistp = 0xf5500000;
    glistp = puVar3;
    puVar2[0x1] = 0x7000000;
    puVar2 = glistp;
    puVar3 = glistp + 0x2;
    *glistp = 0xe6000000;
    glistp = puVar3;
    param_2 += 0x2c;
    puVar2[0x1] = 0x0;
    puVar2 = glistp;
    puVar3 = glistp + 0x2;
    *glistp = 0xf3000000;
    glistp = puVar3;
    puVar2[0x1] = 0x73ff100;
    puVar2 = glistp;
    iVar6 = 0x6c80;
    puVar3 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar3;
    puVar2[0x1] = 0x0;
    puVar2 = glistp;
    puVar3 = glistp + 0x2;
    *glistp = 0xf5481000;
    glistp = puVar3;
    puVar2[0x1] = 0x0;
    puVar2 = glistp;
    puVar3 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar3;
    puVar2[0x1] = 0xfc07c;
    puVar2 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar4;
    puVar2[0x1] = 0x0;
    do {
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xfd500000;
        glistp = puVar5;
        puVar4[0x1] = (uint)puVar7;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xf5500000;
        glistp = puVar5;
        puVar4[0x1] = 0x7000000;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xe6000000;
        glistp = puVar5;
        puVar4[0x1] = 0x0;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xf3000000;
        glistp = puVar5;
        puVar4[0x1] = 0x73ff100;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar5;
        puVar4[0x1] = 0x0;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xf5481000;
        glistp = puVar5;
        puVar4[0x1] = 0x0;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xf2000000;
        glistp = puVar5;
        puVar4[0x1] = 0xfc07c;
        puVar4 = glistp;
        piVar1 = (int *)(param_2 + 0x477c);
        param_2 += 0x2c;
        puVar5 = glistp + 0x2;
        *glistp = auStack_60[*piVar1] & 0x1ff | 0xf5481000;
        glistp = puVar5;
        puVar4[0x1] = 0x0;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xf2000000;
        glistp = puVar5;
        puVar4[0x1] = 0x3c03c;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0xd7000002;
        glistp = puVar5;
        puVar4[0x1] = 0x40004000;
        puVar4 = glistp;
        puVar5 = glistp + 0x2;
        *glistp = 0x1008010;
        glistp = puVar5;
        puVar4[0x1] = gAllVertex + iVar6;
        puVar4 = glistp;
        iVar6 += 0x80;
        puVar5 = glistp + 0x2;
        *glistp = 0x6000204;
        glistp = puVar5;
        puVar4[0x1] = 0x406;
        iVar8 += -0x1;
    } while (iVar8 != 0x0);
    return;
}



void Draw3DCursor(int param_1)

{
    short sVar1;
    short sVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    uint *puVar5;
    uint *puVar6;
    undefined1 *puVar7;
    int iVar8;
    
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar4;
    puVar3[0x1] = 0x0;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar4;
    puVar3[0x1] = 0x0;
    puVar3 = glistp;
    if (*(int *)(param_1 + 0x2c0c8) == 0x0) {
        puVar7 = big_c;
    }
    else {
        puVar7 = small_c;
    }
    puVar4 = glistp + 0x2;
    *glistp = 0xfd100000;
    glistp = puVar4;
    puVar3[0x1] = puVar7;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xf5100000;
    glistp = puVar4;
    puVar3[0x1] = 0x7000000;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe6000000;
    glistp = puVar4;
    puVar3[0x1] = 0x0;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xf3000000;
    glistp = puVar4;
    puVar3[0x1] = 0x75bf080;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar4;
    puVar3[0x1] = 0x0;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xf5102000;
    glistp = puVar4;
    puVar3[0x1] = 0x0;
    puVar3 = glistp;
    puVar5 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar5;
    puVar3[0x1] = 0xfc058;
    for (iVar8 = 0x0; puVar5 = glistp, iVar8 < gTheGame._120328_4_; iVar8 += 0x1) {
        sVar1 = *(short *)(param_1 + 0x2c190);
        sVar2 = *(short *)(param_1 + 0x2c198);
        puVar6 = glistp + 0x2;
        *glistp = ((int)sVar1 + 0x38U) * 0x4000 & 0xffc000 | 0xe4000000 |
                  ((int)sVar2 + 0x17U) * 0x4 & 0xffc;
        glistp = puVar6;
        puVar5[0x1] = ((int)sVar1 & 0x3ffU) << 0xe | ((int)sVar2 & 0x3ffU) << 0x2;
        puVar5 = glistp;
        param_1 += 0x110;
        puVar6 = glistp + 0x2;
        *glistp = 0xe1000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xf1000000;
        glistp = puVar6;
        puVar5[0x1] = 0x4000400;
    }
    return;
}



void Draw3DIcon(int param_1,int param_2)

{
    undefined4 *puVar1;
    uint *puVar2;
    uint *puVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int *piVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    undefined *puVar12;
    uint local_130 [0x4];
    undefined4 local_120;
    undefined4 local_11c;
    undefined4 local_118;
    undefined4 local_114;
    undefined *local_110;
    int local_10c;
    int local_108;
    undefined4 local_104;
    ushort *local_100;
    undefined4 local_fc;
    int *local_f8;
    undefined4 local_f4;
    undefined1 *local_f0;
    undefined4 local_ec;
    undefined1 *local_e8;
    undefined4 local_e4;
    undefined1 *local_e0;
    undefined4 local_dc;
    undefined1 *local_d8;
    undefined4 local_d4;
    undefined1 *local_d0;
    undefined4 local_cc;
    undefined1 *local_c8;
    undefined4 local_c4;
    undefined1 *local_c0;
    undefined4 local_bc;
    undefined1 *local_b8;
    undefined1 *local_b4;
    undefined1 *local_b0;
    undefined1 *local_ac;
    undefined1 *local_a8;
    undefined1 *local_a4;
    undefined1 *local_a0;
    undefined1 *local_9c;
    undefined1 *local_98;
    undefined1 *local_94;
    undefined1 *local_90;
    undefined4 local_8c;
    undefined1 *local_88;
    undefined4 local_84;
    undefined1 *local_80;
    undefined4 local_7c;
    undefined1 *local_78;
    undefined4 local_74;
    undefined *local_70;
    undefined1 *local_6c;
    uint local_68;
    uint local_64;
    int *local_60;
    uint local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    
    puVar1 = glistp;
    puVar12 = NULL;
    local_130[0] = 0x0;
    local_130[1] = 0x2;
    piVar8 = (int *)(param_1 + param_2 * 0x410 + 0x28ae8);
    local_10c = 0x0;
    local_130[2] = 0x4;
    iVar7 = 0x0;
    local_130[3] = 0x6;
    local_120 = 0x80;
    local_11c = 0x82;
    local_118 = 0x84;
    local_114 = 0x86;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar2 = glistp;
    if ((gGameStatus & 0x8) != 0x0) {
        puVar3 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xfc119623;
        glistp = puVar3;
        puVar2[0x1] = 0xff2fffff;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar3;
        puVar2[0x1] = 0x504240;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xfa000000;
        glistp = puVar3;
        puVar2[0x1] = 0xffffff64;
    }
    local_b4 = combo09;
    local_58 = 0x190000;
    local_54 = 0x190000;
    local_50 = 0x190000;
    local_4c = 0x190000;
    local_8c = 0x190000;
    local_84 = 0x190000;
    local_7c = 0x190000;
    local_74 = 0x190000;
    local_f4 = 0x180000;
    local_ec = 0x180000;
    local_e4 = 0x180000;
    local_dc = 0x180000;
    local_d4 = 0x190000;
    local_cc = 0x190000;
    local_c4 = 0x190000;
    local_bc = 0x190000;
    local_104 = 0x2a0000;
    local_fc = 0x1b0000;
    local_6c = combo09;
    local_68 = 0xda380002;
    local_64 = 0x1008010;
    local_60 = &gAllVertex;
    local_5c = 0xd8380002;
    local_b0 = chain01;
    local_ac = chain02;
    local_a8 = chain03;
    local_a4 = chain04;
    local_a0 = chain05;
    local_9c = chain06;
    local_98 = chain07;
    local_94 = chain08;
    local_90 = chain09;
    local_88 = chain010;
    local_80 = chain011;
    local_78 = chain012;
    local_70 = &chain013;
    local_f0 = combo01;
    local_e8 = combo02;
    local_e0 = combo03;
    local_d8 = combo04;
    local_d0 = combo05;
    local_c8 = combo06;
    local_c0 = combo07;
    local_b8 = combo08;
    local_100 = &gGameStatus;
    local_f8 = &gMain;
    local_110 = NULL;
    local_108 = 0x0;
    do {
        if (((((*piVar8 == -0x1) && (uVar4 = piVar8[0x7], 0x0 < (int)uVar4)) && (0x1 < piVar8[0x3]))
            && (piVar8[0x3] < 0x8)) &&
           ((((*local_100 & 0x10) == 0x0 || (0x38d < *local_f8)) ||
            (uVar4 != (((int)uVar4 >> 0x1) + (uint)((int)uVar4 < 0x0 && (uVar4 & 0x1) != 0x0)) * 0x2
            )))) {
            iVar5 = piVar8[0x1];
            if (iVar5 == 0xc) {
                iVar7 = piVar8[0x2];
                local_10c = 0x1;
                puVar12 = local_f0;
                if ((((0xb < iVar7) && (puVar12 = local_e8, 0x13 < iVar7)) &&
                    ((puVar12 = local_e0, 0x1b < iVar7 &&
                     (((puVar12 = local_d8, 0x23 < iVar7 && (puVar12 = local_d0, 0x2b < iVar7)) &&
                      (puVar12 = local_c8, 0x33 < iVar7)))))) &&
                   ((puVar12 = local_c0, 0x3b < iVar7 && (puVar12 = local_b4, iVar7 < 0x44)))) {
                    puVar12 = local_b8;
                }
                iVar7 = Return3DComboTile(piVar8[0x2]);
            }
            else if (iVar5 < 0xc) {
                if (iVar5 == 0xa) {
                    iVar7 = piVar8[0x2];
                    local_10c = 0x1;
                    puVar12 = local_b0;
                    if (((((0x8 < iVar7) && (puVar12 = local_ac, 0x10 < iVar7)) &&
                         ((puVar12 = local_a8, 0x18 < iVar7 &&
                          (((puVar12 = local_a4, 0x20 < iVar7 && (puVar12 = local_a0, 0x28 < iVar7))
                           && (puVar12 = local_9c, 0x30 < iVar7)))))) &&
                        ((puVar12 = local_98, 0x38 < iVar7 && (puVar12 = local_94, 0x40 < iVar7))))
                       && ((puVar12 = local_90, 0x48 < iVar7 &&
                           (((puVar12 = local_88, 0x50 < iVar7 && (puVar12 = local_80, 0x58 < iVar7)
                             ) && (puVar12 = local_70, iVar7 < 0x61)))))) {
                        puVar12 = local_78;
                    }
                    iVar7 = Return3DChainTile(piVar8[0x2]);
                }
                else if (0x9 < iVar5) {
                    local_10c = 0x2;
                    iVar7 = 0x6;
                    puVar12 = local_6c;
                }
            }
            else if (iVar5 < 0xe) {
                local_10c = 0x2;
                iVar7 = 0x4;
                puVar12 = local_b4;
            }
            puVar2 = glistp;
            if (local_110 != puVar12) {
                puVar3 = glistp + 0x2;
                *glistp = 0xfd500000;
                glistp = puVar3;
                puVar2[0x1] = (uint)puVar12;
                puVar2 = glistp;
                puVar3 = glistp + 0x2;
                *glistp = 0xf5500000;
                glistp = puVar3;
                puVar2[0x1] = 0x7000000;
                puVar2 = glistp;
                puVar3 = glistp + 0x2;
                *glistp = 0xe6000000;
                glistp = puVar3;
                puVar2[0x1] = 0x0;
                puVar2 = glistp;
                puVar3 = glistp + 0x2;
                *glistp = 0xf3000000;
                glistp = puVar3;
                puVar2[0x1] = 0x73ff100;
                puVar2 = glistp;
                puVar3 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar3;
                puVar2[0x1] = 0x0;
                puVar2 = glistp;
                puVar3 = glistp + 0x2;
                *glistp = 0xf5481000;
                glistp = puVar3;
                puVar2[0x1] = 0x0;
                puVar2 = glistp;
                puVar3 = glistp + 0x2;
                *glistp = 0xf2000000;
                glistp = puVar3;
                puVar2[0x1] = 0xfc07c;
                puVar2 = glistp;
                if (iVar7 == 0x7) {
                    puVar3 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar3;
                    puVar2[0x1] = 0x0;
                }
                local_110 = puVar12;
            }
            puVar2 = glistp;
            if (local_10c == 0x2) {
                puVar3 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar3;
                puVar2[0x1] = 0x0;
            }
            iVar9 = 0x0;
            iVar5 = local_10c;
            if (0x0 < local_10c) {
                do {
                    puVar2 = glistp;
                    iVar11 = iVar7 + iVar9;
                    iVar6 = piVar8[0x6];
                    iVar10 = piVar8[0x3] + iVar9;
                    puVar3 = glistp + 0x2;
                    *glistp = local_68;
                    glistp = puVar3;
                    puVar2[0x1] = (uint)(piVar8 + 0xa);
                    puVar2 = glistp;
                    iVar9 += 0x1;
                    puVar3 = glistp + 0x2;
                    *glistp = local_64;
                    glistp = puVar3;
                    puVar2[0x1] = *local_60 + (iVar6 * 0x90 + iVar10 * 0x8) * 0x10;
                    puVar2 = glistp;
                    puVar3 = glistp + 0x2;
                    *glistp = 0xfd500000;
                    glistp = puVar3;
                    puVar2[0x1] = (uint)puVar12;
                    puVar2 = glistp;
                    puVar3 = glistp + 0x2;
                    *glistp = 0xf5500000;
                    glistp = puVar3;
                    puVar2[0x1] = 0x7000000;
                    puVar2 = glistp;
                    puVar3 = glistp + 0x2;
                    *glistp = 0xe6000000;
                    glistp = puVar3;
                    puVar2[0x1] = 0x0;
                    puVar2 = glistp;
                    puVar3 = glistp + 0x2;
                    *glistp = 0xf3000000;
                    glistp = puVar3;
                    puVar2[0x1] = 0x73ff100;
                    puVar2 = glistp;
                    puVar3 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar3;
                    puVar2[0x1] = 0x0;
                    puVar2 = glistp;
                    puVar3 = glistp + 0x2;
                    *glistp = 0xf5481000;
                    glistp = puVar3;
                    puVar2[0x1] = 0x0;
                    puVar2 = glistp;
                    puVar3 = glistp + 0x2;
                    *glistp = 0xf2000000;
                    glistp = puVar3;
                    puVar2[0x1] = 0xfc07c;
                    puVar2 = glistp;
                    puVar3 = glistp + 0x2;
                    *glistp = local_130[iVar11] & 0x1ff | 0xf5481000;
                    glistp = puVar3;
                    puVar2[0x1] = 0x0;
                    puVar2 = glistp;
                    puVar3 = glistp + 0x2;
                    *glistp = 0xf2000000;
                    glistp = puVar3;
                    puVar2[0x1] = 0x3c03c;
                    puVar2 = glistp;
                    puVar3 = glistp + 0x2;
                    *glistp = 0xd7000002;
                    glistp = puVar3;
                    puVar2[0x1] = 0x40004000;
                    puVar2 = glistp;
                    puVar3 = glistp + 0x2;
                    *glistp = 0x6000204;
                    glistp = puVar3;
                    puVar2[0x1] = 0x406;
                    puVar2 = glistp;
                    puVar3 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar3;
                    puVar2[0x1] = 0x0;
                    puVar2 = glistp;
                    puVar3 = glistp + 0x2;
                    *glistp = local_5c;
                    glistp = puVar3;
                    puVar2[0x1] = 0x40;
                    iVar5 += -0x1;
                } while (iVar5 != 0x0);
            }
        }
        puVar2 = glistp;
        piVar8 = piVar8 + 0x1a;
        local_108 += 0x1;
    } while (local_108 < 0xa);
    if ((gGameStatus & 0x8) != 0x0) {
        puVar3 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar3;
        puVar2[0x1] = 0x0;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xfc121824;
        glistp = puVar3;
        puVar2[0x1] = 0xff33ffff;
        puVar2 = glistp;
        puVar3 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar3;
        puVar2[0x1] = 0xf0a7008;
    }
    return;
}



void Draw3DAttackBrick(int param_1,int param_2,int param_3)

{
    byte bVar1;
    short sVar2;
    ushort uVar3;
    ushort uVar4;
    undefined4 *puVar5;
    uint *puVar6;
    uint *puVar7;
    int iVar8;
    int iVar9;
    uint uVar10;
    int *piVar11;
    int *piVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    uint uVar16;
    uint local_64;
    
    puVar5 = glistp;
    uVar14 = 0x0;
    puVar6 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar6;
    piVar11 = (int *)(param_1 + param_2 * 0xc80 + 0x258e8);
    iVar8 = param_3 + 0x1;
    puVar5[0x1] = 0x0;
    local_64 = 0x0;
    piVar12 = piVar11 + param_3 * 0x14;
    uVar16 = 0x0;
    if (-0x1 < param_3) {
        do {
            puVar6 = glistp;
            uVar13 = uVar16;
            if ((((*piVar12 == 0x2) || (*piVar12 == 0x3)) && (piVar12[0x2] < 0x5)) &&
               ((uVar15 = (uint)*(short *)(piVar12 + 0xc), -0x1 < (int)uVar15 &&
                ((int)uVar15 < 0x141)))) {
                sVar2 = *(short *)(piVar12 + 0xe);
                if (piVar12[0x1] < 0xc) {
                    uVar13 = gbrickB._0_4_;
                    if (((param_2 != 0x1) && (uVar13 = uVar16, param_2 < 0x1)) &&
                       (uVar13 = gbrickA._0_4_, param_2 < 0x0)) {
                        uVar13 = uVar16;
                    }
                }
                else if (piVar12[0x1] < 0x12) {
                    uVar13 = gbrickB._4_4_;
                    if (((param_2 != 0x1) && (uVar13 = uVar16, param_2 < 0x1)) &&
                       (uVar13 = gbrickA._4_4_, param_2 < 0x0)) {
                        uVar13 = uVar16;
                    }
                }
                else {
                    uVar13 = gbrickB._8_4_;
                    if (((param_2 != 0x1) && (uVar13 = uVar16, param_2 < 0x1)) &&
                       (uVar13 = gbrickA._8_4_, param_2 < 0x0)) {
                        uVar13 = uVar16;
                    }
                }
                if (uVar14 == uVar13) {
                    puVar7 = glistp + 0x2;
                    *glistp = 0xfd100000;
                    glistp = puVar7;
                    puVar6[0x1] = uVar14;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xf5100000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x7000000;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xe6000000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x0;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xf3000000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x77ff080;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x0;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xf5102000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x0;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xf2000000;
                    glistp = puVar7;
                    puVar6[0x1] = 0xfc07c;
                }
                else {
                    puVar7 = glistp + 0x2;
                    *glistp = 0xfd100000;
                    glistp = puVar7;
                    puVar6[0x1] = uVar13;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xf5100000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x7000000;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xe6000000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x0;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xf3000000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x77ff080;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x0;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xf5102000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x0;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xf2000000;
                    glistp = puVar7;
                    puVar6[0x1] = 0xfc07c;
                    uVar14 = uVar13;
                }
                puVar6 = glistp;
                iVar9 = piVar12[0x1];
                if (iVar9 < 0x4) {
                    uVar16 = (uint)*(ushort *)((int)piVar12 + 0x36);
                    if (iVar9 == 0x1) {
                        uVar10 = 0x0;
                    }
                    else if (iVar9 == 0x2) {
                        uVar10 = 0x6;
                    }
                    else {
                        uVar10 = 0xa;
                    }
                    puVar7 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x0;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = uVar10 | 0xf5102000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x0;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xf2000000;
                    glistp = puVar7;
                    puVar6[0x1] = (uVar16 - 0x1) * 0x4000 & 0xffc000 | 0x3c;
                }
                else {
                    uVar16 = 0x14;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x0;
                    puVar6 = glistp;
                    bVar1 = *(byte *)((int)piVar12 + 0x46);
                    if (bVar1 == 0x4) {
                        puVar7 = glistp + 0x2;
                        *glistp = 0xf5102100;
                        glistp = puVar7;
                        puVar6[0x1] = 0x0;
                        puVar6 = glistp;
                        puVar7 = glistp + 0x2;
                        *glistp = 0xf2000000;
                        glistp = puVar7;
                        puVar6[0x1] = 0x4c03c;
                    }
                    else if (bVar1 < 0x4) {
                        if (bVar1 == 0x2) {
                            puVar7 = glistp + 0x2;
                            *glistp = 0xf5102005;
                            glistp = puVar7;
                            puVar6[0x1] = 0x0;
                            puVar6 = glistp;
                            puVar7 = glistp + 0x2;
                            *glistp = 0xf2000000;
                            glistp = puVar7;
                            puVar6[0x1] = 0x4c03c;
                        }
                        else if (bVar1 < 0x2) {
                            if (bVar1 != 0x0) {
                                puVar7 = glistp + 0x2;
                                *glistp = 0xf5102000;
                                glistp = puVar7;
                                puVar6[0x1] = 0x0;
                                puVar6 = glistp;
                                puVar7 = glistp + 0x2;
                                *glistp = 0xf2000000;
                                glistp = puVar7;
                                puVar6[0x1] = 0x4c03c;
                            }
                        }
                        else {
                            puVar7 = glistp + 0x2;
                            *glistp = 0xf510200a;
                            glistp = puVar7;
                            puVar6[0x1] = 0x0;
                            puVar6 = glistp;
                            puVar7 = glistp + 0x2;
                            *glistp = 0xf2000000;
                            glistp = puVar7;
                            puVar6[0x1] = 0x4c03c;
                        }
                    }
                    else if (bVar1 == 0x6) {
                        puVar7 = glistp + 0x2;
                        *glistp = 0xf510210a;
                        glistp = puVar7;
                        puVar6[0x1] = 0x0;
                        puVar6 = glistp;
                        puVar7 = glistp + 0x2;
                        *glistp = 0xf2000000;
                        glistp = puVar7;
                        puVar6[0x1] = 0x4c03c;
                    }
                    else if (bVar1 < 0x6) {
                        puVar7 = glistp + 0x2;
                        *glistp = 0xf5102105;
                        glistp = puVar7;
                        puVar6[0x1] = 0x0;
                        puVar6 = glistp;
                        puVar7 = glistp + 0x2;
                        *glistp = 0xf2000000;
                        glistp = puVar7;
                        puVar6[0x1] = 0x4c03c;
                    }
                }
                puVar6 = glistp;
                puVar7 = glistp + 0x2;
                *glistp = ((int)sVar2 + 0x10U) * 0x4 & 0xffc |
                          (uVar15 + uVar16) * 0x4000 & 0xffc000 | 0xe4000000;
                glistp = puVar7;
                puVar6[0x1] = (uVar15 & 0x3ff) << 0xe | ((int)sVar2 & 0x3ffU) << 0x2;
                puVar6 = glistp;
                puVar7 = glistp + 0x2;
                *glistp = 0xe1000000;
                glistp = puVar7;
                puVar6[0x1] = 0x0;
                puVar6 = glistp;
                puVar7 = glistp + 0x2;
                *glistp = 0xf1000000;
                glistp = puVar7;
                puVar6[0x1] = 0x4000400;
                puVar6 = glistp;
                puVar7 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar7;
                puVar6[0x1] = 0x0;
            }
            piVar12 = piVar12 + -0x14;
            iVar8 += -0x1;
            uVar16 = uVar13;
        } while (iVar8 != 0x0);
    }
    puVar6 = glistp;
    puVar7 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar7;
    puVar6[0x1] = 0x0;
    puVar6 = glistp;
    puVar7 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar7;
    puVar6[0x1] = 0x8000;
    puVar6 = glistp;
    puVar7 = glistp + 0x2;
    *glistp = 0xfd100000;
    glistp = puVar7;
    puVar6[0x1] = (uint)colorTable;
    puVar6 = glistp;
    puVar7 = glistp + 0x2;
    *glistp = 0xe8000000;
    glistp = puVar7;
    puVar6[0x1] = 0x0;
    puVar6 = glistp;
    puVar7 = glistp + 0x2;
    *glistp = 0xf5000100;
    glistp = puVar7;
    puVar6[0x1] = 0x7000000;
    puVar6 = glistp;
    puVar7 = glistp + 0x2;
    *glistp = 0xe6000000;
    glistp = puVar7;
    puVar6[0x1] = 0x0;
    puVar6 = glistp;
    puVar7 = glistp + 0x2;
    *glistp = 0xf0000000;
    glistp = puVar7;
    puVar6[0x1] = 0x73fc000;
    puVar6 = glistp;
    puVar7 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar7;
    puVar6[0x1] = 0x0;
    puVar6 = glistp;
    if (param_2 == 0x1) {
        local_64 = explosionA;
    }
    else if ((param_2 < 0x1) && (-0x1 < param_2)) {
        local_64 = explosionB;
    }
    puVar7 = glistp + 0x2;
    *glistp = 0xfd500000;
    glistp = puVar7;
    iVar8 = param_3 + 0x1;
    puVar6[0x1] = local_64;
    puVar6 = glistp;
    puVar7 = glistp + 0x2;
    *glistp = 0xf5500000;
    glistp = puVar7;
    puVar6[0x1] = 0x7000000;
    puVar6 = glistp;
    puVar7 = glistp + 0x2;
    *glistp = 0xe6000000;
    glistp = puVar7;
    puVar6[0x1] = 0x0;
    puVar6 = glistp;
    puVar7 = glistp + 0x2;
    *glistp = 0xf3000000;
    glistp = puVar7;
    puVar6[0x1] = 0x71ff100;
    puVar6 = glistp;
    puVar7 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar7;
    puVar6[0x1] = 0x0;
    puVar6 = glistp;
    puVar7 = glistp + 0x2;
    *glistp = 0xf5481000;
    glistp = puVar7;
    puVar6[0x1] = 0x0;
    puVar6 = glistp;
    puVar7 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar7;
    puVar6[0x1] = 0xfc03c;
    if (-0x1 < param_3) {
        do {
            puVar6 = glistp;
            if ((*piVar11 == 0x1) && (piVar11[0x3] < 0x0)) {
                uVar3 = *(ushort *)((int)piVar11 + 0x32);
                uVar4 = *(ushort *)((int)piVar11 + 0x3a);
                puVar7 = glistp + 0x2;
                *glistp = (uVar3 + 0x10) * 0x4000 & 0xffc000 | 0xe4000000 |
                          (uVar4 + 0x10) * 0x4 & 0xffc;
                glistp = puVar7;
                puVar6[0x1] = (uVar3 & 0x3ff) << 0xe | (uVar4 & 0x3ff) << 0x2;
                puVar6 = glistp;
                puVar7 = glistp + 0x2;
                *glistp = 0xe1000000;
                glistp = puVar7;
                puVar6[0x1] = 0x0;
                puVar6 = glistp;
                puVar7 = glistp + 0x2;
                *glistp = 0xf1000000;
                glistp = puVar7;
                puVar6[0x1] = 0x4000400;
            }
            piVar11 = piVar11 + 0x14;
            iVar8 += -0x1;
        } while (iVar8 != 0x0);
    }
    return;
}



void Draw3DAttackBlock(int param_1,int param_2,int param_3,int param_4)

{
    uint *puVar1;
    uint *puVar2;
    uint local_40 [0x4];
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;
    
    puVar1 = glistp;
    local_40[0] = 0x0;
    local_40[1] = 0x2;
    local_40[2] = 0x4;
    local_40[3] = 0x6;
    local_30 = 0x80;
    local_2c = 0x82;
    local_28 = 0x84;
    local_24 = 0x86;
    puVar2 = glistp + 0x2;
    *glistp = local_40[param_3] & 0x1ff | 0xf5481000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar2;
    puVar1[0x1] = 0x3c03c;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xd7000002;
    glistp = puVar2;
    puVar1[0x1] = 0x40004000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0x1008010;
    glistp = puVar2;
    puVar1[0x1] = gAllVertex + (param_2 * 0x8 + param_1 * 0x90) * 0x10;
    puVar1 = glistp;
    if (param_4 == 0x0) {
        puVar2 = glistp + 0x2;
        *glistp = 0x6080a0c;
        glistp = puVar2;
        puVar1[0x1] = 0x80e0a;
    }
    else {
        puVar2 = glistp + 0x2;
        *glistp = 0x6000204;
        glistp = puVar2;
        puVar1[0x1] = 0x406;
    }
    return;
}



undefined4 Draw3DAttack(int param_1,int param_2,int param_3)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    uint uVar3;
    undefined *puVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    undefined4 *puVar11;
    int iVar12;
    int iVar13;
    int *piVar14;
    int local_98;
    int local_94;
    int local_90;
    int local_8c;
    int local_88;
    int local_84;
    undefined *local_80;
    int local_7c;
    int local_78;
    int local_74;
    int local_70;
    undefined4 *local_6c;
    undefined4 *local_68;
    undefined4 *local_64;
    undefined *local_60;
    undefined1 *local_5c;
    undefined1 *local_58;
    undefined4 local_54;
    undefined4 local_50;
    
    local_60 = &gblockx;
    local_84 = param_1 + param_2 * 0x2520 + 0x1c464;
    piVar14 = (int *)(param_1 + param_2 * 0xc80 + 0x258e8);
    local_88 = param_1 + param_2 * 0xd8 + 0x2e2e8;
    local_50 = 0xfc07c;
    local_5c = gblockA;
    local_58 = gblockB;
    local_80 = NULL;
    local_70 = 0x0;
    local_54 = 0xf2000000;
    local_8c = param_2;
    do {
        puVar11 = glistp;
        if (0x4 < *piVar14) {
            if (param_3 == 0x0) {
                local_78 = piVar14[0x6];
                local_98 = piVar14[0x7];
                if (local_78 == local_98) {
                    local_98 = 0x12;
                    local_7c = 0x9;
                    local_78 = 0x9;
                }
                else {
                    local_7c = local_78;
                    if (local_98 < local_78) {
                        local_98 = 0x12;
                        local_78 = 0x0;
                    }
                    else if (local_78 < 0x9) {
                        local_7c = 0x9;
                        local_78 = 0x9 - local_78;
                    }
                    else {
                        local_78 = 0x0;
                    }
                }
            }
            else {
                local_7c = piVar14[0x6];
                local_98 = piVar14[0x7];
                if (local_7c == local_98) {
                    local_98 = 0x9;
                    local_7c = 0x0;
                    local_78 = 0x0;
                }
                else if (local_98 < local_7c) {
                    local_7c = 0x0;
                    iVar7 = piVar14[0x6];
                    local_78 = 0x12 - iVar7;
                    if (((piVar14[0x1] == 0xb) && (0x5 < iVar7)) && (iVar7 < 0x9)) {
                        local_98 = 0x12;
                    }
                }
                else {
                    if (0x9 < local_98) {
                        local_98 = 0x9;
                    }
                    local_78 = 0x0;
                }
            }
            iVar7 = local_98;
            if (piVar14[0x2] == -0x1) {
                if (piVar14[0x1] < 0xe) {
                    for (iVar9 = 0x0; puVar11 = glistp, iVar9 < piVar14[0x5]; iVar9 += 0x1) {
                        iVar12 = piVar14[0x9] + iVar9;
                        if (iVar12 < 0xc) {
                            iVar13 = piVar14[0x1];
                            if (iVar13 == 0xd) {
                                if (local_8c == 0x0) {
                                    if (iVar9 == 0x0) {
                                        puVar4 = *(undefined **)((int)local_5c + 0x8);
                                    }
                                    else {
                                        puVar4 = *(undefined **)((int)local_5c + 0x4);
                                    }
                                }
                                else if (iVar9 == 0x0) {
                                    puVar4 = *(undefined **)((int)local_58 + 0x8);
                                }
                                else {
                                    puVar4 = *(undefined **)((int)local_58 + 0x4);
                                }
                            }
                            else if ((0xc < iVar13) || (puVar4 = local_60, iVar13 != 0x9)) {
                                if (local_8c == 0x0) {
                                    puVar4 = *(undefined **)local_5c;
                                }
                                else {
                                    puVar4 = *(undefined **)local_58;
                                }
                            }
                            if (local_80 != puVar4) {
                                puVar1 = glistp + 0x2;
                                *glistp = 0xfd500000;
                                glistp = puVar1;
                                puVar11[0x1] = puVar4;
                                puVar11 = glistp;
                                puVar1 = glistp + 0x2;
                                *glistp = 0xf5500000;
                                glistp = puVar1;
                                puVar11[0x1] = 0x7000000;
                                puVar11 = glistp;
                                puVar1 = glistp + 0x2;
                                *glistp = 0xe6000000;
                                glistp = puVar1;
                                puVar11[0x1] = 0x0;
                                puVar11 = glistp;
                                puVar1 = glistp + 0x2;
                                *glistp = 0xf3000000;
                                glistp = puVar1;
                                puVar11[0x1] = 0x73ff100;
                                puVar11 = glistp;
                                puVar1 = glistp + 0x2;
                                *glistp = 0xe7000000;
                                glistp = puVar1;
                                puVar11[0x1] = 0x0;
                                puVar11 = glistp;
                                puVar1 = glistp + 0x2;
                                *glistp = 0xf5481000;
                                glistp = puVar1;
                                puVar11[0x1] = 0x0;
                                puVar11 = glistp;
                                puVar1 = glistp + 0x2;
                                *glistp = local_54;
                                glistp = puVar1;
                                puVar11[0x1] = local_50;
                                puVar11 = glistp;
                                puVar1 = glistp + 0x2;
                                *glistp = 0xe7000000;
                                glistp = puVar1;
                                puVar11[0x1] = 0x0;
                                local_80 = puVar4;
                            }
                            local_94 = local_78;
                            iVar13 = local_88 + iVar12 * 0x12;
                            for (local_90 = local_7c; local_90 < local_98; local_90 += 0x1) {
                                if (piVar14[0x1] == 0xb) {
                                    Draw3DChain3_CrossBoundary
                                              (piVar14,&local_90,&local_98,&local_94);
                                }
                                iVar10 = ReturnAttackTexValue(piVar14,piVar14[0x1],iVar9,local_94);
                                puVar11 = glistp;
                                iVar8 = iVar10 / 0xa + (iVar10 >> 0x1f);
                                puVar1 = glistp + 0x2;
                                *glistp = 0xfd500000;
                                glistp = puVar1;
                                puVar11[0x1] = puVar4;
                                puVar11 = glistp;
                                puVar1 = glistp + 0x2;
                                *glistp = 0xf5500000;
                                glistp = puVar1;
                                puVar11[0x1] = 0x7000000;
                                puVar11 = glistp;
                                puVar1 = glistp + 0x2;
                                *glistp = 0xe6000000;
                                glistp = puVar1;
                                puVar11[0x1] = 0x0;
                                puVar11 = glistp;
                                puVar1 = glistp + 0x2;
                                *glistp = 0xf3000000;
                                glistp = puVar1;
                                puVar11[0x1] = 0x73ff100;
                                puVar11 = glistp;
                                puVar1 = glistp + 0x2;
                                *glistp = 0xe7000000;
                                glistp = puVar1;
                                puVar11[0x1] = 0x0;
                                puVar11 = glistp;
                                puVar1 = glistp + 0x2;
                                *glistp = 0xf5481000;
                                glistp = puVar1;
                                puVar11[0x1] = 0x0;
                                puVar11 = glistp;
                                puVar1 = glistp + 0x2;
                                *glistp = local_54;
                                glistp = puVar1;
                                puVar11[0x1] = local_50;
                                if (*(char *)(iVar13 + local_90) != '\0') {
                                    Draw3DAttackBlock(iVar12,local_90,
                                                      iVar10 + (iVar8 - (iVar8 >> 0x1f)) * -0xa,
                                                      param_3);
                                }
                                local_94 += 0x1;
                            }
                            if (local_98 != iVar7) {
                                local_98 = iVar7;
                            }
                        }
                    }
                }
                else {
                    iVar7 = 0x5;
                    local_6c = (undefined4 *)((int)local_5c + 0x14);
                    puVar11 = (undefined4 *)((int)local_58 + 0x14);
                    do {
                        puVar1 = glistp;
                        if (local_8c == 0x0) {
                            puVar4 = (undefined *)*local_6c;
                        }
                        else {
                            puVar4 = (undefined *)*puVar11;
                        }
                        if (local_80 != puVar4) {
                            puVar2 = glistp + 0x2;
                            *glistp = 0xfd500000;
                            glistp = puVar2;
                            puVar1[0x1] = puVar4;
                            puVar1 = glistp;
                            puVar2 = glistp + 0x2;
                            *glistp = 0xf5500000;
                            glistp = puVar2;
                            puVar1[0x1] = 0x7000000;
                            puVar1 = glistp;
                            puVar2 = glistp + 0x2;
                            *glistp = 0xe6000000;
                            glistp = puVar2;
                            puVar1[0x1] = 0x0;
                            puVar1 = glistp;
                            puVar2 = glistp + 0x2;
                            *glistp = 0xf3000000;
                            glistp = puVar2;
                            puVar1[0x1] = 0x73ff100;
                            puVar1 = glistp;
                            puVar2 = glistp + 0x2;
                            *glistp = 0xe7000000;
                            glistp = puVar2;
                            puVar1[0x1] = 0x0;
                            puVar1 = glistp;
                            puVar2 = glistp + 0x2;
                            *glistp = 0xf5481000;
                            glistp = puVar2;
                            puVar1[0x1] = 0x0;
                            puVar1 = glistp;
                            puVar2 = glistp + 0x2;
                            *glistp = local_54;
                            glistp = puVar2;
                            puVar1[0x1] = local_50;
                            puVar1 = glistp;
                            puVar2 = glistp + 0x2;
                            *glistp = 0xe7000000;
                            glistp = puVar2;
                            puVar1[0x1] = 0x0;
                            local_80 = puVar4;
                        }
                        for (iVar9 = 0x0; iVar9 < piVar14[0x5]; iVar9 += 0x1) {
                            iVar12 = piVar14[0x9] + iVar9;
                            if (iVar12 < 0xc) {
                                local_94 = local_78;
                                iVar13 = local_88 + iVar12 * 0x12;
                                for (local_90 = local_7c; local_90 < local_98; local_90 += 0x1) {
                                    iVar8 = ReturnAttackTexValue
                                                      (piVar14,piVar14[0x1],iVar9,local_94);
                                    puVar1 = glistp;
                                    iVar10 = iVar8 / 0xa + (iVar8 >> 0x1f);
                                    if (iVar10 - (iVar10 >> 0x1f) == iVar7) {
                                        puVar2 = glistp + 0x2;
                                        *glistp = 0xfd500000;
                                        glistp = puVar2;
                                        puVar1[0x1] = puVar4;
                                        puVar1 = glistp;
                                        puVar2 = glistp + 0x2;
                                        *glistp = 0xf5500000;
                                        glistp = puVar2;
                                        puVar1[0x1] = 0x7000000;
                                        puVar1 = glistp;
                                        puVar2 = glistp + 0x2;
                                        *glistp = 0xe6000000;
                                        glistp = puVar2;
                                        puVar1[0x1] = 0x0;
                                        puVar1 = glistp;
                                        puVar2 = glistp + 0x2;
                                        *glistp = 0xf3000000;
                                        glistp = puVar2;
                                        puVar1[0x1] = 0x73ff100;
                                        puVar1 = glistp;
                                        puVar2 = glistp + 0x2;
                                        *glistp = 0xe7000000;
                                        glistp = puVar2;
                                        puVar1[0x1] = 0x0;
                                        puVar1 = glistp;
                                        puVar2 = glistp + 0x2;
                                        *glistp = 0xf5481000;
                                        glistp = puVar2;
                                        puVar1[0x1] = 0x0;
                                        puVar1 = glistp;
                                        puVar2 = glistp + 0x2;
                                        *glistp = local_54;
                                        glistp = puVar2;
                                        puVar1[0x1] = local_50;
                                        if (*(char *)(iVar13 + local_90) != '\0') {
                                            Draw3DAttackBlock(iVar12,local_90,
                                                              iVar8 + (iVar10 - (iVar10 >> 0x1f)) *
                                                                      -0xa,param_3);
                                        }
                                    }
                                    local_94 += 0x1;
                                }
                            }
                        }
                        iVar7 += -0x1;
                        local_6c = local_6c + -0x1;
                        puVar11 = puVar11 + -0x1;
                    } while (0x2 < iVar7);
                }
            }
            else {
                puVar4 = local_60;
                if (piVar14[0x1] != 0x9) {
                    if (local_8c == 0x0) {
                        puVar4 = *(undefined **)local_5c;
                    }
                    else {
                        puVar4 = *(undefined **)local_58;
                    }
                }
                if (local_80 != puVar4) {
                    puVar1 = glistp + 0x2;
                    *glistp = 0xfd500000;
                    glistp = puVar1;
                    puVar11[0x1] = puVar4;
                    puVar11 = glistp;
                    puVar1 = glistp + 0x2;
                    *glistp = 0xf5500000;
                    glistp = puVar1;
                    puVar11[0x1] = 0x7000000;
                    puVar11 = glistp;
                    puVar1 = glistp + 0x2;
                    *glistp = 0xe6000000;
                    glistp = puVar1;
                    puVar11[0x1] = 0x0;
                    puVar11 = glistp;
                    puVar1 = glistp + 0x2;
                    *glistp = 0xf3000000;
                    glistp = puVar1;
                    puVar11[0x1] = 0x73ff100;
                    puVar11 = glistp;
                    puVar1 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar1;
                    puVar11[0x1] = 0x0;
                    puVar11 = glistp;
                    puVar1 = glistp + 0x2;
                    *glistp = 0xf5481000;
                    glistp = puVar1;
                    puVar11[0x1] = 0x0;
                    puVar11 = glistp;
                    puVar1 = glistp + 0x2;
                    *glistp = local_54;
                    glistp = puVar1;
                    puVar11[0x1] = local_50;
                    puVar11 = glistp;
                    puVar1 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar1;
                    puVar11[0x1] = 0x0;
                    local_80 = puVar4;
                }
                iVar9 = 0x0;
                for (iVar12 = 0x0; iVar12 < piVar14[0x5]; iVar12 += 0x1) {
                    iVar13 = piVar14[0x9] + iVar12;
                    if (iVar13 < 0xc) {
                        iVar10 = local_84 + iVar13 * 0x318;
                        iVar8 = local_88 + iVar13 * 0x12;
                        for (local_90 = local_7c; local_90 < local_98; local_90 += 0x1) {
                            if (piVar14[0x1] == 0xb) {
                                Draw3DChain3_CrossBoundary(piVar14,&local_90,&local_98,&local_94);
                            }
                            uVar3 = piVar14[0x3];
                            iVar5 = -0x1;
                            if (((int)uVar3 < 0x1) && (piVar14[0x4] < 0x1)) {
                                iVar6 = iVar10 + local_90 * 0x2c;
                                if (*(int *)(iVar6 + 0x10) == 0x9) {
                                    iVar6 = *(int *)(iVar6 + 0xc);
                                    if (iVar6 == 0x0) {
                                        iVar5 = 0x3;
                                    }
                                    else if (iVar6 == 0x1) {
                                        iVar9 = -0x1;
                                    }
                                }
                            }
                            else if (uVar3 == (((int)uVar3 >> 0x1) +
                                              (uint)((int)uVar3 < 0x0 && (uVar3 & 0x1) != 0x0)) *
                                              0x2) {
                                iVar5 = 0x3;
                            }
                            else {
                                iVar5 = 0x7;
                            }
                            if ((iVar5 != -0x1) && (*(char *)(iVar8 + local_90) != '\0')) {
                                Draw3DAttackBlock(iVar13,local_90,iVar5,param_3);
                            }
                        }
                        if (local_98 != iVar7) {
                            local_98 = iVar7;
                        }
                    }
                }
                if (iVar9 != 0x0) {
                    iVar7 = piVar14[0x1] + -0x16;
                    if (iVar7 == 0xc) {
                        local_74 = 0x0;
                        iVar9 = 0x0;
                    }
                    else if (iVar7 == 0xd) {
                        local_74 = 0x1;
                        iVar9 = 0x2;
                    }
                    else {
                        local_74 = 0x3;
                        iVar9 = 0x5;
                    }
                    local_64 = (undefined4 *)((int)local_5c + iVar9 * 0x4);
                    local_68 = (undefined4 *)((int)local_58 + iVar9 * 0x4);
                    for (; puVar11 = glistp, local_74 <= iVar9; iVar9 += -0x1) {
                        if (local_8c == 0x0) {
                            puVar4 = (undefined *)*local_64;
                        }
                        else {
                            puVar4 = (undefined *)*local_68;
                        }
                        if (local_80 != puVar4) {
                            puVar1 = glistp + 0x2;
                            *glistp = 0xfd500000;
                            glistp = puVar1;
                            puVar11[0x1] = puVar4;
                            puVar11 = glistp;
                            puVar1 = glistp + 0x2;
                            *glistp = 0xf5500000;
                            glistp = puVar1;
                            puVar11[0x1] = 0x7000000;
                            puVar11 = glistp;
                            puVar1 = glistp + 0x2;
                            *glistp = 0xe6000000;
                            glistp = puVar1;
                            puVar11[0x1] = 0x0;
                            puVar11 = glistp;
                            puVar1 = glistp + 0x2;
                            *glistp = 0xf3000000;
                            glistp = puVar1;
                            puVar11[0x1] = 0x73ff100;
                            puVar11 = glistp;
                            puVar1 = glistp + 0x2;
                            *glistp = 0xe7000000;
                            glistp = puVar1;
                            puVar11[0x1] = 0x0;
                            puVar11 = glistp;
                            puVar1 = glistp + 0x2;
                            *glistp = 0xf5481000;
                            glistp = puVar1;
                            puVar11[0x1] = 0x0;
                            puVar11 = glistp;
                            puVar1 = glistp + 0x2;
                            *glistp = local_54;
                            glistp = puVar1;
                            puVar11[0x1] = local_50;
                            puVar11 = glistp;
                            puVar1 = glistp + 0x2;
                            *glistp = 0xe7000000;
                            glistp = puVar1;
                            puVar11[0x1] = 0x0;
                            local_80 = puVar4;
                        }
                        for (iVar12 = 0x1; iVar12 < piVar14[0x5]; iVar12 += 0x1) {
                            iVar13 = piVar14[0x9] + iVar12;
                            if (iVar13 < 0xc) {
                                local_94 = local_78;
                                iVar8 = local_84 + iVar13 * 0x318;
                                iVar10 = local_88 + iVar13 * 0x12;
                                for (local_90 = local_7c; local_90 < local_98; local_90 += 0x1) {
                                    iVar5 = ReturnAttackTexValue
                                                      (piVar14,iVar7,iVar12 + -0x1,local_94);
                                    iVar6 = iVar5 / 0xa + (iVar5 >> 0x1f);
                                    if (((iVar6 - (iVar6 >> 0x1f) == iVar9) &&
                                        (*(int *)(iVar8 + local_90 * 0x2c + 0xc) == 0x1)) &&
                                       (*(char *)(iVar10 + local_90) != '\0')) {
                                        Draw3DAttackBlock(iVar13,local_90,
                                                          iVar5 + (iVar6 - (iVar6 >> 0x1f)) * -0xa,
                                                          param_3);
                                    }
                                    local_94 += 0x1;
                                }
                            }
                        }
                        local_64 = local_64 + -0x1;
                        local_68 = local_68 + -0x1;
                    }
                }
            }
        }
        piVar14 = piVar14 + 0x14;
        local_70 += 0x1;
    } while (local_70 < 0x28);
    return 0x27;
}



void Draw3DExplosion(int param_1,int param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    uint *puVar3;
    uint *puVar4;
    uint uVar5;
    undefined4 uVar6;
    uint uVar7;
    int iVar8;
    uint local_38 [0x4];
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    
    puVar1 = glistp;
    param_1 += param_2 * 0x960 + 0x29b28;
    local_38[0] = 0x0;
    local_38[1] = 0x2;
    local_38[2] = 0x3;
    local_38[3] = 0x4;
    local_28 = 0x5;
    local_24 = 0x42;
    local_20 = 0x43;
    local_1c = 0x44;
    uVar6 = 0x0;
    if (param_2 == 0x0) {
        uVar6 = explosionA;
    }
    if (param_2 == 0x1) {
        uVar6 = explosionB;
    }
    puVar2 = glistp + 0x2;
    *glistp = 0xfd500000;
    glistp = puVar2;
    puVar1[0x1] = uVar6;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5500000;
    glistp = puVar2;
    puVar1[0x1] = 0x7000000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe6000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf3000000;
    glistp = puVar2;
    puVar1[0x1] = 0x71ff100;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5481000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar3 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar3;
    puVar1[0x1] = 0xfc03c;
    Set3DExplodeTile();
    iVar8 = 0x32;
    do {
        puVar3 = glistp;
        if (((-0x1 < *(int *)(param_1 + 0x4)) && (*(short *)(param_1 + 0x1a) != 0x0)) &&
           (*(ushort *)(param_1 + 0x1a) < 0x9)) {
            if (*(short *)(param_1 + 0x1e) == 0x1) {
                uVar5 = 0x0;
            }
            else {
                uVar5 = (uint)*(byte *)(param_1 + 0x2d);
            }
            if (*(short *)(param_1 + 0x26) == 0x1) {
                uVar7 = 0x0;
            }
            else {
                uVar7 = (uint)*(byte *)(param_1 + 0x2d);
            }
            puVar4 = glistp + 0x2;
            *glistp = local_38[*(byte *)(param_1 + 0x2e)] & 0x1ff | 0xf5481000;
            glistp = puVar4;
            puVar3[0x1] = 0x0;
            puVar3 = glistp;
            if (*(char *)(param_1 + 0x2e) == '\0') {
                puVar4 = glistp + 0x2;
                *glistp = 0xf2000000;
                glistp = puVar4;
                puVar3[0x1] = 0x3c03c;
            }
            else {
                puVar4 = glistp + 0x2;
                *glistp = 0xf2000000;
                glistp = puVar4;
                puVar3[0x1] = 0x1c01c;
            }
            puVar3 = glistp;
            puVar4 = glistp + 0x2;
            *glistp = ((int)*(short *)(param_1 + 0x18) + (uint)*(byte *)(param_1 + 0x2d)) * 0x4000 &
                      0xffc000 | 0xe4000000 |
                      ((int)*(short *)(param_1 + 0x20) + (uint)*(byte *)(param_1 + 0x2d)) * 0x4 &
                      0xffc;
            glistp = puVar4;
            puVar3[0x1] = ((int)*(short *)(param_1 + 0x20) & 0x3ffU) << 0x2 |
                          (*(byte *)(param_1 + 0x2e) & 0x7) << 0x18 |
                          ((int)*(short *)(param_1 + 0x18) & 0x3ffU) << 0xe;
            puVar3 = glistp;
            puVar4 = glistp + 0x2;
            *glistp = 0xe1000000;
            glistp = puVar4;
            puVar3[0x1] = uVar5 << 0x15 | uVar7 << 0x5;
            puVar3 = glistp;
            puVar4 = glistp + 0x2;
            *glistp = 0xf1000000;
            glistp = puVar4;
            puVar3[0x1] = (uint)*(ushort *)(param_1 + 0x1e) << 0x1a |
                          (*(ushort *)(param_1 + 0x26) & 0x3f) << 0xa;
        }
        param_1 += 0x30;
        iVar8 += -0x1;
    } while (iVar8 != 0x0);
    return;
}



void Draw3DClearLine(undefined4 param_1,int param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    int iVar4;
    
    puVar1 = glistp;
    if ((gMain < 0x388) && (iVar4 = *(int *)(gTheGame + param_2 * 0x110 + 0x15f28), iVar4 < 0x1)) {
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar2;
        puVar1[0x1] = 0x8000;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfd100000;
        glistp = puVar2;
        puVar1[0x1] = numberTable;
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
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfd500000;
        glistp = puVar2;
        puVar1[0x1] = &clear;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf5500000;
        glistp = puVar2;
        puVar1[0x1] = 0x7000000;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe6000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf3000000;
        glistp = puVar2;
        puVar1[0x1] = 0x73ff100;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf5481000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf2000000;
        glistp = puVar2;
        puVar1[0x1] = 0xfc07c;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf5481000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf2000000;
        glistp = puVar2;
        puVar1[0x1] = 0x3c03c;
        puVar1 = glistp;
        iVar3 = gCounter +
                (((int)gCounter >> 0x3) + (uint)((int)gCounter < 0x0 && (gCounter & 0x7) != 0x0)) *
                -0x8;
        puVar2 = glistp + 0x2;
        *glistp = 0x1008010;
        glistp = puVar2;
        puVar1[0x1] = gAllVertex + ((iVar3 + 0x1) * 0x8 + iVar4 * -0x90) * 0x10;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xd7000002;
        glistp = puVar2;
        puVar1[0x1] = 0x40004000;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0x6000204;
        glistp = puVar2;
        puVar1[0x1] = 0x406;
    }
    return;
}



void Draw3DClearSign(int param_1,int param_2)

{
    uint *puVar1;
    uint *puVar2;
    uint uVar3;
    int iVar4;
    uint uVar5;
    
    puVar1 = glistp;
    uVar3 = 0x0;
    if ((gMain < 0x388) && (*(int *)(gTheGame + param_2 * 0x110 + 0x15f28) < 0x1)) {
        puVar2 = glistp + 0x2;
        *glistp = 0xfd500000;
        glistp = puVar2;
        puVar1[0x1] = (uint)&clear;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf5500000;
        glistp = puVar2;
        puVar1[0x1] = 0x7000000;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe6000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf3000000;
        glistp = puVar2;
        puVar1[0x1] = 0x73ff100;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf5481000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf2000000;
        glistp = puVar2;
        puVar1[0x1] = 0xfc07c;
        puVar1 = glistp;
        if (param_2 == 0x0) {
            uVar3 = 0x2;
        }
        else if (param_2 == 0x1) {
            uVar3 = 0x82;
        }
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = uVar3 | 0xf5481000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        iVar4 = param_1 + 0x20000 + param_2 * 0xc80;
        puVar2 = glistp + 0x2;
        *glistp = 0xf2000000;
        glistp = puVar2;
        puVar1[0x1] = 0xbc03c;
        puVar1 = glistp;
        uVar3 = (uint)*(short *)(iVar4 + 0x5918);
        uVar5 = (uint)*(short *)(iVar4 + 0x5920);
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfc119623;
        glistp = puVar2;
        puVar1[0x1] = 0xff2fffff;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar2;
        puVar1[0x1] = 0x504240;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xfa000000;
        glistp = puVar2;
        puVar1[0x1] = 0xffffff64;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = (uVar3 + 0x30) * 0x4000 & 0xffc000 | 0xe4000000 | (uVar5 + 0x10) * 0x4 & 0xffc;
        glistp = puVar2;
        puVar1[0x1] = (uVar3 & 0x3ff) << 0xe | (uVar5 & 0x3ff) << 0x2;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe1000000;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xf1000000;
        glistp = puVar2;
        puVar1[0x1] = 0x4000400;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
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
    }
    return;
}



void Draw3DGameOverStat(int param_1)

{
    short sVar1;
    short sVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    uint *puVar5;
    uint *puVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int *piVar11;
    undefined *puVar12;
    uint local_fc [0x4];
    undefined4 local_ec;
    undefined4 local_e8;
    undefined4 local_e4;
    undefined4 local_e0;
    undefined1 *local_d8;
    undefined1 *local_d4;
    undefined1 *local_d0;
    undefined4 local_cc;
    undefined1 *local_c8;
    undefined4 local_c4;
    undefined1 *local_c0;
    undefined4 local_bc;
    undefined1 *local_b8;
    undefined4 local_b4;
    undefined1 *local_b0;
    undefined4 local_ac;
    undefined1 *local_a8;
    undefined1 *local_a4;
    undefined1 *local_a0;
    undefined1 *local_9c;
    undefined1 *local_98;
    undefined1 *local_94;
    undefined1 *local_90;
    undefined1 *local_8c;
    undefined1 *local_88;
    undefined1 *local_84;
    undefined1 *local_80;
    undefined1 *local_7c;
    undefined1 *local_78;
    undefined *local_74;
    uint local_70;
    uint local_6c;
    uint local_68;
    undefined4 local_64;
    uint local_60;
    uint local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    
    puVar3 = glistp;
    puVar12 = NULL;
    iVar10 = 0x37;
    iVar9 = 0x0;
    piVar11 = (int *)(param_1 + 0x28ae8);
    local_fc[0] = 0x0;
    local_fc[1] = 0x2;
    local_fc[2] = 0x4;
    local_fc[3] = 0x6;
    local_ec = 0x80;
    local_e8 = 0x82;
    iVar8 = 0x0;
    local_e4 = 0x84;
    local_e0 = 0x86;
    puVar4 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar4;
    puVar3[0x1] = 0x0;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar4;
    puVar3[0x1] = 0x8000;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xfd100000;
    glistp = puVar4;
    puVar3[0x1] = colorTable;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe8000000;
    glistp = puVar4;
    puVar3[0x1] = 0x0;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xf5000100;
    glistp = puVar4;
    puVar3[0x1] = 0x7000000;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe6000000;
    glistp = puVar4;
    puVar3[0x1] = 0x0;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xf0000000;
    glistp = puVar4;
    puVar3[0x1] = 0x73fc000;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar4;
    puVar3[0x1] = 0x0;
    puVar3 = glistp;
    puVar5 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar5;
    puVar3[0x1] = 0x0;
    local_cc = 0x180000;
    local_c4 = 0x190000;
    local_bc = 0x190000;
    local_b4 = 0x190000;
    local_ac = 0x190000;
    local_64 = 0x100000;
    local_58 = 0x80000;
    local_54 = 0x4000000;
    local_50 = 0x40000;
    local_a4 = chain01;
    local_a0 = chain02;
    local_9c = chain03;
    local_98 = chain04;
    local_94 = chain05;
    local_90 = chain06;
    local_8c = chain07;
    local_88 = chain08;
    local_84 = chain09;
    local_80 = chain010;
    local_7c = chain011;
    local_78 = chain012;
    local_74 = &chain013;
    local_d8 = combo01;
    local_d4 = combo02;
    local_d0 = combo03;
    local_c8 = combo04;
    local_c0 = combo05;
    local_b8 = combo06;
    local_b0 = combo07;
    local_a8 = combo08;
    local_70 = 0x73ff100;
    local_6c = 0xf5481000;
    local_68 = 0xfc07c;
    local_60 = 0xf5481080;
    local_5c = 0x7c03c;
    do {
        if (*piVar11 != -0x1) break;
        iVar7 = piVar11[0x1];
        if (iVar7 == 0xc) {
            iVar8 = piVar11[0x2];
            puVar12 = local_d8;
            if ((((0xb < iVar8) && (puVar12 = local_d4, 0x13 < iVar8)) &&
                (puVar12 = local_d0, 0x1b < iVar8)) &&
               (((puVar12 = local_c8, 0x23 < iVar8 && (puVar12 = local_c0, 0x2b < iVar8)) &&
                ((puVar12 = local_b8, 0x33 < iVar8 &&
                 ((puVar12 = local_b0, 0x3b < iVar8 && (puVar12 = combo09, iVar8 < 0x44)))))))) {
                puVar12 = local_a8;
            }
            iVar8 = Return3DComboTile(piVar11[0x2]);
        }
        else if (iVar7 < 0xc) {
            if (iVar7 == 0xa) {
                iVar8 = piVar11[0x2];
                puVar12 = local_a4;
                if ((((0x8 < iVar8) && (puVar12 = local_a0, 0x10 < iVar8)) &&
                    (puVar12 = local_9c, 0x18 < iVar8)) &&
                   ((((puVar12 = local_98, 0x20 < iVar8 && (puVar12 = local_94, 0x28 < iVar8)) &&
                     (((puVar12 = local_90, 0x30 < iVar8 &&
                       ((puVar12 = local_8c, 0x38 < iVar8 && (puVar12 = local_88, 0x40 < iVar8))))
                      && (puVar12 = local_84, 0x48 < iVar8)))) &&
                    (((puVar12 = local_80, 0x50 < iVar8 && (puVar12 = local_7c, 0x58 < iVar8)) &&
                     (puVar12 = local_74, iVar8 < 0x61)))))) {
                    puVar12 = local_78;
                }
                iVar8 = Return3DChainTile(piVar11[0x2]);
            }
        }
        else if (iVar7 < 0xe) {
            puVar12 = combo09;
        }
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xfd500000;
        glistp = puVar6;
        puVar5[0x1] = (uint)puVar12;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xf5500000;
        glistp = puVar6;
        puVar5[0x1] = 0x7000000;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe6000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xf3000000;
        glistp = puVar6;
        puVar5[0x1] = local_70;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = local_6c;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xf2000000;
        glistp = puVar6;
        puVar5[0x1] = local_68;
        puVar5 = glistp;
        if (iVar8 == 0x7) {
            puVar6 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar6;
            puVar5[0x1] = 0x0;
        }
        puVar5 = glistp;
        if (piVar11[0x1] == 0xd) {
            puVar6 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar6;
            puVar5[0x1] = 0x0;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = local_60;
            glistp = puVar6;
            puVar5[0x1] = 0x0;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar6;
            puVar5[0x1] = local_5c;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = (iVar10 + 0x12) * 0x4 & 0xffcU | 0xe42b8000;
            glistp = puVar6;
            puVar5[0x1] = (iVar10 + 0x2) * 0x4 & 0xffcU | 0x238000;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xe1000000;
            glistp = puVar6;
            puVar5[0x1] = 0x0;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xf1000000;
            glistp = puVar6;
            puVar5[0x1] = 0x4000400;
        }
        else {
            puVar6 = glistp + 0x2;
            *glistp = local_fc[iVar8] & 0x1ff | 0xf5481000;
            glistp = puVar6;
            puVar5[0x1] = 0x0;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar6;
            puVar5[0x1] = 0x3c03c;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = (iVar10 + 0x12) * 0x4 & 0xffcU | 0xe4278000;
            glistp = puVar6;
            puVar5[0x1] = (iVar10 + 0x2) * 0x4 & 0xffcU | 0x238000;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xe1000000;
            glistp = puVar6;
            puVar5[0x1] = 0x0;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xf1000000;
            glistp = puVar6;
            puVar5[0x1] = 0x4000400;
        }
        puVar5 = glistp;
        iVar9 += 0x1;
        iVar10 += 0x19;
        puVar6 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar6;
        piVar11 = piVar11 + 0x1a;
        puVar5[0x1] = 0x0;
    } while (iVar9 < 0xa);
    iVar8 = DoFlashDrawAlways();
    puVar5 = glistp;
    if (iVar8 != 0x0) {
        puVar6 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        iVar9 = 0x2;
        puVar6 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar6;
        puVar5[0x1] = 0x8000;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xfd100000;
        glistp = puVar6;
        puVar5[0x1] = (uint)numberTable;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe8000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        iVar8 = 0x1;
        puVar6 = glistp + 0x2;
        *glistp = 0xf5000100;
        glistp = puVar6;
        puVar5[0x1] = 0x7000000;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe6000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xf0000000;
        glistp = puVar6;
        puVar5[0x1] = 0x73fc000;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        do {
            puVar5 = glistp;
            iVar10 = (0xa0 - iVar8) * 0x18;
            sVar1 = *(short *)(gTheGame + iVar10 + 0x1ba60);
            sVar2 = *(short *)(gTheGame + iVar10 + 0x1ba68);
            puVar6 = glistp + 0x2;
            *glistp = 0xfd500000;
            glistp = puVar6;
            puVar5[0x1] = (uint)arrow;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xf5500000;
            glistp = puVar6;
            puVar5[0x1] = 0x7000000;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xe6000000;
            glistp = puVar6;
            puVar5[0x1] = 0x0;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xf3000000;
            glistp = puVar6;
            puVar5[0x1] = 0x70ff100;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar6;
            puVar5[0x1] = 0x0;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xf5481000;
            glistp = puVar6;
            puVar5[0x1] = 0x0;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar6;
            puVar5[0x1] = 0xfc01c;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar6;
            puVar5[0x1] = 0x0;
            puVar5 = glistp;
            if (iVar8 == 0x1) {
                puVar6 = glistp + 0x2;
                *glistp = 0xf5481003;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf2000000;
                glistp = puVar6;
                puVar5[0x1] = 0x1c01c;
            }
            else {
                puVar6 = glistp + 0x2;
                *glistp = 0xf5481002;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf2000000;
                glistp = puVar6;
                puVar5[0x1] = 0x1c01c;
            }
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = (((int)sVar1 >> 0x2) + 0x8U) * 0x4000 & 0xffc000 | 0xe4000000 |
                      (((int)sVar2 >> 0x2) + 0x8U) * 0x4 & 0xffc;
            glistp = puVar6;
            puVar5[0x1] = ((int)sVar1 >> 0x2 & 0x3ffU) << 0xe | ((int)sVar2 >> 0x2 & 0x3ffU) << 0x2;
            puVar5 = glistp;
            iVar8 += 0x1;
            puVar6 = glistp + 0x2;
            *glistp = 0xe1000000;
            glistp = puVar6;
            puVar5[0x1] = 0x0;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xf1000000;
            glistp = puVar6;
            puVar5[0x1] = 0x4000400;
            iVar9 += -0x1;
        } while (iVar9 != 0x0);
    }
    return;
}



void Draw3DSmoke(int param_1,int param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    uint *puVar3;
    uint *puVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar2;
    iVar7 = 0x0;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfd900000;
    glistp = puVar2;
    puVar1[0x1] = smokesmoke;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5900000;
    glistp = puVar2;
    puVar1[0x1] = 0x7000000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe6000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf3000000;
    glistp = puVar2;
    puVar1[0x1] = 0x71ff100;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5881000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar2;
    puVar1[0x1] = 0xfc03c;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    iVar5 = param_1 + param_2 * 0x2520;
    param_1 += param_2 * 0x960;
    iVar6 = 0x0;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar2;
    puVar1[0x1] = 0x504240;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfc11fe23;
    glistp = puVar2;
    puVar1[0x1] = 0xfffff3f9;
    puVar1 = glistp;
    puVar3 = glistp + 0x2;
    *glistp = 0xfa000000;
    glistp = puVar3;
    puVar1[0x1] = 0xffffffff;
    do {
        puVar3 = glistp;
        if ((((0x1 < iVar6) && (iVar6 < 0x8)) && (*(int *)(iVar5 + 0x1e67c) != 0x0)) &&
           (-0x14 < *(int *)(param_1 + 0x29b2c))) {
            if (true) {
                switch(*(undefined2 *)(param_1 + 0x29b52)) {
                case 0x0:
                    iVar7 = 0x0;
                    break;
                case 0x2:
                    iVar7 = 0x1;
                    break;
                case 0x4:
                    iVar7 = 0x2;
                    break;
                case 0x6:
                    iVar7 = 0x3;
                }
            }
            puVar4 = glistp + 0x2;
            *glistp = (((int)*(short *)(param_1 + 0x29b40) >> 0x2) + 0x18) * 0x4000 & 0xffc000U |
                      0xe4000000 |
                      (((int)*(short *)(param_1 + 0x29b48) >> 0x2) + 0x10) * 0x4 & 0xffcU;
            glistp = puVar4;
            puVar3[0x1] = (int)*(short *)(param_1 + 0x29b48) & 0xfffU |
                          iVar7 << 0x18 | ((int)*(short *)(param_1 + 0x29b40) & 0xfffU) << 0xc;
            puVar3 = glistp;
            puVar4 = glistp + 0x2;
            *glistp = 0xe1000000;
            glistp = puVar4;
            puVar3[0x1] = 0x0;
            puVar3 = glistp;
            puVar4 = glistp + 0x2;
            *glistp = 0xf1000000;
            glistp = puVar4;
            puVar3[0x1] = 0x2ae0400;
        }
        puVar3 = glistp;
        iVar6 += 0x1;
        iVar5 += 0x2c;
        param_1 += 0x30;
    } while (iVar6 < 0x12);
    puVar4 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar4;
    puVar3[0x1] = 0x0;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xfcffffff;
    glistp = puVar4;
    puVar3[0x1] = 0xfffcf279;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar4;
    puVar3[0x1] = 0xf0a7008;
    return;
}



void Draw3DEmptyStar(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    uint *puVar3;
    uint *puVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar2;
    puVar1[0x1] = 0x8000;
    puVar1 = glistp;
    iVar6 = 0x0;
    iVar7 = 0x0;
    puVar2 = glistp + 0x2;
    *glistp = 0xfd100000;
    glistp = puVar2;
    puVar1[0x1] = otherTable;
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
    puVar1 = glistp;
    iVar8 = 0x4;
    puVar2 = glistp + 0x2;
    *glistp = 0xfd500000;
    glistp = puVar2;
    puVar1[0x1] = w_level7;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5500000;
    glistp = puVar2;
    puVar1[0x1] = 0x7000000;
    puVar1 = glistp;
    iVar5 = 0x0;
    puVar2 = glistp + 0x2;
    *glistp = 0xe6000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf3000000;
    glistp = puVar2;
    puVar1[0x1] = 0x73ff100;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5481000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar2;
    puVar1[0x1] = 0xfc07c;
    puVar1 = glistp;
    puVar3 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar3;
    puVar1[0x1] = 0x0;
    do {
        puVar3 = glistp;
        if (iVar5 == 0x2) {
            iVar6 = 0xa3;
            iVar7 = 0xb8;
            puVar4 = glistp + 0x2;
            *glistp = 0xf5481084;
            glistp = puVar4;
            puVar3[0x1] = 0x0;
            puVar3 = glistp;
            puVar4 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar4;
            puVar3[0x1] = 0x3c03c;
        }
        else if (iVar5 < 0x2) {
            if (iVar5 == 0x0) {
                iVar6 = 0x8d;
                iVar7 = 0xb8;
                puVar4 = glistp + 0x2;
                *glistp = 0xf5481082;
                glistp = puVar4;
                puVar3[0x1] = 0x0;
                puVar3 = glistp;
                puVar4 = glistp + 0x2;
                *glistp = 0xf2000000;
                glistp = puVar4;
                puVar3[0x1] = 0x3c03c;
            }
            else if (-0x1 < iVar5) {
                iVar6 = 0x8d;
                iVar7 = 0xcb;
                puVar4 = glistp + 0x2;
                *glistp = 0xf5481082;
                glistp = puVar4;
                puVar3[0x1] = 0x0;
                puVar3 = glistp;
                puVar4 = glistp + 0x2;
                *glistp = 0xf2000000;
                glistp = puVar4;
                puVar3[0x1] = 0x3c03c;
            }
        }
        else if (iVar5 < 0x4) {
            iVar6 = 0xa3;
            iVar7 = 0xcb;
            puVar4 = glistp + 0x2;
            *glistp = 0xf5481084;
            glistp = puVar4;
            puVar3[0x1] = 0x0;
            puVar3 = glistp;
            puVar4 = glistp + 0x2;
            *glistp = 0xf2000000;
            glistp = puVar4;
            puVar3[0x1] = 0x3c03c;
        }
        puVar3 = glistp;
        puVar4 = glistp + 0x2;
        *glistp = (iVar6 + 0x10) * 0x4000 | 0xe4000000U | (iVar7 + 0x17) * 0x4;
        glistp = puVar4;
        puVar3[0x1] = iVar6 << 0xe | (iVar7 + 0x7) * 0x4;
        puVar3 = glistp;
        iVar5 += 0x1;
        puVar4 = glistp + 0x2;
        *glistp = 0xe1000000;
        glistp = puVar4;
        puVar3[0x1] = 0x0;
        puVar3 = glistp;
        puVar4 = glistp + 0x2;
        *glistp = 0xf1000000;
        glistp = puVar4;
        puVar3[0x1] = 0x4000400;
        iVar8 += -0x1;
    } while (iVar8 != 0x0);
    return;
}



void Draw3DGameStar(int param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    uint *puVar3;
    uint *puVar4;
    int iVar5;
    int iVar6;
    
    puVar1 = glistp;
    iVar6 = 0x0;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xff10013f;
    glistp = puVar2;
    iVar5 = 0x0;
    puVar1[0x1] = gTheGame._119512_4_;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar2;
    puVar1[0x1] = 0x8000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfd100000;
    glistp = puVar2;
    puVar1[0x1] = otherTable;
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
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xfd500000;
    glistp = puVar2;
    puVar1[0x1] = w_star;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5500000;
    glistp = puVar2;
    puVar1[0x1] = 0x7000000;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe6000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf3000000;
    glistp = puVar2;
    puVar1[0x1] = 0x73ff100;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf5481000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar2;
    puVar1[0x1] = 0xfc07c;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    if (param_1 < 0x3) {
        puVar2 = glistp + 0x2;
        *glistp = 0xf5481002;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
    }
    else {
        puVar2 = glistp + 0x2;
        *glistp = 0xf5481082;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
    }
    puVar1 = glistp;
    puVar3 = glistp + 0x2;
    *glistp = 0xf2000000;
    glistp = puVar3;
    puVar1[0x1] = 0x3c03c;
    puVar3 = glistp;
    if (param_1 == 0x3) {
        iVar5 = 0xa3;
        iVar6 = 0xbf;
    }
    else if (param_1 < 0x3) {
        if (param_1 == 0x1) {
            iVar5 = 0x8d;
            iVar6 = 0xbf;
        }
        else if (0x0 < param_1) {
            iVar5 = 0x8d;
            iVar6 = 0xd2;
        }
    }
    else if (param_1 < 0x5) {
        iVar5 = 0xa3;
        iVar6 = 0xd2;
    }
    puVar4 = glistp + 0x2;
    *glistp = (iVar5 + 0x10) * 0x4000 | 0xe4000000U | (iVar6 + 0x10) * 0x4;
    glistp = puVar4;
    puVar3[0x1] = iVar5 << 0xe | iVar6 << 0x2;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe1000000;
    glistp = puVar4;
    puVar3[0x1] = 0x0;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xf1000000;
    glistp = puVar4;
    puVar3[0x1] = 0x4000400;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar4;
    puVar3[0x1] = 0x0;
    puVar3 = glistp;
    puVar4 = glistp + 0x2;
    *glistp = 0xff10013f;
    glistp = puVar4;
    puVar3[0x1] = *(uint *)(*fb + 0x31b8c);
    return;
}



void Draw3DSmallStars(int param_1)

{
    bool bVar1;
    short sVar2;
    short sVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    uint *puVar6;
    uint *puVar7;
    int iVar8;
    undefined1 *puVar9;
    undefined1 *puVar10;
    int iVar11;
    int iVar12;
    int local_58;
    undefined1 *local_54;
    undefined1 *local_50;
    
    puVar4 = glistp;
    iVar11 = 0x0;
    bVar1 = gMain == 0x393;
    puVar5 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar5;
    puVar4[0x1] = 0x0;
    puVar4 = glistp;
    puVar5 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar5;
    puVar4[0x1] = 0x0;
    puVar4 = glistp;
    puVar5 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar5;
    puVar4[0x1] = 0x8000;
    puVar4 = glistp;
    puVar5 = glistp + 0x2;
    *glistp = 0xfd100000;
    glistp = puVar5;
    puVar4[0x1] = numberTable;
    puVar4 = glistp;
    puVar5 = glistp + 0x2;
    *glistp = 0xe8000000;
    glistp = puVar5;
    puVar4[0x1] = 0x0;
    puVar4 = glistp;
    puVar5 = glistp + 0x2;
    *glistp = 0xf5000100;
    glistp = puVar5;
    puVar4[0x1] = 0x7000000;
    puVar4 = glistp;
    puVar5 = glistp + 0x2;
    *glistp = 0xe6000000;
    glistp = puVar5;
    puVar4[0x1] = 0x0;
    puVar4 = glistp;
    puVar5 = glistp + 0x2;
    *glistp = 0xf0000000;
    glistp = puVar5;
    puVar4[0x1] = 0x73fc000;
    puVar4 = glistp;
    puVar6 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar6;
    puVar4[0x1] = 0x0;
    puVar6 = glistp;
    if (0x394 < gMain) {
        puVar7 = glistp + 0x2;
        *glistp = 0xed00008b;
        glistp = puVar7;
        puVar6[0x1] = 0x50036f;
    }
    local_54 = gTheGame + (uint)bVar1 * 0x57c0;
    local_58 = 0x0;
    local_50 = local_54;
    do {
        iVar12 = 0x6;
        puVar9 = local_50;
        puVar10 = local_54;
        do {
            puVar6 = glistp;
            if (param_1 == *(int *)(puVar9 + 0x14)) {
                iVar8 = *(int *)(puVar9 + 0x1c);
                if (iVar8 < 0x2) {
                    if (-0x1 < iVar8) {
                        puVar7 = glistp + 0x2;
                        *glistp = 0xfd500000;
                        glistp = puVar7;
                        puVar6[0x1] = (uint)stars1;
                        puVar6 = glistp;
                        puVar7 = glistp + 0x2;
                        *glistp = 0xf5500000;
                        glistp = puVar7;
                        puVar6[0x1] = 0x7000000;
                        puVar6 = glistp;
                        puVar7 = glistp + 0x2;
                        *glistp = 0xe6000000;
                        glistp = puVar7;
                        puVar6[0x1] = 0x0;
                        puVar6 = glistp;
                        puVar7 = glistp + 0x2;
                        *glistp = 0xf3000000;
                        glistp = puVar7;
                        puVar6[0x1] = 0x73ff100;
                        puVar6 = glistp;
                        puVar7 = glistp + 0x2;
                        *glistp = 0xe7000000;
                        glistp = puVar7;
                        puVar6[0x1] = 0x0;
                        puVar6 = glistp;
                        puVar7 = glistp + 0x2;
                        *glistp = 0xf5481000;
                        glistp = puVar7;
                        puVar6[0x1] = 0x0;
                        puVar6 = glistp;
                        puVar7 = glistp + 0x2;
                        *glistp = 0xf2000000;
                        glistp = puVar7;
                        puVar6[0x1] = 0xfc07c;
                    }
                }
                else if (iVar8 < 0x4) {
                    puVar7 = glistp + 0x2;
                    *glistp = 0xfd500000;
                    glistp = puVar7;
                    puVar6[0x1] = (uint)stars2;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xf5500000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x7000000;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xe6000000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x0;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xf3000000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x73ff100;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x0;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xf5481000;
                    glistp = puVar7;
                    puVar6[0x1] = 0x0;
                    puVar6 = glistp;
                    puVar7 = glistp + 0x2;
                    *glistp = 0xf2000000;
                    glistp = puVar7;
                    puVar6[0x1] = 0xfc07c;
                }
                puVar6 = glistp;
                puVar7 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar7;
                puVar6[0x1] = 0x0;
                puVar6 = glistp;
                sVar2 = *(short *)(puVar10 + 0x3f10);
                sVar3 = *(short *)(puVar10 + 0x3f18);
                puVar7 = glistp + 0x2;
                *glistp = *(ushort *)(puVar10 + 0x3f22) & 0x1ff | 0xf5481000;
                glistp = puVar7;
                puVar6[0x1] = 0x0;
                puVar6 = glistp;
                puVar7 = glistp + 0x2;
                *glistp = 0xf2000000;
                glistp = puVar7;
                puVar6[0x1] = 0x3c03c;
                puVar6 = glistp;
                puVar7 = glistp + 0x2;
                *glistp = (((int)sVar2 >> 0x2) + 0x10U) * 0x4000 & 0xffc000 | 0xe4000000 |
                          (((int)sVar3 >> 0x2) + 0x12) * 0x4 & 0xffcU;
                glistp = puVar7;
                puVar6[0x1] = ((int)sVar2 >> 0x2 & 0x3ffU) << 0xe |
                              (((int)sVar3 >> 0x2) + 0x2) * 0x4 & 0xffcU;
                puVar6 = glistp;
                puVar7 = glistp + 0x2;
                *glistp = 0xe1000000;
                glistp = puVar7;
                puVar6[0x1] = 0x0;
                puVar6 = glistp;
                puVar7 = glistp + 0x2;
                *glistp = 0xf1000000;
                glistp = puVar7;
                puVar6[0x1] = 0x4000400;
            }
            puVar6 = glistp;
            iVar11 += 0x1;
            if (0x14 < iVar11) {
                return;
            }
            puVar9 = puVar9 + 0x2c;
            puVar10 = puVar10 + 0x18;
            iVar12 += -0x1;
        } while (iVar12 != 0x0);
        local_58 += 0x1;
        local_50 = local_50 + 0x318;
        local_54 = local_54 + 0x90;
        if (0xb < local_58) {
            if (0x394 < gMain) {
                puVar7 = glistp + 0x2;
                *glistp = 0xed000023;
                glistp = puVar7;
                puVar6[0x1] = 0x5003c3;
            }
            return;
        }
    } while( true );
}



void Draw3DTetris(int param_1)

{
    ushort uVar1;
    ushort uVar2;
    ushort uVar3;
    ushort uVar4;
    uint *puVar5;
    uint *puVar6;
    int iVar7;
    uint uVar8;
    uint uVar9;
    undefined4 uVar10;
    int *piVar11;
    int iVar12;
    int *piVar13;
    int *piVar14;
    undefined1 *puVar15;
    undefined4 *puVar16;
    int iVar17;
    int iVar18;
    int local_274 [0x4];
    undefined4 local_264;
    undefined4 local_260;
    undefined4 local_25c;
    undefined4 local_258;
    int local_254 [0x4];
    undefined4 local_244;
    undefined4 local_240;
    undefined4 local_23c;
    undefined4 local_238;
    int local_234 [0x4];
    undefined4 local_224;
    undefined4 local_220;
    undefined4 local_21c;
    undefined4 local_218;
    int local_214 [0x4];
    undefined4 local_204;
    undefined4 local_200;
    undefined4 local_1fc;
    undefined4 local_1f8;
    int local_1f4 [0x4];
    undefined4 local_1e4;
    undefined4 local_1e0;
    undefined4 local_1dc;
    undefined4 local_1d8;
    int local_1d4 [0x4];
    undefined4 local_1c4;
    undefined4 local_1c0;
    undefined4 local_1bc;
    undefined4 local_1b8;
    int local_1b4 [0xd];
    undefined4 local_180;
    undefined4 local_17c;
    undefined4 local_178;
    undefined4 local_174;
    int local_170 [0x4];
    undefined4 local_160;
    undefined4 local_15c;
    undefined4 local_158;
    undefined4 local_154;
    int local_150 [0x4];
    undefined4 local_140;
    undefined4 local_13c;
    undefined4 local_138;
    undefined4 local_134;
    ushort local_124 [0x2];
    undefined4 local_120 [0x4];
    int local_110;
    int local_10c;
    int *local_108;
    undefined4 local_104;
    undefined4 local_100;
    undefined4 local_fc;
    undefined4 local_f8;
    undefined4 local_f4;
    undefined4 local_f0;
    undefined4 local_ec;
    undefined4 local_e8;
    undefined4 local_e4;
    undefined4 local_e0;
    undefined4 local_dc;
    undefined4 local_d8;
    undefined4 local_d4;
    undefined4 local_d0;
    undefined4 local_cc;
    uint local_c8;
    uint local_c4;
    undefined4 local_c0;
    undefined4 local_bc;
    undefined4 local_b8;
    undefined4 local_b4;
    undefined4 local_b0;
    uint local_ac;
    uint local_a8;
    uint local_a4;
    uint local_a0;
    uint local_9c;
    uint local_98;
    float *local_94;
    float *local_90;
    float *local_8c;
    float *local_88;
    float *local_84;
    uint local_80;
    uint local_7c;
    uint local_78;
    uint local_74;
    uint local_70;
    undefined4 local_6c;
    undefined1 *local_68;
    uint local_64;
    int *local_60;
    int *local_5c;
    uint local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    
    local_10c = -0x1;
    if (gAllVertex == 0x0) {
        return;
    }
    local_108 = (int *)(gTheGame + 0x1d608);
    if (gTheGame._120328_4_ == 0x1) {
        if (gTheGame._19204_4_ == 0x3) {
            local_110 = 0x5;
        }
        else if (gTheGame._19204_4_ < 0x3) {
            if (gTheGame._19204_4_ == 0x1) {
                local_110 = 0x3;
            }
            else if (gTheGame._19204_4_ < 0x1) {
                if (gTheGame._19204_4_ < 0x0) goto LAB_0005ec4c;
                local_110 = 0x0;
            }
            else {
                local_110 = 0x4;
            }
        }
        else if (gTheGame._19204_4_ == 0x5) {
            local_110 = 0x8;
        }
        else if (gTheGame._19204_4_ < 0x5) {
            local_110 = 0x6;
        }
        else {
LAB_0005ec4c:
            local_110 = 0xd;
        }
        if (gSelection == 0xaa) {
            if (gTheGame._19200_4_ == 0x5) {
                local_110 = 0xd;
            }
            else if (gTheGame._19204_4_ == 0x4) {
                local_110 = 0x5;
            }
            else if (gTheGame._19204_4_ < 0x4) {
                if (gTheGame._19204_4_ == 0x2) {
                    local_110 = 0x3;
                }
                else if (gTheGame._19204_4_ < 0x2) {
                    if (0x0 < gTheGame._19204_4_) {
                        local_110 = 0x0;
                    }
                }
                else {
                    local_110 = 0x4;
                }
            }
            else if (gTheGame._19204_4_ == 0x6) {
                local_110 = 0x8;
            }
            else if (gTheGame._19204_4_ < 0x6) {
                local_110 = 0x6;
            }
        }
        if (gSelection == 0x82) {
            local_110 = gTheGame._89904_4_;
        }
    }
    else {
        local_110 = gTheGame._19204_4_;
    }
    Draw3DBackground();
    puVar5 = glistp;
    if (*local_108 == 0x1) {
        puVar6 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        local_58 = 0xe3001001;
        puVar6 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe3000a01;
        glistp = puVar6;
        puVar5[0x1] = 0x200000;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        pon_gSPBgRectCopy(&glistp,0x2be110);
        puVar5 = glistp;
        if (true) {
            switch(local_110) {
            case 0x0:
                iVar17 = 0x8;
                local_f4 = 0x10000400;
                local_104 = 0xf5500000;
                local_100 = 0xf3000000;
                local_fc = 0xe1000000;
                local_f8 = 0xf1000000;
                piVar13 = local_150;
                piVar14 = local_1b4 + 0x9;
                piVar11 = local_170;
                do {
                    puVar5 = glistp;
                    local_150[0] = 0x3;
                    local_150[1] = 0x3;
                    local_150[2] = 0x3;
                    local_150[3] = 0x3;
                    local_140 = 0x3;
                    local_13c = 0x8;
                    local_138 = 0x8;
                    local_134 = 0x8;
                    local_170[0] = 0x2;
                    local_170[1] = 0x2;
                    local_170[2] = 0x2;
                    local_170[3] = 0x2;
                    local_160 = 0x2;
                    local_15c = 0xe;
                    local_158 = 0x10;
                    local_154 = 0x13;
                    local_1b4[9] = 0x6;
                    local_1b4[10] = 0x7;
                    local_1b4[11] = 0x8;
                    local_1b4[12] = 0xb;
                    local_180 = 0xc;
                    local_17c = 0x25;
                    local_178 = 0x26;
                    local_174 = 0x27;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = local_58;
                    glistp = puVar6;
                    puVar5[0x1] = 0x8000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xfd100000;
                    glistp = puVar6;
                    puVar5[0x1] = *(uint *)(gTheGame + *piVar13 * 0x18 + 0x18fe4);
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe8000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf5000100;
                    glistp = puVar6;
                    puVar5[0x1] = 0x7000000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe6000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf0000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x73fc000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    iVar18 = *piVar14 * 0x18;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xfd500000;
                    glistp = puVar6;
                    puVar5[0x1] = *(uint *)(gTheGame + *piVar11 * 0x18 + 0x1b2e4);
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf5500000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x7000000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe6000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf3000000;
                    glistp = puVar6;
                    if (((int)((uint)*(ushort *)(gTheGame + *piVar14 * 0x18 + 0x1ba70) * 0x100 + 0x1
                              ) >> 0x1) + -0x1 < 0x7ff) {
                        uVar8 = ((int)((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) * 0x100 + 0x1)
                                >> 0x1) - 0x1;
                    }
                    else {
                        uVar8 = 0x7ff;
                    }
                    uVar9 = (int)((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) << 0x3) >> 0x3;
                    if (uVar9 == 0x0) {
                        uVar9 = 0x1;
                    }
                    puVar5[0x1] = (uVar9 + 0x7ff) / uVar9 & 0xfff |
                                  (uVar8 & 0xfff) << 0xc | 0x7000000;
                    puVar5 = glistp;
                    piVar13 = piVar13 + 0x1;
                    piVar14 = piVar14 + 0x1;
                    piVar11 = piVar11 + 0x1;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = ((int)((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) * 0x8 + 0x7) >>
                               0x3 & 0x1ffU) << 0x9 | 0xf5480000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf2000000;
                    glistp = puVar6;
                    puVar5[0x1] = ((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) * 0x8 + -0x1) *
                                  0x4000 & 0xffc000 | 0x7c;
                    puVar5 = glistp;
                    uVar1 = *(ushort *)(gTheGame + iVar18 + 0x1ba6c);
                    uVar2 = *(ushort *)(gTheGame + iVar18 + 0x1ba70);
                    uVar3 = *(ushort *)(gTheGame + iVar18 + 0x1ba72);
                    uVar4 = *(ushort *)(gTheGame + iVar18 + 0x1ba64);
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = (uVar2 & 0x1ff) << 0x9 | 0xf5480000 | uVar3 & 0x1ff;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf2000000;
                    glistp = puVar6;
                    puVar5[0x1] = (((int)(uint)uVar4 >> 0x5) + -0x1) * 0x4000 & 0xffc000U |
                                  (((int)(uint)uVar1 >> 0x5) + -0x1) * 0x4 & 0xffcU;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = (((int)*(short *)(gTheGame + iVar18 + 0x1ba60) >> 0x2) +
                              ((int)(uint)uVar4 >> 0x5)) * 0x4000 & 0xffc000U | 0xe4000000 |
                              (((int)*(short *)(gTheGame + iVar18 + 0x1ba68) >> 0x2) +
                              ((int)(uint)uVar1 >> 0x5)) * 0x4 & 0xffcU;
                    glistp = puVar6;
                    puVar5[0x1] = ((int)*(short *)(gTheGame + iVar18 + 0x1ba60) & 0xfffU) << 0xc |
                                  (int)*(short *)(gTheGame + iVar18 + 0x1ba68) & 0xfffU;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe1000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf1000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x10000400;
                    iVar17 += -0x1;
                } while (iVar17 != 0x0);
                break;
            case 0x3:
                pon_gSPBgRectCopy(&glistp,0x2ba738);
                pon_gSPBgRectCopy(&glistp,0x2ba878);
                pon_gSPBgRectCopy(&glistp,0x2ba918);
                pon_gSPBgRectCopy(&glistp,0x2ba9b8);
                pon_gSPBgRectCopy(&glistp,0x2baa58);
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe200001c;
                glistp = puVar6;
                puVar5[0x1] = 0x504240;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe3000a01;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                gTheGame._105650_2_ = 0x84;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2baaf8);
                gTheGame._105730_2_ = 0x104;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2bab48);
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = local_58;
                glistp = puVar6;
                puVar5[0x1] = 0x8000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfd100000;
                glistp = puVar6;
                puVar5[0x1] = gTheGame._102468_4_;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe8000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf5000100;
                glistp = puVar6;
                puVar5[0x1] = 0x7000000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe6000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf0000000;
                glistp = puVar6;
                puVar5[0x1] = 0x73fc000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfc119623;
                glistp = puVar6;
                puVar5[0x1] = 0xff2fffff;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe200001c;
                glistp = puVar6;
                puVar5[0x1] = 0x504240;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfa000000;
                glistp = puVar6;
                puVar5[0x1] = 0xffffff46;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba710);
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfcffffff;
                glistp = puVar6;
                puVar5[0x1] = 0xfffcf279;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe200001c;
                glistp = puVar6;
                puVar5[0x1] = 0xf0a7008;
                break;
            case 0x4:
                puVar6 = glistp + 0x2;
                *glistp = 0xe3000a01;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                gTheGame._103370_2_ = 0x404;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba210);
                break;
            case 0x5:
                iVar17 = 0x3;
                local_e0 = 0x10000400;
                local_f0 = 0xf5500000;
                local_ec = 0xf3000000;
                local_e8 = 0xe1000000;
                local_e4 = 0xf1000000;
                piVar14 = local_1b4 + 0x6;
                piVar11 = local_1b4;
                piVar13 = local_1b4 + 0x3;
                do {
                    puVar5 = glistp;
                    local_1b4[6] = 0x5;
                    local_1b4[7] = 0x5;
                    local_1b4[8] = 0x5;
                    local_1b4[3] = 0x2;
                    local_1b4[4] = 0x5;
                    local_1b4[5] = 0x8;
                    local_1b4[0] = 0x2;
                    local_1b4[1] = 0x5;
                    local_1b4[2] = 0x8;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = local_58;
                    glistp = puVar6;
                    puVar5[0x1] = 0x8000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xfd100000;
                    glistp = puVar6;
                    puVar5[0x1] = *(uint *)(gTheGame + *piVar14 * 0x18 + 0x18fe4);
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe8000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf5000100;
                    glistp = puVar6;
                    puVar5[0x1] = 0x7000000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe6000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf0000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x73fc000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    iVar18 = *piVar11 * 0x18;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xfd500000;
                    glistp = puVar6;
                    puVar5[0x1] = *(uint *)(gTheGame + *piVar13 * 0x18 + 0x1b2e4);
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf5500000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x7000000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe6000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf3000000;
                    glistp = puVar6;
                    if (((int)((uint)*(ushort *)(gTheGame + *piVar11 * 0x18 + 0x1ba70) * 0x100 + 0x1
                              ) >> 0x1) + -0x1 < 0x7ff) {
                        uVar8 = ((int)((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) * 0x100 + 0x1)
                                >> 0x1) - 0x1;
                    }
                    else {
                        uVar8 = 0x7ff;
                    }
                    uVar9 = (int)((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) << 0x3) >> 0x3;
                    if (uVar9 == 0x0) {
                        uVar9 = 0x1;
                    }
                    puVar5[0x1] = (uVar9 + 0x7ff) / uVar9 & 0xfff |
                                  (uVar8 & 0xfff) << 0xc | 0x7000000;
                    puVar5 = glistp;
                    piVar14 = piVar14 + 0x1;
                    piVar11 = piVar11 + 0x1;
                    piVar13 = piVar13 + 0x1;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = ((int)((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) * 0x8 + 0x7) >>
                               0x3 & 0x1ffU) << 0x9 | 0xf5480000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf2000000;
                    glistp = puVar6;
                    puVar5[0x1] = ((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) * 0x8 + -0x1) *
                                  0x4000 & 0xffc000 | 0x7c;
                    puVar5 = glistp;
                    uVar1 = *(ushort *)(gTheGame + iVar18 + 0x1ba6c);
                    uVar2 = *(ushort *)(gTheGame + iVar18 + 0x1ba70);
                    uVar3 = *(ushort *)(gTheGame + iVar18 + 0x1ba72);
                    uVar4 = *(ushort *)(gTheGame + iVar18 + 0x1ba64);
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = (uVar2 & 0x1ff) << 0x9 | 0xf5480000 | uVar3 & 0x1ff;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf2000000;
                    glistp = puVar6;
                    puVar5[0x1] = (((int)(uint)uVar4 >> 0x5) + -0x1) * 0x4000 & 0xffc000U |
                                  (((int)(uint)uVar1 >> 0x5) + -0x1) * 0x4 & 0xffcU;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = (((int)*(short *)(gTheGame + iVar18 + 0x1ba60) >> 0x2) +
                              ((int)(uint)uVar4 >> 0x5)) * 0x4000 & 0xffc000U | 0xe4000000 |
                              (((int)*(short *)(gTheGame + iVar18 + 0x1ba68) >> 0x2) +
                              ((int)(uint)uVar1 >> 0x5)) * 0x4 & 0xffcU;
                    glistp = puVar6;
                    puVar5[0x1] = ((int)*(short *)(gTheGame + iVar18 + 0x1ba60) & 0xfffU) << 0xc |
                                  (int)*(short *)(gTheGame + iVar18 + 0x1ba68) & 0xfffU;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe1000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf1000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x10000400;
                    puVar5 = glistp;
                    iVar17 += -0x1;
                } while (iVar17 != 0x0);
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe3000a01;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe3001001;
                glistp = puVar6;
                puVar5[0x1] = 0x8000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfd100000;
                glistp = puVar6;
                puVar5[0x1] = gTheGame._102372_4_;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe8000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf5000100;
                glistp = puVar6;
                puVar5[0x1] = 0x7000000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe6000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf0000000;
                glistp = puVar6;
                puVar5[0x1] = 0x73fc000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                gTheGame._103330_2_ = 0x504;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba1e8);
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe3001001;
                glistp = puVar6;
                puVar5[0x1] = 0x8000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfd100000;
                glistp = puVar6;
                puVar5[0x1] = gTheGame._102396_4_;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe8000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf5000100;
                glistp = puVar6;
                puVar5[0x1] = 0x7000000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe6000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf0000000;
                glistp = puVar6;
                puVar5[0x1] = 0x73fc000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                gTheGame._103410_2_ = 0x504;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba238);
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfd100000;
                glistp = puVar6;
                puVar5[0x1] = gTheGame._102420_4_;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe8000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf5000100;
                glistp = puVar6;
                puVar5[0x1] = 0x7000000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe6000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf0000000;
                glistp = puVar6;
                puVar5[0x1] = 0x73fc000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                gTheGame._103730_2_ = 0x184;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba378);
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe3001001;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                gTheGame._103490_2_ = 0x344;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba288);
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe3001001;
                glistp = puVar6;
                puVar5[0x1] = 0x8000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfd100000;
                glistp = puVar6;
                puVar5[0x1] = gTheGame._102516_4_;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe8000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf5000100;
                glistp = puVar6;
                puVar5[0x1] = 0x7000000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe6000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf0000000;
                glistp = puVar6;
                puVar5[0x1] = 0x73fc000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfc119623;
                glistp = puVar6;
                puVar5[0x1] = 0xff2fffff;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe200001c;
                glistp = puVar6;
                puVar5[0x1] = 0x504240;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfa000000;
                glistp = puVar6;
                puVar5[0x1] = 0xffffff64;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                gTheGame._103970_2_ = 0x204;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba468);
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfcffffff;
                glistp = puVar6;
                puVar5[0x1] = 0xfffcf279;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe200001c;
                glistp = puVar6;
                puVar5[0x1] = 0xf0a7008;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe3001001;
                glistp = puVar6;
                puVar5[0x1] = 0x8000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfd100000;
                glistp = puVar6;
                puVar5[0x1] = gTheGame._102444_4_;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe8000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf5000100;
                glistp = puVar6;
                puVar5[0x1] = 0x7000000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe6000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf0000000;
                glistp = puVar6;
                puVar5[0x1] = 0x73fc000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                gTheGame._103850_2_ = 0x184;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba3f0);
                break;
            case 0x6:
                DrawGreen1Light2D(param_1);
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = local_58;
                glistp = puVar6;
                puVar5[0x1] = 0x8000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfd100000;
                glistp = puVar6;
                puVar5[0x1] = gTheGame._102492_4_;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe8000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf5000100;
                glistp = puVar6;
                puVar5[0x1] = 0x7000000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe6000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf0000000;
                glistp = puVar6;
                puVar5[0x1] = 0x73fc000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                gTheGame._104890_2_ = 0x84;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba800);
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfd100000;
                glistp = puVar6;
                puVar5[0x1] = gTheGame._102588_4_;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe8000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf5000100;
                glistp = puVar6;
                puVar5[0x1] = 0x7000000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe6000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf0000000;
                glistp = puVar6;
                puVar5[0x1] = 0x73fc000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                gTheGame._105490_2_ = 0x84;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2baa58);
                break;
            case 0x8:
                iVar17 = 0x8;
                local_cc = 0x10000400;
                local_dc = 0xf5500000;
                local_d8 = 0xf3000000;
                local_d4 = 0xe1000000;
                local_d0 = 0xf1000000;
                piVar14 = local_1d4;
                piVar11 = local_214;
                piVar13 = local_1f4;
                do {
                    puVar5 = glistp;
                    local_1d4[0] = 0x4;
                    local_1d4[1] = 0x5;
                    local_1d4[2] = 0x5;
                    local_1d4[3] = 0x5;
                    local_1c4 = 0x5;
                    local_1c0 = 0x5;
                    local_1bc = 0x5;
                    local_1b8 = 0x5;
                    local_1f4[0] = 0x1;
                    local_1f4[1] = 0xa;
                    local_1f4[2] = 0xa;
                    local_1f4[3] = 0xa;
                    local_1e4 = 0xa;
                    local_1e0 = 0xa;
                    local_1dc = 0xa;
                    local_1d8 = 0xa;
                    local_214[0] = 0x4;
                    local_214[1] = 0x5;
                    local_214[2] = 0x6;
                    local_214[3] = 0x7;
                    local_204 = 0x8;
                    local_200 = 0x9;
                    local_1fc = 0xa;
                    local_1f8 = 0xb;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = local_58;
                    glistp = puVar6;
                    puVar5[0x1] = 0x8000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xfd100000;
                    glistp = puVar6;
                    puVar5[0x1] = *(uint *)(gTheGame + *piVar14 * 0x18 + 0x18fe4);
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe8000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf5000100;
                    glistp = puVar6;
                    puVar5[0x1] = 0x7000000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe6000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf0000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x73fc000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    iVar18 = *piVar11 * 0x18;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xfd500000;
                    glistp = puVar6;
                    puVar5[0x1] = *(uint *)(gTheGame + *piVar13 * 0x18 + 0x1b2e4);
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf5500000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x7000000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe6000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf3000000;
                    glistp = puVar6;
                    if (((int)((uint)*(ushort *)(gTheGame + *piVar11 * 0x18 + 0x1ba70) * 0x100 + 0x1
                              ) >> 0x1) + -0x1 < 0x7ff) {
                        uVar8 = ((int)((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) * 0x100 + 0x1)
                                >> 0x1) - 0x1;
                    }
                    else {
                        uVar8 = 0x7ff;
                    }
                    uVar9 = (int)((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) << 0x3) >> 0x3;
                    if (uVar9 == 0x0) {
                        uVar9 = 0x1;
                    }
                    puVar5[0x1] = (uVar9 + 0x7ff) / uVar9 & 0xfff |
                                  (uVar8 & 0xfff) << 0xc | 0x7000000;
                    puVar5 = glistp;
                    piVar14 = piVar14 + 0x1;
                    piVar11 = piVar11 + 0x1;
                    piVar13 = piVar13 + 0x1;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = ((int)((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) * 0x8 + 0x7) >>
                               0x3 & 0x1ffU) << 0x9 | 0xf5480000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf2000000;
                    glistp = puVar6;
                    puVar5[0x1] = ((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) * 0x8 + -0x1) *
                                  0x4000 & 0xffc000 | 0x7c;
                    puVar5 = glistp;
                    uVar1 = *(ushort *)(gTheGame + iVar18 + 0x1ba6c);
                    uVar2 = *(ushort *)(gTheGame + iVar18 + 0x1ba70);
                    uVar3 = *(ushort *)(gTheGame + iVar18 + 0x1ba72);
                    uVar4 = *(ushort *)(gTheGame + iVar18 + 0x1ba64);
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = (uVar2 & 0x1ff) << 0x9 | 0xf5480000 | uVar3 & 0x1ff;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    iVar7 = ((int)(uint)uVar4 >> 0x5) + -0x1;
                    iVar12 = ((int)(uint)uVar1 >> 0x5) + -0x1;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf2000000;
                    glistp = puVar6;
                    puVar5[0x1] = iVar7 * 0x4000 & 0xffc000U | iVar12 * 0x4 & 0xffcU;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = (((int)*(short *)(gTheGame + iVar18 + 0x1ba60) >> 0x2) + iVar7) *
                              0x4000 & 0xffc000U | 0xe4000000 |
                              (((int)*(short *)(gTheGame + iVar18 + 0x1ba68) >> 0x2) + iVar12) * 0x4
                              & 0xffcU;
                    glistp = puVar6;
                    puVar5[0x1] = ((int)*(short *)(gTheGame + iVar18 + 0x1ba60) & 0xfffU) << 0xc |
                                  (int)*(short *)(gTheGame + iVar18 + 0x1ba68) & 0xfffU;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe1000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf1000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x10000400;
                    puVar5 = glistp;
                    iVar17 += -0x1;
                } while (iVar17 != 0x0);
                puVar6 = glistp + 0x2;
                *glistp = 0xe3001001;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe3000a01;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                local_c8 = 0x504240;
                local_c4 = 0xfa000000;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe200001c;
                glistp = puVar6;
                puVar5[0x1] = 0x504240;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfc11fe23;
                glistp = puVar6;
                puVar5[0x1] = 0xfffff3f9;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfa000000;
                glistp = puVar6;
                puVar5[0x1] = 0xffe6edff;
                puVar5 = glistp;
                gTheGame._104130_2_ = 0x504;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba508);
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfcffffff;
                glistp = puVar6;
                puVar5[0x1] = 0xfffcf279;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe200001c;
                glistp = puVar6;
                puVar5[0x1] = 0xf0a7008;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe3001001;
                glistp = puVar6;
                puVar5[0x1] = 0x8000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfd100000;
                glistp = puVar6;
                puVar5[0x1] = gTheGame._102540_4_;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe8000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf5000100;
                glistp = puVar6;
                puVar5[0x1] = 0x7000000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe6000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf0000000;
                glistp = puVar6;
                puVar5[0x1] = 0x73fc000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                gTheGame._104090_2_ = 0x304;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba4e0);
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfd100000;
                glistp = puVar6;
                puVar5[0x1] = gTheGame._102516_4_;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe8000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf5000100;
                glistp = puVar6;
                puVar5[0x1] = 0x7000000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe6000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf0000000;
                glistp = puVar6;
                puVar5[0x1] = 0x73fc000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                gTheGame._104010_2_ = 0x204;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba490);
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfd100000;
                glistp = puVar6;
                puVar5[0x1] = gTheGame._102420_4_;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe8000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf5000100;
                glistp = puVar6;
                puVar5[0x1] = 0x7000000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe6000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf0000000;
                glistp = puVar6;
                puVar5[0x1] = 0x73fc000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                gTheGame._103370_2_ = 0x184;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba210);
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe3001001;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe200001c;
                glistp = puVar6;
                puVar5[0x1] = local_c8;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfc30fe61;
                glistp = puVar6;
                puVar5[0x1] = 0x55fef379;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = local_c4;
                glistp = puVar6;
                puVar5[0x1] = 0xb4ffb4ff;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfb000000;
                glistp = puVar6;
                puVar5[0x1] = 0xdcffdcff;
                puVar5 = glistp;
                gTheGame._104050_2_ = 0x304;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba4b8);
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfcffffff;
                glistp = puVar6;
                puVar5[0x1] = 0xfffcf279;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe200001c;
                glistp = puVar6;
                puVar5[0x1] = 0xf0a7008;
                break;
            case 0xd:
                iVar17 = 0x8;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                piVar13 = local_234;
                piVar14 = local_274;
                piVar11 = local_254;
                puVar6 = glistp + 0x2;
                *glistp = local_58;
                glistp = puVar6;
                local_b0 = 0x10000400;
                local_c0 = 0xf5500000;
                local_bc = 0xf3000000;
                local_b8 = 0xe1000000;
                puVar5[0x1] = 0x8000;
                local_b4 = 0xf1000000;
                do {
                    puVar5 = glistp;
                    local_234[0] = 0x0;
                    local_234[1] = 0x0;
                    local_234[2] = 0x0;
                    local_234[3] = 0x0;
                    local_224 = 0x0;
                    local_220 = 0x0;
                    local_21c = 0x0;
                    local_218 = 0x0;
                    local_254[0] = 0x0;
                    local_254[1] = 0x1;
                    local_254[2] = 0x1;
                    local_254[3] = 0x2;
                    local_244 = 0x2;
                    local_240 = 0x3;
                    local_23c = 0x3;
                    local_238 = 0x3;
                    local_274[0] = 0x1;
                    local_274[1] = 0x2;
                    local_274[2] = 0x3;
                    local_274[3] = 0x4;
                    local_264 = 0x5;
                    local_260 = 0x6;
                    local_25c = 0x7;
                    local_258 = 0x8;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = local_58;
                    glistp = puVar6;
                    puVar5[0x1] = 0x8000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xfd100000;
                    glistp = puVar6;
                    puVar5[0x1] = *(uint *)(gTheGame + *piVar13 * 0x18 + 0x18fe4);
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe8000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf5000100;
                    glistp = puVar6;
                    puVar5[0x1] = 0x7000000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe6000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf0000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x73fc000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    iVar18 = *piVar14 * 0x18;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xfd500000;
                    glistp = puVar6;
                    puVar5[0x1] = *(uint *)(gTheGame + *piVar11 * 0x18 + 0x1b2e4);
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf5500000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x7000000;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe6000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf3000000;
                    glistp = puVar6;
                    if (((int)((uint)*(ushort *)(gTheGame + *piVar14 * 0x18 + 0x1ba70) * 0x100 + 0x1
                              ) >> 0x1) + -0x1 < 0x7ff) {
                        uVar8 = ((int)((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) * 0x100 + 0x1)
                                >> 0x1) - 0x1;
                    }
                    else {
                        uVar8 = 0x7ff;
                    }
                    uVar9 = (int)((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) << 0x3) >> 0x3;
                    if (uVar9 == 0x0) {
                        uVar9 = 0x1;
                    }
                    puVar5[0x1] = (uVar9 + 0x7ff) / uVar9 & 0xfff |
                                  (uVar8 & 0xfff) << 0xc | 0x7000000;
                    puVar5 = glistp;
                    piVar13 = piVar13 + 0x1;
                    piVar14 = piVar14 + 0x1;
                    piVar11 = piVar11 + 0x1;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = ((int)((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) * 0x8 + 0x7) >>
                               0x3 & 0x1ffU) << 0x9 | 0xf5480000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf2000000;
                    glistp = puVar6;
                    puVar5[0x1] = ((uint)*(ushort *)(gTheGame + iVar18 + 0x1ba70) * 0x8 + -0x1) *
                                  0x4000 & 0xffc000 | 0x7c;
                    puVar5 = glistp;
                    uVar1 = *(ushort *)(gTheGame + iVar18 + 0x1ba6c);
                    uVar2 = *(ushort *)(gTheGame + iVar18 + 0x1ba70);
                    uVar3 = *(ushort *)(gTheGame + iVar18 + 0x1ba72);
                    uVar4 = *(ushort *)(gTheGame + iVar18 + 0x1ba64);
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe7000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = (uVar2 & 0x1ff) << 0x9 | 0xf5480000 | uVar3 & 0x1ff;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf2000000;
                    glistp = puVar6;
                    puVar5[0x1] = (((int)(uint)uVar4 >> 0x5) + -0x1) * 0x4000 & 0xffc000U |
                                  (((int)(uint)uVar1 >> 0x5) + -0x1) * 0x4 & 0xffcU;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = (((int)*(short *)(gTheGame + iVar18 + 0x1ba60) >> 0x2) +
                              ((int)(uint)uVar4 >> 0x5)) * 0x4000 & 0xffc000U | 0xe4000000 |
                              (((int)*(short *)(gTheGame + iVar18 + 0x1ba68) >> 0x2) +
                              ((int)(uint)uVar1 >> 0x5)) * 0x4 & 0xffcU;
                    glistp = puVar6;
                    puVar5[0x1] = ((int)*(short *)(gTheGame + iVar18 + 0x1ba60) & 0xfffU) << 0xc |
                                  (int)*(short *)(gTheGame + iVar18 + 0x1ba68) & 0xfffU;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xe1000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x0;
                    puVar5 = glistp;
                    puVar6 = glistp + 0x2;
                    *glistp = 0xf1000000;
                    glistp = puVar6;
                    puVar5[0x1] = 0x10000400;
                    puVar5 = glistp;
                    iVar17 += -0x1;
                } while (iVar17 != 0x0);
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe3000a01;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xfd100000;
                glistp = puVar6;
                puVar5[0x1] = gTheGame._102372_4_;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe8000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf5000100;
                glistp = puVar6;
                puVar5[0x1] = 0x7000000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe6000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xf0000000;
                glistp = puVar6;
                puVar5[0x1] = 0x73fc000;
                puVar5 = glistp;
                puVar6 = glistp + 0x2;
                *glistp = 0xe7000000;
                glistp = puVar6;
                puVar5[0x1] = 0x0;
                gTheGame._103330_2_ = 0x104;
                pon_guS2DEmuBgRect1Cyc(&glistp,0x2ba1e8);
            }
        }
    }
    puVar5 = glistp;
    puVar6 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar6;
    puVar5[0x1] = 0x504240;
    puVar5 = glistp;
    puVar6 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar6;
    puVar5[0x1] = 0x0;
    puVar5 = glistp;
    puVar6 = glistp + 0x2;
    *glistp = 0xed000077;
    glistp = puVar6;
    puVar5[0x1] = 0x5003c7;
    puVar5 = glistp;
    if (((gMain == 0x388) || (gMain < 0x384)) && ((*local_108 == 0x2 || (gSelection == 0x82)))) {
        local_10c = 0x0;
    }
    puVar6 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar6;
    puVar5[0x1] = 0x504240;
    if (*local_108 == 0x2) {
        StartAnimation3D(0x0,0xffffffff);
    }
    Draw3DShadeBox();
    puVar15 = gTheGame;
    local_54 = 0xfc120000;
    local_50 = 0xff340000;
    local_4c = 0x550000;
    local_6c = 0x200000;
    local_64 = 0xf0a7008;
    local_60 = &gMain;
    local_5c = &gSelection;
    local_ac = 0xf5000100;
    local_9c = 0x73fc000;
    local_98 = 0xda380007;
    local_94 = (float *)&_1394;
    local_90 = (float *)&_1395;
    local_8c = (float *)&_1396;
    local_88 = (float *)&_1397;
    local_84 = (float *)&_1400;
    local_7c = 0xfc121824;
    local_78 = 0xff33ffff;
    local_74 = 0x552008;
    local_70 = 0xda380003;
    local_68 = gIdent;
    local_a8 = 0x7000000;
    local_a4 = 0xe6000000;
    local_a0 = 0xf0000000;
    local_80 = 0xdb0e0000;
    puVar16 = local_120;
    iVar17 = param_1;
    for (iVar18 = 0x0; puVar5 = glistp, iVar18 < *local_108; iVar18 += 0x1) {
        puVar6 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar6;
        puVar5[0x1] = 0x8000;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xfd100000;
        glistp = puVar6;
        puVar5[0x1] = (uint)colorTable;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe8000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = local_ac;
        glistp = puVar6;
        puVar5[0x1] = local_a8;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = local_a4;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = local_a0;
        glistp = puVar6;
        puVar5[0x1] = local_9c;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = local_98;
        glistp = puVar6;
        puVar5[0x1] = iVar17 + 0x1c200;
        guPerspective((double)*local_94,(double)*local_90,(double)*local_8c,(double)*local_88,
                      0x3ff0000000000000,iVar17 + 0x1c000,local_124);
        guLookAt(0x0,0x0,(double)*local_84,0x0,0x0,0x0,0x0,0x3ff0000000000000,iVar17 + 0x1c100);
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = local_80;
        glistp = puVar6;
        puVar5[0x1] = (uint)local_124[0];
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xda380005;
        glistp = puVar6;
        puVar5[0x1] = iVar17 + 0x1c000;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xda380005;
        glistp = puVar6;
        puVar5[0x1] = iVar17 + 0x1c100;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = local_7c;
        glistp = puVar6;
        puVar5[0x1] = local_78;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe200001c;
        glistp = puVar6;
        puVar5[0x1] = local_74;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = local_70;
        glistp = puVar6;
        puVar5[0x1] = (uint)local_68;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xda380005;
        glistp = puVar6;
        puVar5[0x1] = iVar17 + 0x1c300;
        if (local_10c != 0x0) {
            Draw3DTetrisNewBlock(param_1,puVar15);
            Draw3DAttack(param_1,iVar18,0x0);
            Draw3DBackTetrisWell(param_1,iVar18);
            uVar10 = Draw3DAttack(param_1,iVar18,0xffffffff);
            *puVar16 = uVar10;
            Draw3DFrontTetrisWell(param_1,iVar18);
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar6;
            puVar5[0x1] = 0x0;
            puVar5 = glistp;
            puVar6 = glistp + 0x2;
            *glistp = 0xe200001c;
            glistp = puVar6;
            puVar5[0x1] = local_64;
            if (*local_60 < 0x38e) {
                Draw3DIcon(param_1,iVar18);
            }
            if ((*local_5c == 0xaa) || (*local_5c == 0xb4)) {
                Draw3DClearLine(param_1,iVar18);
            }
        }
        iVar17 += 0x40;
        puVar15 = puVar15 + 0x57c0;
        puVar16 = puVar16 + 0x1;
    }
    puVar6 = glistp + 0x2;
    *glistp = 0xed000023;
    glistp = puVar6;
    puVar5[0x1] = 0x5003c3;
    if (*local_108 == 0x2) {
        Draw2DAnimation(param_1,0x5,0x6);
        Draw3DFrame();
    }
    if (*local_108 == 0x1) {
        AddAnimation3D1b(local_110);
    }
    if (*local_108 != 0x2) goto LAB_000616c4;
    Draw3DEmptyStar();
    if (gMain < 0x389) {
        if ((gMain == 0x384) || ((0x383 < gMain && (0x386 < gMain)))) {
            if (gTheGame._19172_4_ != 0x0) {
                Draw3DGameStar(0x1);
            }
            if (gTheGame._41636_4_ != 0x0) {
                Draw3DGameStar(0x3);
            }
            goto LAB_000616c4;
        }
    }
    else if ((gMain < 0x392) && (0x38e < gMain)) {
        if ((*(int *)(param_1 + 0x2c0a8) == 0x8) || (*(int *)(param_1 + 0x2c1b8) == 0x7)) {
            if (gTheGame._41636_4_ == 0x2) {
                Draw3DGameStar(0x3);
            }
            if (gTheGame._19172_4_ != 0x0) {
                Draw3DGameStar(0x1);
            }
        }
        else {
            if (gTheGame._19172_4_ == 0x2) {
                Draw3DGameStar(0x1);
            }
            if (gTheGame._41636_4_ != 0x0) {
                Draw3DGameStar(0x3);
            }
        }
        if (*(int *)(param_1 + 0x2c0a8) == *(int *)(param_1 + 0x2c1b8)) {
            if (gTheGame._19172_4_ != 0x0) {
                Draw3DGameStar(0x1);
            }
            if (gTheGame._41636_4_ != 0x0) {
                Draw3DGameStar(0x3);
            }
        }
        goto LAB_000616c4;
    }
    if (gTheGame._19172_4_ == 0x2) {
        Draw3DGameStar(0x2);
LAB_00061684:
        Draw3DGameStar(0x1);
    }
    else if ((gTheGame._19172_4_ < 0x2) && (0x0 < gTheGame._19172_4_)) goto LAB_00061684;
    if (gTheGame._41636_4_ == 0x2) {
        Draw3DGameStar(0x4);
    }
    else if ((0x1 < gTheGame._41636_4_) || (gTheGame._41636_4_ < 0x1)) goto LAB_000616c4;
    Draw3DGameStar(0x3);
LAB_000616c4:
    puVar5 = glistp;
    puVar6 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar6;
    puVar5[0x1] = 0x0;
    puVar5 = glistp;
    puVar6 = glistp + 0x2;
    *glistp = 0xe3000c00;
    glistp = puVar6;
    puVar5[0x1] = 0x0;
    puVar5 = glistp;
    puVar6 = glistp + 0x2;
    *glistp = 0xfcffffff;
    glistp = puVar6;
    puVar5[0x1] = 0xfffcf279;
    puVar5 = glistp;
    puVar6 = glistp + 0x2;
    *glistp = 0xe200001c;
    glistp = puVar6;
    puVar5[0x1] = 0xf0a7008;
    Draw3DText(param_1);
    Draw3DMiscStuff(param_1);
    if ((gSelection == 0xaa) || (gSelection == 0xb4)) {
        for (iVar17 = 0x0; iVar17 < *local_108; iVar17 += 0x1) {
            Draw3DClearSign(param_1,iVar17);
        }
    }
    Draw3DAnimation(param_1,0xffffffff,0xffffffff);
    puVar5 = glistp;
    if (local_10c != 0x0) {
        puVar6 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar6;
        puVar16 = local_120;
        puVar5[0x1] = 0x8000;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xfd100000;
        glistp = puVar6;
        puVar5[0x1] = (uint)colorTable;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe8000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xf5000100;
        glistp = puVar6;
        puVar5[0x1] = 0x7000000;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe6000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xf0000000;
        glistp = puVar6;
        puVar5[0x1] = 0x73fc000;
        puVar5 = glistp;
        puVar6 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar6;
        puVar5[0x1] = 0x0;
        for (iVar17 = 0x0; iVar17 < *local_108; iVar17 += 0x1) {
            Draw3DAttackBrick(param_1,iVar17,*puVar16);
            Draw3DExplosion(param_1,iVar17);
            puVar16 = puVar16 + 0x1;
        }
    }
    if ((gMain == 0x387) || (gMain == 0x384)) {
        Draw3DCursor(param_1);
    }
    if (gMain < 0x388) {
        if (gMain == 0x384) {
            DrawCountDown(param_1);
        }
    }
    else {
        DrawPauseOver(param_1);
    }
    puVar5 = glistp;
    puVar6 = glistp + 0x2;
    *glistp = 0xd7000000;
    glistp = puVar6;
    puVar5[0x1] = 0x0;
    return;
}

