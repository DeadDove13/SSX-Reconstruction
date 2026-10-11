/* Ghidra pseudocode. PS2 address: 0019bae8. Not validated source. */

int * FUN_0019bae8(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)param_1[1];
  if (0 < *param_1) {
    do {
      iVar2 = iVar2 + 1;
      if ((*piVar1 == param_2) && (piVar1[1] == param_3)) {
        return piVar1;
      }
      piVar1 = piVar1 + 4;
    } while (iVar2 < *param_1);
  }
  return (int *)0x0;
}

