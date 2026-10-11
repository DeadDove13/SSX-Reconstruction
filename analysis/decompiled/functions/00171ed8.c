/* Ghidra pseudocode. PS2 address: 00171ed8. Not validated source. */

bool FUN_00171ed8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0016de00(param_1,*(undefined4 *)(*(int *)(param_1 + 0xb3c) + 0x46c));
  return (*(uint *)(iVar1 + 0x98) & 8) != 0;
}

