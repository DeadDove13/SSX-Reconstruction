/* Ghidra pseudocode. PS2 address: 00210a68. Not validated source. */

float FUN_00210a68(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_00210a00(0xbf800000,0x3f800000);
  return param_1 + param_2 * fVar1;
}

