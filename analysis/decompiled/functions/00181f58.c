/* Ghidra pseudocode. PS2 address: 00181f58. Not validated source. */

void FUN_00181f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  uVar2 = FUN_00181d28(param_1);
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + *(int *)(iVar4 + 0x10) * 8 + 0x134) = uVar2;
  lVar3 = FUN_00181d28(param_1,param_3);
  iVar1 = *(int *)(iVar4 + 0x10);
  *(int *)(iVar4 + 0x10) = iVar1 + 1;
  *(uint *)(iVar4 + iVar1 * 8 + 0x138) = (uint)(lVar3 != 0);
  return;
}

