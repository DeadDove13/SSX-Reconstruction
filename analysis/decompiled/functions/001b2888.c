/* Ghidra pseudocode. PS2 address: 001b2888. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001b2888(undefined8 param_1,long param_2)

{
  int iVar1;
  short sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uStack_e0;
  short sStack_d8;
  short sStack_a0;
  short sStack_98;
  short sStack_90;
  short sStack_88;
  
  piVar10 = (int *)param_1;
  if (param_2 != 0) {
    *piVar10 = (int)(piVar10 + 0x1b);
    FUN_001a9700(piVar10 + 0x1b);
  }
  FUN_001ab2f0(param_1,0);
  iVar1 = *piVar10;
  *(undefined8 **)(iVar1 + 0x18) = &DAT_002b5ca8;
  puVar3 = &uStack_e0;
  puVar4 = &DAT_002b5ca8;
  if (param_2 == 0) {
    do {
      puVar9 = puVar4;
      puVar8 = puVar3;
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      *puVar8 = *puVar9;
      puVar8[1] = uVar5;
      puVar8[2] = uVar6;
      puVar8[3] = uVar7;
      sStack_90 = DAT_002b5cf8;
      sStack_98 = DAT_002b5cf0;
      puVar3 = puVar8 + 4;
      puVar4 = puVar9 + 4;
    } while (puVar9 + 4 != (undefined8 *)&UNK_002b5d08);
    sVar2 = (short)param_1 - ((short)iVar1 + -0x6c);
    sStack_88 = DAT_002b5d00 + sVar2;
    sStack_d8 = DAT_002b5cb0 + sVar2;
    sStack_a0 = DAT_002b5ce8 + sVar2;
    uVar5 = puVar9[5];
    puVar8[4] = _UNK_002b5d08;
    sStack_98 = sStack_98 + sVar2;
    puVar8[5] = uVar5;
    sStack_90 = sStack_90 + sVar2;
    *(undefined8 **)(iVar1 + 0x18) = &uStack_e0;
  }
  DAT_0028aef0 = FUN_00234e80(DAT_002852fc,0x5e);
  DAT_0028aef4 = FUN_00234e80(DAT_002852fc,0x5d);
  DAT_0028aef8 = FUN_00234e80(DAT_002852fc,0x5f);
  DAT_0028aefc = FUN_00234e80(DAT_002852fc,0x62);
  DAT_0028af00 = FUN_00234e80(DAT_002852fc,0x61);
  DAT_0028af04 = FUN_00234e80(DAT_002852fc,0x60);
  DAT_0028af18 = FUN_00234e80(DAT_002852fc,0x3c0);
  DAT_0028af08 = FUN_00234e80(DAT_002852fc,0x1f);
  DAT_0028af0c = FUN_00234e80(DAT_002852fc,0x1f);
  DAT_0028af10 = FUN_00234e80(DAT_002852fc,0x1f);
  DAT_0028af14 = FUN_00234e80(DAT_002852fc,0x6a);
  DAT_0028aec0 = FUN_00234e80(DAT_002852fc,100);
  DAT_0028aec4 = FUN_00234e80(DAT_002852fc,99);
  DAT_0028aec8 = FUN_00234e80(DAT_002852fc,0x65);
  DAT_0028aecc = FUN_00234e80(DAT_002852fc,0x68);
  DAT_0028aed0 = FUN_00234e80(DAT_002852fc,0x67);
  DAT_0028aed4 = FUN_00234e80(DAT_002852fc,0x66);
  DAT_0028aee8 = FUN_00234e80(DAT_002852fc,0x3c1);
  DAT_0028aed8 = FUN_00234e80(DAT_002852fc,0x20);
  DAT_0028aedc = FUN_00234e80(DAT_002852fc,0x20);
  DAT_0028aee0 = FUN_00234e80(DAT_002852fc,0x20);
  DAT_0028aee4 = FUN_00234e80(DAT_002852fc,0x6a);
  return param_1;
}

