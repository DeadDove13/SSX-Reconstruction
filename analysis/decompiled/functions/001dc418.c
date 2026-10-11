/* Ghidra pseudocode. PS2 address: 001dc418. Not validated source. */

void FUN_001dc418(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x170) + 0x9c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x170) + 0x98));
  return;
}

