/* Ghidra pseudocode. PS2 address: 002048f8. Not validated source. */

void FUN_002048f8(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_001f40a8();
  iVar1 = *(int *)((int)param_2 + 0x32000);
  (**(code **)(iVar1 + 0x2c))(param_1,(int)param_2 + (int)*(short *)(iVar1 + 0x28));
  FUN_002072b0(param_2);
  FUN_002094c8(param_2);
  FUN_0020a5c8(param_2);
  return;
}

