/* Ghidra pseudocode. PS2 address: 00250b78. Not validated source. */

void FUN_00250b78(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  REG_DMAC_4_IPU_TO_CHCR = 1;
  uVar2 = REG_DMAC_4_IPU_TO_MADR;
  *param_1 = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_TADR;
  param_1[1] = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_QWC;
  param_1[2] = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_CHCR;
  param_1[3] = uVar2;
  do {
    uVar1 = REG_IPU_CTRL;
  } while ((uVar1 & 0xf0) != 0);
  REG_DMAC_3_IPU_FROM_CHCR = 0;
  uVar2 = REG_DMAC_3_IPU_FROM_MADR;
  param_1[4] = uVar2;
  uVar2 = REG_DMAC_3_IPU_FROM_QWC;
  param_1[5] = uVar2;
  uVar2 = REG_DMAC_3_IPU_FROM_CHCR;
  param_1[6] = uVar2;
  uVar2 = REG_IPU_BP;
  param_1[7] = uVar2;
  uVar2 = REG_IPU_CTRL;
  param_1[8] = uVar2;
  return;
}

