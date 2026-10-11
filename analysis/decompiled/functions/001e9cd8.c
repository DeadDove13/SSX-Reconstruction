/* Ghidra pseudocode. PS2 address: 001e9cd8. Not validated source. */

void FUN_001e9cd8(undefined8 param_1,ulong param_2)

{
  if (*(int *)param_1 != 0) {
    FUN_0023a998();
  }
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

