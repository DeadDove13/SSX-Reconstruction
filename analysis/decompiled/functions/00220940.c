/* Ghidra pseudocode. PS2 address: 00220940. Not validated source. */

void FUN_00220940(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 (*param_5) [16],undefined8 param_6,undefined8 param_7,undefined8 param_8
                 )

{
  short sVar1;
  int iVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_a0 [16];
  
  pauVar4 = &auStack_a0;
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x60));
  auVar6 = _lqc2(*param_5);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmul(auVar5,auVar6);
  _vaddabc(auVar5,auVar5);
  _vmaddabc(auVar7,auVar5);
  auVar5 = _vmaddbc(auVar7,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  if (auVar5._0_4_ < 0.0) {
    iVar2 = *(int *)(param_1 + 0x40);
    sVar1 = *(short *)(iVar2 + 0x28);
    FUN_001110c0(0xbf800000,auStack_a0,param_5);
    pcVar3 = *(code **)(iVar2 + 0x2c);
  }
  else {
    sVar1 = *(short *)(*(int *)(param_1 + 0x40) + 0x28);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x40) + 0x2c);
    pauVar4 = param_5;
  }
  (*pcVar3)(param_1 + sVar1,param_2,param_3,param_4,pauVar4,param_6,param_7,param_8);
  return;
}

