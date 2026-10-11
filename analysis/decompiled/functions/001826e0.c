/* Ghidra pseudocode. PS2 address: 001826e0. Not validated source. */

undefined4 FUN_001826e0(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + param_2 * 4 + 0x18) + 0x28);
}

