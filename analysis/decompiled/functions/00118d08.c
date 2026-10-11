/* Ghidra pseudocode. PS2 address: 00118d08. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00118d50) */
/* WARNING: Removing unreachable block (ram,0x00118ea0) */

void FUN_00118d08(undefined8 param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  
  piVar7 = (int *)param_1;
  iVar6 = 0;
  if (0 < piVar7[0x14]) {
    piVar2 = piVar7 + (piVar7[0x15] % 0x4b) * 0x28 + 0x18;
    bVar1 = DAT_002c1748 < (float)piVar2[0x25] + DAT_002c1744;
    piVar2[0x25] = (int)((float)piVar2[0x25] + DAT_002c1744);
    if (bVar1) {
      piVar7[0x14] = 0;
    }
    else {
      do {
        uVar17 = DAT_002c174c;
        iVar6 = iVar6 + 1;
        pauVar4 = (undefined1 (*) [16])(piVar2 + 0x10);
        iVar5 = 0;
        do {
          fVar8 = (float)iVar5;
          auVar12 = _lqc2(*pauVar4);
          auVar11 = _qmtc2(0xc0600000);
          auVar11 = _vmulbc(auVar12,auVar11);
          auVar11 = _sqc2(auVar11);
          iVar5 = iVar5 + 1;
          auStack_f0 = ZEXT416((uint)(fVar8 * 0.25 * -2800.0 * fVar8 * 0.25)) << 0x40;
          auVar11 = _lqc2(auVar11);
          auVar12 = _lqc2(auStack_f0);
          auVar11 = _vadd(auVar11,auVar12);
          auVar11 = _sqc2(auVar11);
          auVar13 = _lqc2(*pauVar4);
          auVar12 = _qmtc2(uVar17);
          auVar12 = _vmulbc(auVar13,auVar12);
          auVar12 = _sqc2(auVar12);
          auVar13 = _lqc2(pauVar4[-4]);
          auVar12 = _lqc2(auVar12);
          auVar12 = _vadd(auVar13,auVar12);
          auVar12 = _sqc2(auVar12);
          pauVar4[-4] = auVar12;
          auVar12 = _lqc2(auVar11);
          auVar11 = _qmtc2(uVar17);
          auVar11 = _vmulbc(auVar12,auVar11);
          auVar11 = _sqc2(auVar11);
          auVar12 = _lqc2(*pauVar4);
          auVar11 = _lqc2(auVar11);
          auVar11 = _vadd(auVar12,auVar11);
          auVar11 = _sqc2(auVar11);
          *pauVar4 = auVar11;
          pauVar4 = pauVar4 + 1;
        } while (iVar5 < 4);
        if (piVar7[0x14] <= iVar6) goto LAB_00118ee4;
        piVar2 = piVar7 + ((piVar7[0x15] + iVar6) % 0x4b) * 0x28 + 0x18;
        bVar1 = (float)piVar2[0x25] + DAT_002c1750 <= DAT_002c1754;
        piVar2[0x25] = (int)((float)piVar2[0x25] + DAT_002c1750);
      } while (bVar1);
      piVar7[0x14] = iVar6;
    }
  }
LAB_00118ee4:
  uVar17 = DAT_002c1768;
  fVar8 = *(float *)(param_2 + 0x1a4) * (1.0 - ABS(*(float *)(param_2 + 0x18c)));
  if (*(int *)(param_2 + 0x144) != 0) {
    fVar8 = -fVar8;
  }
  pauVar4 = (undefined1 (*) [16])(param_2 + 0x75b0);
  uStack_110 = *(undefined4 *)*pauVar4;
  uStack_104 = *(undefined4 *)(param_2 + 0x75bc);
  uStack_10c = *(undefined4 *)(param_2 + 0x75b4);
  uStack_108 = *(undefined4 *)(param_2 + 0x75b8);
  auVar12 = *pauVar4;
  auVar11 = *pauVar4;
  iVar6 = *(int *)(param_2 + 0x210) * 0x60 + *(int *)(DAT_002859e4 + 0x1c);
  auVar13 = _lqc2(*pauVar4);
  auVar14 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x220));
  _vopmula(auVar13,auVar14);
  auVar13 = _vopmsub(auVar14,auVar13);
  auVar13 = _vsub(auVar13,auVar13);
  auStack_e0 = _sqc2(auVar13);
  fVar9 = *(float *)(iVar6 + 0x58);
  if (fVar8 <= 0.0) {
    fVar9 = -fVar9;
  }
  auVar14 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x220));
  auVar13 = _qmtc2(fVar9);
  auVar13 = _vmulbc(auVar14,auVar13);
  auStack_d0 = _sqc2(auVar13);
  auVar13 = _lqc2(auStack_e0);
  auVar14 = _lqc2(auStack_d0);
  auVar13 = _vadd(auVar13,auVar14);
  auVar13 = _sqc2(auVar13);
  auVar13 = _lqc2(auVar13);
  auVar15 = _vaddbc(in_vf0,in_vf0);
  auVar14 = _vmul(auVar13,auVar13);
  _vaddabc(auVar14,auVar14);
  _vmaddabc(auVar15,auVar14);
  auVar14 = _vmaddbc(auVar15,auVar14);
  _vrsqrt(in_vf0,auVar14);
  uVar16 = _vwaitq();
  auVar13 = _vmulq(auVar13,uVar16);
  auStack_c0 = _sqc2(auVar13);
  iStack_100 = auStack_c0._0_4_;
  iStack_fc = auStack_c0._4_4_;
  iStack_f8 = auStack_c0._8_4_;
  iStack_f4 = auStack_c0._12_4_;
  auStack_f0 = *(undefined1 (*) [16])(param_2 + 0x250);
  fVar9 = *(float *)(iVar6 + 0x54) * (ABS(fVar8) - DAT_002c1758);
  fVar10 = *(float *)(iVar6 + 0x5c) * *(float *)(param_2 + 0xe0) * fVar8;
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  if (*piVar7 == 0) {
    if (((*(int *)(param_2 + 0x34c) == 2) && (DAT_002c1778 < ABS(fVar8))) &&
       (*(int *)(param_2 + 0x260) != 2)) {
      piVar7[0xd] = 0;
      piVar7[1] = 0;
      piVar7[0x10] = iStack_100;
      piVar7[0x11] = iStack_fc;
      piVar7[0x12] = auStack_c0._8_4_;
      piVar7[0x13] = auStack_c0._12_4_;
      piVar7[0xe] = (int)fVar9;
      FUN_001196f0(param_1,*(int *)(param_2 + 0x8584) + 0x470,1);
      if (*(int *)(param_2 + 0x144) == 0) {
        auStack_e0._4_4_ = uStack_10c;
        auStack_e0._0_4_ = uStack_110;
        auStack_e0._8_4_ = uStack_108;
        auStack_e0._12_4_ = uStack_104;
      }
      else {
        FUN_001110c0(0xbf800000,auStack_e0,&uStack_110);
      }
      FUN_00119468(piVar7[0xd],0,param_1,auStack_f0,auStack_e0,piVar7 + 0x10,param_2 + 0xd0);
      piVar7[4] = auStack_f0._0_4_;
      piVar7[5] = auStack_f0._4_4_;
      piVar7[6] = auStack_f0._8_4_;
      piVar7[7] = auStack_f0._12_4_;
      FUN_001196f0(param_1,*(int *)(param_2 + 0x8584) + 0x470,0);
      if (*(int *)(param_2 + 0x144) == 0) {
        auStack_e0._4_4_ = uStack_10c;
        auStack_e0._0_4_ = uStack_110;
        auStack_e0._8_4_ = uStack_108;
        auStack_e0._12_4_ = uStack_104;
        iVar6 = piVar7[0xd];
      }
      else {
        FUN_001110c0(0xbf800000,auStack_e0,&uStack_110);
        iVar6 = piVar7[0xd];
      }
      FUN_00119468(iVar6,piVar7[0xe],param_1,auStack_f0,auStack_e0,piVar7 + 0x10,param_2 + 0xd0);
      *piVar7 = 1;
    }
  }
  else {
    fVar8 = (float)piVar7[0xd];
    if ((fVar8 == 0.0) || (fVar10 < 0.0 == fVar8 < 0.0)) {
      auVar13 = _lqc2(auStack_c0);
      auVar11 = _qmtc2(DAT_002c1764);
      auVar11 = _vmulbc(auVar13,auVar11);
      auStack_c0 = _sqc2(auVar11);
      piVar7[0xd] = (int)(fVar10 * DAT_002c175c + fVar8 * DAT_002c1760);
      auVar13 = _lqc2(*(undefined1 (*) [16])(piVar7 + 0x10));
      auVar11 = _qmtc2(uVar17);
      auVar11 = _vmulbc(auVar13,auVar11);
      auStack_b0 = _sqc2(auVar11);
      auVar11 = _lqc2(auStack_c0);
      auVar13 = _lqc2(auStack_b0);
      auVar11 = _vadd(auVar11,auVar13);
      auStack_d0 = _sqc2(auVar11);
      auVar11 = _lqc2(auStack_d0);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      auVar13 = _vmul(auVar11,auVar11);
      _vaddabc(auVar13,auVar13);
      _vmaddabc(auVar14,auVar13);
      auVar13 = _vmaddbc(auVar14,auVar13);
      _vrsqrt(in_vf0,auVar13);
      uVar17 = _vwaitq();
      auVar11 = _vmulq(auVar11,uVar17);
      auStack_a0 = _sqc2(auVar11);
      auStack_e0._8_4_ = auStack_a0._8_4_;
      piVar7[0x10] = auStack_a0._0_4_;
      piVar7[0x11] = auStack_a0._4_4_;
      piVar7[0x12] = auStack_e0._8_4_;
      piVar7[0x13] = auStack_a0._12_4_;
      if ((*(int *)(param_2 + 0x34c) == 2) && (*(int *)(param_2 + 0x260) != 2)) {
        fVar8 = (float)piVar7[0xe];
      }
      else {
        fVar9 = 0.0;
        fVar8 = (float)piVar7[0xe];
      }
      fVar8 = fVar9 * DAT_002c176c + fVar8 * DAT_002c1770;
      bVar1 = DAT_002c1774 < fVar8;
      piVar7[0xe] = (int)fVar8;
      if (bVar1) {
        auVar11 = _lqc2(auStack_f0);
        auVar12 = _lqc2(*(undefined1 (*) [16])(piVar7 + 4));
        auVar11 = _vsub(auVar11,auVar12);
        auStack_e0 = _sqc2(auVar11);
        auVar11 = _lqc2(auStack_e0);
        auVar12 = _vaddbc(in_vf0,in_vf0);
        auVar11 = _vmul(auVar11,auVar11);
        _vaddabc(auVar11,auVar11);
        _vmaddabc(auVar12,auVar11);
        auVar11 = _vmaddbc(auVar12,auVar11);
        _vsqrt(auVar11);
        _vwaitq();
        uVar3 = _cfc2(in_vc6);
        auStack_d0 = auStack_e0;
        if (25.0 < (float)uVar3) {
          FUN_001196f0(param_1,*(int *)(param_2 + 0x8584) + 0x470,0);
          piVar7[4] = auStack_f0._0_4_;
          piVar7[5] = auStack_f0._4_4_;
          piVar7[6] = auStack_f0._8_4_;
          piVar7[7] = auStack_f0._12_4_;
        }
        if (*(int *)(param_2 + 0x144) == 0) {
          auStack_e0._4_4_ = uStack_10c;
          auStack_e0._0_4_ = uStack_110;
          auStack_e0._8_4_ = uStack_108;
          auStack_e0._12_4_ = uStack_104;
        }
        else {
          FUN_001110c0(0xbf800000,auStack_e0,&uStack_110);
        }
        iVar5 = piVar7[0xd];
        iVar6 = piVar7[0xe];
      }
      else {
        *piVar7 = 0;
        auStack_e0 = auVar12;
        if (*(int *)(param_2 + 0x144) != 0) {
          auStack_e0 = auStack_a0;
          FUN_001110c0(0xbf800000,auStack_e0,&uStack_110);
        }
        iVar6 = 0;
        iVar5 = piVar7[0xd];
      }
      FUN_00119468(iVar5,iVar6,param_1,auStack_f0,auStack_e0,piVar7 + 0x10,param_2 + 0xd0);
    }
    else {
      *piVar7 = 0;
      if (*(int *)(param_2 + 0x144) == 0) {
        fVar8 = (float)piVar7[0xc];
        auStack_e0 = auVar11;
      }
      else {
        FUN_001110c0(0xbf800000,auStack_e0,&uStack_110);
        fVar8 = (float)piVar7[0xc];
      }
      FUN_00119468((float)piVar7[0xd] * (fVar8 + 1.0),0,param_1,auStack_f0,auStack_e0,piVar7 + 0x10,
                   param_2 + 0xd0);
    }
  }
  return;
}

