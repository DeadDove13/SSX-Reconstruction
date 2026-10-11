/* Ghidra pseudocode. PS2 address: 001aeb28. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001aeb28(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  int iVar13;
  undefined8 uStack_d0;
  short sStack_c8;
  short sStack_b0;
  short sStack_90;
  short sStack_88;
  short sStack_80;
  short sStack_78;
  
  iVar13 = (int)param_1;
  if (param_2 != 0) {
    iVar6 = iVar13 + 0x2a4;
    *(int *)(iVar13 + 0x180) = iVar6;
    *(int *)(iVar13 + 0x174) = iVar6;
    FUN_001a9700(iVar6);
  }
  FUN_001b48e8(param_1,0);
  FUN_001ab2f0(iVar13 + 0x180,0);
  iVar6 = *(int *)(iVar13 + 0x174);
  *(undefined8 **)(iVar6 + 0x18) = &DAT_002b5f40;
  puVar4 = &uStack_d0;
  puVar5 = &DAT_002b5f40;
  if (param_2 == 0) {
    do {
      puVar11 = puVar5;
      puVar10 = puVar4;
      uVar7 = puVar11[1];
      uVar8 = puVar11[2];
      uVar9 = puVar11[3];
      *puVar10 = *puVar11;
      puVar10[1] = uVar7;
      puVar10[2] = uVar8;
      puVar10[3] = uVar9;
      sStack_80 = DAT_002b5f90;
      sStack_88 = DAT_002b5f88;
      puVar4 = puVar10 + 4;
      puVar5 = puVar11 + 4;
    } while (puVar11 + 4 != (undefined8 *)&UNK_002b5fa0);
    sVar2 = (short)param_1 - ((short)iVar6 + -0x2a4);
    sStack_78 = DAT_002b5f98 + sVar2;
    sStack_c8 = DAT_002b5f48 + sVar2;
    sStack_b0 = DAT_002b5f60 + sVar2;
    sStack_90 = DAT_002b5f80 + sVar2;
    uVar7 = puVar11[5];
    puVar10[4] = _UNK_002b5fa0;
    sStack_88 = sStack_88 + sVar2;
    puVar10[5] = uVar7;
    sStack_80 = sStack_80 + sVar2;
    *(undefined8 **)(iVar6 + 0x18) = &uStack_d0;
  }
  uVar3 = DAT_002852fc;
  *(undefined **)(iVar13 + 0x170) = &DAT_002b5e68;
  DAT_0028b140 = FUN_00234e80(uVar3,8);
  iVar13 = 0;
  DAT_0028b144 = FUN_00234e80(DAT_002852fc,9);
  DAT_0028b148 = FUN_00234e80(DAT_002852fc,10);
  DAT_0028b14c = FUN_00234e80(DAT_002852fc,0xb);
  piVar12 = &DAT_0028af60;
  puVar1 = &DAT_0028af68;
  do {
    FUN_0023bbd0(puVar1,0,0x6e);
    *piVar12 = iVar13;
    iVar13 = iVar13 + 1;
    piVar12 = piVar12 + 0x1e;
    puVar1 = puVar1 + 0x78;
  } while (iVar13 < 4);
  return param_1;
}

