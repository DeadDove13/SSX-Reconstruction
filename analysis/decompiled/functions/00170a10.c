/* Ghidra pseudocode. PS2 address: 00170a10. Not validated source. */

void FUN_00170a10(int param_1)

{
  *(undefined4 *)(param_1 + 0xb10) = 0;
  (**(code **)(*(int *)(param_1 + 4) + 0x84))(param_1 + *(short *)(*(int *)(param_1 + 4) + 0x80));
  return;
}

