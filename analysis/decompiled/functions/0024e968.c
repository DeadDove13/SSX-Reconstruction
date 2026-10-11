/* Ghidra pseudocode. PS2 address: 0024e968. Not validated source. */

void FUN_0024e968(uint param_1)

{
  REG_IPU_CMD = param_1;
  DAT_002a52e4 = *(undefined4 *)(&DAT_002a5bc8 + (param_1 >> 0x1c) * 4);
  return;
}

