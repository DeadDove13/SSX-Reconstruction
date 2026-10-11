/* Ghidra pseudocode. PS2 address: 0021ed18. Not validated source. */

float FUN_0021ed18(int param_1,undefined8 param_2,undefined4 *param_3,undefined1 (*param_4) [16])

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined1 (*pauVar8) [16];
  undefined4 uVar11;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [12];
  undefined4 uStack_174;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [64];
  float fStack_f0;
  int iStack_ec;
  int iStack_e8;
  int *piStack_e4;
  undefined1 (*pauStack_e0) [16];
  int *piStack_dc;
  undefined4 *puStack_d8;
  undefined1 (*pauStack_d4) [16];
  undefined4 *puStack_d0;
  
  fVar28 = DAT_002c3f18;
  iStack_e8 = (int)*(short *)param_4[0xf];
  if (((iStack_e8 == 3) || (iStack_e8 == 1)) || (iStack_e8 == 2)) {
    piStack_e4 = *(int **)(*(int *)(param_4[0xc] + 0xc) * 8 + *(int *)(param_1 + 0x18));
    iVar23 = (int)param_2;
    fVar27 = 0.0;
    iStack_ec = param_1;
    pauStack_e0 = param_4;
    fVar26 = (float)(**(code **)(*(int *)(iVar23 + 0x40) + 0x1c))
                              (iVar23 + *(short *)(*(int *)(iVar23 + 0x40) + 0x18));
    if ((float)piStack_e4[3] == fVar27) {
      uStack_210 = *(undefined8 *)*param_4;
      uVar21 = *(undefined8 *)param_4[3];
      auStack_1a0._0_12_ = *(undefined1 (*) [12])param_4[3];
      uStack_208 = (undefined4)*(undefined8 *)(*param_4 + 8);
      uStack_204 = (undefined4)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
      uStack_200 = (undefined4)*(undefined8 *)param_4[1];
      uStack_1fc = (undefined4)((ulong)*(undefined8 *)param_4[1] >> 0x20);
      uStack_1f8 = (undefined4)*(undefined8 *)(param_4[1] + 8);
      uStack_1f4 = (undefined4)((ulong)*(undefined8 *)(param_4[1] + 8) >> 0x20);
      uStack_1f0 = (undefined4)*(undefined8 *)param_4[2];
      uStack_1ec = (undefined4)((ulong)*(undefined8 *)param_4[2] >> 0x20);
      uStack_1e8 = (undefined4)*(undefined8 *)(param_4[2] + 8);
      uStack_1e4 = (undefined4)((ulong)*(undefined8 *)(param_4[2] + 8) >> 0x20);
      uStack_1e0 = (undefined4)uVar21;
      uStack_1dc = (undefined4)((ulong)uVar21 >> 0x20);
      uStack_1d8 = (undefined4)*(undefined8 *)(param_4[3] + 8);
      uStack_1d4 = (undefined4)((ulong)*(undefined8 *)(param_4[3] + 8) >> 0x20);
      uStack_1d0 = (undefined4)uStack_210;
      uStack_1c0 = (undefined4)((ulong)uStack_210 >> 0x20);
      uStack_1c4 = uStack_204;
      uStack_1bc = uStack_1fc;
      uStack_1b4 = uStack_1f4;
      uStack_1a8 = uStack_1e8;
      uStack_1a4 = uStack_1e4;
      auStack_1a0._12_4_ = uStack_1d4;
      uStack_1b0 = uStack_208;
      uStack_1cc = uStack_200;
      uStack_1c8 = uStack_1f0;
      uStack_1b8 = uStack_1ec;
      uStack_1ac = uStack_1f8;
      uStack_174 = uStack_1d4;
      auStack_180 = auStack_1a0._0_12_;
      FUN_001110c0(0xbf800000,auStack_190,auStack_180);
      auStack_190._12_4_ = fVar27;
      FUN_0021f788(auStack_180,&uStack_1d0,auStack_190);
      auStack_190._0_12_ = auStack_180;
      auStack_190._12_4_ = 0x3f800000;
      auStack_1a0._12_4_ = 0x3f800000;
      auStack_1a0._0_12_ = auStack_190._0_12_;
      (**(code **)(*(int *)(iVar23 + 0x40) + 0xc))
                (iVar23 + *(short *)(*(int *)(iVar23 + 0x40) + 8),&uStack_1d0);
    }
    iVar25 = 0;
    iVar24 = 0;
    piStack_dc = piStack_e4 + 9;
    if (0 < *piStack_e4) {
      pauStack_d4 = (undefined1 (*) [16])auStack_130;
      puStack_d8 = (undefined4 *)auStack_170;
      puStack_d0 = &uStack_1d0;
      do {
        iVar1 = piStack_dc[iVar24];
        if ((float)piStack_e4[3] != 0.0) {
          if (*(int *)(iVar1 + 0x1c) == 0) {
            uStack_210 = *(undefined8 *)*param_4;
            uVar21 = *(undefined8 *)(*param_4 + 8);
            uVar9 = *(undefined8 *)param_4[1];
            uVar14 = *(undefined8 *)(param_4[1] + 8);
            uVar19 = *(undefined8 *)param_4[2];
            uVar20 = *(undefined8 *)(param_4[2] + 8);
            auStack_1a0._0_8_ = *(undefined8 *)param_4[3];
            auStack_1a0._8_8_ = *(undefined8 *)(param_4[3] + 8);
            iVar22 = iVar25;
LAB_0021f2c8:
            uStack_208 = (undefined4)uVar21;
            uStack_204 = (undefined4)((ulong)uVar21 >> 0x20);
            uStack_200 = (undefined4)uVar9;
            uStack_1fc = (undefined4)((ulong)uVar9 >> 0x20);
            uStack_1f8 = (undefined4)uVar14;
            uStack_1f4 = (undefined4)((ulong)uVar14 >> 0x20);
            uStack_1f0 = (undefined4)uVar19;
            uStack_1ec = (undefined4)((ulong)uVar19 >> 0x20);
            uStack_1e8 = (undefined4)uVar20;
            uStack_1e4 = (undefined4)((ulong)uVar20 >> 0x20);
            uStack_1e0 = (undefined4)auStack_1a0._0_8_;
            uStack_1dc = (undefined4)((ulong)auStack_1a0._0_8_ >> 0x20);
            uStack_1d8 = (undefined4)auStack_1a0._8_8_;
            uStack_1d4 = (undefined4)((ulong)auStack_1a0._8_8_ >> 0x20);
          }
          else {
            iVar22 = *(int *)param_4[0x10];
            if ((iVar22 == 0) || ((*(int *)(iVar22 + 0x14) >> 8 & 1U) == 0)) {
              iVar22 = iVar25 + 1;
              pauVar8 = (undefined1 (*) [16])FUN_0021a900(piStack_e4,iVar25);
              auVar29 = _lqc2(*pauStack_e0);
              auVar30 = _lqc2(pauStack_e0[1]);
              auVar31 = _lqc2(pauStack_e0[2]);
              auVar32 = _lqc2(pauStack_e0[3]);
              auVar33 = _lqc2(*pauVar8);
              auVar34 = _lqc2(pauVar8[1]);
              auVar35 = _lqc2(pauVar8[2]);
              auVar36 = _lqc2(pauVar8[3]);
              _vmulabc(auVar29,auVar33);
              _vmaddabc(auVar30,auVar33);
              _vmaddabc(auVar31,auVar33);
              auVar33 = _vmaddbc(auVar32,auVar33);
              _vmulabc(auVar29,auVar34);
              _vmaddabc(auVar30,auVar34);
              _vmaddabc(auVar31,auVar34);
              auVar34 = _vmaddbc(auVar32,auVar34);
              _vmulabc(auVar29,auVar35);
              _vmaddabc(auVar30,auVar35);
              _vmaddabc(auVar31,auVar35);
              auVar35 = _vmaddbc(auVar32,auVar35);
              _vmulabc(auVar29,auVar36);
              _vmaddabc(auVar30,auVar36);
              _vmaddabc(auVar31,auVar36);
              auVar30 = _vmaddbc(auVar32,auVar36);
              auStack_190 = _sqc2(auVar33);
              auVar29 = _sqc2(auVar34);
              auStack_170 = _sqc2(auVar35);
              auStack_160 = _sqc2(auVar30);
              auStack_180._0_4_ = auVar29._0_4_;
              auStack_180._4_4_ = auVar29._4_4_;
              auStack_180._8_4_ = auVar29._8_4_;
              uStack_174 = auVar29._12_4_;
              *puStack_d0 = auStack_190._0_4_;
              puStack_d0[1] = auStack_190._4_4_;
              puStack_d0[2] = auStack_190._8_4_;
              puStack_d0[3] = auStack_190._12_4_;
              puStack_d0[4] = auStack_180._0_4_;
              puStack_d0[5] = auStack_180._4_4_;
              puStack_d0[6] = auStack_180._8_4_;
              puStack_d0[7] = uStack_174;
              puStack_d0[8] = auStack_170._0_4_;
              puStack_d0[9] = auStack_170._4_4_;
              puStack_d0[10] = auStack_170._8_4_;
              puStack_d0[0xb] = auStack_170._12_4_;
              puStack_d0[0xc] = auStack_160._0_4_;
              puStack_d0[0xd] = auStack_160._4_4_;
              puStack_d0[0xe] = auStack_160._8_4_;
              puStack_d0[0xf] = auStack_160._12_4_;
              uStack_210 = CONCAT44(uStack_1cc,uStack_1d0);
              uVar21 = CONCAT44(uStack_1c4,uStack_1c8);
              uVar9 = CONCAT44(uStack_1bc,uStack_1c0);
              uVar14 = CONCAT44(uStack_1b4,uStack_1b8);
              uVar19 = CONCAT44(uStack_1ac,uStack_1b0);
              uVar20 = CONCAT44(uStack_1a4,uStack_1a8);
              goto LAB_0021f2c8;
            }
            lVar10 = (**(code **)(*(int *)(iVar22 + 8) + 0x84))
                               (iVar22 + *(short *)(*(int *)(iVar22 + 8) + 0x80));
            if (lVar10 == 0) {
              uVar21 = FUN_00186198(*(undefined4 *)param_4[0x10],&uStack_1d0);
              iVar22 = iVar25 + 1;
              pauVar8 = (undefined1 (*) [16])FUN_0019e140(uVar21,iVar25);
              auVar29 = _lqc2(*pauStack_e0);
              auVar30 = _lqc2(pauStack_e0[1]);
              auVar31 = _lqc2(pauStack_e0[2]);
              auVar32 = _lqc2(pauStack_e0[3]);
              auVar33 = _lqc2(*pauVar8);
              auVar34 = _lqc2(pauVar8[1]);
              auVar35 = _lqc2(pauVar8[2]);
              auVar36 = _lqc2(pauVar8[3]);
              _vmulabc(auVar29,auVar33);
              _vmaddabc(auVar30,auVar33);
              _vmaddabc(auVar31,auVar33);
              auVar33 = _vmaddbc(auVar32,auVar33);
              _vmulabc(auVar29,auVar34);
              _vmaddabc(auVar30,auVar34);
              _vmaddabc(auVar31,auVar34);
              auVar34 = _vmaddbc(auVar32,auVar34);
              _vmulabc(auVar29,auVar35);
              _vmaddabc(auVar30,auVar35);
              _vmaddabc(auVar31,auVar35);
              auVar35 = _vmaddbc(auVar32,auVar35);
              _vmulabc(auVar29,auVar36);
              _vmaddabc(auVar30,auVar36);
              _vmaddabc(auVar31,auVar36);
              auVar30 = _vmaddbc(auVar32,auVar36);
              auStack_190 = _sqc2(auVar33);
              auVar29 = _sqc2(auVar34);
              auStack_170 = _sqc2(auVar35);
              auStack_160 = _sqc2(auVar30);
              auStack_180._0_4_ = auVar29._0_4_;
              auStack_180._4_4_ = auVar29._4_4_;
              auStack_180._8_4_ = auVar29._8_4_;
              uStack_174 = auVar29._12_4_;
              *puStack_d0 = auStack_190._0_4_;
              puStack_d0[1] = auStack_190._4_4_;
              puStack_d0[2] = auStack_190._8_4_;
              puStack_d0[3] = auStack_190._12_4_;
              puStack_d0[4] = auStack_180._0_4_;
              puStack_d0[5] = auStack_180._4_4_;
              puStack_d0[6] = auStack_180._8_4_;
              puStack_d0[7] = uStack_174;
              puStack_d0[8] = auStack_170._0_4_;
              puStack_d0[9] = auStack_170._4_4_;
              puStack_d0[10] = auStack_170._8_4_;
              puStack_d0[0xb] = auStack_170._12_4_;
              puStack_d0[0xc] = auStack_160._0_4_;
              puStack_d0[0xd] = auStack_160._4_4_;
              puStack_d0[0xe] = auStack_160._8_4_;
              puStack_d0[0xf] = auStack_160._12_4_;
              uStack_210 = CONCAT44(uStack_1cc,uStack_1d0);
              uVar21 = CONCAT44(uStack_1c4,uStack_1c8);
              uVar9 = CONCAT44(uStack_1bc,uStack_1c0);
              uVar14 = CONCAT44(uStack_1b4,uStack_1b8);
              uVar19 = CONCAT44(uStack_1ac,uStack_1b0);
              uVar20 = CONCAT44(uStack_1a4,uStack_1a8);
              goto LAB_0021f2c8;
            }
            iVar22 = *(int *)(*(int *)param_4[0x10] + 8);
            (**(code **)(iVar22 + 0xe4))(*(int *)param_4[0x10] + (int)*(short *)(iVar22 + 0xe0));
            uVar21 = FUN_00186198(*(undefined4 *)param_4[0x10]);
            iVar22 = iVar25 + 1;
            pauVar8 = (undefined1 (*) [16])FUN_0019e140(uVar21,iVar25);
            auVar29._4_4_ = uStack_1cc;
            auVar29._0_4_ = uStack_1d0;
            auVar29._8_4_ = uStack_1c8;
            auVar29._12_4_ = uStack_1c4;
            auVar29 = _lqc2(auVar29);
            auVar30._4_4_ = uStack_1bc;
            auVar30._0_4_ = uStack_1c0;
            auVar30._8_4_ = uStack_1b8;
            auVar30._12_4_ = uStack_1b4;
            auVar30 = _lqc2(auVar30);
            auVar31._4_4_ = uStack_1ac;
            auVar31._0_4_ = uStack_1b0;
            auVar31._8_4_ = uStack_1a8;
            auVar31._12_4_ = uStack_1a4;
            auVar31 = _lqc2(auVar31);
            auVar32 = _lqc2(auStack_1a0);
            auVar33 = _lqc2(*pauVar8);
            auVar34 = _lqc2(pauVar8[1]);
            auVar35 = _lqc2(pauVar8[2]);
            auVar36 = _lqc2(pauVar8[3]);
            _vmulabc(auVar29,auVar33);
            _vmaddabc(auVar30,auVar33);
            _vmaddabc(auVar31,auVar33);
            auVar33 = _vmaddbc(auVar32,auVar33);
            _vmulabc(auVar29,auVar34);
            _vmaddabc(auVar30,auVar34);
            _vmaddabc(auVar31,auVar34);
            auVar34 = _vmaddbc(auVar32,auVar34);
            _vmulabc(auVar29,auVar35);
            _vmaddabc(auVar30,auVar35);
            _vmaddabc(auVar31,auVar35);
            auVar35 = _vmaddbc(auVar32,auVar35);
            _vmulabc(auVar29,auVar36);
            _vmaddabc(auVar30,auVar36);
            _vmaddabc(auVar31,auVar36);
            auVar30 = _vmaddbc(auVar32,auVar36);
            auVar29 = _sqc2(auVar33);
            *pauStack_d4 = auVar29;
            auVar29 = _sqc2(auVar34);
            pauStack_d4[1] = auVar29;
            auVar29 = _sqc2(auVar35);
            pauStack_d4[2] = auVar29;
            auVar29 = _sqc2(auVar30);
            pauStack_d4[3] = auVar29;
            uVar21 = *(undefined8 *)*pauStack_d4;
            uVar15 = *(undefined4 *)(*pauStack_d4 + 8);
            uVar17 = *(undefined4 *)(*pauStack_d4 + 0xc);
            uVar7 = *(undefined4 *)pauStack_d4[1];
            uVar11 = *(undefined4 *)(pauStack_d4[1] + 4);
            uVar12 = *(undefined4 *)(pauStack_d4[1] + 8);
            uVar13 = *(undefined4 *)(pauStack_d4[1] + 0xc);
            *puStack_d8 = (int)uVar21;
            puStack_d8[1] = (int)((ulong)uVar21 >> 0x20);
            puStack_d8[2] = uVar15;
            puStack_d8[3] = uVar17;
            uVar15 = *(undefined4 *)pauStack_d4[2];
            uVar17 = *(undefined4 *)(pauStack_d4[2] + 4);
            uVar16 = *(undefined4 *)(pauStack_d4[2] + 8);
            uVar18 = *(undefined4 *)(pauStack_d4[2] + 0xc);
            puStack_d8[4] = uVar7;
            puStack_d8[5] = uVar11;
            puStack_d8[6] = uVar12;
            puStack_d8[7] = uVar13;
            uVar7 = *(undefined4 *)pauStack_d4[3];
            uVar11 = *(undefined4 *)(pauStack_d4[3] + 4);
            uVar12 = *(undefined4 *)(pauStack_d4[3] + 8);
            uVar13 = *(undefined4 *)(pauStack_d4[3] + 0xc);
            puStack_d8[8] = uVar15;
            puStack_d8[9] = uVar17;
            puStack_d8[10] = uVar16;
            puStack_d8[0xb] = uVar18;
            puStack_d8[0xc] = uVar7;
            puStack_d8[0xd] = uVar11;
            puStack_d8[0xe] = uVar12;
            puStack_d8[0xf] = uVar13;
            uStack_210 = auStack_170._0_8_;
            uStack_208 = auStack_170._8_4_;
            uStack_204 = auStack_170._12_4_;
            uStack_200 = auStack_160._0_4_;
            uStack_1fc = auStack_160._4_4_;
            uStack_1f8 = auStack_160._8_4_;
            uStack_1f4 = auStack_160._12_4_;
            uStack_1f0 = (undefined4)uStack_150;
            uStack_1ec = (undefined4)((ulong)uStack_150 >> 0x20);
            uStack_1e8 = (undefined4)uStack_148;
            uStack_1e4 = (undefined4)((ulong)uStack_148 >> 0x20);
            uStack_1e0 = (undefined4)uStack_140;
            uStack_1dc = (undefined4)((ulong)uStack_140 >> 0x20);
            uStack_1d8 = (undefined4)uStack_138;
            uStack_1d4 = (undefined4)((ulong)uStack_138 >> 0x20);
          }
          uStack_1d0 = (undefined4)uStack_210;
          uStack_1c0 = (undefined4)((ulong)uStack_210 >> 0x20);
          uStack_1c4 = uStack_204;
          uStack_1bc = uStack_1fc;
          uStack_1b4 = uStack_1f4;
          uStack_1a8 = uStack_1e8;
          uStack_1a4 = uStack_1e4;
          auStack_1a0._4_4_ = uStack_1dc;
          auStack_1a0._0_4_ = uStack_1e0;
          auStack_1a0._8_4_ = uStack_1d8;
          auStack_1a0._12_4_ = uStack_1d4;
          uStack_1b0 = uStack_208;
          uStack_1cc = uStack_200;
          uStack_1c8 = uStack_1f0;
          uStack_1b8 = uStack_1ec;
          uStack_1ac = uStack_1f8;
          auStack_180._8_4_ = uStack_1d8;
          auStack_180._0_8_ = auStack_1a0._0_8_;
          uStack_174 = uStack_1d4;
          FUN_001110c0(0xbf800000,auStack_190,auStack_180);
          auStack_190._12_4_ = 0;
          FUN_0021f788(auStack_180,&uStack_1d0,auStack_190);
          auStack_190._0_12_ = auStack_180;
          auStack_190._12_4_ = 0x3f800000;
          auStack_1a0._12_4_ = 0x3f800000;
          auStack_1a0._0_12_ = auStack_190._0_12_;
          if (iVar24 != 0) {
            (**(code **)(*(int *)(iVar23 + 0x40) + 0x14))
                      (iVar23 + *(short *)(*(int *)(iVar23 + 0x40) + 0x10));
          }
          (**(code **)(*(int *)(iVar23 + 0x40) + 0xc))
                    (iVar23 + *(short *)(*(int *)(iVar23 + 0x40) + 8),&uStack_1d0);
          iVar25 = iVar22;
        }
        iVar22 = 0;
        if (iStack_e8 == 2) {
          lVar10 = (**(code **)(*(int *)(iVar23 + 0x40) + 0x44))
                             (iVar23 + *(short *)(*(int *)(iVar23 + 0x40) + 0x40),iVar1,iVar1 + 0xc,
                              &uStack_1d0,&uStack_1c0,&fStack_f0);
        }
        else if (iStack_e8 == 3) {
          iVar22 = *(int *)(*(short *)(param_4[0xf] + 4) * 8 + *(int *)(iStack_ec + 0x2c)) +
                   iVar24 * 0x150;
          lVar10 = (**(code **)(*(int *)(iVar23 + 0x40) + 0x3c))
                             (iVar23 + *(short *)(*(int *)(iVar23 + 0x40) + 0x38),iVar22,&uStack_1d0
                              ,&uStack_1c0,&fStack_f0);
        }
        else {
          lVar10 = FUN_00220450(param_2,*(int *)(*(short *)(param_4[0xf] + 2) * 8 +
                                                *(int *)(iStack_ec + 0x34)) + iVar24 * 0x18,
                                *(uint *)(iVar1 + 0x20) & 1,&uStack_1d0,&uStack_1c0,&fStack_f0);
        }
        if ((lVar10 != 0) && (ABS(fStack_f0 - fVar26) < ABS(fVar28 - fVar26))) {
          auVar32._8_4_ = uStack_208;
          auVar32._0_8_ = uStack_210;
          auVar32._12_4_ = uStack_204;
          auVar29 = _lqc2(auVar32);
          auVar34._4_4_ = uStack_1fc;
          auVar34._0_4_ = uStack_200;
          auVar34._8_4_ = uStack_1f8;
          auVar34._12_4_ = uStack_1f4;
          auVar30 = _lqc2(auVar34);
          auVar36._4_4_ = uStack_1ec;
          auVar36._0_4_ = uStack_1f0;
          auVar36._8_4_ = uStack_1e8;
          auVar36._12_4_ = uStack_1e4;
          auVar31 = _lqc2(auVar36);
          auVar3._4_4_ = uStack_1dc;
          auVar3._0_4_ = uStack_1e0;
          auVar3._8_4_ = uStack_1d8;
          auVar3._12_4_ = uStack_1d4;
          auVar32 = _lqc2(auVar3);
          auVar5._4_4_ = uStack_1cc;
          auVar5._0_4_ = uStack_1d0;
          auVar5._8_4_ = uStack_1c8;
          auVar5._12_4_ = uStack_1c4;
          auVar33 = _lqc2(auVar5);
          _vmulabc(auVar29,auVar33);
          _vmaddabc(auVar30,auVar33);
          _vmaddabc(auVar31,auVar33);
          auVar29 = _vmaddbc(auVar32,auVar33);
          auVar29 = _sqc2(auVar29);
          auStack_1a0._0_4_ = auVar29._0_4_;
          auStack_1a0._4_4_ = auVar29._4_4_;
          auStack_1a0._8_4_ = auVar29._8_4_;
          auStack_1a0._12_4_ = auVar29._12_4_;
          param_3[4] = auStack_1a0._0_4_;
          param_3[5] = auStack_1a0._4_4_;
          param_3[6] = auStack_1a0._8_4_;
          param_3[7] = auStack_1a0._12_4_;
          auVar33._8_4_ = uStack_208;
          auVar33._0_8_ = uStack_210;
          auVar33._12_4_ = uStack_204;
          auVar29 = _lqc2(auVar33);
          auVar35._4_4_ = uStack_1fc;
          auVar35._0_4_ = uStack_200;
          auVar35._8_4_ = uStack_1f8;
          auVar35._12_4_ = uStack_1f4;
          auVar30 = _lqc2(auVar35);
          auVar2._4_4_ = uStack_1ec;
          auVar2._0_4_ = uStack_1f0;
          auVar2._8_4_ = uStack_1e8;
          auVar2._12_4_ = uStack_1e4;
          auVar31 = _lqc2(auVar2);
          auVar4._4_4_ = uStack_1dc;
          auVar4._0_4_ = uStack_1e0;
          auVar4._8_4_ = uStack_1d8;
          auVar4._12_4_ = uStack_1d4;
          auVar32 = _lqc2(auVar4);
          auVar6._4_4_ = uStack_1bc;
          auVar6._0_4_ = uStack_1c0;
          auVar6._8_4_ = uStack_1b8;
          auVar6._12_4_ = uStack_1b4;
          auVar33 = _lqc2(auVar6);
          _vmulabc(auVar29,auVar33);
          _vmaddabc(auVar30,auVar33);
          _vmaddabc(auVar31,auVar33);
          auVar29 = _vmaddbc(auVar32,auVar33);
          auStack_1a0 = _sqc2(auVar29);
          uStack_1b0 = auStack_1a0._0_4_;
          uStack_1ac = auStack_1a0._4_4_;
          uStack_1a8 = auStack_1a0._8_4_;
          uStack_1a4 = auStack_1a0._12_4_;
          param_3[8] = auStack_1a0._0_4_;
          param_3[9] = auStack_1a0._4_4_;
          param_3[10] = auStack_1a0._8_4_;
          param_3[0xb] = auStack_1a0._12_4_;
          if (*(short *)(param_4[0xf] + 0xe) == -1) {
            *param_3 = 1;
            param_3[0xd] = 0xffffffff;
          }
          else {
            if ((float)piStack_e4[3] == 0.0) {
              *param_3 = 0;
            }
            else {
              *param_3 = 2;
            }
            param_3[0xd] = (int)*(short *)(param_4[0xf] + 0xe);
          }
          param_3[0xe] = *(undefined4 *)param_4[0xc];
          param_3[0xc] = iVar22;
          fVar28 = fStack_f0;
          if (fVar26 < 0.0) {
            (**(code **)(*(int *)(iVar23 + 0x40) + 0x14))
                      (iVar23 + *(short *)(*(int *)(iVar23 + 0x40) + 0x10));
            return fStack_f0;
          }
        }
        iVar24 = iVar24 + 1;
      } while (iVar24 < *piStack_e4);
    }
    (**(code **)(*(int *)(iVar23 + 0x40) + 0x14))
              (iVar23 + *(short *)(*(int *)(iVar23 + 0x40) + 0x10));
    fVar26 = -1.0;
    if (fVar28 != DAT_002c3f1c) {
      fVar26 = fVar28;
    }
  }
  else {
    fVar26 = -1.0;
  }
  return fVar26;
}

