/* Ghidra pseudocode. PS2 address: 001d64b0. Not validated source. */

void FUN_001d64b0(undefined8 param_1,ulong param_2)

{
  FUN_001d6978();
  FUN_001d6510(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

