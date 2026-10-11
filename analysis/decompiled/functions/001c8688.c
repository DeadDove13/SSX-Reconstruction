/* Ghidra pseudocode. PS2 address: 001c8688. Not validated source. */

void FUN_001c8688(undefined8 param_1,int param_2,undefined1 (*param_3) [16])

{
  ulong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  int *piStack_170;
  int iStack_16c;
  undefined8 *puStack_168;
  int iStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  float fStack_138;
  float fStack_134;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [8];
  float fStack_118;
  float fStack_114;
  undefined1 auStack_110 [16];
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  uint uStack_cc;
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
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  
  iVar12 = (int)param_1;
  if (*(int *)(iVar12 + 0x13c0) == 0) {
    *(undefined4 *)(iVar12 + 0x13c0) = 1;
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar12 + 0x1320));
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar12 + 0x1330));
    auVar18 = _lqc2(*(undefined1 (*) [16])(iVar12 + 0x1340));
    auVar19 = _lqc2(*(undefined1 (*) [16])(iVar12 + 0x1350));
    auVar20 = _lqc2(*(undefined1 (*) [16])(iVar12 + 0x12e0));
    auVar21 = _lqc2(*(undefined1 (*) [16])(iVar12 + 0x12f0));
    auVar22 = _lqc2(*(undefined1 (*) [16])(iVar12 + 0x1300));
    auVar23 = _lqc2(*(undefined1 (*) [16])(iVar12 + 0x1310));
    _vmulabc(auVar16,auVar20);
    _vmaddabc(auVar17,auVar20);
    _vmaddabc(auVar18,auVar20);
    auVar20 = _vmaddbc(auVar19,auVar20);
    _vmulabc(auVar16,auVar21);
    _vmaddabc(auVar17,auVar21);
    _vmaddabc(auVar18,auVar21);
    auVar21 = _vmaddbc(auVar19,auVar21);
    _vmulabc(auVar16,auVar22);
    _vmaddabc(auVar17,auVar22);
    _vmaddabc(auVar18,auVar22);
    auVar22 = _vmaddbc(auVar19,auVar22);
    _vmulabc(auVar16,auVar23);
    _vmaddabc(auVar17,auVar23);
    _vmaddabc(auVar18,auVar23);
    auVar16 = _vmaddbc(auVar19,auVar23);
    _auStack_140 = _sqc2(auVar20);
    auStack_130 = _sqc2(auVar21);
    _auStack_120 = _sqc2(auVar22);
    _auStack_150 = _sqc2(auVar16);
    fStack_180 = auStack_140._0_4_;
    fStack_17c = auStack_140._4_4_;
    fStack_178 = fStack_138;
    fStack_174 = fStack_134;
    iStack_164 = auStack_130._12_4_;
    fStack_160 = (float)auStack_120._0_4_;
    fStack_15c = (float)auStack_120._4_4_;
    fStack_158 = fStack_118;
    fStack_154 = fStack_114;
    *(long *)(iVar12 + 0x1380) = auStack_140;
    *(long *)(iVar12 + 5000) = auStack_140._8_8_;
    *(long *)(iVar12 + 0x1390) = auStack_130._0_8_;
    *(long *)(iVar12 + 0x1398) = auStack_130._8_8_;
    *(long *)(iVar12 + 0x13a0) = auStack_120;
    *(long *)(iVar12 + 0x13a8) = auStack_120._8_8_;
    *(undefined1 (*) [8])(iVar12 + 0x13b0) = auStack_150;
    *(undefined8 *)(iVar12 + 0x13b8) = uStack_148;
    auStack_110 = _auStack_150;
  }
  piStack_170 = (int *)(iVar12 + 0x1458);
  uVar11 = 0xffffffff;
  iVar14 = 0;
  iStack_16c = 0;
  puStack_168 = (undefined8 *)0x0;
  if (0 < param_2) {
    do {
      auVar16 = _lqc2(*(undefined1 (*) [16])(iVar12 + 0x1380));
      auVar17 = _lqc2(*(undefined1 (*) [16])(iVar12 + 0x1390));
      auVar18 = _lqc2(*(undefined1 (*) [16])(iVar12 + 0x13a0));
      auVar19 = _lqc2(*(undefined1 (*) [16])(iVar12 + 0x13b0));
      auVar20 = _lqc2(param_3[2]);
      _vmulabc(auVar16,auVar20);
      _vmaddabc(auVar17,auVar20);
      _vmaddabc(auVar18,auVar20);
      auVar16 = _vmaddbc(auVar19,auVar20);
      _auStack_150 = _sqc2(auVar16);
      uVar13 = 0;
      fVar15 = (float)uStack_148;
      fStack_158 = (float)uStack_148;
      fStack_154 = 1.0 / uStack_148._4_4_;
      fStack_160 = (float)auStack_150._0_4_ * fStack_154;
      fStack_15c = (float)auStack_150._4_4_ * fStack_154;
      if (fStack_160 < *(float *)(iVar12 + 0x1360)) {
        uVar13 = 2;
      }
      if (*(float *)(iVar12 + 0x1370) < fStack_160) {
        uVar13 = uVar13 | 1;
      }
      if (fStack_15c < *(float *)(iVar12 + 0x1364)) {
        uVar13 = uVar13 | 8;
      }
      if (*(float *)(iVar12 + 0x1374) < fStack_15c) {
        uVar13 = uVar13 | 4;
      }
      if (fStack_154 < 0.0) {
        uVar13 = uVar13 ^ 0x2f;
      }
      else {
        if (*(float *)(iVar12 + 0x1368) < (float)uStack_148) {
          uVar13 = uVar13 | 0x20;
        }
        if ((float)uStack_148 < *(float *)(iVar12 + 0x1378)) {
          uVar13 = uVar13 | 0x10;
        }
      }
      if (uVar13 == 0) {
        if (uVar11 == 0) {
          fVar15 = *(float *)(*param_3 + 4);
          fStack_a0 = *(float *)*param_3 * fStack_154;
          puVar1 = (ulong *)*piStack_170;
          *puVar1 = CONCAT44(fStack_154,*(undefined4 *)param_3[1]) |
                    (ulong)*(uint *)(param_3[1] + 8) << 0x10 | (ulong)*(uint *)(param_3[1] + 4) << 8
                    | (ulong)*(uint *)(param_3[1] + 0xc) << 0x18;
          uVar7 = (long)(int)fStack_a0 | (long)(int)(fVar15 * fStack_154) << 0x20;
          uVar9 = (long)(int)fStack_160 | (long)(int)fStack_15c << 0x10 |
                  (long)(int)((float)uStack_148 * fStack_154) << 0x20;
LAB_001c90a4:
          iStack_164 = iStack_164 + 1;
          *piStack_170 = (int)(puVar1 + 3);
          puVar1[1] = uVar7;
          puVar1[2] = uVar9;
        }
        else if (iVar14 == 0) {
          if (iStack_16c == 0) {
            iStack_16c = *piStack_170;
            *piStack_170 = *piStack_170 + 0x20;
          }
          else if (puStack_168 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*piStack_170;
            if (((long)iStack_164 & 1U) != 0) {
              *puVar2 = 0;
              *piStack_170 = (int)(puVar2 + 1);
            }
            *puStack_168 = 0x1400000000000001;
            puStack_168[1] = 0;
            puStack_168[2] = 0x4a;
            puStack_168[3] = 0;
            puStack_168[4] = (long)iStack_164 | 0x3400000000008000;
            puStack_168[5] = 0x521;
          }
          puStack_168 = (undefined8 *)*piStack_170;
          iVar8 = *piStack_170;
          *piStack_170 = iVar8 + 0x30;
          fVar15 = *(float *)(*param_3 + 4);
          iStack_164 = 1;
          uVar11 = *(uint *)(param_3[1] + 8);
          fStack_94 = *(float *)*param_3 * fStack_154;
          uVar3 = *(uint *)(param_3[1] + 4);
          uVar4 = *(undefined4 *)param_3[1];
          uVar5 = *(uint *)(param_3[1] + 0xc);
          *piStack_170 = iVar8 + 0x48;
          *(ulong *)(iVar8 + 0x30) =
               CONCAT44(fStack_154,uVar4) | (ulong)uVar11 << 0x10 | (ulong)uVar3 << 8 |
               (ulong)uVar5 << 0x18;
          *(long *)(iVar8 + 0x38) = (long)(int)fStack_94 | (long)(int)(fVar15 * fStack_154) << 0x20;
          *(long *)(iVar8 + 0x40) =
               (long)(int)fStack_160 | (long)(int)fStack_15c << 0x10 |
               (long)(int)((float)uStack_148 * fStack_154) << 0x20;
        }
        else {
          fStack_100 = *(float *)param_3[-3];
          uStack_c8 = *(undefined4 *)(*param_3 + 8);
          iVar8 = 1;
          uStack_c4 = *(undefined4 *)(*param_3 + 0xc);
          do {
            iVar8 = iVar8 + -1;
          } while (iVar8 != -1);
          iVar8 = 1;
          do {
            iVar8 = iVar8 + -1;
          } while (iVar8 != -1);
          auStack_150._4_4_ = fStack_17c;
          auStack_150._0_4_ = fStack_180;
          uStack_148._0_4_ = fStack_178;
          uStack_148._4_4_ = fStack_174;
          fStack_f0 = *(float *)param_3[-2];
          fStack_fc = *(float *)(param_3[-3] + 4);
          fStack_ec = *(float *)(param_3[-2] + 4);
          uStack_f8 = *(undefined4 *)(param_3[-3] + 8);
          fStack_e8 = *(float *)(param_3[-2] + 8);
          uStack_f4 = *(undefined4 *)(param_3[-3] + 0xc);
          fStack_e4 = *(float *)(param_3[-2] + 0xc);
          fStack_d8 = *(float *)(param_3[-1] + 8);
          fStack_d4 = *(float *)(param_3[-1] + 0xc);
          fStack_e0 = (float)*(undefined8 *)param_3[-1];
          fStack_dc = (float)((ulong)*(undefined8 *)param_3[-1] >> 0x20);
          auStack_140._4_4_ = fStack_15c;
          auStack_140._0_4_ = fStack_160;
          fStack_138 = fVar15;
          fStack_134 = fStack_154;
          uStack_d0 = *(uint *)*param_3;
          uStack_c0 = *(undefined4 *)param_3[1];
          uStack_cc = *(uint *)(*param_3 + 4);
          uStack_bc = *(undefined4 *)(param_3[1] + 4);
          uStack_b8 = *(undefined4 *)(param_3[1] + 8);
          uStack_b4 = *(undefined4 *)(param_3[1] + 0xc);
          uStack_a8 = *(undefined4 *)(param_3[2] + 8);
          uStack_a4 = *(undefined4 *)(param_3[2] + 0xc);
          uStack_b0 = (undefined4)*(undefined8 *)param_3[2];
          uStack_ac = (undefined4)((ulong)*(undefined8 *)param_3[2] >> 0x20);
          auStack_130._4_4_ = 0;
          auStack_130._0_4_ = uVar11;
          FUN_001c7210(param_1,&fStack_100,auStack_150,auStack_130);
          if (iStack_16c == 0) {
            iStack_16c = *piStack_170;
            *piStack_170 = *piStack_170 + 0x20;
          }
          else if (puStack_168 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*piStack_170;
            if (((long)iStack_164 & 1U) != 0) {
              *puVar2 = 0;
              *piStack_170 = (int)(puVar2 + 1);
            }
            *puStack_168 = 0x1400000000000001;
            puStack_168[1] = 0;
            puStack_168[2] = 0x4a;
            puStack_168[3] = 0;
            puStack_168[4] = (long)iStack_164 | 0x3400000000008000;
            puStack_168[5] = 0x521;
          }
          puStack_168 = (undefined8 *)*piStack_170;
          iVar8 = *piStack_170;
          *piStack_170 = iVar8 + 0x30;
          fStack_9c = fStack_100 * uStack_148._4_4_;
          *piStack_170 = iVar8 + 0x48;
          *(ulong *)(iVar8 + 0x30) =
               CONCAT44(uStack_148._4_4_,fStack_f0) |
               (ulong)(uint)fStack_e8 << 0x10 | (ulong)(uint)fStack_ec << 8 |
               (ulong)(uint)fStack_e4 << 0x18;
          *(long *)(iVar8 + 0x38) =
               (long)(int)fStack_9c | (long)(int)(fStack_fc * uStack_148._4_4_) << 0x20;
          *(long *)(iVar8 + 0x40) =
               (long)(int)(float)auStack_150._0_4_ | (long)(int)(float)auStack_150._4_4_ << 0x10 |
               (long)(int)((float)uStack_148 * uStack_148._4_4_) << 0x20;
          fVar15 = *(float *)(*param_3 + 4);
          fStack_98 = *(float *)*param_3 * fStack_154;
          uVar9 = CONCAT44(fStack_154,*(undefined4 *)param_3[1]) |
                  (ulong)*(uint *)(param_3[1] + 8) << 0x10 | (ulong)*(uint *)(param_3[1] + 4) << 8 |
                  (ulong)*(uint *)(param_3[1] + 0xc) << 0x18;
          uVar10 = (long)(int)fStack_160 | (long)(int)fStack_15c << 0x10 |
                   (long)(int)(fStack_158 * fStack_154) << 0x20;
          *piStack_170 = iVar8 + 0x60;
          uVar7 = (long)(int)fStack_98 | (long)(int)(fVar15 * fStack_154) << 0x20;
LAB_001c9448:
          iStack_164 = 2;
          *(ulong *)(iVar8 + 0x48) = uVar9;
          *(ulong *)(iVar8 + 0x50) = uVar7;
          *(ulong *)(iVar8 + 0x58) = uVar10;
        }
      }
      else {
        if (uVar11 == 0) {
          iVar8 = 1;
          auStack_110 = param_3[1];
          _auStack_120 = *param_3;
          do {
            iVar8 = iVar8 + -1;
          } while (iVar8 != -1);
          iVar8 = 1;
          do {
            iVar8 = iVar8 + -1;
          } while (iVar8 != -1);
          fStack_f0 = fStack_180;
          fStack_ec = fStack_17c;
          fStack_e8 = fStack_178;
          fStack_e4 = fStack_174;
          auStack_150._4_4_ = *(undefined4 *)(param_3[-3] + 4);
          auStack_150._0_4_ = *(undefined4 *)param_3[-3];
          uStack_148._0_4_ = (float)*(undefined4 *)(param_3[-3] + 8);
          _auStack_140 = param_3[-2];
          uStack_148._4_4_ = (float)*(undefined4 *)(param_3[-3] + 0xc);
          auStack_130 = param_3[-1];
          uStack_d0 = 0;
          fStack_d8 = fVar15;
          uStack_f8 = *(undefined4 *)(param_3[2] + 8);
          uStack_f4 = *(undefined4 *)(param_3[2] + 0xc);
          fStack_100 = (float)*(undefined8 *)param_3[2];
          fStack_fc = (float)((ulong)*(undefined8 *)param_3[2] >> 0x20);
          fStack_e0 = fStack_160;
          fStack_dc = fStack_15c;
          fStack_d4 = fStack_154;
          uStack_cc = uVar13;
          FUN_001c7210(param_1,auStack_150,&fStack_f0,&uStack_d0);
          fStack_90 = (float)auStack_120._0_4_ * fStack_d4;
          puVar1 = (ulong *)*piStack_170;
          *puVar1 = CONCAT44(fStack_d4,auStack_110._0_4_) |
                    (ulong)(uint)auStack_110._8_4_ << 0x10 | (ulong)(uint)auStack_110._4_4_ << 8 |
                    (ulong)(uint)auStack_110._12_4_ << 0x18;
          uVar7 = (long)(int)fStack_90 | (long)(int)((float)auStack_120._4_4_ * fStack_d4) << 0x20;
          uVar9 = (long)(int)fStack_e0 | (long)(int)fStack_dc << 0x10 |
                  (long)(int)(fStack_d8 * fStack_d4) << 0x20;
          goto LAB_001c90a4;
        }
        if ((uVar11 & uVar13) == 0) {
          iVar8 = 1;
          auStack_110 = param_3[1];
          _auStack_120 = *param_3;
          do {
            iVar8 = iVar8 + -1;
          } while (iVar8 != -1);
          iVar8 = 1;
          do {
            iVar8 = iVar8 + -1;
          } while (iVar8 != -1);
          fStack_f0 = fStack_180;
          fStack_ec = fStack_17c;
          fStack_e8 = fStack_178;
          fStack_e4 = fStack_174;
          auStack_150._4_4_ = *(undefined4 *)(param_3[-3] + 4);
          auStack_150._0_4_ = *(undefined4 *)param_3[-3];
          uStack_148._0_4_ = (float)*(undefined4 *)(param_3[-3] + 8);
          _auStack_140 = param_3[-2];
          uStack_148._4_4_ = (float)*(undefined4 *)(param_3[-3] + 0xc);
          auStack_130 = param_3[-1];
          fStack_d8 = fVar15;
          uStack_f8 = *(undefined4 *)(param_3[2] + 8);
          uStack_f4 = *(undefined4 *)(param_3[2] + 0xc);
          fStack_100 = (float)*(undefined8 *)param_3[2];
          fStack_fc = (float)((ulong)*(undefined8 *)param_3[2] >> 0x20);
          fStack_e0 = fStack_160;
          fStack_dc = fStack_15c;
          fStack_d4 = fStack_154;
          uStack_d0 = uVar11;
          uStack_cc = uVar13;
          lVar6 = FUN_001c7210(param_1,auStack_150,&fStack_f0,&uStack_d0);
          if (lVar6 != 0) {
            if (iStack_16c == 0) {
              iStack_16c = *piStack_170;
              *piStack_170 = *piStack_170 + 0x20;
            }
            else if (puStack_168 != (undefined8 *)0x0) {
              puVar2 = (undefined8 *)*piStack_170;
              if (((long)iStack_164 & 1U) != 0) {
                *puVar2 = 0;
                *piStack_170 = (int)(puVar2 + 1);
              }
              *puStack_168 = 0x1400000000000001;
              puStack_168[1] = 0;
              puStack_168[2] = 0x4a;
              puStack_168[3] = 0;
              puStack_168[4] = (long)iStack_164 | 0x3400000000008000;
              puStack_168[5] = 0x521;
            }
            puStack_168 = (undefined8 *)*piStack_170;
            iVar8 = *piStack_170;
            *piStack_170 = iVar8 + 0x30;
            fStack_8c = (float)auStack_150._0_4_ * fStack_e4;
            *piStack_170 = iVar8 + 0x48;
            *(ulong *)(iVar8 + 0x30) =
                 CONCAT44(fStack_e4,auStack_140._0_4_) |
                 (ulong)(uint)fStack_138 << 0x10 | (ulong)(uint)auStack_140._4_4_ << 8 |
                 (ulong)(uint)fStack_134 << 0x18;
            *(long *)(iVar8 + 0x38) =
                 (long)(int)fStack_8c | (long)(int)((float)auStack_150._4_4_ * fStack_e4) << 0x20;
            *(long *)(iVar8 + 0x40) =
                 (long)(int)fStack_f0 | (long)(int)fStack_ec << 0x10 |
                 (long)(int)(fStack_e8 * fStack_e4) << 0x20;
            fStack_88 = (float)auStack_120._0_4_ * fStack_d4;
            uVar9 = CONCAT44(fStack_d4,auStack_110._0_4_) |
                    (ulong)(uint)auStack_110._8_4_ << 0x10 | (ulong)(uint)auStack_110._4_4_ << 8 |
                    (ulong)(uint)auStack_110._12_4_ << 0x18;
            uVar7 = (long)(int)fStack_88 | (long)(int)((float)auStack_120._4_4_ * fStack_d4) << 0x20
            ;
            uVar10 = (long)(int)fStack_e0 | (long)(int)fStack_dc << 0x10 |
                     (long)(int)(fStack_d8 * fStack_d4) << 0x20;
            *piStack_170 = iVar8 + 0x60;
            goto LAB_001c9448;
          }
        }
      }
      iVar14 = iVar14 + 1;
      param_3 = param_3 + 3;
      fStack_180 = fStack_160;
      fStack_17c = fStack_15c;
      fStack_178 = fStack_158;
      fStack_174 = fStack_154;
      uVar11 = uVar13;
    } while (iVar14 < param_2);
  }
  FUN_001cf1a0(&piStack_170,2);
  return;
}

