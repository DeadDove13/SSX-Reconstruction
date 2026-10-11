/* Ghidra pseudocode. PS2 address: 0011fe48. Not validated source. */

void FUN_0011fe48(int *param_1)

{
  param_1[0x22b] = 0;
  param_1[0x22c] = 0;
  param_1[0x22d] = 0;
  param_1[0x22e] = 0;
  param_1[0x22f] = 0;
  param_1[0x226] = 0;
  param_1[0x231] = 0;
  param_1[0x232] = 0;
  param_1[0x22a] = 0x1a;
  *(undefined4 *)(*param_1 + 0x340) = 0;
  FUN_00121cb0();
  param_1[0x230] = -1;
  param_1[0x227] = param_1[0x228];
  *(undefined8 *)(param_1 + 0x234) = DAT_00277ba8;
  *(undefined2 *)(param_1 + 0x233) = 1;
  return;
}

