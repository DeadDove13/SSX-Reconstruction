/* Ghidra pseudocode. PS2 address: 00182840. Not validated source. */

undefined8 FUN_00182840(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined **)(iVar1 + 0x34) = &DAT_002b32d8;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  return param_1;
}

