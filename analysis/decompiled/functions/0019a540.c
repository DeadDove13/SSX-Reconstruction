/* Ghidra pseudocode. PS2 address: 0019a540. Not validated source. */

undefined4 FUN_0019a540(int param_1)

{
  return **(undefined4 **)(param_1 + *(int *)(param_1 + 4) * 4 + 8);
}

