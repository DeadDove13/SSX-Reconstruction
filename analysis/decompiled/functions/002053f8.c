/* Ghidra pseudocode. PS2 address: 002053f8. Not validated source. */

void FUN_002053f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  FUN_002054b0();
  FUN_002054e0(param_1,param_2);
  iVar1 = (int)param_1;
  *(undefined8 *)(iVar1 + 0xc) = param_3;
  *(undefined4 *)(iVar1 + 0x18) = param_4;
  *(undefined4 *)(iVar1 + 0x1c) = param_5;
  *(undefined4 *)(iVar1 + 0x20) = param_6;
  *(undefined4 *)(iVar1 + 0x24) = param_7;
  *(undefined4 *)(iVar1 + 0x28) = param_8;
  FUN_002054f0(param_1);
  return;
}

