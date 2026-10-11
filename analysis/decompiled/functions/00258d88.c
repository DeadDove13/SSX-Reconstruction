/* Ghidra pseudocode. PS2 address: 00258d88. Not validated source. */

int FUN_00258d88(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*param_1 != 0) {
    iVar3 = param_1[1];
    iVar4 = *param_1;
    while( true ) {
      if ((iVar3 != 0) && (param_1[2] != 0)) {
        iVar5 = iVar5 + 1;
      }
      iVar1 = *(int *)((int)param_1 + iVar4 + 4);
      iVar2 = iVar4 + 4;
      if (iVar1 == 0) break;
      iVar3 = *(int *)((int)param_1 + iVar4 + 8);
      iVar4 = iVar1;
      param_1 = (int *)((int)param_1 + iVar2);
    }
  }
  return iVar5;
}

