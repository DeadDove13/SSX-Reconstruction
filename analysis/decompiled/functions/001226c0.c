/* Ghidra pseudocode. PS2 address: 001226c0. Not validated source. */

undefined8 FUN_001226c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  
  FUN_00122128(param_1,0xd,5,param_2);
  *(undefined **)((int)param_1 + 8) = &DAT_002a8bb0;
  iVar1 = *(int *)((int)param_1 + 0x28);
  uVar2 = *(uint *)(iVar1 + 0xe8) & 0xffffff0d;
  *(uint *)(iVar1 + 0xe8) = uVar2 | 4;
  if (param_3 != 0) {
    *(uint *)(iVar1 + 0xe8) = uVar2 | 0x804;
  }
  return param_1;
}

