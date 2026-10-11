/* Ghidra pseudocode. PS2 address: 001880a0. Not validated source. */

void FUN_001880a0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x29c) = param_2 ^ 1;
  FUN_00188f68();
  if (param_2 != DAT_0027acd8) {
    DAT_0027bbfc = 1;
    DAT_0027acd8 = param_2;
  }
  return;
}

