/* Ghidra pseudocode. PS2 address: 00219f08. Not validated source. */

void FUN_00219f08(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0023a998();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

