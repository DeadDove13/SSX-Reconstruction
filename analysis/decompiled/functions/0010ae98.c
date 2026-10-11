/* Ghidra pseudocode. PS2 address: 0010ae98. Not validated source. */

void FUN_0010ae98(float param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0xb0);
  if (fVar1 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0xb0) = fVar1;
  *(undefined4 *)(param_2 + 0xb4) = 1;
  return;
}

