/* Ghidra pseudocode. PS2 address: 00125630. Not validated source. */

void FUN_00125630(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [8];
  float fStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [8];
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined1 auStack_90 [32];
  
  lVar1 = FUN_00187ce8(DAT_002859e4);
  if (lVar1 == 0) {
    iVar3 = (int)param_1;
    lVar1 = (**(code **)(*(int *)(iVar3 + 8) + 100))(iVar3 + *(short *)(*(int *)(iVar3 + 8) + 0x60))
    ;
    auVar12 = _auStack_c0;
    fVar5 = DAT_002c1b00;
    if (lVar1 == 0) {
      auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
      auVar14 = _vaddbc(in_vf0,in_vf0);
      auVar11 = _vmul(auVar11,auVar13);
      _vaddabc(auVar11,auVar11);
      _vmaddabc(auVar14,auVar11);
      auVar11 = _vmaddbc(auVar14,auVar11);
      auVar13 = _qmfc2(auVar11._0_4_);
      auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xb0));
      auVar14 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
      auVar15 = _vaddbc(in_vf0,in_vf0);
      auVar11 = _vmul(auVar11,auVar14);
      _vaddabc(auVar11,auVar11);
      _vmaddabc(auVar15,auVar11);
      auVar11 = _vmaddbc(auVar15,auVar11);
      auVar11 = _qmfc2(auVar11._0_4_);
      if (*(float *)(iVar3 + 0x38) == 0.0) {
        fVar7 = -1.0;
      }
      else {
        fVar7 = 1.0 / *(float *)(iVar3 + 0x38);
      }
      fVar4 = (auVar13._0_4_ + auVar11._0_4_) * DAT_002c1af4;
      fVar6 = *(float *)(iVar3 + 200) * DAT_002c1af8;
      fVar10 = *(float *)(iVar3 + 0xe4) + DAT_002c1afc;
      *(float *)(iVar3 + 0xe4) = fVar10;
      fVar6 = fVar6 + fVar4 / fVar7;
      *(float *)(iVar3 + 200) = fVar6;
      if ((fVar6 < fVar5) || (10.0 <= fVar10)) {
        *(undefined4 *)(iVar3 + 0xe4) = 0;
        *(undefined4 *)(iVar3 + 0x80) = 0;
        *(undefined4 *)(iVar3 + 0x84) = 0;
        *(undefined4 *)(iVar3 + 0x88) = 0;
        *(undefined4 *)(iVar3 + 0x8c) = 0;
        auVar13 = _lqc2(ZEXT816(0));
        auVar11 = _qmtc2(*(undefined4 *)(iVar3 + 0x38));
        auVar11 = _vmulbc(auVar13,auVar11);
        auStack_e0 = _sqc2(auVar11);
        uStack_f0 = auStack_e0._0_4_;
        uStack_ec = auStack_e0._4_4_;
        uStack_e8 = auStack_e0._8_4_;
        uStack_e4 = auStack_e0._12_4_;
        *(undefined4 *)(iVar3 + 0xa0) = uStack_f0;
        *(undefined4 *)(iVar3 + 0xa4) = uStack_ec;
        *(undefined4 *)(iVar3 + 0xa8) = auStack_e0._8_4_;
        *(undefined4 *)(iVar3 + 0xac) = auStack_e0._12_4_;
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_f8 = 0;
        uStack_f4 = 0;
        *(undefined4 *)(iVar3 + 0x90) = 0;
        *(undefined4 *)(iVar3 + 0x94) = 0;
        *(undefined4 *)(iVar3 + 0x98) = 0;
        *(undefined4 *)(iVar3 + 0x9c) = 0;
        fStack_a8 = *(float *)(iVar3 + 0x98);
        fStack_b0 = *(float *)(iVar3 + 0x90);
        fStack_ac = *(float *)(iVar3 + 0x94);
        fStack_a0 = *(float *)(iVar3 + 0x3c) * fStack_b0 + *(float *)(iVar3 + 0x48) * fStack_ac +
                    *(float *)(iVar3 + 0x54) * fStack_a8;
        fStack_9c = *(float *)(iVar3 + 0x40) * fStack_b0 + *(float *)(iVar3 + 0x4c) * fStack_ac +
                    *(float *)(iVar3 + 0x58) * fStack_a8;
        auStack_d0._4_4_ = fStack_9c;
        auStack_d0._0_4_ = fStack_a0;
        auStack_c0._4_4_ = fStack_9c;
        auStack_c0._0_4_ = fStack_a0;
        fStack_98 = *(float *)(iVar3 + 0x44) * fStack_b0 + *(float *)(iVar3 + 0x50) * fStack_ac +
                    *(float *)(iVar3 + 0x5c) * fStack_a8;
        fStack_c8 = fStack_98;
        uStack_c4 = 0;
        uStack_b4 = auVar12._12_4_;
        fStack_b8 = fStack_98;
        *(float *)(iVar3 + 0xb0) = fStack_a0;
        *(float *)(iVar3 + 0xb4) = fStack_9c;
        *(float *)(iVar3 + 0xb8) = fStack_98;
        *(undefined4 *)(iVar3 + 0xbc) = 0;
        (**(code **)(*(int *)(iVar3 + 8) + 0xb4))(iVar3 + *(short *)(*(int *)(iVar3 + 8) + 0xb0),1);
      }
      else {
        fVar7 = *(float *)(iVar3 + 0xe8) * DAT_002c1b04;
        fVar5 = fVar7 * 10.0;
        *(float *)(iVar3 + 0xe8) = fVar7;
        if (fVar5 < 0.0) {
          fVar5 = 0.0;
        }
        else if (2.0 < fVar5) {
          fVar5 = 2.0;
        }
        iVar2 = iVar3 + 0x150;
        fVar5 = (*(float *)(iVar3 + 0xe4) + *(float *)(iVar3 + 0xe4)) * fVar5 + fVar5;
        auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
        auVar12 = _qmtc2(fVar5);
        auVar12 = _vmulbc(auVar11,auVar12);
        auVar12 = _sqc2(auVar12);
        auVar11 = _lqc2(ZEXT416((uint)(-980.0 / *(float *)(iVar3 + 0x38))) << 0x40);
        auVar12 = _lqc2(auVar12);
        auVar12 = _vsub(auVar11,auVar12);
        auVar12 = _sqc2(auVar12);
        auStack_d0._0_4_ = auVar12._0_4_;
        auStack_d0._4_4_ = auVar12._4_4_;
        fStack_c8 = auVar12._8_4_;
        uStack_c4 = auVar12._12_4_;
        uStack_100 = auStack_d0._0_4_;
        uStack_fc = auStack_d0._4_4_;
        uStack_f8 = fStack_c8;
        uStack_f4 = uStack_c4;
        auStack_e0 = ZEXT816(0);
        auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
        auVar12 = _qmtc2(fVar5);
        auVar12 = _vmulbc(auVar11,auVar12);
        _auStack_d0 = _sqc2(auVar12);
        auVar12 = _lqc2(auStack_e0);
        auVar11 = _lqc2(_auStack_d0);
        auVar12 = _vsub(auVar12,auVar11);
        _auStack_c0 = _sqc2(auVar12);
        uStack_f0 = auStack_c0._0_4_;
        uStack_ec = auStack_c0._4_4_;
        uStack_e8 = fStack_b8;
        uStack_e4 = uStack_b4;
        FUN_00135e98(DAT_002c1b08,iVar3 + 0x30,&uStack_100,&uStack_f0);
        FUN_00124e88(param_1);
        FUN_00135d40(iVar3 + 0x30);
        FUN_00125438(auStack_90,param_1);
        FUN_00217948(auStack_e0,auStack_90);
        FUN_0020e858(iVar2,auStack_e0);
        uVar8 = FUN_0020e740(iVar2);
        uVar9 = FUN_0020e740(iVar2);
        fStack_c8 = (float)FUN_0020e740(iVar2);
        auStack_d0._4_4_ = uVar9;
        auStack_d0._0_4_ = uVar8;
        uStack_c4 = 0;
        auVar12 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x1e0));
        auVar11 = _lqc2(_auStack_d0);
        auVar12 = _vsub(auVar12,auVar11);
        auStack_e0 = _sqc2(auVar12);
        uStack_b4 = auStack_e0._12_4_;
        *(undefined4 *)(iVar3 + 0x2a0) = auStack_e0._0_4_;
        *(undefined4 *)(iVar3 + 0x2a4) = auStack_e0._4_4_;
        *(undefined4 *)(iVar3 + 0x2a8) = auStack_e0._8_4_;
        *(undefined4 *)(iVar3 + 0x2ac) = uStack_b4;
        _auStack_c0 = auStack_e0;
        uVar8 = FUN_0020e740(iVar2);
        uVar9 = FUN_0020e740(iVar2);
        fStack_c8 = (float)FUN_0020e740(iVar2);
        auStack_d0._4_4_ = uVar9;
        auStack_d0._0_4_ = uVar8;
        uStack_c4 = 0;
        auVar12 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x1e0));
        auVar11 = _lqc2(_auStack_d0);
        auVar12 = _vadd(auVar12,auVar11);
        auStack_e0 = _sqc2(auVar12);
        uStack_b4 = auStack_e0._12_4_;
        *(int *)(iVar3 + 0x2b0) = auStack_e0._0_4_;
        *(int *)(iVar3 + 0x2b4) = auStack_e0._4_4_;
        *(undefined4 *)(iVar3 + 0x2b8) = auStack_e0._8_4_;
        *(undefined4 *)(iVar3 + 700) = uStack_b4;
        _auStack_c0 = auStack_e0;
        FUN_001324e0(*(undefined4 *)(DAT_002859e4 + 0x28),iVar3 + 0x2c0);
        FUN_00125b30(param_1);
      }
    }
  }
  return;
}

