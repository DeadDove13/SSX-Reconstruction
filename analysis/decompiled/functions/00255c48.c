/* Ghidra pseudocode. PS2 address: 00255c48. Not validated source. */

undefined * FUN_00255c48(void)

{
  if (DAT_002d5498 == 0) {
    DAT_002d5498 = 1;
    FUN_0025a60c(0x2d5488,0,0x10);
    DAT_002d548c = &DAT_002d54a0;
  }
  return &DAT_002d5488;
}

