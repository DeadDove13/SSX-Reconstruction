/* Ghidra pseudocode. PS2 address: 0020e858. Not validated source. */

void FUN_0020e858(undefined4 *param_1,undefined1 (*param_2) [16])

{
  undefined4 *puVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 (*pauVar6) [16];
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  iVar7 = 0;
  puVar5 = param_1 + 0x20;
  FUN_0020dcf8(param_1[0x28] != 0);
  pauVar6 = (undefined1 (*) [16])&DAT_00298510;
  puVar1 = param_1;
  do {
    puVar4 = puVar1 + 4;
    auVar8 = _lqc2(*param_2);
    auVar9 = _lqc2(param_2[1]);
    auVar10 = _lqc2(param_2[2]);
    auVar11 = _lqc2(param_2[3]);
    auVar12 = _lqc2(*pauVar6);
    _vmulabc(auVar8,auVar12);
    _vmaddabc(auVar9,auVar12);
    _vmaddabc(auVar10,auVar12);
    auVar8 = _vmaddbc(auVar11,auVar12);
    auStack_a0 = _sqc2(auVar8);
    uStack_b0 = auStack_a0._0_4_;
    uStack_ac = auStack_a0._4_4_;
    uStack_a8 = auStack_a0._8_4_;
    uStack_a4 = auStack_a0._12_4_;
    *puVar4 = uStack_b0;
    puVar1[5] = uStack_ac;
    puVar1[6] = auStack_a0._8_4_;
    puVar1[7] = auStack_a0._12_4_;
    FUN_001110c0(0xbf800000,&uStack_b0,puVar4);
    iVar7 = iVar7 + 1;
    *puVar5 = uStack_b0;
    puVar5[1] = uStack_ac;
    puVar5[2] = uStack_a8;
    puVar5[3] = uStack_a4;
    fVar2 = DAT_002c39b4;
    puVar5 = puVar5 + -4;
    pauVar6 = pauVar6 + 1;
    puVar1 = puVar4;
  } while (iVar7 < 4);
  uVar3 = 0;
  auStack_a0._12_4_ = 0x3f800000;
  auStack_a0._0_12_ = *(undefined1 (*) [12])(param_1[0x28] + 0x14);
  auVar8 = _lqc2(*param_2);
  auVar9 = _lqc2(param_2[1]);
  auVar10 = _lqc2(param_2[2]);
  auVar11 = _lqc2(param_2[3]);
  auVar12 = _lqc2(auStack_a0);
  _vmulabc(auVar8,auVar12);
  _vmaddabc(auVar9,auVar12);
  _vmaddabc(auVar10,auVar12);
  auVar8 = _vmaddbc(auVar11,auVar12);
  auStack_90 = _sqc2(auVar8);
  uStack_b0 = auStack_90._0_4_;
  uStack_ac = auStack_90._4_4_;
  uStack_a8 = auStack_90._8_4_;
  uStack_a4 = auStack_90._12_4_;
  param_1[0x24] = uStack_b0;
  param_1[0x25] = uStack_ac;
  param_1[0x26] = auStack_90._8_4_;
  param_1[0x27] = auStack_90._12_4_;
  if ((fVar2 < (float)param_1[0x24]) && ((float)param_1[0x24] < DAT_002c39b8)) {
    uVar3 = 1;
  }
  FUN_0020dcf8(uVar3);
  uVar3 = 0;
  if ((DAT_002c39bc < (float)param_1[0x25]) && ((float)param_1[0x25] < DAT_002c39c0)) {
    uVar3 = 1;
  }
  FUN_0020dcf8(uVar3);
  uVar3 = 0;
  if ((DAT_002c39c4 < (float)param_1[0x26]) && ((float)param_1[0x26] < DAT_002c39c8)) {
    uVar3 = 1;
  }
  FUN_0020dcf8(uVar3);
  return;
}

