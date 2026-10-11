/* Ghidra pseudocode. PS2 address: 00163f68. Not validated source. */

void FUN_00163f68(int param_1,float *param_2,int param_3,undefined8 param_4,float *param_5,
                 long param_6,long param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *puVar11;
  float fVar12;
  undefined *puVar13;
  float fVar14;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [8];
  undefined4 uStack_d4;
  undefined1 auStack_d0 [8];
  float fStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  
  fVar10 = *param_2;
  fVar5 = param_2[1];
  fVar8 = param_2[2];
  piVar4 = *(int **)(param_1 + 0x44);
  fStack_110 = (float)piVar4[2];
  fStack_10c = (float)piVar4[3];
  fStack_108 = (float)piVar4[4];
  fStack_128 = fStack_108 + 0.0;
  fStack_130 = fStack_110 + 0.0;
  fStack_12c = fStack_10c + 0.0;
  if (*piVar4 == 0) {
    param_2[3] = (float)piVar4[5];
    param_2[4] = (float)piVar4[6];
    fVar9 = (float)piVar4[7];
  }
  else {
    iVar2 = piVar4[1] * 0x20 + param_3;
    fStack_130 = fStack_130 + *(float *)(iVar2 + 0x14);
    fStack_12c = fStack_12c + *(float *)(iVar2 + 0x18);
    fStack_128 = fStack_128 + *(float *)(iVar2 + 0x1c);
    if (piVar4[0xc] != 0) {
      piVar3 = (int *)(piVar4[1] * 0x20 + param_3);
      iVar2 = *piVar3;
      if (iVar2 != 0) {
        if (piVar4[0xd] == -1) {
          fStack_f0 = *(float *)(iVar2 + 0x75e0);
          fStack_ec = *(float *)(iVar2 + 0x75e4);
          fStack_e8 = *(float *)(iVar2 + 0x75e8);
          uStack_e4 = *(undefined4 *)(iVar2 + 0x75ec);
          fStack_110 = fStack_f0 - (float)piVar3[5];
          fStack_108 = fStack_e8 - (float)piVar3[7];
          fStack_130 = fStack_130 + fStack_110;
          fStack_10c = fStack_ec - (float)piVar3[6];
          fStack_128 = fStack_128 + fStack_108;
          fStack_12c = fStack_12c + fStack_10c;
        }
        else {
          iVar2 = piVar4[0xd] * 0x40 + iVar2;
          fStack_100 = *(float *)(iVar2 + 0x7660);
          fStack_fc = *(float *)(iVar2 + 0x7664);
          fStack_f8 = *(float *)(iVar2 + 0x7668);
          uStack_f4 = *(undefined4 *)(iVar2 + 0x766c);
          fStack_130 = (fStack_130 + fStack_100) - (float)piVar3[5];
          fStack_12c = (fStack_12c + fStack_fc) - (float)piVar3[6];
          fStack_128 = (fStack_128 + fStack_f8) - (float)piVar3[7];
        }
      }
    }
    puVar11 = (undefined *)(fStack_130 - fVar10);
    fVar9 = fStack_12c - fVar5;
    fVar14 = SQRT((float)puVar11 * (float)puVar11 + fVar9 * fVar9);
    if (fVar14 < DAT_002c2690) {
      fVar14 = SQRT((float)DAT_002c4858 * (float)DAT_002c4858 + DAT_002c485c * DAT_002c485c);
      puVar11 = DAT_002c4858;
      fVar9 = DAT_002c485c;
    }
    DAT_002c485c = fVar9;
    DAT_002c4858 = puVar11;
    fVar9 = DAT_002c485c;
    if (DAT_002c485c == 0.0) {
      puVar11 = DAT_002c4858;
      if (((float)DAT_002c4858 != 0.0) && (puVar11 = DAT_002c2698, (float)DAT_002c4858 < 0.0)) {
        puVar11 = PTR_DAT_002c2694;
      }
    }
    else {
      puVar7 = DAT_002c4858;
      puVar11 = (undefined *)FUN_00218510((float)DAT_002c4858 / DAT_002c485c);
      if (fVar9 < 0.0) {
        if (0.0 < (float)puVar7) {
          puVar11 = (undefined *)((float)puVar11 + DAT_002c269c);
        }
        else {
          puVar11 = (undefined *)((float)puVar11 - DAT_002c26a0);
        }
      }
    }
    piVar4 = *(int **)(param_1 + 0x44);
    fVar9 = DAT_002c26a4 - (float)puVar11;
    iVar2 = piVar4[1];
    param_2[3] = fVar9;
    iVar2 = *(int *)(iVar2 * 0x20 + param_3);
    param_2[3] = fVar9 + (float)piVar4[5];
    if (iVar2 != 0) {
      if ((*(int *)(iVar2 + 0x34c) != 1) || (DAT_002c26a8 <= *(float *)(iVar2 + 0x8308))) {
        if (((param_7 == 1) && (*(int *)(iVar2 + 0x34c) == 2)) && (*param_5 < DAT_002c26ac)) {
          fVar9 = 1.0;
          iVar2 = *(int *)(piVar4[1] * 0x20 + param_3);
          fStack_110 = *(float *)(iVar2 + 0x8320);
          fStack_10c = *(float *)(iVar2 + 0x8324);
          fStack_108 = *(float *)(iVar2 + 0x8328);
          auVar15 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x8330));
          auVar16 = _vaddbc(in_vf0,in_vf0);
          auVar17 = _vmul(auVar15,auVar15);
          _vaddabc(auVar17,auVar17);
          _vmaddabc(auVar16,auVar17);
          auVar17 = _vmaddbc(auVar16,auVar17);
          _vrsqrt(in_vf0,auVar17);
          uVar18 = _vwaitq();
          auVar15 = _vmulq(auVar15,uVar18);
          _auStack_e0 = _sqc2(auVar15);
          uStack_e4 = uStack_d4;
          fStack_100 = (float)auStack_e0;
          fStack_f0 = -fStack_110;
          fStack_ec = -fStack_10c;
          fStack_fc = (float)auStack_dc._0_4_;
          fStack_e8 = -fStack_108;
          fStack_f8 = (float)auStack_dc._4_4_;
          fVar6 = ((fStack_f0 * (float)auStack_e0 + fStack_ec * (float)auStack_dc._0_4_ +
                   fStack_e8 * (float)auStack_dc._4_4_) - 1000.0) / DAT_002c26b0;
          if (fVar6 <= 1.0) {
            fVar9 = fVar6;
          }
          fVar6 = 200.0;
          iVar2 = *(int *)(*(int *)(piVar4[1] * 0x20 + param_3) + 0x210);
          if (iVar2 == 4) {
            fVar6 = 125.0;
LAB_001644dc:
            fVar9 = fVar6 * fVar9;
          }
          else if (iVar2 < 5) {
            if (iVar2 == 3) {
              fVar9 = fVar9 * 166.0;
            }
            else {
              fVar9 = fVar9 * 200.0;
            }
          }
          else {
            if (0xe < iVar2) goto LAB_001644dc;
            if (iVar2 < 0xc) {
              fVar9 = fVar9 * 200.0;
            }
            else {
              fVar9 = fVar9 * 250.0;
            }
          }
          fStack_128 = fStack_128 - fVar9;
        }
      }
      else {
        fStack_110 = *(float *)(iVar2 + 0x8320);
        fStack_10c = *(float *)(iVar2 + 0x8324);
        fStack_108 = *(float *)(iVar2 + 0x8328);
        auVar15 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x8330));
        auVar16 = _vaddbc(in_vf0,in_vf0);
        auVar17 = _vmul(auVar15,auVar15);
        _vaddabc(auVar17,auVar17);
        _vmaddabc(auVar16,auVar17);
        auVar17 = _vmaddbc(auVar16,auVar17);
        _vrsqrt(in_vf0,auVar17);
        uVar18 = _vwaitq();
        auVar15 = _vmulq(auVar15,uVar18);
        _auStack_d0 = _sqc2(auVar15);
        auStack_e0 = auStack_d0._0_4_;
        fStack_100 = (float)auStack_e0;
        auStack_dc._0_4_ = auStack_d0._4_4_;
        fStack_fc = (float)auStack_dc._0_4_;
        fVar9 = -fStack_110 * (float)auStack_e0;
        fVar6 = -fStack_10c * (float)auStack_dc._0_4_;
        auStack_dc._4_4_ = auStack_d0._8_4_;
        fVar12 = -fStack_108 * (float)auStack_dc._4_4_;
        fStack_f8 = (float)auStack_dc._4_4_;
        auStack_dc._0_4_ = -fStack_10c;
        auStack_e0 = (undefined1  [4])-fStack_110;
        auStack_dc._4_4_ = -fStack_108;
        uStack_d4 = uStack_c4;
        if (1000.0 < fVar9 + fVar6 + fVar12) {
          *param_5 = 0.0;
        }
      }
    }
    puVar7 = DAT_002c26b8;
    puVar11 = PTR_DAT_002c26b4;
    fVar9 = 0.0;
    puVar13 = (undefined *)(fStack_128 - fVar8);
    if (fVar14 == 0.0) {
      if ((float)puVar13 == 0.0) goto LAB_00164574;
      if (0.0 <= (float)puVar13) {
        param_2[4] = (float)DAT_002c26b8;
      }
      else {
        param_2[4] = (float)PTR_DAT_002c26b4;
        puVar7 = puVar11;
      }
    }
    else {
      puVar11 = (undefined *)FUN_00218510((float)puVar13 / fVar14);
      if (fVar14 < fVar9) {
        if (fVar9 < (float)puVar13) {
          puVar11 = (undefined *)((float)puVar11 + DAT_002c26bc);
        }
        else {
          puVar11 = (undefined *)((float)puVar11 - DAT_002c26c0);
        }
      }
      piVar4 = *(int **)(param_1 + 0x44);
      puVar13 = puVar11;
LAB_00164574:
      param_2[4] = (float)puVar13;
      puVar7 = puVar13;
    }
    iVar2 = piVar4[1];
    fVar9 = (float)piVar4[6];
    param_2[5] = 0.0;
    iVar2 = *(int *)(iVar2 * 0x20 + param_3);
    param_2[4] = (float)puVar7 + fVar9;
    if (iVar2 == 0) {
LAB_00164998:
      fVar9 = param_2[5];
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x34c);
      if ((piVar4[0xb] == 1) || (param_6 == 1)) {
        if (((iVar1 != 1) && ((iVar1 != 3 && (iVar1 != 5)))) && (iVar1 != 6)) {
          fStack_110 = *(float *)(iVar2 + 0x220);
          fStack_10c = *(float *)(iVar2 + 0x224);
          fStack_f0 = fStack_130 - fVar10;
          fStack_ec = fStack_12c - fVar5;
          fStack_e8 = fStack_128 - fVar8;
          fStack_108 = *(float *)(iVar2 + 0x228);
          fVar9 = (float)FUN_0011ee88(&fStack_f0,&fStack_f0);
          if (SQRT(fVar9) == 0.0) {
            fStack_100 = fStack_f0;
            fStack_fc = fStack_ec;
            fStack_f8 = fStack_e8;
          }
          else {
            FUN_0011ee58(&fStack_100,&fStack_f0);
          }
          fStack_bc = fStack_110 * fStack_100 + fStack_10c * fStack_fc + fStack_108 * fStack_f8;
          fStack_b8 = fStack_bc * fStack_f8;
          fStack_c0 = fStack_bc * fStack_100;
          fStack_bc = fStack_bc * fStack_fc;
          auStack_dc._4_4_ = fStack_108 - fStack_b8;
          auStack_dc._0_4_ = fStack_10c - fStack_bc;
          auStack_e0 = (undefined1  [4])(fStack_110 - fStack_c0);
          fVar9 = (float)FUN_0011ee88(auStack_e0,auStack_e0);
          if (SQRT(fVar9) == 0.0) {
            fStack_f0 = (float)auStack_e0;
            fStack_ec = (float)auStack_dc._0_4_;
            fStack_e8 = (float)auStack_dc._4_4_;
          }
          else {
            FUN_0011ee58(&fStack_f0,auStack_e0);
          }
          _auStack_e0 = ZEXT412(0x3f800000) << 0x40;
          fStack_9c = fStack_100 * 0.0 + fStack_fc * 0.0 + fStack_f8 * 1.0;
          fStack_98 = fStack_9c * fStack_f8;
          fStack_a0 = fStack_9c * fStack_100;
          fStack_9c = fStack_9c * fStack_fc;
          fStack_a8 = 1.0 - fStack_98;
          fStack_b0 = 0.0 - fStack_a0;
          fStack_ac = 0.0 - fStack_9c;
          fVar9 = (float)FUN_0011ee88(&fStack_b0,&fStack_b0);
          auVar15 = _auStack_d0;
          if (SQRT(fVar9) == 0.0) {
            auStack_d0._4_4_ = fStack_ac;
            auStack_d0._0_4_ = fStack_b0;
            uStack_c4 = auVar15._12_4_;
            fStack_c8 = fStack_a8;
            fVar9 = fStack_b0;
          }
          else {
            FUN_0011ee58(auStack_d0,&fStack_b0);
            fVar9 = (float)auStack_d0._0_4_;
          }
          auVar15 = _auStack_e0;
          auStack_dc._0_4_ = auStack_d0._4_4_;
          auStack_e0 = (undefined1  [4])fVar9;
          fVar9 = fVar9 * fStack_f0 + (float)auStack_d0._4_4_ * fStack_ec + fStack_c8 * fStack_e8;
          uStack_d4 = auVar15._12_4_;
          auStack_dc._4_4_ = fStack_c8;
          if ((fVar9 < -1.0) || (1.0 < fVar9)) {
            fVar9 = 1.0;
          }
          fVar9 = (float)FUN_00218410(fVar9);
          auVar15 = _auStack_d0;
          auStack_d0._0_4_ =
               fStack_fc * (float)auStack_dc._4_4_ - fStack_f8 * (float)auStack_dc._0_4_;
          auStack_d0._4_4_ = fStack_f8 * (float)auStack_e0 - fStack_100 * (float)auStack_dc._4_4_;
          fStack_c8 = fStack_100 * (float)auStack_dc._0_4_ - fStack_fc * (float)auStack_e0;
          uStack_c4 = auVar15._12_4_;
          fVar9 = DAT_002c26c4 - fVar9;
          if ((float)auStack_d0._0_4_ * fStack_f0 + (float)auStack_d0._4_4_ * fStack_ec +
              fStack_c8 * fStack_e8 < 0.0) {
            fVar9 = -fVar9;
          }
          FUN_0011ee88(&fStack_110,&fStack_110);
          piVar4 = *(int **)(param_1 + 0x44);
          fVar14 = 1.0;
          auVar15 = _lqc2(*(undefined1 (*) [16])(*(int *)(piVar4[1] * 0x20 + param_3) + 0x130));
          auVar17 = _vaddbc(in_vf0,in_vf0);
          auVar15 = _vmul(auVar15,auVar15);
          _vaddabc(auVar15,auVar15);
          _vmaddabc(auVar17,auVar15);
          auVar15 = _vmaddbc(auVar17,auVar15);
          _vsqrt(auVar15);
          _vwaitq();
          _cfc2(in_vc6);
          if (param_6 == 0) {
            fVar14 = (float)piVar4[10];
          }
          param_2[5] = fVar9 / fVar14;
        }
        goto LAB_00164998;
      }
      fVar9 = param_2[5];
    }
    fVar9 = fVar9 + (float)piVar4[7];
  }
  param_2[5] = fVar9;
  if (piVar4[0x10] == 0) {
    iVar2 = *piVar4;
  }
  else {
    fVar9 = param_2[3] + DAT_002c26c8;
    param_2[4] = -param_2[4];
    param_2[3] = fVar9;
    iVar2 = *piVar4;
  }
  if (iVar2 == 0) {
    fVar5 = (float)piVar4[8];
  }
  else {
    if (piVar4[0xe] != 0) {
      fStack_110 = fStack_130 - fVar10;
      fStack_10c = fStack_12c - fVar5;
      fStack_108 = fStack_128 - fVar8;
      fVar5 = (float)FUN_0011ee88(&fStack_110,&fStack_110);
      fVar5 = *(float *)(*(int *)(param_1 + 0x44) + 0x3c) /
              (SQRT(fVar5) * *(float *)(*(int *)(param_1 + 0x44) + 0x20));
      if (fVar5 < 0.25) {
        fVar5 = 0.25;
      }
      else if (2.0 < fVar5) {
        fVar5 = 2.0;
      }
      param_2[6] = fVar5;
      piVar4 = *(int **)(param_1 + 0x44);
      goto LAB_00164aa4;
    }
    fVar5 = (float)piVar4[8];
  }
  param_2[6] = fVar5;
LAB_00164aa4:
  fVar5 = (float)piVar4[9];
  param_2[0x12] = fVar5;
  if (fVar5 < 1.0) {
    param_2[0x12] = 1.0;
  }
  return;
}

