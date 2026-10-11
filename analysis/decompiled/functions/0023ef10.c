/* Ghidra pseudocode. PS2 address: 0023ef10. Not validated source. */

void FUN_0023ef10(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_002a4750;
  do {
    iVar2 = iVar2 + 1;
    if (*piVar1 == param_1) {
      return;
    }
    piVar1 = piVar1 + 1;
  } while (iVar2 < 8);
  iVar2 = 0;
  piVar1 = &DAT_002a4750;
  do {
    iVar2 = iVar2 + 1;
    if (*piVar1 == 0) {
      *piVar1 = param_1;
      return;
    }
    piVar1 = piVar1 + 1;
  } while (iVar2 < 8);
  return;
}

