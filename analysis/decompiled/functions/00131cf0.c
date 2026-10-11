/* Ghidra pseudocode. PS2 address: 00131cf0. Not validated source. */

void FUN_00131cf0(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
  return;
}

