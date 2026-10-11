/* Ghidra pseudocode. PS2 address: 001624f8. Not validated source. */

float FUN_001624f8(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_5 * param_5;
  fVar1 = fVar2 * param_5;
  return ((fVar1 + fVar1) - fVar2 * 3.0) * param_1 + param_1 +
         (fVar1 * -2.0 + fVar2 * 3.0) * param_2 + ((fVar1 - (fVar2 + fVar2)) + param_5) * param_3 +
         (fVar1 - fVar2) * param_4;
}

