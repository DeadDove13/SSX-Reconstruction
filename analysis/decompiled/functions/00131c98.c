/* Ghidra pseudocode. PS2 address: 00131c98. Not validated source. */

void FUN_00131c98(undefined8 param_1,ulong param_2)

{
  if (*(int *)((int)param_1 + 8) != 0) {
    FUN_00103710();
  }
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

