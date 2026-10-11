/* Ghidra pseudocode. PS2 address: 001dc0a8. Not validated source. */

void FUN_001dc0a8(int param_1,undefined8 param_2,int param_3)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_3;
  FUN_00211370(*(undefined4 *)(param_1 + 0x16c));
  return;
}

