/* Ghidra pseudocode. PS2 address: 00265440. Not validated source. */

void FUN_00265440(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  param_1[1] = param_1[1] + 1;
  param_1[3] = iVar1 + 1;
  if (iVar1 + 1 == (int)param_1 + *param_1 + 0x10) {
    param_1[3] = (int)(param_1 + 4);
  }
  return;
}

