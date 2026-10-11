/* Ghidra pseudocode. PS2 address: 00206630. Not validated source. */

float FUN_00206630(int param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00206610();
  return fVar1 * (float)*(int *)(param_1 + 0x104) * (float)*(int *)(param_1 + 0x108);
}

