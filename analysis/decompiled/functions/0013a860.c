/* Ghidra pseudocode. PS2 address: 0013a860. Not validated source. */

void FUN_0013a860(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar2 = *(int *)(*(int *)(*param_1 + 0x6cf4) + 8);
  uVar4 = FUN_0010af30();
  fVar7 = DAT_002c1dd4;
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x150) = uVar4;
  fVar7 = (float)*(byte *)(*(int *)(iVar1 + 0x394) + 0x15) * fVar7 * DAT_002c1dd8 + DAT_002c1ddc;
  if (iVar2 == 0) {
    FUN_0014cd18(*(undefined4 *)(iVar1 + 0x6cf4),1,0,5);
    iVar2 = *param_1;
    fVar7 = fVar7 * DAT_002c1de0 * DAT_002c1de4;
    *(undefined4 *)(iVar2 + 0x1d0) = 0x3f800000;
    *(float *)(iVar2 + 0x1cc) = fVar7;
  }
  else {
    if (iVar2 == 1) {
      iVar2 = *param_1;
      goto LAB_0013a98c;
    }
    FUN_0010b340(iVar1,2);
    FUN_0010b330(*param_1,7);
    iVar2 = *param_1;
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x110));
    auVar8 = _qmtc2(fVar7 * *(float *)(iVar2 + 0x158));
    auVar8 = _vmulbc(auVar9,auVar8);
    auVar8 = _sqc2(auVar8);
    uStack_50 = auVar8._0_4_;
    uStack_4c = auVar8._4_4_;
    uStack_48 = auVar8._8_4_;
    uStack_44 = auVar8._12_4_;
    *(undefined4 *)(iVar2 + 0xd0) = uStack_50;
    *(undefined4 *)(iVar2 + 0xd4) = uStack_4c;
    *(undefined4 *)(iVar2 + 0xd8) = uStack_48;
    *(undefined4 *)(iVar2 + 0xdc) = uStack_44;
    auVar8 = _lqc2(*(undefined1 (*) [16])(*param_1 + 0xd0));
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar8 = _vmul(auVar8,auVar8);
    _vaddabc(auVar8,auVar8);
    _vmaddabc(auVar9,auVar8);
    auVar8 = _vmaddbc(auVar9,auVar8);
    _vsqrt(auVar8);
    _vwaitq();
    uVar3 = _cfc2(in_vc6);
    *(int *)(*param_1 + 0xe0) = (int)uVar3;
  }
  iVar2 = *param_1;
LAB_0013a98c:
  fVar7 = *(float *)(iVar2 + 0x1d0);
  fVar5 = *(float *)(iVar2 + 0x1cc) * DAT_002c1de8;
  fVar6 = *(float *)(iVar2 + 0x1c8);
  if (fVar7 + fVar5 < fVar6) {
    fVar7 = fVar6 - fVar5;
  }
  else if (fVar6 < fVar7 - fVar5) {
    fVar7 = fVar6 + fVar5;
  }
  *(float *)(iVar2 + 0x1c8) = fVar7;
  return;
}

