/* Ghidra pseudocode. PS2 address: 001489d8. Not validated source. */

int FUN_001489d8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  while( true ) {
    if (iVar1 == param_1 + 0x1d4) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x1dc) == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x34);
  }
  return iVar1;
}

