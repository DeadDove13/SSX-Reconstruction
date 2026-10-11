/* Ghidra pseudocode. PS2 address: 001e6b68. Not validated source. */

undefined8 FUN_001e6b68(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  iVar9 = (int)param_1;
  FUN_00186070(param_1,param_2,0x18);
  iVar8 = *(int *)(param_4 + 0x14);
  uVar11 = *(undefined4 *)(param_4 + 0x1c);
  *(int *)(iVar9 + 0x30) = iVar8;
  *(undefined **)(iVar9 + 8) = &DAT_002b7e88;
  uVar2 = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)(iVar9 + 0x7c) = param_3;
  *(undefined4 *)(iVar9 + 0x34) = uVar2;
  *(undefined4 *)(iVar9 + 0x70) = 0;
  uVar2 = *(undefined4 *)(param_4 + 0x10);
  *(undefined4 *)(iVar9 + 0x44) = uVar11;
  *(undefined4 *)(iVar9 + 0x38) = uVar2;
  *(uint *)(iVar9 + 0x3c) = (uint)(*(int *)(param_4 + 0x20) != 0);
  lVar5 = FUN_002107c8(0x298590,iVar8 << 5,0x40000000,0x2b7e70,0,0);
  if (lVar5 != 0) {
    FUN_0023bbd0(lVar5,0xffffffffdeadc0ed,iVar8 << 5);
  }
  iVar4 = iVar8 + -1;
  uVar1 = *(undefined2 *)(param_4 + 10);
  if (iVar8 != 0) {
    do {
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  *(int *)(iVar9 + 0x80) = (int)lVar5;
  FUN_00218840(iVar9 + 100,uVar1);
  fVar10 = *(float *)(param_4 + 0x18);
  *(undefined4 *)(iVar9 + 0x40) = 0;
  *(float *)(iVar9 + 0x4c) = (fVar10 * 100.0) / 60.0;
  *(undefined4 *)(iVar9 + 0x50) = 0;
  *(float *)(iVar9 + 0x48) = *(float *)(iVar9 + 0x78) / (float)*(int *)(iVar9 + 0x30);
  uVar3 = *(undefined8 *)(param_4 + 0x2c);
  *(undefined8 *)(iVar9 + 0x54) = *(undefined8 *)(param_4 + 0x24);
  *(undefined8 *)(iVar9 + 0x5c) = uVar3;
  iVar8 = 0;
  if (0 < *(int *)(iVar9 + 0x30)) {
    do {
      iVar6 = iVar8 * 0x20;
      iVar8 = iVar8 + 1;
      puVar7 = (undefined4 *)(iVar6 + *(int *)(iVar9 + 0x80));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0x3f800000;
      iVar6 = iVar6 + *(int *)(iVar9 + 0x80);
      *(undefined4 *)(iVar6 + 0x10) = 0;
      iVar4 = *(int *)(iVar9 + 0x30);
      *(undefined4 *)(iVar6 + 0x14) = 0;
      *(undefined4 *)(iVar6 + 0x18) = 0;
    } while (iVar8 < iVar4);
  }
  auVar12._12_4_ = 0x3f800000;
  auVar12._0_12_ = *(undefined1 (*) [12])(*(int *)(iVar9 + 0x7c) + 0xd0);
  auVar12 = _lqc2(auVar12);
  auVar13 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar9 + 0x7c) + 0x30));
  auVar12 = _vsub(auVar12,auVar13);
  auVar12 = _sqc2(auVar12);
  uStack_80 = auVar12._0_4_;
  uStack_7c = auVar12._4_4_;
  uStack_78 = auVar12._8_4_;
  uStack_74 = auVar12._12_4_;
  *(undefined4 *)(iVar9 + 0x90) = uStack_80;
  *(undefined4 *)(iVar9 + 0x94) = uStack_7c;
  *(undefined4 *)(iVar9 + 0x98) = uStack_78;
  *(undefined4 *)(iVar9 + 0x9c) = uStack_74;
  auVar13._12_4_ = 0x3f800000;
  auVar13._0_12_ = *(undefined1 (*) [12])(*(int *)(iVar9 + 0x7c) + 0xdc);
  auVar12 = _lqc2(auVar13);
  auVar13 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar9 + 0x7c) + 0x30));
  auVar12 = _vsub(auVar12,auVar13);
  auVar12 = _sqc2(auVar12);
  uStack_80 = auVar12._0_4_;
  uStack_7c = auVar12._4_4_;
  uStack_78 = auVar12._8_4_;
  uStack_74 = auVar12._12_4_;
  *(undefined4 *)(iVar9 + 0xa0) = uStack_80;
  *(undefined4 *)(iVar9 + 0xa4) = uStack_7c;
  *(undefined4 *)(iVar9 + 0xa8) = uStack_78;
  *(undefined4 *)(iVar9 + 0xac) = uStack_74;
  *(undefined4 *)(iVar9 + 0x9c) = 0x3f800000;
  *(undefined4 *)(iVar9 + 0xac) = 0x3f800000;
  if (*(int *)(iVar9 + 0x30) == 1) {
    iVar8 = *(int *)(*(int *)(iVar9 + 0x7c) + 0x100);
    if (iVar8 == 0) {
      iVar8 = *(int *)(iVar9 + 0x7c);
      goto LAB_001e6e84;
    }
    if ((*(uint *)(*(int *)(iVar9 + 0x7c) + 0xe8) & 0x80) == 0) {
      iVar8 = *(int *)(iVar9 + 0x7c);
      goto LAB_001e6e84;
    }
    (**(code **)(*(int *)(iVar8 + 8) + 0xac))(iVar8 + *(short *)(*(int *)(iVar8 + 8) + 0xa8));
  }
  iVar8 = *(int *)(iVar9 + 0x7c);
LAB_001e6e84:
  *(uint *)(iVar8 + 0xe8) = *(uint *)(iVar8 + 0xe8) & 0xfffffff9;
  return param_1;
}

