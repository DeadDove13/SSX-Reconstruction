/* Ghidra pseudocode. PS2 address: 001dc788. Not validated source. */

void FUN_001dc788(float param_1,float param_2,int param_3)

{
  float fVar1;
  
  fVar1 = (param_2 - param_1) * *(float *)(param_3 + 0x3c);
  *(float *)(param_3 + 0x14) = fVar1;
  *(float *)(param_3 + 0x1c) = param_1 * *(float *)(param_3 + 0x3c) - fVar1;
  return;
}

