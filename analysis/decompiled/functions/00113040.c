/* Ghidra pseudocode. PS2 address: 00113040. Not validated source. */

void FUN_00113040(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x6cf4) + 8);
  *(float *)(param_1 + 0x168) = *(float *)(param_1 + 0x1a4) * DAT_002c145c;
  uVar2 = DAT_002c1468;
  uVar8 = DAT_002c1460;
  if (((((iVar1 == 0x50) || (*(int *)(param_1 + 0x34c) == 3)) ||
       (iVar1 = *(int *)(param_1 + 0x350), iVar1 == 0xb)) || ((iVar1 == 2 || (iVar1 == 0x14)))) ||
     ((iVar1 == 0x15 || ((iVar1 == 4 || (iVar1 == 5)))))) {
    *(undefined4 *)(param_1 + 0x1dc) = 0;
  }
  else {
    fVar4 = *(float *)(param_1 + 0xe0) * DAT_002c1464;
    fVar3 = *(float *)(param_1 + 0x1a4) * -60.0;
    if (fVar4 < 1.0) {
      fVar3 = fVar3 * fVar4;
    }
    *(float *)(param_1 + 0x1dc) = fVar3;
    uVar8 = uVar2;
  }
  *(undefined4 *)(param_1 + 0x1d8) = uVar8;
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x220));
  auVar5 = _qmtc2(0x3f000000);
  auVar5 = _vmulbc(auVar6,auVar5);
  auVar5 = _sqc2(auVar5);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x240));
  auVar5 = _lqc2(auVar5);
  auVar5 = _vadd(auVar6,auVar5);
  auVar5 = _sqc2(auVar5);
  auVar5 = _lqc2(auVar5);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vmul(auVar5,auVar5);
  _vaddabc(auVar6,auVar6);
  _vmaddabc(auVar7,auVar6);
  auVar6 = _vmaddbc(auVar7,auVar6);
  _vrsqrt(in_vf0,auVar6);
  uVar8 = _vwaitq();
  auVar5 = _vmulq(auVar5,uVar8);
  auVar5 = _sqc2(auVar5);
  uStack_10 = auVar5._0_4_;
  uStack_c = auVar5._4_4_;
  uStack_8 = auVar5._8_4_;
  uStack_4 = auVar5._12_4_;
  *(undefined4 *)(param_1 + 0x240) = uStack_10;
  *(undefined4 *)(param_1 + 0x244) = uStack_c;
  *(undefined4 *)(param_1 + 0x248) = uStack_8;
  *(undefined4 *)(param_1 + 0x24c) = uStack_4;
  return;
}

