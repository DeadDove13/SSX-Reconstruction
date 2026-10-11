/* Ghidra pseudocode. PS2 address: 001eb468. Not validated source. */

int FUN_001eb468(int *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *param_1) {
    piVar3 = param_1 + 1;
    do {
      lVar1 = FUN_0025bf10(piVar3,param_2,4);
      if (lVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = (int *)((int)piVar3 + 5);
    } while (iVar2 < *param_1);
  }
  FUN_0023bac0((int)param_1 + *param_1 * 5 + 4,param_2,4);
  *(undefined1 *)((int)param_1 + *param_1 * 5 + 8) = 0;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  return iVar2;
}

