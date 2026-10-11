/* Ghidra pseudocode. PS2 address: 0019b848. Not validated source. */

float FUN_0019b848(int param_1,undefined1 (*param_2) [16],undefined4 *param_3,float *param_4,
                  undefined1 (*param_5) [16])

{
  int iVar1;
  undefined1 auVar2 [12];
  undefined1 (*pauVar3) [12];
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_60 [16];
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(param_5[1] + 4);
  fVar14 = 0.0;
  fVar13 = 0.0;
  if (iVar1 < 0) {
    iVar5 = 0;
    fVar9 = 0.0;
    auStack_60._12_4_ = 0x3f800000;
    auStack_60._0_12_ = *(undefined1 (*) [12])(param_1 + 0xc);
    fVar11 = DAT_002c2a7c;
  }
  else {
    fVar9 = *(float *)param_5[1];
    auStack_60 = *param_5;
    fVar11 = fVar9 + DAT_002c2a80;
    iVar5 = iVar1;
  }
  if (*(int *)(param_1 + 8) <= iVar5) {
LAB_0019ba68:
    *param_4 = SQRT(fVar13);
    return fVar14;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  fVar12 = DAT_002c2a7c;
  do {
    pauVar3 = (undefined1 (*) [12])(iVar5 * 0x10 + iVar4);
    auVar2 = *pauVar3;
    fVar10 = *(float *)pauVar3[1];
    auVar15 = _lqc2(*param_2);
    auVar16 = _lqc2(auStack_60);
    auVar15 = _vsub(auVar15,auVar16);
    auVar15 = _sqc2(auVar15);
    fStack_30 = auVar15._0_4_;
    fStack_2c = auVar15._4_4_;
    fVar8 = fStack_30 * *(float *)*pauVar3 + fStack_2c * *(float *)(*pauVar3 + 4);
    if (fVar8 < 0.0) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = fVar10;
      if (fVar8 <= fVar10) {
        fVar7 = fVar8;
      }
    }
    auVar15._12_4_ = 0;
    auVar15._0_12_ = *pauVar3;
    auVar16 = _lqc2(auVar15);
    auVar15 = _qmtc2(fVar7);
    auVar15 = _vmulbc(auVar16,auVar15);
    auVar15 = _sqc2(auVar15);
    auVar16 = _lqc2(auStack_60);
    auVar15 = _lqc2(auVar15);
    auVar15 = _vadd(auVar16,auVar15);
    auVar15 = _sqc2(auVar15);
    uStack_4 = auVar15._12_4_;
    auVar16 = _lqc2(*param_2);
    auVar17 = _lqc2(auVar15);
    auVar16 = _vsub(auVar16,auVar17);
    auVar16 = _sqc2(auVar16);
    fStack_10 = auVar16._0_4_;
    fStack_c = auVar16._4_4_;
    fVar6 = fStack_10 * fStack_10 + fStack_c * fStack_c;
    if (fVar6 < fVar12) {
      fStack_30 = auVar15._0_4_;
      fStack_2c = auVar15._4_4_;
      uStack_28 = auVar15._8_4_;
      *param_3 = fStack_30;
      param_3[1] = fStack_2c;
      param_3[2] = uStack_28;
      param_3[3] = uStack_4;
      *(int *)*param_5 = auStack_60._0_4_;
      *(int *)(*param_5 + 4) = auStack_60._4_4_;
      *(undefined4 *)(*param_5 + 8) = auStack_60._8_4_;
      *(undefined4 *)(*param_5 + 0xc) = auStack_60._12_4_;
      fVar14 = fVar9 + fVar7;
      *(float *)param_5[1] = fVar9;
      *(int *)(param_5[1] + 4) = iVar5;
      fVar12 = fVar6;
      fVar13 = fVar6;
      if ((-1 < iVar1) && (fVar7 == fVar8)) goto LAB_0019ba68;
    }
    if (fVar11 < fVar9) goto LAB_0019ba68;
    auVar16._12_4_ = 0;
    auVar16._0_12_ = auVar2;
    auVar16 = _lqc2(auVar16);
    auVar15 = _qmtc2(fVar10);
    auVar15 = _vmulbc(auVar16,auVar15);
    auVar15 = _sqc2(auVar15);
    iVar5 = iVar5 + 1;
    fVar9 = fVar9 + fVar10;
    auVar16 = _lqc2(auStack_60);
    auVar15 = _lqc2(auVar15);
    auVar15 = _vadd(auVar16,auVar15);
    auStack_60 = _sqc2(auVar15);
    if (*(int *)(param_1 + 8) <= iVar5) goto LAB_0019ba68;
    iVar4 = *(int *)(param_1 + 0x18);
  } while( true );
}

