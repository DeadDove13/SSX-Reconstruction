/* Ghidra pseudocode. PS2 address: 001a0230. Not validated source. */

void FUN_001a0230(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,float *param_7)

{
  int iVar1;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  iVar1 = 2;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  fStack_88 = param_7[4];
  iStack_a0 = (int)(param_7[1] * 128.0);
  iStack_98 = (int)(param_7[3] * 128.0);
  uStack_b0 = 0;
  iStack_9c = (int)(param_7[2] * 128.0);
  uStack_ac = 0;
  iStack_94 = (int)(*param_7 * 128.0);
  uStack_a8 = 0x3f800000;
  uStack_84 = 0x3f800000;
  uStack_80 = 0x3f800000;
  uStack_7c = 0;
  uStack_78 = 0x3f800000;
  uStack_54 = 0x3f800000;
  uStack_50 = 0x3f800000;
  uStack_4c = 0x3f800000;
  uStack_48 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_24 = 0x3f800000;
  uStack_90 = param_1;
  uStack_8c = param_2;
  iStack_70 = iStack_a0;
  iStack_6c = iStack_9c;
  iStack_68 = iStack_98;
  iStack_64 = iStack_94;
  uStack_60 = param_3;
  uStack_5c = param_4;
  fStack_58 = fStack_88;
  iStack_40 = iStack_a0;
  iStack_3c = iStack_9c;
  iStack_38 = iStack_98;
  iStack_34 = iStack_94;
  uStack_30 = param_5;
  uStack_2c = param_6;
  fStack_28 = fStack_88;
  uStack_20 = param_5;
  uStack_1c = param_6;
  fStack_18 = fStack_88;
  FUN_0011ed68(0x295e90,3,&uStack_b0,0);
  return;
}

