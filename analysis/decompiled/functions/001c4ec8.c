/* Ghidra pseudocode. PS2 address: 001c4ec8. Not validated source. */

undefined4 FUN_001c4ec8(int *param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x58 + *(int *)(*param_1 + 0x28) + 0x18);
}

