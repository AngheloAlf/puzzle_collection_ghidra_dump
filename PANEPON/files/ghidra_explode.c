
void PlayExplosionSound(int param_1,int param_2)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    
    iVar3 = param_2 / 0x64 + (param_2 >> 0x1f);
    iVar2 = iVar3 - (iVar3 >> 0x1f);
    uVar1 = param_2 + (iVar3 - (iVar3 >> 0x1f)) * -0x64;
    if (iVar2 == 0x1) {
        if (0x9 < (int)uVar1) {
            uVar1 = 0x9;
        }
        if (gTheGame._120328_4_ == 0x1) {
            PlaySE(SFX_INIT_TABLE,uVar1 + 0x49);
        }
        else if (gTheGame._120328_4_ == 0x2) {
            if (param_1 == 0x0) {
                PlaySE(SFX_INIT_TABLE,uVar1 + 0x6d);
            }
            else {
                PlaySE(SFX_INIT_TABLE,uVar1 + 0x91);
            }
        }
        else {
            PlaySE(SFX_INIT_TABLE,uVar1 + 0x49);
        }
    }
    else if (iVar2 == 0x2) {
        if (0x9 < (int)uVar1) {
            uVar1 = 0x9;
        }
        if (gTheGame._120328_4_ == 0x1) {
            PlaySE(SFX_INIT_TABLE,uVar1 + 0x4f);
        }
        else if (gTheGame._120328_4_ == 0x2) {
            if (param_1 == 0x0) {
                PlaySE(SFX_INIT_TABLE,uVar1 + 0x73);
            }
            else {
                PlaySE(SFX_INIT_TABLE,uVar1 + 0x97);
            }
        }
        else {
            PlaySE(SFX_INIT_TABLE,uVar1 + 0x4f);
        }
    }
    else if (iVar2 == 0x3) {
        if (0x9 < (int)uVar1) {
            uVar1 = 0x9;
        }
        if (gTheGame._120328_4_ == 0x1) {
            PlaySE(SFX_INIT_TABLE,uVar1 + 0x59);
        }
        else if (gTheGame._120328_4_ == 0x2) {
            if (param_1 == 0x0) {
                PlaySE(SFX_INIT_TABLE,uVar1 + 0x7d);
            }
            else {
                PlaySE(SFX_INIT_TABLE,uVar1 + 0xa1);
            }
        }
        else {
            PlaySE(SFX_INIT_TABLE,uVar1 + 0x59);
        }
    }
    else if (iVar2 == 0x4) {
        if (0x9 < (int)uVar1) {
            uVar1 = 0x9;
        }
        if (gTheGame._120328_4_ == 0x1) {
            PlaySE(SFX_INIT_TABLE,uVar1 + 0x63);
        }
        else if (gTheGame._120328_4_ == 0x2) {
            if (param_1 == 0x0) {
                PlaySE(SFX_INIT_TABLE,uVar1 + 0x87);
            }
            else {
                PlaySE(SFX_INIT_TABLE,uVar1 + 0xab);
            }
        }
        else {
            PlaySE(SFX_INIT_TABLE,uVar1 + 0x63);
        }
    }
    else {
        if (0x6 < (int)uVar1) {
            uVar1 = uVar1 + (((int)uVar1 >> 0x2) + (uint)((int)uVar1 < 0x0 && (uVar1 & 0x3) != 0x0))
                            * -0x4 + 0x3;
        }
        if (DolbyEnabled == '\0') {
            if (param_1 == 0x0) {
                PlaySE(SFX_INIT_TABLE,uVar1 + 0xd3);
            }
            else {
                PlaySE(SFX_INIT_TABLE,uVar1 + 0xd3);
            }
        }
        else if (param_1 == 0x0) {
            PlaySE(SFX_INIT_TABLE,uVar1 + 0xe1);
        }
        else {
            PlaySE(SFX_INIT_TABLE,uVar1 + 0xe8);
        }
    }
    return;
}



void StartExplosion(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
    if (gTheGame._120332_4_ == 0x1) {
        Start2DExplosion(param_1,param_3,param_4,param_5);
    }
    else {
        Start3DExplosion();
    }
    return;
}



void UpdateExplosion(void)

{
    if (gTheGame._120332_4_ == 0x1) {
        Update2DExplosion();
    }
    else {
        Update3DExplosion();
    }
    return;
}
