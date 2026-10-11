/* Ghidra pseudocode. PS2 address: 0016cda0. Not validated source. */

void FUN_0016cda0(undefined8 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)param_1 + param_2 * 4 + 0xb14);
  if (piVar2 == (int *)0x0) {
    return;
  }
  if (*piVar2 != -1) {
    iVar1 = *piVar2;
    while( true ) {
      FUN_0016eb08(param_1,iVar1);
      iVar1 = *piVar2;
      while (iVar1 != -1) {
        piVar2 = piVar2 + 1;
        iVar1 = *piVar2;
      }
      piVar2 = piVar2 + 1;
      if (*piVar2 == -1) break;
      iVar1 = *piVar2;
    }
  }
  FUN_0016cd30(param_1);
  return;
}

