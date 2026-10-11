/* Ghidra pseudocode. PS2 address: 00210f40. Not validated source. */

undefined4 FUN_00210f40(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return *(undefined4 *)(param_1 + 0x58);
}

