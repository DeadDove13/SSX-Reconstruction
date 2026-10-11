/* Ghidra pseudocode. PS2 address: 0010e6d8. Not validated source. */

void FUN_0010e6d8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 in_vf0 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  
  iVar9 = (int)param_1;
  iVar10 = *(int *)(iVar9 + 0x630);
  if (iVar10 != 0) {
    do {
      lVar5 = FUN_00111098(iVar10,iVar9 + 0x630);
      iVar4 = *(int *)(*(int *)(iVar10 + (uint)(lVar5 == 0) * 4) + 0x84);
      if (*(int *)(iVar4 + 0x14) == 0x1a) {
        if ((iVar4 == 0) || (piVar3 = (int *)(iVar4 + -0x868), iVar4 == 0x868)) {
          iVar4 = 0;
        }
        else {
          if (iVar4 == 0) {
            piVar3 = (int *)0x0;
          }
          iVar4 = *piVar3;
        }
        iVar11 = iVar4 + *(int *)(iVar9 + 0x390) * 0x10 + 0x2c;
        iVar8 = iVar9 + *(int *)(iVar4 + 0x390) * 0x10 + 0x2c;
        lVar5 = FUN_0020b7f0(iVar9 + 0x3a0,iVar4 + 0x3a0,auStack_130,auStack_120);
        if (lVar5 != 0) {
          lVar5 = FUN_0010a100(param_1);
          if (lVar5 == 0) {
            lVar5 = FUN_0010a100(iVar4);
            if (lVar5 == 0) {
              auVar18 = _lqc2(auStack_130);
              auVar17 = _qmtc2(DAT_002c1278);
              auVar17 = _vmulbc(auVar18,auVar17);
              auStack_130 = _sqc2(auVar17);
              FUN_001110c0(0xbf800000,&uStack_100,auStack_130);
              FUN_00110ea8(param_1,&uStack_100);
              auVar17 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xc0));
              auVar18 = _lqc2(auStack_130);
              auVar17 = _vsub(auVar17,auVar18);
              auVar17 = _sqc2(auVar17);
              *(undefined1 (*) [16])(iVar9 + 0xc0) = auVar17;
              goto LAB_0010e880;
            }
            FUN_001110c0(0xbf800000,&uStack_100,auStack_130);
            FUN_00110ea8(param_1,&uStack_100);
            auVar17 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xc0));
            auVar18 = _lqc2(auStack_130);
            auVar17 = _vsub(auVar17,auVar18);
            auVar17 = _sqc2(auVar17);
            *(undefined1 (*) [16])(iVar9 + 0xc0) = auVar17;
          }
          else {
            lVar5 = FUN_0010a100(iVar4);
            if (lVar5 == 0) {
LAB_0010e880:
              FUN_00110ea8(iVar4,auStack_130);
              auVar17 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xc0));
              auVar18 = _lqc2(auStack_130);
              auVar17 = _vadd(auVar17,auVar18);
              auVar17 = _sqc2(auVar17);
              *(undefined1 (*) [16])(iVar4 + 0xc0) = auVar17;
            }
          }
          iVar1 = *(int *)(DAT_002859e4 + 0x14);
          iVar2 = *(int *)(iVar1 + 0x18);
          if (*(int *)(iVar8 + 8) <= iVar2 + -3) {
            *(int *)(iVar8 + 8) = iVar2;
            *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar1 + 0x18);
            fVar13 = (float)FUN_0010a030(param_1);
            fVar14 = (float)FUN_0010a030(iVar4);
            lVar5 = FUN_0010a100(param_1);
            if (lVar5 != 0) {
              fVar13 = DAT_002c127c;
            }
            lVar5 = FUN_0010a100(iVar4);
            if (lVar5 != 0) {
              fVar14 = DAT_002c1280;
            }
            auVar17 = _lqc2(auStack_130);
            auVar20 = _vaddbc(in_vf0,in_vf0);
            auVar18 = _vmul(auVar17,auVar17);
            _vaddabc(auVar18,auVar18);
            _vmaddabc(auVar20,auVar18);
            auVar18 = _vmaddbc(auVar20,auVar18);
            _vrsqrt(in_vf0,auVar18);
            uVar21 = _vwaitq();
            auVar17 = _vmulq(auVar17,uVar21);
            auStack_f0 = _sqc2(auVar17);
            uStack_100 = auStack_f0._0_4_;
            uStack_fc = auStack_f0._4_4_;
            uStack_f8 = auStack_f0._8_4_;
            uStack_f4 = auStack_f0._12_4_;
            uStack_110 = auStack_f0._0_4_;
            uStack_10c = auStack_f0._4_4_;
            uStack_108 = auStack_f0._8_4_;
            uStack_104 = auStack_f0._12_4_;
            auVar17 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xd0));
            auVar18 = _lqc2(auStack_f0);
            auVar20 = _vaddbc(in_vf0,in_vf0);
            auVar17 = _vmul(auVar17,auVar18);
            _vaddabc(auVar17,auVar17);
            _vmaddabc(auVar20,auVar17);
            auVar17 = _vmaddbc(auVar20,auVar17);
            auVar17 = _qmfc2(auVar17._0_4_);
            auVar18 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xd0));
            auVar20 = _lqc2(auStack_f0);
            auVar19 = _vaddbc(in_vf0,in_vf0);
            auVar18 = _vmul(auVar18,auVar20);
            _vaddabc(auVar18,auVar18);
            _vmaddabc(auVar19,auVar18);
            auVar18 = _vmaddbc(auVar19,auVar18);
            auVar18 = _qmfc2(auVar18._0_4_);
            fVar15 = (auVar17._0_4_ - auVar18._0_4_) / (fVar13 + fVar14);
            lVar5 = FUN_0010ee48(fVar14 * fVar15,param_1,iVar4,iVar8,&uStack_110);
            lVar6 = FUN_0010ee48(-fVar13 * fVar15,iVar4,param_1,iVar11,&uStack_110);
            if (lVar6 == 0) {
              if (lVar5 != 0) goto LAB_0010ea20;
            }
            else if (lVar5 == 0) {
              iVar11 = *(int *)(iVar9 + 0x34c);
              *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + 1;
              if (1 < iVar11 - 5U) {
                FUN_0010af08(param_1);
                FUN_0010aef0(iVar4);
              }
            }
            else {
LAB_0010ea20:
              if (lVar6 == 0) {
                iVar8 = *(int *)(iVar4 + 0x34c);
                *(int *)(iVar11 + 0xc) = *(int *)(iVar11 + 0xc) + 1;
                if (1 < iVar8 - 5U) {
                  FUN_0010af08(iVar4);
                  FUN_0010aef0(param_1);
                }
              }
              else if (lVar5 != 0) {
                uVar21 = FUN_00137a48(iVar4 + 0x8370,0);
                FUN_00107cb0(uVar21,iVar4);
                uVar21 = FUN_00137a48(iVar9 + 0x8370,0);
                FUN_00107cb0(uVar21,param_1);
              }
            }
            FUN_001fe1a8(DAT_002c56e8,param_1,iVar4);
          }
        }
      }
      iVar4 = FUN_00111098(iVar10,iVar9 + 0x630);
      iVar10 = *(int *)(iVar10 + (iVar4 + 2) * 4);
    } while (iVar10 != 0);
  }
  fVar14 = DAT_002c1288;
  iVar10 = *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c);
  iVar4 = 0;
  if (0 < iVar10) {
    iVar8 = iVar9 + 0x2c;
    uVar21 = DAT_002c1284;
    do {
      if (iVar4 != *(int *)(iVar9 + 0x390)) {
        uVar7 = FUN_00189b78(DAT_002859e4,iVar4);
        iVar11 = (int)uVar7;
        pfVar12 = (float *)(iVar11 + *(int *)(iVar9 + 0x390) * 0x10 + 0x2c);
        fVar13 = *(float *)(*(int *)(DAT_002859e4 + 0x14) + 0x18);
        if (((((pfVar12[2] != fVar13) && (*(int *)(iVar9 + 0x170) - 2U < 2)) &&
             (*pfVar12 <= *(float *)(*(int *)(iVar9 + 0x394) + 0x48) * DAT_002c128c)) &&
            ((ABS(*(float *)(iVar9 + 200) - *(float *)(iVar11 + 200)) <= 150.0 &&
             (*(int *)(iVar8 + 8) <= (int)fVar13 + -3)))) &&
           ((lVar5 = FUN_00150f70(*(undefined4 *)(iVar9 + 0x6cf4),1), lVar5 != 0 &&
            (lVar5 = FUN_00150f70(*(undefined4 *)(iVar9 + 0x6cf4),2), lVar5 == 0)))) {
          fVar16 = *(float *)(iVar8 + 4) - *(float *)(iVar9 + 0x140);
          fVar15 = fVar16 * DAT_002c1290 + 0.5;
          fVar13 = (float)(int)fVar15;
          if (fVar15 < fVar13) {
            fVar13 = fVar13 - 1.0;
          }
          fVar16 = fVar16 - fVar13 * DAT_002c1294;
          if (*(int *)(iVar9 + 0x170) == 3) {
            fVar16 = -fVar16;
          }
          if ((DAT_002c1298 < fVar16) && (fVar16 < DAT_002c129c)) {
            fVar15 = (float)FUN_0010a030(param_1);
            fVar16 = (float)FUN_0010a030(uVar7);
            auVar17 = _lqc2(*(undefined1 (*) [16])(iVar11 + 0xc0));
            auVar18 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xc0));
            auVar17 = _vsub(auVar17,auVar18);
            auVar17 = _sqc2(auVar17);
            auVar17 = _lqc2(auVar17);
            auVar20 = _vaddbc(in_vf0,in_vf0);
            auVar18 = _vmul(auVar17,auVar17);
            _vaddabc(auVar18,auVar18);
            _vmaddabc(auVar20,auVar18);
            auVar18 = _vmaddbc(auVar20,auVar18);
            _vrsqrt(in_vf0,auVar18);
            uVar22 = _vwaitq();
            auVar17 = _vmulq(auVar17,uVar22);
            auVar17 = _sqc2(auVar17);
            auStack_e0._0_4_ = auVar17._0_4_;
            auStack_e0._4_4_ = auVar17._4_4_;
            auStack_e0._8_4_ = auVar17._8_4_;
            auStack_e0._12_4_ = auVar17._12_4_;
            uStack_110 = auStack_e0._0_4_;
            uStack_10c = auStack_e0._4_4_;
            uStack_108 = auStack_e0._8_4_;
            uStack_104 = auStack_e0._12_4_;
            fVar13 = DAT_002c12a0;
            if (DAT_0027ba88 == 0) {
              fVar13 = DAT_002c12a4;
            }
            auVar18 = _lqc2(auVar17);
            auVar17 = _qmtc2(uVar21);
            auVar17 = _vmulbc(auVar18,auVar17);
            auVar17 = _sqc2(auVar17);
            auStack_f0._0_4_ = auVar17._0_4_;
            auStack_f0._4_4_ = auVar17._4_4_;
            auStack_f0._8_4_ = auVar17._8_4_;
            auStack_f0._12_4_ = auVar17._12_4_;
            uStack_100 = auStack_f0._0_4_;
            uStack_fc = auStack_f0._4_4_;
            uStack_f8 = auStack_f0._8_4_;
            uStack_f4 = auStack_f0._12_4_;
            auVar18 = _lqc2(*(undefined1 (*) [16])(iVar11 + 0xd0));
            auVar20 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xd0));
            auVar18 = _vsub(auVar18,auVar20);
            auStack_f0 = _sqc2(auVar18);
            auVar17 = _lqc2(auVar17);
            auVar18 = _lqc2(auStack_f0);
            auVar20 = _vaddbc(in_vf0,in_vf0);
            auVar17 = _vmul(auVar17,auVar18);
            _vaddabc(auVar17,auVar17);
            _vmaddabc(auVar20,auVar17);
            auVar17 = _vmaddbc(auVar20,auVar17);
            auVar17 = _qmfc2(auVar17._0_4_);
            fVar13 = fVar13 + (auVar17._0_4_ * fVar15) / (fVar15 + fVar16);
            auStack_e0 = auStack_f0;
            if (0.0 < fVar13) {
              lVar5 = FUN_0010ee48(fVar13 * ((float)*(byte *)(*(int *)(iVar9 + 0x394) + 0x12) *
                                             DAT_002c12a8 * DAT_002c12ac + fVar14),uVar7,param_1,
                                   pfVar12,&uStack_110);
              if (lVar5 != 0) {
                FUN_0010af08(param_1);
                FUN_0010aef0(uVar7);
              }
              FUN_001feb68(DAT_002c56e8,param_1,uVar7);
              FUN_001f1a90(DAT_002c56e8,uVar7);
              iVar11 = *(int *)(DAT_002859e4 + 0x14);
              pfVar12[2] = *(float *)(iVar11 + 0x18);
              *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar11 + 0x18);
              *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + 1;
            }
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar4 < iVar10);
  }
  return;
}

