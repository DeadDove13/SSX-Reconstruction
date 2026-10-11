/* Ghidra pseudocode. PS2 address: 00195598. Not validated source. */

int FUN_00195598(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[2] != 0) {
    iVar3 = 0;
    if (*param_1 != 0) {
      iVar2 = *param_1;
      do {
        piVar1 = (int *)(iVar2 + 0x28);
        if (iVar2 != param_1[5]) {
          iVar3 = iVar3 + 1;
        }
        iVar2 = *piVar1;
      } while (*piVar1 != 0);
    }
    return iVar3;
  }
  return 0;
}

