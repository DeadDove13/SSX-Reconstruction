/* Ghidra pseudocode. PS2 address: 0020e2a8. Not validated source. */

void FUN_0020e2a8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  
  iVar3 = (int)param_1;
  iVar5 = (int)param_4;
  if (param_4 < param_2) {
    uVar6 = *(undefined4 *)(iVar5 * 0xc + *(int *)(*(int *)(iVar3 + 0xa0) + 0x20) + 0x10);
    iVar2 = *(int *)(iVar3 + 0xa0);
    uVar1 = 0;
    while( true ) {
      uVar4 = uVar1 + 1;
      if (((int)(uint)*(byte *)(*(int *)(iVar2 + 0x28) + param_5) >> (uVar1 & 0x1f) & 1U) != 0) {
        auVar8 = _lqc2(*(undefined1 (*) [16])(uVar1 * 0x10 + iVar3 + 0x10));
        auVar7 = _qmtc2(uVar6);
        auVar7 = _vmulbc(auVar8,auVar7);
        auVar7 = _sqc2(auVar7);
        auStack_a0._8_4_ = auVar7._8_4_;
        auStack_a0._12_4_ = auVar7._12_4_;
        uStack_b0 = auVar7._0_4_;
        uStack_ac = auVar7._4_4_;
        uStack_a8 = auStack_a0._8_4_;
        uStack_a4 = auStack_a0._12_4_;
        auVar8 = _lqc2(*(undefined1 (*) [16])param_3);
        auVar7 = _lqc2(auVar7);
        auVar7 = _vadd(auVar8,auVar7);
        auStack_a0 = _sqc2(auVar7);
        uStack_c0 = auStack_a0._0_4_;
        uStack_bc = auStack_a0._4_4_;
        uStack_b8 = auStack_a0._8_4_;
        uStack_b4 = auStack_a0._12_4_;
        FUN_0020e2a8(param_1,param_2,&uStack_c0,iVar5 + 1,
                     uVar4 * *(int *)(iVar5 * 0xc + *(int *)(iVar2 + 0x20) + 8) + param_5);
      }
      if (7 < (int)uVar4) break;
      iVar2 = *(int *)(iVar3 + 0xa0);
      uVar1 = uVar4;
    }
  }
  else {
    uStack_b8 = 0x3f800000;
    uStack_c0 = 0x3f800000;
    uStack_bc = 0;
    uStack_b4 = 0;
    FUN_001bdb68(*(undefined4 *)(iVar5 * 0xc + *(int *)(*(int *)(iVar3 + 0xa0) + 0x20)),0x295e90,
                 param_3,&uStack_c0,4);
  }
  return;
}

