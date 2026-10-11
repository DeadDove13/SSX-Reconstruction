
void FUN_00127918(int param_1)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  short *psVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  short *psVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar22;
  short asStack_d0 [8];
  undefined1 auStack_c0 [8];
  float fStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [8];
  float fStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [8];
  float fStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  
  fVar4 = fGpffff8b34;
  psVar13 = asStack_d0;
  iVar10 = 0;
  while( true ) {
    psVar9 = asStack_d0 + iVar10;
    bVar3 = *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c) <= iVar10;
    iVar10 = iVar10 + 1;
    if (bVar3) break;
    *psVar9 = 0;
  }
  iVar10 = *(int *)(param_1 + 0x70);
  if (iVar10 != 0) {
    fVar17 = 0.5;
    fVar18 = fGpffff8b38;
    do {
      lVar7 = FUN_00111098(iVar10,param_1 + 0x70);
      iVar6 = *(int *)(*(int *)(iVar10 + (uint)(lVar7 == 0) * 4) + 0x84);
      if (*(int *)(iVar6 + 0x14) == 0x1a) {
        if ((iVar6 == 0) || (piVar5 = (int *)(iVar6 + -0x868), iVar6 == 0x868)) {
          iVar6 = 0;
        }
        else {
          if (iVar6 == 0) {
            piVar5 = (int *)0x0;
          }
          iVar6 = *piVar5;
        }
        iVar2 = *(int *)(iVar6 + 0x390);
        psVar9 = (short *)(param_1 + 0x58 + iVar2 * 2);
        if ((long)*(int *)(iVar6 + 0xa0) <= (long)*psVar9) {
          *psVar9 = *psVar9 + -1;
        }
        sVar1 = *psVar9;
        asStack_d0[iVar2] = 1;
        if (-1 < sVar1) {
          if (*(int *)(iVar6 + 0x34c) == 6) {
            auVar20 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xd0));
            auVar19 = _qmtc2(fVar4);
            auVar19 = _vmulbc(auVar20,auVar19);
            auVar19 = _sqc2(auVar19);
            *(undefined1 (*) [16])(iVar6 + 0xd0) = auVar19;
          }
          else {
            if (*(int *)(iVar6 + 0x34c) == 5) {
              *(float *)(iVar6 + 0xd0) = *(float *)(iVar6 + 0xd0) * fVar4;
              *(float *)(iVar6 + 0xd4) = *(float *)(iVar6 + 0xd4) * fVar4;
              iVar2 = *(int *)(iVar6 + 0x8584);
              auVar19 = _qmtc2(*(undefined4 *)(iVar2 + 0x568));
              _vdiv(in_vf0,0,auVar19,0);
              auVar19 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xd0));
              uVar22 = _vwaitq();
              auVar19 = _vmulq(auVar19,uVar22);
              _auStack_c0 = _sqc2(auVar19);
              uStack_a4 = auStack_c0._12_4_;
              *(undefined4 *)(iVar2 + 0x5b0) = auStack_c0._0_4_;
              *(undefined4 *)(iVar2 + 0x5b4) = auStack_c0._4_4_;
              *(float *)(iVar2 + 0x5b8) = fStack_b8;
              *(undefined4 *)(iVar2 + 0x5bc) = uStack_a4;
              uVar8 = *(undefined8 *)(iVar6 + 0xd0);
              uVar22 = *(undefined4 *)(iVar6 + 0xd8);
              uVar12 = *(undefined4 *)(iVar6 + 0xdc);
              *(int *)(iVar2 + 0x5d0) = (int)uVar8;
              *(int *)(iVar2 + 0x5d4) = (int)((ulong)uVar8 >> 0x20);
              *(undefined4 *)(iVar2 + 0x5d8) = uVar22;
              *(undefined4 *)(iVar2 + 0x5dc) = uVar12;
              iVar2 = *(int *)(param_1 + 0x28);
              _auStack_b0 = _auStack_c0;
            }
            else {
              iVar2 = *(int *)(param_1 + 0x28);
            }
            auVar21 = _auStack_b0;
            auVar19 = _auStack_c0;
            iVar14 = param_1 + 100;
            fStack_a8 = *(float *)(iVar2 + 0xe4) + *(float *)(iVar2 + 0xd8);
            fVar15 = *(float *)(iVar2 + 0xdc) + *(float *)(iVar2 + 0xd0);
            fStack_98 = fStack_a8;
            fVar16 = *(float *)(iVar2 + 0xe0) + *(float *)(iVar2 + 0xd4);
            auStack_b0._0_4_ = fVar15 * fVar17;
            fStack_a8 = fStack_a8 * fVar17;
            auStack_b0._4_4_ = fVar16 * fVar17;
            auStack_a0._4_4_ = fVar16;
            auStack_a0._0_4_ = fVar15;
            auStack_c0._0_4_ = auStack_b0._0_4_;
            auVar20 = _auStack_c0;
            uStack_b4 = auVar19._12_4_;
            auStack_c0 = auVar20._0_8_;
            fStack_b8 = fStack_a8;
            auStack_c0._4_4_ = auStack_b0._4_4_;
            uStack_a4 = auVar21._12_4_;
            uStack_b4 = 0x3f800000;
            auVar19 = _lqc2(_auStack_c0);
            auVar20 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xc0));
            auVar19 = _vsub(auVar19,auVar20);
            auVar19 = _sqc2(auVar19);
            uStack_b4 = auVar19._12_4_;
            auStack_c0 = auVar19._0_8_;
            fStack_b8 = 0.0;
            auVar19 = _lqc2(_auStack_c0);
            auVar20 = _vaddbc(in_vf0,in_vf0);
            auVar19 = _vmul(auVar19,auVar19);
            _vaddabc(auVar19,auVar19);
            _vmaddabc(auVar20,auVar19);
            auVar19 = _vmaddbc(auVar20,auVar19);
            _vsqrt(auVar19);
            _vwaitq();
            uVar8 = _cfc2(in_vc6);
            iVar2 = *(int *)(iVar6 + 0x390);
            if (1000.0 < (float)uVar8) {
              if (*(short *)(iVar14 + iVar2 * 2) == 0) goto LAB_00127d18;
              iVar2 = *(int *)(iVar6 + 0x390);
            }
            if (*(short *)(iVar14 + iVar2 * 2) == 0) {
              auVar19 = _lqc2(_auStack_c0);
              auVar21 = _vaddbc(in_vf0,in_vf0);
              auVar20 = _vmul(auVar19,auVar19);
              _vaddabc(auVar20,auVar20);
              _vmaddabc(auVar21,auVar20);
              auVar20 = _vmaddbc(auVar21,auVar20);
              _vrsqrt(in_vf0,auVar20);
              uVar22 = _vwaitq();
              auVar19 = _vmulq(auVar19,uVar22);
              _auStack_b0 = _sqc2(auVar19);
              auVar20 = _lqc2(_auStack_b0);
              auVar19 = _qmtc2(0x41a00000);
              auVar19 = _vmulbc(auVar20,auVar19);
              auVar19 = _sqc2(auVar19);
              uStack_b4 = auVar19._12_4_;
              auStack_c0 = auVar19._0_8_;
              fStack_b8 = 10.0;
              auVar19 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xc0));
              auVar20 = _lqc2(_auStack_c0);
              auVar19 = _vadd(auVar19,auVar20);
              auVar19 = _sqc2(auVar19);
              *(undefined1 (*) [16])(iVar6 + 0xc0) = auVar19;
              fVar15 = *(float *)(iVar6 + 0xd0);
              auStack_90 = _auStack_b0;
            }
            else {
              fVar15 = *(float *)(iVar6 + 0xd0);
            }
            *(float *)(iVar6 + 0xd0) = fVar15 * fVar18;
            *(float *)(iVar6 + 0xd4) = *(float *)(iVar6 + 0xd4) * fVar18;
            *(undefined2 *)(iVar14 + *(int *)(iVar6 + 0x390) * 2) = 1;
            auVar19 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xd0));
            auVar20 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x40));
            auVar21 = _vaddbc(in_vf0,in_vf0);
            auVar19 = _vmul(auVar19,auVar20);
            _vaddabc(auVar19,auVar19);
            _vmaddabc(auVar21,auVar19);
            auVar19 = _vmaddbc(auVar21,auVar19);
            auVar19 = _qmfc2(auVar19._0_4_);
            fVar15 = *(float *)(param_1 + 0x50) - auVar19._0_4_;
            if (0.0 < fVar15) {
              auVar20 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x40));
              auVar19 = _qmtc2(fVar15 * *(float *)(param_1 + 0x54) * fGpffff8b3c);
              auVar19 = _vmulbc(auVar20,auVar19);
              _auStack_b0 = _sqc2(auVar19);
              auVar19 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xd0));
              auVar20 = _lqc2(_auStack_b0);
              auVar19 = _vadd(auVar19,auVar20);
              auVar19 = _sqc2(auVar19);
              *(undefined1 (*) [16])(iVar6 + 0xd0) = auVar19;
              auVar19 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xd0));
              auVar20 = _vaddbc(in_vf0,in_vf0);
              auVar19 = _vmul(auVar19,auVar19);
              _vaddabc(auVar19,auVar19);
              _vmaddabc(auVar20,auVar19);
              auVar19 = _vmaddbc(auVar20,auVar19);
              _vsqrt(auVar19);
              _vwaitq();
              uVar8 = _cfc2(in_vc6);
              *(int *)(iVar6 + 0xe0) = (int)uVar8;
              _auStack_a0 = _auStack_b0;
            }
          }
        }
      }
LAB_00127d18:
      iVar6 = FUN_00111098(iVar10,param_1 + 0x70);
      iVar10 = *(int *)(iVar10 + (iVar6 + 2) * 4);
    } while (iVar10 != 0);
  }
  iVar10 = DAT_002859e4;
  puVar11 = (undefined2 *)(param_1 + 100);
  iVar6 = 0;
  while (bVar3 = iVar6 < *(int *)(*(int *)(iVar10 + 0x14) + 0x8c), iVar6 = iVar6 + 1, bVar3) {
    sVar1 = *psVar13;
    psVar13 = psVar13 + 1;
    if (sVar1 == 0) {
      *puVar11 = 0;
    }
    puVar11 = puVar11 + 1;
  }
  return;
}

