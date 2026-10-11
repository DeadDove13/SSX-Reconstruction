/* Ghidra pseudocode. PS2 address: 0020b620. Not validated source. */

void FUN_0020b620(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar5 = DAT_002c3980;
  fVar4 = DAT_002c397c;
  param_2[2] = DAT_002c397c;
  *param_2 = fVar4;
  param_2[1] = fVar4;
  param_2[3] = 1.0;
  iVar1 = *(int *)(param_1 + 0x24);
  param_3[2] = fVar5;
  *param_3 = fVar5;
  param_3[1] = fVar5;
  param_3[3] = 1.0;
  if (iVar1 == 0) {
    uVar8 = *(undefined4 *)(param_1 + 0x20);
    auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
    auVar2._4_4_ = uVar8;
    auVar2._0_4_ = uVar8;
    auVar2._8_4_ = uVar8;
    auVar2._12_4_ = 0;
    auVar10 = _lqc2(auVar2);
    auVar9 = _vsub(auVar9,auVar10);
    auVar9 = _sqc2(auVar9);
    fStack_20 = auVar9._0_4_;
    fStack_1c = auVar9._4_4_;
    fStack_18 = auVar9._8_4_;
    fStack_14 = auVar9._12_4_;
    *param_2 = fStack_20;
    param_2[1] = fStack_1c;
    param_2[2] = fStack_18;
    param_2[3] = fStack_14;
    uVar8 = *(undefined4 *)(param_1 + 0x20);
    auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
    auVar3._4_4_ = uVar8;
    auVar3._0_4_ = uVar8;
    auVar3._8_4_ = uVar8;
    auVar3._12_4_ = 0;
    auVar10 = _lqc2(auVar3);
    auVar9 = _vadd(auVar9,auVar10);
    auVar9 = _sqc2(auVar9);
    fStack_20 = auVar9._0_4_;
    fStack_1c = auVar9._4_4_;
    fStack_18 = auVar9._8_4_;
    fStack_14 = auVar9._12_4_;
    *param_3 = fStack_20;
    param_3[1] = fStack_1c;
    param_3[2] = fStack_18;
    param_3[3] = fStack_14;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28);
    uVar7 = 0;
    iVar6 = param_1;
    if (0 < iVar1) {
      do {
        if (((*(int *)(param_1 + 0x24) >> (uVar7 & 0x1f) ^ 1U) & 1) == 0) {
          uVar8 = *(undefined4 *)(iVar6 + 0x40);
          auVar10 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x30));
          auVar9._4_4_ = uVar8;
          auVar9._0_4_ = uVar8;
          auVar9._8_4_ = uVar8;
          auVar9._12_4_ = 0x3f800000;
          auVar9 = _lqc2(auVar9);
          auVar9 = _vsub(auVar10,auVar9);
          auVar9 = _sqc2(auVar9);
          fStack_20 = auVar9._0_4_;
          fStack_1c = auVar9._4_4_;
          fStack_18 = auVar9._8_4_;
          if (fStack_20 < *param_2) {
            *param_2 = fStack_20;
          }
          if (fStack_1c < param_2[1]) {
            param_2[1] = fStack_1c;
          }
          if (fStack_18 < param_2[2]) {
            param_2[2] = fStack_18;
          }
          auVar9 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x30));
          auVar10._4_4_ = uVar8;
          auVar10._0_4_ = uVar8;
          auVar10._8_4_ = uVar8;
          auVar10._12_4_ = 0x3f800000;
          auVar10 = _lqc2(auVar10);
          auVar9 = _vadd(auVar9,auVar10);
          auVar9 = _sqc2(auVar9);
          fStack_20 = auVar9._0_4_;
          fStack_1c = auVar9._4_4_;
          fStack_18 = auVar9._8_4_;
          if (*param_3 < fStack_20) {
            *param_3 = fStack_20;
          }
          if (param_3[1] < fStack_1c) {
            param_3[1] = fStack_1c;
          }
          if (param_3[2] < fStack_18) {
            param_3[2] = fStack_18;
          }
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 0x20;
      } while ((int)uVar7 < iVar1);
    }
  }
  return;
}

