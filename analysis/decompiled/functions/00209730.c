/* Ghidra pseudocode. PS2 address: 00209730. Not validated source. */

void FUN_00209730(undefined8 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 0x8b6c0 + param_2 * 4);
  if (*piVar1 != 0) {
    FUN_00209728(param_1);
    FUN_00209308(*piVar1);
    return;
  }
  return;
}

