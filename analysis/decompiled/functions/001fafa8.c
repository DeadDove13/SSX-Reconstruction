/* Ghidra pseudocode. PS2 address: 001fafa8. Not validated source. */

void FUN_001fafa8(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x32000) + 0x3c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x32000) + 0x38),0,0x12);
  return;
}

