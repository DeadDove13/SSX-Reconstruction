/* Ghidra pseudocode. PS2 address: 00190408. Not validated source. */

undefined8 FUN_00190408(undefined8 param_1)

{
  FUN_0018dbd0();
  *(undefined **)((int)param_1 + 0xc) = &DAT_002b47f8;
  return param_1;
}

