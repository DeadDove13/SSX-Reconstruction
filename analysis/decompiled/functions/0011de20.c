/* Ghidra pseudocode. PS2 address: 0011de20. Not validated source. */

float FUN_0011de20(int *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fStack_48;
  float fStack_40;
  float afStack_3c [3];
  
  auVar5 = _lqc2(*DAT_00296264);
  auVar6 = _lqc2(DAT_00296264[1]);
  auVar7 = _lqc2(DAT_00296264[2]);
  auVar8 = _lqc2(DAT_00296264[3]);
  auVar9 = _lqc2(*(undefined1 (*) [16])(*param_1 + 0xc0));
  _vmulabc(auVar5,auVar9);
  _vmaddabc(auVar6,auVar9);
  _vmaddabc(auVar7,auVar9);
  auVar5 = _vmaddbc(auVar8,auVar9);
  auVar5 = _sqc2(auVar5);
  fStack_48 = auVar5._8_4_;
  FUN_00218128(*(undefined4 *)(&DAT_00295eac + DAT_00295f50 * 0x30),&fStack_40,afStack_3c);
  fVar1 = DAT_002c1910;
  fVar3 = fStack_48 * (fStack_40 / afStack_3c[0]) * DAT_002c1908;
  fVar4 = fVar3 / *(float *)(DAT_002859e4 + 0x6c);
  if (fVar4 < DAT_002c190c) {
    param_1[0xfd] = 0;
    param_1[0xfe] = 0;
  }
  else if (fVar4 < DAT_002c1910) {
    param_1[0xfe] = 1;
    param_1[0xfd] = 1;
    fVar3 = fVar1;
  }
  else {
    fVar3 = DAT_002c1918;
    if (fVar4 < DAT_002c1914) {
      fVar3 = DAT_002c1914;
    }
    param_1[0xfd] = 2;
    param_1[0xfe] = 1;
  }
  iVar2 = *(int *)(*param_1 + 0x6cdc) + -2;
  if (iVar2 < param_1[0xfd]) {
    param_1[0xfd] = iVar2;
  }
  if (iVar2 < param_1[0xfe]) {
    param_1[0xfe] = iVar2;
  }
  return fVar3;
}

