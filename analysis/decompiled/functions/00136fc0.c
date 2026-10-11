/* Ghidra pseudocode. PS2 address: 00136fc0. Not validated source. */

void FUN_00136fc0(float param_1,int param_2)

{
  *(float *)(param_2 + 0xbc) = *(float *)(param_2 + 0xbc) + param_1 * DAT_002c1ca8;
  *(float *)(param_2 + 0xc0) = *(float *)(param_2 + 0xc0) + 1.0;
  return;
}

