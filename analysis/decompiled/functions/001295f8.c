/* Ghidra pseudocode. PS2 address: 001295f8. Not validated source. */

void FUN_001295f8(int *param_1)

{
  int iVar1;
  
  FUN_001cb238(0x2913b0,5,0);
  iVar1 = *param_1;
  FUN_001be6d8(0x295e90,*(undefined4 *)(*(int *)(iVar1 + 0xcc) * 8 + DAT_00299ce0),DAT_00299ce8,
               iVar1,iVar1 + 0x40,0,0);
  FUN_001cb238(0x2913b0,0,0);
  return;
}

