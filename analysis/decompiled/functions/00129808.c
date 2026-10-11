/* Ghidra pseudocode. PS2 address: 00129808. Not validated source. */

undefined8 FUN_00129808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_00122180();
  *(undefined **)(iVar1 + 8) = &DAT_002a97d0;
  FUN_00129150(iVar1 + 0x4c);
  FUN_001978a0(param_3,iVar1 + 0x2c,0x20);
  FUN_00129170(iVar1 + 0x4c,*(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x40));
  return param_1;
}

