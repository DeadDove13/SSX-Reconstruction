/* Ghidra pseudocode. PS2 address: 00233ef8. Not validated source. */

void FUN_00233ef8(int param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  do {
    auVar4 = *param_2;
    pauVar1 = param_2 + 1;
    pauVar2 = param_2 + 2;
    pauVar3 = param_2 + 3;
    param_1 = param_1 + -0x10;
    param_2 = param_2 + 4;
    auVar4 = _paddsw(auVar4,*param_3);
    auVar5 = _paddsw(*pauVar1,param_3[1]);
    auVar6 = _paddsw(*pauVar2,param_3[2]);
    auVar7 = _paddsw(*pauVar3,param_3[3]);
    *(int *)*param_3 = auVar4._0_4_;
    *(int *)(*param_3 + 4) = auVar4._4_4_;
    *(int *)(*param_3 + 8) = auVar4._8_4_;
    *(int *)(*param_3 + 0xc) = auVar4._12_4_;
    *(int *)param_3[1] = auVar5._0_4_;
    *(int *)(param_3[1] + 4) = auVar5._4_4_;
    *(int *)(param_3[1] + 8) = auVar5._8_4_;
    *(int *)(param_3[1] + 0xc) = auVar5._12_4_;
    *(int *)param_3[2] = auVar6._0_4_;
    *(int *)(param_3[2] + 4) = auVar6._4_4_;
    *(int *)(param_3[2] + 8) = auVar6._8_4_;
    *(int *)(param_3[2] + 0xc) = auVar6._12_4_;
    *(int *)param_3[3] = auVar7._0_4_;
    *(int *)(param_3[3] + 4) = auVar7._4_4_;
    *(int *)(param_3[3] + 8) = auVar7._8_4_;
    *(int *)(param_3[3] + 0xc) = auVar7._12_4_;
    param_3 = param_3 + 4;
  } while (0 < param_1);
  return;
}

