/* Ghidra pseudocode. PS2 address: 00154a38. Not validated source. */

int FUN_00154a38(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00156b78();
  return *(int *)(iVar1 * 0x50 + param_1 + 0x1524) + 0x18;
}

