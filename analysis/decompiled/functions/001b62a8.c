/* Ghidra pseudocode. PS2 address: 001b62a8. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b62a8(undefined8 param_1,ulong param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uStack_120;
  short asStack_118 [4];
  undefined8 auStack_110 [12];
  undefined8 uStack_b0;
  short asStack_a8 [4];
  undefined8 uStack_a0;
  short asStack_98 [4];
  undefined8 auStack_90 [4];
  short sStack_70;
  short sStack_68;
  short sStack_60;
  short sStack_58;
  
  iVar12 = (int)param_1;
  *(undefined **)(iVar12 + 0x170) = &DAT_002b5bd0;
  *(undefined8 **)(*(int *)(iVar12 + 0x174) + 0x18) = &DAT_002b5b60;
  sVar4 = DAT_002b5bb0;
  sVar3 = DAT_002b5ba8;
  sVar2 = DAT_002b5ba0;
  if (param_2 == 0) {
    puVar5 = &DAT_002b5b60;
    puVar6 = &uStack_b0;
    do {
      puVar8 = puVar6;
      puVar7 = puVar5;
      uVar9 = puVar7[1];
      uVar10 = puVar7[2];
      uVar11 = puVar7[3];
      *puVar8 = *puVar7;
      puVar8[1] = uVar9;
      puVar8[2] = uVar10;
      puVar8[3] = uVar11;
      puVar5 = puVar7 + 4;
      puVar6 = puVar8 + 4;
    } while (puVar7 + 4 != (undefined8 *)&UNK_002b5bc0);
    uVar9 = puVar7[5];
    puVar8[4] = _UNK_002b5bc0;
    puVar8[5] = uVar9;
    sStack_60 = (short)param_1 - ((short)*(int *)(iVar12 + 0x174) + -0x400);
    sStack_58 = DAT_002b5bb8 + sStack_60;
    asStack_a8[0] = DAT_002b5b68 + sStack_60;
    asStack_98[0] = DAT_002b5b78 + sStack_60;
    *(undefined8 **)(*(int *)(iVar12 + 0x174) + 0x18) = &uStack_b0;
    sStack_70 = sVar2 + sStack_60;
    sStack_68 = sVar3 + sStack_60;
    sStack_60 = sVar4 + sStack_60;
  }
  iVar1 = *(int *)(iVar12 + 0x174);
  *(undefined **)(iVar12 + 0x170) = &DAT_002b6090;
  *(undefined8 **)(iVar1 + 0x18) = &DAT_002b6020;
  puVar5 = &uStack_120;
  puVar6 = &DAT_002b6020;
  do {
    puVar7 = puVar6;
    puVar8 = puVar5;
    uVar10 = puVar7[1];
    uVar11 = puVar7[2];
    uVar9 = puVar7[3];
    *puVar8 = *puVar7;
    puVar8[1] = uVar10;
    puVar8[2] = uVar11;
    puVar8[3] = uVar9;
    puVar5 = puVar8 + 4;
    puVar6 = puVar7 + 4;
  } while (puVar7 + 4 != (undefined8 *)&UNK_002b6080);
  uVar9 = puVar7[5];
  puVar8[4] = _UNK_002b6080;
  puVar8[5] = uVar9;
  asStack_118[0] = (short)DAT_002b6028 + ((short)param_1 - ((short)iVar1 + -0x180));
  *(undefined8 **)(iVar1 + 0x18) = &uStack_120;
  FUN_001d8780(param_1,0);
  if ((param_2 & 2) != 0) {
    FUN_001b7158(*(undefined4 *)(iVar12 + 0x174),0);
  }
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
  }
  return;
}

