/* Ghidra pseudocode. PS2 address: 00165780. Not validated source. */

void FUN_00165780(undefined8 param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (float)*(int *)(DAT_00299cc8 + 0x24);
  FUN_001657e8(param_1,(int)(((*param_2 - *(float *)(DAT_00299cc8 + 0xc)) + fVar1) / fVar1) + -1,
               (int)(((param_2[1] - *(float *)(DAT_00299cc8 + 0x10)) + fVar1) / fVar1) + -1);
  return;
}

