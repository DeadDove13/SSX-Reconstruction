/* Ghidra pseudocode. PS2 address: 00167fd8. Not validated source. */

void FUN_00167fd8(int param_1)

{
  if (*(int *)(param_1 + 0x4d0) == 0) {
    FUN_00169ef8(param_1 + 0x4c8);
    FUN_00169f70(param_1 + 0x4c8);
    return;
  }
  return;
}

