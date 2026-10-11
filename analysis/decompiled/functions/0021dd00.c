/* Ghidra pseudocode. PS2 address: 0021dd00. Not validated source. */

void FUN_0021dd00(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *param_1) {
    piVar2 = (int *)param_1[2];
    do {
      iVar1 = *piVar2;
      iVar3 = iVar3 + 1;
      *piVar2 = 0;
      piVar2[1] = iVar1 + -1;
      piVar2 = piVar2 + 2;
    } while (iVar3 < *param_1);
  }
  return;
}

