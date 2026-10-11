/* Ghidra pseudocode. PS2 address: 001900f8. Not validated source. */

undefined8
FUN_001900f8(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  FUN_0018dbd0();
  iVar1 = (int)param_3;
  *(undefined4 *)(iVar1 + 0x10) = param_6;
  *(undefined4 *)(iVar1 + 0x14) = param_5;
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  *(undefined4 *)(iVar1 + 0x1c) = param_2;
  *(undefined **)(iVar1 + 0xc) = &DAT_002b4838;
  *(undefined4 *)(iVar1 + 0x20) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  return param_3;
}

