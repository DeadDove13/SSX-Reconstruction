/* Ghidra pseudocode. PS2 address: 00186868. Not validated source. */

int FUN_00186868(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == *(int *)(param_1 + 4) + param_3 * 0x34 + 4) {
    iVar1 = 0;
  }
  return iVar1;
}

