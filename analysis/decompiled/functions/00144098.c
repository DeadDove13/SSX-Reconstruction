/* Ghidra pseudocode. PS2 address: 00144098. Not validated source. */

void FUN_00144098(int param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_3d0 [16];
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined1 auStack_390 [768];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  
  FUN_0021b888(auStack_390,*(int *)(param_1 + 0x60) + 0x3a0,1);
  fVar4 = (float)FUN_001223c8(param_2,auStack_390,auStack_3d0);
  if (0.0 < fVar4) {
    auVar5._8_4_ = uStack_3b8;
    auVar5._0_8_ = uStack_3c0;
    auVar5._12_4_ = uStack_3b4;
    auVar5 = _lqc2(auVar5);
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
    auVar5 = _vsub(auVar5,auVar6);
    auVar5 = _sqc2(auVar5);
    auStack_60._8_4_ = auVar5._8_4_;
    auStack_60._12_4_ = auVar5._12_4_;
    uStack_70 = auVar5._0_4_;
    uStack_6c = auVar5._4_4_;
    uStack_68 = auStack_60._8_4_;
    uStack_64 = auStack_60._12_4_;
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xf0));
    auVar5 = _lqc2(auVar5);
    _vopmula(auVar6,auVar5);
    auVar5 = _vopmsub(auVar5,auVar6);
    auVar5 = _vsub(auVar5,auVar5);
    auVar5 = _sqc2(auVar5);
    auStack_60._8_4_ = auVar5._8_4_;
    auStack_60._12_4_ = auVar5._12_4_;
    uStack_80 = auVar5._0_4_;
    uStack_7c = auVar5._4_4_;
    uStack_78 = auStack_60._8_4_;
    uStack_74 = auStack_60._12_4_;
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xe0));
    auVar5 = _lqc2(auVar5);
    auVar5 = _vadd(auVar6,auVar5);
    auStack_60 = _sqc2(auVar5);
    uStack_90 = auStack_60._0_4_;
    uStack_8c = auStack_60._4_4_;
    uStack_88 = auStack_60._8_4_;
    uStack_84 = auStack_60._12_4_;
    auVar5 = _lqc2(auStack_60);
    auVar6._8_4_ = uStack_3a8;
    auVar6._0_8_ = uStack_3b0;
    auVar6._12_4_ = uStack_3a4;
    auVar6 = _lqc2(auVar6);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar5 = _vmul(auVar5,auVar6);
    _vaddabc(auVar5,auVar5);
    _vmaddabc(auVar7,auVar5);
    auVar5 = _vmaddbc(auVar7,auVar5);
    auVar5 = _qmfc2(auVar5._0_4_);
    if (auVar5._0_4_ < 0.0) {
      FUN_00136138(DAT_002c22e0,param_1 + 0x70,&uStack_3c0,&uStack_3b0);
      iVar3 = (int)param_2;
      lVar1 = (**(code **)(*(int *)(iVar3 + 8) + 100))
                        (iVar3 + *(short *)(*(int *)(iVar3 + 8) + 0x60));
      if (lVar1 != 0) {
        uStack_90 = (undefined4)uStack_3c0;
        uStack_8c = (undefined4)((ulong)uStack_3c0 >> 0x20);
        uStack_88 = uStack_3b8;
        uStack_84 = uStack_3b4;
        auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xe0));
        auVar6 = _vaddbc(in_vf0,in_vf0);
        auVar5 = _vmul(auVar5,auVar5);
        _vaddabc(auVar5,auVar5);
        _vmaddabc(auVar6,auVar5);
        auVar5 = _vmaddbc(auVar6,auVar5);
        _vsqrt(auVar5);
        _vwaitq();
        uVar2 = _cfc2(in_vc6);
        uStack_80 = (undefined4)uStack_3b0;
        uStack_7c = (undefined4)((ulong)uStack_3b0 >> 0x20);
        uStack_78 = uStack_3a8;
        uStack_74 = uStack_3a4;
        uStack_68 = uStack_3a8;
        uStack_64 = uStack_3a4;
        auStack_60._0_4_ = (int)uVar2;
        uStack_70 = uStack_80;
        uStack_6c = uStack_7c;
        (**(code **)(*(int *)(iVar3 + 8) + 0x9c))
                  (iVar3 + *(short *)(*(int *)(iVar3 + 8) + 0x98),&uStack_90,auStack_3d0);
      }
    }
  }
  FUN_0021bd40(auStack_390,2);
  return;
}

