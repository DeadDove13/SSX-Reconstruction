/* Ghidra pseudocode. PS2 address: 00185fd0. Not validated source. */

undefined8 FUN_00185fd0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00185ef0();
  *(undefined4 *)((int)param_1 + 0x14) = param_3;
  *(undefined **)((int)param_1 + 8) = &DAT_002b3700;
  return param_1;
}

