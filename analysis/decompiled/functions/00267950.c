/* Ghidra pseudocode. PS2 address: 00267950. Not validated source. */

int FUN_00267950(ulong param_1)

{
  if (0xf < param_1) {
    return 0;
  }
  return (int)param_1 * 0x10 + 0x2d7910;
}

