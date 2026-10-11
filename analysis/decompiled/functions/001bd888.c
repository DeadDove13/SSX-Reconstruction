/* Ghidra pseudocode. PS2 address: 001bd888. Not validated source. */

void FUN_001bd888(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  *param_1 = *param_3;
  param_1[4] = param_3[1];
  uVar1 = param_3[2];
  param_1[0xc] = 0;
  param_1[8] = uVar1;
  param_1[1] = *param_5;
  param_1[5] = param_5[1];
  uVar1 = param_5[2];
  param_1[0xd] = 0;
  param_1[9] = uVar1;
  param_1[2] = *param_7;
  param_1[6] = param_7[1];
  uVar1 = param_7[2];
  param_1[0xf] = 0x3f800000;
  param_1[10] = uVar1;
  param_1[0xe] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = param_4[1];
  param_1[0x14] = param_6[1];
  param_1[0x18] = param_8[1];
  param_1[0x1c] = param_2[1];
  param_1[0x11] = param_4[2];
  param_1[0x15] = param_6[2];
  param_1[0x19] = param_8[2];
  param_1[0x1d] = param_2[2];
  param_1[0x12] = param_4[3];
  param_1[0x16] = param_6[3];
  param_1[0x1a] = param_8[3];
  param_1[0x1e] = param_2[3];
  param_1[0x13] = *param_4;
  param_1[0x17] = *param_6;
  param_1[0x1b] = *param_8;
  param_1[0x1f] = *param_2;
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
  auVar2 = _qmtc2(0x43000000);
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x14));
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x18));
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1c));
  auVar3 = _vmulbc(auVar3,auVar2);
  auVar4 = _vmulbc(auVar4,auVar2);
  auVar5 = _vmulbc(auVar5,auVar2);
  auVar6 = _vmulbc(auVar6,auVar2);
  auVar2 = _sqc2(auVar3);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar2;
  auVar2 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0x14) = auVar2;
  auVar2 = _sqc2(auVar5);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar2;
  auVar2 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0x1c) = auVar2;
  return;
}

