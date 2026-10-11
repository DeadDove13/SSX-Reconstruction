/* Ghidra pseudocode. PS2 address: 0010fc30. Not validated source. */

void FUN_0010fc30(undefined8 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  
  iVar2 = (int)param_1;
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x130));
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x20));
  _vopmula(auVar7,auVar8);
  auVar7 = _vopmsub(auVar8,auVar7);
  auVar7 = _vsub(auVar7,auVar7);
  auVar7 = _sqc2(auVar7);
  auVar7 = _lqc2(auVar7);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _vmul(auVar7,auVar7);
  _vaddabc(auVar8,auVar8);
  _vmaddabc(auVar9,auVar8);
  auVar8 = _vmaddbc(auVar9,auVar8);
  _vrsqrt(in_vf0,auVar8);
  uVar11 = _vwaitq();
  auVar7 = _vmulq(auVar7,uVar11);
  auVar7 = _sqc2(auVar7);
  auVar8 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x130));
  auVar9 = _lqc2(auVar7);
  _vopmula(auVar8,auVar9);
  auVar8 = _vopmsub(auVar9,auVar8);
  auVar8 = _vsub(auVar8,auVar8);
  auVar8 = _sqc2(auVar8);
  auVar9 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x110));
  auVar8 = _lqc2(auVar8);
  auVar10 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _vmul(auVar9,auVar8);
  _vaddabc(auVar8,auVar8);
  _vmaddabc(auVar10,auVar8);
  auVar8 = _vmaddbc(auVar10,auVar8);
  auVar8 = _qmfc2(auVar8._0_4_);
  fVar4 = auVar8._0_4_;
  auVar8 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x110));
  auVar7 = _lqc2(auVar7);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _vmul(auVar8,auVar7);
  _vaddabc(auVar7,auVar7);
  _vmaddabc(auVar9,auVar7);
  auVar7 = _vmaddbc(auVar9,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  puVar3 = auVar7._0_4_;
  if (fVar4 == 0.0) {
    if (((float)puVar3 != 0.0) && (bVar1 = (float)puVar3 < 0.0, puVar3 = DAT_002c12e8, bVar1)) {
      puVar3 = PTR_DAT_002c12e4;
    }
  }
  else {
    puVar6 = puVar3;
    puVar3 = (undefined *)FUN_00218510((float)puVar3 / fVar4);
    if (fVar4 < 0.0) {
      if (0.0 < (float)puVar6) {
        puVar3 = (undefined *)((float)puVar3 + DAT_002c12ec);
      }
      else {
        puVar3 = (undefined *)((float)puVar3 - DAT_002c12f0);
      }
    }
  }
  if (0.0 < (float)puVar3) {
    fVar4 = DAT_002c12f4 - (float)puVar3;
    if (0.0 <= fVar4) {
      fVar5 = DAT_002c12f8;
      if (fVar4 <= DAT_002c12f8) goto LAB_0010fe04;
    }
    else {
      fVar5 = 0.0;
    }
  }
  else {
    fVar4 = DAT_002c12fc - (float)puVar3;
    fVar5 = DAT_002c1300;
    if (DAT_002c1300 <= fVar4) {
      if (fVar4 <= 0.0) goto LAB_0010fe04;
      fVar5 = 0.0;
    }
  }
  fVar4 = fVar5;
LAB_0010fe04:
  if (fVar4 != 0.0) {
    FUN_001129e8(-fVar4,param_1,iVar2 + 0x130);
  }
  return;
}

