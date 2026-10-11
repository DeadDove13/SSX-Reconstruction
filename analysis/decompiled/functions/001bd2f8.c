/* Ghidra pseudocode. PS2 address: 001bd2f8. Not validated source. */

void FUN_001bd2f8(int param_1)

{
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(int *)(param_1 + 0x3d4) = param_1 + 0xd0;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  FUN_001c2850(0x2913b0);
  return;
}

