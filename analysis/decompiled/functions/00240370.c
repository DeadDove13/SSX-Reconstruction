/* Ghidra pseudocode. PS2 address: 00240370. Not validated source. */

void FUN_00240370(uint param_1,uint *param_2,uint *param_3)

{
  *param_2 = (int)param_1 >> 0xd & 7;
  *param_3 = param_1 & 0x1fff;
  return;
}

