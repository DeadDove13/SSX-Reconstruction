/* Ghidra pseudocode. PS2 address: 001d90e0. Not validated source. */

void FUN_001d90e0(int param_1)

{
  short sVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_240 [512];
  
  lVar3 = FUN_00211ca8(*(int *)(param_1 + 0x16c),*(undefined4 *)(*(int *)(param_1 + 0x16c) + 0xc));
  if (lVar3 == -10) {
    iVar2 = *(int *)(param_1 + 0x170);
    sVar1 = *(short *)(iVar2 + 0x58);
    uVar4 = FUN_0019a998(0x9e);
    uVar5 = FUN_0019a998(0x9b);
    (**(code **)(iVar2 + 0x5c))(param_1 + sVar1,uVar4,uVar5,0,1);
  }
  else {
    uVar4 = FUN_0019a998(0x92);
    FUN_0019a8a8(auStack_240,uVar4,*(int *)(*(int *)(param_1 + 0x16c) + 0xc) + 1);
    iVar2 = *(int *)(param_1 + 0x170);
    sVar1 = *(short *)(iVar2 + 0x58);
    uVar4 = FUN_0019a998(0x9b);
    (**(code **)(iVar2 + 0x5c))(param_1 + sVar1,auStack_240,uVar4,0,1);
  }
  return;
}

