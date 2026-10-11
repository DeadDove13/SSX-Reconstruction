/* Ghidra pseudocode. PS2 address: 001d91c0. Not validated source. */

void FUN_001d91c0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x170);
  sVar1 = *(short *)(iVar2 + 0x58);
  uVar3 = FUN_0019a998(0x82);
  uVar4 = FUN_0019a998(0x9b);
  (**(code **)(iVar2 + 0x5c))(param_1 + sVar1,uVar3,uVar4,0,1);
  return;
}

