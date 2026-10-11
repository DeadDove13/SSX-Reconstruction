/* Ghidra pseudocode. PS2 address: 00233800. Not validated source. */

void FUN_00233800(int param_1,int param_2)

{
  *(int *)(param_1 + 0x1c) = param_2 << 2;
  *(int *)(param_1 + 0x18) = param_2 * 3;
  *(int *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x14) = param_2 * 2;
  return;
}

