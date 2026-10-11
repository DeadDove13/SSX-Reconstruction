/* Ghidra pseudocode. PS2 address: 001978a0. Not validated source. */

void FUN_001978a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x3fc - ((*(int *)(param_1 + 0x10) + -4) - (int)*(int **)(param_1 + 8));
  if (iVar2 == 0) {
    iVar1 = **(int **)(param_1 + 8);
    iVar2 = 0x3fc;
    *(int *)(param_1 + 8) = iVar1;
    *(int *)(param_1 + 0x10) = iVar1 + 4;
  }
  if (iVar2 < param_3) {
    param_3 = param_3 - iVar2;
    FUN_0023bac0(param_2,*(undefined4 *)(param_1 + 0x10),iVar2);
    param_2 = param_2 + iVar2;
    while( true ) {
      iVar2 = **(int **)(param_1 + 8);
      *(int *)(param_1 + 8) = iVar2;
      *(int *)(param_1 + 0x10) = iVar2 + 4;
      if (param_3 < 0x3fc) break;
      param_3 = param_3 + -0x3fc;
      FUN_0023bac0(param_2,*(undefined4 *)(param_1 + 0x10),0x3fc);
      param_2 = param_2 + 0x3fc;
    }
    if (param_3 < 1) {
      return;
    }
  }
  FUN_0023bac0(param_2,*(undefined4 *)(param_1 + 0x10),param_3);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}

