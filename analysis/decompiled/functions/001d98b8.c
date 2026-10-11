/* Ghidra pseudocode. PS2 address: 001d98b8. Not validated source. */

void FUN_001d98b8(int param_1)

{
  if (*(int *)(param_1 + 0x16c) == 0) {
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  else {
    FUN_00210d08(*(int *)(param_1 + 0x16c),3);
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  return;
}

