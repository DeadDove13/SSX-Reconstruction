/* Ghidra pseudocode. PS2 address: 0012e908. Not validated source. */

undefined8 FUN_0012e908(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  FUN_00185fd0(param_1,param_2,0x19);
  *(undefined **)(iVar2 + 8) = &DAT_002a9030;
  FUN_001dfb30(iVar2 + 0x20);
  *(int *)(iVar2 + 0x18) = (int)param_3;
  iVar1 = (int)param_4 + 8;
  *(int *)(iVar2 + 0x1c) = (int)param_4;
  if (param_4 == 0) {
    iVar1 = 0;
  }
  FUN_001dfb38(iVar2 + 0x20,param_3,iVar1);
  return param_1;
}

