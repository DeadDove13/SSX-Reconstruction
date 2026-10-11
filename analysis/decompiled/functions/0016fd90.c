/* Ghidra pseudocode. PS2 address: 0016fd90. Not validated source. */

void FUN_0016fd90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0016f348(param_1,param_3);
  FUN_0016f018(param_1,uVar2,param_3);
  iVar1 = *(int *)((int)param_1 + 4);
  (**(code **)(iVar1 + 0xa4))((int)param_1 + (int)*(short *)(iVar1 + 0xa0),param_2,param_3);
  uVar2 = FUN_0016f348(param_1,param_3);
  FUN_0016eec0(param_1,uVar2,param_3);
  return;
}

