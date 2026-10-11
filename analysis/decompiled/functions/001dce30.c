/* Ghidra pseudocode. PS2 address: 001dce30. Not validated source. */

void FUN_001dce30(float param_1,int param_2)

{
  *(float *)(param_2 + 8) = param_1 * *(float *)(param_2 + 0x3c);
  return;
}

