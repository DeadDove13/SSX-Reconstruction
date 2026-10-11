/* Ghidra pseudocode. PS2 address: 0011c400. Not validated source. */

void FUN_0011c400(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_18._0_4_ = -(float)param_1[0x91];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uStack_18;
  _auStack_20 = auVar9 << 0x40;
  uStack_18._4_4_ = 0;
  auVar9 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x7760));
  auVar10 = _lqc2(_auStack_20);
  auVar9 = _vadd(auVar9,auVar10);
  auVar9 = _sqc2(auVar9);
  uStack_10 = auVar9._0_4_;
  uStack_c = auVar9._4_4_;
  uStack_8 = auVar9._8_4_;
  uStack_4 = auVar9._12_4_;
  param_1[4] = uStack_10;
  param_1[5] = uStack_c;
  param_1[6] = uStack_8;
  param_1[7] = uStack_4;
  auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
  auVar10 = _lqc2(ZEXT416((uint)-(float)param_1[0x92]) << 0x40);
  auVar9 = _vadd(auVar9,auVar10);
  auVar9 = _sqc2(auVar9);
  auStack_20._0_4_ = auVar9._0_4_;
  auStack_20._4_4_ = auVar9._4_4_;
  uStack_18._0_4_ = auVar9._8_4_;
  uStack_18._4_4_ = auVar9._12_4_;
  *param_1 = auStack_20._0_4_;
  param_1[1] = auStack_20._4_4_;
  param_1[2] = (undefined4)uStack_18;
  param_1[3] = uStack_18._4_4_;
  auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
  auVar10 = _lqc2(ZEXT416((uint)((float)param_1[0x90] * 0.5)) << 0x40);
  auVar9 = _vadd(auVar9,auVar10);
  auVar9 = _sqc2(auVar9);
  auStack_20._0_4_ = auVar9._0_4_;
  auStack_20._4_4_ = auVar9._4_4_;
  uStack_18._0_4_ = auVar9._8_4_;
  uStack_18._4_4_ = auVar9._12_4_;
  param_1[8] = auStack_20._0_4_;
  param_1[9] = auStack_20._4_4_;
  param_1[10] = (undefined4)uStack_18;
  param_1[0xb] = uStack_18._4_4_;
  auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
  auVar10 = _lqc2(ZEXT416((uint)param_1[0x90]) << 0x40);
  auVar9 = _vadd(auVar9,auVar10);
  auVar9 = _sqc2(auVar9);
  auStack_20._0_4_ = auVar9._0_4_;
  auStack_20._4_4_ = auVar9._4_4_;
  uStack_18._0_4_ = auVar9._8_4_;
  uStack_18._4_4_ = auVar9._12_4_;
  param_1[0xc] = auStack_20._0_4_;
  param_1[0xd] = auStack_20._4_4_;
  param_1[0xe] = (undefined4)uStack_18;
  param_1[0xf] = uStack_18._4_4_;
  fVar8 = (float)param_1[0x94];
  param_1[0x30] = 0;
  fVar7 = ((float)param_1[0x90] + (float)param_1[0x92]) / fVar8;
  fVar6 = fVar7 - (float)param_1[0x92] / fVar8;
  param_1[0x31] = fVar7;
  param_1[0x3d] = fVar7;
  param_1[0x84] = 0x3f800000;
  fVar7 = fVar6 - ((float)param_1[0x90] * 0.5) / fVar8;
  param_1[0x55] = fVar6;
  param_1[0x85] = 0;
  iVar4 = *(int *)(param_2 + 0x394);
  param_1[0x6d] = fVar7;
  param_1[0x3c] = 0x3f800000;
  param_1[0x48] = 0;
  param_1[0x49] = fVar6;
  param_1[0x54] = 0x3f800000;
  param_1[0x60] = 0;
  param_1[0x61] = fVar7;
  param_1[0x6c] = 0x3f800000;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  if (*(char *)(iVar4 + 0x54) == '\0') {
    uVar5 = ZEXT48(param_1);
    do {
      iVar4 = (int)uVar5;
      *(undefined4 *)(iVar4 + 0xd0) = 0x80;
      *(undefined4 *)(iVar4 + 0xd4) = 0;
      *(undefined4 *)(iVar4 + 0xd8) = 0;
      uVar5 = (ulong)(iVar4 + 0x30);
    } while ((long)uVar5 < (long)(int)(param_1 + 0x60));
    fVar6 = (float)param_1[0x95];
  }
  else {
    uVar5 = ZEXT48(param_1);
    do {
      iVar4 = (int)uVar5;
      *(undefined4 *)(iVar4 + 0xd0) = 0x80;
      *(undefined4 *)(iVar4 + 0xd4) = 0x6e;
      *(undefined4 *)(iVar4 + 0xd8) = 0;
      uVar5 = (ulong)(iVar4 + 0x30);
    } while ((long)uVar5 < (long)(int)(param_1 + 0x60));
    fVar6 = (float)param_1[0x95];
  }
  uVar2 = DAT_002c18a8;
  uVar1 = DAT_002c18a4;
  if (fVar6 <= 20.0) {
    param_1[0x97] = 0x42200000;
    param_1[0x96] = uVar1;
  }
  else {
    if (fVar6 < 40.0) {
      fVar6 = (float)param_1[0x96];
      goto LAB_0011c658;
    }
    param_1[0x97] = 0x41a00000;
    param_1[0x96] = uVar2;
  }
  fVar6 = (float)param_1[0x96];
LAB_0011c658:
  fVar7 = (float)param_1[0x97];
  fVar6 = fVar6 * DAT_002c18ac;
  fVar8 = (float)param_1[0x95];
  if (fVar7 + fVar6 < fVar8) {
    fVar7 = fVar8 - fVar6;
  }
  else if (fVar8 < fVar7 - fVar6) {
    fVar7 = fVar8 + fVar6;
  }
  param_1[0x95] = fVar7;
  piVar3 = param_1 + 0x4f;
  iVar4 = 3;
  fVar6 = (float)param_1[0x95];
  do {
    *piVar3 = (int)fVar6;
    iVar4 = iVar4 + -1;
    piVar3 = piVar3 + 0xc;
  } while (-1 < iVar4);
  param_1[0x8b] = 0;
  param_1[0x37] = 0;
  param_1[0x43] = 0;
  param_1[0x7f] = 0;
  return;
}

