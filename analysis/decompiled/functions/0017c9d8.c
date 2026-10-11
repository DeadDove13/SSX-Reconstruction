/* Ghidra pseudocode. PS2 address: 0017c9d8. Not validated source. */

void FUN_0017c9d8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined **)(iVar2 + 4) = &DAT_002b14b8;
  iVar1 = *(int *)(iVar2 + 0xb90);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x284) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x284) + 8),3);
  }
  iVar1 = *(int *)(iVar2 + 0xbcc);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x170) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x170) + 8),3);
  }
  iVar1 = *(int *)(iVar2 + 0xbc8);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x40) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x40) + 8),3);
  }
  thunk_FUN_00177758(iVar2 + 0xbd4,2);
  FUN_0017e8d0(param_1,param_2);
  return;
}

