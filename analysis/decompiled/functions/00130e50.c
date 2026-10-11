/* Ghidra pseudocode. PS2 address: 00130e50. Not validated source. */

void FUN_00130e50(int param_1)

{
  if (*(int *)(param_1 + 0x2dc) == 0) {
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x2dc) = 1;
  }
  return;
}

