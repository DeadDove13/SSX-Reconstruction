/* Ghidra pseudocode. PS2 address: 0024c7d0. Not validated source. */

void FUN_0024c7d0(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 in_zero_qw [16];
  code *pcVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  
  iVar8 = param_1 * 0x140;
  if (*(int *)(&DAT_002a59f0 + iVar8) != 0) {
    iVar11 = 0;
    if (0 < *(int *)(&DAT_002a59e4 + iVar8)) {
      iVar10 = iVar8 + 0x2a5900;
      pcVar2 = *(code **)(&DAT_002a58e0 + iVar8);
      puVar9 = (undefined4 *)(&DAT_002a58f0 + iVar8);
      while( true ) {
        iVar11 = iVar11 + 1;
        (*pcVar2)(iVar10);
        iVar3 = iVar10 + 0x70;
        iVar10 = iVar10 + 0x1c;
        (*(code *)*puVar9)(iVar3);
        if (*(int *)(&DAT_002a59e4 + iVar8) <= iVar11) break;
        pcVar2 = (code *)puVar9[-3];
        puVar9 = puVar9 + 1;
      }
    }
  }
  if ((*(int *)(&DAT_002a59e8 + param_1 * 0x140) != 0) &&
     (*(int *)(&DAT_002a59f4 + param_1 * 0x140) != 0)) {
    FUN_0024af98(0x2bf3a8);
  }
  auVar1 = auRam0024d730;
  iVar8 = param_1 * 0x140;
  if (*(int *)(&DAT_002a59e8 + iVar8) == 0) {
    if (*(int *)(&DAT_002a59f4 + iVar8) == 0) {
      pauVar5 = (undefined1 (*) [16])(&DAT_002a58bc)[param_1 * 0x50];
      iVar11 = 0x18;
      pauVar4 = (undefined1 (*) [16])PTR_DAT_002a52a0;
      puVar9 = *(undefined4 **)(&DAT_002a59e0 + iVar8);
      do {
        iVar11 = iVar11 + -1;
        auVar6 = _paddh(*pauVar5,*pauVar4);
        auVar6 = _pminh(auVar6,auVar1);
        auVar7 = _paddh(pauVar5[1],pauVar4[1]);
        auVar6 = _pmaxh(auVar6,in_zero_qw);
        auVar7 = _pminh(auVar7,auVar1);
        pauVar4 = pauVar4 + 2;
        auVar7 = _pmaxh(auVar7,in_zero_qw);
        pauVar5 = pauVar5 + 2;
        auVar6 = _ppacb(auVar7,auVar6);
        *puVar9 = auVar6._0_4_;
        puVar9[1] = auVar6._4_4_;
        puVar9[2] = auVar6._8_4_;
        puVar9[3] = auVar6._12_4_;
        puVar9 = puVar9 + 4;
      } while (iVar11 != 0);
      return;
    }
    puVar9 = *(undefined4 **)(&DAT_002a59e0 + iVar8);
    pauVar5 = (undefined1 (*) [16])PTR_DAT_002a52a0;
  }
  else {
    puVar9 = *(undefined4 **)(&DAT_002a59e0 + iVar8);
    pauVar5 = (undefined1 (*) [16])(&DAT_002a58bc)[param_1 * 0x50];
  }
  iVar8 = 0x18;
  do {
    iVar8 = iVar8 + -1;
    auVar6 = _pminh(*pauVar5,auVar1);
    auVar6 = _pmaxh(auVar6,in_zero_qw);
    auVar7 = _pminh(pauVar5[1],auVar1);
    pauVar5 = pauVar5 + 2;
    auVar7 = _pmaxh(auVar7,in_zero_qw);
    auVar6 = _ppacb(auVar7,auVar6);
    *puVar9 = auVar6._0_4_;
    puVar9[1] = auVar6._4_4_;
    puVar9[2] = auVar6._8_4_;
    puVar9[3] = auVar6._12_4_;
    puVar9 = puVar9 + 4;
  } while (iVar8 != 0);
  return;
}

