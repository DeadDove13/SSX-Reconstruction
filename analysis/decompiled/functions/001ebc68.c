/* Ghidra pseudocode. PS2 address: 001ebc68. Not validated source. */

void FUN_001ebc68(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  
  puVar5 = (undefined8 *)FUN_001ebc48(param_1,0x40);
  iVar9 = (int)param_1;
  *(undefined8 **)(iVar9 + 0x18) = puVar5;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  *puVar5 = *param_2;
  puVar5[1] = uVar6;
  puVar5[2] = uVar7;
  puVar5[3] = uVar8;
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  puVar5[4] = param_2[4];
  puVar5[5] = uVar6;
  puVar5[6] = uVar7;
  puVar5[7] = uVar8;
  uVar6 = FUN_001ebc48(param_1,*(undefined4 *)((int)param_2 + 0x14));
  uVar1 = *(undefined4 *)((int)param_2 + 0x14);
  *(int *)(iVar9 + 0x14) = (int)uVar6;
  *(int *)(iVar9 + 0x1c) = (int)uVar6;
  FUN_0025a55c(uVar6,param_3,uVar1);
  iVar2 = *(int *)(iVar9 + 0x1c);
  iVar3 = *(int *)(param_2 + 3);
  iVar4 = *(int *)((int)param_2 + 0x1c);
  *(int *)(iVar9 + 0x2c) = iVar2 + *(int *)(param_2 + 4);
  *(int *)(iVar9 + 0x24) = iVar2 + iVar3;
  *(int *)(iVar9 + 0x28) = iVar2 + iVar4;
  *(int *)(iVar9 + 0x20) = iVar2;
  return;
}

