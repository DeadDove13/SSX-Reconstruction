/* Ghidra pseudocode. PS2 address: 001e70d0. Not validated source. */

void FUN_001e70d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 8) = &DAT_002b7e88;
  if (*(int *)(iVar1 + 0x80) != 0) {
    FUN_00103710();
  }
  FUN_001e7f28(iVar1 + 100,2);
  FUN_00186140(param_1,param_2);
  return;
}

