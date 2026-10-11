/* Ghidra pseudocode. PS2 address: 001388d0. Not validated source. */

void FUN_001388d0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

