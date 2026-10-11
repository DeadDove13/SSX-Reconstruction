/* Ghidra pseudocode. PS2 address: 001d3018. Not validated source. */

void FUN_001d3018(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_002c363c;
  param_2[0x10] = DAT_002c363c;
  param_2[2] = 3;
  param_2[0xe] = 1;
  param_2[0xf] = 2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 1;
  param_2[9] = 2;
  param_2[10] = uVar1;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}

