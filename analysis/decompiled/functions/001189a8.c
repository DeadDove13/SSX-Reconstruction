/* Ghidra pseudocode. PS2 address: 001189a8. Not validated source. */

void FUN_001189a8(undefined1 (*param_1) [16])

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  iVar4 = 0;
  FUN_0011ed28(DAT_002c173c,0x295e90,0,0);
  FUN_0011ed38(0x295e90,1);
  FUN_0011ed48(0x295e90,5);
  FUN_0011ed08(0x295e90,2,0);
  if (0 < *(int *)param_1[0xd5]) {
    iVar2 = *(int *)(param_1[0xd5] + 4);
    while( true ) {
      iVar2 = iVar2 + iVar4;
      iVar1 = iVar2 + 0x3f;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      pfVar3 = (float *)((int)param_1 + (iVar2 + (iVar1 >> 6) * -0x40) * 0x34 + 0x50);
      if (*pfVar3 <= pfVar3[10]) {
        FUN_0011ecd8(0x295e90,*(undefined4 *)
                               (*(int *)(DAT_002859e4 + 0x7c) + ((int)pfVar3[7] + 0x18) * 4),1);
        fVar8 = pfVar3[10];
        fVar7 = *pfVar3;
        fStack_c0 = pfVar3[0xb];
        fVar5 = (pfVar3[0xc] / fVar8) * fVar7;
        if (fStack_c0 <= fVar5) {
          fStack_c0 = fVar5;
        }
        fVar5 = pfVar3[9];
        if (fVar7 < fVar5) {
          fVar6 = pfVar3[8];
        }
        else {
          fVar6 = fVar8 - fVar7;
          fVar7 = pfVar3[8];
          fVar5 = fVar8 - fVar5;
        }
        *(float *)param_1[4] = (fVar6 * fVar7) / fVar5;
        auVar10 = _lqc2(param_1[1]);
        auVar9 = _qmtc2(pfVar3[5] - *pfVar3 * 200.0);
        auVar9 = _vmulbc(auVar10,auVar9);
        auVar9 = _sqc2(auVar9);
        auStack_90._8_4_ = auVar9._8_4_;
        auStack_90._12_4_ = auVar9._12_4_;
        uStack_a0 = auVar9._0_4_;
        uStack_9c = auVar9._4_4_;
        uStack_98 = auStack_90._8_4_;
        uStack_94 = auStack_90._12_4_;
        auVar10 = _lqc2(*param_1);
        auVar9 = _lqc2(auVar9);
        auVar9 = _vadd(auVar10,auVar9);
        auVar9 = _sqc2(auVar9);
        auStack_90._8_4_ = auVar9._8_4_;
        auStack_90._12_4_ = auVar9._12_4_;
        uStack_b0 = auVar9._0_4_;
        uStack_ac = auVar9._4_4_;
        uStack_a8 = auStack_90._8_4_;
        uStack_a4 = auStack_90._12_4_;
        auVar11 = _lqc2(param_1[2]);
        auVar10 = _qmtc2(pfVar3[6]);
        auVar10 = _vmulbc(auVar11,auVar10);
        auStack_90 = _sqc2(auVar10);
        auVar9 = _lqc2(auVar9);
        auVar10 = _lqc2(auStack_90);
        auVar9 = _vadd(auVar9,auVar10);
        auVar9 = _sqc2(auVar9);
        auStack_80._8_4_ = auVar9._8_4_;
        auStack_80._12_4_ = auVar9._12_4_;
        uStack_b8 = auStack_80._8_4_;
        uStack_b4 = auStack_80._12_4_;
        auVar11 = _lqc2(param_1[3]);
        auVar10 = _qmtc2(fStack_c0 * 0.5);
        auVar10 = _vmulbc(auVar11,auVar10);
        auStack_80 = _sqc2(auVar10);
        auVar9 = _lqc2(auVar9);
        auVar10 = _lqc2(auStack_80);
        auVar9 = _vadd(auVar9,auVar10);
        auStack_70 = _sqc2(auVar9);
        uStack_d0 = auStack_70._0_4_;
        uStack_cc = auStack_70._4_4_;
        uStack_c8 = auStack_70._8_4_;
        uStack_c4 = auStack_70._12_4_;
        fStack_bc = fStack_c0;
        FUN_0011ed78(0x295e90,&uStack_d0,&fStack_c0,pfVar3 + 1,pfVar3 + 3,param_1 + 4);
        iVar2 = *(int *)param_1[0xd5];
      }
      else {
        iVar2 = *(int *)param_1[0xd5];
      }
      iVar4 = iVar4 + 1;
      if (iVar2 <= iVar4) break;
      iVar2 = *(int *)(param_1[0xd5] + 4);
    }
  }
  FUN_0011ed28(DAT_002c1740,0x295e90,0,2);
  FUN_0011ed38(0x295e90,0);
  FUN_0011ed08(0x295e90,0,0);
  FUN_0011ed48(0x295e90,3);
  return;
}

