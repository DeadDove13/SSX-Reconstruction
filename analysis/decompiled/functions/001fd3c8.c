/* Ghidra pseudocode. PS2 address: 001fd3c8. Not validated source. */

void FUN_001fd3c8(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x32000) + 0x3c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x32000) + 0x38),1,0x7e);
  return;
}

