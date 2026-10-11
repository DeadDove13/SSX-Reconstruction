/* Ghidra pseudocode. PS2 address: 0011cdc0. Not validated source. */

void FUN_0011cdc0(int param_1)

{
  FUN_001180f0();
  FUN_001198d8(param_1 + 0x1c20);
  FUN_0011aeb0(param_1 + 0x4b60);
  FUN_00117950(param_1 + 0x99b0);
  FUN_001189a8(param_1 + 0xb600);
  if ((1 < *(int *)(DAT_002859e4 + 0x298)) && (2 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c)))
  {
    return;
  }
  FUN_0011bd30(param_1 + 0x8020);
  return;
}

