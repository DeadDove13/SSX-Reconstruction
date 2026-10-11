/* Ghidra pseudocode. PS2 address: 001d6510. Not validated source. */

void FUN_001d6510(int param_1)

{
  if (*(int *)(param_1 + 0x540) != 0) {
    FUN_00103710();
    *(undefined4 *)(param_1 + 0x540) = 0;
  }
  return;
}

