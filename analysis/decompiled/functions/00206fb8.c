/* Ghidra pseudocode. PS2 address: 00206fb8. Not validated source. */

void FUN_00206fb8(int param_1)

{
  if (*(int *)(param_1 + 0x35f88) != 0) {
    FUN_00206248();
    return;
  }
  return;
}

