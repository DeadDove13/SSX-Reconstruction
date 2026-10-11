/* Ghidra pseudocode. PS2 address: 001dc530. Not validated source. */

void FUN_001dc530(float param_1,float param_2,float param_3,int *param_4,int param_5,int param_6,
                 undefined1 (*param_7) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_4 = param_5;
  param_4[3] = (int)((param_1 * param_3) / (float)param_5);
  auVar1 = _qmtc2(param_3);
  _vdiv(in_vf0,0,auVar1,0);
  auVar1 = _lqc2(*param_7);
  uVar3 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar3);
  auVar1 = _sqc2(auVar1);
  auVar2 = _qmtc2(param_3);
  _vdiv(in_vf0,0,auVar2,0);
  auVar1 = _lqc2(auVar1);
  uVar3 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar3);
  auVar1 = _sqc2(auVar1);
  iStack_10 = auVar1._0_4_;
  iStack_c = auVar1._4_4_;
  iStack_8 = auVar1._8_4_;
  iStack_4 = auVar1._12_4_;
  param_4[0x14] = iStack_10;
  param_4[0x15] = iStack_c;
  param_4[0x16] = iStack_8;
  param_4[0x17] = iStack_4;
  param_4[8] = (int)(1.0 / (float)param_6);
  param_4[9] = (int)(param_2 * param_3);
  param_4[0xf] = (int)param_3;
  param_4[1] = param_6;
  param_4[0x48] = 0;
  param_4[0x49] = 0;
  param_4[0x4a] = 0;
  param_4[0x4b] = 0;
  param_4[0x4c] = 0x3f800000;
  param_4[0x4d] = 0x3f800000;
  param_4[0x4e] = 0;
  param_4[0x4f] = 0;
  return;
}

