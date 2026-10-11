/* Ghidra pseudocode. PS2 address: 001c51e8. Not validated source. */

void FUN_001c51e8(int param_1,int param_2,long param_3)

{
  if (param_3 == 1) {
    if (*(int *)(param_1 + 0x28) != param_2) {
      *(int *)(param_1 + 0x28) = param_2;
      FUN_001d3828(*(undefined4 *)(param_1 + 8),param_1 + 0xc);
      return;
    }
  }
  else if ((param_3 == 2) && (*(int *)(param_1 + 0x40) != param_2)) {
    *(int *)(param_1 + 0x40) = param_2;
    FUN_001d3828(*(undefined4 *)(param_1 + 8),param_1 + 0xc);
    return;
  }
  return;
}

