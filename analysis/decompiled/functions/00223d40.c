/* Ghidra pseudocode. PS2 address: 00223d40. Not validated source. */

undefined8
FUN_00223d40(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 (*param_5) [16],undefined8 param_6,undefined4 *param_7,float *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uVar1 = DAT_002c3f70;
  puVar7 = (undefined4 *)param_6;
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x50));
  auVar9 = _lqc2(*(undefined1 (*) [16])param_2);
  auVar8 = _vsub(auVar8,auVar9);
  auVar8 = _sqc2(auVar8);
  auVar9 = _lqc2(*param_5);
  auVar8 = _lqc2(auVar8);
  auVar10 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _vmul(auVar9,auVar8);
  _vaddabc(auVar8,auVar8);
  _vmaddabc(auVar10,auVar8);
  auVar8 = _vmaddbc(auVar10,auVar8);
  auVar8 = _qmfc2(auVar8._0_4_);
  fVar4 = auVar8._0_4_;
  uVar6 = 0;
  if (ABS(fVar4) < *(float *)(param_1 + 0x60)) {
    auVar9 = _lqc2(*param_5);
    auVar8 = _qmtc2(fVar4);
    auVar8 = _vmulbc(auVar9,auVar8);
    auVar8 = _sqc2(auVar8);
    auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x50));
    auVar8 = _lqc2(auVar8);
    auVar8 = _vsub(auVar9,auVar8);
    auVar8 = _sqc2(auVar8);
    uStack_68 = auVar8._8_4_;
    uStack_64 = auVar8._12_4_;
    *puVar7 = auVar8._0_4_;
    puVar7[1] = auVar8._4_4_;
    puVar7[2] = uStack_68;
    puVar7[3] = uStack_64;
    lVar5 = FUN_002100f0(uVar1,param_2,param_3,param_4,param_6);
    uVar6 = 0;
    if (lVar5 != 0) {
      uVar1 = *(undefined4 *)(*param_5 + 4);
      uVar2 = *(undefined4 *)(*param_5 + 8);
      uVar3 = *(undefined4 *)(*param_5 + 0xc);
      *param_7 = *(undefined4 *)*param_5;
      param_7[1] = uVar1;
      param_7[2] = uVar2;
      param_7[3] = uVar3;
      uVar6 = 1;
      *param_8 = *(float *)(param_1 + 0x60) - fVar4;
    }
  }
  return uVar6;
}

