/* Ghidra pseudocode. PS2 address: 00122278. Not validated source. */

void FUN_00122278(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  if ((param_2 == 0) || (lVar2 = FUN_001222f0(param_1), lVar2 == 0)) {
    iVar3 = (int)param_1;
    uVar1 = *(uint *)(*(int *)(iVar3 + 0x28) + 0xe8);
    *(uint *)(*(int *)(iVar3 + 0x28) + 0xe8) = uVar1 & 0xffff0100 | (int)uVar1 >> 0x10 | 2;
    if (param_1 != 0) {
      (**(code **)(*(int *)(iVar3 + 8) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 8) + 8),3);
    }
  }
  return;
}

