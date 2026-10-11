/* Ghidra pseudocode. PS2 address: 00225488. Not validated source. */

void FUN_00225488(uint *param_1,uint param_2)

{
  param_1[2] = param_2;
  param_1[4] = param_2 - 0xf;
  DAT_0029a908 = param_1;
  param_1[1] = (int)param_1 + (param_2 - 8);
  *param_1 = (int)param_1 + 0x27U & 0xfffffff0;
  param_1[3] = param_2 - 0x2f;
  return;
}

