
undefined4 PlayMIDI(int param_1,int param_2,undefined4 param_3,int param_4)

{
    param_1 += param_2 * 0x4;
    if (param_4 == 0x0) {
        StopAllSongs();
        PlaySongParam(param_3,*(undefined *)(param_1 + 0x1),*(undefined *)(param_1 + 0x2),
                      *(undefined *)(param_1 + 0x3));
    }
    else {
        SetSongCrossFadeVolume(*(undefined *)(param_1 + 0x1),(int)(short)param_3);
        PlaySong(param_3);
    }
    return 0x0;
}



undefined4 PlaySE(int param_1,undefined4 param_2)

{
    int iVar1;
    undefined4 uVar2;
    
    iVar1 = SFXIndexN642GC(param_2);
    param_1 += (iVar1 + -0x1) * 0x10;
    uVar2 = PlaySFX(iVar1,*(undefined *)(param_1 + 0x4),*(undefined *)(param_1 + 0x5));
    if ((*(float *)(param_1 + 0x8) != 0.0) && (*(float *)(param_1 + 0x8) != 255.0)) {
        SetFrequencySFX(uVar2);
    }
    return uVar2;
}



int SFXIndexN642GC(int param_1)

{
    if (param_1 == 0xef) {
        switch(SFXBuf._12_4_) {
        case 0x4:
            param_1 = 0x159;
            break;
        case 0x5:
            param_1 = 0x15a;
            break;
        case 0x6:
            param_1 = 0x15b;
            break;
        case 0x7:
            param_1 = 0x15c;
            break;
        case 0x8:
            param_1 = 0x15d;
            break;
        case 0x9:
            param_1 = 0x15e;
            break;
        case 0xa:
            param_1 = 0x15f;
            break;
        case 0xb:
            param_1 = 0x160;
            break;
        case 0xc:
            param_1 = 0x161;
            break;
        case 0xd:
            param_1 = 0x162;
            break;
        case 0xe:
            param_1 = 0x163;
            break;
        case 0xf:
            param_1 = 0x164;
            break;
        case 0x10:
            param_1 = 0x165;
            break;
        case 0x11:
            param_1 = 0x166;
            break;
        case 0x12:
            param_1 = 0x167;
            break;
        case 0x13:
            param_1 = 0x168;
            break;
        case 0x14:
            param_1 = 0x16a;
        }
    }
    if (param_1 == 0xf0) {
        switch(SFXBuf._12_4_) {
        case 0x4:
            param_1 = 0x16b;
            break;
        case 0x5:
            param_1 = 0x16c;
            break;
        case 0x6:
            param_1 = 0x16d;
            break;
        case 0x7:
            param_1 = 0x16e;
            break;
        case 0x8:
            param_1 = 0x16f;
            break;
        case 0x9:
            param_1 = 0x170;
            break;
        case 0xa:
            param_1 = 0x171;
            break;
        case 0xb:
            param_1 = 0x172;
            break;
        case 0xc:
            param_1 = 0x173;
            break;
        case 0xd:
            param_1 = 0x174;
            break;
        case 0xe:
            param_1 = 0x175;
            break;
        case 0xf:
            param_1 = 0x176;
            break;
        case 0x10:
            param_1 = 0x177;
            break;
        case 0x11:
            param_1 = 0x178;
            break;
        case 0x12:
            param_1 = 0x179;
            break;
        case 0x13:
            param_1 = 0x17a;
            break;
        case 0x14:
            param_1 = 0x17c;
        }
    }
    if (param_1 == 0xf1) {
        switch(SFXBuf._12_4_) {
        case 0x4:
            param_1 = 0x18f;
            break;
        case 0x5:
            param_1 = 0x190;
            break;
        case 0x6:
            param_1 = 0x191;
            break;
        case 0x7:
            param_1 = 0x192;
            break;
        case 0x8:
            param_1 = 0x193;
            break;
        case 0x9:
            param_1 = 0x194;
            break;
        case 0xa:
            param_1 = 0x195;
            break;
        case 0xb:
            param_1 = 0x196;
            break;
        case 0xc:
            param_1 = 0x197;
            break;
        case 0xd:
            param_1 = 0x198;
            break;
        case 0xe:
            param_1 = 0x199;
            break;
        case 0xf:
            param_1 = 0x19a;
            break;
        case 0x10:
            param_1 = 0x19b;
            break;
        case 0x11:
            param_1 = 0x19c;
            break;
        case 0x12:
            param_1 = 0x19d;
            break;
        case 0x13:
            param_1 = 0x19e;
            break;
        case 0x14:
            param_1 = 0x1a0;
        }
    }
    if (param_1 == 0xf2) {
        switch(SFXBuf._12_4_) {
        case 0x4:
            param_1 = 0x1a1;
            break;
        case 0x5:
            param_1 = 0x1a2;
            break;
        case 0x6:
            param_1 = 0x1a3;
            break;
        case 0x7:
            param_1 = 0x1a4;
            break;
        case 0x8:
            param_1 = 0x1a5;
            break;
        case 0x9:
            param_1 = 0x1a6;
            break;
        case 0xa:
            param_1 = 0x1a7;
            break;
        case 0xb:
            param_1 = 0x1a8;
            break;
        case 0xc:
            param_1 = 0x1a9;
            break;
        case 0xd:
            param_1 = 0x1aa;
            break;
        case 0xe:
            param_1 = 0x1ab;
            break;
        case 0xf:
            param_1 = 0x1ac;
            break;
        case 0x10:
            param_1 = 0x1ad;
            break;
        case 0x11:
            param_1 = 0x1ae;
            break;
        case 0x12:
            param_1 = 0x1af;
            break;
        case 0x13:
            param_1 = 0x1b0;
            break;
        case 0x14:
            param_1 = 0x1b2;
        }
    }
    if (param_1 == 0xf7) {
        switch(SFXBuf._16_4_) {
        case 0x16:
            param_1 = 0x1d4;
            break;
        case 0x17:
            param_1 = 0x1d5;
            break;
        case 0x18:
            param_1 = 0x1d6;
            break;
        case 0x19:
            param_1 = 0x1d7;
            break;
        case 0x1a:
            param_1 = 0x1d8;
            break;
        case 0x1b:
            param_1 = 0x1d9;
            break;
        case 0x1c:
            param_1 = 0x1da;
            break;
        case 0x1d:
            param_1 = 0x1db;
            break;
        case 0x1e:
            param_1 = 0x1dc;
            break;
        case 0x1f:
            param_1 = 0x1dd;
            break;
        case 0x20:
            param_1 = 0x1de;
            break;
        case 0x21:
            param_1 = 0x1df;
            break;
        case 0x22:
            param_1 = 0x1e0;
            break;
        case 0x23:
            param_1 = 0x1e1;
            break;
        case 0x24:
            param_1 = 0x1e2;
            break;
        case 0x25:
            param_1 = 0x1e3;
            break;
        case 0x26:
            param_1 = 0x1e5;
        }
    }
    if (param_1 == 0xf8) {
        switch(SFXBuf._16_4_) {
        case 0x16:
            return 0x1e6;
        case 0x17:
            return 0x1e7;
        case 0x18:
            return 0x1e8;
        case 0x19:
            return 0x1e9;
        case 0x1a:
            return 0x1ea;
        case 0x1b:
            return 0x1eb;
        case 0x1c:
            return 0x1ec;
        case 0x1d:
            return 0x1ed;
        case 0x1e:
            return 0x1ee;
        case 0x1f:
            return 0x1ef;
        case 0x20:
            return 0x1f0;
        case 0x21:
            return 0x1f1;
        case 0x22:
            return 0x1f2;
        case 0x23:
            return 0x1f3;
        case 0x24:
            return 0x1f4;
        case 0x25:
            return 0x1f5;
        case 0x26:
            return 0x1f7;
        default:
            return 0xf8;
        }
    }
    return param_1;
}



void SetMIDIParam(undefined4 param_1,int param_2,int param_3,short param_4)

{
    param_2 += param_3 * 0x4;
    SetSongCrossFadeVolume(*(undefined *)(param_2 + 0x1),(int)param_4);
    SetSongTempo(last_song_handle,*(undefined *)(param_2 + 0x3));
    return;
}


