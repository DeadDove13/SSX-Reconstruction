/* Ghidra pseudocode. PS2 address: 00220610. Not validated source. */

undefined8
FUN_00220610(undefined4 param_1,undefined8 param_2,undefined1 (*param_3) [16],
            undefined1 (*param_4) [16],undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar4 = (undefined4 *)param_2;
  *puVar4 = param_5;
  puVar4[0x10] = &DAT_002bde20;
  uVar1 = *(undefined8 *)*param_3;
  uVar2 = *(undefined4 *)(*param_3 + 8);
  uVar3 = *(undefined4 *)(*param_3 + 0xc);
  puVar4[0x1c] = (int)uVar1;
  puVar4[0x1d] = (int)((ulong)uVar1 >> 0x20);
  puVar4[0x1e] = uVar2;
  puVar4[0x1f] = uVar3;
  puVar4[0x14] = (int)*(undefined8 *)(puVar4 + 0x1c);
  puVar4[0x15] = (int)((ulong)*(undefined8 *)(puVar4 + 0x1c) >> 0x20);
  puVar4[0x16] = puVar4[0x1e];
  puVar4[0x17] = puVar4[0x1f];
  auVar6 = _lqc2(*param_4);
  auVar7 = _lqc2(*param_3);
  auVar6 = _vsub(auVar6,auVar7);
  auVar6 = _sqc2(auVar6);
  uStack_20 = auVar6._0_4_;
  uStack_1c = auVar6._4_4_;
  uStack_18 = auVar6._8_4_;
  uStack_14 = auVar6._12_4_;
  puVar4[0x20] = uStack_20;
  puVar4[0x21] = uStack_1c;
  puVar4[0x22] = uStack_18;
  puVar4[0x23] = uStack_14;
  puVar4[0x18] = (int)*(undefined8 *)(puVar4 + 0x20);
  puVar4[0x19] = (int)((ulong)*(undefined8 *)(puVar4 + 0x20) >> 0x20);
  puVar4[0x1a] = puVar4[0x22];
  puVar4[0x1b] = puVar4[0x23];
  puVar4[0x24] = param_1;
  puVar4[1] = 0;
  fVar5 = *(float *)*param_4;
  if (*(float *)*param_4 < *(float *)*param_3) {
    fVar5 = *(float *)*param_3;
  }
  puVar4[4] = fVar5;
  fVar5 = *(float *)(*param_4 + 4);
  if (*(float *)(*param_4 + 4) < *(float *)(*param_3 + 4)) {
    fVar5 = *(float *)(*param_3 + 4);
  }
  puVar4[5] = fVar5;
  fVar5 = *(float *)(*param_4 + 8);
  if (*(float *)(*param_4 + 8) < *(float *)(*param_3 + 8)) {
    fVar5 = *(float *)(*param_3 + 8);
  }
  puVar4[6] = fVar5;
  puVar4[7] = 0x3f800000;
  fVar5 = *(float *)*param_4;
  if (*(float *)*param_3 < *(float *)*param_4) {
    fVar5 = *(float *)*param_3;
  }
  puVar4[8] = fVar5;
  fVar5 = *(float *)(*param_4 + 4);
  if (*(float *)(*param_3 + 4) < *(float *)(*param_4 + 4)) {
    fVar5 = *(float *)(*param_3 + 4);
  }
  puVar4[9] = fVar5;
  fVar5 = *(float *)(*param_4 + 8);
  if (*(float *)(*param_3 + 8) < *(float *)(*param_4 + 8)) {
    fVar5 = *(float *)(*param_3 + 8);
  }
  puVar4[10] = fVar5;
  puVar4[0xb] = 0x3f800000;
  auVar6 = _lqc2(*(undefined1 (*) [16])(puVar4 + 8));
  auVar7 = _lqc2(*(undefined1 (*) [16])(puVar4 + 4));
  auVar6 = _vadd(auVar6,auVar7);
  auVar6 = _sqc2(auVar6);
  auVar7 = _qmtc2(0x40000000);
  _vdiv(in_vf0,0,auVar7,0);
  auVar6 = _lqc2(auVar6);
  uVar2 = _vwaitq();
  auVar6 = _vmulq(auVar6,uVar2);
  auVar6 = _sqc2(auVar6);
  uStack_10 = auVar6._0_4_;
  uStack_c = auVar6._4_4_;
  uStack_8 = auVar6._8_4_;
  uStack_4 = auVar6._12_4_;
  puVar4[0xc] = uStack_10;
  puVar4[0xd] = uStack_c;
  puVar4[0xe] = uStack_8;
  puVar4[0xf] = uStack_4;
  return param_2;
}

