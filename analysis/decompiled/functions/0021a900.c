/* Ghidra pseudocode. PS2 address: 0021a900. Not validated source. */

int FUN_0021a900(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = param_1 + 9;
  iVar3 = 0;
  if (0 < *param_1) {
    do {
      if ((*(int *)(*piVar2 + 0x1c) != 0) && (bVar1 = iVar4 == param_2, iVar4 = iVar4 + 1, bVar1)) {
        return *(int *)(*piVar2 + 0x1c);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_1);
  }
  return 0;
}

