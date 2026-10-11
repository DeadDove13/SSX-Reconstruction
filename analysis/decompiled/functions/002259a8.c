/* Ghidra pseudocode. PS2 address: 002259a8. Not validated source. */

undefined4 FUN_002259a8(int param_1)

{
  if (DAT_0029a888 == '\0') {
    return 0xfffffff6;
  }
  return *(undefined4 *)(*(int *)(param_1 * 0xc + DAT_0029a8f4) + 8);
}

