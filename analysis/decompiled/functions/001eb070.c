/* Ghidra pseudocode. PS2 address: 001eb070. Not validated source. */

void FUN_001eb070(undefined8 param_1,ulong param_2)

{
  FUN_001eb0c0();
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

