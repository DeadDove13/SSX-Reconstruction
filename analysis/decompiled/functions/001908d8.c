/* Ghidra pseudocode. PS2 address: 001908d8. Not validated source. */

undefined8 FUN_001908d8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_0018dbd0(param_1,0xffffffffffffffff);
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  *(undefined4 *)(iVar1 + 0x14) = param_3;
  *(undefined **)(iVar1 + 0xc) = &DAT_002b47b8;
  return param_1;
}

