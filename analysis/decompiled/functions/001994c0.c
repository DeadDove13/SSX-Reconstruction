/* Ghidra pseudocode. PS2 address: 001994c0. Not validated source. */

void FUN_001994c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x5d74) = 0;
  *(undefined4 *)(param_1 + 0x5d78) = 0;
  *(int *)(param_1 + 0x5d7c) = *(int *)(param_1 + 0x5d7c) + 1;
  return;
}

