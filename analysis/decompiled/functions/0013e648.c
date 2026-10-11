/* Ghidra pseudocode. PS2 address: 0013e648. Not validated source. */

void FUN_0013e648(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(*(int *)(iVar1 + 0x6cf4) + 8);
  if ((iVar2 == 0x34) || (iVar2 == 0x50)) {
    FUN_0010b330(iVar1,3);
    FUN_0010b340(*param_1,2);
    uVar4 = *param_2;
  }
  else if (iVar2 == 0x37) {
    FUN_0010b330(iVar1,5);
    FUN_0010b340(*param_1,2);
    uVar4 = *param_2;
  }
  else {
    uVar4 = *param_2;
  }
  uVar3 = DAT_002c2020;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*param_1 + 0x210) != 0) {
      return;
    }
    iVar1 = *param_1;
  }
  else {
    iVar1 = *param_1;
  }
  *(uint *)(iVar1 + 0x284) = (uVar4 ^ 1) & 1;
  FUN_00107070(uVar3);
  return;
}

