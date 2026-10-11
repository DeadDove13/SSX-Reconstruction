/* Ghidra pseudocode. PS2 address: 001b6c40. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b6c40(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uStack_120;
  short asStack_118 [4];
  undefined8 auStack_110 [7];
  short sStack_d8;
  short sStack_d0;
  undefined8 uStack_b0;
  short asStack_a8 [4];
  undefined8 auStack_a0 [2];
  short asStack_90 [4];
  undefined8 auStack_88 [3];
  short sStack_70;
  short sStack_68;
  short sStack_60;
  short sStack_58;
  
  iVar13 = (int)param_1;
  *(undefined **)(iVar13 + 0x170) = &DAT_002b5e68;
  *(undefined8 **)(*(int *)(iVar13 + 0x174) + 0x18) = &DAT_002b5f40;
  sVar5 = DAT_002b5f90;
  sVar3 = DAT_002b5f88;
  sVar4 = DAT_002b5f80;
  if (param_2 == 0) {
    puVar6 = &DAT_002b5f40;
    puVar7 = &uStack_b0;
    do {
      puVar9 = puVar7;
      puVar8 = puVar6;
      uVar10 = puVar8[1];
      uVar11 = puVar8[2];
      uVar12 = puVar8[3];
      *puVar9 = *puVar8;
      puVar9[1] = uVar10;
      puVar9[2] = uVar11;
      puVar9[3] = uVar12;
      puVar6 = puVar8 + 4;
      puVar7 = puVar9 + 4;
    } while (puVar8 + 4 != (undefined8 *)&UNK_002b5fa0);
    uVar10 = puVar8[5];
    puVar9[4] = _UNK_002b5fa0;
    puVar9[5] = uVar10;
    sStack_60 = (short)param_1 - ((short)*(int *)(iVar13 + 0x174) + -0x2a4);
    sStack_58 = DAT_002b5f98 + sStack_60;
    asStack_a8[0] = DAT_002b5f48 + sStack_60;
    asStack_90[0] = DAT_002b5f60 + sStack_60;
    *(undefined8 **)(*(int *)(iVar13 + 0x174) + 0x18) = &uStack_b0;
    sStack_70 = sVar4 + sStack_60;
    sStack_68 = sVar3 + sStack_60;
    sStack_60 = sVar5 + sStack_60;
  }
  iVar1 = *(int *)(iVar13 + 0x174);
  *(undefined8 **)(*(int *)(iVar13 + 0x180) + 0x18) = &DAT_002b5fb0;
  sVar4 = (short)DAT_002b5ff8;
  puVar6 = &uStack_120;
  puVar7 = &DAT_002b5fb0;
  do {
    puVar8 = puVar7;
    puVar9 = puVar6;
    uVar10 = puVar8[1];
    uVar11 = puVar8[2];
    uVar12 = puVar8[3];
    *puVar9 = *puVar8;
    puVar9[1] = uVar10;
    puVar9[2] = uVar11;
    puVar9[3] = uVar12;
    puVar6 = puVar9 + 4;
    puVar7 = puVar8 + 4;
  } while (puVar8 + 4 != (undefined8 *)&UNK_002b6010);
  iVar2 = *(int *)(iVar13 + 0x180);
  sVar3 = (short)(int *)(iVar13 + 0x180) - ((short)iVar2 + -0x44);
  uVar10 = puVar8[5];
  puVar9[4] = _UNK_002b6010;
  puVar9[5] = uVar10;
  sStack_d0 = DAT_002b6000 + sVar3;
  *(undefined8 **)(iVar2 + 0x18) = &uStack_120;
  sStack_d8 = sVar4 + sVar3;
  *(undefined **)(iVar13 + 0x170) = &DAT_002b6090;
  *(undefined8 **)(iVar1 + 0x18) = &DAT_002b6020;
  puVar6 = &uStack_120;
  puVar7 = &DAT_002b6020;
  do {
    puVar8 = puVar7;
    puVar9 = puVar6;
    uVar10 = puVar8[1];
    uVar11 = puVar8[2];
    uVar12 = puVar8[3];
    *puVar9 = *puVar8;
    puVar9[1] = uVar10;
    puVar9[2] = uVar11;
    puVar9[3] = uVar12;
    puVar6 = puVar9 + 4;
    puVar7 = puVar8 + 4;
  } while (puVar8 + 4 != (undefined8 *)&UNK_002b6080);
  uVar10 = puVar8[5];
  puVar9[4] = _UNK_002b6080;
  puVar9[5] = uVar10;
  asStack_118[0] = (short)DAT_002b6028 + ((short)param_1 - ((short)iVar1 + -0x180));
  *(undefined8 **)(iVar1 + 0x18) = &uStack_120;
  FUN_001d8780(param_1,0);
  if ((param_2 & 2) != 0) {
    FUN_001b7158(*(undefined4 *)(iVar13 + 0x174),0);
  }
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
  }
  return;
}

