/* Ghidra pseudocode. PS2 address: 0016f858. Not validated source. */

undefined8 FUN_0016f858(float param_1,undefined8 param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = (float *)param_2;
  fVar2 = param_3[3];
  fVar7 = param_4[3];
  fVar4 = param_4[1];
  fVar6 = param_3[1];
  fVar3 = param_4[2];
  fVar5 = param_3[2];
  *pfVar1 = (*param_4 - *param_3) * 0.5 * param_1 + (*param_4 + *param_3) * 0.5;
  pfVar1[1] = (fVar4 - fVar6) * 0.5 * param_1 + (fVar4 + fVar6) * 0.5;
  pfVar1[2] = (fVar3 - fVar5) * 0.5 * param_1 + (fVar3 + fVar5) * 0.5;
  pfVar1[3] = (fVar7 - fVar2) * 0.5 * param_1 + (fVar7 + fVar2) * 0.5;
  return param_2;
}

