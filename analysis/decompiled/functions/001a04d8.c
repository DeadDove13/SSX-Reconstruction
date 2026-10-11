/* Ghidra pseudocode. PS2 address: 001a04d8. Not validated source. */

void FUN_001a04d8(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    FUN_00103710();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

