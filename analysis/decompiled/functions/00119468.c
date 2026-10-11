/* Ghidra pseudocode. PS2 address: 00119468. Not validated source. */

void FUN_00119468(float param_1,float param_2,int param_3,undefined1 (*param_4) [16],
                 undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16])

{
  float *pfVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  fVar5 = *(float *)(param_3 + 0x30);
  fVar6 = fVar5 * DAT_002c177c;
  iVar3 = param_3 + *(int *)(param_3 + 0x54) * 0xa0 + 0x60;
  *(undefined4 *)(iVar3 + 0x94) = 0;
  pfVar1 = (float *)(iVar3 + 0x80);
  *(float *)(iVar3 + 0x80) = param_2 * (fVar6 + 1.0);
  fVar8 = *(float *)(iVar3 + 0x94);
  fVar7 = *(float *)(iVar3 + 0x84);
  fVar6 = fVar8;
  if ((fVar8 <= fVar7) && (fVar6 = fVar7, 1.0 < fVar7)) {
    fVar6 = 1.0;
  }
  fVar7 = *(float *)(iVar3 + 0x88);
  *(float *)(iVar3 + 0x84) = fVar6;
  if (fVar7 < fVar8) {
    fVar7 = 0.0;
    fVar6 = *(float *)(iVar3 + 0x8c);
  }
  else {
    if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
    fVar6 = *(float *)(iVar3 + 0x8c);
  }
  *(float *)(iVar3 + 0x88) = fVar7;
  if (fVar6 < fVar8) {
    fVar6 = 0.0;
    fVar7 = *pfVar1;
  }
  else {
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    fVar7 = *pfVar1;
  }
  *(float *)(iVar3 + 0x8c) = fVar6;
  if (fVar7 < fVar8) {
    *pfVar1 = 0.0;
  }
  else if (1.0 < fVar7) {
    *pfVar1 = 1.0;
  }
  else {
    *pfVar1 = fVar7;
  }
  pauVar4 = (undefined1 (*) [16])(iVar3 + 0x40);
  auVar9 = _lqc2(*param_7);
  auVar11 = _vaddbc(in_vf0,in_vf0);
  auVar9 = _vmul(auVar9,auVar9);
  _vaddabc(auVar9,auVar9);
  _vmaddabc(auVar11,auVar9);
  auVar9 = _vmaddbc(auVar11,auVar9);
  _vsqrt(auVar9);
  _vwaitq();
  uVar2 = _cfc2(in_vc6);
  iVar3 = 0;
  do {
    fVar6 = (float)iVar3;
    iVar3 = iVar3 + 1;
    auVar11 = _lqc2(*param_6);
    auVar9 = _qmtc2(fVar6 * 0.25 * param_1 * (fVar5 + 1.0));
    auVar9 = _vmulbc(auVar11,auVar9);
    auVar9 = _sqc2(auVar9);
    uStack_40 = auVar9._0_4_;
    uStack_3c = auVar9._4_4_;
    uStack_38 = auVar9._8_4_;
    uStack_34 = auVar9._12_4_;
    *(undefined4 *)*pauVar4 = uStack_40;
    *(undefined4 *)(*pauVar4 + 4) = uStack_3c;
    *(undefined4 *)(*pauVar4 + 8) = uStack_38;
    *(undefined4 *)(*pauVar4 + 0xc) = uStack_34;
    auVar11 = _lqc2(*param_5);
    auVar9 = _qmtc2(0x42480000);
    auVar9 = _vmulbc(auVar11,auVar9);
    auVar9 = _sqc2(auVar9);
    auVar11 = _lqc2(*param_4);
    auVar9 = _lqc2(auVar9);
    auVar9 = _vsub(auVar11,auVar9);
    auVar9 = _sqc2(auVar9);
    auVar10 = _lqc2(*pauVar4);
    auVar11 = _qmtc2(100.0 / (float)uVar2);
    auVar11 = _vmulbc(auVar10,auVar11);
    auVar11 = _sqc2(auVar11);
    auVar9 = _lqc2(auVar9);
    auVar11 = _lqc2(auVar11);
    auVar9 = _vadd(auVar9,auVar11);
    auVar9 = _sqc2(auVar9);
    uStack_10 = auVar9._0_4_;
    uStack_c = auVar9._4_4_;
    uStack_8 = auVar9._8_4_;
    uStack_4 = auVar9._12_4_;
    *(undefined4 *)pauVar4[-4] = uStack_10;
    *(undefined4 *)(pauVar4[-4] + 4) = uStack_c;
    *(undefined4 *)(pauVar4[-4] + 8) = uStack_8;
    *(undefined4 *)(pauVar4[-4] + 0xc) = uStack_4;
    pauVar4 = pauVar4 + 1;
  } while (iVar3 < 4);
  auVar11 = _lqc2(*param_5);
  auVar9 = _qmtc2(0x42480000);
  auVar9 = _vmulbc(auVar11,auVar9);
  auVar9 = _sqc2(auVar9);
  auVar11 = _lqc2(*param_4);
  auVar9 = _lqc2(auVar9);
  auVar9 = _vadd(auVar11,auVar9);
  auVar9 = _sqc2(auVar9);
  uStack_30 = auVar9._0_4_;
  uStack_2c = auVar9._4_4_;
  uStack_28 = auVar9._8_4_;
  uStack_24 = auVar9._12_4_;
  *(undefined4 *)(param_3 + 0x20) = uStack_30;
  *(undefined4 *)(param_3 + 0x24) = uStack_2c;
  *(undefined4 *)(param_3 + 0x28) = uStack_28;
  *(undefined4 *)(param_3 + 0x2c) = uStack_24;
  return;
}

