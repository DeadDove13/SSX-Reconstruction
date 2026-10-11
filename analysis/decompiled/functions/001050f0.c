/* Ghidra pseudocode. PS2 address: 001050f0. Not validated source. */

void FUN_001050f0(undefined8 param_1)

{
  bool bVar1;
  float fVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fStack_d0;
  undefined *puStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  
  iVar10 = (int)param_1;
  puVar4 = (undefined4 *)(iVar10 + 0x7630);
  iVar6 = 0x31;
  *(undefined4 *)(iVar10 + 0x90) = 0;
  *(undefined4 *)(iVar10 + 0x370) = 0x3f800000;
  *(undefined4 *)(iVar10 + 0x94) = 0;
  *(undefined4 *)(iVar10 + 0x264) = 0;
  fStack_d0 = 0.0;
  puStack_cc = (undefined *)0x0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  *(undefined4 *)(iVar10 + 0x270) = 0;
  *(undefined4 *)(iVar10 + 0x274) = 0;
  *(undefined4 *)(iVar10 + 0x278) = 0;
  *(undefined4 *)(iVar10 + 0x27c) = 0;
  *(undefined4 *)(iVar10 + 0x280) = 0;
  *(undefined4 *)(iVar10 + 0x284) = 0;
  *(undefined4 *)(iVar10 + 0x21c) = 0;
  *(undefined4 *)(iVar10 + 0x2f4) = 0;
  *(undefined4 *)(iVar10 + 0x2f8) = 0;
  *(undefined4 *)(iVar10 + 0x168) = 0;
  do {
    *puVar4 = 0x3f800000;
    iVar6 = iVar6 + -1;
    puVar4[4] = 0;
    puVar4[8] = 0;
    puVar4[0xc] = 0;
    puVar4[1] = 0;
    puVar4[5] = 0x3f800000;
    puVar4[9] = 0;
    puVar4[0xd] = 0;
    puVar4[2] = 0;
    puVar4[6] = 0;
    puVar4[10] = 0x3f800000;
    puVar4[0xe] = 0;
    puVar4[3] = 0;
    puVar4[7] = 0;
    puVar4[0xb] = 0;
    puVar4[0xf] = 0x3f800000;
    puVar4 = puVar4 + 0x10;
  } while (-1 < iVar6);
  FUN_0020ab48(*(undefined4 *)(*(int *)(iVar10 + 0x394) + 0x48),iVar10 + 0x3a0);
  *(undefined4 *)(iVar10 + 0x354) = 0;
  *(undefined2 *)(iVar10 + 0x360) = 0xffff;
  *(undefined4 *)(iVar10 + 0x368) = 0;
  *(undefined2 *)(iVar10 + 0x358) = 0;
  *(undefined2 *)(iVar10 + 0x35a) = 0;
  *(undefined2 *)(iVar10 + 0x35c) = 0xffff;
  *(undefined2 *)(iVar10 + 0x35e) = 0xffff;
  *(undefined4 *)(iVar10 + 0x364) = 0;
  FUN_0019ba80(0,&fStack_d0,*(undefined4 *)(iVar10 + 0x82f4));
  fVar2 = fStack_d0;
  if (fStack_d0 == 0.0) {
    puVar11 = puStack_cc;
    if (((float)puStack_cc != 0.0) &&
       (puVar11 = PTR_DAT_002c1070, puVar13 = DAT_002c1074, 0.0 <= (float)puStack_cc))
    goto LAB_001052a4;
  }
  else {
    puVar13 = puStack_cc;
    puVar11 = (undefined *)FUN_00218510((float)puStack_cc / fStack_d0);
    if (fVar2 < 0.0) {
      if (0.0 < (float)puVar13) {
        puVar11 = (undefined *)((float)puVar11 + DAT_002c1078);
      }
      else {
        puVar11 = (undefined *)((float)puVar11 - DAT_002c107c);
      }
    }
  }
  puVar13 = puVar11;
LAB_001052a4:
  iVar6 = *(int *)(iVar10 + 0x82f4);
  uStack_b0 = *(undefined4 *)(iVar6 + 0xc);
  uStack_ac = *(undefined4 *)(iVar6 + 0x10);
  uStack_a8 = *(undefined4 *)(iVar6 + 0x14);
  uStack_a4 = 0x3f800000;
  uVar12 = FUN_0010af58(param_1);
  auVar14._4_4_ = puStack_cc;
  auVar14._0_4_ = fStack_d0;
  auVar14._8_4_ = uStack_c8;
  auVar14._12_4_ = uStack_c4;
  auVar15 = _lqc2(auVar14);
  auVar14 = _qmtc2(uVar12);
  auVar14 = _vmulbc(auVar15,auVar14);
  auVar14 = _sqc2(auVar14);
  auStack_90._8_4_ = auVar14._8_4_;
  auStack_90._12_4_ = auVar14._12_4_;
  uStack_a0 = auVar14._0_4_;
  uStack_9c = auVar14._4_4_;
  uStack_98 = auStack_90._8_4_;
  uStack_94 = auStack_90._12_4_;
  auVar15._4_4_ = uStack_ac;
  auVar15._0_4_ = uStack_b0;
  auVar15._8_4_ = uStack_a8;
  auVar15._12_4_ = uStack_a4;
  auVar15 = _lqc2(auVar15);
  auVar14 = _lqc2(auVar14);
  auVar14 = _vadd(auVar15,auVar14);
  auStack_90 = _sqc2(auVar14);
  uStack_c0 = auStack_90._0_4_;
  uStack_bc = auStack_90._4_4_;
  uStack_b8 = auStack_90._8_4_;
  uStack_b4 = auStack_90._12_4_;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  FUN_00109448(puVar13,0,param_1,&uStack_c0,&uStack_b0,0);
  FUN_00113180(param_1);
  uVar12 = *(undefined4 *)(DAT_002859e4 + 0x74);
  *(undefined4 *)(iVar10 + 0x178) = 0;
  *(undefined4 *)(iVar10 + 0x18) = uVar12;
  *(undefined4 *)(iVar10 + 0x174) = 0x1a;
  puVar8 = (undefined4 *)(iVar10 + 0x38);
  *(undefined4 *)(iVar10 + 0x17c) = 0;
  uVar12 = DAT_002c1080;
  puVar7 = (undefined4 *)(iVar10 + 0x30);
  puVar5 = (undefined4 *)(iVar10 + 0x2c);
  puVar4 = (undefined4 *)(iVar10 + 0x34);
  iVar6 = 5;
  do {
    *puVar4 = 0;
    iVar6 = iVar6 + -1;
    *puVar5 = uVar12;
    puVar4 = puVar4 + 4;
    *puVar7 = 0;
    puVar5 = puVar5 + 4;
    *puVar8 = 0;
    puVar7 = puVar7 + 4;
    puVar8 = puVar8 + 4;
  } while (-1 < iVar6);
  *(undefined4 *)(iVar10 + 0x34c) = 0;
  FUN_0010b340(param_1,4);
  *(undefined4 *)(iVar10 + 0x350) = 0;
  FUN_0010b330(param_1,1);
  iVar6 = DAT_002859e4;
  *(undefined4 *)(iVar10 + 0x210) = 1;
  *(undefined4 *)(iVar10 + 0x15c) = 0;
  *(undefined4 *)(iVar10 + 0xf0) = 0xffffffff;
  *(undefined4 *)(iVar10 + 0x36c) = 0xffffffff;
  iVar6 = *(int *)(iVar6 + 0x1c);
  *(undefined4 *)(iVar10 + 0x214) = *(undefined4 *)(iVar6 + 0x78);
  *(undefined4 *)(iVar10 + 0x218) = *(undefined4 *)(iVar6 + 0x7c);
  *(int *)(iVar10 + 0x250) = (int)*(undefined8 *)(iVar10 + 0xc0);
  *(int *)(iVar10 + 0x254) = (int)((ulong)*(undefined8 *)(iVar10 + 0xc0) >> 0x20);
  *(undefined4 *)(iVar10 + 600) = *(undefined4 *)(iVar10 + 200);
  *(undefined4 *)(iVar10 + 0x25c) = *(undefined4 *)(iVar10 + 0xcc);
  *(undefined4 *)(iVar10 + 0x378) = *(undefined4 *)(iVar10 + 0xc0);
  *(undefined4 *)(iVar10 + 0xa4) = 0x3f800000;
  *(undefined4 *)(iVar10 + 0xa8) = 0;
  uVar12 = *(undefined4 *)(*(int *)(iVar10 + 0x394) + 0x28);
  *(undefined4 *)(iVar10 + 0x380) = *(undefined4 *)(iVar10 + 200);
  *(undefined4 *)(iVar10 + 0x37c) = *(undefined4 *)(iVar10 + 0xc4);
  *(undefined4 *)(iVar10 + 0xac) = 0;
  *(undefined4 *)(iVar10 + 0xb0) = 0;
  *(undefined4 *)(iVar10 + 0x288) = 0;
  *(undefined4 *)(iVar10 + 0x28c) = 0;
  *(undefined4 *)(iVar10 + 0xe8) = 0;
  *(undefined4 *)(iVar10 + 0xec) = 0;
  *(undefined4 *)(iVar10 + 0x144) = uVar12;
  *(undefined4 *)(iVar10 + 0x348) = 0xffffffff;
  *(undefined4 *)(iVar10 + 0x98) = 0xffffffff;
  *(undefined4 *)(iVar10 + 0x9c) = 0;
  *(undefined4 *)(iVar10 + 0x8c) = 0xffffffff;
  *(undefined4 *)(iVar10 + 0xb4) = 0;
  uVar12 = *(undefined4 *)(*(int *)(iVar10 + 0x82f0) + 0x38);
  *(undefined4 *)(iVar10 + 0x2e8) = uVar12;
  *(undefined4 *)(iVar10 + 0x2e4) = uVar12;
  *(undefined4 *)(iVar10 + 0x2c0) = 0;
  *(undefined4 *)(iVar10 + 0x2c4) = 0;
  *(undefined4 *)(iVar10 + 0x2c8) = 0;
  *(undefined4 *)(iVar10 + 0x2cc) = 0x3f800000;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0x3f800000;
  *(undefined4 *)(iVar10 + 0x2d0) = 0;
  *(undefined4 *)(iVar10 + 0x2d4) = 0;
  *(undefined4 *)(iVar10 + 0x2d8) = 0;
  *(undefined4 *)(iVar10 + 0x2dc) = 0x3f800000;
  bVar1 = DAT_0027ba84 == 4;
  *(undefined4 *)(iVar10 + 0x2ec) = 0;
  if (bVar1) {
    iVar6 = 0;
    do {
      if (DAT_0028acf8 <= iVar6) goto LAB_00105534;
      iVar9 = DAT_0028acfc + iVar6 * 0x3c;
      lVar3 = FUN_0019bb38(iVar9,0xd);
      iVar6 = iVar6 + 1;
    } while (lVar3 == 0);
    *(float *)(iVar10 + 0x2ec) = *(float *)(iVar9 + 0x38) - *(float *)((int)lVar3 + 8);
LAB_00105534:
    *(undefined4 *)(iVar10 + 0xa0) = 4;
  }
  else {
    *(undefined4 *)(iVar10 + 0xa0) = 0;
  }
  FUN_001067a8(param_1);
  bVar1 = DAT_0027ba84 == 4;
  *(undefined4 *)(iVar10 + 0x2f0) = *(undefined4 *)(iVar10 + 0x2e4);
  if (bVar1) {
    iVar6 = FUN_0019c4d0(0x28acf8);
    *(float *)(iVar10 + 0x2f0) = *(float *)(iVar10 + 0x2f0) + *(float *)(iVar6 + 0x38) * 3.0;
  }
  *(undefined4 *)(iVar10 + 0x20) = 0;
  *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(*(int *)(iVar10 + 0x394) + 0x5c);
  FUN_0010e208(iVar10 + 0x8300);
  FUN_00136c30(iVar10 + 0x8370);
  FUN_00136ba8(iVar10 + 0x8370);
  *(int *)(iVar10 + 0x8510) = iVar10;
  *(undefined4 *)(iVar10 + 0x16c) = 0;
  *(undefined4 *)(iVar10 + 0x170) = 0;
  return;
}

