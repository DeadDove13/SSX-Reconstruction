/* Ghidra pseudocode. PS2 address: 00186830. Not validated source. */

int FUN_00186830(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == *(int *)(param_1 + 4) + param_3 * 0x34 + 0x10) {
    iVar1 = 0;
  }
  return iVar1;
}

