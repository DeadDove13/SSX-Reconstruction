/* Ghidra pseudocode. PS2 address: 0024e998. Not validated source. */

void FUN_0024e998(void)

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
  return;
}

