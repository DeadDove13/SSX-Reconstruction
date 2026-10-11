/* Ghidra pseudocode. PS2 address: 00107a68. Not validated source. */

void FUN_00107a68(int param_1)

{
  if (*(int *)(param_1 + 0x350) == 8) {
    FUN_0010b330(param_1,9);
    return;
  }
  return;
}

