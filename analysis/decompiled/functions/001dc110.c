/* Ghidra pseudocode. PS2 address: 001dc110. Not validated source. */

void FUN_001dc110(int param_1,undefined8 param_2,int param_3)

{
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_3;
  FUN_00211428(*(undefined4 *)(param_1 + 0x16c));
  return;
}

