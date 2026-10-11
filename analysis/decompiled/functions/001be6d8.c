/* Ghidra pseudocode. PS2 address: 001be6d8. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001be6d8(undefined8 param_1,int *param_2,int param_3,undefined1 (*param_4) [16],
                 undefined8 *param_5,undefined1 (*param_6) [16],float *param_7)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined1 auVar7 [12];
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  float *pfVar12;
  ulong in_hi;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined1 in_vf0 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [8];
  int iStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  int *piStack_e0;
  int iStack_dc;
  undefined1 (*pauStack_d8) [16];
  float *pfStack_d4;
  int *piStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined1 (*pauStack_c4) [16];
  undefined1 (*pauStack_c0) [16];
  long lVar6;
  
  if ((param_2[1] & 1U) == 0) {
    uStack_cc = DAT_002913b8;
    piStack_e0 = param_2;
    iStack_dc = param_3;
    pauStack_d8 = param_6;
    pfStack_d4 = param_7;
    FUN_001c5148(0x2913b0,3,1);
    piStack_d0 = piStack_e0 + 9;
    iStack_c8 = 0;
    uVar8 = *(undefined8 *)*(undefined1 (*) [12])(piStack_e0 + 4);
    iVar13 = piStack_e0[6];
    auVar7 = *(undefined1 (*) [12])(piStack_e0 + 4);
    if (0 < *piStack_e0) {
      pauStack_c4 = (undefined1 (*) [16])auStack_170;
      fVar15 = 4096.0;
      pauStack_c0 = pauStack_d8;
      pfVar12 = pfStack_d4;
      do {
        iVar2 = *piStack_d0;
        lVar6 = ((long)iStack_dc | in_hi) + (long)(*(int *)(iVar2 + 0x24) * 0xc);
        puVar5 = (uint *)lVar6;
        in_hi = (ulong)(int)((ulong)lVar6 >> 0x20);
        FUN_001c5048(0x2913b0,(short)puVar5[1],1);
        uVar3 = *puVar5;
        if ((uVar3 & 1) == 0) {
          FUN_001c5310(0x2913b0,0,0);
        }
        else if ((uVar3 & 0x20) == 0) {
          if ((uVar3 & 0x10) != 0) {
            FUN_001c5310(0x2913b0,1,0);
          }
        }
        else {
          auVar21 = _lqc2(_DAT_002915b0);
          auVar24 = _lqc2(param_4[3]);
          auVar17 = _lqc2(_DAT_00291530);
          auVar18 = _lqc2(_DAT_00291540);
          auVar19 = _lqc2(_DAT_00291550);
          auVar20 = _lqc2(_DAT_00291560);
          _vmulabc(auVar17,auVar24);
          _vmaddabc(auVar18,auVar24);
          _vmaddabc(auVar19,auVar24);
          auVar17 = _vmaddbc(auVar20,auVar24);
          auVar17 = _vmulbc(auVar17,auVar21);
          auVar17 = _vmaxbc(auVar17,in_vf0);
          auVar17 = _vminibc(auVar17,auVar21);
          auVar17 = _vftoi0(auVar17);
          uVar16 = _vmtir(auVar17);
          uVar11 = _cfc2(uVar16);
          FUN_001c5310(0x2913b0,2,uVar11);
        }
        puVar4 = DAT_00292808;
        if (pfStack_d4 != (float *)0x0) {
          puVar4 = *(undefined8 **)(iVar2 + 0x34);
          fVar14 = *pfVar12;
          *puVar4 = 0x3000000005000001;
          puVar4[1] = (long)(int)(fVar14 * fVar15) | (long)(int)(pfVar12[1] * fVar15) << 0x20;
          puVar4 = DAT_00292808;
        }
        DAT_00292808 = puVar4 + 4;
        *puVar4 = 0x1000000c;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0x6c0b800000000000;
        puVar1 = DAT_00292808;
        if (pauStack_d8 == (undefined1 (*) [16])0x0) {
          iStack_168 = iVar13;
          *(undefined4 *)(*pauStack_c4 + 0xc) = 0x3f800000;
          puVar1 = DAT_00292808;
          auVar17 = _lqc2(*pauStack_c4);
          auVar18 = _lqc2(*param_4);
          auVar19 = _lqc2(param_4[1]);
          auVar20 = _lqc2(param_4[2]);
          auVar21 = _lqc2(param_4[3]);
          auVar18 = _vmulbc(auVar18,auVar17);
          auVar19 = _vmulbc(auVar19,auVar17);
          auVar20 = _vmulbc(auVar20,auVar17);
          auVar17 = _vmulbc(auVar21,auVar17);
          auStack_160 = _sqc2(auVar18);
          auStack_150 = _sqc2(auVar19);
          auStack_140 = _sqc2(auVar20);
          auStack_130 = _sqc2(auVar17);
          uStack_1a0 = auStack_150._0_8_;
          uStack_198 = auStack_150._8_8_;
          uStack_190 = auStack_140._0_8_;
          uStack_188 = auStack_140._8_8_;
          uStack_180 = auStack_130._0_8_;
          uStack_178 = auStack_130._8_8_;
          *DAT_00292808 = auStack_160._0_8_;
          puVar9 = DAT_00292808 + 1;
          DAT_00292808 = DAT_00292808 + 8;
          *puVar9 = auStack_160._8_8_;
          puVar1[2] = uStack_1a0;
          puVar1[3] = uStack_198;
          puVar1[4] = uStack_190;
          puVar1[5] = uStack_188;
          puVar1[6] = uStack_180;
          auStack_130._8_8_ = uStack_178;
          auStack_170 = (undefined1  [8])uVar8;
        }
        else {
          auVar17._12_4_ = 0x3f800000;
          auVar17._0_12_ = auVar7;
          auVar17 = _lqc2(auVar17);
          auVar18 = _lqc2(*pauStack_c0);
          auVar19 = _lqc2(pauStack_c0[1]);
          auVar20 = _lqc2(pauStack_c0[2]);
          auVar21 = _lqc2(pauStack_c0[3]);
          auVar18 = _vmulbc(auVar18,auVar17);
          auVar19 = _vmulbc(auVar19,auVar17);
          auVar20 = _vmulbc(auVar20,auVar17);
          auVar21 = _vmulbc(auVar21,auVar17);
          auVar17 = _sqc2(auVar18);
          auVar18 = _sqc2(auVar19);
          auVar19 = _sqc2(auVar20);
          auVar20 = _sqc2(auVar21);
          auVar21 = _lqc2(*param_4);
          auVar24 = _lqc2(param_4[1]);
          auVar22 = _lqc2(param_4[2]);
          auVar23 = _lqc2(param_4[3]);
          auVar17 = _lqc2(auVar17);
          auVar18 = _lqc2(auVar18);
          auVar19 = _lqc2(auVar19);
          auVar20 = _lqc2(auVar20);
          _vmulabc(auVar21,auVar17);
          _vmaddabc(auVar24,auVar17);
          _vmaddabc(auVar22,auVar17);
          auVar17 = _vmaddbc(auVar23,auVar17);
          _vmulabc(auVar21,auVar18);
          _vmaddabc(auVar24,auVar18);
          _vmaddabc(auVar22,auVar18);
          auVar18 = _vmaddbc(auVar23,auVar18);
          _vmulabc(auVar21,auVar19);
          _vmaddabc(auVar24,auVar19);
          _vmaddabc(auVar22,auVar19);
          auVar19 = _vmaddbc(auVar23,auVar19);
          _vmulabc(auVar21,auVar20);
          _vmaddabc(auVar24,auVar20);
          _vmaddabc(auVar22,auVar20);
          auVar20 = _vmaddbc(auVar23,auVar20);
          auStack_160 = _sqc2(auVar17);
          auStack_150 = _sqc2(auVar18);
          auStack_140 = _sqc2(auVar19);
          auStack_130 = _sqc2(auVar20);
          auStack_170 = (undefined1  [8])auStack_130._0_8_;
          _iStack_168 = auStack_130._8_8_;
          *DAT_00292808 = auStack_160._0_8_;
          puVar9 = DAT_00292808 + 1;
          DAT_00292808 = DAT_00292808 + 8;
          *puVar9 = auStack_160._8_8_;
          puVar1[2] = auStack_150._0_8_;
          puVar1[3] = auStack_150._8_8_;
          puVar1[4] = auStack_140._0_8_;
          puVar1[5] = auStack_140._8_8_;
          puVar1[6] = auStack_130._0_8_;
          auStack_120 = auStack_160;
          auStack_110 = auStack_150;
          auStack_100 = auStack_140;
          auStack_f0 = auStack_130;
        }
        puVar9[6] = auStack_130._8_8_;
        puVar9 = DAT_00292808;
        *DAT_00292808 = *param_5;
        pfVar12 = pfVar12 + 2;
        piStack_d0 = piStack_d0 + 1;
        puVar10 = DAT_00292808 + 0x10;
        iStack_c8 = iStack_c8 + 1;
        pauStack_c0 = pauStack_c0 + 4;
        DAT_00292808[1] = param_5[1];
        DAT_00292808[2] = param_5[2];
        DAT_00292808[3] = param_5[3];
        DAT_00292808[4] = param_5[4];
        DAT_00292808[5] = param_5[5];
        DAT_00292808[6] = param_5[8];
        DAT_00292808[7] = param_5[9];
        DAT_00292808[8] = param_5[10];
        DAT_00292808[9] = param_5[0xb];
        DAT_00292808[10] = param_5[0xc];
        DAT_00292808[0xb] = param_5[0xd];
        DAT_00292808[0xc] = param_5[0xe];
        DAT_00292808[0xd] = param_5[0xf];
        uVar3 = *(uint *)(iVar2 + 0x30);
        puVar1 = DAT_00292808 + 0xf;
        DAT_00292808 = DAT_00292808 + 0x12;
        *puVar1 = 0;
        puVar9[0xe] = (ulong)uVar3 << 0x20 | 0x50000000;
        FUN_001d39e8(uStack_cc,puVar4,puVar10,0);
      } while (iStack_c8 < *piStack_e0);
    }
    FUN_001c5310(0x2913b0,0,0);
  }
  return;
}

