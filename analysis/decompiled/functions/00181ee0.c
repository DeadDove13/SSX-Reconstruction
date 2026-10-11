/* Ghidra pseudocode. PS2 address: 00181ee0. Not validated source. */

void FUN_00181ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00181d28(param_1);
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + *(int *)(iVar2 + 0xc) * 8 + 0xbc) = uVar1;
  uVar1 = FUN_00181d28(param_1,param_3);
  *(undefined4 *)(iVar2 + *(int *)(iVar2 + 0xc) * 8 + 0xc0) = uVar1;
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  return;
}

