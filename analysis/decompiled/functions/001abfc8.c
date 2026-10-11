/* Ghidra pseudocode. PS2 address: 001abfc8. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001abfc8(undefined8 param_1,long param_2)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 uStack_d0;
  short sStack_c8;
  short sStack_b8;
  short sStack_90;
  short sStack_88;
  short sStack_80;
  short sStack_78;
  
  iVar11 = (int)param_1;
  if (param_2 != 0) {
    *(int *)(iVar11 + 0x174) = iVar11 + 0x400;
    FUN_001a9700(iVar11 + 0x400);
  }
  FUN_001b48e8(param_1,0);
  iVar1 = *(int *)(iVar11 + 0x174);
  *(undefined8 **)(iVar1 + 0x18) = &DAT_002b5b60;
  puVar4 = &uStack_d0;
  puVar5 = &DAT_002b5b60;
  if (param_2 == 0) {
    do {
      puVar10 = puVar5;
      puVar9 = puVar4;
      uVar6 = puVar10[1];
      uVar7 = puVar10[2];
      uVar8 = puVar10[3];
      *puVar9 = *puVar10;
      puVar9[1] = uVar6;
      puVar9[2] = uVar7;
      puVar9[3] = uVar8;
      sStack_80 = DAT_002b5bb0;
      sStack_88 = DAT_002b5ba8;
      puVar4 = puVar9 + 4;
      puVar5 = puVar10 + 4;
    } while (puVar10 + 4 != (undefined8 *)&UNK_002b5bc0);
    sVar2 = (short)param_1 - ((short)iVar1 + -0x400);
    sStack_78 = DAT_002b5bb8 + sVar2;
    sStack_c8 = DAT_002b5b68 + sVar2;
    sStack_b8 = DAT_002b5b78 + sVar2;
    sStack_90 = DAT_002b5ba0 + sVar2;
    uVar6 = puVar10[5];
    puVar9[4] = _UNK_002b5bc0;
    sStack_88 = sStack_88 + sVar2;
    puVar9[5] = uVar6;
    sStack_80 = sStack_80 + sVar2;
    *(undefined8 **)(iVar1 + 0x18) = &uStack_d0;
  }
  uVar3 = DAT_002852fc;
  *(undefined **)(iVar11 + 0x170) = &DAT_002b5bd0;
  DAT_0028aeb0 = FUN_00234e80(uVar3,0x1c5);
  DAT_0028aeb4 = FUN_00234e80(DAT_002852fc,0x1c4);
  DAT_0028aeb8 = FUN_00234e80(DAT_002852fc,0x1c3);
  FUN_0023bbd0(iVar11 + 0x180,0,0x270);
  FUN_001acc50(param_1);
  FUN_001ad040(param_1);
  *(undefined4 *)(iVar11 + 0x3f8) = 0xffffffff;
  return param_1;
}

