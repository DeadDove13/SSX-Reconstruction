/* Ghidra pseudocode. PS2 address: 0016f5d8. Not validated source. */

void FUN_0016f5d8(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  
  lVar2 = FUN_0016dd88();
  if (lVar2 != 0) {
    iVar1 = FUN_0016dd88(param_1,0xffffffffffffffff);
    auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x80));
    auVar4 = _lqc2(*param_3);
    auVar3 = _vadd(auVar3,auVar4);
    auStack_40 = _sqc2(auVar3);
    uStack_50 = auStack_40._0_4_;
    uStack_4c = auStack_40._4_4_;
    uStack_48 = auStack_40._8_4_;
    uStack_44 = auStack_40._12_4_;
    FUN_0016e2f8(param_1,0xffffffffffffffff,&uStack_50);
  }
  return;
}

