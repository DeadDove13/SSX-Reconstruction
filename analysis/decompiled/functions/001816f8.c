/* Ghidra pseudocode. PS2 address: 001816f8. Not validated source. */

void FUN_001816f8(int param_1,int param_2,uint param_3,uint param_4)

{
  param_1 = param_1 + param_2 * 4;
  *(uint *)(param_1 + 4) = param_3;
  *(uint *)(param_1 + 0xc4) = param_4 | param_3;
  return;
}

