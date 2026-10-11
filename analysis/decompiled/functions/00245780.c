/* Ghidra pseudocode. PS2 address: 00245780. Not validated source. */

void FUN_00245780(undefined4 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar2 = _pextlw(SUB168(param_2[1],0),SUB168(*param_2,0));
  auVar3 = _pextuw(param_2[1],*param_2);
  auVar4 = _pextlw(SUB168(param_2[3],0),SUB168(param_2[2],0));
  auVar5 = _pextuw(param_2[3],param_2[2]);
  auVar1 = _pcpyld(auVar4,auVar2);
  auVar2 = _pcpyud(auVar2,auVar4);
  auVar4 = _pcpyld(auVar5,auVar3);
  auVar3 = _pcpyud(auVar3,auVar5);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = auVar1._12_4_;
  param_1[4] = auVar2._0_4_;
  param_1[5] = auVar2._4_4_;
  param_1[6] = auVar2._8_4_;
  param_1[7] = auVar2._12_4_;
  param_1[8] = auVar4._0_4_;
  param_1[9] = auVar4._4_4_;
  param_1[10] = auVar4._8_4_;
  param_1[0xb] = auVar4._12_4_;
  param_1[0xc] = auVar3._0_4_;
  param_1[0xd] = auVar3._4_4_;
  param_1[0xe] = auVar3._8_4_;
  param_1[0xf] = auVar3._12_4_;
  return;
}

