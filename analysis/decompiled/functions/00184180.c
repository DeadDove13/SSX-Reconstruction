/* Ghidra pseudocode. PS2 address: 00184180. Not validated source. */

void FUN_00184180(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0023a998();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

