/* Ghidra pseudocode. PS2 address: 0020f848. Not validated source. */

void FUN_0020f848(int param_1,undefined8 param_2,undefined8 param_3,undefined1 (*param_4) [16],
                 undefined1 (*param_5) [16],undefined1 (*param_6) [16],int param_7,int param_8,
                 undefined4 *param_9,undefined4 *param_10)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  uint *puVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 (*pauStack_c0) [16];
  int iStack_bc;
  uint uStack_b8;
  
  iVar6 = *(int *)(param_1 + 0xa0);
  auVar16 = _lqc2(*param_6);
  pauVar7 = (undefined1 (*) [16])param_2;
  auVar17 = _lqc2(*pauVar7);
  auVar16 = _vsub(auVar16,auVar17);
  auVar16 = _sqc2(auVar16);
  auVar17 = _lqc2(*param_5);
  auVar16 = _lqc2(auVar16);
  auVar18 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _vmul(auVar17,auVar16);
  _vaddabc(auVar16,auVar16);
  _vmaddabc(auVar18,auVar16);
  auVar16 = _vmaddbc(auVar18,auVar16);
  auVar16 = _qmfc2(auVar16._0_4_);
  fVar9 = auVar16._0_4_;
  fVar14 = *(float *)(param_7 * 0xc + *(int *)(iVar6 + 0x20));
  if ((param_7 == 0) && (fVar9 < 0.0)) {
    return;
  }
  bVar1 = false;
  if (fVar14 + *(float *)(param_1 + 0xa4) <= fVar9) {
    return;
  }
  uStack_b8 = (uint)*(byte *)(*(int *)(iVar6 + 0x28) + param_8);
  if (((*(int *)(iVar6 + 0xc) <= param_7) || (2 < param_7)) || (uStack_b8 == 0)) {
    bVar1 = true;
  }
  auVar17 = _lqc2(*param_5);
  auVar16 = _qmtc2(fVar9);
  auVar16 = _vmulbc(auVar17,auVar16);
  auStack_120 = _sqc2(auVar16);
  auVar16 = _lqc2(*param_6);
  auVar17 = _lqc2(auStack_120);
  auVar16 = _vsub(auVar16,auVar17);
  auStack_110 = _sqc2(auVar16);
  uStack_130 = auStack_110._0_4_;
  uStack_12c = auStack_110._4_4_;
  uStack_128 = auStack_110._8_4_;
  uStack_124 = auStack_110._12_4_;
  pauStack_c0 = param_4;
  iStack_bc = param_8;
  lVar3 = FUN_002100f0(DAT_002c39e4,param_2,param_3,param_4,&uStack_130);
  if (lVar3 != 0) goto LAB_0020fcd0;
  if (bVar1) {
    return;
  }
  if (fVar14 < 20.0) {
    return;
  }
  auVar16 = _lqc2(*param_6);
  auVar17 = _lqc2(*pauVar7);
  auVar16 = _vsub(auVar16,auVar17);
  auVar16 = _sqc2(auVar16);
  fVar11 = fVar14 * fVar14;
  auVar17 = _lqc2(auVar16);
  auVar18 = _lqc2(auVar16);
  auVar19 = _vaddbc(in_vf0,in_vf0);
  auVar17 = _vmul(auVar17,auVar18);
  _vaddabc(auVar17,auVar17);
  _vmaddabc(auVar19,auVar17);
  auVar17 = _vmaddbc(auVar19,auVar17);
  auVar17 = _qmfc2(auVar17._0_4_);
  fVar13 = auVar17._0_4_;
  if (fVar13 <= fVar11) goto LAB_0020fcd0;
  pauVar8 = (undefined1 (*) [16])param_3;
  auVar17 = _lqc2(*pauVar8);
  auVar18 = _lqc2(*pauVar7);
  auVar17 = _vsub(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  auVar18 = _lqc2(auVar17);
  auVar19 = _vaddbc(in_vf0,in_vf0);
  auVar18 = _vmul(auVar18,auVar18);
  _vaddabc(auVar18,auVar18);
  _vmaddabc(auVar19,auVar18);
  auVar18 = _vmaddbc(auVar19,auVar18);
  _vsqrt(auVar18);
  _vwaitq();
  uVar4 = _cfc2(in_vc6);
  auVar18 = _lqc2(auVar16);
  auVar17 = _lqc2(auVar17);
  auVar19 = _vaddbc(in_vf0,in_vf0);
  auVar17 = _vmul(auVar18,auVar17);
  _vaddabc(auVar17,auVar17);
  _vmaddabc(auVar19,auVar17);
  auVar17 = _vmaddbc(auVar19,auVar17);
  auVar17 = _qmfc2(auVar17._0_4_);
  fVar12 = auVar17._0_4_ / (float)uVar4;
  if (0.0 <= fVar12) {
    fVar10 = fVar13 - fVar12 * fVar12;
    bVar2 = true;
    if ((fVar10 <= fVar11) && (bVar2 = false, (float)uVar4 < fVar12 - SQRT(fVar11 - fVar10)))
    goto LAB_0020faec;
  }
  else {
LAB_0020faec:
    bVar2 = true;
  }
  if (!bVar2) goto LAB_0020fcd0;
  auVar17 = _lqc2(*pauStack_c0);
  auVar18 = _lqc2(*pauVar7);
  auVar17 = _vsub(auVar17,auVar18);
  auStack_f0 = _sqc2(auVar17);
  auVar17 = _lqc2(auStack_f0);
  auVar18 = _vaddbc(in_vf0,in_vf0);
  auVar17 = _vmul(auVar17,auVar17);
  _vaddabc(auVar17,auVar17);
  _vmaddabc(auVar18,auVar17);
  auVar17 = _vmaddbc(auVar18,auVar17);
  _vsqrt(auVar17);
  _vwaitq();
  uVar4 = _cfc2(in_vc6);
  auVar16 = _lqc2(auVar16);
  auVar17 = _lqc2(auStack_f0);
  auVar18 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _vmul(auVar16,auVar17);
  _vaddabc(auVar16,auVar16);
  _vmaddabc(auVar18,auVar16);
  auVar16 = _vmaddbc(auVar18,auVar16);
  auVar16 = _qmfc2(auVar16._0_4_);
  fVar12 = auVar16._0_4_ / (float)uVar4;
  if (0.0 <= fVar12) {
    fVar13 = fVar13 - fVar12 * fVar12;
    bVar2 = true;
    if ((fVar13 <= fVar11) && (bVar2 = false, (float)uVar4 < fVar12 - SQRT(fVar11 - fVar13)))
    goto LAB_0020fbb8;
  }
  else {
LAB_0020fbb8:
    bVar2 = true;
  }
  if (!bVar2) goto LAB_0020fcd0;
  auVar16 = _lqc2(*param_6);
  auVar17 = _lqc2(*pauVar8);
  auVar16 = _vsub(auVar16,auVar17);
  auStack_f0 = _sqc2(auVar16);
  auVar16 = _lqc2(auStack_f0);
  auVar17 = _lqc2(auStack_f0);
  auVar18 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _vmul(auVar16,auVar17);
  _vaddabc(auVar16,auVar16);
  _vmaddabc(auVar18,auVar16);
  auVar16 = _vmaddbc(auVar18,auVar16);
  auVar17 = _qmfc2(auVar16._0_4_);
  auVar16 = _lqc2(*pauStack_c0);
  auVar18 = _lqc2(*pauVar8);
  auVar16 = _vsub(auVar16,auVar18);
  auStack_e0 = _sqc2(auVar16);
  auVar16 = _lqc2(auStack_e0);
  auVar18 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _vmul(auVar16,auVar16);
  _vaddabc(auVar16,auVar16);
  _vmaddabc(auVar18,auVar16);
  auVar16 = _vmaddbc(auVar18,auVar16);
  _vsqrt(auVar16);
  _vwaitq();
  uVar4 = _cfc2(in_vc6);
  auVar16 = _lqc2(auStack_f0);
  auVar18 = _lqc2(auStack_e0);
  auVar19 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _vmul(auVar16,auVar18);
  _vaddabc(auVar16,auVar16);
  _vmaddabc(auVar19,auVar16);
  auVar16 = _vmaddbc(auVar19,auVar16);
  auVar16 = _qmfc2(auVar16._0_4_);
  fVar13 = auVar16._0_4_ / (float)uVar4;
  if (0.0 <= fVar13) {
    fVar12 = auVar17._0_4_ - fVar13 * fVar13;
    bVar2 = true;
    if ((fVar12 <= fVar11) && (bVar2 = false, (float)uVar4 < fVar13 - SQRT(fVar11 - fVar12)))
    goto LAB_0020fcc4;
  }
  else {
LAB_0020fcc4:
    bVar2 = true;
  }
  auStack_d0 = auStack_e0;
  if (bVar2) {
    return;
  }
LAB_0020fcd0:
  if (bVar1) {
    fVar9 = fVar9 - fVar14;
    if (fVar9 < *(float *)(param_1 + 0xa4)) {
      auVar17 = _lqc2(*param_5);
      auVar16 = _qmtc2(-fVar9);
      auVar16 = _vmulbc(auVar17,auVar16);
      auVar16 = _sqc2(auVar16);
      auStack_110._12_4_ = auVar16._12_4_;
      auStack_120._8_4_ = auVar16._8_4_;
      *param_9 = auVar16._0_4_;
      param_9[1] = auVar16._4_4_;
      param_9[2] = auStack_120._8_4_;
      param_9[3] = auStack_110._12_4_;
      *param_10 = uStack_130;
      param_10[1] = uStack_12c;
      param_10[2] = uStack_128;
      param_10[3] = uStack_124;
      *(float *)(param_1 + 0xa4) = fVar9;
    }
  }
  else {
    puVar5 = (uint *)(param_1 + 0xa8);
    iVar6 = 7;
    uVar15 = *(undefined4 *)(param_7 * 0xc + *(int *)(*(int *)(param_1 + 0xa0) + 0x20) + 0x10);
    do {
      if (((int)uStack_b8 >> (*puVar5 & 0x1f) & 1U) != 0) {
        auVar17 = _lqc2(*(undefined1 (*) [16])(*puVar5 * 0x10 + param_1 + 0x10));
        auVar16 = _qmtc2(uVar15);
        auVar16 = _vmulbc(auVar17,auVar16);
        auStack_110 = _sqc2(auVar16);
        auVar16 = _lqc2(*param_6);
        auVar17 = _lqc2(auStack_110);
        auVar16 = _vadd(auVar16,auVar17);
        auStack_120 = _sqc2(auVar16);
        auStack_100 = auStack_120;
        FUN_0020f848();
      }
      iVar6 = iVar6 + -1;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar6);
  }
  return;
}

