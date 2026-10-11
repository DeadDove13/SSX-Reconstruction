/* Ghidra pseudocode. PS2 address: 00180ed8. Not validated source. */

undefined4 FUN_00180ed8(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined4 auStack_50 [4];
  
  FUN_0016dc60();
  iVar6 = (int)param_1;
  uVar3 = (**(code **)(*(int *)(iVar6 + 4) + 0x74))
                    (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x70),0xffffffffffffffff);
  iVar1 = (**(code **)(*(int *)(iVar6 + 4) + 0x9c))
                    (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x98),0x12e,
                     *(undefined4 *)(*(int *)(iVar6 + 0xb50) + 0x46c));
  uVar4 = FUN_0016ff18(param_1,iVar1 + 1,DAT_002c4cf8);
  iVar1 = FUN_00182670(0x285290,1);
  if (*(int *)(iVar1 + 4) == 0) {
    FUN_0016ebb8(param_1,0x12e);
    FUN_0016eab8(param_1,0x12e);
    FUN_0016eb08(param_1,uVar4);
    FUN_0016eb08(param_1,0x12e);
  }
  else {
    FUN_0016eb88(param_1,0x12e);
    FUN_0016ea88(param_1,0x12e);
    FUN_0016eae0(param_1,uVar4);
    FUN_0016eae0(param_1,0x12e);
  }
  if ((uVar3 & 0x880) == 0) {
    if ((uVar3 & 0x120) == 0) {
      uVar2 = 0;
      if ((uVar3 & 0x10) != 0) {
        FUN_001faea0(DAT_002c56e8);
        FUN_001707a8(param_1,7,0xffffffffffffffff);
        uVar2 = 4;
        *(undefined4 *)(*(int *)(iVar6 + 0xb50) + 0x4f4) = 1;
      }
    }
    else {
      FUN_001faea0(DAT_002c56e8);
      uVar2 = 3;
    }
  }
  else {
    FUN_001faea0(DAT_002c56e8);
    FUN_00170480(param_1,*(undefined4 *)(*(int *)(iVar6 + 0xb50) + 0x46c));
    lVar5 = FUN_0016f348(param_1,0);
    if (lVar5 == 0x12e) {
      *(undefined4 *)(*(int *)(iVar6 + 0xb50) + 0x470) = 1;
      FUN_001540a8(0x27a598,1,3);
      uVar2 = *(undefined4 *)(iVar6 + 0xb50);
    }
    else {
      uVar2 = *(undefined4 *)(iVar6 + 0xb50);
    }
    FUN_00168348(uVar2,auStack_50,(uint)auStack_50 | 4);
    FUN_001707a8(param_1,auStack_50[0],0xffffffffffffffff);
    uVar2 = 4;
  }
  return uVar2;
}

