/* Ghidra pseudocode. PS2 address: 00122e10. Not validated source. */

void FUN_00122e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)((int)param_1 + 0x100);
  if ((iVar1 == 0) ||
     (lVar3 = (**(code **)(*(int *)(iVar1 + 8) + 100))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 8) + 0x60)), lVar3 != 0)) {
    lVar3 = FUN_00222970(0x299cc8,param_1,1);
    if (lVar3 != -1) {
      lVar4 = FUN_002107c8(0x298590,0xf0,0x40000000,0x2c4080,0,0);
      if (lVar4 != 0) {
        FUN_0023bbd0(lVar4,0xffffffffdeadc0de,0xf0);
      }
      FUN_00122ca8(lVar4,3,lVar3,param_1,param_2,param_3,param_4);
      return;
    }
  }
  else {
    iVar1 = *(int *)((int)param_1 + 0x100);
    iVar2 = *(int *)(iVar1 + 8);
    (**(code **)(iVar2 + 0x94))(iVar1 + *(short *)(iVar2 + 0x90),param_3,param_4,param_2);
  }
  return;
}

