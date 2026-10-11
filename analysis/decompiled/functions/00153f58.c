/* Ghidra pseudocode. PS2 address: 00153f58. Not validated source. */

int FUN_00153f58(int param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    return param_1 + param_3 * 0x100 + 0x770;
  }
  if (param_2 == 1) {
    return param_3 * 0x100 + param_1 + 0x7f0;
  }
  return 0;
}

