/* Ghidra pseudocode. PS2 address: 00131d88. Not validated source. */

void FUN_00131d88(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    *param_1 = param_2;
  }
  else {
    *(int *)(param_1[1] + 0xc) = param_2;
  }
  iVar1 = param_1[1];
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(int *)(param_2 + 0x10) = iVar1;
  param_1[1] = param_2;
  return;
}

