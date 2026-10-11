/* Ghidra pseudocode. PS2 address: 001261f8. Not validated source. */

void FUN_001261f8(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  lVar1 = (**(code **)(*(int *)(param_1 + 8) + 100))
                    (param_1 + *(short *)(*(int *)(param_1 + 8) + 0x60));
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
    auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
    auVar5 = _vaddbc(in_vf0,in_vf0);
    auVar3 = _vmul(auVar3,auVar4);
    _vaddabc(auVar3,auVar3);
    _vmaddabc(auVar5,auVar3);
    auVar3 = _vmaddbc(auVar5,auVar3);
    auVar3 = _qmfc2(auVar3._0_4_);
    auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xb0));
    auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _vmul(auVar4,auVar5);
    _vaddabc(auVar4,auVar4);
    _vmaddabc(auVar6,auVar4);
    auVar4 = _vmaddbc(auVar6,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    *(float *)(param_1 + 200) = auVar3._0_4_ + auVar4._0_4_;
    lVar1 = FUN_00222970(0x299cc8,*(undefined4 *)(param_1 + 0x28),1);
    if (lVar1 == -1) {
      (**(code **)(*(int *)(param_1 + 8) + 0x74))
                (param_1 + *(short *)(*(int *)(param_1 + 8) + 0x70));
    }
    else {
      lVar2 = FUN_002107c8(0x298590,0xf0,0x40000000,0x2c40e8,0,0);
      if (lVar2 != 0) {
        FUN_0023bbd0(lVar2,0xffffffffdeadc0de,0xf0);
      }
      FUN_00122ca8(lVar2,3,lVar1,*(undefined4 *)(param_1 + 0x28),0,0,0);
    }
    if (param_2 != 0) {
      FUN_001fedd0(DAT_002c56e8,param_2,*(undefined4 *)(param_1 + 0x28));
      return;
    }
  }
  return;
}

