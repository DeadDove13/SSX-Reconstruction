/* Ghidra pseudocode. PS2 address: 00164bd0. Not validated source. */

undefined8 FUN_00164bd0(undefined8 param_1)

{
  FUN_00185ef0();
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined **)((int)param_1 + 8) = &DAT_002aff78;
  return param_1;
}

