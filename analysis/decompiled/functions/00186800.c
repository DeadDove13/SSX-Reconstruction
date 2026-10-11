/* Ghidra pseudocode. PS2 address: 00186800. Not validated source. */

int FUN_00186800(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 * 0x34 + *(int *)(param_1 + 4);
  iVar1 = *(int *)(iVar2 + 0x14);
  if (iVar1 == iVar2 + 4) {
    iVar1 = 0;
  }
  return iVar1;
}

