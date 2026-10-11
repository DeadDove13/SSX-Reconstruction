/* Ghidra pseudocode. PS2 address: 00211da0. Not validated source. */

undefined4 FUN_00211da0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0xc) * 0x14 + param_1 + 0x14c);
}

