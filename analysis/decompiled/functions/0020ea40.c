/* Ghidra pseudocode. PS2 address: 0020ea40. Not validated source. */

void FUN_0020ea40(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  
  iVar6 = 0;
  pauVar5 = param_1 + 8;
  FUN_0020dcf8(*(int *)param_1[10] != 0);
  pauVar1 = param_1;
  do {
    pauVar4 = pauVar1 + 1;
    auVar7 = _lqc2(*param_2);
    auVar8 = _lqc2(param_2[1]);
    auVar9 = _lqc2(param_2[2]);
    auVar10 = _lqc2(param_2[3]);
    auVar11 = _lqc2(*pauVar4);
    _vmulabc(auVar7,auVar11);
    _vmaddabc(auVar8,auVar11);
    _vmaddabc(auVar9,auVar11);
    auVar7 = _vmaddbc(auVar10,auVar11);
    auStack_70 = _sqc2(auVar7);
    uStack_80 = auStack_70._0_4_;
    uStack_7c = auStack_70._4_4_;
    uStack_78 = auStack_70._8_4_;
    uStack_74 = auStack_70._12_4_;
    *(undefined4 *)*pauVar4 = uStack_80;
    *(undefined4 *)(pauVar1[1] + 4) = uStack_7c;
    *(undefined4 *)(pauVar1[1] + 8) = auStack_70._8_4_;
    *(undefined4 *)(pauVar1[1] + 0xc) = auStack_70._12_4_;
    FUN_001110c0(0xbf800000,&uStack_80,pauVar4);
    iVar6 = iVar6 + 1;
    *(undefined4 *)*pauVar5 = uStack_80;
    *(undefined4 *)(*pauVar5 + 4) = uStack_7c;
    *(undefined4 *)(*pauVar5 + 8) = uStack_78;
    *(undefined4 *)(*pauVar5 + 0xc) = uStack_74;
    fVar2 = DAT_002c39cc;
    pauVar5 = pauVar5 + -1;
    pauVar1 = pauVar4;
  } while (iVar6 < 4);
  auVar7 = _lqc2(*param_2);
  auVar8 = _lqc2(param_2[1]);
  auVar9 = _lqc2(param_2[2]);
  auVar10 = _lqc2(param_2[3]);
  auVar11 = _lqc2(param_1[9]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar7 = _vmaddbc(auVar10,auVar11);
  auStack_70 = _sqc2(auVar7);
  uStack_80 = auStack_70._0_4_;
  uStack_7c = auStack_70._4_4_;
  uStack_78 = auStack_70._8_4_;
  uStack_74 = auStack_70._12_4_;
  uVar3 = 0;
  *(undefined4 *)param_1[9] = uStack_80;
  *(undefined4 *)(param_1[9] + 4) = uStack_7c;
  *(undefined4 *)(param_1[9] + 8) = auStack_70._8_4_;
  *(undefined4 *)(param_1[9] + 0xc) = auStack_70._12_4_;
  if ((fVar2 < *(float *)param_1[9]) && (*(float *)param_1[9] < DAT_002c39d0)) {
    uVar3 = 1;
  }
  FUN_0020dcf8(uVar3);
  uVar3 = 0;
  if ((DAT_002c39d4 < *(float *)(param_1[9] + 4)) && (*(float *)(param_1[9] + 4) < DAT_002c39d8)) {
    uVar3 = 1;
  }
  FUN_0020dcf8(uVar3);
  uVar3 = 0;
  if ((DAT_002c39dc < *(float *)(param_1[9] + 8)) && (*(float *)(param_1[9] + 8) < DAT_002c39e0)) {
    uVar3 = 1;
  }
  FUN_0020dcf8(uVar3);
  return;
}

