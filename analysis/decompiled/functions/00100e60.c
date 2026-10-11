/* Ghidra pseudocode. PS2 address: 00100e60. Not validated source. */

void FUN_00100e60(int param_1)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x54))(param_1 + *(short *)(*(int *)(param_1 + 8) + 0x50),9);
  return;
}

