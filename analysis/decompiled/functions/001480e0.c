/* Ghidra pseudocode. PS2 address: 001480e0. Not validated source. */

void FUN_001480e0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x1d0);
  (**(code **)(iVar1 + 0x14))((int)param_1 + (int)*(short *)(iVar1 + 0x10));
  FUN_001491b8(0x2795b8,param_1);
  return;
}

