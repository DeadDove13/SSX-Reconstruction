/* Ghidra pseudocode. PS2 address: 001377b8. Not validated source. */

void FUN_001377b8(int param_1)

{
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  return;
}

