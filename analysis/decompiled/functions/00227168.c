/* Ghidra pseudocode. PS2 address: 00227168. Not validated source. */

void FUN_00227168(int param_1)

{
  FUN_0023d4a8(*(undefined4 *)(param_1 + 4));
  *(char *)(param_1 + 0x17) = *(char *)(param_1 + 0x17) + '\x01';
  return;
}

