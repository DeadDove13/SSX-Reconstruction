/* Ghidra pseudocode. PS2 address: 001f7e10. Not validated source. */

float FUN_001f7e10(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  
  if (DAT_002859e4 == 0) {
    fVar4 = 1.0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x84) * 0x80 + DAT_002859e4;
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xc0));
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xd0));
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xe0));
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xf0));
    auVar12._12_4_ = 0x3f800000;
    auVar12._0_12_ = **(undefined1 (**) [12])(param_2 + 0x68);
    auVar12 = _lqc2(auVar12);
    _vmulabc(auVar8,auVar12);
    _vmaddabc(auVar9,auVar12);
    _vmaddabc(auVar10,auVar12);
    auVar12 = _vmaddbc(auVar11,auVar12);
    auVar12 = _sqc2(auVar12);
    fStack_50 = auVar12._0_4_;
    fStack_4c = auVar12._4_4_;
    fStack_48 = auVar12._8_4_;
    puVar6 = (undefined *)(fStack_50 * DAT_002c38f0);
    puVar2 = (undefined *)((fStack_4c + 25.0) * DAT_002c38f0);
    fVar4 = (fStack_48 + -100.0) * DAT_002c38f0;
    if (DAT_0027acc4 == 0) {
      if (fVar4 == 0.0) {
        puVar3 = puVar6;
        if (((float)puVar6 != 0.0) && (puVar3 = DAT_002c38f8, (float)puVar6 < 0.0)) {
          puVar3 = PTR_DAT_002c38f4;
        }
      }
      else {
        fVar7 = fVar4;
        puVar3 = (undefined *)FUN_00218510((float)puVar6 / fVar4);
        if (fVar7 < 0.0) {
          if (0.0 < (float)puVar6) {
            puVar3 = (undefined *)((float)puVar3 + DAT_002c38fc);
          }
          else {
            puVar3 = (undefined *)((float)puVar3 - DAT_002c3900);
          }
        }
      }
      *(short *)(param_3 + 8) = (short)(int)((float)puVar3 * DAT_002c3904);
      fVar7 = SQRT((float)puVar6 * (float)puVar6 + fVar4 * fVar4);
      if (fVar7 == 0.0) {
        puVar3 = puVar2;
        if (((float)puVar2 != 0.0) && (puVar3 = DAT_002c390c, (float)puVar2 < 0.0)) {
          puVar3 = PTR_DAT_002c3908;
        }
      }
      else {
        puVar5 = puVar2;
        puVar3 = (undefined *)FUN_00218510((float)puVar2 / fVar7);
        if (fVar7 < 0.0) {
          if (0.0 < (float)puVar5) {
            puVar3 = (undefined *)((float)puVar3 + DAT_002c3910);
          }
          else {
            puVar3 = (undefined *)((float)puVar3 - DAT_002c3914);
          }
        }
      }
      *(short *)(param_3 + 10) = (short)(int)((float)puVar3 * DAT_002c3918);
    }
    else {
      *(undefined2 *)(param_3 + 10) = 0;
      *(undefined2 *)(param_3 + 8) = 0;
    }
    fVar4 = (float)puVar6 * (float)puVar6 + (float)puVar2 * (float)puVar2 + fVar4 * fVar4;
  }
  return fVar4;
}

