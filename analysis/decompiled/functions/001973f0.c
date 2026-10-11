/* Ghidra pseudocode. PS2 address: 001973f0. Not validated source. */

void FUN_001973f0(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  iVar4 = 0x3fc - ((*(int *)(iVar3 + 0xc) + -4) - *(int *)(iVar3 + 4));
  if (iVar4 == 0) {
    iVar4 = 0x3fc;
    uVar1 = FUN_00197248(param_1);
    **(undefined4 **)(iVar3 + 4) = uVar1;
    iVar2 = **(int **)(iVar3 + 4);
    *(int *)(iVar3 + 4) = iVar2;
    *(int *)(iVar3 + 0xc) = iVar2 + 4;
  }
  iVar2 = *(int *)(iVar3 + 0xc);
  if (iVar4 < param_3) {
    FUN_0023bac0(iVar2,param_2,iVar4);
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + iVar4;
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + iVar4;
    param_2 = param_2 + iVar4;
    for (param_3 = param_3 - iVar4; 0x3fb < param_3; param_3 = param_3 + -0x3fc) {
      uVar1 = FUN_00197248(param_1);
      **(undefined4 **)(iVar3 + 4) = uVar1;
      iVar4 = **(int **)(iVar3 + 4) + 4;
      *(int *)(iVar3 + 4) = **(int **)(iVar3 + 4);
      *(int *)(iVar3 + 0xc) = iVar4;
      FUN_0023bac0(iVar4,param_2,0x3fc);
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 0x3fc;
      *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 0x3fc;
      param_2 = param_2 + 0x3fc;
    }
    if (param_3 < 1) {
      return;
    }
    uVar1 = FUN_00197248(param_1);
    **(undefined4 **)(iVar3 + 4) = uVar1;
    iVar2 = **(int **)(iVar3 + 4) + 4;
    *(int *)(iVar3 + 4) = **(int **)(iVar3 + 4);
    *(int *)(iVar3 + 0xc) = iVar2;
  }
  FUN_0023bac0(iVar2,param_2,param_3);
  *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + param_3;
  *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + param_3;
  return;
}

