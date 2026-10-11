/* Ghidra pseudocode. PS2 address: 00209e10. Not validated source. */

float FUN_00209e10(undefined8 param_1)

{
  float fVar1;
  int aiStack_20 [2];
  int iStack_18;
  
  FUN_00209d90(param_1,aiStack_20);
  if (aiStack_20[0] == 2) {
    fVar1 = (float)iStack_18;
  }
  else {
    fVar1 = 0.0;
  }
  return fVar1;
}

