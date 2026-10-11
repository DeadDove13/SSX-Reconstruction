/* Ghidra pseudocode. PS2 address: 00206fe0. Not validated source. */

void FUN_00206fe0(int param_1)

{
  if (*(int *)(param_1 + 0x35f88) != 0) {
    FUN_00206270();
    return;
  }
  return;
}

