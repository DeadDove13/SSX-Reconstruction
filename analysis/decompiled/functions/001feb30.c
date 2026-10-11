/* Ghidra pseudocode. PS2 address: 001feb30. Not validated source. */

void FUN_001feb30(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x32000) + 0x3c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x32000) + 0x38),1,0x4e);
  return;
}

