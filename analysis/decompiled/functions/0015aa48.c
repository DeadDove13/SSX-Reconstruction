/* Ghidra pseudocode. PS2 address: 0015aa48. Not validated source. */

void FUN_0015aa48(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined *puVar19;
  float fVar20;
  undefined *puVar21;
  float fVar22;
  undefined *puVar23;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined *puStack_160;
  float fStack_15c;
  undefined *puStack_158;
  undefined4 uStack_154;
  undefined *puStack_150;
  float fStack_14c;
  undefined *puStack_148;
  float fStack_144;
  undefined1 auStack_140 [4];
  undefined1 auStack_13c [8];
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  iVar1 = *param_1;
  if (iVar1 == 0) goto LAB_0015b650;
  if (((float)param_1[2] == 0.0) && ((float)param_1[3] == 0.0)) {
    param_2 = 1;
  }
  else {
    fVar5 = (float)FUN_0011ee88(param_1 + 2,param_1 + 2);
    iVar1 = *param_1;
    if (SQRT(fVar5) < 0.5) {
      param_2 = 1;
    }
  }
  piVar3 = param_1 + 2;
  if (*(int *)(iVar1 + 0x350) == 0x12) {
    iVar4 = *(int *)(iVar1 + 0x350);
LAB_0015ac18:
    if (iVar4 == 0x12) {
      iVar1 = *param_1;
    }
    else {
      if (*(int *)(iVar1 + 0x34c) == 6) {
        if (param_2 != 0) {
          iVar4 = *(int *)(iVar1 + 0xd0);
          iVar1 = iVar1 + 0xd0;
          goto LAB_0015b5fc;
        }
        fVar5 = (float)FUN_0011ee88(piVar3,piVar3);
        if (SQRT(fVar5) == 0.0) {
          fStack_130 = (float)param_1[2];
          fStack_12c = (float)param_1[3];
          fStack_128 = (float)param_1[4];
        }
        else {
          FUN_0011ee58(&fStack_130,piVar3);
        }
        auStack_13c._4_4_ = fStack_128 * DAT_002c24ac;
        auStack_13c._0_4_ = fStack_12c * DAT_002c24ac;
        auStack_140 = (undefined1  [4])(fStack_130 * DAT_002c24ac);
        auVar24 = _lqc2(*(undefined1 (*) [16])(*param_1 + 0xd0));
        auVar25 = _vaddbc(in_vf0,in_vf0);
        auVar24 = _vmul(auVar24,auVar24);
        _vaddabc(auVar24,auVar24);
        _vmaddabc(auVar25,auVar24);
        auVar24 = _vmaddbc(auVar25,auVar24);
        _vsqrt(auVar24);
        _vwaitq();
        uVar2 = _cfc2(in_vc6);
        fStack_14c = (float)uVar2;
        puStack_148 = (undefined *)(fStack_128 * DAT_002c24ac * fStack_14c);
        puStack_150 = (undefined *)(fStack_130 * DAT_002c24ac * fStack_14c);
        fStack_14c = fStack_12c * DAT_002c24ac * fStack_14c;
        auVar25 = _lqc2(*(undefined1 (*) [16])(*param_1 + 0xd0));
        auVar24 = _qmtc2(DAT_002c24b0);
        auVar24 = _vmulbc(auVar25,auVar24);
        _auStack_100 = _sqc2(auVar24);
        fStack_120 = (float)auStack_100._0_4_;
        fStack_11c = (float)auStack_100._4_4_;
        fStack_118 = fStack_f8;
        uStack_114 = fStack_f4;
        goto LAB_0015ad28;
      }
      iVar1 = *param_1;
    }
    param_1[1] = *(int *)(iVar1 + 0x140);
    auVar24 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xd0));
    auVar25 = _vaddbc(in_vf0,in_vf0);
    auVar24 = _vmul(auVar24,auVar24);
    _vaddabc(auVar24,auVar24);
    _vmaddabc(auVar25,auVar24);
    auVar24 = _vmaddbc(auVar25,auVar24);
    _vsqrt(auVar24);
    _vwaitq();
    uVar2 = _cfc2(in_vc6);
    if (10.0 < (float)uVar2) {
      if (param_2 != 0) {
        param_1[2] = *(int *)(iVar1 + 0xd0);
        param_1[3] = *(int *)(iVar1 + 0xd4);
        param_1[4] = *(int *)(iVar1 + 0xd8);
        goto LAB_0015b614;
      }
      fVar5 = (float)param_1[3];
      fVar18 = 0.0;
      puVar19 = (undefined *)param_1[2];
      if (fVar5 == 0.0) {
        puVar6 = puVar19;
        if ((float)puVar19 == 0.0) goto LAB_0015ae60;
        fVar18 = (float)puVar19 * (float)puVar19;
        puVar6 = PTR_DAT_002c24b4;
        if ((float)puVar19 < 0.0) goto LAB_0015ae64;
        puVar19 = (undefined *)param_1[4];
        puVar6 = DAT_002c24b8;
      }
      else {
        puVar6 = (undefined *)FUN_00218510((float)puVar19 / fVar5);
        if (fVar5 < fVar18) {
          if (fVar18 < (float)puVar19) {
            puVar6 = (undefined *)((float)puVar6 + DAT_002c24bc);
          }
          else {
            puVar6 = (undefined *)((float)puVar6 - DAT_002c24c0);
          }
        }
        puVar19 = (undefined *)param_1[2];
        fVar5 = (float)param_1[3];
LAB_0015ae60:
        fVar18 = (float)puVar19 * (float)puVar19;
LAB_0015ae64:
        puVar19 = (undefined *)param_1[4];
      }
      fVar5 = SQRT(fVar18 + fVar5 * fVar5);
      if (fVar5 == 0.0) {
        puVar7 = puVar19;
        if ((float)puVar19 == 0.0) goto LAB_0015aef4;
        iVar1 = *param_1;
        puVar21 = DAT_002c24c8;
        puVar7 = PTR_DAT_002c24c4;
        if ((float)puVar19 < 0.0) goto LAB_0015aef8;
      }
      else {
        puVar7 = (undefined *)FUN_00218510((float)puVar19 / fVar5);
        if (fVar5 < 0.0) {
          if (0.0 < (float)puVar19) {
            puVar7 = (undefined *)((float)puVar7 + DAT_002c24cc);
          }
          else {
            puVar7 = (undefined *)((float)puVar7 - DAT_002c24d0);
          }
        }
LAB_0015aef4:
        iVar1 = *param_1;
LAB_0015aef8:
        puVar21 = puVar7;
      }
      auVar24 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xd0));
      auVar26 = _vaddbc(in_vf0,in_vf0);
      auVar25 = _vmul(auVar24,auVar24);
      _vaddabc(auVar25,auVar25);
      _vmaddabc(auVar26,auVar25);
      auVar25 = _vmaddbc(auVar26,auVar25);
      _vrsqrt(in_vf0,auVar25);
      uVar27 = _vwaitq();
      auVar24 = _vmulq(auVar24,uVar27);
      _auStack_140 = _sqc2(auVar24);
      puVar19 = auStack_140;
      fVar5 = auStack_140._4_4_;
      puStack_148 = (undefined *)auStack_13c._4_4_;
      fStack_144 = fStack_134;
      puStack_158 = (undefined *)auStack_13c._4_4_;
      puStack_160 = puVar19;
      fStack_15c = fVar5;
      puStack_150 = puVar19;
      fStack_14c = fVar5;
      if (fVar5 == 0.0) {
        puVar7 = puVar19;
        if (((float)puVar19 == 0.0) ||
           (puVar7 = PTR_DAT_002c24d4, puVar23 = DAT_002c24d8, (float)puVar19 < 0.0))
        goto LAB_0015afc0;
      }
      else {
        puVar7 = (undefined *)FUN_00218510((float)puVar19 / fVar5);
        if (fVar5 < 0.0) {
          if (0.0 < (float)puVar19) {
            puVar7 = (undefined *)((float)puVar7 + DAT_002c24dc);
          }
          else {
            puVar7 = (undefined *)((float)puVar7 - DAT_002c24e0);
          }
        }
LAB_0015afc0:
        puVar23 = puVar7;
      }
      fVar5 = SQRT((float)puStack_160 * (float)puStack_160 + fStack_15c * fStack_15c);
      if (fVar5 == 0.0) {
        puVar19 = puStack_158;
        if (((float)puStack_158 != 0.0) && (puVar19 = DAT_002c24e8, (float)puStack_158 < 0.0)) {
          puVar19 = PTR_DAT_002c24e4;
        }
      }
      else {
        puVar7 = puStack_158;
        puVar19 = (undefined *)FUN_00218510((float)puStack_158 / fVar5);
        if (fVar5 < 0.0) {
          if (0.0 < (float)puVar7) {
            puVar19 = (undefined *)((float)puVar19 + DAT_002c24ec);
          }
          else {
            puVar19 = (undefined *)((float)puVar19 - DAT_002c24f0);
          }
        }
      }
      fVar5 = 10.0;
      fVar18 = (float)FUN_0015bec0(puVar23,puVar6);
      fVar18 = fVar18 / fVar5;
      fVar8 = (float)FUN_0015bec0(puVar19,puVar21);
      uStack_108._0_4_ = 1.0;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uStack_108;
      _auStack_110 = auVar24 << 0x40;
      puStack_150 = (undefined *)0x3f800000;
      fStack_14c = 0.0;
      puStack_148 = (undefined *)0x0;
      fStack_144 = 0.0;
      _auStack_140 = ZEXT812(0x3f800000);
      fStack_134 = 0.0;
      fStack_130 = 1.0;
      fStack_120 = (float)param_1[4] * 0.0 - (float)param_1[3] * 1.0;
      fStack_118 = (float)param_1[3] * 0.0 - (float)param_1[2] * 0.0;
      fStack_11c = (float)param_1[2] * 1.0 - (float)param_1[4] * 0.0;
      FUN_00218128(((float)puVar21 + fVar8 / fVar5) - (float)puVar21,&fStack_90,&fStack_8c);
      auVar24 = _auStack_110;
      fVar8 = 1.0 - fStack_8c;
      fVar9 = fVar8 * fStack_120;
      fVar5 = fVar8 * fStack_11c;
      fVar8 = fVar8 * fStack_118;
      fStack_c0 = (float)puStack_150;
      fStack_b4 = fStack_144;
      fStack_bc = fStack_14c;
      fStack_b8 = (float)puStack_148;
      fStack_b0 = (float)auStack_140;
      fStack_ac = (float)auStack_13c._0_4_;
      fStack_e0 = fVar5 * fStack_11c + fStack_8c;
      fStack_ec = fVar5 * fStack_120 - fStack_90 * fStack_118;
      fStack_a8 = (float)auStack_13c._4_4_;
      fStack_f0 = fVar9 * fStack_120 + fStack_8c;
      fStack_a4 = fStack_134;
      fStack_e4 = fVar9 * fStack_11c + fStack_90 * fStack_118;
      fStack_d8 = fVar9 * fStack_118 - fStack_90 * fStack_11c;
      fStack_d4 = fVar5 * fStack_118 + fStack_90 * fStack_120;
      fStack_e8 = fVar8 * fStack_120 + fStack_90 * fStack_11c;
      fStack_a0 = fStack_130;
      fStack_dc = fVar8 * fStack_11c - fStack_90 * fStack_120;
      fStack_d0 = fVar8 * fStack_118 + fStack_8c;
      fVar5 = (float)param_1[2];
      auStack_110._0_4_ =
           ((float)puStack_150 * fStack_f0 + fStack_144 * fStack_ec +
           (float)auStack_13c._4_4_ * fStack_e8) * fVar5 +
           ((float)puStack_150 * fStack_e4 + fStack_144 * fStack_e0 +
           (float)auStack_13c._4_4_ * fStack_dc) * (float)param_1[3] +
           ((float)puStack_150 * fStack_d8 + fStack_144 * fStack_d4 +
           (float)auStack_13c._4_4_ * fStack_d0) * (float)param_1[4];
      auStack_110._4_4_ =
           (fStack_14c * fStack_f0 + (float)auStack_140 * fStack_ec + fStack_134 * fStack_e8) *
           fVar5 + (fStack_14c * fStack_e4 + (float)auStack_140 * fStack_e0 + fStack_134 * fStack_dc
                   ) * (float)param_1[3] +
           (fStack_14c * fStack_d8 + (float)auStack_140 * fStack_d4 + fStack_134 * fStack_d0) *
           (float)param_1[4];
      param_1[2] = auStack_110._0_4_;
      uStack_108._0_4_ =
           ((float)puStack_148 * fStack_f0 + (float)auStack_13c._0_4_ * fStack_ec +
           fStack_130 * fStack_e8) * fVar5 +
           ((float)puStack_148 * fStack_e4 + (float)auStack_13c._0_4_ * fStack_e0 +
           fStack_130 * fStack_dc) * (float)param_1[3] +
           ((float)puStack_148 * fStack_d8 + (float)auStack_13c._0_4_ * fStack_d4 +
           fStack_130 * fStack_d0) * (float)param_1[4];
      uStack_108._4_4_ = auVar24._12_4_;
      param_1[3] = auStack_110._4_4_;
      param_1[4] = (int)(float)uStack_108;
      fStack_130 = 1.0;
      puStack_150 = (undefined *)0x3f800000;
      fStack_14c = 0.0;
      puStack_148 = (undefined *)0x0;
      fStack_144 = 0.0;
      _auStack_13c = ZEXT812(0);
      auStack_140 = (undefined1  [4])0x3f800000;
      fStack_120 = 0.0;
      fStack_118 = 1.0;
      fStack_11c = 0.0;
      FUN_00218128(((float)puVar6 + fVar18) - (float)puVar6,&fStack_88,&fStack_84);
      fVar20 = 1.0 - fStack_84;
      fVar18 = fVar20 * fStack_120;
      fVar5 = fVar20 * fStack_11c;
      fVar20 = fVar20 * fStack_118;
      fStack_e0 = (float)puStack_150;
      fStack_d4 = fStack_144;
      fStack_dc = fStack_14c;
      fStack_d8 = (float)puStack_148;
      fStack_d0 = (float)auStack_140;
      fStack_cc = (float)auStack_13c._0_4_;
      fVar15 = fVar5 * fStack_11c + fStack_84;
      fVar12 = fVar5 * fStack_120 - fStack_88 * fStack_118;
      fStack_c8 = (float)auStack_13c._4_4_;
      fVar9 = fVar18 * fStack_120 + fStack_84;
      fStack_c4 = fStack_134;
      uStack_108._4_4_ = fVar18 * fStack_11c + fStack_88 * fStack_118;
      auStack_100._0_4_ = fVar15;
      fVar10 = fVar18 * fStack_118 - fStack_88 * fStack_11c;
      fVar18 = fVar5 * fStack_118 + fStack_88 * fStack_120;
      fVar8 = fVar20 * fStack_11c - fStack_88 * fStack_120;
      fStack_c0 = fStack_130;
      fVar5 = fVar20 * fStack_120 + fStack_88 * fStack_11c;
      fStack_f8 = fVar10;
      fStack_f0 = fVar20 * fStack_118 + fStack_84;
      fStack_f4 = fVar18;
      auStack_100._4_4_ = fVar8;
      fVar20 = (float)puStack_150 * uStack_108._4_4_;
      fVar13 = (float)puStack_148 * fVar10;
      fVar22 = (float)auStack_13c._0_4_ * fVar18;
      fVar11 = (float)puStack_150 * fVar10;
      fVar17 = fStack_144 * fVar18;
      fVar10 = fStack_14c * fVar10;
      fVar16 = (float)puStack_148 * uStack_108._4_4_;
      fVar14 = fStack_14c * uStack_108._4_4_;
      puStack_150 = (undefined *)
                    ((float)puStack_150 * fVar9 + fStack_144 * fVar12 +
                    (float)auStack_13c._4_4_ * fVar5);
      fStack_144 = fVar20 + fStack_144 * fVar15 + (float)auStack_13c._4_4_ * fVar8;
      fStack_14c = fStack_14c * fVar9 + (float)auStack_140 * fVar12 + fStack_134 * fVar5;
      puStack_148 = (undefined *)
                    ((float)puStack_148 * fVar9 + (float)auStack_13c._0_4_ * fVar12 +
                    fStack_130 * fVar5);
      fVar9 = fVar11 + fVar17 + (float)auStack_13c._4_4_ * fStack_f0;
      fVar20 = fVar14 + (float)auStack_140 * fVar15 + fStack_134 * fVar8;
      fVar18 = fVar10 + (float)auStack_140 * fVar18 + fStack_134 * fStack_f0;
      fVar8 = fVar16 + (float)auStack_13c._0_4_ * fVar15 + fStack_130 * fVar8;
      auStack_13c._4_4_ = fVar9;
      fStack_130 = fVar13 + fVar22 + fStack_130 * fStack_f0;
      auStack_140 = (undefined1  [4])fVar20;
      fStack_134 = fVar18;
      auStack_13c._0_4_ = fVar8;
      fVar5 = (float)param_1[2];
      fStack_120 = (float)puStack_150 * fVar5 + fStack_144 * (float)param_1[3] +
                   fVar9 * (float)param_1[4];
      fStack_11c = fStack_14c * fVar5 + fVar20 * (float)param_1[3] + fVar18 * (float)param_1[4];
      auStack_110._4_4_ = fStack_11c;
      auStack_110._0_4_ = fStack_120;
      param_1[2] = (int)fStack_120;
      fStack_118 = (float)puStack_148 * fVar5 + fVar8 * (float)param_1[3] +
                   fStack_130 * (float)param_1[4];
      uStack_108._0_4_ = fStack_118;
      param_1[3] = (int)fStack_11c;
      param_1[4] = (int)fStack_118;
    }
    else {
      iVar4 = *(int *)(iVar1 + 0x110);
      iVar1 = iVar1 + 0x110;
LAB_0015b5fc:
      param_1[2] = iVar4;
      param_1[3] = *(int *)(iVar1 + 4);
      param_1[4] = *(int *)(iVar1 + 8);
    }
  }
  else {
    if (*(int *)(iVar1 + 0x34c) != 5) {
      iVar4 = *(int *)(iVar1 + 0x350);
      goto LAB_0015ac18;
    }
    if (param_2 != 0) {
      iVar4 = *(int *)(iVar1 + 0xd0);
      iVar1 = iVar1 + 0xd0;
      goto LAB_0015b5fc;
    }
    fVar5 = (float)FUN_0011ee88(piVar3,piVar3);
    if (SQRT(fVar5) == 0.0) {
      fStack_130 = (float)param_1[2];
      fStack_12c = (float)param_1[3];
      fStack_128 = (float)param_1[4];
    }
    else {
      FUN_0011ee58(&fStack_130,piVar3);
    }
    auStack_13c._4_4_ = fStack_128 * DAT_002c24a4;
    auStack_13c._0_4_ = fStack_12c * DAT_002c24a4;
    auStack_140 = (undefined1  [4])(fStack_130 * DAT_002c24a4);
    auVar24 = _lqc2(*(undefined1 (*) [16])(*param_1 + 0xd0));
    auVar25 = _vaddbc(in_vf0,in_vf0);
    auVar24 = _vmul(auVar24,auVar24);
    _vaddabc(auVar24,auVar24);
    _vmaddabc(auVar25,auVar24);
    auVar24 = _vmaddbc(auVar25,auVar24);
    _vsqrt(auVar24);
    _vwaitq();
    uVar2 = _cfc2(in_vc6);
    fStack_14c = (float)uVar2;
    puStack_148 = (undefined *)(fStack_128 * DAT_002c24a4 * fStack_14c);
    puStack_150 = (undefined *)(fStack_130 * DAT_002c24a4 * fStack_14c);
    fStack_14c = fStack_12c * DAT_002c24a4 * fStack_14c;
    auVar25 = _lqc2(*(undefined1 (*) [16])(*param_1 + 0xd0));
    auVar24 = _qmtc2(DAT_002c24a8);
    auVar24 = _vmulbc(auVar25,auVar24);
    _auStack_110 = _sqc2(auVar24);
    fStack_120 = (float)auStack_110._0_4_;
    fStack_11c = (float)auStack_110._4_4_;
    fStack_118 = (float)uStack_108;
    uStack_114 = uStack_108._4_4_;
LAB_0015ad28:
    param_1[2] = (int)((float)puStack_150 + fStack_120);
    param_1[3] = (int)(fStack_14c + fStack_11c);
    param_1[4] = (int)((float)puStack_148 + fStack_118);
  }
LAB_0015b614:
  iVar1 = *param_1;
  puStack_158 = *(undefined **)(iVar1 + 0x7628);
  uStack_154 = *(undefined4 *)(iVar1 + 0x762c);
  puStack_160 = *(undefined **)(iVar1 + 0x7620);
  fStack_15c = *(float *)(iVar1 + 0x7624);
  param_1[5] = (int)puStack_160;
  param_1[6] = (int)fStack_15c;
  param_1[7] = (int)puStack_158;
LAB_0015b650:
  piVar3 = param_1 + 2;
  fVar5 = (float)FUN_0011ee88(piVar3,piVar3);
  if (SQRT(fVar5) == 0.0) {
    puStack_160 = (undefined *)param_1[2];
    fStack_15c = (float)param_1[3];
    puStack_158 = (undefined *)param_1[4];
  }
  else {
    FUN_0011ee58(&puStack_160,piVar3);
  }
  param_1[2] = (int)puStack_160;
  param_1[3] = (int)fStack_15c;
  param_1[4] = (int)puStack_158;
  return;
}

