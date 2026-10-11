/* Ghidra pseudocode. PS2 address: 00176ab8. Not validated source. */

void FUN_00176ab8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  FUN_0016eae0(*(undefined4 *)(param_1 + 0x10),0x361);
  FUN_0016eae0(*(undefined4 *)(param_1 + 0x10),0x360);
  FUN_0016eae0(*(undefined4 *)(param_1 + 0x10),0x1af);
  FUN_0016eae0(*(undefined4 *)(param_1 + 0x10),0x1ae);
  FUN_0016eb08(*(undefined4 *)(param_1 + 0x10),0x362);
  FUN_0016eb08(*(undefined4 *)(param_1 + 0x10),0x363);
  FUN_0016eb08(*(undefined4 *)(param_1 + 0x10),0x170);
  FUN_0016eae0(*(undefined4 *)(param_1 + 0x10),0x165);
  FUN_0016cda0(*(undefined4 *)(param_1 + 0x10),0);
  uVar3 = FUN_0016f348(*(undefined4 *)(param_1 + 0x10),0);
  FUN_0016f018(*(undefined4 *)(param_1 + 0x10),uVar3,0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xb3c);
  iVar2 = *(int *)(iVar1 + 0x488);
  *(undefined4 *)(iVar1 + 0x4ec) = 3;
  uVar4 = FUN_00165b00();
  *(undefined4 *)(iVar2 + 0xb48) = uVar4;
  return;
}

