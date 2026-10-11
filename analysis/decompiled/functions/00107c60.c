/* Ghidra pseudocode. PS2 address: 00107c60. Not validated source. */

void FUN_00107c60(int param_1)

{
  *(undefined4 *)(param_1 + 0x370) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 0x394) + 0x28) = *(undefined4 *)(param_1 + 0x148);
  return;
}

