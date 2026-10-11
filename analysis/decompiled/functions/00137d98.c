/* Ghidra pseudocode. PS2 address: 00137d98. Not validated source. */

void FUN_00137d98(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x4c);
  iVar2 = 0;
  while( true ) {
    if (2 < iVar2) {
      return;
    }
    if (*piVar1 == param_2) break;
    if (*piVar1 == 0) {
      *piVar1 = param_2;
      return;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  }
  *piVar1 = param_2;
  return;
}

