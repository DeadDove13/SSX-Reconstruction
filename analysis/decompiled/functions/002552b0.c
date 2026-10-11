/* Ghidra pseudocode. PS2 address: 002552b0. Not validated source. */

ulong FUN_002552b0(ulong param_1)

{
  return param_1 & 0xffffffff | ((long)param_1 >> 0x20 & 0x7fffffffU) << 0x20;
}

