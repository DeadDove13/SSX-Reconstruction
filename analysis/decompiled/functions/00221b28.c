/* Ghidra pseudocode. PS2 address: 00221b28. Not validated source. */

void FUN_00221b28(undefined8 param_1,ulong param_2)

{
  FUN_00223af8((int)param_1 + 0x50,2);
  FUN_0021de50((int)param_1 + 0x3c,2);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

