/* Ghidra pseudocode. PS2 address: 0012a498. Not validated source. */

void FUN_0012a498(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_30 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  auVar5 = auStack_30;
  puVar3 = &DAT_00277bc4;
  auStack_30._0_4_ = 0x43480000;
  auVar6 = auStack_30;
  auStack_30._12_4_ = auVar5._12_4_;
  auStack_30._0_8_ = auVar6._0_8_;
  auStack_30._8_4_ = 0xc0a00000;
  auStack_30._0_8_ = auStack_30._0_8_ & 0xffffffff;
  iVar2 = 6;
  auStack_30._12_4_ = 0;
  auVar6 = _lqc2(auStack_30);
  auVar5 = _qmtc2(*(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x4c));
  auVar5 = _vmulbc(auVar6,auVar5);
  auVar5 = _sqc2(auVar5);
  uVar4 = DAT_00277bc4;
  puVar1 = (undefined4 *)(param_1 + 0x280);
  while( true ) {
    auVar7 = _lqc2(auVar5);
    auVar6 = _qmtc2(uVar4);
    auVar6 = _vmulbc(auVar7,auVar6);
    auVar6 = _sqc2(auVar6);
    uStack_10 = auVar6._0_4_;
    uStack_c = auVar6._4_4_;
    uStack_8 = auVar6._8_4_;
    uStack_4 = auVar6._12_4_;
    puVar3 = puVar3 + 1;
    *puVar1 = uStack_10;
    puVar1[1] = uStack_c;
    puVar1[2] = uStack_8;
    puVar1[3] = uStack_4;
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) break;
    uVar4 = *puVar3;
    puVar1 = puVar1 + 4;
  }
  iVar2 = 6;
  puVar3 = &DAT_00277be0;
  uVar4 = DAT_00277be0;
  puVar1 = puVar1 + 4;
  while( true ) {
    auVar7 = _lqc2(auVar5);
    auVar6 = _qmtc2(uVar4);
    auVar6 = _vmulbc(auVar7,auVar6);
    auVar6 = _sqc2(auVar6);
    uStack_10 = auVar6._0_4_;
    uStack_c = auVar6._4_4_;
    uStack_8 = auVar6._8_4_;
    uStack_4 = auVar6._12_4_;
    puVar3 = puVar3 + -1;
    *puVar1 = uStack_10;
    puVar1[1] = uStack_c;
    puVar1[2] = uStack_8;
    puVar1[3] = uStack_4;
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) break;
    uVar4 = *puVar3;
    puVar1 = puVar1 + 4;
  }
  return;
}

