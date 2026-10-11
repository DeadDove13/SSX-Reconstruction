/* Ghidra pseudocode. PS2 address: 00217948. Not validated source. */

undefined8 FUN_00217948(undefined8 param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar1 = (float *)param_1;
  fVar7 = param_2[6];
  fVar4 = param_2[7];
  fVar5 = fVar7 + fVar7;
  fVar2 = param_2[5];
  fVar8 = param_2[4];
  fVar6 = fVar4 + fVar4;
  pfVar1[4] = fVar2 * fVar5 - fVar8 * fVar6;
  fVar9 = fVar8 * (fVar2 + fVar2);
  *pfVar1 = (1.0 - fVar7 * fVar5) - fVar4 * fVar6;
  fVar3 = 1.0 - fVar2 * (fVar2 + fVar2);
  pfVar1[8] = fVar2 * fVar6 + fVar8 * fVar5;
  pfVar1[0xc] = *param_2;
  pfVar1[1] = fVar2 * fVar5 + fVar8 * fVar6;
  pfVar1[5] = fVar3 - fVar4 * fVar6;
  pfVar1[9] = fVar7 * fVar6 - fVar9;
  fVar4 = param_2[1];
  pfVar1[2] = fVar2 * fVar6 - fVar8 * fVar5;
  pfVar1[0xd] = fVar4;
  pfVar1[6] = fVar7 * fVar6 + fVar9;
  pfVar1[10] = fVar3 - fVar7 * fVar5;
  fVar4 = param_2[2];
  pfVar1[0xf] = 1.0;
  pfVar1[0xe] = fVar4;
  pfVar1[3] = 0.0;
  pfVar1[7] = 0.0;
  pfVar1[0xb] = 0.0;
  return param_1;
}

