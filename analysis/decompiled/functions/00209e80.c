/* Ghidra pseudocode. PS2 address: 00209e80. Not validated source. */

float FUN_00209e80(undefined8 param_1)

{
  float fVar1;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  FUN_00209d90(param_1,&iStack_20);
  if (iStack_20 == 2) {
    fVar1 = (float)(iStack_1c + iStack_18);
  }
  else {
    fVar1 = 0.0;
  }
  return fVar1;
}

