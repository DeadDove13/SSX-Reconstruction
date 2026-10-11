/* Ghidra pseudocode. PS2 address: 001310c0. Not validated source. */

void FUN_001310c0(undefined8 param_1,int param_2)

{
  FUN_0012f628(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x4c) = 0xffffffff;
  return;
}

