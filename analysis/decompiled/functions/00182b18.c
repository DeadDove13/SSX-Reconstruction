/* Ghidra pseudocode. PS2 address: 00182b18. Not validated source. */

void FUN_00182b18(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x34) = &DAT_002b3358;
  FUN_00246d48(*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x3c));
  FUN_00182950(param_1,param_2);
  return;
}

