/* Ghidra pseudocode. PS2 address: 0021c970. Not validated source. */

long FUN_0021c970(int *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],int param_4)

{
  short sVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  undefined1 (*pauVar17) [16];
  short *psVar18;
  int *piVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_128;
  undefined4 uStack_124;
  
  lVar15 = 0;
  fVar30 = 0.0;
  fVar23 = (float)*(int *)(DAT_00299cc8 + 0x24);
  iVar26 = (int)(((*(float *)*param_2 - *(float *)(DAT_00299cc8 + 0xc)) + fVar23) / fVar23);
  iVar27 = (int)(((*(float *)(*param_2 + 4) - *(float *)(DAT_00299cc8 + 0x10)) + fVar23) / fVar23);
  auVar31 = _lqc2(*param_2);
  auVar32 = _lqc2(*param_3);
  auVar33 = _vaddbc(in_vf0,in_vf0);
  auVar31 = _vmul(auVar31,auVar32);
  _vaddabc(auVar31,auVar31);
  _vmaddabc(auVar33,auVar31);
  auVar31 = _vmaddbc(auVar33,auVar31);
  auVar31 = _qmfc2(auVar31._0_4_);
  fVar23 = auVar31._0_4_;
  iVar10 = iVar26 + -2;
  if (iVar26 < 1) {
    iVar26 = 0;
  }
  if (0x7ffffffe < iVar10) {
    iVar10 = 0x7fffffff;
  }
  iVar14 = 0x7fffffff;
  if (iVar27 + -2 < 0x7fffffff) {
    iVar14 = iVar27 + -2;
  }
  iVar11 = *(int *)(DAT_00299cc8 + 0x28) + -1;
  if (iVar27 < 1) {
    iVar27 = 0;
  }
  if (iVar11 < iVar26) {
    iVar26 = iVar11;
  }
  iVar13 = *(int *)(DAT_00299cc8 + 0x2c) + -1;
  iVar11 = 0;
  if (-1 < iVar10) {
    iVar11 = iVar10;
  }
  if (iVar13 < iVar27) {
    iVar27 = iVar13;
  }
  if (iVar14 < 0) {
    iVar14 = 0;
  }
joined_r0x0021caa0:
  do {
    iVar10 = iVar11;
    if (iVar26 < iVar10) {
      return lVar15;
    }
    iVar11 = iVar10 + 1;
  } while (iVar27 < iVar14);
  iVar13 = *param_1;
  iVar16 = iVar14;
  do {
    iVar13 = iVar16 * *(int *)(iVar13 + 0x28) + iVar10;
    lVar6 = FUN_0021f730(param_1,iVar13);
    if (lVar6 == 0) {
      piVar19 = *(int **)(iVar13 * 8 + param_1[3]);
    }
    else {
      piVar19 = (int *)0x0;
    }
    if (piVar19 != (int *)0x0) {
      bVar2 = false;
      iVar13 = *piVar19;
      if (((((*(float *)(iVar13 + 0xc) <= *(float *)*param_2 + 300.0) &&
            (*(float *)*param_2 - 300.0 <= *(float *)(iVar13 + 0x18))) &&
           (*(float *)(iVar13 + 0x10) <= *(float *)(*param_2 + 4) + 300.0)) &&
          ((*(float *)(*param_2 + 4) - 300.0 <= *(float *)(iVar13 + 0x1c) &&
           (*(float *)(iVar13 + 0x14) <= *(float *)(*param_2 + 8) + 300.0)))) &&
         (*(float *)(*param_2 + 8) - 300.0 <= *(float *)(iVar13 + 0x20))) {
        bVar2 = true;
      }
      if (bVar2) {
        for (iVar13 = 0;
            iVar13 < (int)*(short *)(DAT_00299cc8 + 0x42) * (int)*(short *)(DAT_00299cc8 + 0x42);
            iVar13 = iVar13 + 1) {
          psVar18 = (short *)(piVar19[1] + iVar13 * 0x30);
          bVar2 = false;
          if ((*psVar18 == 0) && (psVar18[2] == 0)) {
            bVar2 = *(int *)(psVar18 + 4) == 0;
          }
          if (!bVar2) {
            bVar2 = false;
            if ((((*(float *)(psVar18 + 0xc) <= *(float *)*param_2 + 300.0) &&
                 (*(float *)*param_2 - 300.0 <= *(float *)(psVar18 + 0x12))) &&
                (*(float *)(psVar18 + 0xe) <= *(float *)(*param_2 + 4) + 300.0)) &&
               (((*(float *)(*param_2 + 4) - 300.0 <= *(float *)(psVar18 + 0x14) &&
                 (*(float *)(psVar18 + 0x10) <= *(float *)(*param_2 + 8) + 300.0)) &&
                (*(float *)(*param_2 + 8) - 300.0 <= *(float *)(psVar18 + 0x16))))) {
              bVar2 = true;
            }
            if ((bVar2) && (lVar6 = 0, 0 < psVar18[5])) {
              sVar1 = psVar18[0xb];
              do {
                iVar12 = (int)lVar6;
                pauVar17 = (undefined1 (*) [16])
                           (piVar19[7] +
                           (uint)*(ushort *)(piVar19[2] + sVar1 * 4 + iVar12 * 4 + 2) * 0x80);
                lVar7 = FUN_00223368(0x299cc8,*(undefined2 *)(pauVar17[5] + 8));
                lVar6 = (long)(iVar12 + 1);
                fVar20 = fVar30;
                if (((*(ushort *)((int)lVar7 + 0x24) ^ 1) & 1) == 0) {
                  bVar2 = false;
                  if ((((*(float *)(pauVar17[5] + 0xc) <= *(float *)*param_2 + 300.0) &&
                       (*(float *)*param_2 - 300.0 <= *(float *)(pauVar17[6] + 8))) &&
                      (*(float *)pauVar17[6] <= *(float *)(*param_2 + 4) + 300.0)) &&
                     (((*(float *)(*param_2 + 4) - 300.0 <= *(float *)(pauVar17[6] + 0xc) &&
                       (*(float *)(pauVar17[6] + 4) <= *(float *)(*param_2 + 8) + 300.0)) &&
                      (*(float *)(*param_2 + 8) - 300.0 <= *(float *)pauVar17[7])))) {
                    bVar2 = true;
                  }
                  lVar6 = (long)(iVar12 + 1);
                  if (bVar2) {
                    iVar12 = 0;
                    auVar32 = _lqc2(*pauVar17);
                    auVar33 = _lqc2(pauVar17[1]);
                    auVar34 = _lqc2(pauVar17[2]);
                    auVar35 = _lqc2(pauVar17[3]);
                    auVar31._12_4_ = 0x3f800000;
                    auVar31._0_12_ = ZEXT812(0);
                    auVar31 = _lqc2(auVar31);
                    _vmulabc(auVar32,auVar31);
                    _vmaddabc(auVar33,auVar31);
                    _vmaddabc(auVar34,auVar31);
                    auVar31 = _vmaddbc(auVar35,auVar31);
                    auVar31 = _sqc2(auVar31);
                    uStack_158 = auVar31._8_4_;
                    uStack_154 = auVar31._12_4_;
                    uStack_178 = uStack_158;
                    uStack_174 = uStack_154;
                    auVar32 = _lqc2(auVar31);
                    auVar33 = _lqc2(*param_3);
                    auVar34 = _vaddbc(in_vf0,in_vf0);
                    auVar32 = _vmul(auVar32,auVar33);
                    _vaddabc(auVar32,auVar32);
                    _vmaddabc(auVar34,auVar32);
                    auVar32 = _vmaddbc(auVar34,auVar32);
                    auVar32 = _qmfc2(auVar32._0_4_);
                    fVar25 = auVar32._0_4_ - fVar23;
                    fVar22 = 0.125;
                    fVar29 = 0.0;
                    uStack_180 = auVar31._0_4_;
                    uStack_17c = auVar31._4_4_;
LAB_0021ced0:
                    fVar28 = fVar22;
                    auVar31 = _lqc2(*pauVar17);
                    auVar33 = _lqc2(pauVar17[1]);
                    auVar34 = _lqc2(pauVar17[2]);
                    auVar35 = _lqc2(pauVar17[3]);
                    auVar32._4_4_ = fVar28 * fVar28;
                    auVar32._0_4_ = fVar28 * fVar28 * fVar28;
                    auVar32._8_4_ = fVar28;
                    auVar32._12_4_ = 0x3f800000;
                    auVar32 = _lqc2(auVar32);
                    _vmulabc(auVar31,auVar32);
                    _vmaddabc(auVar33,auVar32);
                    _vmaddabc(auVar34,auVar32);
                    auVar31 = _vmaddbc(auVar35,auVar32);
                    auVar31 = _sqc2(auVar31);
                    uStack_138 = auVar31._8_4_;
                    uStack_134 = auVar31._12_4_;
                    uStack_170 = auVar31._0_4_;
                    uStack_16c = auVar31._4_4_;
                    uStack_168 = uStack_138;
                    uStack_164 = uStack_134;
                    auVar31 = _lqc2(auVar31);
                    auVar32 = _lqc2(*param_3);
                    auVar33 = _vaddbc(in_vf0,in_vf0);
                    auVar31 = _vmul(auVar31,auVar32);
                    _vaddabc(auVar31,auVar31);
                    _vmaddabc(auVar33,auVar31);
                    auVar31 = _vmaddbc(auVar33,auVar31);
                    auVar31 = _qmfc2(auVar31._0_4_);
                    fVar22 = auVar31._0_4_ - fVar23;
                    if (((fVar25 < DAT_002c3ef0) && (0.0 < fVar22)) ||
                       ((iVar12 = iVar12 + 1, fVar22 < DAT_002c3ef0 && (0.0 < fVar25)))) {
                      iVar12 = 2;
                      fVar20 = fVar28 + fVar29;
                      while( true ) {
                        fVar24 = fVar20 * 0.5;
                        auVar31 = _lqc2(*pauVar17);
                        auVar32 = _lqc2(pauVar17[1]);
                        auVar34 = _lqc2(pauVar17[2]);
                        auVar35 = _lqc2(pauVar17[3]);
                        auVar33._4_4_ = fVar24 * fVar24;
                        auVar33._0_4_ = fVar24 * fVar24 * fVar24;
                        auVar33._8_4_ = fVar24;
                        auVar33._12_4_ = 0x3f800000;
                        auVar33 = _lqc2(auVar33);
                        _vmulabc(auVar31,auVar33);
                        _vmaddabc(auVar32,auVar33);
                        _vmaddabc(auVar34,auVar33);
                        auVar31 = _vmaddbc(auVar35,auVar33);
                        auVar31 = _sqc2(auVar31);
                        uStack_138 = auVar31._8_4_;
                        uStack_134 = auVar31._12_4_;
                        auVar32 = _lqc2(auVar31);
                        auVar33 = _lqc2(*param_3);
                        auVar34 = _vaddbc(in_vf0,in_vf0);
                        auVar32 = _vmul(auVar32,auVar33);
                        _vaddabc(auVar32,auVar32);
                        _vmaddabc(auVar34,auVar32);
                        auVar32 = _vmaddbc(auVar34,auVar32);
                        auVar32 = _qmfc2(auVar32._0_4_);
                        fVar21 = auVar32._0_4_ - fVar23;
                        if (((fVar21 < DAT_002c3ef4) && (0.0 < fVar22)) ||
                           ((fVar22 < DAT_002c3ef4 && (0.0 < fVar21)))) {
                          uStack_178 = uStack_138;
                          uStack_174 = uStack_134;
                          uStack_180 = auVar31._0_4_;
                          uStack_17c = auVar31._4_4_;
                        }
                        else {
                          uStack_168 = uStack_138;
                          uStack_164 = uStack_134;
                          fVar22 = fVar21;
                          fVar21 = fVar25;
                          fVar28 = fVar24;
                          fVar24 = fVar29;
                          uStack_170 = auVar31._0_4_;
                          uStack_16c = auVar31._4_4_;
                        }
                        iVar12 = iVar12 + -1;
                        if (iVar12 < 0) break;
                        fVar20 = fVar28 + fVar24;
                        fVar25 = fVar21;
                        fVar29 = fVar24;
                      }
                      auVar4._4_4_ = uStack_16c;
                      auVar4._0_4_ = uStack_170;
                      auVar4._8_4_ = uStack_168;
                      auVar4._12_4_ = uStack_164;
                      auVar31 = _lqc2(auVar4);
                      auVar34._4_4_ = uStack_17c;
                      auVar34._0_4_ = uStack_180;
                      auVar34._8_4_ = uStack_178;
                      auVar34._12_4_ = uStack_174;
                      auVar32 = _lqc2(auVar34);
                      auVar31 = _vsub(auVar31,auVar32);
                      auVar31 = _sqc2(auVar31);
                      auVar32 = _lqc2(auVar31);
                      auVar31 = _qmtc2(fVar21 / (fVar21 - fVar22));
                      auVar31 = _vmulbc(auVar32,auVar31);
                      auVar31 = _sqc2(auVar31);
                      auVar35._4_4_ = uStack_17c;
                      auVar35._0_4_ = uStack_180;
                      auVar35._8_4_ = uStack_178;
                      auVar35._12_4_ = uStack_174;
                      auVar32 = _lqc2(auVar35);
                      auVar31 = _lqc2(auVar31);
                      auVar31 = _vadd(auVar32,auVar31);
                      auVar31 = _sqc2(auVar31);
                      uStack_124 = auVar31._12_4_;
                      auVar32 = _lqc2(auVar31);
                      auVar33 = _lqc2(*param_3);
                      auVar34 = _vaddbc(in_vf0,in_vf0);
                      auVar32 = _vmul(auVar32,auVar33);
                      _vaddabc(auVar32,auVar32);
                      _vmaddabc(auVar34,auVar32);
                      auVar32 = _vmaddbc(auVar34,auVar32);
                      _qmfc2(auVar32._0_4_);
                      auVar32 = _lqc2(auVar31);
                      auVar33 = _lqc2(*param_2);
                      auVar32 = _vsub(auVar32,auVar33);
                      auVar32 = _sqc2(auVar32);
                      auVar32 = _lqc2(auVar32);
                      auVar33 = _vaddbc(in_vf0,in_vf0);
                      auVar32 = _vmul(auVar32,auVar32);
                      _vaddabc(auVar32,auVar32);
                      _vmaddabc(auVar33,auVar32);
                      auVar32 = _vmaddbc(auVar33,auVar32);
                      _vsqrt(auVar32);
                      _vwaitq();
                      uVar8 = _cfc2(in_vc6);
                      fVar20 = (float)uVar8;
                      if ((lVar15 == 0) || (fVar20 < fVar30)) {
                        uStack_158 = auVar31._8_4_;
                        *(int *)(param_4 + 0x10) = auVar31._0_4_;
                        *(int *)(param_4 + 0x14) = auVar31._4_4_;
                        *(undefined4 *)(param_4 + 0x18) = uStack_158;
                        *(undefined4 *)(param_4 + 0x1c) = uStack_124;
                        auVar5._4_4_ = uStack_16c;
                        auVar5._0_4_ = uStack_170;
                        auVar5._8_4_ = uStack_168;
                        auVar5._12_4_ = uStack_164;
                        auVar31 = _lqc2(auVar5);
                        auVar3._4_4_ = uStack_17c;
                        auVar3._0_4_ = uStack_180;
                        auVar3._8_4_ = uStack_178;
                        auVar3._12_4_ = uStack_174;
                        auVar32 = _lqc2(auVar3);
                        auVar31 = _vsub(auVar31,auVar32);
                        auVar31 = _sqc2(auVar31);
                        lVar15 = 1;
                        uVar9 = 0xd;
                        auVar31 = _lqc2(auVar31);
                        auVar33 = _vaddbc(in_vf0,in_vf0);
                        auVar32 = _vmul(auVar31,auVar31);
                        _vaddabc(auVar32,auVar32);
                        _vmaddabc(auVar33,auVar32);
                        auVar32 = _vmaddbc(auVar33,auVar32);
                        _vrsqrt(in_vf0,auVar32);
                        uVar36 = _vwaitq();
                        auVar31 = _vmulq(auVar31,uVar36);
                        auVar31 = _sqc2(auVar31);
                        uStack_128 = auVar31._8_4_;
                        uStack_124 = auVar31._12_4_;
                        *(int *)(param_4 + 0x20) = auVar31._0_4_;
                        *(int *)(param_4 + 0x24) = auVar31._4_4_;
                        *(undefined4 *)(param_4 + 0x28) = uStack_128;
                        *(undefined4 *)(param_4 + 0x2c) = uStack_124;
                        if (lVar7 != 0) {
                          uVar9 = (uint)*(ushort *)((int)lVar7 + 0x30);
                        }
                        *(uint *)(param_4 + 0x34) = uVar9;
                        goto LAB_0021d238;
                      }
                      sVar1 = psVar18[5];
                      goto LAB_0021d23c;
                    }
                    uStack_178 = uStack_138;
                    uStack_174 = uStack_134;
                    if (iVar12 < 8) goto code_r0x0021d230;
                  }
                }
LAB_0021d238:
                sVar1 = psVar18[5];
                fVar30 = fVar20;
LAB_0021d23c:
                if (sVar1 <= lVar6) break;
                sVar1 = psVar18[0xb];
              } while( true );
            }
          }
        }
      }
    }
    iVar16 = iVar16 + 1;
    if (iVar27 < iVar16) goto joined_r0x0021caa0;
    iVar13 = *param_1;
  } while( true );
code_r0x0021d230:
  fVar25 = fVar22;
  fVar22 = fVar28 + 0.125;
  fVar29 = fVar28;
  uStack_180 = uStack_170;
  uStack_17c = uStack_16c;
  goto LAB_0021ced0;
}

