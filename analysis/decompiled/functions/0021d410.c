/* Ghidra pseudocode. PS2 address: 0021d410. Not validated source. */

void FUN_0021d410(undefined8 param_1,undefined1 (*param_2) [16],undefined8 *param_3,
                 undefined8 *param_4,undefined4 *param_5)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  ushort *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [4];
  undefined1 auStack_fc [4];
  undefined8 uStack_f8;
  int iStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_e0 [16];
  int iStack_d0;
  
  puVar8 = &uStack_120;
  uStack_11c = 0;
  uStack_120 = 0x3f800000;
  uStack_118 = 0;
  uStack_114 = 0;
  *param_3 = 0x3f800000;
  param_3[1] = 0;
  iVar9 = 2;
  puVar4 = param_4;
  puVar6 = param_5;
  do {
    iVar9 = iVar9 + -1;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
    uStack_104 = 0;
    *puVar6 = 0x3f800000;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar8 = 0;
    puVar6 = puVar6 + 4;
    puVar8 = puVar8 + 1;
  } while (-1 < iVar9);
  piVar15 = (int *)param_1;
  iVar9 = *piVar15;
  fVar18 = (float)*(int *)(iVar9 + 0x24);
  iVar10 = (int)(((*(float *)*param_2 - *(float *)(iVar9 + 0xc)) + fVar18) / fVar18) + -1;
  iVar13 = (int)(((*(float *)(*param_2 + 4) - *(float *)(iVar9 + 0x10)) + fVar18) / fVar18) + -1;
  iVar7 = iVar13 * *(int *)(iVar9 + 0x28) + iVar10;
  iVar16 = 0;
  if (iVar7 != 0xffff) {
    iVar16 = *(int *)(iVar7 * 8 + piVar15[3]);
  }
  if (iVar16 != 0) {
    iVar7 = *(int *)(iVar9 + 0x24);
    fVar21 = 1.0;
    uStack_f8._0_4_ = 0.0;
    lVar17 = 0;
    fStack_110 = (float)(iVar10 * iVar7 + iVar7 / 2) + *(float *)(iVar9 + 0xc);
    fStack_10c = (float)(iVar13 * iVar7 + iVar7 / 2) + *(float *)(iVar9 + 0x10);
    auStack_fc = (undefined1  [4])fStack_10c;
    auStack_100 = (undefined1  [4])fStack_110;
    uStack_f8._4_4_ = 0x3f800000;
    uStack_108 = 0;
    iStack_d0 = FUN_00223900(*(float *)*param_2 - fStack_110,*(float *)(*param_2 + 4) - fStack_10c,
                             param_1,iVar16);
    fVar18 = DAT_002c3efc;
    puVar3 = (ushort *)(*(int *)(iVar16 + 8) + *(short *)(iStack_d0 + 0x14) * 4);
    if (0 < *(short *)(iStack_d0 + 8)) {
      do {
        if (*puVar3 == 0xffff) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)((uint)*puVar3 * 8 + piVar15[3]);
        }
        iVar16 = (int)lVar17;
        if (iVar9 == 0) {
LAB_0021dae4:
          lVar17 = (long)(iVar16 + 1);
        }
        else {
          piVar11 = (int *)(*(int *)(iVar9 + 0x14) + (uint)puVar3[1] * 0x58);
          iVar9 = *piVar11;
          piVar12 = (int *)auStack_100;
          if (iVar9 == 1) {
            iStack_f0 = *(int *)*(undefined1 (*) [12])(piVar11 + 9);
            piVar14 = &iStack_f0;
            fStack_ec = (float)piVar11[10];
            fStack_e8 = (float)piVar11[0xb];
            auVar22._12_4_ = fVar21;
            auVar22._0_12_ = *(undefined1 (*) [12])(piVar11 + 9);
            auVar22 = _lqc2(auVar22);
            auVar23 = _lqc2(*param_2);
            auVar22 = _vsub(auVar22,auVar23);
            auStack_e0 = _sqc2(auVar22);
            auVar22 = _lqc2(auStack_e0);
            auVar23 = _vaddbc(in_vf0,in_vf0);
            auVar22 = _vmul(auVar22,auVar22);
            _vaddabc(auVar22,auVar22);
            _vmaddabc(auVar23,auVar22);
            auVar22 = _vmaddbc(auVar23,auVar22);
            _vsqrt(auVar22);
            _vwaitq();
            uVar5 = _cfc2(in_vc6);
            fVar19 = (float)uVar5;
            auVar22 = _qmtc2(fVar19);
            _vdiv(in_vf0,0,auVar22,0);
            auVar22 = _lqc2(auStack_e0);
            uVar24 = _vwaitq();
            auVar22 = _vmulq(auVar22,uVar24);
            _auStack_100 = _sqc2(auVar22);
            fVar20 = -((float)auStack_100 * (float)piVar11[6] +
                       (float)auStack_fc * (float)piVar11[7] + (float)uStack_f8 * (float)piVar11[8])
            ;
            fStack_e4 = fVar21;
            if (fVar20 <= (float)piVar11[0x12]) goto LAB_0021dae4;
            iVar9 = piVar11[0x13];
            if (iVar9 == 2) {
              if (fVar19 < 100.0) goto LAB_0021da84;
              fStack_e8 = fVar18 / (fVar19 * fVar19);
LAB_0021da8c:
              fVar19 = (float)piVar11[0x14];
            }
            else {
              if (2 < iVar9) {
                if ((iVar9 == 3) && (100.0 <= fVar19)) {
                  fStack_e8 = DAT_002c3f04 / (fVar19 * fVar19 * fVar19);
                  goto LAB_0021da8c;
                }
LAB_0021da84:
                fStack_e8 = 1.0;
                goto LAB_0021da8c;
              }
              if (iVar9 != 1) goto LAB_0021da84;
              fStack_e8 = 1.0;
              if (100.0 <= fVar19) {
                fStack_e8 = 100.0 / fVar19;
                goto LAB_0021da8c;
              }
              fVar19 = (float)piVar11[0x14];
            }
            iStack_f0 = 0;
            fStack_e8 = fStack_e8 * (fVar20 / (fVar19 + (fVar21 - fVar19) * fVar20));
            fStack_e4 = fStack_e8 * (float)piVar11[5];
            fStack_ec = fStack_e8 * (float)piVar11[3];
            fStack_e8 = fStack_e8 * (float)piVar11[4];
LAB_0021dadc:
            FUN_0021d2d0(&uStack_120,param_4,param_5,piVar12,piVar14);
            goto LAB_0021dae4;
          }
          if (1 < iVar9) {
            if (iVar9 != 2) {
              if (iVar9 == 3) {
                if (piVar11[0x13] == 0) {
                  fVar19 = (float)piVar11[3];
                }
                else {
                  fVar19 = (float)piVar11[3];
                }
                *(float *)((int)param_3 + 4) = *(float *)((int)param_3 + 4) + fVar19;
                *(float *)(param_3 + 1) = *(float *)(param_3 + 1) + (float)piVar11[4];
                *(float *)((int)param_3 + 0xc) = *(float *)((int)param_3 + 0xc) + (float)piVar11[5];
                goto LAB_0021dae4;
              }
              lVar17 = (long)(iVar16 + 1);
              goto LAB_0021daec;
            }
            piVar14 = &iStack_f0;
            auVar23._12_4_ = fVar21;
            auVar23._0_12_ = *(undefined1 (*) [12])(piVar11 + 9);
            auVar22 = _lqc2(auVar23);
            auVar23 = _lqc2(*param_2);
            auVar22 = _vsub(auVar22,auVar23);
            auStack_e0 = _sqc2(auVar22);
            auVar22 = _lqc2(auStack_e0);
            auVar23 = _vaddbc(in_vf0,in_vf0);
            auVar22 = _vmul(auVar22,auVar22);
            _vaddabc(auVar22,auVar22);
            _vmaddabc(auVar23,auVar22);
            auVar22 = _vmaddbc(auVar23,auVar22);
            _vsqrt(auVar22);
            _vwaitq();
            uVar5 = _cfc2(in_vc6);
            fVar19 = (float)uVar5;
            auVar22 = _qmtc2(fVar19);
            _vdiv(in_vf0,0,auVar22,0);
            auVar22 = _lqc2(auStack_e0);
            uVar24 = _vwaitq();
            auVar22 = _vmulq(auVar22,uVar24);
            _auStack_100 = _sqc2(auVar22);
            iVar9 = piVar11[0x13];
            if (iVar9 == 2) {
              if (fVar19 < 100.0) goto LAB_0021d81c;
              fStack_e8 = fVar18 / (fVar19 * fVar19);
LAB_0021d824:
              fStack_e4 = (float)piVar11[5];
            }
            else {
              if (2 < iVar9) {
                if ((iVar9 == 3) && (100.0 <= fVar19)) {
                  fStack_e8 = DAT_002c3f00 / (fVar19 * fVar19 * fVar19);
                  goto LAB_0021d824;
                }
LAB_0021d81c:
                fStack_e8 = 1.0;
                goto LAB_0021d824;
              }
              if (iVar9 != 1) goto LAB_0021d81c;
              fStack_e8 = 1.0;
              if (100.0 <= fVar19) {
                fStack_e8 = 100.0 / fVar19;
                goto LAB_0021d824;
              }
              fStack_e4 = (float)piVar11[5];
            }
            fStack_e4 = fStack_e4 * fStack_e8;
            fStack_ec = (float)piVar11[3] * fStack_e8;
            iStack_f0 = 0;
            fStack_e8 = (float)piVar11[4] * fStack_e8;
            goto LAB_0021dadc;
          }
          if (iVar9 == 0) {
            uStack_f8._0_4_ = (float)piVar11[4];
            auVar1._4_8_ = uStack_f8;
            auVar1._0_4_ = piVar11[3];
            _auStack_100 = auVar1 << 0x20;
            uStack_f8._4_4_ = piVar11[5];
            auVar2._12_4_ = 0;
            auVar2._0_12_ = _auStack_fc;
            _auStack_100 = auVar2 << 0x20;
            auStack_e0._12_4_ = 0;
            auStack_e0._0_12_ = *(undefined1 (*) [12])(piVar11 + 6);
            FUN_001110c0(0xbf800000,&iStack_f0,auStack_e0);
            piVar12 = &iStack_f0;
            piVar14 = (int *)auStack_100;
            goto LAB_0021dadc;
          }
          lVar17 = (long)(iVar16 + 1);
        }
LAB_0021daec:
        puVar3 = puVar3 + 2;
      } while (lVar17 < *(short *)(iStack_d0 + 8));
    }
  }
  return;
}

