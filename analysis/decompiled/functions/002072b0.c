/* Ghidra pseudocode. PS2 address: 002072b0. Not validated source. */

void FUN_002072b0(int param_1)

{
  if (*(int *)(param_1 + 0x35f88) != 0) {
    FUN_002062c0();
    return;
  }
  return;
}

