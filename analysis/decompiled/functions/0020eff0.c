/* Ghidra pseudocode. PS2 address: 0020eff0. Not validated source. */

undefined4
FUN_0020eff0(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16],int param_4,
            int param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 (*pauStack_c0) [16];
  
  iVar6 = (int)param_1;
  iVar2 = *(int *)(iVar6 + 0xa0);
  bVar1 = *(byte *)(*(int *)(iVar2 + 0x28) + param_5);
  if (param_4 < *(int *)(iVar2 + 0xc)) {
    if (3 < param_4) {
      return 1;
    }
    if (bVar1 != 0) {
      uVar5 = 0;
      uVar7 = *(undefined4 *)(param_4 * 0xc + *(int *)(iVar2 + 0x20) + 0x10);
      uVar3 = (uint)bVar1;
      pauStack_c0 = param_3;
      do {
        if ((uVar3 & 1) != 0) {
          auVar9 = _lqc2(*(undefined1 (*) [16])(uVar5 * 0x10 + iVar6 + 0x10));
          auVar8 = _qmtc2(uVar7);
          auVar8 = _vmulbc(auVar9,auVar8);
          auVar8 = _sqc2(auVar8);
          auStack_d0._8_4_ = auVar8._8_4_;
          auStack_d0._12_4_ = auVar8._12_4_;
          uStack_e0 = auVar8._0_4_;
          uStack_dc = auVar8._4_4_;
          uStack_d8 = auStack_d0._8_4_;
          uStack_d4 = auStack_d0._12_4_;
          auVar9 = _lqc2(*pauStack_c0);
          auVar8 = _lqc2(auVar8);
          auVar8 = _vadd(auVar9,auVar8);
          auStack_d0 = _sqc2(auVar8);
          uStack_100 = auStack_d0._0_4_;
          uStack_fc = auStack_d0._4_4_;
          uStack_e8 = auStack_d0._8_4_;
          uStack_e4 = auStack_d0._12_4_;
          uStack_f8 = auStack_d0._8_4_;
          uStack_f4 = auStack_d0._12_4_;
          uStack_f0 = uStack_100;
          uStack_ec = uStack_fc;
          lVar4 = FUN_0020f1b0(*(undefined4 *)
                                (param_4 * 0xc + *(int *)(*(int *)(iVar6 + 0xa0) + 0x20)),param_2,
                               &uStack_100,(int)param_2 + 0x90,0,0,param_6,param_7);
          if ((lVar4 != 0) &&
             (lVar4 = FUN_0020eff0(param_1,param_2,&uStack_100,param_4 + 1,
                                   (uVar5 + 1) *
                                   *(int *)(param_4 * 0xc + *(int *)(*(int *)(iVar6 + 0xa0) + 0x20)
                                           + 8) + param_5,param_6,param_7), lVar4 != 0)) {
            return 1;
          }
        }
        uVar5 = uVar5 + 1;
        uVar3 = (int)(uint)bVar1 >> (uVar5 & 0x1f);
        if (7 < (int)uVar5) {
          return 0;
        }
      } while( true );
    }
  }
  return 1;
}

