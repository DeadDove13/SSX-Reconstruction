/* Ghidra pseudocode. PS2 address: 001d3518. Not validated source. */

void FUN_001d3518(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xd090) = param_3;
  *(undefined4 *)(param_1 + 0xd08c) = param_2;
  return;
}

