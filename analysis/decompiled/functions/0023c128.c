/* Ghidra pseudocode. PS2 address: 0023c128. Not validated source. */

int FUN_0023c128(int param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 8)) {
    return param_1 + *(int *)(param_1 + param_2 * 8 + 0x14);
  }
  return 0;
}

