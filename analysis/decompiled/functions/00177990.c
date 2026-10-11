/* Ghidra pseudocode. PS2 address: 00177990. Not validated source. */

void FUN_00177990(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  *(undefined **)((int)param_1 + 4) = &DAT_002b1080;
  iVar1 = *(int *)((int)param_1 + 0xb50);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x170) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x170) + 8),3);
  }
  FUN_0016c5d0(param_1,param_2);
  return;
}

