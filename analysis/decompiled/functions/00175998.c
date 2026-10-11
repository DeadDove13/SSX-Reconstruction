/* Ghidra pseudocode. PS2 address: 00175998. Not validated source. */

void FUN_00175998(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x40) = &DAT_002b0e20;
  FUN_0016eb08(*(undefined4 *)(iVar1 + 0x10),0x16b);
  FUN_0016eb08(*(undefined4 *)(iVar1 + 0x10),0x16a);
  FUN_0016eb08(*(undefined4 *)(iVar1 + 0x10),0x34c);
  FUN_0016eb08(*(undefined4 *)(iVar1 + 0x10),0x34d);
  FUN_0016ce58(*(undefined4 *)(iVar1 + 0x10),0);
  FUN_0016eae0(*(undefined4 *)(iVar1 + 0x10),0x319);
  FUN_0016eae0(*(undefined4 *)(iVar1 + 0x10),0x318);
  FUN_0016eae0(*(undefined4 *)(iVar1 + 0x10),0x170);
  FUN_0016eb08(*(undefined4 *)(iVar1 + 0x10),0x164);
  thunk_FUN_00177758(iVar1 + 0xec,2);
  thunk_FUN_00177758(iVar1 + 0xb4,2);
  thunk_FUN_00177758(iVar1 + 0x7c,2);
  thunk_FUN_00177758(iVar1 + 0x44,2);
  FUN_001770a8(param_1,param_2);
  return;
}

