/* Ghidra pseudocode. PS2 address: 0024aee0. Not validated source. */

void FUN_0024aee0(void)

{
  DAT_002a52e4 = 1;
  DAT_002a54fc = 0;
  REG_DMAC_3_IPU_FROM_CHCR = 0;
  REG_DMAC_4_IPU_TO_CHCR = 0;
  REG_DMAC_9_SPR_TO_CHCR = 0;
  REG_DMAC_3_IPU_FROM_QWC = 0;
  REG_DMAC_4_IPU_TO_QWC = 0;
  REG_DMAC_9_SPR_TO_QWC = 0;
  REG_IPU_CTRL = 0x40000000;
  FUN_00250d60(0,0);
  return;
}

