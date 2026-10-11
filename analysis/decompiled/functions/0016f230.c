/* Ghidra pseudocode. PS2 address: 0016f230. Not validated source. */

int * FUN_0016f230(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + param_3 * 4 + 0xb14);
  if (*piVar3 != -1) {
    iVar1 = *piVar3;
    do {
      if (iVar1 == param_2) {
        return piVar3 + 1;
      }
      if (iVar1 == -1) {
        piVar3 = piVar3 + 1;
      }
      else {
        do {
          piVar2 = piVar3;
          piVar3 = piVar2 + 1;
        } while (*piVar3 != -1);
        piVar3 = piVar2 + 2;
      }
      iVar1 = *piVar3;
    } while (iVar1 != -1);
  }
  return piVar3;
}

