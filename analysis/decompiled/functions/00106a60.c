/* Ghidra pseudocode. PS2 address: 00106a60. Not validated source. */

void FUN_00106a60(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  
  piVar3 = &iStack_100;
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xd0));
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _vmul(auVar7,auVar7);
  _vaddabc(auVar8,auVar8);
  _vmaddabc(auVar9,auVar8);
  auVar8 = _vmaddbc(auVar9,auVar8);
  _vrsqrt(in_vf0,auVar8);
  uVar11 = _vwaitq();
  auVar7 = _vmulq(auVar7,uVar11);
  auVar7 = _sqc2(auVar7);
  uStack_f0 = auVar7._0_4_;
  uStack_ec = auVar7._4_4_;
  uStack_e8 = auVar7._8_4_;
  uStack_e4 = auVar7._12_4_;
  auVar8 = _lqc2(auVar7);
  auVar7 = _qmtc2(0x44480000);
  auVar7 = _vmulbc(auVar8,auVar7);
  auVar7 = _sqc2(auVar7);
  auStack_e0._0_4_ = auVar7._0_4_;
  auStack_e0._4_4_ = auVar7._4_4_;
  auStack_e0._8_4_ = auVar7._8_4_;
  auStack_e0._12_4_ = auVar7._12_4_;
  iStack_100 = auStack_e0._0_4_;
  uStack_fc = auStack_e0._4_4_;
  uStack_f8 = auStack_e0._8_4_;
  uStack_f4 = auStack_e0._12_4_;
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xc0));
  auVar7 = _lqc2(auVar7);
  auVar7 = _vadd(auVar8,auVar7);
  auStack_e0 = _sqc2(auVar7);
  uStack_110 = auStack_e0._0_4_;
  uStack_10c = auStack_e0._4_4_;
  uStack_108 = auStack_e0._8_4_;
  uStack_104 = auStack_e0._12_4_;
  iVar4 = *(int *)(param_1 + 0x82f0);
  fVar6 = DAT_002c111c;
  iVar2 = FUN_0019c680(0x28acf8,&uStack_110,piVar3,3);
  if (0 < iVar2) {
    do {
      if (param_2 == 0) {
        iVar1 = *piVar3;
LAB_00106b64:
        fVar5 = (float)FUN_0019b688(iVar1,&uStack_110,&uStack_f0,auStack_b0);
        if ((*piVar3 == *(int *)(param_1 + 0x82f0)) &&
           (1600.0 < ABS((*(float *)(*piVar3 + 0x38) - *(float *)(param_1 + 0x2e4)) - fVar5))) {
          *(undefined4 *)(param_1 + 0x334) = 0xffffffff;
        }
        FUN_0019bcf8(fVar5 + 800.0,&uStack_d0,*piVar3,0);
        auVar7._4_4_ = uStack_10c;
        auVar7._0_4_ = uStack_110;
        auVar7._8_4_ = uStack_108;
        auVar7._12_4_ = uStack_104;
        auVar7 = _lqc2(auVar7);
        auVar9._4_4_ = uStack_cc;
        auVar9._0_4_ = uStack_d0;
        auVar9._8_4_ = uStack_c8;
        auVar9._12_4_ = uStack_c4;
        auVar8 = _lqc2(auVar9);
        auVar7 = _vsub(auVar7,auVar8);
        auStack_e0 = _sqc2(auVar7);
        auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xc0));
        auVar8._4_4_ = uStack_ec;
        auVar8._0_4_ = uStack_f0;
        auVar8._8_4_ = uStack_e8;
        auVar8._12_4_ = uStack_e4;
        auVar8 = _lqc2(auVar8);
        auVar7 = _vsub(auVar7,auVar8);
        auStack_c0 = _sqc2(auVar7);
        uStack_d0 = auStack_c0._0_4_;
        uStack_cc = auStack_c0._4_4_;
        uStack_c8 = auStack_c0._8_4_;
        uStack_c4 = auStack_c0._12_4_;
        auVar7 = _lqc2(auStack_c0);
        auVar8 = _lqc2(auStack_c0);
        auVar9 = _vaddbc(in_vf0,in_vf0);
        auVar7 = _vmul(auVar7,auVar8);
        _vaddabc(auVar7,auVar7);
        _vmaddabc(auVar9,auVar7);
        auVar7 = _vmaddbc(auVar9,auVar7);
        auVar8 = _qmfc2(auVar7._0_4_);
        auVar7 = _lqc2(auStack_e0);
        auVar9 = _lqc2(auStack_e0);
        auVar10 = _vaddbc(in_vf0,in_vf0);
        auVar7 = _vmul(auVar7,auVar9);
        _vaddabc(auVar7,auVar7);
        _vmaddabc(auVar10,auVar7);
        auVar7 = _vmaddbc(auVar10,auVar7);
        auVar7 = _qmfc2(auVar7._0_4_);
        fVar5 = auVar8._0_4_ + auVar7._0_4_;
        if (fVar5 < fVar6) {
          iVar4 = *piVar3;
          fVar6 = fVar5;
        }
      }
      else if (*piVar3 != *(int *)(param_1 + 0x82f0)) {
        iVar1 = *piVar3;
        goto LAB_00106b64;
      }
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + 1;
    } while (iVar2 != 0);
  }
  *(int *)(param_1 + 0x82f0) = iVar4;
  return;
}

