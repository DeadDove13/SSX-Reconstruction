/* Ghidra pseudocode. PS2 address: 001980a8. Not validated source. */

undefined8 FUN_001980a8(undefined8 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)param_1 + 4) = param_2;
  FUN_00198130(param_1);
  return param_1;
}

