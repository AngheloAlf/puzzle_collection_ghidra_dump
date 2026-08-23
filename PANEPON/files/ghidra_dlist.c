

void InitCursor(undefined4 *param_1)

{
    int iVar1;
    undefined4 *puVar2;
    
    *param_1 = 0x0;
    param_1[0x1] = 0x0;
    param_1[0x2] = 0x0;
    param_1[0x3] = 0x0;
    param_1[0x8] = 0x0;
    param_1[0x9] = 0xf;
    if ((gTheGame._120332_4_ == 0x2) || (gSelection < 0x8c)) {
        param_1[0x4] = 0x2;
        param_1[0x5] = 0x3;
    }
    else if (param_1[0x40] == 0x4) {
        param_1[0x5] = 0x5;
        param_1[0x4] = 0x2;
    }
    else {
        param_1[0x5] = 0xc;
        param_1[0x4] = 0x4;
    }
    param_1[0x6] = 0xffffffff;
    param_1[0x7] = 0xffffffff;
    if (gSelection == 0x78) {
        return;
    }
    if (gSelection == 0x82) {
        return;
    }
    if (gSelection == 0xaa) {
        return;
    }
    if (gSelection == 0xb4) {
        return;
    }
    if (gSelection == 0xdc) {
        return;
    }
    param_1[0xa] = 0x0;
    param_1[0xb] = 0x0;
    param_1[0xc] = 0x0;
    param_1[0xd] = 0x0;
    param_1[0xe] = 0x0;
    param_1[0xf] = 0x0;
    param_1[0x10] = 0x0;
    param_1[0x11] = 0x0;
    param_1[0x12] = 0x0;
    param_1[0x13] = 0x0;
    param_1[0x14] = 0x0;
    param_1[0x15] = 0x0;
    param_1[0x16] = 0x0;
    param_1[0x17] = 0x0;
    param_1[0x18] = 0x0;
    param_1[0x19] = 0x0;
    param_1[0x1a] = 0x0;
    param_1[0x1b] = 0x0;
    param_1[0x1c] = 0x0;
    param_1[0x1d] = 0x0;
    param_1[0x1e] = 0x0;
    param_1[0x1f] = 0x0;
    param_1[0x20] = 0x0;
    param_1[0x21] = 0x0;
    param_1[0x22] = 0x0;
    param_1[0x23] = 0x0;
    param_1[0x24] = 0x0;
    param_1[0x25] = 0x0;
    param_1[0x26] = 0x0;
    param_1[0x27] = 0x0;
    param_1[0x28] = 0x0;
    param_1[0x29] = 0x0;
    param_1[0x2a] = 0x0;
    param_1[0x2b] = 0x0;
    param_1[0x2c] = 0x0;
    param_1[0x2d] = 0x0;
    param_1[0x2e] = 0x0;
    param_1[0x2f] = 0x0;
    param_1[0x30] = 0x0;
    param_1[0x31] = 0x0;
    puVar2 = param_1 + 0x28;
    iVar1 = 0x3;
    if (true) {
        do {
            puVar2[0xa] = 0x0;
            puVar2 = puVar2 + 0x1;
            iVar1 += -0x1;
        } while (iVar1 != 0x0);
    }
    param_1[0x35] = 0x0;
    param_1[0x36] = 0x0;
    param_1[0x37] = 0x0;
    param_1[0x38] = 0x0;
    param_1[0x39] = 0x0;
    return;
}



void InitGamePad(int param_1)

{
    param_1 *= 0x10;
    *(undefined4 *)(gTheGame + param_1 + 0x16348) = 0xa;
    *(undefined2 *)(gTheGame + param_1 + 0x16344) = 0x0;
    *(undefined2 *)(gTheGame + param_1 + 0x16346) = 0x0;
    *(undefined2 *)(gTheGame + param_1 + 0x1634e) = 0x0;
    return;
}



void InitTetrisState(undefined4 *param_1)

{
    *param_1 = 0x0;
    param_1[0x1] = 0x0;
    param_1[0x2] = 0x0;
    param_1[0x3] = 0x0;
    param_1[0x4] = 0x0;
    param_1[0x9] = 0x0;
    param_1[0x5] = 0x0;
    param_1[0x8] = 0x0;
    return;
}



void InitDisplayList(int param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xde000000;
    glistp = puVar2;
    puVar1[0x1] = initRDP_dl;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xff10013f;
    glistp = puVar2;
    puVar1[0x1] = *(undefined4 *)(param_1 + 0x31b8c);
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3000a01;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    if (gTheGame._120332_4_ == 0x2) {
        puVar2 = glistp + 0x2;
        *glistp = 0xde000000;
        glistp = puVar2;
        puVar1[0x1] = init3D_dl;
        pon_guS2DEmuSetScissor(&glistp,0x0,0x0,0x140,0xf0,0x0);
    }
    else {
        puVar2 = glistp + 0x2;
        *glistp = 0xde000000;
        glistp = puVar2;
        puVar1[0x1] = init2D_dl;
    }
    return;
}



void SetMenuVar(void)

{
    undefined1 *puVar1;
    undefined1 *puVar2;
    undefined1 *puVar3;
    undefined1 *puVar4;
    int iVar5;
    
    puVar1 = gTheGame;
    gTheGame._137864_4_ = 0x0;
    iVar5 = 0x0;
    puVar2 = puVar1;
    puVar3 = puVar1;
    puVar4 = puVar1;
    do {
        if (gTheGame._120328_4_ <= iVar5) {
            gTheGame._137868_4_ = gTheGame._120328_4_ - gTheGame._137864_4_;
            return;
        }
        if (gTheGame._120328_4_ == 0x4) {
            *(undefined4 *)(puVar4 + 0x21a90) = 0x0;
            if (*(int *)(puVar1 + 0x16000) != 0x1) {
                *(undefined4 *)(puVar1 + 0x16004) = 0x0;
                *(undefined4 *)(puVar1 + 0x16008) = 0xffffffff;
                goto LAB_00054f68;
            }
            *(undefined4 *)(puVar1 + 0x16004) = 0xffffffff;
            *(undefined4 *)(puVar1 + 0x16008) = 0xffffffff;
        }
        else {
            *(undefined4 *)(puVar1 + 0x16000) = 0x3;
            *(undefined4 *)(puVar1 + 0x16004) = 0xffffffff;
            *(undefined4 *)(puVar1 + 0x16008) = 0xffffffff;
LAB_00054f68:
            *(undefined4 *)(puVar2 + 0x4b00) = *(undefined4 *)(puVar3 + 0x1d628);
            *(undefined4 *)(puVar2 + 0x4b08) = *(undefined4 *)(puVar3 + 0x1d630);
            *(undefined4 *)(puVar2 + 0x4b04) = *(undefined4 *)(puVar3 + 0x1d62c);
            *(undefined4 *)(puVar2 + 0x4b0c) = *(undefined4 *)(puVar3 + 0x1d634);
            *(int *)(puVar2 + 0x57b8) = gTheGame._137864_4_;
            gTheGame._137864_4_ += 0x1;
        }
        puVar4 = puVar4 + 0x4;
        puVar1 = puVar1 + 0x110;
        puVar2 = puVar2 + 0x57c0;
        puVar3 = puVar3 + 0x18;
        iVar5 += 0x1;
    } while( true );
}



void InitGameStateVar(void)

{
    int iVar1;
    int iVar2;
    undefined1 *puVar3;
    undefined1 *puVar4;
    int iVar5;
    
    iVar5 = 0x0;
    SetMenuVar();
    bzero(st_Combo1,0xe);
    bzero(st_Combo2,0x5a);
    bzero(st_Chain1,0x12);
    bzero(st_Chain2,0x5a);
    iVar2 = gTheGame._19200_4_;
    gTheGame._19188_4_ = 0x0;
    gTheGame._41652_4_ = 0x0;
    gTheGame._64116_4_ = 0x0;
    gTheGame._86580_4_ = 0x0;
    st_AttackPosition._0_1_ = 0x25;
    st_AttackPosition._1_1_ = 0x25;
    st_AttackPosition._2_1_ = 0x25;
    st_AttackPosition._3_1_ = 0x25;
    st_Attack2DTopPosition._0_4_ = 0x1;
    st_Attack2DTopPosition._24_4_ = 0x1;
    st_Attack2DTopPosition._48_4_ = 0x1;
    st_Attack2DTopPosition._72_4_ = 0x1;
    st_Attack3DTopPosition._0_4_ = 0x1;
    st_Attack3DTopPosition._24_4_ = 0x1;
    st_Attack3DTopPosition._48_4_ = 0x1;
    st_Attack3DTopPosition._72_4_ = 0x1;
    attack_chain2._0_4_ = 0x0;
    attack_chain2._4_4_ = 0x0;
    attack_chain2._8_4_ = 0x0;
    attack_chain2._12_4_ = 0x0;
    attack_chain2C._0_4_ = 0x0;
    attack_chain2C._4_4_ = 0x0;
    attack_chain2C._8_4_ = 0x0;
    attack_chain2C._12_4_ = 0x0;
    if ((gSelection != 0x8c) && (gSelection != 0xbe)) {
        if (gSelection == 0x96) {
            iVar2 = 0x0;
            puVar4 = gTheGame;
            do {
                *(undefined4 *)(puVar4 + 0x4a8c) = 0x0;
                *(undefined4 *)(puVar4 + 0x4ae4) = 0x0;
                if (gTheGame._19200_4_ == 0x3) {
                    *(undefined4 *)(puVar4 + 0x4ac4) = 0xffffffff;
                    iVar5 = 0x4;
                    *(undefined4 *)(puVar4 + 0x4ac8) = 0x1;
                }
                else if (gTheGame._19200_4_ < 0x3) {
                    if (gTheGame._19200_4_ == 0x1) {
                        *(undefined4 *)(puVar4 + 0x4ac4) = 0xffffffff;
                        iVar5 = 0x1;
                        *(undefined4 *)(puVar4 + 0x4ac8) = 0x0;
                    }
                    else if (0x0 < gTheGame._19200_4_) {
                        *(undefined4 *)(puVar4 + 0x4ac4) = 0xffffffff;
                        iVar5 = 0x2;
                        *(undefined4 *)(puVar4 + 0x4ac8) = 0x1;
                    }
                }
                else if (gTheGame._19200_4_ < 0x6) {
                    *(undefined4 *)(puVar4 + 0x4ac4) = 0xffffffff;
                    iVar5 = 0x4;
                    *(undefined4 *)(puVar4 + 0x4ac8) = 0x3;
                }
                iVar5 += -0x1;
                iVar1 = iVar5 * 0xa;
                *(int *)(puVar4 + 0x4ae0) = iVar5;
                *(int *)(puVar4 + 0x4ac0) = (int)(char)st_Player2State[iVar1 + 0x5];
                *(undefined4 *)(puVar4 + 0x4abc) = st_AdvanceLevel._0_4_;
                UpdateRaiseTimer(puVar4);
                *(undefined4 *)(puVar4 + 0x4acc) = 0x0;
                iVar2 += 0x1;
                *(int *)(puVar4 + 0x4af0) = (int)(char)st_Player2State[iVar1 + 0x7];
                *(int *)(puVar4 + 0x4aec) = (int)(char)st_Player2State[iVar1 + 0x8];
                *(int *)(puVar4 + 0x4ae8) = (int)(char)st_Player2State[iVar1 + 0x9];
                *(undefined4 *)(puVar4 + 0x4af4) = 0x0;
                *(undefined4 *)(puVar4 + 0x4af8) = 0x0;
                *(int *)(puVar4 + 0x4aa8) = (int)(char)st_Player2State[iVar1];
                *(int *)(puVar4 + 0x4aac) = (int)(char)st_Player2State[iVar1 + 0x1];
                *(int *)(puVar4 + 0x4ab0) = (int)(char)st_Player2State[iVar1 + 0x2];
                *(int *)(puVar4 + 0x4ab4) = (int)(char)st_Player2State[iVar1 + 0x3];
                *(int *)(puVar4 + 0x4ab8) = (int)(char)st_Player2State[iVar1 + 0x4];
                puVar4 = puVar4 + 0x57c0;
            } while (iVar2 < 0x2);
            return;
        }
        if (gSelection == 0xaa) {
            if (gTheGame._120332_4_ == 0x1) {
                UpdatePlayerStageClearTimeScore
                          (0x2b6d48,0xffffffff,gTheGame._19204_4_,gTheGame._19208_4_);
            }
            else {
                UpdatePlayerStageClearTimeScore
                          (0x2b6d48,0xffffffff,gTheGame._19204_4_,gTheGame._19208_4_);
            }
            if (gTheGame._19200_4_ == 0x5) {
                gTheGame._19144_4_ = 0x3;
                gTheGame._19140_4_ = 0x0;
                gTheGame._19112_4_ = (int)st_ClearStageState[24];
                gTheGame._19116_4_ = (int)st_ClearStageState[25];
                gTheGame._19120_4_ = (int)st_ClearStageState[26];
                gTheGame._19124_4_ = (int)st_ClearStageState[27];
                gTheGame._19136_4_ = (int)st_kClearStage[60];
                if (gTheGame._19204_4_ != 0x3) {
                    gTheGame._19136_4_ = 0x32;
                }
                gTheGame._19168_4_ = 0x1e;
                gTheGame._89896_4_ = 0x4b0;
            }
            else {
                if (gTheGame._19204_4_ < 0x5) {
                    if (gTheGame._19204_4_ < 0x3) {
                        if (0x0 < gTheGame._19204_4_) {
                            gTheGame._19144_4_ = 0x0;
                        }
                    }
                    else {
                        gTheGame._19144_4_ = 0x1;
                    }
                }
                else if (gTheGame._19204_4_ < 0x7) {
                    gTheGame._19144_4_ = 0x3;
                }
                gTheGame._19140_4_ = 0xffffffff;
                iVar2 = (gTheGame._19204_4_ + -0x1) * 0x4;
                gTheGame._19112_4_ = (int)(char)st_ClearStageState[iVar2];
                gTheGame._19116_4_ = (int)(char)st_ClearStageState[iVar2 + 0x1];
                gTheGame._19120_4_ = (int)(char)st_ClearStageState[iVar2 + 0x2];
                gTheGame._19124_4_ = (int)(char)st_ClearStageState[iVar2 + 0x3];
                gTheGame._19168_4_ = gTheGame._19208_4_ + (gTheGame._19204_4_ + -0x1) * 0x5 + -0x1;
                gTheGame._19136_4_ = (int)(char)st_kClearStage[gTheGame._19168_4_ * 0x2];
                gTheGame._89896_4_ = (int)(char)st_kClearStage[gTheGame._19168_4_ * 0x2 + 0x1];
                if (gTheGame._120332_4_ == 0x2) {
                    gTheGame._89896_4_ += -0x4;
                }
            }
            gTheGame._19132_4_ = 0x4b0;
            UpdateRaiseTimer(gTheGame);
            gTheGame._19148_4_ = 0x0;
            return;
        }
        if (gSelection < 0x83) {
            if (gSelection == 0x82) {
                gTheGame._120340_4_ = (int)*(char *)(gPlayer._0_4_ + 0x148);
                gTheGame._120344_4_ = (int)*(char *)(gPlayer._0_4_ + 0x149);
                gTheGame._120348_4_ = (int)*(char *)(gPlayer._0_4_ + 0x14a);
            }
            if (((gTheGame._19200_4_ == 0x1) && (*(char *)(gPlayer._0_4_ + 0x14b) == '\0')) &&
               (*(char *)(gPlayer._0_4_ + 0x14c) == '\0')) {
                gTheGame._120340_4_ = 0x0;
                gTheGame._120344_4_ = 0x0;
                gTheGame._120348_4_ = 0x0;
            }
            else if ((gSelection == 0x78) || (gTheGame._19200_4_ == 0x0)) {
                gTheGame._120340_4_ = 0x0;
                gTheGame._120344_4_ = 0x0;
                gTheGame._120348_4_ = 0x0;
            }
            st_Attack2DTopPosition._0_4_ = 0x1;
            st_Attack2DTopPosition._24_4_ = 0x1;
            st_Attack2DTopPosition._48_4_ = 0x1;
            st_Attack2DTopPosition._72_4_ = 0x1;
            st_Attack3DTopPosition._0_4_ = 0x1;
            st_Attack3DTopPosition._24_4_ = 0x1;
            st_Attack3DTopPosition._48_4_ = 0x1;
            st_Attack3DTopPosition._72_4_ = 0x1;
            attack_chain2._0_4_ = 0x0;
            attack_chain2._4_4_ = 0x0;
            attack_chain2._8_4_ = 0x0;
            attack_chain2._12_4_ = 0x0;
            attack_chain2C._0_4_ = 0x0;
            attack_chain2C._4_4_ = 0x0;
            attack_chain2C._8_4_ = 0x0;
            attack_chain2C._12_4_ = 0x0;
            st_AttackPosition._0_1_ = 0x25;
            st_AttackPosition._1_1_ = 0x25;
            st_AttackPosition._2_1_ = 0x25;
            st_AttackPosition._3_1_ = 0x25;
            gTheGame._19084_4_ = 0x0;
            gTheGame._19112_4_ = (int)st_Player1State[4];
            gTheGame._19116_4_ = (int)st_Player1State[5];
            gTheGame._19120_4_ = (int)st_Player1State[6];
            gTheGame._19124_4_ = (int)st_Player1State[7];
            gTheGame._19128_4_ = (int)st_Player2State[4];
            gTheGame._19188_4_ = 0x0;
            gTheGame._41652_4_ = 0x0;
            gTheGame._64116_4_ = 0x0;
            gTheGame._86580_4_ = 0x0;
            gTheGame._89896_4_ = 0x0;
            gTheGame._89900_4_ = 0x0;
            return;
        }
        if (((gSelection != 0xc8) && (gSelection != 0xa0)) && (gSelection != 0xb4)) {
            if (((gSelection != 0xe6) && (gSelection != 0xd2)) && (gSelection != 0xdc)) {
                st_Attack2DTopPosition._0_4_ = 0x1;
                st_Attack2DTopPosition._24_4_ = 0x1;
                st_Attack2DTopPosition._48_4_ = 0x1;
                st_Attack2DTopPosition._72_4_ = 0x1;
                st_Attack3DTopPosition._0_4_ = 0x1;
                st_Attack3DTopPosition._24_4_ = 0x1;
                st_Attack3DTopPosition._48_4_ = 0x1;
                st_Attack3DTopPosition._72_4_ = 0x1;
                attack_chain2._0_4_ = 0x0;
                attack_chain2._4_4_ = 0x0;
                attack_chain2._8_4_ = 0x0;
                attack_chain2._12_4_ = 0x0;
                attack_chain2C._0_4_ = 0x0;
                attack_chain2C._4_4_ = 0x0;
                attack_chain2C._8_4_ = 0x0;
                attack_chain2C._12_4_ = 0x0;
                st_AttackPosition._0_1_ = 0x25;
                st_AttackPosition._1_1_ = 0x25;
                st_AttackPosition._2_1_ = 0x25;
                st_AttackPosition._3_1_ = 0x25;
                gTheGame._19188_4_ = 0x0;
                gTheGame._41652_4_ = 0x0;
                gTheGame._64116_4_ = 0x0;
                gTheGame._86580_4_ = 0x0;
                return;
            }
            if (gSelection == 0xe6) {
                gTheGame._120344_4_ = 0x2;
                gTheGame._120348_4_ = 0x0;
            }
            puVar3 = gTheGame;
            iVar2 = 0x0;
            puVar4 = puVar3;
            do {
                *(undefined4 *)(puVar4 + 0x4a8c) = 0x0;
                iVar5 = *(int *)(puVar4 + 0x4b08);
                *(int *)(puVar4 + 0x4ae0) = iVar5 + -0x1;
                if (iVar5 + -0x1 < 0x8) {
                    *(undefined4 *)(puVar4 + 0x4ac4) = 0xffffffff;
                }
                else {
                    *(undefined4 *)(puVar4 + 0x4ac4) = 0x0;
                }
                if (iVar5 + -0x1 < 0x4) {
                    *(undefined4 *)(puVar4 + 0x4ac8) = 0x0;
                }
                else if (iVar5 + -0x1 < 0x7) {
                    *(undefined4 *)(puVar4 + 0x4ac8) = 0x1;
                }
                else {
                    *(undefined4 *)(puVar4 + 0x4ac8) = 0x3;
                }
                iVar5 = (iVar5 + -0x1) * 0xa;
                *(int *)(puVar4 + 0x4ac0) = (int)(char)st_Player2State[iVar5 + 0x5];
                *(undefined4 *)(puVar4 + 0x4abc) = st_AdvanceLevel._0_4_;
                UpdateRaiseTimer(puVar4);
                *(undefined4 *)(puVar4 + 0x4acc) = 0x0;
                if (gSelection == 0xd2) {
                    *(int *)(puVar4 + 0x4af0) = (int)(char)st_Player2State[iVar5 + 0x7];
                    *(int *)(puVar4 + 0x4aec) = (int)(char)st_Player2State[iVar5 + 0x8];
                    *(int *)(puVar4 + 0x4ae8) = (int)(char)st_Player2State[iVar5 + 0x9];
                    *(undefined4 *)(puVar4 + 0x4af4) = 0x0;
                    *(undefined4 *)(puVar4 + 0x4af8) = 0x0;
                }
                else if (gSelection == 0xdc) {
                    *(undefined4 *)(puVar3 + 0x15f28) = *(undefined4 *)(puVar4 + 0x4b08);
                    *(int *)(puVar3 + 0x15f28) =
                         *(int *)(puVar3 + 0x15f28) + *(int *)(puVar4 + 0x4b0c);
                }
                else {
                    *(int *)(puVar4 + 0x4a8c) =
                         *(int *)(puVar4 + 0x4a8c) + *(int *)(puVar4 + 0x4b0c);
                }
                iVar2 += 0x1;
                *(int *)(puVar4 + 0x4aa8) = (int)(char)st_Player2State[iVar5];
                puVar3 = puVar3 + 0x110;
                *(int *)(puVar4 + 0x4aac) = (int)(char)st_Player2State[iVar5 + 0x1];
                *(int *)(puVar4 + 0x4ab0) = (int)(char)st_Player2State[iVar5 + 0x2];
                *(int *)(puVar4 + 0x4ab4) = (int)(char)st_Player2State[iVar5 + 0x3];
                *(int *)(puVar4 + 0x4ab8) = (int)(char)st_Player2State[iVar5 + 0x4];
                puVar4 = puVar4 + 0x57c0;
            } while (iVar2 < 0x4);
            return;
        }
        if (gSelection == 0xc8) {
            gTheGame._120344_4_ = 0x2;
            gTheGame._120348_4_ = 0x0;
        }
        puVar3 = gTheGame;
        iVar2 = 0x0;
        puVar4 = puVar3;
        do {
            *(undefined4 *)(puVar4 + 0x4a8c) = 0x0;
            iVar5 = *(int *)(puVar4 + 0x4b08);
            *(int *)(puVar4 + 0x4ae0) = iVar5 + -0x1;
            if (iVar5 + -0x1 < 0x8) {
                *(undefined4 *)(puVar4 + 0x4ac4) = 0xffffffff;
            }
            else {
                *(undefined4 *)(puVar4 + 0x4ac4) = 0x0;
            }
            if (iVar5 + -0x1 < 0x4) {
                *(undefined4 *)(puVar4 + 0x4ac8) = 0x0;
            }
            else if (iVar5 + -0x1 < 0x7) {
                *(undefined4 *)(puVar4 + 0x4ac8) = 0x1;
            }
            else {
                *(undefined4 *)(puVar4 + 0x4ac8) = 0x3;
            }
            iVar5 = (iVar5 + -0x1) * 0xa;
            *(int *)(puVar4 + 0x4ac0) = (int)(char)st_Player2State[iVar5 + 0x5];
            *(undefined4 *)(puVar4 + 0x4abc) = st_AdvanceLevel._0_4_;
            UpdateRaiseTimer(puVar4);
            *(undefined4 *)(puVar4 + 0x4acc) = 0x0;
            if (gSelection == 0xa0) {
                *(int *)(puVar4 + 0x4af0) = (int)(char)st_Player2State[iVar5 + 0x7];
                *(int *)(puVar4 + 0x4aec) = (int)(char)st_Player2State[iVar5 + 0x8];
                *(int *)(puVar4 + 0x4ae8) = (int)(char)st_Player2State[iVar5 + 0x9];
                *(undefined4 *)(puVar4 + 0x4af4) = 0x0;
                *(undefined4 *)(puVar4 + 0x4af8) = 0x0;
            }
            else if (gSelection == 0xb4) {
                *(undefined4 *)(puVar3 + 0x15f28) = *(undefined4 *)(puVar4 + 0x4b08);
                *(int *)(puVar3 + 0x15f28) = *(int *)(puVar3 + 0x15f28) + *(int *)(puVar4 + 0x4b0c);
            }
            else {
                *(int *)(puVar4 + 0x4a8c) = *(int *)(puVar4 + 0x4a8c) + *(int *)(puVar4 + 0x4b0c);
            }
            iVar2 += 0x1;
            *(int *)(puVar4 + 0x4aa8) = (int)(char)st_Player2State[iVar5];
            puVar3 = puVar3 + 0x110;
            *(int *)(puVar4 + 0x4aac) = (int)(char)st_Player2State[iVar5 + 0x1];
            *(int *)(puVar4 + 0x4ab0) = (int)(char)st_Player2State[iVar5 + 0x2];
            *(int *)(puVar4 + 0x4ab4) = (int)(char)st_Player2State[iVar5 + 0x3];
            *(int *)(puVar4 + 0x4ab8) = (int)(char)st_Player2State[iVar5 + 0x4];
            puVar4 = puVar4 + 0x57c0;
        } while (iVar2 < 0x2);
        return;
    }
    gTheGame._19084_4_ = 0x0;
    if (gTheGame._19200_4_ == 0x2) {
        gTheGame._19140_4_ = 0x0;
        gTheGame._19144_4_ = 0x1;
    }
    else if (gTheGame._19200_4_ < 0x2) {
        if (gTheGame._19200_4_ == 0x0) {
            gGameStatus |= 0x20;
            gTheGame._19208_4_ = 0x1;
        }
        else if (gTheGame._19200_4_ < 0x0) goto LAB_00055160;
        gTheGame._19140_4_ = 0xffffffff;
        gTheGame._19144_4_ = 0x0;
    }
    else if (gTheGame._19200_4_ < 0x4) {
        gTheGame._19140_4_ = 0x0;
        gTheGame._19144_4_ = 0x3;
    }
LAB_00055160:
    if (gSelection == 0xbe) {
        gTheGame._120344_4_ = 0x2;
        gTheGame._120348_4_ = 0x0;
    }
    gTheGame._19136_4_ = gTheGame._19208_4_;
    gTheGame._19132_4_ = 0x0;
    UpdateRaiseTimer();
    iVar2 *= 0x4;
    gTheGame._19148_4_ = 0x0;
    gTheGame._19124_4_ = (int)(char)st_Player1State[iVar2 + 0x3];
    gTheGame._19120_4_ = (int)(char)st_Player1State[iVar2 + 0x2];
    gTheGame._19116_4_ = (int)(char)st_Player1State[iVar2 + 0x1];
    gTheGame._19112_4_ = (int)(char)st_Player1State[iVar2];
    return;
}



void pon_InitGameStateVarSpecifiedPlayer(int param_1)

{
    int iVar1;
    int iVar2;
    undefined1 *puVar3;
    int iVar4;
    int iVar5;
    
    iVar4 = param_1 * 0x57c0;
    iVar5 = param_1 * 0x18;
    *(undefined4 *)(gTheGame + iVar4 + 0x4af4) = 0x0;
    *(undefined *)((int)&st_AttackPosition + param_1) = 0x25;
    *(undefined4 *)(st_Attack2DTopPosition + iVar5) = 0x1;
    *(undefined4 *)(st_Attack3DTopPosition + iVar5) = 0x1;
    *(undefined4 *)(attack_chain2 + param_1 * 0x4) = 0x0;
    *(undefined4 *)(attack_chain2C + param_1 * 0x4) = 0x0;
    if (((gSelection == 0xe6) || (gSelection == 0xd2)) || (gSelection == 0xdc)) {
        *(undefined4 *)(gTheGame + iVar4 + 0x4a8c) = 0x0;
        iVar1 = param_1 * 0x110;
        iVar2 = *(int *)(gTheGame + iVar4 + 0x4b08);
        *(int *)(gTheGame + iVar4 + 0x4ae0) = iVar2 + -0x1;
        if (iVar2 + -0x1 < 0x8) {
            *(undefined4 *)(gTheGame + iVar4 + 0x4ac4) = 0xffffffff;
        }
        else {
            *(undefined4 *)(gTheGame + iVar4 + 0x4ac4) = 0x0;
        }
        if (iVar2 + -0x1 < 0x4) {
            *(undefined4 *)(gTheGame + iVar4 + 0x4ac8) = 0x0;
        }
        else if (iVar2 + -0x1 < 0x7) {
            *(undefined4 *)(gTheGame + iVar4 + 0x4ac8) = 0x1;
        }
        else {
            *(undefined4 *)(gTheGame + iVar4 + 0x4ac8) = 0x3;
        }
        iVar2 = (iVar2 + -0x1) * 0xa;
        *(int *)(gTheGame + iVar4 + 0x4ac0) = (int)(char)st_Player2State[iVar2 + 0x5];
        *(undefined4 *)(gTheGame + iVar4 + 0x4abc) = st_AdvanceLevel._0_4_;
        UpdateRaiseTimer(gTheGame + iVar4);
        *(undefined4 *)(gTheGame + iVar4 + 0x4acc) = 0x0;
        if (gSelection == 0xd2) {
            *(int *)(gTheGame + iVar4 + 0x4af0) = (int)(char)st_Player2State[iVar2 + 0x7];
            *(int *)(gTheGame + iVar4 + 0x4aec) = (int)(char)st_Player2State[iVar2 + 0x8];
            *(int *)(gTheGame + iVar4 + 0x4ae8) = (int)(char)st_Player2State[iVar2 + 0x9];
            *(undefined4 *)(gTheGame + iVar4 + 0x4af4) = 0x0;
            *(undefined4 *)(gTheGame + iVar4 + 0x4af8) = 0x0;
        }
        else if (gSelection == 0xdc) {
            *(undefined4 *)(gTheGame + iVar1 + 0x15f28) = *(undefined4 *)(gTheGame + iVar4 + 0x4b08)
            ;
            *(int *)(gTheGame + iVar1 + 0x15f28) =
                 *(int *)(gTheGame + iVar1 + 0x15f28) + *(int *)(gTheGame + iVar4 + 0x4b0c);
        }
        else {
            *(int *)(gTheGame + iVar4 + 0x4a8c) =
                 *(int *)(gTheGame + iVar4 + 0x4a8c) + *(int *)(gTheGame + iVar4 + 0x4b0c);
        }
        *(int *)(gTheGame + iVar4 + 0x4aa8) = (int)(char)st_Player2State[iVar2];
        *(int *)(gTheGame + iVar4 + 0x4aac) = (int)(char)st_Player2State[iVar2 + 0x1];
        *(int *)(gTheGame + iVar4 + 0x4ab0) = (int)(char)st_Player2State[iVar2 + 0x2];
        *(int *)(gTheGame + iVar4 + 0x4ab4) = (int)(char)st_Player2State[iVar2 + 0x3];
        *(int *)(gTheGame + iVar4 + 0x4ab8) = (int)(char)st_Player2State[iVar2 + 0x4];
    }
    puVar3 = gTheGame + iVar4;
    *(undefined4 *)(gTheGame + iVar4 + 0x4a90) = 0x0;
    *(undefined4 *)(gTheGame + iVar4 + 0x4a88) = 0x0;
    *(undefined4 *)(gTheGame + iVar4 + 0x4a84) = 0x0;
    *(undefined4 *)(gTheGame + iVar4 + 0x4a94) = 0x0;
    iVar1 = param_1 * 0x110 + 0x2b6d48;
    *(undefined4 *)(gTheGame + iVar4 + 0x4a98) = 0x0;
    *(undefined4 *)(gTheGame + iVar4 + 0x4a9c) = 0x0;
    *(undefined4 *)(gTheGame + iVar4 + 0x4aa0) = 0x0;
    *(undefined4 *)(gTheGame + iVar4 + 0x4aa4) = 0x0;
    *(undefined4 *)(gTheGame + iVar4 + 0x4ad4) = 0x0;
    if (gTheGame._120328_4_ < 0x3) {
        *(undefined4 *)(gTheGame + iVar4 + 0x4afc) = 0xdf;
    }
    else {
        *(undefined4 *)(gTheGame + iVar4 + 0x4afc) = 0xd5;
    }
    *(undefined4 *)(gTheGame + iVar4 + 0x4ad8) = 0x0;
    *(undefined4 *)(gTheGame + iVar4 + 0x4adc) = 0x0;
    InitCursor(iVar1);
    if (gTheGame._120332_4_ != 0x1) {
        return;
    }
    Init2DCursor(iVar1,param_1);
    Init2DTetrisBlocks(puVar3,param_1);
    if (gSelection == 0xdc) {
LAB_00055cfc:
        if (*(int *)(gTheGame + iVar5 + 0x1d638) != -0x1) {
            AISetLevel(brainbrain + param_1 * 0x128,*(int *)(gTheGame + iVar5 + 0x1d638),
                       *(undefined4 *)(gTheGame + iVar5 + 0x1d62c));
            InitAI(puVar3,iVar1,brainbrain + param_1 * 0x128);
        }
        pon_InitStartPanel(puVar3,param_1);
    }
    else {
        if (gSelection < 0xdc) {
            if (gSelection == 0xd2) goto LAB_00055cfc;
        }
        else if (gSelection == 0xe6) goto LAB_00055cfc;
        gc_assert(0x0,_362,0x3e2,_363,0x0,0x0,0x0);
    }
    Init2DNewRow(puVar3);
    Init2DIcons(puVar3);
    Init2DAttackBlocks(puVar3);
    pon_Init2DAttackBlocks4p(puVar3);
    pon_InitAttackOtherData(puVar3,param_1);
    Init2DExplosion(puVar3);
    Init2DText();
    if (gSelection == 0xdc) {
        Init2DClearLine(puVar3,iVar1,param_1);
    }
    Init2DTetrisBlocksTMEM(puVar3,0x0);
    return;
}



void InitWorld(void)

{
    int iVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    
    iVar9 = -0x1;
    iVar8 = -0x1;
    iVar7 = -0x1;
    iVar6 = -0x1;
    uVar5 = 0xffffffff;
    uVar4 = 0xffffffff;
    if (gTheGame._120332_4_ == 0x2) {
        Init3DMatrixBlocks();
    }
    iVar2 = gTheGame._89904_4_;
    iVar1 = gTheGame._19204_4_;
    if (gSelection == 0xaa) {
        if (gTheGame._19200_4_ == 0x5) {
            iVar9 = 0xd;
        }
        else if (gTheGame._19204_4_ == 0x4) {
            iVar9 = 0x5;
        }
        else if (gTheGame._19204_4_ < 0x4) {
            if (gTheGame._19204_4_ == 0x2) {
                iVar9 = 0x3;
            }
            else if (gTheGame._19204_4_ < 0x2) {
                if (0x0 < gTheGame._19204_4_) {
                    iVar9 = 0x0;
                }
            }
            else {
                iVar9 = 0x4;
            }
        }
        else if (gTheGame._19204_4_ == 0x6) {
            iVar9 = 0x8;
        }
        else if (gTheGame._19204_4_ < 0x6) {
            iVar9 = 0x6;
        }
        goto LAB_000562f0;
    }
    if (gSelection < 0xaa) {
        if (gSelection == 0x82) {
            if ((gTheGame._19200_4_ == 0x1) || (gTheGame._19200_4_ == 0x2)) {
                iVar9 = (gTheGame._19204_4_ + -0x1) / 0xf + (gTheGame._19204_4_ + -0x1 >> 0x1f);
                if (iVar9 == iVar9 >> 0x1f) {
                    iVar9 = 0x0;
                }
                else if (iVar9 - (iVar9 >> 0x1f) == 0x1) {
                    iVar9 = 0x3;
                }
                else {
                    iVar9 = 0x4;
                }
            }
            else if (gTheGame._19200_4_ - 0x3U < 0x2) {
                iVar9 = (gTheGame._19204_4_ + -0x1) / 0xf + (gTheGame._19204_4_ + -0x1 >> 0x1f);
                if (iVar9 == iVar9 >> 0x1f) {
                    iVar9 = 0x5;
                }
                else if (iVar9 - (iVar9 >> 0x1f) == 0x1) {
                    iVar9 = 0x6;
                }
                else {
                    iVar9 = 0x8;
                }
            }
            else {
                iVar9 = AnimationRandom(0x10);
                iVar2 = iVar9;
                if ((iVar9 == -0x1) ||
                   (((((iVar1 = gTheGame._19204_4_, iVar9 != 0x0 && (iVar9 != 0x3)) &&
                      (iVar9 != 0x4)) && ((iVar9 != 0x5 && (iVar9 != 0x6)))) && (iVar9 != 0x8)))) {
                    iVar3 = AnimationRandom(0x6);
                    iVar1 = gTheGame._19204_4_;
                    if (iVar3 == 0x3) {
                        iVar9 = 0x5;
                        iVar2 = 0x5;
                    }
                    else if (iVar3 < 0x3) {
                        if (iVar3 == 0x1) {
                            iVar9 = 0x3;
                            iVar2 = 0x3;
                        }
                        else if (iVar3 < 0x1) {
                            if (-0x1 < iVar3) {
                                iVar9 = 0x0;
                                iVar2 = 0x0;
                            }
                        }
                        else {
                            iVar9 = 0x4;
                            iVar2 = 0x4;
                        }
                    }
                    else if (iVar3 == 0x5) {
                        iVar9 = 0x8;
                        iVar2 = 0x8;
                    }
                    else if (iVar3 < 0x5) {
                        iVar9 = 0x6;
                        iVar2 = 0x6;
                    }
                }
            }
            goto LAB_000562f0;
        }
        if (gSelection < 0x82) {
            if (gSelection != 0x6e) {
                if (0x6d < gSelection) {
                    if ((gSelection == 0x78) && (iVar9 = iVar2, gTheGame._89904_4_ == -0x1)) {
                        iVar3 = AnimationRandom(0x6);
                        iVar1 = gTheGame._19204_4_;
                        iVar2 = gTheGame._89904_4_;
                        if (iVar3 == 0x3) {
                            iVar9 = 0x5;
                        }
                        else if (iVar3 < 0x3) {
                            if (iVar3 == 0x1) {
                                iVar9 = 0x3;
                            }
                            else if (iVar3 < 0x1) {
                                if (-0x1 < iVar3) {
                                    iVar9 = 0x0;
                                }
                            }
                            else {
                                iVar9 = 0x4;
                            }
                        }
                        else if (iVar3 == 0x5) {
                            iVar9 = 0x8;
                        }
                        else if (iVar3 < 0x5) {
                            iVar9 = 0x6;
                        }
                    }
                    goto LAB_000562f0;
                }
                if (gSelection != 0x64) goto LAB_000562f0;
            }
            iVar9 = AnimationRandom(0xf);
            iVar1 = gTheGame._19204_4_;
            iVar2 = gTheGame._89904_4_;
            goto LAB_000562f0;
        }
        if (gSelection == 0x96) {
            if (gTheGame._19204_4_ < 0xa) {
                iVar9 = 0x0;
            }
            else {
                iVar9 = gTheGame._19212_4_;
                if (0xd < gTheGame._19204_4_) {
                    iVar9 = 0x0;
                }
            }
            if (0x8 < gTheGame._19204_4_) {
                gTheGame._19204_4_ += 0x1;
            }
            gTheGame._41664_4_ = gTheGame._19200_4_;
            iVar8 = gTheGame._19204_4_;
            gWorld = gTheGame._19204_4_;
            iVar1 = iVar9;
            gTheGame._41668_4_ = gTheGame._19204_4_;
            goto LAB_000562f0;
        }
        if (0x95 < gSelection) {
            if (gSelection != 0xa0) goto LAB_000562f0;
            goto LAB_00056288;
        }
        if (gSelection != 0x8c) goto LAB_000562f0;
LAB_00055ee8:
        if (gTheGame._19200_4_ == 0x0) {
            gTheGame._19204_4_ = AnimationRandom(0x6);
        }
        iVar1 = gTheGame._19204_4_;
        iVar2 = gTheGame._89904_4_;
        if (gTheGame._19204_4_ == 0x3) {
            iVar9 = 0x5;
        }
        else {
            if (gTheGame._19204_4_ < 0x3) {
                if (gTheGame._19204_4_ == 0x1) {
                    iVar9 = 0x3;
                    goto LAB_000562f0;
                }
                if (0x0 < gTheGame._19204_4_) {
                    iVar9 = 0x4;
                    goto LAB_000562f0;
                }
                if (-0x1 < gTheGame._19204_4_) {
                    iVar9 = 0x0;
                    goto LAB_000562f0;
                }
            }
            else {
                if (gTheGame._19204_4_ == 0x5) {
                    iVar9 = 0x8;
                    goto LAB_000562f0;
                }
                if (gTheGame._19204_4_ < 0x5) {
                    iVar9 = 0x6;
                    goto LAB_000562f0;
                }
            }
            iVar9 = 0xd;
        }
    }
    else {
        if (gSelection != 0xd2) {
            if (gSelection < 0xd2) {
                if (gSelection != 0xbe) {
                    if (gSelection < 0xbe) {
                        if (gSelection != 0xb4) goto LAB_000562f0;
                    }
                    else if (gSelection != 0xc8) goto LAB_000562f0;
LAB_00056288:
                    iVar8 = gTheGame._41668_4_;
                    iVar9 = gTheGame._19204_4_;
                    if (gTheGame._120360_4_ < gTheGame._120384_4_) {
                        gWorld = gTheGame._41668_4_;
                    }
                    else {
                        gWorld = gTheGame._19204_4_;
                    }
                    goto LAB_000562f0;
                }
                goto LAB_00055ee8;
            }
            if ((gSelection != 0xe6) && ((0xe5 < gSelection || (gSelection != 0xdc))))
            goto LAB_000562f0;
        }
        gWorld = 0xd;
        uVar4 = gTheGame._86596_4_;
        uVar5 = gTheGame._64132_4_;
        iVar6 = gTheGame._41668_4_;
        iVar7 = gTheGame._19204_4_;
    }
LAB_000562f0:
    gTheGame._89904_4_ = iVar2;
    gTheGame._19204_4_ = iVar1;
    if (gTheGame._120328_4_ == 0x1) {
        gWorld = iVar9;
    }
    InitFrame(gWorld);
    InitShadeBox(gWorld);
    InitBackground(gWorld);
    if (gTheGame._120328_4_ < 0x3) {
        InitCharacter(iVar9,iVar8);
        if (iVar8 == -0x1) {
            InitAnimation1(iVar9);
        }
        else {
            InitAnimation2(iVar9,iVar8);
        }
        LoadFairySoundData((int)(short)gWorld,(int)(short)iVar9,(int)(short)iVar8);
    }
    else {
        pon_InitCharacter4p(iVar7,iVar6,uVar5,uVar4);
        pon_InitAnimation4(iVar7,iVar6,uVar5,uVar4);
        pon_LoadFairySoundData4p
                  ((int)(short)gWorld,(int)(short)iVar7,(int)(short)iVar6,(int)(short)uVar5,
                   (int)(short)uVar4);
    }
    return;
}

