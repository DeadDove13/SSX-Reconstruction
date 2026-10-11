/* Ghidra pseudocode. PS2 address: 00181638. Not validated source. */

void FUN_00181638(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x1fc) + 0xc))
            (param_1 + *(short *)(*(int *)(param_1 + 0x1fc) + 8));
  return;
}

