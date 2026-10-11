/* Ghidra pseudocode. PS2 address: 00110148. Not validated source. */

void FUN_00110148(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined *puVar10;
  float fVar11;
  undefined *puVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auStack_1a0 [16];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 auStack_180 [16];
  undefined4 uStack_16c;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [16];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [12];
  
  iVar6 = (int)param_1;
  auVar13 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xd0));
  auVar15 = _vaddbc(in_vf0,in_vf0);
  auVar14 = _vmul(auVar13,auVar13);
  _vaddabc(auVar14,auVar14);
  _vmaddabc(auVar15,auVar14);
  auVar14 = _vmaddbc(auVar15,auVar14);
  _vrsqrt(in_vf0,auVar14);
  uVar17 = _vwaitq();
  auVar13 = _vmulq(auVar13,uVar17);
  auStack_150 = _sqc2(auVar13);
  uStack_160 = auStack_150._0_4_;
  uStack_15c = auStack_150._4_4_;
  uStack_158 = auStack_150._8_4_;
  uStack_154 = auStack_150._12_4_;
  lVar5 = FUN_0021c970(0x299cc8,iVar6 + 0xc0,&uStack_160,auStack_1a0);
  if (lVar5 == 0) {
    return;
  }
  auVar13._4_4_ = uStack_15c;
  auVar13._0_4_ = uStack_160;
  auVar13._8_4_ = uStack_158;
  auVar13._12_4_ = uStack_154;
  auVar13 = _lqc2(auVar13);
  auVar14 = _lqc2(auStack_180);
  auVar15 = _vaddbc(in_vf0,in_vf0);
  auVar13 = _vmul(auVar13,auVar14);
  _vaddabc(auVar13,auVar13);
  _vmaddabc(auVar15,auVar13);
  auVar13 = _vmaddbc(auVar15,auVar13);
  auVar13 = _qmfc2(auVar13._0_4_);
  if (auVar13._0_4_ < 0.0) {
    auVar14 = _lqc2(auStack_180);
    auVar13 = _qmtc2(0xbf800000);
    auVar13 = _vmulbc(auVar14,auVar13);
    auStack_180 = _sqc2(auVar13);
  }
  auStack_150 = *(undefined1 (*) [16])(iVar6 + 0x75b0);
  if (*(int *)(iVar6 + 0x344) == 2) {
    iVar7 = *(int *)(*(int *)(iVar6 + 0x394) + 0x28);
  }
  else {
    if (*(int *)(iVar6 + 0x34c) != 1) goto LAB_001102a4;
    iVar7 = *(int *)(iVar6 + 0x144);
  }
  if (iVar7 != 0) {
    FUN_001110c0(0xbf800000,&uStack_140,auStack_150);
    auStack_150._4_4_ = uStack_13c;
    auStack_150._0_4_ = uStack_140;
    auStack_150._8_4_ = uStack_138;
    auStack_150._12_4_ = uStack_134;
  }
LAB_001102a4:
  auVar13 = _lqc2(auStack_180);
  auVar14 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x130));
  auVar15 = _vaddbc(in_vf0,in_vf0);
  auVar13 = _vmul(auVar13,auVar14);
  _vaddabc(auVar13,auVar13);
  _vmaddabc(auVar15,auVar13);
  auVar13 = _vmaddbc(auVar15,auVar13);
  auVar13 = _qmfc2(auVar13._0_4_);
  auVar14 = _lqc2(auStack_180);
  auVar13 = _qmtc2(auVar13._0_4_);
  auVar13 = _vmulbc(auVar14,auVar13);
  auVar13 = _sqc2(auVar13);
  auVar14 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x130));
  auVar13 = _lqc2(auVar13);
  auVar13 = _vsub(auVar14,auVar13);
  auVar13 = _sqc2(auVar13);
  auVar13 = _lqc2(auVar13);
  auVar15 = _vaddbc(in_vf0,in_vf0);
  auVar14 = _vmul(auVar13,auVar13);
  _vaddabc(auVar14,auVar14);
  _vmaddabc(auVar15,auVar14);
  auVar14 = _vmaddbc(auVar15,auVar14);
  _vrsqrt(in_vf0,auVar14);
  uVar17 = _vwaitq();
  auVar13 = _vmulq(auVar13,uVar17);
  auVar13 = _sqc2(auVar13);
  auStack_110._0_4_ = auVar13._0_4_;
  auStack_110._4_4_ = auVar13._4_4_;
  auStack_110._8_4_ = auVar13._8_4_;
  auStack_110._12_4_ = auVar13._12_4_;
  uStack_140 = auStack_110._0_4_;
  uStack_13c = auStack_110._4_4_;
  uStack_138 = auStack_110._8_4_;
  uStack_134 = auStack_110._12_4_;
  auVar14 = _lqc2(auVar13);
  auVar15 = _lqc2(auStack_150);
  auVar16 = _vaddbc(in_vf0,in_vf0);
  auVar14 = _vmul(auVar14,auVar15);
  _vaddabc(auVar14,auVar14);
  _vmaddabc(auVar16,auVar14);
  auVar14 = _vmaddbc(auVar16,auVar14);
  auVar14 = _qmfc2(auVar14._0_4_);
  auVar15 = _lqc2(auVar13);
  auVar14 = _qmtc2(auVar14._0_4_);
  auVar14 = _vmulbc(auVar15,auVar14);
  auVar14 = _sqc2(auVar14);
  auVar15 = _lqc2(auStack_150);
  auVar14 = _lqc2(auVar14);
  auVar14 = _vsub(auVar15,auVar14);
  auVar14 = _sqc2(auVar14);
  auVar14 = _lqc2(auVar14);
  auVar16 = _vaddbc(in_vf0,in_vf0);
  auVar15 = _vmul(auVar14,auVar14);
  _vaddabc(auVar15,auVar15);
  _vmaddabc(auVar16,auVar15);
  auVar15 = _vmaddbc(auVar16,auVar15);
  _vrsqrt(in_vf0,auVar15);
  uVar17 = _vwaitq();
  auVar14 = _vmulq(auVar14,uVar17);
  auStack_100 = _sqc2(auVar14);
  uStack_130 = auStack_100._0_4_;
  uStack_12c = auStack_100._4_4_;
  uStack_128 = auStack_100._8_4_;
  uStack_124 = auStack_100._12_4_;
  auVar13 = _lqc2(auVar13);
  auVar14 = _lqc2(auStack_100);
  _vopmula(auVar13,auVar14);
  auVar13 = _vopmsub(auVar14,auVar13);
  auVar13 = _vsub(auVar13,auVar13);
  auStack_110 = _sqc2(auVar13);
  uStack_120 = auStack_110._0_4_;
  uStack_11c = auStack_110._4_4_;
  uStack_118 = auStack_110._8_4_;
  uStack_114 = auStack_110._12_4_;
  auVar13 = _lqc2(auStack_100);
  auVar14 = _lqc2(auStack_180);
  auVar15 = _vaddbc(in_vf0,in_vf0);
  auVar13 = _vmul(auVar13,auVar14);
  _vaddabc(auVar13,auVar13);
  _vmaddabc(auVar15,auVar13);
  auVar13 = _vmaddbc(auVar15,auVar13);
  auVar13 = _qmfc2(auVar13._0_4_);
  fVar8 = auVar13._0_4_;
  auVar13 = _lqc2(auStack_110);
  auVar14 = _lqc2(auStack_180);
  auVar15 = _vaddbc(in_vf0,in_vf0);
  auVar13 = _vmul(auVar13,auVar14);
  _vaddabc(auVar13,auVar13);
  _vmaddabc(auVar15,auVar13);
  auVar13 = _vmaddbc(auVar15,auVar13);
  auVar13 = _qmfc2(auVar13._0_4_);
  puVar10 = auVar13._0_4_;
  if (fVar8 == 0.0) {
    if (((float)puVar10 != 0.0) && (bVar1 = (float)puVar10 < 0.0, puVar10 = DAT_002c1314, bVar1)) {
      puVar10 = PTR_DAT_002c1310;
    }
  }
  else {
    puVar12 = puVar10;
    puVar10 = (undefined *)FUN_00218510((float)puVar10 / fVar8);
    if (fVar8 < 0.0) {
      if (0.0 < (float)puVar12) {
        puVar10 = (undefined *)((float)puVar10 + DAT_002c1318);
      }
      else {
        puVar10 = (undefined *)((float)puVar10 - DAT_002c131c);
      }
    }
  }
  iVar7 = 1;
  if (((DAT_002c1320 <= ABS((float)puVar10)) && (iVar7 = 2, ABS((float)puVar10) <= DAT_002c1324)) &&
     (iVar7 = 3, 0.0 < (float)puVar10)) {
    iVar7 = 4;
  }
  fVar8 = 103.0;
  bVar1 = 1 < *(int *)(iVar6 + 0x16c) - 3U;
  if (bVar1) {
    fVar8 = 40.0;
  }
  auVar14._4_4_ = uStack_18c;
  auVar14._0_4_ = uStack_190;
  auVar14._8_4_ = uStack_188;
  auVar14._12_4_ = uStack_184;
  auVar13 = _lqc2(auVar14);
  auVar14 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xc0));
  auVar13 = _vsub(auVar13,auVar14);
  auStack_110 = _sqc2(auVar13);
  auVar13 = _lqc2(auStack_110);
  auVar14 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x120));
  auVar15 = _vaddbc(in_vf0,in_vf0);
  auVar13 = _vmul(auVar13,auVar14);
  _vaddabc(auVar13,auVar13);
  _vmaddabc(auVar15,auVar13);
  auVar13 = _vmaddbc(auVar15,auVar13);
  auVar13 = _qmfc2(auVar13._0_4_);
  fVar9 = auVar13._0_4_;
  if (ABS(fVar9) <= fVar8) {
    auVar13 = _lqc2(auStack_110);
    auVar14 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x130));
    auVar15 = _vaddbc(in_vf0,in_vf0);
    auVar13 = _vmul(auVar13,auVar14);
    _vaddabc(auVar13,auVar13);
    _vmaddabc(auVar15,auVar13);
    auVar13 = _vmaddbc(auVar15,auVar13);
    auVar13 = _qmfc2(auVar13._0_4_);
    fVar8 = auVar13._0_4_;
    if (-30.0 <= fVar8) {
      uStack_f0 = *(undefined4 *)*(undefined1 (*) [16])(iVar6 + 0x7760);
      uStack_e4 = *(undefined4 *)(iVar6 + 0x776c);
      uStack_ec = *(undefined4 *)(iVar6 + 0x7764);
      uStack_e8 = *(undefined4 *)(iVar6 + 0x7768);
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x7760));
      auVar14 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xc0));
      auVar13 = _vsub(auVar13,auVar14);
      auStack_100 = _sqc2(auVar13);
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x130));
      auVar14 = _lqc2(auStack_100);
      auVar15 = _vaddbc(in_vf0,in_vf0);
      auVar13 = _vmul(auVar13,auVar14);
      _vaddabc(auVar13,auVar13);
      _vmaddabc(auVar15,auVar13);
      auVar13 = _vmaddbc(auVar15,auVar13);
      auVar13 = _qmfc2(auVar13._0_4_);
      if (fVar8 <= auVar13._0_4_ + 30.0) {
        bVar2 = false;
        bVar3 = false;
        *(undefined4 *)(DAT_002c56e8 + 0xa4218) = uStack_16c;
        *(undefined4 *)(iVar6 + 0x210) = uStack_16c;
        auStack_e0 = auStack_100;
        if (fVar8 < 60.0) {
          auVar15._4_4_ = uStack_13c;
          auVar15._0_4_ = uStack_140;
          auVar15._8_4_ = uStack_138;
          auVar15._12_4_ = uStack_134;
          auVar13 = _lqc2(auVar15);
          auVar14 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xd0));
          auVar15 = _vaddbc(in_vf0,in_vf0);
          auVar13 = _vmul(auVar13,auVar14);
          _vaddabc(auVar13,auVar13);
          _vmaddabc(auVar15,auVar13);
          auVar13 = _vmaddbc(auVar15,auVar13);
          auVar13 = _qmfc2(auVar13._0_4_);
          if ((auVar13._0_4_ < 0.0) || (*(int *)(iVar6 + 0x34c) == 2)) {
            if (*(int *)(iVar6 + 0x34c) == 1) {
              lVar5 = FUN_00114f78(param_1,&uStack_140,auStack_90,auStack_8c);
              if (lVar5 == 0) {
                bVar2 = true;
              }
              else {
                bVar3 = true;
              }
            }
            else {
              bVar3 = true;
            }
          }
        }
        if (!bVar2) {
          if (bVar3) {
            bVar2 = false;
            if ((*(int *)(iVar6 + 0x34c) == 1) && (iVar7 == 2)) {
              if (*(int *)(iVar6 + 0x344) == 2) {
                if (*(int *)(iVar6 + 0x144) == *(int *)(*(int *)(iVar6 + 0x394) + 0x28)) {
                  bVar2 = true;
                }
              }
              else {
                bVar2 = true;
              }
            }
            else if ((*(int *)(iVar6 + 0x34c) == 2) && (!bVar1)) {
              bVar2 = false;
              if (*(int *)(iVar6 + 0x344) == 2) {
                if (*(int *)(iVar6 + 0x144) != *(int *)(*(int *)(iVar6 + 0x394) + 0x28)) {
                  bVar2 = true;
                }
              }
              else if (*(int *)(iVar6 + 0x144) != 0) {
                bVar2 = true;
              }
            }
            if (bVar2) {
              uVar4 = *(uint *)(iVar6 + 0x144) ^ 1;
              *(uint *)(iVar6 + 0x144) = uVar4;
              uVar17 = DAT_002c1334;
              fVar8 = 0.0;
              if (uVar4 != 0) {
                fVar8 = DAT_002c1328;
              }
              fVar11 = fVar8 * DAT_002c132c + 0.5;
              fVar9 = (float)(int)fVar11;
              if (fVar11 < fVar9) {
                fVar9 = fVar9 - 1.0;
              }
              *(float *)(*(int *)(iVar6 + 0x6cf4) + 0x18) = fVar8 - fVar9 * DAT_002c1330;
              FUN_001129e8(uVar17,param_1,iVar6 + 0x130);
              if (*(int *)(iVar6 + 0x344) == 2) {
                FUN_001110b8(DAT_002c1338,*(undefined4 *)(iVar6 + 0x6cf4));
              }
              else {
                *(uint *)(*(int *)(iVar6 + 0x6cf4) + 0xc) = (uint)(*(int *)(iVar6 + 0x144) != 0);
              }
            }
            *(int *)(iVar6 + 0x16c) = iVar7;
            *(undefined4 *)(iVar6 + 0x210) = uStack_16c;
            uVar17 = FUN_001377d0(iVar6 + 0x8370,iVar7,*(undefined4 *)(iVar6 + 0x144),0);
            FUN_00107cb0(uVar17,param_1);
            FUN_0010b340(param_1,3);
            FUN_0010b330(param_1,0xf);
            return;
          }
          if (fVar8 <= 25.0) {
            return;
          }
          if (25.0 <= ABS(fVar9)) {
            return;
          }
        }
        uStack_d0 = uStack_190;
        uStack_cc = uStack_18c;
        uStack_c8 = uStack_188;
        uStack_c4 = uStack_184;
        uStack_a0 = *(undefined4 *)(iVar6 + 0xe0);
        *(undefined4 *)(iVar6 + 0x210) = uStack_16c;
        auVar13 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xd0));
        auVar15 = _vaddbc(in_vf0,in_vf0);
        auVar14 = _vmul(auVar13,auVar13);
        _vaddabc(auVar14,auVar14);
        _vmaddabc(auVar15,auVar14);
        auVar14 = _vmaddbc(auVar15,auVar14);
        _vrsqrt(in_vf0,auVar14);
        uVar17 = _vwaitq();
        auVar13 = _vmulq(auVar13,uVar17);
        auStack_e0 = _sqc2(auVar13);
        uStack_f0 = auStack_e0._0_4_;
        uStack_ec = auStack_e0._4_4_;
        uStack_e8 = auStack_e0._8_4_;
        uStack_e4 = auStack_e0._12_4_;
        uStack_c0 = auStack_e0._0_4_;
        uStack_bc = auStack_e0._4_4_;
        uStack_b8 = auStack_e0._8_4_;
        uStack_b4 = auStack_e0._12_4_;
        uStack_b0 = auStack_e0._0_4_;
        uStack_ac = auStack_e0._4_4_;
        uStack_a8 = auStack_e0._8_4_;
        uStack_a4 = auStack_e0._12_4_;
        FUN_0010a088(param_1,&uStack_d0);
        uVar17 = FUN_00137a48(iVar6 + 0x8370,0);
        FUN_00107cb0(uVar17,param_1);
      }
    }
  }
  return;
}

