/* Ghidra pseudocode. PS2 address: 001b1c68. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001b1c68(undefined8 param_1,long param_2)

{
  short sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined8 uStack_f0;
  short sStack_e8;
  short sStack_b0;
  short sStack_a8;
  short sStack_a0;
  short sStack_98;
  
  piVar10 = (int *)param_1;
  if (param_2 != 0) {
    *piVar10 = (int)(piVar10 + 0x75);
    FUN_001a9700(piVar10 + 0x75);
  }
  FUN_001ab2f0(param_1,0);
  iVar11 = *piVar10;
  *(undefined8 **)(iVar11 + 0x18) = &DAT_002b5d18;
  puVar2 = &uStack_f0;
  puVar3 = &DAT_002b5d18;
  if (param_2 == 0) {
    do {
      puVar8 = puVar3;
      puVar7 = puVar2;
      uVar4 = puVar8[1];
      uVar5 = puVar8[2];
      uVar6 = puVar8[3];
      *puVar7 = *puVar8;
      puVar7[1] = uVar4;
      puVar7[2] = uVar5;
      puVar7[3] = uVar6;
      sStack_a0 = DAT_002b5d68;
      sStack_a8 = (short)DAT_002b5d60;
      puVar2 = puVar7 + 4;
      puVar3 = puVar8 + 4;
    } while (puVar8 + 4 != (undefined8 *)&UNK_002b5d78);
    sVar1 = (short)param_1 - ((short)iVar11 + -0x1d4);
    sStack_98 = DAT_002b5d70 + sVar1;
    sStack_e8 = DAT_002b5d20 + sVar1;
    sStack_b0 = (short)DAT_002b5d58 + sVar1;
    uVar4 = puVar8[5];
    puVar7[4] = _UNK_002b5d78;
    sStack_a8 = sStack_a8 + sVar1;
    puVar7[5] = uVar4;
    sStack_a0 = sStack_a0 + sVar1;
    *(undefined8 **)(iVar11 + 0x18) = &uStack_f0;
  }
  piVar9 = piVar10 + 0x43;
  iVar11 = 2;
  DAT_0028af20 = FUN_00234e80(DAT_002852fc,0x1b);
  DAT_0028af24 = FUN_00234e80(DAT_002852fc,0x1c);
  DAT_0028af28 = FUN_00234e80(DAT_002852fc,0x1d);
  DAT_0028af2c = FUN_00234e80(DAT_002852fc,0x1e);
  piVar10[0x73] = 0;
  do {
    FUN_0019a830(piVar9,0x2b5840);
    iVar11 = iVar11 + -1;
    piVar9 = piVar9 + 0x10;
  } while (-1 < iVar11);
  return param_1;
}

