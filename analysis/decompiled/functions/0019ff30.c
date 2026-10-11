/* Ghidra pseudocode. PS2 address: 0019ff30. Not validated source. */

void FUN_0019ff30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,float *param_6,float *param_7)

{
  int iVar1;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
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
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  uStack_58 = *(undefined4 *)(param_5 + 0x10);
  iStack_70 = (int)(param_6[1] * 128.0);
  iStack_6c = (int)(param_6[2] * 128.0);
  iStack_68 = (int)(param_6[3] * 128.0);
  uStack_80 = 0;
  iStack_64 = (int)(*param_6 * 128.0);
  uStack_7c = 0;
  uStack_78 = 0x3f800000;
  uStack_54 = 0x3f800000;
  iStack_40 = (int)(param_7[1] * 128.0);
  iStack_3c = (int)(param_7[2] * 128.0);
  iStack_38 = (int)(param_7[3] * 128.0);
  iStack_34 = (int)(*param_7 * 128.0);
  uStack_50 = 0x3f800000;
  uStack_4c = 0x3f800000;
  uStack_48 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_24 = 0x3f800000;
  uStack_60 = param_1;
  uStack_5c = param_2;
  uStack_30 = param_3;
  uStack_2c = param_4;
  uStack_28 = uStack_58;
  uStack_20 = param_3;
  uStack_1c = param_4;
  uStack_18 = uStack_58;
  FUN_001a0390(0x295e90,2,&uStack_80,0);
  return;
}

