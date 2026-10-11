/* Ghidra pseudocode. PS2 address: 00207150. Not validated source. */

void FUN_00207150(int param_1)

{
  if (*(int *)(param_1 + 0x35f88) != 0) {
    FUN_002063c0();
    return;
  }
  return;
}

