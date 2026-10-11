/* Ghidra pseudocode. PS2 address: 001f46a8. Not validated source. */

void FUN_001f46a8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 1) {
    *param_1 = 0;
    FUN_00225790(param_1[1]);
    if (param_1[2] == 0) {
      FUN_0023a998(param_1[3]);
      return;
    }
  }
  else if ((1 < iVar1) && (iVar1 == 2)) {
    *param_1 = 0;
  }
  return;
}

