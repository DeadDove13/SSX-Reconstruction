/* Ghidra pseudocode. PS2 address: 00209630. Not validated source. */

void FUN_00209630(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x8b6c0 + param_2 * 4) != 0) {
    FUN_00208b88();
    return;
  }
  return;
}

