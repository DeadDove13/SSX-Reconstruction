/* Ghidra pseudocode. PS2 address: 00232f68. Not validated source. */

void FUN_00232f68(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(code **)(param_1 + 4) = FUN_00232d18;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

