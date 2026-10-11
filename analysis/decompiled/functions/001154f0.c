/* Ghidra pseudocode. PS2 address: 001154f0. Not validated source. */

void FUN_001154f0(float param_1,float param_2,float param_3,undefined4 param_4,undefined8 param_5,
                 undefined8 *param_6,undefined1 (*param_7) [16],undefined1 (*param_8) [16],
                 undefined1 (*param_9) [16])

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 auStack_cc [3];
  
  fVar3 = DAT_002c154c;
  iVar8 = 0;
  fVar13 = 1.0;
  fVar14 = DAT_002c1550;
  puVar9 = param_6;
  if (0 < *(int *)((int)param_6 + 0x3b4) + -1) {
    do {
      uVar4 = FUN_002109b0();
      fVar13 = fVar13 + ((float)(uVar4 & 0x7fffff | 0x3f800000) - 1.0) * fVar14 + fVar3;
      if (fVar13 < DAT_002c1554) {
        fVar13 = DAT_002c1558 - fVar13;
      }
      if (DAT_002c155c < fVar13) {
        fVar13 = DAT_002c1560 - fVar13;
      }
      fVar10 = ((float)(iVar8 << 1) * DAT_002c1564) / ((float)*(int *)((int)param_6 + 0x3b4) - 1.0);
      fVar11 = fVar10 * DAT_002c1568 + 0.5;
      fVar12 = (float)(int)fVar11;
      if (fVar11 < fVar12) {
        fVar12 = fVar12 - 1.0;
      }
      fVar11 = ABS((fVar10 - fVar12 * DAT_002c156c) / DAT_002c1564);
      FUN_00218128(fVar10,&uStack_d0,auStack_cc);
      auVar16 = _lqc2(*param_8);
      auVar15 = _qmtc2(auStack_cc[0]);
      auVar15 = _vmulbc(auVar16,auVar15);
      auVar15 = _sqc2(auVar15);
      iVar5 = iVar8 * 4;
      auVar17 = _lqc2(*param_9);
      auVar16 = _qmtc2(uStack_d0);
      auVar16 = _vmulbc(auVar17,auVar16);
      auVar16 = _sqc2(auVar16);
      iVar8 = iVar8 + 1;
      auVar15 = _lqc2(auVar15);
      auVar16 = _lqc2(auVar16);
      auVar15 = _vadd(auVar15,auVar16);
      auVar15 = _sqc2(auVar15);
      *(undefined4 *)puVar9 = 0;
      *(undefined4 *)((int)puVar9 + 4) = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      *(undefined4 *)((int)puVar9 + 0xc) = 0;
      auVar17 = _lqc2(*param_7);
      auVar16 = _qmtc2(param_4);
      auVar16 = _vmulbc(auVar17,auVar16);
      auVar16 = _sqc2(auVar16);
      auVar15 = _lqc2(auVar15);
      auVar16 = _lqc2(auVar16);
      auVar15 = _vadd(auVar15,auVar16);
      auVar15 = _sqc2(auVar15);
      auVar16 = _lqc2(auVar15);
      auVar15 = _qmtc2((1.0 - param_2 * ((fVar11 + fVar11) - 1.0)) * fVar13 * param_1);
      auVar15 = _vmulbc(auVar16,auVar15);
      auVar15 = _sqc2(auVar15);
      uStack_e0 = auVar15._0_4_;
      uStack_dc = auVar15._4_4_;
      uStack_d8 = auVar15._8_4_;
      uStack_d4 = auVar15._12_4_;
      *(undefined4 *)(puVar9 + 0x32) = uStack_e0;
      *(undefined4 *)((int)puVar9 + 0x194) = uStack_dc;
      *(undefined4 *)(puVar9 + 0x33) = uStack_d8;
      *(undefined4 *)((int)puVar9 + 0x19c) = uStack_d4;
      iVar1 = *(int *)((int)param_6 + 0x3b4);
      *(float *)((int)param_6 + iVar5 + 0x340) = param_3 * fVar13;
      puVar9 = puVar9 + 2;
    } while (iVar8 < iVar1 + -1);
  }
  iVar8 = *(int *)((int)param_6 + 0x3b4);
  uVar2 = *param_6;
  uVar6 = *(undefined4 *)(param_6 + 1);
  uVar7 = *(undefined4 *)((int)param_6 + 0xc);
  *(int *)(param_6 + iVar8 * 2 + -2) = (int)uVar2;
  *(int *)((int)param_6 + iVar8 * 0x10 + -0xc) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(param_6 + iVar8 * 2 + -1) = uVar6;
  *(undefined4 *)((int)param_6 + iVar8 * 0x10 + -4) = uVar7;
  iVar8 = *(int *)((int)param_6 + 0x3b4);
  uVar2 = param_6[0x32];
  uVar6 = *(undefined4 *)(param_6 + 0x33);
  uVar7 = *(undefined4 *)((int)param_6 + 0x19c);
  *(int *)(param_6 + iVar8 * 2 + 0x30) = (int)uVar2;
  *(int *)((int)param_6 + iVar8 * 0x10 + 0x184) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(param_6 + iVar8 * 2 + 0x31) = uVar6;
  *(undefined4 *)((int)param_6 + iVar8 * 0x10 + 0x18c) = uVar7;
  *(undefined4 *)((int)param_6 + (*(int *)((int)param_6 + 0x3b4) + -1) * 4 + 0x340) =
       *(undefined4 *)(param_6 + 0x68);
  return;
}

