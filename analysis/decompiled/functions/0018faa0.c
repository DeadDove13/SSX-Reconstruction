/* Ghidra pseudocode. PS2 address: 0018faa0. Not validated source. */

undefined8 FUN_0018faa0(undefined8 param_1)

{
  int iVar1;
  
  FUN_0018dbd0();
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined **)(iVar1 + 0xc) = &DAT_002b48b8;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  return param_1;
}

