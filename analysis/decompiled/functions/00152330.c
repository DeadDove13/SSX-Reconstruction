/* Ghidra pseudocode. PS2 address: 00152330. Not validated source. */

void FUN_00152330(int param_1)

{
  FUN_001eacf8(param_1 + 0x20);
  *(undefined4 *)(param_1 + 8) = 0x1a6;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

