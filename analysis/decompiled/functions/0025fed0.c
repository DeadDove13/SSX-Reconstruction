/* Ghidra pseudocode. PS2 address: 0025fed0. Not validated source. */

void FUN_0025fed0(undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  param_1[0x15] = param_4;
  *(undefined2 *)(param_1 + 3) = param_2;
  *(undefined2 *)((int)param_1 + 0xe) = param_3;
  param_1[8] = FUN_002621a8;
  param_1[9] = FUN_00262210;
  param_1[10] = FUN_00262290;
  param_1[0xb] = FUN_002622f8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = param_1;
  return;
}

