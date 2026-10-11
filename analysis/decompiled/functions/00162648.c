/* Ghidra pseudocode. PS2 address: 00162648. Not validated source. */

undefined8
FUN_00162648(undefined4 param_1,undefined8 param_2,int param_3,float *param_4,float *param_5,
            float *param_6,float *param_7,float *param_8,float *param_9)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  
  if (*(int *)(param_3 + 4) == 0) {
    fVar8 = *param_6 - *param_5;
    fVar10 = param_6[1] - param_5[1];
    fVar9 = param_6[2] - param_5[2];
  }
  else {
    fStack_f0 = *param_6 - *param_5;
    fStack_ec = param_6[1] - param_5[1];
    fStack_e8 = param_6[2] - param_5[2];
    fVar9 = (float)FUN_0011ee88(&fStack_f0,&fStack_f0);
    fStack_e0 = *param_6 - *param_4;
    fStack_dc = param_6[1] - param_4[1];
    fStack_d8 = param_6[2] - param_4[2];
    fVar8 = (float)FUN_0011ee88(&fStack_e0,&fStack_e0);
    fVar9 = SQRT(fVar9) / SQRT(fVar8);
    *param_8 = fVar9;
    fVar8 = (*param_6 - *param_4) * fVar9;
    fVar10 = (param_6[1] - param_4[1]) * fVar9;
    fVar9 = (param_6[2] - param_4[2]) * fVar9;
  }
  if (*(int *)(param_3 + 4) < *(int *)(*(int *)(param_3 + 0x24) + 300) + -2) {
    fStack_f0 = *param_6 - *param_5;
    fStack_ec = param_6[1] - param_5[1];
    fStack_e8 = param_6[2] - param_5[2];
    fVar2 = (float)FUN_0011ee88(&fStack_f0,&fStack_f0);
    fStack_d0 = *param_7 - *param_5;
    fStack_cc = param_7[1] - param_5[1];
    fStack_c8 = param_7[2] - param_5[2];
    fVar3 = (float)FUN_0011ee88(&fStack_d0,&fStack_d0);
    fVar7 = SQRT(fVar2) / SQRT(fVar3);
    *param_9 = fVar7;
    fVar2 = (*param_7 - *param_5) * fVar7;
    fVar3 = (param_7[1] - param_5[1]) * fVar7;
    fVar7 = (param_7[2] - param_5[2]) * fVar7;
  }
  else {
    fVar2 = *param_6 - *param_5;
    fVar3 = param_6[1] - param_5[1];
    fVar7 = param_6[2] - param_5[2];
  }
  uVar4 = FUN_001624f8(*param_5,*param_6,fVar8,fVar2,param_1);
  uVar5 = FUN_001624f8(param_5[1],param_6[1],fVar10,fVar3,param_1);
  uVar6 = FUN_001624f8(param_5[2],param_6[2],fVar9,fVar7,param_1);
  puVar1 = (undefined4 *)param_2;
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  return param_2;
}

