/* Ghidra pseudocode. PS2 address: 0020b7f0. Not validated source. */

undefined8 FUN_0020b7f0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_14;
  undefined4 uStack_4;
  
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x10));
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
  auVar6 = _vsub(auVar6,auVar7);
  auVar6 = _sqc2(auVar6);
  fVar5 = *(float *)(param_2 + 0x20) + *(float *)(param_1 + 0x20);
  auVar7 = _lqc2(auVar6);
  auVar6 = _lqc2(auVar6);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vmul(auVar7,auVar6);
  _vaddabc(auVar6,auVar6);
  _vmaddabc(auVar8,auVar6);
  auVar6 = _vmaddbc(auVar8,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  if (auVar6._0_4_ < fVar5 * fVar5) {
    piVar1 = (int *)(param_1 + 0x28);
    iVar4 = 0;
    if (0 < *piVar1) {
      do {
        iVar3 = 0;
        iVar2 = param_2;
        if (0 < *(int *)(param_2 + 0x28)) {
          do {
            auVar6 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x30));
            auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
            auVar6 = _vsub(auVar6,auVar7);
            auVar6 = _sqc2(auVar6);
            fVar5 = *(float *)(iVar2 + 0x40) + *(float *)(param_1 + 0x40);
            auVar7 = _lqc2(auVar6);
            auVar8 = _lqc2(auVar6);
            auVar9 = _vaddbc(in_vf0,in_vf0);
            auVar7 = _vmul(auVar7,auVar8);
            _vaddabc(auVar7,auVar7);
            _vmaddabc(auVar9,auVar7);
            auVar7 = _vmaddbc(auVar9,auVar7);
            auVar7 = _qmfc2(auVar7._0_4_);
            if (auVar7._0_4_ < fVar5 * fVar5) {
              auVar6 = _lqc2(auVar6);
              auVar9 = _vaddbc(in_vf0,in_vf0);
              auVar8 = _vmul(auVar6,auVar6);
              _vaddabc(auVar8,auVar8);
              _vmaddabc(auVar9,auVar8);
              auVar8 = _vmaddbc(auVar9,auVar8);
              _vrsqrt(in_vf0,auVar8);
              uVar10 = _vwaitq();
              auVar6 = _vmulq(auVar6,uVar10);
              auVar6 = _sqc2(auVar6);
              fVar5 = fVar5 - SQRT(auVar7._0_4_);
              auVar8 = _lqc2(auVar6);
              auVar7 = _qmtc2(fVar5);
              auVar7 = _vmulbc(auVar8,auVar7);
              auVar7 = _sqc2(auVar7);
              uStack_14 = auVar7._12_4_;
              uStack_30 = auVar7._0_4_;
              uStack_2c = auVar7._4_4_;
              uStack_28 = auVar7._8_4_;
              *param_3 = uStack_30;
              param_3[1] = uStack_2c;
              param_3[2] = uStack_28;
              param_3[3] = uStack_14;
              auVar7 = _lqc2(auVar6);
              auVar6 = _qmtc2(*(float *)(param_1 + 0x40) - fVar5);
              auVar6 = _vmulbc(auVar7,auVar6);
              auVar6 = _sqc2(auVar6);
              auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
              auVar6 = _lqc2(auVar6);
              auVar6 = _vsub(auVar7,auVar6);
              auVar6 = _sqc2(auVar6);
              uStack_4 = auVar6._12_4_;
              uStack_30 = auVar6._0_4_;
              uStack_2c = auVar6._4_4_;
              uStack_28 = auVar6._8_4_;
              *param_4 = uStack_30;
              param_4[1] = uStack_2c;
              param_4[2] = uStack_28;
              param_4[3] = uStack_4;
              return 1;
            }
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 0x20;
          } while (iVar3 < *(int *)(param_2 + 0x28));
        }
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 0x20;
      } while (iVar4 < *piVar1);
    }
  }
  return 0;
}

