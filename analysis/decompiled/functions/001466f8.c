/* Ghidra pseudocode. PS2 address: 001466f8. Not validated source. */

int FUN_001466f8(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) + *(int *)(param_2 * 0x2c + *(int *)(param_1 + 4) + 0x30);
}

