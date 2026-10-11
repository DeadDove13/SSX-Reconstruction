/* Ghidra pseudocode. PS2 address: 0015da60. Not validated source. */

undefined4 FUN_0015da60(int param_1)

{
  if ((*(int *)(param_1 + 0x28) == 1) && (*(long *)(param_1 + 0x30) == 0x100000001)) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x28);
}

