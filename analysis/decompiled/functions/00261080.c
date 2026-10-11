/* Ghidra pseudocode. PS2 address: 00261080. Not validated source. */

undefined8 FUN_00261080(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  
  iVar6 = 0;
  iVar8 = (int)param_2;
  puVar7 = (uint *)(iVar8 + 0x14);
  iVar1 = *(int *)(iVar8 + 0x10);
  puVar5 = puVar7;
  do {
    iVar6 = iVar6 + 1;
    uVar4 = (*puVar5 & 0xffff) * param_3 + param_4;
    uVar3 = (*puVar5 >> 0x10) * param_3 + (uVar4 >> 0x10);
    param_4 = uVar3 >> 0x10;
    *puVar5 = uVar3 * 0x10000 + (uVar4 & 0xffff);
    puVar5 = puVar5 + 1;
  } while (iVar6 < iVar1);
  if (param_4 != 0) {
    if (*(int *)(iVar8 + 8) <= iVar1) {
      uVar2 = FUN_00260fa8(param_1,*(int *)(iVar8 + 4) + 1);
      FUN_0025a55c((int)uVar2 + 0xc,iVar8 + 0xc,*(int *)(iVar8 + 0x10) * 4 + 8);
      FUN_00261050(param_1,param_2);
      puVar7 = (uint *)((int)uVar2 + 0x14);
      param_2 = uVar2;
    }
    puVar7[iVar1] = param_4;
    *(int *)((int)param_2 + 0x10) = iVar1 + 1;
  }
  return param_2;
}

