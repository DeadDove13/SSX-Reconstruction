/* Ghidra pseudocode. PS2 address: 0024ea40. Not validated source. */

long FUN_0024ea40(void)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar3 = REG_IPU_CMD;
  if (lVar3 < 0) {
    uVar2 = REG_IPU_CTRL;
    while ((uVar2 & 0x4000) == 0) {
      bVar1 = 5000 < iVar4;
      iVar4 = iVar4 + 1;
      if (bVar1) {
        FUN_0024a7b8(DAT_002a52a4);
        iVar4 = 0;
      }
      lVar3 = REG_IPU_CMD;
      if (-1 < lVar3) {
        return lVar3;
      }
      uVar2 = REG_IPU_CTRL;
    }
  }
  return lVar3;
}

