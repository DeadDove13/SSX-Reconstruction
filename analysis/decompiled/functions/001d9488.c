/* Ghidra pseudocode. PS2 address: 001d9488. Not validated source. */

void FUN_001d9488(int param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_240 [512];
  
  uVar3 = FUN_0019a998(0xad);
  iVar5 = *(int *)(*(int *)(param_1 + 0x16c) + 0x24);
  iVar2 = iVar5 + 0x3ff;
  iVar5 = iVar5 + 0x7fe;
  if (-1 < iVar2) {
    iVar5 = iVar2;
  }
  FUN_0019a8a8(auStack_240,uVar3,*(int *)(*(int *)(param_1 + 0x16c) + 0xc) + 1,(iVar5 >> 10) + 0x8a)
  ;
  iVar5 = *(int *)(param_1 + 0x170);
  sVar1 = *(short *)(iVar5 + 0x58);
  uVar3 = FUN_0019a998(0x86);
  uVar4 = FUN_0019a998(0x79);
  (**(code **)(iVar5 + 0x5c))(param_1 + sVar1,auStack_240,uVar3,uVar4,1);
  return;
}

