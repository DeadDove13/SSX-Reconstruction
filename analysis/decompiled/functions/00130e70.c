/* Ghidra pseudocode. PS2 address: 00130e70. Not validated source. */

void FUN_00130e70(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x2e4) = 0;
  *(undefined4 *)(iVar2 + 0x2e8) = 2;
  FUN_0023bbd0(iVar2 + 0x2ec,0,0x10);
  uVar1 = FUN_001316f0(param_1,0x70);
  *(undefined4 *)(iVar2 + 0x2ec) = uVar1;
  uVar1 = FUN_001316f0(param_1,0x72);
  *(undefined4 *)(iVar2 + 0x2f0) = uVar1;
  return;
}

