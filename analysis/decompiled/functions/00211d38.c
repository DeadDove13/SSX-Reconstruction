/* Ghidra pseudocode. PS2 address: 00211d38. Not validated source. */

void FUN_00211d38(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  FUN_0023bbd0(iVar1 + 0x840,0,0x40);
  FUN_0023bbd0(iVar1 + 0x170,0,0x6c0);
  FUN_0023bbd0(iVar1 + 0x880,0,0x400);
  FUN_00211d90(param_1);
  return;
}

