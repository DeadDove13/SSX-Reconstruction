/* Ghidra pseudocode. PS2 address: 00193110. Not validated source. */

void FUN_00193110(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  thunk_FUN_0018dbf0(iVar1 + 0x594,2);
  thunk_FUN_0018dbf0(iVar1 + 0x574,2);
  thunk_FUN_0018dbf0(iVar1 + 0x554,2);
  thunk_FUN_0018dbf0(iVar1 + 0x534,2);
  FUN_00193188(param_1,param_2);
  return;
}

