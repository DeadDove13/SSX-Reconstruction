/* Ghidra pseudocode. PS2 address: 001faed8. Not validated source. */

void FUN_001faed8(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x32000) + 0x3c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x32000) + 0x38),0,0x20);
  return;
}

