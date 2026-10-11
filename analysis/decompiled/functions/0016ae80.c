/* Ghidra pseudocode. PS2 address: 0016ae80. Not validated source. */

void FUN_0016ae80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x170) = &DAT_002b0358;
  FUN_001d98b8();
  FUN_0016c598(*(undefined4 *)(iVar1 + 0x178),*(undefined4 *)(iVar1 + 0x18c));
  FUN_001d8780(param_1,param_2);
  return;
}

