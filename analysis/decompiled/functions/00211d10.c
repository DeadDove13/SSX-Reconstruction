/* Ghidra pseudocode. PS2 address: 00211d10. Not validated source. */

void FUN_00211d10(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0xc) * 0x14 + param_1 + 0x14c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) * 0x14 + param_1 + 0x150) = 0;
  return;
}

