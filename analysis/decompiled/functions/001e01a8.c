/* Ghidra pseudocode. PS2 address: 001e01a8. Not validated source. */

void FUN_001e01a8(float param_1,float *param_2)

{
  if (param_1 != 0.0) {
    *param_2 = param_1;
    FUN_001dce30(param_1,param_2 + 4);
    return;
  }
  FUN_001dce30(0,param_2 + 4);
  return;
}

