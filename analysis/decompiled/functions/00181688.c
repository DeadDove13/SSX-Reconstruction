/* Ghidra pseudocode. PS2 address: 00181688. Not validated source. */

void FUN_00181688(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x1fc) + 0x1c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x1fc) + 0x18));
  return;
}

