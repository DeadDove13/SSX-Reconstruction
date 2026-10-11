/* Ghidra pseudocode. PS2 address: 00222e98. Not validated source. */

void FUN_00222e98(undefined8 param_1,float *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  
  FUN_00223ab0();
  fVar11 = (float)*(int *)(DAT_00299cc8 + 0x24);
  iVar3 = (int)(((*param_2 - *(float *)(DAT_00299cc8 + 0xc)) + fVar11) / fVar11) + -1;
  iVar4 = iVar3 + param_3;
  iVar1 = (int)(((param_2[1] - *(float *)(DAT_00299cc8 + 0x10)) + fVar11) / fVar11) + -1;
  iVar3 = iVar3 - param_3;
  iVar6 = iVar1 + param_3;
  if (0x7ffffffe < iVar3) {
    iVar3 = 0x7fffffff;
  }
  iVar1 = iVar1 - param_3;
  iVar10 = 0x7fffffff;
  if (iVar1 < 0x7fffffff) {
    iVar10 = iVar1;
  }
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  iVar1 = *(int *)(DAT_00299cc8 + 0x28) + -1;
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  iVar5 = *(int *)(DAT_00299cc8 + 0x2c) + -1;
  if (iVar1 < iVar4) {
    iVar4 = iVar1;
  }
  iVar1 = 0;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  if (iVar5 < iVar6) {
    iVar6 = iVar5;
  }
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  while (iVar3 = iVar1, iVar3 <= iVar4) {
    iVar1 = iVar3 + 1;
    if (iVar10 <= iVar6) {
      piVar9 = (int *)param_1;
      iVar5 = *piVar9;
      iVar8 = iVar10;
      while( true ) {
        iVar7 = iVar8 * *(int *)(iVar5 + 0x28) + iVar3;
        lVar2 = FUN_0021f730(param_1,iVar7);
        iVar5 = 0;
        if (lVar2 == 0) {
          iVar5 = *(int *)(iVar7 * 8 + piVar9[3]);
        }
        if (iVar5 != 0) {
          FUN_00223aa8(param_1);
        }
        iVar8 = iVar8 + 1;
        if (iVar6 < iVar8) break;
        iVar5 = *piVar9;
      }
    }
  }
  return;
}

