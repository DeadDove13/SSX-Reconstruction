/* Ghidra pseudocode. PS2 address: 001ab2f0. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001ab2f0(undefined8 param_1,long param_2)

{
  int iVar1;
  short sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 uStack_e0;
  short sStack_d8;
  short sStack_98;
  short sStack_90;
  
  piVar10 = (int *)param_1;
  if (param_2 != 0) {
    *piVar10 = (int)(piVar10 + 0x11);
    FUN_001a9700(piVar10 + 0x11);
  }
  iVar1 = *piVar10;
  *(undefined8 **)(iVar1 + 0x18) = &DAT_002b5fb0;
  puVar3 = &uStack_e0;
  puVar4 = &DAT_002b5fb0;
  if (param_2 == 0) {
    do {
      puVar8 = puVar4;
      puVar7 = puVar3;
      uVar5 = puVar8[1];
      uVar6 = puVar8[2];
      uVar9 = puVar8[3];
      *puVar7 = *puVar8;
      puVar7[1] = uVar5;
      puVar7[2] = uVar6;
      puVar7[3] = uVar9;
      sStack_98 = (short)DAT_002b5ff8;
      sStack_d8 = (short)DAT_002b5fb8;
      puVar3 = puVar7 + 4;
      puVar4 = puVar8 + 4;
    } while (puVar8 + 4 != (undefined8 *)&UNK_002b6010);
    sVar2 = (short)param_1 - ((short)iVar1 + -0x44);
    sStack_90 = DAT_002b6000 + sVar2;
    uVar5 = puVar8[5];
    puVar7[4] = _UNK_002b6010;
    sStack_d8 = sStack_d8 + sVar2;
    puVar7[5] = uVar5;
    sStack_98 = sStack_98 + sVar2;
    *(undefined8 **)(iVar1 + 0x18) = &uStack_e0;
  }
  DAT_002c5210 = FUN_00234e80(DAT_002852fc,0x1f);
  DAT_002c5214 = FUN_00234e80(DAT_002852fc,0x20);
  DAT_0028b150 = FUN_00234e80(DAT_002852fc,0x21);
  DAT_0028b154 = FUN_00234e80(DAT_002852fc,0x22);
  DAT_0028b158 = FUN_00234e80(DAT_002852fc,0x23);
  FUN_001ab478(0x42fa0000,param_1);
  piVar10[0xf] = 0;
  piVar10[0x10] = 0;
  return param_1;
}

