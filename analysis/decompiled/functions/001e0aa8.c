/* Ghidra pseudocode. PS2 address: 001e0aa8. Not validated source. */

int FUN_001e0aa8(int param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 * 0xf0;
  if ((param_2 < 0xd) && (*(int *)(param_1 + iVar1 + 0x10) != 0)) {
    return iVar1 + param_1 + 0x20;
  }
  return 0;
}

