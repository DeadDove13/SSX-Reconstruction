/* Ghidra pseudocode. PS2 address: 00233cc8. Not validated source. */

void FUN_00233cc8(int *param_1,uint param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  
  uVar7 = param_2 & 3;
  piVar9 = (int *)(param_1[3] + param_1[1] * 4);
  piVar8 = (int *)(param_1[3] + *param_1 * 4);
  if (uVar7 != 0) {
    iVar10 = 0;
    if (uVar7 != 0) {
      do {
        piVar2 = param_3 + iVar10;
        piVar9 = piVar9 + -1;
        piVar8 = piVar8 + -1;
        piVar6 = param_4 + iVar10;
        iVar10 = iVar10 + 1;
        iVar3 = (*piVar2 * param_1[5] >> 7) + *piVar9;
        *piVar8 = (iVar3 * param_1[4] >> 7) + *piVar2;
        *piVar6 = iVar3;
        iVar3 = param_1[8] * *piVar8 + param_1[6] * param_1[7] >> 7;
        param_1[6] = iVar3;
        *piVar8 = iVar3;
      } while (iVar10 < (int)uVar7);
    }
    param_4 = param_4 + uVar7;
    param_2 = param_2 - uVar7;
    param_3 = param_3 + uVar7;
  }
  iVar10 = param_1[6];
  iVar3 = 0;
  if (0 < (int)param_2) {
    do {
      iVar1 = *param_3;
      iVar3 = iVar3 + 4;
      iVar5 = param_1[4];
      iVar4 = (iVar1 * param_1[5] >> 7) + piVar9[-1];
      *param_4 = iVar4;
      iVar4 = param_1[8] * ((iVar4 * iVar5 >> 7) + iVar1) + iVar10 * param_1[7] >> 7;
      piVar8[-1] = iVar4;
      iVar10 = param_3[1];
      iVar1 = param_1[4];
      iVar5 = (iVar10 * param_1[5] >> 7) + piVar9[-2];
      param_4[1] = iVar5;
      iVar4 = param_1[8] * ((iVar5 * iVar1 >> 7) + iVar10) + iVar4 * param_1[7] >> 7;
      piVar8[-2] = iVar4;
      iVar10 = param_3[2];
      iVar1 = param_1[4];
      iVar5 = (iVar10 * param_1[5] >> 7) + piVar9[-3];
      param_4[2] = iVar5;
      iVar4 = param_1[8] * ((iVar5 * iVar1 >> 7) + iVar10) + iVar4 * param_1[7] >> 7;
      piVar8[-3] = iVar4;
      iVar10 = param_3[3];
      param_3 = param_3 + 4;
      iVar1 = param_1[4];
      iVar5 = (iVar10 * param_1[5] >> 7) + piVar9[-4];
      param_4[3] = iVar5;
      param_4 = param_4 + 4;
      iVar10 = param_1[8] * ((iVar5 * iVar1 >> 7) + iVar10) + iVar4 * param_1[7] >> 7;
      piVar8[-4] = iVar10;
      piVar9 = piVar9 + -4;
      piVar8 = piVar8 + -4;
    } while (iVar3 < (int)param_2);
  }
  param_1[6] = iVar10;
  return;
}

