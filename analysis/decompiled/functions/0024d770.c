/* Ghidra pseudocode. PS2 address: 0024d770. Not validated source. */

bool FUN_0024d770(void)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 auStack_e0 [8];
  undefined4 auStack_c0 [8];
  
  FUN_0024e998();
  iVar4 = REG_DMAC_3_IPU_FROM_QWC;
  if (iVar4 != 0) {
    uVar2 = REG_IPU_CTRL;
    while ((uVar2 & 0x4000) == 0) {
      iVar4 = REG_DMAC_4_IPU_TO_QWC;
      if ((iVar4 == 0) && (uVar2 = REG_DMAC_4_IPU_TO_CHCR, (uVar2 & 0x100) == 0)) {
        auStack_e0[0] = 1;
        FUN_0024a768(DAT_002a52a4,auStack_e0);
      }
      iVar4 = REG_DMAC_3_IPU_FROM_QWC;
      if (iVar4 == 0) break;
      uVar2 = REG_IPU_CTRL;
    }
  }
  lVar3 = REG_IPU_TOP;
  uVar2 = REG_IPU_BP;
  DAT_002a5b58 = (undefined4)lVar3;
  if (lVar3 < 0) {
    if ((uVar2 & 0x1f) == 0) {
      DAT_002a5b5c = 0;
    }
    else {
      DAT_002a5b5c = 0x20 - (uVar2 & 0x1f);
    }
  }
  else {
    DAT_002a5b5c = 0x20;
  }
  uVar2 = REG_IPU_CTRL;
  bVar1 = (uVar2 & 0x4000) == 0;
  if (!bVar1) {
    FUN_0024af98(0x2bf3c0);
    auStack_c0[0] = 2;
    FUN_0024a768(DAT_002a52a4,auStack_c0);
    REG_IPU_CTRL = 0x40000000;
    auStack_c0[0] = 3;
    FUN_0024a768(DAT_002a52a4,auStack_c0);
    REG_DMAC_3_IPU_FROM_CHCR = 0;
    REG_DMAC_3_IPU_FROM_QWC = 0;
  }
  return bVar1;
}

