/* Ghidra pseudocode. PS2 address: 001319b0. Not validated source. */

void FUN_001319b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  param_5 = param_5 + *(int *)(param_5 + 0xc0) * 0x30;
  *(undefined4 *)(param_5 + 4) = param_1;
  *(undefined4 *)(param_5 + 8) = param_2;
  *(undefined4 *)(param_5 + 0xc) = param_3;
  *(undefined4 *)(param_5 + 0x10) = param_4;
  FUN_001c5860(0x2913b0);
  return;
}

