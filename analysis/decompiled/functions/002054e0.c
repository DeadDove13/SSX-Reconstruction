/* Ghidra pseudocode. PS2 address: 002054e0. Not validated source. */

void FUN_002054e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

