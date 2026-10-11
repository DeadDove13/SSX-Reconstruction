/* Ghidra pseudocode. PS2 address: 001d87a8. Not validated source. */

void FUN_001d87a8(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = (int)param_2;
  FUN_00210ed8(param_1[0x5b],param_2);
  param_1[1] = 1;
  return;
}

