/* Ghidra pseudocode. PS2 address: 001c5c20. Not validated source. */

undefined8 FUN_001c5c20(undefined8 param_1,int param_2,undefined1 (*param_3) [16])

{
  undefined4 *puVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar1 = (undefined4 *)param_1;
  auVar8 = _lqc2(*param_3);
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x180));
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_2 + 400));
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x1a0));
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x1b0));
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x1c0));
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x1d0));
  _vmulabc(auVar2,auVar8);
  _vmaddabc(auVar3,auVar8);
  _vmaddabc(auVar4,auVar8);
  auVar2 = _vmaddbc(auVar5,auVar8);
  _vdiv(in_vf0,0,auVar2,0);
  uVar9 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar9);
  _vmula(auVar6,auVar2);
  auVar2 = _vmaddbc(auVar7,in_vf0);
  auVar2 = _sqc2(auVar2);
  uStack_10 = auVar2._0_4_;
  uStack_c = auVar2._4_4_;
  uStack_8 = auVar2._8_4_;
  uStack_4 = auVar2._12_4_;
  *puVar1 = uStack_10;
  puVar1[1] = uStack_c;
  puVar1[2] = uStack_8;
  puVar1[3] = uStack_4;
  return param_1;
}

