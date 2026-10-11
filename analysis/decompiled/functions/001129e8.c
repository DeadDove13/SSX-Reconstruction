/* Ghidra pseudocode. PS2 address: 001129e8. Not validated source. */

void FUN_001129e8(float param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_40;
  float afStack_3c [3];
  
  FUN_00218128(param_1 * 0.5,&fStack_40,afStack_3c);
  iVar1 = (int)param_2;
  fVar9 = fStack_40 * param_3[2];
  fVar8 = fStack_40 * *param_3;
  fVar10 = *(float *)(iVar1 + 0xf4);
  fStack_40 = fStack_40 * param_3[1];
  fVar5 = *(float *)(iVar1 + 0xf8);
  fVar4 = *(float *)(iVar1 + 0xfc);
  fVar3 = *(float *)(iVar1 + 0x100);
  fVar6 = *(float *)(iVar1 + 0xf8);
  fVar7 = *(float *)(iVar1 + 0xfc);
  fVar2 = *(float *)(iVar1 + 0xf8);
  *(float *)(iVar1 + 0xf8) =
       (afStack_3c[0] * *(float *)(iVar1 + 0xf8) + fVar8 * fVar10 +
       fStack_40 * *(float *)(iVar1 + 0x100)) - fVar9 * *(float *)(iVar1 + 0xfc);
  *(float *)(iVar1 + 0xfc) =
       (afStack_3c[0] * *(float *)(iVar1 + 0xfc) + fStack_40 * fVar10 + fVar9 * fVar6) -
       fVar8 * *(float *)(iVar1 + 0x100);
  *(float *)(iVar1 + 0x100) =
       (afStack_3c[0] * *(float *)(iVar1 + 0x100) + fVar9 * fVar10 + fVar8 * fVar7) -
       fStack_40 * fVar2;
  *(float *)(iVar1 + 0xf4) =
       ((afStack_3c[0] * fVar10 - fVar8 * fVar5) - fStack_40 * fVar4) - fVar9 * fVar3;
  FUN_00112bd8(param_2);
  return;
}

