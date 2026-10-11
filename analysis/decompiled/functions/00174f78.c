/* Ghidra pseudocode. PS2 address: 00174f78. Not validated source. */

void FUN_00174f78(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x40) = &DAT_002b0e58;
  thunk_FUN_00177758(iVar1 + 0x2ac,2);
  FUN_00177410(iVar1 + 0x220,2);
  FUN_00177410(iVar1 + 0x194,2);
  FUN_00177410(iVar1 + 0x108,2);
  FUN_00177410(iVar1 + 0x7c,2);
  thunk_FUN_00177758(iVar1 + 0x44,2);
  FUN_001770a8(param_1,param_2);
  return;
}

