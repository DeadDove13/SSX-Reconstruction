/* Ghidra pseudocode. PS2 address: 0010ae78. Not validated source. */

void FUN_0010ae78(float param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0xac);
  if (fVar1 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0xac) = fVar1;
  return;
}

