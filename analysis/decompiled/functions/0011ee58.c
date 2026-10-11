/* Ghidra pseudocode. PS2 address: 0011ee58. Not validated source. */

undefined8 FUN_0011ee58(float param_1,undefined8 param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = (float *)param_2;
  fVar2 = *param_3;
  fVar3 = param_3[1];
  pfVar1[2] = param_3[2] / param_1;
  *pfVar1 = fVar2 / param_1;
  pfVar1[1] = fVar3 / param_1;
  return param_2;
}

