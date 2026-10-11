/* Ghidra pseudocode. PS2 address: 00137e78. Not validated source. */

void FUN_00137e78(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x100);
  iVar1 = 9;
  do {
    if (*piVar2 == param_2) {
      *piVar2 = 0;
    }
    iVar1 = iVar1 + -1;
    piVar2 = piVar2 + 4;
  } while (-1 < iVar1);
  return;
}

