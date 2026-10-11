/* Ghidra pseudocode. PS2 address: 001180f0. Not validated source. */

void FUN_001180f0(int param_1)

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
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  
  iVar4 = 0;
  FUN_0011ed28(DAT_002c16f4,0x295e90,0,0);
  FUN_0011ed38(0x295e90,1);
  FUN_0011ed48(0x295e90,5);
  FUN_0011ed08(0x295e90,2,0);
  if (0 < *(int *)(param_1 + 0x1c10)) {
    iVar2 = *(int *)(param_1 + 0x1c14);
    while( true ) {
      iVar2 = iVar2 + iVar4;
      iVar1 = iVar2 + 0x3f;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      pfVar3 = (float *)(param_1 + (iVar2 + (iVar1 >> 6) * -0x40) * 0x70 + 0x10);
      if (*pfVar3 <= pfVar3[0x17]) {
        FUN_0011ecd8(0x295e90,*(undefined4 *)
                               (*(int *)(DAT_002859e4 + 0x7c) + ((int)pfVar3[0x10] + 0x18) * 4),1);
        fVar8 = pfVar3[0x17];
        fVar7 = *pfVar3;
        fStack_80 = pfVar3[0x18];
        fVar5 = (pfVar3[0x19] / fVar8) * fVar7;
        if (fStack_80 <= fVar5) {
          fStack_80 = fVar5;
        }
        fVar5 = pfVar3[0x16];
        if (fVar7 < fVar5) {
          fVar6 = pfVar3[0x11];
        }
        else {
          fVar6 = fVar8 - fVar7;
          fVar7 = pfVar3[0x11];
          fVar5 = fVar8 - fVar5;
        }
        pfVar3[0x12] = (fVar6 * fVar7) / fVar5;
        auVar10 = _lqc2(*(undefined1 (*) [16])(pfVar3 + 0xc));
        auVar9 = _qmtc2(fStack_80 * 0.5);
        auVar9 = _vmulbc(auVar10,auVar9);
        auVar9 = _sqc2(auVar9);
        auStack_70._8_4_ = auVar9._8_4_;
        auStack_70._12_4_ = auVar9._12_4_;
        uStack_78 = auStack_70._8_4_;
        uStack_74 = auStack_70._12_4_;
        auVar10 = _lqc2(*(undefined1 (*) [16])(pfVar3 + 8));
        auVar9 = _lqc2(auVar9);
        auVar9 = _vadd(auVar10,auVar9);
        auStack_70 = _sqc2(auVar9);
        uStack_90 = auStack_70._0_4_;
        uStack_8c = auStack_70._4_4_;
        uStack_88 = auStack_70._8_4_;
        uStack_84 = auStack_70._12_4_;
        fStack_7c = fStack_80;
        FUN_0011ed78(0x295e90,&uStack_90,&fStack_80,pfVar3 + 1,pfVar3 + 3,pfVar3 + 0x12);
        iVar2 = *(int *)(param_1 + 0x1c10);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x1c10);
      }
      iVar4 = iVar4 + 1;
      if (iVar2 <= iVar4) break;
      iVar2 = *(int *)(param_1 + 0x1c14);
    }
  }
  FUN_0011ed28(DAT_002c16f8,0x295e90,0,2);
  FUN_0011ed38(0x295e90,0);
  FUN_0011ed08(0x295e90,0,0);
  FUN_0011ed48(0x295e90,3);
  return;
}

