/* Ghidra pseudocode. PS2 address: 00136c88. Not validated source. */

undefined4 FUN_00136c88(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(int *)(iVar1 + 0x7c) = *(int *)(iVar1 + 0x7c) + (int)param_2;
  FUN_00137ea0(0x40200000,param_1,6,param_2);
  if (param_2 == 500) {
    *(int *)(iVar1 + 0x80) = *(int *)(iVar1 + 0x80) + 1;
  }
  if (param_2 == 2000) {
    *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + 1;
  }
  if (param_2 == 5000) {
    *(int *)(iVar1 + 0x88) = *(int *)(iVar1 + 0x88) + 1;
  }
  return DAT_002c1ca4;
}

