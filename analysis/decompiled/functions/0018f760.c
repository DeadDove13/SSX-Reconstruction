/* Ghidra pseudocode. PS2 address: 0018f760. Not validated source. */

undefined8 FUN_0018f760(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_0018dbd0();
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x10) = param_3;
  *(undefined4 *)(iVar1 + 0x18) = param_4;
  *(undefined **)(iVar1 + 0xc) = &DAT_002b4978;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return param_1;
}

