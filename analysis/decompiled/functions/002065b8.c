/* Ghidra pseudocode. PS2 address: 002065b8. Not validated source. */

float FUN_002065b8(undefined8 param_1)

{
  float fVar1;
  int aiStack_30 [2];
  int iStack_28;
  
  FUN_00206538(param_1,aiStack_30);
  if (aiStack_30[0] == 2) {
    fVar1 = (float)iStack_28;
  }
  else {
    fVar1 = (float)FUN_00206630(param_1);
  }
  return fVar1;
}

