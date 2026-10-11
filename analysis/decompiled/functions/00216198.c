/* Ghidra pseudocode. PS2 address: 00216198. Not validated source. */

void FUN_00216198(uint param_1,undefined4 param_2,ulong param_3)

{
  uint uVar1;
  
  if ((param_3 & 4) != 0) {
    do {
      uVar1 = REG_DMAC_2_GIF_CHCR;
    } while ((uVar1 & 0x100) != 0);
  }
  REG_GIF_MODE = 0;
  if (param_1 < 0x70000000) {
    REG_DMAC_2_GIF_MADR = param_1;
  }
  else {
    REG_DMAC_2_GIF_MADR = param_1 & 0x3ff0 | 0x80000000;
  }
  REG_DMAC_2_GIF_QWC = param_2;
  REG_DMAC_2_GIF_CHCR = 0x101;
  if ((param_3 & 2) != 0) {
    do {
      uVar1 = REG_DMAC_2_GIF_CHCR;
    } while ((uVar1 & 0x100) != 0);
  }
  return;
}

