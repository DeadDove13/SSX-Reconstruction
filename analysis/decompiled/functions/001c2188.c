/* Ghidra pseudocode. PS2 address: 001c2188. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001c2248) */

void FUN_001c2188(undefined8 param_1,undefined1 (*param_2) [16],int param_3,int param_4,int param_5,
                 int param_6,uint param_7)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 (*pauStack_c0) [16];
  int iStack_bc;
  int iStack_b8;
  uint uStack_b4;
  
  iVar13 = (int)param_1;
  pauStack_c0 = param_2;
  iStack_bc = param_5;
  iStack_b8 = param_6;
  uStack_b4 = param_7;
  if (param_6 == 4) {
    fVar15 = *(float *)(iVar13 + 0x4b8);
    param_3 = param_3 % 2;
    fVar14 = fVar15 * 0.5;
    param_4 = param_4 % 2;
    auVar16 = _lqc2(*param_2);
    auVar2._4_4_ = fVar14;
    auVar2._0_4_ = fVar14;
    auVar2._8_4_ = fVar14;
    auVar2._12_4_ = 0;
    auVar17 = _lqc2(auVar2);
    auVar16 = _vsub(auVar16,auVar17);
    auVar16 = _sqc2(auVar16);
    auStack_f0._8_4_ = auVar16._8_4_;
    auStack_f0._12_4_ = auVar16._12_4_;
    fStack_110 = auVar16._0_4_;
    fStack_10c = auVar16._4_4_;
    fStack_108 = (float)auStack_f0._8_4_;
    uStack_104 = auStack_f0._12_4_;
    fVar14 = fVar15 * 7.0;
    param_5 = param_5 % 2;
    iVar9 = param_3 + 2;
    if (-1 < param_3) {
      iVar9 = param_3;
    }
    iVar6 = param_4 + 2;
    if (-1 < param_4) {
      iVar6 = param_4;
    }
    iVar12 = param_5 + 2;
    if (-1 < param_5) {
      iVar12 = param_5;
    }
    iVar9 = iVar13 + iVar9 * 0x240 + 0x10 + iVar6 * 0x120 + iVar12 * 0x90;
    auVar16 = _lqc2(auVar16);
    auVar17 = _lqc2(*(undefined1 (*) [16])
                     (DAT_002859e4 + *(int *)(DAT_002859e4 + 0x290) * 0x80 + 0xb0));
    auVar16 = _vsub(auVar16,auVar17);
    auStack_f0 = _sqc2(auVar16);
    auVar16 = _lqc2(auStack_f0);
    auVar17 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar16);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar17,auVar16);
    auVar16 = _vmaddbc(auVar17,auVar16);
    _vsqrt(auVar16);
    _vwaitq();
    uVar7 = _cfc2(in_vc6);
    fVar5 = (float)uVar7;
    if (fVar5 < fVar14) {
      fStack_f4 = *(float *)(iVar13 + 0x4b0);
      if (fVar14 - fVar15 < fVar5) {
        fStack_f4 = fStack_f4 * ((fVar14 - fVar5) / fVar15);
      }
      fStack_f4 = fStack_f4 * 128.0;
      fStack_100 = 128.0;
      fStack_f8 = 128.0;
      fStack_fc = 128.0;
      *(undefined4 *)(iVar9 + 0x60) = 0x43000000;
      *(undefined4 *)(iVar9 + 100) = 0x43000000;
      *(undefined4 *)(iVar9 + 0x68) = 0x43000000;
      *(float *)(iVar9 + 0x6c) = fStack_f4;
      FUN_001c2120(param_1,&fStack_110,iVar9);
    }
  }
  else {
    iVar6 = 1 << (3U - param_6 & 0x1f);
    uStack_104 = 0;
    iVar12 = iVar6 >> 1;
    uVar11 = 0;
    iVar9 = -(iVar6 + 1 >> 1);
    fVar14 = *(float *)(iVar13 + 0x4b8) * 0.5 * (float)iVar6;
    fStack_110 = fVar14;
    fStack_10c = fVar14;
    fStack_108 = fVar14;
    do {
      fStack_f4 = *(float *)(*pauStack_c0 + 0xc);
      fStack_100 = (float)*(undefined8 *)*pauStack_c0;
      fStack_fc = (float)((ulong)*(undefined8 *)*pauStack_c0 >> 0x20);
      if ((uVar11 & 1) == 0) {
        fStack_100 = fStack_100 + fVar14;
      }
      else {
        fStack_100 = fStack_100 - fVar14;
      }
      if ((uVar11 & 2) == 0) {
        fStack_fc = fStack_fc + fVar14;
      }
      else {
        fStack_fc = fStack_fc - fVar14;
      }
      if ((uVar11 & 4) == 0) {
        fStack_f8 = *(float *)(*pauStack_c0 + 8) + fVar14;
      }
      else {
        fStack_f8 = *(float *)(*pauStack_c0 + 8) - fVar14;
      }
      uVar10 = uStack_b4;
      if (uStack_b4 == 0) {
        auVar3._4_4_ = fStack_fc;
        auVar3._0_4_ = fStack_100;
        auVar3._8_4_ = fStack_f8;
        auVar3._12_4_ = fStack_f4;
        auVar17 = _lqc2(auVar3);
        auVar16._4_4_ = fStack_10c;
        auVar16._0_4_ = fStack_110;
        auVar16._8_4_ = fStack_108;
        auVar16._12_4_ = uStack_104;
        auVar16 = _lqc2(auVar16);
        auVar16 = _vsub(auVar17,auVar16);
        auStack_f0 = _sqc2(auVar16);
        auVar4._4_4_ = fStack_fc;
        auVar4._0_4_ = fStack_100;
        auVar4._8_4_ = fStack_f8;
        auVar4._12_4_ = fStack_f4;
        auVar16 = _lqc2(auVar4);
        auVar17._4_4_ = fStack_10c;
        auVar17._0_4_ = fStack_110;
        auVar17._8_4_ = fStack_108;
        auVar17._12_4_ = uStack_104;
        auVar17 = _lqc2(auVar17);
        auVar16 = _vadd(auVar16,auVar17);
        auStack_e0 = _sqc2(auVar16);
        auStack_d0 = auStack_e0;
        lVar8 = FUN_001be110(0x295e90,auStack_f0,auStack_e0);
        uVar10 = (uint)(lVar8 == 0);
        if (lVar8 != 1) goto LAB_001c2490;
      }
      else {
LAB_001c2490:
        iVar13 = iVar9;
        if ((uVar11 & 4) == 0) {
          iVar13 = iVar12;
        }
        iVar6 = iVar9;
        if ((uVar11 & 1) == 0) {
          iVar6 = iVar12;
        }
        iVar1 = iVar9;
        if ((uVar11 & 2) == 0) {
          iVar1 = iVar12;
        }
        FUN_001c2188(param_1,&fStack_100,param_3 + iVar6,param_4 + iVar1,iStack_bc + iVar13,
                     iStack_b8 + 1,uVar10);
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 8);
  }
  return;
}

