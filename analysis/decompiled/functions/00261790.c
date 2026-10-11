/* Ghidra pseudocode. PS2 address: 00261790. Not validated source. */

undefined8 FUN_00261790(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  
  iVar10 = (int)param_3 >> 5;
  iVar8 = (int)param_2;
  iVar2 = iVar10 + *(int *)(iVar8 + 0x10);
  iVar4 = *(int *)(iVar8 + 4);
  for (iVar6 = *(int *)(iVar8 + 8); iVar6 < iVar2 + 1; iVar6 = iVar6 << 1) {
    iVar4 = iVar4 + 1;
  }
  puVar9 = (uint *)(iVar8 + 0x14);
  param_3 = param_3 & 0x1f;
  uVar1 = FUN_00260fa8(param_1,iVar4);
  puVar5 = (uint *)((int)uVar1 + 0x14);
  if (0 < iVar10) {
    do {
      *puVar5 = 0;
      iVar10 = iVar10 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar10 != 0);
  }
  puVar7 = puVar9 + *(int *)(iVar8 + 0x10);
  if (param_3 == 0) {
    do {
      uVar3 = *puVar9;
      puVar9 = puVar9 + 1;
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    } while (puVar9 < puVar7);
  }
  else {
    uVar3 = 0;
    do {
      *puVar5 = *puVar9 << param_3 | uVar3;
      puVar5 = puVar5 + 1;
      uVar3 = *puVar9;
      puVar9 = puVar9 + 1;
      uVar3 = uVar3 >> (0x20 - param_3 & 0x1f);
    } while (puVar9 < puVar7);
    iVar6 = iVar2 + 1;
    if (uVar3 != 0) {
      iVar6 = iVar2 + 2;
    }
    *puVar5 = uVar3;
    iVar2 = iVar6 + -1;
  }
  *(int *)((int)uVar1 + 0x10) = iVar2;
  FUN_00261050(param_1,param_2);
  return uVar1;
}

