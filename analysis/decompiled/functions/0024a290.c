/* Ghidra pseudocode. PS2 address: 0024a290. Not validated source. */

void FUN_0024a290(void)

{
  uint uVar1;
  
  REG_DMAC_3_IPU_FROM_QWC = 0;
  uVar1 = REG_DMAC_3_IPU_FROM_CHCR;
  REG_DMAC_3_IPU_FROM_CHCR = uVar1 & 0xfffffeff;
  REG_DMAC_4_IPU_TO_QWC = 0;
  uVar1 = REG_DMAC_4_IPU_TO_CHCR;
  REG_DMAC_4_IPU_TO_CHCR = uVar1 & 0xfffffeff;
  FUN_00250dc8();
  return;
}

