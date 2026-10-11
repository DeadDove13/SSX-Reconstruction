/* Ghidra pseudocode. PS2 address: 001c2510. Not validated source. */

void FUN_001c2510(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_c0 [8];
  float fStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  
  if (*(int *)(DAT_002859e4 + 0x70) != 0) {
    iVar2 = (int)param_1;
    if (*(float *)(*(int *)(*(int *)(DAT_002859e4 + 0x290) * 0x80 + DAT_002859e4 + 0xa4) + 0x18) !=
        *(float *)(iVar2 + 0x4b4)) {
      FUN_001c1ef0(param_1);
    }
    uVar1 = DAT_002c35a8;
    fVar5 = *(float *)(iVar2 + 0x4b8);
    auVar7 = _lqc2(*(undefined1 (*) [16])
                    (DAT_002859e4 + *(int *)(DAT_002859e4 + 0x290) * 0x80 + 0xb0));
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x490));
    auVar7 = _vsub(auVar7,auVar8);
    _auStack_c0 = _sqc2(auVar7);
    fVar4 = (float)auStack_c0._0_4_ / fVar5 + 0.5;
    fVar3 = (float)(int)fVar4;
    if (fVar4 < fVar3) {
      fVar3 = fVar3 - 1.0;
    }
    fVar4 = (float)auStack_c0._4_4_ / fVar5 + 0.5;
    fVar6 = (float)(int)fVar4;
    if (fVar4 < fVar6) {
      fVar6 = fVar6 - 1.0;
    }
    fVar4 = fStack_b8 / fVar5 + 0.5;
    fVar5 = (float)(int)fVar4;
    if (fVar4 < fVar5) {
      fVar5 = fVar5 - 1.0;
    }
    FUN_0011ed38(0x295e90,1);
    FUN_0011ed28(uVar1,0x295e90,0,0);
    FUN_0011ed48(0x295e90,5);
    FUN_0011ecd8(0x295e90,*(undefined4 *)(*(int *)(DAT_002859e4 + 0x7c) + 0x4c),1);
    uStack_94 = 0;
    fStack_a0 = (float)(int)fVar3;
    fStack_9c = (float)(int)fVar6;
    fStack_98 = (float)(int)fVar5;
    auVar7._4_4_ = fStack_9c;
    auVar7._0_4_ = fStack_a0;
    auVar7._8_4_ = fStack_98;
    auVar7._12_4_ = 0;
    auVar8 = _lqc2(auVar7);
    auVar7 = _qmtc2(*(undefined4 *)(iVar2 + 0x4b8));
    auVar7 = _vmulbc(auVar8,auVar7);
    auVar7 = _sqc2(auVar7);
    auStack_90._0_4_ = auVar7._0_4_;
    auStack_90._4_4_ = auVar7._4_4_;
    auStack_90._8_4_ = auVar7._8_4_;
    auStack_90._12_4_ = auVar7._12_4_;
    uStack_b0 = auStack_90._0_4_;
    uStack_ac = auStack_90._4_4_;
    uStack_a8 = auStack_90._8_4_;
    uStack_a4 = auStack_90._12_4_;
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x490));
    auVar7 = _lqc2(auVar7);
    auVar7 = _vadd(auVar8,auVar7);
    _auStack_c0 = _sqc2(auVar7);
    auStack_90 = _auStack_c0;
    FUN_001c2188(param_1,auStack_c0,(int)fVar3,(int)fVar6,(int)fVar5,0,0);
    FUN_0011ed28(uVar1,0x295e90,0,2);
    FUN_0011ed38(0x295e90,0);
  }
  return;
}

