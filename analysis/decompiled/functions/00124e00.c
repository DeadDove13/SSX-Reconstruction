/* Ghidra pseudocode. PS2 address: 00124e00. Not validated source. */

void FUN_00124e00(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_002859e4;
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 8) = &DAT_002a9f50;
  FUN_00132160(*(undefined4 *)(iVar2 + 0x28),iVar3 + 0x2c0);
  uVar1 = *(uint *)(*(int *)(iVar3 + 0x28) + 0xe8);
  *(uint *)(*(int *)(iVar3 + 0x28) + 0xe8) = uVar1 & 0xffff0100 | (int)uVar1 >> 0x10 | 2;
  FUN_0020dd00(iVar3 + 0x150,2);
  FUN_001221d8(param_1,param_2);
  return;
}

