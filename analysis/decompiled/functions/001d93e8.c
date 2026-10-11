/* Ghidra pseudocode. PS2 address: 001d93e8. Not validated source. */

void FUN_001d93e8(int param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_230 [512];
  
  uVar3 = FUN_0019a998(0xad);
  iVar4 = *(int *)(*(int *)(param_1 + 0x16c) + 0x24);
  iVar2 = iVar4 + 0x3ff;
  iVar4 = iVar4 + 0x7fe;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  FUN_0019a8a8(auStack_230,uVar3,*(int *)(*(int *)(param_1 + 0x16c) + 0xc) + 1,(iVar4 >> 10) + 0x8a)
  ;
  iVar4 = *(int *)(param_1 + 0x170);
  sVar1 = *(short *)(iVar4 + 0x58);
  uVar3 = FUN_0019a998(0x9b);
  (**(code **)(iVar4 + 0x5c))(param_1 + sVar1,auStack_230,uVar3,0,1);
  return;
}

