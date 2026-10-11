/* Ghidra pseudocode. PS2 address: 0012bce8. Not validated source. */

void FUN_0012bce8(undefined8 param_1)

{
  int iVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  iVar8 = (int)param_1;
  if (*(int *)(iVar8 + 0x34) < 1) {
    if (*(int *)(iVar8 + 0x38) < 1) {
      if (*(int *)(iVar8 + 0x3c) < 1) {
        *(undefined4 *)(iVar8 + 0x40) = 0;
        return;
      }
      pauVar6 = *(undefined1 (**) [16])(iVar8 + 0x28);
    }
    else {
      pauVar6 = *(undefined1 (**) [16])(iVar8 + 0x28);
    }
  }
  else {
    pauVar6 = *(undefined1 (**) [16])(iVar8 + 0x28);
  }
  *(undefined8 *)(iVar8 + 0x50) = *(undefined8 *)*pauVar6;
  *(undefined8 *)(iVar8 + 0x58) = *(undefined8 *)(*pauVar6 + 8);
  *(undefined8 *)(iVar8 + 0x60) = *(undefined8 *)pauVar6[1];
  *(undefined8 *)(iVar8 + 0x68) = *(undefined8 *)(pauVar6[1] + 8);
  *(undefined8 *)(iVar8 + 0x70) = *(undefined8 *)pauVar6[2];
  *(undefined8 *)(iVar8 + 0x78) = *(undefined8 *)(pauVar6[2] + 8);
  *(undefined8 *)(iVar8 + 0x80) = *(undefined8 *)pauVar6[3];
  uVar5 = *(undefined8 *)(pauVar6[3] + 8);
  *(float *)(iVar8 + 0x70) = -*(float *)(iVar8 + 0x70);
  *(undefined8 *)(iVar8 + 0x88) = uVar5;
  *(float *)(iVar8 + 0x74) = -*(float *)(iVar8 + 0x74);
  *(undefined4 *)(iVar8 + 0x68) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x60) = 0;
  *(undefined4 *)(iVar8 + 100) = 0;
  *(undefined4 *)(iVar8 + 0x58) = 0;
  *(undefined4 *)(iVar8 + 0x88) = 0;
  auVar15 = _lqc2(*pauVar6);
  auVar14 = _qmtc2(0x43480000);
  auVar14 = _vmulbc(auVar15,auVar14);
  auVar14 = _sqc2(auVar14);
  uStack_80 = auVar14._0_4_;
  uStack_7c = auVar14._4_4_;
  uStack_78 = auVar14._8_4_;
  uStack_74 = auVar14._12_4_;
  *(undefined4 *)(iVar8 + 0x330) = uStack_80;
  *(undefined4 *)(iVar8 + 0x334) = uStack_7c;
  *(undefined4 *)(iVar8 + 0x338) = uStack_78;
  *(undefined4 *)(iVar8 + 0x33c) = uStack_74;
  auVar15 = _lqc2(pauVar6[2]);
  auVar14 = _qmtc2(-*(float *)(iVar8 + 0x4c));
  auVar14 = _vmulbc(auVar15,auVar14);
  auVar14 = _sqc2(auVar14);
  uStack_80 = auVar14._0_4_;
  uStack_7c = auVar14._4_4_;
  uStack_78 = auVar14._8_4_;
  uStack_74 = auVar14._12_4_;
  *(undefined4 *)(iVar8 + 0x340) = uStack_80;
  *(undefined4 *)(iVar8 + 0x344) = uStack_7c;
  *(undefined4 *)(iVar8 + 0x348) = uStack_78;
  *(undefined4 *)(iVar8 + 0x34c) = uStack_74;
  uVar12 = *(undefined4 *)(pauVar6[3] + 0xc);
  uVar11 = *(undefined4 *)(pauVar6[3] + 4);
  uVar13 = *(undefined4 *)(pauVar6[3] + 8);
  *(undefined4 *)(iVar8 + 800) = *(undefined4 *)pauVar6[3];
  *(undefined4 *)(iVar8 + 0x324) = uVar11;
  *(undefined4 *)(iVar8 + 0x328) = uVar13;
  *(undefined4 *)(iVar8 + 0x32c) = uVar12;
  iVar1 = *(int *)(iVar8 + 0x28);
  *(undefined8 *)(iVar8 + 0x90) = *(undefined8 *)(iVar1 + 0x40);
  *(undefined8 *)(iVar8 + 0x98) = *(undefined8 *)(iVar1 + 0x48);
  *(undefined8 *)(iVar8 + 0xa0) = *(undefined8 *)(iVar1 + 0x50);
  *(undefined8 *)(iVar8 + 0xa8) = *(undefined8 *)(iVar1 + 0x58);
  *(undefined8 *)(iVar8 + 0xb0) = *(undefined8 *)(iVar1 + 0x60);
  *(undefined8 *)(iVar8 + 0xb8) = *(undefined8 *)(iVar1 + 0x68);
  *(undefined8 *)(iVar8 + 0xc0) = *(undefined8 *)(iVar1 + 0x70);
  uVar5 = *(undefined8 *)(iVar1 + 0x78);
  *(float *)(iVar8 + 0x90) = -*(float *)(iVar8 + 0x90);
  *(undefined8 *)(iVar8 + 200) = uVar5;
  *(float *)(iVar8 + 0xa0) = -*(float *)(iVar8 + 0xa0);
  *(float *)(iVar8 + 0xb0) = -*(float *)(iVar8 + 0xb0);
  *(float *)(iVar8 + 0x98) = -*(float *)(iVar8 + 0x98);
  *(float *)(iVar8 + 0xa8) = -*(float *)(iVar8 + 0xa8);
  *(float *)(iVar8 + 0xb8) = -*(float *)(iVar8 + 0xb8);
  *(undefined8 *)(iVar8 + 0xd0) = *(undefined8 *)(iVar1 + 0x80);
  *(undefined8 *)(iVar8 + 0xd8) = *(undefined8 *)(iVar1 + 0x88);
  *(undefined8 *)(iVar8 + 0xe0) = *(undefined8 *)(iVar1 + 0x90);
  *(undefined8 *)(iVar8 + 0xe8) = *(undefined8 *)(iVar1 + 0x98);
  *(undefined8 *)(iVar8 + 0xf0) = *(undefined8 *)(iVar1 + 0xa0);
  *(undefined8 *)(iVar8 + 0xf8) = *(undefined8 *)(iVar1 + 0xa8);
  *(undefined8 *)(iVar8 + 0x100) = *(undefined8 *)(iVar1 + 0xb0);
  *(undefined8 *)(iVar8 + 0x108) = *(undefined8 *)(iVar1 + 0xb8);
  FUN_0012c0b0(param_1,*(undefined4 *)(iVar8 + 0x48));
  iVar10 = 0;
  iVar1 = iVar8 + 0x110;
  do {
    iVar10 = iVar10 + 1;
    puVar7 = (undefined2 *)(iVar1 + 0x10);
    iVar9 = 3;
    do {
      uVar2 = FUN_0012c008(param_1,iVar1);
      iVar9 = iVar9 + -1;
      *puVar7 = uVar2;
      iVar4 = FUN_002109b0();
      if (*(short *)(iVar1 + 4) == 0) {
        trap(7);
      }
      puVar7[1] = (short)(iVar4 % (int)*(short *)(iVar1 + 4));
      uVar3 = FUN_002109b0();
      puVar7[2] = uVar3 & 7;
      uVar3 = FUN_002109b0();
      puVar7[3] = uVar3 & 7;
      puVar7 = puVar7 + 0x10;
    } while (-1 < iVar9);
    iVar1 = iVar1 + 0xa0;
  } while (iVar10 < 3);
  FUN_0012bb88(param_1);
  *(undefined4 *)(iVar8 + 0x40) = 1;
  return;
}

