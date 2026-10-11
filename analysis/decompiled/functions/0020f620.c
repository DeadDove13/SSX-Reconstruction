/* Ghidra pseudocode. PS2 address: 0020f620. Not validated source. */

void FUN_0020f620(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16],int param_4,
                 int param_5,undefined8 param_6,undefined4 *param_7)

{
  byte bVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined4 *puStack_c0;
  int iStack_bc;
  
  iStack_bc = param_4 * 0xc;
  iVar4 = (int)param_1;
  iVar6 = *(int *)(iVar4 + 0xa0);
  pauVar7 = (undefined1 (*) [16])param_2;
  auVar12 = *pauVar7;
  auVar11 = _lqc2(*pauVar7);
  auVar13 = _lqc2(*param_3);
  auVar14 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _vmul(auVar11,auVar13);
  _vaddabc(auVar11,auVar11);
  _vmaddabc(auVar14,auVar11);
  auVar11 = _vmaddbc(auVar14,auVar11);
  auVar11 = _qmfc2(auVar11._0_4_);
  pfVar3 = (float *)(iStack_bc + *(int *)(iVar6 + 0x20));
  fVar9 = *pfVar3;
  fVar10 = auVar11._0_4_ - *(float *)pauVar7[1];
  if (fVar10 < fVar9 + *(float *)(iVar4 + 0xa4)) {
    bVar1 = *(byte *)(*(int *)(iVar6 + 0x28) + param_5);
    if ((param_4 < *(int *)(iVar6 + 0xc)) && (puVar5 = (uint *)(iVar4 + 0xa8), bVar1 != 0)) {
      fVar9 = pfVar3[4];
      iVar6 = 7;
      puStack_c0 = param_7;
      do {
        uVar2 = *puVar5;
        if (((int)(uint)bVar1 >> (uVar2 & 0x1f) & 1U) != 0) {
          auVar11 = _lqc2(*(undefined1 (*) [16])(uVar2 * 0x10 + iVar4 + 0x10));
          auVar12 = _qmtc2(fVar9);
          auVar12 = _vmulbc(auVar11,auVar12);
          auStack_e0 = _sqc2(auVar12);
          auVar12 = _lqc2(*param_3);
          auVar11 = _lqc2(auStack_e0);
          auVar12 = _vadd(auVar12,auVar11);
          auStack_d0 = _sqc2(auVar12);
          uStack_f0 = auStack_d0._0_4_;
          uStack_ec = auStack_d0._4_4_;
          uStack_e8 = auStack_d0._8_4_;
          uStack_e4 = auStack_d0._12_4_;
          FUN_0020f620(param_1,param_2,&uStack_f0,param_4 + 1,
                       (uVar2 + 1) *
                       *(int *)(iStack_bc + *(int *)(*(int *)(iVar4 + 0xa0) + 0x20) + 8) + param_5,
                       param_6,puStack_c0);
        }
        iVar6 = iVar6 + -1;
        puVar5 = puVar5 + 1;
      } while (-1 < iVar6);
    }
    else {
      fVar9 = fVar10 - fVar9;
      if (fVar9 < *(float *)(iVar4 + 0xa4)) {
        auVar13 = _lqc2(*pauVar7);
        auVar11 = _qmtc2(fVar9);
        auVar11 = _vmulbc(auVar13,auVar11);
        auVar11 = _sqc2(auVar11);
        auStack_e0._8_4_ = auVar11._8_4_;
        auStack_e0._12_4_ = auVar11._12_4_;
        puVar8 = (undefined4 *)param_6;
        *puVar8 = auVar11._0_4_;
        puVar8[1] = auVar11._4_4_;
        puVar8[2] = auStack_e0._8_4_;
        puVar8[3] = auStack_e0._12_4_;
        auVar11 = _lqc2(auVar12);
        auVar12 = _qmtc2(fVar10);
        auVar12 = _vmulbc(auVar11,auVar12);
        auVar12 = _sqc2(auVar12);
        auVar11 = _lqc2(*param_3);
        auVar12 = _lqc2(auVar12);
        auVar12 = _vsub(auVar11,auVar12);
        auVar12 = _sqc2(auVar12);
        auStack_d0._0_4_ = auVar12._0_4_;
        auStack_d0._4_4_ = auVar12._4_4_;
        auStack_d0._8_4_ = auVar12._8_4_;
        auStack_d0._12_4_ = auVar12._12_4_;
        *param_7 = auStack_d0._0_4_;
        param_7[1] = auStack_d0._4_4_;
        param_7[2] = auStack_d0._8_4_;
        param_7[3] = auStack_d0._12_4_;
        *(float *)(iVar4 + 0xa4) = fVar9;
      }
    }
  }
  return;
}

