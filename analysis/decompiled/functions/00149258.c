/* Ghidra pseudocode. PS2 address: 00149258. Not validated source. */

void FUN_00149258(uint *param_1)

{
  param_1[1] = param_1[1] & 0xffff8000;
  *param_1 = *param_1 & 0xffff8000;
  return;
}

