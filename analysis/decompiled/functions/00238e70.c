/* Ghidra pseudocode. PS2 address: 00238e70. Not validated source. */

undefined4 FUN_00238e70(uint param_1)

{
  return *(undefined4 *)((param_1 >> 0x18) * 0x30 + DAT_002a3374 + 0x14);
}

