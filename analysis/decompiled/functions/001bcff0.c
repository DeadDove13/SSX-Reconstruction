/* Ghidra pseudocode. PS2 address: 001bcff0. Not validated source. */

float FUN_001bcff0(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_1 <= 0.25) {
    fVar2 = (1.0 - param_1) * 0.5;
    if (DAT_002c3500 <= fVar2) {
      fVar1 = (float)FUN_00218240(param_1 * DAT_002c34fc * 4.0);
      return fVar1 * fVar2 * param_2;
    }
  }
  return 0.0;
}

