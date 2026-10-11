/* Ghidra pseudocode. PS2 address: 00207470. Not validated source. */

void FUN_00207470(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x32000) + 0x44))
            (param_1 + *(short *)(*(int *)(param_1 + 0x32000) + 0x40));
  return;
}

