/* Ghidra pseudocode. PS2 address: 00117950. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001179fc) */

void FUN_00117950(int param_1)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  
  iVar3 = 0;
  FUN_00116a28(param_1 + 0x970);
  FUN_0011ed28(DAT_002c16c0,0x295e90,0,0);
  FUN_0011ed38(0x295e90,1);
  FUN_0011ed48(0x295e90,5);
  FUN_0011ed08(0x295e90,2,0);
  if (0 < *(int *)(param_1 + 0x960)) {
    iVar1 = *(int *)(param_1 + 0x964);
    while( true ) {
      pauVar2 = (undefined1 (*) [16])(((iVar1 + iVar3) % 0x1e) * 0x50 + param_1);
      FUN_0011ecd8(0x295e90,*(undefined4 *)
                             (*(int *)(DAT_002859e4 + 0x7c) + (*(int *)(pauVar2[4] + 4) + 0x18) * 4)
                   ,1);
      fVar5 = *(float *)pauVar2[4];
      if (fVar5 < DAT_002c16c4) {
        fStack_b0 = (fVar5 * 120.0) / DAT_002c16c4;
        fVar5 = (fVar5 * *(float *)(pauVar2[4] + 8)) / DAT_002c16c4;
      }
      else {
        fVar4 = (2.0 - fVar5) * DAT_002c16c8;
        fStack_b0 = ((fVar5 - DAT_002c16c4) * 130.0) / DAT_002c16d4 + 120.0;
        fVar5 = fVar4 * (fVar4 * DAT_002c16cc + DAT_002c16d0) * *(float *)(pauVar2[4] + 8);
      }
      *(float *)pauVar2[2] = fVar5;
      auVar7 = _lqc2(pauVar2[1]);
      auVar6 = _qmtc2(fStack_b0 * DAT_002c16d8);
      auVar6 = _vmulbc(auVar7,auVar6);
      auVar6 = _sqc2(auVar6);
      auStack_a0._8_4_ = auVar6._8_4_;
      auStack_a0._12_4_ = auVar6._12_4_;
      uStack_a8 = auStack_a0._8_4_;
      uStack_a4 = auStack_a0._12_4_;
      auVar7 = _lqc2(*pauVar2);
      auVar6 = _lqc2(auVar6);
      auVar6 = _vadd(auVar7,auVar6);
      auStack_a0 = _sqc2(auVar6);
      iVar3 = iVar3 + 1;
      uStack_c0 = auStack_a0._0_4_;
      uStack_bc = auStack_a0._4_4_;
      uStack_b8 = auStack_a0._8_4_;
      uStack_b4 = auStack_a0._12_4_;
      fStack_ac = fStack_b0;
      FUN_0011ed78(0x295e90,&uStack_c0,&fStack_b0,pauVar2 + 3,pauVar2[3] + 8,pauVar2 + 2);
      if (*(int *)(param_1 + 0x960) <= iVar3) break;
      iVar1 = *(int *)(param_1 + 0x964);
    }
  }
  FUN_0011ed28(DAT_002c16dc,0x295e90,0,2);
  FUN_0011ed38(0x295e90,0);
  FUN_0011ed08(0x295e90,0,0);
  FUN_0011ed48(0x295e90,3);
  return;
}

