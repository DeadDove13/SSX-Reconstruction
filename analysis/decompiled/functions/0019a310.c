/* Ghidra pseudocode. PS2 address: 0019a310. Not validated source. */

undefined4 FUN_0019a310(int param_1,int param_2)

{
  if (DAT_0027ad04 != 0) {
    return *(undefined4 *)(param_2 * 0x1c + param_1 + 0x3c);
  }
  return 0;
}

