/* Ghidra pseudocode. PS2 address: 00170480. Not validated source. */

void FUN_00170480(undefined8 param_1,long param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00209730(DAT_002c56e8,0);
  iVar3 = (int)param_1;
  if (param_2 == -1) {
    iVar2 = *(int *)(iVar3 + 4);
    sVar1 = *(short *)(iVar2 + 0x98);
    uVar4 = FUN_0016f348(param_1,*(undefined4 *)(*(int *)(iVar3 + 0xb3c) + 0x46c));
    iVar3 = (**(code **)(iVar2 + 0x9c))(iVar3 + sVar1,uVar4,0);
    uVar4 = FUN_0016f160(param_1);
    FUN_001ef8f0(DAT_002c56e8,uVar4,iVar3 + 1);
    return;
  }
  uVar4 = FUN_0016f160(param_1);
  iVar2 = *(int *)(iVar3 + 4);
  sVar1 = *(short *)(iVar2 + 0x98);
  uVar5 = FUN_0016f348(param_1,param_2);
  iVar3 = (**(code **)(iVar2 + 0x9c))(iVar3 + sVar1,uVar5,param_2);
  FUN_001ef8f0(DAT_002c56e8,uVar4,iVar3 + 1);
  return;
}

