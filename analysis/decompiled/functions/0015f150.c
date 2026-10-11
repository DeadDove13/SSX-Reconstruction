/* Ghidra pseudocode. PS2 address: 0015f150. Not validated source. */

void FUN_0015f150(undefined4 *param_1,int param_2)

{
  if (param_2 != param_1[0x106]) {
    param_1[1] = 1;
    *param_1 = 1;
  }
  param_1[0x106] = param_2;
  return;
}

