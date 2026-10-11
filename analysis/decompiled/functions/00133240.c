/* Ghidra pseudocode. PS2 address: 00133240. Not validated source. */

undefined8 FUN_00133240(undefined8 param_1,undefined4 param_2)

{
  *(undefined4 *)param_1 = param_2;
  ((undefined4 *)param_1)[1] = 0;
  return param_1;
}

