/* Ghidra pseudocode. PS2 address: 001faf10. Not validated source. */

void FUN_001faf10(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x32000) + 0x3c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x32000) + 0x38),0,0x20);
  return;
}

