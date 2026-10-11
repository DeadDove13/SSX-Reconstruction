/* Ghidra pseudocode. PS2 address: 001f9ba8. Not validated source. */

void FUN_001f9ba8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_2;
  uVar1 = *(undefined4 *)(iVar3 + 0x34c);
  uVar2 = FUN_001f8aa0();
  *(undefined4 *)(iVar3 + 0x6bc) = uVar1;
  *(undefined4 *)(iVar3 + 0x6b8) = uVar1;
  *(int *)(iVar3 + 0x6c0) = (int)uVar2;
  *(int *)(iVar3 + 0x6c4) = (int)uVar2;
  FUN_001f8e40(param_1,param_2);
  FUN_001f9190(param_1,param_2,uVar2);
  FUN_001f97d0(param_1,param_2,uVar2);
  return;
}

