/* Ghidra pseudocode. PS2 address: 001446b8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001449a0) */
/* WARNING: Removing unreachable block (ram,0x00144b08) */
/* WARNING: Removing unreachable block (ram,0x00144944) */
/* WARNING: Removing unreachable block (ram,0x00144b64) */

void FUN_001446b8(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 in_vf0 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined1 auStack_e0 [8];
  float fStack_d8;
  undefined4 uStack_d4;
  
  puVar2 = PTR_DAT_002c230c;
  uVar1 = DAT_002c22e4;
  iVar3 = *(int *)(param_1 + 0x60);
  fVar16 = *(float *)(iVar3 + 0x473c);
  fVar20 = fVar16 * *(float *)(iVar3 + 0x4734);
  fVar22 = fVar16 * *(float *)(iVar3 + 0x472c);
  fVar16 = fVar16 * *(float *)(iVar3 + 0x4730);
  fVar26 = 0.0;
  fVar14 = *(float *)(iVar3 + 0xf8) * fVar16 - *(float *)(iVar3 + 0xfc) * fVar22;
  fVar24 = *(float *)(iVar3 + 0x100) * fVar22 - *(float *)(iVar3 + 0xf8) * fVar20;
  fVar11 = *(float *)(iVar3 + 0xfc) * fVar20 - *(float *)(iVar3 + 0x100) * fVar16;
  fVar12 = *(float *)(iVar3 + 0x100) * fVar11 - *(float *)(iVar3 + 0xf8) * fVar14;
  fVar18 = *(float *)(iVar3 + 0xf8) * fVar24 - *(float *)(iVar3 + 0xfc) * fVar11;
  fVar7 = *(float *)(iVar3 + 0xfc) * fVar14 - *(float *)(iVar3 + 0x100) * fVar24;
  fVar9 = *(float *)(iVar3 + 0xf4) + *(float *)(iVar3 + 0xf4);
  auVar27 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x2d0));
  auVar28 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xc0));
  auVar27 = _vsub(auVar27,auVar28);
  auVar27 = _sqc2(auVar27);
  auVar27 = _lqc2(auVar27);
  auVar29 = _vaddbc(in_vf0,in_vf0);
  auVar28 = _vmul(auVar27,auVar27);
  _vaddabc(auVar28,auVar28);
  _vmaddabc(auVar29,auVar28);
  auVar28 = _vmaddbc(auVar29,auVar28);
  _vrsqrt(in_vf0,auVar28);
  uVar31 = _vwaitq();
  auVar27 = _vmulq(auVar27,uVar31);
  auVar27 = _sqc2(auVar27);
  auVar28 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x130));
  auVar29 = _lqc2(auVar27);
  auVar30 = _vaddbc(in_vf0,in_vf0);
  auVar28 = _vmul(auVar28,auVar29);
  _vaddabc(auVar28,auVar28);
  _vmaddabc(auVar30,auVar28);
  auVar28 = _vmaddbc(auVar30,auVar28);
  auVar28 = _qmfc2(auVar28._0_4_);
  fVar8 = auVar28._0_4_;
  auVar28 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x120));
  auVar27 = _lqc2(auVar27);
  auVar29 = _vaddbc(in_vf0,in_vf0);
  auVar27 = _vmul(auVar28,auVar27);
  _vaddabc(auVar27,auVar27);
  _vmaddabc(auVar29,auVar27);
  auVar27 = _vmaddbc(auVar29,auVar27);
  auVar27 = _qmfc2(auVar27._0_4_);
  fVar10 = auVar27._0_4_;
  if (*(int *)(*(int *)(iVar3 + 0x6cf4) + 8) == 0x7a) {
    FUN_001129e8(DAT_002c22e4,iVar3,iVar3 + 0x120);
    uVar6 = 0x8e;
    if (DAT_002c22e8 < fVar8) {
      iVar3 = *(int *)(param_1 + 0x60);
    }
    else {
      if (DAT_002c22e8 < fVar10) {
        iVar3 = *(int *)(param_1 + 0x60);
        if ((*(int *)(*(int *)(iVar3 + 0x394) + 0x28) == 0) || (*(int *)(iVar3 + 0x344) != 2)) {
          FUN_001129e8(PTR_DAT_002c22f0,iVar3,iVar3 + 0x130);
          fVar8 = DAT_002c22f4;
          iVar3 = *(int *)(param_1 + 0x60);
          *(undefined4 *)(iVar3 + 0x144) = 1;
          *(float *)(*(int *)(iVar3 + 0x6cf4) + 0x18) = DAT_002c22f8 - fVar8 * 1.0;
        }
        else {
          FUN_001129e8(uVar1,iVar3,iVar3 + 0x130);
          fVar8 = DAT_002c22ec;
          iVar3 = *(int *)(param_1 + 0x60);
          *(undefined4 *)(iVar3 + 0x144) = 0;
          *(float *)(*(int *)(iVar3 + 0x6cf4) + 0x18) = fVar26 - fVar8 * 0.0;
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0x60) + 0x6cf4);
        if (*(int *)(*(int *)(param_1 + 0x60) + 0x344) == 2) {
          uVar6 = 0x93;
        }
        else {
          uVar6 = 0x8f;
LAB_00144bac:
          *(undefined4 *)(iVar3 + 0xc) = 1;
        }
LAB_00144bb4:
        FUN_0014cd18(iVar3,uVar6,0,5);
        iVar3 = *(int *)(param_1 + 0x60);
        goto LAB_00144c4c;
      }
      iVar3 = *(int *)(param_1 + 0x60);
      if (fVar8 < DAT_002c22fc) {
        FUN_001129e8(DAT_002c2300,iVar3,iVar3 + 0x130);
        iVar3 = *(int *)(param_1 + 0x60);
        uVar6 = 0x8d;
        goto LAB_00144bdc;
      }
      if (*(int *)(*(int *)(iVar3 + 0x394) + 0x28) == 0) {
        iVar3 = *(int *)(param_1 + 0x60);
LAB_00144a4c:
        FUN_001129e8(DAT_002c2308,iVar3,iVar3 + 0x130);
        iVar3 = *(int *)(param_1 + 0x60);
      }
      else {
        if (*(int *)(iVar3 + 0x344) != 2) {
          iVar3 = *(int *)(param_1 + 0x60);
          goto LAB_00144a4c;
        }
        FUN_001129e8(PTR_DAT_002c2304,iVar3,iVar3 + 0x130);
        iVar3 = *(int *)(param_1 + 0x60);
      }
      uVar6 = 0x8f;
    }
  }
  else {
    FUN_001129e8(PTR_DAT_002c230c,iVar3,iVar3 + 0x120);
    if (DAT_002c2310 < fVar8) {
      FUN_001129e8(DAT_002c2314,*(int *)(param_1 + 0x60),*(int *)(param_1 + 0x60) + 0x130);
      iVar3 = *(int *)(param_1 + 0x60);
      uVar6 = 0x8a;
    }
    else {
      if (DAT_002c2310 < fVar10) {
        iVar3 = *(int *)(param_1 + 0x60);
        if ((*(int *)(*(int *)(iVar3 + 0x394) + 0x28) == 0) || (*(int *)(iVar3 + 0x344) != 2)) {
          FUN_001129e8(PTR_DAT_002c2320,iVar3,iVar3 + 0x130);
          fVar8 = DAT_002c2324;
          iVar3 = *(int *)(param_1 + 0x60);
          *(undefined4 *)(iVar3 + 0x144) = 1;
          *(float *)(*(int *)(iVar3 + 0x6cf4) + 0x18) = DAT_002c2328 - fVar8 * 1.0;
        }
        else {
          FUN_001129e8(DAT_002c2318,iVar3,iVar3 + 0x130);
          fVar8 = DAT_002c231c;
          iVar3 = *(int *)(param_1 + 0x60);
          *(undefined4 *)(iVar3 + 0x144) = 0;
          *(float *)(*(int *)(iVar3 + 0x6cf4) + 0x18) = fVar26 - fVar8 * 0.0;
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0x60) + 0x6cf4);
        if (*(int *)(*(int *)(param_1 + 0x60) + 0x344) != 2) {
          uVar6 = 0x8c;
          goto LAB_00144bac;
        }
        uVar6 = 0x92;
        goto LAB_00144bb4;
      }
      uVar6 = 0x8b;
      if (DAT_002c232c <= fVar8) {
        iVar3 = *(int *)(param_1 + 0x60);
        if ((*(int *)(*(int *)(iVar3 + 0x394) + 0x28) == 0) || (*(int *)(iVar3 + 0x344) != 2)) {
          FUN_001129e8(DAT_002c2330,iVar3,iVar3 + 0x130);
          iVar3 = *(int *)(param_1 + 0x60);
        }
        else {
          FUN_001129e8(puVar2,iVar3,iVar3 + 0x130);
          iVar3 = *(int *)(param_1 + 0x60);
        }
        FUN_0014cd18(*(undefined4 *)(iVar3 + 0x6cf4),0x8c,0,5);
        iVar3 = *(int *)(param_1 + 0x60);
        goto LAB_00144c4c;
      }
      iVar3 = *(int *)(param_1 + 0x60);
    }
  }
LAB_00144bdc:
  FUN_0014cd18(*(undefined4 *)(iVar3 + 0x6cf4),uVar6,0,5);
  iVar3 = *(int *)(param_1 + 0x60);
LAB_00144c4c:
  uVar4 = FUN_001503f8(*(undefined4 *)(iVar3 + 0x6cf4));
  pfVar5 = (float *)FUN_001466f8(&DAT_002795b8 + (uVar4 & 0x3f) * 0x10,(uVar4 & 0xffff) >> 6);
  fVar21 = *pfVar5;
  iVar3 = *(int *)(param_1 + 0x60);
  fVar17 = pfVar5[1];
  fVar23 = pfVar5[2];
  fVar25 = *(float *)(iVar3 + 0xf8) * fVar17 - *(float *)(iVar3 + 0xfc) * fVar21;
  fVar19 = *(float *)(iVar3 + 0x100) * fVar21 - *(float *)(iVar3 + 0xf8) * fVar23;
  fVar15 = *(float *)(iVar3 + 0xfc) * fVar23 - *(float *)(iVar3 + 0x100) * fVar17;
  fVar26 = *(float *)(iVar3 + 0xf8) * fVar19 - *(float *)(iVar3 + 0xfc) * fVar15;
  fVar13 = *(float *)(iVar3 + 0x100) * fVar15 - *(float *)(iVar3 + 0xf8) * fVar25;
  fVar8 = *(float *)(iVar3 + 0xfc) * fVar25 - *(float *)(iVar3 + 0x100) * fVar19;
  fVar10 = *(float *)(iVar3 + 0xf4) + *(float *)(iVar3 + 0xf4);
  auStack_e0._4_4_ = fVar17 + fVar10 * fVar19 + fVar13 + fVar13;
  auStack_e0._0_4_ = fVar21 + fVar10 * fVar15 + fVar8 + fVar8;
  fStack_d8 = fVar23 + fVar10 * fVar25 + fVar26 + fVar26;
  uStack_d4 = 0;
  auVar27._4_4_ = fVar16 + fVar9 * fVar24 + fVar12 + fVar12;
  auVar27._0_4_ = fVar22 + fVar9 * fVar11 + fVar7 + fVar7;
  auVar27._8_4_ = fVar20 + fVar9 * fVar14 + fVar18 + fVar18;
  auVar27._12_4_ = 0;
  auVar27 = _lqc2(auVar27);
  auVar28 = _lqc2(_auStack_e0);
  auVar27 = _vsub(auVar27,auVar28);
  auVar27 = _sqc2(auVar27);
  auVar28 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xc0));
  auVar27 = _lqc2(auVar27);
  auVar27 = _vadd(auVar28,auVar27);
  auVar27 = _sqc2(auVar27);
  *(undefined1 (*) [16])(iVar3 + 0xc0) = auVar27;
  FUN_0010b340(*(undefined4 *)(param_1 + 0x60),6);
  FUN_0010b330(*(undefined4 *)(param_1 + 0x60),0x15);
  return;
}

