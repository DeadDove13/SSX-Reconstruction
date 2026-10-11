/* Ghidra pseudocode. PS2 address: 00181660. Not validated source. */

void FUN_00181660(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x1fc) + 0x14))
            (param_1 + *(short *)(*(int *)(param_1 + 0x1fc) + 0x10));
  return;
}

