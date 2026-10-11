/* Ghidra pseudocode. PS2 address: 00115ae0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00115c38) */

void FUN_00115ae0(undefined8 param_1,int param_2,undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16],undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  int iVar10;
  float fVar11;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  
  iVar10 = *(int *)(param_2 + 0x210) * 0x60 + *(int *)(DAT_002859e4 + 0x1c);
  if (((*(int *)(param_2 + 0x260) != 2) && (DAT_002c1590 <= *(float *)(iVar10 + 0x54))) &&
     (pauVar8 = (undefined1 (*) [16])param_5, DAT_002c1594 <= *(float *)(*pauVar8 + 8))) {
    auVar12 = _lqc2(*param_3);
    pauVar9 = (undefined1 (*) [16])param_1;
    auVar13 = _lqc2(*pauVar9);
    auVar12 = _vsub(auVar12,auVar13);
    auVar12 = _sqc2(auVar12);
    auVar12 = _lqc2(auVar12);
    auVar13 = _vaddbc(in_vf0,in_vf0);
    auVar12 = _vmul(auVar12,auVar12);
    _vaddabc(auVar12,auVar12);
    _vmaddabc(auVar13,auVar12);
    auVar12 = _vmaddbc(auVar13,auVar12);
    _vsqrt(auVar12);
    _vwaitq();
    uVar7 = _cfc2(in_vc6);
    if ((*(int *)(pauVar9[1] + 8) == 0) ||
       (((float)uVar7 != 0.0 && (*(float *)pauVar9[1] <= DAT_002c1594)))) {
      uVar2 = *(undefined4 *)(*param_3 + 4);
      uVar15 = *(undefined4 *)(*param_3 + 8);
      uVar3 = *(undefined4 *)(*param_3 + 0xc);
      *(undefined4 *)*pauVar9 = *(undefined4 *)*param_3;
      *(undefined4 *)(*pauVar9 + 4) = uVar2;
      *(undefined4 *)(*pauVar9 + 8) = uVar15;
      *(undefined4 *)(*pauVar9 + 0xc) = uVar3;
      iVar1 = *(int *)(pauVar9[1] + 8);
      *(float *)pauVar9[1] = *(float *)pauVar9[1] + 100.0 / (float)uVar7;
      if (iVar1 < 5) {
        *(int *)(pauVar9[1] + 8) = iVar1 + 1;
      }
      fVar4 = DAT_002c15a0;
      fVar11 = DAT_002c159c;
      uVar2 = DAT_002c1598;
      iVar1 = (*(int *)(pauVar9[1] + 0xc) + 4) % 5;
      *(int *)(pauVar9[1] + 0xc) = iVar1;
      auVar12 = _lqc2(*param_4);
      auVar13 = _lqc2(*pauVar8);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      auVar12 = _vmul(auVar12,auVar13);
      _vaddabc(auVar12,auVar12);
      _vmaddabc(auVar14,auVar12);
      auVar12 = _vmaddbc(auVar14,auVar12);
      auVar12 = _qmfc2(auVar12._0_4_);
      auVar13 = _lqc2(*pauVar8);
      auVar12 = _qmtc2(auVar12._0_4_);
      auVar12 = _vmulbc(auVar13,auVar12);
      auVar12 = _sqc2(auVar12);
      auVar13 = _lqc2(*param_4);
      auVar12 = _lqc2(auVar12);
      auVar12 = _vsub(auVar13,auVar12);
      auVar12 = _sqc2(auVar12);
      auVar12 = _lqc2(auVar12);
      auVar13 = _lqc2(*pauVar8);
      _vopmula(auVar12,auVar13);
      auVar12 = _vopmsub(auVar13,auVar12);
      auVar12 = _vsub(auVar12,auVar12);
      auVar12 = _sqc2(auVar12);
      pauVar9 = pauVar9 + iVar1 * 0x3c + 2;
      auVar12 = _lqc2(auVar12);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      auVar13 = _vmul(auVar12,auVar12);
      _vaddabc(auVar13,auVar13);
      _vmaddabc(auVar14,auVar13);
      auVar13 = _vmaddbc(auVar14,auVar13);
      _vrsqrt(in_vf0,auVar13);
      uVar15 = _vwaitq();
      auVar12 = _vmulq(auVar12,uVar15);
      auStack_140 = _sqc2(auVar12);
      auVar12 = _lqc2(*pauVar8);
      auVar13 = _lqc2(auStack_140);
      _vopmula(auVar12,auVar13);
      auVar12 = _vopmsub(auVar13,auVar12);
      auVar12 = _vsub(auVar12,auVar12);
      auStack_130 = _sqc2(auVar12);
      *(undefined4 *)(pauVar9[0x3b] + 8) = 0;
      *(undefined4 *)(pauVar9[0x3b] + 0xc) = uVar2;
      *(undefined4 *)(pauVar9[0x3b] + 4) = 0x19;
      uVar7 = *(undefined8 *)(*(int *)(param_2 + 0x8584) + 0x478);
      *(undefined8 *)(pauVar9[0x3a] + 4) = *(undefined8 *)(*(int *)(param_2 + 0x8584) + 0x470);
      *(undefined8 *)(pauVar9[0x3a] + 0xc) = uVar7;
      auVar13 = _lqc2(*pauVar8);
      auVar12 = _qmtc2(0x40a00000);
      auVar12 = _vmulbc(auVar13,auVar12);
      auVar12 = _sqc2(auVar12);
      auVar13 = _lqc2(*param_3);
      auVar12 = _lqc2(auVar12);
      auVar12 = _vadd(auVar13,auVar12);
      auVar12 = _sqc2(auVar12);
      auStack_100._12_4_ = auVar12._12_4_;
      auStack_120._4_4_ = auVar12._4_4_;
      auStack_120._8_4_ = auVar12._8_4_;
      *(int *)pauVar9[0x32] = auVar12._0_4_;
      *(undefined4 *)(pauVar9[0x32] + 4) = auStack_120._4_4_;
      *(undefined4 *)(pauVar9[0x32] + 8) = auStack_120._8_4_;
      *(undefined4 *)(pauVar9[0x32] + 0xc) = auStack_100._12_4_;
      auVar12 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xd0));
      auVar13 = _lqc2(*pauVar8);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      auVar12 = _vmul(auVar12,auVar13);
      _vaddabc(auVar12,auVar12);
      _vmaddabc(auVar14,auVar12);
      auVar12 = _vmaddbc(auVar14,auVar12);
      auVar12 = _qmfc2(auVar12._0_4_);
      auVar13 = _lqc2(*pauVar8);
      auVar12 = _qmtc2(auVar12._0_4_);
      auVar12 = _vmulbc(auVar13,auVar12);
      auStack_100 = _sqc2(auVar12);
      auVar12 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xd0));
      auVar13 = _lqc2(auStack_100);
      auVar12 = _vsub(auVar12,auVar13);
      auStack_f0 = _sqc2(auVar12);
      uStack_110 = auStack_f0._0_4_;
      uStack_10c = auStack_f0._4_4_;
      uStack_108 = auStack_f0._8_4_;
      uStack_104 = auStack_f0._12_4_;
      auVar12 = _lqc2(auStack_f0);
      auVar13 = _vaddbc(in_vf0,in_vf0);
      auVar12 = _vmul(auVar12,auVar12);
      _vaddabc(auVar12,auVar12);
      _vmaddabc(auVar13,auVar12);
      auVar12 = _vmaddbc(auVar13,auVar12);
      _vsqrt(auVar12);
      _vwaitq();
      uVar7 = _cfc2(in_vc6);
      fVar11 = (float)uVar7 * fVar11;
      if (fVar4 < fVar11) {
        auVar13 = _lqc2(auStack_f0);
        auVar12 = _qmtc2(fVar4 / fVar11);
        auVar12 = _vmulbc(auVar13,auVar12);
        auVar12 = _sqc2(auVar12);
        auStack_d0._0_4_ = auVar12._0_4_;
        auStack_d0._4_4_ = auVar12._4_4_;
        auStack_d0._8_4_ = auVar12._8_4_;
        auStack_d0._12_4_ = auVar12._12_4_;
        uStack_e0 = auStack_d0._0_4_;
        uStack_dc = auStack_d0._4_4_;
        uStack_d8 = auStack_d0._8_4_;
        uStack_d4 = auStack_d0._12_4_;
        auVar14 = _lqc2(*pauVar8);
        auVar13 = _qmtc2(DAT_002c15a4);
        auVar13 = _vmulbc(auVar14,auVar13);
        auStack_d0 = _sqc2(auVar13);
        auVar12 = _lqc2(auVar12);
        auVar13 = _lqc2(auStack_d0);
        auVar12 = _vadd(auVar12,auVar13);
        auStack_120 = _sqc2(auVar12);
        auStack_c0 = auStack_120;
      }
      else {
        auVar13 = _lqc2(*pauVar8);
        auVar12 = _qmtc2(fVar11 * DAT_002c15a8);
        auVar12 = _vmulbc(auVar13,auVar12);
        auVar12 = _sqc2(auVar12);
        auStack_d0._0_4_ = auVar12._0_4_;
        auStack_d0._4_4_ = auVar12._4_4_;
        auStack_d0._8_4_ = auVar12._8_4_;
        auStack_d0._12_4_ = auVar12._12_4_;
        uStack_e0 = auStack_d0._0_4_;
        uStack_dc = auStack_d0._4_4_;
        uStack_d8 = auStack_d0._8_4_;
        uStack_d4 = auStack_d0._12_4_;
        auVar13 = _lqc2(auStack_f0);
        auVar12 = _lqc2(auVar12);
        auVar12 = _vadd(auVar13,auVar12);
        auStack_120 = _sqc2(auVar12);
        auStack_d0 = auStack_120;
      }
      *(int *)pauVar9[0x33] = auStack_120._0_4_;
      *(int *)(pauVar9[0x33] + 4) = auStack_120._4_4_;
      *(undefined4 *)(pauVar9[0x33] + 8) = auStack_120._8_4_;
      *(undefined4 *)(pauVar9[0x33] + 0xc) = auStack_120._12_4_;
      uVar5 = FUN_002109b0();
      fVar11 = 1.0;
      uVar6 = FUN_002109b0();
      FUN_001154f0(((float)(uVar5 & 0x7fffff | 0x3f800000) - 1.0) * 150.0 + 250.0,
                   ((float)(uVar6 & 0x7fffff | 0x3f800000) - fVar11) * DAT_002c15ac + 0.0,
                   *(float *)(iVar10 + 0x54) * DAT_002c15b0,DAT_002c15b4,param_1,pauVar9,param_5,
                   auStack_130,auStack_140);
    }
  }
  return;
}

