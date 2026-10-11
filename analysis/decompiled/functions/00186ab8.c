/* Ghidra pseudocode. PS2 address: 00186ab8. Not validated source. */

void FUN_00186ab8(int param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_2 * 0x34 + *(int *)(param_1 + 4));
  *puVar1 = *puVar1 | 1;
  return;
}

