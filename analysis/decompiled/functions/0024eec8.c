/* Ghidra pseudocode. PS2 address: 0024eec8. Not validated source. */

uint FUN_0024eec8(uint param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = REG_IPU_CTRL;
  while ((uVar3 & 0x80004000) == 0x80000000) {
    bVar1 = 5000 < iVar2;
    iVar2 = iVar2 + 1;
    if (bVar1) {
      FUN_0024a7b8(DAT_002a52a4);
      iVar2 = 0;
    }
    uVar3 = REG_IPU_CTRL;
  }
  if ((DAT_002a52e4 != 0) || (DAT_002a5b5c < (int)param_1)) {
    REG_IPU_CMD = 0x40000000;
    DAT_002a52e4 = DAT_002a5bd8;
    DAT_002a5b58 = FUN_0024ea40();
  }
  DAT_002a5b5c = 0x20;
  REG_IPU_CMD = param_1 | 0x40000000;
  uVar3 = DAT_002a5b58 >> (0x20 - param_1 & 0x1f);
  DAT_002a52e4 = *(int *)(&DAT_002a5bc8 + ((param_1 | 0x40000000) >> 0x1c) * 4);
  DAT_002a5b58 = FUN_0024ea40();
  return uVar3;
}

