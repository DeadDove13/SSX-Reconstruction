/* Ghidra pseudocode. PS2 address: 0013a270. Not validated source. */

void FUN_0013a270(float param_1,float param_2,int param_3,long param_4,float *param_5)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = DAT_002c1d94;
  fVar3 = DAT_002c1d90;
  fVar2 = DAT_002c1d8c;
  if (param_4 != 0) {
    param_1 = -param_1;
  }
  bVar1 = *(byte *)(*(int *)(*(int *)(param_3 + 0x10) + 0x394) + 0x18);
  param_5[2] = param_1;
  param_5[1] = param_2 * ABS(param_1 - *param_5) * ((float)bVar1 * fVar2 * fVar3 + fVar4);
  return;
}

