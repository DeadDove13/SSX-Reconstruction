/* Ghidra pseudocode. PS2 address: 001100d8. Not validated source. */

void FUN_001100d8(int param_1,undefined1 (*param_2) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar5 = _lqc2(*param_2);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x270));
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmul(auVar5,auVar6);
  _vaddabc(auVar5,auVar5);
  _vmaddabc(auVar7,auVar5);
  auVar5 = _vmaddbc(auVar7,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  if (0.0 < auVar5._0_4_) {
    fVar4 = 1.0 - auVar5._0_4_;
  }
  else {
    fVar4 = 1.0;
  }
  *(float *)(param_1 + 0x264) = *(float *)(param_1 + 0x264) + fVar4;
  uVar1 = *(undefined4 *)(*param_2 + 4);
  uVar2 = *(undefined4 *)(*param_2 + 8);
  uVar3 = *(undefined4 *)(*param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)*param_2;
  *(undefined4 *)(param_1 + 0x274) = uVar1;
  *(undefined4 *)(param_1 + 0x278) = uVar2;
  *(undefined4 *)(param_1 + 0x27c) = uVar3;
  return;
}

