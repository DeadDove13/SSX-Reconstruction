/* Ghidra pseudocode. PS2 address: 001c52e8. Not validated source. */

void FUN_001c52e8(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x14) != param_2) {
    *(int *)(param_1 + 0x14) = param_2;
    FUN_001d3828(*(undefined4 *)(param_1 + 8),param_1 + 0xc);
    return;
  }
  return;
}

