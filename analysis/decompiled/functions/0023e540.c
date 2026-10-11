/* Ghidra pseudocode. PS2 address: 0023e540. Not validated source. */

void FUN_0023e540(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_002a3640;
  do {
    iVar2 = iVar2 + 1;
    if (*piVar1 == param_1) {
      return;
    }
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0x20);
  if (DAT_002a3640 != 0) {
    iVar2 = 1;
    do {
      if (0x1f < iVar2) {
        return;
      }
      piVar1 = &DAT_002a3640 + iVar2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 != 0);
    *piVar1 = param_1;
    return;
  }
  DAT_002a3640 = param_1;
  return;
}

