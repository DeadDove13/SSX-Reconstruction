/* Ghidra pseudocode. PS2 address: 002166b0. Not validated source. */

void FUN_002166b0(uint param_1,ulong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_2 & 4) != 0) {
    do {
      uVar1 = REG_DMAC_2_GIF_CHCR;
    } while ((uVar1 & 0x100) != 0);
  }
  REG_GIF_MODE = 0;
  if (param_1 < 0x70000000) {
    REG_DMAC_2_GIF_TADR = param_1;
  }
  else {
    REG_DMAC_2_GIF_TADR = param_1 & 0x3ff0 | 0x80000000;
  }
  if ((param_2 & 1) == 0) {
    uVar2 = 0x104;
  }
  else {
    uVar2 = 0x144;
  }
  REG_DMAC_2_GIF_CHCR = uVar2;
  if ((param_2 & 2) != 0) {
    do {
      uVar1 = REG_DMAC_2_GIF_CHCR;
    } while ((uVar1 & 0x100) != 0);
  }
  return;
}

