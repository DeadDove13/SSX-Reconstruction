/* Ghidra pseudocode. PS2 address: 0019d638. Not validated source. */

void FUN_0019d638(int param_1)

{
  if ((*(uint *)(*(int *)(param_1 + 0x58) + 0xe8) & 4) != 0) {
    (**(code **)(*(int *)(param_1 + 0x38) + 0xf4))
              (param_1 + *(short *)(*(int *)(param_1 + 0x38) + 0xf0),*(int *)(param_1 + 0x58),1);
  }
  return;
}

