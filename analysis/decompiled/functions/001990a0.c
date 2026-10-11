/* Ghidra pseudocode. PS2 address: 001990a0. Not validated source. */

void FUN_001990a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x5d78) = 0x58;
  *(int *)(param_1 + 0x5d7c) = *(int *)(param_1 + 0x5d7c) + 1;
  *(undefined4 *)(param_1 + 0x5d74) = *(undefined4 *)(param_1 + 0x5d70);
  return;
}

