/* Ghidra pseudocode. PS2 address: 001eb548. Not validated source. */

int FUN_001eb548(int *param_1,undefined8 param_2)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *param_1) {
    piVar3 = param_1 + 0xe;
    piVar2 = param_1 + 1;
    do {
      lVar1 = FUN_0025bf10(piVar2,param_2,4);
      if (lVar1 == 0) {
        return *piVar3;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      piVar2 = (int *)((int)piVar2 + 5);
    } while (iVar4 < *param_1);
  }
  return -1;
}

