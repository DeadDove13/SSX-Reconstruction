/* Ghidra pseudocode. PS2 address: 00152fc8. Not validated source. */

void FUN_00152fc8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_001fabc8(*(undefined4 *)(iVar1 + 0x714),DAT_002c56e8);
  FUN_001fac48(*(undefined4 *)(iVar1 + 0x718),DAT_002c56e8);
  FUN_001faca0(*(undefined4 *)(iVar1 + 0x71c),DAT_002c56e8);
  FUN_001fad00(*(undefined4 *)(iVar1 + 0x724),DAT_002c56e8);
  *(undefined4 *)(iVar1 + 0x1664) = 0;
  FUN_00156fe0(param_1);
  return;
}

