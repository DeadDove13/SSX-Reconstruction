/* Ghidra pseudocode. PS2 address: 00185ef0. Not validated source. */

undefined8 FUN_00185ef0(undefined8 param_1,undefined8 param_2)

{
  *(undefined **)((int)param_1 + 8) = &DAT_002b3760;
  FUN_00186448(0x2c4dd8,param_1,param_2);
  return param_1;
}

