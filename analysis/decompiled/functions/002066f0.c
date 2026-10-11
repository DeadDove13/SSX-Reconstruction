/* Ghidra pseudocode. PS2 address: 002066f0. Not validated source. */

int FUN_002066f0(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00206570();
  fVar2 = (float)FUN_00206610(param_1);
  return (int)(fVar1 / fVar2);
}

