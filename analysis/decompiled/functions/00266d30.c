/* Ghidra pseudocode. PS2 address: 00266d30. Not validated source. */

int FUN_00266d30(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x20) <= param_2)) {
    iVar1 = FUN_00266d00();
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c) + param_2 * 0x40;
  }
  return iVar1;
}

