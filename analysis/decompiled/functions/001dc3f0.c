/* Ghidra pseudocode. PS2 address: 001dc3f0. Not validated source. */

void FUN_001dc3f0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x170) + 0x8c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x170) + 0x88));
  return;
}

