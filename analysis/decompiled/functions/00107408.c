/* Ghidra pseudocode. PS2 address: 00107408. Not validated source. */

void FUN_00107408(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  float fVar9;
  undefined1 auStack_120 [16];
  undefined4 auStack_110 [8];
  undefined1 auStack_f0 [8];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  undefined *puStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float afStack_d0 [4];
  
  uVar2 = FUN_0019c810(0x28acf8,auStack_120);
  fVar9 = DAT_002c1144;
  puVar5 = auStack_110;
  iVar4 = (int)param_3;
  *(undefined4 *)(iVar4 + 0x82f0) = uVar2;
  iVar3 = FUN_0019c4f0(0x28acf8,auStack_120,puVar5,6);
  if (0 < iVar3) {
    do {
      uVar2 = FUN_0019b688(*puVar5,auStack_120,auStack_f0,afStack_d0);
      if (afStack_d0[0] < fVar9) {
        uVar1 = *puVar5;
        *(undefined4 *)(iVar4 + 0x2b0) = uVar2;
        *(undefined4 *)(iVar4 + 0x82f4) = uVar1;
        *(float *)(iVar4 + 0x2b8) = afStack_d0[0];
        *(undefined4 *)(iVar4 + 0x2b4) = uVar2;
        *(int *)(iVar4 + 0x2c0) = auStack_f0._0_4_;
        *(int *)(iVar4 + 0x2c4) = auStack_f0._4_4_;
        *(undefined4 *)(iVar4 + 0x2c8) = uStack_e8;
        *(undefined4 *)(iVar4 + 0x2cc) = uStack_e4;
        *(undefined4 *)(iVar4 + 0x314) = 0xffffffff;
        fVar9 = afStack_d0[0];
      }
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
  FUN_0019bcf8(*(float *)(iVar4 + 0x2b4) + 800.0,&fStack_e0,*(undefined4 *)(iVar4 + 0x82f4),0);
  *(float *)(iVar4 + 0x2d0) = fStack_e0;
  *(undefined **)(iVar4 + 0x2d4) = puStack_dc;
  *(undefined4 *)(iVar4 + 0x2d8) = uStack_d8;
  *(undefined4 *)(iVar4 + 0x2dc) = uStack_d4;
  fVar9 = *(float *)(iVar4 + 0x2d0) - *(float *)(iVar4 + 0x2c0);
  puVar8 = (undefined *)(*(float *)(iVar4 + 0x2d4) - *(float *)(iVar4 + 0x2c4));
  if (fVar9 == 0.0) {
    puVar6 = puVar8;
    if (((float)puVar8 == 0.0) ||
       (puVar6 = PTR_DAT_002c1148, puVar7 = DAT_002c114c, (float)puVar8 < 0.0)) goto LAB_001075cc;
  }
  else {
    puVar6 = (undefined *)FUN_00218510((float)puVar8 / fVar9);
    if (fVar9 < 0.0) {
      if (0.0 < (float)puVar8) {
        puVar6 = (undefined *)((float)puVar6 + DAT_002c1150);
      }
      else {
        puVar6 = (undefined *)((float)puVar6 - DAT_002c1154);
      }
    }
LAB_001075cc:
    puVar7 = puVar6;
  }
  *(undefined **)(iVar4 + 0x2e0) = puVar7;
  *(undefined4 *)(iVar4 + 0x314) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x334) = 0xffffffff;
  fVar9 = (float)FUN_0019b848(*(undefined4 *)(iVar4 + 0x82f0),iVar4 + 0x2c0,auStack_f0,afStack_d0,
                              iVar4 + 800);
  *(float *)(iVar4 + 0x2e4) = *(float *)(*(int *)(iVar4 + 0x82f0) + 0x38) - fVar9;
  if (0 < *(int *)(iVar4 + 0xa0)) {
    iVar3 = FUN_0019c4d0(0x28acf8);
    fVar9 = *(float *)(iVar4 + 0x2e4) - *(float *)(iVar4 + 0x2e8);
    if ((fVar9 < 0.0) || (*(float *)(iVar3 + 0x38) * 0.5 < fVar9)) {
      *(float *)(iVar4 + 0x2e8) = *(float *)(iVar4 + 0x2e4);
    }
  }
  FUN_0019ba80(*(undefined4 *)(iVar4 + 0x2b4),&fStack_e0,*(undefined4 *)(iVar4 + 0x82f4));
  fVar9 = fStack_e0;
  if (fStack_e0 == 0.0) {
    puVar8 = puStack_dc;
    if (((float)puStack_dc != 0.0) &&
       (puVar8 = PTR_DAT_002c1158, puVar6 = DAT_002c115c, 0.0 <= (float)puStack_dc))
    goto LAB_00107708;
  }
  else {
    puVar6 = puStack_dc;
    puVar8 = (undefined *)FUN_00218510((float)puStack_dc / fStack_e0);
    if (fVar9 < 0.0) {
      if (0.0 < (float)puVar6) {
        puVar8 = (undefined *)((float)puVar8 + DAT_002c1160);
      }
      else {
        puVar8 = (undefined *)((float)puVar8 - DAT_002c1164);
      }
    }
  }
  puVar6 = puVar8;
LAB_00107708:
  uStack_d8 = 0;
  puStack_dc = (undefined *)((float)puStack_dc * DAT_002c1168);
  fStack_e0 = fStack_e0 * DAT_002c1168;
  FUN_00109448(puVar6,param_2,param_3,iVar4 + 0x2c0,&fStack_e0,0);
  if (-1 < *(int *)(iVar4 + 0x24)) {
    FUN_0015f258(*(undefined4 *)(*(int *)(iVar4 + 0x24) * 0x80 + DAT_002859e4 + 0xa0));
  }
  return;
}

