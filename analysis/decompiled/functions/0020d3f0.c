/* Ghidra pseudocode. PS2 address: 0020d3f0. Not validated source. */

undefined4
FUN_0020d3f0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_f0 [8];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  float afStack_b0 [4];
  
  lVar3 = FUN_00210128(*(undefined4 *)(param_1 + 0x20),param_2,param_3,param_1 + 0x10,auStack_f0,
                       auStack_e0,afStack_b0);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x24) == 0) {
    uVar1 = 1;
    auVar7 = _lqc2(auStack_e0);
    auVar6 = _qmtc2(afStack_b0[0]);
    auVar6 = _vmulbc(auVar7,auVar6);
    auVar6 = _sqc2(auVar6);
    auStack_c0._8_4_ = auVar6._8_4_;
    auStack_c0._12_4_ = auVar6._12_4_;
    *param_4 = auVar6._0_4_;
    param_4[1] = auVar6._4_4_;
    param_4[2] = auStack_c0._8_4_;
    param_4[3] = auStack_c0._12_4_;
    *param_5 = auStack_f0._0_4_;
    param_5[1] = auStack_f0._4_4_;
    param_5[2] = uStack_e8;
    param_5[3] = uStack_e4;
  }
  else {
    fVar5 = -1.0;
    uVar4 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      iVar2 = *(int *)(param_1 + 0x24);
      do {
        if (((iVar2 >> (uVar4 & 0x1f) ^ 1U) & 1) == 0) {
          lVar3 = FUN_00210128(*(undefined4 *)(param_1 + 0x20),param_2,param_3,param_1 + 0x10,
                               auStack_f0,auStack_e0,afStack_b0);
          if (lVar3 != 0) {
            if (afStack_b0[0] <= fVar5) {
              iVar2 = *(int *)(param_1 + 0x28);
              goto LAB_0020d540;
            }
            auVar7 = _lqc2(auStack_e0);
            auVar6 = _qmtc2(afStack_b0[0]);
            auVar6 = _vmulbc(auVar7,auVar6);
            auStack_c0 = _sqc2(auVar6);
            uStack_d0 = auStack_c0._0_4_;
            uStack_cc = auStack_c0._4_4_;
            uStack_c8 = auStack_c0._8_4_;
            uStack_c4 = auStack_c0._12_4_;
            *param_4 = uStack_d0;
            param_4[1] = uStack_cc;
            param_4[2] = auStack_c0._8_4_;
            param_4[3] = auStack_c0._12_4_;
            *param_5 = auStack_f0._0_4_;
            param_5[1] = auStack_f0._4_4_;
            param_5[2] = uStack_e8;
            param_5[3] = uStack_e4;
            fVar5 = afStack_b0[0];
          }
          iVar2 = *(int *)(param_1 + 0x28);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x28);
        }
LAB_0020d540:
        uVar4 = uVar4 + 1;
        if (iVar2 <= (int)uVar4) break;
        iVar2 = *(int *)(param_1 + 0x24);
      } while( true );
    }
    uVar1 = 1;
    if (fVar5 == -1.0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

