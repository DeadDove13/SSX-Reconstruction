/* Ghidra pseudocode. PS2 address: 0020e740. Not validated source. */

undefined4 FUN_0020e740(int param_1)

{
  FUN_0020dcf8(*(int *)(param_1 + 0xa0) != 0);
  FUN_0020dcf8(*(int *)(*(int *)(param_1 + 0xa0) + 0x20) != 0);
  return **(undefined4 **)(*(int *)(param_1 + 0xa0) + 0x20);
}

