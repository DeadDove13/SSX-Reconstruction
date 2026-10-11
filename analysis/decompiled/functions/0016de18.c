/* Ghidra pseudocode. PS2 address: 0016de18. Not validated source. */

void FUN_0016de18(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(*(int *)(iVar3 + 0xb3c) + 0x488);
  *(undefined4 *)(*(int *)(iVar3 + 0xb3c) + 0x4ec) = 0;
  uVar4 = FUN_00165b00();
  iVar2 = *(int *)(iVar3 + 0xb3c);
  *(undefined4 *)(iVar1 + 0xb48) = uVar4;
  FUN_00169be8(iVar2 + 0x4c8);
  (**(code **)(*(int *)(iVar3 + 4) + 0x6c))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x68));
  FUN_00170590(param_1,0,0,1);
  *(undefined4 *)(iVar3 + 0xb24) = 0;
  (**(code **)(*(int *)(iVar3 + 4) + 100))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x60));
  return;
}

