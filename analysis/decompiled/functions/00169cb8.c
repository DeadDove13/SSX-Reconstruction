/* Ghidra pseudocode. PS2 address: 00169cb8. Not validated source. */

void FUN_00169cb8(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 8);
  }
  return;
}

