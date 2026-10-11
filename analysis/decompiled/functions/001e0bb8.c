/* Ghidra pseudocode. PS2 address: 001e0bb8. Not validated source. */

undefined4
FUN_001e0bb8(undefined8 param_1,int param_2,undefined1 (*param_3) [16],undefined1 (*param_4) [16])

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  
  uVar4 = DAT_002c36f8;
  iVar9 = (int)param_1;
  if ((*(int *)(iVar9 + 0xc) == 0) || (*(int *)(iVar9 + param_2 * 0xf0 + 0x10) == 0)) {
    uVar4 = 0;
  }
  else {
    iVar9 = iVar9 + param_2 * 0xf0 + 0x10;
    *(undefined4 *)(iVar9 + 0xc0) = *(undefined4 *)(iVar9 + 0xb0);
    *(undefined4 *)(iVar9 + 0xc4) = *(undefined4 *)(iVar9 + 0xb4);
    *(undefined4 *)(iVar9 + 200) = *(undefined4 *)(iVar9 + 0xb8);
    *(undefined4 *)(iVar9 + 0xcc) = *(undefined4 *)(iVar9 + 0xbc);
    uVar1 = *(undefined8 *)*param_3;
    uVar5 = *(undefined4 *)(*param_3 + 8);
    uVar6 = *(undefined4 *)(*param_3 + 0xc);
    *(int *)(iVar9 + 0xb0) = (int)uVar1;
    *(int *)(iVar9 + 0xb4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(iVar9 + 0xb8) = uVar5;
    *(undefined4 *)(iVar9 + 0xbc) = uVar6;
    *(undefined4 *)(iVar9 + 0xbc) = 0x3f800000;
    auVar19 = _lqc2(*param_3);
    auVar20 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xc0));
    auVar19 = _vsub(auVar19,auVar20);
    auVar19 = _sqc2(auVar19);
    auVar19 = _lqc2(auVar19);
    auVar20 = _lqc2(*param_4);
    auVar19 = _vsub(auVar19,auVar20);
    auVar19 = _sqc2(auVar19);
    auVar20 = _lqc2(auVar19);
    auVar19 = _qmtc2(uVar4);
    auVar19 = _vmulbc(auVar20,auVar19);
    auVar19 = _sqc2(auVar19);
    auVar20 = _lqc2(*param_4);
    auVar19 = _lqc2(auVar19);
    auVar19 = _vadd(auVar20,auVar19);
    auVar19 = _sqc2(auVar19);
    uStack_d0 = auVar19._0_4_;
    uStack_cc = auVar19._4_4_;
    uStack_c8 = auVar19._8_4_;
    uStack_c4 = auVar19._12_4_;
    *(undefined4 *)(iVar9 + 0xd0) = uStack_d0;
    *(undefined4 *)(iVar9 + 0xd4) = uStack_cc;
    *(undefined4 *)(iVar9 + 0xd8) = uStack_c8;
    *(undefined4 *)(iVar9 + 0xdc) = uStack_c4;
    *(undefined4 *)(iVar9 + 0xdc) = 0x3f800000;
    piVar7 = *(int **)(iVar9 + 4);
    if (piVar7 != (int *)0x0) {
      iVar11 = piVar7[0x10];
      while( true ) {
        if (iVar11 == 0) {
          iVar11 = *piVar7;
          if (iVar11 == 0) {
            if ((undefined4 *)piVar7[1] != (undefined4 *)0x0) {
              *(undefined4 *)piVar7[1] = 0;
            }
            *(int *)(iVar9 + 4) = piVar7[1];
          }
          else if (piVar7[1] == 0) {
            *(undefined4 *)(iVar11 + 4) = 0;
          }
          else {
            *(int *)(iVar11 + 4) = piVar7[1];
            *(int *)piVar7[1] = *piVar7;
          }
          FUN_001e09b0(param_1,piVar7);
        }
        auVar19 = _lqc2(*(undefined1 (*) [16])(piVar7 + 0x14));
        auVar20 = _lqc2(*(undefined1 (*) [16])(piVar7 + 0x1c));
        auVar19 = _vadd(auVar19,auVar20);
        auVar19 = _sqc2(auVar19);
        *(undefined1 (*) [16])(piVar7 + 0x14) = auVar19;
        piVar7[0x11] = (int)((float)piVar7[0x11] + (float)piVar7[0x12]);
        piVar7[8] = (int)*(undefined8 *)(piVar7 + 4);
        piVar7[9] = (int)((ulong)*(undefined8 *)(piVar7 + 4) >> 0x20);
        piVar7[10] = piVar7[6];
        piVar7[0xb] = piVar7[7];
        auVar20 = _lqc2(*(undefined1 (*) [16])(piVar7 + 0xc));
        auVar19 = _qmtc2(*(undefined4 *)(iVar9 + 0x80));
        auVar19 = _vmulbc(auVar20,auVar19);
        auVar19 = _sqc2(auVar19);
        iStack_100 = auVar19._0_4_;
        iStack_fc = auVar19._4_4_;
        iStack_f8 = auVar19._8_4_;
        iStack_f4 = auVar19._12_4_;
        piVar7[0xc] = iStack_100;
        piVar7[0xd] = iStack_fc;
        piVar7[0xe] = iStack_f8;
        piVar7[0xf] = iStack_f4;
        auVar19 = _lqc2(*(undefined1 (*) [16])(piVar7 + 0xc));
        auVar20 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x90));
        auVar19 = _vadd(auVar19,auVar20);
        auVar19 = _sqc2(auVar19);
        auVar20 = _lqc2(*(undefined1 (*) [16])(piVar7 + 4));
        auVar19 = _lqc2(auVar19);
        auVar19 = _vadd(auVar20,auVar19);
        auVar19 = _sqc2(auVar19);
        *(undefined1 (*) [16])(piVar7 + 4) = auVar19;
        piVar7[7] = 0x3f800000;
        piVar7[0x10] = piVar7[0x10] + -1;
        piVar7 = (int *)piVar7[1];
        if (piVar7 == (int *)0x0) break;
        iVar11 = piVar7[0x10];
      }
    }
    iVar11 = 0;
    uVar2 = FUN_002109b0();
    fVar18 = -1.0;
    fVar12 = (float)(uVar2 & 0x7fffff | 0x3f800000) - 1.0;
    fVar12 = *(float *)(iVar9 + 0x10) + *(float *)(iVar9 + 0x14) * (fVar12 + fVar12 + -1.0) +
             *(float *)(iVar9 + 0x18);
    iVar13 = (int)fVar12;
    *(float *)(iVar9 + 0x18) = fVar12 - (float)iVar13;
    if (0 < iVar13) {
      do {
        uVar2 = FUN_002109b0();
        fVar12 = (float)(uVar2 & 0x7fffff | 0x3f800000) - 1.0;
        iVar10 = *(int *)(iVar9 + 0x1c) +
                 (int)((float)*(int *)(iVar9 + 0x20) * (fVar12 + fVar12 + fVar18));
        uVar2 = FUN_002109b0();
        fVar12 = (float)(uVar2 & 0x7fffff | 0x3f800000) - 1.0;
        fVar17 = *(float *)(iVar9 + 0x70) + *(float *)(iVar9 + 0x74) * (fVar12 + fVar12 + fVar18);
        uVar2 = FUN_002109b0();
        fVar12 = *(float *)(iVar9 + 0x7c);
        fVar16 = *(float *)(iVar9 + 0x78);
        fVar14 = (float)(uVar2 & 0x7fffff | 0x3f800000) - 1.0;
        fVar14 = fVar14 + fVar14 + fVar18;
        uVar2 = FUN_002109b0();
        fVar15 = (float)(uVar2 & 0x7fffff | 0x3f800000) - 1.0;
        auVar20 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x40));
        auVar19 = _qmtc2(fVar15 + fVar15 + fVar18);
        auVar19 = _vmulbc(auVar20,auVar19);
        auVar19 = _sqc2(auVar19);
        auVar20 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x30));
        auVar19 = _lqc2(auVar19);
        auVar19 = _vadd(auVar20,auVar19);
        auVar19 = _sqc2(auVar19);
        uStack_d0 = auVar19._0_4_;
        uStack_cc = auVar19._4_4_;
        uStack_c8 = auVar19._8_4_;
        uStack_c4 = auVar19._12_4_;
        uVar2 = FUN_002109b0();
        fVar15 = (float)(uVar2 & 0x7fffff | 0x3f800000) - 1.0;
        auVar21 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x60));
        auVar20 = _qmtc2(fVar15 + fVar15 + fVar18);
        auVar20 = _vmulbc(auVar21,auVar20);
        auVar20 = _sqc2(auVar20);
        auVar21 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x50));
        auVar20 = _lqc2(auVar20);
        auVar20 = _vadd(auVar21,auVar20);
        auVar20 = _sqc2(auVar20);
        lVar3 = FUN_001e0968(param_1);
        if (lVar3 == 0) {
          return 1;
        }
        puVar8 = (undefined4 *)lVar3;
        puVar8[0x10] = iVar10;
        puVar8[0x14] = uStack_d0;
        puVar8[0x15] = uStack_cc;
        puVar8[0x16] = uStack_c8;
        puVar8[0x17] = uStack_c4;
        puVar8[0x18] = uStack_d0;
        puVar8[0x19] = uStack_cc;
        puVar8[0x1a] = uStack_c8;
        puVar8[0x1b] = uStack_c4;
        fVar15 = 1.0 / (float)iVar10;
        auVar20 = _lqc2(auVar20);
        auVar19 = _lqc2(auVar19);
        auVar19 = _vsub(auVar20,auVar19);
        auVar19 = _sqc2(auVar19);
        auVar20 = _lqc2(auVar19);
        auVar19 = _qmtc2(fVar15);
        auVar19 = _vmulbc(auVar20,auVar19);
        auVar19 = _sqc2(auVar19);
        uStack_d0 = auVar19._0_4_;
        uStack_cc = auVar19._4_4_;
        uStack_c8 = auVar19._8_4_;
        uStack_c4 = auVar19._12_4_;
        puVar8[0x1c] = uStack_d0;
        puVar8[0x1d] = uStack_cc;
        puVar8[0x1e] = uStack_c8;
        puVar8[0x1f] = uStack_c4;
        uVar4 = *(undefined4 *)(iVar9 + 0xd4);
        uVar5 = *(undefined4 *)(iVar9 + 0xd8);
        uVar6 = *(undefined4 *)(iVar9 + 0xdc);
        puVar8[0xc] = *(undefined4 *)(iVar9 + 0xd0);
        puVar8[0xd] = uVar4;
        puVar8[0xe] = uVar5;
        puVar8[0xf] = uVar6;
        uVar4 = *(undefined4 *)(iVar9 + 0xb4);
        uVar5 = *(undefined4 *)(iVar9 + 0xb8);
        uVar6 = *(undefined4 *)(iVar9 + 0xbc);
        puVar8[4] = *(undefined4 *)(iVar9 + 0xb0);
        puVar8[5] = uVar4;
        puVar8[6] = uVar5;
        puVar8[7] = uVar6;
        uVar4 = *(undefined4 *)(iVar9 + 0xb4);
        uVar5 = *(undefined4 *)(iVar9 + 0xb8);
        uVar6 = *(undefined4 *)(iVar9 + 0xbc);
        puVar8[8] = *(undefined4 *)(iVar9 + 0xb0);
        puVar8[9] = uVar4;
        puVar8[10] = uVar5;
        puVar8[0xb] = uVar6;
        puVar8[0x11] = fVar17;
        puVar8[0x12] = ((fVar16 + fVar12 * fVar14) - fVar17) * fVar15;
        *puVar8 = 0;
        puVar8[1] = *(undefined4 *)(iVar9 + 4);
        iVar10 = *(int *)(iVar9 + 8);
        if (*(undefined4 **)(iVar9 + 4) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar9 + 4) = puVar8;
          iVar10 = *(int *)(iVar9 + 8);
        }
        iVar11 = iVar11 + 1;
        *(undefined4 **)(iVar9 + 4) = puVar8;
        *(int *)(iVar9 + 8) = iVar10 + 1;
      } while (iVar11 < iVar13);
    }
    uVar4 = 1;
  }
  return uVar4;
}

