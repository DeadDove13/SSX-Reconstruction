/* Ghidra pseudocode. PS2 address: 0010a2c0. Not validated source. */

void FUN_0010a2c0(int param_1,undefined4 *param_2,float *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined1 auStack_150 [8];
  float fStack_148;
  float fStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  
  iVar1 = *(int *)(param_1 + 0x8340);
  bVar5 = false;
  if (((iVar1 != 6) && (iVar1 != 9)) && (bVar5 = true, iVar1 == 10)) {
    bVar5 = false;
  }
  if (bVar5) {
    fStack_160 = 0.0;
    fStack_158 = *(float *)(param_1 + 0x8338) * 0.5;
    fStack_15c = 0.0;
    fStack_154 = 0.0;
    fVar7 = 1.0;
    auVar13 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x8330));
    auVar14 = _lqc2(ZEXT416((uint)fStack_158) << 0x40);
    auVar13 = _vadd(auVar13,auVar14);
    auVar13 = _sqc2(auVar13);
    auStack_150._0_4_ = auVar13._0_4_;
    auStack_150._4_4_ = auVar13._4_4_;
    fStack_148 = auVar13._8_4_;
    fStack_144 = auVar13._12_4_;
    fStack_170 = (float)auStack_150._0_4_;
    fStack_16c = (float)auStack_150._4_4_;
    fStack_168 = fStack_148;
    fStack_164 = fStack_144;
    auVar13 = _lqc2(auVar13);
    auVar15 = _vaddbc(in_vf0,in_vf0);
    auVar14 = _vmul(auVar13,auVar13);
    _vaddabc(auVar14,auVar14);
    _vmaddabc(auVar15,auVar14);
    auVar14 = _vmaddbc(auVar15,auVar14);
    _vrsqrt(in_vf0,auVar14);
    uVar16 = _vwaitq();
    auVar13 = _vmulq(auVar13,uVar16);
    _auStack_150 = _sqc2(auVar13);
    uStack_180 = auStack_150._0_4_;
    uStack_17c = auStack_150._4_4_;
    fStack_178 = fStack_148;
    uStack_174 = fStack_144;
    FUN_0010e158(0x3f800000,0,0,0,&fStack_170);
    _auStack_150 = ZEXT416((uint)fVar7) << 0x40;
    FUN_00217dc8(&fStack_170,auStack_150,&uStack_180);
    fVar8 = fStack_168 * 0.0 - fStack_164 * fVar7;
    fVar10 = fStack_164 * 0.0 - fStack_16c * 0.0;
    fVar6 = fStack_16c * fVar7 - fStack_168 * 0.0;
    fVar9 = fStack_170 + fStack_170;
    fStack_d8 = fStack_16c * fVar10 - fStack_168 * fVar8;
    fStack_e0 = fStack_168 * fVar6 - fStack_164 * fVar10;
    uStack_e8._0_4_ = fVar9 * fVar6;
    fStack_dc = fStack_164 * fVar8 - fStack_16c * fVar6;
    fStack_f8 = fVar9 * fVar6 + 0.0;
    fStack_100 = fVar9 * fVar8 + 0.0;
    fStack_fc = fVar7 + fVar9 * fVar10;
    auStack_f0._4_4_ = fVar9 * fVar10;
    auStack_f0._0_4_ = fVar9 * fVar8;
    fStack_e0 = fStack_e0 + fStack_e0;
    fStack_dc = fStack_dc + fStack_dc;
    fStack_d8 = fStack_d8 + fStack_d8;
    auStack_150._4_4_ = fStack_fc + fStack_dc;
    auStack_150._0_4_ = fStack_100 + fStack_e0;
    fStack_148 = fStack_f8 + fStack_d8;
    fStack_144 = 0.0;
    fStack_15c = fStack_16c;
    fStack_158 = fStack_168;
    fStack_154 = fStack_164;
    fStack_160 = fStack_170;
    auVar14 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x8320));
    auVar13._4_4_ = uStack_17c;
    auVar13._0_4_ = uStack_180;
    auVar13._8_4_ = fStack_178;
    auVar13._12_4_ = uStack_174;
    auVar13 = _lqc2(auVar13);
    auVar15 = _vaddbc(in_vf0,in_vf0);
    auVar13 = _vmul(auVar14,auVar13);
    _vaddabc(auVar13,auVar13);
    _vmaddabc(auVar15,auVar13);
    auVar13 = _vmaddbc(auVar15,auVar13);
    auVar13 = _qmfc2(auVar13._0_4_);
    auVar14._4_4_ = uStack_17c;
    auVar14._0_4_ = uStack_180;
    auVar14._8_4_ = fStack_178;
    auVar14._12_4_ = uStack_174;
    auVar14 = _lqc2(auVar14);
    auVar13 = _qmtc2(auVar13._0_4_);
    auVar13 = _vmulbc(auVar14,auVar13);
    auVar13 = _sqc2(auVar13);
    auStack_110._0_4_ = auVar13._0_4_;
    auStack_110._4_4_ = auVar13._4_4_;
    uStack_108._0_4_ = auVar13._8_4_;
    uStack_108._4_4_ = auVar13._12_4_;
    fStack_120 = (float)auStack_110._0_4_;
    fStack_11c = (float)auStack_110._4_4_;
    fStack_118 = (float)uStack_108;
    fStack_114 = uStack_108._4_4_;
    auVar14 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x8320));
    auVar13 = _lqc2(auVar13);
    auVar13 = _vsub(auVar14,auVar13);
    auVar13 = _sqc2(auVar13);
    auStack_110._0_4_ = auVar13._0_4_;
    auStack_110._4_4_ = auVar13._4_4_;
    uStack_108._0_4_ = auVar13._8_4_;
    uStack_108._4_4_ = auVar13._12_4_;
    fStack_130 = (float)auStack_110._0_4_;
    fStack_12c = (float)auStack_110._4_4_;
    fStack_128 = (float)uStack_108;
    fStack_124 = uStack_108._4_4_;
    auVar13 = _lqc2(auVar13);
    auVar15 = _vaddbc(in_vf0,in_vf0);
    auVar14 = _vmul(auVar13,auVar13);
    _vaddabc(auVar14,auVar14);
    _vmaddabc(auVar15,auVar14);
    auVar14 = _vmaddbc(auVar15,auVar14);
    _vrsqrt(in_vf0,auVar14);
    uVar16 = _vwaitq();
    auVar13 = _vmulq(auVar13,uVar16);
    _auStack_110 = _sqc2(auVar13);
    uStack_140 = auStack_110._0_4_;
    uStack_13c = auStack_110._4_4_;
    uStack_138 = (float)uStack_108;
    uStack_134 = uStack_108._4_4_;
    FUN_00217dc8(&fStack_170,auStack_150);
    auStack_110._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xf4) >> 0x20);
    uStack_108._0_4_ = (float)*(undefined8 *)(param_1 + 0xfc);
    uStack_108._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0xfc) >> 0x20);
    fStack_11c = -(float)auStack_110._4_4_;
    fStack_118 = -(float)uStack_108;
    fStack_114 = -uStack_108._4_4_;
    auStack_110._0_4_ = (undefined4)*(undefined8 *)(param_1 + 0xf4);
    fStack_120 = (float)auStack_110._0_4_;
    fVar8 = fStack_11c * fStack_170;
    fVar12 = fStack_114 * fStack_170;
    fVar6 = fStack_118 * fStack_170;
    fVar11 = fStack_11c * fStack_168;
    fVar9 = fStack_114 * fStack_16c;
    fVar10 = fStack_118 * fStack_16c;
    fStack_170 = (((float)auStack_110._0_4_ * fStack_170 - fStack_11c * fStack_16c) -
                 fStack_118 * fStack_168) - fStack_114 * fStack_164;
    fStack_16c = ((float)auStack_110._0_4_ * fStack_16c + fVar8 + fStack_118 * fStack_164) -
                 fStack_114 * fStack_168;
    fStack_168 = ((float)auStack_110._0_4_ * fStack_168 + fVar6 + fVar9) - fStack_11c * fStack_164;
    fStack_164 = ((float)auStack_110._0_4_ * fStack_164 + fVar12 + fVar11) - fVar10;
    auStack_110._4_4_ = fStack_16c;
    auStack_110._0_4_ = fStack_170;
    uStack_108._0_4_ = fStack_168;
    uStack_108._4_4_ = fStack_164;
    fStack_130 = fStack_170;
    fStack_12c = fStack_16c;
    fStack_128 = fStack_168;
    fStack_124 = fStack_164;
    if (0.0 < fStack_170) {
      fVar6 = fStack_170;
      if (fVar7 < fStack_170) {
        fVar6 = fVar7;
      }
      fVar7 = (float)FUN_00218410(fVar6);
      fVar7 = (DAT_002c1210 - fVar7) + (DAT_002c1210 - fVar7);
      fVar6 = fVar7 * 0.5;
    }
    else {
      if (-1.0 <= fStack_170) {
        fVar7 = -fStack_170;
      }
      fVar7 = (float)FUN_00218410(fVar7);
      fVar7 = (DAT_002c1214 - fVar7) + (DAT_002c1214 - fVar7);
      fVar6 = fVar7 * -0.5;
    }
    fStack_114 = 0.0;
    *param_3 = fVar7;
    fStack_120 = fStack_16c;
    fStack_11c = fStack_168;
    fStack_118 = fStack_164;
    uVar16 = FUN_00218240(fVar6);
    auVar13 = _qmtc2(uVar16);
    _vdiv(in_vf0,0,auVar13,0);
    auVar15._4_4_ = fStack_11c;
    auVar15._0_4_ = fStack_120;
    auVar15._8_4_ = fStack_118;
    auVar15._12_4_ = fStack_114;
    auVar13 = _lqc2(auVar15);
    uVar16 = _vwaitq();
    auVar13 = _vmulq(auVar13,uVar16);
    auVar13 = _sqc2(auVar13);
    uStack_108._0_4_ = auVar13._8_4_;
    uStack_108._4_4_ = auVar13._12_4_;
    fStack_130 = auVar13._0_4_;
    fStack_12c = auVar13._4_4_;
    fStack_128 = (float)uStack_108;
    fStack_124 = uStack_108._4_4_;
    *param_2 = fStack_130;
    param_2[1] = fStack_12c;
    param_2[2] = (float)uStack_108;
    param_2[3] = uStack_108._4_4_;
    if (*(int *)(param_1 + 0x344) != 2) {
      auVar13 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x8320));
      auVar2._4_4_ = uStack_17c;
      auVar2._0_4_ = uStack_180;
      auVar2._8_4_ = fStack_178;
      auVar2._12_4_ = uStack_174;
      auVar14 = _lqc2(auVar2);
      auVar15 = _vaddbc(in_vf0,in_vf0);
      auVar13 = _vmul(auVar13,auVar14);
      _vaddabc(auVar13,auVar13);
      _vmaddabc(auVar15,auVar13);
      auVar13 = _vmaddbc(auVar15,auVar13);
      auVar13 = _qmfc2(auVar13._0_4_);
      auVar3._4_4_ = uStack_17c;
      auVar3._0_4_ = uStack_180;
      auVar3._8_4_ = fStack_178;
      auVar3._12_4_ = uStack_174;
      auVar14 = _lqc2(auVar3);
      auVar13 = _qmtc2(auVar13._0_4_);
      auVar13 = _vmulbc(auVar14,auVar13);
      auVar13 = _sqc2(auVar13);
      auStack_f0._0_4_ = auVar13._0_4_;
      auStack_f0._4_4_ = auVar13._4_4_;
      uStack_e8._0_4_ = auVar13._8_4_;
      uStack_e8._4_4_ = auVar13._12_4_;
      fStack_100 = (float)auStack_f0._0_4_;
      fStack_fc = (float)auStack_f0._4_4_;
      fStack_f8 = (float)uStack_e8;
      fStack_f4 = uStack_e8._4_4_;
      auVar13 = _lqc2(auVar13);
      auVar14 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x8320));
      auVar13 = _vsub(auVar13,auVar14);
      _auStack_110 = _sqc2(auVar13);
      auVar13 = _lqc2(_auStack_110);
      auVar15 = _vaddbc(in_vf0,in_vf0);
      auVar14 = _vmul(auVar13,auVar13);
      _vaddabc(auVar14,auVar14);
      _vmaddabc(auVar15,auVar14);
      auVar14 = _vmaddbc(auVar15,auVar14);
      _vrsqrt(in_vf0,auVar14);
      uVar16 = _vwaitq();
      auVar13 = _vmulq(auVar13,uVar16);
      _auStack_f0 = _sqc2(auVar13);
      fStack_120 = (float)auStack_f0._0_4_;
      fStack_11c = (float)auStack_f0._4_4_;
      fStack_118 = (float)uStack_e8;
      fStack_114 = uStack_e8._4_4_;
      FUN_00217dc8(&fStack_160,auStack_150,&fStack_120);
      auStack_f0._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xf4) >> 0x20);
      uStack_e8._0_4_ = (float)*(undefined8 *)(param_1 + 0xfc);
      uStack_e8._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0xfc) >> 0x20);
      fStack_fc = -(float)auStack_f0._4_4_;
      fStack_f8 = -(float)uStack_e8;
      fStack_f4 = -uStack_e8._4_4_;
      auStack_f0._0_4_ = (undefined4)*(undefined8 *)(param_1 + 0xf4);
      fStack_100 = (float)auStack_f0._0_4_;
      fVar6 = fStack_fc * fStack_160;
      fVar11 = fStack_f4 * fStack_160;
      fVar7 = fStack_f8 * fStack_160;
      fVar10 = fStack_fc * fStack_158;
      fVar8 = fStack_f4 * fStack_15c;
      fVar9 = fStack_f8 * fStack_15c;
      fStack_160 = (((float)auStack_f0._0_4_ * fStack_160 - fStack_fc * fStack_15c) -
                   fStack_f8 * fStack_158) - fStack_f4 * fStack_154;
      fStack_15c = ((float)auStack_f0._0_4_ * fStack_15c + fVar6 + fStack_f8 * fStack_154) -
                   fStack_f4 * fStack_158;
      fStack_158 = ((float)auStack_f0._0_4_ * fStack_158 + fVar7 + fVar8) - fStack_fc * fStack_154;
      fStack_154 = ((float)auStack_f0._0_4_ * fStack_154 + fVar11 + fVar10) - fVar9;
      auStack_f0._4_4_ = fStack_15c;
      auStack_f0._0_4_ = fStack_160;
      uStack_e8._0_4_ = fStack_158;
      uStack_e8._4_4_ = fStack_154;
      uStack_108 = uStack_e8;
      auStack_110 = auStack_f0;
      if (0.0 < fStack_160) {
        fVar7 = 1.0;
        if (fStack_160 <= 1.0) {
          fVar7 = fStack_160;
        }
        fStack_d0 = (float)FUN_00218410(fVar7);
        fVar7 = 0.5;
        fStack_d0 = DAT_002c1218 - fStack_d0;
      }
      else {
        fVar7 = 1.0;
        if (-1.0 <= fStack_160) {
          fVar7 = -fStack_160;
        }
        fStack_d0 = (float)FUN_00218410(fVar7);
        fVar7 = -0.5;
        fStack_d0 = DAT_002c121c - fStack_d0;
      }
      fStack_d0 = fStack_d0 + fStack_d0;
      fStack_100 = fStack_15c;
      fStack_fc = fStack_158;
      fStack_f8 = fStack_154;
      fStack_f4 = 0.0;
      uVar16 = FUN_00218240(fStack_d0 * fVar7);
      auVar13 = _qmtc2(uVar16);
      _vdiv(in_vf0,0,auVar13,0);
      auVar4._4_4_ = fStack_fc;
      auVar4._0_4_ = fStack_100;
      auVar4._8_4_ = fStack_f8;
      auVar4._12_4_ = fStack_f4;
      auVar13 = _lqc2(auVar4);
      uVar16 = _vwaitq();
      auVar13 = _vmulq(auVar13,uVar16);
      auVar13 = _sqc2(auVar13);
      uStack_e8._4_4_ = auVar13._12_4_;
      auStack_110._4_4_ = auVar13._4_4_;
      uStack_108._0_4_ = auVar13._8_4_;
      fVar7 = fStack_d0 * DAT_002c1220 + 0.5;
      fVar6 = (float)(int)fVar7;
      if (fVar7 < fVar6) {
        fVar6 = fVar6 - 1.0;
      }
      fVar7 = *param_3 * DAT_002c1220 + 0.5;
      fVar8 = (float)(int)fVar7;
      if (fVar7 < fVar8) {
        fVar8 = fVar8 - 1.0;
      }
      if (ABS(fStack_d0 - fVar6 * DAT_002c1224) < ABS(*param_3 - fVar8 * DAT_002c1224)) {
        *param_3 = fStack_d0;
        *param_2 = auVar13._0_4_;
        param_2[1] = auStack_110._4_4_;
        param_2[2] = (float)uStack_108;
        param_2[3] = uStack_e8._4_4_;
      }
    }
    if (ABS(*param_3) <= fStack_178 * DAT_002c1228) {
      return;
    }
  }
  *param_3 = 0.0;
  return;
}

