/* Ghidra pseudocode. PS2 address: 00198990. Not validated source. */

void FUN_00198990(int param_1)

{
  if ((*(int *)(param_1 + 0x4c) == 0) && (*(int *)(param_1 + 0x18) != 9)) {
    *(undefined4 *)(param_1 + 0x18) = 9;
    FUN_0015dac8(*(undefined4 *)(DAT_002859e4 + 0xa0));
    FUN_001f9b30(DAT_002c56e8);
    return;
  }
  return;
}

