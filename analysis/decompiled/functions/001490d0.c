/* Ghidra pseudocode. PS2 address: 001490d0. Not validated source. */

void FUN_001490d0(int param_1)

{
  FUN_0023bbd0(param_1 + 0x224,0,0xc);
  FUN_0023bbd0(param_1 + 0x230,0xffffffffffffffff,6);
  (**(code **)(*(int *)(param_1 + 0x1d0) + 0x14))
            (param_1 + *(short *)(*(int *)(param_1 + 0x1d0) + 0x10));
  return;
}

