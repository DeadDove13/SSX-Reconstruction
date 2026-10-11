/* Ghidra pseudocode. PS2 address: 0011f008. Not validated source. */

float FUN_0011f008(int *param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  
  iVar1 = *param_1;
  auVar5 = _lqc2(*param_2);
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xc0));
  auVar5 = _vsub(auVar5,auVar6);
  auVar5 = _sqc2(auVar5);
  auVar5 = _lqc2(auVar5);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vmul(auVar5,auVar5);
  _vaddabc(auVar6,auVar6);
  _vmaddabc(auVar7,auVar6);
  auVar6 = _vmaddbc(auVar7,auVar6);
  _vrsqrt(in_vf0,auVar6);
  uVar9 = _vwaitq();
  auVar5 = _vmulq(auVar5,uVar9);
  auVar5 = _sqc2(auVar5);
  auVar6 = _lqc2(auVar5);
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x130));
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vmul(auVar6,auVar7);
  _vaddabc(auVar6,auVar6);
  _vmaddabc(auVar8,auVar6);
  auVar6 = _vmaddbc(auVar8,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x130));
  auVar6 = _qmtc2(auVar6._0_4_);
  auVar6 = _vmulbc(auVar7,auVar6);
  auVar6 = _sqc2(auVar6);
  auVar5 = _lqc2(auVar5);
  auVar6 = _lqc2(auVar6);
  auVar5 = _vsub(auVar5,auVar6);
  auVar5 = _sqc2(auVar5);
  auVar5 = _lqc2(auVar5);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vmul(auVar5,auVar5);
  _vaddabc(auVar6,auVar6);
  _vmaddabc(auVar7,auVar6);
  auVar6 = _vmaddbc(auVar7,auVar6);
  _vrsqrt(in_vf0,auVar6);
  uVar9 = _vwaitq();
  auVar5 = _vmulq(auVar5,uVar9);
  auVar5 = _sqc2(auVar5);
  auVar6 = _lqc2(auVar5);
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x110));
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vmul(auVar6,auVar7);
  _vaddabc(auVar6,auVar6);
  _vmaddabc(auVar8,auVar6);
  auVar6 = _vmaddbc(auVar8,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  fVar3 = auVar6._0_4_;
  auVar5 = _lqc2(auVar5);
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x120));
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmul(auVar5,auVar6);
  _vaddabc(auVar5,auVar5);
  _vmaddabc(auVar7,auVar5);
  auVar5 = _vmaddbc(auVar7,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  fVar2 = auVar5._0_4_;
  if (fVar3 == 0.0) {
    if (fVar2 != 0.0) {
      if (0.0 <= fVar2) {
        fVar2 = -DAT_002c1954;
      }
      else {
        fVar2 = -(float)PTR_DAT_002c1950;
      }
      goto LAB_0011f1d4;
    }
  }
  else {
    fVar4 = fVar2;
    fVar2 = (float)FUN_00218510(fVar2 / fVar3);
    if (fVar3 < 0.0) {
      if (0.0 < fVar4) {
        fVar2 = fVar2 + DAT_002c1958;
      }
      else {
        fVar2 = fVar2 - DAT_002c195c;
      }
    }
  }
  fVar2 = -fVar2;
LAB_0011f1d4:
  fVar3 = ABS(fVar2) * DAT_002c1960;
  if ((float)param_1[0x227] != 1.0) {
    fVar3 = fVar3 * ((float)param_1[0x227] / DAT_002c1964);
  }
  if (fVar3 < DAT_002c1968) {
    fVar3 = 0.0;
  }
  else {
    if (DAT_002c196c < fVar3) {
      fVar3 = DAT_002c196c;
    }
    if (fVar2 < 0.0) {
      fVar3 = -fVar3;
    }
  }
  return fVar3;
}

