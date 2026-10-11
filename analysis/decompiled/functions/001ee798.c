/* Ghidra pseudocode. PS2 address: 001ee798. Not validated source. */

void FUN_001ee798(int param_1,int param_2)

{
  if (-1 < *(int *)(param_1 + param_2 * 4 + 0x65cc)) {
    FUN_001ee0d8(*(int *)(param_1 + 0x6584) + (*(int *)(param_1 + 0x6610) + -1) * 0x14);
    return;
  }
  return;
}

