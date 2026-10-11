/* Ghidra pseudocode. PS2 address: 0016f0f8. Not validated source. */

int FUN_0016f0f8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = -1;
  piVar1 = *(int **)(param_1 + param_2 * 4 + 0xb14);
  if (*piVar1 != -1) {
    iVar3 = *piVar1;
    while( true ) {
      if (iVar3 == -1) {
        piVar1 = piVar1 + 1;
      }
      else {
        do {
          piVar2 = piVar1;
          piVar1 = piVar2 + 1;
        } while (*piVar1 != -1);
        piVar1 = piVar2 + 2;
      }
      if (*piVar1 == -1) break;
      iVar3 = *piVar1;
    }
  }
  return iVar3;
}

