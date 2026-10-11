/* Ghidra pseudocode. PS2 address: 002053c0. Not validated source. */

undefined8 FUN_002053c0(undefined8 param_1)

{
  *(undefined4 *)param_1 = 0;
  ((undefined4 *)param_1)[1] = 0xffffffff;
  return param_1;
}

