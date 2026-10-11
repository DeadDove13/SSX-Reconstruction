/* Ghidra pseudocode. PS2 address: 001283f8. Not validated source. */

void FUN_001283f8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = DAT_002859e4;
  *(undefined **)((int)param_1 + 8) = &DAT_002a99b0;
  FUN_00132160(*(undefined4 *)(iVar1 + 0x28),(int)param_1 + 0x70);
  FUN_001221d8(param_1,param_2);
  return;
}

