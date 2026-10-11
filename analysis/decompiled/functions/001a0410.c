/* Ghidra pseudocode. PS2 address: 001a0410. Not validated source. */

void FUN_001a0410(undefined8 param_1,ulong param_2)

{
  FUN_001a04d8();
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

