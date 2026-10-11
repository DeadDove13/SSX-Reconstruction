/* Ghidra pseudocode. PS2 address: 00196fe8. Not validated source. */

void FUN_00196fe8(int *param_1,int param_2)

{
  if ((int *)*param_1 == (int *)0x0) {
    param_1[1] = param_2;
    *param_1 = param_2;
    return;
  }
  *(int *)*param_1 = param_2;
  *param_1 = param_2;
  return;
}

