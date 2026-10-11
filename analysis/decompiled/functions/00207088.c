/* Ghidra pseudocode. PS2 address: 00207088. Not validated source. */

void FUN_00207088(int param_1)

{
  if (*(int *)(param_1 + 0x35f88) != 0) {
    FUN_00206298();
    return;
  }
  return;
}

