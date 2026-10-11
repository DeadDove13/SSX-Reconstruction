/* Ghidra pseudocode. PS2 address: 00137bc0. Not validated source. */

void FUN_00137bc0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x24) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x38) = 0xffffffff;
  FUN_0023bbd0(iVar1 + 0x4c,0,0xc);
  FUN_00137e78(param_1,0xc);
  return;
}

