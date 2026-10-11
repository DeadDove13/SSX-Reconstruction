/* Ghidra pseudocode. PS2 address: 00266ce0. Not validated source. */

void FUN_00266ce0(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  return;
}

