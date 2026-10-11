/* Ghidra pseudocode. PS2 address: 0019bcf8. Not validated source. */

undefined8 FUN_0019bcf8(float param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined1 auVar1 [12];
  undefined4 *puVar2;
  undefined1 (*pauVar3) [12];
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_40 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = (undefined4 *)param_2;
  auStack_40._12_4_ = 0x3f800000;
  auStack_40._0_12_ = *(undefined1 (*) [12])(param_3 + 0xc);
  if (param_4 != 0) {
    *(undefined4 *)param_4 = 1;
  }
  pauVar3 = *(undefined1 (**) [12])(param_3 + 0x18);
  iVar4 = 0;
  while( true ) {
    if (iVar4 == *(int *)(param_3 + 8)) {
      if (param_4 != 0) {
        *(undefined4 *)param_4 = 0;
      }
      *puVar2 = auStack_40._0_4_;
      puVar2[1] = auStack_40._4_4_;
      puVar2[2] = auStack_40._8_4_;
      puVar2[3] = auStack_40._12_4_;
      return param_2;
    }
    fVar5 = *(float *)pauVar3[1];
    if (param_1 < fVar5) break;
    param_1 = param_1 - fVar5;
    iVar4 = iVar4 + 1;
    auVar1 = *pauVar3;
    pauVar3 = (undefined1 (*) [12])(pauVar3[1] + 4);
    auVar7._12_4_ = 0;
    auVar7._0_12_ = auVar1;
    auVar7 = _lqc2(auVar7);
    auVar6 = _qmtc2(fVar5);
    auVar6 = _vmulbc(auVar7,auVar6);
    auVar6 = _sqc2(auVar6);
    auVar7 = _lqc2(auStack_40);
    auVar6 = _lqc2(auVar6);
    auVar6 = _vadd(auVar7,auVar6);
    auStack_40 = _sqc2(auVar6);
  }
  auVar6._12_4_ = 0;
  auVar6._0_12_ = *pauVar3;
  auVar7 = _lqc2(auVar6);
  auVar6 = _qmtc2(param_1);
  auVar6 = _vmulbc(auVar7,auVar6);
  auVar6 = _sqc2(auVar6);
  auVar7 = _lqc2(auStack_40);
  auVar6 = _lqc2(auVar6);
  auVar6 = _vadd(auVar7,auVar6);
  auVar6 = _sqc2(auVar6);
  uStack_10 = auVar6._0_4_;
  uStack_c = auVar6._4_4_;
  uStack_8 = auVar6._8_4_;
  uStack_4 = auVar6._12_4_;
  *puVar2 = uStack_10;
  puVar2[1] = uStack_c;
  puVar2[2] = uStack_8;
  puVar2[3] = uStack_4;
  return param_2;
}

