/* Ghidra pseudocode. PS2 address: 00197ed8. Not validated source. */

void FUN_00197ed8(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  if (*piVar2 != 0) {
    piVar1 = (int *)*piVar2;
    while( true ) {
      *piVar2 = *piVar1;
      FUN_00103778();
      if (*piVar2 == 0) break;
      piVar1 = (int *)*piVar2;
    }
  }
  FUN_00197218(param_1);
  return;
}

