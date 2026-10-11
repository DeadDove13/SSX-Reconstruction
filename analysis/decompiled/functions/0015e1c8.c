/* Ghidra pseudocode. PS2 address: 0015e1c8. Not validated source. */

void FUN_0015e1c8(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [12];
  undefined4 uStack_c4;
  
  *param_1 = -1;
  *param_2 = -1;
  *param_3 = -1;
  *param_4 = -1;
  for (iVar2 = 0; iVar2 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c); iVar2 = iVar2 + 1) {
    iVar1 = FUN_00189b78(DAT_002859e4,iVar2);
    if (*(int *)(iVar1 + 0x24) == 0) {
      *param_1 = iVar2;
    }
    iVar1 = FUN_00189b78(DAT_002859e4,iVar2);
    if (*(int *)(iVar1 + 0x24) == 1) {
      *param_2 = iVar2;
    }
  }
  if (*param_1 != -1) {
    fVar9 = 1000.0;
    iVar2 = FUN_00189b78();
    fStack_110 = *(float *)(iVar2 + 0x110);
    fStack_10c = *(float *)(iVar2 + 0x114);
    fStack_108 = *(float *)(iVar2 + 0x118);
    uStack_f8 = 0x3f800000;
    uStack_100 = 0;
    uStack_fc = 0;
    fStack_11c = fStack_108 * 0.0 - fStack_110 * 1.0;
    fStack_118 = fStack_110 * 0.0 - fStack_10c * 0.0;
    fStack_120 = fStack_10c * 1.0 - fStack_108 * 0.0;
    fVar6 = (float)FUN_0011ee88(&fStack_120,&fStack_120);
    if (SQRT(fVar6) == 0.0) {
      fStack_130 = fStack_120;
      fStack_12c = fStack_11c;
      fStack_128 = fStack_118;
    }
    else {
      FUN_0011ee58(&fStack_130,&fStack_120);
    }
    iVar4 = 0;
    fVar6 = 1000.0;
    iVar2 = -1;
    iVar1 = -1;
LAB_0015e498:
    if (iVar4 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c)) {
      if (iVar4 == *param_2) {
        iVar4 = iVar4 + 1;
      }
      else {
        if (iVar4 != *param_1) {
          iVar3 = FUN_00189b78(DAT_002859e4,iVar4);
          uStack_e4 = *(undefined4 *)(iVar3 + 0x762c);
          uStack_f0 = *(undefined4 *)(iVar3 + 0x7620);
          uStack_ec = *(undefined4 *)(iVar3 + 0x7624);
          uStack_e8 = *(undefined4 *)(iVar3 + 0x7628);
          iVar3 = FUN_00189b78(DAT_002859e4,*param_1);
          uStack_d4 = *(undefined4 *)(iVar3 + 0x762c);
          uStack_e0 = *(undefined4 *)*(undefined1 (*) [16])(iVar3 + 0x7620);
          uStack_dc = *(undefined4 *)(iVar3 + 0x7624);
          uStack_d8 = *(undefined4 *)(iVar3 + 0x7628);
          auVar10._4_4_ = uStack_ec;
          auVar10._0_4_ = uStack_f0;
          auVar10._8_4_ = uStack_e8;
          auVar10._12_4_ = uStack_e4;
          auVar10 = _lqc2(auVar10);
          auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x7620));
          auVar10 = _vsub(auVar10,auVar11);
          _auStack_d0 = _sqc2(auVar10);
          fStack_120 = auStack_d0._0_4_;
          fStack_11c = auStack_d0._4_4_;
          fStack_108 = (float)auStack_d0._8_4_;
          uStack_104 = uStack_c4;
          fVar7 = fStack_120 * fStack_130 + fStack_11c * fStack_12c +
                  (float)auStack_d0._8_4_ * fStack_128;
          fStack_118 = (float)auStack_d0._8_4_;
          fStack_110 = fStack_120;
          fStack_10c = fStack_11c;
          if ((fVar7 <= 0.0) || (fVar8 = fVar9, iVar3 = iVar1, iVar5 = iVar4, fVar6 <= fVar7)) {
            if (0.0 <= fVar7) {
              iVar4 = iVar4 + 1;
              goto LAB_0015e498;
            }
            fVar8 = ABS(fVar7);
            fVar7 = fVar6;
            iVar3 = iVar4;
            iVar5 = iVar2;
            if (fVar9 <= fVar8) {
              iVar4 = iVar4 + 1;
              goto LAB_0015e498;
            }
          }
          iVar4 = iVar4 + 1;
          fVar9 = fVar8;
          fVar6 = fVar7;
          iVar2 = iVar5;
          iVar1 = iVar3;
          goto LAB_0015e498;
        }
        iVar4 = iVar4 + 1;
      }
      goto LAB_0015e498;
    }
    if (iVar1 != -1) {
      *param_3 = iVar1;
    }
    if (iVar2 != -1) {
      *param_4 = iVar2;
    }
  }
  return;
}

