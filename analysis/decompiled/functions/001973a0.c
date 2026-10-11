/* Ghidra pseudocode. PS2 address: 001973a0. Not validated source. */

void FUN_001973a0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = FUN_00197248();
    *param_1 = iVar1;
    iVar1 = *param_1;
    param_1[5] = 0;
  }
  else {
    param_1[5] = 0;
  }
  param_1[1] = iVar1;
  param_1[3] = iVar1 + 4;
  return;
}

