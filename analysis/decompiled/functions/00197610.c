/* Ghidra pseudocode. PS2 address: 00197610. Not validated source. */

void FUN_00197610(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x3fc - ((*(int *)(param_1 + 0xc) + -4) - (int)*(int **)(param_1 + 4));
  if (iVar2 == 0) {
    iVar2 = **(int **)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar2;
    *(int *)(param_1 + 0xc) = iVar2 + 4;
    iVar2 = 0x3fc;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar2 < param_3) {
    FUN_0023bac0(iVar1,param_2,iVar2);
    param_2 = param_2 + iVar2;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar2;
    for (param_3 = param_3 - iVar2; 0x3fb < param_3; param_3 = param_3 + -0x3fc) {
      iVar2 = **(int **)(param_1 + 4) + 4;
      *(int *)(param_1 + 4) = **(int **)(param_1 + 4);
      *(int *)(param_1 + 0xc) = iVar2;
      FUN_0023bac0(iVar2,param_2,0x3fc);
      param_2 = param_2 + 0x3fc;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 0x3fc;
    }
    if (param_3 < 1) {
      return;
    }
    iVar1 = **(int **)(param_1 + 4) + 4;
    *(int *)(param_1 + 4) = **(int **)(param_1 + 4);
    *(int *)(param_1 + 0xc) = iVar1;
  }
  FUN_0023bac0(iVar1,param_2,param_3);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  return;
}

