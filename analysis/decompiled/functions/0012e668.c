/* Ghidra pseudocode. PS2 address: 0012e668. Not validated source. */

void FUN_0012e668(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = DAT_002859e4;
  *(undefined **)((int)param_1 + 8) = &DAT_002a9090;
  FUN_00132160(*(undefined4 *)(iVar1 + 0x28),(int)param_1 + 0x50);
  FUN_001221d8(param_1,param_2);
  return;
}

