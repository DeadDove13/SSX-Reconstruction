/* Ghidra pseudocode. PS2 address: 00181e38. Not validated source. */

void FUN_00181e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00181d28(param_1);
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + *(int *)(iVar2 + 8) * 8 + 0x14) = uVar1;
  uVar1 = FUN_00181d28(param_1,param_3);
  *(undefined4 *)(iVar2 + *(int *)(iVar2 + 8) * 8 + 0x18) = uVar1;
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  return;
}

