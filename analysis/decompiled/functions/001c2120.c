/* Ghidra pseudocode. PS2 address: 001c2120. Not validated source. */

void FUN_001c2120(int param_1,undefined1 (*param_2) [16],undefined8 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  piVar1 = (int *)param_3;
  if (*piVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x4b8);
    auVar3 = _lqc2(*param_2);
    auVar4._4_4_ = uVar2;
    auVar4._0_4_ = uVar2;
    auVar4._8_4_ = uVar2;
    auVar4._12_4_ = 0;
    auVar4 = _lqc2(auVar4);
    auVar4 = _vsub(auVar3,auVar4);
    auVar4 = _sqc2(auVar4);
    iStack_20 = auVar4._0_4_;
    iStack_1c = auVar4._4_4_;
    iStack_18 = auVar4._8_4_;
    iStack_14 = auVar4._12_4_;
    piVar1[8] = iStack_20;
    piVar1[9] = iStack_1c;
    piVar1[10] = iStack_18;
    piVar1[0xb] = iStack_14;
    FUN_001c2838(0x295e90,param_3);
  }
  return;
}

