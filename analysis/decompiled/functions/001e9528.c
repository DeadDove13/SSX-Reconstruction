/* Ghidra pseudocode. PS2 address: 001e9528. Not validated source. */

void FUN_001e9528(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

