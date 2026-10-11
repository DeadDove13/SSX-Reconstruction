/* Ghidra pseudocode. PS2 address: 00106ca0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00106e28) */

void FUN_00106ca0(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  
  iVar6 = 0;
  iVar4 = 0x32;
  auVar11 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x34));
  auVar13 = _vaddbc(in_vf0,in_vf0);
  auVar12 = _vmul(auVar11,auVar11);
  _vaddabc(auVar12,auVar12);
  _vmaddabc(auVar13,auVar12);
  auVar12 = _vmaddbc(auVar13,auVar12);
  _vrsqrt(in_vf0,auVar12);
  uVar15 = _vwaitq();
  auVar11 = _vmulq(auVar11,uVar15);
  auVar11 = _sqc2(auVar11);
  auStack_100._0_4_ = auVar11._0_4_;
  auStack_100._4_4_ = auVar11._4_4_;
  auStack_100._8_4_ = auVar11._8_4_;
  auStack_100._12_4_ = auVar11._12_4_;
  uStack_110 = auStack_100._0_4_;
  uStack_10c = auStack_100._4_4_;
  uStack_108 = auStack_100._8_4_;
  uStack_104 = auStack_100._12_4_;
  auVar12 = _lqc2(auVar11);
  auVar11 = _qmtc2(0x44480000);
  auVar11 = _vmulbc(auVar12,auVar11);
  auVar11 = _sqc2(auVar11);
  auStack_100._0_4_ = auVar11._0_4_;
  auStack_100._4_4_ = auVar11._4_4_;
  auStack_100._8_4_ = auVar11._8_4_;
  auStack_100._12_4_ = auVar11._12_4_;
  iStack_120 = auStack_100._0_4_;
  uStack_11c = auStack_100._4_4_;
  uStack_118 = auStack_100._8_4_;
  uStack_114 = auStack_100._12_4_;
  auVar12 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar11 = _lqc2(auVar11);
  auVar11 = _vadd(auVar12,auVar11);
  auStack_100 = _sqc2(auVar11);
  uStack_130 = auStack_100._0_4_;
  uStack_12c = auStack_100._4_4_;
  uStack_128 = auStack_100._8_4_;
  uStack_124 = auStack_100._12_4_;
  fVar10 = DAT_002c1120;
  iVar1 = 0x32;
  if (param_1[0xd0] != 0) goto LAB_00106e4c;
  if (param_1[0xd1] == 2) {
    if (param_1[0x27] == 0) {
      iVar4 = 0;
      goto LAB_00106dfc;
    }
    if ((float)param_1[7] < 0.0) {
      iVar4 = 100;
      goto LAB_00106dfc;
    }
    iVar1 = *param_1;
  }
  else {
    if (param_1[0xd1] == 0) {
      if (DAT_002c1124 <= (float)param_1[7]) {
        uVar3 = param_1[0x27] - 2;
LAB_00106df4:
        if (uVar3 < 2) {
          iVar4 = 0;
        }
      }
      else {
        iVar4 = 100;
      }
    }
    else {
      if (DAT_002c1128 <= (float)param_1[7]) {
        uVar3 = param_1[0x27] - 3;
        goto LAB_00106df4;
      }
      iVar4 = 100;
    }
LAB_00106dfc:
    iVar1 = *param_1;
  }
  fVar7 = (float)(**(code **)(iVar1 + 0x74))((int)param_1 + (int)*(short *)(iVar1 + 0x70));
  iVar2 = FUN_002109e0();
  uVar3 = FUN_00258848(fVar7 * 100.0);
  iVar1 = iVar4;
  if (uVar3 < (uint)(iVar2 % 100)) {
    iVar1 = 0x32;
  }
LAB_00106e4c:
  piVar5 = &iStack_120;
  iVar4 = FUN_0019c4f0(0x28acf8,&uStack_130,piVar5,6);
  if (0 < iVar4) {
    fVar7 = 200.0;
    do {
      if ((*piVar5 != param_1[0x20bd]) || (param_2 == 0)) {
        fVar8 = (float)FUN_0019b688(*piVar5,&uStack_130,auStack_100,auStack_c0);
        fVar9 = (float)FUN_0019be28(*piVar5);
        if (fVar8 <= fVar9 - fVar7) {
          FUN_0019bcf8(fVar8 + 800.0,&uStack_e0,*piVar5,0);
          auVar11._4_4_ = uStack_12c;
          auVar11._0_4_ = uStack_130;
          auVar11._8_4_ = uStack_128;
          auVar11._12_4_ = uStack_124;
          auVar11 = _lqc2(auVar11);
          auVar12._4_4_ = uStack_dc;
          auVar12._0_4_ = uStack_e0;
          auVar12._8_4_ = uStack_d8;
          auVar12._12_4_ = uStack_d4;
          auVar12 = _lqc2(auVar12);
          auVar11 = _vsub(auVar11,auVar12);
          auVar11 = _sqc2(auVar11);
          auStack_d0._0_4_ = auVar11._0_4_;
          auStack_d0._4_4_ = auVar11._4_4_;
          auStack_d0._8_4_ = auVar11._8_4_;
          auStack_d0._12_4_ = auVar11._12_4_;
          iStack_f0 = auStack_d0._0_4_;
          iStack_ec = auStack_d0._4_4_;
          iStack_e8 = auStack_d0._8_4_;
          iStack_e4 = auStack_d0._12_4_;
          auVar12 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
          auVar13 = _lqc2(auStack_100);
          auVar12 = _vsub(auVar12,auVar13);
          auStack_d0 = _sqc2(auVar12);
          uStack_e0 = auStack_d0._0_4_;
          uStack_dc = auStack_d0._4_4_;
          uStack_d8 = auStack_d0._8_4_;
          uStack_d4 = auStack_d0._12_4_;
          auVar12 = _lqc2(auStack_d0);
          auVar13 = _lqc2(auStack_d0);
          auVar14 = _vaddbc(in_vf0,in_vf0);
          auVar12 = _vmul(auVar12,auVar13);
          _vaddabc(auVar12,auVar12);
          _vmaddabc(auVar14,auVar12);
          auVar12 = _vmaddbc(auVar14,auVar12);
          auVar12 = _qmfc2(auVar12._0_4_);
          auVar13 = _lqc2(auVar11);
          auVar11 = _lqc2(auVar11);
          auVar14 = _vaddbc(in_vf0,in_vf0);
          auVar11 = _vmul(auVar13,auVar11);
          _vaddabc(auVar11,auVar11);
          _vmaddabc(auVar14,auVar11);
          auVar11 = _vmaddbc(auVar14,auVar11);
          auVar11 = _qmfc2(auVar11._0_4_);
          fVar8 = auVar12._0_4_ + auVar11._0_4_;
          if (param_1[0xd0] == 0) {
            iVar2 = *(int *)(*piVar5 + 0x38) - iVar1;
            if (iVar2 < 0) {
              iVar2 = -iVar2;
            }
            fVar8 = fVar8 - (float)(100 - iVar2) * DAT_002c112c;
          }
          if ((fVar8 < fVar10) && (iVar6 = *piVar5, fVar10 = fVar8, iVar6 == param_1[0x20bd])) {
            iVar6 = 0;
          }
        }
      }
      iVar4 = iVar4 + -1;
      piVar5 = piVar5 + 1;
    } while (iVar4 != 0);
  }
  if (iVar6 != 0) {
    param_1[0xc5] = -1;
    param_1[0x20bd] = iVar6;
    fVar10 = (float)FUN_0019b848(iVar6,param_1 + 0x30,param_1 + 0xb0,param_1 + 0xae,param_1 + 0xc0);
    param_1[0xad] = (int)fVar10;
    FUN_0019bcf8(fVar10 + 800.0,&iStack_f0,param_1[0x20bd],0);
    param_1[0xb4] = iStack_f0;
    param_1[0xb5] = iStack_ec;
    param_1[0xb6] = iStack_e8;
    param_1[0xb7] = iStack_e4;
    param_1[0xac] = param_1[0xad];
  }
  return;
}

