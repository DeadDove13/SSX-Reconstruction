/* Ghidra pseudocode. PS2 address: 00199380. Not validated source. */

void FUN_00199380(int param_1)

{
  *(undefined4 *)(param_1 + 0x5d88) = 4;
  *(undefined4 *)(param_1 + 0x5d84) = 0;
  *(int *)(param_1 + 0x5d7c) = *(int *)(param_1 + 0x5d7c) + 1;
  *(undefined4 *)(param_1 + 0x5da0) = 0;
  *(undefined4 *)(param_1 + 0x5da4) = 0;
  *(undefined4 *)(param_1 + 0x5d74) = 0;
  *(undefined4 *)(param_1 + 0x5d78) = 0;
  return;
}

