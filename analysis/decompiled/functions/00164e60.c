/* Ghidra pseudocode. PS2 address: 00164e60. Not validated source. */

undefined8 FUN_00164e60(undefined8 param_1)

{
  FUN_00164bd0();
  *(undefined **)((int)param_1 + 8) = &DAT_002afea8;
  return param_1;
}

