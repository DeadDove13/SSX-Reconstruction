/* Ghidra pseudocode. PS2 address: 001c06d0. Not validated source. */

int FUN_001c06d0(int param_1)

{
  return *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 0x30) + 0x240;
}

