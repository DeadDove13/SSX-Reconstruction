/* Ghidra pseudocode. PS2 address: 001466d0. Not validated source. */

void FUN_001466d0(undefined8 param_1,int param_2)

{
  (**(code **)(*(int *)(param_2 + 0x1d0) + 0x14))
            (param_2 + *(short *)(*(int *)(param_2 + 0x1d0) + 0x10));
  return;
}

