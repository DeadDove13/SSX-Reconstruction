/* Ghidra pseudocode. PS2 address: 0016ea88. Not validated source. */

void FUN_0016ea88(void)

{
  int iVar1;
  
  iVar1 = FUN_0016dd88();
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) & 0xffffffef;
  return;
}

