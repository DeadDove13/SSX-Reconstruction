/* Ghidra pseudocode. PS2 address: 0012b4a0. Not validated source. */

undefined8 FUN_0012b4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_00122180();
  *(undefined **)(iVar1 + 8) = &DAT_002a9430;
  FUN_00129150(iVar1 + 0x40);
  FUN_001978a0(param_3,iVar1 + 0x2c,0x14);
  FUN_00129170(iVar1 + 0x40,*(undefined4 *)(iVar1 + 0x28),0xffffffffffffffff);
  return param_1;
}

