/* Ghidra pseudocode. PS2 address: 00243f30. Not validated source. */

uint FUN_00243f30(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined **ppuVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_50 [32];
  
  ppuVar4 = &PTR_REG_DMAC_0_VIF0_CHCR_002a5090;
  uVar2 = REG_DMAC_CTRL;
  piVar6 = &DAT_002a50d0;
  iVar5 = 9;
  do {
    if (*piVar6 != 0) {
      puVar1 = (undefined4 *)*ppuVar4;
      puVar1[0x20] = 0;
      *puVar1 = 0;
      puVar1[0xc] = 0;
      puVar1[4] = 0;
      puVar1[0x14] = 0;
      puVar1[0x10] = 0;
    }
    ppuVar4 = ppuVar4 + 1;
    iVar5 = iVar5 + -1;
    piVar6 = piVar6 + 1;
  } while (-1 < iVar5);
  REG_DMAC_STAT = 0xff1f;
  uVar3 = REG_DMAC_STAT;
  REG_DMAC_STAT = uVar3 & 0xff1f0000;
  FUN_00243ed0(auStack_50,0x14);
  FUN_00244020(auStack_50);
  if (param_1 == 1) {
    uVar3 = REG_DMAC_CTRL;
    REG_DMAC_CTRL = uVar3 | 1;
  }
  return uVar2 & 1;
}

