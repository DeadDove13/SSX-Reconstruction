/* Ghidra pseudocode. PS2 address: 0024d960. Not validated source. */

void FUN_0024d960(int *param_1,int *param_2,long param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_4;
  iVar2 = (int)param_3;
  iVar5 = iVar2 >> 1;
  iVar3 = iVar6 >> 1;
  if (DAT_002a546c != 3) {
    if (0 < param_3) {
      iVar5 = iVar2 + 1 >> 1;
    }
    *param_1 = iVar5 + *param_2;
    if (0 < param_4) {
      iVar3 = iVar6 + 1 >> 1;
    }
    iVar3 = iVar3 + param_2[1];
    bVar1 = DAT_002a546c != 1;
    param_1[1] = iVar3;
    if (bVar1) {
      param_1[1] = iVar3 + 1;
      return;
    }
    param_1[1] = iVar3 + -1;
    return;
  }
  if (DAT_002a5470 == 0) {
    iVar4 = iVar2 * 3;
    if (0 < param_3) {
      iVar4 = iVar4 + 1;
    }
    *param_1 = (iVar4 >> 1) + *param_2;
    iVar4 = iVar6 * 3;
    if (0 < param_4) {
      iVar4 = iVar4 + 1;
    }
    param_1[1] = (iVar4 >> 1) + param_2[1] + -1;
    if (0 < param_3) {
      iVar5 = iVar2 + 1 >> 1;
    }
    param_1[2] = iVar5 + *param_2;
    iVar2 = param_2[1];
    if (param_4 < 1) goto LAB_0024da00;
    iVar6 = iVar6 + 1;
  }
  else {
    if (0 < param_3) {
      iVar5 = iVar2 + 1 >> 1;
    }
    *param_1 = iVar5 + *param_2;
    if (0 < param_4) {
      iVar3 = iVar6 + 1 >> 1;
    }
    param_1[1] = iVar3 + param_2[1] + -1;
    iVar2 = iVar2 * 3;
    if (0 < param_3) {
      iVar2 = iVar2 + 1;
    }
    param_1[2] = (iVar2 >> 1) + *param_2;
    iVar6 = iVar6 * 3;
    iVar2 = param_2[1];
    if (0 < param_4) {
      iVar6 = iVar6 + 1;
    }
  }
  iVar3 = iVar6 >> 1;
LAB_0024da00:
  param_1[3] = iVar3 + iVar2 + 1;
  return;
}

