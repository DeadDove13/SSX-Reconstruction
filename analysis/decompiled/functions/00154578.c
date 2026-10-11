/* Ghidra pseudocode. PS2 address: 00154578. Not validated source. */

uint FUN_00154578(int param_1,uint param_2)

{
  if (DAT_002c4664 == 0) {
    return *(int *)(param_1 + 8) >> (param_2 & 0x1f) & 1;
  }
  return 1;
}

