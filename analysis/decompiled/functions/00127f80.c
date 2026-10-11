/* Ghidra pseudocode. PS2 address: 00127f80. Not validated source. */

void FUN_00127f80(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  undefined1 (*pauVar3) [16];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uStack_7c;
  float fStack_78;
  undefined4 uStack_64;
  undefined4 uStack_54;
  
  fVar4 = DAT_002c1b38;
  pauVar3 = (undefined1 (*) [16])(param_1 + *(int *)(param_2 + 0x390) * 0x10 + 0x120);
  if (*(float *)*pauVar3 == DAT_002c1b34) {
    auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x40));
    auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x110));
    auVar7 = _vsub(auVar7,auVar8);
    auVar7 = _sqc2(auVar7);
    fStack_78 = auVar7._8_4_;
    fVar2 = fStack_78;
    auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x40));
    auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x110));
    auVar8 = _vadd(auVar8,auVar9);
    auVar8 = _sqc2(auVar8);
    auVar9 = _lqc2(auVar8);
    auVar8 = _qmtc2(0x3f000000);
    auVar8 = _vmulbc(auVar9,auVar8);
    auVar8 = _sqc2(auVar8);
    uStack_54 = auVar8._12_4_;
    fStack_78 = auVar8._8_4_;
    *(int *)*pauVar3 = auVar8._0_4_;
    *(int *)(*pauVar3 + 4) = auVar8._4_4_;
    *(float *)(*pauVar3 + 8) = fStack_78;
    *(undefined4 *)(*pauVar3 + 0xc) = uStack_54;
    fVar6 = ABS(auVar7._0_4_) * 0.5;
    fVar5 = ABS(auVar7._4_4_) * 0.5;
    if (fVar4 < fVar6) {
      fVar6 = (float)FUN_00210a00(-fVar6);
      *(float *)*pauVar3 = *(float *)*pauVar3 + fVar6;
    }
    if (fVar4 < fVar5) {
      fVar5 = (float)FUN_00210a00(-fVar5);
      *(float *)(*pauVar3 + 4) = *(float *)(*pauVar3 + 4) + fVar5;
    }
    if (fVar4 < ABS(fVar2) * 0.5) {
      fVar4 = (float)FUN_00210a00(-(ABS(fVar2) * 0.5));
      *(float *)(*pauVar3 + 8) = *(float *)(*pauVar3 + 8) + fVar4;
    }
    auVar7 = _lqc2(*pauVar3);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar8 = _vmul(auVar7,auVar7);
    _vaddabc(auVar8,auVar8);
    _vmaddabc(auVar9,auVar8);
    auVar8 = _vmaddbc(auVar9,auVar8);
    _vrsqrt(in_vf0,auVar8);
    uVar10 = _vwaitq();
    auVar7 = _vmulq(auVar7,uVar10);
    auVar7 = _sqc2(auVar7);
    uStack_64 = auVar7._12_4_;
    uStack_7c = auVar7._4_4_;
    fStack_78 = auVar7._8_4_;
    *(int *)*pauVar3 = auVar7._0_4_;
    *(undefined4 *)(*pauVar3 + 4) = uStack_7c;
    *(float *)(*pauVar3 + 8) = fStack_78;
    *(undefined4 *)(*pauVar3 + 0xc) = uStack_64;
    fVar4 = *(float *)(param_1 + 0x50);
  }
  else {
    fVar4 = *(float *)(param_1 + 0x50);
  }
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xd0));
  auVar8 = _lqc2(*pauVar3);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _vmul(auVar7,auVar8);
  _vaddabc(auVar7,auVar7);
  _vmaddabc(auVar9,auVar7);
  auVar7 = _vmaddbc(auVar9,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  fVar4 = fVar4 - auVar7._0_4_;
  if (0.0 < fVar4) {
    auVar8 = _lqc2(*pauVar3);
    auVar7 = _qmtc2(fVar4 * *(float *)(param_1 + 0x54) * DAT_002c1b3c);
    auVar7 = _vmulbc(auVar8,auVar7);
    auVar7 = _sqc2(auVar7);
    auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xd0));
    auVar7 = _lqc2(auVar7);
    auVar7 = _vadd(auVar8,auVar7);
    auVar7 = _sqc2(auVar7);
    *(undefined1 (*) [16])(param_2 + 0xd0) = auVar7;
    iVar1 = *(int *)(param_2 + 0x390);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x390);
  }
  *(undefined1 *)(param_1 + iVar1 + 0x180) = 1;
  return;
}

