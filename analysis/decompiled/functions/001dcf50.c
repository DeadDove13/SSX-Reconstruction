/* Ghidra pseudocode. PS2 address: 001dcf50. Not validated source. */

void FUN_001dcf50(int *param_1,undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
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
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [8];
  undefined4 uStack_84;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  
  fVar29 = (float)param_1[5];
  fVar30 = (float)param_1[7] + fVar29;
  fVar29 = (float)param_1[7] + fVar29 + fVar29;
  if (fVar30 <= fVar29) {
    fVar30 = fVar29;
  }
  auVar36 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x28));
  auVar37 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2c));
  auVar36 = _vadd(auVar36,auVar37);
  auVar36 = _sqc2(auVar36);
  auVar36 = _lqc2(auVar36);
  auVar37 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar36 = _vadd(auVar36,auVar37);
  auVar36 = _sqc2(auVar36);
  auStack_90 = auVar36._0_4_;
  auStack_8c._0_4_ = auVar36._4_4_;
  auStack_8c._4_4_ = auVar36._8_4_;
  uStack_84 = auVar36._12_4_;
  *(undefined1 (*) [4])param_2[1] = auStack_90;
  *(undefined4 *)(param_2[1] + 4) = auStack_8c._0_4_;
  *(undefined4 *)(param_2[1] + 8) = auStack_8c._4_4_;
  *(undefined4 *)(param_2[1] + 0xc) = uStack_84;
  uVar27 = *(undefined4 *)(param_2[1] + 8);
  uVar28 = *(undefined4 *)(param_2[1] + 0xc);
  *(int *)*param_2 = (int)*(undefined8 *)param_2[1];
  *(int *)(*param_2 + 4) = (int)((ulong)*(undefined8 *)param_2[1] >> 0x20);
  *(undefined4 *)(*param_2 + 8) = uVar27;
  *(undefined4 *)(*param_2 + 0xc) = uVar28;
  auVar37 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2c));
  auVar36 = _qmtc2(0x40000000);
  auVar36 = _vmulbc(auVar37,auVar36);
  auVar36 = _sqc2(auVar36);
  auVar37 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x28));
  auVar36 = _lqc2(auVar36);
  auVar36 = _vadd(auVar37,auVar36);
  auVar36 = _sqc2(auVar36);
  auVar36 = _lqc2(auVar36);
  auVar37 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar36 = _vadd(auVar36,auVar37);
  auVar36 = _sqc2(auVar36);
  auStack_80 = auVar36._0_4_;
  auStack_7c._0_4_ = auVar36._4_4_;
  auStack_7c._4_4_ = auVar36._8_4_;
  if ((float)auStack_80 < *(float *)*param_2) {
    *(undefined1 (*) [4])*param_2 = auStack_80;
  }
  if ((float)auStack_7c._0_4_ < *(float *)(*param_2 + 4)) {
    *(undefined4 *)(*param_2 + 4) = auStack_7c._0_4_;
  }
  if ((float)auStack_7c._4_4_ < *(float *)(*param_2 + 8)) {
    *(undefined4 *)(*param_2 + 8) = auStack_7c._4_4_;
  }
  if (*(float *)param_2[1] < (float)auStack_80) {
    *(undefined1 (*) [4])param_2[1] = auStack_80;
  }
  if (*(float *)(param_2[1] + 4) < (float)auStack_7c._0_4_) {
    *(undefined4 *)(param_2[1] + 4) = auStack_7c._0_4_;
  }
  if (*(float *)(param_2[1] + 8) < (float)auStack_7c._4_4_) {
    *(undefined4 *)(param_2[1] + 8) = auStack_7c._4_4_;
  }
  auVar36 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x28));
  auVar37 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2c));
  auVar36 = _vadd(auVar36,auVar37);
  auVar36 = _sqc2(auVar36);
  auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar37 = _qmtc2(0x40000000);
  auVar37 = _vmulbc(auVar38,auVar37);
  auVar37 = _sqc2(auVar37);
  auVar36 = _lqc2(auVar36);
  auVar37 = _lqc2(auVar37);
  auVar36 = _vadd(auVar36,auVar37);
  auVar36 = _sqc2(auVar36);
  auStack_80 = auVar36._0_4_;
  auStack_7c._0_4_ = auVar36._4_4_;
  auStack_7c._4_4_ = auVar36._8_4_;
  if ((float)auStack_80 < *(float *)*param_2) {
    *(undefined1 (*) [4])*param_2 = auStack_80;
  }
  if ((float)auStack_7c._0_4_ < *(float *)(*param_2 + 4)) {
    *(undefined4 *)(*param_2 + 4) = auStack_7c._0_4_;
  }
  if ((float)auStack_7c._4_4_ < *(float *)(*param_2 + 8)) {
    *(undefined4 *)(*param_2 + 8) = auStack_7c._4_4_;
  }
  if (*(float *)param_2[1] < (float)auStack_80) {
    *(undefined1 (*) [4])param_2[1] = auStack_80;
  }
  if (*(float *)(param_2[1] + 4) < (float)auStack_7c._0_4_) {
    *(undefined4 *)(param_2[1] + 4) = auStack_7c._0_4_;
  }
  if (*(float *)(param_2[1] + 8) < (float)auStack_7c._4_4_) {
    *(undefined4 *)(param_2[1] + 8) = auStack_7c._4_4_;
  }
  auVar37 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2c));
  auVar36 = _qmtc2(0x40000000);
  auVar36 = _vmulbc(auVar37,auVar36);
  auVar36 = _sqc2(auVar36);
  auVar37 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x28));
  auVar36 = _lqc2(auVar36);
  auVar36 = _vadd(auVar37,auVar36);
  auVar36 = _sqc2(auVar36);
  auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar37 = _qmtc2(0x40000000);
  auVar37 = _vmulbc(auVar38,auVar37);
  auVar37 = _sqc2(auVar37);
  auVar36 = _lqc2(auVar36);
  auVar37 = _lqc2(auVar37);
  auVar36 = _vadd(auVar36,auVar37);
  auVar36 = _sqc2(auVar36);
  fStack_70 = auVar36._0_4_;
  fStack_6c = auVar36._4_4_;
  fStack_68 = auVar36._8_4_;
  if (fStack_70 < *(float *)*param_2) {
    *(float *)*param_2 = fStack_70;
  }
  if (fStack_6c < *(float *)(*param_2 + 4)) {
    *(float *)(*param_2 + 4) = fStack_6c;
  }
  if (fStack_68 < *(float *)(*param_2 + 8)) {
    *(float *)(*param_2 + 8) = fStack_68;
  }
  if (*(float *)param_2[1] < fStack_70) {
    *(float *)param_2[1] = fStack_70;
  }
  if (*(float *)(param_2[1] + 4) < fStack_6c) {
    *(float *)(param_2[1] + 4) = fStack_6c;
  }
  if (*(float *)(param_2[1] + 8) < fStack_68) {
    *(float *)(param_2[1] + 8) = fStack_68;
  }
  auVar37 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2c));
  auVar36 = _qmtc2(0x40000000);
  auVar36 = _vmulbc(auVar37,auVar36);
  auVar36 = _sqc2(auVar36);
  iVar2 = *param_1;
  auVar37 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x28));
  auVar36 = _lqc2(auVar36);
  auVar36 = _vadd(auVar37,auVar36);
  auVar36 = _sqc2(auVar36);
  fVar29 = (float)iVar2;
  auVar36 = _lqc2(auVar36);
  auVar37 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar36 = _vadd(auVar36,auVar37);
  auVar36 = _sqc2(auVar36);
  auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x34));
  auVar37 = _qmtc2(fVar29);
  auVar37 = _vmulbc(auVar38,auVar37);
  auVar37 = _sqc2(auVar37);
  auVar36 = _lqc2(auVar36);
  auVar37 = _lqc2(auVar37);
  auVar36 = _vadd(auVar36,auVar37);
  auVar36 = _sqc2(auVar36);
  fStack_60 = auVar36._0_4_;
  fStack_5c = auVar36._4_4_;
  fStack_58 = auVar36._8_4_;
  if (fStack_60 < *(float *)*param_2) {
    *(float *)*param_2 = fStack_60;
  }
  if (fStack_5c < *(float *)(*param_2 + 4)) {
    *(float *)(*param_2 + 4) = fStack_5c;
  }
  if (fStack_58 < *(float *)(*param_2 + 8)) {
    *(float *)(*param_2 + 8) = fStack_58;
  }
  if (*(float *)param_2[1] < fStack_60) {
    *(float *)param_2[1] = fStack_60;
  }
  if (*(float *)(param_2[1] + 4) < fStack_5c) {
    *(float *)(param_2[1] + 4) = fStack_5c;
  }
  if (*(float *)(param_2[1] + 8) < fStack_58) {
    *(float *)(param_2[1] + 8) = fStack_58;
  }
  auVar36 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x28));
  auVar37 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2c));
  auVar36 = _vadd(auVar36,auVar37);
  auVar36 = _sqc2(auVar36);
  auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar37 = _qmtc2(0x40000000);
  auVar37 = _vmulbc(auVar38,auVar37);
  auVar37 = _sqc2(auVar37);
  auVar36 = _lqc2(auVar36);
  auVar37 = _lqc2(auVar37);
  auVar36 = _vadd(auVar36,auVar37);
  auVar36 = _sqc2(auVar36);
  auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x34));
  auVar37 = _qmtc2(fVar29);
  auVar37 = _vmulbc(auVar38,auVar37);
  auVar37 = _sqc2(auVar37);
  auVar36 = _lqc2(auVar36);
  auVar37 = _lqc2(auVar37);
  auVar36 = _vadd(auVar36,auVar37);
  auVar36 = _sqc2(auVar36);
  fStack_60 = auVar36._0_4_;
  fStack_5c = auVar36._4_4_;
  fStack_58 = auVar36._8_4_;
  if (fStack_60 < *(float *)*param_2) {
    *(float *)*param_2 = fStack_60;
  }
  if (fStack_5c < *(float *)(*param_2 + 4)) {
    *(float *)(*param_2 + 4) = fStack_5c;
  }
  if (fStack_58 < *(float *)(*param_2 + 8)) {
    *(float *)(*param_2 + 8) = fStack_58;
  }
  if (*(float *)param_2[1] < fStack_60) {
    *(float *)param_2[1] = fStack_60;
  }
  if (*(float *)(param_2[1] + 4) < fStack_5c) {
    *(float *)(param_2[1] + 4) = fStack_5c;
  }
  if (*(float *)(param_2[1] + 8) < fStack_58) {
    *(float *)(param_2[1] + 8) = fStack_58;
  }
  auVar37 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2c));
  auVar36 = _qmtc2(0x40000000);
  auVar36 = _vmulbc(auVar37,auVar36);
  auVar36 = _sqc2(auVar36);
  auVar37 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x28));
  auVar36 = _lqc2(auVar36);
  auVar36 = _vadd(auVar37,auVar36);
  auVar36 = _sqc2(auVar36);
  auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar37 = _qmtc2(0x40000000);
  auVar37 = _vmulbc(auVar38,auVar37);
  auVar37 = _sqc2(auVar37);
  auVar36 = _lqc2(auVar36);
  auVar37 = _lqc2(auVar37);
  auVar36 = _vadd(auVar36,auVar37);
  auVar36 = _sqc2(auVar36);
  auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x34));
  auVar37 = _qmtc2((float)iVar2);
  auVar37 = _vmulbc(auVar38,auVar37);
  auVar37 = _sqc2(auVar37);
  auVar36 = _lqc2(auVar36);
  auVar37 = _lqc2(auVar37);
  auVar36 = _vadd(auVar36,auVar37);
  auVar36 = _sqc2(auVar36);
  fStack_50 = auVar36._0_4_;
  fStack_4c = auVar36._4_4_;
  fStack_48 = auVar36._8_4_;
  if (fStack_50 < *(float *)*param_2) {
    *(float *)*param_2 = fStack_50;
  }
  if (fStack_4c < *(float *)(*param_2 + 4)) {
    *(float *)(*param_2 + 4) = fStack_4c;
  }
  if (fStack_48 < *(float *)(*param_2 + 8)) {
    *(float *)(*param_2 + 8) = fStack_48;
  }
  if (*(float *)param_2[1] < fStack_50) {
    *(float *)param_2[1] = fStack_50;
  }
  if (*(float *)(param_2[1] + 4) < fStack_4c) {
    *(float *)(param_2[1] + 4) = fStack_4c;
  }
  if (*(float *)(param_2[1] + 8) < fStack_48) {
    *(float *)(param_2[1] + 8) = fStack_48;
  }
  auVar24 = *param_2;
  auVar23 = *param_2;
  auVar20 = *param_2;
  auVar19 = *param_2;
  auVar16 = *param_2;
  auVar15 = *param_2;
  auVar12 = *param_2;
  auVar11 = *param_2;
  auVar8 = *param_2;
  auVar7 = *param_2;
  auVar4 = *param_2;
  auVar3 = *param_2;
  auVar37 = *param_2;
  pauVar1 = param_2 + 1;
  auVar26 = *pauVar1;
  auVar25 = *pauVar1;
  auVar22 = *pauVar1;
  auVar21 = *pauVar1;
  auVar18 = *pauVar1;
  auVar17 = *pauVar1;
  auVar14 = *pauVar1;
  auVar13 = *pauVar1;
  auVar10 = *pauVar1;
  auVar9 = *pauVar1;
  auVar6 = *pauVar1;
  auVar5 = *pauVar1;
  auVar43 = *pauVar1;
  auVar38 = *pauVar1;
  auVar36 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x18));
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1c));
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x24));
  auVar36 = _vadd(auVar36,auVar39);
  _auStack_80 = _sqc2(auVar36);
  fStack_40 = auStack_80;
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1c));
  auVar36 = _qmtc2(0x40000000);
  auVar36 = _vmulbc(auVar39,auVar36);
  auVar36 = _sqc2(auVar36);
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x18));
  auVar36 = _lqc2(auVar36);
  auVar36 = _vadd(auVar39,auVar36);
  auVar36 = _sqc2(auVar36);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x24));
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  fStack_70 = auVar36._0_4_;
  _auStack_8c = auStack_80._4_12_;
  auStack_7c = _auStack_8c;
  auVar39 = _auStack_80;
  if (fStack_70 < fStack_40) {
    auStack_90 = (undefined1  [4])fStack_70;
    auVar39 = _auStack_90;
  }
  _auStack_90 = auVar39;
  fStack_6c = auVar36._4_4_;
  if (fStack_6c < (float)auStack_8c._0_4_) {
    auStack_8c._0_4_ = fStack_6c;
  }
  fStack_68 = auVar36._8_4_;
  if (fStack_68 < (float)auStack_8c._4_4_) {
    auStack_8c._4_4_ = fStack_68;
  }
  if (fStack_40 < fStack_70) {
    auStack_80 = (undefined1  [4])fStack_70;
  }
  if ((float)auStack_7c._0_4_ < fStack_6c) {
    auStack_7c._0_4_ = fStack_6c;
  }
  if ((float)auStack_7c._4_4_ < fStack_68) {
    auStack_7c._4_4_ = fStack_68;
  }
  auVar36 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x18));
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1c));
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  auVar40 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  auVar39 = _qmtc2(0x40000000);
  auVar39 = _vmulbc(auVar40,auVar39);
  auVar39 = _sqc2(auVar39);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(auVar39);
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x24));
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  fStack_70 = auVar36._0_4_;
  if (fStack_70 < (float)auStack_90) {
    auStack_90 = (undefined1  [4])fStack_70;
  }
  fStack_6c = auVar36._4_4_;
  if (fStack_6c < (float)auStack_8c._0_4_) {
    auStack_8c._0_4_ = fStack_6c;
  }
  fStack_68 = auVar36._8_4_;
  if (fStack_68 < (float)auStack_8c._4_4_) {
    auStack_8c._4_4_ = fStack_68;
  }
  if ((float)auStack_80 < fStack_70) {
    auStack_80 = (undefined1  [4])fStack_70;
  }
  if ((float)auStack_7c._0_4_ < fStack_6c) {
    auStack_7c._0_4_ = fStack_6c;
  }
  if ((float)auStack_7c._4_4_ < fStack_68) {
    auStack_7c._4_4_ = fStack_68;
  }
  auVar36 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x18));
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1c));
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  auVar40 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x24));
  auVar39 = _qmtc2(0x40000000);
  auVar39 = _vmulbc(auVar40,auVar39);
  auVar39 = _sqc2(auVar39);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(auVar39);
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  fStack_70 = auVar36._0_4_;
  if (fStack_70 < (float)auStack_90) {
    auStack_90 = (undefined1  [4])fStack_70;
  }
  fStack_6c = auVar36._4_4_;
  if (fStack_6c < (float)auStack_8c._0_4_) {
    auStack_8c._0_4_ = fStack_6c;
  }
  fStack_68 = auVar36._8_4_;
  if (fStack_68 < (float)auStack_8c._4_4_) {
    auStack_8c._4_4_ = fStack_68;
  }
  if ((float)auStack_80 < fStack_70) {
    auStack_80 = (undefined1  [4])fStack_70;
  }
  if ((float)auStack_7c._0_4_ < fStack_6c) {
    auStack_7c._0_4_ = fStack_6c;
  }
  if ((float)auStack_7c._4_4_ < fStack_68) {
    auStack_7c._4_4_ = fStack_68;
  }
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1c));
  auVar36 = _qmtc2(0x40000000);
  auVar36 = _vmulbc(auVar39,auVar36);
  auVar36 = _sqc2(auVar36);
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x18));
  auVar36 = _lqc2(auVar36);
  auVar36 = _vadd(auVar39,auVar36);
  auVar36 = _sqc2(auVar36);
  auVar40 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  auVar39 = _qmtc2(0x40000000);
  auVar39 = _vmulbc(auVar40,auVar39);
  auVar39 = _sqc2(auVar39);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(auVar39);
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x24));
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  fStack_70 = auVar36._0_4_;
  if (fStack_70 < (float)auStack_90) {
    auStack_90 = (undefined1  [4])fStack_70;
  }
  fStack_6c = auVar36._4_4_;
  if (fStack_6c < (float)auStack_8c._0_4_) {
    auStack_8c._0_4_ = fStack_6c;
  }
  fStack_68 = auVar36._8_4_;
  if (fStack_68 < (float)auStack_8c._4_4_) {
    auStack_8c._4_4_ = fStack_68;
  }
  if ((float)auStack_80 < fStack_70) {
    auStack_80 = (undefined1  [4])fStack_70;
  }
  if ((float)auStack_7c._0_4_ < fStack_6c) {
    auStack_7c._0_4_ = fStack_6c;
  }
  if ((float)auStack_7c._4_4_ < fStack_68) {
    auStack_7c._4_4_ = fStack_68;
  }
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1c));
  auVar36 = _qmtc2(0x40000000);
  auVar36 = _vmulbc(auVar39,auVar36);
  auVar36 = _sqc2(auVar36);
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x18));
  auVar36 = _lqc2(auVar36);
  auVar36 = _vadd(auVar39,auVar36);
  auVar36 = _sqc2(auVar36);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  auVar40 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x24));
  auVar39 = _qmtc2(0x40000000);
  auVar39 = _vmulbc(auVar40,auVar39);
  auVar39 = _sqc2(auVar39);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(auVar39);
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  fStack_70 = auVar36._0_4_;
  if (fStack_70 < (float)auStack_90) {
    auStack_90 = (undefined1  [4])fStack_70;
  }
  fStack_6c = auVar36._4_4_;
  if (fStack_6c < (float)auStack_8c._0_4_) {
    auStack_8c._0_4_ = fStack_6c;
  }
  fStack_68 = auVar36._8_4_;
  if (fStack_68 < (float)auStack_8c._4_4_) {
    auStack_8c._4_4_ = fStack_68;
  }
  if ((float)auStack_80 < fStack_70) {
    auStack_80 = (undefined1  [4])fStack_70;
  }
  if ((float)auStack_7c._0_4_ < fStack_6c) {
    auStack_7c._0_4_ = fStack_6c;
  }
  if ((float)auStack_7c._4_4_ < fStack_68) {
    auStack_7c._4_4_ = fStack_68;
  }
  auVar36 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x18));
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1c));
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  auVar40 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  auVar39 = _qmtc2(0x40000000);
  auVar39 = _vmulbc(auVar40,auVar39);
  auVar39 = _sqc2(auVar39);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(auVar39);
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  auVar40 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x24));
  auVar39 = _qmtc2(0x40000000);
  auVar39 = _vmulbc(auVar40,auVar39);
  auVar39 = _sqc2(auVar39);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(auVar39);
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  fStack_70 = auVar36._0_4_;
  if (fStack_70 < (float)auStack_90) {
    auStack_90 = (undefined1  [4])fStack_70;
  }
  fStack_6c = auVar36._4_4_;
  if (fStack_6c < (float)auStack_8c._0_4_) {
    auStack_8c._0_4_ = fStack_6c;
  }
  fStack_68 = auVar36._8_4_;
  if (fStack_68 < (float)auStack_8c._4_4_) {
    auStack_8c._4_4_ = fStack_68;
  }
  if ((float)auStack_80 < fStack_70) {
    auStack_80 = (undefined1  [4])fStack_70;
  }
  if ((float)auStack_7c._0_4_ < fStack_6c) {
    auStack_7c._0_4_ = fStack_6c;
  }
  if ((float)auStack_7c._4_4_ < fStack_68) {
    auStack_7c._4_4_ = fStack_68;
  }
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1c));
  auVar36 = _qmtc2(0x40000000);
  auVar36 = _vmulbc(auVar39,auVar36);
  auVar36 = _sqc2(auVar36);
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x18));
  auVar36 = _lqc2(auVar36);
  auVar36 = _vadd(auVar39,auVar36);
  auVar36 = _sqc2(auVar36);
  auVar40 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  auVar39 = _qmtc2(0x40000000);
  auVar39 = _vmulbc(auVar40,auVar39);
  auVar39 = _sqc2(auVar39);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(auVar39);
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  auVar40 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x24));
  auVar39 = _qmtc2(0x40000000);
  auVar39 = _vmulbc(auVar40,auVar39);
  auVar39 = _sqc2(auVar39);
  auVar36 = _lqc2(auVar36);
  auVar39 = _lqc2(auVar39);
  auVar36 = _vadd(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  fStack_70 = auVar36._0_4_;
  if (fStack_70 < (float)auStack_90) {
    auStack_90 = (undefined1  [4])fStack_70;
  }
  fStack_6c = auVar36._4_4_;
  if (fStack_6c < (float)auStack_8c._0_4_) {
    auStack_8c._0_4_ = fStack_6c;
  }
  fStack_68 = auVar36._8_4_;
  if (fStack_68 < (float)auStack_8c._4_4_) {
    auStack_8c._4_4_ = fStack_68;
  }
  if ((float)auStack_80 < fStack_70) {
    auStack_80 = (undefined1  [4])fStack_70;
  }
  if ((float)auStack_7c._0_4_ < fStack_6c) {
    auStack_7c._0_4_ = fStack_6c;
  }
  if ((float)auStack_7c._4_4_ < fStack_68) {
    auStack_7c._4_4_ = fStack_68;
  }
  fVar29 = fVar30;
  if (DAT_002c3694 <= fVar30) {
    fVar29 = DAT_002c3694;
  }
  auVar36 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
  auVar39 = _lqc2(_auStack_80);
  auVar36 = _vsub(auVar36,auVar39);
  auVar36 = _sqc2(auVar36);
  auVar39 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
  auVar40 = _lqc2(_auStack_90);
  auVar39 = _vsub(auVar39,auVar40);
  auVar39 = _sqc2(auVar39);
  auVar41 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
  auVar40 = _qmtc2(fVar30);
  auVar40 = _vmulbc(auVar41,auVar40);
  auVar40 = _sqc2(auVar40);
  auVar41 = _lqc2(*param_2);
  auVar40 = _lqc2(auVar40);
  auVar40 = _vadd(auVar41,auVar40);
  auVar40 = _sqc2(auVar40);
  fVar29 = fVar29 * (fVar29 * DAT_002c3698 + DAT_002c369c);
  auVar42 = _lqc2(auVar36);
  auVar41 = _qmtc2(fVar29);
  auVar41 = _vmulbc(auVar42,auVar41);
  auVar41 = _sqc2(auVar41);
  auVar40 = _lqc2(auVar40);
  auVar41 = _lqc2(auVar41);
  auVar40 = _vadd(auVar40,auVar41);
  auVar40 = _sqc2(auVar40);
  fStack_50 = auVar40._0_4_;
  if (fStack_50 < *(float *)*param_2) {
    *(float *)*param_2 = fStack_50;
  }
  fStack_4c = auVar40._4_4_;
  if (fStack_4c < *(float *)(*param_2 + 4)) {
    *(float *)(*param_2 + 4) = fStack_4c;
  }
  fStack_48 = auVar40._8_4_;
  if (fStack_48 < *(float *)(*param_2 + 8)) {
    *(float *)(*param_2 + 8) = fStack_48;
  }
  if (*(float *)param_2[1] < fStack_50) {
    *(float *)param_2[1] = fStack_50;
  }
  if (*(float *)(param_2[1] + 4) < fStack_4c) {
    *(float *)(param_2[1] + 4) = fStack_4c;
  }
  if (*(float *)(param_2[1] + 8) < fStack_48) {
    *(float *)(param_2[1] + 8) = fStack_48;
  }
  auVar41 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
  auVar40 = _qmtc2(fVar30);
  auVar40 = _vmulbc(auVar41,auVar40);
  auVar40 = _sqc2(auVar40);
  auVar37 = _lqc2(auVar37);
  auVar40 = _lqc2(auVar40);
  auVar37 = _vadd(auVar37,auVar40);
  auVar37 = _sqc2(auVar37);
  auVar41 = _lqc2(auVar39);
  auVar40 = _qmtc2(fVar29);
  auVar40 = _vmulbc(auVar41,auVar40);
  auVar40 = _sqc2(auVar40);
  auVar37 = _lqc2(auVar37);
  auVar40 = _lqc2(auVar40);
  auVar37 = _vadd(auVar37,auVar40);
  auVar37 = _sqc2(auVar37);
  fStack_50 = auVar37._0_4_;
  if (fStack_50 < *(float *)*param_2) {
    *(float *)*param_2 = fStack_50;
  }
  fStack_4c = auVar37._4_4_;
  if (fStack_4c < *(float *)(*param_2 + 4)) {
    *(float *)(*param_2 + 4) = fStack_4c;
  }
  fStack_48 = auVar37._8_4_;
  if (fStack_48 < *(float *)(*param_2 + 8)) {
    *(float *)(*param_2 + 8) = fStack_48;
  }
  if (*(float *)param_2[1] < fStack_50) {
    *(float *)param_2[1] = fStack_50;
  }
  if (*(float *)(param_2[1] + 4) < fStack_4c) {
    *(float *)(param_2[1] + 4) = fStack_4c;
  }
  if (*(float *)(param_2[1] + 8) < fStack_48) {
    *(float *)(param_2[1] + 8) = fStack_48;
  }
  auVar40 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
  auVar37 = _qmtc2(fVar30);
  auVar37 = _vmulbc(auVar40,auVar37);
  auVar37 = _sqc2(auVar37);
  auVar38 = _lqc2(auVar38);
  auVar37 = _lqc2(auVar37);
  auVar37 = _vadd(auVar38,auVar37);
  auVar37 = _sqc2(auVar37);
  auVar40 = _lqc2(auVar36);
  auVar38 = _qmtc2(fVar29);
  auVar38 = _vmulbc(auVar40,auVar38);
  auVar38 = _sqc2(auVar38);
  auVar37 = _lqc2(auVar37);
  auVar38 = _lqc2(auVar38);
  auVar37 = _vadd(auVar37,auVar38);
  auVar37 = _sqc2(auVar37);
  fStack_50 = auVar37._0_4_;
  if (fStack_50 < *(float *)*param_2) {
    *(float *)*param_2 = fStack_50;
  }
  fStack_4c = auVar37._4_4_;
  if (fStack_4c < *(float *)(*param_2 + 4)) {
    *(float *)(*param_2 + 4) = fStack_4c;
  }
  fStack_48 = auVar37._8_4_;
  if (fStack_48 < *(float *)(*param_2 + 8)) {
    *(float *)(*param_2 + 8) = fStack_48;
  }
  if (*(float *)param_2[1] < fStack_50) {
    *(float *)param_2[1] = fStack_50;
  }
  if (*(float *)(param_2[1] + 4) < fStack_4c) {
    *(float *)(param_2[1] + 4) = fStack_4c;
  }
  if (*(float *)(param_2[1] + 8) < fStack_48) {
    *(float *)(param_2[1] + 8) = fStack_48;
  }
  auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
  auVar37 = _qmtc2(fVar30);
  auVar37 = _vmulbc(auVar38,auVar37);
  auVar37 = _sqc2(auVar37);
  auVar38 = _lqc2(auVar43);
  auVar37 = _lqc2(auVar37);
  auVar37 = _vadd(auVar38,auVar37);
  auVar37 = _sqc2(auVar37);
  auVar43 = _lqc2(auVar39);
  auVar38 = _qmtc2(fVar29);
  auVar38 = _vmulbc(auVar43,auVar38);
  auVar38 = _sqc2(auVar38);
  auVar37 = _lqc2(auVar37);
  auVar38 = _lqc2(auVar38);
  auVar37 = _vadd(auVar37,auVar38);
  auVar37 = _sqc2(auVar37);
  fStack_50 = auVar37._0_4_;
  if (fStack_50 < *(float *)*param_2) {
    *(float *)*param_2 = fStack_50;
  }
  fStack_4c = auVar37._4_4_;
  if (fStack_4c < *(float *)(*param_2 + 4)) {
    *(float *)(*param_2 + 4) = fStack_4c;
  }
  fStack_48 = auVar37._8_4_;
  if (fStack_48 < *(float *)(*param_2 + 8)) {
    *(float *)(*param_2 + 8) = fStack_48;
  }
  if (*(float *)param_2[1] < fStack_50) {
    *(float *)param_2[1] = fStack_50;
  }
  if (*(float *)(param_2[1] + 4) < fStack_4c) {
    *(float *)(param_2[1] + 4) = fStack_4c;
  }
  if (*(float *)(param_2[1] + 8) < fStack_48) {
    *(float *)(param_2[1] + 8) = fStack_48;
  }
  fVar30 = (float)param_1[0x14];
  fVar33 = (float)param_1[0x15];
  fVar29 = (float)param_1[0x16];
  fVar35 = (fVar30 / ((float)auStack_90 - fVar30) - DAT_002c36a0) * DAT_002c36a4;
  fVar31 = (fVar30 / ((float)auStack_80 - fVar30) - DAT_002c36a0) * DAT_002c36a4;
  fVar30 = (fVar29 / ((float)auStack_7c._4_4_ - fVar29) - DAT_002c36a0) * DAT_002c36a4;
  fVar34 = (fVar33 / ((float)auStack_8c._0_4_ - fVar33) - DAT_002c36a0) * DAT_002c36a4;
  fVar33 = (fVar33 / ((float)auStack_7c._0_4_ - fVar33) - DAT_002c36a0) * DAT_002c36a4;
  fVar29 = (fVar29 / ((float)auStack_8c._4_4_ - fVar29) - DAT_002c36a0) * DAT_002c36a4;
  if (0.0 < fVar35) {
    if (DAT_002c36a8 <= fVar35) {
      fVar35 = DAT_002c36a8;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar35);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar3);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    fVar32 = fVar35 * (fVar35 * DAT_002c36ac + DAT_002c36a0);
    auVar43 = _lqc2(auVar36);
    auVar38 = _qmtc2(fVar32);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar35);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar4);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar39);
    auVar38 = _qmtc2(fVar32);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar35);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar5);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar36);
    auVar38 = _qmtc2(fVar32);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar35);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar6);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar39);
    auVar38 = _qmtc2(fVar32);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
  }
  if (0.0 < fVar31) {
    if (DAT_002c36b0 <= fVar31) {
      fVar31 = DAT_002c36b0;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar31);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar7);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    fVar35 = fVar31 * (fVar31 * DAT_002c36b4 + DAT_002c36b8);
    auVar43 = _lqc2(auVar36);
    auVar38 = _qmtc2(fVar35);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar31);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar8);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar39);
    auVar38 = _qmtc2(fVar35);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar31);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar9);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar36);
    auVar38 = _qmtc2(fVar35);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar31);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar10);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar39);
    auVar38 = _qmtc2(fVar35);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
  }
  if (0.0 < fVar34) {
    if (DAT_002c36bc <= fVar34) {
      fVar34 = DAT_002c36bc;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar34);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar11);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    fVar31 = fVar34 * (fVar34 * DAT_002c36c0 + DAT_002c36c4);
    auVar43 = _lqc2(auVar36);
    auVar38 = _qmtc2(fVar31);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar34);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar12);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar39);
    auVar38 = _qmtc2(fVar31);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar34);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar13);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar36);
    auVar38 = _qmtc2(fVar31);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar34);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar14);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar39);
    auVar38 = _qmtc2(fVar31);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
  }
  if (0.0 < fVar33) {
    if (DAT_002c36c8 <= fVar33) {
      fVar33 = DAT_002c36c8;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar33);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar15);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    fVar34 = fVar33 * (fVar33 * DAT_002c36cc + DAT_002c36d0);
    auVar43 = _lqc2(auVar36);
    auVar38 = _qmtc2(fVar34);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar33);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar16);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar39);
    auVar38 = _qmtc2(fVar34);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar33);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar17);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar36);
    auVar38 = _qmtc2(fVar34);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar33);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar18);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar39);
    auVar38 = _qmtc2(fVar34);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
  }
  if (0.0 < fVar29) {
    if (DAT_002c36d4 <= fVar29) {
      fVar29 = DAT_002c36d4;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar29);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar19);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    fVar33 = fVar29 * (fVar29 * DAT_002c36d8 + DAT_002c36dc);
    auVar43 = _lqc2(auVar36);
    auVar38 = _qmtc2(fVar33);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar29);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar20);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar39);
    auVar38 = _qmtc2(fVar33);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar29);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar21);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar36);
    auVar38 = _qmtc2(fVar33);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar29);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar22);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar39);
    auVar38 = _qmtc2(fVar33);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
  }
  if (0.0 < fVar30) {
    if (DAT_002c36e0 <= fVar30) {
      fVar30 = DAT_002c36e0;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar30);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar23);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    fVar29 = fVar30 * (fVar30 * DAT_002c36e4 + DAT_002c36e8);
    auVar43 = _lqc2(auVar36);
    auVar38 = _qmtc2(fVar29);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar30);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar24);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar43 = _lqc2(auVar39);
    auVar38 = _qmtc2(fVar29);
    auVar38 = _vmulbc(auVar43,auVar38);
    auVar38 = _sqc2(auVar38);
    auVar37 = _lqc2(auVar37);
    auVar38 = _lqc2(auVar38);
    auVar37 = _vadd(auVar37,auVar38);
    auVar37 = _sqc2(auVar37);
    fStack_50 = auVar37._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar37._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar37._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar38 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar37 = _qmtc2(fVar30);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar25);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vadd(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar38 = _lqc2(auVar36);
    auVar36 = _qmtc2(fVar29);
    auVar36 = _vmulbc(auVar38,auVar36);
    auVar36 = _sqc2(auVar36);
    auVar37 = _lqc2(auVar37);
    auVar36 = _lqc2(auVar36);
    auVar36 = _vadd(auVar37,auVar36);
    auVar36 = _sqc2(auVar36);
    fStack_50 = auVar36._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar36._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar36._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
    auVar37 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
    auVar36 = _qmtc2(fVar30);
    auVar36 = _vmulbc(auVar37,auVar36);
    auVar36 = _sqc2(auVar36);
    auVar37 = _lqc2(auVar26);
    auVar36 = _lqc2(auVar36);
    auVar36 = _vadd(auVar37,auVar36);
    auVar36 = _sqc2(auVar36);
    auVar38 = _lqc2(auVar39);
    auVar37 = _qmtc2(fVar29);
    auVar37 = _vmulbc(auVar38,auVar37);
    auVar37 = _sqc2(auVar37);
    auVar36 = _lqc2(auVar36);
    auVar37 = _lqc2(auVar37);
    auVar36 = _vadd(auVar36,auVar37);
    auVar36 = _sqc2(auVar36);
    fStack_50 = auVar36._0_4_;
    if (fStack_50 < *(float *)*param_2) {
      *(float *)*param_2 = fStack_50;
    }
    fStack_4c = auVar36._4_4_;
    if (fStack_4c < *(float *)(*param_2 + 4)) {
      *(float *)(*param_2 + 4) = fStack_4c;
    }
    fStack_48 = auVar36._8_4_;
    if (fStack_48 < *(float *)(*param_2 + 8)) {
      *(float *)(*param_2 + 8) = fStack_48;
    }
    if (*(float *)param_2[1] < fStack_50) {
      *(float *)param_2[1] = fStack_50;
    }
    if (*(float *)(param_2[1] + 4) < fStack_4c) {
      *(float *)(param_2[1] + 4) = fStack_4c;
    }
    if (*(float *)(param_2[1] + 8) < fStack_48) {
      *(float *)(param_2[1] + 8) = fStack_48;
    }
  }
  return;
}

