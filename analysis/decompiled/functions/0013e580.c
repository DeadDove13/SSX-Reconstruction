/* Ghidra pseudocode. PS2 address: 0013e580. Not validated source. */

void FUN_0013e580(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  (**(code **)(iVar1 + 0x8c))(*param_1 + (int)*(short *)(iVar1 + 0x88));
  return;
}

