/* Ghidra pseudocode. PS2 address: 00171688. Not validated source. */

void FUN_00171688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  uVar3 = FUN_0016f348();
  lVar4 = FUN_00171770(param_1,uVar3);
  iVar6 = (int)param_1;
  lVar5 = FUN_00168268(*(undefined4 *)(iVar6 + 0xb3c),param_2);
  if (lVar4 != lVar5) {
    FUN_001540a8(0x27a598,param_2,lVar4);
    FUN_0017c308(param_1);
    iVar2 = *(int *)(iVar6 + 4);
    sVar1 = *(short *)(iVar2 + 0x98);
    uVar3 = FUN_0016f348(param_1,*(undefined4 *)(*(int *)(iVar6 + 0xb3c) + 0x46c));
    DAT_002c4910 = (**(code **)(iVar2 + 0x9c))
                             (iVar6 + sVar1,uVar3,*(undefined4 *)(*(int *)(iVar6 + 0xb3c) + 0x46c));
    FUN_0017be90(param_3);
    FUN_0017af68(param_3);
    return;
  }
  return;
}

