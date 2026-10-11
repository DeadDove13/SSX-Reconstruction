/* Ghidra pseudocode. PS2 address: 00198130. Not validated source. */

void FUN_00198130(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = 2;
  param_1[2] = 0;
  param_1 = param_1 + 5;
  do {
    *param_1 = 0;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + -1;
  } while (-1 < iVar1);
  return;
}

