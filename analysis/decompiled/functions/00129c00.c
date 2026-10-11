/* Ghidra pseudocode. PS2 address: 00129c00. Not validated source. */

undefined8
FUN_00129c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,int param_5
            )

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  FUN_00122128(param_1,param_2,0xc,param_3);
  iVar2 = 0xf;
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 8) = &DAT_002a9600;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  iVar2 = 0xf;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  iVar2 = 0xf;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  *(undefined4 *)(iVar3 + 0x50) = param_4;
  FUN_0012a310(param_1);
  if (*(int *)(iVar3 + 0x54) == 0) {
    auVar4 = _lqc2(*(undefined1 (*) [16])(param_5 + 0x20));
    auVar5 = _lqc2(*(undefined1 (*) [16])(param_5 + 0x10));
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _vmul(auVar4,auVar5);
    _vaddabc(auVar4,auVar4);
    _vmaddabc(auVar6,auVar4);
    auVar4 = _vmaddbc(auVar6,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    fVar1 = auVar4._0_4_;
  }
  else {
    auVar4 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar3 + 0x54) + 0x40));
    auVar5 = _lqc2(*(undefined1 (*) [16])(param_5 + 0x10));
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _vmul(auVar4,auVar5);
    _vaddabc(auVar4,auVar4);
    _vmaddabc(auVar6,auVar4);
    auVar4 = _vmaddbc(auVar6,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    fVar1 = auVar4._0_4_;
  }
  FUN_0012a628(fVar1 * ABS(*(float *)(param_5 + 0x30)) * DAT_002c1b54,param_1);
  if (*(int *)(iVar3 + 0x260) != 0) {
    FUN_00129fc0(param_1,*(int *)(iVar3 + 0x260),1);
  }
  if (*(int *)(iVar3 + 0x264) != 0) {
    FUN_00129fc0(param_1,*(int *)(iVar3 + 0x264),0);
  }
  return param_1;
}

