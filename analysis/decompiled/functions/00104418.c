/* Ghidra pseudocode. PS2 address: 00104418. Not validated source. */

void FUN_00104418(undefined8 param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  
  fVar5 = (float)*(int *)(DAT_00299cc8 + 0x24);
  iVar6 = (int)(((*param_2 - *(float *)(DAT_00299cc8 + 0xc)) + fVar5) / fVar5);
  iVar7 = (int)(((param_2[1] - *(float *)(DAT_00299cc8 + 0x10)) + fVar5) / fVar5);
  iVar1 = iVar6 + -2;
  iVar3 = iVar7 + -2;
  if (0x7ffffffe < iVar1) {
    iVar1 = 0x7fffffff;
  }
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  iVar2 = *(int *)(DAT_00299cc8 + 0x28) + -1;
  iVar4 = 0x7fffffff;
  if (iVar3 < 0x7fffffff) {
    iVar4 = iVar3;
  }
  iVar3 = *(int *)(DAT_00299cc8 + 0x2c) + -1;
  if (iVar2 < iVar6) {
    iVar6 = iVar2;
  }
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar3 < iVar7) {
    iVar7 = iVar3;
  }
  while (iVar2 <= iVar6) {
    iVar2 = iVar2 + 1;
    for (iVar1 = iVar4; iVar1 <= iVar7; iVar1 = iVar1 + 1) {
      FUN_00104700(param_1);
    }
  }
  return;
}

