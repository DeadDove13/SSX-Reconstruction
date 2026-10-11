/* Ghidra pseudocode. PS2 address: 0019e260. Not validated source. */

void FUN_0019e260(int param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_50 [8];
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar2 = FUN_002107c8(0x298590,0xe0,0x40000000,0x2b5290,0,0);
  if (lVar2 != 0) {
    FUN_0023bbd0(lVar2,0xffffffffdeadc0de,0xe0);
  }
  puVar3 = (undefined4 *)lVar2;
  FUN_00132d30(puVar3 + 0x10);
  iVar1 = *(int *)(param_1 + 0x58);
  *(undefined4 **)(param_1 + 100) = puVar3;
  auVar6._12_4_ = 0x3f800000;
  auVar6._0_12_ = *(undefined1 (*) [12])(iVar1 + 0xd0);
  auVar6 = _lqc2(auVar6);
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x30));
  auVar6 = _vsub(auVar6,auVar7);
  auVar6 = _sqc2(auVar6);
  fStack_60 = auVar6._0_4_;
  fStack_5c = auVar6._4_4_;
  fStack_58 = auVar6._8_4_;
  auVar7._12_4_ = 0x3f800000;
  auVar7._0_12_ = *(undefined1 (*) [12])(iVar1 + 0xdc);
  auVar6 = _lqc2(auVar7);
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x30));
  auVar6 = _vsub(auVar6,auVar7);
  auVar6 = _sqc2(auVar6);
  auStack_50._0_4_ = auVar6._0_4_;
  auStack_50._4_4_ = auVar6._4_4_;
  fStack_48 = auVar6._8_4_;
  uStack_44 = auVar6._12_4_;
  fVar5 = DAT_002c2af8;
  if (DAT_002c2af8 < ABS(fStack_60)) {
    fVar5 = ABS(fStack_60);
  }
  if (fVar5 < ABS((float)auStack_50._0_4_)) {
    fVar5 = ABS((float)auStack_50._0_4_);
  }
  if (fVar5 < ABS(fStack_5c)) {
    fVar5 = ABS(fStack_5c);
  }
  if (fVar5 < ABS((float)auStack_50._4_4_)) {
    fVar5 = ABS((float)auStack_50._4_4_);
  }
  if (fVar5 < ABS(fStack_58)) {
    fVar5 = ABS(fStack_58);
  }
  if (fVar5 < ABS(fStack_48)) {
    fVar5 = ABS(fStack_48);
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0x3f800000;
  iVar1 = *(int *)(param_1 + 100);
  *(undefined4 *)(iVar1 + 200) = 0;
  *(undefined4 *)(iVar1 + 0xcc) = 0;
  *(undefined4 *)(iVar1 + 0xd0) = 0;
  *(float *)(iVar1 + 0x10) = fVar5;
  *(float *)(iVar1 + 0x14) = fVar5;
  *(float *)(iVar1 + 0x18) = fVar5;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  fVar4 = -fVar5;
  auStack_50 = auVar6._0_8_;
  fStack_48 = fVar4;
  auStack_50._4_4_ = fVar4;
  auStack_50._0_4_ = fVar4;
  uStack_44 = 0;
  auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0x58) + 0x30));
  auVar7 = _lqc2(_auStack_50);
  auVar6 = _vadd(auVar6,auVar7);
  auVar6 = _sqc2(auVar6);
  iVar1 = *(int *)(param_1 + 100);
  uStack_40 = auVar6._0_4_;
  uStack_3c = auVar6._4_4_;
  uStack_38 = auVar6._8_4_;
  uStack_34 = auVar6._12_4_;
  *(undefined4 *)(iVar1 + 0x20) = uStack_40;
  *(undefined4 *)(iVar1 + 0x24) = uStack_3c;
  *(undefined4 *)(iVar1 + 0x28) = uStack_38;
  *(undefined4 *)(iVar1 + 0x2c) = uStack_34;
  auStack_50._4_4_ = fVar5;
  auStack_50._0_4_ = fVar5;
  fStack_48 = fVar5;
  uStack_44 = 0;
  auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0x58) + 0x30));
  auVar7 = _lqc2(_auStack_50);
  auVar6 = _vadd(auVar6,auVar7);
  auVar6 = _sqc2(auVar6);
  iVar1 = *(int *)(param_1 + 100);
  uStack_40 = auVar6._0_4_;
  uStack_3c = auVar6._4_4_;
  uStack_38 = auVar6._8_4_;
  uStack_34 = auVar6._12_4_;
  *(undefined4 *)(iVar1 + 0x30) = uStack_40;
  *(undefined4 *)(iVar1 + 0x34) = uStack_3c;
  *(undefined4 *)(iVar1 + 0x38) = uStack_38;
  *(undefined4 *)(iVar1 + 0x3c) = uStack_34;
  iVar1 = *(int *)(param_1 + 100);
  *(int *)(iVar1 + 0xc4) = param_1 + 0x30;
  FUN_00132f10(iVar1 + 0x40,iVar1 + 0x20,iVar1 + 0x30);
  FUN_00132090(*(undefined4 *)(DAT_002859e4 + 0x28),*(int *)(param_1 + 100) + 0x40);
  *(uint *)(*(int *)(param_1 + 0x58) + 0xe8) =
       *(uint *)(*(int *)(param_1 + 0x58) + 0xe8) & 0xffffff9f;
  return;
}

