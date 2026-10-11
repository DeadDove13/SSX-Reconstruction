/* Ghidra pseudocode. PS2 address: 0021f8c8. Not validated source. */

undefined4
FUN_0021f8c8(int *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,long param_6)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  float *pfVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 in_vf0 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_104;
  int iStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  
  iStack_fc = (int)param_2;
  uStack_f8 = param_3;
  uStack_f4 = param_4;
  uStack_f0 = param_5;
  FUN_00220608(0x299cc8,param_2,&iStack_100);
  if (*param_1 == 0) {
    iStack_ec = 3;
    iVar15 = 3;
    iStack_e4 = 0x15;
    iStack_e8 = 3;
    pfVar12 = (float *)(iStack_100 + 0x1a90);
    fVar18 = DAT_002c3f20;
    fVar19 = DAT_002c3f24;
  }
  else {
    iStack_ec = 1;
    iVar15 = 1;
    pfVar12 = (float *)(iStack_100 + 0x650);
    iStack_e4 = 1;
    iStack_e8 = 9;
    fVar18 = DAT_002c3f28;
    fVar19 = DAT_002c3f2c;
  }
  piVar13 = (int *)param_6;
  if (((param_6 != 0) && (*piVar13 == iStack_fc)) && (piVar13[5] == *param_1)) {
    uVar4 = (uint)*(ushort *)(piVar13 + 1);
    if (piVar13[5] == 0) {
      uVar1 = *(ushort *)((int)piVar13 + 6);
      iVar14 = uVar4 * 0xc0 + 0x1a90;
    }
    else {
      uVar1 = *(ushort *)((int)piVar13 + 6);
      iVar14 = uVar4 * 0x240 + 0x650;
    }
    pfVar5 = (float *)(iStack_100 + iVar14 + (uint)uVar1 * 0x40);
    pauVar10 = (undefined1 (*) [16])
               (iStack_100 + uVar4 * iVar15 * 0xa0 + 0x10 + (uint)uVar1 * iStack_ec * 0x10);
    pauVar11 = pauVar10 + iStack_ec * 10;
    pauVar9 = pauVar10 + iStack_ec;
    pauVar8 = pauVar11 + iStack_ec;
    if (pfVar5[8] == DAT_002c3f30) {
      fVar16 = *(float *)*pauVar10;
      if (*(float *)*pauVar11 <= fVar16) {
        fVar16 = *(float *)*pauVar11;
      }
      fVar17 = *(float *)*pauVar9;
      if (*(float *)*pauVar8 <= fVar17) {
        fVar17 = *(float *)*pauVar8;
      }
      if (fVar17 <= fVar16) {
        fVar16 = fVar17;
      }
      pfVar5[8] = fVar16;
      fVar16 = *(float *)(*pauVar10 + 4);
      if (*(float *)(*pauVar11 + 4) <= fVar16) {
        fVar16 = *(float *)(*pauVar11 + 4);
      }
      fVar17 = *(float *)(*pauVar9 + 4);
      if (*(float *)(*pauVar8 + 4) <= fVar17) {
        fVar17 = *(float *)(*pauVar8 + 4);
      }
      if (fVar17 <= fVar16) {
        fVar16 = fVar17;
      }
      pfVar5[9] = fVar16;
      fVar16 = *(float *)(*pauVar10 + 8);
      if (*(float *)(*pauVar11 + 8) <= fVar16) {
        fVar16 = *(float *)(*pauVar11 + 8);
      }
      fVar17 = *(float *)(*pauVar9 + 8);
      if (*(float *)(*pauVar8 + 8) <= fVar17) {
        fVar17 = *(float *)(*pauVar8 + 8);
      }
      if (fVar17 <= fVar16) {
        fVar16 = fVar17;
      }
      pfVar5[10] = fVar16;
      fVar16 = *(float *)*pauVar10;
      if (fVar16 <= *(float *)*pauVar11) {
        fVar16 = *(float *)*pauVar11;
      }
      fVar17 = *(float *)*pauVar9;
      if (fVar17 <= *(float *)*pauVar8) {
        fVar17 = *(float *)*pauVar8;
      }
      if (fVar16 <= fVar17) {
        fVar16 = fVar17;
      }
      pfVar5[0xc] = fVar16;
      fVar16 = *(float *)(*pauVar10 + 4);
      if (fVar16 <= *(float *)(*pauVar11 + 4)) {
        fVar16 = *(float *)(*pauVar11 + 4);
      }
      fVar17 = *(float *)(*pauVar9 + 4);
      if (fVar17 <= *(float *)(*pauVar8 + 4)) {
        fVar17 = *(float *)(*pauVar8 + 4);
      }
      if (fVar16 <= fVar17) {
        fVar16 = fVar17;
      }
      pfVar5[0xd] = fVar16;
      fVar16 = *(float *)(*pauVar10 + 8);
      if (fVar16 <= *(float *)(*pauVar11 + 8)) {
        fVar16 = *(float *)(*pauVar11 + 8);
      }
      fVar17 = *(float *)(*pauVar9 + 8);
      if (fVar17 <= *(float *)(*pauVar8 + 8)) {
        fVar17 = *(float *)(*pauVar8 + 8);
      }
      if (fVar16 <= fVar17) {
        fVar16 = fVar17;
      }
      pfVar5[0xe] = fVar16;
    }
    if (piVar13[4] == 0) {
      if (pfVar5[4] == DAT_002c3f38) {
        auVar20 = _lqc2(*pauVar9);
        auVar21 = _lqc2(*pauVar11);
        auVar20 = _vsub(auVar20,auVar21);
        auVar20 = _sqc2(auVar20);
        auVar21 = _lqc2(*pauVar11);
        auVar22 = _lqc2(*pauVar10);
        auVar21 = _vsub(auVar21,auVar22);
        auVar21 = _sqc2(auVar21);
        auVar20 = _lqc2(auVar20);
        auVar21 = _lqc2(auVar21);
        _vopmula(auVar20,auVar21);
        auVar20 = _vopmsub(auVar21,auVar20);
        auVar20 = _vsub(auVar20,auVar20);
        auVar20 = _sqc2(auVar20);
        auVar20 = _lqc2(auVar20);
        auVar22 = _vaddbc(in_vf0,in_vf0);
        auVar21 = _vmul(auVar20,auVar20);
        _vaddabc(auVar21,auVar21);
        _vmaddabc(auVar22,auVar21);
        auVar21 = _vmaddbc(auVar22,auVar21);
        _vrsqrt(in_vf0,auVar21);
        uVar23 = _vwaitq();
        auVar20 = _vmulq(auVar20,uVar23);
        auVar20 = _sqc2(auVar20);
        fStack_104 = auVar20._12_4_;
        fStack_130 = auVar20._0_4_;
        fStack_12c = auVar20._4_4_;
        fStack_128 = auVar20._8_4_;
        pfVar5[4] = fStack_130;
        pfVar5[5] = fStack_12c;
        pfVar5[6] = fStack_128;
        pfVar5[7] = fStack_104;
        iVar15 = param_1[0x10];
      }
      else {
        iVar15 = param_1[0x10];
      }
      pfVar5 = pfVar5 + 4;
      pauVar8 = pauVar9;
    }
    else {
      pauVar10 = pauVar9;
      if (*pfVar5 == DAT_002c3f34) {
        auVar20 = _lqc2(*pauVar8);
        auVar21 = _lqc2(*pauVar11);
        auVar20 = _vsub(auVar20,auVar21);
        auVar20 = _sqc2(auVar20);
        auVar21 = _lqc2(*pauVar11);
        auVar22 = _lqc2(*pauVar9);
        auVar21 = _vsub(auVar21,auVar22);
        auVar21 = _sqc2(auVar21);
        auVar20 = _lqc2(auVar20);
        auVar21 = _lqc2(auVar21);
        _vopmula(auVar20,auVar21);
        auVar20 = _vopmsub(auVar21,auVar20);
        auVar20 = _vsub(auVar20,auVar20);
        auVar20 = _sqc2(auVar20);
        auVar20 = _lqc2(auVar20);
        auVar22 = _vaddbc(in_vf0,in_vf0);
        auVar21 = _vmul(auVar20,auVar20);
        _vaddabc(auVar21,auVar21);
        _vmaddabc(auVar22,auVar21);
        auVar21 = _vmaddbc(auVar22,auVar21);
        _vrsqrt(in_vf0,auVar21);
        uVar23 = _vwaitq();
        auVar20 = _vmulq(auVar20,uVar23);
        auVar20 = _sqc2(auVar20);
        fStack_104 = auVar20._12_4_;
        fStack_130 = auVar20._0_4_;
        fStack_12c = auVar20._4_4_;
        fStack_128 = auVar20._8_4_;
        *pfVar5 = fStack_130;
        pfVar5[1] = fStack_12c;
        pfVar5[2] = fStack_128;
        pfVar5[3] = fStack_104;
        iVar15 = param_1[0x10];
      }
      else {
        iVar15 = param_1[0x10];
      }
    }
    lVar7 = (**(code **)(iVar15 + 0x2c))
                      ((int)param_1 + (int)*(short *)(iVar15 + 0x28),pauVar8,pauVar11,pauVar10,
                       pfVar5,uStack_f8,uStack_f4,uStack_f0);
    if (lVar7 != 0) {
      if (*param_1 == 2) {
        (**(code **)(param_1[0x10] + 0x4c))
                  ((float)*(ushort *)(piVar13 + 1) * fVar18 + fVar19,
                   (float)*(ushort *)((int)piVar13 + 6) * fVar18 + fVar19,
                   (int)param_1 + (int)*(short *)(param_1[0x10] + 0x48),iStack_fc,uStack_f8,
                   uStack_f4,uStack_f0);
        return 1;
      }
      return 1;
    }
    *piVar13 = 0;
    *(undefined2 *)(piVar13 + 3) = 0xffff;
    *(undefined2 *)(piVar13 + 1) = 0;
    *(undefined2 *)((int)piVar13 + 6) = 0;
    *(undefined2 *)(piVar13 + 2) = 0xffff;
    *(undefined2 *)((int)piVar13 + 10) = 0xffff;
    piVar13[4] = 0;
    piVar13[5] = 0;
  }
  pauVar10 = (undefined1 (*) [16])(iStack_100 + 0x10);
  iVar15 = 0;
  if (iStack_e8 != 0) {
    iStack_e0 = iStack_ec << 4;
    do {
      pauVar9 = (undefined1 (*) [16])(*pauVar10 + iStack_e0);
      pauVar8 = pauVar10 + iStack_ec * 10;
      pauVar11 = (undefined1 (*) [16])(*pauVar8 + iStack_e0);
      iVar14 = 0;
      if (iStack_e8 != 0) {
        lVar7 = (long)iStack_e0;
        do {
          fVar16 = pfVar12[8];
          if (fVar16 == DAT_002c3f3c) {
            fVar16 = *(float *)*pauVar10;
            if (*(float *)*pauVar8 <= fVar16) {
              fVar16 = *(float *)*pauVar8;
            }
            fVar17 = *(float *)*pauVar9;
            if (*(float *)*pauVar11 <= fVar17) {
              fVar17 = *(float *)*pauVar11;
            }
            if (fVar17 <= fVar16) {
              fVar16 = fVar17;
            }
            pfVar12[8] = fVar16;
            fVar16 = *(float *)(*pauVar10 + 4);
            if (*(float *)(*pauVar8 + 4) <= fVar16) {
              fVar16 = *(float *)(*pauVar8 + 4);
            }
            fVar17 = *(float *)(*pauVar9 + 4);
            if (*(float *)(*pauVar11 + 4) <= fVar17) {
              fVar17 = *(float *)(*pauVar11 + 4);
            }
            if (fVar17 <= fVar16) {
              fVar16 = fVar17;
            }
            pfVar12[9] = fVar16;
            fVar16 = *(float *)(*pauVar10 + 8);
            if (*(float *)(*pauVar8 + 8) <= fVar16) {
              fVar16 = *(float *)(*pauVar8 + 8);
            }
            fVar17 = *(float *)(*pauVar9 + 8);
            if (*(float *)(*pauVar11 + 8) <= fVar17) {
              fVar17 = *(float *)(*pauVar11 + 8);
            }
            if (fVar17 <= fVar16) {
              fVar16 = fVar17;
            }
            pfVar12[10] = fVar16;
            fVar16 = *(float *)*pauVar10;
            if (fVar16 <= *(float *)*pauVar8) {
              fVar16 = *(float *)*pauVar8;
            }
            fVar17 = *(float *)*pauVar9;
            if (fVar17 <= *(float *)*pauVar11) {
              fVar17 = *(float *)*pauVar11;
            }
            if (fVar16 <= fVar17) {
              fVar16 = fVar17;
            }
            pfVar12[0xc] = fVar16;
            fVar16 = *(float *)(*pauVar10 + 4);
            if (fVar16 <= *(float *)(*pauVar8 + 4)) {
              fVar16 = *(float *)(*pauVar8 + 4);
            }
            fVar17 = *(float *)(*pauVar9 + 4);
            if (fVar17 <= *(float *)(*pauVar11 + 4)) {
              fVar17 = *(float *)(*pauVar11 + 4);
            }
            if (fVar16 <= fVar17) {
              fVar16 = fVar17;
            }
            pfVar12[0xd] = fVar16;
            fVar16 = *(float *)(*pauVar10 + 8);
            if (fVar16 <= *(float *)(*pauVar8 + 8)) {
              fVar16 = *(float *)(*pauVar8 + 8);
            }
            fVar17 = *(float *)(*pauVar9 + 8);
            if (fVar17 <= *(float *)(*pauVar11 + 8)) {
              fVar17 = *(float *)(*pauVar11 + 8);
            }
            if (fVar16 <= fVar17) {
              fVar16 = fVar17;
            }
            pfVar12[0xe] = fVar16;
            fVar16 = pfVar12[8];
          }
          fVar17 = DAT_002c3f40;
          bVar2 = false;
          if ((((fVar16 < (float)param_1[4]) && ((float)param_1[8] < pfVar12[0xc])) &&
              ((pfVar12[9] < (float)param_1[5] &&
               (((float)param_1[9] < pfVar12[0xd] && (pfVar12[10] < (float)param_1[6])))))) &&
             ((float)param_1[10] < pfVar12[0xe])) {
            bVar2 = true;
          }
          if (bVar2) {
            if (*pfVar12 == DAT_002c3f40) {
              auVar20 = _lqc2(*pauVar11);
              auVar21 = _lqc2(*pauVar8);
              auVar20 = _vsub(auVar20,auVar21);
              auVar20 = _sqc2(auVar20);
              auVar21 = _lqc2(*pauVar8);
              auVar22 = _lqc2(*pauVar9);
              auVar21 = _vsub(auVar21,auVar22);
              auVar21 = _sqc2(auVar21);
              auVar20 = _lqc2(auVar20);
              auVar21 = _lqc2(auVar21);
              _vopmula(auVar20,auVar21);
              auVar20 = _vopmsub(auVar21,auVar20);
              auVar20 = _vsub(auVar20,auVar20);
              auVar20 = _sqc2(auVar20);
              auVar20 = _lqc2(auVar20);
              auVar22 = _vaddbc(in_vf0,in_vf0);
              auVar21 = _vmul(auVar20,auVar20);
              _vaddabc(auVar21,auVar21);
              _vmaddabc(auVar22,auVar21);
              auVar21 = _vmaddbc(auVar22,auVar21);
              _vrsqrt(in_vf0,auVar21);
              uVar23 = _vwaitq();
              auVar20 = _vmulq(auVar20,uVar23);
              auVar20 = _sqc2(auVar20);
              fStack_104 = auVar20._12_4_;
              fStack_130 = auVar20._0_4_;
              fStack_12c = auVar20._4_4_;
              fStack_128 = auVar20._8_4_;
              *pfVar12 = fStack_130;
              pfVar12[1] = fStack_12c;
              pfVar12[2] = fStack_128;
              pfVar12[3] = fStack_104;
              iVar6 = param_1[0x10];
            }
            else {
              iVar6 = param_1[0x10];
            }
            uStack_d0 = (undefined4)lVar7;
            uStack_cc = (undefined4)((ulong)lVar7 >> 0x20);
            lVar7 = (**(code **)(iVar6 + 0x2c))
                              ((int)param_1 + (int)*(short *)(iVar6 + 0x28),pauVar11,pauVar8,pauVar9
                               ,pfVar12,uStack_f8,uStack_f4,uStack_f0);
            if (lVar7 != 0) {
              if (*param_1 == 2) {
                (**(code **)(param_1[0x10] + 0x4c))
                          ((float)iVar15 * fVar18 + fVar19,(float)iVar14 * fVar18 + fVar19,
                           (int)param_1 + (int)*(short *)(param_1[0x10] + 0x48),iStack_fc,uStack_f8,
                           uStack_f4,uStack_f0);
              }
              if (param_6 != 0) {
                iVar6 = *param_1;
                *piVar13 = iStack_fc;
                piVar13[5] = iVar6;
                *(short *)(piVar13 + 1) = (short)iVar15;
                *(short *)((int)piVar13 + 6) = (short)iVar14;
                piVar13[4] = 1;
              }
              return 1;
            }
            if (pfVar12[4] == fVar17) {
              auVar20 = _lqc2(*pauVar9);
              auVar21 = _lqc2(*pauVar8);
              auVar20 = _vsub(auVar20,auVar21);
              auVar20 = _sqc2(auVar20);
              auVar21 = _lqc2(*pauVar8);
              auVar22 = _lqc2(*pauVar10);
              auVar21 = _vsub(auVar21,auVar22);
              auVar21 = _sqc2(auVar21);
              auVar20 = _lqc2(auVar20);
              auVar21 = _lqc2(auVar21);
              _vopmula(auVar20,auVar21);
              auVar20 = _vopmsub(auVar21,auVar20);
              auVar20 = _vsub(auVar20,auVar20);
              auVar20 = _sqc2(auVar20);
              auVar20 = _lqc2(auVar20);
              auVar22 = _vaddbc(in_vf0,in_vf0);
              auVar21 = _vmul(auVar20,auVar20);
              _vaddabc(auVar21,auVar21);
              _vmaddabc(auVar22,auVar21);
              auVar21 = _vmaddbc(auVar22,auVar21);
              _vrsqrt(in_vf0,auVar21);
              uVar23 = _vwaitq();
              auVar20 = _vmulq(auVar20,uVar23);
              auVar20 = _sqc2(auVar20);
              fStack_104 = auVar20._12_4_;
              fStack_130 = auVar20._0_4_;
              fStack_12c = auVar20._4_4_;
              fStack_128 = auVar20._8_4_;
              pfVar12[4] = fStack_130;
              pfVar12[5] = fStack_12c;
              pfVar12[6] = fStack_128;
              pfVar12[7] = fStack_104;
              iVar6 = param_1[0x10];
            }
            else {
              iVar6 = param_1[0x10];
            }
            lVar3 = (**(code **)(iVar6 + 0x2c))
                              ((int)param_1 + (int)*(short *)(iVar6 + 0x28),pauVar9,pauVar8,pauVar10
                               ,pfVar12 + 4,uStack_f8,uStack_f4,uStack_f0);
            lVar7 = CONCAT44(uStack_cc,uStack_d0);
            if (lVar3 != 0) {
              if (*param_1 == 2) {
                (**(code **)(param_1[0x10] + 0x4c))
                          ((float)iVar15 * fVar18 + fVar19,(float)iVar14 * fVar18 + fVar19,
                           (int)param_1 + (int)*(short *)(param_1[0x10] + 0x48),iStack_fc,uStack_f8,
                           uStack_f4,uStack_f0);
              }
              if (param_6 == 0) {
                return 1;
              }
              iVar6 = *param_1;
              *piVar13 = iStack_fc;
              piVar13[5] = iVar6;
              *(short *)(piVar13 + 1) = (short)iVar15;
              *(short *)((int)piVar13 + 6) = (short)iVar14;
              piVar13[4] = 0;
              return 1;
            }
          }
          iVar14 = iVar14 + 1;
          iVar6 = (int)lVar7;
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + iVar6);
          pauVar8 = (undefined1 (*) [16])(*pauVar8 + iVar6);
          pauVar9 = (undefined1 (*) [16])(*pauVar9 + iVar6);
          pauVar11 = (undefined1 (*) [16])(*pauVar11 + iVar6);
          pfVar12 = pfVar12 + 0x10;
        } while (iVar14 < iStack_e8);
      }
      iVar15 = iVar15 + 1;
      pauVar10 = pauVar10 + iStack_e4;
    } while (iVar15 < iStack_e8);
  }
  return 0;
}

