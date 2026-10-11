/* Ghidra pseudocode. PS2 address: 00259578. Not validated source. */

void FUN_00259578(undefined4 param_1,undefined4 *param_2)

{
  param_2[3] = param_1;
  param_2[5] = DAT_002d54d0;
  DAT_002d54d0 = param_2;
  param_2[2] = param_1;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[4] = 0;
  return;
}

