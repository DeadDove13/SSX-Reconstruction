/* Ghidra pseudocode. PS2 address: 00258dd0. Not validated source. */

void FUN_00258dd0(int *param_1,int *param_2,uint *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_3;
  uVar5 = *param_4;
  iVar3 = *param_1;
  while (iVar3 != 0) {
    if (param_1[1] == 0) {
      iVar3 = *param_1;
    }
    else if (param_1[2] == 0) {
      iVar3 = *param_1;
    }
    else {
      iVar3 = param_2[1];
      *(int **)(iVar3 * 4 + *param_2) = param_1;
      param_2[1] = iVar3 + 1;
      uVar2 = param_1[2];
      if (uVar2 < uVar4) {
        uVar4 = uVar2;
      }
      if (uVar5 < uVar2 + param_1[3]) {
        uVar5 = uVar2 + param_1[3];
      }
      iVar3 = *param_1;
    }
    piVar1 = (int *)((int)param_1 + iVar3 + 4);
    param_1 = (int *)((int)param_1 + iVar3 + 4);
    iVar3 = *piVar1;
  }
  *param_3 = uVar4;
  *param_4 = uVar5;
  return;
}

