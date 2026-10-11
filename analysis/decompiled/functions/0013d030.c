/* Ghidra pseudocode. PS2 address: 0013d030. Not validated source. */

void FUN_0013d030(int param_1)

{
  if (DAT_002c1f78 < *(float *)(*(int *)(param_1 + 0x10) + 0xe0)) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

