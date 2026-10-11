/* Ghidra pseudocode. PS2 address: 0010e5e8. Not validated source. */

void FUN_0010e5e8(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x4c) + DAT_002c1264;
  *(float *)(param_1 + 0x4c) = fVar1;
  *(float *)(param_1 + 8) = *(float *)(param_1 + 0x44) - fVar1;
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x48) - fVar1;
  return;
}

