/* Ghidra pseudocode. PS2 address: 0012d870. Not validated source. */

bool FUN_0012d870(int param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  float *pfVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 in_vf0 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined1 auStack_130 [16];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [8];
  float fStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined1 auStack_e0 [16];
  
  iVar7 = 0x1f;
  puVar5 = (uint *)(param_1 + 0x6f0);
  *(undefined4 *)(param_1 + 0x778) = 1;
  do {
    iVar7 = iVar7 + -1;
    uVar3 = FUN_002109b0();
    *puVar5 = uVar3 & 3;
    puVar5 = puVar5 + 1;
  } while (-1 < iVar7);
  FUN_00217a10(auStack_130,*(undefined4 *)(param_1 + 0x28));
  fVar16 = DAT_002c1b9c;
  fVar15 = 8.0;
  fVar14 = -1.0;
  pauVar8 = (undefined1 (*) [16])(param_1 + 0x80);
  pfVar9 = (float *)(param_1 + 0xc0);
  puVar6 = (undefined4 *)(param_1 + 0x38);
  iVar7 = 3;
  do {
    iVar7 = iVar7 + -1;
    puVar6[1] = uStack_11c;
    puVar6[2] = uStack_118;
    puVar6[3] = uStack_114;
    *puVar6 = uStack_120;
    uVar3 = FUN_002109b0();
    puVar6 = puVar6 + 4;
    *pfVar9 = (((float)(uVar3 & 0x7fffff | 0x3f800000) - 1.0) * fVar15 + 2.0) * fVar16;
    uVar3 = FUN_002109b0();
    pfVar9 = pfVar9 + 1;
    fVar11 = (float)(uVar3 & 0x7fffff | 0x3f800000) - 1.0;
    fVar12 = fVar11 + fVar11 + fVar14;
    uVar3 = FUN_002109b0();
    fVar11 = (float)(uVar3 & 0x7fffff | 0x3f800000) - 1.0;
    fVar13 = fVar11 + fVar11 + fVar14;
    uVar3 = FUN_002109b0();
    fVar11 = (float)(uVar3 & 0x7fffff | 0x3f800000) - 1.0;
    *(float *)*pauVar8 = fVar12;
    *(float *)(*pauVar8 + 4) = fVar13;
    *(float *)(*pauVar8 + 8) = fVar11 + fVar11 + fVar14;
    *(undefined4 *)(*pauVar8 + 0xc) = 0;
    auVar17 = _lqc2(*pauVar8);
    auVar19 = _vaddbc(in_vf0,in_vf0);
    auVar18 = _vmul(auVar17,auVar17);
    _vaddabc(auVar18,auVar18);
    _vmaddabc(auVar19,auVar18);
    auVar18 = _vmaddbc(auVar19,auVar18);
    _vrsqrt(in_vf0,auVar18);
    uVar20 = _vwaitq();
    auVar17 = _vmulq(auVar17,uVar20);
    _auStack_100 = _sqc2(auVar17);
    uStack_108 = fStack_f8;
    uStack_104 = uStack_f4;
    uStack_110 = auStack_100._0_4_;
    uStack_10c = auStack_100._4_4_;
    *(undefined4 *)*pauVar8 = uStack_110;
    *(undefined4 *)(*pauVar8 + 4) = uStack_10c;
    *(float *)(*pauVar8 + 8) = fStack_f8;
    *(undefined4 *)(*pauVar8 + 0xc) = uStack_f4;
    fVar11 = DAT_002c1ba0;
    pauVar8 = pauVar8 + 1;
  } while (-1 < iVar7);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x28) + 0xcc) * 8 + DAT_00299ce0);
  piVar10 = piVar1 + 9;
  bVar2 = *piVar1 < 0x21;
  iVar7 = 0;
  if (0 < *piVar1) {
    fVar15 = 0.0;
    fVar16 = 1.0;
    pauVar8 = (undefined1 (*) [16])(param_1 + 0x4f0);
    puVar6 = (undefined4 *)(param_1 + 0x2f0);
    do {
      pfVar9 = (float *)*piVar10;
      fStack_e8 = pfVar9[5] + pfVar9[2];
      fStack_f0 = pfVar9[3] + *pfVar9;
      fStack_f8 = fStack_e8;
      fStack_ec = pfVar9[4] + pfVar9[1];
      auStack_100._4_4_ = fStack_ec;
      auStack_100._0_4_ = fStack_f0;
      uStack_f4 = 0;
      auVar18 = _lqc2(_auStack_100);
      auVar17 = _qmtc2(0x3f000000);
      auVar17 = _vmulbc(auVar18,auVar17);
      auStack_e0 = _sqc2(auVar17);
      *puVar6 = auStack_e0._0_4_;
      puVar6[1] = auStack_e0._4_4_;
      puVar6[2] = auStack_e0._8_4_;
      puVar6[3] = auStack_e0._12_4_;
      uStack_110 = 0;
      uStack_10c = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      puVar6[-0x80] = 0;
      puVar6[-0x7f] = 0;
      puVar6[-0x7e] = 0;
      puVar6[-0x7d] = 0;
      fVar14 = *(float *)(param_1 + 0xd0);
      uVar3 = FUN_002109b0();
      fVar14 = ((fVar14 - fVar15) * ((float)(uVar3 & 0x7fffff | 0x3f800000) - fVar16) + fVar15) *
               fVar11;
      uVar4 = FUN_002109b0();
      if ((uVar4 & 1) != 0) {
        fVar14 = -fVar14;
      }
      fVar12 = *(float *)(param_1 + 0xd4);
      uVar3 = FUN_002109b0();
      fVar12 = ((fVar12 - fVar15) * ((float)(uVar3 & 0x7fffff | 0x3f800000) - fVar16) + fVar15) *
               fVar11;
      uVar4 = FUN_002109b0();
      if ((uVar4 & 1) != 0) {
        fVar12 = -fVar12;
      }
      fVar13 = *(float *)(param_1 + 0xd8);
      iVar7 = iVar7 + 1;
      uVar3 = FUN_002109b0();
      puVar6 = puVar6 + 4;
      auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xe0));
      auVar17 = _qmtc2(fVar11);
      auVar17 = _vmulbc(auVar18,auVar17);
      _auStack_100 = _sqc2(auVar17);
      piVar10 = piVar10 + 1;
      *(int *)*pauVar8 = auStack_100._0_4_;
      *(int *)(*pauVar8 + 4) = auStack_100._4_4_;
      *(float *)(*pauVar8 + 8) = fStack_f8;
      *(undefined4 *)(*pauVar8 + 0xc) = uStack_f4;
      auVar18 = _lqc2(*pauVar8);
      auVar17._4_4_ = fVar12;
      auVar17._0_4_ = fVar14;
      auVar17._8_4_ =
           ((fVar13 - fVar15) * ((float)(uVar3 & 0x7fffff | 0x3f800000) - fVar16) + fVar15) * fVar11
      ;
      auVar17._12_4_ = fVar15;
      auVar17 = _lqc2(auVar17);
      auVar17 = _vadd(auVar18,auVar17);
      auVar17 = _sqc2(auVar17);
      *pauVar8 = auVar17;
      pauVar8 = pauVar8 + 1;
      bVar2 = false;
    } while (iVar7 < *piVar1);
  }
  return bVar2;
}

