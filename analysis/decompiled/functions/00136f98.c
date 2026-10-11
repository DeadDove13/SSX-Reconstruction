/* Ghidra pseudocode. PS2 address: 00136f98. Not validated source. */

void FUN_00136f98(undefined8 param_1)

{
  *(int *)((int)param_1 + 0xa4) = *(int *)((int)param_1 + 0xa4) + 1;
  FUN_00137ea0(0x3fc00000,param_1,4,0);
  return;
}

