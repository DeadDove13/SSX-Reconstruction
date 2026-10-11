/* Ghidra pseudocode. PS2 address: 00169d98. Not validated source. */

int * FUN_00169d98(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_00169c98();
  iVar2 = (int)param_1;
  piVar1 = (int *)0x0;
  if (*(int *)(iVar2 + 0x10) != 0) {
    piVar1 = *(int **)(iVar2 + 0x10);
    while ((*(uint *)(*piVar1 + 0x13c) & 1) == 0) {
      FUN_00169cb8(param_1);
      if (*(int *)(iVar2 + 0x10) == 0) {
        return (int *)0x0;
      }
      piVar1 = *(int **)(iVar2 + 0x10);
    }
  }
  return piVar1;
}

