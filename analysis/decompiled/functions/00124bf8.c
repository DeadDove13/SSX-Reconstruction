/* Ghidra pseudocode. PS2 address: 00124bf8. Not validated source. */

undefined8 FUN_00124bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_b0 [32];
  
  iVar2 = (int)param_1;
  iVar3 = iVar2 + 0x150;
  iVar4 = iVar2 + 0x2c0;
  FUN_00122180();
  FUN_00135ac0(iVar2 + 0x30);
  *(undefined **)(iVar2 + 8) = &DAT_002a9f50;
  FUN_0020e690(iVar3);
  *(undefined **)(iVar2 + 0x150) = &DAT_002bd458;
  FUN_00132d30(iVar4);
  FUN_001978a0(param_3,iVar2 + 0xc0,0x90);
  FUN_00136758(iVar2 + 0x30,param_3);
  puVar1 = (undefined4 *)FUN_002236e8(0x299cc8,*(undefined4 *)(*(int *)(iVar2 + 0x28) + 0xc0));
  FUN_0020dd18(iVar3,*puVar1);
  FUN_00125438(auStack_b0,param_1);
  FUN_00217948(&uStack_f0,auStack_b0);
  FUN_0020e858(iVar3,&uStack_f0);
  uVar5 = FUN_0020e740(iVar3);
  uVar6 = FUN_0020e740(iVar3);
  uStack_e8 = FUN_0020e740(iVar3);
  uStack_e4 = 0;
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x1e0));
  auVar8._4_4_ = uVar6;
  auVar8._0_4_ = uVar5;
  auVar8._8_4_ = uStack_e8;
  auVar8._12_4_ = 0;
  auVar8 = _lqc2(auVar8);
  auVar8 = _vsub(auVar7,auVar8);
  auStack_e0 = _sqc2(auVar8);
  *(undefined4 *)(iVar2 + 0x2a0) = auStack_e0._0_4_;
  *(undefined4 *)(iVar2 + 0x2a4) = auStack_e0._4_4_;
  *(undefined4 *)(iVar2 + 0x2a8) = auStack_e0._8_4_;
  *(undefined4 *)(iVar2 + 0x2ac) = auStack_e0._12_4_;
  uStack_f0 = uVar5;
  uStack_ec = uVar6;
  uVar5 = FUN_0020e740(iVar3);
  uVar6 = FUN_0020e740(iVar3);
  uStack_e8 = FUN_0020e740(iVar3);
  uStack_e4 = 0;
  auVar8 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x1e0));
  auVar7._4_4_ = uVar6;
  auVar7._0_4_ = uVar5;
  auVar7._8_4_ = uStack_e8;
  auVar7._12_4_ = 0;
  auVar7 = _lqc2(auVar7);
  auVar8 = _vadd(auVar8,auVar7);
  auStack_e0 = _sqc2(auVar8);
  *(undefined4 *)(iVar2 + 0x2b0) = auStack_e0._0_4_;
  *(undefined4 *)(iVar2 + 0x2b4) = auStack_e0._4_4_;
  *(undefined4 *)(iVar2 + 0x2b8) = auStack_e0._8_4_;
  *(undefined4 *)(iVar2 + 700) = auStack_e0._12_4_;
  *(int *)(iVar2 + 0x344) = iVar2;
  uStack_f0 = uVar5;
  uStack_ec = uVar6;
  FUN_0010ddf0(iVar4,iVar2 + 0x2a0);
  FUN_00132090(*(undefined4 *)(DAT_002859e4 + 0x28),iVar4);
  return param_1;
}

