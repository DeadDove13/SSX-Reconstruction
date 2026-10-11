/* Ghidra pseudocode. PS2 address: 0018ddc0. Not validated source. */

undefined8 FUN_0018ddc0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined **)(iVar1 + 0x114) = &DAT_002b4ab8;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x110) = 0;
  return param_1;
}

