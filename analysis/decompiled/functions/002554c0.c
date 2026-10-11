/* Ghidra pseudocode. PS2 address: 002554c0. Not validated source. */

uint FUN_002554c0(undefined8 param_1)

{
  return 0x7ff00000 -
         ((uint)((ulong)param_1 >> 0x20) & 0x7fffffff | ((uint)param_1 | -(uint)param_1) >> 0x1f) >>
         0x1f;
}

