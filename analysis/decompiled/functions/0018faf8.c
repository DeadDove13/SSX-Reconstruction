/* Ghidra pseudocode. PS2 address: 0018faf8. Not validated source. */

undefined8
FUN_0018faf8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  FUN_0018dbd0();
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x10) = param_6;
  *(undefined4 *)(iVar1 + 0x14) = param_3;
  *(undefined4 *)(iVar1 + 0x18) = param_4;
  *(undefined4 *)(iVar1 + 0x1c) = param_5;
  *(undefined **)(iVar1 + 0xc) = &DAT_002b48b8;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  return param_1;
}

