/* Ghidra pseudocode. PS2 address: 00114f78. Not validated source. */

undefined4
FUN_00114f78(undefined8 param_1,undefined1 (*param_2) [16],float *param_3,undefined4 *param_4)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  undefined *puVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  
  iVar4 = (int)param_1;
  if ((*(int *)(&DAT_002ac2c4 + *(int *)(*(int *)(iVar4 + 0x6cf4) + 8) * 0xc) == 0x10) ||
     (*(int *)(&DAT_002ac2c4 + *(int *)(*(int *)(iVar4 + 0x6cf4) + 8) * 0xc) == 0xf)) {
    lVar2 = FUN_00150f70(*(int *)(iVar4 + 0x6cf4),1);
    if (lVar2 == 0) {
      return 0;
    }
    iVar3 = *(int *)(iVar4 + 0x210);
  }
  else {
    iVar3 = *(int *)(iVar4 + 0x210);
  }
  bVar1 = false;
  if ((iVar3 != 6) && (iVar3 != 9)) {
    bVar1 = iVar3 != 10;
  }
  if (!bVar1) {
    return 0;
  }
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = *(int *)(iVar4 + 0x350);
  FUN_0010b330(param_1,1);
  auVar12 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xd0));
  auVar11 = _qmtc2(1.0 / *(float *)(iVar4 + 0xe0));
  auVar11 = _vmulbc(auVar12,auVar11);
  auVar11 = _sqc2(auVar11);
  auVar12 = _lqc2(auVar11);
  auVar13 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x130));
  auVar14 = _vaddbc(in_vf0,in_vf0);
  auVar12 = _vmul(auVar12,auVar13);
  _vaddabc(auVar12,auVar12);
  _vmaddabc(auVar14,auVar12);
  auVar12 = _vmaddbc(auVar14,auVar12);
  auVar12 = _qmfc2(auVar12._0_4_);
  auVar13 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x130));
  auVar12 = _qmtc2(auVar12._0_4_);
  auVar12 = _vmulbc(auVar13,auVar12);
  auVar12 = _sqc2(auVar12);
  auVar11 = _lqc2(auVar11);
  auVar12 = _lqc2(auVar12);
  auVar11 = _vsub(auVar11,auVar12);
  auVar11 = _sqc2(auVar11);
  auVar11 = _lqc2(auVar11);
  auVar13 = _vaddbc(in_vf0,in_vf0);
  auVar12 = _vmul(auVar11,auVar11);
  _vaddabc(auVar12,auVar12);
  _vmaddabc(auVar13,auVar12);
  auVar12 = _vmaddbc(auVar13,auVar12);
  _vrsqrt(in_vf0,auVar12);
  uVar15 = _vwaitq();
  auVar11 = _vmulq(auVar11,uVar15);
  auVar11 = _sqc2(auVar11);
  auVar12 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x110));
  auVar11 = _lqc2(auVar11);
  auVar13 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _vmul(auVar12,auVar11);
  _vaddabc(auVar11,auVar11);
  _vmaddabc(auVar13,auVar11);
  auVar11 = _vmaddbc(auVar13,auVar11);
  auVar11 = _qmfc2(auVar11._0_4_);
  fVar9 = auVar11._0_4_;
  fVar5 = DAT_002c14ec;
  if ((DAT_002c14ec <= fVar9) && (fVar5 = fVar9, DAT_002c14f0 < fVar9)) {
    fVar5 = DAT_002c14f0;
  }
  fVar5 = (float)FUN_00218410(fVar5);
  puVar10 = DAT_002c14f4;
  *param_3 = (float)DAT_002c14f4 - fVar5;
  auVar11 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x130));
  auVar12 = _lqc2(*param_2);
  auVar13 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _vmul(auVar11,auVar12);
  _vaddabc(auVar11,auVar11);
  _vmaddabc(auVar13,auVar11);
  auVar11 = _vmaddbc(auVar13,auVar11);
  auVar11 = _qmfc2(auVar11._0_4_);
  fVar5 = auVar11._0_4_;
  auVar11 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x110));
  auVar12 = _lqc2(*param_2);
  auVar13 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _vmul(auVar11,auVar12);
  _vaddabc(auVar11,auVar11);
  _vmaddabc(auVar13,auVar11);
  auVar11 = _vmaddbc(auVar13,auVar11);
  auVar11 = _qmfc2(auVar11._0_4_);
  puVar7 = auVar11._0_4_;
  if (fVar5 == 0.0) {
    puVar6 = puVar7;
    if (((float)puVar7 != 0.0) &&
       (puVar6 = puVar10, puVar10 = PTR_DAT_002c14f8, (float)puVar7 < 0.0)) goto LAB_00115228;
  }
  else {
    puVar6 = (undefined *)FUN_00218510((float)puVar7 / fVar5);
    if (fVar5 < 0.0) {
      if (0.0 < (float)puVar7) {
        puVar6 = (undefined *)((float)puVar6 + DAT_002c14fc);
      }
      else {
        puVar6 = (undefined *)((float)puVar6 - DAT_002c1500);
      }
    }
  }
  puVar10 = puVar6;
LAB_00115228:
  fVar5 = DAT_002c1504;
  puVar7 = (undefined *)-(float)puVar10;
  *param_4 = puVar7;
  fVar9 = ABS(*param_3);
  if (fVar5 < fVar9) {
    fVar9 = DAT_002c1508 - fVar9;
    puVar7 = puVar10;
  }
  fVar8 = (float)*(byte *)(*(int *)(iVar4 + 0x394) + 0x16) * DAT_002c150c * DAT_002c1510 +
          DAT_002c1514;
  fVar5 = (float)puVar7 * fVar8;
  uVar15 = 0;
  if ((fVar5 <= DAT_002c1518) &&
     ((fVar5 < DAT_002c151c ||
      ((uVar15 = 1, iVar3 == 0x10 && (fVar8 * DAT_002c1520 * DAT_002c1524 < ABS(fVar9))))))) {
    uVar15 = 0;
  }
  return uVar15;
}

