/* Ghidra pseudocode. PS2 address: 0021dd40. Not validated source. */

int FUN_0021dd40(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = 2000000000;
  iVar4 = 0;
  iVar5 = 0;
  if (0 < *param_1) {
    iVar1 = ((int *)param_1[2])[1];
    iVar6 = 0;
    piVar2 = (int *)param_1[2];
    while (iVar1 = iVar1 + *piVar2, iVar5 = iVar6, 0 < iVar1) {
      iVar5 = iVar4;
      if (iVar3 <= iVar1) {
        iVar1 = iVar3;
        iVar5 = iVar6;
      }
      iVar3 = iVar1;
      iVar4 = iVar4 + 1;
      if (*param_1 <= iVar4) break;
      iVar1 = piVar2[3];
      iVar6 = iVar5;
      piVar2 = piVar2 + 2;
    }
  }
  iVar3 = param_1[3];
  if (*param_1 <= iVar4) {
    iVar4 = iVar5;
  }
  *(undefined4 *)(iVar4 * 8 + param_1[2]) = 2;
  return iVar3 + iVar4 * param_1[1];
}

