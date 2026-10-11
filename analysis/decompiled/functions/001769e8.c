/* Ghidra pseudocode. PS2 address: 001769e8. Not validated source. */

void FUN_001769e8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 0x40) = &DAT_002b0db0;
  FUN_0016eb08(*(undefined4 *)(iVar3 + 0x10),0x361);
  FUN_0016eb08(*(undefined4 *)(iVar3 + 0x10),0x360);
  FUN_0016eb08(*(undefined4 *)(iVar3 + 0x10),0x1af);
  FUN_0016eb08(*(undefined4 *)(iVar3 + 0x10),0x1ae);
  FUN_0016eae0(*(undefined4 *)(iVar3 + 0x10),0x362);
  FUN_0016eae0(*(undefined4 *)(iVar3 + 0x10),0x363);
  FUN_0016eae0(*(undefined4 *)(iVar3 + 0x10),0x170);
  FUN_0016eb08(*(undefined4 *)(iVar3 + 0x10),0x165);
  iVar1 = *(int *)(*(int *)(iVar3 + 0x10) + 0xb3c);
  iVar2 = *(int *)(iVar1 + 0x488);
  *(undefined4 *)(iVar1 + 0x4ec) = 3;
  uVar4 = FUN_00165b00();
  *(undefined4 *)(iVar2 + 0xb48) = uVar4;
  FUN_00177228(iVar3 + 0x44,2);
  FUN_001770a8(param_1,param_2);
  return;
}

