/* Ghidra pseudocode. PS2 address: 001d8db0. Not validated source. */

void FUN_001d8db0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(int *)(param_1 + 0x16c) + 0xc) == 0) {
    iVar2 = *(int *)(param_1 + 0x170);
    sVar1 = *(short *)(iVar2 + 0x60);
    uVar3 = FUN_0019a998(0x8f);
    (**(code **)(iVar2 + 100))(param_1 + sVar1,uVar3);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x170);
    sVar1 = *(short *)(iVar2 + 0x60);
    uVar3 = FUN_0019a998(0x90);
    (**(code **)(iVar2 + 100))(param_1 + sVar1,uVar3);
  }
  return;
}

