/* Ghidra pseudocode. PS2 address: 001816b0. Not validated source. */

void FUN_001816b0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x1fc) + 0x24))
            (param_1 + *(short *)(*(int *)(param_1 + 0x1fc) + 0x20));
  return;
}

