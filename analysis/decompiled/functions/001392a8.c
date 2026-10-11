/* Ghidra pseudocode. PS2 address: 001392a8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0013940c) */
/* WARNING: Removing unreachable block (ram,0x001393c0) */

void FUN_001392a8(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  fVar9 = DAT_002c1d28;
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x6cf4);
  iVar4 = *(int *)(iVar2 + 8);
  if (iVar4 - 0x38U < 2) {
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xd0));
    auVar10 = _qmtc2(DAT_002c1d28);
    auVar10 = _vmulbc(auVar11,auVar10);
    auVar10 = _sqc2(auVar10);
    *(undefined1 (*) [16])(iVar1 + 0xd0) = auVar10;
    *(float *)(*param_1 + 0xe0) = *(float *)(*param_1 + 0xe0) * fVar9;
  }
  else {
    if (iVar4 == 0x37) {
      fVar9 = (float)((int)(*param_2 << 0x12) >> 0x1a) / 31.0;
      if (-1 < *(int *)(iVar1 + 0x348)) {
        fVar9 = 1.0;
      }
      if (ABS(fVar9) <= 0.5) {
        auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x110));
        auVar11 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xd0));
        auVar12 = _vaddbc(in_vf0,in_vf0);
        auVar10 = _vmul(auVar10,auVar11);
        _vaddabc(auVar10,auVar10);
        _vmaddabc(auVar12,auVar10);
        auVar10 = _vmaddbc(auVar12,auVar10);
        auVar10 = _qmfc2(auVar10._0_4_);
        if (0.0 <= auVar10._0_4_) {
          uVar6 = *param_2;
          goto LAB_001394dc;
        }
        iVar4 = *(int *)(iVar1 + 0x144);
      }
      else {
        iVar4 = *(int *)(iVar1 + 0x144);
      }
      if (iVar4 == 0) {
        *(undefined4 *)(iVar1 + 0x144) = 1;
        fVar7 = DAT_002c1d30;
        *(undefined4 *)(iVar2 + 0xc) = 1;
        fVar7 = fVar7 * 1.0;
        fVar8 = DAT_002c1d34;
      }
      else {
        *(undefined4 *)(iVar1 + 0x144) = 0;
        fVar7 = DAT_002c1d2c * 0.0;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        fVar8 = 0.0;
      }
      *(float *)(iVar2 + 0x18) = fVar8 - fVar7;
      iVar1 = *param_1;
      if (*(int *)(*(int *)(iVar1 + 0x394) + 0x28) != 0) {
        fVar9 = -fVar9;
      }
      uVar5 = 0x38;
      if (0.5 < fVar9) {
        uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
      }
      else {
        uVar5 = 0x39;
        if (-0.5 <= fVar9) {
          FUN_001129e8(DAT_002c1d38,iVar1,iVar1 + 0x130);
          FUN_0014cd18(*(undefined4 *)(*param_1 + 0x6cf4),0x36,0,5);
          uVar6 = *param_2;
          goto LAB_001394dc;
        }
        uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
      }
      FUN_0014cd18(uVar3,uVar5,0,5);
      uVar6 = *param_2;
      goto LAB_001394dc;
    }
    if ((iVar4 != 0x34) && (iVar4 != 0x50)) {
      uVar6 = *param_2;
      goto LAB_001394dc;
    }
    FUN_0010b330(iVar1,3);
  }
  uVar6 = *param_2;
LAB_001394dc:
  uVar5 = DAT_002c1d3c;
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*param_1 + 0x210) != 0) {
      return;
    }
    iVar1 = *param_1;
  }
  else {
    iVar1 = *param_1;
  }
  *(uint *)(iVar1 + 0x284) = (uVar6 ^ 1) & 1;
  FUN_00107070(uVar5);
  return;
}

