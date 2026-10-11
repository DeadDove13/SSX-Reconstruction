/* Ghidra pseudocode. PS2 address: 00168bd8. Not validated source. */

void FUN_00168bd8(int param_1)

{
  if (*(int *)(param_1 + 0x44) != 0) {
    (**(code **)(*(int *)(param_1 + 0x284) + 0x3c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x284) + 0x38));
  }
  return;
}

