/* Ghidra pseudocode. PS2 address: 0019efc0. Not validated source. */

undefined8 FUN_0019efc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_0019cef8(iVar1 + 0x18);
  *(undefined **)(iVar1 + 0x50) = &DAT_002b52b0;
  FUN_00129150(iVar1 + 0x80);
  FUN_001978a0(param_3,param_1,0x18);
  FUN_00129170(iVar1 + 0x80,*(undefined4 *)(iVar1 + 0x70),*(undefined4 *)(iVar1 + 0x10));
  return param_1;
}

