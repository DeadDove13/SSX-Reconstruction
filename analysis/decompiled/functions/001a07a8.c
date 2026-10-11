/* Ghidra pseudocode. PS2 address: 001a07a8. Not validated source. */

ushort * FUN_001a07a8(int param_1,uint param_2)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x20);
  if ((int)param_2 < iVar6) {
    return (ushort *)0x0;
  }
  if ((int)param_2 <= *(int *)(param_1 + 0x24)) {
    return (ushort *)(*(int *)(param_1 + 8) + param_2 * 0xc + iVar6 * -0xc);
  }
  iVar6 = *(int *)(param_1 + 0x24) - iVar6;
  iVar1 = iVar6 + *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 4);
  do {
    iVar5 = iVar1 >> 1;
    puVar2 = (ushort *)(iVar5 * 0xc + *(int *)(param_1 + 8));
    uVar3 = (uint)*puVar2;
    if (param_2 == uVar3) {
      return puVar2;
    }
    if ((int)uVar3 <= (int)param_2) {
      iVar6 = iVar5 + 1;
      iVar5 = iVar4;
    }
    iVar1 = iVar6 + iVar5;
    iVar4 = iVar5;
  } while (iVar6 < iVar5);
  return (ushort *)0x0;
}

