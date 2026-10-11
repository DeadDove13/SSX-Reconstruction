/* Ghidra pseudocode. PS2 address: 0019f178. Not validated source. */

void FUN_0019f178(int param_1)

{
  if ((*(uint *)(*(int *)(param_1 + 0x70) + 0xe8) & 4) != 0) {
    (**(code **)(*(int *)(param_1 + 0x50) + 0xf4))
              (param_1 + 0x18 + (int)*(short *)(*(int *)(param_1 + 0x50) + 0xf0),
               *(int *)(param_1 + 0x70),1);
  }
  return;
}

