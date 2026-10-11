/* Ghidra pseudocode. PS2 address: 0024edc0. Not validated source. */

void FUN_0024edc0(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = REG_IPU_CTRL;
  while ((uVar2 & 0x80004000) == 0x80000000) {
    bVar1 = 5000 < iVar3;
    iVar3 = iVar3 + 1;
    if (bVar1) {
      FUN_0024a7b8(DAT_002a52a4);
      iVar3 = 0;
    }
    uVar2 = REG_IPU_CTRL;
  }
  REG_IPU_CMD = param_1 | 0x40000000;
  DAT_002a52e4 = *(undefined4 *)(&DAT_002a5bc8 + ((param_1 | 0x40000000) >> 0x1c) * 4);
  DAT_002a5b58 = FUN_0024ea40();
  DAT_002a5b5c = 0x20;
  return;
}

