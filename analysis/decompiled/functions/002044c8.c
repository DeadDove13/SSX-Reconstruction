/* Ghidra pseudocode. PS2 address: 002044c8. Not validated source. */

void FUN_002044c8(undefined8 param_1,ulong param_2)

{
  if (*(int *)((int)param_1 + 4) != 0) {
    FUN_00103710();
  }
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

