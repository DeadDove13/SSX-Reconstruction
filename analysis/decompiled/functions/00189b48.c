/* Ghidra pseudocode. PS2 address: 00189b48. Not validated source. */

undefined4 FUN_00189b48(int param_1)

{
  if (param_1 < *(int *)(DAT_002859e4 + 0x298)) {
    return *(undefined4 *)(param_1 * 0x80 + DAT_002859e4 + 0xa0);
  }
  return 0;
}

