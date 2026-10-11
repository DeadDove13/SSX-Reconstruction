/* Ghidra pseudocode. PS2 address: 0017e6a8. Not validated source. */

void FUN_0017e6a8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x40) = &DAT_002b1448;
  thunk_FUN_00177758(iVar1 + 0x128,2);
  thunk_FUN_00177758(iVar1 + 0xf0,2);
  thunk_FUN_00177758(iVar1 + 0xb8,2);
  thunk_FUN_00177758(iVar1 + 0x80,2);
  thunk_FUN_00177758(iVar1 + 0x48,2);
  FUN_001770a8(param_1,param_2);
  return;
}

