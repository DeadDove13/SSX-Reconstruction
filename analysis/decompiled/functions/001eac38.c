/* Ghidra pseudocode. PS2 address: 001eac38. Not validated source. */

int FUN_001eac38(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x34);
  iVar2 = 0;
  while( true ) {
    if (iVar1 == param_1 + 0x1d4) {
      return 0;
    }
    if (iVar2 == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x34);
    iVar2 = iVar2 + 1;
  }
  return iVar1;
}

