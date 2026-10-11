/* Ghidra pseudocode. PS2 address: 00103680. Not validated source. */

void FUN_00103680(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 8) = &DAT_002a6e80;
  FUN_001e9510(iVar1 + 0x128,2);
  FUN_00219350(iVar1 + 0x114,2);
  FUN_00219350(iVar1 + 0x100,2);
  FUN_00185f70(param_1,param_2);
  return;
}

