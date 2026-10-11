/* Ghidra pseudocode. PS2 address: 00168f68. Not validated source. */

void FUN_00168f68(undefined4 param_1,float param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_4 + 0x4c) + 0xcc) * 8 + DAT_00299ce0);
  if (*(float *)(iVar1 + 0xc) != 0.0) {
    *(undefined4 *)(param_4 + 0xb8) = param_3;
    *(undefined4 *)(param_4 + 0x144) = param_1;
    *(undefined4 *)(param_4 + 0xb4) = 0;
    *(undefined4 *)(param_4 + 0x14c) = param_1;
    if (param_2 == -1.0) {
      *(float *)(param_4 + 0x150) = *(float *)(iVar1 + 0xc) - DAT_002c27a4;
    }
    else {
      *(float *)(param_4 + 0x150) = param_2;
    }
    FUN_001d7da0(*(undefined4 *)(param_4 + 0x144),auStack_110,
                 *(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x1c));
    pauVar2 = *(undefined1 (**) [16])(param_4 + 0x4c);
    auVar3 = _lqc2(*pauVar2);
    auVar4 = _lqc2(pauVar2[1]);
    auVar5 = _lqc2(pauVar2[2]);
    auVar6 = _lqc2(pauVar2[3]);
    auVar7 = _lqc2(auStack_e0);
    auVar8 = _lqc2(auStack_d0);
    auVar9 = _lqc2(auStack_c0);
    auVar10 = _lqc2(auStack_b0);
    _vmulabc(auVar3,auVar7);
    _vmaddabc(auVar4,auVar7);
    _vmaddabc(auVar5,auVar7);
    auVar7 = _vmaddbc(auVar6,auVar7);
    _vmulabc(auVar3,auVar8);
    _vmaddabc(auVar4,auVar8);
    _vmaddabc(auVar5,auVar8);
    auVar8 = _vmaddbc(auVar6,auVar8);
    _vmulabc(auVar3,auVar9);
    _vmaddabc(auVar4,auVar9);
    _vmaddabc(auVar5,auVar9);
    auVar9 = _vmaddbc(auVar6,auVar9);
    _vmulabc(auVar3,auVar10);
    _vmaddabc(auVar4,auVar10);
    _vmaddabc(auVar5,auVar10);
    auVar3 = _vmaddbc(auVar6,auVar10);
    auStack_60 = _sqc2(auVar7);
    auStack_50 = _sqc2(auVar8);
    auStack_40 = _sqc2(auVar9);
    auStack_30 = _sqc2(auVar3);
    uStack_a0 = auStack_60._0_4_;
    uStack_9c = auStack_60._4_4_;
    uStack_98 = auStack_60._8_4_;
    uStack_94 = auStack_60._12_4_;
    uStack_90 = auStack_50._0_4_;
    uStack_8c = auStack_50._4_4_;
    uStack_88 = auStack_50._8_4_;
    uStack_84 = auStack_50._12_4_;
    uStack_80 = auStack_40._0_4_;
    uStack_7c = auStack_40._4_4_;
    uStack_78 = auStack_40._8_4_;
    uStack_74 = auStack_40._12_4_;
    uStack_70 = auStack_30._0_4_;
    uStack_6c = auStack_30._4_4_;
    uStack_68 = auStack_30._8_4_;
    uStack_64 = auStack_30._12_4_;
    *(long *)(param_4 + 0x50) = auStack_60._0_8_;
    *(long *)(param_4 + 0x88) = auStack_30._8_8_;
    *(long *)(param_4 + 0x58) = auStack_60._8_8_;
    *(long *)(param_4 + 0x60) = auStack_50._0_8_;
    *(long *)(param_4 + 0x68) = auStack_50._8_8_;
    *(long *)(param_4 + 0x70) = auStack_40._0_8_;
    *(long *)(param_4 + 0x78) = auStack_40._8_8_;
    *(long *)(param_4 + 0x80) = auStack_30._0_8_;
    FUN_0016a558(auStack_110,2);
  }
  return;
}

