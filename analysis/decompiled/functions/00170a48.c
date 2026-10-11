/* Ghidra pseudocode. PS2 address: 00170a48. Not validated source. */

void FUN_00170a48(int param_1)

{
  *(undefined4 *)(param_1 + 0xb10) = 1;
  (**(code **)(*(int *)(param_1 + 4) + 0x7c))(param_1 + *(short *)(*(int *)(param_1 + 4) + 0x78));
  return;
}

