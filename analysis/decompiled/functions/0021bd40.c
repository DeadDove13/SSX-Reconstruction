/* Ghidra pseudocode. PS2 address: 0021bd40. Not validated source. */

void FUN_0021bd40(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 0x40) = &DAT_002bdd88;
  FUN_0020ac88((int)param_1 + 0x60,2);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

