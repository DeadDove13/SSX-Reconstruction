/* Ghidra pseudocode. PS2 address: 001ef6c0. Not validated source. */

void FUN_001ef6c0(undefined8 param_1,undefined8 param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_002bbe78;
  if (*(int *)((int)param_1 + 0x14) != 0) {
    FUN_00103710();
  }
  FUN_001ef740(param_1,param_2);
  return;
}

