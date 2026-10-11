/* Ghidra pseudocode. PS2 address: 00160570. Not validated source. */

int FUN_00160570(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(iVar1 + 0x118) = iVar1;
  return iVar1;
}

