/* Ghidra pseudocode. PS2 address: 0016f1c8. Not validated source. */

int * FUN_0016f1c8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + param_3 * 4 + 0xb14);
  if ((0 < param_2) && (*piVar3 != -1)) {
    iVar1 = 1;
    do {
      do {
        piVar2 = piVar3;
        piVar3 = piVar2 + 1;
      } while (*piVar3 != -1);
      piVar3 = piVar2 + 2;
      if (param_2 <= iVar1) {
        return piVar3;
      }
      iVar1 = iVar1 + 1;
    } while (*piVar3 != -1);
  }
  return piVar3;
}

