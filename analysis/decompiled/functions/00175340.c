/* Ghidra pseudocode. PS2 address: 00175340. Not validated source. */

void FUN_00175340(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined **)(iVar2 + 0x40) = &DAT_002b0e90;
  iVar1 = *(int *)(iVar2 + 0xf4);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x170) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x170) + 8),3);
    *(undefined4 *)(iVar2 + 0xf4) = 0;
  }
  thunk_FUN_00177758(iVar2 + 0xbc,2);
  thunk_FUN_00177758(iVar2 + 0x84,2);
  thunk_FUN_00177758(iVar2 + 0x4c,2);
  FUN_001770a8(param_1,param_2);
  return;
}

