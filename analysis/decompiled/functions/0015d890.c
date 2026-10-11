/* Ghidra pseudocode. PS2 address: 0015d890. Not validated source. */

void FUN_0015d890(int param_1)

{
  if (*(int *)(param_1 + 0x1d4) == 1) {
    FUN_0015f258();
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  return;
}

