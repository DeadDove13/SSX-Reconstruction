/* Ghidra pseudocode. PS2 address: 001a1d88. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a1d88(float param_1,float param_2,float param_3,undefined8 param_4,short *param_5)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong *puVar7;
  undefined1 auVar8 [12];
  long lVar9;
  int iVar10;
  ulong *puVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_130 [12];
  float fStack_124;
  undefined1 auStack_120 [12];
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_e4;
  
  iVar10 = (int)param_4;
  fVar17 = param_3 * *(float *)(iVar10 + 0x18);
  param_3 = param_3 * *(float *)(iVar10 + 0x1c);
  FUN_0011ed48(0x295e90,3);
  FUN_0011ecd8(0x295e90,*(undefined4 *)(iVar10 + 0x30),1);
  puVar7 = DAT_00292808;
  fVar19 = 1.0 / (float)*(int *)(iVar10 + 0x2c);
  param_1 = param_1 + (float)*(int *)(iVar10 + 0x10) * fVar17;
  param_2 = param_2 + (float)*(int *)(iVar10 + 0x14) * param_3;
  fVar18 = 1.0 / (float)*(int *)(iVar10 + 0x28);
  if (DAT_00292770 == 0) {
    DAT_00292770 = 1;
    auVar20._4_12_ = auRam002926d4;
    auVar20._0_4_ = DAT_002926d0;
    auVar20 = _lqc2(auVar20);
    auVar21._4_4_ = DAT_002926e4;
    auVar21._0_4_ = _DAT_002926e0;
    auVar21._8_8_ = uRam002926e8;
    auVar21 = _lqc2(auVar21);
    auVar22 = _lqc2(_DAT_002926f0);
    auVar23 = _lqc2(_DAT_00292700);
    auVar24 = _lqc2(_DAT_00292690);
    auVar25 = _lqc2(_DAT_002926a0);
    auVar26 = _lqc2(_DAT_002926b0);
    auVar27 = _lqc2(_DAT_002926c0);
    _vmulabc(auVar20,auVar24);
    _vmaddabc(auVar21,auVar24);
    _vmaddabc(auVar22,auVar24);
    auVar24 = _vmaddbc(auVar23,auVar24);
    _vmulabc(auVar20,auVar25);
    _vmaddabc(auVar21,auVar25);
    _vmaddabc(auVar22,auVar25);
    auVar25 = _vmaddbc(auVar23,auVar25);
    _vmulabc(auVar20,auVar26);
    _vmaddabc(auVar21,auVar26);
    _vmaddabc(auVar22,auVar26);
    auVar26 = _vmaddbc(auVar23,auVar26);
    _vmulabc(auVar20,auVar27);
    _vmaddabc(auVar21,auVar27);
    _vmaddabc(auVar22,auVar27);
    auVar23 = _vmaddbc(auVar23,auVar27);
    auVar20 = _sqc2(auVar24);
    auVar21 = _sqc2(auVar25);
    auVar22 = _sqc2(auVar26);
    auVar23 = _sqc2(auVar23);
    DAT_00292730 = auVar20._0_8_;
    DAT_00292738 = auVar20._8_8_;
    DAT_00292740 = auVar21._0_8_;
    DAT_00292748 = auVar21._8_8_;
    DAT_00292750 = auVar22._0_8_;
    DAT_00292758 = auVar22._8_8_;
    DAT_00292760 = auVar23._0_8_;
    DAT_00292768 = auVar23._8_8_;
  }
  uVar12 = 0;
  puVar11 = DAT_00292808 + 10;
  if (*param_5 != 0) {
    fVar16 = 0.5;
    sVar3 = *param_5;
    while( true ) {
      lVar9 = FUN_001a07a8(param_4,sVar3);
      if (lVar9 != 0) {
        iVar10 = (int)lVar9;
        uVar4 = *(ushort *)(iVar10 + 4);
        uVar5 = *(ushort *)(iVar10 + 6);
        uVar12 = (ulong)((int)uVar12 + 1);
        bVar1 = *(byte *)(iVar10 + 2);
        bVar2 = *(byte *)(iVar10 + 3);
        fVar15 = (float)*(byte *)(iVar10 + 2) * fVar17 * fVar16;
        fVar14 = (float)*(byte *)(iVar10 + 3) * param_3 * fVar16;
        auVar22._8_8_ = DAT_00292738;
        auVar22._0_8_ = DAT_00292730;
        auVar20 = _lqc2(auVar22);
        auVar23._8_8_ = DAT_00292748;
        auVar23._0_8_ = DAT_00292740;
        auVar21 = _lqc2(auVar23);
        auVar24._8_8_ = DAT_00292758;
        auVar24._0_8_ = DAT_00292750;
        auVar22 = _lqc2(auVar24);
        auVar25._8_8_ = DAT_00292768;
        auVar25._0_8_ = DAT_00292760;
        auVar23 = _lqc2(auVar25);
        auVar26._4_4_ = param_2 + (float)(int)*(char *)(iVar10 + 10) * param_3 + fVar14;
        auVar26._0_4_ = param_1 + (float)(int)*(char *)(iVar10 + 9) * fVar17 + fVar15;
        auVar26._8_4_ = DAT_0028ad40;
        auVar26._12_4_ = 0x3f800000;
        auVar24 = _lqc2(auVar26);
        _vmulabc(auVar20,auVar24);
        _vmaddabc(auVar21,auVar24);
        _vmaddabc(auVar22,auVar24);
        auVar20 = _vmaddbc(auVar23,auVar24);
        auVar20 = _sqc2(auVar20);
        fStack_114 = auVar20._12_4_;
        auStack_130 = auVar20._0_12_;
        auVar8 = auStack_130;
        fStack_114 = 1.0 / fStack_114;
        auStack_130._0_4_ = auVar20._0_4_;
        auStack_130._4_4_ = auVar20._4_4_;
        uVar6 = auStack_130._4_4_;
        fVar13 = (float)auStack_130._0_4_ * fStack_114;
        fStack_124 = fStack_114;
        _auStack_130 = CONCAT412(fStack_124,auVar8);
        auStack_130._4_4_ = (float)uVar6 * fStack_114;
        auStack_130._0_4_ = fVar13;
        auStack_120._4_4_ = DAT_002926e4 * fVar14 * fStack_114;
        auStack_120._0_4_ = DAT_002926d0 * fVar15 * fStack_114;
        stack0xfffffee8 = 0;
        auVar20 = _lqc2(_auStack_130);
        auVar21 = _lqc2(_auStack_120);
        auVar20 = _vsub(auVar20,auVar21);
        auVar20 = _sqc2(auVar20);
        fStack_f4 = auVar20._12_4_;
        auVar21 = _lqc2(_auStack_130);
        auVar22 = _lqc2(_auStack_120);
        auVar21 = _vadd(auVar21,auVar22);
        auVar21 = _sqc2(auVar21);
        fStack_e4 = auVar21._12_4_;
        fStack_108 = auVar20._8_4_;
        fStack_10c = auVar20._4_4_;
        fStack_110 = auVar20._0_4_;
        *puVar11 = (long)(int)((float)uVar4 * fVar19) | (long)(int)((float)uVar5 * fVar18) << 0x20;
        fStack_fc = auVar21._4_4_;
        fStack_f8 = auVar21._8_4_;
        puVar11[1] = (long)(int)fStack_110 | (long)(int)fStack_10c << 0x10 |
                     (long)(int)(fStack_108 * fStack_f4) << 0x20;
        fStack_100 = auVar21._0_4_;
        puVar11[2] = (long)(int)((float)((uint)uVar4 + (uint)bVar1) * fVar19) |
                     (long)(int)((float)((uint)uVar5 + (uint)bVar2) * fVar18) << 0x20;
        puVar11[3] = (long)(int)fStack_100 | (long)(int)fStack_fc << 0x10 |
                     (long)(int)(fStack_f8 * fStack_e4) << 0x20;
        puVar11 = puVar11 + 4;
        param_1 = param_1 + (float)(int)*(char *)(iVar10 + 8) * fVar17;
      }
      param_5 = param_5 + 1;
      if (*param_5 == 0) break;
      sVar3 = *param_5;
    }
  }
  fVar16 = DAT_0028ad38 * 128.0;
  fVar19 = DAT_0028ad3c * 128.0;
  iVar10 = (int)uVar12 * 2;
  fVar18 = DAT_0028ad30 * 128.0;
  fVar17 = DAT_0028ad34 * 128.0;
  puVar7[3] = ((long)(iVar10 + 3) | 0x50000000U) << 0x20;
  DAT_00292808 = puVar11 + 2;
  puVar7[1] = 0;
  puVar7[2] = 0;
  uVar6 = DAT_002913b8;
  *puVar7 = (long)(iVar10 + 4) | 0x10000000;
  puVar7[4] = 0x2400000000000001;
  puVar7[5] = 0x10;
  puVar7[6] = 0x56;
  puVar7[7] = (long)(int)fVar17 | 0x3f80000000000000U |
              (long)(int)fVar19 << 0x10 | (long)(int)fVar16 << 8 | (long)(int)fVar18 << 0x18;
  puVar7[8] = uVar12 | 0x4400000000008000;
  puVar7[9] = 0x5252;
  FUN_001d39e8(uVar6,puVar7,puVar11,0);
  return;
}

