/* Ghidra pseudocode. PS2 address: 001c5048. Not validated source. */

void FUN_001c5048(int param_1,int param_2,int param_3)

{
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 1;
  }
  if (param_3 == 1) {
    if (*(int *)(param_1 + 0x50) != param_2) {
      *(int *)(param_1 + 0x50) = param_2;
      FUN_001d37b0(*(undefined4 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0x54));
      return;
    }
  }
  else if ((param_3 == 2) && (*(int *)(param_1 + 0x54) != param_2)) {
    *(int *)(param_1 + 0x54) = param_2;
    FUN_001d37b0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x50),param_2);
    return;
  }
  return;
}

