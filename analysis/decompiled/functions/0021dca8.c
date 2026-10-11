/* Ghidra pseudocode. PS2 address: 0021dca8. Not validated source. */

void FUN_0021dca8(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[2] == 0) {
    iVar1 = param_1[3];
  }
  else {
    FUN_00103710();
    iVar1 = param_1[3];
  }
  if (iVar1 == 0) {
    param_1[3] = 0;
  }
  else {
    FUN_00103710();
    param_1[3] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

