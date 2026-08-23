
undefined4
screenGetTextData(int param_1,int param_2,uint *param_3,int *param_4,undefined4 *param_5,int param_6
                 )

{
    ushort uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    undefined4 uVar8;
    
    *param_5 = 0x0;
    *param_4 = 0x0;
    *param_3 = 0x0;
    param_3[0x1] = 0x0;
    param_3[0x2] = 0x0;
    param_3[0x3] = 0x0;
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x50) + param_2 * 0x2);
    if (uVar1 == 0x0) {
        return 0x0;
    }
    uVar7 = uVar1 & 0x3ff;
    uVar8 = 0x0;
    iVar2 = 0x0;
    uVar5 = 0x0;
    uVar6 = 0x0;
    iVar3 = -0x1;
    iVar4 = -0x1;
    if (false) {
switchD_000937e0_caseD_12:
        uVar8 = 0x0;
    }
    else {
        switch(uVar1 >> 0xa) {
        case 0x0:
            if (uVar7 == 0x1) {
                uVar7 = *(uint *)(param_1 + 0x44);
                if ((uVar7 & 0x2000000) == 0x0) {
                    if ((uVar7 & 0x80000) == 0x0) {
                        if ((uVar7 & 0x800) == 0x0) {
                            uVar8 = 0xa;
                        }
                        else {
                            uVar8 = *(undefined4 *)(param_1 + 0x3c);
                        }
                    }
                    else if ((uVar7 & 0x800) == 0x0) {
                        uVar8 = 0x9;
                    }
                    else {
                        uVar8 = *(undefined4 *)(param_1 + 0x3c);
                    }
                }
                else if ((uVar7 & 0x800) == 0x0) {
                    uVar8 = 0x7;
                }
                else {
                    uVar8 = *(undefined4 *)(param_1 + 0x3c);
                }
            }
            break;
        case 0x1:
            if ((*(uint *)(param_1 + 0x44) & 0x2000000) != 0x0) {
                return 0x0;
            }
            if ((*(uint *)(param_1 + 0x44) & 0x80000) == 0x0) {
                uVar6 = 0x11;
                uVar5 = 0x11;
                iVar2 = gpImageKanji;
                if ((param_6 != 0x0) && (gpImageKanji == 0x0)) {
                    imageLoad(&gpImageKanji,_409,&gpHeapNext);
                    iVar2 = gpImageKanji;
                }
            }
            else {
                uVar6 = 0xe;
                uVar5 = 0xe;
                iVar2 = gpImageDialogKanji;
                if ((param_6 != 0x0) && (gpImageDialogKanji == 0x0)) {
                    imageLoad(&gpImageDialogKanji,_408,&gpHeapNext);
                    iVar2 = gpImageDialogKanji;
                }
            }
            uVar8 = 0xfffffffe;
            iVar4 = uVar7 - 0x1;
            iVar3 = iVar4 / 0x5 + (iVar4 >> 0x1f);
            iVar4 += (iVar3 - (iVar3 >> 0x1f)) * -0x5;
            iVar3 -= iVar3 >> 0x1f;
            break;
        case 0x2:
            if ((*(uint *)(param_1 + 0x44) & 0x2000000) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x80000) == 0x0) {
                    uVar6 = 0x11;
                    uVar5 = 0x11;
                    iVar2 = gpImageKatakana;
                    if ((param_6 != 0x0) && (gpImageKatakana == 0x0)) {
                        imageLoad(&gpImageKatakana,_412,&gpHeapNext);
                        iVar2 = gpImageKatakana;
                    }
                }
                else {
                    uVar6 = 0xe;
                    uVar5 = 0xe;
                    iVar2 = gpImageDialogKatakana;
                    if ((param_6 != 0x0) && (gpImageDialogKatakana == 0x0)) {
                        imageLoad(&gpImageDialogKatakana,_411,&gpHeapNext);
                        iVar2 = gpImageDialogKatakana;
                    }
                }
            }
            else {
                uVar6 = 0x9;
                uVar5 = 0x9;
                iVar2 = gpImageRecordKatakana;
                if ((param_6 != 0x0) && (gpImageRecordKatakana == 0x0)) {
                    imageLoad(&gpImageRecordKatakana,_410,&gpHeapNext);
                    iVar2 = gpImageRecordKatakana;
                }
            }
            uVar8 = 0xfffffffe;
            if (0x24 < uVar7) {
                uVar7 += 0x1;
            }
            if (0x26 < uVar7) {
                uVar7 += 0x1;
            }
            if (0x2e < uVar7) {
                uVar7 += 0x1;
            }
            if (0x30 < uVar7) {
                uVar7 += 0x1;
            }
            if (0x47 < uVar7) {
                uVar7 += 0x4;
            }
            if (uVar7 < 0x33) {
                iVar4 = uVar7 - 0x1;
                iVar3 = iVar4 / 0x5 + (iVar4 >> 0x1f);
                iVar4 += (iVar3 - (iVar3 >> 0x1f)) * -0x5;
                iVar3 -= iVar3 >> 0x1f;
            }
            else {
                iVar4 = uVar7 - 0x33;
                iVar3 = iVar4 / 0x5 + (iVar4 >> 0x1f);
                iVar4 = iVar4 + (iVar3 - (iVar3 >> 0x1f)) * -0x5 + 0x5;
                iVar3 -= iVar3 >> 0x1f;
            }
            break;
        case 0x3:
            if ((*(uint *)(param_1 + 0x44) & 0x2000000) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x80000) == 0x0) {
                    uVar6 = 0x11;
                    uVar5 = 0x11;
                    iVar2 = gpImageHiragana;
                    if ((param_6 != 0x0) && (gpImageHiragana == 0x0)) {
                        imageLoad(&gpImageHiragana,_415,&gpHeapNext);
                        iVar2 = gpImageHiragana;
                    }
                }
                else {
                    uVar6 = 0xe;
                    uVar5 = 0xe;
                    iVar2 = gpImageDialogHiragana;
                    if ((param_6 != 0x0) && (gpImageDialogHiragana == 0x0)) {
                        imageLoad(&gpImageDialogHiragana,_414,&gpHeapNext);
                        iVar2 = gpImageDialogHiragana;
                    }
                }
            }
            else {
                uVar6 = 0x9;
                uVar5 = 0x9;
                iVar2 = gpImageRecordHiragana;
                if ((param_6 != 0x0) && (gpImageRecordHiragana == 0x0)) {
                    imageLoad(&gpImageRecordHiragana,_413,&gpHeapNext);
                    iVar2 = gpImageRecordHiragana;
                }
            }
            uVar8 = 0xfffffffe;
            if (0x24 < uVar7) {
                uVar7 += 0x1;
            }
            if (0x26 < uVar7) {
                uVar7 += 0x1;
            }
            if (0x2e < uVar7) {
                uVar7 += 0x1;
            }
            if (0x30 < uVar7) {
                uVar7 += 0x1;
            }
            if (uVar7 < 0x33) {
                iVar4 = uVar7 - 0x1;
                iVar3 = iVar4 / 0x5 + (iVar4 >> 0x1f);
                iVar4 += (iVar3 - (iVar3 >> 0x1f)) * -0x5;
                iVar3 -= iVar3 >> 0x1f;
            }
            else {
                iVar4 = uVar7 - 0x33;
                iVar3 = iVar4 / 0x5 + (iVar4 >> 0x1f);
                iVar4 = iVar4 + (iVar3 - (iVar3 >> 0x1f)) * -0x5 + 0x5;
                iVar3 -= iVar3 >> 0x1f;
            }
            break;
        case 0x4:
            if ((*(uint *)(param_1 + 0x44) & 0x2000000) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x80000) == 0x0) {
                    uVar6 = 0x11;
                    uVar5 = 0x11;
                    iVar2 = gpImageEnglish;
                    if ((param_6 != 0x0) && (gpImageEnglish == 0x0)) {
                        imageLoad(&gpImageEnglish,_418,&gpHeapNext);
                        iVar2 = gpImageEnglish;
                    }
                }
                else {
                    uVar6 = 0xe;
                    uVar5 = 0xe;
                    iVar2 = gpImageDialogEnglish;
                    if ((param_6 != 0x0) && (gpImageDialogEnglish == 0x0)) {
                        imageLoad(&gpImageDialogEnglish,_417,&gpHeapNext);
                        iVar2 = gpImageDialogEnglish;
                    }
                }
            }
            else {
                uVar6 = 0x9;
                uVar5 = 0x9;
                iVar2 = gpImageRecordEnglish;
                if ((param_6 != 0x0) && (gpImageRecordEnglish == 0x0)) {
                    imageLoad(&gpImageRecordEnglish,_416,&gpHeapNext);
                    iVar2 = gpImageRecordEnglish;
                }
            }
            uVar8 = 0xfffffffe;
            if ((uVar7 == 0xf) && ((*(uint *)(param_1 + 0x44) & 0x2080000) == 0x0)) {
                iVar4 = 0x5;
                iVar3 = 0x7;
            }
            else {
                iVar4 = uVar7 - 0x1;
                iVar3 = iVar4 / 0x5 + (iVar4 >> 0x1f);
                iVar4 = iVar4 + (iVar3 - (iVar3 >> 0x1f)) * -0x5 + 0x5;
                iVar3 = (iVar3 - (iVar3 >> 0x1f)) + 0x4;
            }
            break;
        case 0x5:
            if ((uVar1 & 0x3ff) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x800) == 0x0) {
                    uVar8 = 0xa;
                }
                else {
                    uVar8 = *(undefined4 *)(param_1 + 0x3c);
                }
            }
            else {
                if ((*(uint *)(param_1 + 0x44) & 0x2000000) == 0x0) {
                    if ((*(uint *)(param_1 + 0x44) & 0x80000) == 0x0) {
                        uVar6 = 0x11;
                        uVar5 = 0x11;
                        iVar2 = gpImageEnglish;
                        if ((param_6 != 0x0) && (gpImageEnglish == 0x0)) {
                            imageLoad(&gpImageEnglish,_418,&gpHeapNext);
                            iVar2 = gpImageEnglish;
                        }
                    }
                    else {
                        uVar6 = 0xe;
                        uVar5 = 0xe;
                        iVar2 = gpImageDialogEnglish;
                        if ((param_6 != 0x0) && (gpImageDialogEnglish == 0x0)) {
                            imageLoad(&gpImageDialogEnglish,_417,&gpHeapNext);
                            iVar2 = gpImageDialogEnglish;
                        }
                    }
                }
                else {
                    uVar6 = 0x9;
                    uVar5 = 0x9;
                    iVar2 = gpImageRecordEnglish;
                    if ((param_6 != 0x0) && (gpImageRecordEnglish == 0x0)) {
                        imageLoad(&gpImageRecordEnglish,_416,&gpHeapNext);
                        iVar2 = gpImageRecordEnglish;
                    }
                }
                uVar8 = 0xfffffffe;
                iVar4 = uVar7 - 0x1;
                iVar3 = iVar4 / 0x5 + (iVar4 >> 0x1f);
                iVar4 = iVar4 + (iVar3 - (iVar3 >> 0x1f)) * -0x5 + 0x5;
                iVar3 = (iVar3 - (iVar3 >> 0x1f)) + 0x2;
            }
            break;
        case 0x6:
            if ((*(uint *)(param_1 + 0x44) & 0x2000000) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x80000) == 0x0) {
                    uVar6 = 0x11;
                    uVar5 = 0x11;
                    iVar2 = gpImageEnglish;
                    if ((param_6 != 0x0) && (gpImageEnglish == 0x0)) {
                        imageLoad(&gpImageEnglish,_418,&gpHeapNext);
                        iVar2 = gpImageEnglish;
                    }
                }
                else {
                    uVar6 = 0xe;
                    uVar5 = 0xe;
                    iVar2 = gpImageDialogEnglish;
                    if ((param_6 != 0x0) && (gpImageDialogEnglish == 0x0)) {
                        imageLoad(&gpImageDialogEnglish,_417,&gpHeapNext);
                        iVar2 = gpImageDialogEnglish;
                    }
                }
            }
            else {
                uVar6 = 0x9;
                uVar5 = 0x9;
                iVar2 = gpImageRecordEnglish;
                if ((param_6 != 0x0) && (gpImageRecordEnglish == 0x0)) {
                    imageLoad(&gpImageRecordEnglish,_416,&gpHeapNext);
                    iVar2 = gpImageRecordEnglish;
                }
            }
            uVar8 = 0xfffffffe;
            iVar4 = uVar7 - 0x1;
            iVar3 = iVar4 / 0x5 + (iVar4 >> 0x1f);
            iVar4 += (iVar3 - (iVar3 >> 0x1f)) * -0x5;
            iVar3 -= iVar3 >> 0x1f;
            break;
        case 0x7:
            if ((*(uint *)(param_1 + 0x44) & 0x2000000) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x80000) == 0x0) {
                    uVar6 = 0x11;
                    uVar5 = 0x11;
                    iVar2 = gpImageEnglish;
                    if ((param_6 != 0x0) && (gpImageEnglish == 0x0)) {
                        imageLoad(&gpImageEnglish,_418,&gpHeapNext);
                        iVar2 = gpImageEnglish;
                    }
                }
                else {
                    uVar6 = 0xe;
                    uVar5 = 0xe;
                    iVar2 = gpImageDialogEnglish;
                    if ((param_6 != 0x0) && (gpImageDialogEnglish == 0x0)) {
                        imageLoad(&gpImageDialogEnglish,_417,&gpHeapNext);
                        iVar2 = gpImageDialogEnglish;
                    }
                }
            }
            else {
                uVar6 = 0x9;
                uVar5 = 0x9;
                iVar2 = gpImageRecordEnglish;
                if ((param_6 != 0x0) && (gpImageRecordEnglish == 0x0)) {
                    imageLoad(&gpImageRecordEnglish,_416,&gpHeapNext);
                    iVar2 = gpImageRecordEnglish;
                }
            }
            uVar8 = 0xfffffffe;
            if (uVar7 < 0x15) {
                iVar4 = uVar7 - 0x1;
                iVar3 = iVar4 / 0x5 + (iVar4 >> 0x1f);
                iVar4 += (iVar3 - (iVar3 >> 0x1f)) * -0x5;
                iVar3 = (iVar3 - (iVar3 >> 0x1f)) + 0x6;
            }
            else {
                iVar4 = uVar7 - 0x15;
                iVar3 = iVar4 / 0x5 + (iVar4 >> 0x1f);
                iVar4 = iVar4 + (iVar3 - (iVar3 >> 0x1f)) * -0x5 + 0x5;
                iVar3 -= iVar3 >> 0x1f;
            }
            break;
        case 0x8:
            if ((uVar1 & 0x3ff) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x800) == 0x0) {
                    uVar8 = 0xa;
                }
                else {
                    uVar8 = *(undefined4 *)(param_1 + 0x3c);
                }
            }
            else {
                uVar8 = 0x0;
                if ((param_6 != 0x0) && (gpImageDigitsPink == 0x0)) {
                    imageLoad(&gpImageDigitsPink,_419,&gpHeapNext);
                }
                iVar2 = gpImageDigitsPink;
                uVar5 = *(uint *)(&DAT_0017f7d4 + uVar7 * 0x4);
                *param_3 = uVar5 & 0xff;
                uVar6 = uVar5 >> 0x10 & 0xff;
                uVar5 >>= 0x18;
                param_3[0x1] = *(uint *)(&DAT_0017f7d4 + uVar7 * 0x4) >> 0x8 & 0xff;
            }
            break;
        case 0x9:
            if ((uVar1 & 0x3ff) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x800) == 0x0) {
                    uVar8 = 0xa;
                }
                else {
                    uVar8 = *(undefined4 *)(param_1 + 0x3c);
                }
            }
            else {
                uVar8 = 0x0;
                if ((param_6 != 0x0) && (gpImageDigitsBlue == 0x0)) {
                    imageLoad(&gpImageDigitsBlue,_420,&gpHeapNext);
                }
                iVar2 = gpImageDigitsBlue;
                uVar5 = *(uint *)(&DAT_0017f7d4 + uVar7 * 0x4);
                *param_3 = uVar5 & 0xff;
                uVar6 = uVar5 >> 0x10 & 0xff;
                uVar5 >>= 0x18;
                param_3[0x1] = *(uint *)(&DAT_0017f7d4 + uVar7 * 0x4) >> 0x8 & 0xff;
            }
            break;
        case 0xa:
            if ((uVar1 & 0x3ff) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x800) == 0x0) {
                    uVar8 = 0xa;
                }
                else {
                    uVar8 = *(undefined4 *)(param_1 + 0x3c);
                }
            }
            else {
                uVar8 = 0x0;
                if ((param_6 != 0x0) && (gpImageDigitsNormPink == 0x0)) {
                    imageLoad(&gpImageDigitsNormPink,_421,&gpHeapNext);
                }
                iVar2 = gpImageDigitsNormPink;
                uVar5 = *(uint *)(ganTileDigits + uVar7 * 0x4 + 0x24);
                *param_3 = uVar5 & 0xff;
                uVar6 = uVar5 >> 0x10 & 0xff;
                uVar5 >>= 0x18;
                param_3[0x1] = *(uint *)(ganTileDigits + uVar7 * 0x4 + 0x24) >> 0x8 & 0xff;
            }
            break;
        case 0xb:
            if ((uVar1 & 0x3ff) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x800) == 0x0) {
                    uVar8 = 0xa;
                }
                else {
                    uVar8 = *(undefined4 *)(param_1 + 0x3c);
                }
            }
            else {
                uVar8 = 0x0;
                if ((param_6 != 0x0) && (gpImageDigitsNormBlue == 0x0)) {
                    imageLoad(&gpImageDigitsNormBlue,_422,&gpHeapNext);
                }
                iVar2 = gpImageDigitsNormBlue;
                uVar5 = *(uint *)(ganTileDigits + uVar7 * 0x4 + 0x24);
                *param_3 = uVar5 & 0xff;
                uVar6 = uVar5 >> 0x10 & 0xff;
                uVar5 >>= 0x18;
                param_3[0x1] = *(uint *)(ganTileDigits + uVar7 * 0x4 + 0x24) >> 0x8 & 0xff;
            }
            break;
        case 0xc:
            if ((uVar1 & 0x3ff) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x800) == 0x0) {
                    uVar8 = 0xa;
                }
                else {
                    uVar8 = *(undefined4 *)(param_1 + 0x3c);
                }
            }
            else {
                uVar8 = 0x0;
                uVar6 = 0x18;
                if ((param_6 != 0x0) && (gpImageLabel == 0x0)) {
                    imageLoad(&gpImageLabel,_423,&gpHeapNext);
                }
                iVar2 = gpImageLabel;
                *param_3 = ((int)(uVar7 - 0x1) % 0x6) * 0x18;
                if (uVar7 < 0x7) {
                    param_3[0x1] = 0x0;
                    uVar5 = 0x20;
                }
                else {
                    param_3[0x1] = ((int)(uVar7 - 0x7) / 0x6) * 0x18 + 0x20;
                    uVar5 = 0x18;
                }
            }
            break;
        case 0xd:
            if ((uVar1 & 0x3ff) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x800) == 0x0) {
                    uVar8 = 0x4;
                }
                else {
                    uVar8 = *(undefined4 *)(param_1 + 0x3c);
                }
            }
            else {
                uVar8 = 0x0;
                if ((param_6 != 0x0) && (gpImageDigitsTinyPink == 0x0)) {
                    imageLoad(&gpImageDigitsTinyPink,_424,&gpHeapNext);
                }
                iVar2 = gpImageDigitsTinyPink;
                *param_3 = (uVar7 - 0x1) * 0x4;
                uVar6 = 0x4;
                param_3[0x1] = 0x0;
                uVar5 = 0x5;
            }
            break;
        case 0xe:
            if ((uVar1 & 0x3ff) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x800) == 0x0) {
                    uVar8 = 0x2;
                }
                else {
                    uVar8 = *(undefined4 *)(param_1 + 0x3c);
                }
            }
            else {
                uVar8 = 0x0;
                if ((param_6 != 0x0) && (gpImageDigitsTinyBlue == 0x0)) {
                    imageLoad(&gpImageDigitsTinyBlue,_425,&gpHeapNext);
                }
                iVar2 = gpImageDigitsTinyBlue;
                *param_3 = (uVar7 - 0x1) * 0x4;
                uVar6 = 0x4;
                param_3[0x1] = 0x0;
                uVar5 = 0x5;
            }
            break;
        case 0xf:
            if ((uVar1 & 0x3ff) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x800) == 0x0) {
                    uVar8 = 0x2;
                }
                else {
                    uVar8 = *(undefined4 *)(param_1 + 0x3c);
                }
            }
            else {
                uVar8 = 0x0;
                if ((param_6 != 0x0) && (gpImageDigitsItsyBitsy == 0x0)) {
                    imageLoad(&gpImageDigitsItsyBitsy,_426,&gpHeapNext);
                }
                iVar2 = gpImageDigitsItsyBitsy;
                uVar6 = 0x5;
                uVar5 = 0x6;
                if (uVar7 == 0xa) {
                    uVar7 = 0x0;
                }
                else {
                    uVar7 *= 0x5;
                }
                *param_3 = uVar7;
                param_3[0x1] = 0x0;
            }
            break;
        case 0x10:
            if ((uVar1 & 0x3ff) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x800) == 0x0) {
                    uVar8 = 0x8;
                }
                else {
                    uVar8 = *(undefined4 *)(param_1 + 0x3c);
                }
            }
            else {
                uVar8 = 0x0;
                if ((param_6 != 0x0) && (gpImageDigitsXtraPink == 0x0)) {
                    imageLoad(&gpImageDigitsXtraPink,_427,&gpHeapNext);
                }
                iVar2 = gpImageDigitsXtraPink;
                uVar6 = 0x8;
                uVar5 = 0x9;
                if (uVar7 == 0xa) {
                    uVar7 = 0x0;
                }
                else {
                    uVar7 <<= 0x3;
                }
                *param_3 = uVar7;
                param_3[0x1] = 0x0;
            }
            break;
        case 0x11:
            if ((uVar1 & 0x3ff) == 0x0) {
                if ((*(uint *)(param_1 + 0x44) & 0x800) == 0x0) {
                    uVar8 = 0x8;
                }
                else {
                    uVar8 = *(undefined4 *)(param_1 + 0x3c);
                }
            }
            else {
                uVar8 = 0x0;
                if ((param_6 != 0x0) && (gpImageDigitsXtraBlue == 0x0)) {
                    imageLoad(&gpImageDigitsXtraBlue,_428,&gpHeapNext);
                }
                iVar2 = gpImageDigitsXtraBlue;
                uVar6 = 0x8;
                uVar5 = 0x9;
                if (uVar7 == 0xa) {
                    uVar7 = 0x0;
                }
                else {
                    uVar7 <<= 0x3;
                }
                *param_3 = uVar7;
                param_3[0x1] = 0x0;
            }
            break;
        default:
            goto switchD_000937e0_caseD_12;
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
            return 0x0;
        }
        *param_5 = uVar8;
        *param_4 = iVar2;
        param_3[0x2] = uVar6;
        param_3[0x3] = uVar5;
        if ((iVar4 != -0x1) && (iVar3 != -0x1)) {
            *param_3 = iVar4 * uVar6;
            param_3[0x1] = iVar3 * uVar5;
        }
        uVar8 = 0x1;
    }
    return uVar8;
}



undefined4 screenGetTextWidth(int param_1,int *param_2)

{
    ushort uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int local_38;
    undefined auStack_34 [0x8];
    int local_2c;
    undefined auStack_24 [0x8];
    
    iVar3 = 0x0;
    iVar4 = 0x0;
    iVar5 = 0x0;
    iVar2 = 0x0;
    for (iVar6 = 0x0; uVar1 = *(ushort *)(*(int *)(param_1 + 0x50) + iVar6), uVar1 != 0x0;
        iVar6 += 0x2) {
        if (((uVar1 >> 0xa == 0x0) && ((uVar1 & 0x3ff) != 0x3)) || (0x1f < uVar1 >> 0xa)) {
            if (iVar2 == 0x0) {
                iVar2 = -0x1;
                iVar4 = iVar5;
            }
        }
        else {
            iVar2 = 0x0;
        }
        screenGetTextData(param_1,iVar3,auStack_34,auStack_24,&local_38,0x0);
        iVar3 += 0x1;
        iVar5 = local_2c + local_38 + iVar5;
    }
    if (iVar2 == 0x0) {
        iVar4 = iVar5;
    }
    *param_2 = iVar4;
    return 0xffffffff;
}



undefined4 screenCenterText(int param_1)

{
    ushort uVar1;
    ushort uVar2;
    bool bVar3;
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
    int local_4c;
    undefined auStack_48 [0x8];
    int local_40;
    int local_3c;
    undefined auStack_38 [0xc];
    
    iVar13 = 0x0;
    iVar6 = 0x0;
    iVar9 = 0x0;
    iVar7 = 0x0;
    iVar12 = 0x0;
    iVar8 = -0x1;
    iVar10 = -0x1;
    iVar5 = 0x0;
    do {
        uVar1 = *(ushort *)(*(int *)(param_1 + 0x50) + iVar12 * 0x2);
        if (uVar1 == 0x0) {
            if (iVar5 == 0x0) {
                iVar8 = iVar9;
                iVar10 = iVar12;
            }
            if (iVar6 != 0x0) {
                if (iVar10 == -0x1) {
                    *(int *)(*(int *)(param_1 + 0x2c) + iVar7 * 0x4) =
                         (*(int *)(param_1 + 0x5c) >> 0x1) - (iVar9 >> 0x1);
                    iVar7 += 0x1;
                }
                else {
                    *(int *)(*(int *)(param_1 + 0x2c) + iVar7 * 0x4) =
                         (*(int *)(param_1 + 0x5c) >> 0x1) - (iVar8 >> 0x1);
                    iVar7 += 0x1;
                }
            }
            if ((*(uint *)(param_1 + 0x44) & 0x8000) == 0x0) {
                *(undefined4 *)(param_1 + 0x1c) = 0x0;
            }
            else {
                *(int *)(param_1 + 0x1c) =
                     (*(int *)(param_1 + 0x60) >> 0x1) - (iVar7 * iVar13 >> 0x1);
            }
            return 0xffffffff;
        }
        uVar2 = uVar1 >> 0xa;
        iVar6 = -0x1;
        iVar11 = iVar10;
        if (((uVar2 == 0x0) && ((uVar1 & 0x3ff) != 0x3)) || (0x1f < uVar2)) {
            if (iVar5 == 0x0) {
                iVar5 = -0x1;
                iVar8 = iVar9;
                iVar11 = iVar12;
            }
        }
        else {
            iVar5 = 0x0;
        }
        screenGetTextData(param_1,iVar12,auStack_48,auStack_38,&local_4c,0x0);
        bVar3 = false;
        if ((uVar2 == 0x0) && ((uVar1 & 0x3ff) == 0x2)) {
            bVar3 = true;
        }
        if (bVar3) {
            iVar4 = -0x1;
        }
        else {
            iVar4 = 0x0;
        }
        if ((uVar2 != 0x0) && (uVar2 < 0x20)) {
            iVar13 = local_3c;
        }
        iVar9 = local_40 + local_4c + iVar9;
        iVar10 = iVar11;
        if ((*(int *)(param_1 + 0x5c) <= iVar9) || (iVar4 != 0x0)) {
            iVar6 = 0x0;
            if (iVar11 == -0x1) {
                *(int *)(*(int *)(param_1 + 0x2c) + iVar7 * 0x4) =
                     (*(int *)(param_1 + 0x5c) >> 0x1) - (iVar9 >> 0x1);
                iVar11 = iVar12;
            }
            else {
                *(undefined2 *)(*(int *)(param_1 + 0x50) + iVar11 * 0x2) = 0x2;
                iVar10 = -0x1;
                *(int *)(*(int *)(param_1 + 0x2c) + iVar7 * 0x4) =
                     (*(int *)(param_1 + 0x5c) >> 0x1) - (iVar8 >> 0x1);
            }
            iVar7 += 0x1;
            iVar9 = 0x0;
            iVar12 = iVar11;
            if (iVar7 == 0x10) {
                return 0x0;
            }
        }
        iVar12 += 0x1;
    } while( true );
}



void screenDrawTextOval(int param_1,undefined4 param_2,undefined4 *param_3)

{
    short sVar1;
    short sVar2;
    short sVar3;
    int iVar4;
    short sVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    undefined4 *puVar12;
    int local_1c;
    
    iVar11 = *(int *)(param_1 + 0x4);
    iVar9 = *(int *)(param_1 + 0x8);
    if ((*(uint *)(param_1 + 0x44) & 0x808000) != 0x0) {
        iVar9 += *(int *)(param_1 + 0x1c);
        iVar11 += **(int **)(param_1 + 0x2c);
    }
    puVar12 = (undefined4 *)*param_3;
    iVar10 = **(int **)(gpImageOval + 0x2c);
    if ((iVar10 != 0x0) && (iVar4 = screenGetTextWidth(param_1,&local_1c), iVar4 != 0x0)) {
        *puVar12 = 0xe7000000;
        puVar12[0x1] = 0x0;
        puVar12[0x2] = 0xe3000f00;
        puVar12[0x3] = 0x0;
        puVar12[0x4] = 0xe3001001;
        puVar12[0x5] = 0x0;
        puVar12[0x6] = 0xe3000c00;
        puVar12[0x7] = 0x0;
        puVar12[0x8] = 0xe2001e01;
        puVar12[0x9] = 0x0;
        puVar12[0xa] = 0xe3000a01;
        puVar12[0xb] = 0x0;
        puVar12[0xc] = 0xe3001201;
        puVar12[0xd] = 0x2000;
        puVar12[0xe] = 0xe200001c;
        puVar12[0xf] = 0x504240;
        puVar12[0x10] = 0xd9ddf9fa;
        puVar12[0x11] = 0x0;
        puVar12[0x12] = 0xfc309661;
        puVar12[0x13] = 0x552eff7f;
        puVar12[0x14] = 0xfb000000;
        puVar12[0x15] = 0xffffffff;
        puVar12[0x16] = 0xfa000000;
        puVar12[0x17] = param_2;
        puVar12[0x18] = 0xfd700000;
        puVar12[0x19] = *(undefined4 *)(iVar10 + 0x8);
        puVar12[0x1a] = 0xf5700000;
        puVar12[0x1b] = 0x7080200;
        puVar12[0x1c] = 0xe6000000;
        puVar12[0x1d] = 0x0;
        puVar12[0x1e] = 0xf3000000;
        uVar7 = *(uint *)(iVar10 + 0xc);
        uVar6 = uVar7 * *(int *)(iVar10 + 0x10) - 0x1;
        if (0x7fe < (int)uVar6) {
            uVar6 = 0x7ff;
        }
        uVar8 = uVar7 << 0x1 | uVar7 >> 0x1f;
        iVar4 = ((int)uVar8 >> 0x3) + (uint)((int)uVar8 < 0x0 && (uVar7 << 0x1 & 0x6) != 0x0);
        if (iVar4 < 0x1) {
            iVar4 = 0x1;
        }
        puVar12[0x1f] = (iVar4 + 0x7ff) / iVar4 & 0xfffU | (uVar6 & 0xfff) << 0xc | 0x7000000;
        puVar12[0x20] = 0xe7000000;
        puVar12[0x21] = 0x0;
        puVar12[0x22] = (*(int *)(iVar10 + 0xc) * 0x2 + 0x7 >> 0x3 & 0x1ffU) << 0x9 | 0xf5700000;
        puVar12[0x23] = 0x80200;
        sVar2 = (short)(iVar9 + 0x13) * 0x4;
        puVar12[0x24] = 0xf2000000;
        uVar6 = (uint)sVar2;
        puVar12[0x25] =
             (*(int *)(iVar10 + 0xc) + -0x1) * 0x4000 & 0xffc000U |
             (*(int *)(iVar10 + 0x10) + -0x1) * 0x4 & 0xffcU;
        if (sVar2 < 0x1) {
            uVar6 = 0x0;
        }
        sVar3 = (short)(iVar11 << 0x2);
        uVar7 = (uint)sVar3;
        if (sVar3 < 0x1) {
            uVar7 = 0x0;
        }
        iVar9 = (iVar9 + -0x1) * 0x4;
        sVar5 = (short)iVar9;
        uVar8 = (uint)sVar5;
        puVar12[0x26] = (uVar7 & 0xfff) << 0xc | 0xe4000000 | uVar6 & 0xfff;
        if (sVar5 < 0x1) {
            uVar8 = 0x0;
        }
        sVar1 = (short)(iVar11 + -0xa) * 0x4;
        uVar6 = (uint)sVar1;
        if (sVar1 < 0x1) {
            uVar6 = 0x0;
        }
        puVar12[0x27] = (uVar6 & 0xfff) << 0xc | uVar8 & 0xfff;
        puVar12[0x28] = 0xe1000000;
        if (iVar9 < 0x0) {
            iVar10 = ((int)sVar5 << 0xa) >> 0x7;
            if (-0x1 < iVar10) {
                iVar10 = 0x0;
            }
        }
        else {
            iVar10 = 0x0;
        }
        if (sVar1 < 0x0) {
            iVar4 = ((int)sVar1 << 0xa) >> 0x7;
            if (-0x1 < iVar4) {
                iVar4 = 0x0;
            }
        }
        else {
            iVar4 = 0x0;
        }
        puVar12[0x29] = iVar4 * -0x10000 | -iVar10 & 0xffffU;
        puVar12[0x2a] = 0xf1000000;
        puVar12[0x2b] = 0x4000400;
        sVar1 = (short)(iVar11 + local_1c) * 0x4;
        uVar6 = (uint)sVar1;
        if (sVar1 < 0x1) {
            uVar6 = 0x0;
        }
        uVar7 = (uint)sVar2;
        if (sVar2 < 0x1) {
            uVar7 = 0x0;
        }
        uVar8 = (uint)sVar5;
        puVar12[0x2c] = uVar7 & 0xfff | (uVar6 & 0xfff) << 0xc | 0xe4000000;
        if (sVar5 < 0x1) {
            uVar8 = 0x0;
        }
        uVar6 = (uint)sVar3;
        if (sVar3 < 0x1) {
            uVar6 = 0x0;
        }
        puVar12[0x2d] = (uVar6 & 0xfff) << 0xc | uVar8 & 0xfff;
        puVar12[0x2e] = 0xe1000000;
        if (iVar9 < 0x0) {
            iVar10 = ((int)sVar5 << 0xa) >> 0x7;
            if (-0x1 < iVar10) {
                iVar10 = 0x0;
            }
        }
        else {
            iVar10 = 0x0;
        }
        puVar12[0x2f] = -iVar10 & 0xffffU | 0x1200000;
        uVar6 = (uint)sVar2;
        puVar12[0x30] = 0xf1000000;
        puVar12[0x31] = 0x400;
        if (sVar2 < 0x1) {
            uVar6 = 0x0;
        }
        sVar2 = (short)(iVar11 + local_1c + 0xa) * 0x4;
        uVar7 = (uint)sVar2;
        if (sVar2 < 0x1) {
            uVar7 = 0x0;
        }
        uVar8 = (uint)sVar5;
        puVar12[0x32] = (uVar7 & 0xfff) << 0xc | 0xe4000000 | uVar6 & 0xfff;
        if (sVar5 < 0x1) {
            uVar8 = 0x0;
        }
        sVar2 = (short)(iVar11 + local_1c) * 0x4;
        uVar6 = (uint)sVar2;
        if (sVar2 < 0x1) {
            uVar6 = 0x0;
        }
        puVar12[0x33] = (uVar6 & 0xfff) << 0xc | uVar8 & 0xfff;
        puVar12[0x34] = 0xe1000000;
        if (iVar9 < 0x0) {
            iVar9 = ((int)sVar5 << 0xa) >> 0x7;
            if (-0x1 < iVar9) {
                iVar9 = 0x0;
            }
        }
        else {
            iVar9 = 0x0;
        }
        if (sVar2 < 0x0) {
            iVar11 = sVar2 * -0x400 >> 0x7;
            if (iVar11 < 0x1) {
                iVar11 = 0x0;
            }
        }
        else {
            iVar11 = 0x0;
        }
        puVar12[0x35] = (0x120 - iVar11) * 0x10000 | -iVar9 & 0xffffU;
        puVar12[0x36] = 0xf1000000;
        puVar12[0x37] = 0xfc000400;
        puVar12 = puVar12 + 0x38;
    }
    *param_3 = puVar12;
    return;
}



void screenDrawText(int param_1,uint **param_2,int param_3)

{
    ushort uVar1;
    ushort uVar8;
    uint uVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    short sVar9;
    int iVar7;
    short sVar10;
    uint uVar11;
    int iVar12;
    ushort *puVar13;
    uint *puVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    ushort uVar18;
    uint uVar19;
    int iVar20;
    uint uVar21;
    uint uVar22;
    uint uVar23;
    int iVar24;
    int iVar25;
    int local_bc;
    int local_b8 [0x2];
    undefined auStack_b0 [0x8];
    int local_a8;
    int local_a4;
    int local_a0;
    uint *local_9c;
    uint **local_98;
    int local_94;
    undefined4 local_90;
    float *local_8c;
    float *local_88;
    undefined4 local_84;
    uint local_80;
    uint local_7c;
    uint local_78;
    uint local_74;
    uint local_70;
    uint local_6c;
    uint local_68;
    uint local_64;
    uint local_60;
    uint local_5c;
    longlong local_58;
    undefined4 local_50;
    uint uStack_4c;
    
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffffe;
    uVar8 = 0x0;
    uVar23 = *(uint *)(param_1 + 0x8);
    uVar21 = *(uint *)(param_1 + 0x4);
    if ((int)uVar23 < 0xf0) {
        uVar11 = *(uint *)(param_1 + 0x44);
        if ((uVar11 & 0x2000000) == 0x0) {
            if ((uVar11 & 0x80000) == 0x0) {
                iVar20 = 0x11;
            }
            else {
                iVar20 = 0xe;
            }
        }
        else {
            iVar20 = 0x9;
        }
        if ((uVar11 & 0x808000) != 0x0) {
            uVar23 += *(int *)(param_1 + 0x1c);
            uVar21 += **(int **)(param_1 + 0x2c);
        }
        local_9c = *param_2;
        uVar11 = *(uint *)(param_1 + 0x44);
        *local_9c = 0xe7000000;
        local_9c[0x1] = 0x0;
        local_9c[0x2] = 0xe3000a01;
        local_9c[0x3] = 0x0;
        local_9c[0x4] = 0xe3000f00;
        local_9c[0x5] = 0x0;
        local_9c[0x6] = 0xe2001e01;
        local_9c[0x7] = 0x0;
        local_9c[0x8] = 0xe3000c00;
        local_9c[0x9] = 0x0;
        local_9c[0xa] = 0xe3001402;
        local_9c[0xb] = 0xc00;
        local_9c[0xc] = 0xe3000d01;
        local_9c[0xd] = 0x0;
        local_9c[0xe] = 0xe3001201;
        local_9c[0xf] = 0x2000;
        local_9c[0x10] = 0xe3001a01;
        local_9c[0x11] = 0x30;
        local_9c[0x12] = 0xe3001801;
        local_9c[0x13] = 0xc0;
        local_9c[0x14] = 0xe200001c;
        local_9c[0x15] = 0x504240;
        local_9c[0x16] = 0xd9e0f9fe;
        local_9c[0x17] = 0x0;
        puVar14 = local_9c + 0x1a;
        local_9c[0x18] = 0xd9ffffff;
        local_9c[0x19] = 0x200004;
        if ((*(uint *)(param_1 + 0x44) & 0x20000) == 0x0) {
            if ((*(uint *)(param_1 + 0x44) & 0x2080000) == 0x0) {
                uVar19 = **(uint **)(param_1 + 0x64);
                *puVar14 = 0xfa000000;
                local_9c[0x1b] = uVar19;
                uVar19 = **(uint **)(param_1 + 0x68);
                local_9c[0x1c] = 0xfb000000;
                local_9c[0x1d] = uVar19;
            }
            else {
                uVar19 = **(uint **)(param_1 + 0x64);
                *puVar14 = 0xfb000000;
                local_9c[0x1b] = uVar19;
                uVar19 = **(uint **)(param_1 + 0x68);
                local_9c[0x1c] = 0xfa000000;
                local_9c[0x1d] = uVar19;
            }
        }
        else {
            *puVar14 = 0xfb000000;
            local_9c[0x1b] = 0x55172cff;
            local_9c[0x1c] = 0xfa000000;
            local_9c[0x1d] = 0xff7fe1ff;
        }
        local_9c = local_9c + 0x1e;
        if ((uVar11 & 0x8000000) == 0x0) {
            uVar19 = *(uint *)(param_1 + 0x48);
            if (uVar19 == 0x0) {
                iVar24 = 0x0;
            }
            else {
                iVar24 = 0x0;
                iVar12 = 0x0;
                iVar15 = 0x0;
                for (uVar2 = uVar19 >> 0x1c; uVar2 != 0x0; uVar2 -= 0x1) {
                    uVar22 = uVar19 >> iVar12 & 0xf;
                    iVar16 = iVar15;
                    while (uVar22 != 0x0) {
                        if (*(short *)(*(int *)(param_1 + 0x50) + iVar15) == 0x2) {
                            uVar22 -= 0x1;
                        }
                        iVar15 += 0x2;
                        iVar16 += 0x2;
                        iVar24 += 0x1;
                    }
                    iVar12 += 0x4;
                    iVar15 = iVar16;
                }
            }
        }
        else {
            iVar15 = *(int *)(param_1 + 0x38);
            iVar12 = 0x0;
            iVar24 = iVar15;
            if (0x0 < iVar15) {
                do {
                    uVar18 = *(ushort *)(*(int *)(param_1 + 0x50) + iVar12);
                    if (uVar18 >> 0xa == 0x28) {
                        uVar8 = uVar18 & 0x3ff;
                    }
                    iVar12 += 0x2;
                    iVar24 += -0x1;
                } while (iVar24 != 0x0);
            }
            iVar15 += -0x2;
            iVar16 = 0x0;
            iVar12 = 0x0;
            iVar24 = 0x0;
            if (0x0 < iVar15) {
                do {
                    puVar13 = (ushort *)(*(int *)(param_1 + 0x50) + iVar12);
                    uVar18 = *puVar13;
                    uVar1 = uVar18 >> 0xa;
                    if (uVar1 == 0x28) {
                        uVar8 = uVar18 & 0x3ff;
                    }
                    else if ((uVar1 == 0x22) && (puVar13[0x1] == 0x2)) {
                        iVar24 = iVar16 + 0x2;
                    }
                    iVar12 += 0x2;
                    iVar16 += 0x1;
                    iVar15 += -0x1;
                } while (iVar15 != 0x0);
            }
            if (uVar8 == 0x1) {
                uVar23 += 0xa;
            }
            else if (uVar8 == 0x2) {
                uVar23 += 0x6;
            }
            else if (uVar8 == 0x3) {
                uVar23 += 0x2;
            }
        }
        iVar12 = iVar24 << 0x1;
        iVar15 = 0x0;
        for (; (*(short *)(*(int *)(param_1 + 0x50) + iVar12) != 0x0 &&
               (iVar16 = iVar12, (int)uVar23 < -iVar20)); uVar23 += iVar16) {
            for (; (uVar8 = *(ushort *)(*(int *)(param_1 + 0x50) + iVar16), uVar8 != 0x0 &&
                   (uVar8 != 0x2)); iVar16 += 0x2) {
                if (uVar8 >> 0xa == 0x25) {
                    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfdf7ffef;
                    uVar8 = *(ushort *)(*(int *)(param_1 + 0x50) + iVar16);
                    uVar18 = uVar8 & 0x3ff;
                    if (uVar18 == 0x3) {
LAB_000953cc:
                        iVar20 = 0xe;
                        *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x80000;
                    }
                    else if (uVar18 < 0x3) {
                        if (uVar18 != 0x1) {
                            if ((uVar8 & 0x3ff) != 0x0) {
                                *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x10;
                                goto LAB_000953cc;
                            }
                            if (false) goto LAB_000953fc;
                            *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x10;
                        }
                        iVar20 = 0x11;
                    }
                    else {
                        if (uVar18 != 0x5) {
                            if (0x4 < uVar18) goto LAB_000953fc;
                            *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x10;
                        }
                        iVar20 = 0x9;
                        *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x2000000;
                    }
                }
LAB_000953fc:
                iVar24 += 0x1;
                iVar12 += 0x2;
            }
            iVar15 += 0x1;
            iVar24 += 0x1;
            iVar12 += 0x2;
            iVar16 = iVar20;
            if ((uVar11 & 0x800) != 0x0) {
                iVar16 = *(int *)(param_1 + 0x40);
            }
        }
        local_68 = 0xfc30fe61;
        local_64 = 0x55fef379;
        local_60 = 0xfcffffff;
        local_5c = 0xfffcf279;
        local_78 = 0xfcff97ff;
        local_74 = 0xff2fffff;
        local_70 = 0xfc309661;
        iVar16 = iVar24 << 0x2;
        local_6c = 0x552eff7f;
        local_7c = 0xfdf7ffef;
        iVar15 <<= 0x2;
        local_80 = 0x808000;
        local_88 = (float *)(garSlopePage + param_3 * 0x4);
        local_90 = 0xffffffff;
        local_8c = (float *)(garOffsetPage + param_3 * 0x4);
        local_84 = 0x43300000;
        local_98 = param_2;
        local_94 = param_3;
        for (; ((uVar8 = *(ushort *)(*(int *)(param_1 + 0x50) + iVar12), uVar8 != 0x0 &&
                ((int)uVar23 < 0xf0)) &&
               (((uVar11 & 0x1000) == 0x0 || (iVar24 < *(int *)(param_1 + 0x38))))); iVar24 += 0x1)
        {
            screenGetTextData(param_1,iVar24,auStack_b0,&local_a0,local_b8,0xffffffff);
            iVar17 = local_a4;
            if (local_94 != -0x1) {
                uStack_4c = uVar23 ^ 0x80000000;
                local_50 = local_84;
                iVar3 = (int)(((float)((double)(CONCAT44(local_84,uVar23) ^ 0x80000000) -
                                      4503601774854144.0) - *local_8c) / *local_88);
                local_58 = (longlong)iVar3;
                iVar25 = local_a8;
                if ((uVar11 & 0x800) != 0x0) {
                    iVar25 = *(int *)(param_1 + 0x3c);
                }
                if (iVar3 <= (int)(uVar21 + local_b8[0] + (iVar25 >> 0x1))) break;
            }
            uVar19 = (uint)(uVar8 >> 0xa);
            uVar2 = uVar8 & 0x3ff;
            if ((uVar8 >> 0xa == 0x0) && (uVar2 == 0x2)) {
                uVar22 = *(uint *)(param_1 + 0x4);
                if ((uVar11 & local_80) != 0x0) {
                    iVar15 += 0x4;
                    uVar22 += *(int *)(*(int *)(param_1 + 0x2c) + iVar15);
                }
                iVar17 = iVar20;
                if ((uVar11 & 0x800) != 0x0) {
                    iVar17 = *(int *)(param_1 + 0x40);
                }
                uVar23 += iVar17;
            }
            else {
                uVar22 = uVar21;
                if (0x3 < uVar19 - 0x20) {
                    if (uVar19 == 0x24) {
                        uVar22 = *(uint *)(*(int *)(param_1 + 0x14) + uVar2 * 0x4);
                    }
                    else if (uVar19 == 0x25) {
                        *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & local_7c;
                        if (uVar2 == 0x3) {
LAB_000956d4:
                            iVar20 = 0xe;
                            *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x80000;
                        }
                        else if (uVar2 < 0x3) {
                            if (uVar2 != 0x1) {
                                if ((uVar8 & 0x3ff) != 0x0) {
                                    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x10;
                                    goto LAB_000956d4;
                                }
                                if (false) goto LAB_00095fb0;
                                *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x10;
                            }
                            iVar20 = 0x11;
                        }
                        else {
                            if (uVar2 != 0x5) {
                                if (0x4 < uVar2) goto LAB_00095fb0;
                                *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x10;
                            }
                            iVar20 = 0x9;
                            *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x2000000;
                        }
                    }
                    else if (uVar19 == 0x26) {
                        if ((-0x12 < (int)uVar23) && ((int)uVar23 < 0xf0)) {
                            if ((*(uint *)(param_1 + 0x44) & 0x2080000) == 0x0) {
                                *local_9c = 0xe7000000;
                                local_9c[0x1] = 0x0;
                                uVar21 = *(uint *)(*(int *)(param_1 + 0x64) + uVar2 * 0x4);
                                local_9c[0x2] = 0xfa000000;
                                local_9c[0x3] = uVar21;
                                uVar21 = *(uint *)(*(int *)(param_1 + 0x68) + uVar2 * 0x4);
                                local_9c[0x4] = 0xfb000000;
                                local_9c[0x5] = uVar21;
                                local_9c = local_9c + 0x6;
                            }
                            else {
                                *local_9c = 0xe7000000;
                                local_9c[0x1] = 0x0;
                                uVar21 = *(uint *)(*(int *)(param_1 + 0x64) + uVar2 * 0x4);
                                local_9c[0x2] = 0xfb000000;
                                local_9c[0x3] = uVar21;
                                uVar21 = *(uint *)(*(int *)(param_1 + 0x68) + uVar2 * 0x4);
                                local_9c[0x4] = 0xfa000000;
                                local_9c[0x5] = uVar21;
                                local_9c = local_9c + 0x6;
                            }
                        }
                    }
                    else {
                        uVar22 = uVar2;
                        if (uVar19 != 0x27) {
                            if (uVar19 == 0x28) {
                                *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x1 << uVar2;
                                uVar22 = uVar21;
                            }
                            else {
                                uVar19 = uVar11;
                                if ((local_a0 != 0x0) && ((int)uVar21 < 0x140)) {
                                    if ((uVar11 & 0x800) == 0x0) {
                                        iVar3 = local_a8 + local_b8[0];
                                    }
                                    else {
                                        iVar3 = *(int *)(param_1 + 0x3c);
                                    }
                                    if (-0x1 < (int)(uVar21 + iVar3)) {
                                        uVar19 = uVar11 | 0x1;
                                        uVar2 = uVar23;
                                        if ((uVar11 & 0x10000) != 0x0) {
                                            if ((uVar11 & 0x1000080) == 0x0) {
                                                uVar2 = uVar23 + (int)*(short *)(ganWave +
                                                                                (*(uint *)(*(int *)(
                                                  param_1 + 0x4c) + iVar16) & 0xf) * 0x2);
                                            }
                                            else {
                                                uVar2 = uVar23 + ((int)*(short *)(ganWave +
                                                                                 (*(uint *)(*(int *)
                                                  (param_1 + 0x4c) + iVar16) & 0xf) * 0x2) >> 0x1);
                                            }
                                        }
                                        bitmapLoadTile(**(undefined4 **)(local_a0 + 0x2c),local_90,
                                                       &local_9c,auStack_b0,&local_bc);
                                        local_90 = 0x0;
                                        if ((*(uint *)(param_1 + 0x44) & 0x10) != 0x0) {
                                            *local_9c = local_78;
                                            local_9c[0x1] = local_74;
                                            sVar10 = (short)(uVar2 + local_a4 + 0x1) * 0x4;
                                            uVar22 = (uint)sVar10;
                                            if (sVar10 < 0x1) {
                                                uVar22 = 0x0;
                                            }
                                            sVar10 = (short)(uVar21 + local_a8 + 0x1) * 0x4;
                                            uVar4 = (uint)sVar10;
                                            if (sVar10 < 0x1) {
                                                uVar4 = 0x0;
                                            }
                                            iVar20 = (uVar2 + 0x1) * 0x4;
                                            sVar10 = (short)iVar20;
                                            uVar5 = (uint)sVar10;
                                            local_9c[0x2] =
                                                 (uVar4 & 0xfff) << 0xc | 0xe4000000 |
                                                 uVar22 & 0xfff;
                                            if (sVar10 < 0x1) {
                                                uVar5 = 0x0;
                                            }
                                            sVar9 = (short)(uVar21 + 0x1) * 0x4;
                                            uVar22 = (uint)sVar9;
                                            if (sVar9 < 0x1) {
                                                uVar22 = 0x0;
                                            }
                                            local_9c[0x3] = (uVar22 & 0xfff) << 0xc | uVar5 & 0xfff;
                                            local_9c[0x4] = 0xe1000000;
                                            if (iVar20 < 0x0) {
                                                iVar20 = ((int)sVar10 << 0xa) >> 0x7;
                                                if (-0x1 < iVar20) {
                                                    iVar20 = 0x0;
                                                }
                                            }
                                            else {
                                                iVar20 = 0x0;
                                            }
                                            if (sVar9 < 0x0) {
                                                iVar3 = ((int)sVar9 << 0xa) >> 0x7;
                                                if (-0x1 < iVar3) {
                                                    iVar3 = 0x0;
                                                }
                                            }
                                            else {
                                                iVar3 = 0x0;
                                            }
                                            local_9c[0x5] =
                                                 -iVar20 & 0xffffU |
                                                 (local_bc * 0x20 - iVar3) * 0x10000;
                                            local_9c[0x6] = 0xf1000000;
                                            local_9c[0x7] = 0x4000400;
                                            local_9c[0x8] = 0xe7000000;
                                            local_9c[0x9] = 0x0;
                                            local_9c = local_9c + 0xa;
                                        }
                                        puVar14 = local_9c;
                                        iVar20 = iVar17;
                                        if ((uVar11 & 0x10010000) == 0x10010000) {
                                            if (((local_a0 == gpImageKatakana) ||
                                                (local_a0 == gpImageKanji)) ||
                                               ((local_a0 == gpImageHiragana ||
                                                (((local_a0 == gpImageEnglish ||
                                                  (local_a0 == gpImageLabel)) ||
                                                 ((*(uint *)(param_1 + 0x44) & 0x2080000) != 0x0))))
                                               )) {
                                                *local_9c = local_70;
                                                local_9c[0x1] = local_6c;
                                            }
                                            else {
                                                *local_9c = local_60;
                                                local_9c[0x1] = local_5c;
                                            }
                                            local_9c = local_9c + 0x2;
                                            sVar10 = (short)(uVar21 << 0x2);
                                            iVar25 = 0x4;
                                            iVar17 = (iVar16 + 0x3) * 0x2;
                                            iVar3 = ((int)sVar10 << 0xa) >> 0x7;
                                            uVar11 = 0x3;
                                            do {
                                                puVar14 = local_9c;
                                                if ((uVar11 & 0x1000080) == 0x0) {
                                                    iVar6 = (int)*(short *)(ganWave +
                                                                           ((int)*(short *)(*(int *)
                                                  (param_1 + 0x30) + iVar17) & 0xfU) * 0x2);
                                                }
                                                else {
                                                    iVar6 = (int)*(short *)(ganWave +
                                                                           ((int)*(short *)(*(int *)
                                                  (param_1 + 0x30) + iVar17) & 0xfU) * 0x2) >> 0x1;
                                                }
                                                if ((*(uint *)(param_1 + 0x44) & 0x20000) == 0x0) {
                                                    if ((*(uint *)(param_1 + 0x44) & 0x2080000) ==
                                                        0x0) {
                                                        uVar2 = **(uint **)(param_1 + 0x64);
                                                        *local_9c = 0xfa000000;
                                                        local_9c[0x1] =
                                                             (uVar2 & 0xff) >> uVar11 & 0xff |
                                                             uVar2 & 0xffffff00;
                                                        uVar2 = **(uint **)(param_1 + 0x68);
                                                        local_9c[0x2] = 0xfb000000;
                                                        local_9c[0x3] =
                                                             (uVar2 & 0xff) >> uVar11 & 0xff |
                                                             uVar2 & 0xffffff00;
                                                    }
                                                    else {
                                                        uVar2 = **(uint **)(param_1 + 0x64);
                                                        *local_9c = 0xfb000000;
                                                        local_9c[0x1] =
                                                             (uVar2 & 0xff) >> uVar11 & 0xff |
                                                             uVar2 & 0xffffff00;
                                                        uVar2 = **(uint **)(param_1 + 0x68);
                                                        local_9c[0x2] = 0xfa000000;
                                                        local_9c[0x3] =
                                                             (uVar2 & 0xff) >> uVar11 & 0xff |
                                                             uVar2 & 0xffffff00;
                                                    }
                                                }
                                                else {
                                                    uVar2 = 0xff >> (uVar11 & 0x3f) & 0xff;
                                                    *local_9c = 0xfb000000;
                                                    local_9c[0x1] = uVar2 | 0x55172c00;
                                                    local_9c[0x2] = 0xfa000000;
                                                    local_9c[0x3] = uVar2 | 0xff7fe100;
                                                }
                                                local_9c = local_9c + 0x4;
                                                sVar9 = (short)(uVar23 + iVar6 + local_a4) * 0x4;
                                                uVar2 = (uint)sVar9;
                                                if (sVar9 < 0x1) {
                                                    uVar2 = 0x0;
                                                }
                                                sVar9 = (short)(uVar21 + local_a8) * 0x4;
                                                uVar22 = (uint)sVar9;
                                                if (sVar9 < 0x1) {
                                                    uVar22 = 0x0;
                                                }
                                                iVar6 = (uVar23 + iVar6) * 0x4;
                                                sVar9 = (short)iVar6;
                                                uVar4 = (uint)sVar9;
                                                *local_9c = (uVar22 & 0xfff) << 0xc | 0xe4000000 |
                                                            uVar2 & 0xfff;
                                                if (sVar9 < 0x1) {
                                                    uVar4 = 0x0;
                                                }
                                                uVar2 = (int)sVar10;
                                                if (sVar10 < 0x1) {
                                                    uVar2 = 0x0;
                                                }
                                                puVar14[0x5] = (uVar2 & 0xfff) << 0xc |
                                                               uVar4 & 0xfff;
                                                puVar14[0x6] = 0xe1000000;
                                                if (iVar6 < 0x0) {
                                                    iVar6 = ((int)sVar9 << 0xa) >> 0x7;
                                                    if (-0x1 < iVar6) {
                                                        iVar6 = 0x0;
                                                    }
                                                }
                                                else {
                                                    iVar6 = 0x0;
                                                }
                                                if (sVar10 < 0x0) {
                                                    iVar7 = iVar3;
                                                    if (-0x1 < iVar3) {
                                                        iVar7 = 0x0;
                                                    }
                                                }
                                                else {
                                                    iVar7 = 0x0;
                                                }
                                                iVar17 += -0x2;
                                                puVar14[0x7] = -iVar6 & 0xffffU |
                                                               (local_bc * 0x20 - iVar7) * 0x10000;
                                                uVar11 -= 0x1;
                                                local_9c = puVar14 + 0xa;
                                                puVar14[0x8] = 0xf1000000;
                                                puVar14[0x9] = 0x4000400;
                                                iVar25 += -0x1;
                                            } while (iVar25 != 0x0);
                                        }
                                        else {
                                            if ((((local_a0 == gpImageKatakana) ||
                                                 (local_a0 == gpImageKanji)) ||
                                                (local_a0 == gpImageHiragana)) ||
                                               (((local_a0 == gpImageEnglish ||
                                                 (local_a0 == gpImageLabel)) ||
                                                ((*(uint *)(param_1 + 0x44) & 0x2080000) != 0x0))))
                                            {
                                                *local_9c = local_68;
                                                local_9c[0x1] = local_64;
                                            }
                                            else {
                                                *local_9c = local_60;
                                                local_9c[0x1] = local_5c;
                                            }
                                            local_9c = local_9c + 0x2;
                                            sVar10 = (short)(uVar2 + local_a4) * 0x4;
                                            uVar11 = (uint)sVar10;
                                            if (sVar10 < 0x1) {
                                                uVar11 = 0x0;
                                            }
                                            sVar10 = (short)(uVar21 + local_a8) * 0x4;
                                            uVar22 = (uint)sVar10;
                                            if (sVar10 < 0x1) {
                                                uVar22 = 0x0;
                                            }
                                            sVar10 = (short)(uVar2 << 0x2);
                                            uVar4 = (uint)sVar10;
                                            *local_9c = (uVar22 & 0xfff) << 0xc | 0xe4000000 |
                                                        uVar11 & 0xfff;
                                            if (sVar10 < 0x1) {
                                                uVar4 = 0x0;
                                            }
                                            sVar9 = (short)(uVar21 << 0x2);
                                            uVar11 = (uint)sVar9;
                                            if (sVar9 < 0x1) {
                                                uVar11 = 0x0;
                                            }
                                            puVar14[0x3] = (uVar11 & 0xfff) << 0xc | uVar4 & 0xfff;
                                            puVar14[0x4] = 0xe1000000;
                                            if ((int)(uVar2 << 0x2) < 0x0) {
                                                iVar17 = ((int)sVar10 << 0xa) >> 0x7;
                                                if (-0x1 < iVar17) {
                                                    iVar17 = 0x0;
                                                }
                                            }
                                            else {
                                                iVar17 = 0x0;
                                            }
                                            if (sVar9 < 0x0) {
                                                iVar3 = ((int)sVar9 << 0xa) >> 0x7;
                                                if (-0x1 < iVar3) {
                                                    iVar3 = 0x0;
                                                }
                                            }
                                            else {
                                                iVar3 = 0x0;
                                            }
                                            puVar14[0x5] = -iVar17 & 0xffffU |
                                                           (local_bc * 0x20 - iVar3) * 0x10000;
                                            local_9c = puVar14 + 0x8;
                                            puVar14[0x6] = 0xf1000000;
                                            puVar14[0x7] = 0x4000400;
                                        }
                                    }
                                }
                                if ((uVar19 & 0x800) == 0x0) {
                                    iVar17 = local_a8 + local_b8[0];
                                }
                                else {
                                    iVar17 = *(int *)(param_1 + 0x3c);
                                }
                                uVar11 = uVar19;
                                uVar22 = uVar21 + iVar17;
                            }
                        }
                    }
                }
            }
LAB_00095fb0:
            iVar16 += 0x4;
            iVar12 += 0x2;
            uVar21 = uVar22;
        }
        *(uint *)(param_1 + 0x44) = uVar11;
        *local_9c = 0xe7000000;
        local_9c[0x1] = 0x0;
        *local_98 = local_9c + 0x2;
    }
    return;
}



void screenUpdateArea(int *param_1)

{
    float fVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    ushort *puVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    double local_28;
    
    uVar5 = param_1[0xb];
    if ((uVar5 & 0x80080) != 0x0) {
        uVar2 = uVar5 & 0x10;
        if ((uVar2 == 0x0) || ((uVar5 & 0x20) != 0x0)) {
            if (((uVar5 & 0x20) == 0x0) || (uVar2 != 0x0)) {
                if (((uVar5 & 0x20) != 0x0) && (uVar2 != 0x0)) {
                    if ((uVar5 & 0x40) == 0x0) {
                        if (param_1[0xc] < 0x2) {
                            fVar1 = 0.0;
                        }
                        else {
                            local_28 = (double)CONCAT44(0x43300000,param_1[0xc] - 0x1U ^ 0x80000000)
                            ;
                            fVar1 = (float)((double)CONCAT44(0x43300000,param_1[0xa] ^ 0x80000000) -
                                           4503601774854144.0) /
                                    (float)(local_28 - 4503601774854144.0);
                        }
                        param_1[0x12] =
                             param_1[0x1] +
                             (int)(fVar1 * (float)((double)CONCAT44(0x43300000,
                                                                    param_1[0x10] ^ 0x80000000) -
                                                  4503601774854144.0));
                        if (param_1[0xd] < 0x2) {
                            fVar1 = 0.0;
                        }
                        else {
                            local_28 = (double)CONCAT44(0x43300000,param_1[0xd] - 0x1U ^ 0x80000000)
                            ;
                            fVar1 = (float)((double)CONCAT44(0x43300000,param_1[0x9] ^ 0x80000000) -
                                           4503601774854144.0) /
                                    (float)(local_28 - 4503601774854144.0);
                        }
                        param_1[0x11] =
                             *param_1 +
                             (int)(fVar1 * (float)((double)CONCAT44(0x43300000,
                                                                    param_1[0xf] ^ 0x80000000) -
                                                  4503601774854144.0));
                    }
                    else {
                        if (param_1[0xc] < 0x2) {
                            fVar1 = 0.0;
                        }
                        else {
                            local_28 = (double)CONCAT44(0x43300000,param_1[0xc] - 0x1U ^ 0x80000000)
                            ;
                            fVar1 = (float)((double)CONCAT44(0x43300000,
                                                             (param_1[0x16] - param_1[0x14]) + 0x1U
                                                             ^ 0x80000000) - 4503601774854144.0) /
                                    (float)(local_28 - 4503601774854144.0);
                        }
                        param_1[0x12] =
                             param_1[0x14] +
                             (int)(fVar1 * (float)((double)CONCAT44(0x43300000,
                                                                    param_1[0x10] ^ 0x80000000) -
                                                  4503601774854144.0));
                        if (param_1[0xd] < 0x2) {
                            fVar1 = 0.0;
                        }
                        else {
                            local_28 = (double)CONCAT44(0x43300000,param_1[0xd] - 0x1U ^ 0x80000000)
                            ;
                            fVar1 = (float)((double)CONCAT44(0x43300000,
                                                             (param_1[0x15] - param_1[0x13]) + 0x1U
                                                             ^ 0x80000000) - 4503601774854144.0) /
                                    (float)(local_28 - 4503601774854144.0);
                        }
                        param_1[0x11] =
                             param_1[0x13] +
                             (int)(fVar1 * (float)((double)CONCAT44(0x43300000,
                                                                    param_1[0xf] ^ 0x80000000) -
                                                  4503601774854144.0));
                    }
                }
            }
            else if ((uVar5 & 0x40) == 0x0) {
                if (param_1[0xd] < 0x2) {
                    fVar1 = 0.0;
                }
                else {
                    local_28 = (double)CONCAT44(0x43300000,param_1[0xd] - 0x1U ^ 0x80000000);
                    fVar1 = (float)((double)CONCAT44(0x43300000,param_1[0x9] ^ 0x80000000) -
                                   4503601774854144.0) / (float)(local_28 - 4503601774854144.0);
                }
                param_1[0x11] =
                     *param_1 +
                     (int)(fVar1 * (float)((double)CONCAT44(0x43300000,param_1[0xf] ^ 0x80000000) -
                                          4503601774854144.0));
                param_1[0x12] = param_1[0x1];
            }
            else {
                if (param_1[0xd] < 0x2) {
                    fVar1 = 0.0;
                }
                else {
                    local_28 = (double)CONCAT44(0x43300000,param_1[0xd] - 0x1U ^ 0x80000000);
                    fVar1 = (float)((double)CONCAT44(0x43300000,
                                                     (param_1[0x15] - param_1[0x13]) + 0x1U ^
                                                     0x80000000) - 4503601774854144.0) /
                            (float)(local_28 - 4503601774854144.0);
                }
                param_1[0x11] =
                     param_1[0x13] +
                     (int)(fVar1 * (float)((double)CONCAT44(0x43300000,param_1[0xf] ^ 0x80000000) -
                                          4503601774854144.0));
                param_1[0x12] = param_1[0x14];
            }
        }
        else if ((uVar5 & 0x40) == 0x0) {
            if (param_1[0xc] < 0x2) {
                fVar1 = 0.0;
            }
            else {
                local_28 = (double)CONCAT44(0x43300000,param_1[0xc] - 0x1U ^ 0x80000000);
                fVar1 = (float)((double)CONCAT44(0x43300000,param_1[0xa] ^ 0x80000000) -
                               4503601774854144.0) / (float)(local_28 - 4503601774854144.0);
            }
            param_1[0x12] =
                 param_1[0x1] +
                 (int)(fVar1 * (float)((double)CONCAT44(0x43300000,param_1[0x10] ^ 0x80000000) -
                                      4503601774854144.0));
            param_1[0x11] = *param_1;
        }
        else {
            if (param_1[0xc] < 0x2) {
                fVar1 = 0.0;
            }
            else {
                local_28 = (double)CONCAT44(0x43300000,
                                            (param_1[0x16] - param_1[0x14]) + 0x1U ^ 0x80000000);
                fVar1 = (float)(local_28 - 4503601774854144.0) /
                        (float)((double)CONCAT44(0x43300000,param_1[0xc] - 0x1U ^ 0x80000000) -
                               4503601774854144.0);
            }
            param_1[0x12] =
                 param_1[0x14] +
                 (int)(fVar1 * (float)((double)CONCAT44(0x43300000,param_1[0x10] ^ 0x80000000) -
                                      4503601774854144.0));
            param_1[0x11] = param_1[0x13];
        }
    }
    if ((((param_1[0xb] & 0x4000U) != 0x0) && (-0x1 < giScreen)) && (giScreen < gnScreenCount)) {
        iVar7 = 0x0;
        iVar9 = 0x0;
        for (iVar8 = 0x0; iVar4 = gaScreen + giScreen * 0x48, iVar8 < *(int *)(iVar4 + 0xc);
            iVar8 += 0x1) {
            iVar4 = *(int *)(iVar4 + 0x1c) + iVar9;
            uVar5 = *(uint *)(iVar4 + 0x44);
            if (((uVar5 & 0x1000000) != 0x0) && ((uVar5 & 0x400) == 0x0)) {
                *(uint *)(iVar4 + 0x44) = uVar5 & 0xfffeffef;
                if (param_1[0x10] == iVar7 - (iVar7 / param_1[0xc]) * param_1[0xc]) {
                    if (*(int *)(iVar4 + 0x4) + (*(uint *)(iVar4 + 0x44) & 0x800000) == 0x0) {
                        iVar3 = 0x0;
                    }
                    else {
                        iVar3 = **(int **)(iVar4 + 0x2c);
                    }
                    param_1[0x11] = iVar3;
                    param_1[0x12] = *(int *)(iVar4 + 0x8) + *(int *)(iVar4 + 0x1c) + 0x1;
                    screenGetTextWidth(iVar4,param_1 + 0x6);
                    param_1[0x6] = param_1[0x6] + 0x3;
                    if (geModeFade == 0x0) {
                        *(uint *)(iVar4 + 0x44) = *(uint *)(iVar4 + 0x44) | 0x10000;
                    }
                }
                iVar7 += 0x1;
            }
            iVar9 += 0x6c;
        }
    }
    iVar7 = param_1[0x5];
    iVar9 = 0x0;
    iVar8 = 0x0;
    if (0x0 < iVar7) {
        do {
            puVar6 = (ushort *)(param_1[0x17] + iVar8);
            if ((param_1[0xf] == (uint)*puVar6) && (param_1[0x10] == (uint)puVar6[0x1])) {
                param_1[0x11] = (uint)*(ushort *)(param_1[0x17] + iVar9 * 0x8 + 0x4);
                param_1[0x12] = (uint)*(ushort *)(param_1[0x17] + iVar9 * 0x8 + 0x6);
                return;
            }
            iVar8 += 0x8;
            iVar9 += 0x1;
            iVar7 += -0x1;
        } while (iVar7 != 0x0);
    }
    return;
}



undefined4 screenWipeImages(void)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iVar1 = 0x0;
    for (iVar3 = 0x0; iVar3 < gnImageCount; iVar3 += 0x1) {
        *(undefined4 *)(gapImage + iVar1) = 0x0;
        iVar1 += 0x4;
    }
    iVar1 = 0x0;
    gpImageBack = 0x0;
    gpImageAlign = 0x0;
    gpImageLabel = 0x0;
    gpImageHiragana = 0x0;
    gpImageKatakana = 0x0;
    gpImageKanji = 0x0;
    gpImageEnglish = 0x0;
    gpImageDialogHiragana = 0x0;
    gpImageDialogKatakana = 0x0;
    gpImageDialogKanji = 0x0;
    gpImageDialogEnglish = 0x0;
    gpImageRecordHiragana = 0x0;
    gpImageRecordKatakana = 0x0;
    gpImageRecordEnglish = 0x0;
    gpImageDigitsPink = 0x0;
    gpImageDigitsBlue = 0x0;
    gpImageDigitsNormPink = 0x0;
    gpImageDigitsNormBlue = 0x0;
    gpImageDigitsTinyPink = 0x0;
    gpImageDigitsTinyBlue = 0x0;
    gpImageDigitsXtraPink = 0x0;
    gpImageDigitsXtraBlue = 0x0;
    gpImageDigitsItsyBitsy = 0x0;
    for (iVar3 = 0x0; iVar3 < gnScreenCount; iVar3 += 0x1) {
        iVar2 = 0x0;
        for (iVar4 = 0x0; iVar4 < *(int *)(iVar1 + gaScreen + 0x8); iVar4 += 0x1) {
            *(undefined4 *)(*(int *)(iVar1 + gaScreen + 0x18) + iVar2 + 0xc) = 0x0;
            iVar2 += 0x60;
        }
        iVar2 = 0x0;
        for (iVar4 = 0x0; iVar4 < *(int *)(iVar1 + gaScreen + 0x10); iVar4 += 0x1) {
            *(undefined4 *)(*(int *)(iVar1 + gaScreen + 0x20) + iVar2 + 0x14) = 0x0;
            iVar2 += 0x30;
        }
        iVar2 = 0x0;
        for (iVar4 = 0x0; iVar4 < *(int *)(iVar1 + gaScreen + 0x14); iVar4 += 0x1) {
            *(undefined4 *)(*(int *)(iVar1 + gaScreen + 0x24) + iVar2 + 0x20) = 0x0;
            iVar2 += 0x30;
        }
        iVar1 += 0x48;
    }
    return 0xffffffff;
}



void screenChange(int param_1)

{
    int iVar1;
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
    undefined4 local_28 [0x3];
    
    if ((-0x1 < param_1) && (param_1 < gnScreenCount)) {
        iVar14 = gaScreen + param_1 * 0x48;
        if (*(int *)(iVar14 + 0x28) == -0x1) {
            iVar1 = *(int *)(iVar14 + 0x8);
            iVar12 = -0x1;
            iVar5 = -0x1;
            iVar11 = -0x1;
            iVar13 = -0x1;
            iVar6 = 0x140;
            iVar7 = 0x0;
            iVar8 = 0x0;
            iVar9 = 0x0;
            iVar10 = 0x0;
            iVar2 = 0x0;
            if (0x0 < iVar1) {
                do {
                    piVar3 = (int *)(*(int *)(iVar14 + 0x18) + iVar2);
                    if (((piVar3[0xb] & 0x1U) != 0x0) && (*piVar3 < iVar6)) {
                        iVar5 = iVar10;
                        iVar6 = *piVar3;
                    }
                    uVar4 = piVar3[0xb];
                    if (((uVar4 & 0x2) != 0x0) && (iVar7 < *piVar3)) {
                        iVar7 = *piVar3;
                        iVar12 = iVar10;
                    }
                    if (((uVar4 & 0x4000000) != 0x0) && (iVar8 < *piVar3)) {
                        iVar8 = *piVar3;
                        iVar13 = iVar10;
                    }
                    if (((uVar4 & 0x8000000) != 0x0) && (iVar9 < *piVar3)) {
                        iVar9 = *piVar3;
                        iVar11 = iVar10;
                    }
                    iVar2 += 0x60;
                    iVar10 += 0x1;
                    iVar1 += -0x1;
                } while (iVar1 != 0x0);
            }
            *(int *)(iVar14 + 0x28) = iVar5;
            *(int *)(iVar14 + 0x2c) = iVar12;
            *(int *)(iVar14 + 0x30) = iVar13;
            *(int *)(iVar14 + 0x34) = iVar11;
            if (iVar5 != -0x1) {
                screenUpdateArea(*(int *)(iVar14 + 0x18) + iVar5 * 0x60);
            }
            if (iVar12 != -0x1) {
                screenUpdateArea(*(int *)(iVar14 + 0x18) + iVar12 * 0x60);
            }
            if (iVar13 != -0x1) {
                screenUpdateArea(*(int *)(iVar14 + 0x18) + iVar13 * 0x60);
            }
            if (iVar11 != -0x1) {
                screenUpdateArea(*(int *)(iVar14 + 0x18) + iVar11 * 0x60);
            }
        }
        iVar5 = 0x0;
        for (iVar6 = 0x0; iVar6 < *(int *)(iVar14 + 0xc); iVar6 += 0x1) {
            iVar7 = iVar5 + 0x34;
            *(undefined4 *)(*(int *)(iVar14 + 0x1c) + iVar5 + 0x38) = 0x0;
            iVar5 += 0x6c;
            *(undefined4 *)(*(int *)(iVar14 + 0x1c) + iVar7) = 0x0;
        }
        gnTagTextBase = 0xffffffff;
        uVar4 = *(uint *)(iVar14 + 0x4);
        if (((geModeFade == 0x4) || (geModeFade == 0x6)) || (geModeFade == 0x7)) {
            local_28[0] = gpHeapNext;
            if (((uVar4 & 0x1) != 0x0) && (gpImageHiragana == 0x0)) {
                imageLoad(&gpImageHiragana,_415,local_28);
            }
            if (((uVar4 & 0x2) != 0x0) && (gpImageKatakana == 0x0)) {
                imageLoad(&gpImageKatakana,_412,local_28);
            }
            if (((uVar4 & 0x4) != 0x0) && (gpImageKanji == 0x0)) {
                imageLoad(&gpImageKanji,_409,local_28);
            }
            if (((uVar4 & 0x8) != 0x0) && (gpImageEnglish == 0x0)) {
                imageLoad(&gpImageEnglish,_418,local_28);
            }
            if (((uVar4 & 0x10) != 0x0) && (gpImageDialogHiragana == 0x0)) {
                imageLoad(&gpImageDialogHiragana,_414,local_28);
            }
            if (((uVar4 & 0x20) != 0x0) && (gpImageDialogKatakana == 0x0)) {
                imageLoad(&gpImageDialogKatakana,_411,local_28);
            }
            if (((uVar4 & 0x40) != 0x0) && (gpImageDialogKanji == 0x0)) {
                imageLoad(&gpImageDialogKanji,_408,local_28);
            }
            if (((uVar4 & 0x80) != 0x0) && (gpImageDialogEnglish == 0x0)) {
                imageLoad(&gpImageDialogEnglish,_417,local_28);
            }
            if (((uVar4 & 0x100) != 0x0) && (gpImageDigitsPink == 0x0)) {
                imageLoad(&gpImageDigitsPink,_419,local_28);
                imageLoad(&gpImageDigitsBlue,_420,local_28);
                imageLoad(&gpImageDigitsNormPink,_421,local_28);
                imageLoad(&gpImageDigitsNormBlue,_422,local_28);
                imageLoad(&gpImageDigitsTinyPink,_424,local_28);
                imageLoad(&gpImageDigitsTinyBlue,_425,local_28);
                imageLoad(&gpImageDigitsItsyBitsy,_426,local_28);
                imageLoad(&gpImageDigitsXtraPink,_427,local_28);
                imageLoad(&gpImageDigitsXtraBlue,_428,local_28);
            }
            if (((uVar4 & 0x800) != 0x0) && (gpImageRecordKatakana == 0x0)) {
                imageLoad(&gpImageRecordKatakana,_410,local_28);
                imageLoad(&gpImageRecordHiragana,_413,local_28);
                imageLoad(&gpImageRecordEnglish,_416,local_28);
            }
            if (((uVar4 & 0x400) != 0x0) && (gpImageLabel == 0x0)) {
                imageLoad(&gpImageLabel,_423,local_28);
            }
            iVar6 = 0x0;
            for (iVar5 = 0x0; iVar5 < *(int *)(iVar14 + 0x8); iVar5 += 0x1) {
                iVar7 = *(int *)(iVar14 + 0x18) + iVar6;
                if ((*(uint *)(iVar7 + 0x2c) & 0x80) != 0x0) {
                    iVar9 = *(int *)(iVar7 + 0x8);
                    iVar8 = iVar9 * 0x4;
                    if (*(int *)(gapImage + iVar8) == 0x0) {
                        if (iVar9 < 0x0) {
                            iVar9 = -iVar9;
                            if ((iVar9 == 0x9) && (geTypeBack != -0x1)) {
                                iVar9 = geTypeBack;
                            }
                            screenLoadBack(iVar9,local_28);
                            *(undefined4 *)(iVar7 + 0xc) = 0x0;
                        }
                        else {
                            iVar9 = *(int *)(gapImage + iVar8);
                            if (iVar9 == 0x0) {
                                imageLoad((int *)(gapImage + iVar8),
                                          *(undefined4 *)(gapNameImage + iVar8),local_28);
                                *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(gapImage + iVar8);
                            }
                            else {
                                imageCopy(iVar7 + 0xc,iVar9,local_28);
                            }
                        }
                    }
                    else {
                        *(int *)(iVar7 + 0xc) = *(int *)(gapImage + iVar8);
                    }
                }
                iVar6 += 0x60;
            }
            iVar6 = 0x0;
            for (iVar5 = 0x0; iVar5 < *(int *)(iVar14 + 0x10); iVar5 += 0x1) {
                iVar7 = *(int *)(iVar14 + 0x20) + iVar6;
                if ((*(uint *)(iVar7 + 0x24) & 0x1008) == 0x0) {
                    iVar9 = *(int *)(iVar7 + 0xc);
                    iVar8 = iVar9 * 0x4;
                    if (*(int *)(gapImage + iVar8) == 0x0) {
                        if (iVar9 < 0x0) {
                            iVar9 = -iVar9;
                            if ((iVar9 == 0x9) && (geTypeBack != -0x1)) {
                                iVar9 = geTypeBack;
                            }
                            screenLoadBack(iVar9,local_28);
                            *(undefined4 *)(iVar7 + 0x14) = 0x0;
                        }
                        else {
                            iVar9 = *(int *)(gapImage + iVar8);
                            if (iVar9 == 0x0) {
                                imageLoad((int *)(gapImage + iVar8),
                                          *(undefined4 *)(gapNameImage + iVar8),local_28);
                                *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(gapImage + iVar8);
                            }
                            else {
                                imageCopy(iVar7 + 0x14,iVar9,local_28);
                            }
                        }
                    }
                    else {
                        *(int *)(iVar7 + 0x14) = *(int *)(gapImage + iVar8);
                    }
                }
                iVar6 += 0x30;
            }
            iVar6 = 0x0;
            for (iVar5 = 0x0; iVar5 < *(int *)(iVar14 + 0x14); iVar5 += 0x1) {
                iVar7 = *(int *)(iVar14 + 0x24) + iVar6;
                *(undefined4 *)(iVar7 + 0x14) = 0x0;
                if ((*(uint *)(iVar7 + 0x2c) & 0x1) != 0x0) {
                    iVar9 = *(int *)(iVar7 + 0xc);
                    iVar8 = iVar9 * 0x4;
                    if (*(int *)(gapImage + iVar8) == 0x0) {
                        if (iVar9 < 0x0) {
                            iVar9 = -iVar9;
                            if ((iVar9 == 0x9) && (geTypeBack != -0x1)) {
                                iVar9 = geTypeBack;
                            }
                            screenLoadBack(iVar9,local_28);
                            *(undefined4 *)(iVar7 + 0x20) = 0x0;
                        }
                        else {
                            iVar9 = *(int *)(gapImage + iVar8);
                            if (iVar9 == 0x0) {
                                imageLoad((int *)(gapImage + iVar8),
                                          *(undefined4 *)(gapNameImage + iVar8),local_28);
                                *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(gapImage + iVar8);
                            }
                            else {
                                imageCopy(iVar7 + 0x20,iVar9,local_28);
                            }
                        }
                    }
                    else {
                        *(int *)(iVar7 + 0x20) = *(int *)(gapImage + iVar8);
                    }
                }
                iVar6 += 0x30;
            }
        }
        else {
            screenWipeImages();
            local_28[0] = gpHeap;
            if ((uVar4 & 0x1) != 0x0) {
                imageLoad(&gpImageHiragana,_415,local_28);
            }
            if ((uVar4 & 0x2) != 0x0) {
                imageLoad(&gpImageKatakana,_412,local_28);
            }
            if ((uVar4 & 0x4) != 0x0) {
                imageLoad(&gpImageKanji,_409,local_28);
            }
            if ((uVar4 & 0x8) != 0x0) {
                imageLoad(&gpImageEnglish,_418,local_28);
            }
            if ((uVar4 & 0x10) != 0x0) {
                imageLoad(&gpImageDialogHiragana,_414,local_28);
            }
            if ((uVar4 & 0x20) != 0x0) {
                imageLoad(&gpImageDialogKatakana,_411,local_28);
            }
            if ((uVar4 & 0x40) != 0x0) {
                imageLoad(&gpImageDialogKanji,_408,local_28);
            }
            if ((uVar4 & 0x80) != 0x0) {
                imageLoad(&gpImageDialogEnglish,_417,local_28);
            }
            if ((uVar4 & 0x100) != 0x0) {
                imageLoad(&gpImageDigitsPink,_419,local_28);
                imageLoad(&gpImageDigitsBlue,_420,local_28);
                imageLoad(&gpImageDigitsNormPink,_421,local_28);
                imageLoad(&gpImageDigitsNormBlue,_422,local_28);
                imageLoad(&gpImageDigitsTinyPink,_424,local_28);
                imageLoad(&gpImageDigitsTinyBlue,_425,local_28);
                imageLoad(&gpImageDigitsItsyBitsy,_426,local_28);
                imageLoad(&gpImageDigitsXtraPink,_427,local_28);
                imageLoad(&gpImageDigitsXtraBlue,_428,local_28);
            }
            if ((uVar4 & 0x800) != 0x0) {
                imageLoad(&gpImageRecordKatakana,_410,local_28);
                imageLoad(&gpImageRecordHiragana,_413,local_28);
                imageLoad(&gpImageRecordEnglish,_416,local_28);
            }
            if ((uVar4 & 0x400) != 0x0) {
                imageLoad(&gpImageLabel,_423,local_28);
            }
            iVar6 = 0x0;
            for (iVar5 = 0x0; iVar5 < *(int *)(iVar14 + 0x8); iVar5 += 0x1) {
                iVar7 = *(int *)(iVar14 + 0x18) + iVar6;
                if ((*(uint *)(iVar7 + 0x2c) & 0x80) != 0x0) {
                    iVar8 = *(int *)(iVar7 + 0x8);
                    if (iVar8 < 0x0) {
                        iVar8 = -iVar8;
                        if ((iVar8 == 0x9) && (geTypeBack != -0x1)) {
                            iVar8 = geTypeBack;
                        }
                        screenLoadBack(iVar8,local_28);
                        *(undefined4 *)(iVar7 + 0xc) = 0x0;
                    }
                    else {
                        iVar8 *= 0x4;
                        iVar9 = *(int *)(gapImage + iVar8);
                        if (iVar9 == 0x0) {
                            imageLoad((int *)(gapImage + iVar8),
                                      *(undefined4 *)(gapNameImage + iVar8),local_28);
                            *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(gapImage + iVar8);
                        }
                        else {
                            imageCopy(iVar7 + 0xc,iVar9,local_28);
                        }
                    }
                    if ((*(uint *)(iVar7 + 0x2c) & 0x4000) != 0x0) {
                        imageCopy(&gpImageAlign,*(undefined4 *)(iVar7 + 0xc),local_28);
                    }
                }
                iVar6 += 0x60;
            }
            iVar6 = 0x0;
            for (iVar5 = 0x0; iVar5 < *(int *)(iVar14 + 0x10); iVar5 += 0x1) {
                iVar7 = *(int *)(iVar14 + 0x20) + iVar6;
                *(undefined4 *)(iVar7 + 0x14) = 0x0;
                if ((*(uint *)(iVar7 + 0x24) & 0x8) == 0x0) {
                    if ((*(uint *)(iVar7 + 0x24) & 0x1000) == 0x0) {
                        iVar8 = *(int *)(iVar7 + 0xc);
                        if (iVar8 < 0x0) {
                            iVar8 = -iVar8;
                            if ((iVar8 == 0x9) && (geTypeBack != -0x1)) {
                                iVar8 = geTypeBack;
                            }
                            screenLoadBack(iVar8,local_28);
                            *(undefined4 *)(iVar7 + 0x14) = 0x0;
                        }
                        else {
                            iVar8 *= 0x4;
                            iVar9 = *(int *)(gapImage + iVar8);
                            if (iVar9 == 0x0) {
                                imageLoad((int *)(gapImage + iVar8),
                                          *(undefined4 *)(gapNameImage + iVar8),local_28);
                                *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(gapImage + iVar8);
                            }
                            else {
                                imageCopy(iVar7 + 0x14,iVar9,local_28);
                            }
                        }
                        if ((*(uint *)(iVar7 + 0x24) & 0x10) != 0x0) {
                            *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x14) = 0x0;
                        }
                        if ((*(uint *)(iVar7 + 0x24) & 0x20) != 0x0) {
                            *(uint *)(*(int *)(iVar7 + 0x14) + 0xc) =
                                 *(uint *)(*(int *)(iVar7 + 0x14) + 0xc) | 0xc40;
                        }
                        if ((*(uint *)(iVar7 + 0x24) & 0x100) != 0x0) {
                            *(uint *)(*(int *)(iVar7 + 0x14) + 0xc) =
                                 *(uint *)(*(int *)(iVar7 + 0x14) + 0xc) | 0x80;
                        }
                        if ((*(uint *)(iVar7 + 0x24) & 0x200) != 0x0) {
                            *(uint *)(*(int *)(iVar7 + 0x14) + 0xc) =
                                 *(uint *)(*(int *)(iVar7 + 0x14) + 0xc) | 0x1000;
                        }
                        if ((*(uint *)(iVar7 + 0x24) & 0x400) != 0x0) {
                            *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x14) =
                                 *(undefined4 *)(iVar7 + 0x18);
                        }
                        if ((*(uint *)(iVar7 + 0x24) & 0x2000) != 0x0) {
                            *(uint *)(*(int *)(iVar7 + 0x14) + 0xc) =
                                 *(uint *)(*(int *)(iVar7 + 0x14) + 0xc) | 0x10000;
                        }
                        if ((*(uint *)(iVar7 + 0x24) & 0x40) != 0x0) {
                            *(uint *)(*(int *)(iVar7 + 0x14) + 0xc) =
                                 *(uint *)(*(int *)(iVar7 + 0x14) + 0xc) | 0x10;
                            *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x94) =
                                 *(undefined4 *)(iVar7 + 0x28);
                            *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x98) =
                                 *(undefined4 *)(iVar7 + 0x2c);
                        }
                        if ((*(uint *)(iVar7 + 0x24) & 0x800) != 0x0) {
                            imageMakeScan(*(undefined4 *)(iVar7 + 0x14),local_28);
                        }
                    }
                    else {
                        iVar8 = 0x9;
                        if ((true) && (geTypeBack != -0x1)) {
                            iVar8 = geTypeBack;
                        }
                        screenLoadBack(iVar8,local_28);
                        *(undefined4 *)(iVar7 + 0x14) = 0x0;
                    }
                }
                iVar6 += 0x30;
            }
            iVar6 = 0x0;
            for (iVar5 = 0x0; iVar5 < *(int *)(iVar14 + 0x14); iVar5 += 0x1) {
                iVar7 = *(int *)(iVar14 + 0x24) + iVar6;
                *(undefined4 *)(iVar7 + 0x14) = 0x0;
                if ((*(uint *)(iVar7 + 0x2c) & 0x1) != 0x0) {
                    iVar8 = *(int *)(iVar7 + 0xc);
                    if (iVar8 < 0x0) {
                        iVar8 = -iVar8;
                        if ((iVar8 == 0x9) && (geTypeBack != -0x1)) {
                            iVar8 = geTypeBack;
                        }
                        screenLoadBack(iVar8,local_28);
                        *(undefined4 *)(iVar7 + 0x20) = 0x0;
                    }
                    else {
                        iVar8 *= 0x4;
                        iVar9 = *(int *)(gapImage + iVar8);
                        if (iVar9 == 0x0) {
                            imageLoad((int *)(gapImage + iVar8),
                                      *(undefined4 *)(gapNameImage + iVar8),local_28);
                            *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(gapImage + iVar8);
                        }
                        else {
                            imageCopy(iVar7 + 0x20,iVar9,local_28);
                        }
                    }
                }
                iVar6 += 0x30;
            }
            gnFrameSkip = gfxFrameMsgQ._8_4_ + gnFrameSkip + 0x4;
            Pon_Image_Heap = local_28[0];
        }
        gpHeapNext = local_28[0];
        gnMaskRateDefault = 0x3;
        gnMaskRate = 0x3;
        giScreen = param_1;
        if (0x0 < *(int *)(iVar14 + 0x8)) {
            screenUpdateArea(*(undefined4 *)(iVar14 + 0x18));
        }
    }
    return;
}



undefined4 screenLoadBack(int param_1,undefined4 param_2)

{
    uint uVar1;
    undefined4 uVar2;
    int iVar3;
    char *pcVar4;
    
    if (param_1 == 0x9) {
        uVar1 = osGetCount();
        param_1 = (uVar1 & 0x7) + 0x1;
    }
    if (false) {
switchD_00097548_caseD_9:
        uVar2 = 0x0;
    }
    else {
        switch(param_1) {
        case 0x0:
            gnColorBack0 = 0xfd29;
            gnColorBack1 = 0xf38c8cff;
            gnColorBack2 = 0xffa5a5ff;
            gnColorBack3 = 0xad63514c;
            gnColorBack4 = 0xf7d7594c;
            gnColorBack5 = 0xff;
            pcVar4 = _1410;
            break;
        case 0x1:
            gnColorBack0 = 0x6cf1;
            gnColorBack1 = 0x6595bbff;
            gnColorBack2 = 0x699ec4ff;
            gnColorBack3 = 0x1547ff4f;
            gnColorBack4 = 0xa0b2ff4f;
            pcVar4 = _1418;
            gnColorBack5 = 0xff;
            break;
        case 0x2:
            gnColorBack0 = 0x5475;
            gnColorBack1 = 0x557ed6ff;
            gnColorBack2 = 0x528dd4ff;
            gnColorBack3 = 0x7b38ad5a;
            gnColorBack4 = 0xe5b9f75a;
            pcVar4 = _1420;
            gnColorBack5 = 0xff;
            break;
        case 0x3:
            gnColorBack0 = 0x4e93;
            gnColorBack1 = 0x2fb94aff;
            gnColorBack2 = 0x48d64fff;
            gnColorBack3 = 0x44cea019;
            gnColorBack4 = 0x3fcc9e19;
            pcVar4 = _1411;
            gnColorBack5 = 0xff;
            break;
        case 0x4:
            gnColorBack0 = 0xed45;
            gnColorBack1 = 0xea7222ff;
            gnColorBack2 = 0xeead11ff;
            gnColorBack3 = 0x6d015f1a;
            gnColorBack4 = 0xb7115d1a;
            pcVar4 = _1412;
            gnColorBack5 = 0xff;
            break;
        case 0x5:
            gnColorBack0 = 0xff69;
            gnColorBack1 = 0xf9e870ff;
            gnColorBack2 = 0xffefa5ff;
            gnColorBack3 = 0xffc6ff4c;
            gnColorBack4 = 0xffb2e84c;
            pcVar4 = _1415;
            gnColorBack5 = 0xff;
            break;
        case 0x6:
            gnColorBack0 = 0xbff1;
            gnColorBack1 = 0xacf6b6ff;
            gnColorBack2 = 0xbcfec6ff;
            gnColorBack3 = 0x4d933b18;
            gnColorBack4 = 0x34662718;
            pcVar4 = _1414;
            gnColorBack5 = 0xff;
            break;
        case 0x7:
            gnColorBack0 = 0xa2f1;
            gnColorBack1 = 0x8e58b3ff;
            gnColorBack2 = 0xa359c3ff;
            gnColorBack3 = 0x365f902f;
            gnColorBack4 = 0xd7e4ff2f;
            pcVar4 = _1422;
            gnColorBack5 = 0xff;
            break;
        case 0x8:
            gnColorBack0 = 0xfdf5;
            gnColorBack1 = 0xf3a7d1ff;
            gnColorBack2 = 0xfebcd5ff;
            gnColorBack3 = 0xcdac0128;
            gnColorBack4 = 0xfcf98b28;
            pcVar4 = _1413;
            gnColorBack5 = 0xff;
            break;
        default:
            goto switchD_00097548_caseD_9;
        case 0xa:
            gnColorBack0 = 0xfb65;
            gnColorBack1 = 0xe74e74ff;
            gnColorBack2 = 0xfa6e92ff;
            gnColorBack3 = 0x842b573d;
            gnColorBack4 = 0xeb98b53d;
            pcVar4 = _1424;
            gnColorBack5 = 0xff;
            break;
        case 0xb:
            gnColorBack0 = 0xbc2b;
            gnColorBack1 = 0xb275a7ff;
            gnColorBack2 = 0xb887aeff;
            gnColorBack3 = 0xfbf2ca27;
            gnColorBack4 = 0x97ee7d27;
            pcVar4 = _1425;
            gnColorBack5 = 0xff;
            break;
        case 0xc:
            gnColorBack0 = 0xcc31;
            gnColorBack1 = 0xc77ab1ff;
            gnColorBack2 = 0xca81c3ff;
            gnColorBack3 = 0x17;
            gnColorBack4 = 0x416e9a17;
            pcVar4 = _1421;
            gnColorBack5 = 0x30;
            break;
        case 0xd:
            gnColorBack0 = 0x319f;
            gnColorBack1 = 0x2f2e67ff;
            gnColorBack2 = 0x31347eff;
            gnColorBack3 = 0x96001827;
            gnColorBack4 = 0xd7d30027;
            pcVar4 = _1416;
            gnColorBack5 = 0xff;
            break;
        case 0xe:
            gnColorBack0 = 0xce11;
            gnColorBack1 = 0xc1af31ff;
            gnColorBack2 = 0xc8c541ff;
            gnColorBack3 = 0xe2cc5f4d;
            gnColorBack4 = 0xedebc94d;
            pcVar4 = _1419;
            gnColorBack5 = 0xff;
            break;
        case 0xf:
            gnColorBack0 = 0x4db3;
            gnColorBack1 = 0x41a4c9ff;
            gnColorBack2 = 0x4bb1c9ff;
            gnColorBack3 = 0x5fc5c24f;
            gnColorBack4 = 0x3fefb94f;
            pcVar4 = _1417;
            gnColorBack5 = 0x50;
            break;
        case 0x10:
            gnColorBack0 = 0xcc37;
            gnColorBack1 = 0xd86ecaff;
            gnColorBack2 = 0xcd80dcff;
            gnColorBack3 = 0xbf83b9bf;
            gnColorBack4 = 0xd088b1bf;
            pcVar4 = _1423;
            gnColorBack5 = 0xff;
        }
        gnColorBack0 |= gnColorBack0 << 0x10;
        iVar3 = imageLoad(&gpImageBack,pcVar4,param_2);
        if ((iVar3 == 0x0) || (*(int *)(gpImageBack + 0x18) != 0x3)) {
            uVar2 = 0x0;
        }
        else {
            gnCountLayers = 0x3;
            uVar2 = 0xffffffff;
        }
    }
    return uVar2;
}



undefined4 screenDrawBack(uint **param_1)

{
    short sVar1;
    uint *puVar2;
    undefined4 uVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    uint uVar9;
    int iVar10;
    uint uVar11;
    short sVar12;
    int iVar13;
    uint uVar14;
    int iVar15;
    int iVar16;
    uint *local_54;
    undefined4 local_50;
    uint uStack_4c;
    undefined4 local_48;
    uint uStack_44;
    undefined4 local_40;
    uint uStack_3c;
    undefined4 local_38;
    uint uStack_34;
    
    if ((gpImageBack == 0x0) || (*(int *)(gpImageBack + 0x18) != 0x3)) {
        uVar3 = 0x0;
    }
    else {
        puVar2 = *param_1;
        *puVar2 = 0xf9000000;
        puVar2[0x1] = 0x7f;
        puVar2[0x2] = 0xe7000000;
        puVar2[0x3] = 0x0;
        puVar2[0x4] = 0xe3000f00;
        puVar2[0x5] = 0x0;
        puVar2[0x6] = 0xe3000c00;
        puVar2[0x7] = 0x0;
        puVar2[0x8] = 0xe2001e01;
        puVar2[0x9] = 0x0;
        puVar2[0xa] = 0xe3001801;
        puVar2[0xb] = 0xc0;
        puVar2[0xc] = 0xe3001a01;
        puVar2[0xd] = 0x30;
        puVar2[0xe] = 0xe3001201;
        puVar2[0xf] = 0x2000;
        puVar2[0x10] = 0xd9ddf9fa;
        puVar2[0x11] = 0x0;
        puVar2[0x12] = 0xe3000a01;
        puVar2[0x13] = 0x300000;
        puVar2[0x14] = 0xe200001c;
        puVar2[0x15] = 0x0;
        puVar2[0x16] = 0xd7000000;
        puVar2[0x17] = 0x80008000;
        puVar2[0x18] = 0xf7000000;
        puVar2[0x19] = gnColorBack0;
        local_54 = puVar2 + 0x1c;
        puVar2[0x1a] = 0xf64fc3bc;
        puVar2[0x1b] = 0x0;
        if (gnCountLayers < 0x1) {
            uVar3 = 0x0;
            *param_1 = local_54;
        }
        else {
            n642Dolphin_AllchangeTexture();
            iVar13 = **(int **)(gpImageBack + 0x2c);
            *local_54 = 0xe7000000;
            local_54[0x1] = 0x0;
            uVar14 = 0xffffffff;
            iVar15 = -0x28;
            local_54[0x2] = 0xe3000a01;
            local_54[0x3] = 0x0;
            local_54[0x4] = 0xe2001e01;
            local_54[0x5] = 0x1;
            local_54[0x6] = 0xe200001c;
            local_54[0x7] = 0xf0a4000;
            local_54[0x8] = 0xfc30fe61;
            local_54[0x9] = 0x55fef379;
            local_54[0xa] = 0xe3001001;
            local_54[0xb] = 0x0;
            local_54[0xc] = 0xfb000000;
            local_54[0xd] = gnColorBack1;
            local_54[0xe] = 0xfa000000;
            local_54[0xf] = gnColorBack2;
            local_54 = local_54 + 0x10;
            do {
                uVar8 = iVar15 - 0x4;
                uVar9 = (uVar14 & 0x1) * 0x14 - 0x28;
                iVar7 = -0x1;
                do {
                    if ((((0x0 < (int)(uVar8 + *(int *)(iVar13 + 0xc))) && ((int)uVar8 < 0x140)) &&
                        (uVar5 = *(uint *)(iVar13 + 0x10), 0x0 < (int)(uVar9 + uVar5))) &&
                       ((int)uVar9 < 0xf0)) {
                        uStack_34 = uVar8 ^ 0x80000000;
                        uStack_3c = uVar9 ^ 0x80000000;
                        uVar11 = *(int *)(iVar13 + 0x4) << 0x1;
                        uStack_44 = uVar11 ^ 0x80000000;
                        uStack_4c = uVar5 ^ 0x80000000;
                        local_38 = 0x43300000;
                        local_48 = 0x43300000;
                        local_40 = 0x43300000;
                        local_50 = 0x43300000;
                        StretchTexBlock4ia((double)(float)((double)CONCAT44(0x43300000,uStack_34) -
                                                          4503601774854144.0),
                                           (double)(float)((double)CONCAT44(0x43300000,uStack_3c) -
                                                          4503601774854144.0),
                                           (double)(float)((double)CONCAT44(0x43300000,uStack_44) -
                                                          4503601774854144.0),
                                           (double)(float)((double)CONCAT44(0x43300000,uStack_4c) -
                                                          4503601774854144.0),&local_54,uVar11,uVar5
                                           ,*(undefined4 *)(iVar13 + 0x8));
                    }
                    iVar7 += 0x1;
                    uVar8 += 0x4;
                    uVar9 += 0x28;
                } while (iVar7 < 0x7);
                uVar14 += 0x1;
                iVar15 += 0x28;
            } while ((int)uVar14 < 0x9);
            if (gnCountLayers < 0x2) {
                uVar3 = 0x0;
                *param_1 = local_54;
            }
            else {
                iVar13 = *(int *)(*(int *)(gpImageBack + 0x2c) + 0x4);
                *local_54 = 0xe7000000;
                local_54[0x1] = 0x0;
                local_54[0x2] = 0xe2001e01;
                local_54[0x3] = 0x0;
                uVar8 = 0xfffffffd;
                iVar15 = -0xf0;
                local_54[0x4] = 0xe200001c;
                local_54[0x5] = 0x504240;
                local_54[0x6] = 0xfc309661;
                local_54[0x7] = 0x552eff7f;
                local_54[0x8] = 0xfb000000;
                local_54[0x9] = gnColorBack3;
                local_54[0xa] = 0xfa000000;
                local_54[0xb] = gnColorBack4;
                local_54[0xc] = 0xe3001001;
                local_54[0xd] = 0x0;
                uVar14 = (gnFrameCount >> 0x2) % 0x140;
                local_54 = local_54 + 0xe;
                do {
                    uVar9 = iVar15 - uVar14;
                    iVar7 = (uVar8 & 0x1) * 0x28 + -0x1e0;
                    iVar10 = -0x6;
                    do {
                        uStack_44 = uVar14 + iVar7;
                        if (((0x0 < (int)(uVar9 + *(int *)(iVar13 + 0xc))) && ((int)uVar9 < 0x140))
                           && ((uVar5 = *(uint *)(iVar13 + 0x10), 0x0 < (int)(uStack_44 + uVar5) &&
                               ((int)uStack_44 < 0xf0)))) {
                            uStack_44 ^= 0x80000000;
                            uStack_34 = uVar5 ^ 0x80000000;
                            uVar11 = *(int *)(iVar13 + 0x4) << 0x1;
                            local_50 = 0x43300000;
                            uStack_3c = uVar11 ^ 0x80000000;
                            local_40 = 0x43300000;
                            local_48 = 0x43300000;
                            local_38 = 0x43300000;
                            uStack_4c = uVar9 ^ 0x80000000;
                            StretchTexBlock4ia((double)(float)((double)CONCAT44(0x43300000,
                                                                                uVar9 ^ 0x80000000)
                                                              - 4503601774854144.0),
                                               (double)(float)((double)CONCAT44(0x43300000,uStack_44
                                                                               ) -
                                                              4503601774854144.0),
                                               (double)(float)((double)CONCAT44(0x43300000,uStack_3c
                                                                               ) -
                                                              4503601774854144.0),
                                               (double)(float)((double)CONCAT44(0x43300000,uStack_34
                                                                               ) -
                                                              4503601774854144.0),&local_54,uVar11,
                                               uVar5,*(undefined4 *)(iVar13 + 0x8));
                        }
                        iVar10 += 0x1;
                        iVar7 += 0x50;
                    } while (iVar10 < 0xc);
                    uVar8 += 0x1;
                    iVar15 += 0x50;
                } while ((int)uVar8 < 0xc);
                if (gnCountLayers < 0x3) {
                    uVar3 = 0x0;
                    *param_1 = local_54;
                }
                else {
                    iVar13 = *(int *)(*(int *)(gpImageBack + 0x2c) + 0x8);
                    *local_54 = 0xe7000000;
                    local_54[0x1] = 0x0;
                    if ((gnColorBack5 & 0xff) == 0xff) {
                        local_54[0x2] = 0xe2001e01;
                        local_54[0x3] = 0x1;
                        local_54[0x4] = 0xe200001c;
                        local_54[0x5] = 0xf0a4000;
                        local_54[0x6] = 0xfcffffff;
                        local_54[0x7] = 0xfffcf279;
                        local_54 = local_54 + 0x8;
                    }
                    else {
                        local_54[0x2] = 0xe2001e01;
                        local_54[0x3] = 0x0;
                        local_54[0x4] = 0xe200001c;
                        local_54[0x5] = 0x504240;
                        local_54[0x6] = 0xfa000000;
                        local_54[0x7] = gnColorBack5 & 0xff | 0xffffff00;
                        local_54[0x8] = 0xfc119623;
                        local_54[0x9] = 0xff2fffff;
                        local_54 = local_54 + 0xa;
                    }
                    *local_54 = 0xe3001001;
                    local_54[0x1] = 0x8000;
                    local_54[0x2] = 0xfd100000;
                    local_54[0x3] = *(uint *)(iVar13 + 0x18);
                    local_54[0x4] = 0xe8000000;
                    local_54[0x5] = 0x0;
                    local_54[0x6] = 0xf5000100;
                    local_54[0x7] = 0x7000000;
                    local_54[0x8] = 0xe6000000;
                    local_54[0x9] = 0x0;
                    local_54[0xa] = 0xf0000000;
                    local_54[0xb] = 0x703c000;
                    local_54[0xc] = 0xe7000000;
                    local_54[0xd] = 0x0;
                    local_54[0xe] = 0xfd500000;
                    local_54[0xf] = *(uint *)(iVar13 + 0x8);
                    local_54[0x10] = 0xf5500000;
                    local_54[0x11] = 0x7080200;
                    local_54[0x12] = 0xe6000000;
                    local_54[0x13] = 0x0;
                    local_54[0x14] = 0xf3000000;
                    uVar14 = *(uint *)(iVar13 + 0x4) * 0x2;
                    uVar8 = ((int)(uVar14 * *(int *)(iVar13 + 0x10) + 0x3) >> 0x2) - 0x1;
                    if (0x7fe < (int)uVar8) {
                        uVar8 = 0x7ff;
                    }
                    iVar15 = ((int)(uVar14 | *(uint *)(iVar13 + 0x4) >> 0x1f) >> 0x4) +
                             (uint)((int)uVar14 < 0x0 && (uVar14 & 0xe) != 0x0);
                    if (iVar15 < 0x1) {
                        iVar15 = 0x1;
                    }
                    local_54[0x15] =
                         (iVar15 + 0x7ff) / iVar15 & 0xfffU | (uVar8 & 0xfff) << 0xc | 0x7000000;
                    local_54[0x16] = 0xe7000000;
                    local_54[0x17] = 0x0;
                    uVar14 = 0xfffffffd;
                    iVar15 = -0xf0;
                    local_54[0x18] =
                         (((int)(*(uint *)(iVar13 + 0x4) << 0x1 | *(uint *)(iVar13 + 0x4) >> 0x1f)
                          >> 0x1) + 0x7 >> 0x3 & 0x1ffU) << 0x9 | 0xf5400000;
                    local_54[0x19] = 0x80200;
                    local_54[0x1a] = 0xf2000000;
                    local_54[0x1b] =
                         (*(int *)(iVar13 + 0x4) * 0x2 + -0x1) * 0x4000 & 0xffc000U |
                         (*(int *)(iVar13 + 0x10) + -0x1) * 0x4 & 0xffcU;
                    uVar8 = (gnFrameCount >> 0x1) % 0xa0;
                    local_54 = local_54 + 0x1c;
                    do {
                        iVar10 = iVar15 - uVar8;
                        sVar1 = (short)iVar10 * 0x4;
                        iVar16 = 0xa;
                        iVar7 = (uVar14 & 0x1) * 0x28 + -0x1e0;
                        do {
                            iVar6 = uVar8 + iVar7;
                            if (((0x0 < iVar10 + *(int *)(iVar13 + 0xc)) && (iVar10 < 0x140)) &&
                               ((0x0 < iVar6 + *(int *)(iVar13 + 0x10) && (iVar6 < 0xf0)))) {
                                sVar12 = (short)(iVar6 + *(int *)(iVar13 + 0x10)) * 0x4;
                                uVar9 = (uint)sVar12;
                                if (sVar12 < 0x1) {
                                    uVar9 = 0x0;
                                }
                                sVar12 = (short)(iVar10 + *(int *)(iVar13 + 0xc)) * 0x4;
                                uVar5 = (uint)sVar12;
                                if (sVar12 < 0x1) {
                                    uVar5 = 0x0;
                                }
                                sVar12 = (short)(iVar6 * 0x4);
                                uVar11 = (uint)sVar12;
                                *local_54 = (uVar5 & 0xfff) << 0xc | 0xe4000000 | uVar9 & 0xfff;
                                if (sVar12 < 0x1) {
                                    uVar11 = 0x0;
                                }
                                uVar9 = (int)sVar1;
                                if (sVar1 < 0x1) {
                                    uVar9 = 0x0;
                                }
                                local_54[0x1] = (uVar9 & 0xfff) << 0xc | uVar11 & 0xfff;
                                local_54[0x2] = 0xe1000000;
                                if (iVar6 * 0x4 < 0x0) {
                                    iVar6 = ((int)sVar12 << 0xa) >> 0x7;
                                    if (-0x1 < iVar6) {
                                        iVar6 = 0x0;
                                    }
                                }
                                else {
                                    iVar6 = 0x0;
                                }
                                if (sVar1 < 0x0) {
                                    iVar4 = ((int)sVar1 << 0xa) >> 0x7;
                                    if (-0x1 < iVar4) {
                                        iVar4 = 0x0;
                                    }
                                }
                                else {
                                    iVar4 = 0x0;
                                }
                                local_54[0x3] = iVar4 * -0x10000 | -iVar6 & 0xffffU;
                                local_54[0x4] = 0xf1000000;
                                local_54[0x5] = 0x4000400;
                                local_54 = local_54 + 0x6;
                            }
                            iVar7 += 0x50;
                            iVar16 += -0x1;
                        } while (iVar16 != 0x0);
                        uVar14 += 0x1;
                        iVar15 += 0x50;
                    } while ((int)uVar14 < 0x7);
                    uVar3 = 0xffffffff;
                    *param_1 = local_54;
                }
            }
        }
    }
    return uVar3;
}



void screenDrawPageText(undefined4 param_1)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    if ((giScreenPage != -0x1) && (gnFrameSkip == 0x0)) {
        iVar5 = gaScreen + giScreenPage * 0x48;
        if (giFramePage < 0xc) {
            n642Dolphin_AllchangeTexture();
            *gpImagePageFront = giFramePage;
            imageDraw(gpImagePageFront,param_1,
                      *(undefined4 *)(gpImagePageFront[0x7] + giFramePage * 0x4),
                      *(undefined4 *)(gpImagePageFront[0x8] + giFramePage * 0x4),0x0);
            iVar4 = 0x0;
            for (iVar3 = 0x0; iVar3 < *(int *)(iVar5 + 0xc); iVar3 += 0x1) {
                iVar1 = *(int *)(iVar5 + 0x1c) + iVar4;
                uVar2 = *(uint *)(iVar1 + 0x44);
                if (((uVar2 & 0x40000) != 0x0) && ((uVar2 & 0x400) == 0x0)) {
                    screenDrawText(iVar1,param_1,giFramePage);
                }
                iVar4 += 0x6c;
            }
        }
        *gpImagePageBack = giFramePage;
        imageDraw(gpImagePageBack,param_1,*(undefined4 *)(gpImagePageBack[0x7] + giFramePage * 0x4),
                  *(undefined4 *)(gpImagePageBack[0x8] + giFramePage * 0x4),0x0);
    }
    return;
}



void screenDrawDialog(int param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    uint uVar2;
    uint uVar3;
    undefined4 uVar4;
    
    puVar1 = (undefined4 *)*param_2;
    *puVar1 = 0xe7000000;
    puVar1[0x1] = 0x0;
    puVar1[0x2] = 0xe2001e01;
    puVar1[0x3] = 0x0;
    puVar1[0x4] = 0xe200001c;
    puVar1[0x5] = 0x504240;
    puVar1[0x6] = 0xfcffffff;
    puVar1[0x7] = 0xfffdf6fb;
    uVar3 = *(uint *)(param_1 + 0x10);
    puVar1[0x8] = 0xfa000000;
    puVar1[0x9] = uVar3 & 0xff |
                  ((int)(uVar3 >> 0x8 & 0xff) >> 0x1) << 0x8 |
                  ((int)(uVar3 >> 0x18) >> 0x1) << 0x18 |
                  ((int)(uVar3 >> 0x10 & 0xff) >> 0x1) << 0x10;
    uVar3 = *(int *)(param_1 + 0x8) + *(int *)(param_1 + 0x28) + 0x4;
    if ((int)uVar3 < 0x1) {
        uVar3 = 0x0;
    }
    uVar2 = *(int *)(param_1 + 0x4) + *(int *)(param_1 + 0x24) + 0x4;
    if ((int)uVar2 < 0x1) {
        uVar2 = 0x0;
    }
    puVar1[0xa] = (uVar2 & 0x3ff) << 0xe | 0xf6000000 | (uVar3 & 0x3ff) << 0x2;
    uVar3 = *(int *)(param_1 + 0x4) + *(int *)(param_1 + 0x24);
    if ((int)uVar3 < 0x1) {
        uVar3 = 0x0;
    }
    uVar2 = *(int *)(param_1 + 0x8) - 0x4;
    if ((int)uVar2 < 0x1) {
        uVar2 = 0x0;
    }
    puVar1[0xb] = (uVar2 & 0x3ff) << 0x2 | (uVar3 & 0x3ff) << 0xe;
    uVar3 = *(int *)(param_1 + 0x8) + *(int *)(param_1 + 0x28) + 0x4;
    if ((int)uVar3 < 0x1) {
        uVar3 = 0x0;
    }
    uVar2 = *(int *)(param_1 + 0x4) + *(int *)(param_1 + 0x24) + 0x4;
    if ((int)uVar2 < 0x1) {
        uVar2 = 0x0;
    }
    puVar1[0xc] = (uVar2 & 0x3ff) << 0xe | 0xf6000000 | (uVar3 & 0x3ff) << 0x2;
    uVar3 = *(int *)(param_1 + 0x8) + *(int *)(param_1 + 0x28);
    if ((int)uVar3 < 0x1) {
        uVar3 = 0x0;
    }
    uVar2 = *(int *)(param_1 + 0x4) - 0x4;
    if ((int)uVar2 < 0x1) {
        uVar2 = 0x0;
    }
    puVar1[0xd] = (uVar2 & 0x3ff) << 0xe | (uVar3 & 0x3ff) << 0x2;
    uVar3 = *(uint *)(param_1 + 0x10);
    puVar1[0xe] = 0xfa000000;
    puVar1[0xf] = uVar3 & 0xff | 0x80 |
                  (uVar3 >> 0x8 & 0xff | 0x80) << 0x8 |
                  (uVar3 >> 0x18 | 0x80) << 0x18 | (uVar3 >> 0x10 & 0xff | 0x80) << 0x10;
    uVar3 = *(int *)(param_1 + 0x4) + *(int *)(param_1 + 0x24) + 0x4;
    if ((int)uVar3 < 0x1) {
        uVar3 = 0x0;
    }
    uVar2 = *(uint *)(param_1 + 0x8);
    if ((int)uVar2 < 0x1) {
        uVar2 = 0x0;
    }
    puVar1[0x10] = (uVar2 & 0x3ff) << 0x2 | (uVar3 & 0x3ff) << 0xe | 0xf6000000;
    uVar3 = *(int *)(param_1 + 0x8) - 0x4;
    if ((int)uVar3 < 0x1) {
        uVar3 = 0x0;
    }
    uVar2 = *(int *)(param_1 + 0x4) - 0x4;
    if ((int)uVar2 < 0x1) {
        uVar2 = 0x0;
    }
    puVar1[0x11] = (uVar2 & 0x3ff) << 0xe | (uVar3 & 0x3ff) << 0x2;
    uVar3 = *(int *)(param_1 + 0x8) + *(int *)(param_1 + 0x28) + 0x4;
    if ((int)uVar3 < 0x1) {
        uVar3 = 0x0;
    }
    uVar2 = *(uint *)(param_1 + 0x4);
    if ((int)uVar2 < 0x1) {
        uVar2 = 0x0;
    }
    puVar1[0x12] = (uVar2 & 0x3ff) << 0xe | 0xf6000000 | (uVar3 & 0x3ff) << 0x2;
    uVar3 = *(int *)(param_1 + 0x8) - 0x4;
    if ((int)uVar3 < 0x1) {
        uVar3 = 0x0;
    }
    uVar2 = *(int *)(param_1 + 0x4) - 0x4;
    if ((int)uVar2 < 0x1) {
        uVar2 = 0x0;
    }
    puVar1[0x13] = (uVar2 & 0x3ff) << 0xe | (uVar3 & 0x3ff) << 0x2;
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    puVar1[0x14] = 0xfa000000;
    puVar1[0x15] = uVar4;
    uVar3 = *(int *)(param_1 + 0x8) + *(int *)(param_1 + 0x28);
    if ((int)uVar3 < 0x1) {
        uVar3 = 0x0;
    }
    uVar2 = *(int *)(param_1 + 0x4) + *(int *)(param_1 + 0x24);
    if ((int)uVar2 < 0x1) {
        uVar2 = 0x0;
    }
    puVar1[0x16] = (uVar2 & 0x3ff) << 0xe | 0xf6000000 | (uVar3 & 0x3ff) << 0x2;
    uVar3 = *(uint *)(param_1 + 0x8);
    if ((int)uVar3 < 0x1) {
        uVar3 = 0x0;
    }
    uVar2 = *(uint *)(param_1 + 0x4);
    if ((int)uVar2 < 0x1) {
        uVar2 = 0x0;
    }
    puVar1[0x17] = (uVar2 & 0x3ff) << 0xe | (uVar3 & 0x3ff) << 0x2;
    *param_2 = puVar1 + 0x18;
    return;
}



void screenTickTextData(void)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    
    iVar5 = gaScreen + giScreen * 0x48;
    iVar2 = *(int *)(iVar5 + 0x28);
    if (iVar2 != -0x1) {
        iVar2 = *(int *)(iVar5 + 0x18) + iVar2 * 0x60;
        if ((*(uint *)(iVar2 + 0x2c) & 0x2000) == 0x0) {
            *(undefined4 *)(iVar2 + 0x20) = 0xffffffff;
        }
        else {
            uVar1 = *(uint *)(iVar2 + 0x10) & 0xff;
            uVar6 = *(uint *)(iVar2 + 0x10) >> 0x8 & 0xfff;
            uVar3 = uVar6 + *(int *)(iVar2 + 0x40) * uVar1;
            if (((int)uVar3 < (int)gnTagTextBase) ||
               ((int)(gnTagTextBase + (uVar1 - 0x1)) < (int)uVar3)) {
                gnCountTextTag = 0x0;
                gnTagTextBase = uVar3;
                screenHideText(giScreen,uVar6 | (uVar6 + *(int *)(iVar2 + 0x30) * uVar1 + -0x1) *
                                                0x10000 | 0x80008000);
                screenShowText(giScreen,uVar3);
                gnMaskRate = 0x3;
                *(uint *)(iVar2 + 0x20) = uVar3;
            }
            else {
                iVar5 = screenTextDone(giScreen,*(undefined4 *)(iVar2 + 0x20));
                if (iVar5 != 0x0) {
                    gnCountTextTag += 0x1;
                    if (0x59 < (gnCountTextTag & 0xffff)) {
                        iVar8 = gaScreen + giScreen * 0x48;
                        iVar5 = (int)gnCountTextTag >> 0x10;
                        while( true ) {
                            iVar5 += 0x1;
                            if ((int)uVar1 <= iVar5) break;
                            iVar4 = *(int *)(iVar8 + 0xc);
                            iVar9 = uVar3 + iVar5;
                            iVar7 = 0x0;
                            if (0x0 < iVar4) {
                                do {
                                    if (iVar9 == *(int *)(*(int *)(iVar8 + 0x1c) + iVar7)) {
                                        gnCountTextTag = iVar5 * 0x10000;
                                        screenHideText(giScreen,uVar3 | (uVar3 + (uVar1 - 0x1)) *
                                                                        0x10000 | 0x80008000);
                                        screenShowText(giScreen,iVar9);
                                        gnMaskRate = 0x3;
                                        *(int *)(iVar2 + 0x20) = iVar9;
                                        return;
                                    }
                                    iVar7 += 0x6c;
                                    iVar4 += -0x1;
                                } while (iVar4 != 0x0);
                            }
                        }
                        if ((((int)uVar1 <= iVar5) && (0xd1 < (gnCountTextTag & 0xffff))) &&
                           ((int)gnCountTextTag >> 0x10 != 0x0)) {
                            gnCountTextTag = 0x0;
                            screenHideText(giScreen,uVar3 | (uVar3 + (uVar1 - 0x1)) * 0x10000 |
                                                            0x80008000);
                            screenShowText(giScreen,uVar3);
                            gnMaskRate = 0x3;
                            *(uint *)(iVar2 + 0x20) = uVar3;
                        }
                    }
                }
            }
        }
    }
    return;
}



undefined4 screenGetHeap(uint *param_1)

{
    *param_1 = gpHeapNext + 0xfU & 0xfffffff0;
    return 0xffffffff;
}



undefined4 screenChangePending(void)

{
    if (giScreenNext == -0x1) {
        return 0x0;
    }
    return 0xffffffff;
}



undefined4 screenFlushing(void)

{
    if (gnFrameSkip == 0x0) {
        return 0x0;
    }
    return 0xffffffff;
}



void screenDraw(uint **param_1,code *param_2)

{
    bool bVar1;
    code *pcVar2;
    int iVar3;
    undefined4 uVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    uint *puVar12;
    int iVar13;
    undefined4 *puVar14;
    int iVar15;
    int iVar16;
    uint *local_3c [0x2];
    
    puVar14 = NULL;
    if (gnFrameSkip < 0x1) {
        if (giScreen != -0x1) {
            bVar1 = false;
            if ((geModeFade == 0x5) && (gnTickWait != 0x0)) {
                bVar1 = true;
            }
            if (bVar1) {
                iVar16 = -0x1;
            }
            else {
                iVar16 = 0x0;
            }
            if (giScreenNext == -0x1) {
                iVar3 = 0x0;
            }
            else {
                iVar3 = -0x1;
            }
            pcVar2 = param_2;
            if (iVar3 != 0x0) {
                pcVar2 = gpfDraw;
            }
            gpfDraw = pcVar2;
            pcVar2 = gpfDraw;
            local_3c[0] = *param_1;
            if (gpImageBack != 0x0) {
                screenDrawBack(local_3c);
            }
            iVar3 = 0x0;
            *local_3c[0] = 0xe7000000;
            local_3c[0][0x1] = 0x0;
            local_3c[0][0x2] = 0xe3000a01;
            local_3c[0][0x3] = 0x0;
            local_3c[0][0x4] = 0xe3001402;
            local_3c[0][0x5] = 0xc00;
            local_3c[0][0x6] = 0xe3001801;
            local_3c[0][0x7] = 0xc0;
            puVar12 = local_3c[0] + 0xa;
            local_3c[0][0x8] = 0xe3001a01;
            local_3c[0][0x9] = 0x30;
            local_3c[0] = puVar12;
            if ((geModeFade != 0x1) && (geModeFade != 0x2)) {
                iVar15 = gaScreen + giScreen * 0x48;
                for (iVar11 = 0x0; iVar11 < *(int *)(iVar15 + 0x10); iVar11 += 0x1) {
                    puVar14 = (undefined4 *)(*(int *)(iVar15 + 0x20) + iVar3);
                    uVar7 = puVar14[0x9];
                    if (((uVar7 & 0x2) == 0x0) && ((uVar7 & 0x4) == 0x0)) {
                        if ((uVar7 & 0x8) == 0x0) {
                            if ((uVar7 & 0x1000) == 0x0) {
                                if ((((undefined4 *)puVar14[0x5])[0x3] & 0x20) == 0x0) {
                                    *(undefined4 *)puVar14[0x5] = puVar14[0x2];
                                }
                                imageSetScale((double)(float)puVar14[0x4],
                                              (double)(float)puVar14[0x4],puVar14[0x5]);
                                imageDraw(puVar14[0x5],local_3c,*puVar14,puVar14[0x1],0x0);
                            }
                        }
                        else if (((uVar7 & 0x1) == 0x0) && (pcVar2 != NULL)) {
                            (*pcVar2)(local_3c,giScreen,puVar14[0x7]);
                        }
                    }
                    iVar3 += 0x30;
                }
                iVar3 = 0x0;
                for (iVar11 = 0x0; iVar11 < *(int *)(iVar15 + 0xc); iVar11 += 0x1) {
                    iVar13 = *(int *)(iVar15 + 0x1c) + iVar3;
                    if ((((*(uint *)(iVar13 + 0x44) & 0x40) == 0x0) ||
                        ((*(uint *)(iVar13 + 0x44) & 0x2000) == 0x0)) &&
                       ((*(uint *)(iVar13 + 0x44) & 0x400) == 0x0)) {
                        if ((*(uint *)(iVar13 + 0x44) & 0x1010000) == 0x1010000) {
                            screenDrawTextOval(iVar13,0xffffff80,local_3c);
                        }
                        screenDrawText(iVar13,local_3c,0xffffffff);
                    }
                    iVar3 += 0x6c;
                }
                if (geModeFade - 0x6U < 0x2) {
                    screenDrawPageText(local_3c);
                }
                iVar11 = 0x0;
                for (iVar3 = 0x0; iVar3 < *(int *)(iVar15 + 0x8); iVar3 += 0x1) {
                    iVar13 = *(int *)(iVar15 + 0x18) + iVar11;
                    uVar7 = *(uint *)(iVar13 + 0x2c);
                    if (((uVar7 & 0x80) != 0x0) && ((uVar7 & 0x800) == 0x0)) {
                        if (giScreenNext == -0x1) {
                            iVar5 = 0x0;
                        }
                        else {
                            iVar5 = -0x1;
                        }
                        if ((((iVar5 == 0x0) && (0x1 < geModeFade - 0x6U)) &&
                            ((((*(undefined4 **)(iVar13 + 0xc))[0x3] & 0x24) != 0x0 ||
                             (((((iVar3 != *(int *)(iVar15 + 0x28) || ((gnFrameCount & 0x8) != 0x0))
                                && ((iVar3 != *(int *)(iVar15 + 0x2c) ||
                                    ((gnFrameCount & 0x8) != 0x8)))) &&
                               ((iVar3 != *(int *)(iVar15 + 0x30) || ((gnFrameCount & 0x8) != 0x8)))
                               ) && ((iVar3 != *(int *)(iVar15 + 0x34) ||
                                     ((gnFrameCount & 0x8) != 0x8)))))))) &&
                           ((((((uVar7 & 0x1) != 0x0 || ((uVar7 & 0x2) == 0x0)) ||
                              ((0x1 < gnPlayerCount && ((gValidControllers & 0xe) != 0x0)))) ||
                             (gnPlayerCount == 0x4)) &&
                            (((((uVar7 & 0x100) == 0x0 || (iVar3 == *(int *)(iVar15 + 0x28))) ||
                              (iVar3 == *(int *)(iVar15 + 0x2c))) ||
                             ((iVar3 == *(int *)(iVar15 + 0x30) ||
                              (iVar3 == *(int *)(iVar15 + 0x34))))))))) {
                            **(undefined4 **)(iVar13 + 0xc) = 0x0;
                            if ((giScreen == 0x1e) && (gnPlayerCount == 0x4)) {
                                pon_imageDraw_4pSelectStageCursor
                                          (*(undefined4 *)(iVar13 + 0xc),local_3c,
                                           *(undefined4 *)(iVar13 + 0x44),
                                           *(undefined4 *)(iVar13 + 0x48),0x0,iVar3);
                            }
                            else {
                                imageDraw(*(undefined4 *)(iVar13 + 0xc),local_3c,
                                          *(undefined4 *)(iVar13 + 0x44),
                                          *(undefined4 *)(iVar13 + 0x48),0x0);
                            }
                            if ((*(uint *)(iVar13 + 0x2c) & 0x4000) != 0x0) {
                                imageDraw(gpImageAlign,local_3c,
                                          *(int *)(iVar13 + 0x44) +
                                          *(int *)(iVar13 + 0x18) +
                                          *(int *)(**(int **)(gpImageAlign + 0x2c) + 0xc),
                                          *(undefined4 *)(iVar13 + 0x48),0x0);
                            }
                        }
                    }
                    iVar11 += 0x60;
                }
                iVar3 = 0x0;
                iVar13 = 0x0;
                for (iVar11 = 0x0; iVar11 < *(int *)(iVar15 + 0x8); iVar11 += 0x1) {
                    puVar12 = (uint *)(*(int *)(iVar15 + 0x18) + iVar3);
                    uVar7 = puVar12[0xb];
                    if (((((uVar7 & 0x8000) != 0x0) &&
                         (((uVar7 & 0x100000) != 0x0 || ((uVar7 & 0x800) == 0x0)))) &&
                        ((iVar16 != 0x0 ||
                         ((((iVar11 != *(int *)(iVar15 + 0x28) &&
                            (iVar11 != *(int *)(iVar15 + 0x2c))) &&
                           (iVar11 != *(int *)(iVar15 + 0x30))) &&
                          (iVar11 != *(int *)(iVar15 + 0x34))))))) && (0x1 < geModeFade - 0x6U)) {
                        if (iVar13 == 0x0) {
                            iVar13 = -0x1;
                            *local_3c[0] = 0xe7000000;
                            local_3c[0][0x1] = 0x0;
                            local_3c[0][0x2] = 0xe3000a01;
                            local_3c[0][0x3] = 0x0;
                            local_3c[0][0x4] = 0xe2001e01;
                            local_3c[0][0x5] = 0x0;
                            local_3c[0][0x6] = 0xe200001c;
                            local_3c[0][0x7] = 0x504240;
                            local_3c[0][0x8] = 0xfcffffff;
                            local_3c[0][0x9] = 0xfffdf6fb;
                            local_3c[0][0xa] = 0xfa000000;
                            local_3c[0][0xb] = 0x80;
                            local_3c[0][0xc] = 0xd9ddf9fa;
                            local_3c[0][0xd] = 0x0;
                            local_3c[0] = local_3c[0] + 0xe;
                        }
                        *local_3c[0] = (*puVar12 + puVar12[0x9] + 0x1) * 0x4000 & 0xffc000 |
                                       0xf6000000 |
                                       (puVar12[0x1] + puVar12[0xa] + 0x1) * 0x4 & 0xffc;
                        local_3c[0][0x1] = (*puVar12 & 0x3ff) << 0xe | (puVar12[0x1] & 0x3ff) << 0x2
                        ;
                        local_3c[0] = local_3c[0] + 0x2;
                    }
                    iVar3 += 0x60;
                }
                iVar16 = 0x0;
                for (iVar3 = 0x0; iVar3 < *(int *)(iVar15 + 0x10); iVar3 += 0x1) {
                    puVar14 = (undefined4 *)(*(int *)(iVar15 + 0x20) + iVar16);
                    uVar7 = puVar14[0x9];
                    if (((uVar7 & 0x2) != 0x0) && ((uVar7 & 0x4) == 0x0)) {
                        if ((uVar7 & 0x8) == 0x0) {
                            if ((uVar7 & 0x1000) == 0x0) {
                                *(undefined4 *)puVar14[0x5] = puVar14[0x2];
                                imageSetScale((double)(float)puVar14[0x4],
                                              (double)(float)puVar14[0x4],puVar14[0x5]);
                                imageDraw(puVar14[0x5],local_3c,*puVar14,puVar14[0x1],0x0);
                            }
                        }
                        else if (((uVar7 & 0x1) == 0x0) && (pcVar2 != NULL)) {
                            (*pcVar2)(local_3c,giScreen,puVar14[0x7]);
                        }
                    }
                    iVar16 += 0x30;
                }
                iVar16 = 0x0;
                for (iVar3 = 0x0; iVar3 < *(int *)(iVar15 + 0xc); iVar3 += 0x1) {
                    iVar11 = *(int *)(iVar15 + 0x1c) + iVar16;
                    uVar7 = *(uint *)(iVar11 + 0x44);
                    if ((((uVar7 & 0x40) != 0x0) && ((uVar7 & 0x2000) == 0x0)) &&
                       ((uVar7 & 0x400) == 0x0)) {
                        if ((uVar7 & 0x1010000) == 0x1010000) {
                            screenDrawTextOval(iVar11,0xffffff80,local_3c);
                        }
                        screenDrawText(iVar11,local_3c,0xffffffff);
                    }
                    iVar16 += 0x6c;
                }
                iVar3 = 0x0;
                for (iVar16 = 0x0; iVar16 < *(int *)(iVar15 + 0x14); iVar16 += 0x1) {
                    iVar11 = *(int *)(iVar15 + 0x24) + iVar3;
                    if (((*(uint *)(iVar11 + 0x2c) & 0x2) == 0x0) ||
                       ((*(uint *)(iVar11 + 0x2c) & 0x40) == 0x0)) {
                        if (((*(uint *)(iVar11 + 0x2c) & 0x1) != 0x0) &&
                           ((*(uint *)(iVar11 + 0x2c) & 0x40) != 0x0)) {
                            **(undefined4 **)(iVar11 + 0x20) = 0x0;
                            imageSetScale((double)(float)puVar14[0x4],(double)(float)puVar14[0x4],
                                          *(undefined4 *)(iVar11 + 0x20));
                            imageDraw(*(undefined4 *)(iVar11 + 0x20),local_3c,
                                      *(undefined4 *)(iVar11 + 0x4),*(undefined4 *)(iVar11 + 0x8),
                                      0x0);
                        }
                    }
                    else {
                        screenDrawDialog(iVar11,local_3c,0x4);
                    }
                    if (((*(uint *)(iVar11 + 0x2c) & 0x80) != 0x0) &&
                       ((*(uint *)(iVar11 + 0x2c) & 0x40) != 0x0)) {
                        iVar5 = *(int *)(iVar11 + 0x24);
                        iVar9 = *(int *)(iVar11 + 0x4);
                        iVar10 = *(int *)(*(int *)gpImageYes[0xb] + 0x14);
                        iVar8 = *(int *)(*(int *)gpImageYes[0xb] + 0x10);
                        iVar6 = *(int *)(iVar11 + 0x8);
                        iVar13 = *(int *)(iVar11 + 0x28);
                        if (*(int *)(iVar11 + 0x14) == 0x1) {
                            if ((gnFrameCount & 0x8) == 0x0) {
                                uVar4 = 0x1;
                            }
                            else {
                                uVar4 = 0x0;
                            }
                        }
                        else {
                            uVar4 = 0x2;
                        }
                        *gpImageYes = uVar4;
                        imageDraw(gpImageYes,local_3c,(iVar9 + (iVar5 >> 0x1)) - (iVar10 + 0x8),
                                  (iVar6 + iVar13) - (iVar8 + 0x4),0x0);
                        iVar6 = *(int *)(iVar11 + 0x24);
                        iVar9 = *(int *)(iVar11 + 0x4);
                        iVar8 = *(int *)(*(int *)gpImageNo[0xb] + 0x10);
                        iVar5 = *(int *)(iVar11 + 0x8);
                        iVar13 = *(int *)(iVar11 + 0x28);
                        if (*(int *)(iVar11 + 0x14) == 0x0) {
                            if ((gnFrameCount & 0x8) == 0x0) {
                                uVar4 = 0x1;
                            }
                            else {
                                uVar4 = 0x0;
                            }
                        }
                        else {
                            uVar4 = 0x2;
                        }
                        *gpImageNo = uVar4;
                        imageDraw(gpImageNo,local_3c,iVar9 + (iVar6 >> 0x1) + 0x8,
                                  (iVar5 + iVar13) - (iVar8 + 0x4),0x0);
                    }
                    iVar3 += 0x30;
                }
                iVar16 = 0x0;
                for (iVar3 = 0x0; iVar3 < *(int *)(iVar15 + 0xc); iVar3 += 0x1) {
                    iVar11 = *(int *)(iVar15 + 0x1c) + iVar16;
                    uVar7 = *(uint *)(iVar11 + 0x44);
                    if (((uVar7 & 0x2000) != 0x0) && ((uVar7 & 0x400) == 0x0)) {
                        screenDrawText(iVar11,local_3c,0xffffffff);
                    }
                    iVar16 += 0x6c;
                }
            }
            if (geModeFade - 0x1U < 0x2) {
                *local_3c[0] = 0xe7000000;
                local_3c[0][0x1] = 0x0;
                local_3c[0][0x2] = 0xe3000a01;
                local_3c[0][0x3] = 0x0;
                local_3c[0][0x4] = 0xe2001e01;
                local_3c[0][0x5] = 0x0;
                local_3c[0][0x6] = 0xe200001c;
                local_3c[0][0x7] = 0x504240;
                local_3c[0][0x8] = 0xfcffffff;
                local_3c[0][0x9] = 0xfffdf6fb;
                local_3c[0][0xa] = 0xfa000000;
                local_3c[0][0xb] = gnAlphaFade & 0xff;
                local_3c[0][0xc] = 0xd9ddf9fa;
                local_3c[0][0xd] = 0x0;
                local_3c[0][0xe] = 0xf65003c0;
                local_3c[0][0xf] = 0x0;
                local_3c[0] = local_3c[0] + 0x10;
            }
            *param_1 = local_3c[0];
        }
    }
    else {
        gnFrameSkip += -0x1;
    }
    return;
}



undefined4 screenFindImage(int param_1,int param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar3 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar3 + 0x10);
        iVar4 = 0x0;
        iVar2 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar3 + 0x20) + iVar2 + 0x1c)) {
                    *param_3 = *(int *)(gaScreen + param_1 * 0x48 + 0x20) + iVar4 * 0x30;
                    return 0xffffffff;
                }
                iVar2 += 0x30;
                iVar4 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    return 0x0;
}



undefined4 screenWrapCursor(int param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    
    if ((param_2 < 0x0) || (iVar3 = *(int *)(param_1 + 0x34), iVar3 <= param_2)) {
        uVar2 = 0x0;
    }
    else if ((param_3 < 0x0) || (iVar4 = *(int *)(param_1 + 0x30), iVar4 <= param_3)) {
        uVar2 = 0x0;
    }
    else {
        if ((*(uint *)(param_1 + 0x2c) & 0x1000) == 0x0) {
            if (iVar4 * iVar3 < 0x2) {
                return 0x0;
            }
        }
        else {
            iVar1 = iVar4 * iVar3;
            iVar6 = 0x0;
            uVar5 = 0x0;
            if (0x0 < iVar1) {
                do {
                    if ((0x1 << (uVar5 & 0x7) &
                        (uint)*(byte *)(*(int *)(param_1 + 0x38) + ((int)uVar5 >> 0x3))) != 0x0) {
                        iVar6 += 0x1;
                    }
                    uVar5 += 0x1;
                    iVar1 += -0x1;
                } while (iVar1 != 0x0);
            }
            if (iVar6 < 0x2) {
                uVar5 = param_2 + param_3 * iVar3;
                if ((0x1 << (uVar5 & 0x7) &
                    (uint)*(byte *)(*(int *)(param_1 + 0x38) + ((int)uVar5 >> 0x3))) != 0x0) {
                    *(int *)(param_1 + 0x3c) = param_2;
                    *(int *)(param_1 + 0x40) = param_3;
                }
                return 0x0;
            }
            uVar5 = param_2 + param_3 * iVar3;
            for (uVar5 = 0x1 << (uVar5 & 0x7) &
                         (uint)*(byte *)(*(int *)(param_1 + 0x38) + ((int)uVar5 >> 0x3));
                uVar5 == 0x0;
                uVar5 = 0x1 << (uVar5 & 0x7) &
                        (uint)*(byte *)(*(int *)(param_1 + 0x38) + ((int)uVar5 >> 0x3))) {
                if (param_4 == 0x3) {
                    param_2 += -0x1;
                    if (param_2 < 0x0) {
                        param_3 += -0x1;
                        param_2 = iVar3 + -0x1;
                    }
                }
                else if (param_4 < 0x3) {
                    if (param_4 == 0x1) {
                        param_3 += -0x1;
                        if (param_3 < 0x0) {
                            param_2 += -0x1;
                            param_3 = iVar4 + -0x1;
                        }
                    }
                    else {
                        if (param_4 < 0x1) {
                            return 0x0;
                        }
                        param_3 += 0x1;
                        if (param_3 == iVar4) {
                            param_3 = 0x0;
                            param_2 += 0x1;
                        }
                    }
                }
                else {
                    if (0x4 < param_4) {
                        return 0x0;
                    }
                    param_2 += 0x1;
                    if (param_2 == iVar3) {
                        param_2 = 0x0;
                        param_3 += 0x1;
                    }
                }
                if ((param_2 < 0x0) || (iVar3 <= param_2)) {
                    return 0x0;
                }
                if ((param_3 < 0x0) || (iVar4 <= param_3)) {
                    return 0x0;
                }
                uVar5 = param_2 + param_3 * iVar3;
            }
        }
        *(int *)(param_1 + 0x3c) = param_2;
        *(int *)(param_1 + 0x40) = param_3;
        uVar2 = 0xffffffff;
    }
    return uVar2;
}



int screenFindAreaNear(int param_1,int *param_2,int param_3,uint param_4)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    
    iVar9 = 0x230;
    uVar1 = param_4 & 0xf;
    uVar5 = 0x1;
    iVar11 = -0x1;
    if (uVar1 == 0x2) {
        uVar5 = 0x4000000;
    }
    else if (uVar1 < 0x2) {
        if (uVar1 == 0x0) {
            uVar5 = 0x1;
        }
        else if (true) {
            uVar5 = 0x2;
        }
    }
    else if (uVar1 < 0x4) {
        uVar5 = 0x8000000;
    }
    iVar2 = *(int *)(param_1 + 0x8);
    iVar6 = 0x0;
    iVar3 = 0x0;
    if (0x0 < iVar2) {
        do {
            if (((((param_4 & 0x20000) != 0x0) ||
                 ((*(uint *)(*(int *)(param_1 + 0x18) + iVar3 + 0x2c) & 0x800) == 0x0)) &&
                (piVar4 = (int *)(*(int *)(param_1 + 0x18) + iVar3), piVar4 != param_2)) &&
               ((uVar5 & piVar4[0xb]) != 0x0)) {
                iVar8 = 0x0;
                iVar7 = 0x0;
                if (param_3 == 0x3) {
                    iVar10 = *piVar4;
                    iVar8 = *param_2;
                    if (iVar10 + piVar4[0x9] < iVar8) {
                        iVar8 = 0x0;
                    }
                    else if (iVar8 + param_2[0x9] < iVar10) {
                        iVar8 = 0x0;
                    }
                    else if (piVar4[0x1] + piVar4[0xa] < param_2[0x1]) {
                        iVar7 = iVar8 - iVar10;
                        iVar8 = param_2[0x1] - piVar4[0x1];
                        if (iVar7 < 0x0) {
                            iVar7 = -iVar7;
                        }
                    }
                    else {
                        iVar8 = 0x0;
                    }
                }
                else if (param_3 < 0x3) {
                    if (param_3 == 0x1) {
                        iVar10 = piVar4[0x1];
                        iVar7 = param_2[0x1];
                        if (iVar10 + piVar4[0xa] < iVar7) {
                            iVar7 = 0x0;
                        }
                        else if (iVar7 + param_2[0xa] < iVar10) {
                            iVar7 = 0x0;
                        }
                        else if (*piVar4 + piVar4[0x9] < *param_2) {
                            iVar8 = iVar7 - iVar10;
                            iVar7 = *param_2 - *piVar4;
                            if (iVar8 < 0x0) {
                                iVar8 = -iVar8;
                            }
                        }
                        else {
                            iVar7 = 0x0;
                        }
                    }
                    else {
                        if (param_3 < 0x1) {
                            return -0x1;
                        }
                        iVar10 = piVar4[0x1];
                        iVar7 = param_2[0x1];
                        if (iVar10 + piVar4[0xa] < iVar7) {
                            iVar7 = 0x0;
                        }
                        else if (iVar7 + param_2[0xa] < iVar10) {
                            iVar7 = 0x0;
                        }
                        else if (*param_2 + param_2[0x9] < *piVar4) {
                            iVar8 = iVar10 - iVar7;
                            iVar7 = *piVar4 - *param_2;
                            if (iVar8 < 0x0) {
                                iVar8 = -iVar8;
                            }
                        }
                        else {
                            iVar7 = 0x0;
                        }
                    }
                }
                else {
                    if (0x4 < param_3) {
                        return -0x1;
                    }
                    iVar10 = *piVar4;
                    iVar8 = *param_2;
                    if (iVar10 + piVar4[0x9] < iVar8) {
                        iVar8 = 0x0;
                    }
                    else if (iVar8 + param_2[0x9] < iVar10) {
                        iVar8 = 0x0;
                    }
                    else if (param_2[0x1] + param_2[0xa] < piVar4[0x1]) {
                        iVar7 = iVar10 - iVar8;
                        iVar8 = piVar4[0x1] - param_2[0x1];
                        if (iVar7 < 0x0) {
                            iVar7 = -iVar7;
                        }
                    }
                    else {
                        iVar8 = 0x0;
                    }
                }
                if (param_3 < 0x3) {
                    if (((0x0 < param_3) && (0x0 < iVar7)) && ((iVar11 == -0x1 || (iVar7 < iVar9))))
                    {
                        iVar9 = iVar7;
                        iVar11 = iVar6;
                    }
                }
                else if (((param_3 < 0x5) && (0x0 < iVar8)) && ((iVar11 == -0x1 || (iVar8 < iVar9)))
                        ) {
                    iVar9 = iVar8;
                    iVar11 = iVar6;
                }
            }
            iVar3 += 0x60;
            iVar6 += 0x1;
            iVar2 += -0x1;
        } while (iVar2 != 0x0);
    }
    if (((iVar11 == -0x1) && ((param_2[0xb] & 0x200000U) != 0x0)) && ((param_4 & 0x10000) == 0x0)) {
        if (param_3 == 0x1) {
            iVar9 = screenFindAreaNear(param_1,param_2,0x3,param_4 | 0x20000);
            if (iVar9 != -0x1) {
                do {
                    iVar11 = iVar9;
                    iVar9 = screenFindAreaNear(param_1,*(int *)(param_1 + 0x18) + iVar11 * 0x60,0x2,
                                               param_4 | 0x10000);
                } while (iVar9 != -0x1);
            }
        }
        else if ((param_3 == 0x2) &&
                (iVar9 = screenFindAreaNear(param_1,param_2,0x4,param_4 | 0x20000), iVar9 != -0x1))
        {
            do {
                iVar11 = iVar9;
                iVar9 = screenFindAreaNear(param_1,*(int *)(param_1 + 0x18) + iVar11 * 0x60,0x1,
                                           param_4 | 0x10000);
            } while (iVar9 != -0x1);
        }
        if (iVar11 != -0x1) {
            iVar9 = *(int *)(param_1 + 0x18) + iVar11 * 0x60;
            if ((*(uint *)(iVar9 + 0x2c) & 0x800) == 0x0) {
                if (param_3 == 0x1) {
                    screenWrapCursor(iVar9,*(int *)(iVar9 + 0x34) + -0x1,
                                     *(int *)(iVar9 + 0x30) + -0x1,0x3);
                    screenUpdateArea(iVar9);
                }
                else if (param_3 == 0x2) {
                    screenWrapCursor(iVar9,0x0,0x0,0x4);
                    screenUpdateArea(iVar9);
                }
            }
            else {
                iVar11 = -0x1;
            }
        }
    }
    return iVar11;
}



void screenTickText(int param_1)

{
    ushort uVar1;
    short sVar2;
    ushort uVar3;
    byte bVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    undefined4 uVar8;
    int iVar9;
    int iVar10;
    uint uVar11;
    uint uVar12;
    int iVar13;
    int iVar14;
    
    iVar13 = 0x0;
LAB_0009a37c:
    if (*(int *)(param_1 + 0xc) <= iVar13) {
        return;
    }
    iVar14 = *(int *)(param_1 + 0x1c) + iVar13 * 0x6c;
    if ((*(uint *)(iVar14 + 0x44) & 0x1400) == 0x1000) {
        if (*(int *)(iVar14 + 0x10) < 0x1) {
            uVar7 = *(int *)(iVar14 + 0x34) + 0x1;
            *(uint *)(iVar14 + 0x34) = uVar7;
            if (((uVar7 & gnMaskRate) == 0x0) && (*(int *)(iVar14 + 0x38) < *(int *)(iVar14 + 0x20))
               ) {
                uVar1 = *(ushort *)(*(int *)(iVar14 + 0x50) + *(int *)(iVar14 + 0x38) * 0x2);
                uVar3 = uVar1 >> 0xa;
                uVar11 = uVar1 & 0x3ff;
                uVar7 = uVar11;
                uVar12 = uVar11;
                if (uVar3 != 0x20) {
                    if (uVar3 == 0x21) {
                        *(uint *)(*(int *)(param_1 + 0x1c) + iVar13 * 0x6c + 0x10) = uVar11;
                        uVar7 = gnMaskRate;
                        uVar12 = gnMaskRateDefault;
                    }
                    else {
                        uVar7 = gnMaskRate;
                        uVar12 = gnMaskRateDefault;
                        if (uVar3 == 0x22) {
                            gnTickText = uVar11;
                        }
                    }
                }
                gnMaskRateDefault = uVar12;
                gnMaskRate = uVar7;
                *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 0x1;
                uVar7 = *(uint *)(iVar14 + 0x48);
                if (uVar7 != 0x0) {
                    iVar5 = 0x0;
                    iVar6 = 0x0;
                    iVar13 = 0x0;
                    iVar9 = 0x0;
                    for (uVar12 = uVar7 >> 0x1c; uVar12 != 0x0; uVar12 -= 0x1) {
                        uVar11 = uVar7 >> iVar6 & 0xf;
                        iVar10 = iVar9;
                        while (uVar11 != 0x0) {
                            if (*(short *)(*(int *)(iVar14 + 0x50) + iVar9) == 0x2) {
                                uVar11 -= 0x1;
                            }
                            iVar9 += 0x2;
                            iVar10 += 0x2;
                            iVar13 += 0x1;
                        }
                        iVar6 += 0x4;
                        iVar5 += 0x1;
                        iVar9 = iVar10;
                    }
                    iVar6 = iVar13 << 0x1;
                    uVar12 = 0x0;
                    iVar9 = (*(int *)(iVar14 + 0x38) + 0x1) - iVar13;
                    if (iVar13 <= *(int *)(iVar14 + 0x38)) {
                        do {
                            sVar2 = *(short *)(*(int *)(iVar14 + 0x50) + iVar6);
                            if ((sVar2 == 0x0) || (sVar2 == 0x2)) {
                                uVar12 += 0x1;
                            }
                            iVar6 += 0x2;
                            iVar13 += 0x1;
                            iVar9 += -0x1;
                        } while (iVar9 != 0x0);
                    }
                    if (uVar12 == (uVar7 >> (iVar5 << 0x2) & 0xf)) {
                        if ((uVar7 >> (iVar5 + 0x1) * 0x4 & 0xf) == 0x0) {
                            *(undefined4 *)(iVar14 + 0x10) = 0xf0;
                        }
                        else {
                            *(undefined4 *)(iVar14 + 0x10) = 0x78;
                        }
                    }
                }
                if (((uVar3 != 0x0) && (0x8 < (ushort)(uVar3 - 0x20))) &&
                   ((*(uint *)(iVar14 + 0x44) & 0x100400) == 0x100000)) {
                    iVar5 = *(int *)(iVar14 + 0x18) >> 0x10;
                    if (iVar5 == 0x2) {
                        uVar8 = 0x105;
                    }
                    else if (iVar5 < 0x2) {
                        if (iVar5 == 0x0) {
                            uVar8 = 0x103;
                        }
                        else if (iVar5 < 0x0) {
LAB_0009a134:
                            uVar8 = 0x103;
                        }
                        else {
                            uVar8 = 0x104;
                        }
                    }
                    else if (iVar5 == 0x4) {
                        uVar8 = 0x111;
                    }
                    else {
                        if (0x3 < iVar5) goto LAB_0009a134;
                        uVar8 = 0x106;
                    }
                    PlaySE(SFX_INIT_TABLE,uVar8);
                }
            }
            uVar1 = *(ushort *)(*(int *)(iVar14 + 0x50) + *(int *)(iVar14 + 0x38) * 0x2);
            uVar3 = uVar1 >> 0xa;
            if ((uVar3 == 0x0) || (uVar3 == 0x4)) {
                iVar5 = 0x0;
                if ((uVar1 & 0x3ff) == 0x0) {
                    uVar7 = 0xffffffff;
                }
                else {
                    uVar7 = 0x0;
                }
            }
            else if (uVar3 == 0x21) {
                iVar5 = 0x0;
                if (*(int *)(iVar14 + 0x10) < 0xa) {
                    uVar7 = 0x0;
                }
                else {
                    uVar7 = 0xffffffff;
                }
            }
            else if ((uVar3 == 0x20) || ((ushort)(uVar3 - 0x22) < 0x7)) {
                uVar7 = 0x0;
                iVar5 = 0x0;
            }
            else {
                iVar5 = -0x1;
                uVar7 = 0x0;
            }
        }
        else {
            iVar5 = *(int *)(iVar14 + 0x10) + -0x1;
            *(int *)(iVar14 + 0x10) = iVar5;
            if ((iVar5 == 0x0) && (uVar7 = *(uint *)(iVar14 + 0x48), uVar7 != 0x0)) {
                iVar5 = (uVar7 >> 0x1c) + 0x1;
                if ((uVar7 >> iVar5 * 0x4 & 0xf) == 0x0) {
                    iVar5 = 0x0;
                    *(undefined4 *)(iVar14 + 0x38) = 0x0;
                }
                *(uint *)(iVar14 + 0x48) = *(uint *)(iVar14 + 0x48) & 0xfffffff;
                *(uint *)(iVar14 + 0x48) = *(uint *)(iVar14 + 0x48) | iVar5 << 0x1c;
            }
            iVar5 = 0x0;
            uVar7 = (uint)(*(uint *)(iVar14 + 0x10) < 0xa) -
                    ((int)~*(uint *)(iVar14 + 0x10) >> 0x1f) & 0x1;
        }
        if ((*(uint *)(iVar14 + 0x44) & 0x100400) == 0x100000) {
            iVar6 = *(int *)(param_1 + 0x10);
            iVar9 = 0x0;
            if (0x0 < iVar6) {
                do {
                    iVar10 = *(int *)(param_1 + 0x20) + iVar9;
                    if (*(uint *)(iVar10 + 0x1c) == (*(uint *)(iVar14 + 0x18) & 0xffff)) {
                        uVar12 = *(uint *)(iVar10 + 0x8);
                        iVar6 = *(int *)(*(int *)(iVar10 + 0x14) + 0x18);
                        if (iVar6 == 0x8) {
                            iVar6 = 0x4;
                        }
                        else if (iVar6 < 0x8) {
                            if (iVar6 == 0x5) {
                                iVar6 = 0x1;
                            }
                            else {
                                if (iVar6 < 0x5) goto LAB_0009a260;
                                iVar6 = 0x3;
                            }
                        }
                        else {
LAB_0009a260:
                            iVar6 = 0x1;
                        }
                        if (iVar5 == 0x0) {
                            if (((int)uVar12 < 0x1) || (0x2 < (int)uVar12)) {
                                bVar4 = 0x0;
                                if ((uVar7 != 0x0) && ((gnFrameCount & 0x3f) == 0x0)) {
                                    bVar4 = 0x1;
                                }
                                uVar12 = (uint)bVar4;
                            }
                            else if (((gnFrameCount & 0x3) == 0x0) && (uVar12 += 0x1, uVar12 == 0x3)
                                    ) {
                                uVar12 = 0x0;
                            }
                        }
                        else {
                            iVar14 = *(int *)(iVar14 + 0x38) >> 0x1;
                            uVar12 = (iVar14 - (iVar14 / iVar6) * iVar6) + 0x3;
                        }
                        *(uint *)(iVar10 + 0x8) = uVar12;
                        if (*(int *)(iVar10 + 0x20) != -0x1) {
                            iVar6 = *(int *)(param_1 + 0x10);
                            iVar9 = 0x0;
                            iVar5 = 0x0;
                            iVar14 = iVar6;
                            if (iVar6 < 0x1) goto LAB_0009a334;
                            goto LAB_0009a314;
                        }
                        break;
                    }
                    iVar9 += 0x30;
                    iVar6 += -0x1;
                } while (iVar6 != 0x0);
            }
        }
    }
    goto LAB_0009a378;
    while( true ) {
        iVar5 += 0x30;
        iVar9 += 0x1;
        iVar14 += -0x1;
        if (iVar14 == 0x0) break;
LAB_0009a314:
        if (*(int *)(iVar10 + 0x20) == *(int *)(*(int *)(param_1 + 0x20) + iVar5 + 0x1c)) break;
    }
LAB_0009a334:
    if (iVar9 < iVar6) {
        iVar14 = *(int *)(param_1 + 0x20) + iVar9 * 0x30;
        if (*(int *)(iVar14 + 0x8) < *(int *)(*(int *)(iVar14 + 0x14) + 0x18) + -0x1) {
            *(int *)(iVar14 + 0x8) = *(int *)(iVar14 + 0x8) + 0x1;
        }
    }
LAB_0009a378:
    iVar13 += 0x1;
    goto LAB_0009a37c;
}



void screenTick(int *param_1)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined2 *puVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    undefined1 *puVar11;
    int iVar12;
    uint uVar13;
    int *piVar14;
    
    gnFrameCount += 0x1;
    if ((-0x1 < giScreen) && (giScreen < gnScreenCount)) {
        iVar12 = gaScreen + giScreen * 0x48;
        puVar11 = gTheGame;
        iVar9 = iVar12;
        piVar14 = param_1;
        for (uVar13 = 0x0; (int)uVar13 < gnPlayerCount; uVar13 += 0x1) {
            if (geModeFade == 0x0) {
                iVar1 = 0x0;
                iVar10 = 0x0;
                for (iVar4 = 0x0; iVar4 < *(int *)(iVar12 + 0x14); iVar4 += 0x1) {
                    iVar3 = *(int *)(iVar12 + 0x24) + iVar10;
                    if ((*(uint *)(iVar3 + 0x2c) & 0x40) != 0x0) {
                        iVar1 = -0x1;
                        if ((*(uint *)(iVar3 + 0x2c) & 0x80) == 0x0) {
                            *piVar14 = 0x0;
                        }
                        else if ((*(int *)(iVar3 + 0x14) == 0x1) && (*piVar14 == 0x4)) {
                            *(undefined4 *)(iVar3 + 0x14) = 0x0;
                        }
                        else if ((*(int *)(iVar3 + 0x14) == 0x0) && (*piVar14 == 0x3)) {
                            *(undefined4 *)(iVar3 + 0x14) = 0x1;
                        }
                        else {
                            *piVar14 = 0x0;
                        }
                    }
                    iVar10 += 0x30;
                }
                if (iVar1 == 0x0) {
                    if (*(int *)(iVar9 + 0x28) != -0x1) {
                        iVar10 = *(int *)(iVar12 + 0x18) + *(int *)(iVar9 + 0x28) * 0x60;
                        uVar2 = *(uint *)(iVar10 + 0x2c);
                        if ((uVar2 & 0x800) == 0x0) {
                            if ((*(ushort *)(puVar11 + 0x16344) & 0xf00) == 0x0) {
                                *(uint *)(iVar10 + 0x2c) = uVar2 & 0xfffbffff;
                            }
                            else {
                                *(uint *)(iVar10 + 0x2c) = uVar2 | 0x40000;
                            }
                            iVar1 = -0x1;
                            iVar4 = 0x0;
                            if (true) {
                                switch(*piVar14) {
                                case 0x1:
                                    if (*(int *)(iVar10 + 0x50) < *(int *)(iVar10 + 0x58)) {
                                        iVar3 = *(int *)(iVar10 + 0x40);
                                        if (iVar3 < 0x1) {
                                            iVar3 = 0x0;
                                        }
                                        else {
                                            if ((*(uint *)(iVar10 + 0x2c) & 0x1000) == 0x0) {
                                                *(int *)(iVar10 + 0x40) = iVar3 + -0x1;
                                            }
                                            else {
                                                do {
                                                    iVar5 = *(int *)(iVar10 + 0x40) + -0x1;
                                                    *(int *)(iVar10 + 0x40) = iVar5;
                                                    if (iVar5 == -0x1) {
                                                        *(int *)(iVar10 + 0x40) = iVar3;
                                                        iVar3 = 0x0;
                                                        goto LAB_0009a5d8;
                                                    }
                                                    uVar2 = *(int *)(iVar10 + 0x3c) +
                                                            *(int *)(iVar10 + 0x40) *
                                                            *(int *)(iVar10 + 0x34);
                                                } while ((0x1 << (uVar2 & 0x7) &
                                                         (uint)*(byte *)(*(int *)(iVar10 + 0x38) +
                                                                        ((int)uVar2 >> 0x3))) == 0x0
                                                        );
                                            }
                                            screenUpdateArea(iVar10);
                                            iVar3 = -0x1;
                                        }
LAB_0009a5d8:
                                        if (iVar3 == 0x0) {
                                            if ((*(uint *)(iVar10 + 0x2c) & 0x20000) == 0x0) {
                                                iVar1 = screenFindAreaNear(iVar12,iVar10,0x3,
                                                                           uVar13 | 0x10000);
                                            }
                                            else {
                                                iVar3 = screenWrapCursor(iVar10,*(int *)(iVar10 + 
                                                  0x3c) + -0x1,*(int *)(iVar10 + 0x30) + -0x1,0x1);
                                                if (iVar3 == 0x0) {
                                                    iVar1 = screenFindAreaNear(iVar12,iVar10,0x3,
                                                                               uVar13 | 0x10000);
                                                    if ((iVar1 == -0x1) &&
                                                       ((*(uint *)(iVar10 + 0x2c) & 0x200000) != 0x0
                                                       )) {
                                                        iVar1 = screenFindAreaNear(iVar12,iVar10,0x1
                                                                                   ,uVar13 | 0x10000
                                                                                  );
                                                    }
                                                    if (((iVar1 == -0x1) &&
                                                        ((*(uint *)(iVar10 + 0x2c) & 0x40000) ==
                                                         0x40000)) &&
                                                       (iVar3 = screenWrapCursor(iVar10,*(int *)(
                                                  iVar10 + 0x34) + -0x1,
                                                  *(int *)(iVar10 + 0x30) + -0x1,0x1), iVar3 != 0x0)
                                                  ) {
                                                      iVar4 = 0x1;
                                                  }
                                                }
                                                else {
                                                    iVar4 = 0x1;
                                                }
                                            }
                                        }
                                        else {
                                            iVar4 = 0x1;
                                        }
                                    }
                                    else {
                                        iVar3 = *(int *)(iVar10 + 0x40);
                                        if (iVar3 < *(int *)(iVar10 + 0x30) + -0x1) {
                                            if ((*(uint *)(iVar10 + 0x2c) & 0x1000) == 0x0) {
                                                *(int *)(iVar10 + 0x40) = iVar3 + 0x1;
                                            }
                                            else {
                                                do {
                                                    iVar5 = *(int *)(iVar10 + 0x40) + 0x1;
                                                    *(int *)(iVar10 + 0x40) = iVar5;
                                                    if (iVar5 == *(int *)(iVar10 + 0x30)) {
                                                        *(int *)(iVar10 + 0x40) = iVar3;
                                                        iVar3 = 0x0;
                                                        goto LAB_0009a764;
                                                    }
                                                    uVar2 = *(int *)(iVar10 + 0x3c) +
                                                            *(int *)(iVar10 + 0x40) *
                                                            *(int *)(iVar10 + 0x34);
                                                } while ((0x1 << (uVar2 & 0x7) &
                                                         (uint)*(byte *)(*(int *)(iVar10 + 0x38) +
                                                                        ((int)uVar2 >> 0x3))) == 0x0
                                                        );
                                            }
                                            screenUpdateArea(iVar10);
                                            iVar3 = -0x1;
                                        }
                                        else {
                                            iVar3 = 0x0;
                                        }
LAB_0009a764:
                                        if (iVar3 == 0x0) {
                                            iVar1 = screenFindAreaNear(iVar12,iVar10,0x3,uVar13);
                                        }
                                        else {
                                            iVar4 = 0x1;
                                        }
                                    }
                                    break;
                                case 0x2:
                                    if (*(int *)(iVar10 + 0x50) < *(int *)(iVar10 + 0x58)) {
                                        iVar3 = *(int *)(iVar10 + 0x40);
                                        if (iVar3 < *(int *)(iVar10 + 0x30) + -0x1) {
                                            if ((*(uint *)(iVar10 + 0x2c) & 0x1000) == 0x0) {
                                                *(int *)(iVar10 + 0x40) = iVar3 + 0x1;
                                            }
                                            else {
                                                do {
                                                    iVar5 = *(int *)(iVar10 + 0x40) + 0x1;
                                                    *(int *)(iVar10 + 0x40) = iVar5;
                                                    if (iVar5 == *(int *)(iVar10 + 0x30)) {
                                                        *(int *)(iVar10 + 0x40) = iVar3;
                                                        iVar3 = 0x0;
                                                        goto LAB_0009a838;
                                                    }
                                                    uVar2 = *(int *)(iVar10 + 0x3c) +
                                                            *(int *)(iVar10 + 0x40) *
                                                            *(int *)(iVar10 + 0x34);
                                                } while ((0x1 << (uVar2 & 0x7) &
                                                         (uint)*(byte *)(*(int *)(iVar10 + 0x38) +
                                                                        ((int)uVar2 >> 0x3))) == 0x0
                                                        );
                                            }
                                            screenUpdateArea(iVar10);
                                            iVar3 = -0x1;
                                        }
                                        else {
                                            iVar3 = 0x0;
                                        }
LAB_0009a838:
                                        if (iVar3 == 0x0) {
                                            if ((*(uint *)(iVar10 + 0x2c) & 0x20000) == 0x0) {
                                                iVar1 = screenFindAreaNear(iVar12,iVar10,0x4,
                                                                           uVar13 | 0x10000);
                                            }
                                            else {
                                                iVar3 = screenWrapCursor(iVar10,*(int *)(iVar10 + 
                                                  0x3c) + 0x1,0x0,0x2);
                                                if (iVar3 == 0x0) {
                                                    iVar1 = screenFindAreaNear(iVar12,iVar10,0x4,
                                                                               uVar13 | 0x10000);
                                                    if ((iVar1 == -0x1) &&
                                                       ((*(uint *)(iVar10 + 0x2c) & 0x200000) != 0x0
                                                       )) {
                                                        iVar1 = screenFindAreaNear(iVar12,iVar10,0x2
                                                                                   ,uVar13 | 0x10000
                                                                                  );
                                                    }
                                                    if (((iVar1 == -0x1) &&
                                                        ((*(uint *)(iVar10 + 0x2c) & 0x40000) ==
                                                         0x40000)) &&
                                                       (iVar3 = screenWrapCursor(iVar10,0x0,0x0,0x2)
                                                       , iVar3 != 0x0)) {
                                                        iVar4 = 0x2;
                                                    }
                                                }
                                                else {
                                                    iVar4 = 0x2;
                                                }
                                            }
                                        }
                                        else {
                                            iVar4 = 0x2;
                                        }
                                    }
                                    else {
                                        iVar3 = *(int *)(iVar10 + 0x40);
                                        if (iVar3 < 0x1) {
                                            iVar3 = 0x0;
                                        }
                                        else {
                                            if ((*(uint *)(iVar10 + 0x2c) & 0x1000) == 0x0) {
                                                *(int *)(iVar10 + 0x40) = iVar3 + -0x1;
                                            }
                                            else {
                                                do {
                                                    iVar5 = *(int *)(iVar10 + 0x40) + -0x1;
                                                    *(int *)(iVar10 + 0x40) = iVar5;
                                                    if (iVar5 == -0x1) {
                                                        *(int *)(iVar10 + 0x40) = iVar3;
                                                        iVar3 = 0x0;
                                                        goto LAB_0009a9ac;
                                                    }
                                                    uVar2 = *(int *)(iVar10 + 0x3c) +
                                                            *(int *)(iVar10 + 0x40) *
                                                            *(int *)(iVar10 + 0x34);
                                                } while ((0x1 << (uVar2 & 0x7) &
                                                         (uint)*(byte *)(*(int *)(iVar10 + 0x38) +
                                                                        ((int)uVar2 >> 0x3))) == 0x0
                                                        );
                                            }
                                            screenUpdateArea(iVar10);
                                            iVar3 = -0x1;
                                        }
LAB_0009a9ac:
                                        if (iVar3 == 0x0) {
                                            iVar1 = screenFindAreaNear(iVar12,iVar10,0x4,uVar13);
                                        }
                                        else {
                                            iVar4 = 0x2;
                                        }
                                    }
                                    break;
                                case 0x3:
                                    if (*(int *)(iVar10 + 0x54) < *(int *)(iVar10 + 0x4c)) {
                                        iVar3 = *(int *)(iVar10 + 0x3c);
                                        if (iVar3 < *(int *)(iVar10 + 0x34) + -0x1) {
                                            if ((*(uint *)(iVar10 + 0x2c) & 0x1000) == 0x0) {
                                                *(int *)(iVar10 + 0x3c) = iVar3 + 0x1;
                                            }
                                            else {
                                                do {
                                                    iVar5 = *(int *)(iVar10 + 0x3c) + 0x1;
                                                    *(int *)(iVar10 + 0x3c) = iVar5;
                                                    if (iVar5 == *(int *)(iVar10 + 0x34)) {
                                                        *(int *)(iVar10 + 0x3c) = iVar3;
                                                        iVar3 = 0x0;
                                                        goto LAB_0009abf8;
                                                    }
                                                    uVar2 = *(int *)(iVar10 + 0x3c) +
                                                            *(int *)(iVar10 + 0x40) *
                                                            *(int *)(iVar10 + 0x34);
                                                } while ((0x1 << (uVar2 & 0x7) &
                                                         (uint)*(byte *)(*(int *)(iVar10 + 0x38) +
                                                                        ((int)uVar2 >> 0x3))) == 0x0
                                                        );
                                            }
                                            screenUpdateArea(iVar10);
                                            iVar3 = -0x1;
                                        }
                                        else {
                                            iVar3 = 0x0;
                                        }
LAB_0009abf8:
                                        if (iVar3 != 0x0) {
                                            iVar4 = 0x3;
                                        }
                                    }
                                    else {
                                        iVar3 = *(int *)(iVar10 + 0x3c);
                                        if (iVar3 < 0x1) {
                                            iVar3 = 0x0;
                                        }
                                        else {
                                            if ((*(uint *)(iVar10 + 0x2c) & 0x1000) == 0x0) {
                                                *(int *)(iVar10 + 0x3c) = iVar3 + -0x1;
                                            }
                                            else {
                                                do {
                                                    iVar5 = *(int *)(iVar10 + 0x3c) + -0x1;
                                                    *(int *)(iVar10 + 0x3c) = iVar5;
                                                    if (iVar5 == -0x1) {
                                                        *(int *)(iVar10 + 0x3c) = iVar3;
                                                        iVar3 = 0x0;
                                                        goto LAB_0009aa74;
                                                    }
                                                    uVar2 = *(int *)(iVar10 + 0x3c) +
                                                            *(int *)(iVar10 + 0x40) *
                                                            *(int *)(iVar10 + 0x34);
                                                } while ((0x1 << (uVar2 & 0x7) &
                                                         (uint)*(byte *)(*(int *)(iVar10 + 0x38) +
                                                                        ((int)uVar2 >> 0x3))) == 0x0
                                                        );
                                            }
                                            screenUpdateArea(iVar10);
                                            iVar3 = -0x1;
                                        }
LAB_0009aa74:
                                        if (iVar3 == 0x0) {
                                            if ((*(uint *)(iVar10 + 0x2c) & 0x400) == 0x0) {
                                                if ((*(uint *)(iVar10 + 0x2c) & 0x200000) == 0x0) {
                                                    uVar2 = 0x10000;
                                                }
                                                else {
                                                    uVar2 = 0x0;
                                                }
                                                iVar1 = screenFindAreaNear(iVar12,iVar10,0x1,
                                                                           uVar13 | uVar2);
                                            }
                                            else {
                                                iVar3 = screenWrapCursor(iVar10,*(int *)(iVar10 + 
                                                  0x34) + -0x1,*(int *)(iVar10 + 0x40) + -0x1,0x3);
                                                if (iVar3 == 0x0) {
                                                    if ((*(uint *)(iVar10 + 0x2c) & 0x200000) == 0x0
                                                       ) {
                                                        uVar2 = 0x10000;
                                                    }
                                                    else {
                                                        uVar2 = 0x0;
                                                    }
                                                    iVar1 = screenFindAreaNear(iVar12,iVar10,0x1,
                                                                               uVar13 | uVar2);
                                                    if (((iVar1 == -0x1) &&
                                                        ((*(uint *)(iVar10 + 0x2c) & 0x40000) ==
                                                         0x40000)) &&
                                                       (iVar3 = screenWrapCursor(iVar10,*(int *)(
                                                  iVar10 + 0x34) + -0x1,
                                                  *(int *)(iVar10 + 0x30) + -0x1,0x3), iVar3 != 0x0)
                                                  ) {
                                                      iVar4 = 0x3;
                                                  }
                                                }
                                                else {
                                                    iVar4 = 0x3;
                                                }
                                            }
                                        }
                                        else {
                                            iVar4 = 0x3;
                                        }
                                    }
                                    break;
                                case 0x4:
                                    if (*(int *)(iVar10 + 0x54) < *(int *)(iVar10 + 0x4c)) {
                                        iVar3 = *(int *)(iVar10 + 0x3c);
                                        if (iVar3 < 0x1) {
                                            iVar3 = 0x0;
                                        }
                                        else {
                                            if ((*(uint *)(iVar10 + 0x2c) & 0x1000) == 0x0) {
                                                *(int *)(iVar10 + 0x3c) = iVar3 + -0x1;
                                            }
                                            else {
                                                do {
                                                    iVar5 = *(int *)(iVar10 + 0x3c) + -0x1;
                                                    *(int *)(iVar10 + 0x3c) = iVar5;
                                                    if (iVar5 == -0x1) {
                                                        *(int *)(iVar10 + 0x3c) = iVar3;
                                                        iVar3 = 0x0;
                                                        goto LAB_0009ae1c;
                                                    }
                                                    uVar2 = *(int *)(iVar10 + 0x3c) +
                                                            *(int *)(iVar10 + 0x40) *
                                                            *(int *)(iVar10 + 0x34);
                                                } while ((0x1 << (uVar2 & 0x7) &
                                                         (uint)*(byte *)(*(int *)(iVar10 + 0x38) +
                                                                        ((int)uVar2 >> 0x3))) == 0x0
                                                        );
                                            }
                                            screenUpdateArea(iVar10);
                                            iVar3 = -0x1;
                                        }
LAB_0009ae1c:
                                        if (iVar3 != 0x0) {
                                            iVar4 = 0x4;
                                        }
                                    }
                                    else {
                                        iVar3 = *(int *)(iVar10 + 0x3c);
                                        if (iVar3 < *(int *)(iVar10 + 0x34) + -0x1) {
                                            if ((*(uint *)(iVar10 + 0x2c) & 0x1000) == 0x0) {
                                                *(int *)(iVar10 + 0x3c) = iVar3 + 0x1;
                                            }
                                            else {
                                                do {
                                                    iVar5 = *(int *)(iVar10 + 0x3c) + 0x1;
                                                    *(int *)(iVar10 + 0x3c) = iVar5;
                                                    if (iVar5 == *(int *)(iVar10 + 0x34)) {
                                                        *(int *)(iVar10 + 0x3c) = iVar3;
                                                        iVar3 = 0x0;
                                                        goto LAB_0009acac;
                                                    }
                                                    uVar2 = *(int *)(iVar10 + 0x3c) +
                                                            *(int *)(iVar10 + 0x40) *
                                                            *(int *)(iVar10 + 0x34);
                                                } while ((0x1 << (uVar2 & 0x7) &
                                                         (uint)*(byte *)(*(int *)(iVar10 + 0x38) +
                                                                        ((int)uVar2 >> 0x3))) == 0x0
                                                        );
                                            }
                                            screenUpdateArea(iVar10);
                                            iVar3 = -0x1;
                                        }
                                        else {
                                            iVar3 = 0x0;
                                        }
LAB_0009acac:
                                        if (iVar3 == 0x0) {
                                            if ((*(uint *)(iVar10 + 0x2c) & 0x400) == 0x0) {
                                                if ((*(uint *)(iVar10 + 0x2c) & 0x200000) == 0x0) {
                                                    uVar2 = 0x10000;
                                                }
                                                else {
                                                    uVar2 = 0x0;
                                                }
                                                iVar1 = screenFindAreaNear(iVar12,iVar10,0x2,
                                                                           uVar13 | uVar2);
                                            }
                                            else {
                                                iVar3 = screenWrapCursor(iVar10,0x0,
                                                                         *(int *)(iVar10 + 0x40) +
                                                                         0x1,0x4);
                                                if (iVar3 == 0x0) {
                                                    if ((*(uint *)(iVar10 + 0x2c) & 0x200000) == 0x0
                                                       ) {
                                                        uVar2 = 0x10000;
                                                    }
                                                    else {
                                                        uVar2 = 0x0;
                                                    }
                                                    iVar1 = screenFindAreaNear(iVar12,iVar10,0x2,
                                                                               uVar13 | uVar2);
                                                    if (((iVar1 == -0x1) &&
                                                        ((*(uint *)(iVar10 + 0x2c) & 0x40000) ==
                                                         0x40000)) &&
                                                       (iVar3 = screenWrapCursor(iVar10,0x0,0x0,0x4)
                                                       , iVar3 != 0x0)) {
                                                        iVar4 = 0x4;
                                                    }
                                                }
                                                else {
                                                    iVar4 = 0x4;
                                                }
                                            }
                                        }
                                        else {
                                            iVar4 = 0x4;
                                        }
                                    }
                                    break;
                                case 0x11:
                                    *piVar14 = 0x1;
                                    iVar1 = screenFindAreaNear(iVar12,iVar10,0x3,uVar13);
                                    break;
                                case 0x12:
                                    *piVar14 = 0x2;
                                    iVar1 = screenFindAreaNear(iVar12,iVar10,0x4,uVar13);
                                    break;
                                case 0x13:
                                    *piVar14 = 0x3;
                                    iVar1 = screenFindAreaNear(iVar12,iVar10,0x1,uVar13);
                                    break;
                                case 0x14:
                                    *piVar14 = 0x4;
                                    iVar1 = screenFindAreaNear(iVar12,iVar10,0x2,uVar13);
                                }
                            }
                            if ((iVar1 != -0x1) &&
                               (*(int *)(iVar12 + (uVar13 ^ 0x1) * 0x4 + 0x28) != iVar1)) {
                                if ((*(uint *)(iVar10 + 0x2c) & 0x200) != 0x0) {
                                    iVar5 = iVar1 * 0x60;
                                    iVar3 = *(int *)(iVar12 + 0x18) + iVar5;
                                    if ((*(uint *)(iVar3 + 0x2c) & 0x200) != 0x0) {
                                        iVar7 = *piVar14;
                                        if ((iVar7 == 0x3) &&
                                           (*(int *)(iVar10 + 0x30) == *(int *)(iVar3 + 0x30))) {
                                            *(int *)(iVar3 + 0x3c) = *(int *)(iVar3 + 0x34) + -0x1;
                                            *(undefined4 *)(*(int *)(iVar12 + 0x18) + iVar5 + 0x40)
                                                 = *(undefined4 *)(iVar10 + 0x40);
                                        }
                                        else if ((iVar7 == 0x4) &&
                                                (*(int *)(iVar10 + 0x30) == *(int *)(iVar3 + 0x30)))
                                        {
                                            *(undefined4 *)(iVar3 + 0x3c) = 0x0;
                                            *(undefined4 *)(*(int *)(iVar12 + 0x18) + iVar5 + 0x40)
                                                 = *(undefined4 *)(iVar10 + 0x40);
                                        }
                                        else if ((iVar7 == 0x1) &&
                                                (*(int *)(iVar10 + 0x34) == *(int *)(iVar3 + 0x34)))
                                        {
                                            *(undefined4 *)(iVar3 + 0x3c) =
                                                 *(undefined4 *)(iVar10 + 0x3c);
                                            iVar5 = *(int *)(iVar12 + 0x18) + iVar5;
                                            *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x30) + -0x1;
                                        }
                                        else if ((iVar7 == 0x2) &&
                                                (*(int *)(iVar10 + 0x34) == *(int *)(iVar3 + 0x34)))
                                        {
                                            *(undefined4 *)(iVar3 + 0x3c) =
                                                 *(undefined4 *)(iVar10 + 0x3c);
                                            *(undefined4 *)(*(int *)(iVar12 + 0x18) + iVar5 + 0x40)
                                                 = 0x0;
                                        }
                                    }
                                }
                                iVar3 = *piVar14;
                                if (iVar3 == 0x3) {
                                    iVar4 = 0x13;
                                }
                                else if (iVar3 < 0x3) {
                                    if (iVar3 == 0x1) {
                                        iVar4 = 0x11;
                                    }
                                    else if (0x0 < iVar3) {
                                        iVar4 = 0x12;
                                    }
                                }
                                else if (iVar3 < 0x5) {
                                    iVar4 = 0x14;
                                }
                                *(int *)(iVar9 + 0x28) = iVar1;
                                screenUpdateArea(*(int *)(iVar12 + 0x18) + iVar1 * 0x60);
                            }
                            if (iVar4 != 0x0) {
                                screenUpdateArea(iVar10);
                            }
                            *piVar14 = iVar4;
                            goto LAB_0009b044;
                        }
                    }
                    *piVar14 = 0x0;
                }
            }
            else {
                *piVar14 = 0x0;
            }
LAB_0009b044:
            piVar14 = piVar14 + 0x1;
            iVar9 += 0x4;
            puVar11 = puVar11 + 0x10;
        }
        if (uVar13 == 0x1) {
            param_1[0x1] = 0x0;
        }
        if (uVar13 == 0x2) {
            param_1[0x2] = 0x0;
        }
        if (uVar13 == 0x3) {
            param_1[0x3] = 0x0;
        }
        screenTickTextData();
        iVar10 = 0x0;
        for (iVar9 = 0x0; iVar9 < *(int *)(iVar12 + 0x10); iVar9 += 0x1) {
            iVar1 = *(int *)(iVar12 + 0x20) + iVar10;
            uVar13 = *(uint *)(iVar1 + 0x24);
            if (((uVar13 & 0x1000) == 0x0) && ((uVar13 & 0x8) == 0x0)) {
                imageTick(*(undefined4 *)(iVar1 + 0x14),gnFrameCount);
            }
            iVar10 += 0x30;
        }
        iVar9 = 0x0;
        for (iVar10 = 0x0; iVar10 < *(int *)(iVar12 + 0x8); iVar10 += 0x1) {
            iVar1 = *(int *)(iVar12 + 0x18) + iVar9;
            uVar13 = *(uint *)(iVar1 + 0x2c);
            if ((((uVar13 & 0x80) != 0x0) &&
                ((((iVar10 == *(int *)(iVar12 + 0x28) && ((uVar13 & 0x1) != 0x0)) ||
                  (((iVar10 == *(int *)(iVar12 + 0x2c) && ((uVar13 & 0x2) != 0x0)) ||
                   ((iVar10 == *(int *)(iVar12 + 0x30) && ((uVar13 & 0x4000000) != 0x0)))))) ||
                 ((iVar10 == *(int *)(iVar12 + 0x34) && ((uVar13 & 0x8000000) != 0x0)))))) &&
               (imageTick(*(undefined4 *)(iVar1 + 0xc),gnFrameCount),
               (*(uint *)(*(int *)(iVar12 + 0x18) + iVar9 + 0x2c) & 0x4000) != 0x0)) {
                imageTick(gpImageAlign,gnFrameCount);
            }
            iVar9 += 0x60;
        }
        iVar10 = 0x0;
        for (iVar9 = 0x0; iVar9 < *(int *)(iVar12 + 0x14); iVar9 += 0x1) {
            iVar1 = *(int *)(iVar12 + 0x24) + iVar10;
            if ((*(uint *)(iVar1 + 0x2c) & 0x1) != 0x0) {
                imageTick(*(undefined4 *)(iVar1 + 0x20),gnFrameCount);
            }
            iVar10 += 0x30;
        }
        iVar9 = 0x0;
        for (iVar10 = 0x0; iVar10 < gnScreenCount; iVar10 += 0x1) {
            iVar1 = 0x0;
            for (iVar4 = 0x0; iVar4 < *(int *)(iVar9 + gaScreen + 0xc); iVar4 += 0x1) {
                iVar3 = *(int *)(iVar9 + gaScreen + 0x1c) + iVar1;
                if (((*(uint *)(iVar3 + 0x44) & 0x10000) != 0x0) && ((gnFrameCount & 0x3) == 0x0)) {
                    if ((*(uint *)(iVar3 + 0x44) & 0x10000000) != 0x0) {
                        iVar5 = 0x0;
                        for (iVar7 = 0x0; iVar7 < *(int *)(iVar3 + 0x20); iVar7 += 0x1) {
                            iVar8 = *(int *)(iVar3 + 0x30) + iVar5;
                            *(undefined2 *)(iVar8 + 0x6) = *(undefined2 *)(iVar8 + 0x4);
                            iVar8 = *(int *)(iVar3 + 0x30) + iVar5;
                            *(undefined2 *)(iVar8 + 0x4) = *(undefined2 *)(iVar8 + 0x2);
                            puVar6 = (undefined2 *)(*(int *)(iVar3 + 0x30) + iVar5);
                            iVar5 += 0x8;
                            puVar6[0x1] = *puVar6;
                        }
                    }
                    iVar7 = 0x0;
                    iVar5 = 0x0;
                    for (iVar8 = 0x0; iVar8 < *(int *)(iVar3 + 0x20); iVar8 += 0x1) {
                        *(int *)(*(int *)(iVar3 + 0x4c) + iVar7) =
                             *(int *)(*(int *)(iVar3 + 0x4c) + iVar7) + 0x1;
                        if ((*(uint *)(iVar3 + 0x44) & 0x10000000) != 0x0) {
                            *(short *)(*(int *)(iVar3 + 0x30) + iVar5) =
                                 (short)*(undefined4 *)(*(int *)(iVar3 + 0x4c) + iVar7);
                        }
                        iVar7 += 0x4;
                        iVar5 += 0x8;
                    }
                }
                iVar1 += 0x6c;
            }
            iVar9 += 0x48;
        }
        if (geModeFade == 0x0) {
            screenTickText(iVar12);
        }
        iVar9 = geModeFade;
        if (geModeFade == 0x5) {
            if (gnTickWait < 0x1) {
                if (gnFrameSkip == 0x0) {
                    screenChange(giScreenNext);
                    giScreenNext = -0x1;
                    gnPlayerCount = gnPlayerCountNext;
                    geModeFade = 0x0;
                }
            }
            else {
                gnTickWait += -0x1;
                if (gnTickWait == 0x0) {
                    gnFrameSkip = gfxFrameMsgQ._8_4_ + gnFrameSkip + 0x4;
                }
            }
        }
        else if (geModeFade - 0x6U < 0x2) {
            if ((gnFrameCount & 0x1) == 0x0) {
                if (geModeFade == 0x7) {
                    iVar12 = 0x1;
                }
                else {
                    iVar12 = -0x1;
                }
                giFramePage += iVar12;
                if ((giFramePage < 0x0) || (0xe < giFramePage)) {
                    if (giFramePage < 0x0) {
                        screenChange(giScreenPage);
                    }
                    geModeFade = 0x0;
                }
            }
        }
        else if ((geModeFade == 0x1) || (geModeFade == 0x3)) {
            if ((gnFrameSkip == 0x0) && (gnAlphaFade += -0x10, gnAlphaFade < 0x1)) {
                geModeFade = 0x0;
                gnAlphaFade = 0x0;
            }
        }
        else if ((((geModeFade == 0x2) || (geModeFade == 0x4)) && (gnFrameSkip == 0x0)) &&
                (gnAlphaFade += 0x10, 0xfe < gnAlphaFade)) {
            gnAlphaFade = 0xff;
            if (giScreenNext == -0x1) {
                geModeFade = 0x0;
            }
            else {
                screenChange();
                giScreenNext = -0x1;
                gnPlayerCount = gnPlayerCountNext;
                if (geModeFade == 0x2) {
                    geModeFade = 0x1;
                }
                else {
                    geModeFade = 0x3;
                }
            }
        }
        if (((geModeFade != iVar9) && (-0x1 < giScreen)) &&
           ((giScreen < gnScreenCount &&
            (iVar9 = gaScreen + giScreen * 0x48, 0x0 < *(int *)(iVar9 + 0x8))))) {
            screenUpdateArea(*(undefined4 *)(iVar9 + 0x18));
        }
    }
    return;
}



int screenSet(undefined4 param_1,uint param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int local_18 [0x2];
    
    if ((((param_2 & 0x200) == 0x0) || ((param_2 & 0x100) != 0x0)) ||
       (iVar1 = peelActive(), iVar2 = giScreen, iVar1 == 0x0)) {
        geTypeBack = 0xffffffff;
        if ((param_2 & 0x7f000) == 0x7f000) {
            iVar1 = -0x1;
        }
        else if ((param_2 & 0x80000) == 0x0) {
            iVar1 = 0x0;
        }
        else {
            iVar1 = (int)(param_2 & 0x7f000) >> 0xc;
        }
        gbKillPeel = (uint)((param_2 & 0x800) != 0x0);
        iVar2 = screenFind(local_18,param_1);
        if (iVar2 == 0x0) {
            iVar2 = -0x1;
        }
        else if (giScreen == -0x1) {
            if (iVar1 == -0x1) {
                if (gnAlphaFade == 0xff) {
                    geModeFade = 0x1;
                }
                else {
                    geModeFade = 0x2;
                }
            }
            screenChange(local_18[0]);
            gnPlayerCount = param_2 & 0x7;
            iVar2 = local_18[0];
        }
        else {
            iVar2 = giScreen;
            if (((geModeFade != 0x1) && (geModeFade != 0x3)) &&
               ((iVar2 = giScreenPage, geModeFade != 0x6 &&
                ((geModeFade != 0x5 || (iVar2 = giScreen, (param_2 & 0x400) != 0x0)))))) {
                if ((geModeFade == 0x2) || ((geModeFade == 0x7 || (geModeFade - 0x4U < 0x2)))) {
                    if ((local_18[0] == giScreen) ||
                       ((iVar2 = giScreen, geModeFade == 0x7 && (local_18[0] == giScreenPage)))) {
                        if (geModeFade == 0x2) {
                            geModeFade = 0x1;
                        }
                        else if (geModeFade == 0x4) {
                            geModeFade = 0x3;
                        }
                        else if (geModeFade == 0x7) {
                            geModeFade = 0x6;
                            PlaySE(SFX_INIT_TABLE,0xa);
                        }
                        else if (geModeFade == 0x5) {
                            geModeFade = 0x0;
                        }
                        giScreenNext = -0x1;
                        iVar2 = local_18[0];
                    }
                }
                else {
                    if (iVar1 == -0x1) {
                        if (gnAlphaFade == 0xff) {
                            geModeFade = 0x1;
                        }
                        else {
                            geModeFade = 0x2;
                        }
                    }
                    else {
                        geModeFade = 0x5;
                        if ((param_2 & 0x100) == 0x0) {
                            if ((param_2 & 0x400) == 0x0) {
                                gnTickWait = 0x1;
                            }
                            else {
                                gnTickWait = 0x1e;
                            }
                        }
                        else {
                            gnTickWait = 0x1;
                        }
                    }
                    iVar5 = gaScreen + giScreen * 0x48;
                    iVar2 = *(int *)(iVar5 + 0x10);
                    iVar6 = 0x0;
                    iVar3 = 0x0;
                    if (0x0 < iVar2) {
                        do {
                            if ((*(uint *)(*(int *)(iVar5 + 0x20) + iVar3 + 0x24) & 0x1) != 0x0)
                            break;
                            iVar3 += 0x30;
                            iVar6 += 0x1;
                            iVar2 += -0x1;
                        } while (iVar2 != 0x0);
                    }
                    geTypePeel = iVar1;
                    if (iVar6 < *(int *)(gaScreen + 0x10 + giScreen * 0x48)) {
                        iVar3 = gaScreen + local_18[0] * 0x48;
                        iVar2 = *(int *)(iVar3 + 0x10);
                        iVar7 = 0x0;
                        iVar1 = 0x0;
                        if (0x0 < iVar2) {
                            do {
                                iVar4 = *(int *)(iVar3 + 0x20) + iVar1;
                                if (((*(uint *)(iVar4 + 0x24) & 0x1) != 0x0) &&
                                   (*(int *)(iVar4 + 0xc) ==
                                    *(int *)(*(int *)(iVar5 + 0x20) + iVar6 * 0x30 + 0xc))) break;
                                iVar1 += 0x30;
                                iVar7 += 0x1;
                                iVar2 += -0x1;
                            } while (iVar2 != 0x0);
                        }
                        if (iVar7 < *(int *)(gaScreen + 0x10 + local_18[0] * 0x48)) {
                            giScreenNext = 0xffffffff;
                            gnPlayerCount = param_2 & 0x7;
                            if ((param_2 & 0x100) != 0x0) {
                                giFramePage = 0xe;
                                giScreenPage = local_18[0];
                                geModeFade = 0x6;
                                PlaySE(SFX_INIT_TABLE,0xa);
                                screenChange(giScreen);
                                return local_18[0];
                            }
                            giFramePage = 0x0;
                            giScreenPage = giScreen;
                            geModeFade = 0x7;
                            PlaySE(SFX_INIT_TABLE,0xa);
                            screenChange(local_18[0]);
                            return local_18[0];
                        }
                    }
                    gnPlayerCountNext = param_2 & 0x7;
                    giScreenNext = local_18[0];
                    iVar2 = local_18[0];
                }
            }
        }
    }
    return iVar2;
}



undefined4 screenGet(void)

{
    return giScreen;
}



void screenSetBack(uint param_1)

{
    uint uVar1;
    int iVar2;
    int local_c [0x2];
    
    if (giScreenNext == -0x1) {
        iVar2 = 0x0;
    }
    else {
        iVar2 = -0x1;
    }
    uVar1 = param_1;
    if (iVar2 == 0x0) {
        local_c[0] = Pon_Image_Heap + (param_1 & 0x1) * 0x2000;
        screenLoadBack(param_1,local_c);
        Pon_Image_Heap = local_c[0];
        uVar1 = geTypeBack;
    }
    geTypeBack = uVar1;
    return;
}



void screenSetBackLayers(int param_1)

{
    if (param_1 < 0x0) {
        param_1 = 0x0;
    }
    if (0x2 < param_1) {
        param_1 = 0x2;
    }
    gnCountLayers = param_1;
    return;
}



undefined4 screenSetArea(int param_1,int param_2,int param_3)

{
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    
    if (((param_3 < 0x4) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        param_1 *= 0x48;
        iVar4 = gaScreen + param_1;
        param_3 *= 0x4;
        piVar1 = (int *)(iVar4 + param_3 + 0x28);
        iVar6 = *piVar1;
        if (param_2 == -0x1) {
            *piVar1 = -0x1;
            *(int *)(gaScreen + param_1 + param_3 + 0x38) = iVar6;
            return 0xffffffff;
        }
        iVar2 = *(int *)(iVar4 + 0x8);
        iVar5 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar2) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar4 + 0x18) + iVar3 + 0x1c)) {
                    *piVar1 = iVar5;
                    *(int *)(gaScreen + param_1 + param_3 + 0x38) = iVar6;
                    return 0xffffffff;
                }
                iVar3 += 0x60;
                iVar5 += 0x1;
                iVar2 += -0x1;
            } while (iVar2 != 0x0);
        }
    }
    return 0x0;
}



undefined4 screenGetArea(int param_1,undefined4 *param_2,int param_3)

{
    int iVar1;
    int iVar2;
    
    if (((param_3 < 0x4) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar1 = gaScreen + param_1 * 0x48 + param_3 * 0x4;
        iVar2 = *(int *)(iVar1 + 0x28);
        if (iVar2 == -0x1) {
            iVar2 = *(int *)(iVar1 + 0x38);
        }
        if ((-0x1 < iVar2) && (iVar1 = gaScreen + param_1 * 0x48, iVar2 < *(int *)(iVar1 + 0x8))) {
            *param_2 = *(undefined4 *)(*(int *)(iVar1 + 0x18) + iVar2 * 0x60 + 0x1c);
            return 0xffffffff;
        }
    }
    return 0x0;
}



undefined4 screenHideArea(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar4 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar4 + 0x8);
        iVar2 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar4 + 0x18) + iVar3 + 0x1c)) {
                    param_2 = *(int *)(gaScreen + param_1 * 0x48 + 0x18) + iVar2 * 0x60;
                    iVar1 = -0x1;
                    goto LAB_0009bb1c;
                }
                iVar3 += 0x60;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009bb1c:
    if (iVar1 != 0x0) {
        *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x800;
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 screenShowArea(int param_1,int param_2)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar5 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar5 + 0x8);
        iVar3 = 0x0;
        iVar4 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar5 + 0x18) + iVar4 + 0x1c)) {
                    param_1 = *(int *)(gaScreen + param_1 * 0x48 + 0x18) + iVar3 * 0x60;
                    iVar1 = -0x1;
                    goto LAB_0009bbd0;
                }
                iVar4 += 0x60;
                iVar3 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009bbd0:
    if (iVar1 == 0x0) {
        uVar2 = 0x0;
    }
    else {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffff7ff;
        screenUpdateArea();
        uVar2 = 0xffffffff;
    }
    return uVar2;
}



undefined4 screenGetAreaType(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar4 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar4 + 0x8);
        iVar2 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar4 + 0x18) + iVar3 + 0x1c)) {
                    param_2 = *(int *)(gaScreen + param_1 * 0x48 + 0x18) + iVar2 * 0x60;
                    iVar1 = -0x1;
                    goto LAB_0009bc88;
                }
                iVar3 += 0x60;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009bc88:
    if (iVar1 != 0x0) {
        return *(undefined4 *)(param_2 + 0x2c);
    }
    return 0x0;
}



undefined4 screenGetAreaExtents(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar4 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar4 + 0x8);
        iVar2 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar4 + 0x18) + iVar3 + 0x1c)) {
                    param_2 = *(int *)(gaScreen + param_1 * 0x48 + 0x18) + iVar2 * 0x60;
                    iVar1 = -0x1;
                    goto LAB_0009bd24;
                }
                iVar3 += 0x60;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009bd24:
    if (iVar1 != 0x0) {
        *param_3 = *(undefined4 *)(param_2 + 0x30);
        *param_4 = *(undefined4 *)(param_2 + 0x34);
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 screenSlowText(void)

{
    if (gnMaskRate == 0x0) {
        gnMaskRate = 0x1;
    }
    else {
        gnMaskRate = 0x3;
    }
    return 0xffffffff;
}



undefined4 screenFastText(void)

{
    undefined4 uVar1;
    
    if (gnMaskRate == 0x0) {
        uVar1 = 0x0;
    }
    else {
        uVar1 = 0xffffffff;
    }
    gnMaskRate = gnMaskRate >> 0x1;
    return uVar1;
}



undefined4 screenTextDone(int param_1,int param_2)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int in_r10;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar5 = gaScreen + param_1 * 0x48;
        iVar2 = *(int *)(iVar5 + 0xc);
        iVar3 = 0x0;
        iVar4 = 0x0;
        if (0x0 < iVar2) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar5 + 0x1c) + iVar4)) {
                    in_r10 = *(int *)(gaScreen + param_1 * 0x48 + 0x1c) + iVar3 * 0x6c;
                    iVar2 = -0x1;
                    goto LAB_0009be2c;
                }
                iVar4 += 0x6c;
                iVar3 += 0x1;
                iVar2 += -0x1;
            } while (iVar2 != 0x0);
        }
    }
    iVar2 = 0x0;
LAB_0009be2c:
    if (iVar2 == 0x0) {
        return 0x0;
    }
    if ((*(uint *)(in_r10 + 0x44) & 0x1000) == 0x0) {
        return 0xffffffff;
    }
    if (*(int *)(in_r10 + 0x48) != 0x0) {
        if (*(int *)(in_r10 + 0x38) < *(int *)(in_r10 + 0x20)) {
            return 0x0;
        }
        return 0xffffffff;
    }
    bVar1 = true;
    if ((*(int *)(in_r10 + 0x20) <= *(int *)(in_r10 + 0x38)) && (*(int *)(in_r10 + 0x10) == 0x0)) {
        bVar1 = false;
    }
    if (bVar1) {
        return 0x0;
    }
    return 0xffffffff;
}



undefined4 screenTextDonePage(int param_1,int param_2)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int in_r10;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar5 = gaScreen + param_1 * 0x48;
        iVar2 = *(int *)(iVar5 + 0xc);
        iVar3 = 0x0;
        iVar4 = 0x0;
        if (0x0 < iVar2) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar5 + 0x1c) + iVar4)) {
                    in_r10 = *(int *)(gaScreen + param_1 * 0x48 + 0x1c) + iVar3 * 0x6c;
                    iVar2 = -0x1;
                    goto LAB_0009bf38;
                }
                iVar4 += 0x6c;
                iVar3 += 0x1;
                iVar2 += -0x1;
            } while (iVar2 != 0x0);
        }
    }
    iVar2 = 0x0;
LAB_0009bf38:
    if (iVar2 == 0x0) {
        return 0x0;
    }
    if ((*(uint *)(in_r10 + 0x44) & 0x1000) == 0x0) {
        return 0xffffffff;
    }
    if (*(int *)(in_r10 + 0x48) != 0x0) {
        if (*(int *)(in_r10 + 0x10) != 0x0) {
            return 0xffffffff;
        }
        return 0x0;
    }
    bVar1 = true;
    if ((*(int *)(in_r10 + 0x20) <= *(int *)(in_r10 + 0x38)) && (*(int *)(in_r10 + 0x10) == 0x0)) {
        bVar1 = false;
    }
    if (bVar1) {
        return 0x0;
    }
    return 0xffffffff;
}



undefined4 screenHideText(int param_1,uint param_2)

{
    undefined4 uVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    
    if ((param_2 == 0xffffffff) || ((param_2 & 0xc0000000) != 0xc0000000)) {
        uVar5 = param_2;
        if ((param_2 != 0xffffffff) && ((param_2 & 0x80008000) == 0x80008000)) {
            uVar5 = param_2 & 0x7fff;
            param_2 = param_2 >> 0x10 & 0x7fff;
        }
    }
    else {
        uVar5 = param_2 & 0x3fffffff;
        param_2 = 0x10000;
    }
    uVar1 = 0x0;
    if ((-0x1 < param_1) && (param_1 < gnScreenCount)) {
        iVar4 = 0x0;
        for (iVar6 = 0x0; iVar3 = param_1 * 0x48 + gaScreen, iVar6 < *(int *)(iVar3 + 0xc);
            iVar6 += 0x1) {
            piVar2 = (int *)(*(int *)(iVar3 + 0x1c) + iVar4);
            if (((int)uVar5 <= *piVar2) && (*piVar2 <= (int)param_2)) {
                piVar2[0x11] = piVar2[0x11] | 0x400;
                if ((piVar2[0x11] & 0x100000U) != 0x0) {
                    screenHideImage(param_1,piVar2[0x6] & 0xffff);
                }
                uVar1 = 0xffffffff;
                if (uVar5 == param_2) {
                    return 0xffffffff;
                }
            }
            iVar4 += 0x6c;
        }
    }
    return uVar1;
}



undefined4 screenShowText(int param_1,uint param_2)

{
    undefined4 uVar1;
    int *piVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    
    uVar4 = param_2;
    if ((param_2 != 0xffffffff) && ((param_2 & 0x80008000) == 0x80008000)) {
        uVar4 = param_2 & 0x7fff;
        param_2 = param_2 >> 0x10 & 0x7fff;
    }
    uVar1 = 0x0;
    if ((-0x1 < param_1) && (param_1 < gnScreenCount)) {
        iVar6 = 0x0;
        for (iVar5 = 0x0; iVar3 = param_1 * 0x48 + gaScreen, iVar5 < *(int *)(iVar3 + 0xc);
            iVar5 += 0x1) {
            piVar2 = (int *)(*(int *)(iVar3 + 0x1c) + iVar6);
            if (((int)uVar4 <= *piVar2) && (*piVar2 <= (int)param_2)) {
                piVar2[0x11] = piVar2[0x11] & 0xfffffbff;
                piVar2[0xe] = 0x0;
                piVar2[0x4] = 0x0;
                gnTickText = 0x0;
                gnMaskRate = gnMaskRateDefault;
                if ((piVar2[0x11] & 0x100000U) != 0x0) {
                    screenShowImage(param_1,piVar2[0x6] & 0xffff);
                }
                uVar1 = 0xffffffff;
                if (uVar4 == param_2) {
                    return 0xffffffff;
                }
            }
            iVar6 += 0x6c;
        }
    }
    return uVar1;
}



undefined4 screenGetTextWait(void)

{
    undefined4 uVar1;
    
    uVar1 = gnTickText;
    gnTickText = 0x0;
    return uVar1;
}



undefined4 screenShowTextFull(int param_1,int param_2)

{
    short sVar1;
    ushort uVar2;
    ushort uVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar9 = gaScreen + param_1 * 0x48;
        iVar4 = *(int *)(iVar9 + 0xc);
        iVar5 = 0x0;
        iVar7 = 0x0;
        if (0x0 < iVar4) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar9 + 0x1c) + iVar7)) {
                    param_1 = *(int *)(gaScreen + param_1 * 0x48 + 0x1c) + iVar5 * 0x6c;
                    iVar4 = -0x1;
                    goto LAB_0009c288;
                }
                iVar7 += 0x6c;
                iVar5 += 0x1;
                iVar4 += -0x1;
            } while (iVar4 != 0x0);
        }
    }
    iVar4 = 0x0;
LAB_0009c288:
    if (iVar4 == 0x0) {
        return 0x0;
    }
    iVar4 = *(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x38) < iVar4) {
        uVar10 = *(uint *)(param_1 + 0x48);
        iVar5 = 0x0;
        if (uVar10 != 0x0) {
            iVar7 = (uVar10 >> 0x1c) + 0x1;
            iVar9 = 0x0;
            uVar12 = 0x0;
            iVar4 = 0x0;
            if (true) {
                do {
                    uVar11 = uVar10 >> iVar9 & 0xf;
                    iVar8 = iVar4;
                    while (uVar11 != 0x0) {
                        sVar1 = *(short *)(*(int *)(param_1 + 0x50) + iVar4);
                        if ((sVar1 == 0x0) || (sVar1 == 0x2)) {
                            uVar11 -= 0x1;
                        }
                        iVar4 += 0x2;
                        iVar8 += 0x2;
                        uVar12 += 0x1;
                    }
                    iVar9 += 0x4;
                    iVar7 += -0x1;
                    iVar4 = iVar8;
                } while (iVar7 != 0x0);
            }
            if (*(short *)(*(int *)(param_1 + 0x50) + (uVar12 & 0xffff) * 0x2 + -0x2) == 0x0) {
                iVar4 = (uVar12 & 0xffff) - 0x2;
            }
            else {
                iVar4 = (uVar12 & 0xffff) - 0x1;
            }
        }
        while (*(int *)(param_1 + 0x38) < iVar4) {
            uVar2 = *(ushort *)(*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x38) * 0x2);
            uVar3 = uVar2 >> 0xa;
            uVar6 = uVar2 & 0x3ff;
            uVar10 = uVar6;
            uVar12 = uVar6;
            uVar11 = gnTickText;
            if (uVar3 != 0x20) {
                uVar10 = gnMaskRate;
                uVar12 = gnMaskRateDefault;
                if (uVar3 == 0x22) {
                    uVar11 = uVar6;
                    if ((*(uint *)(param_1 + 0x44) & 0x8000000) != 0x0) {
                        if (iVar5 != 0x0) {
                            return 0xffffffff;
                        }
                        *(undefined4 *)(param_1 + 0x10) = 0x0;
                        uVar10 = gnMaskRate;
                        uVar12 = gnMaskRateDefault;
                        uVar11 = gnTickText;
                    }
                }
                else if (uVar3 == 0x21) {
                    *(uint *)(param_1 + 0x10) = uVar6;
                    uVar10 = gnMaskRate;
                    uVar12 = gnMaskRateDefault;
                    uVar11 = gnTickText;
                }
                else if ((0x5 < (ushort)(uVar3 - 0x23)) && (uVar3 != 0x0)) {
                    *(undefined4 *)(param_1 + 0x10) = 0x0;
                    uVar10 = gnMaskRate;
                    uVar12 = gnMaskRateDefault;
                    uVar11 = gnTickText;
                }
            }
            gnTickText = uVar11;
            gnMaskRateDefault = uVar12;
            gnMaskRate = uVar10;
            iVar5 = -0x1;
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x1;
        }
    }
    else {
        *(undefined4 *)(param_1 + 0x10) = 0x0;
    }
    return 0xffffffff;
}



undefined4 screenHideImage(int param_1,uint param_2)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    
    if ((param_2 == 0xffffffff) || ((param_2 & 0xc0000000) != 0xc0000000)) {
        uVar5 = param_2;
        if ((param_2 != 0xffffffff) && ((param_2 & 0x80008000) == 0x80008000)) {
            uVar5 = param_2 & 0x7fff;
            param_2 = param_2 >> 0x10 & 0x7fff;
        }
    }
    else {
        uVar5 = param_2 & 0x3fffffff;
        param_2 = 0x10000;
    }
    uVar1 = 0x0;
    if ((-0x1 < param_1) && (param_1 < gnScreenCount)) {
        iVar4 = 0x0;
        for (iVar3 = 0x0; iVar2 = param_1 * 0x48 + gaScreen, iVar3 < *(int *)(iVar2 + 0x10);
            iVar3 += 0x1) {
            iVar2 = *(int *)(iVar2 + 0x20) + iVar4;
            if (((int)uVar5 <= *(int *)(iVar2 + 0x1c)) && (*(int *)(iVar2 + 0x1c) <= (int)param_2))
            {
                *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) | 0x4;
                if (*(int *)(iVar2 + 0x20) != -0x1) {
                    screenHideImage(param_1);
                }
                uVar1 = 0xffffffff;
                if (uVar5 == param_2) {
                    return 0xffffffff;
                }
            }
            iVar4 += 0x30;
        }
    }
    return uVar1;
}



undefined4 screenShowImage(int param_1,uint param_2)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    
    uVar4 = param_2;
    if ((param_2 != 0xffffffff) && ((param_2 & 0x80008000) == 0x80008000)) {
        uVar4 = param_2 & 0x7fff;
        param_2 = param_2 >> 0x10 & 0x7fff;
    }
    uVar1 = 0x0;
    if ((-0x1 < param_1) && (param_1 < gnScreenCount)) {
        iVar3 = 0x0;
        for (iVar5 = 0x0; iVar2 = param_1 * 0x48 + gaScreen, iVar5 < *(int *)(iVar2 + 0x10);
            iVar5 += 0x1) {
            iVar2 = *(int *)(iVar2 + 0x20) + iVar3;
            if (((int)uVar4 <= *(int *)(iVar2 + 0x1c)) && (*(int *)(iVar2 + 0x1c) <= (int)param_2))
            {
                *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & 0xfffffffb;
                if ((*(uint *)(iVar2 + 0x24) & 0x80) == 0x0) {
                    *(undefined4 *)(iVar2 + 0x8) = 0x0;
                }
                if (*(int *)(iVar2 + 0x20) != -0x1) {
                    screenShowImage(param_1);
                }
                uVar1 = 0xffffffff;
                if (uVar4 == param_2) {
                    return 0xffffffff;
                }
            }
            iVar3 += 0x30;
        }
    }
    return uVar1;
}



undefined4 screenGetImage(int param_1,int param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar4 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar4 + 0x10);
        iVar2 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar4 + 0x20) + iVar3 + 0x1c)) {
                    param_2 = *(int *)(gaScreen + param_1 * 0x48 + 0x20) + iVar2 * 0x30;
                    iVar1 = -0x1;
                    goto LAB_0009c6b4;
                }
                iVar3 += 0x30;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009c6b4:
    if (iVar1 == 0x0) {
        return 0x0;
    }
    iVar1 = *(int *)(param_2 + 0x14);
    *param_3 = iVar1;
    if (iVar1 != 0x0) {
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 screenSetImageScale(double param_1,int param_2,int param_3)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int local_1c;
    int local_18 [0x3];
    
    if (((param_3 != -0x1) && (-0x1 < param_2)) && (param_2 < gnScreenCount)) {
        iVar5 = gaScreen + param_2 * 0x48;
        iVar1 = *(int *)(iVar5 + 0x10);
        iVar3 = 0x0;
        iVar4 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_3 == *(int *)(*(int *)(iVar5 + 0x20) + iVar4 + 0x1c)) {
                    param_3 = *(int *)(gaScreen + param_2 * 0x48 + 0x20) + iVar3 * 0x30;
                    iVar1 = -0x1;
                    goto LAB_0009c784;
                }
                iVar4 += 0x30;
                iVar3 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009c784:
    if (iVar1 == 0x0) {
        uVar2 = 0x0;
    }
    else {
        *(float *)(param_3 + 0x10) = (float)param_1;
        if ((*(int *)(param_3 + 0x20) != -0x1) &&
           (iVar1 = screenFindImage(param_2,*(int *)(param_3 + 0x20),local_18), iVar1 != 0x0)) {
            *(float *)(local_18[0] + 0x10) = (float)param_1;
            if ((*(int *)(local_18[0] + 0x20) != -0x1) &&
               (iVar1 = screenFindImage(param_2,*(int *)(local_18[0] + 0x20),&local_1c),
               iVar1 != 0x0)) {
                *(float *)(local_1c + 0x10) = (float)param_1;
                if (*(int *)(local_1c + 0x20) != -0x1) {
                    screenSetImageScale(param_1,param_2);
                }
            }
        }
        uVar2 = 0xffffffff;
    }
    return uVar2;
}



undefined4
screenSetImagePosition(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined4 *local_18;
    undefined4 *local_14 [0x2];
    
    if (((param_2 != (undefined4 *)0xffffffff) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar5 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar5 + 0x10);
        iVar3 = 0x0;
        iVar4 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(undefined4 **)(*(int *)(iVar5 + 0x20) + iVar4 + 0x1c)) {
                    param_2 = (undefined4 *)
                              (*(int *)(gaScreen + param_1 * 0x48 + 0x20) + iVar3 * 0x30);
                    iVar1 = -0x1;
                    goto LAB_0009c8d0;
                }
                iVar4 += 0x30;
                iVar3 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009c8d0:
    if (iVar1 == 0x0) {
        uVar2 = 0x0;
    }
    else {
        *param_2 = param_3;
        param_2[0x1] = param_4;
        if ((param_2[0x8] != -0x1) &&
           (iVar1 = screenFindImage(param_1,param_2[0x8],local_14), iVar1 != 0x0)) {
            *local_14[0] = param_3;
            local_14[0][0x1] = param_4;
            if ((local_14[0][0x8] != -0x1) &&
               (iVar1 = screenFindImage(param_1,local_14[0][0x8],&local_18), iVar1 != 0x0)) {
                *local_18 = param_3;
                local_18[0x1] = param_4;
                if (local_18[0x8] != -0x1) {
                    screenSetImagePosition(param_1,local_18[0x8],param_3,param_4);
                }
            }
        }
        uVar2 = 0xffffffff;
    }
    return uVar2;
}



undefined4
screenGetImagePosition(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (((param_2 != (undefined4 *)0xffffffff) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar4 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar4 + 0x10);
        iVar2 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(undefined4 **)(*(int *)(iVar4 + 0x20) + iVar3 + 0x1c)) {
                    param_2 = (undefined4 *)
                              (*(int *)(gaScreen + param_1 * 0x48 + 0x20) + iVar2 * 0x30);
                    iVar1 = -0x1;
                    goto LAB_0009ca14;
                }
                iVar3 += 0x30;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009ca14:
    if (iVar1 != 0x0) {
        *param_3 = *param_2;
        *param_4 = param_2[0x1];
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 screenHideSlot(int param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int in_r12;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar5 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar5 + 0x8);
        iVar3 = 0x0;
        iVar4 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar5 + 0x18) + iVar4 + 0x1c)) {
                    in_r12 = *(int *)(gaScreen + param_1 * 0x48 + 0x18) + iVar3 * 0x60;
                    iVar1 = -0x1;
                    goto LAB_0009cac0;
                }
                iVar4 += 0x60;
                iVar3 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009cac0:
    if ((iVar1 != 0x0) && ((*(uint *)(in_r12 + 0x2c) & 0x1000) != 0x0)) {
        uVar2 = param_3 + *(int *)(in_r12 + 0x34) * param_4;
        iVar1 = (int)uVar2 >> 0x3;
        *(byte *)(*(int *)(in_r12 + 0x38) + iVar1) =
             *(byte *)(*(int *)(in_r12 + 0x38) + iVar1) & ~(byte)(0x1 << (uVar2 & 0x7));
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 screenShowSlot(int param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int in_r12;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar5 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar5 + 0x8);
        iVar3 = 0x0;
        iVar4 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar5 + 0x18) + iVar4 + 0x1c)) {
                    in_r12 = *(int *)(gaScreen + param_1 * 0x48 + 0x18) + iVar3 * 0x60;
                    iVar1 = -0x1;
                    goto LAB_0009cb94;
                }
                iVar4 += 0x60;
                iVar3 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009cb94:
    if ((iVar1 != 0x0) && ((*(uint *)(in_r12 + 0x2c) & 0x1000) != 0x0)) {
        uVar2 = param_3 + *(int *)(in_r12 + 0x34) * param_4;
        iVar1 = (int)uVar2 >> 0x3;
        *(byte *)(*(int *)(in_r12 + 0x38) + iVar1) =
             *(byte *)(*(int *)(in_r12 + 0x38) + iVar1) | (byte)(0x1 << (uVar2 & 0x7));
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 screenTestSlot(int param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar5 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar5 + 0x8);
        iVar3 = 0x0;
        iVar4 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar5 + 0x18) + iVar4 + 0x1c)) {
                    param_2 = *(int *)(gaScreen + param_1 * 0x48 + 0x18) + iVar3 * 0x60;
                    iVar1 = -0x1;
                    goto LAB_0009cc68;
                }
                iVar4 += 0x60;
                iVar3 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009cc68:
    if (iVar1 != 0x0) {
        if ((*(uint *)(param_2 + 0x2c) & 0x1000) != 0x0) {
            uVar2 = param_3 + *(int *)(param_2 + 0x34) * param_4;
            if ((0x1 << (uVar2 & 0x7) &
                (uint)*(byte *)(*(int *)(param_2 + 0x38) + ((int)uVar2 >> 0x3))) != 0x0) {
                return 0xffffffff;
            }
            return 0x0;
        }
    }
    return 0x0;
}



void screenSetFrame(int param_1,int param_2,undefined4 param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar4 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar4 + 0x10);
        iVar2 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar4 + 0x20) + iVar3 + 0x1c)) {
                    param_2 = *(int *)(gaScreen + param_1 * 0x48 + 0x20) + iVar2 * 0x30;
                    iVar1 = -0x1;
                    goto LAB_0009cd44;
                }
                iVar3 += 0x30;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009cd44:
    if (iVar1 == 0x0) {
        return;
    }
    *(undefined4 *)(param_2 + 0x8) = param_3;
    return;
}



void screenGetFrame(int param_1,int param_2,undefined4 *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar4 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar4 + 0x10);
        iVar2 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar4 + 0x20) + iVar3 + 0x1c)) {
                    param_2 = *(int *)(gaScreen + param_1 * 0x48 + 0x20) + iVar2 * 0x30;
                    iVar1 = -0x1;
                    goto LAB_0009cdd8;
                }
                iVar3 += 0x30;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009cdd8:
    if (iVar1 == 0x0) {
        return;
    }
    *param_3 = *(undefined4 *)(param_2 + 0x8);
    return;
}



void screenSetText(int param_1,int param_2,short *param_3)

{
    ushort uVar1;
    int iVar2;
    int iVar3;
    short *psVar4;
    int iVar5;
    int iVar6;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar6 = gaScreen + param_1 * 0x48;
        iVar2 = *(int *)(iVar6 + 0xc);
        iVar3 = 0x0;
        iVar5 = 0x0;
        if (0x0 < iVar2) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar6 + 0x1c) + iVar5)) {
                    param_1 = *(int *)(gaScreen + param_1 * 0x48 + 0x1c) + iVar3 * 0x6c;
                    iVar2 = -0x1;
                    goto LAB_0009ce7c;
                }
                iVar5 += 0x6c;
                iVar3 += 0x1;
                iVar2 += -0x1;
            } while (iVar2 != 0x0);
        }
    }
    iVar2 = 0x0;
LAB_0009ce7c:
    if (iVar2 != 0x0) {
        iVar3 = 0x0;
        iVar5 = 0x0;
        iVar2 = 0x0;
        psVar4 = param_3;
        while (*psVar4 != 0x0) {
            if (*(int *)(param_1 + 0x20) <= iVar5) break;
            uVar1 = *(ushort *)(*(int *)(param_1 + 0x50) + iVar2);
            if ((uVar1 >> 0xa == 0x0) && ((uVar1 & 0x3ff) == 0x2)) {
                iVar5 += 0x1;
                iVar2 += 0x2;
            }
            else {
                psVar4 = psVar4 + 0x1;
                *(short *)(*(int *)(param_1 + 0x50) + iVar5 * 0x2) = param_3[iVar3];
                iVar3 += 0x1;
                iVar5 += 0x1;
                iVar2 += 0x2;
            }
        }
        uVar1 = *(ushort *)(*(int *)(param_1 + 0x50) + iVar5 * 0x2);
        if ((uVar1 >> 0xa == 0x0) && ((uVar1 & 0x3ff) == 0x2)) {
            iVar5 += 0x1;
        }
        if (iVar5 < *(int *)(param_1 + 0x20)) {
            *(undefined2 *)(*(int *)(param_1 + 0x50) + iVar5 * 0x2) = 0x0;
        }
        if ((*(uint *)(param_1 + 0x44) & 0x808000) != 0x0) {
            screenCenterText();
            if (((-0x1 < giScreen) && (giScreen < gnScreenCount)) &&
               (iVar2 = gaScreen + giScreen * 0x48, 0x0 < *(int *)(iVar2 + 0x8))) {
                screenUpdateArea(*(undefined4 *)(iVar2 + 0x18));
            }
        }
    }
    return;
}



void screenGetText(int param_1,int param_2,undefined2 *param_3,int param_4)

{
    undefined2 *puVar1;
    int iVar2;
    int iVar3;
    undefined2 *puVar4;
    int iVar5;
    int iVar6;
    int in_r12;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar6 = gaScreen + param_1 * 0x48;
        iVar2 = *(int *)(iVar6 + 0xc);
        iVar3 = 0x0;
        iVar5 = 0x0;
        if (0x0 < iVar2) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar6 + 0x1c) + iVar5)) {
                    in_r12 = *(int *)(gaScreen + param_1 * 0x48 + 0x1c) + iVar3 * 0x6c;
                    iVar2 = -0x1;
                    goto LAB_0009d01c;
                }
                iVar5 += 0x6c;
                iVar3 += 0x1;
                iVar2 += -0x1;
            } while (iVar2 != 0x0);
        }
    }
    iVar2 = 0x0;
LAB_0009d01c:
    if (iVar2 == 0x0) {
        return;
    }
    iVar2 = 0x0;
    puVar4 = param_3;
    for (iVar3 = 0x0; (iVar3 < *(int *)(in_r12 + 0x20) && (iVar3 < param_4)); iVar3 += 0x1) {
        puVar1 = (undefined2 *)(*(int *)(in_r12 + 0x50) + iVar2);
        iVar2 += 0x2;
        *puVar4 = *puVar1;
        puVar4 = puVar4 + 0x1;
    }
    param_3[iVar3] = 0x0;
    return;
}



undefined4 screenSetTextColor(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int in_r12;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar4 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar4 + 0xc);
        iVar2 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar4 + 0x1c) + iVar3)) {
                    in_r12 = *(int *)(gaScreen + param_1 * 0x48 + 0x1c) + iVar2 * 0x6c;
                    iVar1 = -0x1;
                    goto LAB_0009d0f0;
                }
                iVar3 += 0x6c;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009d0f0:
    if (iVar1 != 0x0) {
        **(undefined4 **)(in_r12 + 0x64) = param_3;
        **(undefined4 **)(in_r12 + 0x68) = param_4;
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 screenGetTextType(int param_1,int param_2,undefined4 *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar4 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar4 + 0xc);
        iVar2 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar4 + 0x1c) + iVar3)) {
                    param_2 = *(int *)(gaScreen + param_1 * 0x48 + 0x1c) + iVar2 * 0x6c;
                    iVar1 = -0x1;
                    goto LAB_0009d198;
                }
                iVar3 += 0x6c;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009d198:
    if (iVar1 != 0x0) {
        *param_3 = *(undefined4 *)(param_2 + 0x44);
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 screenGetTextSize(int param_1,int param_2,undefined4 *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar4 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar4 + 0xc);
        iVar2 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar4 + 0x1c) + iVar3)) {
                    param_2 = *(int *)(gaScreen + param_1 * 0x48 + 0x1c) + iVar2 * 0x6c;
                    iVar1 = -0x1;
                    goto LAB_0009d238;
                }
                iVar3 += 0x6c;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009d238:
    if (iVar1 != 0x0) {
        *param_3 = *(undefined4 *)(param_2 + 0x20);
        return 0xffffffff;
    }
    return 0x0;
}



void screenSetTextField(int param_1,int param_2,short *param_3)

{
    int *piVar1;
    int iVar2;
    int iVar3;
    short *psVar4;
    int iVar5;
    
    if ((param_1 < 0x0) || (gnScreenCount <= param_1)) {
        return;
    }
    iVar3 = gaScreen + param_1 * 0x48;
    iVar2 = 0x0;
    while( true ) {
        if (*(int *)(iVar3 + 0xc) <= iVar2) {
            return;
        }
        piVar1 = (int *)(*(int *)(iVar3 + 0x1c) + iVar2 * 0x6c);
        if ((*piVar1 == param_2) && (iVar2 = piVar1[0x15], iVar2 != -0x1)) break;
        iVar2 += 0x1;
    }
    for (iVar3 = 0x0; iVar3 < piVar1[0x16]; iVar3 += 0x1) {
        *(undefined2 *)(piVar1[0x14] + (piVar1[0x15] + iVar3) * 0x2) = 0x3;
    }
    iVar3 = iVar2 << 0x1;
    iVar5 = 0x0;
    for (psVar4 = param_3;
        ((*(short *)(piVar1[0x14] + iVar3) != 0x0 && (iVar2 < piVar1[0x8])) && (*psVar4 != 0x0));
        psVar4 = psVar4 + 0x1) {
        *(short *)(piVar1[0x14] + iVar2 * 0x2) = param_3[iVar5];
        iVar3 += 0x2;
        iVar5 += 0x1;
        iVar2 += 0x1;
    }
    if ((piVar1[0x11] & 0x808000U) == 0x0) {
        return;
    }
    screenCenterText();
    if (giScreen < 0x0) {
        return;
    }
    if (gnScreenCount <= giScreen) {
        return;
    }
    iVar2 = gaScreen + giScreen * 0x48;
    if (*(int *)(iVar2 + 0x8) < 0x1) {
        return;
    }
    screenUpdateArea(*(undefined4 *)(iVar2 + 0x18));
    return;
}



undefined4 screenGetTextFlag(int param_1,int param_2,undefined4 *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar4 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar4 + 0xc);
        iVar2 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar4 + 0x1c) + iVar3)) {
                    param_2 = *(int *)(gaScreen + param_1 * 0x48 + 0x1c) + iVar2 * 0x6c;
                    iVar1 = -0x1;
                    goto LAB_0009d43c;
                }
                iVar3 += 0x6c;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009d43c:
    if (iVar1 != 0x0) {
        *param_3 = *(undefined4 *)(param_2 + 0xc);
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 screenSetTextPosition(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar5 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar5 + 0xc);
        iVar3 = 0x0;
        iVar4 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar5 + 0x1c) + iVar4)) {
                    param_1 = *(int *)(gaScreen + param_1 * 0x48 + 0x1c) + iVar3 * 0x6c;
                    iVar1 = -0x1;
                    goto LAB_0009d4ec;
                }
                iVar4 += 0x6c;
                iVar3 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009d4ec:
    if (iVar1 == 0x0) {
        uVar2 = 0x0;
    }
    else {
        *(undefined4 *)(param_1 + 0x4) = param_3;
        *(undefined4 *)(param_1 + 0x8) = param_4;
        if ((*(uint *)(param_1 + 0x44) & 0x808000) != 0x0) {
            screenCenterText();
            if (((-0x1 < giScreen) && (giScreen < gnScreenCount)) &&
               (iVar1 = gaScreen + giScreen * 0x48, 0x0 < *(int *)(iVar1 + 0x8))) {
                screenUpdateArea(*(undefined4 *)(iVar1 + 0x18));
            }
        }
        uVar2 = 0xffffffff;
    }
    return uVar2;
}



void screenHideDialog(int param_1,int param_2)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int iVar6;
    int iVar7;
    
    piVar5 = NULL;
    if ((-0x1 < param_1) && (param_1 < gnScreenCount)) {
        iVar6 = gaScreen + param_1 * 0x48;
        iVar3 = *(int *)(iVar6 + 0x14);
        iVar4 = 0x0;
        iVar1 = 0x0;
        iVar7 = iVar3;
        if (0x0 < iVar3) {
            do {
                piVar5 = (int *)(*(int *)(iVar6 + 0x24) + iVar1);
                if (param_2 == *piVar5) break;
                iVar1 += 0x30;
                iVar4 += 0x1;
                iVar7 += -0x1;
            } while (iVar7 != 0x0);
        }
        if (iVar4 != iVar3) {
            iVar7 = 0x0;
            iVar1 = 0x0;
            piVar5[0xb] = piVar5[0xb] & 0xffffffbf;
            while( true ) {
                if (*(int *)(iVar6 + 0x8) <= iVar7) break;
                if (((piVar5[0xb] & 0x20U) == 0x0) ||
                   (iVar3 = *(int *)(iVar6 + 0x18) + iVar1, piVar5[0x6] != *(int *)(iVar3 + 0x1c)))
                {
                    *(uint *)(*(int *)(iVar6 + 0x18) + iVar1 + 0x2c) =
                         *(uint *)(*(int *)(iVar6 + 0x18) + iVar1 + 0x2c) & 0xfffff7ff;
                }
                else {
                    *(uint *)(iVar3 + 0x2c) = *(uint *)(iVar3 + 0x2c) | 0x800;
                    *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar6 + 0x38);
                    *(undefined4 *)(iVar6 + 0x2c) = *(undefined4 *)(iVar6 + 0x3c);
                    *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar6 + 0x40);
                    *(undefined4 *)(iVar6 + 0x34) = *(undefined4 *)(iVar6 + 0x44);
                    screenUpdateArea(*(int *)(iVar6 + 0x18) + iVar1);
                }
                iVar1 += 0x60;
                iVar7 += 0x1;
            }
            if ((piVar5[0xb] & 0x10U) != 0x0) {
                iVar7 = 0x0;
                for (iVar1 = 0x0; iVar1 < *(int *)(iVar6 + 0xc); iVar1 += 0x1) {
                    piVar2 = (int *)(*(int *)(iVar6 + 0x1c) + iVar7);
                    if (piVar5[0x7] == *piVar2) {
                        piVar2[0x11] = piVar2[0x11] | 0x400;
                    }
                    iVar7 += 0x6c;
                }
            }
        }
    }
    return;
}



void screenShowDialog(int param_1,int param_2)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int iVar6;
    int iVar7;
    
    piVar5 = NULL;
    if ((-0x1 < param_1) && (param_1 < gnScreenCount)) {
        iVar6 = gaScreen + param_1 * 0x48;
        iVar3 = *(int *)(iVar6 + 0x14);
        iVar4 = 0x0;
        iVar1 = 0x0;
        iVar7 = iVar3;
        if (0x0 < iVar3) {
            do {
                piVar5 = (int *)(*(int *)(iVar6 + 0x24) + iVar1);
                if (param_2 == *piVar5) break;
                iVar1 += 0x30;
                iVar4 += 0x1;
                iVar7 += -0x1;
            } while (iVar7 != 0x0);
        }
        if (iVar4 != iVar3) {
            iVar1 = 0x0;
            iVar7 = 0x0;
            piVar5[0xb] = piVar5[0xb] | 0x40;
            piVar5[0x5] = 0x0;
            while( true ) {
                if (*(int *)(iVar6 + 0x8) <= iVar7) break;
                if (((piVar5[0xb] & 0x20U) == 0x0) ||
                   (iVar3 = *(int *)(iVar6 + 0x18) + iVar1, piVar5[0x6] != *(int *)(iVar3 + 0x1c)))
                {
                    *(uint *)(*(int *)(iVar6 + 0x18) + iVar1 + 0x2c) =
                         *(uint *)(*(int *)(iVar6 + 0x18) + iVar1 + 0x2c) | 0x800;
                }
                else {
                    *(uint *)(iVar3 + 0x2c) = *(uint *)(iVar3 + 0x2c) & 0xfffff7ff;
                    *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)(iVar6 + 0x28);
                    *(undefined4 *)(iVar6 + 0x3c) = *(undefined4 *)(iVar6 + 0x2c);
                    *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar6 + 0x30);
                    *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(iVar6 + 0x34);
                    *(int *)(iVar6 + 0x2c) = iVar7;
                    *(int *)(iVar6 + 0x28) = iVar7;
                    *(int *)(iVar6 + 0x34) = iVar7;
                    *(int *)(iVar6 + 0x30) = iVar7;
                    screenUpdateArea(*(int *)(iVar6 + 0x18) + iVar1);
                }
                iVar1 += 0x60;
                iVar7 += 0x1;
            }
            if ((piVar5[0xb] & 0x10U) != 0x0) {
                iVar7 = 0x0;
                for (iVar1 = 0x0; iVar1 < *(int *)(iVar6 + 0xc); iVar1 += 0x1) {
                    piVar2 = (int *)(*(int *)(iVar6 + 0x1c) + iVar7);
                    if (piVar5[0x7] == *piVar2) {
                        piVar2[0x11] = piVar2[0x11] & 0xfffffbff;
                    }
                    iVar7 += 0x6c;
                }
            }
        }
    }
    return;
}



void screenSetNumber(int param_1,int param_2,undefined4 param_3,int param_4)

{
    int iVar1;
    int iVar2;
    char *pcVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int unaff_r31;
    char local_48 [0x40];
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar6 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar6 + 0xc);
        iVar4 = 0x0;
        iVar5 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar6 + 0x1c) + iVar5)) {
                    unaff_r31 = *(int *)(gaScreen + param_1 * 0x48 + 0x1c) + iVar4 * 0x6c;
                    iVar1 = -0x1;
                    goto LAB_0009d950;
                }
                iVar5 += 0x6c;
                iVar4 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009d950:
    if (iVar1 != 0x0) {
        sprintf(local_48,(char *)&_3917);
        pcVar3 = local_48;
        iVar1 = 0x0;
        while( true ) {
            if (*pcVar3 == '\0') break;
            pcVar3 = pcVar3 + 0x1;
            iVar1 += 0x1;
        }
        iVar5 = 0x0;
        iVar4 = 0x0;
        for (iVar6 = 0x0; iVar6 < *(int *)(unaff_r31 + 0x20); iVar6 += 0x1) {
            if (iVar1 + iVar6 < *(int *)(unaff_r31 + 0x20)) {
                if (param_4 == 0x0) {
                    iVar2 = 0x0;
                }
                else {
                    iVar2 = 0xa;
                }
            }
            else {
                pcVar3 = local_48 + iVar5;
                iVar5 += 0x1;
                iVar2 = *pcVar3 + -0x30;
                if (iVar2 == 0x0) {
                    iVar2 = 0xa;
                }
            }
            *(ushort *)(*(int *)(unaff_r31 + 0x50) + iVar4) =
                 *(ushort *)(*(int *)(unaff_r31 + 0x50) + iVar4) & 0xfc00;
            *(ushort *)(*(int *)(unaff_r31 + 0x50) + iVar4) =
                 *(ushort *)(*(int *)(unaff_r31 + 0x50) + iVar4) | (ushort)iVar2 & 0x3ff;
            iVar4 += 0x2;
        }
    }
    return;
}



void screenSetCursor(int param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int unaff_r31;
    
    if ((-0x1 < param_3) && (-0x1 < param_4)) {
        if ((param_2 != -0x1) && ((-0x1 < param_1 && (param_1 < gnScreenCount)))) {
            iVar4 = gaScreen + param_1 * 0x48;
            iVar1 = *(int *)(iVar4 + 0x8);
            iVar2 = 0x0;
            iVar3 = 0x0;
            if (0x0 < iVar1) {
                do {
                    if (param_2 == *(int *)(*(int *)(iVar4 + 0x18) + iVar3 + 0x1c)) {
                        unaff_r31 = *(int *)(gaScreen + param_1 * 0x48 + 0x18) + iVar2 * 0x60;
                        iVar1 = -0x1;
                        goto LAB_0009dad8;
                    }
                    iVar3 += 0x60;
                    iVar2 += 0x1;
                    iVar1 += -0x1;
                } while (iVar1 != 0x0);
            }
        }
        iVar1 = 0x0;
LAB_0009dad8:
        if ((iVar1 != 0x0) &&
           (iVar1 = screenWrapCursor(unaff_r31,param_3,param_4,0x0), iVar1 != 0x0)) {
            screenUpdateArea(unaff_r31);
        }
    }
    return;
}



void screenGetCursor(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar4 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar4 + 0x8);
        iVar2 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar4 + 0x18) + iVar3 + 0x1c)) {
                    param_2 = *(int *)(gaScreen + param_1 * 0x48 + 0x18) + iVar2 * 0x60;
                    iVar1 = -0x1;
                    goto LAB_0009db9c;
                }
                iVar3 += 0x60;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009db9c:
    if (iVar1 == 0x0) {
        return;
    }
    *param_3 = *(undefined4 *)(param_2 + 0x3c);
    *param_4 = *(undefined4 *)(param_2 + 0x40);
    return;
}



void screenGetCursorPosition(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar4 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar4 + 0x8);
        iVar2 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar4 + 0x18) + iVar3 + 0x1c)) {
                    param_2 = *(int *)(gaScreen + param_1 * 0x48 + 0x18) + iVar2 * 0x60;
                    iVar1 = -0x1;
                    goto LAB_0009dc3c;
                }
                iVar3 += 0x60;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009dc3c:
    if (iVar1 == 0x0) {
        return;
    }
    *param_3 = *(undefined4 *)(param_2 + 0x44);
    *param_4 = *(undefined4 *)(param_2 + 0x48);
    return;
}



undefined4 screenGetAreaText(int param_1,undefined4 *param_2)

{
    int iVar1;
    int iVar2;
    
    *param_2 = 0xffffffff;
    if ((-0x1 < param_1) && (param_1 < gnScreenCount)) {
        iVar2 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar2 + 0x28);
        if ((iVar1 != -0x1) &&
           (iVar1 = *(int *)(iVar2 + 0x18) + iVar1 * 0x60, (*(uint *)(iVar1 + 0x2c) & 0x2000) != 0x0
           )) {
            *param_2 = *(undefined4 *)(iVar1 + 0x20);
            return 0xffffffff;
        }
    }
    return 0x0;
}



undefined4 screenSetDialogButton(int param_1,int param_2,undefined4 param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar4 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar4 + 0x14);
        iVar2 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar4 + 0x24) + iVar3)) {
                    param_2 = *(int *)(gaScreen + param_1 * 0x48 + 0x24) + iVar2 * 0x30;
                    iVar1 = -0x1;
                    goto LAB_0009dd44;
                }
                iVar3 += 0x30;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009dd44:
    if (iVar1 != 0x0) {
        *(undefined4 *)(param_2 + 0x14) = param_3;
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 screenGetDialogButton(int param_1,int param_2,undefined4 *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (((param_2 != -0x1) && (-0x1 < param_1)) && (param_1 < gnScreenCount)) {
        iVar4 = gaScreen + param_1 * 0x48;
        iVar1 = *(int *)(iVar4 + 0x14);
        iVar2 = 0x0;
        iVar3 = 0x0;
        if (0x0 < iVar1) {
            do {
                if (param_2 == *(int *)(*(int *)(iVar4 + 0x24) + iVar3)) {
                    param_2 = *(int *)(gaScreen + param_1 * 0x48 + 0x24) + iVar2 * 0x30;
                    iVar1 = -0x1;
                    goto LAB_0009dde0;
                }
                iVar3 += 0x30;
                iVar2 += 0x1;
                iVar1 += -0x1;
            } while (iVar1 != 0x0);
        }
    }
    iVar1 = 0x0;
LAB_0009dde0:
    if (iVar1 != 0x0) {
        if (param_3 != NULL) {
            *param_3 = *(undefined4 *)(param_2 + 0x14);
        }
        return 0xffffffff;
    }
    return 0x0;
}



undefined4 screenFind(int *param_1,char *param_2)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    char **ppcVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    
    iVar7 = 0x0;
    ppcVar4 = gaScreen;
    iVar8 = gnScreenCount;
    if (0x0 < gnScreenCount) {
        do {
            pcVar1 = *ppcVar4;
            iVar3 = 0x0;
            pcVar2 = param_2;
            while( true ) {
                if (*pcVar1 == '\0') break;
                iVar5 = (int)*pcVar1;
                if ((0x60 < iVar5) && (iVar5 < 0x7b)) {
                    iVar5 += -0x20;
                }
                iVar6 = (int)*pcVar2;
                if ((0x60 < iVar6) && (iVar6 < 0x7b)) {
                    iVar6 += -0x20;
                }
                if (iVar5 != iVar6) {
                    iVar3 = 0x0;
                    goto LAB_0009deac;
                }
                iVar3 += 0x1;
                pcVar1 = pcVar1 + 0x1;
                pcVar2 = pcVar2 + 0x1;
            }
            if (param_2[iVar3] == '\0') {
                iVar3 = -0x1;
            }
            else {
                iVar3 = 0x0;
            }
LAB_0009deac:
            if (iVar3 != 0x0) {
                *param_1 = iVar7;
                return 0xffffffff;
            }
            ppcVar4 = ppcVar4 + 0x12;
            iVar7 += 0x1;
            iVar8 += -0x1;
        } while (iVar8 != 0x0);
    }
    return 0x0;
}



int screenLoad(undefined4 param_1,uint *param_2)

{
    ushort uVar1;
    int *piVar2;
    undefined4 *puVar3;
    bool bVar4;
    uint uVar5;
    bool bVar6;
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
    int iVar17;
    uint *puVar18;
    int local_58;
    int local_54 [0x2];
    int local_4c;
    undefined auStack_48 [0x10];
    
    iVar17 = 0x0;
    bVar6 = false;
    bVar4 = false;
    gnPlayerCount = 0x1;
    giScreenNext = 0xffffffff;
    giScreen = 0xffffffff;
    gnImageCount = 0x0;
    gnScreenCount = 0x0;
    gnTickWrap = 0x8;
    geModeFade = 0x0;
    geTypeBack = 0xffffffff;
    gnAlphaFade = 0xff;
    iVar8 = fileOpen(auStack_48,param_1);
    if (iVar8 == 0x0) {
        local_4c = 0x0;
    }
    else {
        fileGet(auStack_48,local_54,0x4);
        if (local_54[0] == 0x53424631) {
            fileGet(auStack_48,&gnImageCount,0x4);
            gapImage = *param_2 + 0x3 & 0xfffffffc;
            *param_2 = gapImage;
            *param_2 = *param_2 + gnImageCount * 0x4;
            gapNameImage = *param_2 + 0x3 & 0xfffffffc;
            *param_2 = gapNameImage;
            *param_2 = *param_2 + gnImageCount * 0x4;
            for (iVar8 = 0x0; iVar8 < gnImageCount; iVar8 += 0x1) {
                fileGet(auStack_48,*param_2,0x10);
                for (local_58 = 0x0; *(char *)(*param_2 + local_58) != '\0'; local_58 += 0x1) {
                }
                *(uint *)(gapNameImage + iVar17) = *param_2;
                piVar2 = (int *)(gapNameImage + iVar17);
                iVar17 += 0x4;
                *(undefined *)(*piVar2 + local_58) = 0x0;
                *param_2 = *param_2 + (local_58 + 0x4U & 0xfffffffc);
            }
            fileGet(auStack_48,&local_4c,0x4);
            gaScreen = *param_2 + 0x3 & 0xfffffffc;
            *param_2 = gaScreen;
            iVar8 = 0x0;
            *param_2 = *param_2 + local_4c * 0x48;
            for (iVar17 = 0x0; iVar17 < local_4c; iVar17 += 0x1) {
                puVar18 = (uint *)(gaScreen + iVar8);
                fileGet(auStack_48,puVar18 + 0x1,0x4);
                fileGet(auStack_48,&local_58,0x4);
                uVar5 = *param_2 + 0x3 & 0xfffffffc;
                *param_2 = uVar5;
                *puVar18 = uVar5;
                *param_2 = local_58 + *param_2 + 0x1;
                fileGet(auStack_48,*puVar18,local_58);
                iVar16 = 0x0;
                *(undefined *)(*puVar18 + local_58) = 0x0;
                puVar18[0xa] = 0xffffffff;
                puVar18[0xb] = 0xffffffff;
                puVar18[0xc] = 0xffffffff;
                puVar18[0xd] = 0xffffffff;
                fileGet(auStack_48,puVar18 + 0x2,0x4);
                uVar5 = *param_2 + 0x3 & 0xfffffffc;
                *param_2 = uVar5;
                puVar18[0x6] = uVar5;
                *param_2 = *param_2 + puVar18[0x2] * 0x60;
                for (iVar14 = 0x0; iVar14 < (int)puVar18[0x2]; iVar14 += 0x1) {
                    iVar15 = puVar18[0x6] + iVar16;
                    *(undefined4 *)(iVar15 + 0x20) = 0xffffffff;
                    *(undefined4 *)(iVar15 + 0x30) = 0x0;
                    *(undefined4 *)(iVar15 + 0x34) = 0x0;
                    *(undefined4 *)(iVar15 + 0x3c) = 0x0;
                    *(undefined4 *)(iVar15 + 0x40) = 0x0;
                    *(undefined4 *)(iVar15 + 0xc) = 0x0;
                    fileGet(auStack_48,iVar15 + 0x2c,0x4);
                    fileGet(auStack_48,iVar15,0x4);
                    fileGet(auStack_48,iVar15 + 0x4,0x4);
                    fileGet(auStack_48,iVar15 + 0x1c,0x4);
                    fileGet(auStack_48,iVar15 + 0x24,0x4);
                    fileGet(auStack_48,iVar15 + 0x28,0x4);
                    fileGet(auStack_48,iVar15 + 0x14,0x4);
                    if (*(int *)(iVar15 + 0x14) < 0x1) {
                        *(undefined4 *)(iVar15 + 0x5c) = 0x0;
                    }
                    else {
                        uVar5 = *param_2 + 0x3 & 0xfffffffc;
                        *param_2 = uVar5;
                        *(uint *)(iVar15 + 0x5c) = uVar5;
                        *param_2 = *param_2 + *(int *)(iVar15 + 0x14) * 0x8;
                        fileGet(auStack_48,*(undefined4 *)(iVar15 + 0x5c),
                                *(int *)(iVar15 + 0x14) << 0x3);
                    }
                    if ((*(uint *)(iVar15 + 0x2c) & 0x2000) != 0x0) {
                        fileGet(auStack_48,iVar15 + 0x10,0x4);
                    }
                    if ((*(uint *)(iVar15 + 0x2c) & 0x10) == 0x0) {
                        if ((*(uint *)(iVar15 + 0x2c) & 0x20) != 0x0) {
                            *(undefined4 *)(iVar15 + 0x30) = 0x1;
                        }
                    }
                    else {
                        fileGet(auStack_48,iVar15 + 0x30,0x4);
                    }
                    if ((*(uint *)(iVar15 + 0x2c) & 0x20) == 0x0) {
                        if ((*(uint *)(iVar15 + 0x2c) & 0x10) != 0x0) {
                            *(undefined4 *)(iVar15 + 0x34) = 0x1;
                        }
                    }
                    else {
                        fileGet(auStack_48,iVar15 + 0x34,0x4);
                    }
                    if ((*(uint *)(iVar15 + 0x2c) & 0x80) != 0x0) {
                        fileGet(auStack_48,iVar15 + 0x8,0x4);
                    }
                    if ((*(uint *)(iVar15 + 0x2c) & 0x40) != 0x0) {
                        fileGet(auStack_48,iVar15 + 0x4c,0x4);
                        fileGet(auStack_48,iVar15 + 0x50,0x4);
                        fileGet(auStack_48,iVar15 + 0x54,0x4);
                        fileGet(auStack_48,iVar15 + 0x58,0x4);
                    }
                    if ((*(uint *)(iVar15 + 0x2c) & 0x1000) == 0x0) {
                        *(undefined4 *)(iVar15 + 0x38) = 0x0;
                    }
                    else {
                        uVar5 = *param_2 + 0x3 & 0xfffffffc;
                        *param_2 = uVar5;
                        *(uint *)(iVar15 + 0x38) = uVar5;
                        *param_2 = *param_2 +
                                   (*(int *)(iVar15 + 0x30) * *(int *)(iVar15 + 0x34) + 0x7 >> 0x3);
                        for (iVar9 = 0x0;
                            iVar9 < *(int *)(iVar15 + 0x30) * *(int *)(iVar15 + 0x34) + 0x7 >> 0x3;
                            iVar9 += 0x1) {
                            *(undefined *)(*(int *)(iVar15 + 0x38) + iVar9) = 0xff;
                        }
                    }
                    screenUpdateArea(iVar15);
                    iVar16 += 0x60;
                }
                fileGet(auStack_48,puVar18 + 0x3,0x4);
                iVar16 = 0x0;
                uVar5 = *param_2 + 0x3 & 0xfffffffc;
                *param_2 = uVar5;
                puVar18[0x7] = uVar5;
                *param_2 = *param_2 + puVar18[0x3] * 0x6c;
                for (iVar14 = 0x0; iVar14 < (int)puVar18[0x3]; iVar14 += 0x1) {
                    iVar15 = puVar18[0x7] + iVar16;
                    *(undefined4 *)(iVar15 + 0x10) = 0x0;
                    *(undefined4 *)(iVar15 + 0xc) = 0x0;
                    *(undefined4 *)(iVar15 + 0x54) = 0xffffffff;
                    *(undefined4 *)(iVar15 + 0x1c) = 0x0;
                    fileGet(auStack_48,iVar15 + 0x44,0x4);
                    fileGet(auStack_48,iVar15 + 0x4,0x4);
                    fileGet(auStack_48,iVar15 + 0x8,0x4);
                    fileGet(auStack_48,iVar15,0x4);
                    fileGet(auStack_48,iVar15 + 0x18,0x4);
                    if ((*(uint *)(iVar15 + 0x44) & 0x800) == 0x0) {
                        *(undefined4 *)(iVar15 + 0x40) = 0x0;
                        *(undefined4 *)(iVar15 + 0x3c) = 0x0;
                    }
                    else {
                        fileGet(auStack_48,iVar15 + 0x3c,0x4);
                        fileGet(auStack_48,iVar15 + 0x40,0x4);
                    }
                    if ((*(uint *)(iVar15 + 0x44) & 0x4000) == 0x0) {
                        *(undefined4 *)(iVar15 + 0x60) = 0x0;
                        *(undefined4 *)(iVar15 + 0x5c) = 0x0;
                    }
                    else {
                        fileGet(auStack_48,iVar15 + 0x5c,0x4);
                        fileGet(auStack_48,iVar15 + 0x60,0x4);
                    }
                    fileGet(auStack_48,&local_58,0x4);
                    uVar5 = *param_2 + 0x3 & 0xfffffffc;
                    *param_2 = uVar5;
                    *(uint *)(iVar15 + 0x64) = uVar5;
                    *param_2 = *param_2 + local_58 * 0x4;
                    fileGet(auStack_48,*(undefined4 *)(iVar15 + 0x64),local_58 << 0x2);
                    uVar5 = *param_2 + 0x3 & 0xfffffffc;
                    *param_2 = uVar5;
                    *(uint *)(iVar15 + 0x68) = uVar5;
                    *param_2 = *param_2 + local_58 * 0x4;
                    fileGet(auStack_48,*(undefined4 *)(iVar15 + 0x68),local_58 << 0x2);
                    fileGet(auStack_48,iVar15 + 0x28,0x4);
                    fileGet(auStack_48,iVar15 + 0x48,0x4);
                    fileGet(auStack_48,iVar15 + 0x24,0x4);
                    if (*(int *)(iVar15 + 0x24) < 0x1) {
                        *(undefined4 *)(iVar15 + 0x14) = 0x0;
                    }
                    else {
                        uVar5 = *param_2 + 0x3 & 0xfffffffc;
                        *param_2 = uVar5;
                        *(uint *)(iVar15 + 0x14) = uVar5;
                        *param_2 = *param_2 + *(int *)(iVar15 + 0x24) * 0x4;
                        fileGet(auStack_48,*(undefined4 *)(iVar15 + 0x14),
                                *(int *)(iVar15 + 0x24) << 0x2);
                    }
                    fileGet(auStack_48,&local_58,0x4);
                    *(int *)(iVar15 + 0x20) = local_58;
                    uVar5 = *param_2 + 0x3 & 0xfffffffc;
                    *param_2 = uVar5;
                    *(uint *)(iVar15 + 0x50) = uVar5;
                    *param_2 = *param_2 + (local_58 + 0x1) * 0x2;
                    fileGet(auStack_48,*(undefined4 *)(iVar15 + 0x50),local_58 << 0x1);
                    iVar9 = 0x0;
                    *(undefined2 *)(*(int *)(iVar15 + 0x50) + local_58 * 0x2) = 0x0;
                    if ((*(uint *)(iVar15 + 0x44) & 0x1010000) != 0x0) {
                        iVar11 = 0x0;
                        uVar5 = *param_2 + 0x3 & 0xfffffffc;
                        *param_2 = uVar5;
                        *(uint *)(iVar15 + 0x4c) = uVar5;
                        *param_2 = *param_2 + *(int *)(iVar15 + 0x20) * 0x4;
                        for (; iVar9 < *(int *)(iVar15 + 0x20); iVar9 += 0x1) {
                            *(int *)(*(int *)(iVar15 + 0x4c) + iVar11) =
                                 (*(int *)(iVar15 + 0x20) - iVar9) + -0x1;
                            iVar11 += 0x4;
                        }
                        if ((*(uint *)(iVar15 + 0x44) & 0x10000000) != 0x0) {
                            iVar9 = 0x0;
                            uVar5 = *param_2 + 0x3 & 0xfffffffc;
                            *param_2 = uVar5;
                            iVar10 = 0x0;
                            *(uint *)(iVar15 + 0x30) = uVar5;
                            *param_2 = *param_2 + *(int *)(iVar15 + 0x20) * 0x8;
                            for (iVar11 = 0x0; iVar11 < *(int *)(iVar15 + 0x20); iVar11 += 0x1) {
                                iVar13 = iVar10 + 0x2;
                                iVar12 = iVar10 + 0x4;
                                iVar7 = iVar10 + 0x6;
                                *(short *)(*(int *)(iVar15 + 0x30) + iVar10) =
                                     (short)*(undefined4 *)(*(int *)(iVar15 + 0x4c) + iVar9);
                                iVar10 += 0x8;
                                *(short *)(*(int *)(iVar15 + 0x30) + iVar13) =
                                     (short)*(undefined4 *)(*(int *)(iVar15 + 0x4c) + iVar9);
                                *(short *)(*(int *)(iVar15 + 0x30) + iVar12) =
                                     (short)*(undefined4 *)(*(int *)(iVar15 + 0x4c) + iVar9);
                                puVar3 = (undefined4 *)(*(int *)(iVar15 + 0x4c) + iVar9);
                                iVar9 += 0x4;
                                *(short *)(*(int *)(iVar15 + 0x30) + iVar7) = (short)*puVar3;
                            }
                        }
                    }
                    if ((*(uint *)(iVar15 + 0x44) & 0x808000) != 0x0) {
                        uVar5 = *param_2 + 0x3 & 0xfffffffc;
                        *param_2 = uVar5;
                        *(uint *)(iVar15 + 0x2c) = uVar5;
                        *param_2 = *param_2 + 0x40;
                        iVar9 = screenCenterText(iVar15);
                        if (iVar9 == 0x0) {
                            *(uint *)(iVar15 + 0x44) = *(uint *)(iVar15 + 0x44) & 0xff7f7fff;
                        }
                    }
                    iVar9 = 0x0;
                    iVar10 = 0x0;
                    iVar11 = local_58;
                    if (0x0 < local_58) {
LAB_0009e804:
                        uVar1 = *(ushort *)(*(int *)(iVar15 + 0x50) + iVar10);
                        if ((uVar1 >> 0xa != 0x4) || ((uVar1 & 0x3ff) != 0x3)) goto LAB_0009e874;
                        *(int *)(iVar15 + 0x54) = iVar9;
                        local_58 = 0x0;
                        for (iVar9 <<= 0x1;
                            (uVar1 = *(ushort *)(*(int *)(iVar15 + 0x50) + iVar9),
                            uVar1 >> 0xa == 0x4 && ((uVar1 & 0x3ff) == 0x3)); iVar9 += 0x2) {
                            local_58 += 0x1;
                        }
                        *(int *)(iVar15 + 0x58) = local_58;
                    }
LAB_0009e880:
                    iVar16 += 0x6c;
                }
                fileGet(auStack_48,puVar18 + 0x4,0x4);
                iVar16 = 0x0;
                uVar5 = *param_2 + 0x3 & 0xfffffffc;
                *param_2 = uVar5;
                puVar18[0x8] = uVar5;
                *param_2 = *param_2 + puVar18[0x4] * 0x30;
                for (iVar14 = 0x0; iVar14 < (int)puVar18[0x4]; iVar14 += 0x1) {
                    iVar15 = puVar18[0x8] + iVar16;
                    *(undefined4 *)(iVar15 + 0x10) = 0x3f800000;
                    *(undefined4 *)(iVar15 + 0x14) = 0x0;
                    fileGet(auStack_48,iVar15 + 0x24,0x4);
                    fileGet(auStack_48,iVar15,0x4);
                    fileGet(auStack_48,iVar15 + 0x4,0x4);
                    fileGet(auStack_48,iVar15 + 0x8,0x4);
                    fileGet(auStack_48,iVar15 + 0x1c,0x4);
                    fileGet(auStack_48,iVar15 + 0x20,0x4);
                    fileGet(auStack_48,iVar15 + 0xc,0x4);
                    if ((*(uint *)(iVar15 + 0x24) & 0x1) != 0x0) {
                        bVar6 = true;
                    }
                    if ((*(uint *)(iVar15 + 0x24) & 0x400) != 0x0) {
                        fileGet(auStack_48,iVar15 + 0x18,0x4);
                    }
                    if ((*(uint *)(iVar15 + 0x24) & 0x40) != 0x0) {
                        fileGet(auStack_48,iVar15 + 0x28,0x4);
                        fileGet(auStack_48,iVar15 + 0x2c,0x4);
                    }
                    iVar16 += 0x30;
                }
                fileGet(auStack_48,puVar18 + 0x5,0x4);
                iVar16 = 0x0;
                uVar5 = *param_2 + 0x3 & 0xfffffffc;
                *param_2 = uVar5;
                puVar18[0x9] = uVar5;
                *param_2 = *param_2 + puVar18[0x5] * 0x30;
                for (iVar14 = 0x0; iVar14 < (int)puVar18[0x5]; iVar14 += 0x1) {
                    iVar15 = puVar18[0x9] + iVar16;
                    *(undefined4 *)(iVar15 + 0x20) = 0x0;
                    *(undefined4 *)(iVar15 + 0x14) = 0x0;
                    fileGet(auStack_48,iVar15 + 0x2c,0x4);
                    fileGet(auStack_48,iVar15 + 0x4,0x4);
                    fileGet(auStack_48,iVar15 + 0x8,0x4);
                    fileGet(auStack_48,iVar15,0x4);
                    if ((*(uint *)(iVar15 + 0x2c) & 0x1) != 0x0) {
                        fileGet(auStack_48,iVar15 + 0xc,0x4);
                    }
                    if ((*(uint *)(iVar15 + 0x2c) & 0x10) != 0x0) {
                        fileGet(auStack_48,iVar15 + 0x1c,0x4);
                    }
                    if ((*(uint *)(iVar15 + 0x2c) & 0x20) != 0x0) {
                        fileGet(auStack_48,iVar15 + 0x18,0x4);
                    }
                    if ((*(uint *)(iVar15 + 0x2c) & 0x4) != 0x0) {
                        fileGet(auStack_48,iVar15 + 0x24,0x4);
                        fileGet(auStack_48,iVar15 + 0x28,0x4);
                    }
                    fileGet(auStack_48,iVar15 + 0x10,0x4);
                    if ((*(uint *)(iVar15 + 0x2c) & 0x80) != 0x0) {
                        bVar4 = true;
                    }
                    iVar16 += 0x30;
                }
                iVar8 += 0x48;
            }
            imageLoad(&gpImageOval,_4203,param_2);
            if (bVar6) {
                imageLoad(&gpImagePageBack,_4204,param_2);
                imageLoad(&gpImagePageFront,_4205,param_2);
            }
            if (bVar4) {
                imageLoad(&gpImageNo,_4206,param_2);
                imageLoad(&gpImageYes,_4207,param_2);
            }
            gpHeap = *param_2 + 0x7 & 0xfffffff8;
            gnScreenCount = local_4c;
            gnFrameSkip = gfxFrameMsgQ._8_4_ + gnFrameSkip + 0x4;
            osViSetSpecialFeatures(0x40);
            screenWipeImages();
        }
        else {
            local_4c = 0x0;
        }
    }
    return local_4c;
LAB_0009e874:
    iVar10 += 0x2;
    iVar9 += 0x1;
    iVar11 += -0x1;
    if (iVar11 == 0x0) goto LAB_0009e880;
    goto LAB_0009e804;
}



void screenSetup(void)

{
    int iVar1;
    int iVar2;
    float *pfVar3;
    uint uVar4;
    undefined1 *puVar5;
    float fVar6;
    
    gbKillPeel = 0x0;
    gnFrameSkip = 0x0;
    gnImageCount = 0x0;
    gnScreenCount = 0x0;
    gnFrameCount = 0x0;
    geModeFade = 0x0;
    gnAlphaFade = 0xffffffff;
    giScreenPage = 0xffffffff;
    giScreenNext = 0xffffffff;
    giScreen = 0xffffffff;
    garSlopePage._0_4_ =
         (garClipPage._0_4_ - garClipPage._8_4_) / (garClipPage._4_4_ - garClipPage._12_4_);
    garOffsetPage._0_4_ = garClipPage._4_4_ - garSlopePage._0_4_ * garClipPage._0_4_;
    garSlopePage._4_4_ =
         (garClipPage._16_4_ - garClipPage._24_4_) / (garClipPage._20_4_ - garClipPage._28_4_);
    garOffsetPage._4_4_ = garClipPage._20_4_ - garSlopePage._4_4_ * garClipPage._16_4_;
    garSlopePage._8_4_ =
         (garClipPage._32_4_ - garClipPage._40_4_) / (garClipPage._36_4_ - garClipPage._44_4_);
    garOffsetPage._8_4_ = garClipPage._36_4_ - garSlopePage._8_4_ * garClipPage._32_4_;
    garSlopePage._12_4_ =
         (garClipPage._48_4_ - garClipPage._56_4_) / (garClipPage._52_4_ - garClipPage._60_4_);
    garOffsetPage._12_4_ = garClipPage._52_4_ - garSlopePage._12_4_ * garClipPage._48_4_;
    garSlopePage._16_4_ =
         (garClipPage._64_4_ - garClipPage._72_4_) / (garClipPage._68_4_ - garClipPage._76_4_);
    garOffsetPage._16_4_ = garClipPage._68_4_ - garSlopePage._16_4_ * garClipPage._64_4_;
    garSlopePage._20_4_ =
         (garClipPage._80_4_ - garClipPage._88_4_) / (garClipPage._84_4_ - garClipPage._92_4_);
    garOffsetPage._20_4_ = garClipPage._84_4_ - garSlopePage._20_4_ * garClipPage._80_4_;
    garSlopePage._24_4_ =
         (garClipPage._96_4_ - garClipPage._104_4_) / (garClipPage._100_4_ - garClipPage._108_4_);
    garOffsetPage._24_4_ = garClipPage._100_4_ - garSlopePage._24_4_ * garClipPage._96_4_;
    garSlopePage._28_4_ =
         (garClipPage._112_4_ - garClipPage._120_4_) / (garClipPage._116_4_ - garClipPage._124_4_);
    garOffsetPage._28_4_ = garClipPage._116_4_ - garSlopePage._28_4_ * garClipPage._112_4_;
    pfVar3 = (float *)(garSlopePage + 0x20);
    iVar1 = 0x4;
    iVar2 = 0x80;
    if (true) {
        do {
            *pfVar3 = (*(float *)(garClipPage + iVar2) - *(float *)(garClipPage + iVar2 + 0x8)) /
                      (*(float *)(garClipPage + iVar2 + 0x4) - *(float *)(garClipPage + iVar2 + 0xc)
                      );
            pfVar3[0xc] = *(float *)(garClipPage + iVar2 + 0x4) -
                          *pfVar3 * *(float *)(garClipPage + iVar2);
            pfVar3 = pfVar3 + 0x1;
            iVar1 += -0x1;
            iVar2 = iVar2 + 0x10;
        } while (iVar1 != 0x0);
    }
    puVar5 = ganWave;
    uVar4 = 0x0;
    do {
        fVar6 = sinf((float)((double)CONCAT44(0x43300000,uVar4 ^ 0x80000000) - 4503601774854144.0) *
                     0.3926991);
        uVar4 += 0x1;
        *(short *)puVar5 = (short)(int)(fVar6 * 6.0 + 0.5);
        puVar5 = (undefined1 *)((int)puVar5 + 0x2);
    } while ((int)uVar4 < 0x10);
    return;
}

