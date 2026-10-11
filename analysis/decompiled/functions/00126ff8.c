/* Ghidra pseudocode. PS2 address: 00126ff8. Not validated source. */

void FUN_00126ff8(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  uVar1 = *(undefined2 *)(iVar3 + 0x36);
  uVar2 = *(uint *)(*(int *)(iVar3 + 0x28) + 0xe8);
  *(undefined **)(iVar3 + 8) = &DAT_002a9d80;
  *(uint *)(*(int *)(iVar3 + 0x28) + 0xe8) = uVar2 & 0xffff0100 | (int)uVar2 >> 0x10 | 2;
  iVar3 = FUN_00223368(0x299cc8,uVar1);
  *(undefined2 *)(iVar3 + 0x24) = *(undefined2 *)(iVar3 + 0x26);
  FUN_001221d8(param_1,param_2);
  return;
}

