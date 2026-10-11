/* Ghidra pseudocode. PS2 address: 00122c40. Not validated source. */

void FUN_00122c40(int param_1)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x74))(param_1 + *(short *)(*(int *)(param_1 + 8) + 0x70));
  return;
}

