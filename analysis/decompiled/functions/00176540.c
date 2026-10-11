/* Ghidra pseudocode. PS2 address: 00176540. Not validated source. */

void FUN_00176540(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x40) = &DAT_002b0de8;
  FUN_00177410(iVar1 + 0x194,2);
  thunk_FUN_00177758(iVar1 + 0x15c,2);
  thunk_FUN_00177758(iVar1 + 0x124,2);
  thunk_FUN_00177758(iVar1 + 0xec,2);
  thunk_FUN_00177758(iVar1 + 0xb4,2);
  thunk_FUN_00177758(iVar1 + 0x7c,2);
  thunk_FUN_00177758(iVar1 + 0x44,2);
  FUN_001770a8(param_1,param_2);
  return;
}

