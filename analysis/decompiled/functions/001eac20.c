/* Ghidra pseudocode. PS2 address: 001eac20. Not validated source. */

void FUN_001eac20(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(int *)(param_1 + 0x34) = param_1 + 0x1d4;
  *(int *)(param_1 + 0x204) = param_1;
  *(undefined4 *)(param_1 + 0x208) = 0;
  return;
}

