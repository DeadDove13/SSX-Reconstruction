/* Ghidra pseudocode. PS2 address: 00131a48. Not validated source. */

void FUN_00131a48(undefined8 param_1,ulong param_2)

{
  FUN_00131aa0((int)param_1 + 4,2);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

