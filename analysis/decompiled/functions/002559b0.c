/* Ghidra pseudocode. PS2 address: 002559b0. Not validated source. */

uint FUN_002559b0(uint param_1,uint param_2)

{
  return param_1 & 0x7fffffff | param_2 & 0x80000000;
}

