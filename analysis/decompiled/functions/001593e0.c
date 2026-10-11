/* Ghidra pseudocode. PS2 address: 001593e0. Not validated source. */

void FUN_001593e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined **)(param_1 + 4) = &DAT_0027a59c;
  *(undefined4 **)(param_1 + 8) = &DAT_0027b810;
  *(undefined4 **)(param_1 + 0xc) = &DAT_0027bc0c;
  return;
}

