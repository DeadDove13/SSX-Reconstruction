/* Ghidra pseudocode. PS2 address: 00173108. Not validated source. */

int FUN_00173108(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (param_1 == 0) {
      return -1;
    }
    if (*(int *)(param_1 + 0xc) != 0) break;
    piVar1 = (int *)(param_1 + 8);
    param_1 = *(int *)(param_1 + 0x20);
    if (*piVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

