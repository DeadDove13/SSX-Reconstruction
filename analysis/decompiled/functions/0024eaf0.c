/* Ghidra pseudocode. PS2 address: 0024eaf0. Not validated source. */

undefined2 FUN_0024eaf0(int param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar4 = 0;
  uVar5 = REG_IPU_CTRL;
  while ((uVar5 & 0x80004000) == 0x80000000) {
    bVar1 = 5000 < iVar4;
    iVar4 = iVar4 + 1;
    if (bVar1) {
      FUN_0024a7b8(DAT_002a52a4);
      iVar4 = 0;
    }
    uVar5 = REG_IPU_CTRL;
  }
  uVar5 = param_1 << 0x1a | 0x30000000;
  REG_IPU_CMD = uVar5;
  lVar2 = REG_IPU_CMD;
  DAT_002a52e4 = *(undefined4 *)(&DAT_002a5bc8 + ((int)uVar5 >> 0x1c) * 4);
  while (lVar2 < 0) {
    bVar1 = 5000 < iVar6;
    iVar6 = iVar6 + 1;
    if (bVar1) {
      iVar6 = 0;
      FUN_0024a7b8(DAT_002a52a4);
    }
    lVar2 = REG_IPU_CMD;
  }
  lVar3 = REG_IPU_TOP;
  uVar5 = REG_IPU_BP;
  DAT_002a5b58 = (int)lVar3;
  if (lVar3 < 0) {
    DAT_002a5b5c = -(uVar5 & 0x1f) & 0x1f;
  }
  else {
    DAT_002a5b5c = 0x20;
  }
  DAT_002a53c8 = (uint)((int)lVar2 == 0);
  return (short)lVar2;
}

