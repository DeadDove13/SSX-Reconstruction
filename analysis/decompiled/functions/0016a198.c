/* Ghidra pseudocode. PS2 address: 0016a198. Not validated source. */

undefined8 FUN_0016a198(undefined8 param_1)

{
  FUN_00168a98();
  *(undefined4 *)((int)param_1 + 0x2d0) = 0;
  *(undefined **)((int)param_1 + 0x284) = &DAT_002b0290;
  FUN_0016a270(param_1);
  return param_1;
}

