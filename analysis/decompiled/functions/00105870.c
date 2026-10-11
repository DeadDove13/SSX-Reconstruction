/* Ghidra pseudocode. PS2 address: 00105870. Not validated source. */

void FUN_00105870(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  undefined *puVar8;
  undefined *puVar9;
  float fVar10;
  float fVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_70 [16];
  
  FUN_00104978();
  piVar6 = (int *)param_1;
  if (piVar6[0x1b13] == 0) {
    return;
  }
  lVar3 = FUN_00187ce8(DAT_002859e4);
  if (lVar3 != 0) goto LAB_00106144;
  auVar12 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x34));
  auVar13 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x44));
  auVar14 = _vaddbc(in_vf0,in_vf0);
  auVar12 = _vmul(auVar12,auVar13);
  _vaddabc(auVar12,auVar12);
  _vmaddabc(auVar14,auVar12);
  auVar12 = _vmaddbc(auVar14,auVar12);
  auVar12 = _qmfc2(auVar12._0_4_);
  piVar6[0x3a] = (int)((float)piVar6[0x3a] + auVar12._0_4_ * ((float)piVar6[0x29] / 60.0));
  fVar7 = (float)piVar6[0x62];
  fVar10 = (float)piVar6[0x61] * DAT_002c1084;
  fVar11 = (float)piVar6[0x60];
  if (fVar7 + fVar10 < fVar11) {
    fVar7 = fVar11 - fVar10;
  }
  else if (fVar11 < fVar7 - fVar10) {
    fVar7 = fVar11 + fVar10;
  }
  piVar6[0x60] = (int)fVar7;
  fVar7 = (float)piVar6[0x65];
  fVar10 = (float)piVar6[100] * DAT_002c1088;
  fVar11 = (float)piVar6[99];
  if (fVar7 + fVar10 < fVar11) {
    fVar7 = fVar11 - fVar10;
  }
  else if (fVar11 < fVar7 - fVar10) {
    fVar7 = fVar11 + fVar10;
  }
  piVar6[99] = (int)fVar7;
  fVar7 = (float)piVar6[0x68];
  fVar10 = (float)piVar6[0x67] * DAT_002c108c;
  fVar11 = (float)piVar6[0x66];
  if (fVar7 + fVar10 < fVar11) {
    fVar7 = fVar11 - fVar10;
  }
  else if (fVar11 < fVar7 - fVar10) {
    fVar7 = fVar11 + fVar10;
  }
  piVar6[0x66] = (int)fVar7;
  fVar7 = (float)piVar6[0x6b];
  fVar10 = (float)piVar6[0x6a] * DAT_002c1090;
  fVar11 = (float)piVar6[0x69];
  if (fVar7 + fVar10 < fVar11) {
    fVar7 = fVar11 - fVar10;
  }
  else if (fVar11 < fVar7 - fVar10) {
    fVar7 = fVar11 + fVar10;
  }
  piVar6[0x69] = (int)fVar7;
  fVar7 = (float)piVar6[0x6e];
  fVar10 = (float)piVar6[0x6d] * DAT_002c1094;
  fVar11 = (float)piVar6[0x6c];
  if (fVar7 + fVar10 < fVar11) {
    fVar7 = fVar11 - fVar10;
  }
  else if (fVar11 < fVar7 - fVar10) {
    fVar7 = fVar11 + fVar10;
  }
  piVar6[0x6c] = (int)fVar7;
  fVar7 = (float)piVar6[0x71];
  fVar10 = (float)piVar6[0x70] * DAT_002c1098;
  fVar11 = (float)piVar6[0x6f];
  if (fVar7 + fVar10 < fVar11) {
    fVar7 = fVar11 - fVar10;
  }
  else if (fVar11 < fVar7 - fVar10) {
    fVar7 = fVar11 + fVar10;
  }
  piVar6[0x6f] = (int)fVar7;
  fVar7 = (float)piVar6[0x77];
  fVar10 = (float)piVar6[0x76] * DAT_002c109c;
  fVar11 = (float)piVar6[0x75];
  if (fVar7 + fVar10 < fVar11) {
    fVar7 = fVar11 - fVar10;
  }
  else if (fVar11 < fVar7 - fVar10) {
    fVar7 = fVar11 + fVar10;
  }
  piVar6[0x75] = (int)fVar7;
  fVar7 = (float)piVar6[0x80];
  fVar10 = (float)piVar6[0x7f] * DAT_002c10a0;
  fVar11 = (float)piVar6[0x7e];
  if (fVar7 + fVar10 < fVar11) {
    fVar7 = fVar11 - fVar10;
  }
  else if (fVar11 < fVar7 - fVar10) {
    fVar7 = fVar11 + fVar10;
  }
  piVar6[0x7e] = (int)fVar7;
  fVar11 = (float)piVar6[0x83];
  fVar10 = (float)piVar6[0x82] * DAT_002c10a4;
  fVar7 = (float)piVar6[0x81];
  if (fVar11 + fVar10 < fVar7) {
    fVar11 = fVar7 - fVar10;
  }
  else if (fVar7 < fVar11 - fVar10) {
    fVar11 = fVar7 + fVar10;
  }
  piVar6[0x81] = (int)fVar11;
  iVar4 = piVar6[0xd3];
  fVar7 = 0.0;
  iVar5 = piVar6[0x84] * 0x60 + *(int *)(DAT_002859e4 + 0x1c);
  if (iVar4 == 2) {
    fVar7 = *(float *)(iVar5 + 0x24);
  }
  fVar10 = (float)piVar6[0xa2];
  if (fVar7 + DAT_002c10a8 < fVar10) {
    fVar7 = fVar10 - DAT_002c10a8;
  }
  else if (fVar10 < fVar7 - DAT_002c10a8) {
    fVar7 = fVar10 + DAT_002c10a8;
  }
  piVar6[0xa2] = (int)fVar7;
  puVar8 = (undefined *)0x0;
  if ((piVar6[0xd1] != 2) && (iVar4 != 4)) {
    auVar12 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x1d74));
    auVar13 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x48));
    auVar14 = _vaddbc(in_vf0,in_vf0);
    auVar12 = _vmul(auVar12,auVar13);
    _vaddabc(auVar12,auVar12);
    _vmaddabc(auVar14,auVar12);
    auVar12 = _vmaddbc(auVar14,auVar12);
    auVar12 = _qmfc2(auVar12._0_4_);
    puVar8 = auVar12._0_4_;
    auVar12 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x1d74));
    auVar13 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x44));
    auVar14 = _vaddbc(in_vf0,in_vf0);
    auVar12 = _vmul(auVar12,auVar13);
    _vaddabc(auVar12,auVar12);
    _vmaddabc(auVar14,auVar12);
    auVar12 = _vmaddbc(auVar14,auVar12);
    auVar12 = _qmfc2(auVar12._0_4_);
    fVar7 = auVar12._0_4_;
    if (fVar7 == 0.0) {
      if (((float)puVar8 != 0.0) && (bVar1 = (float)puVar8 < 0.0, puVar8 = DAT_002c10b0, bVar1)) {
        puVar8 = PTR_DAT_002c10ac;
      }
    }
    else {
      puVar9 = (undefined *)FUN_00218510((float)puVar8 / fVar7);
      if (fVar7 < 0.0) {
        if (0.0 < (float)puVar8) {
          puVar9 = (undefined *)((float)puVar9 + DAT_002c10b4);
        }
        else {
          puVar9 = (undefined *)((float)puVar9 - DAT_002c10b8);
        }
      }
      iVar4 = piVar6[0xd3];
      puVar8 = puVar9;
    }
  }
  fVar7 = (float)piVar6[0x3b];
  if ((float)puVar8 + DAT_002c10bc < fVar7) {
    puVar8 = (undefined *)(fVar7 - DAT_002c10bc);
  }
  else if (fVar7 < (float)puVar8 - DAT_002c10bc) {
    puVar8 = (undefined *)(fVar7 + DAT_002c10bc);
  }
  piVar6[0x3b] = (int)puVar8;
  fVar7 = *(float *)(iVar5 + 0x18);
  fVar10 = (float)piVar6[0x85];
  if (fVar7 + DAT_002c10c0 < fVar10) {
    fVar7 = fVar10 - DAT_002c10c0;
  }
  else if (fVar10 < fVar7 - DAT_002c10c0) {
    fVar7 = fVar10 + DAT_002c10c0;
  }
  piVar6[0x85] = (int)fVar7;
  fVar7 = *(float *)(iVar5 + 0x1c);
  fVar10 = (float)piVar6[0x86];
  if (fVar7 + DAT_002c10c4 < fVar10) {
    fVar7 = fVar10 - DAT_002c10c4;
  }
  else if (fVar10 < fVar7 - DAT_002c10c4) {
    fVar7 = fVar10 + DAT_002c10c4;
  }
  fVar10 = 0.0;
  piVar6[0x86] = (int)fVar7;
  fVar7 = DAT_002c10cc;
  if (iVar4 == 2) {
    fVar10 = 1.0;
  }
  fVar11 = (float)piVar6[0xa3];
  if (fVar10 + DAT_002c10c8 < fVar11) {
    fVar10 = fVar11 - DAT_002c10c8;
  }
  else if (fVar11 < fVar10 - DAT_002c10c8) {
    fVar10 = fVar11 + DAT_002c10c8;
  }
  fVar11 = (float)piVar6[0x2b] - DAT_002c10cc;
  piVar6[0xa3] = (int)fVar10;
  piVar6[0x2b] = (int)fVar11;
  if (fVar11 <= 0.0) {
    piVar6[0x2b] = 0;
  }
  fVar10 = (float)piVar6[0x2c];
  piVar6[0x2c] = (int)(fVar10 - fVar7);
  if (fVar10 - fVar7 <= 0.0) {
    piVar6[0x2c] = 0;
  }
  FUN_001090c8(piVar6[0x2161]);
  if ((float)piVar6[0x2b] <= 0.0) {
    if (0.0 < (float)piVar6[0x2a]) {
      fVar7 = (float)piVar6[7];
      if (DAT_002c10d4 < fVar7) goto LAB_00105f00;
      if (DAT_002c10dc < fVar7) {
        fVar11 = (float)piVar6[0x55];
        fVar10 = DAT_002c10e0;
      }
      else {
        fVar11 = (float)piVar6[0x55];
        fVar10 = DAT_002c10e4;
        if (fVar7 <= 0.0) {
          fVar10 = DAT_002c10d0;
        }
      }
    }
    else {
      fVar11 = (float)piVar6[0x55];
      fVar10 = DAT_002c10d0;
    }
  }
  else {
LAB_00105f00:
    fVar11 = (float)piVar6[0x55];
    fVar10 = DAT_002c10d8;
  }
  if (fVar10 <= fVar11) {
    if (fVar10 < fVar11 - DAT_002c10e8) {
      piVar6[0x55] = (int)(fVar11 - DAT_002c10e8);
    }
    else {
      piVar6[0x55] = (int)fVar10;
    }
  }
  else {
    piVar6[0x55] = (int)fVar10;
  }
  if ((float)piVar6[0x55] < (float)piVar6[0x38]) {
    auVar13 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x34));
    auVar12 = _qmtc2((float)piVar6[0x55] / (float)piVar6[0x38]);
    auVar12 = _vmulbc(auVar13,auVar12);
    auVar12 = _sqc2(auVar12);
    *(undefined1 (*) [16])(piVar6 + 0x34) = auVar12;
    piVar6[0x38] = piVar6[0x55];
  }
  FUN_00136fc0(piVar6[0x38],piVar6 + 0x20dc);
  iVar4 = piVar6[0xbe];
  piVar6[0xbe] = 0;
  piVar6[0xbd] = iVar4;
  FUN_001067a8(param_1);
  FUN_001065a8(param_1);
  fVar7 = *(float *)(DAT_002859e4 + 0x74);
  if ((piVar6[0xbe] & 0x100000U) != 0) {
    fVar7 = 0.0;
  }
  fVar10 = (float)piVar6[6];
  if (fVar7 + DAT_002c10ec < fVar10) {
    fVar7 = fVar10 - DAT_002c10ec;
  }
  else if (fVar10 < fVar7 - DAT_002c10ec) {
    fVar7 = fVar10 + DAT_002c10ec;
  }
  piVar6[6] = (int)fVar7;
  FUN_00111e98(param_1);
  (**(code **)(*piVar6 + 0x54))((int)piVar6 + (int)*(short *)(*piVar6 + 0x50),auStack_70);
  FUN_001092f8(piVar6[0x2161],auStack_70);
  auVar13 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x9c));
  auVar12 = _qmtc2(DAT_002c10f0);
  auVar12 = _vmulbc(auVar13,auVar12);
  auVar12 = _sqc2(auVar12);
  *(undefined1 (*) [16])(piVar6 + 0x9c) = auVar12;
  bVar1 = DAT_002c10f8 < (float)piVar6[0x99] * DAT_002c10f4;
  piVar6[0x99] = (int)((float)piVar6[0x99] * DAT_002c10f4);
  uVar2 = DAT_002c10fc;
  if (bVar1) {
    piVar6[0xa1] = 1;
    FUN_00107070(uVar2,param_1);
    piVar6[0x99] = 0;
  }
  bVar1 = DAT_002c1104 < (float)piVar6[0xa0] * DAT_002c1100;
  piVar6[0xa0] = (int)((float)piVar6[0xa0] * DAT_002c1100);
  uVar2 = DAT_002c1108;
  if (bVar1) {
    piVar6[0xa1] = 1;
    FUN_00107070(uVar2,param_1);
    piVar6[0xa0] = 0;
  }
  FUN_00137ad8(piVar6 + 0x20dc);
  if (piVar6[0xd4] != 0x17) {
    FUN_00109da8(param_1);
  }
  iVar4 = *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x24);
  if ((iVar4 != 1) && (iVar4 != 5)) {
    FUN_0010e6d8(param_1);
  }
  FUN_00113040(param_1);
LAB_00106144:
  FUN_0011d2a8(piVar6[0x2161]);
  return;
}

