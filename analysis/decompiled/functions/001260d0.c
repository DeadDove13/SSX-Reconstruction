/* Ghidra pseudocode. PS2 address: 001260d0. Not validated source. */

void FUN_001260d0(int param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [8];
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 auStack_270 [8];
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 auStack_250 [432];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  FUN_00224130(auStack_250,param_1 + 0x150,1);
  fVar4 = (float)FUN_001223c8(param_2,auStack_250,auStack_290);
  if (0.0 < fVar4) {
    iVar3 = (int)param_2;
    lVar1 = (**(code **)(*(int *)(iVar3 + 8) + 100))(iVar3 + *(short *)(*(int *)(iVar3 + 8) + 0x60))
    ;
    if (lVar1 != 0) {
      uStack_a0 = auStack_280._0_4_;
      uStack_9c = auStack_280._4_4_;
      uStack_98 = uStack_278;
      uStack_94 = uStack_274;
      auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
      auVar6 = _vaddbc(in_vf0,in_vf0);
      auVar5 = _vmul(auVar5,auVar5);
      _vaddabc(auVar5,auVar5);
      _vmaddabc(auVar6,auVar5);
      auVar5 = _vmaddbc(auVar6,auVar5);
      _vsqrt(auVar5);
      _vwaitq();
      uVar2 = _cfc2(in_vc6);
      uStack_70 = (undefined4)uVar2;
      uStack_90 = auStack_270._0_4_;
      uStack_8c = auStack_270._4_4_;
      uStack_88 = uStack_268;
      uStack_84 = uStack_264;
      uStack_78 = uStack_268;
      uStack_74 = uStack_264;
      uStack_80 = uStack_90;
      uStack_7c = uStack_8c;
      (**(code **)(*(int *)(iVar3 + 8) + 0x9c))
                (iVar3 + *(short *)(*(int *)(iVar3 + 8) + 0x98),&uStack_a0,auStack_290);
    }
    FUN_00136138(DAT_002c1b1c,0,param_1 + 0x30,auStack_280,auStack_270);
  }
  FUN_00224560(auStack_250,2);
  return;
}

