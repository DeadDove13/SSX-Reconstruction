/* Ghidra pseudocode. PS2 address: 0011be88. Not validated source. */

void FUN_0011be88(undefined1 (*param_1) [16],long param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int *piStack_26c0;
  int *piStack_26bc;
  undefined4 uStack_26b0;
  undefined4 uStack_26ac;
  undefined4 uStack_26a8;
  int iStack_26a4;
  int aiStack_26a0 [4];
  undefined4 uStack_2690;
  undefined4 uStack_268c;
  undefined4 uStack_2688;
  int iStack_2684;
  int iStack_2680;
  undefined4 uStack_267c;
  undefined4 uStack_2678;
  undefined4 uStack_2674;
  int aiStack_2670 [4];
  undefined4 uStack_2660;
  undefined4 uStack_265c;
  undefined4 uStack_2658;
  int iStack_2654;
  undefined4 uStack_2650;
  undefined4 uStack_264c;
  undefined4 uStack_2648;
  undefined4 uStack_2644;
  undefined1 auStack_c0 [16];
  
  iVar6 = -0x40;
  iVar5 = 0;
  bVar1 = false;
  iVar2 = 0xc9;
  if (param_2 != 0) {
    iVar6 = 0x80;
  }
  auVar12._4_4_ = *(undefined4 *)(DAT_00296264 + 0x18);
  auVar12._0_4_ = *(undefined4 *)(DAT_00296264 + 8);
  auVar12._8_4_ = *(undefined4 *)(DAT_00296264 + 0x28);
  auVar12._12_4_ = 0;
  auVar13 = _lqc2(auVar12);
  auVar12 = _qmtc2(0x41200000);
  auVar12 = _vmulbc(auVar13,auVar12);
  auVar12 = _sqc2(auVar12);
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  uVar8 = 0xffffffff;
  piStack_26c0 = (int *)0x0;
  piStack_26bc = (int *)0x0;
  if (*(int *)param_1[0x195] != 0) {
    iStack_2654 = (int)(*(float *)param_1[3] * (float)iVar6);
    iStack_2684 = (int)(*(float *)(param_1[2] + 0xc) * (float)iVar6);
    if (iStack_2654 < 0) {
      iStack_2654 = 0;
    }
    if (iStack_2684 < 0) {
      iStack_2684 = 0;
    }
    if (iStack_2684 <= iStack_2654) {
      aiStack_26a0[0] = *(int *)(param_1[3] + 0xc);
      aiStack_2670[0] = 0;
    }
    else {
      aiStack_26a0[0] = 0;
      aiStack_2670[0] = *(int *)(param_1[3] + 0xc);
    }
    uVar8 = (uint)(iStack_2684 <= iStack_2654);
    auVar13 = _lqc2(*param_1);
    auVar14 = _lqc2(auVar12);
    auVar13 = _vsub(auVar13,auVar14);
    auVar13 = _sqc2(auVar13);
    iVar5 = 2;
    bVar1 = true;
    auStack_c0._12_4_ = auVar13._12_4_;
    piStack_26c0 = aiStack_26a0;
    uStack_26b0 = auVar13._0_4_;
    uStack_26ac = auVar13._4_4_;
    uStack_26a8 = auVar13._8_4_;
    iStack_2680 = uStack_26b0;
    uStack_267c = uStack_26ac;
    uStack_2678 = uStack_26a8;
    uStack_2674 = auStack_c0._12_4_;
    piStack_26bc = aiStack_2670;
    uStack_2690 = 0x80;
    uStack_268c = 0x80;
    uStack_2688 = 0x80;
    aiStack_26a0[2] = 0x3f800000;
    aiStack_26a0[1] = 0;
    auVar13 = _lqc2(param_1[1]);
    auVar14 = _lqc2(auVar12);
    auVar13 = _vsub(auVar13,auVar14);
    auStack_c0 = _sqc2(auVar13);
    iStack_26a4 = auStack_c0._12_4_;
    uStack_2650 = auStack_c0._0_4_;
    uStack_264c = auStack_c0._4_4_;
    uStack_2648 = auStack_c0._8_4_;
    uStack_2644 = iStack_26a4;
    aiStack_2670[2] = 0x3f800000;
    uStack_2658 = 0x80;
    uStack_2660 = 0x80;
    uStack_265c = 0x80;
    aiStack_2670[1] = 0;
  }
  iVar2 = *(int *)param_1[0x194];
  iVar9 = 0;
  if (0 < *(int *)(param_1[0x194] + 4) + -1) {
    piVar4 = aiStack_26a0 + iVar5 * 0xc + 8;
    do {
      iVar7 = iVar2 + -1;
      iVar3 = iVar2 + 99;
      iVar2 = iVar7;
      if (iVar7 < 0) {
        iVar2 = iVar3;
      }
      iVar3 = (int)(*(float *)(param_1[iVar2 * 4 + 6] + 0xc) * (float)iVar6);
      iVar7 = (int)(*(float *)param_1[iVar2 * 4 + 7] * (float)iVar6);
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      if (iVar7 < iVar3) {
        iVar11 = 0;
        iVar10 = *(int *)(param_1[iVar2 * 4 + 7] + 0xc);
        if (uVar8 != 0) {
          if (uVar8 != 0xffffffff) {
            iVar7 = 0;
            iVar3 = 0;
            piStack_26c0[7] = 0;
            piStack_26bc[7] = 0;
          }
          uVar8 = 0;
        }
      }
      else {
        iVar10 = 0;
        iVar11 = *(int *)(param_1[iVar2 * 4 + 7] + 0xc);
        if (uVar8 != 1) {
          if (uVar8 != 0xffffffff) {
            iVar7 = 0;
            iVar3 = 0;
            piStack_26c0[7] = 0;
            piStack_26bc[7] = 0;
          }
          uVar8 = 1;
        }
      }
      auVar13 = _lqc2(param_1[iVar2 * 4 + 4]);
      auVar14 = _lqc2(auVar12);
      auVar13 = _vsub(auVar13,auVar14);
      auVar13 = _sqc2(auVar13);
      iStack_26a4 = auVar13._12_4_;
      auStack_c0._0_4_ = auVar13._0_4_;
      auStack_c0._4_4_ = auVar13._4_4_;
      auStack_c0._8_4_ = auVar13._8_4_;
      *piVar4 = auStack_c0._0_4_;
      piVar4[1] = auStack_c0._4_4_;
      piVar4[2] = auStack_c0._8_4_;
      piVar4[3] = iStack_26a4;
      aiStack_26a0[iVar5 * 0xc + 7] = iVar3;
      aiStack_26a0[iVar5 * 0xc] = iVar11;
      aiStack_26a0[iVar5 * 0xc + 4] = 0x80;
      aiStack_26a0[iVar5 * 0xc + 5] = 0x80;
      aiStack_26a0[iVar5 * 0xc + 6] = 0x80;
      aiStack_26a0[iVar5 * 0xc + 2] = 0x3f800000;
      if (bVar1) {
        aiStack_26a0[iVar5 * 0xc + 1] = 0x3f800000;
      }
      else {
        aiStack_26a0[iVar5 * 0xc + 1] = 0;
      }
      iVar3 = iVar5 + 1;
      piStack_26c0 = aiStack_26a0 + iVar5 * 0xc;
      auVar13 = _lqc2(param_1[iVar2 * 4 + 5]);
      auVar14 = _lqc2(auVar12);
      auVar13 = _vsub(auVar13,auVar14);
      auStack_c0 = _sqc2(auVar13);
      iStack_26a4 = auStack_c0._12_4_;
      piVar4[0xc] = auStack_c0._0_4_;
      piVar4[0xd] = auStack_c0._4_4_;
      piVar4[0xe] = auStack_c0._8_4_;
      piVar4[0xf] = iStack_26a4;
      aiStack_26a0[iVar3 * 0xc + 7] = iVar7;
      aiStack_26a0[iVar3 * 0xc] = iVar10;
      aiStack_26a0[iVar3 * 0xc + 4] = 0x80;
      aiStack_26a0[iVar3 * 0xc + 5] = 0x80;
      aiStack_26a0[iVar3 * 0xc + 6] = 0x80;
      aiStack_26a0[iVar3 * 0xc + 2] = 0x3f800000;
      if (bVar1) {
        aiStack_26a0[iVar3 * 0xc + 1] = 0x3f800000;
      }
      else {
        aiStack_26a0[iVar3 * 0xc + 1] = 0;
      }
      piVar4 = piVar4 + 0x18;
      iVar5 = iVar5 + 2;
      bVar1 = (bool)(bVar1 ^ 1);
      piStack_26bc = aiStack_26a0 + iVar3 * 0xc;
      if (*(int *)(param_1[iVar2 * 4 + 7] + 8) != 0) {
        if (2 < iVar5) {
          FUN_0011ed58(0x295e90,iVar5,aiStack_26a0,0);
        }
        piVar4 = aiStack_26a0 + 8;
        iVar5 = 0;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1[0x194] + 4) + -1);
  }
  if (2 < iVar5) {
    FUN_0011ed58(0x295e90,iVar5,aiStack_26a0,0);
  }
  return;
}

