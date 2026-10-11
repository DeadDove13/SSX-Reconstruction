/* Ghidra pseudocode. PS2 address: 00137a48. Not validated source. */

undefined4 FUN_00137a48(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (param_2 == 0) {
    *(int *)(iVar2 + 0x78) = *(int *)(iVar2 + 0x78) + 1;
  }
  else {
    *(int *)(iVar2 + 0xa8) = *(int *)(iVar2 + 0xa8) + 1;
    FUN_00137ea0(0x3fc00000,param_1,5,0);
  }
  lVar1 = FUN_00136a70(param_1);
  if (0 < lVar1) {
    FUN_00137ea0(0x3fc00000,param_1,1,lVar1);
  }
  FUN_00137bc0(param_1);
  return DAT_002c4308;
}

