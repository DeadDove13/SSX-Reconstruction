/* Ghidra pseudocode. PS2 address: 00198810. Not validated source. */

void FUN_00198810(int *param_1)

{
  param_1[1] = (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x24) - *(int *)(*param_1 + 0x38)) + 0x3c;
  return;
}

