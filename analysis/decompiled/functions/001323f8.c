/* Ghidra pseudocode. PS2 address: 001323f8. Not validated source. */

void FUN_001323f8(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x1c);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x18) + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  }
  if (*(int *)(param_2 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x18);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x1c) + 0x18) = *(undefined4 *)(param_2 + 0x18);
  }
  FUN_00131d18(param_1 + 0x10);
  return;
}

