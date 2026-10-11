/* Ghidra pseudocode. PS2 address: 0012d1a0. Not validated source. */

undefined8 FUN_0012d1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1;
  iVar2 = iVar1 + 0x7c;
  FUN_00128800(iVar1 + 0x18);
  *(undefined **)(iVar1 + 0x20) = &DAT_002a96e8;
  FUN_00129150(iVar2);
  FUN_001978a0(param_3,param_1,0x18);
  FUN_00129170(iVar2,*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x10));
  FUN_00129308(iVar2,iVar1 + 0xb0,iVar1 + 0xac);
  return param_1;
}

