/* Ghidra pseudocode. PS2 address: 0015f448. Not validated source. */

undefined8 FUN_0015f448(undefined8 param_1)

{
  FUN_00185ef0();
  *(undefined **)((int)param_1 + 8) = &DAT_002afcb8;
  FUN_0015b980(0x27fea0);
  DAT_002c4744 = 0;
  DAT_002c4740 = 1;
  FUN_0015f528();
  DAT_002c4734 = 7;
  DAT_002c473c = 0;
  DAT_002c4738 = 0;
  return param_1;
}

