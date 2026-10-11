/* Ghidra pseudocode. PS2 address: 0011df68. Not validated source. */

void FUN_0011df68(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  undefined4 uStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [16];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [16];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  
  piVar6 = (int *)param_1;
  if (*(int *)(*piVar6 + 0x6c4c) == 0) {
    return;
  }
  if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x24) == 6) {
    return;
  }
  if (*(float *)(*piVar6 + 0x370) == 0.0) {
    return;
  }
  bVar1 = false;
  if (*(int *)(DAT_002859e4 + 0x38) != 0) {
    iVar3 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18);
    bVar1 = iVar3 != 0 && iVar3 < 10;
  }
  lVar5 = FUN_00187ce8(DAT_002859e4);
  if ((((lVar5 == 0) && (!bVar1)) && (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x24) != 1)) &&
     (*(int *)(*piVar6 + 0x24) == 0)) {
    if (*(int *)(DAT_002859e4 + 0x298) != 1) {
      iVar3 = piVar6[0x79];
      goto LAB_0011e094;
    }
    fVar8 = *(float *)(*piVar6 + 0x1f8);
    iVar3 = *(int *)(DAT_002859e4 + 0x290) * 0x80 + DAT_002859e4;
    if (fVar8 <= *(float *)(iVar3 + 0x108)) {
      iVar3 = piVar6[0x79];
      goto LAB_0011e094;
    }
    *(float *)(iVar3 + 0x108) = fVar8;
  }
  iVar3 = piVar6[0x79];
LAB_0011e094:
  if (1 < iVar3) {
    FUN_0011e8a8(param_1,&fStack_1d0);
    FUN_001e6620(piVar6 + 8,&fStack_1d0);
  }
  if ((1 < piVar6[0xf1]) && (*(int *)(*(int *)(*piVar6 + 0x394) + 0x60) == 0)) {
    FUN_0011eb00(param_1,&fStack_1d0);
    FUN_001e6620(piVar6 + 0x80,&fStack_1d0);
  }
  FUN_0011cdc0(piVar6[0xf8]);
  if (*(int *)(DAT_002859e4 + 0x298) < 2) {
    iVar3 = *piVar6;
  }
  else if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x80) < 2) {
    iVar3 = *piVar6;
  }
  else if (*(int *)(*piVar6 + 0x340) == 1) {
    iVar4 = FUN_0015bd28(*(undefined4 *)
                          (*(int *)(DAT_002859e4 + 0x290) * 0x80 + DAT_002859e4 + 0xa0));
    iVar3 = *piVar6;
    if (iVar4 != iVar3) {
      FUN_0011c6f0(piVar6[0xf9]);
      iVar3 = *piVar6;
    }
  }
  else {
    iVar3 = *piVar6;
  }
  fStack_1bc = 50.0;
  fStack_1d0 = *(float *)(iVar3 + 0x7620);
  fStack_1cc = *(float *)(iVar3 + 0x7624);
  fStack_1c8 = *(float *)(iVar3 + 0x7628);
  uStack_1c4 = *(undefined4 *)(iVar3 + 0x762c);
  if (-1 < *(int *)(iVar3 + 0x348)) {
    fStack_1bc = 100.0;
  }
  fStack_1ac = fStack_1cc + fStack_1bc;
  fStack_1b0 = fStack_1d0 + fStack_1bc;
  fStack_1b8 = fStack_1c8 + -50.0;
  fStack_1a8 = fStack_1c8 + 250.0;
  fStack_1c0 = fStack_1d0 - fStack_1bc;
  fStack_1bc = fStack_1cc - fStack_1bc;
  lVar5 = FUN_001be110(0x295e90,&fStack_1c0,&fStack_1b0);
  if (lVar5 != 1) {
    FUN_0011de20(param_1);
    iVar3 = *piVar6;
    if (*(int *)(*(int *)(iVar3 + 0x394) + 0x60) == 0) {
      *(undefined8 *)(iVar3 + 0x7af0) = *(undefined8 *)(iVar3 + 0x75b0);
      *(undefined8 *)(iVar3 + 0x7b28) = *(undefined8 *)(iVar3 + 0x75e8);
      *(undefined8 *)(iVar3 + 0x7af8) = *(undefined8 *)(iVar3 + 0x75b8);
      *(undefined8 *)(iVar3 + 0x7b00) = *(undefined8 *)(iVar3 + 0x75c0);
      *(undefined8 *)(iVar3 + 0x7b08) = *(undefined8 *)(iVar3 + 0x75c8);
      *(undefined8 *)(iVar3 + 0x7b10) = *(undefined8 *)(iVar3 + 0x75d0);
      *(undefined8 *)(iVar3 + 0x7b18) = *(undefined8 *)(iVar3 + 0x75d8);
      *(undefined8 *)(iVar3 + 0x7b20) = *(undefined8 *)(iVar3 + 0x75e0);
    }
    else {
      *(undefined8 *)(iVar3 + 0x7b28) = *(undefined8 *)(iVar3 + 0x76a8);
      *(undefined8 *)(iVar3 + 0x7b00) = *(undefined8 *)(iVar3 + 0x7680);
      *(undefined8 *)(iVar3 + 0x7af0) = *(undefined8 *)(iVar3 + 0x7670);
      *(undefined8 *)(iVar3 + 0x7af8) = *(undefined8 *)(iVar3 + 0x7678);
      *(undefined8 *)(iVar3 + 0x7b08) = *(undefined8 *)(iVar3 + 0x7688);
      *(undefined8 *)(iVar3 + 0x7b10) = *(undefined8 *)(iVar3 + 0x7690);
      *(undefined8 *)(iVar3 + 0x7b18) = *(undefined8 *)(iVar3 + 0x7698);
      *(undefined8 *)(iVar3 + 0x7b20) = *(undefined8 *)(iVar3 + 0x76a0);
      iVar3 = *piVar6;
      uStack_180 = *(undefined4 *)*(undefined1 (*) [16])(iVar3 + 0x7b20);
      uStack_17c = *(undefined4 *)(iVar3 + 0x7b24);
      uStack_178 = *(undefined4 *)(iVar3 + 0x7b28);
      uStack_174 = *(undefined4 *)(iVar3 + 0x7b2c);
      uStack_160 = *(undefined4 *)*(undefined1 (*) [16])(iVar3 + 0x7b00);
      uStack_15c = *(undefined4 *)(iVar3 + 0x7b04);
      uStack_158 = *(undefined4 *)(iVar3 + 0x7b08);
      uStack_154 = *(undefined4 *)(iVar3 + 0x7b0c);
      auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x7b00));
      auVar9 = _qmtc2(0x41700000);
      auVar9 = _vmulbc(auVar11,auVar9);
      auVar9 = _sqc2(auVar9);
      auStack_150._8_4_ = auVar9._8_4_;
      auStack_150._12_4_ = auVar9._12_4_;
      uStack_170 = auVar9._0_4_;
      uStack_16c = auVar9._4_4_;
      uStack_168 = auStack_150._8_4_;
      uStack_164 = auStack_150._12_4_;
      auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x7b20));
      auVar9 = _lqc2(auVar9);
      auVar9 = _vsub(auVar11,auVar9);
      auVar9 = _sqc2(auVar9);
      auStack_150._8_4_ = auVar9._8_4_;
      auStack_150._12_4_ = auVar9._12_4_;
      uStack_190 = auVar9._0_4_;
      uStack_18c = auVar9._4_4_;
      uStack_188 = auStack_150._8_4_;
      uStack_184 = auStack_150._12_4_;
      uStack_140 = *(undefined4 *)*(undefined1 (*) [16])(iVar3 + 0x7af0);
      uStack_13c = *(undefined4 *)(iVar3 + 0x7af4);
      uStack_138 = *(undefined4 *)(iVar3 + 0x7af8);
      uStack_134 = *(undefined4 *)(iVar3 + 0x7afc);
      auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x7af0));
      auVar11 = _qmtc2(0x41f00000);
      auVar11 = _vmulbc(auVar10,auVar11);
      auStack_150 = _sqc2(auVar11);
      auVar9 = _lqc2(auVar9);
      auVar11 = _lqc2(auStack_150);
      auVar9 = _vadd(auVar9,auVar11);
      auStack_130 = _sqc2(auVar9);
      uStack_1a0 = auStack_130._0_4_;
      uStack_19c = auStack_130._4_4_;
      uStack_198 = auStack_130._8_4_;
      uStack_194 = auStack_130._12_4_;
      *(undefined4 *)(iVar3 + 0x7b20) = uStack_1a0;
      *(undefined4 *)(iVar3 + 0x7b24) = uStack_19c;
      *(undefined4 *)(iVar3 + 0x7b28) = auStack_130._8_4_;
      *(undefined4 *)(iVar3 + 0x7b2c) = auStack_130._12_4_;
    }
    FUN_001ef0b0(*piVar6 + 0x6cc,2);
    FUN_001bd888(&uStack_1a0,piVar6 + 0xff,piVar6 + 0x110,piVar6 + 0x103,piVar6 + 0x114,
                 piVar6 + 0x107,piVar6 + 0x118,piVar6 + 0x10b);
    uVar2 = DAT_002c1920;
    if (*(float *)(*piVar6 + 0x370) < DAT_002c191c) {
      FUN_0011ed48(0x295e90,1);
      FUN_0011ed08(0x295e90,0,0);
      FUN_001eeab0(*piVar6 + 0x6cc,piVar6[0xfd]);
      FUN_001eee30(*piVar6 + 0x6cc);
      FUN_0011ed28(uVar2,0x295e90,1,0);
      auVar9 = auStack_130;
      DAT_00292780 = CONCAT44(uStack_19c,uStack_1a0);
      DAT_00292788 = CONCAT44(uStack_194,uStack_198);
      DAT_00292790 = CONCAT44(uStack_18c,uStack_190);
      DAT_00292798 = CONCAT44(uStack_184,uStack_188);
      auStack_130._12_4_ = *(float *)(*piVar6 + 0x370) * 128.0;
      auVar11 = auStack_130;
      DAT_002927a0 = CONCAT44(uStack_17c,uStack_180);
      DAT_002927a8 = CONCAT44(uStack_174,uStack_178);
      DAT_002927b0 = CONCAT44(uStack_16c,uStack_170);
      DAT_002927b8 = CONCAT44(uStack_164,uStack_168);
      DAT_002927c0 = CONCAT44(uStack_15c,uStack_160);
      DAT_002927c8 = CONCAT44(uStack_154,uStack_158);
      DAT_002927d0 = auStack_150._0_8_;
      DAT_002927d8 = auStack_150._8_8_;
      DAT_002927e0 = CONCAT44(uStack_13c,uStack_140);
      DAT_002927e8 = CONCAT44(uStack_134,uStack_138);
      auStack_130._0_8_ = auVar9._0_8_;
      DAT_002927f0 = auStack_130._0_8_;
      auStack_130._8_8_ = auVar11._8_8_;
      DAT_002927f8 = auStack_130._8_8_;
      auStack_130 = auVar11;
      FUN_0011ed48(0x295e90,3);
      FUN_0011ed08(0x295e90,2,0);
      FUN_001eeab0(*piVar6 + 0x6cc,piVar6[0xfd]);
      FUN_001eee30(*piVar6 + 0x6cc);
      FUN_0011ed08(0x295e90,0,0);
      FUN_0011ed28(uVar2,0x295e90,0,2);
    }
    else {
      DAT_00292780 = CONCAT44(uStack_19c,uStack_1a0);
      DAT_00292788 = CONCAT44(uStack_194,uStack_198);
      DAT_00292790 = CONCAT44(uStack_18c,uStack_190);
      DAT_00292798 = CONCAT44(uStack_184,uStack_188);
      DAT_002927a0 = CONCAT44(uStack_17c,uStack_180);
      DAT_002927a8 = CONCAT44(uStack_174,uStack_178);
      DAT_002927b0 = CONCAT44(uStack_16c,uStack_170);
      DAT_002927b8 = CONCAT44(uStack_164,uStack_168);
      DAT_002927c0 = CONCAT44(uStack_15c,uStack_160);
      DAT_002927c8 = CONCAT44(uStack_154,uStack_158);
      DAT_002927d0 = auStack_150._0_8_;
      DAT_002927d8 = auStack_150._8_8_;
      DAT_002927e0 = CONCAT44(uStack_13c,uStack_140);
      DAT_002927e8 = CONCAT44(uStack_134,uStack_138);
      DAT_002927f0 = auStack_130._0_8_;
      DAT_002927f8 = auStack_130._8_8_;
      FUN_0011ed48(0x295e90,3);
      FUN_001eeab0(*piVar6 + 0x6cc,piVar6[0xfd]);
      FUN_001eee30(*piVar6 + 0x6cc);
    }
    if (DAT_002859e4 != 0) {
      if (piVar6[1] == 0) {
        iVar3 = *piVar6;
        uStack_d4 = *(undefined4 *)(iVar3 + 0x7a2c);
        uStack_e0 = *(undefined4 *)*(undefined1 (*) [16])(iVar3 + 0x7a20);
        uStack_dc = *(undefined4 *)(iVar3 + 0x7a24);
        uStack_d8 = *(undefined4 *)(iVar3 + 0x7a28);
        auVar9 = *(undefined1 (*) [16])(iVar3 + 0x7a20);
        piVar6[1] = 1;
        uStack_d0 = *(undefined4 *)*(undefined1 (*) [16])(iVar3 + 0x7ae0);
        uStack_cc = *(undefined4 *)(iVar3 + 0x7ae4);
        uStack_c8 = *(undefined4 *)(iVar3 + 0x7ae8);
        uStack_c4 = *(undefined4 *)(iVar3 + 0x7aec);
        auVar9 = _lqc2(auVar9);
        auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x7ae0));
        auVar9 = _vadd(auVar9,auVar11);
        auVar9 = _sqc2(auVar9);
        auStack_c0._8_4_ = auVar9._8_4_;
        auStack_c0._12_4_ = auVar9._12_4_;
        uStack_f0 = auVar9._0_4_;
        fStack_ec = auVar9._4_4_;
        fStack_e8 = (float)auStack_c0._8_4_;
        fStack_e4 = (float)auStack_c0._12_4_;
        auVar11 = _lqc2(auVar9);
        auVar9 = _qmtc2(0x3f000000);
        auVar9 = _vmulbc(auVar11,auVar9);
        auStack_c0 = _sqc2(auVar9);
        uStack_120 = auStack_c0._0_4_;
        uStack_11c = auStack_c0._4_4_;
        fStack_f8 = (float)auStack_c0._8_4_;
        fStack_f4 = (float)auStack_c0._12_4_;
        uStack_118 = auStack_c0._8_4_;
        uStack_108 = 0xbf800000;
        uStack_110 = 0;
        uStack_10c = 0;
        uStack_100 = uStack_120;
        fStack_fc = (float)uStack_11c;
        FUN_001c0bb8(piVar6[2],&uStack_120,iVar3 + 0x130,&uStack_110,iVar3 + 0x7630,iVar3 + 0x82b0);
        uVar2 = DAT_002913c4;
        FUN_0011ed18(0x295e90,1);
        FUN_0011ecc8(0x295e90,*(undefined4 *)(piVar6[2] + 0x170));
        FUN_0011ed28(DAT_002c1924,0x295e90,2,0);
        FUN_0011ed38(0x295e90,1);
        FUN_0011ed48(0x295e90,0);
        uStack_100 = 0;
        fStack_fc = 0.0;
        fStack_f8 = 0.0;
        fStack_f4 = 0.0;
        FUN_0011ecb8(0x295e90,*(undefined4 *)(piVar6[2] + 0x170),&uStack_100);
        fVar8 = 0.0;
        if (((*(int *)(*piVar6 + 0x34c) == 2) && (fVar7 = *(float *)(*piVar6 + 0x14c), fVar7 < 0.0))
           && (fVar8 = fVar7, fVar7 < -5.0)) {
          fVar8 = -5.0;
        }
        uStack_f0 = 0x3f800000;
        uStack_100 = 0x3f800000;
        fStack_fc = DAT_002c1928 - (fVar8 / -5.0) * DAT_002c1928;
        fStack_e4 = DAT_002c1928;
        fStack_ec = DAT_002c1928;
        fStack_e8 = DAT_002c1928;
        fStack_f8 = fStack_fc;
        fStack_f4 = fStack_fc;
        FUN_001eeb08(*piVar6 + 0x6cc,piVar6[2],&uStack_100,&uStack_f0);
        FUN_0011eca8(0x295e90);
        FUN_0011ed28(DAT_002c192c,0x295e90,0,2);
        FUN_0011ed38(0x295e90,0);
        FUN_0011ed18(0x295e90,uVar2);
      }
      FUN_001c19a8(piVar6[2]);
    }
    FUN_0011ed48(0x295e90,3);
    FUN_001cb238(0x2913b0,0,0);
  }
  return;
}

