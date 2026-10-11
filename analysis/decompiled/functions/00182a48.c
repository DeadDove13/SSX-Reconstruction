/* Ghidra pseudocode. PS2 address: 00182a48. Not validated source. */

undefined8
FUN_00182a48(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  
  FUN_00182840();
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x34) = &DAT_002b3358;
  *(undefined4 *)(iVar1 + 0x38) = param_2;
  *(undefined4 *)(iVar1 + 0x3c) = param_3;
  *(undefined4 *)(iVar1 + 0x54) = param_4;
  *(undefined4 *)(iVar1 + 0x58) = param_5;
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  *(undefined4 *)(iVar1 + 0x14) = 0x47000000;
  *(undefined4 *)(iVar1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 1;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x84) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0x47000000;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  return param_1;
}

