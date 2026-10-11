/* Ghidra pseudocode. PS2 address: 0019b688. Not validated source. */

float FUN_0019b688(int param_1,undefined1 (*param_2) [16],undefined4 *param_3,float *param_4)

{
  undefined1 auVar1 [12];
  undefined1 (*pauVar2) [12];
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_60 [16];
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_4;
  
  fVar9 = 0.0;
  iVar4 = 0;
  fVar11 = 0.0;
  fVar10 = 0.0;
  auStack_60._12_4_ = 0x3f800000;
  auStack_60._0_12_ = *(undefined1 (*) [12])(param_1 + 0xc);
  if (0 < *(int *)(param_1 + 8)) {
    iVar3 = *(int *)(param_1 + 0x18);
    fVar7 = DAT_002c2a78;
    while( true ) {
      pauVar2 = (undefined1 (*) [12])(iVar4 * 0x10 + iVar3);
      auVar1 = *pauVar2;
      fVar8 = *(float *)pauVar2[1];
      auVar12 = _lqc2(*param_2);
      auVar13 = _lqc2(auStack_60);
      auVar12 = _vsub(auVar12,auVar13);
      auVar12 = _sqc2(auVar12);
      fStack_30 = auVar12._0_4_;
      fStack_2c = auVar12._4_4_;
      fVar5 = fStack_30 * *(float *)*pauVar2 + fStack_2c * *(float *)(*pauVar2 + 4);
      if (fVar5 < 0.0) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = fVar8;
        if (fVar5 <= fVar8) {
          fVar6 = fVar5;
        }
      }
      auVar12._12_4_ = 0;
      auVar12._0_12_ = *pauVar2;
      auVar13 = _lqc2(auVar12);
      auVar12 = _qmtc2(fVar6);
      auVar12 = _vmulbc(auVar13,auVar12);
      auVar12 = _sqc2(auVar12);
      auVar13 = _lqc2(auStack_60);
      auVar12 = _lqc2(auVar12);
      auVar12 = _vadd(auVar13,auVar12);
      auVar12 = _sqc2(auVar12);
      uStack_4 = auVar12._12_4_;
      auVar13 = _lqc2(*param_2);
      auVar14 = _lqc2(auVar12);
      auVar13 = _vsub(auVar13,auVar14);
      auVar13 = _sqc2(auVar13);
      fStack_10 = auVar13._0_4_;
      fStack_c = auVar13._4_4_;
      fVar5 = fStack_10 * fStack_10 + fStack_c * fStack_c;
      if (fVar5 < fVar7) {
        fVar9 = fVar10 + fVar6;
        fStack_30 = auVar12._0_4_;
        fStack_2c = auVar12._4_4_;
        uStack_28 = auVar12._8_4_;
        *param_3 = fStack_30;
        param_3[1] = fStack_2c;
        param_3[2] = uStack_28;
        param_3[3] = uStack_4;
        fVar7 = fVar5;
        fVar11 = fVar5;
      }
      auVar13._12_4_ = 0;
      auVar13._0_12_ = auVar1;
      auVar13 = _lqc2(auVar13);
      auVar12 = _qmtc2(fVar8);
      auVar12 = _vmulbc(auVar13,auVar12);
      auVar12 = _sqc2(auVar12);
      iVar4 = iVar4 + 1;
      fVar10 = fVar10 + fVar8;
      auVar13 = _lqc2(auStack_60);
      auVar12 = _lqc2(auVar12);
      auVar12 = _vadd(auVar13,auVar12);
      auStack_60 = _sqc2(auVar12);
      if (*(int *)(param_1 + 8) <= iVar4) break;
      iVar3 = *(int *)(param_1 + 0x18);
    }
  }
  *param_4 = SQRT(fVar11);
  return fVar9;
}

