/* Ghidra pseudocode. PS2 address: 002063c0. Not validated source. */

void FUN_002063c0(float param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00228098(*param_2);
  FUN_002276c0(uVar1,(int)(param_1 * 1000.0),0);
  param_2[5] = 1;
  return;
}

