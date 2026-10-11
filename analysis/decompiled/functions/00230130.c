/* Ghidra pseudocode. PS2 address: 00230130. Not validated source. */

void FUN_00230130(void)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = 0;
  uVar4 = 0;
  do {
    iVar3 = 0;
    pfVar2 = (float *)(&DAT_002a2920 + iVar1);
    uVar5 = uVar4 + 1;
    do {
      iVar1 = iVar3 << 0x1c;
      iVar3 = iVar3 + 1;
      *pfVar2 = (float)((iVar1 >> 0x10) >> (uVar4 & 0x1f));
      pfVar2 = pfVar2 + 1;
    } while (iVar3 < 0x10);
    iVar1 = uVar5 * 0x40;
    uVar4 = uVar5;
  } while ((int)uVar5 < 0xd);
  DAT_002a1b64 = &LAB_00230c58;
  DAT_002a1bcc = 0x74;
  DAT_002a1b68 = &LAB_00231180;
  DAT_002a1b6c = FUN_00231478;
  DAT_002a1bc4 = 0x6c;
  DAT_002a1bc8 = 0xb4;
  return;
}

