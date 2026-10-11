/* Ghidra pseudocode. PS2 address: 00198598. Not validated source. */

void FUN_00198598(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0xc);
  iVar1 = 2;
  do {
    iVar1 = iVar1 + -1;
    if (*piVar2 == param_2) {
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
  } while (-1 < iVar1);
  return;
}

