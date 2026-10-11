/* Ghidra pseudocode. PS2 address: 00146680. Not validated source. */

void FUN_00146680(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00103710();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

