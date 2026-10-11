/* Ghidra pseudocode. PS2 address: 0012f0f8. Not validated source. */

undefined8 FUN_0012f0f8(undefined8 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = param_2[3];
  fVar8 = param_3[3];
  fVar1 = *param_2;
  fVar2 = *param_3;
  fVar4 = param_2[1];
  fVar7 = param_3[1];
  fVar3 = param_2[2];
  fVar5 = param_3[2];
  *(undefined8 *)param_1 =
       CONCAT44((fVar1 * fVar7 + fVar4 * fVar2 + fVar3 * fVar8) - fVar6 * fVar5,
                ((fVar1 * fVar2 - fVar4 * fVar7) - fVar3 * fVar5) - fVar6 * fVar8);
  ((undefined8 *)param_1)[1] =
       CONCAT44((fVar1 * fVar8 + fVar6 * fVar2 + fVar4 * fVar5) - fVar3 * fVar7,
                (fVar1 * fVar5 + fVar3 * fVar2 + fVar6 * fVar7) - fVar4 * fVar8);
  return param_1;
}

