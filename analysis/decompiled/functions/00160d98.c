/* Ghidra pseudocode. PS2 address: 00160d98. Not validated source. */

undefined8 FUN_00160d98(int param_1,float *param_2,int param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int *piVar5;
  float fVar6;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined *puVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined1 auStack_130 [12];
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  param_2[0xc] = 0.0;
  fVar30 = DAT_002c25e0;
  piVar3 = *(int **)(param_1 + 0x118);
  fStack_1a0 = 0.0;
  fStack_19c = 0.0;
  fStack_198 = 0.0;
  if (piVar3[0x31] == 0) goto LAB_001618f8;
  bVar1 = false;
  fStack_18c = (float)piVar3[0x32];
  if ((*piVar3 == 1) && (iVar2 = *(int *)(piVar3[1] * 0x20 + param_3), iVar2 != 0)) {
    fStack_18c = fStack_18c + (float)piVar3[0x33] * *(float *)(iVar2 + 0xa8);
  }
  fStack_190 = 0.0;
  fStack_18c = -fStack_18c;
  fVar27 = 0.0;
  fVar9 = 0.0;
  fStack_19c = fStack_18c + 0.0;
  fVar6 = 0.0;
  fStack_1a0 = 0.0;
  fStack_198 = 0.0;
  fStack_188 = 0.0;
  fStack_180 = 1.0;
  fStack_17c = 0.0;
  fStack_178 = 0.0;
  fStack_174 = 0.0;
  fStack_170 = 1.0;
  piVar3 = *(int **)(param_1 + 0x118);
  fStack_16c = 0.0;
  fStack_168 = 0.0;
  fStack_164 = 0.0;
  fStack_160 = 1.0;
  fVar32 = (float)piVar3[0x3f];
  if (piVar3[0x3d] == 1) {
    if (*piVar3 == 1) {
      piVar5 = (int *)(piVar3[1] * 0x20 + param_3);
      if (*piVar5 != 0) {
        param_2[9] = (float)piVar5[2];
        param_2[0xc] = 1.4013e-45;
        param_2[10] = (float)piVar5[3];
        param_2[0xb] = (float)piVar5[4];
        fVar8 = (float)piVar5[4];
        puVar29 = (undefined *)
                  SQRT((float)piVar5[2] * (float)piVar5[2] + (float)piVar5[3] * (float)piVar5[3]);
        if ((float)puVar29 <= fVar30) {
          piVar3 = *(int **)(param_1 + 0x118);
          fStack_1a0 = fVar9;
          fStack_198 = fVar6;
          goto LAB_00161018;
        }
        if (fVar8 == 0.0) {
          fVar30 = fVar9;
          fVar27 = fVar6;
          if (((float)puVar29 != 0.0) &&
             (bVar1 = (float)puVar29 < 0.0, puVar29 = DAT_002c25e8, fVar30 = fStack_1a0,
             fVar27 = fStack_198, bVar1)) {
            puVar29 = PTR_DAT_002c25e4;
            fVar30 = fVar9;
            fVar27 = fVar6;
          }
        }
        else {
          fStack_1a0 = fVar9;
          fStack_198 = fVar6;
          puVar7 = (undefined *)FUN_00218510((float)puVar29 / fVar8);
          if (fVar8 < fVar27) {
            if (fVar27 < (float)puVar29) {
              puVar7 = (undefined *)((float)puVar7 + DAT_002c25ec);
            }
            else {
              puVar7 = (undefined *)((float)puVar7 - DAT_002c25f0);
            }
          }
          piVar3 = *(int **)(param_1 + 0x118);
          puVar29 = puVar7;
          fVar30 = fStack_1a0;
          fVar27 = fStack_198;
        }
        fStack_198 = fVar27;
        fStack_1a0 = fVar30;
        if (fVar8 < 0.0) {
          fVar30 = (float)piVar3[0x44];
        }
        else {
          fVar30 = (float)piVar3[0x45];
        }
        fVar32 = fVar32 + (DAT_002c25f4 - (float)puVar29) / fVar30;
        fVar30 = fVar32;
        fVar9 = fStack_1a0;
        fVar6 = fStack_198;
        if ((piVar3[0x41] != 0) && (fVar30 = (float)piVar3[0x42], fVar30 <= fVar32)) {
          fVar30 = (float)piVar3[0x43];
          bVar1 = true;
          if (fVar32 <= fVar30) goto LAB_00161014;
        }
        bVar1 = true;
        fVar32 = fVar30;
      }
      goto LAB_00161014;
    }
    piVar3 = *(int **)(param_1 + 0x118);
    fStack_1a0 = fVar9;
    fStack_198 = fVar6;
  }
  else {
LAB_00161014:
    fStack_198 = fVar6;
    fStack_1a0 = fVar9;
    piVar3 = *(int **)(param_1 + 0x118);
  }
LAB_00161018:
  if ((((piVar3[0x3e] == 1) && (*piVar3 == 1)) &&
      (iVar2 = *(int *)(piVar3[1] * 0x20 + param_3), iVar2 != 0)) && (piVar3[0xb] != -1)) {
    iVar2 = piVar3[0xb] * 0x40 + iVar2;
    auVar36 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x7630));
    auVar37 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x7640));
    auVar38 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x7650));
    auVar39 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x7660));
    auVar40 = _lqc2(ZEXT816(0x42c8000000000000));
    _vmulabc(auVar36,auVar40);
    _vmaddabc(auVar37,auVar40);
    _vmaddabc(auVar38,auVar40);
    auVar36 = _vmaddbc(auVar39,auVar40);
    _auStack_130 = _sqc2(auVar36);
    fStack_150 = auStack_130._0_4_;
    fStack_14c = auStack_130._4_4_;
    fStack_138 = (float)auStack_130._8_4_;
    fStack_134 = fStack_124;
    fStack_148 = (float)auStack_130._8_4_;
    fStack_144 = fStack_124;
    fVar30 = SQRT(fStack_150 * fStack_150 + fStack_14c * fStack_14c);
    fStack_140 = fStack_150;
    fStack_13c = fStack_14c;
    if (fVar30 == 0.0) {
      fVar9 = (float)auStack_130._8_4_;
      if ((float)auStack_130._8_4_ == 0.0) goto LAB_0016114c;
      if (0.0 <= (float)auStack_130._8_4_) {
        fVar32 = fVar32 + DAT_002c25fc;
      }
      else {
        fVar32 = fVar32 + (float)PTR_DAT_002c25f8;
      }
    }
    else {
      fVar6 = (float)auStack_130._8_4_;
      fVar9 = (float)FUN_00218510((float)auStack_130._8_4_ / fVar30);
      if (fVar30 < 0.0) {
        if (0.0 < fVar6) {
          fVar9 = fVar9 + DAT_002c2600;
        }
        else {
          fVar9 = fVar9 - DAT_002c2604;
        }
      }
LAB_0016114c:
      fVar32 = fVar32 + fVar9;
    }
    bVar1 = true;
  }
  if (((bVar1) && (param_4 == 0)) &&
     ((*(int *)(*(int *)(param_1 + 0x118) + 0x10) == 1 &&
      (fVar30 = *(float *)(*(int *)(param_1 + 0x118) + 0x14), fVar30 != 0.0)))) {
    fVar32 = param_2[0x14] + (fVar32 - param_2[0x14]) / fVar30;
  }
  param_2[0x14] = fVar32;
  fStack_190 = 1.0;
  fStack_18c = 0.0;
  bVar1 = false;
  fStack_188 = 0.0;
  FUN_00218128(-fVar32,&fStack_c0,&fStack_bc);
  fVar32 = fStack_168;
  fVar30 = DAT_002c2608;
  fVar9 = 1.0 - fStack_bc;
  fVar6 = fVar9 * fStack_190;
  fVar27 = fVar9 * fStack_18c;
  fVar9 = fVar9 * fStack_188;
  fStack_e8 = fStack_178;
  fStack_dc = fStack_16c;
  fStack_f0 = fStack_180;
  fStack_ec = fStack_17c;
  fStack_108 = fVar6 * fStack_188 - fStack_c0 * fStack_18c;
  fStack_114 = fVar6 * fStack_18c + fStack_c0 * fStack_188;
  fStack_d0 = fStack_160;
  fStack_110 = fVar27 * fStack_18c + fStack_bc;
  fStack_e4 = fStack_174;
  fStack_104 = fVar27 * fStack_188 + fStack_c0 * fStack_190;
  fStack_10c = fVar9 * fStack_18c - fStack_c0 * fStack_190;
  fStack_11c = fVar27 * fStack_190 - fStack_c0 * fStack_188;
  fStack_e0 = fStack_170;
  fStack_d8 = fStack_168;
  fVar24 = fStack_170 * fStack_110;
  fVar20 = fStack_17c * fStack_114;
  fVar16 = fStack_178 * fStack_108;
  fStack_d4 = fStack_164;
  fVar27 = fStack_16c * fStack_104;
  fStack_120 = fVar6 * fStack_190 + fStack_bc;
  fStack_118 = fVar9 * fStack_190 + fStack_c0 * fStack_18c;
  fStack_100 = fVar9 * fStack_188 + fStack_bc;
  fVar22 = fStack_174 * fStack_11c;
  fVar8 = fStack_178 * fStack_120;
  fVar25 = fStack_16c * fStack_11c;
  fVar10 = fStack_180 * fStack_120;
  fVar12 = fStack_170 * fStack_11c;
  fVar18 = fStack_178 * fStack_114;
  fVar6 = fStack_17c * fStack_120;
  fVar34 = fStack_164 * fStack_10c;
  fVar21 = fStack_16c * fStack_110;
  fVar14 = fStack_180 * fStack_114;
  fVar15 = fStack_174 * fStack_110;
  fVar26 = fStack_160 * fStack_100;
  fVar17 = fStack_180 * fStack_108;
  fVar19 = fStack_17c * fStack_108;
  fVar23 = fStack_160 * fStack_118;
  fVar13 = fStack_168 * fStack_118;
  fVar28 = fStack_160 * fStack_10c;
  fVar11 = fStack_168 * fStack_10c;
  fVar9 = fStack_164 * fStack_118;
  fVar31 = fStack_174 * fStack_104;
  iVar2 = *(int *)(param_1 + 0x118);
  fVar35 = fStack_170 * fStack_104;
  fStack_160 = 1.0;
  fVar33 = fStack_164 * fStack_100;
  fStack_180 = 1.0;
  fStack_17c = 0.0;
  fStack_178 = 0.0;
  fStack_174 = 0.0;
  fStack_170 = 1.0;
  fStack_16c = 0.0;
  fStack_168 = 0.0;
  fStack_164 = 0.0;
  fVar9 = (fVar6 + fVar12 + fVar9) * fStack_1a0;
  fVar32 = (fVar17 + fVar31 + fVar32 * fStack_100) * fStack_198;
  fVar6 = (fVar19 + fVar35 + fVar33) * fStack_198;
  fStack_198 = (fVar8 + fVar25 + fVar23) * fStack_1a0 + (fVar18 + fVar21 + fVar28) * fStack_19c +
               (fVar16 + fVar27 + fVar26) * fStack_198;
  fStack_1a0 = (fVar10 + fVar22 + fVar13) * fStack_1a0 + (fVar14 + fVar15 + fVar11) * fStack_19c +
               fVar32;
  fStack_19c = fVar9 + (fVar20 + fVar24 + fVar34) * fStack_19c + fVar6;
  fVar32 = *(float *)(iVar2 + 0xd8);
  fStack_190 = fStack_1a0;
  fStack_18c = fStack_19c;
  fStack_188 = fStack_198;
  fStack_150 = fStack_1a0;
  fStack_14c = fStack_19c;
  fStack_148 = fStack_198;
  if ((*(int *)(iVar2 + 0xdc) == 1) &&
     (*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) * 0x20 + param_3) + 0x394) + 0x28) != 0)) {
    fVar32 = (float)FUN_0015bec0(DAT_002c2608,fVar32);
    fVar32 = fVar32 + fVar30;
  }
  piVar3 = *(int **)(param_1 + 0x118);
  if (piVar3[0x34] == 1) {
    if (*piVar3 == 1) {
      piVar3 = (int *)(piVar3[1] * 0x20 + param_3);
      if (*piVar3 == 0) {
        piVar3 = *(int **)(param_1 + 0x118);
      }
      else {
        fVar9 = (float)piVar3[3];
        fVar30 = (float)piVar3[2];
        if (fVar9 == 0.0) {
          if (fVar30 == 0.0) goto LAB_00161504;
          if (0.0 <= fVar30) {
            fVar30 = -DAT_002c2610;
          }
          else {
            fVar30 = -(float)PTR_DAT_002c260c;
          }
        }
        else {
          fVar6 = fVar30;
          fVar30 = (float)FUN_00218510(fVar30 / fVar9);
          if (fVar9 < 0.0) {
            if (0.0 < fVar6) {
              fVar30 = fVar30 + DAT_002c2614;
            }
            else {
              fVar30 = fVar30 - DAT_002c2618;
            }
          }
LAB_00161504:
          fVar30 = -fVar30;
        }
        fVar32 = fVar32 + fVar30;
        bVar1 = true;
        if (fVar32 < 0.0) {
          fVar32 = fVar32 + DAT_002c261c;
        }
        piVar3 = *(int **)(param_1 + 0x118);
      }
    }
    iVar2 = piVar3[0x35];
  }
  else {
    iVar2 = piVar3[0x35];
  }
  if ((((iVar2 == 1) && (*piVar3 == 1)) &&
      (iVar2 = *(int *)(piVar3[1] * 0x20 + param_3), iVar2 != 0)) && (piVar3[0xb] != -1)) {
    iVar2 = piVar3[0xb] * 0x40 + iVar2;
    auVar36 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x7630));
    auVar37 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x7640));
    auVar38 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x7650));
    auVar39 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x7660));
    auVar40 = _lqc2(ZEXT816(0x42c8000000000000));
    _vmulabc(auVar36,auVar40);
    _vmaddabc(auVar37,auVar40);
    _vmaddabc(auVar38,auVar40);
    auVar36 = _vmaddbc(auVar39,auVar40);
    _auStack_130 = _sqc2(auVar36);
    fVar30 = auStack_130._0_4_;
    fVar9 = auStack_130._4_4_;
    fStack_138 = (float)auStack_130._8_4_;
    fStack_134 = fStack_124;
    fStack_148 = (float)auStack_130._8_4_;
    fStack_144 = fStack_124;
    fStack_150 = fVar30;
    fStack_14c = fVar9;
    fStack_140 = fVar30;
    fStack_13c = fVar9;
    if (fVar9 == 0.0) {
      if (fVar30 == 0.0) goto LAB_0016164c;
      if (0.0 <= fVar30) {
        fVar32 = fVar32 - DAT_002c2624;
      }
      else {
        fVar32 = fVar32 - (float)PTR_DAT_002c2620;
      }
    }
    else {
      fVar6 = fVar30;
      fVar30 = (float)FUN_00218510(fVar30 / fVar9);
      if (fVar9 < 0.0) {
        if (0.0 < fVar6) {
          fVar30 = fVar30 + DAT_002c2628;
        }
        else {
          fVar30 = fVar30 - DAT_002c262c;
        }
      }
LAB_0016164c:
      fVar32 = fVar32 - fVar30;
    }
    bVar1 = true;
  }
  if (bVar1) {
    if (param_4 == 0) {
      if (*(int *)(*(int *)(param_1 + 0x118) + 0x10) == 1) {
        if (*(float *)(*(int *)(param_1 + 0x118) + 0x14) == 0.0) {
          fVar30 = -fVar32;
        }
        else {
          fVar30 = (float)FUN_0015bec0(fVar32,param_2[0x13]);
          fVar32 = param_2[0x13] + fVar30 / *(float *)(*(int *)(param_1 + 0x118) + 0x14);
          fVar30 = -fVar32;
        }
      }
      else {
        fVar30 = -fVar32;
      }
    }
    else {
      fVar30 = -fVar32;
    }
  }
  else {
    fVar30 = -fVar32;
  }
  param_2[0x13] = fVar32;
  fStack_188 = 1.0;
  fStack_190 = 0.0;
  fStack_18c = 0.0;
  FUN_00218128(fVar30,&fStack_b8,&fStack_b4);
  fVar27 = 1.0 - fStack_b4;
  fVar30 = fVar27 * fStack_190;
  fVar9 = fVar27 * fStack_18c;
  fStack_120 = fStack_180;
  fVar27 = fVar27 * fStack_188;
  fStack_114 = fStack_174;
  fStack_108 = fStack_168;
  fStack_138 = fVar30 * fStack_188 - fStack_b8 * fStack_18c;
  fStack_11c = fStack_17c;
  fStack_134 = fVar9 * fStack_188 + fStack_b8 * fStack_190;
  fStack_118 = fStack_178;
  fVar6 = fVar9 * fStack_190 - fStack_b8 * fStack_188;
  fStack_110 = fStack_170;
  fVar32 = fVar30 * fStack_190 + fStack_b4;
  fStack_10c = fStack_16c;
  fStack_104 = fStack_164;
  fStack_100 = fStack_160;
  fStack_144 = fVar30 * fStack_18c + fStack_b8 * fStack_188;
  fStack_140 = fVar9 * fStack_18c + fStack_b4;
  fVar10 = fStack_174 * fVar6;
  fVar8 = fStack_174 * fStack_134;
  fStack_b4 = fVar27 * fStack_188 + fStack_b4;
  fStack_13c = fVar27 * fStack_18c - fStack_b8 * fStack_190;
  fVar9 = fVar27 * fStack_190 + fStack_b8 * fStack_18c;
  auStack_130._0_4_ = fStack_b4;
  fVar30 = fStack_170 * fVar6;
  fVar11 = fStack_168 * fVar9;
  fVar27 = fStack_164 * fVar9;
  fVar6 = fStack_16c * fVar6;
  fStack_174 = fStack_180 * fStack_144 + fStack_174 * fStack_140 + fStack_168 * fStack_13c;
  fStack_168 = fStack_180 * fStack_138 + fVar8 + fStack_168 * fStack_b4;
  fVar9 = fStack_160 * fVar9;
  fVar8 = fStack_16c * fStack_134;
  fVar12 = fStack_170 * fStack_134;
  fStack_170 = fStack_17c * fStack_144 + fStack_170 * fStack_140 + fStack_164 * fStack_13c;
  fStack_16c = fStack_178 * fStack_144 + fStack_16c * fStack_140 + fStack_160 * fStack_13c;
  fStack_160 = fStack_178 * fStack_138 + fVar8 + fStack_160 * fStack_b4;
  fStack_164 = fStack_17c * fStack_138 + fVar12 + fStack_164 * fStack_b4;
  fVar30 = (fStack_17c * fVar32 + fVar30 + fVar27) * fStack_1a0;
  fVar27 = fStack_168 * fStack_198;
  fVar8 = fStack_164 * fStack_198;
  fStack_198 = (fStack_178 * fVar32 + fVar6 + fVar9) * fStack_1a0 + fStack_16c * fStack_19c +
               fStack_160 * fStack_198;
  fStack_1a0 = (fStack_180 * fVar32 + fVar10 + fVar11) * fStack_1a0 + fStack_174 * fStack_19c +
               fVar27;
  fStack_19c = fVar30 + fStack_170 * fStack_19c + fVar8;
  fStack_150 = fStack_1a0;
  fStack_14c = fStack_19c;
  fStack_148 = fStack_198;
LAB_001618f8:
  piVar3 = *(int **)(param_1 + 0x118);
  fStack_1a0 = fStack_1a0 + (float)piVar3[0xe];
  fStack_19c = fStack_19c + (float)piVar3[0x19];
  fStack_198 = fStack_198 + (float)piVar3[0x24];
  fStack_190 = 0.0;
  fStack_18c = 0.0;
  fStack_188 = 0.0;
  if (*piVar3 != 0) {
    iVar2 = piVar3[1] * 0x20 + param_3;
    fStack_190 = *(float *)(iVar2 + 0x14);
    fStack_1a0 = fStack_1a0 + fStack_190;
    fStack_18c = *(float *)(iVar2 + 0x18);
    fStack_19c = fStack_19c + fStack_18c;
    fStack_188 = *(float *)(iVar2 + 0x1c);
    fStack_198 = fStack_198 + fStack_188;
    if (piVar3[10] != 0) {
      piVar5 = (int *)(piVar3[1] * 0x20 + param_3);
      iVar2 = *piVar5;
      if (iVar2 != 0) {
        if (piVar3[0xb] == -1) {
          fStack_170 = *(float *)(iVar2 + 0x75e0);
          fStack_16c = *(float *)(iVar2 + 0x75e4);
          fStack_168 = *(float *)(iVar2 + 0x75e8);
          fStack_164 = *(float *)(iVar2 + 0x75ec);
          fStack_1a0 = fStack_1a0 + (fStack_170 - (float)piVar5[5]);
          fStack_198 = fStack_198 + (fStack_168 - (float)piVar5[7]);
          fStack_19c = fStack_19c + (fStack_16c - (float)piVar5[6]);
        }
        else {
          iVar2 = piVar3[0xb] * 0x40 + iVar2;
          fStack_174 = *(float *)(iVar2 + 0x766c);
          fStack_1a0 = (fStack_1a0 + *(float *)(iVar2 + 0x7660)) - (float)piVar5[5];
          fStack_19c = (fStack_19c + *(float *)(iVar2 + 0x7664)) - (float)piVar5[6];
          fStack_198 = (fStack_198 + *(float *)(iVar2 + 0x7668)) - (float)piVar5[7];
        }
      }
    }
  }
  if (piVar3[6] == 0) {
    param_2[0xe] = 0.0;
  }
  else {
    fVar30 = (float)piVar3[7];
    param_2[0xe] = 1.4013e-45;
    param_2[0xf] = fVar30;
  }
  if (piVar3[8] == 0) {
    param_2[0x10] = 0.0;
  }
  else {
    fVar30 = (float)piVar3[9];
    param_2[0x10] = 1.4013e-45;
    param_2[0x11] = fVar30;
  }
  uVar4 = 0;
  if (piVar3[0x31] != 0) {
    fStack_180 = fStack_190;
    fStack_17c = fStack_18c;
    fStack_178 = fStack_188;
    uVar4 = FUN_00161ed8(piVar3[0x32],&fStack_1a0,&fStack_180);
  }
  *param_2 = fStack_1a0;
  param_2[2] = fStack_198;
  param_2[1] = fStack_19c;
  return uVar4;
}

