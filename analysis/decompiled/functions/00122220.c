/* Ghidra pseudocode. PS2 address: 00122220. Not validated source. */

void FUN_00122220(long param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  uVar1 = *(uint *)(*(int *)(iVar2 + 0x28) + 0xe8);
  *(uint *)(*(int *)(iVar2 + 0x28) + 0xe8) = uVar1 & 0xffff0000 | (int)uVar1 >> 0x10 | 2;
  if (param_1 != 0) {
    (**(code **)(*(int *)(iVar2 + 8) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 8) + 8),3);
  }
  return;
}

