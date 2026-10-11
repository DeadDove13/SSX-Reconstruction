/* Ghidra pseudocode. PS2 address: 00116378. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0011678c) */
/* WARNING: Removing unreachable block (ram,0x00116488) */
/* WARNING: Removing unreachable block (ram,0x00116834) */

void FUN_00116378(undefined8 param_1,int param_2)

{
  bool bVar1;
  undefined1 auVar2 [12];
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 in_vf0 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  iVar12 = (int)param_1;
  iVar9 = *(int *)(param_2 + 0x260);
  *(float *)(iVar12 + 0x10) = *(float *)(iVar12 + 0x10) * DAT_002c15f4;
  if (iVar9 == 2) {
    *(undefined4 *)(iVar12 + 0x14) = 0;
  }
  else if (ABS(*(float *)(param_2 + 0x18c)) <= DAT_002c15f8) {
    *(undefined4 *)(iVar12 + 0x14) = 0;
  }
  else if (*(int *)(param_2 + 0x34c) == 2) {
    fVar14 = 0.0;
    iVar9 = *(int *)(param_2 + 0x210) * 0x60 + *(int *)(DAT_002859e4 + 0x1c);
    if ((*(float *)(iVar12 + 0x14) <= 0.0) || (*(float *)(iVar9 + 0x54) < DAT_002c15fc)) {
      fVar15 = *(float *)(param_2 + 0xe0) * DAT_002c1600;
      if (fVar15 <= DAT_002c1604) {
        iVar9 = *(int *)(iVar12 + 0x18);
        goto LAB_00116778;
      }
      if (DAT_002c1608 < fVar15) {
        fVar15 = DAT_002c1608;
      }
      if (*(int *)(iVar12 + 0x18) < 5) {
        *(int *)(iVar12 + 0x18) = *(int *)(iVar12 + 0x18) + 1;
      }
      auStack_c0._0_4_ = *(undefined4 *)(param_2 + 0x75b0);
      iVar10 = (*(int *)(iVar12 + 0x1c) + 4) % 5;
      *(int *)(iVar12 + 0x1c) = iVar10;
      auVar16 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xd0));
      auVar17 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x220));
      auVar18 = _vaddbc(in_vf0,in_vf0);
      auVar16 = _vmul(auVar16,auVar17);
      _vaddabc(auVar16,auVar16);
      _vmaddabc(auVar18,auVar16);
      auVar16 = _vmaddbc(auVar18,auVar16);
      auVar16 = _qmfc2(auVar16._0_4_);
      auVar17 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x220));
      auVar16 = _qmtc2(auVar16._0_4_);
      auVar16 = _vmulbc(auVar17,auVar16);
      auVar16 = _sqc2(auVar16);
      auVar17 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xd0));
      auVar16 = _lqc2(auVar16);
      auVar16 = _vsub(auVar17,auVar16);
      auVar16 = _sqc2(auVar16);
      auStack_b0._8_4_ = auVar16._8_4_;
      uVar6 = auStack_b0._8_4_;
      auStack_b0._12_4_ = auVar16._12_4_;
      uVar7 = auStack_b0._12_4_;
      iVar10 = iVar12 + iVar10 * 0x3c0 + 0x20;
      auStack_c0._4_4_ = *(undefined4 *)(param_2 + 0x75b4);
      auStack_c0._8_4_ = *(undefined4 *)(param_2 + 0x75b8);
      auStack_c0._12_4_ = *(undefined4 *)(param_2 + 0x75bc);
      auVar17 = _lqc2(auStack_c0);
      auVar18 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x220));
      auVar19 = _vaddbc(in_vf0,in_vf0);
      auVar17 = _vmul(auVar17,auVar18);
      _vaddabc(auVar17,auVar17);
      _vmaddabc(auVar19,auVar17);
      auVar17 = _vmaddbc(auVar19,auVar17);
      auVar17 = _qmfc2(auVar17._0_4_);
      auVar18 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x220));
      auVar17 = _qmtc2(auVar17._0_4_);
      auVar17 = _vmulbc(auVar18,auVar17);
      auVar17 = _sqc2(auVar17);
      auVar18 = _lqc2(auStack_c0);
      auVar17 = _lqc2(auVar17);
      auVar17 = _vsub(auVar18,auVar17);
      auVar17 = _sqc2(auVar17);
      auVar17 = _lqc2(auVar17);
      auVar19 = _vaddbc(in_vf0,in_vf0);
      auVar18 = _vmul(auVar17,auVar17);
      _vaddabc(auVar18,auVar18);
      _vmaddabc(auVar19,auVar18);
      auVar18 = _vmaddbc(auVar19,auVar18);
      _vrsqrt(in_vf0,auVar18);
      uVar20 = _vwaitq();
      auVar17 = _vmulq(auVar17,uVar20);
      auStack_c0 = _sqc2(auVar17);
      auVar17 = _lqc2(auVar16);
      auVar19 = _vaddbc(in_vf0,in_vf0);
      auVar18 = _vmul(auVar17,auVar17);
      _vaddabc(auVar18,auVar18);
      _vmaddabc(auVar19,auVar18);
      auVar18 = _vmaddbc(auVar19,auVar18);
      _vrsqrt(in_vf0,auVar18);
      uVar20 = _vwaitq();
      auVar17 = _vmulq(auVar17,uVar20);
      auStack_b0 = _sqc2(auVar17);
      auVar17 = _lqc2(auStack_b0);
      auVar18 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x220));
      _vopmula(auVar17,auVar18);
      auVar17 = _vopmsub(auVar18,auVar17);
      auVar17 = _vsub(auVar17,auVar17);
      auStack_a0 = _sqc2(auVar17);
      auVar17 = _lqc2(auStack_c0);
      auVar18 = _lqc2(auStack_a0);
      auVar19 = _vaddbc(in_vf0,in_vf0);
      auVar17 = _vmul(auVar17,auVar18);
      _vaddabc(auVar17,auVar17);
      _vmaddabc(auVar19,auVar17);
      auVar17 = _vmaddbc(auVar19,auVar17);
      auVar17 = _qmfc2(auVar17._0_4_);
      auStack_90 = auStack_a0;
      auStack_80 = auStack_c0;
      if (auVar17._0_4_ < 0.0) {
        FUN_001110c0(0xbf800000,auStack_90,auStack_a0);
      }
      fVar4 = DAT_002c1614;
      fVar3 = DAT_002c1610;
      fVar13 = fVar15 * DAT_002c160c;
      *(float *)(iVar10 + 0x3b8) = fVar14;
      *(undefined4 *)(iVar10 + 0x3b4) = 0xc;
      fVar5 = DAT_002c1618;
      *(float *)(iVar10 + 0x3bc) = (fVar13 + fVar3) * fVar4;
      uVar11 = *(undefined8 *)(*(int *)(param_2 + 0x8584) + 0x478);
      *(undefined8 *)(iVar10 + 0x3a4) = *(undefined8 *)(*(int *)(param_2 + 0x8584) + 0x470);
      *(undefined8 *)(iVar10 + 0x3ac) = uVar11;
      auVar2 = *(undefined1 (*) [12])(param_2 + 0x250);
      uVar20 = *(undefined4 *)(param_2 + 0x25c);
      *(int *)(iVar10 + 800) = auVar2._0_4_;
      *(int *)(iVar10 + 0x324) = auVar2._4_4_;
      *(int *)(iVar10 + 0x328) = auVar2._8_4_;
      *(undefined4 *)(iVar10 + 0x32c) = uVar20;
      *(int *)(iVar10 + 0x330) = auVar16._0_4_;
      *(int *)(iVar10 + 0x334) = auVar16._4_4_;
      *(undefined4 *)(iVar10 + 0x338) = uVar6;
      *(undefined4 *)(iVar10 + 0x33c) = uVar7;
      auStack_a0 = auStack_90;
      FUN_001157f0(fVar15,0x42a00000,*(float *)(iVar9 + 0x54) * fVar5,fVar5,param_1,iVar10,
                   param_2 + 0x220,auStack_b0,auStack_a0,auStack_c0);
      uVar8 = FUN_002109b0();
      *(float *)(iVar12 + 0x14) =
           *(float *)(iVar12 + 0x14) +
           (1.0 - fVar15 * DAT_002c161c) * 0.25 +
           ((float)(uVar8 & 0x7fffff | 0x3f800000) - 1.0) * DAT_002c1620 + fVar14;
    }
    else {
      *(float *)(iVar12 + 0x14) = *(float *)(iVar12 + 0x14) - DAT_002c1624;
    }
  }
  else {
    *(undefined4 *)(iVar12 + 0x14) = 0;
  }
  iVar9 = *(int *)(iVar12 + 0x18);
LAB_00116778:
  iVar10 = 0;
  if (0 < iVar9) {
    iVar9 = iVar12 + (*(int *)(iVar12 + 0x1c) % 5) * 0x3c0 + 0x20;
    fVar14 = *(float *)(iVar9 + 0x3b8) + DAT_002c1628;
    bVar1 = fVar14 <= DAT_002c162c;
    *(float *)(iVar9 + 0x3b8) = fVar14;
    if (bVar1) {
      do {
        iVar10 = iVar10 + 1;
        auVar17 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x330));
        auVar16 = _qmtc2(DAT_002c1630);
        auVar16 = _vmulbc(auVar17,auVar16);
        auVar16 = _sqc2(auVar16);
        *(undefined1 (*) [16])(iVar9 + 0x330) = auVar16;
        fVar14 = DAT_002c1634;
        auVar17 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x330));
        auVar16 = _qmtc2(DAT_002c1634);
        auVar16 = _vmulbc(auVar17,auVar16);
        auVar16 = _sqc2(auVar16);
        auVar17 = _lqc2(*(undefined1 (*) [16])(iVar9 + 800));
        auVar16 = _lqc2(auVar16);
        auVar16 = _vadd(auVar17,auVar16);
        auVar16 = _sqc2(auVar16);
        *(undefined1 (*) [16])(iVar9 + 800) = auVar16;
        if (*(int *)(iVar12 + 0x18) <= iVar10) {
          return;
        }
        iVar9 = iVar12 + ((*(int *)(iVar12 + 0x1c) + iVar10) % 5) * 0x3c0 + 0x20;
        fVar14 = *(float *)(iVar9 + 0x3b8) + fVar14;
        bVar1 = fVar14 <= DAT_002c1638;
        *(float *)(iVar9 + 0x3b8) = fVar14;
      } while (bVar1);
      *(int *)(iVar12 + 0x18) = iVar10;
    }
    else {
      *(undefined4 *)(iVar12 + 0x18) = 0;
    }
  }
  return;
}

