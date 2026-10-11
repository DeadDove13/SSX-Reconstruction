/* Ghidra pseudocode. PS2 address: 002357a8. Not validated source. */

void FUN_002357a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  lVar2 = FUN_00239028(*(undefined4 *)(iVar4 + 0x1c));
  *(int *)(iVar4 + 0x20) = (int)lVar2;
  if (lVar2 == 0) {
    FUN_002356e0(param_3);
    return;
  }
  if (*(int *)(iVar4 + 0x10) == 0) {
    if (*(int *)(iVar4 + 0x14) == 0) {
      iVar3 = 0x8000;
      if (*(int *)(iVar4 + 0x28) < 0x8001) {
        iVar3 = *(int *)(iVar4 + 0x28);
      }
      uVar1 = FUN_00239330(lVar2,*(undefined4 *)(iVar4 + 0x24),*(undefined4 *)(iVar4 + 0x2c),iVar3,
                           99,param_3);
      *(undefined4 *)(iVar4 + 0x1c) = uVar1;
      if (*(int *)(iVar4 + 0x1c) != 0) {
        FUN_00238ea0(*(undefined4 *)(iVar4 + 0x1c),0x2360e8);
      }
    }
    else {
      uVar1 = FUN_002394c8(lVar2,99,param_3);
      *(undefined4 *)(iVar4 + 0x1c) = uVar1;
      if (*(int *)(iVar4 + 0x1c) != 0) {
        FUN_00238ea0(*(undefined4 *)(iVar4 + 0x1c),0x2361d8);
      }
    }
  }
  else {
    uVar1 = FUN_00239288(lVar2,99,param_3);
    *(undefined4 *)(iVar4 + 0x1c) = uVar1;
    if (*(int *)(iVar4 + 0x1c) != 0) {
      FUN_00238ea0(*(undefined4 *)(iVar4 + 0x1c),0x235778);
    }
  }
  return;
}

