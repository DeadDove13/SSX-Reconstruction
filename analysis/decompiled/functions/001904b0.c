/* Ghidra pseudocode. PS2 address: 001904b0. Not validated source. */

void FUN_001904b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

