/* Ghidra pseudocode. PS2 address: 00224528. Not validated source. */

float FUN_00224528(int *param_1)

{
  float fVar1;
  
  if (*param_1 == 0) {
    fVar1 = -1.0;
  }
  else {
    fVar1 = (float)FUN_0020e740(param_1[0x14]);
    fVar1 = fVar1 + fVar1;
  }
  return fVar1;
}

