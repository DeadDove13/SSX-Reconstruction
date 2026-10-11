/* Ghidra pseudocode. PS2 address: 001f7490. Not validated source. */

void FUN_001f7490(void)

{
  if (DAT_002c56e8 != 0) {
    (**(code **)(*(int *)(DAT_002c56e8 + 0x32000) + 0xc))
              (DAT_002c56e8 + *(short *)(*(int *)(DAT_002c56e8 + 0x32000) + 8),3);
  }
  DAT_002c56e8 = 0;
  return;
}

