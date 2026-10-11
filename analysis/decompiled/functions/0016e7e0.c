/* Ghidra pseudocode. PS2 address: 0016e7e0. Not validated source. */

void FUN_0016e7e0(undefined4 param_1,undefined8 param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)FUN_00218328();
  fVar3 = (float)FUN_00218240(param_1);
  fVar4 = *param_3;
  fVar1 = *param_4;
  *param_3 = fVar4 * fVar2 + fVar1 * fVar3;
  *param_4 = fVar1 * fVar2 - fVar4 * fVar3;
  return;
}

