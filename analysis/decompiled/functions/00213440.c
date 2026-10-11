/* Ghidra pseudocode. PS2 address: 00213440. Not validated source. */

int FUN_00213440(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = param_1[5] + param_1[4];
  iVar6 = 0;
  if ((uVar2 < (uint)param_1[5]) || (uVar2 < (uint)param_1[4])) {
    iVar6 = 1;
    uVar4 = param_1[3];
  }
  else {
    uVar4 = param_1[3];
  }
  uVar1 = param_1[2];
  param_1[4] = uVar2;
  uVar3 = uVar2 + uVar4 + iVar6;
  uVar2 = param_1[1];
  param_1[3] = uVar3;
  uVar4 = uVar3 + uVar1 + (uint)(uVar3 < uVar4);
  param_1[2] = uVar4;
  uVar4 = uVar4 + uVar2 + (uint)(uVar4 < uVar1);
  iVar6 = param_1[5];
  param_1[1] = uVar4;
  iVar5 = uVar4 + *param_1 + (uint)(uVar4 < uVar2);
  param_1[5] = iVar6 + 1;
  *param_1 = iVar5;
  if ((((iVar6 + 1 == 0) && (iVar6 = param_1[4], param_1[4] = iVar6 + 1, iVar6 + 1 == 0)) &&
      (iVar6 = param_1[3], param_1[3] = iVar6 + 1, iVar6 + 1 == 0)) &&
     ((iVar6 = param_1[2], param_1[2] = iVar6 + 1, iVar6 + 1 == 0 &&
      (iVar6 = param_1[1], param_1[1] = iVar6 + 1, iVar6 + 1 == 0)))) {
    iVar5 = iVar5 + 1;
    *param_1 = iVar5;
  }
  return iVar5;
}

