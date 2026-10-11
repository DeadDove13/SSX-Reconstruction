/* Ghidra pseudocode. PS2 address: 0019a558. Not validated source. */

void FUN_0019a558(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < 0x10) {
    *param_1 = iVar1 + 1;
    param_1[iVar1 + 2] = param_2;
  }
  return;
}

