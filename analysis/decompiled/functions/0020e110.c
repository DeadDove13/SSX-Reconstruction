/* Ghidra pseudocode. PS2 address: 0020e110. Not validated source. */

undefined8
FUN_0020e110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 (*param_5) [16],undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  float fVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 auStack_b0 [4];
  undefined1 auStack_a0 [16];
  
  auVar3 = _lqc2(*(undefined1 (*) [16])((int)param_1 + 0x90));
  auVar4 = _lqc2(*(undefined1 (*) [16])param_2);
  auVar3 = _vsub(auVar3,auVar4);
  auStack_a0 = _sqc2(auVar3);
  auStack_b0[0] = auStack_a0._0_4_;
  auStack_b0[1] = auStack_a0._4_4_;
  auStack_b0[2] = auStack_a0._8_4_;
  auStack_b0[3] = auStack_a0._12_4_;
  auVar3 = _lqc2(*param_5);
  auVar4 = _lqc2(auStack_a0);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vmul(auVar3,auVar4);
  _vaddabc(auVar3,auVar3);
  _vmaddabc(auVar5,auVar3);
  auVar3 = _vmaddbc(auVar5,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  fVar2 = (float)FUN_0020e740();
  uVar1 = 0;
  if (ABS(auVar3._0_4_) <= fVar2) {
    if (auVar3._0_4_ < 0.0) {
      FUN_001110c0(0xbf800000,auStack_b0,param_5);
      param_5 = (undefined1 (*) [16])auStack_b0;
    }
    uVar1 = FUN_0020ee10(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return uVar1;
}

