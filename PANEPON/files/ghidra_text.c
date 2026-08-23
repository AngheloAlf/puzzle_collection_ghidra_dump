

undefined4 InitWhichNumber(int param_1,char param_2,int param_3)

{
    undefined2 *puVar1;
    
    if (param_2 == '\0') {
        return 0x0;
    }
    puVar1 = (undefined2 *)(param_1 + 0x12);
    if (param_3 == 0x16) {
        if (param_2 < '7') {
            *(undefined4 *)(param_1 + 0x18) = 0x3;
        }
        else {
            *(undefined4 *)(param_1 + 0x18) = 0x5;
        }
    }
    else if (param_3 < 0x16) {
        if (param_3 == 0x14) {
            if (param_2 < '7') {
                *(undefined4 *)(param_1 + 0x18) = 0x0;
            }
            else {
                *(undefined4 *)(param_1 + 0x18) = 0x2;
            }
        }
        else {
            if (param_3 < 0x14) {
                return 0x0;
            }
            if (param_2 < '7') {
                *(undefined4 *)(param_1 + 0x18) = 0x1;
            }
            else {
                *(undefined4 *)(param_1 + 0x18) = 0x2;
            }
        }
    }
    else {
        if (0x17 < param_3) {
            return 0x0;
        }
        if (param_2 < '7') {
            *(undefined4 *)(param_1 + 0x18) = 0x4;
        }
        else {
            *(undefined4 *)(param_1 + 0x18) = 0x5;
        }
    }
    if (true) {
        switch(param_2) {
        case ' ':
            *(undefined4 *)(param_1 + 0x18) = 0x46;
            break;
        default:
            goto switchD_000b2394_caseD_21;
        case '\'':
            *puVar1 = 0x0;
            break;
        case '-':
            *puVar1 = 0x0;
            break;
        case '0':
            *puVar1 = 0x2;
            break;
        case '1':
            *puVar1 = 0x4;
            break;
        case '2':
            *puVar1 = 0x6;
            break;
        case '3':
            *puVar1 = 0x80;
            break;
        case '4':
            *puVar1 = 0x82;
            break;
        case '5':
            *puVar1 = 0x84;
            break;
        case '6':
            *puVar1 = 0x86;
            break;
        case '7':
            if ((param_3 == 0x14) || (param_3 == 0x16)) {
                *puVar1 = 0x0;
            }
            else {
                *puVar1 = 0x80;
            }
            break;
        case '8':
            if ((param_3 == 0x14) || (param_3 == 0x16)) {
                *puVar1 = 0x2;
            }
            else {
                *puVar1 = 0x82;
            }
            break;
        case '9':
            if ((param_3 == 0x14) || (param_3 == 0x16)) {
                *puVar1 = 0x4;
            }
            else {
                *puVar1 = 0x84;
            }
            break;
        case ':':
            if ((param_3 == 0x14) || (param_3 == 0x16)) {
                *puVar1 = 0x6;
            }
            else {
                *puVar1 = 0x86;
            }
        }
        return 0xffffffff;
    }
switchD_000b2394_caseD_21:
    return 0x0;
}



void SetText(int param_1,int param_2,undefined *param_3,undefined4 param_4)

{
    int iVar1;
    int iVar2;
    undefined1 *puVar3;
    
    param_1 <<= 0x2;
    iVar2 = gTheGame._117088_4_;
    puVar3 = gTheGame + gTheGame._117088_4_ * 0x20;
    while( true ) {
        if (0x45 < iVar2) {
            gTheGame._117088_4_ = iVar2;
            return;
        }
        iVar1 = InitWhichNumber(puVar3 + 0x1c968,*param_3,param_4);
        if (iVar1 == 0x0) break;
        *(short *)(puVar3 + 0x1c968) = (short)param_1;
        iVar2 += 0x1;
        *(short *)(puVar3 + 0x1c970) = (short)(param_2 << 0x2);
        param_1 += 0x24;
        param_3 = param_3 + 0x1;
        puVar3 = puVar3 + 0x20;
    }
    gTheGame._117088_4_ = iVar2;
    return;
}



void UpdateText(void)

{
    int iVar1;
    int *piVar2;
    uint uVar3;
    short sVar5;
    undefined1 *puVar4;
    char *pcVar6;
    int iVar7;
    char local_3c [0x10];
    
    iVar7 = gTheGame._117088_4_;
    if (0x383 < gMain) {
        if (gTheGame._120328_4_ == 0x1) {
            if (gTheGame._120340_4_ == 0x0) {
                sprintf(local_3c,_721,gTheGame._120344_4_,gTheGame._120348_4_);
                pcVar6 = local_3c;
                sVar5 = 0xf0;
                puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                for (iVar7 = gTheGame._117088_4_; iVar7 < 0x46; iVar7 += 0x1) {
                    iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x14);
                    if (iVar1 == 0x0) break;
                    *(short *)(puVar4 + 0x1c968) = sVar5;
                    *(undefined2 *)(puVar4 + 0x1c970) = 0xa0;
                    sVar5 += 0x24;
                    pcVar6 = pcVar6 + 0x1;
                    puVar4 = puVar4 + 0x20;
                }
            }
            else {
                sprintf(local_3c,_722,gTheGame._120340_4_,gTheGame._120344_4_,gTheGame._120348_4_);
                pcVar6 = local_3c;
                sVar5 = 0x84;
                puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                for (iVar7 = gTheGame._117088_4_; iVar7 < 0x46; iVar7 += 0x1) {
                    iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x14);
                    if (iVar1 == 0x0) break;
                    *(short *)(puVar4 + 0x1c968) = sVar5;
                    *(undefined2 *)(puVar4 + 0x1c970) = 0xa0;
                    sVar5 += 0x24;
                    pcVar6 = pcVar6 + 0x1;
                    puVar4 = puVar4 + 0x20;
                }
            }
        }
        else if (gTheGame._120328_4_ == 0x2) {
            if (gTheGame._120340_4_ < 0x1) {
                sprintf(local_3c,_724,gTheGame._120344_4_,gTheGame._120348_4_);
                iVar7 = gTheGame._117088_4_;
                if (gTheGame._120344_4_ < 0xa) {
                    pcVar6 = local_3c;
                    sVar5 = 0x23c;
                    puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                    for (; iVar7 < 0x46; iVar7 += 0x1) {
                        iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x14);
                        if (iVar1 == 0x0) break;
                        *(short *)(puVar4 + 0x1c968) = sVar5;
                        *(undefined2 *)(puVar4 + 0x1c970) = 0x2c0;
                        sVar5 += 0x24;
                        pcVar6 = pcVar6 + 0x1;
                        puVar4 = puVar4 + 0x20;
                    }
                }
                else {
                    pcVar6 = local_3c;
                    sVar5 = 0x228;
                    puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                    for (; iVar7 < 0x46; iVar7 += 0x1) {
                        iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x14);
                        if (iVar1 == 0x0) break;
                        *(short *)(puVar4 + 0x1c968) = sVar5;
                        *(undefined2 *)(puVar4 + 0x1c970) = 0x2c0;
                        sVar5 += 0x24;
                        pcVar6 = pcVar6 + 0x1;
                        puVar4 = puVar4 + 0x20;
                    }
                }
            }
            else {
                sprintf(local_3c,_723);
                pcVar6 = local_3c;
                sVar5 = 0x228;
                puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                for (iVar7 = gTheGame._117088_4_; iVar7 < 0x46; iVar7 += 0x1) {
                    iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x14);
                    if (iVar1 == 0x0) break;
                    *(short *)(puVar4 + 0x1c968) = sVar5;
                    *(undefined2 *)(puVar4 + 0x1c970) = 0x2c0;
                    sVar5 += 0x24;
                    pcVar6 = pcVar6 + 0x1;
                    puVar4 = puVar4 + 0x20;
                }
            }
        }
    }
    gTheGame._117088_4_ = iVar7;
    if (gSelection == 0xa0) {
LAB_000b3620:
        sprintf(local_3c,(char *)&_733,gTheGame._19200_4_);
        iVar7 = gTheGame._117088_4_;
        if (gTheGame._19200_4_ < 0xa) {
            pcVar6 = local_3c;
            sVar5 = 0x24c;
            puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
            for (; iVar7 < 0x46; iVar7 += 0x1) {
                iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x17);
                if (iVar1 == 0x0) break;
                *(short *)(puVar4 + 0x1c968) = sVar5;
                *(undefined2 *)(puVar4 + 0x1c970) = 0x1c4;
                sVar5 += 0x24;
                pcVar6 = pcVar6 + 0x1;
                puVar4 = puVar4 + 0x20;
            }
        }
        else {
            pcVar6 = local_3c;
            sVar5 = 0x234;
            puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
            for (; iVar7 < 0x46; iVar7 += 0x1) {
                iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x17);
                if (iVar1 == 0x0) break;
                *(short *)(puVar4 + 0x1c968) = sVar5;
                *(undefined2 *)(puVar4 + 0x1c970) = 0x1c4;
                sVar5 += 0x24;
                pcVar6 = pcVar6 + 0x1;
                puVar4 = puVar4 + 0x20;
            }
        }
        gTheGame._117088_4_ = iVar7;
        sprintf(local_3c,(char *)&_733,gTheGame._41664_4_);
        iVar7 = gTheGame._117088_4_;
        if (gTheGame._41664_4_ < 0xa) {
            pcVar6 = local_3c;
            sVar5 = 0x290;
            puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
            for (; iVar7 < 0x46; iVar7 += 0x1) {
                iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x16);
                if (iVar1 == 0x0) break;
                *(short *)(puVar4 + 0x1c968) = sVar5;
                *(undefined2 *)(puVar4 + 0x1c970) = 0x1c4;
                sVar5 += 0x24;
                pcVar6 = pcVar6 + 0x1;
                puVar4 = puVar4 + 0x20;
            }
        }
        else {
            pcVar6 = local_3c;
            sVar5 = 0x284;
            puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
            for (; iVar7 < 0x46; iVar7 += 0x1) {
                iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x16);
                if (iVar1 == 0x0) break;
                *(short *)(puVar4 + 0x1c968) = sVar5;
                *(undefined2 *)(puVar4 + 0x1c970) = 0x1c4;
                sVar5 += 0x24;
                pcVar6 = pcVar6 + 0x1;
                puVar4 = puVar4 + 0x20;
            }
        }
        gTheGame._117088_4_ = iVar7;
        sprintf(local_3c,(char *)&_733,gTheGame._19208_4_);
        iVar7 = gTheGame._117088_4_;
        if (gTheGame._19208_4_ < 0xa) {
            pcVar6 = local_3c;
            sVar5 = 0x24c;
            puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
            for (; iVar7 < 0x46; iVar7 += 0x1) {
                iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x17);
                if (iVar1 == 0x0) break;
                *(short *)(puVar4 + 0x1c968) = sVar5;
                *(undefined2 *)(puVar4 + 0x1c970) = 0x23c;
                sVar5 += 0x24;
                pcVar6 = pcVar6 + 0x1;
                puVar4 = puVar4 + 0x20;
            }
        }
        else {
            pcVar6 = local_3c;
            sVar5 = 0x234;
            puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
            for (; iVar7 < 0x46; iVar7 += 0x1) {
                iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x17);
                if (iVar1 == 0x0) break;
                *(short *)(puVar4 + 0x1c968) = sVar5;
                *(undefined2 *)(puVar4 + 0x1c970) = 0x23c;
                sVar5 += 0x24;
                pcVar6 = pcVar6 + 0x1;
                puVar4 = puVar4 + 0x20;
            }
        }
        gTheGame._117088_4_ = iVar7;
        sprintf(local_3c,(char *)&_733,gTheGame._41672_4_);
        iVar7 = gTheGame._117088_4_;
        if (gTheGame._41672_4_ < 0xa) {
            pcVar6 = local_3c;
            sVar5 = 0x290;
            puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
            for (; iVar7 < 0x46; iVar7 += 0x1) {
                iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x16);
                if (iVar1 == 0x0) {
                    gTheGame._117088_4_ = iVar7;
                    return;
                }
                *(short *)(puVar4 + 0x1c968) = sVar5;
                *(undefined2 *)(puVar4 + 0x1c970) = 0x23c;
                sVar5 += 0x24;
                pcVar6 = pcVar6 + 0x1;
                puVar4 = puVar4 + 0x20;
            }
        }
        else {
            pcVar6 = local_3c;
            sVar5 = 0x27c;
            puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
            for (; iVar7 < 0x46; iVar7 += 0x1) {
                iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x16);
                if (iVar1 == 0x0) {
                    gTheGame._117088_4_ = iVar7;
                    return;
                }
                *(short *)(puVar4 + 0x1c968) = sVar5;
                *(undefined2 *)(puVar4 + 0x1c970) = 0x23c;
                sVar5 += 0x24;
                pcVar6 = pcVar6 + 0x1;
                puVar4 = puVar4 + 0x20;
            }
        }
    }
    else {
        if (gSelection < 0xa0) {
            if (gSelection != 0x8c) {
                if (0x8b < gSelection) {
                    return;
                }
                if (gSelection == 0x82) {
                    if (gTheGame._19200_4_ == 0x0) {
                        sprintf(local_3c,(char *)&_727,gTheGame._19204_4_);
                        pcVar6 = local_3c;
                        sVar5 = 0x430;
                        puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                        iVar7 = gTheGame._117088_4_;
                        while( true ) {
                            if (0x45 < iVar7) {
                                gTheGame._117088_4_ = iVar7;
                                return;
                            }
                            iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x16);
                            if (iVar1 == 0x0) break;
                            *(short *)(puVar4 + 0x1c968) = sVar5;
                            iVar7 += 0x1;
                            *(undefined2 *)(puVar4 + 0x1c970) = 0xcc;
                            sVar5 += 0x24;
                            pcVar6 = pcVar6 + 0x1;
                            puVar4 = puVar4 + 0x20;
                        }
                        gTheGame._117088_4_ = iVar7;
                        return;
                    }
                    if (gTheGame._19204_4_ < 0x10) {
                        uVar3 = 0x1;
                    }
                    else if (gTheGame._19204_4_ < 0x1f) {
                        uVar3 = 0x2;
                    }
                    else {
                        uVar3 = 0x3;
                    }
                    iVar7 = gTheGame._19204_4_ + (uVar3 - 0x1) * -0xf;
                    if (gTheGame._19200_4_ == 0x3) {
                        uVar3 += 0x3;
                    }
                    else if (gTheGame._19200_4_ == 0x2) {
                        uVar3 += 0x6;
                    }
                    else if (gTheGame._19200_4_ == 0x4) {
                        uVar3 += 0x9;
                    }
                    if (0x9 < uVar3) {
                        if (0x9 < iVar7) {
                            sprintf(local_3c,_731);
                            pcVar6 = local_3c;
                            sVar5 = 0x3c4;
                            puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                            iVar7 = gTheGame._117088_4_;
                            while( true ) {
                                if (0x45 < iVar7) {
                                    gTheGame._117088_4_ = iVar7;
                                    return;
                                }
                                iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x16);
                                if (iVar1 == 0x0) break;
                                *(short *)(puVar4 + 0x1c968) = sVar5;
                                iVar7 += 0x1;
                                *(undefined2 *)(puVar4 + 0x1c970) = 0xcc;
                                sVar5 += 0x24;
                                pcVar6 = pcVar6 + 0x1;
                                puVar4 = puVar4 + 0x20;
                            }
                            gTheGame._117088_4_ = iVar7;
                            return;
                        }
                        sprintf(local_3c,_730);
                        pcVar6 = local_3c;
                        sVar5 = 0x3e8;
                        puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                        iVar7 = gTheGame._117088_4_;
                        while( true ) {
                            if (0x45 < iVar7) {
                                gTheGame._117088_4_ = iVar7;
                                return;
                            }
                            iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x16);
                            if (iVar1 == 0x0) break;
                            *(short *)(puVar4 + 0x1c968) = sVar5;
                            iVar7 += 0x1;
                            *(undefined2 *)(puVar4 + 0x1c970) = 0xcc;
                            sVar5 += 0x24;
                            pcVar6 = pcVar6 + 0x1;
                            puVar4 = puVar4 + 0x20;
                        }
                        gTheGame._117088_4_ = iVar7;
                        return;
                    }
                    if (0x9 < iVar7) {
                        sprintf(local_3c,_729);
                        pcVar6 = local_3c;
                        sVar5 = 0x3e8;
                        puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                        iVar7 = gTheGame._117088_4_;
                        while( true ) {
                            if (0x45 < iVar7) {
                                gTheGame._117088_4_ = iVar7;
                                return;
                            }
                            iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x16);
                            if (iVar1 == 0x0) break;
                            *(short *)(puVar4 + 0x1c968) = sVar5;
                            iVar7 += 0x1;
                            *(undefined2 *)(puVar4 + 0x1c970) = 0xcc;
                            sVar5 += 0x24;
                            pcVar6 = pcVar6 + 0x1;
                            puVar4 = puVar4 + 0x20;
                        }
                        gTheGame._117088_4_ = iVar7;
                        return;
                    }
                    sprintf(local_3c,_728);
                    pcVar6 = local_3c;
                    sVar5 = 0x40c;
                    puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                    iVar7 = gTheGame._117088_4_;
                    while( true ) {
                        if (0x45 < iVar7) {
                            gTheGame._117088_4_ = iVar7;
                            return;
                        }
                        iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x16);
                        if (iVar1 == 0x0) break;
                        *(short *)(puVar4 + 0x1c968) = sVar5;
                        iVar7 += 0x1;
                        *(undefined2 *)(puVar4 + 0x1c970) = 0xcc;
                        sVar5 += 0x24;
                        pcVar6 = pcVar6 + 0x1;
                        puVar4 = puVar4 + 0x20;
                    }
                    gTheGame._117088_4_ = iVar7;
                    return;
                }
                if (0x81 < gSelection) {
                    return;
                }
                if (gSelection == 0x78) {
                    sprintf(local_3c,(char *)&_727,gTheGame._19204_4_);
                    pcVar6 = local_3c;
                    sVar5 = 0x430;
                    puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                    iVar7 = gTheGame._117088_4_;
                    while( true ) {
                        if (0x45 < iVar7) {
                            gTheGame._117088_4_ = iVar7;
                            return;
                        }
                        iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x16);
                        if (iVar1 == 0x0) break;
                        *(short *)(puVar4 + 0x1c968) = sVar5;
                        iVar7 += 0x1;
                        *(undefined2 *)(puVar4 + 0x1c970) = 0xcc;
                        sVar5 += 0x24;
                        pcVar6 = pcVar6 + 0x1;
                        puVar4 = puVar4 + 0x20;
                    }
                    gTheGame._117088_4_ = iVar7;
                    return;
                }
                return;
            }
        }
        else if (gSelection != 0xbe) {
            if (0xbd < gSelection) {
                if (gSelection != 0xc8) {
                    return;
                }
                iVar7 = gTheGame._19084_4_ / 0x186a0 + (gTheGame._19084_4_ >> 0x1f);
                sprintf(local_3c,(char *)&_732,
                        gTheGame._19084_4_ + (iVar7 - (iVar7 >> 0x1f)) * -0x186a0);
                pcVar6 = local_3c;
                sVar5 = 0x224;
                puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                for (iVar7 = gTheGame._117088_4_; iVar7 < 0x46; iVar7 += 0x1) {
                    iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x15);
                    if (iVar1 == 0x0) break;
                    *(short *)(puVar4 + 0x1c968) = sVar5;
                    *(undefined2 *)(puVar4 + 0x1c970) = 0x1b8;
                    sVar5 += 0x24;
                    pcVar6 = pcVar6 + 0x1;
                    puVar4 = puVar4 + 0x20;
                }
                iVar1 = gTheGame._41548_4_ / 0x186a0 + (gTheGame._41548_4_ >> 0x1f);
                gTheGame._117088_4_ = iVar7;
                sprintf(local_3c,(char *)&_732,
                        gTheGame._41548_4_ + (iVar1 - (iVar1 >> 0x1f)) * -0x186a0);
                pcVar6 = local_3c;
                sVar5 = 0x228;
                puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                for (iVar7 = gTheGame._117088_4_; iVar7 < 0x46; iVar7 += 0x1) {
                    iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x14);
                    if (iVar1 == 0x0) break;
                    *(short *)(puVar4 + 0x1c968) = sVar5;
                    *(undefined2 *)(puVar4 + 0x1c970) = 0x23c;
                    sVar5 += 0x24;
                    pcVar6 = pcVar6 + 0x1;
                    puVar4 = puVar4 + 0x20;
                }
                gTheGame._117088_4_ = iVar7;
                sprintf(local_3c,(char *)&_733,gTheGame._19208_4_);
                iVar7 = gTheGame._117088_4_;
                if (gTheGame._19208_4_ < 0xa) {
                    pcVar6 = local_3c;
                    sVar5 = 0x24c;
                    puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                    for (; iVar7 < 0x46; iVar7 += 0x1) {
                        iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x17);
                        if (iVar1 == 0x0) break;
                        *(short *)(puVar4 + 0x1c968) = sVar5;
                        *(undefined2 *)(puVar4 + 0x1c970) = 0xb0;
                        sVar5 += 0x24;
                        pcVar6 = pcVar6 + 0x1;
                        puVar4 = puVar4 + 0x20;
                    }
                }
                else {
                    pcVar6 = local_3c;
                    sVar5 = 0x234;
                    puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                    for (; iVar7 < 0x46; iVar7 += 0x1) {
                        iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x17);
                        if (iVar1 == 0x0) break;
                        *(short *)(puVar4 + 0x1c968) = sVar5;
                        *(undefined2 *)(puVar4 + 0x1c970) = 0xb0;
                        sVar5 += 0x24;
                        pcVar6 = pcVar6 + 0x1;
                        puVar4 = puVar4 + 0x20;
                    }
                }
                gTheGame._117088_4_ = iVar7;
                sprintf(local_3c,(char *)&_733,gTheGame._41672_4_);
                if (0x9 < gTheGame._41672_4_) {
                    pcVar6 = local_3c;
                    sVar5 = 0x274;
                    iVar7 = gTheGame._117088_4_;
                    puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                    while( true ) {
                        if (0x45 < iVar7) {
                            gTheGame._117088_4_ = iVar7;
                            return;
                        }
                        iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x16);
                        if (iVar1 == 0x0) break;
                        *(short *)(puVar4 + 0x1c968) = sVar5;
                        iVar7 += 0x1;
                        *(undefined2 *)(puVar4 + 0x1c970) = 0xb0;
                        sVar5 += 0x24;
                        pcVar6 = pcVar6 + 0x1;
                        puVar4 = puVar4 + 0x20;
                    }
                    gTheGame._117088_4_ = iVar7;
                    return;
                }
                pcVar6 = local_3c;
                sVar5 = 0x28c;
                iVar7 = gTheGame._117088_4_;
                puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                while( true ) {
                    if (0x45 < iVar7) {
                        gTheGame._117088_4_ = iVar7;
                        return;
                    }
                    iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x16);
                    if (iVar1 == 0x0) break;
                    *(short *)(puVar4 + 0x1c968) = sVar5;
                    iVar7 += 0x1;
                    *(undefined2 *)(puVar4 + 0x1c970) = 0xb0;
                    sVar5 += 0x24;
                    pcVar6 = pcVar6 + 0x1;
                    puVar4 = puVar4 + 0x20;
                }
                gTheGame._117088_4_ = iVar7;
                return;
            }
            if (gSelection != 0xb4) {
                if (0xb3 < gSelection) {
                    return;
                }
                if (gSelection != 0xaa) {
                    return;
                }
                iVar7 = gTheGame._117088_4_;
                if (gTheGame._19200_4_ != 0x5) {
                    sprintf(local_3c,_728,gTheGame._19204_4_,gTheGame._19208_4_);
                    pcVar6 = local_3c;
                    sVar5 = 0x40c;
                    puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                    for (iVar7 = gTheGame._117088_4_; iVar7 < 0x46; iVar7 += 0x1) {
                        iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x16);
                        if (iVar1 == 0x0) break;
                        *(short *)(puVar4 + 0x1c968) = sVar5;
                        *(undefined2 *)(puVar4 + 0x1c970) = 0xc0;
                        sVar5 += 0x24;
                        pcVar6 = pcVar6 + 0x1;
                        puVar4 = puVar4 + 0x20;
                    }
                }
                gTheGame._117088_4_ = iVar7;
                if (0xf423f < gTheGame._19084_4_) {
                    gTheGame._19084_4_ = 0xf423f;
                }
                sprintf(local_3c,(char *)&_725,gTheGame._19084_4_);
                pcVar6 = local_3c;
                sVar5 = 0x3a0;
                puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                for (iVar7 = gTheGame._117088_4_; iVar7 < 0x46; iVar7 += 0x1) {
                    iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x15);
                    if (iVar1 == 0x0) break;
                    *(short *)(puVar4 + 0x1c968) = sVar5;
                    *(undefined2 *)(puVar4 + 0x1c970) = 0x118;
                    sVar5 += 0x24;
                    pcVar6 = pcVar6 + 0x1;
                    puVar4 = puVar4 + 0x20;
                }
                gTheGame._117088_4_ = iVar7;
                if (0x0 < gTheGame._89868_4_) {
                    iVar7 = gTheGame._89868_4_ / 0x3c + (gTheGame._89868_4_ >> 0x1f);
                    sprintf(local_3c,(char *)&_726,iVar7 - (iVar7 >> 0x1f));
                    pcVar6 = local_3c;
                    sVar5 = 0x3e8;
                    iVar7 = gTheGame._117088_4_;
                    puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                    while( true ) {
                        if (0x45 < iVar7) {
                            gTheGame._117088_4_ = iVar7;
                            gTheGame._117216_4_ = 0xffffffff;
                            return;
                        }
                        iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x14);
                        if (iVar1 == 0x0) break;
                        *(short *)(puVar4 + 0x1c968) = sVar5;
                        iVar7 += 0x1;
                        *(undefined2 *)(puVar4 + 0x1c970) = 0x188;
                        sVar5 += 0x24;
                        pcVar6 = pcVar6 + 0x1;
                        puVar4 = puVar4 + 0x20;
                    }
                    gTheGame._117088_4_ = iVar7;
                    gTheGame._117216_4_ = 0xffffffff;
                    return;
                }
                iVar1 = DoFlashDraw(0x0);
                iVar7 = gTheGame._117088_4_;
                if (iVar1 != 0x0) {
                    sprintf(local_3c,(char *)&_727,gTheGame._19136_4_);
                    pcVar6 = local_3c;
                    sVar5 = 0x430;
                    puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                    for (iVar7 = gTheGame._117088_4_; iVar7 < 0x46; iVar7 += 0x1) {
                        iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x15);
                        if (iVar1 == 0x0) break;
                        *(short *)(puVar4 + 0x1c968) = sVar5;
                        *(undefined2 *)(puVar4 + 0x1c970) = 0x188;
                        sVar5 += 0x24;
                        pcVar6 = pcVar6 + 0x1;
                        puVar4 = puVar4 + 0x20;
                    }
                }
                gTheGame._117088_4_ = iVar7;
                if (gTheGame._19200_4_ == 0x5) {
                    return;
                }
                gTheGame._117216_4_ = 0x0;
                sprintf(local_3c,(char *)&_727,gTheGame._19204_4_);
                pcVar6 = local_3c;
                sVar5 = 0x430;
                iVar7 = gTheGame._117088_4_;
                puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                while( true ) {
                    if (0x45 < iVar7) {
                        gTheGame._117088_4_ = iVar7;
                        return;
                    }
                    iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x14);
                    if (iVar1 == 0x0) break;
                    *(short *)(puVar4 + 0x1c968) = sVar5;
                    iVar7 += 0x1;
                    *(undefined2 *)(puVar4 + 0x1c970) = 0x200;
                    sVar5 += 0x24;
                    pcVar6 = pcVar6 + 0x1;
                    puVar4 = puVar4 + 0x20;
                }
                gTheGame._117088_4_ = iVar7;
                return;
            }
            goto LAB_000b3620;
        }
        if (gSelection == 0x8c) {
            if (gTheGame._120332_4_ == 0x1) {
                piVar2 = (int *)(gPlayer._0_4_ + 0x10);
            }
            else {
                piVar2 = (int *)(gPlayer._0_4_ + 0x14);
            }
        }
        else if (gTheGame._120332_4_ == 0x1) {
            piVar2 = (int *)(gPlayer._0_4_ + 0x18);
        }
        else {
            piVar2 = (int *)(gPlayer._0_4_ + 0x1c);
        }
        if (0xf423f < gTheGame._19084_4_) {
            gTheGame._19084_4_ = 0xf423f;
        }
        if (((gDemo == 0x2c) && (gTheGame._19200_4_ != 0x0)) && (*piVar2 < gTheGame._19084_4_)) {
            *piVar2 = gTheGame._19084_4_;
        }
        sprintf(local_3c,(char *)&_725,*piVar2);
        pcVar6 = local_3c;
        sVar5 = 0x3a0;
        puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
        for (iVar7 = gTheGame._117088_4_; iVar7 < 0x46; iVar7 += 0x1) {
            iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x16);
            if (iVar1 == 0x0) break;
            *(short *)(puVar4 + 0x1c968) = sVar5;
            *(undefined2 *)(puVar4 + 0x1c970) = 0xc4;
            sVar5 += 0x24;
            pcVar6 = pcVar6 + 0x1;
            puVar4 = puVar4 + 0x20;
        }
        gTheGame._117088_4_ = iVar7;
        sprintf(local_3c,(char *)&_725,gTheGame._19084_4_);
        pcVar6 = local_3c;
        sVar5 = 0x3a0;
        puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
        for (iVar7 = gTheGame._117088_4_; iVar7 < 0x46; iVar7 += 0x1) {
            iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x15);
            if (iVar1 == 0x0) break;
            *(short *)(puVar4 + 0x1c968) = sVar5;
            *(undefined2 *)(puVar4 + 0x1c970) = 0x118;
            sVar5 += 0x24;
            pcVar6 = pcVar6 + 0x1;
            puVar4 = puVar4 + 0x20;
        }
        gTheGame._117088_4_ = iVar7;
        if (gTheGame._89868_4_ < 0x1) {
            iVar1 = DoFlashDraw(0x0);
            iVar7 = gTheGame._117088_4_;
            if (iVar1 != 0x0) {
                sprintf(local_3c,(char *)&_727,gTheGame._19136_4_);
                pcVar6 = local_3c;
                sVar5 = 0x430;
                puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
                for (iVar7 = gTheGame._117088_4_; iVar7 < 0x46; iVar7 += 0x1) {
                    iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x15);
                    if (iVar1 == 0x0) break;
                    *(short *)(puVar4 + 0x1c968) = sVar5;
                    *(undefined2 *)(puVar4 + 0x1c970) = 0x188;
                    sVar5 += 0x24;
                    pcVar6 = pcVar6 + 0x1;
                    puVar4 = puVar4 + 0x20;
                }
            }
            gTheGame._117088_4_ = iVar7;
            gTheGame._117216_4_ = 0x0;
            iVar7 = gTheGame._117088_4_;
            if (gTheGame._19200_4_ < 0x2) {
                gTheGame._117248_4_ = 0x1;
            }
            else {
                gTheGame._117248_4_ = 0x2;
            }
        }
        else {
            iVar7 = gTheGame._89868_4_ / 0x3c + (gTheGame._89868_4_ >> 0x1f);
            sprintf(local_3c,(char *)&_726,iVar7 - (iVar7 >> 0x1f));
            pcVar6 = local_3c;
            sVar5 = 0x3e8;
            puVar4 = gTheGame + gTheGame._117088_4_ * 0x20;
            for (iVar7 = gTheGame._117088_4_; iVar7 < 0x46; iVar7 += 0x1) {
                iVar1 = InitWhichNumber(puVar4 + 0x1c968,*pcVar6,0x14);
                if (iVar1 == 0x0) break;
                *(short *)(puVar4 + 0x1c968) = sVar5;
                *(undefined2 *)(puVar4 + 0x1c970) = 0x188;
                sVar5 += 0x24;
                pcVar6 = pcVar6 + 0x1;
                puVar4 = puVar4 + 0x20;
            }
            gTheGame._117216_4_ = 0xffffffff;
            gTheGame._117248_4_ = 0xffffffff;
        }
    }
    gTheGame._117088_4_ = iVar7;
    return;
}



void pon_UpdateText4p(void)

{
    undefined1 *puVar1;
    undefined1 *puVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined1 *puVar6;
    int *piVar7;
    short sVar9;
    int iVar8;
    int iVar10;
    int *piVar11;
    short sVar12;
    int iVar13;
    uint uVar14;
    int local_6c [0x4];
    int local_5c [0x5];
    
    puVar2 = gTheGame;
    iVar5 = 0x0;
    if (0x0 < gTheGame._120328_4_) {
        if (0x8 < gTheGame._120328_4_) {
            uVar14 = gTheGame._120328_4_ - 0x1U >> 0x3;
            piVar7 = local_6c;
            if (0x0 < gTheGame._120328_4_ + -0x8) {
                do {
                    *piVar7 = (int)puVar2;
                    piVar7[0x1] = (int)(puVar2 + 0x57c0);
                    piVar7[0x2] = (int)(puVar2 + 0xaf80);
                    piVar7[0x3] = (int)(puVar2 + 0x10740);
                    piVar7[0x4] = (int)(puVar2 + 0x15f00);
                    puVar6 = puVar2 + 0x20e80;
                    puVar1 = puVar2 + 0x26640;
                    piVar7[0x5] = (int)(puVar2 + 0x1b6c0);
                    puVar2 = puVar2 + 0x2be00;
                    iVar5 += 0x8;
                    piVar7[0x6] = (int)puVar6;
                    piVar7[0x7] = (int)puVar1;
                    piVar7 = piVar7 + 0x8;
                    uVar14 -= 0x1;
                } while (uVar14 != 0x0);
            }
        }
        puVar2 = gTheGame + iVar5 * 0x57c0;
        piVar7 = local_6c + iVar5;
        iVar3 = gTheGame._120328_4_ - iVar5;
        if (iVar5 < gTheGame._120328_4_) {
            do {
                *piVar7 = (int)puVar2;
                puVar2 = puVar2 + 0x57c0;
                piVar7 = piVar7 + 0x1;
                iVar3 += -0x1;
            } while (iVar3 != 0x0);
        }
    }
    iVar5 = gTheGame._117088_4_;
    if (0x383 < gMain) {
        if (gTheGame._120340_4_ < 0x1) {
            sprintf((char *)local_5c,_724,gTheGame._120344_4_,gTheGame._120348_4_);
            iVar5 = gTheGame._117088_4_;
            if (gTheGame._120344_4_ < 0xa) {
                piVar7 = local_5c;
                sVar9 = 0x274;
                puVar2 = gTheGame + gTheGame._117088_4_ * 0x20;
                for (; iVar5 < 0x46; iVar5 += 0x1) {
                    iVar3 = InitWhichNumber(puVar2 + 0x1c968,*(undefined *)piVar7,0x14);
                    if (iVar3 == 0x0) break;
                    *(short *)(puVar2 + 0x1c968) = sVar9;
                    *(undefined2 *)(puVar2 + 0x1c970) = 0x4c;
                    sVar9 += 0x24;
                    piVar7 = (int *)((int)piVar7 + 0x1);
                    puVar2 = puVar2 + 0x20;
                }
            }
            else {
                piVar7 = local_5c;
                sVar9 = 0x274;
                puVar2 = gTheGame + gTheGame._117088_4_ * 0x20;
                for (; iVar5 < 0x46; iVar5 += 0x1) {
                    iVar3 = InitWhichNumber(puVar2 + 0x1c968,*(undefined *)piVar7,0x14);
                    if (iVar3 == 0x0) break;
                    *(short *)(puVar2 + 0x1c968) = sVar9;
                    *(undefined2 *)(puVar2 + 0x1c970) = 0x4c;
                    sVar9 += 0x24;
                    piVar7 = (int *)((int)piVar7 + 0x1);
                    puVar2 = puVar2 + 0x20;
                }
            }
        }
        else {
            sprintf((char *)local_5c,_723);
            piVar7 = local_5c;
            sVar9 = 0x274;
            puVar2 = gTheGame + gTheGame._117088_4_ * 0x20;
            for (iVar5 = gTheGame._117088_4_; iVar5 < 0x46; iVar5 += 0x1) {
                iVar3 = InitWhichNumber(puVar2 + 0x1c968,*(undefined *)piVar7,0x14);
                if (iVar3 == 0x0) break;
                *(short *)(puVar2 + 0x1c968) = sVar9;
                *(undefined2 *)(puVar2 + 0x1c970) = 0x4c;
                sVar9 += 0x24;
                piVar7 = (int *)((int)piVar7 + 0x1);
                puVar2 = puVar2 + 0x20;
            }
        }
    }
    gTheGame._117088_4_ = iVar5;
    puVar2 = gTheGame;
    local_5c[3] = 0x186a0;
    piVar7 = local_6c;
    iVar5 = 0x0;
    iVar3 = 0x2d;
    sVar9 = 0xb4;
    do {
        if (gTheGame._120328_4_ <= iVar5) {
            return;
        }
        if (*(int *)(puVar2 + 0x16000) == 0x1) {
            iVar10 = 0xfa;
            iVar8 = 0xfa;
        }
        else {
            iVar10 = 0x4b;
            iVar8 = 0x3b;
        }
        if (gSelection == 0xdc) {
LAB_000b3d44:
            iVar10 = *(int *)(*piVar7 + 0x4b08);
            sprintf((char *)local_5c,(char *)&_733,iVar10);
            iVar13 = gTheGame._117088_4_;
            if (iVar10 < 0xa) {
                piVar11 = local_5c;
                iVar10 = iVar3 << 0x2;
                puVar1 = gTheGame + gTheGame._117088_4_ * 0x20;
                for (; iVar13 < 0x46; iVar13 += 0x1) {
                    iVar4 = InitWhichNumber(puVar1 + 0x1c968,*(undefined *)piVar11,0x15);
                    if (iVar4 == 0x0) break;
                    *(short *)(puVar1 + 0x1c968) = (short)iVar10;
                    *(short *)(puVar1 + 0x1c970) = (short)(iVar8 << 0x2);
                    iVar10 += 0x24;
                    piVar11 = (int *)((int)piVar11 + 0x1);
                    puVar1 = puVar1 + 0x20;
                }
            }
            else {
                piVar11 = local_5c;
                iVar10 = iVar3 << 0x2;
                puVar1 = gTheGame + gTheGame._117088_4_ * 0x20;
                for (; iVar13 < 0x46; iVar13 += 0x1) {
                    iVar4 = InitWhichNumber(puVar1 + 0x1c968,*(undefined *)piVar11,0x15);
                    if (iVar4 == 0x0) break;
                    *(short *)(puVar1 + 0x1c968) = (short)iVar10;
                    *(short *)(puVar1 + 0x1c970) = (short)(iVar8 << 0x2);
                    iVar10 += 0x24;
                    piVar11 = (int *)((int)piVar11 + 0x1);
                    puVar1 = puVar1 + 0x20;
                }
            }
        }
        else {
            iVar13 = gTheGame._117088_4_;
            if (gSelection < 0xdc) {
                if (gSelection == 0xd2) goto LAB_000b3d44;
            }
            else if (gSelection == 0xe6) {
                iVar13 = *(int *)(*piVar7 + 0x4a8c);
                iVar4 = iVar13 / 0x186a0 + (iVar13 >> 0x1f);
                sprintf((char *)local_5c,(char *)&_732,
                        iVar13 - (iVar4 - (iVar4 >> 0x1f)) * local_5c[3]);
                piVar11 = local_5c;
                puVar1 = gTheGame + gTheGame._117088_4_ * 0x20;
                sVar12 = sVar9;
                for (iVar13 = gTheGame._117088_4_; iVar13 < 0x46; iVar13 += 0x1) {
                    iVar4 = InitWhichNumber(puVar1 + 0x1c968,*(undefined *)piVar11,0x15);
                    if (iVar4 == 0x0) break;
                    *(short *)(puVar1 + 0x1c968) = sVar12;
                    *(short *)(puVar1 + 0x1c970) = (short)(iVar10 << 0x2);
                    sVar12 += 0x24;
                    piVar11 = (int *)((int)piVar11 + 0x1);
                    puVar1 = puVar1 + 0x20;
                }
                iVar10 = *(int *)(*piVar7 + 0x4b08);
                gTheGame._117088_4_ = iVar13;
                sprintf((char *)local_5c,(char *)&_733,iVar10);
                iVar13 = gTheGame._117088_4_;
                if (iVar10 < 0xa) {
                    piVar11 = local_5c;
                    puVar1 = gTheGame + gTheGame._117088_4_ * 0x20;
                    sVar12 = sVar9;
                    for (; iVar13 < 0x46; iVar13 += 0x1) {
                        iVar10 = InitWhichNumber(puVar1 + 0x1c968,*(undefined *)piVar11,0x15);
                        if (iVar10 == 0x0) break;
                        *(short *)(puVar1 + 0x1c968) = sVar12;
                        *(short *)(puVar1 + 0x1c970) = (short)(iVar8 << 0x2);
                        sVar12 += 0x24;
                        piVar11 = (int *)((int)piVar11 + 0x1);
                        puVar1 = puVar1 + 0x20;
                    }
                }
                else {
                    piVar11 = local_5c;
                    puVar1 = gTheGame + gTheGame._117088_4_ * 0x20;
                    sVar12 = sVar9;
                    for (; iVar13 < 0x46; iVar13 += 0x1) {
                        iVar10 = InitWhichNumber(puVar1 + 0x1c968,*(undefined *)piVar11,0x15);
                        if (iVar10 == 0x0) break;
                        *(short *)(puVar1 + 0x1c968) = sVar12;
                        *(short *)(puVar1 + 0x1c970) = (short)(iVar8 << 0x2);
                        sVar12 += 0x24;
                        piVar11 = (int *)((int)piVar11 + 0x1);
                        puVar1 = puVar1 + 0x20;
                    }
                }
            }
        }
        gTheGame._117088_4_ = iVar13;
        puVar2 = puVar2 + 0x110;
        piVar7 = piVar7 + 0x1;
        iVar3 += 0x44;
        sVar9 += 0x110;
        iVar5 += 0x1;
    } while( true );
}



void Draw2DTemplate(int param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    puVar1 = glistp;
    iVar4 = -0x1;
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar2;
    puVar1[0x1] = 0x8000;
    pon_gSPObjLoadTxtr(&glistp,&otherLUT);
    iVar5 = 0x0;
    do {
        iVar3 = *(int *)(param_1 + 0x312e0);
        if (iVar3 != -0x1) {
            if (0xa < iVar3) {
                iVar3 = 0x19;
            }
            if (iVar3 != iVar4) {
                iVar4 = iVar3;
                switch(iVar3) {
                case 0x0:
                    pon_gSPObjLoadTxtr(&glistp,&otherTexture1);
                    break;
                case 0x1:
                    pon_gSPObjLoadTxtr(&glistp,&otherTexture2);
                    break;
                case 0x2:
                    pon_gSPObjLoadTxtr(&glistp,&otherTexture3);
                    *(undefined2 *)(param_1 + 0x312cc) = 0x7e0;
                    break;
                case 0x3:
                    pon_gSPObjLoadTxtr(&glistp,&otherTexture4);
                    break;
                case 0x4:
                    pon_gSPObjLoadTxtr(&glistp,&otherTexture5);
                    break;
                case 0x5:
                    pon_gSPObjLoadTxtr(&glistp,&otherTexture7);
                    break;
                case 0x6:
                    pon_gSPObjLoadTxtr(&glistp,&otherTexture8);
                    break;
                case 0x7:
                    pon_gSPObjLoadTxtr(&glistp,&otherTexture12);
                    break;
                case 0x8:
                    pon_gSPObjLoadTxtr(&glistp,&otherTexture13);
                    break;
                case 0x9:
                    pon_gSPObjLoadTxtr(&glistp,&otherTexture14);
                    break;
                case 0xa:
                    pon_gSPObjLoadTxtr(&glistp,&otherTexture15);
                    break;
                default:
                    pon_gSPObjLoadTxtr(&glistp,&otherTexture6);
                }
            }
            pon_gSPObjRectangle(&glistp,param_1 + 0x312c8);
        }
        iVar5 += 0x1;
        param_1 += 0x20;
    } while (iVar5 < 0x5);
    return;
}



void Draw2DText(int param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    char *pcVar7;
    undefined1 *puVar8;
    undefined1 *puVar9;
    int iVar10;
    char local_54 [0x8];
    undefined4 *local_4c;
    
    Draw2DTemplate();
    bzero(local_54,0x6);
    puVar1 = glistp;
    iVar10 = 0xd;
    iVar4 = param_1 + 0xa0;
    iVar5 = 0x5;
    do {
        iVar3 = *(int *)(iVar4 + 0x312e0);
        if ((iVar3 < 0x0) || (0x5 < iVar3)) {
            iVar6 = iVar5;
            if (iVar3 == -0x1) break;
        }
        else {
            local_54[iVar3] = '\x01';
        }
        iVar3 = *(int *)(iVar4 + 0x31300);
        iVar6 = iVar5 + 0x1;
        if ((iVar3 < 0x0) || (0x5 < iVar3)) {
            if (iVar3 == -0x1) break;
        }
        else {
            local_54[iVar3] = '\x01';
        }
        iVar3 = *(int *)(iVar4 + 0x31320);
        iVar6 = iVar5 + 0x2;
        if ((iVar3 < 0x0) || (0x5 < iVar3)) {
            if (iVar3 == -0x1) break;
        }
        else {
            local_54[iVar3] = '\x01';
        }
        iVar3 = *(int *)(iVar4 + 0x31340);
        iVar6 = iVar5 + 0x3;
        if ((iVar3 < 0x0) || (0x5 < iVar3)) {
            if (iVar3 == -0x1) break;
        }
        else {
            local_54[iVar3] = '\x01';
        }
        iVar3 = *(int *)(iVar4 + 0x31360);
        iVar6 = iVar5 + 0x4;
        if ((iVar3 < 0x0) || (0x5 < iVar3)) {
            if (iVar3 == -0x1) break;
        }
        else {
            local_54[iVar3] = '\x01';
        }
        iVar4 += 0xa0;
        iVar5 += 0x5;
        iVar10 += -0x1;
        iVar6 = 0x0;
    } while (iVar10 != 0x0);
    puVar2 = glistp + 0x2;
    *glistp = 0xe7000000;
    glistp = puVar2;
    puVar1[0x1] = 0x0;
    puVar1 = glistp;
    puVar2 = glistp + 0x2;
    *glistp = 0xe3001001;
    glistp = puVar2;
    puVar1[0x1] = 0x8000;
    pon_gSPObjLoadTxtr(&glistp,&numberLUT);
    local_4c = &glistp;
    pcVar7 = local_54;
    iVar4 = 0x0;
    do {
        if (*pcVar7 != '\0') {
            if (iVar4 == 0x3) {
                pon_gSPObjLoadTxtr(&glistp,&numberTexture4);
            }
            else if (iVar4 < 0x3) {
                if (iVar4 == 0x1) {
                    pon_gSPObjLoadTxtr(&glistp,&numberTexture2);
                }
                else if (iVar4 < 0x1) {
                    if (-0x1 < iVar4) {
                        pon_gSPObjLoadTxtr(&glistp,&numberTexture1);
                    }
                }
                else {
                    pon_gSPObjLoadTxtr(&glistp,&numberTexture3);
                }
            }
            else if (iVar4 == 0x5) {
                pon_gSPObjLoadTxtr(local_4c,&numberTexture6);
            }
            else if (iVar4 < 0x5) {
                pon_gSPObjLoadTxtr(&glistp,&numberTexture5);
            }
            iVar5 = param_1 + 0xa0;
            for (iVar10 = 0x5; iVar10 < iVar6; iVar10 += 0x1) {
                if (*(int *)(iVar5 + 0x312e0) == iVar4) {
                    pon_gSPObjRectangle(&glistp,iVar5 + 0x312c8);
                }
                iVar5 += 0x20;
            }
        }
        iVar4 += 0x1;
        pcVar7 = pcVar7 + 0x1;
    } while (iVar4 < 0x6);
    if ((gTheGame._120328_4_ == 0x2) && (gMain != 0x36d)) {
        pon_gSPObjLoadTxtr(&glistp,&shadow2Texture);
        pon_gSPObjRectangle(&glistp,mini_shadow);
        pon_gSPObjRectangle(&glistp,0x1ad700);
    }
    if ((0x2 < gTheGame._120328_4_) && (gMain != 0x36d)) {
        pon_gSPObjLoadTxtr(&glistp,&shadow2Texture);
        puVar9 = gTheGame;
        puVar8 = mini_shadow;
        for (iVar4 = 0x0; iVar4 < gTheGame._120328_4_; iVar4 += 0x1) {
            if (*(int *)(puVar9 + 0x16000) != 0x1) {
                pon_gSPObjRectangle(&glistp,puVar8);
            }
            puVar9 = puVar9 + 0x110;
            puVar8 = puVar8 + 0x18;
        }
    }
    return;
}



void Draw3DText(int param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    uint *puVar3;
    uint *puVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    char *pcVar9;
    undefined *puVar10;
    undefined *puVar11;
    int iVar12;
    char local_64 [0x8];
    int local_5c;
    undefined *local_58;
    undefined *local_54;
    int local_50;
    
    local_5c = param_1;
    bzero(local_64,0x6);
    puVar1 = glistp;
    iVar12 = 0xd;
    iVar6 = 0x5;
    iVar8 = local_5c;
    do {
        iVar5 = *(int *)(iVar8 + 0x31380);
        if ((iVar5 < 0x0) || (0x5 < iVar5)) {
            iVar7 = iVar6;
            if (iVar5 == -0x1) break;
        }
        else {
            local_64[iVar5] = '\x01';
        }
        iVar5 = *(int *)(iVar8 + 0x313a0);
        iVar7 = iVar6 + 0x1;
        if ((iVar5 < 0x0) || (0x5 < iVar5)) {
            if (iVar5 == -0x1) break;
        }
        else {
            local_64[iVar5] = '\x01';
        }
        iVar5 = *(int *)(iVar8 + 0x313c0);
        iVar7 = iVar6 + 0x2;
        if ((iVar5 < 0x0) || (0x5 < iVar5)) {
            if (iVar5 == -0x1) break;
        }
        else {
            local_64[iVar5] = '\x01';
        }
        iVar5 = *(int *)(iVar8 + 0x313e0);
        iVar7 = iVar6 + 0x3;
        if ((iVar5 < 0x0) || (0x5 < iVar5)) {
            if (iVar5 == -0x1) break;
        }
        else {
            local_64[iVar5] = '\x01';
        }
        iVar5 = *(int *)(iVar8 + 0x31400);
        iVar7 = iVar6 + 0x4;
        if ((iVar5 < 0x0) || (0x5 < iVar5)) {
            if (iVar5 == -0x1) break;
        }
        else {
            local_64[iVar5] = '\x01';
        }
        iVar6 += 0x5;
        iVar12 += -0x1;
        iVar7 = 0x0;
        iVar8 = iVar8 + 0xa0;
    } while (iVar12 != 0x0);
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
    puVar3 = glistp + 0x2;
    *glistp = 0xe2001e01;
    glistp = puVar3;
    puVar1[0x1] = 0x1;
    Set3DTile();
    local_58 = &w_text5;
    local_54 = &w_text6;
    local_50 = iVar7 + -0x5;
    pcVar9 = local_64;
    iVar8 = 0x0;
    puVar10 = NULL;
    do {
        puVar11 = puVar10;
        if (*pcVar9 != '\0') {
            if (iVar8 == 0x3) {
                puVar11 = w_text4;
            }
            else if (iVar8 < 0x3) {
                if (iVar8 == 0x1) {
                    puVar11 = &w_text2;
                }
                else if (iVar8 < 0x1) {
                    puVar11 = w_text1;
                    if (iVar8 < 0x0) {
                        puVar11 = puVar10;
                    }
                }
                else {
                    puVar11 = &w_text3;
                }
            }
            else if (iVar8 == 0x5) {
                puVar11 = &w_text6;
            }
            else if (iVar8 < 0x5) {
                puVar11 = &w_text5;
            }
            iVar12 = local_5c + 0xa0;
            iVar6 = iVar7 + -0x5;
            if (0x5 < iVar7) {
                do {
                    puVar3 = glistp;
                    if (*(int *)(iVar12 + 0x312e0) == iVar8) {
                        puVar4 = glistp + 0x2;
                        *glistp = 0xfd500000;
                        glistp = puVar4;
                        puVar3[0x1] = (uint)puVar11;
                        puVar3 = glistp;
                        puVar4 = glistp + 0x2;
                        *glistp = 0xf5500000;
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
                        puVar3[0x1] = 0x73ff100;
                        puVar3 = glistp;
                        puVar4 = glistp + 0x2;
                        *glistp = 0xe7000000;
                        glistp = puVar4;
                        puVar3[0x1] = 0x0;
                        puVar3 = glistp;
                        puVar4 = glistp + 0x2;
                        *glistp = 0xf5481000;
                        glistp = puVar4;
                        puVar3[0x1] = 0x0;
                        puVar3 = glistp;
                        puVar4 = glistp + 0x2;
                        *glistp = 0xf2000000;
                        glistp = puVar4;
                        puVar3[0x1] = 0xfc07c;
                        puVar3 = glistp;
                        puVar4 = glistp + 0x2;
                        *glistp = *(ushort *)(iVar12 + 0x312da) & 0x1ff | 0xf5481000;
                        glistp = puVar4;
                        puVar3[0x1] = 0x0;
                        puVar3 = glistp;
                        puVar4 = glistp + 0x2;
                        *glistp = 0xf2000000;
                        glistp = puVar4;
                        puVar3[0x1] = 0x3c03c;
                        puVar3 = glistp;
                        puVar4 = glistp + 0x2;
                        *glistp = (((int)*(short *)(iVar12 + 0x312c8) >> 0x2) + 0xb) * 0x4000 &
                                  0xffc000U | 0xe4000000 |
                                  (((int)*(short *)(iVar12 + 0x312d0) >> 0x2) + 0xf) * 0x4 & 0xffcU;
                        glistp = puVar4;
                        puVar3[0x1] = ((int)*(short *)(iVar12 + 0x312c8) & 0xfffU) << 0xc |
                                      (int)*(short *)(iVar12 + 0x312d0) & 0xfffU;
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
                    }
                    iVar12 += 0x20;
                    iVar6 += -0x1;
                } while (iVar6 != 0x0);
            }
        }
        iVar8 += 0x1;
        pcVar9 = pcVar9 + 0x1;
        puVar10 = puVar11;
    } while (iVar8 < 0x6);
    return;
}

