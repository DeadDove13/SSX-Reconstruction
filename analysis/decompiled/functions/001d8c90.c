/* Ghidra pseudocode. PS2 address: 001d8c90. Not validated source. */

void FUN_001d8c90(int param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_240 [512];
  
  uVar3 = FUN_0019a998(0x85);
  FUN_0019a8a8(auStack_240,uVar3,*(int *)(*(int *)(param_1 + 0x16c) + 0xc) + 1);
  iVar2 = *(int *)(param_1 + 0x170);
  sVar1 = *(short *)(iVar2 + 0x58);
  uVar3 = FUN_0019a998(0x86);
  uVar4 = FUN_0019a998(0x79);
  (**(code **)(iVar2 + 0x5c))(param_1 + sVar1,auStack_240,uVar3,uVar4,1);
  return;
}

