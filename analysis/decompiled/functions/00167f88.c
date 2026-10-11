/* Ghidra pseudocode. PS2 address: 00167f88. Not validated source. */

void FUN_00167f88(int param_1)

{
  if (*(int *)(param_1 + 0x4a0) == 0) {
    param_1 = param_1 + 0x498;
    FUN_00169ef8(param_1);
    FUN_00169f70(param_1);
    FUN_00169c98(param_1);
    return;
  }
  return;
}

