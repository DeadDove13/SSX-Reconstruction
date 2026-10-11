/* Ghidra pseudocode. PS2 address: 0016eb88. Not validated source. */

void FUN_0016eb88(void)

{
  int iVar1;
  
  iVar1 = FUN_0016dd88();
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) & 0xfffffff7;
  return;
}

