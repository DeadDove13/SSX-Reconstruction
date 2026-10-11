/* Ghidra pseudocode. PS2 address: 0020fe40. Not validated source. */

/* WARNING: Type propagation algorithm not settling */

void FUN_0020fe40(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 (*pauVar5) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int aiStack_50 [7];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  
  piVar1 = aiStack_50;
  piVar4 = (int *)(param_1[10] + 8);
  auVar7 = _lqc2(*param_2);
  auVar6 = _qmtc2(0xc47a0000);
  auVar6 = _vmulbc(auVar7,auVar6);
  auStack_20 = _sqc2(auVar6);
  iVar3 = 0;
  uStack_30 = auStack_20._0_4_;
  uStack_2c = auStack_20._4_4_;
  uStack_28 = auStack_20._8_4_;
  uStack_24 = auStack_20._12_4_;
  pauVar5 = (undefined1 (*) [16])(param_1[0xc] + 4);
  piVar2 = &iStack_34;
  do {
    param_1 = param_1 + 1;
    auVar6 = _lqc2(*param_1);
    auVar7 = _lqc2(auStack_20);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _vmul(auVar6,auVar7);
    _vaddabc(auVar6,auVar6);
    _vmaddabc(auVar8,auVar6);
    auVar6 = _vmaddbc(auVar8,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    *piVar4 = iVar3;
    *(int *)*pauVar5 = 7 - iVar3;
    iVar3 = iVar3 + 1;
    pauVar5 = (undefined1 (*) [16])((int)(pauVar5 + 0xffffffff) + 0xc);
    piVar4 = piVar4 + 1;
    *piVar1 = (int)auVar6._0_4_;
    *piVar2 = -(int)auVar6._0_4_;
    piVar1 = piVar1 + 1;
    piVar2 = piVar2 + -1;
  } while (iVar3 < 4);
  FUN_0023bed8(8,aiStack_50);
  return;
}

