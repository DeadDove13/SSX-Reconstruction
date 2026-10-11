/* Ghidra pseudocode. PS2 address: 001171d8. Not validated source. */

void FUN_001171d8(float param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_c0 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  
  iVar3 = (int)param_2;
  FUN_00115fc8(iVar3 + 0x970);
  if (*(int *)(param_3 + 0x260) != 2) {
    iVar1 = *(int *)(param_3 + 0x8584);
    iVar4 = (int)(param_1 * DAT_002c168c);
    if (iVar4 < 2) {
      iVar4 = 2;
    }
    else if (8 < iVar4) {
      iVar4 = 8;
    }
    fVar6 = (DAT_002c1694 - param_1 * DAT_002c1690) * 1.5;
    if (0 < iVar4) {
      fVar5 = 80.0;
      do {
        auStack_c0 = *(undefined1 (*) [16])(param_3 + 0xc0);
        iVar4 = iVar4 + -1;
        uVar2 = FUN_002109b0();
        auVar8 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x290));
        auVar7 = _qmtc2(((float)(uVar2 & 0x7fffff | 0x3f800000) - 1.0) * fVar5 + -40.0);
        auVar7 = _vmulbc(auVar8,auVar7);
        auStack_a0 = _sqc2(auVar7);
        uStack_b0 = auStack_a0._0_4_;
        uStack_ac = auStack_a0._4_4_;
        uStack_a8 = auStack_a0._8_4_;
        uStack_a4 = auStack_a0._12_4_;
        auVar7 = _lqc2(auStack_c0);
        auVar8 = _lqc2(auStack_a0);
        auVar7 = _vadd(auVar7,auVar8);
        auStack_c0 = _sqc2(auVar7);
        uVar2 = FUN_002109b0();
        auVar8 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x2a0));
        auVar7 = _qmtc2(((float)(uVar2 & 0x7fffff | 0x3f800000) - 1.0) * fVar5 + -40.0);
        auVar7 = _vmulbc(auVar8,auVar7);
        auStack_a0 = _sqc2(auVar7);
        uStack_b0 = auStack_a0._0_4_;
        uStack_ac = auStack_a0._4_4_;
        uStack_a8 = auStack_a0._8_4_;
        uStack_a4 = auStack_a0._12_4_;
        auVar7 = _lqc2(auStack_c0);
        auVar8 = _lqc2(auStack_a0);
        auVar7 = _vadd(auVar7,auVar8);
        auStack_c0 = _sqc2(auVar7);
        FUN_001173e0(DAT_002c1698,param_2,iVar1 + 0x470,auStack_c0,param_3 + 0x220,param_3 + 0xd0);
      } while (iVar4 != 0);
    }
    fVar6 = *(float *)(iVar3 + 0x96c) + fVar6;
    if (1.5 < fVar6) {
      fVar6 = 1.5;
    }
    *(float *)(iVar3 + 0x96c) = fVar6;
    *(undefined4 *)(iVar3 + 0x968) = 0x3f800000;
  }
  return;
}

