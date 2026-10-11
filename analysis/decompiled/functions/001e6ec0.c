/* Ghidra pseudocode. PS2 address: 001e6ec0. Not validated source. */

undefined8 FUN_001e6ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  iVar4 = (int)param_1;
  FUN_001860e8();
  *(undefined4 *)(iVar4 + 0x70) = 0;
  *(undefined **)(iVar4 + 8) = &DAT_002b7e88;
  FUN_001978a0(param_3,iVar4 + 0x28,0x3c);
  iVar1 = FUN_00197c30(param_3,param_3);
  uVar5 = *(undefined4 *)(iVar1 + 0xd0);
  *(int *)(iVar4 + 0x7c) = iVar1;
  auVar6._4_4_ = *(undefined4 *)(iVar1 + 0xd4);
  auVar6._0_4_ = uVar5;
  auVar6._8_4_ = *(undefined4 *)(iVar1 + 0xd8);
  auVar6._12_4_ = 0x3f800000;
  auVar6 = _lqc2(auVar6);
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x30));
  auVar6 = _vsub(auVar6,auVar7);
  auVar6 = _sqc2(auVar6);
  uStack_80 = auVar6._0_4_;
  uStack_7c = auVar6._4_4_;
  uStack_78 = auVar6._8_4_;
  uStack_74 = auVar6._12_4_;
  *(undefined4 *)(iVar4 + 0x90) = uStack_80;
  *(undefined4 *)(iVar4 + 0x94) = uStack_7c;
  *(undefined4 *)(iVar4 + 0x98) = uStack_78;
  *(undefined4 *)(iVar4 + 0x9c) = uStack_74;
  auVar7._12_4_ = 0x3f800000;
  auVar7._0_12_ = *(undefined1 (*) [12])(*(int *)(iVar4 + 0x7c) + 0xdc);
  auVar6 = _lqc2(auVar7);
  auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar4 + 0x7c) + 0x30));
  auVar6 = _vsub(auVar6,auVar7);
  auVar6 = _sqc2(auVar6);
  uStack_80 = auVar6._0_4_;
  uStack_7c = auVar6._4_4_;
  uStack_78 = auVar6._8_4_;
  uStack_74 = auVar6._12_4_;
  *(undefined4 *)(iVar4 + 0xa0) = uStack_80;
  *(undefined4 *)(iVar4 + 0xa4) = uStack_7c;
  *(undefined4 *)(iVar4 + 0xa8) = uStack_78;
  *(undefined4 *)(iVar4 + 0xac) = uStack_74;
  iVar1 = *(int *)(iVar4 + 0x30);
  *(undefined4 *)(iVar4 + 0x9c) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0xac) = 0x3f800000;
  lVar3 = FUN_002107c8(0x298590,iVar1 << 5,0x40000000,0x2b7e70,0,0);
  if (lVar3 != 0) {
    FUN_0023bbd0(lVar3,0xffffffffdeadc0ed,iVar1 << 5);
  }
  iVar2 = iVar1 + -1;
  if (iVar1 != 0) {
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  *(int *)(iVar4 + 0x80) = (int)lVar3;
  FUN_001978a0(param_3,lVar3,*(int *)(iVar4 + 0x30) << 5);
  FUN_00218e78(iVar4 + 100,param_3);
  return param_1;
}

