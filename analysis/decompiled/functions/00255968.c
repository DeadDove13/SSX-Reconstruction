/* Ghidra pseudocode. PS2 address: 00255968. Not validated source. */

ulong FUN_00255968(ulong param_1,long param_2)

{
  return param_1 & 0xffffffff |
         ((long)param_1 >> 0x20 & 0x7fffffffU | param_2 >> 0x20 & 0xffffffff80000000U) << 0x20;
}

