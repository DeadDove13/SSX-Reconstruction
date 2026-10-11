/* Ghidra pseudocode. PS2 address: 001157f0. Not validated source. */

void FUN_001157f0(float param_1,undefined4 param_2,float param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 *param_6,undefined1 (*param_7) [16],
                 undefined1 (*param_8) [16],undefined1 (*param_9) [16],undefined1 (*param_10) [16])

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 auStack_ec [3];
  
  iVar4 = 0;
  uVar3 = FUN_002109b0();
  fVar2 = DAT_002c1578;
  fVar9 = 1.0;
  fVar11 = ((float)(uVar3 & 0x7fffff | 0x3f800000) - 1.0) * DAT_002c1570 + DAT_002c1574;
  fVar10 = fVar9;
  fVar12 = DAT_002c157c;
  puVar6 = param_6;
  if (0 < (int)param_6[0xed]) {
    do {
      uVar3 = FUN_002109b0();
      fVar10 = fVar10 + ((float)(uVar3 & 0x7fffff | 0x3f800000) - fVar9) * fVar12 + fVar2;
      if (fVar10 < DAT_002c1580) {
        fVar10 = DAT_002c1584 - fVar10;
      }
      if (DAT_002c1588 < fVar10) {
        fVar10 = DAT_002c158c - fVar10;
      }
      fVar7 = (float)iVar4 / ((float)(int)param_6[0xed] - fVar9);
      fVar7 = (fVar7 + fVar7) - fVar9;
      fVar8 = fVar7 * fVar7;
      FUN_00218128(fVar7 * fVar11,&uStack_f0,auStack_ec);
      auVar14 = _lqc2(*param_8);
      auVar13 = _qmtc2(auStack_ec[0]);
      auVar13 = _vmulbc(auVar14,auVar13);
      auVar13 = _sqc2(auVar13);
      fVar8 = fVar9 - fVar8 * fVar8;
      auVar15 = _lqc2(*param_9);
      auVar14 = _qmtc2(uStack_f0);
      auVar14 = _vmulbc(auVar15,auVar14);
      auVar14 = _sqc2(auVar14);
      auVar13 = _lqc2(auVar13);
      auVar14 = _lqc2(auVar14);
      auVar13 = _vadd(auVar13,auVar14);
      auVar13 = _sqc2(auVar13);
      auVar15 = _lqc2(*param_10);
      auVar14 = _qmtc2(param_2);
      auVar14 = _vmulbc(auVar15,auVar14);
      auVar14 = _sqc2(auVar14);
      iVar5 = iVar4 + 1;
      auVar15 = _lqc2(auVar14);
      auVar14 = _qmtc2(fVar7);
      auVar14 = _vmulbc(auVar15,auVar14);
      auVar14 = _sqc2(auVar14);
      uStack_110 = auVar14._0_4_;
      uStack_10c = auVar14._4_4_;
      uStack_108 = auVar14._8_4_;
      uStack_104 = auVar14._12_4_;
      *puVar6 = uStack_110;
      puVar6[1] = uStack_10c;
      puVar6[2] = uStack_108;
      puVar6[3] = uStack_104;
      auVar15 = _lqc2(*param_7);
      auVar14 = _qmtc2(param_4);
      auVar14 = _vmulbc(auVar15,auVar14);
      auVar14 = _sqc2(auVar14);
      auVar13 = _lqc2(auVar13);
      auVar14 = _lqc2(auVar14);
      auVar13 = _vadd(auVar13,auVar14);
      auVar13 = _sqc2(auVar13);
      auVar14 = _lqc2(auVar13);
      auVar13 = _qmtc2(fVar10 * param_1 * fVar8);
      auVar13 = _vmulbc(auVar14,auVar13);
      auVar13 = _sqc2(auVar13);
      uStack_100 = auVar13._0_4_;
      uStack_fc = auVar13._4_4_;
      uStack_f8 = auVar13._8_4_;
      uStack_f4 = auVar13._12_4_;
      puVar6[100] = uStack_100;
      puVar6[0x65] = uStack_fc;
      puVar6[0x66] = uStack_f8;
      puVar6[0x67] = uStack_f4;
      iVar1 = param_6[0xed];
      param_6[iVar4 + 0xd0] = param_3 * fVar10 * fVar8;
      iVar4 = iVar5;
      puVar6 = puVar6 + 4;
    } while (iVar5 < iVar1);
  }
  return;
}

