/* Ghidra pseudocode. PS2 address: 002360e8. Not validated source. */

void FUN_002360e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)param_3;
  lVar2 = FUN_00239028(*(undefined4 *)(iVar7 + 0x1c));
  iVar3 = (int)lVar2;
  iVar4 = *(int *)(iVar7 + 0x2c) + iVar3;
  *(int *)(iVar7 + 0x2c) = iVar4;
  *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + iVar3;
  if ((lVar2 < 0x8000) || (*(int *)(iVar7 + 0x10) != 0)) {
    uVar1 = FUN_00239288(*(undefined4 *)(iVar7 + 0x20),99,param_3);
    *(undefined4 *)(iVar7 + 0x1c) = uVar1;
    if (*(int *)(iVar7 + 0x1c) != 0) {
      FUN_00238ea0(*(undefined4 *)(iVar7 + 0x1c),0x235778);
    }
  }
  else {
    iVar6 = *(int *)(iVar7 + 0x28) - iVar3;
    iVar3 = *(int *)(iVar7 + 0x24) + iVar3;
    iVar5 = 0x8000;
    if (iVar6 < 0x8001) {
      iVar5 = iVar6;
    }
    *(int *)(iVar7 + 0x28) = iVar6;
    *(int *)(iVar7 + 0x24) = iVar3;
    uVar1 = FUN_00239330(*(undefined4 *)(iVar7 + 0x20),iVar3,iVar4,iVar5,99,param_3);
    *(undefined4 *)(iVar7 + 0x1c) = uVar1;
    if (*(int *)(iVar7 + 0x1c) != 0) {
      FUN_00238ea0(*(undefined4 *)(iVar7 + 0x1c),0x2360e8);
    }
  }
  return;
}

