/* Ghidra pseudocode. PS2 address: 002070d8. Not validated source. */

void FUN_002070d8(int param_1)

{
  if (*(int *)(param_1 + 0x35f88) != 0) {
    FUN_002062b0();
    return;
  }
  return;
}

