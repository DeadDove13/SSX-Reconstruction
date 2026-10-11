/* Ghidra pseudocode. PS2 address: 0016ac60. Not validated source. */

void FUN_0016ac60(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 0x284) = &DAT_002b02f0;
  FUN_001697f0((int)param_1 + 0x118,2);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

