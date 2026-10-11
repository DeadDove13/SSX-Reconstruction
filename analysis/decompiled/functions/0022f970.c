/* Ghidra pseudocode. PS2 address: 0022f970. Not validated source. */

void FUN_0022f970(int param_1)

{
  *(float *)(param_1 + 8) = *(float *)(param_1 + 0xc) * *(float *)(param_1 + 4) * 1.5;
  return;
}

