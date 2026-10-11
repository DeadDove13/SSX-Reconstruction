/* Ghidra pseudocode. PS2 address: 0019e140. Not validated source. */

int FUN_0019e140(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    return param_2 * 0x70 + *(int *)(param_1 + 0x60) + 0x30;
  }
  return 0;
}

