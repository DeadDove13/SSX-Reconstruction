/* Ghidra pseudocode. PS2 address: 001f2978. Not validated source. */

undefined4 FUN_001f2978(int param_1)

{
  if (param_1 == 1) {
    return 2;
  }
  if (param_1 < 2) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else {
    if (param_1 == 2) {
      return 4;
    }
    if (param_1 == 3) {
      return 8;
    }
  }
  (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
            (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),0,0x2c54e8,0x2bc558,
             0x4ff);
  return 0;
}

