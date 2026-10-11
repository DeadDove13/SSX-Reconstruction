/* Ghidra pseudocode. PS2 address: 001913b0. Not validated source. */

undefined8 FUN_001913b0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_0018ddc0();
  *(undefined **)(iVar1 + 0x114) = &DAT_002b4658;
  FUN_0018f938(iVar1 + 0x118,0);
  FUN_0018fa10(iVar1 + 0x130,10);
  FUN_0018f5a0(iVar1 + 0x144,0);
  FUN_0018e4d0(param_1,iVar1 + 0x118,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar1 + 0x130,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar1 + 0x144,0xffffffffffffffff);
  return param_1;
}

