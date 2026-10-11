/* Ghidra pseudocode. PS2 address: 001652f0. Not validated source. */

bool FUN_001652f0(int param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00165330();
  return fVar1 <= *(float *)(param_1 + 0x28);
}

