/* Ghidra pseudocode. PS2 address: 00197738. Not validated source. */

void FUN_00197738(undefined8 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  iVar5 = 0x3fc - ((*(int *)(iVar6 + 0xc) + -4) - (int)*(int **)(iVar6 + 4));
  bVar2 = iVar5 < param_2;
  if (iVar5 == 0) {
    if (**(int **)(iVar6 + 4) == 0) {
      uVar4 = FUN_00197248(param_1);
      **(undefined4 **)(iVar6 + 4) = uVar4;
      piVar3 = *(int **)(iVar6 + 4);
    }
    else {
      piVar3 = *(int **)(iVar6 + 4);
    }
    iVar5 = 0x3fc;
    iVar1 = *piVar3;
    *(int *)(iVar6 + 4) = iVar1;
    *(int *)(iVar6 + 0xc) = iVar1 + 4;
    bVar2 = 0x3fc < param_2;
  }
  if (bVar2) {
    *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + iVar5;
    *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + iVar5;
    for (param_2 = param_2 - iVar5; 0x3fb < param_2; param_2 = param_2 + -0x3fc) {
      if (**(int **)(iVar6 + 4) == 0) {
        uVar4 = FUN_00197248(param_1);
        **(undefined4 **)(iVar6 + 4) = uVar4;
        piVar3 = *(int **)(iVar6 + 4);
      }
      else {
        piVar3 = *(int **)(iVar6 + 4);
      }
      iVar5 = *piVar3;
      *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 0x3fc;
      *(int *)(iVar6 + 0xc) = iVar5 + 0x400;
      *(int *)(iVar6 + 4) = iVar5;
    }
    if (0 < param_2) {
      if (**(int **)(iVar6 + 4) == 0) {
        uVar4 = FUN_00197248(param_1);
        **(undefined4 **)(iVar6 + 4) = uVar4;
        piVar3 = *(int **)(iVar6 + 4);
      }
      else {
        piVar3 = *(int **)(iVar6 + 4);
      }
      iVar5 = *piVar3;
      *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + param_2;
      *(int *)(iVar6 + 4) = iVar5;
      *(int *)(iVar6 + 0xc) = iVar5 + 4 + param_2;
    }
  }
  else {
    *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + param_2;
    *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + param_2;
  }
  return;
}

