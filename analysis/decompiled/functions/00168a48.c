/* Ghidra pseudocode. PS2 address: 00168a48. Not validated source. */

void FUN_00168a48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  param_4[3] = param_3;
  *param_4 = 0x3f800000;
  param_4[1] = param_1;
  param_4[2] = param_2;
  return;
}

