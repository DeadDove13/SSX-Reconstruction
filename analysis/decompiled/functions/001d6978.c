/* Ghidra pseudocode. PS2 address: 001d6978. Not validated source. */

void FUN_001d6978(int param_1)

{
  if (*(int *)(param_1 + 0x554) != 0) {
    FUN_00103710();
    return;
  }
  return;
}

