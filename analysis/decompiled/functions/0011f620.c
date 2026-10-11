/* Ghidra pseudocode. PS2 address: 0011f620. Not validated source. */

void FUN_0011f620(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  uint *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  int iStack_44;
  
  piVar4 = (int *)param_1;
  iVar2 = FUN_00189b78(DAT_002859e4,piVar4[0x230]);
  iVar1 = *piVar4;
  fVar7 = *(float *)(iVar1 + piVar4[0x230] * 0x10 + 0x30) - *(float *)(iVar1 + 0x2e0);
  fVar6 = fVar7 * DAT_002c1988 + 0.5;
  fVar8 = (float)(int)fVar6;
  if (fVar6 < fVar8) {
    fVar8 = fVar8 - 1.0;
  }
  fVar6 = ABS(fVar7 - fVar8 * DAT_002c198c);
  puVar5 = (uint *)param_2;
  if (DAT_002c1990 < fVar6) {
    fVar6 = (float)FUN_0011f008(param_1,iVar1 + 0x2d0);
    if ((200.0 < *(float *)(*piVar4 + piVar4[0x230] * 0x10 + 0x2c)) &&
       (*(float *)(iVar2 + 0xe0) + DAT_002c1994 < *(float *)(*piVar4 + 0xe0))) {
      *puVar5 = *puVar5 & 0xfc0fffff | 0x1f00000;
    }
    goto LAB_0011f84c;
  }
  auVar9 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
  auVar11 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _vmul(auVar9,auVar9);
  _vaddabc(auVar10,auVar10);
  _vmaddabc(auVar11,auVar10);
  auVar10 = _vmaddbc(auVar11,auVar10);
  _vrsqrt(in_vf0,auVar10);
  uVar12 = _vwaitq();
  auVar9 = _vmulq(auVar9,uVar12);
  auVar9 = _sqc2(auVar9);
  auVar10 = _lqc2(auVar9);
  auVar9 = _qmtc2(0x43960000);
  auVar9 = _vmulbc(auVar10,auVar9);
  auVar9 = _sqc2(auVar9);
  auStack_60._0_4_ = auVar9._0_4_;
  auStack_60._4_4_ = auVar9._4_4_;
  auStack_60._8_4_ = auVar9._8_4_;
  auStack_60._12_4_ = auVar9._12_4_;
  uStack_70 = auStack_60._0_4_;
  uStack_6c = auStack_60._4_4_;
  uStack_68 = auStack_60._8_4_;
  uStack_64 = auStack_60._12_4_;
  auVar10 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xc0));
  auVar9 = _lqc2(auVar9);
  auVar9 = _vadd(auVar10,auVar9);
  auStack_80 = _sqc2(auVar9);
  auStack_60 = auStack_80;
  if (fVar6 < DAT_002c1998) {
    if (DAT_002c199c <= fVar6) goto LAB_0011f800;
    FUN_00121a60(param_1,param_2);
  }
  else if (*(float *)(iVar1 + 0xe0) < *(float *)(iVar2 + 0xe0) - DAT_002c19a0) {
LAB_0011f800:
    FUN_001219d8(param_1,param_2);
  }
  else if (*(float *)(iVar2 + 0xe0) + DAT_002c19a0 < *(float *)(iVar1 + 0xe0)) {
    *puVar5 = *puVar5 & 0xfc0fffff | 0x1f00000;
  }
  fVar6 = (float)FUN_0011f008(param_1,auStack_80);
LAB_0011f84c:
  iStack_44 = 1;
  *puVar5 = *puVar5 & 0xffffc0ff | ((int)(fVar6 * 31.0) & 0x3fU) << 8;
  lVar3 = FUN_00120cf0(param_1,piVar4 + 0x226,auStack_50,auStack_4c,auStack_48);
  if (lVar3 == 0) {
    lVar3 = FUN_001211a8(param_1,&iStack_44);
    if (lVar3 == 0) {
      *(undefined8 *)(piVar4 + 0x234) = DAT_00277ba8;
      *(undefined2 *)(piVar4 + 0x233) = 1;
    }
    else if (iStack_44 == 0) {
      *(undefined8 *)(piVar4 + 0x234) = DAT_00277bb0;
      *(undefined2 *)(piVar4 + 0x233) = 2;
    }
  }
  else {
    piVar4[0x230] = -1;
    *(undefined8 *)(piVar4 + 0x234) = DAT_00277ba0;
    *(undefined2 *)(piVar4 + 0x233) = 0;
  }
  return;
}

