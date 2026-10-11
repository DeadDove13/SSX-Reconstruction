/* Ghidra pseudocode. PS2 address: 00210a00. Not validated source. */

float FUN_00210a00(float param_1,float param_2)

{
  uint uVar1;
  
  uVar1 = FUN_002109e0();
  return param_1 + (param_2 - param_1) * ((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0);
}

