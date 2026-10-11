/* Ghidra pseudocode. PS2 address: 0013b9d0. Not validated source. */

void FUN_0013b9d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_b8;
  undefined4 uStack_60;
  float afStack_5c [3];
  
  fVar13 = 0.0;
  fVar12 = *(float *)(*(int *)(param_1 + 0x60) + 0x160);
  if ((fVar12 != 0.0) || (*(float *)(*(int *)(param_1 + 0x60) + 0x164) != 0.0)) {
    FUN_00218128(fVar12 * -0.5,&uStack_60,afStack_5c);
    fStack_110 = afStack_5c[0];
    fStack_104 = (float)uStack_60;
    fStack_10c = fVar13;
    fStack_108 = fVar13;
    FUN_00218128(*(float *)(*(int *)(param_1 + 0x60) + 0x164) * -0.5,&uStack_60,afStack_5c);
    fStack_100 = afStack_5c[0];
    uStack_fc = uStack_60;
    fStack_f8 = fVar13;
    fStack_f4 = fVar13;
    FUN_0012f0f8(&fStack_f0,&fStack_110,&fStack_100);
    iVar1 = *(int *)(param_1 + 0x60);
    fStack_10c = fStack_ec;
    fStack_108 = fStack_e8;
    fStack_104 = fStack_e4;
    fStack_110 = fStack_f0;
    FUN_0012f0f8(&fStack_100,iVar1 + 0xf4,&fStack_110);
    uVar2 = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(iVar1 + 0xf8) = uStack_fc;
    *(float *)(iVar1 + 0xfc) = fStack_f8;
    *(float *)(iVar1 + 0x100) = fStack_f4;
    *(float *)(iVar1 + 0xf4) = fStack_100;
    FUN_00112bd8(uVar2);
    iVar1 = *(int *)(param_1 + 0x60);
    fVar8 = *(float *)(iVar1 + 0x473c) * *(float *)(iVar1 + 0x4734);
    fStack_110 = fStack_110 + fStack_110;
    fVar6 = fStack_10c * fVar13 - fStack_108 * fVar13;
    fVar5 = fStack_104 * fVar13 - fStack_10c * fVar8;
    fVar4 = fStack_108 * fVar8 - fStack_104 * fVar13;
    fVar7 = fStack_108 * fVar6 - fStack_104 * fVar5;
    fVar12 = fStack_104 * fVar4 - fStack_10c * fVar6;
    fVar9 = fStack_10c * fVar5 - fStack_108 * fVar4;
    auVar3._4_4_ = (fVar13 - fStack_110 * fVar5) + fVar12 + fVar12;
    auVar3._0_4_ = (fVar13 - fStack_110 * fVar4) + fVar7 + fVar7;
    auVar3._8_4_ = (fVar8 - fStack_110 * fVar6) + fVar9 + fVar9;
    auVar3._12_4_ = fVar13;
    auVar14 = _lqc2(auVar3);
    auVar15._4_4_ = fVar13;
    auVar15._0_4_ = fVar13;
    auVar15._8_4_ = fVar8;
    auVar15._12_4_ = fVar13;
    auVar15 = _lqc2(auVar15);
    auVar15 = _vsub(auVar14,auVar15);
    auVar15 = _sqc2(auVar15);
    fStack_b8 = auVar15._8_4_;
    fVar12 = auVar15._0_4_;
    fVar4 = auVar15._4_4_;
    fVar8 = *(float *)(iVar1 + 0xf8) * fVar4 - *(float *)(iVar1 + 0xfc) * fVar12;
    fVar10 = *(float *)(iVar1 + 0xfc) * fStack_b8 - *(float *)(iVar1 + 0x100) * fVar4;
    fVar11 = *(float *)(iVar1 + 0x100) * fVar12 - *(float *)(iVar1 + 0xf8) * fStack_b8;
    fVar9 = *(float *)(iVar1 + 0x100) * fVar10 - *(float *)(iVar1 + 0xf8) * fVar8;
    fVar7 = *(float *)(iVar1 + 0xf8) * fVar11 - *(float *)(iVar1 + 0xfc) * fVar10;
    fVar5 = *(float *)(iVar1 + 0xfc) * fVar8 - *(float *)(iVar1 + 0x100) * fVar11;
    fVar6 = *(float *)(iVar1 + 0xf4) + *(float *)(iVar1 + 0xf4);
    auVar15 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xc0));
    auVar14._4_4_ = fVar4 + fVar6 * fVar11 + fVar9 + fVar9;
    auVar14._0_4_ = fVar12 + fVar6 * fVar10 + fVar5 + fVar5;
    auVar14._8_4_ = fStack_b8 + fVar6 * fVar8 + fVar7 + fVar7;
    auVar14._12_4_ = fVar13;
    auVar14 = _lqc2(auVar14);
    auVar15 = _vadd(auVar15,auVar14);
    auVar15 = _sqc2(auVar15);
    *(undefined1 (*) [16])(iVar1 + 0xc0) = auVar15;
    iVar1 = *(int *)(param_1 + 0x60);
    *(float *)(iVar1 + 0x160) = fVar13;
    *(float *)(iVar1 + 0x164) = fVar13;
  }
  return;
}

