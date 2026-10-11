/* Ghidra pseudocode. PS2 address: 0023ef70. Not validated source. */

void FUN_0023ef70(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_002a4750;
  do {
    iVar2 = iVar2 + 1;
    if (*piVar1 == param_1) {
      *piVar1 = 0;
      return;
    }
    piVar1 = piVar1 + 1;
  } while (iVar2 < 8);
  return;
}

