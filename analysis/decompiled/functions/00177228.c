/* Ghidra pseudocode. PS2 address: 00177228. Not validated source. */

void FUN_00177228(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x2c) = &DAT_002b0f00;
  *(undefined **)(iVar1 + 0x24) = &DAT_002b0f10;
  FUN_00170ad8(iVar1 + 0x28,0);
  FUN_00177758(param_1,param_2);
  return;
}

