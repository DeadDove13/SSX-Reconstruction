/* Ghidra pseudocode. PS2 address: 002361d8. Not validated source. */

void FUN_002361d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_3;
  uVar2 = FUN_00239028(*(undefined4 *)(iVar3 + 0x1c));
  if (*(int *)(iVar3 + 0x10) == 0) {
    uVar1 = *(undefined4 *)(iVar3 + 0x28);
    *(undefined4 *)(iVar3 + 0x28) = 0x7fffffff;
    uVar2 = FUN_0023a448(0x2be428,uVar2,uVar1);
    *(int *)(iVar3 + 0x14) = (int)uVar2;
    *(int *)(iVar3 + 0x2c) = (int)uVar2;
    uVar1 = FUN_00239330(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x24),uVar2,0x8000,99
                         ,param_3);
    *(undefined4 *)(iVar3 + 0x1c) = uVar1;
    if (*(int *)(iVar3 + 0x1c) != 0) {
      FUN_00238ea0(*(undefined4 *)(iVar3 + 0x1c),0x2360e8);
    }
  }
  else {
    uVar1 = FUN_00239288(*(undefined4 *)(iVar3 + 0x20),99,param_3);
    *(undefined4 *)(iVar3 + 0x1c) = uVar1;
    if (*(int *)(iVar3 + 0x1c) != 0) {
      FUN_00238ea0(*(undefined4 *)(iVar3 + 0x1c),0x235778);
    }
  }
  return;
}

