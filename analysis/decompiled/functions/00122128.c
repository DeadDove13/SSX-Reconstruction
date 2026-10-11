/* Ghidra pseudocode. PS2 address: 00122128. Not validated source. */

undefined8 FUN_00122128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00186070();
  *(undefined **)((int)param_1 + 8) = &DAT_002a8c98;
  *(int *)((int)param_1 + 0x28) = (int)param_4;
  FUN_00122388(param_1,param_4);
  return param_1;
}

