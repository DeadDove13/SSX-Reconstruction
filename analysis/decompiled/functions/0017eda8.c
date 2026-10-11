/* Ghidra pseudocode. PS2 address: 0017eda8. Not validated source. */

void FUN_0017eda8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 4) = &DAT_002b2d38;
  if (*(int *)(iVar1 + 0xc94) == 0) {
    FUN_0023a998(*(undefined4 *)(iVar1 + 0xc84));
  }
  else {
    FUN_00235ff0(*(undefined4 *)(iVar1 + 0xc90));
    uStack_40 = 0;
    uStack_3c = 0;
    FUN_00235eb0(*(undefined4 *)(iVar1 + 0xc90),&uStack_40,(uint)&uStack_40 | 4);
  }
  FUN_0017e8d0(param_1,param_2);
  return;
}

