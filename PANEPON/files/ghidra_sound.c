
undefined4 LoadSong(void)

{
    ForceLoadSong();
    return 0x1;
}



undefined4 GetTuneBufferFromHandle(void)

{
    return 0x0;
}



undefined4 GetSafeTuneBuffer(void)

{
    return 0x1;
}



undefined4 IsTuneBufferFree(void)

{
    return 0x1;
}



undefined4 LoadSFXBank(uint param_1,uint param_2)

{
    *(uint *)(SFXBuf + (param_2 & 0xffff) * 0x4) = param_1 & 0xffff;
    return 0x0;
}



void InitAudio(void)

{
    return;
}



void SetAudioSystemMixer(short param_1)

{
    if (param_1 == 0x0) {
        gc_soundSetOutputMode(0x0);
    }
    else {
        gc_soundSetOutputMode(0x1);
    }
    return;
}



undefined4 PlaySong(int param_1)

{
    undefined4 uVar1;
    
    if (*(int *)(SndBuf + param_1 * 0x4) < 0x3b) {
        if (g_fadevol == 0xff) {
            g_fadevol = 0x64;
        }
        else if ((0x7f < (int)g_fadevol) || ((int)g_fadevol < 0x1)) {
            g_fadevol = 0x64;
        }
        g_fadevol = (uint)((float)((double)CONCAT44(0x43300000,g_fadevol ^ 0x80000000) -
                                  4503601774854144.0) * SongRetio);
        old_sng_id = last_song_handle;
        uVar1 = gc_songCrossFade(last_song_handle,*(int *)(SndBuf + param_1 * 0x4),g_fadevol,0xff,
                                 g_fadetime,0x0);
        last_song_handle = uVar1;
    }
    else {
        uVar1 = 0x0;
    }
    return uVar1;
}



undefined4 PlaySongParam(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
    last_song_handle = gc_songPlay(*(undefined4 *)(SndBuf + param_1 * 0x4));
    SetSongTempo(last_song_handle,param_4);
    SetSongVolume(last_song_handle,param_2);
    SetSongPan(last_song_handle,param_3);
    return last_song_handle;
}



bool CheckLastFade(void)

{
    int iVar1;
    
    iVar1 = _gc_songGetValid(old_sng_id);
    return iVar1 != 0x0;
}



void FadeOutTuneBuffer(undefined4 param_1,short param_2)

{
    gc_soundSetVolume(0x0,param_2 * 0x11,0x0);
    return;
}



void FadeOutSong(undefined4 param_1,short param_2)

{
    _gc_songFadeOut(param_1,param_2 * 0x11);
    return;
}



void StopAllSongs(void)

{
    gc_songStop();
    return;
}



void FadeOutAllSongs(short param_1)

{
    _gc_songFadeOut(last_song_handle,param_1 * 0x11);
    return;
}



void StopAllSFXs(void)

{
    uint uVar1;
    
    for (uVar1 = 0x0; uVar1 < last_sfx_handle; uVar1 += 0x1) {
        gc_seStop(uVar1);
    }
    return;
}



void FadeOutAllSFXs(void)

{
    uint uVar1;
    
    for (uVar1 = 0x0; uVar1 < last_sfx_handle; uVar1 += 0x1) {
        gc_seStop(uVar1);
    }
    return;
}



void SetMasterSongVolume(uint param_1)

{
    SongRetio = ((float)((double)CONCAT44(0x43300000,param_1 ^ 0x80000000) - 4503601774854144.0) /
                32767.0) / 0.6;
    _gc_songFadeSong(last_song_handle,(int)(SongRetio * 100.0),0x1);
    return;
}



void SetMasterSFXVolume(uint param_1)

{
    SFXRetio = ((float)((double)CONCAT44(0x43300000,param_1 ^ 0x80000000) - 4503601774854144.0) /
               32767.0) / 0.8;
    return;
}



void SetSongVolume(undefined4 param_1,uint param_2)

{
    if (param_2 == 0xff) {
        param_2 = 0x64;
    }
    else if (((int)param_2 < 0x80) && (-0x1 < (int)param_2)) {
        param_2 &= 0xff;
    }
    else {
        param_2 = 0x64;
    }
    _gc_songFadeSong(param_1,(int)((float)((double)CONCAT44(0x43300000,param_2) - 4503599627370496.0
                                          ) * SongRetio),0x0);
    return;
}



void SetSongTempo(undefined4 param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0xff) {
        uVar1 = 0x100;
    }
    else if ((param_2 < 0x100) && (-0x1 < param_2)) {
        uVar1 = param_2 + 0x80;
    }
    else {
        uVar1 = 0x100;
    }
    gc_songSpeed(uVar1 & 0xffff);
    return;
}



void SetSongPan(void)

{
    return;
}



void SetSongCrossFadeValue(short param_1)

{
    g_fadetime = param_1 * 0x11;
    return;
}



void SetSongCrossFadeVolume(short param_1)

{
    g_fadevol = (int)param_1;
    return;
}



void FadeSong(undefined4 param_1,short param_2,short param_3)

{
    uint uVar1;
    
    uVar1 = (uint)param_2;
    if (uVar1 == 0xff) {
        uVar1 = 0x64;
    }
    else if ((0x7f < (int)uVar1) || (param_2 < 0x1)) {
        uVar1 = 0x64;
    }
    _gc_songFadeSong(param_1,(int)((float)((double)CONCAT44(0x43300000,uVar1 ^ 0x80000000) -
                                          4503601774854144.0) * SongRetio) & 0xff,param_3 * 0x11);
    return;
}



void FadeTuneBuffer(void)

{
    return;
}



undefined4 PlaySFX(int param_1,uint param_2,uint param_3)

{
    gc_soundSetVolume(0x7f,0x0,0x1);
    if (param_2 == 0xff) {
        param_2 = 0x64;
    }
    else if ((0x7f < (int)param_2) || ((int)param_2 < 0x0)) {
        param_2 = 0xff;
    }
    if ((0x7f < (int)param_3) || ((int)param_3 < 0x0)) {
        param_3 = 0xff;
    }
    last_sfx_handle =
         _gc_sePlay(param_1 + -0x1,
                    (int)((float)((double)CONCAT44(0x43300000,param_2 ^ 0x80000000) -
                                 4503601774854144.0) * SFXRetio) & 0xff,param_3 & 0xff);
    return last_sfx_handle;
}



void SetFrequencySFX(double param_1,undefined4 param_2)

{
    if (param_1 != 255.0) {
        gc_sePitch(param_2,(int)(param_1 * 5000.0) + 0x2000);
    }
    return;
}



void SetPanSFX(undefined4 param_1,undefined param_2)

{
    gc_sePanning(param_1,param_2);
    return;
}



void AudioUpdate(void)

{
    return;
}



void ForceLoadSong(undefined4 param_1,short param_2)

{
    int iVar1;
    
    iVar1 = GetLoadSongNumber();
    if (iVar1 < 0x3b) {
        *(int *)(SndBuf + param_2 * 0x4) = iVar1;
    }
    return;
}

