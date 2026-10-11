/* Ghidra pseudocode. PS2 address: 00165330. Not validated source. */

float FUN_00165330(float *param_1,float *param_2)

{
  float fVar1;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  fStack_18 = param_2[2] - param_1[2];
  fStack_20 = *param_2 - *param_1;
  fStack_1c = param_2[1] - param_1[1];
  fVar1 = (float)FUN_0011ee88(&fStack_20,&fStack_20);
  return SQRT(fVar1);
}

