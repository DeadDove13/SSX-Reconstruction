/* Ghidra pseudocode. PS2 address: 001b6470. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b6470(undefined8 param_1,ulong param_2)

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
  int *piVar12;
  undefined8 uStack_110;
  short sStack_108;
  short sStack_c8;
  short sStack_c0;
  undefined8 uStack_a0;
  short asStack_98 [4];
  undefined8 auStack_90 [6];
  short sStack_60;
  short sStack_58;
  short sStack_50;
  short sStack_48;
  
  piVar12 = (int *)param_1;
  *(undefined8 **)(*piVar12 + 0x18) = &DAT_002b5ca8;
  sVar4 = DAT_002b5cf8;
  sVar3 = DAT_002b5cf0;
  sVar2 = DAT_002b5ce8;
  if (param_2 == 0) {
    puVar5 = &DAT_002b5ca8;
    puVar6 = &uStack_a0;
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
    } while (puVar7 + 4 != (undefined8 *)&UNK_002b5d08);
    uVar9 = puVar7[5];
    puVar8[4] = _UNK_002b5d08;
    puVar8[5] = uVar9;
    sStack_50 = (short)param_1 - ((short)*piVar12 + -0x6c);
    sStack_48 = DAT_002b5d00 + sStack_50;
    asStack_98[0] = DAT_002b5cb0 + sStack_50;
    *(undefined8 **)(*piVar12 + 0x18) = &uStack_a0;
    sStack_60 = sVar2 + sStack_50;
    sStack_58 = sVar3 + sStack_50;
    sStack_50 = sVar4 + sStack_50;
  }
  iVar1 = *piVar12;
  *(undefined8 **)(iVar1 + 0x18) = &DAT_002b5fb0;
  puVar5 = &uStack_110;
  puVar6 = &DAT_002b5fb0;
  do {
    puVar8 = puVar6;
    puVar7 = puVar5;
    uVar11 = puVar8[1];
    uVar9 = puVar8[2];
    uVar10 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar11;
    puVar7[2] = uVar9;
    puVar7[3] = uVar10;
    sStack_c8 = (short)DAT_002b5ff8;
    sStack_108 = (short)DAT_002b5fb8;
    puVar5 = puVar7 + 4;
    puVar6 = puVar8 + 4;
  } while (puVar8 + 4 != (undefined8 *)&UNK_002b6010);
  sVar2 = (short)param_1 - ((short)iVar1 + -0x44);
  sStack_c0 = DAT_002b6000 + sVar2;
  uVar9 = puVar8[5];
  puVar7[4] = _UNK_002b6010;
  sStack_108 = sStack_108 + sVar2;
  puVar7[5] = uVar9;
  sStack_c8 = sStack_c8 + sVar2;
  *(undefined8 **)(iVar1 + 0x18) = &uStack_110;
  if ((param_2 & 2) != 0) {
    FUN_001b7158(iVar1,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
  }
  return;
}

