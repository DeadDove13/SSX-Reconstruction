/* Ghidra pseudocode. PS2 address: 0012d4f8. Not validated source. */

undefined8
FUN_0012d4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_00122128(param_1,param_2,0x14,param_3);
  iVar1 = 3;
  iVar2 = (int)param_1;
  *(undefined **)(iVar2 + 8) = &DAT_002a9178;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  iVar1 = 3;
  fVar6 = *(float *)(param_4 + 0x10);
  uVar3 = *(undefined4 *)(param_4 + 0xc);
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  iVar1 = 0x1f;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  iVar1 = 0x1f;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  iVar1 = 0x1f;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  *(undefined4 *)(iVar2 + 0x770) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(iVar2 + 0x774) = uVar3;
  *(int *)(iVar2 + 0x34) = (int)(fVar6 * 60.0);
  uVar4 = *(undefined4 *)(param_4 + 0x20);
  uVar7 = *(undefined4 *)(param_4 + 0x28);
  uVar3 = *(undefined4 *)(param_4 + 0x24);
  *(undefined4 *)(iVar2 + 0x77c) = 0;
  *(undefined4 *)(iVar2 + 0xd0) = uVar4;
  *(undefined4 *)(iVar2 + 0xd4) = uVar3;
  *(undefined4 *)(iVar2 + 0xd8) = uVar7;
  *(undefined4 *)(iVar2 + 0xdc) = 0;
  if (*(float *)(param_4 + 0x14) == 0.0) {
    fVar5 = *(float *)(param_4 + 0x18);
    fVar6 = *(float *)(param_4 + 0x1c);
    if (fVar5 != 0.0) goto LAB_0012d6f0;
    if (fVar6 == 0.0) {
      if (param_5 == 0) {
        uStack_54 = 0;
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
      }
      else {
        auVar9 = _lqc2(*(undefined1 (*) [16])((int)param_5 + 0x10));
        auVar8 = _qmtc2(ABS(*(float *)((int)param_5 + 0x30)));
        auVar8 = _vmulbc(auVar9,auVar8);
        auVar8 = _sqc2(auVar8);
        uStack_50 = auVar8._0_4_;
        uStack_4c = auVar8._4_4_;
        uStack_48 = auVar8._8_4_;
        uStack_44 = auVar8._12_4_;
        uStack_60 = uStack_50;
        uStack_5c = uStack_4c;
        uStack_58 = uStack_48;
        uStack_54 = uStack_44;
      }
      *(undefined4 *)(iVar2 + 0xe0) = uStack_60;
      *(undefined4 *)(iVar2 + 0xe4) = uStack_5c;
      *(undefined4 *)(iVar2 + 0xe8) = uStack_58;
      *(undefined4 *)(iVar2 + 0xec) = uStack_54;
      auVar9 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xe0));
      auVar8 = _qmtc2(DAT_002c1b98);
      auVar8 = _vmulbc(auVar9,auVar8);
      auVar8 = _sqc2(auVar8);
      *(undefined1 (*) [16])(iVar2 + 0xe0) = auVar8;
      iVar1 = *(int *)(iVar2 + 0x28);
      goto LAB_0012d710;
    }
    uVar3 = *(undefined4 *)(param_4 + 0x14);
  }
  else {
    fVar5 = *(float *)(param_4 + 0x18);
    fVar6 = *(float *)(param_4 + 0x1c);
LAB_0012d6f0:
    uVar3 = *(undefined4 *)(param_4 + 0x14);
  }
  *(undefined4 *)(iVar2 + 0xe0) = uVar3;
  *(float *)(iVar2 + 0xe4) = fVar5;
  *(float *)(iVar2 + 0xe8) = fVar6;
  *(undefined4 *)(iVar2 + 0xec) = 0;
  iVar1 = *(int *)(iVar2 + 0x28);
LAB_0012d710:
  *(uint *)(iVar1 + 0xe8) = *(uint *)(iVar1 + 0xe8) & 0xfffffffd | 4;
  FUN_0012d870(param_1);
  return param_1;
}

