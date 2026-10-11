/* Ghidra pseudocode. PS2 address: 00169d28. Not validated source. */

int * FUN_00169d28(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  FUN_00169c98();
  iVar2 = (int)param_1;
  piVar1 = (int *)0x0;
  if (*(int *)(iVar2 + 0x10) != 0) {
    piVar1 = *(int **)(iVar2 + 0x10);
    while (param_2 != *(int *)(*piVar1 + 0x48)) {
      FUN_00169cb8(param_1);
      if (*(int *)(iVar2 + 0x10) == 0) {
        return (int *)0x0;
      }
      piVar1 = *(int **)(iVar2 + 0x10);
    }
  }
  return piVar1;
}

