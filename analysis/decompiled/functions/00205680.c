/* Ghidra pseudocode. PS2 address: 00205680. Not validated source. */

void FUN_00205680(int param_1)

{
  if (*(int *)(param_1 + 0x3216c) == 0) {
    *(int *)(param_1 + 0x32160) = *(int *)(param_1 + 0x32160) + 1;
  }
  return;
}

