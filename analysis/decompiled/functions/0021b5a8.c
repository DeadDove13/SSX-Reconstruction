/* Ghidra pseudocode. PS2 address: 0021b5a8. Not validated source. */

void FUN_0021b5a8(void)

{
  uint uVar1;
  
  do {
    uVar1 = REG_DMAC_0_VIF0_CHCR;
  } while ((uVar1 & 0x100) != 0);
  REG_DMAC_0_VIF0_TADR = 0x277090;
  REG_DMAC_0_VIF0_QWC = 0;
  REG_DMAC_0_VIF0_CHCR = 0x104;
  do {
    uVar1 = REG_DMAC_0_VIF0_CHCR;
  } while ((uVar1 & 0x100) != 0);
  FlushCache(0);
  return;
}

