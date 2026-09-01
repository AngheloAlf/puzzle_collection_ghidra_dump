

void pon_SetRanking4p(int *param_1)

{
    undefined1 *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar3 = 0x0;
    iVar5 = 0x0;
    iVar2 = 0x0;
    iVar6 = 0x9;
    while (iVar7 = iVar6, iVar3 < gTheGame._120328_4_) {
        iVar6 = iVar3 + 0x9;
        if (gSelection == 0xdc) {
            iVar6 -= gTheGame._137868_4_;
        }
        iVar8 = *param_1;
        puVar1 = gTheGame;
        for (iVar4 = 0x0; iVar2 = iVar7, iVar4 < gTheGame._120328_4_; iVar4 += 0x1) {
            if (*(int *)(puVar1 + 0x16004) == iVar8) {
                if (iVar8 == -0x1) {
                    iVar5 = -0x1;
                    *(undefined4 *)(puVar1 + 0x15f00) = 0xe;
                }
                else {
                    *(int *)(puVar1 + 0x15f00) = iVar6;
                }
                param_1 = param_1 + 0x1;
                iVar3 += 0x1;
            }
            puVar1 = puVar1 + 0x110;
        }
    }
    if ((gSelection != 0xdc) && (iVar5 != 0x0)) {
        iVar7 = iVar2;
    }
    if (iVar7 == 0x9) {
        puVar1 = gTheGame;
        for (iVar2 = 0x0; iVar2 < gTheGame._120328_4_; iVar2 += 0x1) {
            if (*(int *)(puVar1 + 0x15f00) == 0x9) {
                *(undefined4 *)(puVar1 + 0x15f00) = 0xd;
            }
            puVar1 = puVar1 + 0x110;
        }
    }
    return;
}



void UpdateBlockFrame(int param_1)

{
    int iVar1;

    if (*(int *)(param_1 + 0x24) == 0x0) {
        return;
    }
    iVar1 = *(int *)(param_1 + 0x28) + -0x1;
    *(int *)(param_1 + 0x28) = iVar1;
    if (iVar1 == 0x0) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 0x1;
        iVar1 = *(int *)(param_1 + 0x24);
        if (iVar1 < 0x9) {
            if (0x6 < iVar1) {
                *(undefined4 *)(param_1 + 0x24) = 0x0;
                return;
            }
        }
        else if (0xc < iVar1) {
            *(undefined4 *)(param_1 + 0x24) = 0x0;
            return;
        }
        switch(iVar1) {
        case 0x0:
        case 0x7:
        case 0x8:
            goto switchD_000b9458_caseD_0;
        case 0x1:
        case 0x4:
            *(undefined4 *)(param_1 + 0x28) = 0x4;
            return;
        case 0x2:
        case 0x3:
        case 0x5:
        case 0x6:
        case 0x9:
        case 0xa:
        case 0xb:
            *(undefined4 *)(param_1 + 0x28) = 0x2;
            return;
        case 0xc:
            *(undefined4 *)(param_1 + 0x28) = 0x1;
switchD_000b9458_caseD_0:
            return;
        default:
            return;
        }
    }
    return;
}



void UpdateTime(int param_1)

{
    if (((gSelection == 0xbe) || (gSelection == 0xc8)) || (gSelection == 0xe6)) {
        gTheGame._120348_4_ -= param_1;
        if (gTheGame._120348_4_ < 0x0) {
            gTheGame._120344_4_ += -0x1;
            gTheGame._120348_4_ = 0x3b;
        }
        if (gTheGame._120344_4_ < 0x0) {
            gTheGame._120344_4_ = 0x0;
        }
        if (param_1 == 0x1) {
            if ((gTheGame._120344_4_ == 0x1) && (gTheGame._120348_4_ == 0x0)) {
                PlaySE(SFX_INIT_TABLE,0x36);
            }
            else if ((gTheGame._120344_4_ == 0x0) && (true)) {
                switch(gTheGame._120348_4_) {
                case 0x0:
                    PlaySE(SFX_INIT_TABLE,0x3e);
                    break;
                case 0x1:
                    PlaySE(SFX_INIT_TABLE,0x39);
                    break;
                case 0x2:
                    PlaySE(SFX_INIT_TABLE,0x38);
                    break;
                case 0x3:
                    PlaySE(SFX_INIT_TABLE,0x37);
                    break;
                case 0x4:
                    PlaySE(SFX_INIT_TABLE,0x37);
                    break;
                case 0x5:
                    PlaySE(SFX_INIT_TABLE,0x37);
                    break;
                case 0xf:
                    PlaySE(SFX_INIT_TABLE,0x28);
                    TenSecond = 0x1;
                }
            }
        }
    }
    else {
        gTheGame._120348_4_ += param_1;
        if (0x3b < gTheGame._120348_4_) {
            gTheGame._120344_4_ += 0x1;
            gTheGame._120348_4_ = 0x0;
        }
        if (0x3b < gTheGame._120344_4_) {
            gTheGame._120340_4_ += 0x1;
            if (gTheGame._120340_4_ < 0x18) {
                gTheGame._120344_4_ = 0x0;
            }
            else {
                gTheGame._120340_4_ = 0x17;
                gTheGame._120344_4_ = 0x3b;
                gTheGame._120348_4_ = 0x3b;
            }
        }
    }
    return;
}



void UpdateNextLevel(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = *(int *)(param_1 + 0x4ac0);
    iVar2 = *(int *)(param_1 + 0x4abc);
    if (gSelection == 0xbe) {
LAB_000b9758:
        if ((iVar1 == 0x1) && (0x8 < iVar2)) {
            iVar2 += -0x9;
            iVar3 = 0x2;
        }
        else if ((iVar1 < 0x2) || ((0x6 < iVar1 || (iVar2 < 0xc)))) {
            if ((iVar1 < 0x7) || ((0x8 < iVar1 || (iVar2 < 0xe)))) {
                if ((iVar1 < 0x9) || ((0xa < iVar1 || (iVar2 < 0x10)))) {
                    if ((iVar1 < 0xb) || ((0xf < iVar1 || (iVar2 < 0x18)))) {
                        if ((iVar1 == 0x10) && (0x15 < iVar2)) {
                            iVar2 += -0x16;
                            iVar3 = 0x11;
                        }
                        else if ((iVar1 == 0x11) && (0x13 < iVar2)) {
                            iVar2 += -0x14;
                            iVar3 = 0x12;
                        }
                        else if ((iVar1 == 0x12) && (0x11 < iVar2)) {
                            iVar2 += -0x12;
                            iVar3 = 0x13;
                        }
                        else if (((iVar1 < 0x13) || (0x14 < iVar1)) || (iVar2 < 0x10)) {
                            if (((iVar1 < 0x15) || (0x1e < iVar1)) || (iVar2 < 0x24)) {
                                if (((iVar1 < 0x1f) || (0x28 < iVar1)) || (iVar2 < 0x27)) {
                                    iVar3 = iVar1;
                                    if (((0x28 < iVar1) && (iVar1 < 0x63)) && (0x2c < iVar2)) {
                                        iVar3 = iVar1 + 0x1;
                                        iVar2 += -0x2d;
                                    }
                                }
                                else {
                                    iVar2 += -0x27;
                                    iVar3 = iVar1 + 0x1;
                                }
                            }
                            else {
                                iVar2 += -0x24;
                                iVar3 = iVar1 + 0x1;
                            }
                        }
                        else {
                            iVar2 += -0x10;
                            iVar3 = iVar1 + 0x1;
                        }
                    }
                    else {
                        iVar2 += -0x18;
                        iVar3 = iVar1 + 0x1;
                    }
                }
                else {
                    iVar2 += -0x10;
                    iVar3 = iVar1 + 0x1;
                }
            }
            else {
                iVar2 += -0xe;
                iVar3 = iVar1 + 0x1;
            }
        }
        else {
            iVar2 += -0xc;
            iVar3 = iVar1 + 0x1;
        }
        if (iVar3 != iVar1) {
            StartFlash(0x78);
            *(int *)(param_1 + 0x4abc) = iVar2;
            *(int *)(param_1 + 0x4ac0) = iVar3;
            UpdateRaiseTimer(param_1);
        }
    }
    else {
        if (gSelection < 0xbe) {
            if (gSelection != 0xa0) {
                if (gSelection < 0xa0) {
                    if (gSelection != 0x96) {
                        if (((0x95 < gSelection) || (gSelection != 0x8c)) ||
                           ((gGameStatus & 0x20) != 0x0)) goto LAB_000b9a1c;
                        goto LAB_000b9758;
                    }
                }
                else if (gSelection != 0xb4) {
                    if ((gSelection < 0xb4) && (gSelection == 0xaa)) {
                        if (iVar2 + -0x1 < 0x1) {
                            iVar1 += 0x1;
                            if (iVar1 < 0x64) {
                                StartFlash(0x78);
                            }
                            else {
                                iVar1 = 0x63;
                            }
                            iVar2 = iVar1 - (char)st_kClearStage[*(int *)(param_1 + 0x4ae0) * 0x2];
                            if ((iVar2 < 0x1) || (0x3 < iVar2)) {
                                if ((iVar2 < 0x4) || (0x13 < iVar2)) {
                                    *(undefined4 *)(param_1 + 0x4abc) = 0x12c;
                                }
                                else {
                                    *(undefined4 *)(param_1 + 0x4abc) = 0x258;
                                }
                            }
                            else {
                                *(undefined4 *)(param_1 + 0x4abc) = 0x384;
                            }
                            *(int *)(param_1 + 0x4ac0) = iVar1;
                            UpdateRaiseTimer(param_1);
                        }
                        else {
                            *(int *)(param_1 + 0x4abc) = iVar2 + -0x1;
                        }
                    }
                    goto LAB_000b9a1c;
                }
            }
        }
        else if (gSelection != 0xdc) {
            if (gSelection < 0xdc) {
                if ((gSelection != 0xd2) && ((0xd1 < gSelection || (gSelection != 0xc8))))
                goto LAB_000b9a1c;
            }
            else if (gSelection != 0xe6) goto LAB_000b9a1c;
        }
        if (iVar2 + -0x1 < 0x1) {
            iVar1 += 0x1;
            if (0x63 < iVar1) {
                iVar1 = 0x63;
            }
            iVar2 = iVar1 - (char)st_Player2State[*(int *)(param_1 + 0x4ae0) * 0xa + 0x5];
            if (0x27 < iVar2) {
                iVar2 = 0x27;
            }
            *(undefined4 *)(param_1 + 0x4abc) = *(undefined4 *)(st_AdvanceLevel + iVar2 * 0x4);
            *(int *)(param_1 + 0x4ac0) = iVar1;
            UpdateRaiseTimer(param_1);
        }
        else {
            *(int *)(param_1 + 0x4abc) = iVar2 + -0x1;
        }
    }
LAB_000b9a1c:
    if ((((gSelection == 0x96) || (gSelection == 0xa0)) || (gSelection == 0xd2)) &&
       ((*(int *)(param_1 + 0x4aec) < 0x1 &&
        (iVar1 = *(int *)(param_1 + 0x4ae8), *(int *)(param_1 + 0x4ae8) = iVar1 + -0x1, 0x0 < iVar1)
        ))) {
        *(int *)(param_1 + 0x4af4) = *(int *)(param_1 + 0x4af4) + 0x1;
        *(int *)(param_1 + 0x4aec) =
             *(int *)(param_1 + 0x4aec) +
             (int)(char)st_Player2State[*(int *)(param_1 + 0x4ae0) * 0xa + 0x8];
    }
    return;
}



void UpdateRaiseTimer(int param_1)

{
    int iVar1;

    iVar1 = *(int *)(param_1 + 0x4ac0) + -0x1;
    if (0x62 < iVar1) {
        iVar1 = 0x62;
    }
    if ((((gSelection == 0x8c) || (gSelection == 0xbe)) && ((gGameStatus & 0x1) == 0x0)) &&
       (0x31 < iVar1)) {
        iVar1 = 0x31;
    }
    *(uint *)(param_1 + 0x4ad0) = 0x1000000 / *(uint *)(st_RaiseTimer + iVar1 * 0x4);
    return;
}



void UpdateComboScore(int param_1,undefined4 param_2,int param_3)

{
    if (gSelection == 0xaa) {
        UpdateClearComboDelay(param_1,param_2,param_3);
    }
    else if (gTheGame._120328_4_ == 0x1) {
        UpdateComboDelay1(param_1,param_2,param_3);
    }
    else if (gTheGame._120328_4_ == 0x2) {
        UpdateComboDelay2(param_1,param_2,param_3);
    }
    else {
        UpdateComboDelay2(param_1,param_2,param_3);
    }
    if (0x48 < param_3) {
        param_3 = 0x48;
    }
    *(int *)(param_1 + 0x4a8c) =
         *(int *)(param_1 + 0x4a8c) + *(int *)(st_ComboScore + (param_3 + -0x4) * 0x4);
    return;
}



void UpdateChainScore(int param_1,undefined4 param_2,int param_3)

{
    if (gSelection == 0xaa) {
        UpdateClearChainDelay(param_1,param_2,param_3);
    }
    else if (gTheGame._120328_4_ == 0x1) {
        UpdateChainDelay1(param_1,param_2,param_3);
    }
    else if (gTheGame._120328_4_ == 0x2) {
        UpdateChainDelay2(param_1,param_2,param_3);
    }
    else {
        UpdateChainDelay2(param_1,param_2,param_3);
    }
    if (0xc < param_3) {
        param_3 = 0xc;
    }
    *(int *)(param_1 + 0x4a8c) =
         *(int *)(param_1 + 0x4a8c) + *(int *)(st_ChainScore + (param_3 + -0x1) * 0x4);
    return;
}



void UpdateComboDelay1(int param_1,int param_2,int param_3)

{
    int iVar1;

    iVar1 = *(int *)(param_1 + 0x4b00);
    if (0x1e < param_3) {
        param_3 = 0x1e;
    }
    if (*(int *)(param_1 + 0x4a94) == 0x0) {
        iVar1 = *(int *)(st_NormalComboDelay1 + iVar1 * 0x4) + (param_3 + -0x4) * 0x1e;
    }
    else if (param_3 < 0x9) {
        iVar1 = *(int *)(st_DangerComboDelay1_combo4 + iVar1 * 0x4);
    }
    else if (param_3 < 0xb) {
        iVar1 = *(int *)(st_DangerComboDelay1_combo9 + iVar1 * 0x4);
    }
    else if (param_3 < 0x10) {
        iVar1 = *(int *)(st_DangerComboDelay1_combo11 + iVar1 * 0x4);
    }
    else {
        iVar1 = *(int *)(st_DangerComboDelay1_combo16 + iVar1 * 0x4);
    }
    if (iVar1 <= *(int *)(param_2 + 0xc)) {
        return;
    }
    *(int *)(param_2 + 0xc) = iVar1;
    return;
}



void UpdateChainDelay1(int param_1,int param_2,int param_3)

{
    int iVar1;

    iVar1 = *(int *)(param_1 + 0x4b00);
    if (*(int *)(param_1 + 0x4a94) == 0x0) {
        param_3 += 0x1;
        if (0xd < param_3) {
            param_3 = 0xd;
        }
        iVar1 = *(int *)(st_NormalChainDelay1 + iVar1 * 0x4) + (param_3 + -0x2) * 0x3c;
    }
    else if (param_3 == 0x2) {
        iVar1 = *(int *)(st_DangerChainDelay1_chain3 + iVar1 * 0x4);
    }
    else {
        if (param_3 < 0x2) {
            if (0x0 < param_3) {
                iVar1 = *(int *)(st_DangerChainDelay1_chain2 + iVar1 * 0x4);
                goto LAB_000b9e48;
            }
        }
        else if (param_3 < 0x4) {
            iVar1 = *(int *)(st_DangerChainDelay1_chain4 + iVar1 * 0x4);
            goto LAB_000b9e48;
        }
        iVar1 = *(int *)(st_DangerChainDelay1_chain5 + iVar1 * 0x4);
    }
LAB_000b9e48:
    if (*(int *)(param_2 + 0xc) < iVar1) {
        *(int *)(param_2 + 0xc) = iVar1;
        return;
    }
    return;
}



void UpdateComboDelay2(int param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;

    iVar2 = *(int *)(param_1 + 0x4ae0);
    if (0x1e < param_3) {
        param_3 = 0x1e;
    }
    if (*(int *)(param_1 + 0x4a94) == 0x0) {
        iVar1 = *(int *)(st_NormalComboDelay2A + iVar2 * 0x4) +
                (param_3 + -0x4) * *(int *)(st_NormalComboDelay2B + iVar2 * 0x4);
    }
    else {
        if (param_3 < 0x9) {
            iVar1 = 0x0;
        }
        else if (param_3 < 0xb) {
            iVar1 = *(int *)(st_DangerComboDelay2B + iVar2 * 0x4);
        }
        else if (param_3 < 0xd) {
            iVar1 = *(int *)(st_DangerComboDelay2B + iVar2 * 0x4) << 0x1;
        }
        else if (param_3 < 0xf) {
            iVar1 = *(int *)(st_DangerComboDelay2B + iVar2 * 0x4) * 0x3;
        }
        else {
            iVar1 = *(int *)(st_DangerComboDelay2B + iVar2 * 0x4) << 0x2;
        }
        iVar1 += *(int *)(st_DangerComboDelay2A + iVar2 * 0x4);
    }
    if (iVar1 <= *(int *)(param_2 + 0xc)) {
        return;
    }
    *(int *)(param_2 + 0xc) = iVar1;
    return;
}



void UpdateChainDelay2(int param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;

    iVar2 = *(int *)(param_1 + 0x4ae0);
    if (*(int *)(param_1 + 0x4a94) == 0x0) {
        param_3 += 0x1;
        if (0xd < param_3) {
            param_3 = 0xd;
        }
        iVar1 = *(int *)(st_NormalChainDelay2A + iVar2 * 0x4) +
                (param_3 + -0x2) * *(int *)(st_NormalChainDelay2B + iVar2 * 0x4);
        goto LAB_000ba04c;
    }
    if (param_3 == 0x2) {
        iVar1 = *(int *)(st_DangerChainDelay2B + iVar2 * 0x4);
    }
    else if (param_3 < 0x2) {
        if (param_3 < 0x1) {
LAB_000b9fd8:
            iVar1 = *(int *)(st_DangerChainDelay2B + iVar2 * 0x4) << 0x2;
        }
        else {
            iVar1 = 0x0;
        }
    }
    else {
        if (0x3 < param_3) goto LAB_000b9fd8;
        iVar1 = *(int *)(st_DangerChainDelay2B + iVar2 * 0x4) << 0x1;
    }
    iVar1 += *(int *)(st_DangerChainDelay2A + iVar2 * 0x4);
LAB_000ba04c:
    if (*(int *)(param_2 + 0xc) < iVar1) {
        *(int *)(param_2 + 0xc) = iVar1;
        return;
    }
    return;
}



void UpdateClearComboDelay(int param_1,int param_2,int param_3)

{
    int iVar1;

    if (*(int *)(param_1 + 0x4b00) == 0x5) {
        iVar1 = 0x6;
    }
    else {
        iVar1 = *(int *)(param_1 + 0x4b04) + -0x1;
    }
    if (0x1e < param_3) {
        param_3 = 0x1e;
    }
    if (*(int *)(param_1 + 0x4a94) == 0x0) {
        iVar1 = *(int *)(st_ClearNormalComboA + iVar1 * 0x4) +
                (param_3 + -0x4) * *(int *)(st_ClearNormalComboB + iVar1 * 0x4);
    }
    else if (param_3 < 0x9) {
        iVar1 = *(int *)(st_ClearDangerComboDelay_combo4 + iVar1 * 0x4);
    }
    else if (param_3 < 0xb) {
        iVar1 = *(int *)(st_ClearDangerComboDelay_combo9 + iVar1 * 0x4);
    }
    else if (param_3 < 0x10) {
        iVar1 = *(int *)(st_ClearDangerComboDelay_combo11 + iVar1 * 0x4);
    }
    else {
        iVar1 = *(int *)(st_ClearDangerComboDelay_combo16 + iVar1 * 0x4);
    }
    if (iVar1 <= *(int *)(param_2 + 0xc)) {
        return;
    }
    *(int *)(param_2 + 0xc) = iVar1;
    return;
}



void UpdateClearChainDelay(int param_1,int param_2,int param_3)

{
    int iVar1;

    if (*(int *)(param_1 + 0x4b00) == 0x5) {
        iVar1 = 0x6;
    }
    else {
        iVar1 = *(int *)(param_1 + 0x4b04) + -0x1;
    }
    param_3 += 0x1;
    if (0xd < param_3) {
        param_3 = 0xd;
    }
    if (*(int *)(param_1 + 0x4a94) == 0x0) {
        iVar1 = *(int *)(st_ClearNormalChainA + iVar1 * 0x4) +
                (param_3 + -0x2) * *(int *)(st_ClearNormalChainB + iVar1 * 0x4);
    }
    else if (param_3 == 0x2) {
        iVar1 = *(int *)(st_ClearDangerChainDelay_chain3 + iVar1 * 0x4);
    }
    else {
        if (param_3 < 0x2) {
            if (0x0 < param_3) {
                iVar1 = *(int *)(st_ClearDangerChainDelay_chain2 + iVar1 * 0x4);
                goto LAB_000ba23c;
            }
        }
        else if (param_3 < 0x4) {
            iVar1 = *(int *)(st_ClearDangerChainDelay_chain4 + iVar1 * 0x4);
            goto LAB_000ba23c;
        }
        iVar1 = *(int *)(st_ClearDangerChainDelay_chain5 + iVar1 * 0x4);
    }
LAB_000ba23c:
    if (*(int *)(param_2 + 0xc) < iVar1) {
        *(int *)(param_2 + 0xc) = iVar1;
        return;
    }
    return;
}



void UpdateRecord2(int param_1,int param_2)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    int iVar4;
    char *pcVar5;

    pcVar3 = NULL;
    pcVar5 = NULL;
    cVar1 = *gPlayer._0_4_;
    cVar2 = *gPlayer._4_4_;
    if (gDemo != 0x2c) {
        return;
    }
    if (cVar1 != '\0') {
        if (cVar2 == '\0') {
            return;
        }
        if (gTheGame._120332_4_ == 0x1) {
            if (gSelection == 0xb4) {
                if (param_1 == 0x0) {
                    iVar4 = cVar2 + 0x1dc;
                }
                else {
                    iVar4 = cVar2 + 0x1d4;
                }
                pcVar3 = gPlayer._0_4_ + iVar4;
                if (param_2 == 0x0) {
                    pcVar5 = gPlayer._4_4_ + cVar1 + 0x1dc;
                }
                else {
                    pcVar5 = gPlayer._4_4_ + cVar1 + 0x1d4;
                }
            }
            else if (gSelection < 0xb4) {
                if (gSelection != 0xa0) {
                    return;
                }
                if (param_1 == 0x0) {
                    iVar4 = cVar2 + 0x19c;
                }
                else {
                    iVar4 = cVar2 + 0x194;
                }
                pcVar3 = gPlayer._0_4_ + iVar4;
                if (param_2 == 0x0) {
                    pcVar5 = gPlayer._4_4_ + cVar1 + 0x19c;
                }
                else {
                    pcVar5 = gPlayer._4_4_ + cVar1 + 0x194;
                }
            }
            else {
                if (gSelection != 0xc8) {
                    return;
                }
                if (param_1 == 0x0) {
                    iVar4 = cVar2 + 0x1bc;
                }
                else {
                    iVar4 = cVar2 + 0x1b4;
                }
                pcVar3 = gPlayer._0_4_ + iVar4;
                if (param_2 == 0x0) {
                    pcVar5 = gPlayer._4_4_ + cVar1 + 0x1bc;
                }
                else {
                    pcVar5 = gPlayer._4_4_ + cVar1 + 0x1b4;
                }
            }
        }
        else if (gSelection == 0xb4) {
            if (param_1 == 0x0) {
                iVar4 = cVar2 + 0x1ec;
            }
            else {
                iVar4 = cVar2 + 0x1e4;
            }
            pcVar3 = gPlayer._0_4_ + iVar4;
            if (param_2 == 0x0) {
                pcVar5 = gPlayer._4_4_ + cVar1 + 0x1ec;
            }
            else {
                pcVar5 = gPlayer._4_4_ + cVar1 + 0x1e4;
            }
        }
        else if (gSelection < 0xb4) {
            if (gSelection == 0xa0) {
                if (param_1 == 0x0) {
                    iVar4 = cVar2 + 0x1ac;
                }
                else {
                    iVar4 = cVar2 + 0x1a4;
                }
                pcVar3 = gPlayer._0_4_ + iVar4;
                if (param_2 == 0x0) {
                    pcVar5 = gPlayer._4_4_ + cVar1 + 0x1ac;
                }
                else {
                    pcVar5 = gPlayer._4_4_ + cVar1 + 0x1a4;
                }
            }
        }
        else if (gSelection == 0xc8) {
            if (param_1 == 0x0) {
                iVar4 = cVar2 + 0x1cc;
            }
            else {
                iVar4 = cVar2 + 0x1c4;
            }
            pcVar3 = gPlayer._0_4_ + iVar4;
            if (param_2 == 0x0) {
                pcVar5 = gPlayer._4_4_ + cVar1 + 0x1cc;
            }
            else {
                pcVar5 = gPlayer._4_4_ + cVar1 + 0x1c4;
            }
        }
        *pcVar3 = *pcVar3 + '\x01';
        *pcVar5 = *pcVar5 + '\x01';
        return;
    }
    return;
}



void pon_UpdateRecord4p(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
    int iVar1;
    int iVar2;
    undefined1 *puVar3;
    int *piVar4;
    int local_28 [0x4];

    local_28[0] = param_1;
    local_28[1] = param_2;
    local_28[2] = param_3;
    local_28[3] = param_4;
    if (gDemo != 0x2c) {
        return;
    }
    if (gSelection != 0xdc) {
        if (gSelection < 0xdc) {
            if (gSelection != 0xd2) {
                return;
            }
        }
        else if (gSelection != 0xe6) {
            return;
        }
    }
    puVar3 = gTheGame;
    piVar4 = local_28;
    iVar2 = 0x0;
    do {
        if (gTheGame._120328_4_ <= iVar2) {
            return;
        }
        iVar1 = *piVar4;
        if (iVar1 == 0xc) {
            puVar3[0x21c04] = puVar3[0x21c04] + '\x01';
            if ('c' < (char)puVar3[0x21c04]) {
                puVar3[0x21c04] = 0x63;
            }
        }
        else if (iVar1 < 0xc) {
            if (iVar1 == 0xa) {
                puVar3[0x21bfc] = puVar3[0x21bfc] + '\x01';
                if ('c' < (char)puVar3[0x21bfc]) {
                    puVar3[0x21bfc] = 0x63;
                }
            }
            else if (iVar1 < 0xa) {
                if (iVar1 < 0x9) goto LAB_000ba654;
                puVar3[0x21bf8] = puVar3[0x21bf8] + '\x01';
                if ('c' < (char)puVar3[0x21bf8]) {
                    puVar3[0x21bf8] = 0x63;
                }
            }
            else {
                puVar3[0x21c00] = puVar3[0x21c00] + '\x01';
                if ('c' < (char)puVar3[0x21c00]) {
                    puVar3[0x21c00] = 0x63;
                }
            }
        }
        else if (iVar1 != 0xe) {
LAB_000ba654:
            gc_assert(0x0,_530,0x423,_531,0x0,0x0,0x0);
        }
        piVar4 = piVar4 + 0x1;
        puVar3 = puVar3 + 0x1;
        iVar2 += 0x1;
    } while( true );
}



void UpdatePlayerPuzzle(int *param_1,int param_2,int param_3)

{
    char cVar1;
    char cVar2;
    uint uVar3;
    int iVar4;
    byte *pbVar5;

    pbVar5 = NULL;
    if (param_2 == 0x0) {
        return;
    }
    *(char *)(gPlayer._0_4_ + 0x148) = (char)gTheGame._120340_4_;
    *(char *)(gPlayer._0_4_ + 0x149) = (char)gTheGame._120344_4_;
    *(char *)(gPlayer._0_4_ + 0x14a) = (char)gTheGame._120348_4_;
    if (gDemo != 0x2c) {
        return;
    }
    if (gMain == 0x388) {
        return;
    }
    if (*param_1 != 0x8) {
        if (gTheGame._120332_4_ == 0x2) {
            param_3 += -0x2d;
        }
        uVar3 = param_3 - 0x1;
        cVar1 = (char)((int)uVar3 >> 0x3);
        cVar2 = cVar1 + ((int)uVar3 < 0x0 && (uVar3 & 0x7) != 0x0);
        iVar4 = (int)cVar2;
        if (param_2 == 0x3) {
            pbVar5 = (byte *)(gPlayer._0_4_ + iVar4 + 0x151);
        }
        else if (param_2 < 0x3) {
            if (param_2 == 0x1) {
                pbVar5 = (byte *)(gPlayer._0_4_ + iVar4 + 0x14b);
            }
            else if (0x0 < param_2) {
                pbVar5 = (byte *)(gPlayer._0_4_ + iVar4 + 0x157);
            }
        }
        else if (param_2 == 0x5) {
            if (gTheGame._120332_4_ == 0x2) {
                cVar2 += '\x06';
            }
            pbVar5 = (byte *)(gPlayer._0_4_ + cVar2 + 0x163);
        }
        else if (param_2 < 0x5) {
            pbVar5 = (byte *)(gPlayer._0_4_ + iVar4 + 0x15d);
        }
        *pbVar5 = *pbVar5 | (byte)(0x1 << (int)(char)((char)uVar3 +
                                                     (cVar1 + ((int)uVar3 < 0x0 &&
                                                              (uVar3 & 0x7) != 0x0)) * -0x8));
        return;
    }
    return;
}



undefined4 CheckPlayerPuzzleRound(int param_1,int param_2)

{
    uint uVar1;
    char *pcVar2;

    pcVar2 = NULL;
    if (param_1 == 0x0) {
        return 0x0;
    }
    if (gTheGame._120332_4_ == 0x2) {
        param_2 += -0x2d;
    }
    if (param_2 < 0x10) {
        uVar1 = 0x1;
    }
    else if (param_2 < 0x1f) {
        uVar1 = 0x2;
    }
    else {
        uVar1 = 0x3;
    }
    if (param_1 == 0x3) {
        pcVar2 = (char *)(gPlayer._0_4_ + 0x151);
    }
    else if (param_1 < 0x3) {
        if (param_1 == 0x1) {
            pcVar2 = (char *)(gPlayer._0_4_ + 0x14b);
        }
        else if (0x0 < param_1) {
            pcVar2 = (char *)(gPlayer._0_4_ + 0x157);
        }
    }
    else if (param_1 == 0x5) {
        if (gTheGame._120332_4_ == 0x1) {
            pcVar2 = (char *)(gPlayer._0_4_ + 0x163);
        }
        else {
            pcVar2 = (char *)(gPlayer._0_4_ + 0x169);
        }
    }
    else if (param_1 < 0x5) {
        pcVar2 = (char *)(gPlayer._0_4_ + 0x15d);
    }
    if (uVar1 == 0x2) {
        if ((((pcVar2[0x1] & 0x80U) == 0x80) && (pcVar2[0x2] == -0x1)) &&
           ((pcVar2[0x3] & 0x3fU) == 0x3f)) {
            return 0xffffffff;
        }
    }
    else if (uVar1 < 0x2) {
        if (((uVar1 != 0x0) && (*pcVar2 == -0x1)) && ((pcVar2[0x1] & 0x7fU) == 0x7f)) {
            return 0xffffffff;
        }
    }
    else if (((uVar1 < 0x4) && ((pcVar2[0x3] & 0xc0U) == 0xc0)) &&
            ((pcVar2[0x4] == -0x1 && ((pcVar2[0x5] & 0x1fU) == 0x1f)))) {
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 PlayPlayerPuzzleEnding(int param_1,int param_2)

{
    byte *pbVar1;

    pbVar1 = NULL;
    if (param_1 == 0x3) {
        pbVar1 = (byte *)(gPlayer._0_4_ + 0x156);
    }
    else if (param_1 < 0x3) {
        if (param_1 == 0x1) {
            pbVar1 = (byte *)(gPlayer._0_4_ + 0x150);
        }
        else if (0x0 < param_1) {
            pbVar1 = (byte *)(gPlayer._0_4_ + 0x15c);
        }
    }
    else if (param_1 == 0x5) {
        if (gTheGame._120332_4_ == 0x1) {
            pbVar1 = (byte *)(gPlayer._0_4_ + 0x168);
        }
        else {
            pbVar1 = (byte *)(gPlayer._0_4_ + 0x16e);
        }
    }
    else if (param_1 < 0x5) {
        pbVar1 = (byte *)(gPlayer._0_4_ + 0x162);
    }
    if ((*pbVar1 & 0x80) == 0x0) {
        *pbVar1 = *pbVar1 | 0x80;
        return 0xffffffff;
    }
    if ((gTheGame._120332_4_ == 0x1) && (param_2 == 0x2d)) {
        return 0xffffffff;
    }
    if ((gTheGame._120332_4_ == 0x2) && (param_2 == 0x5a)) {
        return 0xffffffff;
    }
    return 0x0;
}



void UpdatePlayerStageClear(int *param_1,int param_2,undefined4 param_3)

{
    char cVar2;
    int iVar1;
    char cVar3;

    if ((gDemo == 0x2c) && (gMain != 0x388)) {
        UpdatePlayerStageClearTimeScore(param_1,0x0,param_2,param_3);
        if (gTheGame._120360_4_ == 0x5) {
            if (param_2 != 0x3) {
                return;
            }
            cVar2 = '\x02';
            cVar3 = '\x05';
        }
        else {
            if (*param_1 == 0x8) {
                return;
            }
            cVar2 = (char)param_2 + -0x1;
            cVar3 = (char)param_3 + -0x1;
        }
        if (gTheGame._120332_4_ == 0x1) {
            iVar1 = cVar2 + 0x33;
        }
        else {
            iVar1 = cVar2 + 0xbf;
        }
        *(byte *)(gPlayer._0_4_ + iVar1) =
             *(byte *)(gPlayer._0_4_ + iVar1) | (byte)(0x1 << (int)cVar3);
    }
    return;
}



void UpdatePlayerStageClearTimeScore(int *param_1,int param_2,int param_3,int param_4)

{
    uint uVar1;
    undefined4 *puVar2;
    uint uVar3;
    int iVar4;
    uint *puVar5;
    int *piVar6;
    int *piVar7;
    int iVar8;
    uint uVar9;
    int iVar10;

    iVar8 = 0x0;
    iVar10 = 0x0;
    if (gTheGame._120332_4_ == 0x1) {
        piVar6 = (int *)(gPlayer._0_4_ + 0x20);
        piVar7 = (int *)(gPlayer._0_4_ + 0x24);
    }
    else {
        piVar6 = (int *)(gPlayer._0_4_ + 0x28);
        piVar7 = (int *)(gPlayer._0_4_ + 0x2c);
    }
    if (gTheGame._120360_4_ == 0x5) {
        if (param_3 == 0x3) {
            param_4 = 0xf;
        }
        else {
            param_4 = 0x1f;
        }
    }
    else if (param_3 < 0x4) {
        param_4 = param_4 + (param_3 + -0x1) * 0x5 + -0x1;
    }
    else {
        param_4 += (param_3 + -0x1) * 0x5;
    }
    if (param_2 != 0x0) {
        if (param_4 == 0x0) {
            if (((gTheGame._120332_4_ != 0x1) || (*(int *)(gPlayer._0_4_ + 0x3c) == 0x0)) &&
               ((gTheGame._120332_4_ != 0x2 || (*(int *)(gPlayer._0_4_ + 0xc8) == 0x0)))) {
                gTheGame._19084_4_ = 0x0;
                gTheGame._120340_4_ = 0x0;
                gTheGame._120344_4_ = 0x0;
                gTheGame._120348_4_ = 0x0;
                return;
            }
        }
        else if (gDemo != 0x2c) {
            return;
        }
    }
    if (param_2 == 0x0) {
        if (gTheGame._120332_4_ == 0x1) {
            iVar4 = param_4 * 0x4 + 0x3c;
        }
        else {
            iVar4 = param_4 * 0x4 + 0xc8;
        }
        puVar5 = (uint *)(gPlayer._0_4_ + iVar4);
        iVar4 = *param_1;
        if ((iVar4 == 0x7) || ((param_4 == 0xf && (iVar4 == 0x8)))) {
            if (*puVar5 == 0x0) {
                iVar8 = -0x1;
            }
            else if ((gTheGame._120332_4_ == 0x1) &&
                    (*(int *)(gPlayer._0_4_ + param_4 * 0x4 + 0x40) == 0x0)) {
                iVar8 = -0x1;
            }
            else if ((gTheGame._120332_4_ == 0x2) &&
                    (*(int *)(gPlayer._0_4_ + param_4 * 0x4 + 0xcc) == 0x0)) {
                iVar8 = -0x1;
            }
        }
        if ((iVar4 == 0x7) || ((param_4 == 0xf && (iVar4 == 0x8)))) {
            iVar4 = 0x1;
        }
        else {
            iVar4 = 0x0;
        }
        *puVar5 = iVar4 << 0x18;
        *puVar5 = *puVar5 | gTheGame._120340_4_ << 0x10;
        *puVar5 = *puVar5 | gTheGame._120344_4_ << 0x8;
        *puVar5 = *puVar5 | gTheGame._120348_4_;
        if ((*param_1 == 0x7) && (param_4 < 0x1f)) {
            if (gTheGame._120332_4_ == 0x1) {
                iVar4 = (param_4 + 0x1) * 0x4 + 0x3c;
            }
            else {
                iVar4 = (param_4 + 0x1) * 0x4 + 0xc8;
            }
            uVar3 = *(uint *)(gPlayer._0_4_ + iVar4);
            if ((uVar3 != 0x0) && ((char)(uVar3 >> 0x18) == '\0')) {
                *(uint *)(gPlayer._0_4_ + iVar4) = uVar3 | 0x1000000;
            }
        }
        if (param_4 == 0x1f) {
            iVar10 = gTheGame._120348_4_ + gTheGame._120344_4_ * 0x3c + gTheGame._120340_4_ * 0xe10;
        }
        if ((*param_1 == 0x7) || ((param_4 == 0xf && (*param_1 == 0x8)))) {
            if (param_4 < 0x1f) {
                *piVar6 = gTheGame._19084_4_;
                if (iVar8 != 0x0) {
                    *piVar7 = gTheGame._19084_4_;
                }
            }
            else if (param_4 == 0x1f) {
                if (gTheGame._120332_4_ == 0x1) {
                    iVar8 = (int)*(char *)(gPlayer._0_4_ + 0x32) +
                            *(char *)(gPlayer._0_4_ + 0x31) * 0x3c +
                            *(char *)(gPlayer._0_4_ + 0x30) * 0xe10;
                    if ((iVar8 == 0x0) || (iVar10 < iVar8)) {
                        *(char *)(gPlayer._0_4_ + 0x30) = (char)gTheGame._120340_4_;
                        *(char *)(gPlayer._0_4_ + 0x31) = (char)gTheGame._120344_4_;
                        *(char *)(gPlayer._0_4_ + 0x32) = (char)gTheGame._120348_4_;
                    }
                }
                else {
                    iVar8 = (int)*(char *)(gPlayer._0_4_ + 0xbe) +
                            *(char *)(gPlayer._0_4_ + 0xbd) * 0x3c +
                            *(char *)(gPlayer._0_4_ + 0xbc) * 0xe10;
                    if ((iVar8 == 0x0) || (iVar10 < iVar8)) {
                        *(char *)(gPlayer._0_4_ + 0xbc) = (char)gTheGame._120340_4_;
                        *(char *)(gPlayer._0_4_ + 0xbd) = (char)gTheGame._120344_4_;
                        *(char *)(gPlayer._0_4_ + 0xbe) = (char)gTheGame._120348_4_;
                    }
                }
                *piVar6 = 0x0;
            }
        }
        else {
            *piVar6 = 0x0;
        }
    }
    else {
        iVar8 = gPlayer._0_4_ + param_4 * 0x4;
        uVar3 = *(uint *)(iVar8 + 0x3c);
        uVar9 = gTheGame._120340_4_ << 0x10 | gTheGame._120344_4_ << 0x8 | gTheGame._120348_4_;
        if (gTheGame._120332_4_ == 0x1) {
            if (uVar3 == 0x0) {
                gTheGame._19084_4_ = *piVar7;
                param_4 += -0x1;
            }
            else if (uVar3 == uVar9) {
                gTheGame._19084_4_ = 0x0;
            }
            else {
                if (uVar3 >> 0x18 == 0x1) {
                    param_4 += -0x1;
                    if (*piVar6 == *piVar7) {
                        *piVar6 = 0x0;
                    }
                    if (param_4 == 0xf) {
                        *piVar6 = 0x0;
                    }
                }
                gTheGame._19084_4_ = *piVar6;
            }
            puVar2 = (undefined4 *)(gPlayer._0_4_ + param_4 * 0x4 + 0x3c);
        }
        else {
            uVar1 = *(uint *)(iVar8 + 0xc8);
            if (uVar1 == 0x0) {
                gTheGame._19084_4_ = *piVar7;
                param_4 += -0x1;
            }
            else if (uVar1 == uVar9) {
                gTheGame._19084_4_ = 0x0;
            }
            else {
                if (uVar3 >> 0x18 == 0x1) {
                    param_4 += -0x1;
                    if (*piVar6 == *piVar7) {
                        *piVar6 = 0x0;
                    }
                    if (param_4 == 0xf) {
                        *piVar6 = 0x0;
                    }
                }
                gTheGame._19084_4_ = *piVar6;
            }
            puVar2 = (undefined4 *)(gPlayer._0_4_ + param_4 * 0x4 + 0xc8);
        }
        gTheGame._120340_4_ = (int)(char)((uint)*puVar2 >> 0x10);
        gTheGame._120344_4_ = (int)(char)((uint)*puVar2 >> 0x8);
        gTheGame._120348_4_ = (uint)(char)*puVar2;
    }
    return;
}



void UpdatePlayerCPU(int param_1,undefined param_2)

{
    if (gDemo != 0x2c) {
        return;
    }
    if (param_1 == 0x3) {
        *(undefined *)(gPlayer._0_4_ + 0x171) = param_2;
        return;
    }
    if (param_1 < 0x3) {
        if (param_1 == 0x1) {
            *(undefined *)(gPlayer._0_4_ + 0x16f) = param_2;
            return;
        }
        if (param_1 < 0x1) {
            return;
        }
        *(undefined *)(gPlayer._0_4_ + 0x170) = param_2;
        return;
    }
    if (param_1 == 0x5) {
        *(undefined *)(gPlayer._0_4_ + 0x173) = param_2;
        return;
    }
    if (0x4 < param_1) {
        return;
    }
    *(undefined *)(gPlayer._0_4_ + 0x172) = param_2;
    return;
}



void UpdatePlayerCharacter(int param_1,int param_2)

{
    if (param_2 == 0x0) {
        return;
    }
    if (param_2 == 0x9) {
        return;
    }
    if (param_1 == 0x3) {
        *(ushort *)(gPlayer._0_4_ + 0x17e) =
             *(ushort *)(gPlayer._0_4_ + 0x17e) | (ushort)(0x1 << param_2);
        return;
    }
    if (param_1 < 0x3) {
        if (param_1 == 0x1) {
            *(ushort *)(gPlayer._0_4_ + 0x17a) =
                 *(ushort *)(gPlayer._0_4_ + 0x17a) | (ushort)(0x1 << param_2);
            return;
        }
        if (param_1 < 0x1) {
            return;
        }
        *(ushort *)(gPlayer._0_4_ + 0x17c) =
             *(ushort *)(gPlayer._0_4_ + 0x17c) | (ushort)(0x1 << param_2);
        return;
    }
    if (param_1 == 0x5) {
        *(ushort *)(gPlayer._0_4_ + 0x182) =
             *(ushort *)(gPlayer._0_4_ + 0x182) | (ushort)(0x1 << param_2);
        return;
    }
    if (0x4 < param_1) {
        return;
    }
    *(ushort *)(gPlayer._0_4_ + 0x180) =
         *(ushort *)(gPlayer._0_4_ + 0x180) | (ushort)(0x1 << param_2);
    return;
}



void UpdateComboChainCount(int param_1,int param_2,int param_3)

{
    undefined2 uVar1;
    short *psVar2;
    short *psVar3;

    if (gDemo != 0x2c) {
        return;
    }
    if (param_3 == 0x0) {
        return;
    }
    if ((param_2 != 0x0) && (param_3 == 0x3)) {
        return;
    }
    if (gSelection < 0x83) {
        return;
    }
    if (gSelection == 0xa0) {
        return;
    }
    if (gSelection == 0xc8) {
        return;
    }
    if (gSelection == 0xb4) {
        return;
    }
    if (gSelection == 0xd2) {
        return;
    }
    if (gSelection == 0xe6) {
        return;
    }
    if (gSelection == 0xdc) {
        return;
    }
    if (gMain != 0x387) {
        return;
    }
    if (gTheGame._120332_4_ == 0x1) {
        psVar2 = (short *)(*(int *)(gPlayer + param_1 * 0x4) + 0x184);
        psVar3 = (short *)(*(int *)(gPlayer + param_1 * 0x4) + 0x188);
    }
    else {
        psVar2 = (short *)(*(int *)(gPlayer + param_1 * 0x4) + 0x18c);
        psVar3 = (short *)(*(int *)(gPlayer + param_1 * 0x4) + 0x190);
    }
    uVar1 = (undefined2)gSelection;
    if (param_2 != 0x0) {
        if (*psVar2 < param_3) {
            if (gTheGame._120332_4_ == 0x1) {
                *(undefined2 *)(*(int *)(gPlayer + param_1 * 0x4) + 0x186) = uVar1;
            }
            else {
                *(undefined2 *)(*(int *)(gPlayer + param_1 * 0x4) + 0x18e) = uVar1;
            }
            *psVar2 = (short)param_3;
        }
        if (param_3 < 0xb) {
            *(short *)(st_Combo1 + (param_3 + -0x4) * 0x2) =
                 *(short *)(st_Combo1 + (param_3 + -0x4) * 0x2) + 0x1;
            return;
        }
        if (param_3 < 0x46) {
            param_3 += -0xb;
        }
        else {
            param_3 = 0x3b;
        }
        st_Combo2[param_3] = st_Combo2[param_3] + '\x01';
        return;
    }
    if ((int)*psVar3 < param_3 + 0x1) {
        if (gTheGame._120332_4_ == 0x1) {
            *(undefined2 *)(*(int *)(gPlayer + param_1 * 0x4) + 0x18a) = uVar1;
        }
        else {
            *(undefined2 *)(*(int *)(gPlayer + param_1 * 0x4) + 0x192) = uVar1;
        }
        *psVar3 = (short)param_3 + 0x1;
    }
    if (param_3 < 0xa) {
        *(short *)(st_Chain1 + (param_3 + -0x1) * 0x2) =
             *(short *)(st_Chain1 + (param_3 + -0x1) * 0x2) + 0x1;
        return;
    }
    if (param_3 < 0x63) {
        param_3 += -0xa;
    }
    else {
        param_3 = 0x59;
    }
    st_Chain2[param_3] = st_Chain2[param_3] + '\x01';
    return;
}



void UpdateWell(int param_1,int *param_2,undefined4 param_3,int param_4)

{
    int *piVar1;
    int iVar2;
    int *piVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int local_68;
    int local_64;
    int local_60;
    int local_5c;
    int local_58;
    int local_54;
    int local_50;
    int *local_4c;

    iVar12 = param_1 + 0x2208;
    iVar7 = 0x0;
    iVar10 = 0x0;
    iVar14 = 0xb;
    local_54 = *(int *)(param_1 + 0x4ab0);
    local_58 = *(int *)(param_1 + 0x4ab4);
    iVar9 = *(int *)(param_1 + 0x4aac);
    local_4c = &gSelection;
    local_50 = (param_4 + -0x1) * local_54 + 0x1;
    iVar13 = local_58 + -0x1;
    local_5c = 0x0;
    local_60 = 0x0;
    local_64 = param_4;
    do {
        iVar8 = iVar14 + 0x1;
        iVar11 = 0x0;
        for (local_68 = 0x0; local_68 < gMax; local_68 += 0x1) {
            piVar1 = (int *)(iVar12 + local_68 * 0x2c);
            iVar5 = piVar1[0x4];
            if (iVar5 == 0x0) {
LAB_000bbcf4:
                if ((iVar11 != 0x0) && (local_68 == 0x11)) {
                    local_68 = -0x1;
                }
            }
            else {
                if (*piVar1 != 0x7) {
LAB_000bba10:
                    if (*piVar1 == 0x8) {
                        iVar2 = piVar1[0x1];
                        if (iVar2 < 0x1) {
                            if (iVar2 == 0x0) {
                                piVar1[0x1] = -0x1;
                            }
                            else if (piVar1[0x3] != 0x0) {
                                if (piVar1[0x2] < 0x1) {
                                    iVar5 = 0x0;
                                    if (iVar2 == -0x1) {
                                        piVar1[0x1] = -0x2;
                                        *(int *)(param_1 + 0x4a8c) =
                                             *(int *)(param_1 + 0x4a8c) + 0xa;
                                        PlayExplosionSound(param_3,piVar1[0x6]);
                                        if (piVar1[0x4] == 0x7) {
                                            *(int *)(param_1 + 0x4af8) =
                                                 *(int *)(param_1 + 0x4af8) + -0x1;
                                        }
                                        StartExplosion(param_1,param_3,iVar14,local_68,piVar1[0x5]);
                                        iVar2 = *local_4c;
                                        if (iVar2 == 0xa0) {
LAB_000bbb1c:
                                            *(int *)(param_1 + 0x4aec) =
                                                 *(int *)(param_1 + 0x4aec) + -0x1;
                                        }
                                        else if (iVar2 < 0xa0) {
                                            if (iVar2 == 0x96) goto LAB_000bbb1c;
                                            if ((iVar2 < 0x96) && (iVar2 == 0x8c)) {
LAB_000bbb0c:
                                                *(int *)(param_1 + 0x4abc) =
                                                     *(int *)(param_1 + 0x4abc) + 0x1;
                                            }
                                        }
                                        else {
                                            if (iVar2 == 0xd2) goto LAB_000bbb1c;
                                            if ((iVar2 < 0xd2) && (iVar2 == 0xbe))
                                            goto LAB_000bbb0c;
                                        }
                                    }
                                }
                                else {
                                    piVar1[0x2] = piVar1[0x2] + -0x1;
                                }
                                iVar2 = piVar1[0x3];
                                piVar1[0x3] = iVar2 + -0x1;
                                if (iVar2 + -0x1 == 0x0) {
                                    piVar1[0x1] = 0x0;
                                }
                            }
                        }
                        else {
                            gOverflow += 0x23;
                        }
                        if (piVar1[0x1] == 0x0) {
                            InitTetrisState(piVar1);
                            iVar5 = 0x0;
                            iVar2 = 0x2;
                            if ((iVar8 < 0xc) && (*(int *)(iVar12 + local_68 * 0x2c + 0x328) != 0x0)
                               ) {
                                local_60 = -0x1;
                                iVar6 = iVar14;
                                while (iVar6 += -0x1, -0x1 < iVar6) {
                                    iVar15 = param_1 + local_68 * 0x2c + iVar6 * 0x318;
                                    if ((*(int *)(iVar15 + 0x10) == 0x0) ||
                                       (-0x1 < *(int *)(iVar15 + 0x4))) {
                                        iVar6 = 0x0;
                                    }
                                    else {
                                        iVar2 += 0x1;
                                    }
                                }
                            }
                            iVar6 = iVar14;
                            if (iVar7 < iVar2) {
                                iVar7 = iVar2;
                            }
                            while (iVar6 += 0x1, iVar6 < 0xc) {
                                piVar3 = (int *)(param_1 + iVar6 * 0x318 + local_68 * 0x2c);
                                if (piVar3[0x4] == 0x9) {
                                    iVar6 = 0xc;
                                }
                                else if (piVar3[0x4] != 0x0) {
                                    if (*piVar3 == 0x4) {
                                        piVar3[0x8] = -0x1;
                                    }
                                    else if (*piVar3 == 0x0) {
                                        piVar3[0x1] = iVar13;
                                        *piVar3 = 0x5;
                                        piVar3[0x8] = -0x1;
                                    }
                                }
                            }
                        }
                        else {
                            local_5c = -0x1;
                        }
                    }
                    if (iVar5 != 0x0) {
                        UpdateBlockFrame(piVar1);
                        if ((piVar1[0x7] != iVar14) && (*piVar1 != 0x1)) {
                            piVar1[0x9] = 0x9;
                            piVar1[0xa] = 0x2;
                            piVar1[0x7] = iVar14;
                        }
                        uVar4 = piVar1[0x1];
                        if (uVar4 == 0xffffffff) {
                            piVar1[0x9] = 0x8;
                        }
                        else if (piVar1[0x4] != 0x9) {
                            if ((*piVar1 == 0x8) &&
                               (uVar4 != (((int)uVar4 >> 0x1) +
                                         (uint)((int)uVar4 < 0x0 && (uVar4 & 0x1) != 0x0)) * 0x2)) {
                                piVar1[0x9] = 0x7;
                            }
                            else if (*piVar1 == 0x8) {
                                piVar1[0x9] = 0x0;
                            }
                        }
                    }
                    goto LAB_000bbcf4;
                }
                if (((local_68 != 0x0) || (gMax != 0x12)) ||
                   (iVar11 = UpdateWell3DRowConnect(param_1,iVar14,&local_68), iVar11 == 0x0)) {
LAB_000bb718:
                    *piVar1 = 0x8;
                    piVar1[0x2] = iVar9;
                    iVar9 += local_54;
                    piVar1[0x3] = *(int *)(param_1 + 0x4aac) + local_50;
                    if ((0x5 < local_64) && (piVar1[0x5] == 0x1e)) {
                        piVar1[0x5] = 0x1f;
                    }
                    piVar1[0x6] = piVar1[0x6] + iVar10;
                    iVar10 += 0x1;
                    if (((iVar8 < 0xc) &&
                        (*(int *)(param_1 + iVar8 * 0x318 + local_68 * 0x2c + 0x10) == 0x9)) &&
                       (iVar2 = ReturnAttackSlot(param_1,iVar8), iVar2 != -0x1)) {
                        iVar15 = 0x2b;
                        iVar6 = 0x0;
                        piVar3 = param_2;
                        do {
                            if (piVar3[0xa] == 0x0) {
                                param_2[iVar6 + 0xa] = iVar2 + 0x1;
                                break;
                            }
                            piVar3 = piVar3 + 0x1;
                            iVar6 += 0x1;
                            iVar15 += -0x1;
                        } while (iVar15 != 0x0);
                        CheckSameAttack(param_1,param_2,iVar2,piVar1[0x5]);
                        if (piVar1[0x8] != 0x0) {
                            *(undefined4 *)(param_1 + 0x4aa0) = 0xffffffff;
                        }
                    }
                    iVar2 = local_68 + -0x1;
                    if ((gMax != 0x6) || (-0x1 < iVar2)) {
                        if (iVar2 < 0x0) {
                            iVar2 = 0x11;
                        }
                        if ((*(int *)(iVar12 + iVar2 * 0x2c + 0x10) == 0x9) &&
                           (iVar2 = ReturnAttackSlot(param_1,iVar14), iVar2 != -0x1)) {
                            iVar15 = 0x2b;
                            iVar6 = 0x0;
                            piVar3 = param_2;
                            do {
                                if (piVar3[0xa] == 0x0) {
                                    param_2[iVar6 + 0xa] = iVar2 + 0x1;
                                    break;
                                }
                                piVar3 = piVar3 + 0x1;
                                iVar6 += 0x1;
                                iVar15 += -0x1;
                            } while (iVar15 != 0x0);
                            CheckSameAttack(param_1,param_2,iVar2,piVar1[0x5]);
                            if (piVar1[0x8] != 0x0) {
                                *(undefined4 *)(param_1 + 0x4aa0) = 0xffffffff;
                            }
                        }
                    }
                    iVar2 = local_68 + 0x1;
                    if ((gMax != 0x6) || (iVar2 < 0x6)) {
                        if (iVar2 == 0x12) {
                            iVar2 = 0x0;
                        }
                        if ((*(int *)(iVar12 + iVar2 * 0x2c + 0x10) == 0x9) &&
                           (iVar2 = ReturnAttackSlot(param_1,iVar14), iVar2 != -0x1)) {
                            iVar15 = 0x2b;
                            iVar6 = 0x0;
                            piVar3 = param_2;
                            do {
                                if (piVar3[0xa] == 0x0) {
                                    param_2[iVar6 + 0xa] = iVar2 + 0x1;
                                    break;
                                }
                                piVar3 = piVar3 + 0x1;
                                iVar6 += 0x1;
                                iVar15 += -0x1;
                            } while (iVar15 != 0x0);
                            CheckSameAttack(param_1,param_2,iVar2,piVar1[0x5]);
                            if (piVar1[0x8] != 0x0) {
                                *(undefined4 *)(param_1 + 0x4aa0) = 0xffffffff;
                            }
                        }
                    }
                    if (((0x0 < iVar14) &&
                        (*(int *)(param_1 + (iVar14 + -0x1) * 0x318 + local_68 * 0x2c + 0x10) == 0x9
                        )) && (iVar2 = ReturnAttackSlot(param_1,iVar14 + -0x1), iVar2 != -0x1)) {
                        iVar15 = 0x2b;
                        iVar6 = 0x0;
                        piVar3 = param_2;
                        do {
                            if (piVar3[0xa] == 0x0) {
                                param_2[iVar6 + 0xa] = iVar2 + 0x1;
                                break;
                            }
                            piVar3 = piVar3 + 0x1;
                            iVar6 += 0x1;
                            iVar15 += -0x1;
                        } while (iVar15 != 0x0);
                        CheckSameAttack(param_1,param_2,iVar2,piVar1[0x5]);
                        if (piVar1[0x8] != 0x0) {
                            *(undefined4 *)(param_1 + 0x4aa0) = 0xffffffff;
                        }
                    }
                    goto LAB_000bba10;
                }
                if (local_68 == 0x0) {
                    iVar11 = 0x0;
                    goto LAB_000bb718;
                }
            }
        }
        iVar14 += -0x1;
        iVar12 += -0x318;
        if (iVar14 < 0x0) {
            if (local_5c == 0x0) {
                if (*param_2 < 0x2) {
                    *param_2 = 0x0;
                }
                if (param_2[0x3] != 0x0) {
                    param_2[0x3] = param_2[0x3] + -0x1;
                }
            }
            else if (*param_2 < 0x2) {
                *param_2 = 0x1;
            }
            if ((local_60 != 0x0) && (param_2[0x2] < local_58 + iVar7)) {
                param_2[0x2] = local_58 + iVar7;
            }
            if (local_60 != 0x0) {
                gOverflow += 0x3c;
            }
            return;
        }
    } while( true );
}



void UpdateCursor(undefined4 param_1,int *param_2)

{
    if ((*param_2 != 0x2) && (0x0 < param_2[0x2])) {
        param_2[0x2] = param_2[0x2] + -0x1;
    }
    if (gTheGame._120332_4_ == 0x2) {
        Update3DCursor();
    }
    return;
}



void UpdateIcon(void)

{
    if (gTheGame._120332_4_ == 0x1) {
        Update2DIcon();
    }
    else {
        Update3DIcon();
    }
    return;
}



void UpdateDistance(void)

{
    if (gTheGame._120332_4_ == 0x1) {
        Update2DDistance();
    }
    else {
        Update3DDistance();
    }
    return;
}



void UpdateMainState(void)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    int iVar3;
    undefined1 *puVar4;
    undefined1 *puVar5;
    undefined1 *puVar6;
    int iVar7;
    undefined1 *puVar8;
    int iVar9;
    int iVar10;
    undefined1 *puVar11;
    undefined4 *puVar12;
    int iVar13;
    uint uVar14;
    undefined4 local_84;
    undefined4 local_80;
    undefined4 local_7c;
    undefined4 local_78;
    undefined4 local_74 [0x4];
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54 [0x5];

    iVar9 = 0x0;
    if (gMain == 0x387) {
        puVar11 = gTheGame;
        puVar6 = puVar11;
        puVar8 = puVar11;
        for (iVar10 = 0x0; iVar10 < gTheGame._120328_4_; iVar10 += 0x1) {
            puVar12 = (undefined4 *)(puVar6 + 0x15f00);
            iVar3 = CheckGameOver(puVar8,puVar12);
            if ((gGameStatus & 0x80) != 0x0) {
                if (iVar3 != 0x0) {
                    gDemo = 0x16;
                }
                iVar3 = 0x0;
            }
            if (((iVar3 == 0x0) || (gSelection < 0x83)) || (0xc8 < gSelection)) {
                if (gSelection < 0xd2) {
LAB_000bc0c8:
                    if (gSelection == 0xbe) {
                        if ((gTheGame._120344_4_ < 0x1) && (gTheGame._120348_4_ == 0x0)) {
                            gMain = 0x38e;
                            *puVar12 = 0x7;
                        }
                    }
                    else if (gSelection < 0xbe) {
                        if (gSelection == 0xaa) {
                            if ((gTheGame._120360_4_ == 0x5) && (anim_sp < 0x1)) {
                                gMain = 0x38e;
                                *puVar12 = 0x7;
                            }
                            else {
LAB_000bc2fc:
                                iVar3 = *(int *)(puVar6 + 0x15f28);
                                if (iVar3 < 0x1) {
                                    if (iVar3 < 0x1) {
                                        iVar3 = -iVar3;
                                    }
                                    puVar5 = puVar8 + iVar3 * 0x318;
                                    iVar7 = -0x1;
                                    for (; iVar3 < 0xc; iVar3 += 0x1) {
                                        puVar4 = puVar5;
                                        iVar13 = gMax;
                                        if (0x0 < gMax) {
                                            do {
                                                if (*(int *)(puVar4 + 0x10) != 0x0) {
                                                    iVar7 = 0x0;
                                                }
                                                puVar4 = puVar4 + 0x2c;
                                                iVar13 += -0x1;
                                            } while (iVar13 != 0x0);
                                        }
                                        if (iVar7 == 0x0) break;
                                        puVar5 = puVar5 + 0x318;
                                    }
                                    if ((iVar7 != 0x0) &&
                                       (iVar3 = CheckFieldActive(puVar8), iVar3 == 0x0)) {
                                        gMain = 0x38e;
                                        *puVar12 = 0x7;
                                        if (gSelection == 0xb4) {
                                            if (iVar10 == 0x0) {
                                                gTheGame._90128_4_ = 0x8;
                                            }
                                            else {
                                                gTheGame._89856_4_ = 0x8;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else if (gSelection < 0xaa) {
                            if (((gSelection == 0x82) ||
                                ((gSelection < 0x82 && (gSelection == 0x78)))) &&
                               (iVar3 = CheckFieldActive(puVar8), iVar3 == 0x0)) {
                                if (*(int *)(puVar6 + 0x15f2c) == 0x0) {
                                    iVar3 = -0x1;
                                    iVar7 = 0x0;
                                    puVar5 = puVar8;
                                    do {
                                        puVar4 = puVar5;
                                        iVar13 = gMax;
                                        if (0x0 < gMax) {
                                            do {
                                                if (*(int *)(puVar4 + 0x10) != 0x0) {
                                                    iVar3 = 0x0;
                                                }
                                                puVar4 = puVar4 + 0x2c;
                                                iVar13 += -0x1;
                                            } while (iVar13 != 0x0);
                                        }
                                        if (iVar3 == 0x0) break;
                                        iVar7 += 0x1;
                                        puVar5 = puVar5 + 0x318;
                                    } while (iVar7 < 0xc);
                                    gMain = 0x38e;
                                    if (iVar3 == 0x0) {
                                        *puVar12 = 0x8;
                                    }
                                    else {
                                        *puVar12 = 0x7;
                                    }
                                }
                                else {
                                    iVar3 = 0x0;
                                    iVar7 = 0x0;
                                    puVar5 = puVar8;
                                    do {
                                        puVar4 = puVar5;
                                        iVar13 = gMax;
                                        if (0x0 < gMax) {
                                            do {
                                                if (*(int *)(puVar4 + 0x10) != 0x0) {
                                                    iVar3 += 0x1;
                                                }
                                                puVar4 = puVar4 + 0x2c;
                                                iVar13 += -0x1;
                                            } while (iVar13 != 0x0);
                                        }
                                        if (iVar3 != 0x0) break;
                                        iVar7 += 0x1;
                                        puVar5 = puVar5 + 0x318;
                                    } while (iVar7 < 0xc);
                                    if (iVar3 == 0x0) {
                                        gMain = 0x38e;
                                        *puVar12 = 0x7;
                                    }
                                }
                            }
                        }
                        else if (gSelection == 0xb4) goto LAB_000bc2fc;
                    }
                    else if (gSelection == 0xdc) {
                        iVar3 = *(int *)(puVar6 + 0x15f28);
                        if (iVar3 < 0x1) {
                            if (iVar3 < 0x1) {
                                iVar3 = -iVar3;
                            }
                            puVar5 = puVar8 + iVar3 * 0x318;
                            iVar7 = -0x1;
                            for (; iVar3 < 0xc; iVar3 += 0x1) {
                                puVar4 = puVar5;
                                iVar13 = gMax;
                                if (0x0 < gMax) {
                                    do {
                                        if (*(int *)(puVar4 + 0x10) != 0x0) {
                                            iVar7 = 0x0;
                                        }
                                        puVar4 = puVar4 + 0x2c;
                                        iVar13 += -0x1;
                                    } while (iVar13 != 0x0);
                                }
                                if (iVar7 == 0x0) break;
                                puVar5 = puVar5 + 0x318;
                            }
                            if ((iVar7 != 0x0) && (iVar3 = CheckFieldActive(puVar8), iVar3 == 0x0))
                            {
                                *puVar12 = 0x7;
                                *(undefined4 *)(puVar6 + 0x16000) = 0x2;
                                *(int *)(puVar6 + 0x16004) = gCounter;
                                gTheGame._137864_4_ += -0x1;
                                if (gTheGame._137864_4_ < 0x2) {
                                    gMain = 0x38e;
                                }
                                else {
                                    iVar9 = -0x1;
                                }
                            }
                        }
                    }
                    else if (gSelection < 0xdc) {
                        if (gSelection == 0xd2) {
                            if (*(int *)(puVar6 + 0x16000) == 0x4) {
                                *(int *)(puVar6 + 0x16004) = gCounter;
                                gTheGame._137864_4_ += -0x1;
                                if (gTheGame._137864_4_ < 0x2) {
                                    gMain = 0x38e;
                                }
                                else {
                                    iVar9 = -0x1;
                                }
                            }
                        }
                        else if (((gSelection < 0xd2) && (gSelection == 0xc8)) &&
                                ((gTheGame._120344_4_ < 0x1 && (gTheGame._120348_4_ == 0x0)))) {
                            gMain = 0x38e;
                            if (gTheGame._41548_4_ < gTheGame._19084_4_) {
                                gTheGame._89856_4_ = 0x7;
                                gTheGame._90128_4_ = 0x8;
                            }
                            else if (gTheGame._19084_4_ < gTheGame._41548_4_) {
                                gTheGame._89856_4_ = 0x8;
                                gTheGame._90128_4_ = 0x7;
                            }
                            else {
                                gTheGame._89856_4_ = 0x7;
                                gTheGame._90128_4_ = 0x7;
                            }
                        }
                    }
                    else if ((((gSelection == 0xe6) && (gTheGame._120344_4_ < 0x1)) &&
                             (gTheGame._120348_4_ == 0x0)) &&
                            (gTheGame._137864_4_ += -0x1, gTheGame._137864_4_ == 0x0)) {
                        gMain = 0x38e;
                    }
                }
                else if (0x2 < *(int *)(puVar6 + 0x16000)) {
                    if (gSelection == 0xd2) {
                        if ((gTheGame._90948_2_ & 0x2000) != 0x0) {
                            if ((iVar10 == 0x0) && ((gTheGame._90958_2_ & 0x8000) != 0x0)) {
                                iVar3 = -0x1;
                            }
                            else if ((iVar10 == 0x1) && ((gTheGame._90958_2_ & 0x4000) != 0x0)) {
                                iVar3 = -0x1;
                            }
                            else if ((iVar10 == 0x2) && ((gTheGame._90958_2_ & 0x1) != 0x0)) {
                                iVar3 = -0x1;
                            }
                            else if ((iVar10 == 0x3) && ((gTheGame._90958_2_ & 0x8) != 0x0)) {
                                iVar3 = -0x1;
                            }
                        }
                    }
                    else if ((gSelection == 0xe6) && ((gTheGame._90948_2_ & 0x2000) != 0x0)) {
                        gTheGame._120344_4_ = 0x0;
                        gTheGame._120348_4_ = 0x0;
                    }
                    if (gSelection == 0xd2) {
                        if ((iVar3 == 0x0) || (*(int *)(puVar6 + 0x16000) != 0x3)) {
                            if (*(int *)(puVar6 + 0x16000) == 0x4) goto LAB_000bc508;
                        }
                        else {
                            *(undefined4 *)(puVar6 + 0x16000) = 0x4;
                            pon_InitGameStateVarSpecifiedPlayer(iVar10);
                        }
                    }
                    if ((iVar3 == 0x0) || (gSelection < 0xdc)) goto LAB_000bc0c8;
                    *(undefined4 *)(puVar6 + 0x16000) = 0x4;
                    pon_InitGameStateVarSpecifiedPlayer(iVar10);
                    *(undefined4 *)(puVar6 + 0x16000) = 0x3;
                }
            }
            else {
                gMain = 0x38e;
                *puVar12 = 0x8;
            }
LAB_000bc508:
            puVar8 = puVar8 + 0x57c0;
            puVar6 = puVar6 + 0x110;
        }
        if (iVar9 != 0x0) {
            if (gSelection == 0xd2) {
                puVar6 = puVar11;
                puVar8 = puVar11;
                for (iVar9 = 0x0; iVar9 < gTheGame._120328_4_; iVar9 += 0x1) {
                    if ((*(int *)(puVar6 + 0x16000) == 0x4) && (*(int *)(puVar8 + 0x21a90) == 0x0))
                    {
                        *(int *)(puVar8 + 0x21a90) = gTheGame._137864_4_ + 0x9;
                        pon_Init2DRanking4pOnTheWay(iVar9);
                    }
                    puVar6 = puVar6 + 0x110;
                    puVar8 = puVar8 + 0x4;
                }
            }
            else if (gSelection == 0xdc) {
                puVar6 = puVar11;
                puVar8 = puVar11;
                for (iVar9 = 0x0; iVar9 < gTheGame._120328_4_; iVar9 += 0x1) {
                    if ((*(int *)(puVar6 + 0x16000) == 0x2) && (*(int *)(puVar8 + 0x21a90) == 0x0))
                    {
                        *(int *)(puVar8 + 0x21a90) =
                             ((gTheGame._120328_4_ - gTheGame._137868_4_) - gTheGame._137864_4_) +
                             0x8;
                        pon_Init2DRanking4pOnTheWay(iVar9);
                    }
                    puVar6 = puVar6 + 0x110;
                    puVar8 = puVar8 + 0x4;
                }
            }
        }
        if (gMain == 0x38e) {
            if ((0xd1 < gSelection) && (gTheGame._137864_4_ < 0x2)) {
                local_54[0] = 0x0;
                local_54[1] = 0x0;
                local_54[2] = 0x0;
                local_54[3] = 0x0;
                local_64 = 0x0;
                local_60 = 0x0;
                local_5c = 0x0;
                local_58 = 0x0;
                local_74[0] = 0x0;
                local_74[1] = 0x0;
                local_74[2] = 0x0;
                local_74[3] = 0x0;
                local_84 = 0x0;
                local_80 = 0x0;
                local_7c = 0x0;
                local_78 = 0x0;
                if (gSelection == 0xd2) {
                    if (gTheGame._137864_4_ != 0x0) {
                        iVar9 = gCounter + 0x1;
                        puVar6 = puVar11;
                        for (iVar10 = 0x0; iVar10 < gTheGame._120328_4_; iVar10 += 0x1) {
                            if (*(int *)(puVar6 + 0x16000) == 0x3) {
                                *(undefined4 *)(puVar6 + 0x16000) = 0x0;
                                *(int *)(puVar6 + 0x16004) = iVar9;
                            }
                            else if (*(int *)(puVar6 + 0x16000) == 0x4) {
                                *(undefined4 *)(puVar6 + 0x16000) = 0x0;
                            }
                            puVar6 = puVar6 + 0x110;
                        }
                    }
                    iVar9 = 0x0;
                    if (0x0 < gTheGame._120328_4_) {
                        if (0x8 < gTheGame._120328_4_) {
                            uVar14 = gTheGame._120328_4_ - 0x1U >> 0x3;
                            puVar12 = local_54;
                            if (0x0 < gTheGame._120328_4_ + -0x8) {
                                do {
                                    iVar9 += 0x8;
                                    *puVar12 = *(undefined4 *)(puVar11 + 0x16004);
                                    puVar12[0x1] = *(undefined4 *)(puVar11 + 0x16114);
                                    puVar12[0x2] = *(undefined4 *)(puVar11 + 0x16224);
                                    puVar12[0x3] = *(undefined4 *)(puVar11 + 0x16334);
                                    puVar12[0x4] = *(undefined4 *)(puVar11 + 0x16444);
                                    puVar12[0x5] = *(undefined4 *)(puVar11 + 0x16554);
                                    puVar12[0x6] = *(undefined4 *)(puVar11 + 0x16664);
                                    puVar12[0x7] = *(undefined4 *)(puVar11 + 0x16774);
                                    puVar12 = puVar12 + 0x8;
                                    uVar14 -= 0x1;
                                    puVar11 = puVar11 + 0x880;
                                } while (uVar14 != 0x0);
                            }
                        }
                        puVar11 = gTheGame + iVar9 * 0x110;
                        puVar12 = local_54 + iVar9;
                        iVar10 = gTheGame._120328_4_ - iVar9;
                        if (iVar9 < gTheGame._120328_4_) {
                            do {
                                puVar1 = (undefined4 *)(puVar11 + 0x16004);
                                puVar11 = puVar11 + 0x110;
                                *puVar12 = *puVar1;
                                puVar12 = puVar12 + 0x1;
                                iVar10 += -0x1;
                            } while (iVar10 != 0x0);
                        }
                    }
                    pon_MaxSort(local_54,&local_64,gTheGame._120328_4_,0x4);
                    pon_SetRanking4p(&local_64);
                    iVar9 = 0x0;
                    if (0x0 < gTheGame._120328_4_) {
                        if ((0x8 < gTheGame._120328_4_) &&
                           (uVar14 = gTheGame._120328_4_ - 0x1U >> 0x3,
                           0x0 < gTheGame._120328_4_ + -0x8)) {
                            do {
                                iVar9 += 0x8;
                                uVar14 -= 0x1;
                            } while (uVar14 != 0x0);
                        }
                        iVar10 = gTheGame._120328_4_ - iVar9;
                        if (iVar9 < gTheGame._120328_4_) {
                            do {
                                iVar10 += -0x1;
                            } while (iVar10 != 0x0);
                        }
                    }
                }
                else if (gSelection == 0xdc) {
                    if ((gTheGame._137864_4_ != 0x0) &&
                       (iVar10 = 0x0, puVar6 = puVar11, iVar9 = gTheGame._120328_4_,
                       0x0 < gTheGame._120328_4_)) {
                        do {
                            if (*(int *)(puVar6 + 0x16000) == 0x3) {
                                iVar10 *= 0x110;
                                *(undefined4 *)(gTheGame + iVar10 + 0x15f00) = 0x8;
                                *(undefined4 *)(gTheGame + iVar10 + 0x16000) = 0x2;
                                *(int *)(gTheGame + iVar10 + 0x16004) = gCounter + 0x1;
                                break;
                            }
                            puVar6 = puVar6 + 0x110;
                            iVar10 += 0x1;
                            iVar9 += -0x1;
                        } while (iVar9 != 0x0);
                    }
                    iVar9 = 0x0;
                    if (0x0 < gTheGame._120328_4_) {
                        if (0x8 < gTheGame._120328_4_) {
                            uVar14 = gTheGame._120328_4_ - 0x1U >> 0x3;
                            puVar12 = local_54;
                            if (0x0 < gTheGame._120328_4_ + -0x8) {
                                do {
                                    iVar9 += 0x8;
                                    *puVar12 = *(undefined4 *)(puVar11 + 0x16004);
                                    puVar12[0x1] = *(undefined4 *)(puVar11 + 0x16114);
                                    puVar12[0x2] = *(undefined4 *)(puVar11 + 0x16224);
                                    puVar12[0x3] = *(undefined4 *)(puVar11 + 0x16334);
                                    puVar12[0x4] = *(undefined4 *)(puVar11 + 0x16444);
                                    puVar12[0x5] = *(undefined4 *)(puVar11 + 0x16554);
                                    puVar12[0x6] = *(undefined4 *)(puVar11 + 0x16664);
                                    puVar12[0x7] = *(undefined4 *)(puVar11 + 0x16774);
                                    puVar12 = puVar12 + 0x8;
                                    uVar14 -= 0x1;
                                    puVar11 = puVar11 + 0x880;
                                } while (uVar14 != 0x0);
                            }
                        }
                        puVar11 = gTheGame + iVar9 * 0x110;
                        puVar12 = local_54 + iVar9;
                        iVar10 = gTheGame._120328_4_ - iVar9;
                        if (iVar9 < gTheGame._120328_4_) {
                            do {
                                puVar1 = (undefined4 *)(puVar11 + 0x16004);
                                puVar11 = puVar11 + 0x110;
                                *puVar12 = *puVar1;
                                puVar12 = puVar12 + 0x1;
                                iVar10 += -0x1;
                            } while (iVar10 != 0x0);
                        }
                    }
                    pon_MinSort(local_54,&local_64,gTheGame._120328_4_,0x4);
                    pon_SetRanking4p(&local_64);
                    iVar9 = 0x0;
                    if (0x0 < gTheGame._120328_4_) {
                        if ((0x8 < gTheGame._120328_4_) &&
                           (uVar14 = gTheGame._120328_4_ - 0x1U >> 0x3,
                           0x0 < gTheGame._120328_4_ + -0x8)) {
                            do {
                                iVar9 += 0x8;
                                uVar14 -= 0x1;
                            } while (uVar14 != 0x0);
                        }
                        iVar10 = gTheGame._120328_4_ - iVar9;
                        if (iVar9 < gTheGame._120328_4_) {
                            do {
                                iVar10 += -0x1;
                            } while (iVar10 != 0x0);
                        }
                    }
                }
                else if (gSelection == 0xe6) {
                    puVar12 = local_74;
                    puVar6 = puVar11;
                    for (iVar9 = 0x0; iVar9 < gTheGame._120328_4_; iVar9 += 0x1) {
                        puVar1 = (undefined4 *)(puVar11 + 0x4a8c);
                        puVar11 = puVar11 + 0x57c0;
                        *puVar12 = *puVar1;
                        uVar2 = *puVar12;
                        puVar12 = puVar12 + 0x1;
                        *(undefined4 *)(puVar6 + 0x16004) = uVar2;
                        puVar6 = puVar6 + 0x110;
                    }
                    pon_MaxSort(local_74,&local_84,gTheGame._120328_4_,0x4);
                    pon_SetRanking4p(&local_84);
                    iVar9 = 0x0;
                    if (0x0 < gTheGame._120328_4_) {
                        if ((0x8 < gTheGame._120328_4_) &&
                           (uVar14 = gTheGame._120328_4_ - 0x1U >> 0x3,
                           0x0 < gTheGame._120328_4_ + -0x8)) {
                            do {
                                iVar9 += 0x8;
                                uVar14 -= 0x1;
                            } while (uVar14 != 0x0);
                        }
                        iVar10 = gTheGame._120328_4_ - iVar9;
                        if (iVar9 < gTheGame._120328_4_) {
                            do {
                                iVar10 += -0x1;
                            } while (iVar10 != 0x0);
                        }
                    }
                }
            }
            gTheGame._89868_4_ = 0x0;
            gTheGame._90140_4_ = 0x0;
            gTheGame._90412_4_ = 0x0;
            gTheGame._90684_4_ = 0x0;
            gMain = 0x387;
            UpdateComboChainCount(0x0,0x0,-gTheGame._19080_4_);
            UpdateComboChainCount(0x1,0x0,-gTheGame._41544_4_);
            UpdateComboChainCount(0x2,0x0,-gTheGame._64008_4_);
            UpdateComboChainCount(0x3,0x0,-gTheGame._86472_4_);
            gMain = 0x38e;
            if ((gTheGame._120328_4_ == 0x1) && (0x82 < gSelection)) {
                gTheGame._120064_4_ = 0x0;
            }
            CheckChainCounter(gTheGame,0x2b6d48);
            UpdateAnimation(gTheGame,0x0,0x0);
            CheckChainCounter(0x2a6608,0x2b6e58);
            UpdateAnimation(0x2a6608,0x1,0x0);
            CheckChainCounter(0x2abdc8,0x2b6f68);
            UpdateAnimation(0x2abdc8,0x2,0x0);
            CheckChainCounter(0x2b1588,0x2b7078);
            UpdateAnimation(0x2b1588,0x3,0x0);
        }
    }
    return;
}



void UpdateBuffer(void)

{
    if (gTheGame._120332_4_ == 0x1) {
        Update2DBuffer();
    }
    else {
        Update3DBuffer();
    }
    return;
}



void Update2DBuffer(int param_1)

{
    char cVar1;
    undefined1 *puVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    undefined1 *__src;
    int iVar16;

    puVar2 = gTheGame;
    *(undefined4 *)(param_1 + 0x1c460) = gOverflow;
    iVar5 = param_1;
    iVar6 = param_1;
    iVar7 = param_1;
    iVar8 = param_1;
    iVar9 = param_1;
    iVar10 = param_1;
    iVar11 = param_1;
    iVar12 = param_1;
    iVar13 = param_1;
    iVar14 = param_1;
    iVar15 = param_1;
    __src = puVar2;
    for (iVar4 = 0x0; iVar4 < gTheGame._120328_4_; iVar4 += 0x1) {
        bcopy(puVar2 + 0x15f00,(void *)(iVar15 + 0x2c0a8),0x110);
        bcopy(__src,(void *)(iVar14 + 0x1c464),0x2520);
        bzero((void *)(iVar13 + 0x1c410),0x4);
        iVar16 = 0xc;
        iVar3 = iVar12 + 0x1c464;
        do {
            cVar1 = TetrisBlockFrame[*(int *)(iVar3 + 0x24)];
            *(int *)(iVar3 + 0x24) = (int)cVar1;
            *(undefined *)(iVar11 + cVar1 + 0x1c410) = 0x1;
            cVar1 = TetrisBlockFrame[*(int *)(iVar3 + 0x50)];
            *(int *)(iVar3 + 0x50) = (int)cVar1;
            *(undefined *)(iVar11 + cVar1 + 0x1c410) = 0x1;
            cVar1 = TetrisBlockFrame[*(int *)(iVar3 + 0x7c)];
            *(int *)(iVar3 + 0x7c) = (int)cVar1;
            *(undefined *)(iVar11 + cVar1 + 0x1c410) = 0x1;
            cVar1 = TetrisBlockFrame[*(int *)(iVar3 + 0xa8)];
            *(int *)(iVar3 + 0xa8) = (int)cVar1;
            *(undefined *)(iVar11 + cVar1 + 0x1c410) = 0x1;
            cVar1 = TetrisBlockFrame[*(int *)(iVar3 + 0xd4)];
            *(int *)(iVar3 + 0xd4) = (int)cVar1;
            *(undefined *)(iVar11 + cVar1 + 0x1c410) = 0x1;
            cVar1 = TetrisBlockFrame[*(int *)(iVar3 + 0x100)];
            *(int *)(iVar3 + 0x100) = (int)cVar1;
            *(undefined *)(iVar11 + cVar1 + 0x1c410) = 0x1;
            iVar3 += 0x318;
            iVar16 += -0x1;
        } while (iVar16 != 0x0);
        bcopy(__src + 0x3f10,(void *)(iVar10 + 0x2c4e8),0x6c0);
        bcopy(__src + 0x45d0,(void *)(iVar9 + 0x2dfe8),0x90);
        if (*(int *)(puVar2 + 0x15f1c) != -0x1) {
            bcopy(__src + 0x4660,(void *)(iVar8 + 0x2e228),0x18);
            bcopy(__src + 0x4678,(void *)(iVar8 + 0x2e288),0x18);
        }
        bcopy(__src + 0x31a0,(void *)(iVar7 + 0x28ae8),0x410);
        bcopy(__src + 0x2520,(void *)(iVar6 + 0x258e8),0xc80);
        bcopy(__src + 0x35b0,(void *)(iVar5 + 0x29b28),0x960);
        __src = __src + 0x57c0;
        puVar2 = puVar2 + 0x110;
        iVar15 += 0x110;
        iVar14 += 0x2520;
        iVar13 += 0xa;
        iVar12 += 0x2520;
        iVar11 += 0xa;
        iVar10 += 0x6c0;
        iVar9 += 0x90;
        iVar8 += 0x18;
        iVar7 += 0x410;
        iVar6 += 0xc80;
        iVar5 += 0x960;
    }
    bcopy(gTheGame + 0x16380,(void *)(param_1 + 0x2e848),0x2a80);
    bcopy(gTheGame + 0x1c968,(void *)(param_1 + 0x312c8),0x8c0);
    return;
}



void Update3DBuffer(int param_1)

{
    bool bVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    undefined1 *__src;
    int iVar17;
    int iVar18;
    undefined1 *local_80;

    __src = gTheGame;
    local_80 = gTheGame;
    iVar7 = param_1;
    iVar8 = param_1;
    iVar9 = param_1;
    iVar10 = param_1;
    iVar11 = param_1;
    iVar12 = param_1;
    iVar13 = param_1;
    iVar14 = param_1;
    iVar16 = param_1;
    iVar17 = param_1;
    for (iVar15 = 0x0; iVar15 < gTheGame._120328_4_; iVar15 += 0x1) {
        bcopy(local_80 + 0x15f00,(void *)(iVar7 + 0x2c0a8),0x110);
        bcopy(__src,(void *)(iVar8 + 0x1c464),0x2520);
        bzero((void *)(iVar14 + 0x1c410),0x4);
        bzero((void *)(iVar14 + 0x1c438),0x4);
        iVar5 = 0x0;
        iVar4 = iVar9 + 0x1c464;
        do {
            cVar2 = TetrisBlockFrame[*(int *)(iVar4 + 0x50)];
            iVar6 = 0x9;
            *(int *)(iVar4 + 0x50) = (int)cVar2;
            *(undefined *)(iVar17 + cVar2 + 0x1c410) = 0x1;
            cVar2 = TetrisBlockFrame[*(int *)(iVar4 + 0x7c)];
            *(int *)(iVar4 + 0x7c) = (int)cVar2;
            *(undefined *)(iVar17 + cVar2 + 0x1c410) = 0x1;
            cVar2 = TetrisBlockFrame[*(int *)(iVar4 + 0xa8)];
            *(int *)(iVar4 + 0xa8) = (int)cVar2;
            *(undefined *)(iVar17 + cVar2 + 0x1c410) = 0x1;
            cVar2 = TetrisBlockFrame[*(int *)(iVar4 + 0xd4)];
            *(int *)(iVar4 + 0xd4) = (int)cVar2;
            *(undefined *)(iVar17 + cVar2 + 0x1c410) = 0x1;
            cVar2 = TetrisBlockFrame[*(int *)(iVar4 + 0x100)];
            *(int *)(iVar4 + 0x100) = (int)cVar2;
            *(undefined *)(iVar17 + cVar2 + 0x1c410) = 0x1;
            cVar2 = TetrisBlockFrame[*(int *)(iVar4 + 0x12c)];
            *(int *)(iVar4 + 0x12c) = (int)cVar2;
            *(undefined *)(iVar17 + cVar2 + 0x1c410) = 0x1;
            cVar2 = TetrisBlockFrame[*(int *)(iVar4 + 0x158)];
            *(int *)(iVar4 + 0x158) = (int)cVar2;
            *(undefined *)(iVar17 + cVar2 + 0x1c410) = 0x1;
            cVar2 = TetrisBlockFrame[*(int *)(iVar4 + 0x184)];
            *(int *)(iVar4 + 0x184) = (int)cVar2;
            *(undefined *)(iVar17 + cVar2 + 0x1c410) = 0x1;
            if (true) {
                iVar18 = 0x1;
                iVar3 = iVar4 + 0x18c;
                if (true) {
                    do {
                        iVar6 += 0x8;
                        cVar2 = TetrisBlockFrame[*(int *)(iVar3 + 0x24)];
                        *(int *)(iVar3 + 0x24) = (int)cVar2;
                        *(undefined *)(iVar17 + cVar2 + 0x1c438) = 0x1;
                        cVar2 = TetrisBlockFrame[*(int *)(iVar3 + 0x50)];
                        *(int *)(iVar3 + 0x50) = (int)cVar2;
                        *(undefined *)(iVar17 + cVar2 + 0x1c438) = 0x1;
                        cVar2 = TetrisBlockFrame[*(int *)(iVar3 + 0x7c)];
                        *(int *)(iVar3 + 0x7c) = (int)cVar2;
                        *(undefined *)(iVar17 + cVar2 + 0x1c438) = 0x1;
                        cVar2 = TetrisBlockFrame[*(int *)(iVar3 + 0xa8)];
                        *(int *)(iVar3 + 0xa8) = (int)cVar2;
                        *(undefined *)(iVar17 + cVar2 + 0x1c438) = 0x1;
                        cVar2 = TetrisBlockFrame[*(int *)(iVar3 + 0xd4)];
                        *(int *)(iVar3 + 0xd4) = (int)cVar2;
                        *(undefined *)(iVar17 + cVar2 + 0x1c438) = 0x1;
                        cVar2 = TetrisBlockFrame[*(int *)(iVar3 + 0x100)];
                        *(int *)(iVar3 + 0x100) = (int)cVar2;
                        *(undefined *)(iVar17 + cVar2 + 0x1c438) = 0x1;
                        cVar2 = TetrisBlockFrame[*(int *)(iVar3 + 0x12c)];
                        *(int *)(iVar3 + 0x12c) = (int)cVar2;
                        *(undefined *)(iVar17 + cVar2 + 0x1c438) = 0x1;
                        cVar2 = TetrisBlockFrame[*(int *)(iVar3 + 0x158)];
                        *(int *)(iVar3 + 0x158) = (int)cVar2;
                        *(undefined *)(iVar17 + cVar2 + 0x1c438) = 0x1;
                        iVar3 += 0x160;
                        iVar18 += -0x1;
                    } while (iVar18 != 0x0);
                }
            }
            iVar3 = iVar4 + iVar6 * 0x2c;
            iVar18 = 0x12 - iVar6;
            if (iVar6 < 0x12) {
                do {
                    cVar2 = TetrisBlockFrame[*(int *)(iVar3 + 0x24)];
                    *(int *)(iVar3 + 0x24) = (int)cVar2;
                    *(undefined *)(iVar17 + cVar2 + 0x1c438) = 0x1;
                    iVar3 += 0x2c;
                    iVar18 += -0x1;
                } while (iVar18 != 0x0);
            }
            iVar5 += 0x1;
            cVar2 = TetrisBlockFrame[*(int *)(iVar4 + 0x24)];
            *(int *)(iVar4 + 0x24) = (int)cVar2;
            *(undefined *)(iVar17 + cVar2 + 0x1c438) = 0x1;
            iVar4 += 0x318;
        } while (iVar5 < 0xc);
        bcopy(__src + 0x31a0,(void *)(iVar10 + 0x28ae8),0x410);
        bcopy(__src + 0x2520,(void *)(iVar11 + 0x258e8),0xc80);
        bcopy(__src + 0x35b0,(void *)(iVar12 + 0x29b28),0x960);
        bcopy(__src + 0x4690,(void *)(iVar13 + 0x2e2e8),0xd8);
        if (gSelection == 0x64) {
            gTransMtx._48_4_ = 0xbf028f5c;
        }
        else if (gTheGame._120328_4_ == 0x1) {
            gTransMtx._48_4_ = 0x3d75c28f;
        }
        else if (gTheGame._120328_4_ == 0x2) {
            if (iVar15 == 0x0) {
                gTransMtx._48_4_ = 0xbf028f5c;
            }
            else {
                gTransMtx._48_4_ = 0x3f028f5c;
            }
        }
        gTransMtx._52_4_ = *(float *)(__src + 0x4768) + 0.01;
        guMtxF2L(gTransMtx,iVar16 + 0x1c200);
        iVar4 = *(int *)(local_80 + 0x15f18);
        bVar1 = iVar4 < 0x1;
        if (bVar1) {
            if (iVar4 < 0x0) {
                if (bVar1) {
                    iVar4 = -iVar4;
                }
                gRotateYMtx._40_4_ = *(undefined4 *)(rotate_cos + iVar4 * 0x4);
                gRotateYMtx._8_4_ = *(float *)(rotate_sin + iVar4 * 0x4);
                gRotateYMtx._32_4_ = -gRotateYMtx._8_4_;
            }
            else {
                gRotateYMtx._32_4_ = 0.0;
                gRotateYMtx._8_4_ = 0.0;
                gRotateYMtx._40_4_ = 0x3f800000;
            }
        }
        else {
            if (bVar1) {
                iVar4 = -iVar4;
            }
            gRotateYMtx._40_4_ = *(undefined4 *)(rotate_cos + iVar4 * 0x4);
            gRotateYMtx._32_4_ = *(float *)(rotate_sin + iVar4 * 0x4);
            gRotateYMtx._8_4_ = -gRotateYMtx._32_4_;
        }
        gRotateYMtx._0_4_ = gRotateYMtx._40_4_;
        guMtxF2L(gRotateYMtx,iVar16 + 0x1c300);
        if (*(int *)(local_80 + 0x15f1c) != -0x1) {
            iVar4 = (0x3 - *(int *)(local_80 + 0x15f04)) * 0x4;
            gRotateYMtx._0_4_ = *(undefined4 *)(switch_cos + iVar4);
            gRotateYMtx._32_4_ = *(float *)(switch_sin + iVar4);
            gRotateYMtx._8_4_ = -gRotateYMtx._32_4_;
            gRotateYMtx._40_4_ = gRotateYMtx._0_4_;
            guMtxF2L(gRotateYMtx,iVar16 + 0x2e648);
            iVar4 = (*(int *)(local_80 + 0x15f04) + -0x1) * 0x4;
            gRotateYMtx._0_4_ = *(undefined4 *)(switch_cos + iVar4);
            gRotateYMtx._32_4_ = *(float *)(switch_sin + iVar4);
            gRotateYMtx._8_4_ = -gRotateYMtx._32_4_;
            gRotateYMtx._40_4_ = gRotateYMtx._0_4_;
            guMtxF2L(gRotateYMtx,iVar16 + 0x2e748);
        }
        __src = __src + 0x57c0;
        iVar7 += 0x110;
        local_80 = local_80 + 0x110;
        iVar8 += 0x2520;
        iVar14 += 0xa;
        iVar9 += 0x2520;
        iVar17 += 0xa;
        iVar10 += 0x410;
        iVar11 += 0xc80;
        iVar12 += 0x960;
        iVar13 += 0xd8;
        iVar16 += 0x40;
    }
    bcopy(gTheGame + 0x1c968,(void *)(param_1 + 0x312c8),0x8c0);
    return;
}



void pon_Draw2DRanking4pOnTheWay(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    undefined1 *puVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    int iVar7;
    undefined1 *puVar8;
    undefined1 *puVar9;

    puVar8 = gTheGame;
    puVar6 = &alphaB;
    puVar3 = gTheGame;
    puVar4 = &alphaG;
    puVar9 = gTheGame;
    puVar5 = &alphaR;
    for (iVar7 = 0x0; iVar7 < gTheGame._120328_4_; iVar7 += 0x1) {
        if (*(int *)(puVar8 + 0x21a90) != 0x0) {
            pon_Animate2DRanking4p
                      (puVar3,puVar9 + 0x21aa0,puVar9 + 0x21b40,*(int *)(puVar8 + 0x21a90),
                       0xffffffff);
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe3001001;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe3000a01;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xfc11fe23;
            glistp = puVar2;
            puVar1[0x1] = 0xfffff3f9;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe200001c;
            glistp = puVar2;
            puVar1[0x1] = 0x504240;
            puVar1 = glistp;
            if (*(short *)(puVar9 + 0x21b4c) != 0x0) {
                puVar2 = glistp + 0x2;
                *glistp = 0xfa000000;
                glistp = puVar2;
                puVar1[0x1] = (uint)*(byte *)puVar6 << 0x8 |
                              (uint)*(byte *)puVar5 << 0x18 | (uint)*(byte *)puVar4 << 0x10 | 0xff;
                pon_gSPBgRect1Cyc(&glistp,puVar9 + 0x21b40);
            }
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
            pon_gSPObjLoadTxtr(&glistp,0x2c2a28);
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xfcffffff;
            glistp = puVar2;
            puVar1[0x1] = 0xfffcf279;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe200001c;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe3000a01;
            glistp = puVar2;
            puVar1[0x1] = 0x200000;
            puVar1 = glistp;
            puVar2 = glistp + 0x2;
            *glistp = 0xe7000000;
            glistp = puVar2;
            puVar1[0x1] = 0x0;
            if (*(int *)(puVar9 + 0x21ab0) != 0x0) {
                pon_gSPBgRectCopy(&glistp,puVar9 + 0x21aa0);
            }
        }
        puVar1 = glistp;
        puVar8 = puVar8 + 0x4;
        puVar9 = puVar9 + 0x28;
        puVar3 = puVar3 + 0x57c0;
        puVar2 = glistp + 0x2;
        *glistp = 0xe7000000;
        glistp = puVar2;
        puVar4 = (undefined4 *)((int)puVar4 + 0x1);
        puVar5 = (undefined4 *)((int)puVar5 + 0x1);
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar6 = (undefined4 *)((int)puVar6 + 0x1);
        puVar2 = glistp + 0x2;
        *glistp = 0xe3001001;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
        puVar1 = glistp;
        puVar2 = glistp + 0x2;
        *glistp = 0xe3000a01;
        glistp = puVar2;
        puVar1[0x1] = 0x0;
    }
    return;
}



void pon_Init2DRanking4pOnTheWay(int param_1)

{
    undefined2 uVar1;
    int iVar2;
    undefined1 *puVar3;
    undefined1 *puVar4;
    undefined1 *puVar5;
    int local_3c [0x5];

    puVar3 = NULL;
    puVar5 = NULL;
    puVar4 = NULL;
    local_3c[0] = 0x1c;
    local_3c[1] = 0x60;
    local_3c[2] = 0xa4;
    local_3c[3] = 0xe8;
    iVar2 = *(int *)(gTheGame + param_1 * 0x4 + 0x21a90);
    if (iVar2 == 0xb) {
        puVar3 = tex_ranking_3rd;
        puVar5 = tex_ranking_3rd_S;
        puVar4 = tlu_ranking;
    }
    else if (iVar2 < 0xb) {
        if (iVar2 == 0x9) {
            puVar3 = tex_ranking_1st;
            puVar5 = tex_ranking_1st_S;
            puVar4 = tlu_ranking;
        }
        else if (0x8 < iVar2) {
            puVar3 = tex_ranking_2nd;
            puVar5 = tex_ranking_2nd_S;
            puVar4 = tlu_ranking;
        }
    }
    else if (iVar2 < 0xd) {
        puVar3 = tex_ranking_4th;
        puVar5 = tex_ranking_4th_S;
        puVar4 = tlu_ranking;
    }
    iVar2 = param_1 * 0x28;
    *(undefined2 *)(gTheGame + iVar2 + 0x21aa0) = 0x0;
    *(undefined2 *)(gTheGame + iVar2 + 0x21aa2) = 0xf0;
    *(undefined2 *)(gTheGame + iVar2 + 0x21aa6) = 0xf0;
    *(undefined2 *)(gTheGame + iVar2 + 0x21aa8) = 0x0;
    *(undefined2 *)(gTheGame + iVar2 + 0x21ab4) = 0xfff4;
    gTheGame[iVar2 + 0x21ab6] = 0x2;
    gTheGame[iVar2 + 0x21ab7] = 0x1;
    *(undefined2 *)(gTheGame + iVar2 + 0x21ab8) = 0x0;
    *(undefined2 *)(gTheGame + iVar2 + 0x21aba) = 0x0;
    *(undefined2 *)(gTheGame + iVar2 + 0x21aaa) = 0xa0;
    *(undefined2 *)(gTheGame + iVar2 + 0x21aae) = 0xa0;
    uVar1 = (undefined2)(local_3c[param_1] << 0x2);
    *(undefined2 *)(gTheGame + iVar2 + 0x21aa4) = uVar1;
    *(undefined2 *)(gTheGame + iVar2 + 0x21aac) = 0x1a4;
    *(undefined1 **)(gTheGame + iVar2 + 0x21ab0) = puVar3;
    pon_guS2DInitBg();
    gTheGame._138208_4_ = 0x30;
    gTheGame._138216_2_ = 0x100;
    gTheGame._138218_2_ = 0xff;
    gTheGame._138220_2_ = 0x0;
    gTheGame._138222_2_ = 0x0;
    gTheGame._138224_4_ = 0xffffffff;
    gTheGame._138228_4_ = 0x0;
    gTheGame._138212_4_ = puVar4;
    *(undefined2 *)(gTheGame + iVar2 + 0x21b40) = 0x0;
    *(undefined2 *)(gTheGame + iVar2 + 0x21b42) = 0xf4;
    *(undefined2 *)(gTheGame + iVar2 + 0x21b46) = 0xf4;
    *(undefined2 *)(gTheGame + iVar2 + 0x21b48) = 0x0;
    *(undefined2 *)(gTheGame + iVar2 + 0x21b54) = 0xfff4;
    gTheGame[iVar2 + 0x21b56] = 0x4;
    gTheGame[iVar2 + 0x21b57] = 0x0;
    *(undefined2 *)(gTheGame + iVar2 + 0x21b58) = 0x0;
    *(undefined2 *)(gTheGame + iVar2 + 0x21b5a) = 0x0;
    *(undefined2 *)(gTheGame + iVar2 + 0x21b4a) = 0xa0;
    *(undefined2 *)(gTheGame + iVar2 + 0x21b4e) = 0xa0;
    *(undefined2 *)(gTheGame + iVar2 + 0x21b44) = uVar1;
    *(undefined2 *)(gTheGame + iVar2 + 0x21b4c) = 0x1a4;
    *(undefined1 **)(gTheGame + iVar2 + 0x21b50) = puVar5;
    *(undefined4 *)(gTheGame + iVar2 + 0x21b60) = 0x0;
    *(undefined2 *)(gTheGame + iVar2 + 0x21b5c) = 0x400;
    *(undefined2 *)(gTheGame + iVar2 + 0x21b5e) = 0x400;
    *(undefined4 *)(gTheGame + param_1 * 0x57c0 + 0x57b0) = 0x0;
    *(undefined4 *)(gTheGame + param_1 * 0x57c0 + 0x57b4) = 0x0;
    return;
}
