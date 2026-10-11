/* Ghidra pseudocode. PS2 address: 0011ec40. Not validated source. */

void FUN_0011ec40(undefined8 param_1,ulong param_2)

{
  FUN_00118390((int)param_1 + 0xb600,2);
  FUN_00117c10(param_1,2);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

